// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicTimeOfDay/Public/TimeOfDayVariables.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeOfDayVariables() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DYNAMICTIMEOFDAY_API UEnum* Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType();
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
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
	UPackage* Z_Construct_UPackage__Script_DynamicTimeOfDay();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseSetup;
class UScriptStruct* FBaseSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseSetup, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("BaseSetup"));
	}
	return Z_Registration_Info_UScriptStruct_BaseSetup.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FBaseSetup>()
{
	return FBaseSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hour_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDynamic_MetaData[];
#endif
		static void NewProp_IsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDynamic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowHourWidget_MetaData[];
#endif
		static void NewProp_ShowHourWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowHourWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------BaseSetup-----------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------BaseSetup-----------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Hour_MetaData[] = {
		{ "Category", "BaseSetup" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Hour = { "Hour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseSetup, Hour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Hour_MetaData), Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Hour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "BaseSetup" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "240" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseSetup, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Duration_MetaData), Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Duration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic_MetaData[] = {
		{ "Category", "BaseSetup" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic_SetBit(void* Obj)
	{
		((FBaseSetup*)Obj)->IsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic = { "IsDynamic", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBaseSetup), &Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic_MetaData), Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget_MetaData[] = {
		{ "Category", "BaseSetup" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget_SetBit(void* Obj)
	{
		((FBaseSetup*)Obj)->ShowHourWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget = { "ShowHourWidget", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBaseSetup), &Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget_MetaData), Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Hour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_IsDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSetup_Statics::NewProp_ShowHourWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"BaseSetup",
		Z_Construct_UScriptStruct_FBaseSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::PropPointers),
		sizeof(FBaseSetup),
		alignof(FBaseSetup),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseSetup_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSetup_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBaseSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseSetup.InnerSingleton, Z_Construct_UScriptStruct_FBaseSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DayNightEvents;
class UScriptStruct* FDayNightEvents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DayNightEvents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DayNightEvents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDayNightEvents, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("DayNightEvents"));
	}
	return Z_Registration_Info_UScriptStruct_DayNightEvents.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FDayNightEvents>()
{
	return FDayNightEvents::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDayNightEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DayStartHour_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DayStartHour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightStartHour_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NightStartHour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightEvents_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDayNightEvents>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_DayStartHour_MetaData[] = {
		{ "Category", "DayNightEvents" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "24" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_DayStartHour = { "DayStartHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDayNightEvents, DayStartHour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_DayStartHour_MetaData), Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_DayStartHour_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_NightStartHour_MetaData[] = {
		{ "Category", "DayNightEvents" },
		{ "ClampMax", "24" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "240" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_NightStartHour = { "NightStartHour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDayNightEvents, NightStartHour), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_NightStartHour_MetaData), Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_NightStartHour_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDayNightEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_DayStartHour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewProp_NightStartHour,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDayNightEvents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"DayNightEvents",
		Z_Construct_UScriptStruct_FDayNightEvents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightEvents_Statics::PropPointers),
		sizeof(FDayNightEvents),
		alignof(FDayNightEvents),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightEvents_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDayNightEvents_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDayNightEvents_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDayNightEvents()
	{
		if (!Z_Registration_Info_UScriptStruct_DayNightEvents.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DayNightEvents.InnerSingleton, Z_Construct_UScriptStruct_FDayNightEvents_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DayNightEvents.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SunStaticSettings;
class UScriptStruct* FSunStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SunStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SunStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSunStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SunStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SunStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSunStaticSettings>()
{
	return FSunStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSunStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseTemperature_MetaData[];
#endif
		static void NewProp_UseTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftOcclusion_MetaData[];
#endif
		static void NewProp_LightShaftOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LightShaftOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaskDarkness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaskDarkness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftBloom_MetaData[];
#endif
		static void NewProp_LightShaftBloom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LightShaftBloom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomMaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLenght;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Sun Settings------------------------------------\n//-----------------------------------Sun Static Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Sun Settings------------------------------------\n-----------------------------------Sun Static Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSunStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_SourceAngle_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_SourceAngle = { "SourceAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, SourceAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_SourceAngle_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_SourceAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((FSunStaticSettings*)Obj)->CastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSunStaticSettings), &Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature_SetBit(void* Obj)
	{
		((FSunStaticSettings*)Obj)->UseTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature = { "UseTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSunStaticSettings), &Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, IndirectLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion_SetBit(void* Obj)
	{
		((FSunStaticSettings*)Obj)->LightShaftOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion = { "LightShaftOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSunStaticSettings), &Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_OcclusionMaskDarkness_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_OcclusionMaskDarkness = { "OcclusionMaskDarkness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, OcclusionMaskDarkness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_OcclusionMaskDarkness_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_OcclusionMaskDarkness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom_SetBit(void* Obj)
	{
		((FSunStaticSettings*)Obj)->LightShaftBloom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom = { "LightShaftBloom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSunStaticSettings), &Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, BloomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomThreshold_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomMaxBrightness = { "BloomMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, BloomMaxBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomTint_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomTint = { "BloomTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomTint_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomTint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData[] = {
		{ "Category", "SunStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_ContactShadowLenght = { "ContactShadowLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunStaticSettings, ContactShadowLenght), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSunStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_SourceAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_UseTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_IndirectLightingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_OcclusionMaskDarkness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_LightShaftBloom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_BloomTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewProp_ContactShadowLenght,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSunStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SunStaticSettings",
		Z_Construct_UScriptStruct_FSunStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::PropPointers),
		sizeof(FSunStaticSettings),
		alignof(FSunStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSunStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSunStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SunStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SunStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FSunStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SunStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SunDynamicSettings;
class UScriptStruct* FSunDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SunDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SunDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSunDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SunDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SunDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSunDynamicSettings>()
{
	return FSunDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSunDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSunColorPicker_MetaData[];
#endif
		static void NewProp_UseSunColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSunColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunBloomScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SunBloomScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Sun Dynamic Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Sun Dynamic Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSunDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunIntensity_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunIntensity = { "SunIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunIntensity_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunIntensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker_SetBit(void* Obj)
	{
		((FSunDynamicSettings*)Obj)->UseSunColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker = { "UseSunColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSunDynamicSettings), &Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColorPicker_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "EditCondition", "UseSunColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColorPicker = { "SunColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColorPicker_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColor_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColor = { "SunColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColor_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunRotation_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunRotation = { "SunRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunRotation), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunRotation_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunRotation_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunTemperature_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunTemperature = { "SunTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunTemperature), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunTemperature_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunTemperature_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunBloomScale_MetaData[] = {
		{ "Category", "SunDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunBloomScale = { "SunBloomScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSunDynamicSettings, SunBloomScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunBloomScale_MetaData), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunBloomScale_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_UseSunColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewProp_SunBloomScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SunDynamicSettings",
		Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::PropPointers),
		sizeof(FSunDynamicSettings),
		alignof(FSunDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSunDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SunDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SunDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SunDynamicSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECaptureSourceType;
	static UEnum* ECaptureSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("ECaptureSourceType"));
		}
		return Z_Registration_Info_UEnum_ECaptureSourceType.OuterSingleton;
	}
	template<> DYNAMICTIMEOFDAY_API UEnum* StaticEnum<ECaptureSourceType>()
	{
		return ECaptureSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enumerators[] = {
		{ "ECaptureSourceType::SLSCapturedScene", (int64)ECaptureSourceType::SLSCapturedScene },
		{ "ECaptureSourceType::SLSSpecifiedCubemap", (int64)ECaptureSourceType::SLSSpecifiedCubemap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------SkyLight Settings-------------------------------\n//-----------------------------------SkyLight Static Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "SLSCapturedScene.Name", "ECaptureSourceType::SLSCapturedScene" },
		{ "SLSSpecifiedCubemap.Name", "ECaptureSourceType::SLSSpecifiedCubemap" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------SkyLight Settings-------------------------------\n-----------------------------------SkyLight Static Settings-------------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		"ECaptureSourceType",
		"ECaptureSourceType",
		Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType()
	{
		if (!Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton, Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECaptureSourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyLightStaticSettings;
class UScriptStruct* FSkyLightStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyLightStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyLightStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyLightStaticSettings>()
{
	return FSkyLightStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeCapture_MetaData[];
#endif
		static void NewProp_RealTimeCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RealTimeCapture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cubemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyLightStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture_MetaData[] = {
		{ "Category", "SkyLightStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture_SetBit(void* Obj)
	{
		((FSkyLightStaticSettings*)Obj)->RealTimeCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture = { "RealTimeCapture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkyLightStaticSettings), &Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture_MetaData), Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "SkyLightStaticSettings" },
		{ "EditCondition", "!RealTimeCapture" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyLightStaticSettings, SourceType), Z_Construct_UEnum_DynamicTimeOfDay_ECaptureSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType_MetaData), Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType_MetaData) }; // 3027348944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_Cubemap_MetaData[] = {
		{ "Category", "SkyLightStaticSettings" },
		{ "EditCondition", "!RealTimeCapture" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyLightStaticSettings, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_Cubemap_MetaData), Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_Cubemap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_RealTimeCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewProp_Cubemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyLightStaticSettings",
		Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::PropPointers),
		sizeof(FSkyLightStaticSettings),
		alignof(FSkyLightStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyLightStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyLightStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings;
class UScriptStruct* FSkyLightDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyLightDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyLightDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyLightDynamicSettings>()
{
	return FSkyLightDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSkyLightColorPicker_MetaData[];
#endif
		static void NewProp_UseSkyLightColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkyLightColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLightColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------SkyLight Static Settings-------------------------------\n//-----------------------------------SkyLight Dynamic Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------SkyLight Static Settings-------------------------------\n-----------------------------------SkyLight Dynamic Settings-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyLightDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightIntensity_MetaData[] = {
		{ "Category", "SkyLightDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightIntensity = { "SkyLightIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyLightDynamicSettings, SkyLightIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightIntensity_MetaData), Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightIntensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker_MetaData[] = {
		{ "Category", "SkyLightDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker_SetBit(void* Obj)
	{
		((FSkyLightDynamicSettings*)Obj)->UseSkyLightColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker = { "UseSkyLightColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkyLightDynamicSettings), &Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker_MetaData), Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColorPicker_MetaData[] = {
		{ "Category", "SkyLightDynamicSettings" },
		{ "EditCondition", "UseSkyLightColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColorPicker = { "SkyLightColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyLightDynamicSettings, SkyLightColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColorPicker_MetaData), Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColor_MetaData[] = {
		{ "Category", "SkyLightDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColor = { "SkyLightColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyLightDynamicSettings, SkyLightColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColor_MetaData), Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColor_MetaData) }; // 429390256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_UseSkyLightColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewProp_SkyLightColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyLightDynamicSettings",
		Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::PropPointers),
		sizeof(FSkyLightDynamicSettings),
		alignof(FSkyLightDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyLightDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FogStaticSettings;
class UScriptStruct* FFogStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FogStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FogStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFogStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("FogStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FogStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FFogStaticSettings>()
{
	return FFogStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFogStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogVisibility_MetaData[];
#endif
		static void NewProp_FogVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FogVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightFallof_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightFallof;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFog_MetaData[];
#endif
		static void NewProp_VolumetricFog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VolumetricFog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Fog Settings-------------------------------\n//-----------------------------------Fog Static Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Fog Settings-------------------------------\n-----------------------------------Fog Static Settings-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFogStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility_SetBit(void* Obj)
	{
		((FFogStaticSettings*)Obj)->FogVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility = { "FogVisibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFogStaticSettings), &Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogHeightFallof_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogHeightFallof = { "FogHeightFallof", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, FogHeightFallof), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogHeightFallof_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogHeightFallof_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogMaxOpacity_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogMaxOpacity = { "FogMaxOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, FogMaxOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogMaxOpacity_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogMaxOpacity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_StartDistance_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_StartDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_CutoffDistance_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_CutoffDistance = { "CutoffDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, CutoffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_CutoffDistance_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_CutoffDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, DirectionalInscatteringExponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringExponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, DirectionalInscatteringStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog_SetBit(void* Obj)
	{
		((FFogStaticSettings*)Obj)->VolumetricFog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog = { "VolumetricFog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFogStaticSettings), &Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, VolumetricFogScatteringDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "Category", "FogStaticSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogStaticSettings, VolumetricFogExtinctionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogExtinctionScale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFogStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogHeightFallof,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_FogMaxOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_StartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_CutoffDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_DirectionalInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewProp_VolumetricFogExtinctionScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFogStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"FogStaticSettings",
		Z_Construct_UScriptStruct_FFogStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::PropPointers),
		sizeof(FFogStaticSettings),
		alignof(FFogStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFogStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFogStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FogStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FogStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FFogStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FogStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FogDynamicSettings;
class UScriptStruct* FFogDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FogDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FogDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFogDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("FogDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FogDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FFogDynamicSettings>()
{
	return FFogDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFogDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFogColorPicker_MetaData[];
#endif
		static void NewProp_UseFogColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFogColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFogVolumetricColorPicker_MetaData[];
#endif
		static void NewProp_UseFogVolumetricColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFogVolumetricColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogVolumetricColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogVolumetricColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogVolumetricColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogVolumetricColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseFogEmissiveColorPicker_MetaData[];
#endif
		static void NewProp_UseFogEmissiveColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseFogEmissiveColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogEmissiveColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogEmissiveColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogEmissiveColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FogEmissiveColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Fog Dynamic Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Fog Dynamic Settings-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFogDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogDensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogDensity_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogDensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker_SetBit(void* Obj)
	{
		((FFogDynamicSettings*)Obj)->UseFogColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker = { "UseFogColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFogDynamicSettings), &Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "EditCondition", "UseFogColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogColorPicker = { "FogColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogInscatteringColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogInscatteringColor_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogInscatteringColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker_SetBit(void* Obj)
	{
		((FFogDynamicSettings*)Obj)->UseFogVolumetricColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker = { "UseFogVolumetricColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFogDynamicSettings), &Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "EditCondition", "UseFogVolumetricColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColorPicker = { "FogVolumetricColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogVolumetricColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColor_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColor = { "FogVolumetricColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogVolumetricColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColor_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker_SetBit(void* Obj)
	{
		((FFogDynamicSettings*)Obj)->UseFogEmissiveColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker = { "UseFogEmissiveColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFogDynamicSettings), &Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColorPicker_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "EditCondition", "UseFogEmissiveColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColorPicker = { "FogEmissiveColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogEmissiveColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColorPicker_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColor_MetaData[] = {
		{ "Category", "FogDynamicSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColor = { "FogEmissiveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFogDynamicSettings, FogEmissiveColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColor_MetaData), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColor_MetaData) }; // 429390256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogInscatteringColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogVolumetricColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogVolumetricColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_UseFogEmissiveColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewProp_FogEmissiveColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"FogDynamicSettings",
		Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::PropPointers),
		sizeof(FFogDynamicSettings),
		alignof(FFogDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFogDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FogDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FogDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FogDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings;
class UScriptStruct* FVolumetricCloudsStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("VolumetricCloudsStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FVolumetricCloudsStaticSettings>()
{
	return FVolumetricCloudsStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseVolumetricClouds_MetaData[];
#endif
		static void NewProp_UseVolumetricClouds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVolumetricClouds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerBottomAltitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerBottomAltitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracingStartMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TracingStartMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracingMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TracingMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanetRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlanetRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloudTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Volumetric Clouds Settings-------------------------------\n//-----------------------------------Volumetric Clouds Static Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Volumetric Clouds Settings-------------------------------\n-----------------------------------Volumetric Clouds Static Settings-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumetricCloudsStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds_SetBit(void* Obj)
	{
		((FVolumetricCloudsStaticSettings*)Obj)->UseVolumetricClouds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds = { "UseVolumetricClouds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVolumetricCloudsStaticSettings), &Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerBottomAltitude_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerBottomAltitude = { "LayerBottomAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, LayerBottomAltitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerBottomAltitude_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerBottomAltitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerHeight_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerHeight = { "LayerHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, LayerHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerHeight_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingStartMaxDistance_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingStartMaxDistance = { "TracingStartMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, TracingStartMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingStartMaxDistance_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingStartMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingMaxDistance_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingMaxDistance = { "TracingMaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, TracingMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingMaxDistance_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingMaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_PlanetRadius_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_PlanetRadius = { "PlanetRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, PlanetRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_PlanetRadius_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_PlanetRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_GroundAlbedo_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_GroundAlbedo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_CloudTexture_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09\x09""bool CloudsTexture = true;\n\x09*/" },
#endif
		{ "EditCondition", "CloudsTexture" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n        bool CloudsTexture = true;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_CloudTexture = { "CloudTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, CloudTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_CloudTexture_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_CloudTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsStaticSettings, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_Material_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_UseVolumetricClouds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerBottomAltitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_LayerHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingStartMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_TracingMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_PlanetRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_GroundAlbedo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_CloudTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"VolumetricCloudsStaticSettings",
		Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::PropPointers),
		sizeof(FVolumetricCloudsStaticSettings),
		alignof(FVolumetricCloudsStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput;
class UScriptStruct* FVolumetricAdvanceOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("VolumetricAdvanceOutput"));
	}
	return Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FVolumetricAdvanceOutput>()
{
	return FVolumetricAdvanceOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseG2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseG2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringOcclusion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringEccentricity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringEccentricity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumetricAdvanceOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG = { "PhaseG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, PhaseG), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG2_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG2 = { "PhaseG2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, PhaseG2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG2_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseBlend_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseBlend = { "PhaseBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, PhaseBlend), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseBlend_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringContribution_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringContribution = { "MultiScatteringContribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, MultiScatteringContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringContribution_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringContribution_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringOcclusion_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringOcclusion = { "MultiScatteringOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, MultiScatteringOcclusion), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringOcclusion_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringEccentricity_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringEccentricity = { "MultiScatteringEccentricity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricAdvanceOutput, MultiScatteringEccentricity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringEccentricity_MetaData), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringEccentricity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseG2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_PhaseBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewProp_MultiScatteringEccentricity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"VolumetricAdvanceOutput",
		Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::PropPointers),
		sizeof(FVolumetricAdvanceOutput),
		alignof(FVolumetricAdvanceOutput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVolumetricAdvanceOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.InnerSingleton, Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ErosionNoise;
class UScriptStruct* FErosionNoise::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ErosionNoise.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ErosionNoise.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FErosionNoise, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("ErosionNoise"));
	}
	return Z_Registration_Info_UScriptStruct_ErosionNoise.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FErosionNoise>()
{
	return FErosionNoise::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FErosionNoise_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsNoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudsNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsNoiseIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudsNoiseIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsErosionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudsErosionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsErosionIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudsErosionIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FErosionNoise_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FErosionNoise>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseScale_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseScale = { "CloudsNoiseScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FErosionNoise, CloudsNoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseScale_MetaData), Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseIntensity_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseIntensity = { "CloudsNoiseIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FErosionNoise, CloudsNoiseIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseIntensity_MetaData), Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionScale_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionScale = { "CloudsErosionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FErosionNoise, CloudsErosionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionScale_MetaData), Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionIntensity_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionIntensity = { "CloudsErosionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FErosionNoise, CloudsErosionIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionIntensity_MetaData), Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_NoiseHeight_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_NoiseHeight = { "NoiseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FErosionNoise, NoiseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_NoiseHeight_MetaData), Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_NoiseHeight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FErosionNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsNoiseIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_CloudsErosionIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FErosionNoise_Statics::NewProp_NoiseHeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FErosionNoise_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"ErosionNoise",
		Z_Construct_UScriptStruct_FErosionNoise_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::PropPointers),
		sizeof(FErosionNoise),
		alignof(FErosionNoise),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FErosionNoise_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FErosionNoise_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FErosionNoise()
	{
		if (!Z_Registration_Info_UScriptStruct_ErosionNoise.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ErosionNoise.InnerSingleton, Z_Construct_UScriptStruct_FErosionNoise_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ErosionNoise.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings;
class UScriptStruct* FVolumetricCloudsDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("VolumetricCloudsDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FVolumetricCloudsDynamicSettings>()
{
	return FVolumetricCloudsDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseCloudsColorPicker_MetaData[];
#endif
		static void NewProp_UseCloudsColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCloudsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsMaskScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsMaskScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsMaskIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsMaskIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsDensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsWindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsWindSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsFeather_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloudsFeather;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Volumetric Clouds Dynamic Settings-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Volumetric Clouds Dynamic Settings-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumetricCloudsDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker_SetBit(void* Obj)
	{
		((FVolumetricCloudsDynamicSettings*)Obj)->UseCloudsColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker = { "UseCloudsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVolumetricCloudsDynamicSettings), &Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColorPicker_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "EditCondition", "UseCloudsColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColorPicker = { "CloudsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColorPicker_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColor_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColor = { "CloudsColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColor_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskScale_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskScale = { "CloudsMaskScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsMaskScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskScale_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskScale_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskIntensity_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskIntensity = { "CloudsMaskIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsMaskIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskIntensity_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskIntensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsBias_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsBias = { "CloudsBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsBias), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsBias_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsBias_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsDensity_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsDensity = { "CloudsDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsDensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsDensity_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsDensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsWindSpeed_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsWindSpeed = { "CloudsWindSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsWindSpeed), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsWindSpeed_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsWindSpeed_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsFeather_MetaData[] = {
		{ "Category", "VolumetricCloudsSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsFeather = { "CloudsFeather", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumetricCloudsDynamicSettings, CloudsFeather), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsFeather_MetaData), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsFeather_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_UseCloudsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsMaskIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsWindSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewProp_CloudsFeather,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"VolumetricCloudsDynamicSettings",
		Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::PropPointers),
		sizeof(FVolumetricCloudsDynamicSettings),
		alignof(FVolumetricCloudsDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere;
class UScriptStruct* FSkyAtmosAtmosphere::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyAtmosAtmosphere"));
	}
	return Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyAtmosAtmosphere>()
{
	return FSkyAtmosAtmosphere::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AtmosphereHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultiScattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultiScattering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Atmosphere-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Atmosphere-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyAtmosAtmosphere>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_AtmosphereHeight_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_AtmosphereHeight = { "AtmosphereHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosAtmosphere, AtmosphereHeight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_AtmosphereHeight_MetaData), Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_AtmosphereHeight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_MultiScattering_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_MultiScattering = { "MultiScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosAtmosphere, MultiScattering), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_MultiScattering_MetaData), Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_MultiScattering_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_AtmosphereHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewProp_MultiScattering,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyAtmosAtmosphere",
		Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::PropPointers),
		sizeof(FSkyAtmosAtmosphere),
		alignof(FSkyAtmosAtmosphere),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosAtmosphere()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.InnerSingleton, Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh;
class UScriptStruct* FSkyAtmosRayleigh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosRayleigh, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyAtmosRayleigh"));
	}
	return Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyAtmosRayleigh>()
{
	return FSkyAtmosRayleigh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Rayleigh-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Rayleigh-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyAtmosRayleigh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosRayleigh, RayleighScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScatteringScale_MetaData), Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScatteringScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScattering_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosRayleigh, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScattering_MetaData), Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScattering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosRayleigh, RayleighExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighExponentialDistribution_MetaData), Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighExponentialDistribution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewProp_RayleighExponentialDistribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyAtmosRayleigh",
		Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::PropPointers),
		sizeof(FSkyAtmosRayleigh),
		alignof(FSkyAtmosRayleigh),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosRayleigh()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.InnerSingleton, Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyAtmosMie;
class UScriptStruct* FSkyAtmosMie::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyAtmosMie.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyAtmosMie.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosMie, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyAtmosMie"));
	}
	return Z_Registration_Info_UScriptStruct_SkyAtmosMie.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyAtmosMie>()
{
	return FSkyAtmosMie::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyAtmosMie_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionsScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionsScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Mie-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Mie-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyAtmosMie>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieScatteringScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScatteringScale_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScatteringScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScattering_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScattering_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScattering_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorptionsScale_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorptionsScale = { "MieAbsorptionsScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieAbsorptionsScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorptionsScale_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorptionsScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorption_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorption_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorption_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAnisotropy_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieAnisotropy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAnisotropy_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAnisotropy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieExponentialDistribution_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosMie, MieExponentialDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieExponentialDistribution_MetaData), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieExponentialDistribution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScatteringScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorptionsScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieAnisotropy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewProp_MieExponentialDistribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyAtmosMie",
		Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::PropPointers),
		sizeof(FSkyAtmosMie),
		alignof(FSkyAtmosMie),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosMie()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyAtmosMie.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyAtmosMie.InnerSingleton, Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyAtmosMie.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption;
class UScriptStruct* FSkyAtmosAbsorption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosAbsorption, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyAtmosAbsorption"));
	}
	return Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyAtmosAbsorption>()
{
	return FSkyAtmosAbsorption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsorptionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsorptionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Absorption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Absorption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Absorption-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Absorption-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyAtmosAbsorption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_AbsorptionScale_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_AbsorptionScale = { "AbsorptionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosAbsorption, AbsorptionScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_AbsorptionScale_MetaData), Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_AbsorptionScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_Absorption_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_Absorption = { "Absorption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosAbsorption, Absorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_Absorption_MetaData), Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_Absorption_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_AbsorptionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewProp_Absorption,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyAtmosAbsorption",
		Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::PropPointers),
		sizeof(FSkyAtmosAbsorption),
		alignof(FSkyAtmosAbsorption),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosAbsorption()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.InnerSingleton, Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection;
class UScriptStruct* FSkyAtmosArtDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyAtmosArtDirection, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyAtmosArtDirection"));
	}
	return Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyAtmosArtDirection>()
{
	return FSkyAtmosArtDirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveViewDistanceScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveViewDistanceScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------ArtDirection-------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------ArtDirection-------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyAtmosArtDirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosArtDirection, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_SkyLuminanceFactor_MetaData), Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_SkyLuminanceFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_AerialPespectiveViewDistanceScale = { "AerialPespectiveViewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosArtDirection, AerialPespectiveViewDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData), Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_HeightFogContribution_MetaData[] = {
		{ "Category", "SkyAtmosAtmosphere" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyAtmosArtDirection, HeightFogContribution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_HeightFogContribution_MetaData), Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_HeightFogContribution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_SkyLuminanceFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_AerialPespectiveViewDistanceScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewProp_HeightFogContribution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyAtmosArtDirection",
		Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::PropPointers),
		sizeof(FSkyAtmosArtDirection),
		alignof(FSkyAtmosArtDirection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyAtmosArtDirection()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.InnerSingleton, Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoonStaticSettings;
class UScriptStruct* FMoonStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoonStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoonStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoonStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("MoonStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MoonStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FMoonStaticSettings>()
{
	return FMoonStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoonStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMoon_MetaData[];
#endif
		static void NewProp_UseMoon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMoon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMoonMesh_MetaData[];
#endif
		static void NewProp_UseMoonMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMoonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoonDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoonSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseTemperature_MetaData[];
#endif
		static void NewProp_UseTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftOcclusion_MetaData[];
#endif
		static void NewProp_LightShaftOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LightShaftOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepthDarkness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepthDarkness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftBloom_MetaData[];
#endif
		static void NewProp_LightShaftBloom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LightShaftBloom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomMaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomMaxBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BloomTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLenght_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLenght;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoonStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoonMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Moon Settings------------------------------------\n//-----------------------------------Moon Static Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Moon Settings------------------------------------\n-----------------------------------Moon Static Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoonStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->UseMoon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon = { "UseMoon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->UseMoonMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh = { "UseMoonMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonDistance_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonDistance = { "MoonDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, MoonDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonDistance_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonSize_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonSize = { "MoonSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, MoonSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonSize_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_SourceAngle_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_SourceAngle = { "SourceAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, SourceAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_SourceAngle_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_SourceAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->CastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->UseTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature = { "UseTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, IndirectLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_IndirectLightingIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_VolumetricScatteringIntensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->LightShaftOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion = { "LightShaftOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_OcclusionDepthDarkness_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_OcclusionDepthDarkness = { "OcclusionDepthDarkness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, OcclusionDepthDarkness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_OcclusionDepthDarkness_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_OcclusionDepthDarkness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom_SetBit(void* Obj)
	{
		((FMoonStaticSettings*)Obj)->LightShaftBloom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom = { "LightShaftBloom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonStaticSettings), &Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, BloomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomThreshold_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomMaxBrightness = { "BloomMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, BloomMaxBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomMaxBrightness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomTint_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomTint = { "BloomTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomTint_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomTint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_ContactShadowLenght = { "ContactShadowLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, ContactShadowLenght), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_ContactShadowLenght_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonStaticMesh_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonStaticMesh = { "MoonStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, MoonStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonStaticMesh_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonStaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonMaterial_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonMaterial = { "MoonMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonStaticSettings, MoonMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonMaterial_MetaData), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonMaterial_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseMoonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_SourceAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_UseTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_IndirectLightingIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_VolumetricScatteringIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_OcclusionDepthDarkness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_LightShaftBloom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomMaxBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_BloomTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_ContactShadowLenght,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewProp_MoonMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"MoonStaticSettings",
		Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::PropPointers),
		sizeof(FMoonStaticSettings),
		alignof(FMoonStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMoonStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MoonStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoonStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoonStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoonDynamicSettings;
class UScriptStruct* FMoonDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoonDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoonDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoonDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("MoonDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MoonDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FMoonDynamicSettings>()
{
	return FMoonDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMoonColorPicker_MetaData[];
#endif
		static void NewProp_UseMoonColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMoonColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonTemperature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonBloomScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonBloomScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseMoonDiscColorPicker_MetaData[];
#endif
		static void NewProp_UseMoonDiscColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMoonDiscColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDiscColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonDiscColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDiscColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonDiscColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDiscBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonDiscBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoonDiscOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoonDiscOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Moon Dynamic Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Moon Dynamic Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoonDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonIntensity_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonIntensity = { "MoonIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonIntensity_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonIntensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker_SetBit(void* Obj)
	{
		((FMoonDynamicSettings*)Obj)->UseMoonColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker = { "UseMoonColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonDynamicSettings), &Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColorPicker_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "EditCondition", "UseMoonColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColorPicker = { "MoonColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColorPicker_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColor_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColor = { "MoonColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColor_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonRotation_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonRotation = { "MoonRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonRotation), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonRotation_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonRotation_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonTemperature_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonTemperature = { "MoonTemperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonTemperature), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonTemperature_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonTemperature_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonBloomScale_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonBloomScale = { "MoonBloomScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonBloomScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonBloomScale_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonBloomScale_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker_SetBit(void* Obj)
	{
		((FMoonDynamicSettings*)Obj)->UseMoonDiscColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker = { "UseMoonDiscColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMoonDynamicSettings), &Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColorPicker_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "EditCondition", "UseMoonDiscColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColorPicker = { "MoonDiscColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonDiscColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColorPicker_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColor_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColor = { "MoonDiscColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonDiscColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColor_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscBrightness_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscBrightness = { "MoonDiscBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonDiscBrightness), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscBrightness_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscBrightness_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscOpacity_MetaData[] = {
		{ "Category", "MoonSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscOpacity = { "MoonDiscOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoonDynamicSettings, MoonDiscOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscOpacity_MetaData), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscOpacity_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonBloomScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_UseMoonDiscColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewProp_MoonDiscOpacity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"MoonDynamicSettings",
		Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::PropPointers),
		sizeof(FMoonDynamicSettings),
		alignof(FMoonDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMoonDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MoonDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoonDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoonDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkyboxStaticSettings;
class UScriptStruct* FSkyboxStaticSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkyboxStaticSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("SkyboxStaticSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FSkyboxStaticSettings>()
{
	return FSkyboxStaticSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSkybox_MetaData[];
#endif
		static void NewProp_UseSkybox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkybox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkyboxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseClouds_MetaData[];
#endif
		static void NewProp_UseClouds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseClouds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layer1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer1Power1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer1Power1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer1Power2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer1Power2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layer2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer2Power1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer2Power1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer2Power2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer2Power2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer2WindMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer2WindMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layer3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer3Power1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer3Power1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer3Power2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer3Power2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer3WindMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Layer3WindMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoiseTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseIntenisty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseIntenisty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudNoiseTiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudNoiseTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseWindMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseWindMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsTilingX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarsTilingX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsTilingY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StarsTilingY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StarsTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloudsFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoCloudsFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoCloudsFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloudsNoFogging_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CloudsNoFogging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoClouds_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NoClouds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Skybox Static Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Skybox Static Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkyboxStaticSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox_SetBit(void* Obj)
	{
		((FSkyboxStaticSettings*)Obj)->UseSkybox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox = { "UseSkybox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkyboxStaticSettings), &Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_SkyboxScale_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_SkyboxScale = { "SkyboxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, SkyboxScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_SkyboxScale_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_SkyboxScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds_SetBit(void* Obj)
	{
		((FSkyboxStaticSettings*)Obj)->UseClouds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds = { "UseClouds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSkyboxStaticSettings), &Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1 = { "Layer1", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer1), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power1_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power1 = { "Layer1Power1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer1Power1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power1_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power2_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power2 = { "Layer1Power2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer1Power2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power2_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2 = { "Layer2", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer2), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power1_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power1 = { "Layer2Power1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer2Power1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power1_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power2_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power2 = { "Layer2Power2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer2Power2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power2_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2WindMultiplier_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2WindMultiplier = { "Layer2WindMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer2WindMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2WindMultiplier_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2WindMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3 = { "Layer3", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer3), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power1_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power1 = { "Layer3Power1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer3Power1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power1_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power2_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power2 = { "Layer3Power2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer3Power2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power2_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3WindMultiplier_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3WindMultiplier = { "Layer3WindMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, Layer3WindMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3WindMultiplier_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3WindMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseTexture_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseTexture = { "NoiseTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, NoiseTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseTexture_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseIntenisty_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseIntenisty = { "NoiseIntenisty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, NoiseIntenisty), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseIntenisty_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseIntenisty_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudNoiseTiling_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudNoiseTiling = { "CloudNoiseTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, CloudNoiseTiling), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudNoiseTiling_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudNoiseTiling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseWindMultiplier_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseClouds" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseWindMultiplier = { "NoiseWindMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, NoiseWindMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseWindMultiplier_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseWindMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingX_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingX = { "StarsTilingX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, StarsTilingX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingX_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingY_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingY = { "StarsTilingY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, StarsTilingY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingY_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTexture_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTexture = { "StarsTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, StarsTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTexture_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsFogging_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsFogging = { "CloudsFogging", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, CloudsFogging), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsFogging_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoCloudsFogging_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoCloudsFogging = { "NoCloudsFogging", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, NoCloudsFogging), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoCloudsFogging_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoCloudsFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsNoFogging_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsNoFogging = { "CloudsNoFogging", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, CloudsNoFogging), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsNoFogging_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsNoFogging_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoClouds_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoClouds = { "NoClouds", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkyboxStaticSettings, NoClouds), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoClouds_MetaData), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoClouds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseSkybox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_SkyboxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_UseClouds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer1Power2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2Power2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer2WindMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3Power2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_Layer3WindMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseIntenisty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudNoiseTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoiseWindMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTilingY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_StarsTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoCloudsFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_CloudsNoFogging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewProp_NoClouds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"SkyboxStaticSettings",
		Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::PropPointers),
		sizeof(FSkyboxStaticSettings),
		alignof(FSkyboxStaticSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSkyboxStaticSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkyboxStaticSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StarsDynamicSettings;
class UScriptStruct* FStarsDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StarsDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StarsDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStarsDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("StarsDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StarsDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FStarsDynamicSettings>()
{
	return FStarsDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarsBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarsOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseStarsColorPicker_MetaData[];
#endif
		static void NewProp_UseStarsColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseStarsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarsColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StarsColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Skybox Dynamic Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Skybox Dynamic Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStarsDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsBrightness_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsBrightness = { "StarsBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarsDynamicSettings, StarsBrightness), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsBrightness_MetaData), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsBrightness_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsOpacity_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsOpacity = { "StarsOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarsDynamicSettings, StarsOpacity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsOpacity_MetaData), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsOpacity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker_SetBit(void* Obj)
	{
		((FStarsDynamicSettings*)Obj)->UseStarsColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker = { "UseStarsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStarsDynamicSettings), &Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker_MetaData), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColorPicker_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseStarsColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColorPicker = { "StarsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarsDynamicSettings, StarsColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColorPicker_MetaData), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColor_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColor = { "StarsColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStarsDynamicSettings, StarsColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColor_MetaData), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColor_MetaData) }; // 429390256
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_UseStarsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewProp_StarsColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"StarsDynamicSettings",
		Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::PropPointers),
		sizeof(FStarsDynamicSettings),
		alignof(FStarsDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStarsDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StarsDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StarsDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StarsDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloudsDynamicSettings;
class UScriptStruct* FCloudsDynamicSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloudsDynamicSettings, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("CloudsDynamicSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FCloudsDynamicSettings>()
{
	return FCloudsDynamicSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSkyboxCloudsColorPicker_MetaData[];
#endif
		static void NewProp_UseSkyboxCloudsColorPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkyboxCloudsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsColorPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyboxCloudsColorPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyboxCloudsColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer1Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer1Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer2Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer2Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer3Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer3Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkyboxCloudsWindSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkyboxCloudsWindSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloudsDynamicSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker_SetBit(void* Obj)
	{
		((FCloudsDynamicSettings*)Obj)->UseSkyboxCloudsColorPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker = { "UseSkyboxCloudsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCloudsDynamicSettings), &Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColorPicker_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "EditCondition", "UseSkyboxCloudsColorPicker" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColorPicker = { "SkyboxCloudsColorPicker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, SkyboxCloudsColorPicker), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColorPicker_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColorPicker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColor_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColor = { "SkyboxCloudsColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, SkyboxCloudsColor), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColor_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColor_MetaData) }; // 429390256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer1Intensity_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer1Intensity = { "Layer1Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, Layer1Intensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer1Intensity_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer1Intensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer2Intensity_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer2Intensity = { "Layer2Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, Layer2Intensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer2Intensity_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer2Intensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer3Intensity_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer3Intensity = { "Layer3Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, Layer3Intensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer3Intensity_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer3Intensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsWindSpeed_MetaData[] = {
		{ "Category", "SkyBoxSettings" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsWindSpeed = { "SkyboxCloudsWindSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloudsDynamicSettings, SkyboxCloudsWindSpeed), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsWindSpeed_MetaData), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsWindSpeed_MetaData) }; // 3321759441
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_UseSkyboxCloudsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColorPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer1Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer2Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_Layer3Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewProp_SkyboxCloudsWindSpeed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"CloudsDynamicSettings",
		Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::PropPointers),
		sizeof(FCloudsDynamicSettings),
		alignof(FCloudsDynamicSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCloudsDynamicSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.InnerSingleton, Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CloudsDynamicSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NightEmissive;
class UScriptStruct* FNightEmissive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NightEmissive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NightEmissive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNightEmissive, (UObject*)Z_Construct_UPackage__Script_DynamicTimeOfDay(), TEXT("NightEmissive"));
	}
	return Z_Registration_Info_UScriptStruct_NightEmissive.OuterSingleton;
}
template<> DYNAMICTIMEOFDAY_API UScriptStruct* StaticStruct<FNightEmissive>()
{
	return FNightEmissive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNightEmissive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NightEmissiveIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NightEmissiveIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPC_TimeOfDay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MPC_TimeOfDay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightEmissive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------------------Night Emissive Dynamic Settings------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------------------Night Emissive Dynamic Settings------------------------------------" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FNightEmissive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNightEmissive>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_NightEmissiveIntensity_MetaData[] = {
		{ "Category", "NightEmissive" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_NightEmissiveIntensity = { "NightEmissiveIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNightEmissive, NightEmissiveIntensity), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_NightEmissiveIntensity_MetaData), Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_NightEmissiveIntensity_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_MPC_TimeOfDay_MetaData[] = {
		{ "Category", "NightEmissive" },
		{ "ModuleRelativePath", "Public/TimeOfDayVariables.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_MPC_TimeOfDay = { "MPC_TimeOfDay", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNightEmissive, MPC_TimeOfDay), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_MPC_TimeOfDay_MetaData), Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_MPC_TimeOfDay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNightEmissive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_NightEmissiveIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightEmissive_Statics::NewProp_MPC_TimeOfDay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNightEmissive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
		nullptr,
		&NewStructOps,
		"NightEmissive",
		Z_Construct_UScriptStruct_FNightEmissive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightEmissive_Statics::PropPointers),
		sizeof(FNightEmissive),
		alignof(FNightEmissive),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightEmissive_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNightEmissive_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightEmissive_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNightEmissive()
	{
		if (!Z_Registration_Info_UScriptStruct_NightEmissive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NightEmissive.InnerSingleton, Z_Construct_UScriptStruct_FNightEmissive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NightEmissive.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::EnumInfo[] = {
		{ ECaptureSourceType_StaticEnum, TEXT("ECaptureSourceType"), &Z_Registration_Info_UEnum_ECaptureSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3027348944U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::ScriptStructInfo[] = {
		{ FBaseSetup::StaticStruct, Z_Construct_UScriptStruct_FBaseSetup_Statics::NewStructOps, TEXT("BaseSetup"), &Z_Registration_Info_UScriptStruct_BaseSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseSetup), 1416310262U) },
		{ FDayNightEvents::StaticStruct, Z_Construct_UScriptStruct_FDayNightEvents_Statics::NewStructOps, TEXT("DayNightEvents"), &Z_Registration_Info_UScriptStruct_DayNightEvents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDayNightEvents), 4117131322U) },
		{ FSunStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FSunStaticSettings_Statics::NewStructOps, TEXT("SunStaticSettings"), &Z_Registration_Info_UScriptStruct_SunStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSunStaticSettings), 158773854U) },
		{ FSunDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FSunDynamicSettings_Statics::NewStructOps, TEXT("SunDynamicSettings"), &Z_Registration_Info_UScriptStruct_SunDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSunDynamicSettings), 3698189955U) },
		{ FSkyLightStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyLightStaticSettings_Statics::NewStructOps, TEXT("SkyLightStaticSettings"), &Z_Registration_Info_UScriptStruct_SkyLightStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyLightStaticSettings), 2322550693U) },
		{ FSkyLightDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyLightDynamicSettings_Statics::NewStructOps, TEXT("SkyLightDynamicSettings"), &Z_Registration_Info_UScriptStruct_SkyLightDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyLightDynamicSettings), 2401960191U) },
		{ FFogStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FFogStaticSettings_Statics::NewStructOps, TEXT("FogStaticSettings"), &Z_Registration_Info_UScriptStruct_FogStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFogStaticSettings), 2010196273U) },
		{ FFogDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FFogDynamicSettings_Statics::NewStructOps, TEXT("FogDynamicSettings"), &Z_Registration_Info_UScriptStruct_FogDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFogDynamicSettings), 4173951743U) },
		{ FVolumetricCloudsStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FVolumetricCloudsStaticSettings_Statics::NewStructOps, TEXT("VolumetricCloudsStaticSettings"), &Z_Registration_Info_UScriptStruct_VolumetricCloudsStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumetricCloudsStaticSettings), 1570209695U) },
		{ FVolumetricAdvanceOutput::StaticStruct, Z_Construct_UScriptStruct_FVolumetricAdvanceOutput_Statics::NewStructOps, TEXT("VolumetricAdvanceOutput"), &Z_Registration_Info_UScriptStruct_VolumetricAdvanceOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumetricAdvanceOutput), 2197618249U) },
		{ FErosionNoise::StaticStruct, Z_Construct_UScriptStruct_FErosionNoise_Statics::NewStructOps, TEXT("ErosionNoise"), &Z_Registration_Info_UScriptStruct_ErosionNoise, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FErosionNoise), 2185429456U) },
		{ FVolumetricCloudsDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FVolumetricCloudsDynamicSettings_Statics::NewStructOps, TEXT("VolumetricCloudsDynamicSettings"), &Z_Registration_Info_UScriptStruct_VolumetricCloudsDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumetricCloudsDynamicSettings), 3336410489U) },
		{ FSkyAtmosAtmosphere::StaticStruct, Z_Construct_UScriptStruct_FSkyAtmosAtmosphere_Statics::NewStructOps, TEXT("SkyAtmosAtmosphere"), &Z_Registration_Info_UScriptStruct_SkyAtmosAtmosphere, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyAtmosAtmosphere), 1589156750U) },
		{ FSkyAtmosRayleigh::StaticStruct, Z_Construct_UScriptStruct_FSkyAtmosRayleigh_Statics::NewStructOps, TEXT("SkyAtmosRayleigh"), &Z_Registration_Info_UScriptStruct_SkyAtmosRayleigh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyAtmosRayleigh), 939655828U) },
		{ FSkyAtmosMie::StaticStruct, Z_Construct_UScriptStruct_FSkyAtmosMie_Statics::NewStructOps, TEXT("SkyAtmosMie"), &Z_Registration_Info_UScriptStruct_SkyAtmosMie, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyAtmosMie), 4036007406U) },
		{ FSkyAtmosAbsorption::StaticStruct, Z_Construct_UScriptStruct_FSkyAtmosAbsorption_Statics::NewStructOps, TEXT("SkyAtmosAbsorption"), &Z_Registration_Info_UScriptStruct_SkyAtmosAbsorption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyAtmosAbsorption), 3578229344U) },
		{ FSkyAtmosArtDirection::StaticStruct, Z_Construct_UScriptStruct_FSkyAtmosArtDirection_Statics::NewStructOps, TEXT("SkyAtmosArtDirection"), &Z_Registration_Info_UScriptStruct_SkyAtmosArtDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyAtmosArtDirection), 132198727U) },
		{ FMoonStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FMoonStaticSettings_Statics::NewStructOps, TEXT("MoonStaticSettings"), &Z_Registration_Info_UScriptStruct_MoonStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoonStaticSettings), 2099035504U) },
		{ FMoonDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FMoonDynamicSettings_Statics::NewStructOps, TEXT("MoonDynamicSettings"), &Z_Registration_Info_UScriptStruct_MoonDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoonDynamicSettings), 666288295U) },
		{ FSkyboxStaticSettings::StaticStruct, Z_Construct_UScriptStruct_FSkyboxStaticSettings_Statics::NewStructOps, TEXT("SkyboxStaticSettings"), &Z_Registration_Info_UScriptStruct_SkyboxStaticSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkyboxStaticSettings), 2913315213U) },
		{ FStarsDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FStarsDynamicSettings_Statics::NewStructOps, TEXT("StarsDynamicSettings"), &Z_Registration_Info_UScriptStruct_StarsDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStarsDynamicSettings), 2655914109U) },
		{ FCloudsDynamicSettings::StaticStruct, Z_Construct_UScriptStruct_FCloudsDynamicSettings_Statics::NewStructOps, TEXT("CloudsDynamicSettings"), &Z_Registration_Info_UScriptStruct_CloudsDynamicSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloudsDynamicSettings), 2588355211U) },
		{ FNightEmissive::StaticStruct, Z_Construct_UScriptStruct_FNightEmissive_Statics::NewStructOps, TEXT("NightEmissive"), &Z_Registration_Info_UScriptStruct_NightEmissive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNightEmissive), 753410999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_1217763003(TEXT("/Script/DynamicTimeOfDay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Marketplace_Projects_TerminalBallisticsExampleProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_TimeOfDayVariables_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
