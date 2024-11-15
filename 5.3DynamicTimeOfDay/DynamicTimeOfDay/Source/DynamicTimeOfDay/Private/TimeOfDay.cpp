// Copyright - Ambroży Farski 2023


#include "TimeOfDay.h"
#include "Components/SkyLightComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "CurvesUtilityLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"


// Sets default values
ATimeOfDay::ATimeOfDay()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	Sun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun"));
	Sun->SetupAttachment(Root);
	Moon = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon"));
	Moon->SetupAttachment(Root);
	Fog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("Fog"));
	Fog->SetupAttachment(Root);
	SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
	SkyLight->SetupAttachment(Root);
	SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
	SkyAtmosphere->SetupAttachment(Root);
	VolumetricClouds = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricClouds"));
	VolumetricClouds->SetupAttachment(Root);
	MoonMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MoonMesh"));
	MoonMesh->SetupAttachment(Root);
	SkySphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SkySphere"));
	SkySphere->SetupAttachment(Root);
	//Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
	//---------------------------------------------------------------------------------------------------





}

// Called when the game starts or when spawned
void ATimeOfDay::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATimeOfDay::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATimeOfDay::OnConstruction(const FTransform& Transform)
{

	Super::OnConstruction(Transform);
	/*
	RootComponent->SetMobility(EComponentMobility::Movable);
	Sun->SetMobility(EComponentMobility::Movable);
	Moon->SetMobility(EComponentMobility::Movable);
	SkyLight->SetMobility(EComponentMobility::Movable);
	*/
	ConstructorSun();
	ConstructorSkyLight();
	ConstructorFog();
	ConstructorClouds();
	ConstructorSkyAtmosphere();
	ConstructorMoon();
	ConstructorSkyBox();
	BlendTimeOfDay();


}

void ATimeOfDay::BlendTimeOfDay()
{
	
	BlendSun();
	BlendSkyLight();
	BlendFog();
	BlendClouds();
	BlendMoon();
	BlendSkyBox();
	BlendNightEmissive();
}


//======================================================================================================
//==============================================Constructors============================================
//======================================================================================================

//==============================================Constructor Sun============================================
void ATimeOfDay::ConstructorSun()
{
	Sun->SetLightSourceAngle(SunStaticSettings.SourceAngle);
	Sun->SetUseTemperature(SunStaticSettings.UseTemperature);
	Sun->SetIndirectLightingIntensity(SunStaticSettings.IndirectLightingIntensity);
	Sun->SetVolumetricScatteringIntensity(SunStaticSettings.VolumetricScatteringIntensity);
	Sun->SetCastShadows(SunStaticSettings.CastShadows);
	Sun->SetEnableLightShaftOcclusion(SunStaticSettings.LightShaftOcclusion);
	Sun->SetOcclusionMaskDarkness(SunStaticSettings.OcclusionMaskDarkness);
	Sun->SetEnableLightShaftBloom(SunStaticSettings.LightShaftBloom);
	Sun->SetBloomThreshold(SunStaticSettings.BloomThreshold);
	Sun->SetBloomMaxBrightness(SunStaticSettings.BloomMaxBrightness);
	Sun->SetBloomTint(SunStaticSettings.BloomTint);
	Sun->ContactShadowLength = SunStaticSettings.ContactShadowLenght;	
	if (SunDynamicSettings.UseSunColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(SunDynamicSettings.SunColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(SunDynamicSettings.SunColorPicker));
	}
	else
	{
		SunDynamicSettings.SunColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SunDynamicSettings.SunColor, BaseSetup.Hour));

	}
}



//==============================================Constructor SkyLight============================================
void ATimeOfDay::ConstructorSkyLight()
{
	if (SkyLightDynamicSettings.UseSkyLightColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(SkyLightDynamicSettings.SkyLightColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(SkyLightDynamicSettings.SkyLightColorPicker));
	}
	else
	{
		SkyLightDynamicSettings.SkyLightColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SkyLightDynamicSettings.SkyLightColor, BaseSetup.Hour));

	}

	SkyLight->bRealTimeCapture = SkyLightStaticSettings.RealTimeCapture;

	if (SkyLightStaticSettings.RealTimeCapture != true)
	{
		switch (SkyLightStaticSettings.SourceType)
		{
		case ECaptureSourceType::SLSCapturedScene:
			SkyLight->SourceType = ESkyLightSourceType::SLS_CapturedScene;
			SkyLight->RecaptureSky();
		break;
		case ECaptureSourceType::SLSSpecifiedCubemap:
			SkyLight->SourceType = ESkyLightSourceType::SLS_SpecifiedCubemap;
			SkyLight->SetCubemap(SkyLightStaticSettings.Cubemap);
			SkyLight->RecaptureSky();
			break;
		}
	}
}


//==============================================Constructor Fog============================================
void ATimeOfDay::ConstructorFog()
{
	Fog->SetVisibility(FogStaticSettings.FogVisibility);
	Fog->SetFogHeightFalloff(FogStaticSettings.FogHeightFallof);
	Fog->SetFogMaxOpacity(FogStaticSettings.FogMaxOpacity);
	Fog->SetStartDistance(FogStaticSettings.StartDistance);
	Fog->SetFogCutoffDistance(FogStaticSettings.CutoffDistance);
	Fog->SetDirectionalInscatteringExponent(FogStaticSettings.DirectionalInscatteringExponent);
	Fog->SetDirectionalInscatteringStartDistance(FogStaticSettings.DirectionalInscatteringStartDistance);
	Fog->SetDirectionalInscatteringColor(FogStaticSettings.DirectionalInscatteringColor);
	Fog->SetVolumetricFog(FogStaticSettings.VolumetricFog);
	Fog->SetVolumetricFogScatteringDistribution(FogStaticSettings.VolumetricFogScatteringDistribution);
	Fog->SetVolumetricFogExtinctionScale(FogStaticSettings.VolumetricFogExtinctionScale);

	if (FogDynamicSettings.UseFogColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(FogDynamicSettings.FogInscatteringColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(FogDynamicSettings.FogColorPicker));
	}
	else
	{
		FogDynamicSettings.FogColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogInscatteringColor, BaseSetup.Hour));
	}

	if (FogDynamicSettings.UseFogVolumetricColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(FogDynamicSettings.FogVolumetricColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(FogDynamicSettings.FogVolumetricColorPicker));
	}
	else
	{
		FogDynamicSettings.FogVolumetricColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogVolumetricColor, BaseSetup.Hour));
	}

	if (FogDynamicSettings.UseFogEmissiveColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(FogDynamicSettings.FogEmissiveColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(FogDynamicSettings.FogEmissiveColorPicker));
	}
	else
	{
		FogDynamicSettings.FogEmissiveColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogEmissiveColor, BaseSetup.Hour));
	}

	
}



//==============================================Constructor Volumetric Clouds============================================

void ATimeOfDay::ConstructorClouds()
{
	VolumetricClouds->SetVisibility(CloudsStaticSettings.UseVolumetricClouds);
	VolumetricClouds->SetLayerBottomAltitude(CloudsStaticSettings.LayerBottomAltitude);
	VolumetricClouds->SetLayerHeight(CloudsStaticSettings.LayerHeight);
	VolumetricClouds->SetTracingStartMaxDistance(CloudsStaticSettings.TracingStartMaxDistance);
	VolumetricClouds->SetTracingMaxDistance(CloudsStaticSettings.TracingMaxDistance);
	VolumetricClouds->SetPlanetRadius(CloudsStaticSettings.PlanetRadius);
	VolumetricClouds->SetGroundAlbedo(CloudsStaticSettings.GroundAlbedo);

	if (IsValid(CloudsStaticSettings.Material) && IsValid(CloudsDynamicMaterial) != true)
	{
		CloudsDynamicMaterial = UMaterialInstanceDynamic::Create(CloudsStaticSettings.Material, this);
		VolumetricClouds->SetMaterial(CloudsDynamicMaterial);
	}

	if (IsValid(CloudsDynamicMaterial))
	{
		CloudsDynamicMaterial->SetScalarParameterValue("GameplayWindOffset", 0);
		if (IsValid(CloudsStaticSettings.CloudTexture))
		{
			CloudsDynamicMaterial->SetTextureParameterValue("CloudMask", CloudsStaticSettings.CloudTexture);
		}

		CloudsDynamicMaterial->SetScalarParameterValue("PhaseG", VolumetricAdvanceOutput.PhaseG);
		CloudsDynamicMaterial->SetScalarParameterValue("PhaseG2", VolumetricAdvanceOutput.PhaseG2);
		CloudsDynamicMaterial->SetScalarParameterValue("Phase Blend", VolumetricAdvanceOutput.PhaseBlend);
		CloudsDynamicMaterial->SetScalarParameterValue("Multi Scattering Contribution", VolumetricAdvanceOutput.MultiScatteringContribution);
		CloudsDynamicMaterial->SetScalarParameterValue("Multi Scattering Occlusion", VolumetricAdvanceOutput.MultiScatteringOcclusion);
		CloudsDynamicMaterial->SetScalarParameterValue("Multi Scattering Eccentricity", VolumetricAdvanceOutput.MultiScatteringEccentricity);
		
		CloudsDynamicMaterial->SetScalarParameterValue("CloudsNoiseScale", ErosionNoise.CloudsNoiseScale);
		CloudsDynamicMaterial->SetScalarParameterValue("CloudsNoiseIntensity", ErosionNoise.CloudsNoiseIntensity);
		CloudsDynamicMaterial->SetScalarParameterValue("CloudsErosionScale", ErosionNoise.CloudsErosionScale);
		CloudsDynamicMaterial->SetScalarParameterValue("CloudsErosionIntensity", ErosionNoise.CloudsErosionIntensity);
		CloudsDynamicMaterial->SetScalarParameterValue("NoiseHeight", ErosionNoise.NoiseHeight);
	}

	if (CloudsDynamicSettings.UseCloudsColorPicker)
	{
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(CloudsDynamicSettings.CloudsColorPicker));
	}
	else
	{
		CloudsDynamicSettings.CloudsColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsColor, BaseSetup.Hour));
	}
}



//==============================================Constructor Sky Atmosphere============================================

void ATimeOfDay::ConstructorSkyAtmosphere()
{
	if (UseSkyAtmosphere)
	{
		SkyAtmosphere->SetVisibility(true);
	}
	else
	{
		SkyAtmosphere->SetVisibility(false);
	}
	SkyAtmosphere->SetAtmosphereHeight(Atmosphere.AtmosphereHeight);
	SkyAtmosphere->SetMultiScatteringFactor(Atmosphere.MultiScattering);

	SkyAtmosphere->SetRayleighScatteringScale(Rayleigh.RayleighScatteringScale);
	SkyAtmosphere->SetRayleighScattering(Rayleigh.RayleighScattering);
	SkyAtmosphere->SetRayleighExponentialDistribution(Rayleigh.RayleighExponentialDistribution);

	SkyAtmosphere->SetMieScatteringScale(Mie.MieScatteringScale);
	SkyAtmosphere->SetMieScattering(Mie.MieScattering);
	SkyAtmosphere->SetMieAbsorptionScale(Mie.MieAbsorptionsScale);
	SkyAtmosphere->SetMieAbsorption(Mie.MieAbsorption);
	SkyAtmosphere->SetMieAnisotropy(Mie.MieAnisotropy);
	SkyAtmosphere->SetMieExponentialDistribution(Mie.MieExponentialDistribution);

	SkyAtmosphere->OtherAbsorptionScale = Absorption.AbsorptionScale;
	SkyAtmosphere->OtherAbsorption = Absorption.Absorption;

	SkyAtmosphere->SetSkyLuminanceFactor(ArtDirection.SkyLuminanceFactor);
	SkyAtmosphere->SetAerialPespectiveViewDistanceScale(ArtDirection.AerialPespectiveViewDistanceScale);
	SkyAtmosphere->SetHeightFogContribution(ArtDirection.HeightFogContribution);

}




//==============================================Constructor Moon============================================

void ATimeOfDay::ConstructorMoon()
{
	//==============================================Moon Light============================================

	if (MoonStaticSettings.UseMoon)
	{
		Moon->SetLightSourceAngle(MoonStaticSettings.SourceAngle);
		Moon->SetUseTemperature(MoonStaticSettings.UseTemperature);
		Moon->SetIndirectLightingIntensity(MoonStaticSettings.IndirectLightingIntensity);
		Moon->SetVolumetricScatteringIntensity(MoonStaticSettings.VolumetricScatteringIntensity);
		Moon->SetCastShadows(MoonStaticSettings.CastShadows);
		Moon->SetEnableLightShaftOcclusion(MoonStaticSettings.LightShaftOcclusion);
		Moon->SetOcclusionMaskDarkness(MoonStaticSettings.OcclusionDepthDarkness);
		Moon->SetEnableLightShaftBloom(MoonStaticSettings.LightShaftBloom);
		Moon->SetBloomThreshold(MoonStaticSettings.BloomThreshold);
		Moon->SetBloomMaxBrightness(MoonStaticSettings.BloomMaxBrightness);
		Moon->SetBloomTint(MoonStaticSettings.BloomTint);
		Moon->ContactShadowLength = MoonStaticSettings.ContactShadowLenght;

		if (MoonDynamicSettings.UseMoonColorPicker)
		{
			UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(MoonDynamicSettings.MoonColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(MoonDynamicSettings.MoonColorPicker));
		}
		else
		{
			MoonDynamicSettings.MoonColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonColor, BaseSetup.Hour));

		}
		Moon->SetVisibility(true);



		Moon->SetWorldRotation(UKismetMathLibrary::MakeRotator(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).X, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Y, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Z));

	}
	else
	{
		Moon->SetVisibility(false);
	}


	//==============================================Moon Mesh============================================


	if (MoonStaticSettings.UseMoonMesh)
	{
		if (IsValid(MoonStaticSettings.MoonStaticMesh))
		{
			MoonMesh->SetStaticMesh(MoonStaticSettings.MoonStaticMesh);
		}
		MoonMesh->SetVisibility(true);
		
		if (MoonDynamicSettings.UseMoonDiscColorPicker)
		{
			UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(MoonDynamicSettings.MoonDiscColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(MoonDynamicSettings.MoonDiscColorPicker));
		}
		else
		{
			MoonDynamicSettings.MoonDiscColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonDiscColor, BaseSetup.Hour));

		}


		FVector currentMoonRot = UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour);
		const FVector vecToMultiply = FVector(-1, -1, -1);
		FVector moonAxisX;
		FVector moonAxisY;
		FVector moonAxisZ;
		UKismetMathLibrary::BreakRotIntoAxes(Moon->GetComponentRotation(), moonAxisX, moonAxisY, moonAxisZ);
		moonAxisZ = (UKismetMathLibrary::Multiply_VectorVector(moonAxisZ, vecToMultiply));
		FRotator moonMeshRot = UKismetMathLibrary::MakeRotationFromAxes(moonAxisZ, moonAxisY, moonAxisX); 
		FVector moonMeshLoc = UKismetMathLibrary::Multiply_VectorFloat(MoonMesh->GetUpVector(), (MoonStaticSettings.MoonDistance * -1));
		MoonMesh->SetWorldLocationAndRotation(moonMeshLoc, moonMeshRot);
		MoonMesh->SetWorldScale3D(UKismetMathLibrary::MakeVector(MoonStaticSettings.MoonSize*500, MoonStaticSettings.MoonSize * 500, MoonStaticSettings.MoonSize * 500));
		MoonMesh->SetCastShadow(false);

		if (IsValid(MoonStaticSettings.MoonMaterial) && IsValid(MoonDynamicMaterial) != true)
		{
			MoonDynamicMaterial = UMaterialInstanceDynamic::Create(MoonStaticSettings.MoonMaterial, this);
			MoonMesh->SetMaterial(0, MoonDynamicMaterial);
		}
	}
	else
	{
		MoonMesh->SetVisibility(false);
	}
}


void ATimeOfDay::ConstructorSkyBox()
{
	if (SkyboxStaticSettings.UseSkybox)
	{
		SkySphere->SetVisibility(true);		
		
		SkySphere->SetRelativeScale3D(UKismetMathLibrary::MakeVector(SkyboxStaticSettings.SkyboxScale, SkyboxStaticSettings.SkyboxScale, SkyboxStaticSettings.SkyboxScale));

		if (SkyboxCloudsDynamicSettings.UseSkyboxCloudsColorPicker)
		{
			UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(SkyboxCloudsDynamicSettings.SkyboxCloudsColorPicker));
		}
		else
		{
			SkyboxCloudsDynamicSettings.SkyboxCloudsColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsColor, BaseSetup.Hour));
		}

		if (StarsDynamicSettings.UseStarsColorPicker)
		{
			UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour, UKismetMathLibrary::Conv_LinearColorToVector(StarsDynamicSettings.StarsColorPicker));
		}
		else
		{
			StarsDynamicSettings.StarsColorPicker = FLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour));
		}


		//Material Setup
		if (IsValid(SkyboxStaticSettings.CloudsFogging) && IsValid(SkyboxCloudsFogging) != true)
		{
			SkyboxCloudsFogging = UMaterialInstanceDynamic::Create(SkyboxStaticSettings.CloudsFogging, this);
		}
		if (IsValid(SkyboxStaticSettings.NoCloudsFogging) && IsValid(SkyboxNoCloudsFogging) != true)
		{
			SkyboxNoCloudsFogging = UMaterialInstanceDynamic::Create(SkyboxStaticSettings.NoCloudsFogging, this);
		}
		if (IsValid(SkyboxStaticSettings.CloudsNoFogging) && IsValid(SkyboxCloudsNoFogging) != true)
		{
			SkyboxCloudsNoFogging = UMaterialInstanceDynamic::Create(SkyboxStaticSettings.CloudsNoFogging, this);
		}
		if (IsValid(SkyboxStaticSettings.NoClouds) && IsValid(SkyboxNoClouds) != true)
		{
			SkyboxNoClouds = UMaterialInstanceDynamic::Create(SkyboxStaticSettings.NoClouds, this);
		}

		if (CloudsStaticSettings.UseVolumetricClouds)
		{
			if (SkyboxStaticSettings.UseClouds)
			{
				if (IsValid(SkyboxCloudsFogging))
				{
					SkySphere->SetMaterial(0, SkyboxCloudsFogging);

					SetDynamicMaterialTexture(SkyboxCloudsFogging, "CloudsLayer1", SkyboxStaticSettings.Layer1);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer1NoisePower1", SkyboxStaticSettings.Layer1Power1);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer1NoisePower2", SkyboxStaticSettings.Layer1Power2);

					SetDynamicMaterialTexture(SkyboxCloudsFogging, "CloudsLayer2", SkyboxStaticSettings.Layer2);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer2NoisePower1", SkyboxStaticSettings.Layer2Power1);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer2NoisePower2", SkyboxStaticSettings.Layer2Power2);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer2WindMultiplier", SkyboxStaticSettings.Layer2WindMultiplier);

					SetDynamicMaterialTexture(SkyboxCloudsFogging, "CloudsLayer3", SkyboxStaticSettings.Layer3);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer3NoisePower1", SkyboxStaticSettings.Layer3Power1);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer3NoisePower2", SkyboxStaticSettings.Layer3Power2);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer3WindMultiplier", SkyboxStaticSettings.Layer3WindMultiplier);

					SetDynamicMaterialTexture(SkyboxCloudsFogging, "Noise", SkyboxStaticSettings.NoiseTexture);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "CloudNoiseTiling", SkyboxStaticSettings.CloudNoiseTiling);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "NoiseWindMultiplier", SkyboxStaticSettings.NoiseWindMultiplier);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "NoiseIntensity", SkyboxStaticSettings.NoiseIntenisty);

					SetDynamicMaterialTexture(SkyboxCloudsFogging, "StarsTexture", SkyboxStaticSettings.StarsTexture);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "TilingX", SkyboxStaticSettings.StarsTilingX);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "TilingY", SkyboxStaticSettings.StarsTilingY);
				}
			}
			else
			{
				if (IsValid(SkyboxNoCloudsFogging))
				{
					SkySphere->SetMaterial(0, SkyboxNoCloudsFogging);

					SetDynamicMaterialTexture(SkyboxNoCloudsFogging, "StarsTexture", SkyboxStaticSettings.StarsTexture);
					SetDynamicMaterialFloat(SkyboxNoCloudsFogging, "TilingX", SkyboxStaticSettings.StarsTilingX);
					SetDynamicMaterialFloat(SkyboxNoCloudsFogging, "TilingY", SkyboxStaticSettings.StarsTilingY);
				}
			}
		}
		else
		{
			if (SkyboxStaticSettings.UseClouds)
			{
				if (IsValid(SkyboxCloudsNoFogging))
				{
					SkySphere->SetMaterial(0, SkyboxCloudsNoFogging);

					SetDynamicMaterialTexture(SkyboxCloudsNoFogging, "CloudsLayer1", SkyboxStaticSettings.Layer1);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer1NoisePower1", SkyboxStaticSettings.Layer1Power1);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer1NoisePower2", SkyboxStaticSettings.Layer1Power2);

					SetDynamicMaterialTexture(SkyboxCloudsNoFogging, "CloudsLayer2", SkyboxStaticSettings.Layer2);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer2NoisePower1", SkyboxStaticSettings.Layer2Power1);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer2NoisePower2", SkyboxStaticSettings.Layer2Power2);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer2WindMultiplier", SkyboxStaticSettings.Layer2WindMultiplier);

					SetDynamicMaterialTexture(SkyboxCloudsNoFogging, "CloudsLayer3", SkyboxStaticSettings.Layer3);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer3NoisePower1", SkyboxStaticSettings.Layer3Power1);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer3NoisePower2", SkyboxStaticSettings.Layer3Power2);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer3WindMultiplier", SkyboxStaticSettings.Layer3WindMultiplier);

					SetDynamicMaterialTexture(SkyboxCloudsNoFogging, "Noise", SkyboxStaticSettings.NoiseTexture);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "CloudNoiseTiling", SkyboxStaticSettings.CloudNoiseTiling);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "NoiseWindMultiplier", SkyboxStaticSettings.NoiseWindMultiplier);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "NoiseIntensity", SkyboxStaticSettings.NoiseIntenisty);

					SetDynamicMaterialTexture(SkyboxCloudsNoFogging, "StarsTexture", SkyboxStaticSettings.StarsTexture);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "TilingX", SkyboxStaticSettings.StarsTilingX);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "TilingY", SkyboxStaticSettings.StarsTilingY);
				}
			}
			else
			{
				if (IsValid(SkyboxNoClouds))
				{
					SkySphere->SetMaterial(0, SkyboxNoClouds);

					SetDynamicMaterialTexture(SkyboxNoClouds, "StarsTexture", SkyboxStaticSettings.StarsTexture);
					SetDynamicMaterialFloat(SkyboxNoClouds, "TilingX", SkyboxStaticSettings.StarsTilingX);
					SetDynamicMaterialFloat(SkyboxNoClouds, "TilingY", SkyboxStaticSettings.StarsTilingY);
				}
			}
		}


		
		
	}
	else
	{
		SkySphere->SetVisibility(false);
	}
}




//======================================================================================================
//==============================================Constructors============================================
//======================================================================================================







void ATimeOfDay::TurnOffColorPickers()
{
	SunDynamicSettings.UseSunColorPicker = false;

	SkyLightDynamicSettings.UseSkyLightColorPicker = false;

	FogDynamicSettings.UseFogColorPicker = false;
	FogDynamicSettings.UseFogVolumetricColorPicker = false;
	FogDynamicSettings.UseFogEmissiveColorPicker = false;

	CloudsDynamicSettings.UseCloudsColorPicker = false;

	MoonDynamicSettings.UseMoonColorPicker = false;
	MoonDynamicSettings.UseMoonDiscColorPicker = false;

	StarsDynamicSettings.UseStarsColorPicker = false;
	SkyboxCloudsDynamicSettings.UseSkyboxCloudsColorPicker = false;
}






//======================================================================================================
//==============================================Blends==================================================
//======================================================================================================



void ATimeOfDay::BlendSun()
{
	Sun->SetIntensity(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SunDynamicSettings.SunIntensity, BaseSetup.Hour));
	Sun->SetLightColor(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SunDynamicSettings.SunColor, BaseSetup.Hour)));
	Sun->SetWorldRotation(UKismetMathLibrary::MakeRotator(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SunDynamicSettings.SunRotation, BaseSetup.Hour).X, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SunDynamicSettings.SunRotation, BaseSetup.Hour).Y, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SunDynamicSettings.SunRotation, BaseSetup.Hour).Z));
	if (SunStaticSettings.UseTemperature)
	{
		Sun->SetTemperature(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SunDynamicSettings.SunTemperature, BaseSetup.Hour));
	}

	if (SunStaticSettings.LightShaftBloom)
	{
		Sun->SetBloomScale(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SunDynamicSettings.SunBloomScale, BaseSetup.Hour));
	}
}


void ATimeOfDay::BlendSkyLight()
{
	SkyLight->SetIntensity(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyLightDynamicSettings.SkyLightIntensity, BaseSetup.Hour));
	SkyLight->SetLightColor(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SkyLightDynamicSettings.SkyLightColor, BaseSetup.Hour)));
}


void ATimeOfDay::BlendFog()
{
	Fog->SetFogDensity(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(FogDynamicSettings.FogDensity, BaseSetup.Hour));
	Fog->SetFogInscatteringColor(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogInscatteringColor, BaseSetup.Hour)));
	Fog->SetVolumetricFogAlbedo(UKismetMathLibrary::Conv_LinearColorToColor(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogVolumetricColor, BaseSetup.Hour))));
	Fog->SetVolumetricFogEmissive(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FogDynamicSettings.FogEmissiveColor, BaseSetup.Hour)));
}



void ATimeOfDay::BlendClouds()
{
	if (IsValid(CloudsDynamicMaterial))
	{
		CloudsDynamicMaterial->SetVectorParameterValue("Color", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsColor, BaseSetup.Hour)));
		CloudsDynamicMaterial->SetScalarParameterValue("Mask Scale", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(CloudsDynamicSettings.CloudsMaskScale, BaseSetup.Hour));
		CloudsDynamicMaterial->SetScalarParameterValue("Mask Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(CloudsDynamicSettings.CloudsMaskIntensity, BaseSetup.Hour));
		CloudsDynamicMaterial->SetScalarParameterValue("Cloud Bias", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(CloudsDynamicSettings.CloudsBias, BaseSetup.Hour));
		CloudsDynamicMaterial->SetScalarParameterValue("Cloud Density", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(CloudsDynamicSettings.CloudsDensity, BaseSetup.Hour));
		CloudsDynamicMaterial->SetScalarParameterValue("Cloud Feather", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(CloudsDynamicSettings.CloudsFeather, BaseSetup.Hour));

		if (WindSpeedOffset)
		{
			float xa = 0;
			float xb = 0;
			float ya = 0;
			float yb = 0;
			
			xa = ((UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).X / 100) * (GetWorld()->GetDeltaSeconds())) + X;
			xb = UKismetMathLibrary::FFloor(((UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).X / 100) * (GetWorld()->GetDeltaSeconds())) + X);
			X = xa - xb;

			ya = ((UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).Y / 100) * (GetWorld()->GetDeltaSeconds())) + X;
			yb = UKismetMathLibrary::FFloor(((UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).Y / 100) * (GetWorld()->GetDeltaSeconds())) + X);
			Y = ya - yb;


			CloudsDynamicMaterial->SetScalarParameterValue("Wind Speed X", X);
			CloudsDynamicMaterial->SetScalarParameterValue("Wind Speed Y", Y);
		}
		else
		{
			CloudsDynamicMaterial->SetScalarParameterValue("Wind Speed X", UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).X/100);
			CloudsDynamicMaterial->SetScalarParameterValue("Wind Speed Y", UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(CloudsDynamicSettings.CloudsWindSpeed, BaseSetup.Hour).Y/100);
		}
	}
}


void ATimeOfDay::BlendMoon()
{
	if (MoonStaticSettings.UseMoon)
	{
		Moon->SetVisibility(true);
		Moon->SetIntensity(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(MoonDynamicSettings.MoonIntensity, BaseSetup.Hour));
		Moon->SetLightColor(UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonColor, BaseSetup.Hour)));
		Moon->SetWorldRotation(UKismetMathLibrary::MakeRotator(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).X, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Y, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Z));
		if (MoonStaticSettings.UseTemperature)
		{
			Moon->SetTemperature(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(MoonDynamicSettings.MoonTemperature, BaseSetup.Hour));
		}

		if (MoonStaticSettings.LightShaftBloom)
		{
			Moon->SetBloomScale(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(MoonDynamicSettings.MoonBloomScale, BaseSetup.Hour));
		}

		BlendMoonMesh();
	}
	else
	{
		Moon->SetVisibility(false);
		BlendMoonMesh();
	}
}

void ATimeOfDay::BlendMoonMesh()
{
	if (MoonStaticSettings.UseMoonMesh)
	{
		MoonMesh->SetVisibility(true);

		if (IsValid(MoonDynamicMaterial))
		{
			MoonDynamicMaterial->SetVectorParameterValue("Color", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonDiscColor, BaseSetup.Hour)));
			MoonDynamicMaterial->SetScalarParameterValue("MoonBrightness", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(MoonDynamicSettings.MoonDiscBrightness, BaseSetup.Hour));
			MoonDynamicMaterial->SetScalarParameterValue("MoonOpacity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(MoonDynamicSettings.MoonDiscOpacity, BaseSetup.Hour));
		}
		if (MoonStaticSettings.UseMoon != false)
		{
			Moon->SetWorldRotation(UKismetMathLibrary::MakeRotator(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).X, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Y, UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour).Z));
		}
		/*
		FVector currentMoonRot = UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour);
		const FVector vecToMultiply = FVector(-1, -1, -1);
		FRotator moonMeshRot = UKismetMathLibrary::MakeRotationFromAxes(UKismetMathLibrary::Multiply_VectorVector(UKismetMathLibrary::BreakRotIntoAxes(Moon->GetComponentRotation()).Z, vecToMultiply), UKismetMathLibrary::BreakRotIntoAxes(Moon->GetComponentRotation()).Y, UKismetMathLibrary::BreakRotIntoAxes(Moon->GetComponentRotation()).X);
		FVector moonMeshLoc = UKismetMathLibrary::Multiply_VectorFloat(MoonMesh->GetUpVector(), (MoonStaticSettings.MoonDistance * -1));
		MoonMesh->SetWorldLocationAndRotation(moonMeshLoc, moonMeshRot);
		*/

		FVector currentMoonRot = UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(MoonDynamicSettings.MoonRotation, BaseSetup.Hour);
		const FVector vecToMultiply = FVector(-1, -1, -1);
		FVector moonAxisX;
		FVector moonAxisY;
		FVector moonAxisZ;
		UKismetMathLibrary::BreakRotIntoAxes(Moon->GetComponentRotation(), moonAxisX, moonAxisY, moonAxisZ);
		moonAxisZ = (UKismetMathLibrary::Multiply_VectorVector(moonAxisZ, vecToMultiply));
		FRotator moonMeshRot = UKismetMathLibrary::MakeRotationFromAxes(moonAxisZ, moonAxisY, moonAxisX);
		FVector moonMeshLoc = UKismetMathLibrary::Multiply_VectorFloat(MoonMesh->GetUpVector(), (MoonStaticSettings.MoonDistance * -1));
		MoonMesh->SetWorldLocationAndRotation(moonMeshLoc, moonMeshRot);
		MoonMesh->SetWorldScale3D(UKismetMathLibrary::MakeVector(MoonStaticSettings.MoonSize * 500, MoonStaticSettings.MoonSize * 500, MoonStaticSettings.MoonSize * 500));
	}
}



void ATimeOfDay::BlendSkyBox()
{
	if (SkyboxStaticSettings.UseSkybox)
	{
		if (CloudsStaticSettings.UseVolumetricClouds)
		{
			if (SkyboxStaticSettings.UseClouds)
			{
				SetDynamicMaterialFloat(SkyboxCloudsFogging, "Brightness", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsBrightness, BaseSetup.Hour));
				SetDynamicMaterialColor(SkyboxCloudsFogging, "StarsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour)));
				SetDynamicMaterialFloat(SkyboxCloudsFogging, "StarsOpacity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsOpacity, BaseSetup.Hour));
				
				SetDynamicMaterialColor(SkyboxCloudsFogging, "CloudsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsColor, BaseSetup.Hour)));

				SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer1Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer1Intensity, BaseSetup.Hour));
				SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer2Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer2Intensity, BaseSetup.Hour));
				SetDynamicMaterialFloat(SkyboxCloudsFogging, "Layer3Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer3Intensity, BaseSetup.Hour));

				if (WindSpeedOffset)
				{
					float z = 0;

					z = ((UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsWindSpeed, BaseSetup.Hour) / 1000) * (GetWorld()->GetDeltaSeconds())) + SkyboxWindSpeed;
					SkyboxWindSpeed = z - UKismetMathLibrary::FFloor(z);
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "WindSpeed", SkyboxWindSpeed);
				}
				else
				{
					SkyboxWindSpeed = UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsWindSpeed, BaseSetup.Hour) / 1000;
					SetDynamicMaterialFloat(SkyboxCloudsFogging, "WindSpeed", SkyboxWindSpeed);
				}
			}
			else
			{
				SetDynamicMaterialFloat(SkyboxNoCloudsFogging, "Brightness", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsBrightness, BaseSetup.Hour));
				SetDynamicMaterialColor(SkyboxNoCloudsFogging, "StarsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour)));
				SetDynamicMaterialFloat(SkyboxNoCloudsFogging, "StarsOpacity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsOpacity, BaseSetup.Hour));

			}
		}
		else
		{
			if (SkyboxStaticSettings.UseClouds)
			{
				SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Brightness", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsBrightness, BaseSetup.Hour));
				SetDynamicMaterialColor(SkyboxCloudsNoFogging, "StarsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour)));
				SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "StarsOpacity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsOpacity, BaseSetup.Hour));

				SetDynamicMaterialColor(SkyboxCloudsNoFogging, "CloudsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsColor, BaseSetup.Hour)));

				SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer1Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer1Intensity, BaseSetup.Hour));
				SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer2Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer2Intensity, BaseSetup.Hour));
				SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "Layer3Intensity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.Layer3Intensity, BaseSetup.Hour));

				if (WindSpeedOffset)
				{
					float z = 0;

					z = ((UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsWindSpeed, BaseSetup.Hour) / 1000) * (GetWorld()->GetDeltaSeconds())) + SkyboxWindSpeed;
					SkyboxWindSpeed = z - UKismetMathLibrary::FFloor(z);
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "WindSpeed", SkyboxWindSpeed);
				}
				else
				{
					SkyboxWindSpeed = UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(SkyboxCloudsDynamicSettings.SkyboxCloudsWindSpeed, BaseSetup.Hour) / 1000;
					SetDynamicMaterialFloat(SkyboxCloudsNoFogging, "WindSpeed", SkyboxWindSpeed);
				}
			}
			else
			{

				SetDynamicMaterialFloat(SkyboxNoClouds, "Brightness", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsBrightness, BaseSetup.Hour));
				SetDynamicMaterialColor(SkyboxNoClouds, "StarsColor", UKismetMathLibrary::Conv_VectorToLinearColor(UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(StarsDynamicSettings.StarsColor, BaseSetup.Hour)));
				SetDynamicMaterialFloat(SkyboxNoClouds, "StarsOpacity", UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(StarsDynamicSettings.StarsOpacity, BaseSetup.Hour));

			}
		}
	}
}

void ATimeOfDay::BlendNightEmissive()
{
	if (IsValid(NightEmissive.MPC_TimeOfDay))
	{
		UKismetMaterialLibrary::SetScalarParameterValue(GetWorld(), NightEmissive.MPC_TimeOfDay, "NightEmissive", UKismetMathLibrary::FClamp(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(NightEmissive.NightEmissiveIntensity, BaseSetup.Hour), 0, 1));
		//NightEmissive.MPC_TimeOfDay->UKismetMater SetScalarParameterDefaultValue(NightEmissive, 0); 
		//SetScalarParameterValue("NightEmissive", UKismetMathLibrary::FClamp(UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(NightEmissive.NightEmissiveIntensity, BaseSetup.Hour), 0, 1)));
	}
}

//======================================================================================================
//==============================================Blends==================================================
//======================================================================================================



void ATimeOfDay::SetDynamicMaterialFloat(UMaterialInstanceDynamic* DynamicMaterial, FName inName, float inFloat)
{
	if (IsValid(DynamicMaterial))
	{
		DynamicMaterial->SetScalarParameterValue(inName, inFloat);
	}
}

void ATimeOfDay::SetDynamicMaterialColor(UMaterialInstanceDynamic* DynamicMaterial, FName inName, FLinearColor inVector)
{
	if (IsValid(DynamicMaterial))
	{
		DynamicMaterial->SetVectorParameterValue(inName, inVector);
	}
}

void ATimeOfDay::SetDynamicMaterialTexture(UMaterialInstanceDynamic* DynamicMaterial, FName inName, TObjectPtr<UTexture> inTexture)
{
	if (IsValid(DynamicMaterial))
	{
		DynamicMaterial->SetTextureParameterValue(inName, inTexture);
	}
}