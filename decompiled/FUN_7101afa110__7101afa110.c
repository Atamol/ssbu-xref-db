// addr:      7101afa110
// offset:    0x1afa110
// name:      FUN_7101afa110
// mangled:   
// signature: undefined __cdecl FUN_7101afa110(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101afa110(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined **local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    if (*(char *)(param_1 + 0x1f0) == '\0') {
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x130),1);
      puVar5 = *(uint **)(DAT_710593b988 + 8);
      uVar2 = *puVar5 | 1 << (ulong)(*(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130)
                                                        + 0x600) + 0x494) & 0x1f);
      param_2 = extraout_x1_00;
    }
    else {
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x130),0);
      puVar5 = *(uint **)(DAT_710593b988 + 8);
      uVar2 = *puVar5 & (1 << (ulong)(*(uint *)(*(long *)(*(long *)**(undefined8 **)
                                                                     (param_1 + 0x130) + 0x600) +
                                               0x494) & 0x1f) ^ 0xffffffffU);
      param_2 = extraout_x1;
    }
    *puVar5 = uVar2;
    if (*(int *)(param_1 + 0x1fc) != 2) {
      lVar7 = **(long **)(param_1 + 0x130);
      FUN_7103776910(&local_30,lVar7 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar1 = local_28;
      lVar3 = *local_28;
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71042917af);
      *(undefined4 *)(param_1 + 0x1fc) = 2;
      param_2 = extraout_x1_01;
    }
  }
  FUN_7101afa380(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(long *)(param_1 + 0x120) == 0) {
    return;
  }
  auVar8 = FUN_7101afa660(param_1,extraout_x1_02,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar6 = auVar8._4_4_;
  switch(auVar8._0_4_) {
  case 1:
    FUN_7101afb9a0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x130),0);
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x130) + 0x600) +
                                0x494) & 0x1f) ^ 0xffffffffU);
    FUN_7101afbb40(param_1,(ulong)(iVar6 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    if (0x12 < *(uint *)(param_1 + 0xe4)) goto LAB_7101afa370;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
    if (0x11 < *(int *)(param_1 + 0xe4)) {
      return;
    }
    uVar2 = *(int *)(param_1 + 0xe4) + 1;
    *(uint *)(param_1 + 0xe4) = uVar2;
    if (0x12 < uVar2) goto LAB_7101afa370;
    uVar4 = 1;
    break;
  case 2:
    if (*(int *)(param_1 + 0x1e4) != 0) {
      return;
    }
  case 6:
    FUN_7101afbc50(param_1,(ulong)(iVar6 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0xe4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 0;
      return;
    }
LAB_7101afa370:
                    /* WARNING: Subroutine does not return */
    abort();
  default:
    goto switchD_7101afa260_caseD_3;
  case 8:
    FUN_7101afb9a0(param_1,(ulong)(iVar6 != 0),param_3,param_4,param_5,param_6,param_7,param_8);
    uVar2 = *(uint *)(param_1 + 0xe4);
    if (0x12 < uVar2) goto LAB_7101afa370;
    uVar4 = 5;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x98) = uVar4;
switchD_7101afa260_caseD_3:
  return;
}

