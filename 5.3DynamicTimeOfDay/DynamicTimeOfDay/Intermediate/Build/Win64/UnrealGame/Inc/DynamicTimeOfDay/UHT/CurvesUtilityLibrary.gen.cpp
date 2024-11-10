// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicTimeOfDay/Public/CurvesUtilityLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurvesUtilityLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DYNAMICTIMEOFDAY_API UClass* Z_Construct_UClass_UCurvesUtilityLibrary();
	DYNAMICTIMEOFDAY_API UClass* Z_Construct_UClass_UCurvesUtilityLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
	UPackage* Z_Construct_UPackage__Script_DynamicTimeOfDay();
// End Cross Module References
	DEFINE_FUNCTION(UCurvesUtilityLibrary::execSetValueForTimeInVectorCurve)
	{
		P_GET_STRUCT_REF(FRuntimeVectorCurve,Z_Param_Out_Curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(Z_Param_Out_Curve,Z_Param_Time,Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCurvesUtilityLibrary::execGetValueForTimeInVectorCurve)
	{
		P_GET_STRUCT(FRuntimeVectorCurve,Z_Param_Curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(Z_Param_Curve,Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCurvesUtilityLibrary::execGetValueForTimeInFloatCurve)
	{
		P_GET_STRUCT(FRuntimeFloatCurve,Z_Param_Curve);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(Z_Param_Curve,Z_Param_Time);
		P_NATIVE_END;
	}
	void UCurvesUtilityLibrary::StaticRegisterNativesUCurvesUtilityLibrary()
	{
		UClass* Class = UCurvesUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetValueForTimeInFloatCurve", &UCurvesUtilityLibrary::execGetValueForTimeInFloatCurve },
			{ "GetValueForTimeInVectorCurve", &UCurvesUtilityLibrary::execGetValueForTimeInVectorCurve },
			{ "SetValueForTimeInVectorCurve", &UCurvesUtilityLibrary::execSetValueForTimeInVectorCurve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics
	{
		struct CurvesUtilityLibrary_eventGetValueForTimeInFloatCurve_Parms
		{
			FRuntimeFloatCurve Curve;
			float Time;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInFloatCurve_Parms, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 1477693291
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInFloatCurve_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInFloatCurve_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeCurve" },
		{ "ModuleRelativePath", "Public/CurvesUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurvesUtilityLibrary, nullptr, "GetValueForTimeInFloatCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::CurvesUtilityLibrary_eventGetValueForTimeInFloatCurve_Parms), Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics
	{
		struct CurvesUtilityLibrary_eventGetValueForTimeInVectorCurve_Parms
		{
			FRuntimeVectorCurve Curve;
			float Time;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInVectorCurve_Parms, Curve), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(nullptr, 0) }; // 3220264638
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInVectorCurve_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventGetValueForTimeInVectorCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeCurve" },
		{ "ModuleRelativePath", "Public/CurvesUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurvesUtilityLibrary, nullptr, "GetValueForTimeInVectorCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::CurvesUtilityLibrary_eventGetValueForTimeInVectorCurve_Parms), Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics
	{
		struct CurvesUtilityLibrary_eventSetValueForTimeInVectorCurve_Parms
		{
			FRuntimeVectorCurve Curve;
			float Time;
			FVector Vector;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventSetValueForTimeInVectorCurve_Parms, Curve), Z_Construct_UScriptStruct_FRuntimeVectorCurve, METADATA_PARAMS(nullptr, 0) }; // 3220264638
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventSetValueForTimeInVectorCurve_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurvesUtilityLibrary_eventSetValueForTimeInVectorCurve_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::NewProp_Vector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeCurve" },
		{ "ModuleRelativePath", "Public/CurvesUtilityLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurvesUtilityLibrary, nullptr, "SetValueForTimeInVectorCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::CurvesUtilityLibrary_eventSetValueForTimeInVectorCurve_Parms), Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurvesUtilityLibrary);
	UClass* Z_Construct_UClass_UCurvesUtilityLibrary_NoRegister()
	{
		return UCurvesUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCurvesUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurvesUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicTimeOfDay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurvesUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInFloatCurve, "GetValueForTimeInFloatCurve" }, // 1717110212
		{ &Z_Construct_UFunction_UCurvesUtilityLibrary_GetValueForTimeInVectorCurve, "GetValueForTimeInVectorCurve" }, // 2115920816
		{ &Z_Construct_UFunction_UCurvesUtilityLibrary_SetValueForTimeInVectorCurve, "SetValueForTimeInVectorCurve" }, // 3269934909
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurvesUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CurvesUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/CurvesUtilityLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurvesUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurvesUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurvesUtilityLibrary_Statics::ClassParams = {
		&UCurvesUtilityLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurvesUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurvesUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurvesUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UCurvesUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurvesUtilityLibrary.OuterSingleton, Z_Construct_UClass_UCurvesUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurvesUtilityLibrary.OuterSingleton;
	}
	template<> DYNAMICTIMEOFDAY_API UClass* StaticClass<UCurvesUtilityLibrary>()
	{
		return UCurvesUtilityLibrary::StaticClass();
	}
	UCurvesUtilityLibrary::UCurvesUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurvesUtilityLibrary);
	UCurvesUtilityLibrary::~UCurvesUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_CurvesUtilityLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_CurvesUtilityLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurvesUtilityLibrary, UCurvesUtilityLibrary::StaticClass, TEXT("UCurvesUtilityLibrary"), &Z_Registration_Info_UClass_UCurvesUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurvesUtilityLibrary), 3722256863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_CurvesUtilityLibrary_h_638197105(TEXT("/Script/DynamicTimeOfDay"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_CurvesUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DynamicTimeOfDay_Source_DynamicTimeOfDay_Public_CurvesUtilityLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
