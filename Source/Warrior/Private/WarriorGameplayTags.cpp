// John Inocente All Rights Reserved


#include "WarriorGameplayTags.h"


namespace WarriorGameplayTags
{
	/** Input Tags **/
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move,"InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look,"InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipSword,"InputTag.EquipSword");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_EquipShield,"InputTag.EquipShield");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequipSword,"InputTag.UnequipSword");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequipShield,"InputTag.UnequipShield");
	
	/** Player tags **/
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe,"Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Sword,"Player.Weapon.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Shield,"Player.Weapon.Shield");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Sword,"Player.Event.Equip.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Sword,"Player.Event.Unequip.Sword");
}