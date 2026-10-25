// addr:      7101ca77f0
// offset:    0x1ca77f0
// name:      FUN_7101ca77f0
// mangled:   
// signature: undefined __cdecl FUN_7101ca77f0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca77f0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0x150) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_60,(long)&local_40,(byte ****)"scr_sort",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_50,(long)&local_60,(long ****)"set_txt_list",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  if (param_2 - 1U < 3) {
    pcVar3 = (&PTR_s_mnu_share_list_popular_71050ae080)[(int)(param_2 - 1U)];
  }
  else {
    pcVar3 = "mnu_share_list_recommend";
  }
  FUN_710377a120((long)&local_50,pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

