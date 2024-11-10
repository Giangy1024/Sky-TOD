// Copyright - Ambro¿y Farski 2023

#pragma once


#include "Math/Color.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Materials/MaterialParameterCollection.h"
#include "Engine/Texture.h"
#include "TimeOfDayVariables.generated.h"



//----------------------BaseSetup-----------------------------------
USTRUCT(BlueprintType)
struct FBaseSetup
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseSetup", meta = (ClampMin = "0", ClampMax = "24", UIMin = "0", UIMax = "24"))
		float Hour = 12;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseSetup", meta = (ClampMin = "0", ClampMax = "24", UIMin = "0", UIMax = "240"))
		float Duration = 2;
	UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite, Category = "BaseSetup")
		bool IsDynamic = true;
	UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite, Category = "BaseSetup")
		bool ShowHourWidget = false;
};

USTRUCT(BlueprintType)
struct FDayNightEvents
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DayNightEvents", meta = (ClampMin = "0", ClampMax = "24", UIMin = "0", UIMax = "24"))
		float DayStartHour = 6;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DayNightEvents", meta = (ClampMin = "0", ClampMax = "24", UIMin = "0", UIMax = "240"))
		float NightStartHour = 19;
};
//----------------------BaseSetup-----------------------------------


//-----------------------------------Sun Settings------------------------------------
//-----------------------------------Sun Static Settings------------------------------------

USTRUCT(BlueprintType)
struct FSunStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float SourceAngle = 0.5357;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		bool CastShadows = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		bool UseTemperature = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float IndirectLightingIntensity = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float VolumetricScatteringIntensity = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		bool LightShaftOcclusion = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float OcclusionMaskDarkness = 0.05;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		bool LightShaftBloom = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float BloomThreshold = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float BloomMaxBrightness = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		FColor BloomTint = FColor(255, 255, 255, 255);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunStaticSettings")
		float ContactShadowLenght = 0;
};
//-----------------------------------Sun Static Settings------------------------------------


//-----------------------------------Sun Dynamic Settings------------------------------------

USTRUCT(BlueprintType)
struct FSunDynamicSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		FRuntimeFloatCurve SunIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		bool UseSunColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseSunColorPicker"), Category = "SunDynamicSettings")
		FLinearColor SunColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		FRuntimeVectorCurve SunColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		FRuntimeVectorCurve SunRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		FRuntimeFloatCurve SunTemperature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunDynamicSettings")
		FRuntimeFloatCurve SunBloomScale;
};
//-----------------------------------Sun Dynamic Settings------------------------------------
//-----------------------------------Sun Settings------------------------------------




//-----------------------------------SkyLight Settings-------------------------------
//-----------------------------------SkyLight Static Settings-------------------------------

UENUM(BlueprintType)
enum class ECaptureSourceType : uint8
{
	SLSCapturedScene,
	SLSSpecifiedCubemap
};


USTRUCT(BlueprintType)
struct FSkyLightStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightStaticSettings")
		bool RealTimeCapture = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!RealTimeCapture"), Category = "SkyLightStaticSettings")
		ECaptureSourceType SourceType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!RealTimeCapture"), Category = "SkyLightStaticSettings")
		TObjectPtr<class UTextureCube> Cubemap;



};
//-----------------------------------SkyLight Static Settings-------------------------------
//-----------------------------------SkyLight Dynamic Settings-------------------------------
USTRUCT(BlueprintType)
struct FSkyLightDynamicSettings
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightDynamicSettings")
		FRuntimeFloatCurve SkyLightIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightDynamicSettings")
		bool UseSkyLightColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseSkyLightColorPicker"), Category = "SkyLightDynamicSettings")
		FLinearColor SkyLightColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightDynamicSettings")
		FRuntimeVectorCurve SkyLightColor;
};
//-----------------------------------SkyLight Dynamic Settings-------------------------------
//-----------------------------------SkyLight Settings-------------------------------



//-----------------------------------Fog Settings-------------------------------
//-----------------------------------Fog Static Settings-------------------------------


USTRUCT(BlueprintType)
struct FFogStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		bool FogVisibility = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float FogHeightFallof = .5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float FogMaxOpacity = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float StartDistance = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float CutoffDistance = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float DirectionalInscatteringExponent = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float DirectionalInscatteringStartDistance = 10000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		FLinearColor DirectionalInscatteringColor = FLinearColor(0, 0, 0, 1);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		bool VolumetricFog = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float VolumetricFogScatteringDistribution = .4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogStaticSettings")
		float VolumetricFogExtinctionScale = .6;



};
//-----------------------------------Fog Static Settings-------------------------------

//-----------------------------------Fog Dynamic Settings-------------------------------
USTRUCT(BlueprintType)
struct FFogDynamicSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		FRuntimeFloatCurve FogDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		bool UseFogColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseFogColorPicker"), Category = "FogDynamicSettings")
		FLinearColor FogColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		FRuntimeVectorCurve FogInscatteringColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		bool UseFogVolumetricColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseFogVolumetricColorPicker"), Category = "FogDynamicSettings")
		FLinearColor FogVolumetricColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		FRuntimeVectorCurve FogVolumetricColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		bool UseFogEmissiveColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseFogEmissiveColorPicker"), Category = "FogDynamicSettings")
		FLinearColor FogEmissiveColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogDynamicSettings")
		FRuntimeVectorCurve FogEmissiveColor;
};
//-----------------------------------Fog Dynamic Settings-------------------------------
//-----------------------------------Fog Settings-------------------------------





//-----------------------------------Volumetric Clouds Settings-------------------------------
//-----------------------------------Volumetric Clouds Static Settings-------------------------------


USTRUCT(BlueprintType)
struct FVolumetricCloudsStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		bool UseVolumetricClouds = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float LayerBottomAltitude = 5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float LayerHeight = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float TracingStartMaxDistance = 350;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float TracingMaxDistance = 50;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float PlanetRadius = 6360;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FColor GroundAlbedo = FColor(170, 170, 170, 255);
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool CloudsTexture = true;
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta =(EditCondition = "CloudsTexture"), Category = "VolumetricCloudsSettings")
		TObjectPtr<UTexture> CloudTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		TObjectPtr<UMaterialInterface> Material;
};

USTRUCT(BlueprintType)
struct FVolumetricAdvanceOutput
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float PhaseG = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float PhaseG2 = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float PhaseBlend = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float MultiScatteringContribution = .5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float MultiScatteringOcclusion = .5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "-1", ClampMax = "1", UIMin = "-1", UIMax = "1"), Category = "VolumetricCloudsSettings")
		float MultiScatteringEccentricity = .5;

};

USTRUCT(BlueprintType)
struct FErosionNoise
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float CloudsNoiseScale = 12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float CloudsNoiseIntensity = 6.5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float CloudsErosionScale = 7.25;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float CloudsErosionIntensity = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		float NoiseHeight = .5;

};

//-----------------------------------Volumetric Clouds Static Settings-------------------------------



//-----------------------------------Volumetric Clouds Dynamic Settings-------------------------------
USTRUCT(BlueprintType)
struct FVolumetricCloudsDynamicSettings
{
	GENERATED_BODY()

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		bool UseCloudsColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseCloudsColorPicker"), Category = "VolumetricCloudsSettings")
		FLinearColor CloudsColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeVectorCurve CloudsColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeFloatCurve CloudsMaskScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeFloatCurve CloudsMaskIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeFloatCurve CloudsBias;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeFloatCurve CloudsDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeVectorCurve CloudsWindSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FRuntimeFloatCurve CloudsFeather;


};
//-----------------------------------Volumetric Clouds Dynamic Settings-------------------------------

//-----------------------------------Volumetric Clouds Settings-------------------------------





//-----------------------------------Sky Atmosphere-------------------------------


//-----------------------------------Atmosphere-------------------------------
USTRUCT(BlueprintType)
struct FSkyAtmosAtmosphere
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float AtmosphereHeight = 60;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float MultiScattering = 1;
};
//-----------------------------------Atmosphere-------------------------------


//-----------------------------------Rayleigh-------------------------------

USTRUCT(BlueprintType)
struct FSkyAtmosRayleigh
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float RayleighScatteringScale = 0.0331;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		FLinearColor RayleighScattering = FLinearColor(0.175287, 0.409607, 1, 30.211479);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float RayleighExponentialDistribution = 8;
};

//-----------------------------------Rayleigh-------------------------------



//-----------------------------------Mie-------------------------------

USTRUCT(BlueprintType)
struct FSkyAtmosMie
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float MieScatteringScale = .003996;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		FLinearColor MieScattering = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float MieAbsorptionsScale = .000444;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		FLinearColor MieAbsorption = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float MieAnisotropy = .8;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float MieExponentialDistribution = 1.2;
};

//-----------------------------------Mie-------------------------------


//-----------------------------------Absorption-------------------------------

USTRUCT(BlueprintType)
struct FSkyAtmosAbsorption
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float AbsorptionScale = .001881;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		FLinearColor Absorption = FLinearColor(.345098, 1, .047059, 1);
};

//-----------------------------------Absorption-------------------------------


//-----------------------------------ArtDirection-------------------------------

USTRUCT(BlueprintType)
struct FSkyAtmosArtDirection
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		FLinearColor SkyLuminanceFactor = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float AerialPespectiveViewDistanceScale = 60;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosAtmosphere")
		float HeightFogContribution = 1;
};

//-----------------------------------ArtDirection-------------------------------

//-----------------------------------Sky Atmosphere-------------------------------




//-----------------------------------Moon Settings------------------------------------
//-----------------------------------Moon Static Settings------------------------------------
USTRUCT(BlueprintType)
struct FMoonStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool UseMoon = true; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool UseMoonMesh = true; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float MoonDistance = 5000000;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float MoonSize = 4;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float SourceAngle = 0.5357;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool CastShadows = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool UseTemperature = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float IndirectLightingIntensity = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float VolumetricScatteringIntensity = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool LightShaftOcclusion = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float OcclusionDepthDarkness = 0.05;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool LightShaftBloom = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float BloomThreshold = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float BloomMaxBrightness = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FColor BloomTint = FColor(255, 255, 255, 255);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		float ContactShadowLenght = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		class UStaticMesh* MoonStaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		TObjectPtr<UMaterialInterface> MoonMaterial;
};
//-----------------------------------Moon Static Settings------------------------------------


//-----------------------------------Moon Dynamic Settings------------------------------------
USTRUCT(BlueprintType)
struct FMoonDynamicSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeFloatCurve MoonIntensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool UseMoonColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseMoonColorPicker"), Category = "MoonSettings")
		FLinearColor MoonColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeVectorCurve MoonColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeVectorCurve MoonRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeFloatCurve MoonTemperature;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeFloatCurve MoonBloomScale;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		bool UseMoonDiscColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseMoonDiscColorPicker"), Category = "MoonSettings")
		FLinearColor MoonDiscColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeVectorCurve MoonDiscColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeFloatCurve MoonDiscBrightness;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FRuntimeFloatCurve MoonDiscOpacity;
};
//-----------------------------------Moon Dynamic Settings------------------------------------
//-----------------------------------Moon Settings------------------------------------






//-----------------------------------Skybox Settings------------------------------------

//-----------------------------------Skybox Static Settings------------------------------------
USTRUCT(BlueprintType)
struct FSkyboxStaticSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		bool UseSkybox = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		float SkyboxScale = 10000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		bool UseClouds = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		TObjectPtr<UTexture> Layer1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer1Power1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer1Power2 = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		TObjectPtr<UTexture> Layer2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer2Power1 = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer2Power2 = 2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer2WindMultiplier = .66;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		TObjectPtr<UTexture> Layer3;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer3Power1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer3Power2 = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float Layer3WindMultiplier = .33;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		TObjectPtr<UTexture> NoiseTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float NoiseIntenisty = 50;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float CloudNoiseTiling = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseClouds"), Category = "SkyBoxSettings")
		float NoiseWindMultiplier = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		float StarsTilingX = 15;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		float StarsTilingY = 12;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		TObjectPtr<UTexture> StarsTexture;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SkyBoxSettings")
		TObjectPtr<UMaterialInterface> CloudsFogging;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SkyBoxSettings")
		TObjectPtr<UMaterialInterface> NoCloudsFogging;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SkyBoxSettings")
		TObjectPtr<UMaterialInterface> CloudsNoFogging;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SkyBoxSettings")
		TObjectPtr<UMaterialInterface> NoClouds;

};

//-----------------------------------Skybox Static Settings------------------------------------


//-----------------------------------Skybox Dynamic Settings------------------------------------
USTRUCT(BlueprintType)
struct FStarsDynamicSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve StarsBrightness;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve StarsOpacity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		bool UseStarsColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseStarsColorPicker"), Category = "SkyBoxSettings")
		FLinearColor StarsColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeVectorCurve StarsColor;
};


USTRUCT(BlueprintType)
struct FCloudsDynamicSettings
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		bool UseSkyboxCloudsColorPicker = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "UseSkyboxCloudsColorPicker"), Category = "SkyBoxSettings")
		FLinearColor SkyboxCloudsColorPicker = FLinearColor(1, 1, 1, 1);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeVectorCurve SkyboxCloudsColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve Layer1Intensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve Layer2Intensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve Layer3Intensity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyBoxSettings")
		FRuntimeFloatCurve SkyboxCloudsWindSpeed;
	
};
//-----------------------------------Skybox Dynamic Settings------------------------------------

//-----------------------------------Skybox Settings------------------------------------



//-----------------------------------Night Emissive Dynamic Settings------------------------------------

USTRUCT(BlueprintType)
struct FNightEmissive
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NightEmissive")
		FRuntimeFloatCurve NightEmissiveIntensity;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "NightEmissive")
		UMaterialParameterCollection* MPC_TimeOfDay;


};
//-----------------------------------Night Emissive Dynamic Settings------------------------------------