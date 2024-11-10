// Copyright - Ambro¿y Farski 2023



#include "CurvesUtilityLibrary.h"

float UCurvesUtilityLibrary::GetValueForTimeInFloatCurve(FRuntimeFloatCurve Curve, float Time)
{
	return Curve.GetRichCurve()->Eval(Time);
}

FVector UCurvesUtilityLibrary::GetValueForTimeInVectorCurve(FRuntimeVectorCurve Curve, float Time)
{
	return Curve.GetValue(Time);
}

void UCurvesUtilityLibrary::SetValueForTimeInVectorCurve(FRuntimeVectorCurve& Curve, float Time, FVector Vector)
{
	Curve.GetRichCurve(0)->UpdateOrAddKey(Time, Vector.X);
	Curve.GetRichCurve(1)->UpdateOrAddKey(Time, Vector.Y);
	Curve.GetRichCurve(2)->UpdateOrAddKey(Time, Vector.Z);
}

