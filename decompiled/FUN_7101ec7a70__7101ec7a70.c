// addr:      7101ec7a70
// offset:    0x1ec7a70
// name:      FUN_7101ec7a70
// mangled:   
// signature: undefined __cdecl FUN_7101ec7a70(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ec7a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776640(&local_40,*(long *)(param_1 + 8),(byte ****)"set_btn_11_stop",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_30,(long)&local_40,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                 param_7,param_8);
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
  if ((*(int *)(*(long *)(DAT_7105329d78 + 8) + 0x750) == 1) &&
     (*(int *)(*(long *)(DAT_7105329d78 + 8) + 0x5d8) == 0)) {
    pcVar3 = "mnu_stgcreate_edit_stop_guide_lefthand";
  }
  else {
    pcVar3 = "mnu_stgcreate_edit_stop_guide";
  }
  FUN_710377a120((long)&local_30,pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}

