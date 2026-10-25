// addr:      7101e57af0
// offset:    0x1e57af0
// name:      FUN_7101e57af0
// mangled:   
// signature: undefined __cdecl FUN_7101e57af0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e57af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  uVar1 = *(uint *)(*DAT_710532a860 + 0x1c);
  puVar5 = *(undefined8 **)(*DAT_7105314510 + 0x158);
  FUN_7103776640(&local_30,param_1 + 0x10,(byte ****)"set_part_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_50,(long)&local_30,(long ****)"set_txt_02",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch(*(undefined1 *)(*(long *)*puVar5 + (ulong)uVar1 * 0x3d700 + 0x3d68c)) {
  case 0:
    FUN_710377a120((long)&local_40,"cam_menu_etc_easy",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_50,"cam_menu_etc_easy",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar4 = "icon_type_easy";
    break;
  case 1:
    FUN_710377a120((long)&local_40,"cam_menu_etc_normal",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_50,"cam_menu_etc_normal",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar4 = "icon_type_normal";
    break;
  case 2:
    FUN_710377a120((long)&local_40,"cam_menu_etc_hard",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_50,"cam_menu_etc_hard",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar4 = "icon_type_hard";
    break;
  case 3:
    FUN_710377a120((long)&local_40,"cam_menu_etc_very_easy",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_50,"cam_menu_etc_very_easy",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar4 = "icon_type_very_easy";
    break;
  default:
    goto switchD_7101e57b9c_default;
  }
  FUN_7103778300(0x3f800000,local_28,(long)pcVar4);
switchD_7101e57b9c_default:
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_28;
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

