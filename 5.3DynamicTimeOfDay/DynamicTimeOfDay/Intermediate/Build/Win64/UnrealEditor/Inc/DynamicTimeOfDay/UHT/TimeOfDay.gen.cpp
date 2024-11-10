// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicTimeOfDay/Public/TimeOfDay.h"
#include "DynamicTimeOfDay/Public/TimeOfDayVariables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeOfDay() {}
// Cross Module References
	DYNAMICTIMEOFDAY_API UClass* Z_Construct_UClass_ATimeOfDay();
	DYNAMICTIMEOFDAY_API UClass* Z_Construct_UClass_ATimeOfDay_NoRegister();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSetup();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FCloudsDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FDayNightEvents();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FErosionNoise();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FFogDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FFogStaticSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FMoonDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FMoonStaticSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FNightEmissive();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosAbsorption();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosArtDirection();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosAtmosphere();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosMie();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosRayleigh();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyboxStaticSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyLightDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSkyLightStaticSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FStarsDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSunDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FSunStaticSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FVolumetricAdvanceOutput();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings();
	DYNAMICTIMEOFDAY_API UScriptStruct* Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DynamicTimeOfDay();
// End Cross Module References
	DEFINE_FUNCTION(ATimeOfDay::execTurnOffColorPickers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnOffColorPickers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendNightEmissive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendNightEmissive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendSkyBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendSkyBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendMoonMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendMoonMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendMoon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendMoon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendClouds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendClouds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendFog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendFog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendSkyLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendSkyLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendSun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendSun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execBlendTimeOfDay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlendTimeOfDay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorSkyBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorSkyBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorMoon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorMoon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorSkyAtmosphere)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorSkyAtmosphere();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorClouds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorClouds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorFog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorFog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorSkyLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorSkyLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATimeOfDay::execConstructorSun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructorSun();
		P_NATIVE_END;
	}
	void ATimeOfDay::StaticRegisterNativesATimeOfDay()
	{
		UClass* Class = ATimeOfDay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlendClouds", &ATimeOfDay::execBlendClouds },
			{ "BlendFog", &ATimeOfDay::execBlendFog },
			{ "BlendMoon", &ATimeOfDay::execBlendMoon },
			{ "BlendMoonMesh", &ATimeOfDay::execBlendMoonMesh },
			{ "BlendNightEmissive", &ATimeOfDay::execBlendNightEmissive },
			{ "BlendSkyBox", &ATimeOfDay::execBlendSkyBox },
			{ "BlendSkyLight", &ATimeOfDay::execBlendSkyLight },
			{ "BlendSun", &ATimeOfDay::execBlendSun },
			{ "BlendTimeOfDay", &ATimeOfDay::execBlendTimeOfDay },
			{ "ConstructorClouds", &ATimeOfDay::execConstructorClouds },
			{ "ConstructorFog", &ATimeOfDay::execConstructorFog },
			{ "ConstructorMoon", &ATimeOfDay::execConstructorMoon },
			{ "ConstructorSkyAtmosphere", &ATimeOfDay::execConstructorSkyAtmosphere },
			{ "ConstructorSkyBox", &ATimeOfDay::execConstructorSkyBox },
			{ "ConstructorSkyLight", &ATimeOfDay::execConstructorSkyLight },
			{ "ConstructorSun", &ATimeOfDay::execConstructorSun },
			{ "TurnOffColorPickers", &ATimeOfDay::execTurnOffColorPickers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendClouds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendClouds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendClouds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendFog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendMoon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendMoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendMoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendMoonMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendNightEmissive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendSkyBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendSkyBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendSkyBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendSkyLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendSkyLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendSkyLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendSun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendSun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendSun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Blends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------Blends-----------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--------------------------------Blends-----------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "BlendTimeOfDay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorClouds", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorClouds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorClouds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorFog", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorMoon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorMoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorMoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorSkyAtmosphere", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorSkyBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorSkyLight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Constructors" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------Constructors--------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--------------------Constructors--------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "ConstructorSun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_ConstructorSun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_ConstructorSun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "BaseSetup" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeOfDay, nullptr, "TurnOffColorPickers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATimeOfDay);
	UClass* Z_Construct_UClass_ATimeOfDay_NoRegister()
	{
		return ATimeOfDay::StaticClass();
	}
	struct Z_Construct_UClass_ATimeOfDay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sun_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Moon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fog_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Fog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricClouds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumetricClouds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkySphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkySphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayNightEvents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DayNightEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricAdvanceOutput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricAdvanceOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErosionNoise_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ErosionNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSkyAtmosphere_MetaData[];
#endif
		static void NewProp_UseSkyAtmosphere_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkyAtmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Atmosphere_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Atmosphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rayleigh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rayleigh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mie_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Absorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArtDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxStaticSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyboxStaticSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarsDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsDynamicSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyboxCloudsDynamicSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightEmissive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsDynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudsDynamicMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoonDynamicMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyboxCloudsFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxNoCloudsFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyboxNoCloudsFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsNoFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyboxCloudsNoFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxNoClouds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkyboxNoClouds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindSpeedOffset_MetaData[];
#endif
		static void NewProp_WindSpeedOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WindSpeedOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimeOfDay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATimeOfDay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeOfDay_BlendClouds, "BlendClouds" }, // 3148017073
		{ &Z_Construct_UFunction_ATimeOfDay_BlendFog, "BlendFog" }, // 3890925583
		{ &Z_Construct_UFunction_ATimeOfDay_BlendMoon, "BlendMoon" }, // 3674338005
		{ &Z_Construct_UFunction_ATimeOfDay_BlendMoonMesh, "BlendMoonMesh" }, // 1960439625
		{ &Z_Construct_UFunction_ATimeOfDay_BlendNightEmissive, "BlendNightEmissive" }, // 340243993
		{ &Z_Construct_UFunction_ATimeOfDay_BlendSkyBox, "BlendSkyBox" }, // 1740503470
		{ &Z_Construct_UFunction_ATimeOfDay_BlendSkyLight, "BlendSkyLight" }, // 505739422
		{ &Z_Construct_UFunction_ATimeOfDay_BlendSun, "BlendSun" }, // 2291851150
		{ &Z_Construct_UFunction_ATimeOfDay_BlendTimeOfDay, "BlendTimeOfDay" }, // 281379160
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorClouds, "ConstructorClouds" }, // 403787813
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorFog, "ConstructorFog" }, // 1399452340
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorMoon, "ConstructorMoon" }, // 3739941830
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorSkyAtmosphere, "ConstructorSkyAtmosphere" }, // 758610682
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorSkyBox, "ConstructorSkyBox" }, // 2072433214
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorSkyLight, "ConstructorSkyLight" }, // 3964034273
		{ &Z_Construct_UFunction_ATimeOfDay_ConstructorSun, "ConstructorSun" }, // 3497264056
		{ &Z_Construct_UFunction_ATimeOfDay_TurnOffColorPickers, "TurnOffColorPickers" }, // 2145265767
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TimeOfDay.h" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//---------------------Components----------------------------------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "---------------------Components----------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Root_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Sun_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Sun = { "Sun", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Sun), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Sun_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Sun_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Moon_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Moon = { "Moon", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Moon), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Moon_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Moon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Fog_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Fog = { "Fog", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Fog), Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Fog_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Fog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLight = { "SkyLight", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyLight), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLight_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyAtmosphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyAtmosphere = { "SkyAtmosphere", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyAtmosphere), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyAtmosphere_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyAtmosphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonMesh = { "MoonMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, MoonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonMesh_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricClouds_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricClouds = { "VolumetricClouds", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, VolumetricClouds), Z_Construct_UClass_UVolumetricCloudComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricClouds_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricClouds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkySphere_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkySphere = { "SkySphere", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkySphere), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkySphere_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkySphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_BaseSetup_MetaData[] = {
		{ "Category", "BaseSetup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Setup your hour, duration, if the system is dynamic or not and visbility of hour widget.         */" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setup your hour, duration, if the system is dynamic or not and visbility of hour widget." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_BaseSetup = { "BaseSetup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, BaseSetup), Z_Construct_UScriptStruct_FBaseSetup, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_BaseSetup_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_BaseSetup_MetaData) }; // 1416310262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_DayNightEvents_MetaData[] = {
		{ "Category", "BaseSetup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**Setup your the hours for Day and Night evetns(when lights and FXs turns on and off).         */" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setup your the hours for Day and Night evetns(when lights and FXs turns on and off)." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_DayNightEvents = { "DayNightEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, DayNightEvents), Z_Construct_UScriptStruct_FDayNightEvents, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_DayNightEvents_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_DayNightEvents_MetaData) }; // 4117131322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunStaticSettings_MetaData[] = {
		{ "Category", "SunSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunStaticSettings = { "SunStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SunStaticSettings), Z_Construct_UScriptStruct_FSunStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunStaticSettings_MetaData) }; // 158773854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunDynamicSettings_MetaData[] = {
		{ "Category", "SunSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunDynamicSettings = { "SunDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SunDynamicSettings), Z_Construct_UScriptStruct_FSunDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunDynamicSettings_MetaData) }; // 3698189955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightStaticSettings_MetaData[] = {
		{ "Category", "SkyLightSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightStaticSettings = { "SkyLightStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyLightStaticSettings), Z_Construct_UScriptStruct_FSkyLightStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightStaticSettings_MetaData) }; // 2322550693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightDynamicSettings_MetaData[] = {
		{ "Category", "SkyLightSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightDynamicSettings = { "SkyLightDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyLightDynamicSettings), Z_Construct_UScriptStruct_FSkyLightDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightDynamicSettings_MetaData) }; // 2401960191
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogStaticSettings_MetaData[] = {
		{ "Category", "FogSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogStaticSettings = { "FogStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, FogStaticSettings), Z_Construct_UScriptStruct_FFogStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogStaticSettings_MetaData) }; // 2010196273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogDynamicSettings_MetaData[] = {
		{ "Category", "FogSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogDynamicSettings = { "FogDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, FogDynamicSettings), Z_Construct_UScriptStruct_FFogDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogDynamicSettings_MetaData) }; // 4173951743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsStaticSettings_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsStaticSettings = { "CloudsStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, CloudsStaticSettings), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsStaticSettings_MetaData) }; // 1570209695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricAdvanceOutput_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricAdvanceOutput = { "VolumetricAdvanceOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, VolumetricAdvanceOutput), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricAdvanceOutput_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricAdvanceOutput_MetaData) }; // 2197618249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ErosionNoise_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ErosionNoise = { "ErosionNoise", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, ErosionNoise), Z_Construct_UScriptStruct_FErosionNoise, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ErosionNoise_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ErosionNoise_MetaData) }; // 2185429456
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicSettings_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicSettings = { "CloudsDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, CloudsDynamicSettings), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicSettings_MetaData) }; // 3336410489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	void Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere_SetBit(void* Obj)
	{
		((ATimeOfDay*)Obj)->UseSkyAtmosphere = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere = { "UseSkyAtmosphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeOfDay), &Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Atmosphere_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Atmosphere = { "Atmosphere", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Atmosphere), Z_Construct_UScriptStruct_FSkyAtmosAtmosphere, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Atmosphere_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Atmosphere_MetaData) }; // 1589156750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Rayleigh_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Rayleigh = { "Rayleigh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Rayleigh), Z_Construct_UScriptStruct_FSkyAtmosRayleigh, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Rayleigh_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Rayleigh_MetaData) }; // 939655828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Mie_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Mie = { "Mie", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Mie), Z_Construct_UScriptStruct_FSkyAtmosMie, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Mie_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Mie_MetaData) }; // 4036007406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Absorption_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Absorption = { "Absorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, Absorption), Z_Construct_UScriptStruct_FSkyAtmosAbsorption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Absorption_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Absorption_MetaData) }; // 3578229344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ArtDirection_MetaData[] = {
		{ "Category", "SkyAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ArtDirection = { "ArtDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, ArtDirection), Z_Construct_UScriptStruct_FSkyAtmosArtDirection, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ArtDirection_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ArtDirection_MetaData) }; // 132198727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonStaticSettings_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonStaticSettings = { "MoonStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, MoonStaticSettings), Z_Construct_UScriptStruct_FMoonStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonStaticSettings_MetaData) }; // 2099035504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicSettings_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicSettings = { "MoonDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, MoonDynamicSettings), Z_Construct_UScriptStruct_FMoonDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicSettings_MetaData) }; // 666288295
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxStaticSettings_MetaData[] = {
		{ "Category", "Skybox" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxStaticSettings = { "SkyboxStaticSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxStaticSettings), Z_Construct_UScriptStruct_FSkyboxStaticSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxStaticSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxStaticSettings_MetaData) }; // 2913315213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_StarsDynamicSettings_MetaData[] = {
		{ "Category", "Skybox" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_StarsDynamicSettings = { "StarsDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, StarsDynamicSettings), Z_Construct_UScriptStruct_FStarsDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_StarsDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_StarsDynamicSettings_MetaData) }; // 2655914109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsDynamicSettings_MetaData[] = {
		{ "Category", "Skybox" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsDynamicSettings = { "SkyboxCloudsDynamicSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxCloudsDynamicSettings), Z_Construct_UScriptStruct_FCloudsDynamicSettings, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsDynamicSettings_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsDynamicSettings_MetaData) }; // 2588355211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_NightEmissive_MetaData[] = {
		{ "Category", "NightEmissive" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_NightEmissive = { "NightEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, NightEmissive), Z_Construct_UScriptStruct_FNightEmissive, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_NightEmissive_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_NightEmissive_MetaData) }; // 753410999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicMaterial_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicMaterial = { "CloudsDynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, CloudsDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicMaterial_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicMaterial_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicMaterial = { "MoonDynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, MoonDynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicMaterial_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsFogging_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsFogging = { "SkyboxCloudsFogging", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxCloudsFogging), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsFogging_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoCloudsFogging_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoCloudsFogging = { "SkyboxNoCloudsFogging", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxNoCloudsFogging), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoCloudsFogging_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoCloudsFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsNoFogging_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsNoFogging = { "SkyboxCloudsNoFogging", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxCloudsNoFogging), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsNoFogging_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsNoFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoClouds_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoClouds = { "SkyboxNoClouds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeOfDay, SkyboxNoClouds), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoClouds_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoClouds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset_MetaData[] = {
		{ "Category", "DynamicMaterials" },
		{ "ModuleRelativePath", "Public/TimeOfDay.h" },
	};
#endif
	void Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset_SetBit(void* Obj)
	{
		((ATimeOfDay*)Obj)->WindSpeedOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset = { "WindSpeedOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeOfDay), &Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset_MetaData), Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeOfDay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Sun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Moon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Fog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricClouds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkySphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_BaseSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_DayNightEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SunDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyLightDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_FogDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_VolumetricAdvanceOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ErosionNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_UseSkyAtmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Atmosphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Rayleigh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Mie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_Absorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_ArtDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxStaticSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_StarsDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsDynamicSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_NightEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_CloudsDynamicMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_MoonDynamicMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoCloudsFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxCloudsNoFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_SkyboxNoClouds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeOfDay_Statics::NewProp_WindSpeedOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimeOfDay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeOfDay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeOfDay_Statics::ClassParams = {
		&ATimeOfDay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATimeOfDay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeOfDay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeOfDay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATimeOfDay()
	{
		if (!Z_Registration_Info_UClass_ATimeOfDay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeOfDay.OuterSingleton, Z_Construct_UClass_ATimeOfDay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATimeOfDay.OuterSingleton;
	}
	template<> DYNAMICTIMEOFDAY_API UClass* StaticClass<ATimeOfDay>()
	{
		return ATimeOfDay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeOfDay);
	ATimeOfDay::~ATimeOfDay() {}
	struct Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATimeOfDay, ATimeOfDay::StaticClass, TEXT("ATimeOfDay"), &Z_Registration_Info_UClass_ATimeOfDay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeOfDay), 2356959719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDay_h_2849201470(TEXT("/Script/DynamicTimeOfDay"),
		Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
