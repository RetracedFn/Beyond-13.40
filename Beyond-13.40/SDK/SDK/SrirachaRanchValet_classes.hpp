#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SrirachaRanchValet

#include "Basic.hpp"

#include "SrirachaRanch_classes.hpp"


namespace SDK
{

// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
// 0x0000 (0x0288 - 0x0288)
class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent
{
public:
	void ValetVehicleExploded(class AFortDagwoodVehicle* Veh);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StreamingRadioPlayerComponent_Valet">();
	}
	static class UStreamingRadioPlayerComponent_Valet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStreamingRadioPlayerComponent_Valet>();
	}
};

}

