#include "Player.h"

#include "Includes.h"
#include "Globals.h"
#include "Util.h"

using namespace Player::Originals;

void Player::ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* PC)
{
	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	auto Pawn = (AFortPlayerPawn*)PC->Pawn;

	if (!Pawn || GetGameState()->GamePhase == EAthenaGamePhase::Aircraft)
		return ServerLoadingScreenDropped(PC);

	UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);
	
	PlayerState->OnRep_CharacterData();

	return ServerLoadingScreenDropped(PC);
}

bool IsPrimaryQuickbar(UFortItemDefinition* Def)
{
	return Def->IsA(UFortConsumableItemDefinition::StaticClass()) || Def->IsA(UFortWeaponRangedItemDefinition::StaticClass()) || Def->IsA(UFortGadgetItemDefinition::StaticClass());
}

void (*ServerHandlePickupOG)(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound);
void ServerHandlePickup(AFortPlayerPawn* Pawn, AFortPickup* Pickup, float InFlyTime, FVector InStartDirection, bool bPlayPickupSound)
{
	if (Pickup->bPickedUp)
		return ServerHandlePickupOG(Pawn, Pickup, InFlyTime, InStartDirection, bPlayPickupSound);

	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (PC->IsA(ABP_PhoebePlayerController_C::StaticClass())) // AAIController
		return;
	UFortItemDefinition* Def = Pickup->PrimaryPickupItemEntry.ItemDefinition;
	int PickupCount = Pickup->PrimaryPickupItemEntry.Count;
	int PickupLoadedAmmo = Pickup->PrimaryPickupItemEntry.LoadedAmmo;
	FFortItemEntry* FoundEntry = nullptr;
	int Items = 0;
	//float MaxStackSize = GetMaxStackSize(Def);
	bool Stackable = Def->IsStackable();

	if (!Pawn->CurrentWeapon)
		return;

	for (size_t i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		FFortItemEntry& Entry = PC->WorldInventory->Inventory.ReplicatedEntries[i];

		if (IsPrimaryQuickbar(Def) && IsPrimaryQuickbar(Entry.ItemDefinition))
		{
			Items++;
			if (Items > 5)
			{
				//Remove(PC, Entry.ItemGuid);
			}
		}
	}
}

void Player::HookAll()
{
	auto PlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

	VirtualHook(PlayerControllerAthenaDefault->VTable, 619, ServerLoadingScreenDroppedHook, "ServerLoadingScreenDropped", (PVOID*)&ServerLoadingScreenDropped);
}
