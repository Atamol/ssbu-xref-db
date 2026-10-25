// addr:      710339a400
// offset:    0x339a400
// name:      FUN_710339a400
// mangled:   
// signature: undefined __cdecl FUN_710339a400(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710339a400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined **local_30;
  ulong local_28;
  
  if ((*(char *)(param_1 + 0x60) != '\0') && (*(long *)(*(long *)(param_1 + 0x18) + 8) != 0)) {
    uVar4 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x58));
    FUN_7103778630((ulong)uVar4,*(long *)(param_1 + 0x18),0x7104464398);
    iVar1 = *(int *)(param_1 + 0x58);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar4 = (*(int *)(param_1 + 0x5c) - iVar1) + (*(int *)(param_1 + 0x54) - iVar2) * 100;
    if (uVar4 < 0x14) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 / 0x14;
    }
    if (99 < uVar4) {
      uVar4 = 100;
    }
    *(uint *)(param_1 + 0x58) = uVar4 + iVar1;
    if (99 < uVar4 + iVar1) {
      if (iVar1 < 99) {
        *(undefined4 *)(param_1 + 0x58) = 99;
      }
      else {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(int *)(param_1 + 0x50) = iVar2;
      }
      if (iVar2 == 99) {
        *(undefined4 *)(param_1 + 0x58) = 100;
      }
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) != 0) {
        FUN_7103776910(&local_30,param_1 + 0x10,(long ****)"set_txt_sp_level",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a280((long)&local_30,(byte *)"mel_result_item_unit_35_00",1);
        uVar3 = local_28;
        local_30 = &PTR_FUN_710523d9a8;
        local_28 = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
      }
    }
  }
  return;
}

