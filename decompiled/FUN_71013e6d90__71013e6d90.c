// addr:      71013e6d90
// offset:    0x13e6d90
// name:      FUN_71013e6d90
// mangled:   
// signature: undefined __cdecl FUN_71013e6d90(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013e6d90(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long ****pppplVar4;
  uint uVar5;
  undefined8 extraout_x1;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined **local_30;
  long *local_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  if (*(int *)(param_1 + 0x204) == 0) {
    FUN_710377aee0(0x3f800000,lVar2 + 0x128);
    lVar2 = DAT_710532f7f0;
    if (DAT_710532f7f0 == 0) {
      return;
    }
    lVar11 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
    if (*(char *)(lVar11 + 0x1f5) != '\0') {
      lVar7 = *(long *)(lVar11 + 0x100);
      lVar9 = *(long *)(lVar11 + 0x108);
      uVar3 = 0;
      if (lVar9 - lVar7 != 0) {
        uVar3 = (lVar9 - lVar7 >> 3) * 0x155 - 1;
      }
      uVar10 = *(long *)(lVar11 + 0x120) + *(long *)(lVar11 + 0x118);
      if (uVar3 == uVar10) {
        FUN_7101afbf30((ulong *)(lVar11 + 0xf8),extraout_x1,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar10 = *(long *)(lVar11 + 0x118) + *(long *)(lVar11 + 0x120);
        lVar7 = *(long *)(lVar11 + 0x100);
        lVar9 = *(long *)(lVar11 + 0x108);
      }
      if (lVar9 == lVar7) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)(*(long *)(lVar7 + (uVar10 / 0x155) * 8) + (uVar10 % 0x155) * 0xc);
      }
      *puVar8 = &DAT_100000008;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(long *)(lVar11 + 0x120) = *(long *)(lVar11 + 0x120) + 1;
      lVar11 = *(long *)(*(long *)(*(long *)(lVar2 + 8) + 8) + 0x80);
    }
    FUN_7103776910(&local_30,**(long **)(lVar11 + 0x130) + 8,(long ****)"set_txt_key",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    plVar1 = local_28;
    lVar2 = *local_28;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    }
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    *(undefined1 *)(lVar11 + 0x200) = 1;
    return;
  }
  uVar3 = FUN_7101bc2f00(lVar2);
  if ((uVar3 & 1) != 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x234);
  if (iVar6 == 2) {
    iVar6 = *(int *)(param_1 + 0x238);
    if (iVar6 == 2) {
      iVar6 = *(int *)(param_1 + 0x208);
    }
    else {
      *(undefined4 *)(param_1 + 0x238) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x234) = 2;
  }
  switch(iVar6) {
  case 6:
    *(undefined4 *)(param_1 + 0x23c) = 1;
    goto LAB_71013e6fa8;
  case 7:
    *(undefined4 *)(param_1 + 0x23c) = 2;
    pppplVar4 = *(long *****)(*(long *)(param_1 + 8) + 0x80);
    uVar5 = 0;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x23c) = 3;
    pppplVar4 = *(long *****)(*(long *)(param_1 + 8) + 0x80);
    uVar5 = 1;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x23c) = 4;
    pppplVar4 = *(long *****)(*(long *)(param_1 + 8) + 0x80);
    uVar5 = 2;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x23c) = 5;
    pppplVar4 = *(long *****)(*(long *)(param_1 + 8) + 0x80);
    uVar5 = 3;
    break;
  default:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    goto LAB_71013e6fa8;
  }
  FUN_7101bb9290(pppplVar4,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_71013e6fa8:
  if (*(uint *)(param_1 + 0x1fc) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1fc) * 4 + 0x1b0) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

