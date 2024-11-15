// Copyright - Ambroży Farski 2023

#pragma once


#include "TimeOfDayVariables.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeOfDay.generated.h"




UCLASS()
class DYNAMICTIMEOFDAY_API ATimeOfDay : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeOfDay();

	//---------------------Components----------------------------------

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class USceneComponent* Root;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UDirectionalLightComponent* Sun;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UDirectionalLightComponent* Moon;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UExponentialHeightFogComponent* Fog;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class USkyLightComponent* SkyLight;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class USkyAtmosphereComponent* SkyAtmosphere;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* MoonMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UVolumetricCloudComponent* VolumetricClouds;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* SkySphere;






	//----------------------------Structs-----------------------------------


	/**Setup your hour, duration, if the system is dynamic or not and visbility of hour widget.         */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BaseSetup")
		FBaseSetup BaseSetup;

	/**Setup your the hours for Day and Night evetns(when lights and FXs turns on and off).         */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BaseSetup")
		FDayNightEvents DayNightEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunSettings")
		FSunStaticSettings SunStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SunSettings")
		FSunDynamicSettings SunDynamicSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightSettings")
		FSkyLightStaticSettings SkyLightStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyLightSettings")
		FSkyLightDynamicSettings SkyLightDynamicSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogSettings")
		FFogStaticSettings FogStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FogSettings")
		FFogDynamicSettings FogDynamicSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FVolumetricCloudsStaticSettings CloudsStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FVolumetricAdvanceOutput VolumetricAdvanceOutput;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FErosionNoise ErosionNoise;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VolumetricCloudsSettings")
		FVolumetricCloudsDynamicSettings CloudsDynamicSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		bool UseSkyAtmosphere = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		FSkyAtmosAtmosphere Atmosphere;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		FSkyAtmosRayleigh Rayleigh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		FSkyAtmosMie Mie;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		FSkyAtmosAbsorption Absorption;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SkyAtmosphere")
		FSkyAtmosArtDirection ArtDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FMoonStaticSettings MoonStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MoonSettings")
		FMoonDynamicSettings MoonDynamicSettings;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skybox")
		FSkyboxStaticSettings SkyboxStaticSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skybox")
		FStarsDynamicSettings StarsDynamicSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skybox")
		FCloudsDynamicSettings SkyboxCloudsDynamicSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NightEmissive")
		FNightEmissive NightEmissive;


	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* CloudsDynamicMaterial;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* MoonDynamicMaterial;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* SkyboxCloudsFogging;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* SkyboxNoCloudsFogging;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* SkyboxCloudsNoFogging;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		UMaterialInstanceDynamic* SkyboxNoClouds;
	UPROPERTY(BlueprintReadWrite, Category = "DynamicMaterials")
		bool WindSpeedOffset = false;
	
		float X = 0;
		float Y = 0;
		float SkyboxWindSpeed = 0;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void OnConstruction(const FTransform& Transform) override;

	
	//--------------------Constructors--------------------------

	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorSun();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorSkyLight();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorFog();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorClouds();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorSkyAtmosphere();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorMoon();
	UFUNCTION(BlueprintCallable, Category = "Constructors")
		void ConstructorSkyBox();


	//--------------------------------Blends-----------------------------------

	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendTimeOfDay();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendSun();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendSkyLight();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendFog();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendClouds();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendMoon();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendMoonMesh();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendSkyBox();
	UFUNCTION(BlueprintCallable, Category = "Blends")
		void BlendNightEmissive();


	UFUNCTION(BlueprintCallable, Category="BaseSetup", CallInEditor)
		void TurnOffColorPickers();

	
		void SetDynamicMaterialFloat(UMaterialInstanceDynamic* DynamicMaterial, FName inName, float inFloat);
		void SetDynamicMaterialColor(UMaterialInstanceDynamic* DynamicMaterial, FName inName, FLinearColor inVector);
		void SetDynamicMaterialTexture(UMaterialInstanceDynamic* DynamicMaterial, FName inName, TObjectPtr<UTexture> inTexture);

private:

	
	
};


