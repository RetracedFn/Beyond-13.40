#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RenderToTextureFunctionLibrary

#include "Basic.hpp"

#include "RenderToTextureFunctionLibrary_classes.hpp"
#include "RenderToTextureFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Array to HLSL Int Array
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EIntTypes                               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Variable_Name                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// TArray<int32>                           Int                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FVector2D>                Int2                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FVector>                  Int3                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FLinearColor>             Int4                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Array_to_HLSL_Int_Array(EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RenderToTextureFunctionLibrary_C", "Array to HLSL Int Array");

	Params::RenderToTextureFunctionLibrary_C_Array_to_HLSL_Int_Array Parms{};

	Parms.Type = Type;
	Parms.Variable_Name = std::move(Variable_Name);
	Parms.Int = std::move(Int);
	Parms.Int2 = std::move(Int2);
	Parms.Int3 = std::move(Int3);
	Parms.Int4 = std::move(Int4);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Variable_Name = std::move(Parms.Variable_Name);
	Int = std::move(Parms.Int);
	Int2 = std::move(Parms.Int2);
	Int3 = std::move(Parms.Int3);
	Int4 = std::move(Parms.Int4);

	if (String != nullptr)
		*String = std::move(Parms.String);
}


// Function RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C.Set Canvas Material Scale and Position
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Screen_Position                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Screen_Size                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URenderToTextureFunctionLibrary_C::Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RenderToTextureFunctionLibrary_C", "Set Canvas Material Scale and Position");

	Params::RenderToTextureFunctionLibrary_C_Set_Canvas_Material_Scale_and_Position Parms{};

	Parms.Size = std::move(Size);
	Parms.Position = std::move(Position);
	Parms.Scale = Scale;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Screen_Position != nullptr)
		*Screen_Position = std::move(Parms.Screen_Position);

	if (Screen_Size != nullptr)
		*Screen_Size = std::move(Parms.Screen_Size);
}

}

