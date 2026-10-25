// addr:      7101d48ed0
// offset:    0x1d48ed0
// name:      FUN_7101d48ed0
// mangled:   
// signature: undefined __cdecl FUN_7101d48ed0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d48ed0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined **local_50;
  long *local_48;
  undefined **local_40;
  ulong local_38;
  
  bVar7 = *(int *)(param_1 + 0x2e4) != 0;
  plVar1 = (long *)(param_1 + 0x70);
  if (bVar7) {
    plVar1 = (long *)(param_1 + 0x88);
  }
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar4 = (long *)(param_1 + 0x20);
  if (bVar7) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    plVar4 = (long *)(param_1 + 0x48);
  }
  if (*(int *)(param_1 + 0x1dc) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xa0),0);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xa8),0);
    FUN_71037760f0(**(long **)*puVar2,1);
    pppplVar9 = (long ****)0x10006;
    FUN_7103775dc0(*(long **)*puVar2,1,(long ****)0x10006,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(*plVar4 + 0x10))(plVar4,0);
    FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar2 + 0x10),0x710438d042);
    (**(code **)(**(long **)(param_1 + 0x210) + 0x70))(*(long **)(param_1 + 0x210),0);
    (**(code **)(**(long **)(param_1 + 0x218) + 0x70))(*(long **)(param_1 + 0x218),0);
    FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0xa8) + 8),pppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_50,**(long **)(param_1 + 0xa8) + 8,(long ****)"offset_lr",pppplVar9,
                   param_4,param_5,param_6,param_7,param_8);
    plVar1 = local_48;
    uVar11 = _ConstantZero;
    if (*local_48 != 0) {
      uVar11 = *(undefined8 *)(*local_48 + 0x30);
    }
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_50,**(long **)(param_1 + 0xa8) + 8,(long ****)"plt_menu_lyt_00",pppplVar9,
                   param_4,param_5,param_6,param_7,param_8);
    plVar1 = local_48;
    uVar5 = _ConstantZero;
    if (*local_48 != 0) {
      uVar5 = *(undefined8 *)(*local_48 + 0x30);
    }
    local_50 = &PTR_FUN_710523d9a8;
    bVar7 = local_48 != (long *)0x0;
    local_48 = (long *)0;
    if (bVar7) {
      local_48 = (long *)0x0;
      local_50 = &PTR_FUN_710523d9a8;
      FUN_710392eb40((ulong)plVar1);
    }
    uVar6 = local_38;
    lVar10 = **(long **)(*(long *)(param_1 + 0x2b0) + 0x18);
    if (lVar10 == 0) {
      fVar12 = (float)((ulong)_ConstantZero >> 0x20);
    }
    else {
      fVar12 = *(float *)(lVar10 + 0x34);
    }
    lVar10 = *(long *)(plVar4[4] + 0xd8);
    if (*(long *)(lVar10 + 8) == 0) {
      lVar10 = **(long **)(*(long *)(plVar4[4] + 0xe8) + 0x18);
    }
    else {
      lVar10 = **(long **)(lVar10 + 0x18);
    }
    if (lVar10 != 0) {
      *(ulong *)(lVar10 + 0x30) = CONCAT44(fVar12 + 0.0,(float)uVar5 + (float)uVar11);
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    }
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar6);
    }
  }
  else {
    (**(code **)(*plVar4 + 0x20))(plVar4,**(long **)*puVar2 + 0x5f8);
    auVar13 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if ((auVar13._0_8_ & 1) == 0) {
      FUN_7103775fa0(*(long **)*puVar2,auVar13._8_8_,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      **(uint **)(DAT_710593b988 + 8) =
           **(uint **)(DAT_710593b988 + 8) &
           (1 << (ulong)(*(uint *)((long)plVar4 + 0x14) & 0x1f) ^ 0xffffffffU);
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xa8),1);
      FUN_71037760f0(**(long **)*puVar2,0);
      if (0 < *(int *)(param_1 + 0x1d4)) {
        *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
      }
      (**(code **)(**(long **)(param_1 + 0x218) + 0x70))
                (*(long **)(param_1 + 0x218),*(undefined1 *)(param_1 + 0x2f1));
      if (*(char *)(param_1 + 0x2f1) == '\0') {
        bVar7 = true;
      }
      else {
        FUN_7103783c10((long *)(param_1 + 0x218),0,0,1,param_5,param_6,param_7,param_8);
        bVar7 = *(char *)(param_1 + 0x2f1) == '\0';
      }
                    /* WARNING: Could not recover jumptable at 0x007101d492cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x210) + 0x70))(*(long **)(param_1 + 0x210),bVar7);
      return;
    }
    iVar3 = *(int *)(plVar4[4] + 0x130);
    if (iVar3 != -2) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      if ((-1 < iVar3) && ((ulong)(long)iVar3 < (ulong)(plVar1[1] - *plVar1 >> 2))) {
        *(int *)(param_1 + 0x2a0) = iVar3;
      }
      FUN_7101d49360(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      (**(code **)(**(long **)(param_1 + 0x218) + 0x70))(*(long **)(param_1 + 0x218),0);
    }
  }
  return;
}

