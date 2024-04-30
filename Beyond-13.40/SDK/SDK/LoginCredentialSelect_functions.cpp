#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCredentialSelect

#include "Basic.hpp"

#include "LoginCredentialSelect_classes.hpp"
#include "LoginCredentialSelect_parameters.hpp"


namespace SDK
{

// Function LoginCredentialSelect.LoginCredentialSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginCredentialSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCredentialSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginCredentialSelect_C::ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginCredentialSelect_C", "ExecuteUbergraph_LoginCredentialSelect");

	Params::LoginCredentialSelect_C_ExecuteUbergraph_LoginCredentialSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

