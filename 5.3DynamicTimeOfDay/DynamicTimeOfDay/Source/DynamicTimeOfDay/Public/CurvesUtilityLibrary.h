// Copyright - Ambro¿y Farski 2023

#pragma once


#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Math/Vector.h"
#include "CurvesUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS()
class DYNAMICTIMEOFDAY_API UCurvesUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable, Category = "RuntimeCurve")
		static float GetValueForTimeInFloatCurve(FRuntimeFloatCurve Curve, float Time);

	UFUNCTION(BlueprintCallable, Category = "RuntimeCurve")
		static FVector GetValueForTimeInVectorCurve(FRuntimeVectorCurve Curve, float Time);
		
	UFUNCTION(BlueprintCallable, Category = "RuntimeCurve")
		static void SetValueForTimeInVectorCurve(UPARAM(ref)FRuntimeVectorCurve& Curve, float Time, FVector Vector);
		
};

