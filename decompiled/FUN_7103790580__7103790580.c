// addr:      7103790580
// offset:    0x3790580
// name:      FUN_7103790580
// mangled:   
// signature: undefined __cdecl FUN_7103790580(long param_1, undefined8 param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103790580(long param_1,undefined8 param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  undefined4 uVar10;
  undefined **ppuVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  byte ***pppbVar18;
  void *pvVar19;
  byte ****ppppbVar20;
  size_t __n;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  byte ***local_c0;
  byte local_b8 [64];
  long *local_78;
  long ***local_70;
  undefined4 local_64;
  
  ppppbVar7 = &local_c0;
  ppppbVar20 = &local_c0;
  ppppbVar9 = param_4;
  if (((DAT_710593bae8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593bae8), iVar3 != 0)) {
    if (((DAT_710593baf0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593baf0), iVar3 != 0)) {
      DAT_710593baf8 = 0;
      __cxa_guard_release(&DAT_710593baf0);
    }
    DAT_710593bb00 = &DAT_710593baf8;
    __cxa_guard_release(&DAT_710593bae8);
  }
  if (param_3 != (byte ****)0x0) {
    for (puVar4 = (undefined8 *)(*(code *)**param_3)(param_3); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)*puVar4) {
      if ((undefined8 **)puVar4 == &DAT_710593bb00) goto LAB_71037905f0;
    }
    param_3 = (byte ****)0x0;
  }
LAB_71037905f0:
  pppbVar18 = *param_4;
  iVar3 = strcmp("CrossNormalButton",(char *)pppbVar18);
  if (iVar3 == 0) {
    plVar5 = (long *)FUN_7100048db0(0x1d0);
    FUN_710003b060(plVar5);
    *(undefined4 *)(plVar5 + 0x12) = 9;
    *plVar5 = (long)&PTR_FUN_710523de08;
    plVar5[0x2c] = 0x600000012;
    plVar5[0x2d] = 0x6400000002;
    plVar5[0x34] = 0;
    plVar5[0x35] = 0x600000000;
    *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
    *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
    plVar5[0x1e] = 0;
    plVar5[0x1f] = 0;
    plVar5[0x13] = 0;
    *(undefined2 *)(plVar5 + 0x38) = 0;
    *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
    plVar5[0x1c] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x18] = 0;
    plVar5[0x19] = 0;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    plVar5[0x2a] = 0;
    plVar5[0x2b] = 0;
    plVar5[0x32] = 0;
    plVar5[0x33] = 0;
    plVar5[0x30] = 0;
    plVar5[0x31] = 0;
    plVar5[0x2e] = 0;
    plVar5[0x2f] = 0;
    plVar5[0x36] = 0;
    plVar5[0x37] = 0;
    *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
    FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
    (**(code **)(*plVar5 + 0x280))(plVar5,1);
    *(undefined4 *)(plVar5 + 0x12) = 0;
    plVar5[0x28] = 0;
    plVar5[0x29] = 0;
    *plVar5 = (long)&PTR_FUN_7105240248;
    plVar5[0x26] = 0;
    plVar5[0x27] = 0;
    plVar5[0x24] = 0;
    plVar5[0x25] = 0;
    plVar5[0x22] = 0;
    plVar5[0x23] = 0;
    plVar5[0x20] = 0;
    plVar5[0x21] = 0;
LAB_7103790ba8:
    FUN_7103789fb0(plVar5,param_3,(long)param_4,ppppbVar9,param_5,param_6,param_7,param_8);
  }
  else {
    iVar3 = strcmp("CrossSelectButton",(char *)pppbVar18);
    if (iVar3 == 0) {
      plVar5 = (long *)FUN_7100048db0(0x1d0);
      FUN_710003b060(plVar5);
      *(undefined4 *)(plVar5 + 0x12) = 9;
      *plVar5 = (long)&PTR_FUN_710523de08;
      plVar5[0x2c] = 0x600000012;
      plVar5[0x2d] = 0x6400000002;
      plVar5[0x34] = 0;
      plVar5[0x35] = 0x600000000;
      plVar5[0x13] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x1f] = 0;
      *(undefined2 *)(plVar5 + 0x38) = 0;
      *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
      *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
      *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x2a] = 0;
      plVar5[0x2b] = 0;
      plVar5[0x32] = 0;
      plVar5[0x33] = 0;
      plVar5[0x30] = 0;
      plVar5[0x31] = 0;
      plVar5[0x2e] = 0;
      plVar5[0x2f] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
      FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
      (**(code **)(*plVar5 + 0x280))(plVar5,1);
      *plVar5 = (long)&PTR_FUN_7105240d20;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      *(undefined1 *)((long)plVar5 + 0x1cd) = 0;
      plVar5[0x26] = 0;
      plVar5[0x27] = 0;
      *(undefined4 *)(plVar5 + 0x12) = 1;
      plVar5[0x24] = 0;
      plVar5[0x25] = 0;
      plVar5[0x22] = 0;
      plVar5[0x23] = 0;
      plVar5[0x20] = 0;
      plVar5[0x21] = 0;
      FUN_710378ad70(plVar5,1,0);
      (**(code **)(*plVar5 + 0x280))(plVar5,0);
LAB_71037909dc:
      ppuVar11 = (undefined **)*plVar5;
    }
    else {
      iVar3 = strcmp("CrossCheckButton",(char *)pppbVar18);
      if (iVar3 == 0) {
        plVar5 = (long *)FUN_7100048db0(0x1d0);
        FUN_710003b060(plVar5);
        *(undefined4 *)(plVar5 + 0x12) = 9;
        *plVar5 = (long)&PTR_FUN_710523de08;
        plVar5[0x2c] = 0x600000012;
        plVar5[0x2d] = 0x6400000002;
        plVar5[0x34] = 0;
        plVar5[0x35] = 0x600000000;
        plVar5[0x13] = 0;
        plVar5[0x1e] = 0;
        plVar5[0x1f] = 0;
        *(undefined2 *)(plVar5 + 0x38) = 0;
        *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
        *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
        *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
        plVar5[0x1c] = 0;
        plVar5[0x1d] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x14] = 0;
        plVar5[0x15] = 0;
        plVar5[0x2a] = 0;
        plVar5[0x2b] = 0;
        plVar5[0x32] = 0;
        plVar5[0x33] = 0;
        plVar5[0x30] = 0;
        plVar5[0x31] = 0;
        plVar5[0x2e] = 0;
        plVar5[0x2f] = 0;
        plVar5[0x36] = 0;
        plVar5[0x37] = 0;
        *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
        FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
        (**(code **)(*plVar5 + 0x280))(plVar5,1);
        *plVar5 = (long)&PTR_FUN_710523e890;
        plVar5[0x28] = 0;
        plVar5[0x29] = 0;
        plVar5[0x26] = 0;
        plVar5[0x27] = 0;
        plVar5[0x24] = 0;
        plVar5[0x25] = 0;
        plVar5[0x22] = 0;
        plVar5[0x23] = 0;
        plVar5[0x20] = 0;
        plVar5[0x21] = 0;
        *(undefined2 *)((long)plVar5 + 0x1cd) = 1;
        *(undefined4 *)(plVar5 + 0x12) = 2;
        FUN_710378adc0((long)plVar5,0);
        goto LAB_71037909dc;
      }
      iVar3 = strcmp("CrossLongPressButton",(char *)pppbVar18);
      if (iVar3 == 0) {
        plVar5 = (long *)FUN_7100048db0(0x1d0);
        FUN_710003b060(plVar5);
        *(undefined4 *)(plVar5 + 0x12) = 9;
        *plVar5 = (long)&PTR_FUN_710523de08;
        plVar5[0x2c] = 0x600000012;
        plVar5[0x2d] = 0x6400000002;
        plVar5[0x34] = 0;
        plVar5[0x35] = 0x600000000;
        *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
        *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
        plVar5[0x1e] = 0;
        plVar5[0x1f] = 0;
        plVar5[0x13] = 0;
        *(undefined2 *)(plVar5 + 0x38) = 0;
        *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
        plVar5[0x1c] = 0;
        plVar5[0x1d] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x14] = 0;
        plVar5[0x15] = 0;
        plVar5[0x2a] = 0;
        plVar5[0x2b] = 0;
        plVar5[0x32] = 0;
        plVar5[0x33] = 0;
        plVar5[0x30] = 0;
        plVar5[0x31] = 0;
        plVar5[0x2e] = 0;
        plVar5[0x2f] = 0;
        plVar5[0x36] = 0;
        plVar5[0x37] = 0;
        *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
        FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
        (**(code **)(*plVar5 + 0x280))(plVar5,1);
        *plVar5 = (long)&PTR_FUN_710523fbb8;
        uVar10 = 4;
        plVar5[0x28] = 0;
        plVar5[0x29] = 0;
LAB_7103790b94:
        plVar5[0x26] = 0;
        plVar5[0x27] = 0;
        plVar5[0x24] = 0;
        plVar5[0x25] = 0;
        plVar5[0x22] = 0;
        plVar5[0x23] = 0;
        plVar5[0x20] = 0;
        plVar5[0x21] = 0;
        *(undefined4 *)(plVar5 + 0x12) = uVar10;
        goto LAB_7103790ba8;
      }
      iVar3 = strcmp("CrossDoubleTouchButton",(char *)pppbVar18);
      if (iVar3 == 0) {
        plVar5 = (long *)FUN_7100048db0(0x1d0);
        FUN_710003b060(plVar5);
        *(undefined4 *)(plVar5 + 0x12) = 9;
        *plVar5 = (long)&PTR_FUN_710523de08;
        plVar5[0x2c] = 0x600000012;
        plVar5[0x2d] = 0x6400000002;
        plVar5[0x34] = 0;
        plVar5[0x35] = 0x600000000;
        *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
        *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
        plVar5[0x1e] = 0;
        plVar5[0x1f] = 0;
        plVar5[0x13] = 0;
        *(undefined2 *)(plVar5 + 0x38) = 0;
        *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
        plVar5[0x1c] = 0;
        plVar5[0x1d] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x14] = 0;
        plVar5[0x15] = 0;
        plVar5[0x2a] = 0;
        plVar5[0x2b] = 0;
        plVar5[0x32] = 0;
        plVar5[0x33] = 0;
        plVar5[0x30] = 0;
        plVar5[0x31] = 0;
        plVar5[0x2e] = 0;
        plVar5[0x2f] = 0;
        plVar5[0x36] = 0;
        plVar5[0x37] = 0;
        *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
        FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
        (**(code **)(*plVar5 + 0x280))(plVar5,1);
        *(undefined1 *)((long)plVar5 + 0x1cd) = 0;
        plVar5[0x28] = 0;
        plVar5[0x29] = 0;
        *plVar5 = (long)&PTR_FUN_710523ecc0;
        uVar10 = 3;
        goto LAB_7103790b94;
      }
      iVar3 = strcmp("CrossGuideButton",(char *)pppbVar18);
      if (iVar3 == 0) {
        plVar5 = (long *)FUN_7100048db0(0x200);
        FUN_710003b060(plVar5);
        *(undefined4 *)(plVar5 + 0x12) = 9;
        *plVar5 = (long)&PTR_FUN_710523de08;
        plVar5[0x2c] = 0x600000012;
        plVar5[0x2d] = 0x6400000002;
        plVar5[0x34] = 0;
        plVar5[0x35] = 0x600000000;
        *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
        *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
        plVar5[0x1e] = 0;
        plVar5[0x1f] = 0;
        plVar5[0x13] = 0;
        *(undefined2 *)(plVar5 + 0x38) = 0;
        *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
        plVar5[0x1c] = 0;
        plVar5[0x1d] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x14] = 0;
        plVar5[0x15] = 0;
        plVar5[0x2a] = 0;
        plVar5[0x2b] = 0;
        plVar5[0x32] = 0;
        plVar5[0x33] = 0;
        plVar5[0x30] = 0;
        plVar5[0x31] = 0;
        plVar5[0x2e] = 0;
        plVar5[0x2f] = 0;
        plVar5[0x36] = 0;
        plVar5[0x37] = 0;
        *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
        FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
        (**(code **)(*plVar5 + 0x280))(plVar5,1);
        ppuVar11 = &PTR_FUN_710523f180;
        plVar5[0x28] = 0;
        plVar5[0x29] = 0;
        *plVar5 = (long)&PTR_FUN_710523f180;
        plVar5[0x26] = 0;
        plVar5[0x27] = 0;
        *(undefined4 *)(plVar5 + 0x3a) = 0;
        plVar5[0x3b] = 0;
        *(undefined4 *)(plVar5 + 0x12) = 6;
        plVar5[0x24] = 0;
        plVar5[0x25] = 0;
        plVar5[0x22] = 0;
        plVar5[0x23] = 0;
        plVar5[0x20] = 0;
        plVar5[0x21] = 0;
        plVar5[0x3e] = 0;
        plVar5[0x3f] = 0;
        plVar5[0x3c] = 0;
        plVar5[0x3d] = 0;
      }
      else {
        iVar3 = strcmp("CrossPolygonButton",(char *)pppbVar18);
        if (iVar3 != 0) {
          iVar3 = strcmp("IconTextLocator",(char *)pppbVar18);
          if (iVar3 == 0) {
            puVar4 = (undefined8 *)FUN_7100048db0(0x48);
            ppuVar11 = &PTR_FUN_710523f5f8;
            *puVar4 = &PTR_FUN_710523f5f8;
            puVar4[1] = 0;
            *(undefined4 *)(puVar4 + 2) = 0;
            *(undefined1 *)(puVar4 + 8) = 0;
            puVar4[3] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
LAB_710379121c:
            (*(code *)ppuVar11[4])(puVar4,param_3);
          }
          else {
            iVar3 = strcmp("BadgeTextLocator",(char *)pppbVar18);
            if (iVar3 != 0) {
              iVar3 = strcmp("ScrollTextLocator",(char *)pppbVar18);
              if (iVar3 != 0) {
                return;
              }
              puVar4 = (undefined8 *)FUN_7100048db0(0x68);
              *(undefined4 *)(puVar4 + 0xb) = 0;
              *puVar4 = &PTR_FUN_7105240c90;
              puVar4[1] = 0;
              puVar4[9] = 0;
              puVar4[10] = 0;
              puVar4[2] = 0;
              puVar4[7] = 0;
              puVar4[8] = 0;
              puVar4[5] = 0;
              puVar4[6] = 0;
              puVar4[3] = 0;
              puVar4[4] = 0;
              uVar10 = *(undefined4 *)(*DAT_710593ba90 + 0x420);
              *(undefined2 *)((long)puVar4 + 100) = 0;
              *(undefined4 *)((long)puVar4 + 0x5c) = uVar10;
              *(undefined4 *)(puVar4 + 0xc) = 0;
              ppuVar11 = (undefined **)*puVar4;
              goto LAB_710379121c;
            }
            puVar4 = (undefined8 *)FUN_7100048db0(0x28);
            puVar4[2] = 0;
            *puVar4 = &PTR_FUN_710523f0f0;
            puVar4[1] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            FUN_7103791bb0((long)puVar4,(long)param_3,(long)param_4);
          }
          if (puVar4 == (undefined8 *)0x0) {
            return;
          }
          puVar17 = *(undefined8 **)(param_1 + 0x18);
          puVar1 = (undefined8 *)puVar17[1];
          if (puVar1 != (undefined8 *)puVar17[2]) {
            *puVar1 = puVar4;
            puVar17[1] = puVar17[1] + 8;
            return;
          }
          pvVar19 = (void *)*puVar17;
          __n = (long)puVar1 - (long)pvVar19;
          uVar26 = ((long)__n >> 3) + 1;
          if (uVar26 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar13 = (long)puVar17[2] - (long)pvVar19;
          if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
            uVar14 = lVar13 >> 2;
            if (uVar26 <= uVar14) {
              uVar26 = uVar14;
            }
            if (uVar26 != 0) {
              if (uVar26 >> 0x3d != 0) goto LAB_7103790c28;
              goto LAB_71037912f0;
            }
          }
          else {
            uVar26 = 0x1fffffffffffffff;
LAB_71037912f0:
            pppbVar18 = (byte ***)(uVar26 * 8);
            if (pppbVar18 == (byte ***)0x0) {
              pppbVar18 = (byte ***)0x1;
            }
            pvVar6 = (void *)FUN_710392e290(0x10,pppbVar18,(long ****)param_4,ppppbVar9,param_5,
                                            param_6,param_7,param_8);
            if (pvVar6 != (void *)0x0) goto LAB_7103791354;
            if (DAT_7105332f00 != (long *)0x0) {
              local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
              local_c0 = pppbVar18;
              uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
              if (((uVar14 & 1) != 0) &&
                 (pvVar6 = (void *)FUN_710392e290(0x10,pppbVar18,(long ****)ppppbVar20,ppppbVar9,
                                                  param_5,param_6,param_7,param_8),
                 pvVar6 != (void *)0x0)) goto LAB_7103791354;
            }
          }
          pvVar6 = (void *)0x0;
LAB_7103791354:
          puVar1 = (undefined8 *)((long)pvVar6 + ((long)__n >> 3) * 8);
          *puVar1 = puVar4;
          if (0 < (long)__n) {
            memcpy(pvVar6,pvVar19,__n);
          }
          *puVar17 = pvVar6;
          puVar17[1] = puVar1 + 1;
          puVar17[2] = (void *)((long)pvVar6 + uVar26 * 8);
          if (pvVar19 == (void *)0x0) {
            return;
          }
          FUN_710392eb40((ulong)pvVar19);
          return;
        }
        plVar5 = (long *)FUN_7100048db0(0x3b0);
        FUN_710003b060(plVar5);
        *(undefined4 *)(plVar5 + 0x12) = 9;
        *plVar5 = (long)&PTR_FUN_710523de08;
        plVar5[0x2c] = 0x600000012;
        plVar5[0x2d] = 0x6400000002;
        plVar5[0x34] = 0;
        plVar5[0x35] = 0x600000000;
        *(undefined1 *)((long)plVar5 + 0x1c2) = 1;
        *(undefined1 *)((long)plVar5 + 0x1c3) = 1;
        plVar5[0x1e] = 0;
        plVar5[0x1f] = 0;
        plVar5[0x13] = 0;
        *(undefined2 *)(plVar5 + 0x38) = 0;
        *(undefined1 *)((long)plVar5 + 0x1cc) = 0;
        plVar5[0x1c] = 0;
        plVar5[0x1d] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        plVar5[0x18] = 0;
        plVar5[0x19] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x14] = 0;
        plVar5[0x15] = 0;
        plVar5[0x2a] = 0;
        plVar5[0x2b] = 0;
        plVar5[0x32] = 0;
        plVar5[0x33] = 0;
        plVar5[0x30] = 0;
        plVar5[0x31] = 0;
        plVar5[0x2e] = 0;
        plVar5[0x2f] = 0;
        plVar5[0x36] = 0;
        plVar5[0x37] = 0;
        *(undefined8 *)((long)plVar5 + 0x1c4) = 0;
        FUN_710003b4f0((long)plVar5,FUN_7103789680,plVar5);
        (**(code **)(*plVar5 + 0x280))(plVar5,1);
        *plVar5 = (long)&PTR_FUN_7105240840;
        plVar5[0x28] = 0;
        plVar5[0x29] = 0;
        plVar5[0x26] = 0;
        plVar5[0x27] = 0;
        plVar5[0x24] = 0;
        plVar5[0x25] = 0;
        plVar5[0x22] = 0;
        plVar5[0x23] = 0;
        plVar5[0x20] = 0;
        plVar5[0x21] = 0;
        lVar21 = lRam0000007107459008;
        lVar13 = _ConstantZero;
        plVar5[0x45] = 0;
        plVar5[0x44] = 0;
        plVar5[0x4b] = 0;
        plVar5[0x4a] = 0;
        plVar5[0x51] = 0;
        plVar5[0x50] = 0;
        plVar5[0x57] = 0;
        plVar5[0x56] = 0;
        plVar5[0x5d] = 0;
        plVar5[0x5c] = 0;
        plVar5[99] = 0;
        plVar5[0x62] = 0;
        *(undefined4 *)(plVar5 + 0x6c) = 0;
        plVar5[0x6b] = 0;
        plVar5[0x6a] = 0;
        plVar5[0x69] = 0;
        plVar5[0x68] = 0;
        plVar5[0x3e] = 0;
        plVar5[0x3f] = 0;
        plVar5[0x3b] = lVar21;
        plVar5[0x3a] = lVar13;
        plVar5[0x3d] = lVar21;
        plVar5[0x3c] = lVar13;
        plVar5[0x41] = lVar21;
        plVar5[0x40] = lVar13;
        plVar5[0x43] = lVar21;
        plVar5[0x42] = lVar13;
        plVar5[0x47] = lVar21;
        plVar5[0x46] = lVar13;
        plVar5[0x49] = lVar21;
        plVar5[0x48] = lVar13;
        plVar5[0x4d] = lVar21;
        plVar5[0x4c] = lVar13;
        plVar5[0x4f] = lVar21;
        plVar5[0x4e] = lVar13;
        plVar5[0x53] = lVar21;
        plVar5[0x52] = lVar13;
        plVar5[0x55] = lVar21;
        plVar5[0x54] = lVar13;
        plVar5[0x59] = lVar21;
        plVar5[0x58] = lVar13;
        plVar5[0x5b] = lVar21;
        plVar5[0x5a] = lVar13;
        plVar5[0x5f] = lVar21;
        plVar5[0x5e] = lVar13;
        plVar5[0x61] = lVar21;
        plVar5[0x60] = lVar13;
        plVar5[0x65] = lVar21;
        plVar5[100] = lVar13;
        plVar5[0x67] = lVar21;
        plVar5[0x66] = lVar13;
        plVar5[0x6f] = 0;
        plVar5[0x6e] = 0x3f800000;
        plVar5[0x71] = 0;
        plVar5[0x70] = 0x3f80000000000000;
        *(undefined4 *)(plVar5 + 0x12) = 5;
        ppuVar11 = (undefined **)*plVar5;
        plVar5[0x73] = 0x3f800000;
        plVar5[0x72] = 0;
        plVar5[0x75] = 0x3f80000000000000;
        plVar5[0x74] = 0;
      }
    }
    (*(code *)ppuVar11[0x26])(plVar5,param_3);
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar13 = *(long *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar4 == *(undefined8 **)(lVar13 + 0x40)) {
    pvVar19 = *(void **)(lVar13 + 0x30);
    ppppbVar20 = (byte ****)((long)puVar4 - (long)pvVar19);
    uVar26 = ((long)ppppbVar20 >> 3) + 1;
    if (uVar26 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (long)*(undefined8 **)(lVar13 + 0x40) - (long)pvVar19;
    if ((ulong)(lVar21 >> 3) < 0xfffffffffffffff) {
      uVar14 = lVar21 >> 2;
      if (uVar26 <= uVar14) {
        uVar26 = uVar14;
      }
      if (uVar26 != 0) {
        if (uVar26 >> 0x3d != 0) {
LAB_7103790c28:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7103790c30;
      }
LAB_7103790c90:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar26 = 0x1fffffffffffffff;
LAB_7103790c30:
      pppbVar18 = (byte ***)(uVar26 * 8);
      if (pppbVar18 == (byte ***)0x0) {
        pppbVar18 = (byte ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,pppbVar18,(long ****)param_4,ppppbVar9,param_5,param_6,
                                      param_7,param_8);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          local_c0 = pppbVar18;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          param_4 = ppppbVar7;
          if (((uVar14 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,pppbVar18,(long ****)ppppbVar7,ppppbVar9,param_5,
                                              param_6,param_7,param_8), param_4 = ppppbVar7,
             pvVar6 != (void *)0x0)) goto LAB_7103790c94;
        }
        goto LAB_7103790c90;
      }
    }
LAB_7103790c94:
    puVar4 = (undefined8 *)((long)pvVar6 + ((long)ppppbVar20 >> 3) * 8);
    *puVar4 = plVar5;
    if (0 < (long)ppppbVar20) {
      memcpy(pvVar6,pvVar19,(size_t)ppppbVar20);
      param_4 = ppppbVar20;
    }
    *(void **)(lVar13 + 0x30) = pvVar6;
    *(undefined8 **)(lVar13 + 0x38) = puVar4 + 1;
    *(void **)(lVar13 + 0x40) = (void *)((long)pvVar6 + uVar26 * 8);
    if (pvVar19 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar19);
    }
  }
  else {
    *puVar4 = plVar5;
    *(long *)(lVar13 + 0x38) = *(long *)(lVar13 + 0x38) + 8;
  }
  lVar21 = *(long *)(param_1 + 0x20);
  lVar13 = plVar5[0x11];
  if (lVar13 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = 0;
    while( true ) {
      pbVar12 = (byte *)(lVar13 + uVar26);
      bVar2 = *pbVar12;
      if (bVar2 == 0) break;
      local_b8[uVar26] = bVar2;
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      bVar2 = pbVar12[1];
      if (bVar2 == 0) {
        uVar26 = uVar26 + 1;
        break;
      }
      local_b8[uVar26 + 1] = bVar2;
      uVar26 = uVar26 + 2;
    }
  }
  uVar22 = 0x811c9dc5;
  local_b8[uVar26 & 0xffffffff] = 0;
  uVar16 = (uint)local_b8[0];
  uVar15 = uVar22;
  if (uVar16 != 0) {
    pbVar12 = local_b8;
    do {
      pbVar12 = pbVar12 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar16;
      uVar16 = (uint)*pbVar12;
    } while (uVar16 != 0);
  }
  local_c0 = (byte ***)CONCAT44((int)uVar26,uVar15);
  plVar23 = (long *)(lVar21 + 0xa0);
  plVar24 = (long *)*plVar23;
  plVar25 = plVar23;
  local_78 = plVar5;
  if (plVar24 == (long *)0x0) {
LAB_7103790df0:
    lVar13 = *plVar23;
  }
  else {
    plVar23 = (long *)(lVar21 + 0xa0);
    do {
      while (plVar25 = plVar24, *(uint *)(plVar25 + 4) <= uVar15) {
        if (uVar15 <= *(uint *)(plVar25 + 4)) {
          iVar3 = strcmp((char *)local_b8,(char *)(plVar25 + 5));
          if (iVar3 < 0) break;
          iVar3 = strcmp((char *)(plVar25 + 5),(char *)local_b8);
          if (-1 < iVar3) goto LAB_7103790df0;
        }
        plVar23 = plVar25 + 1;
        plVar24 = (long *)*plVar23;
        if ((long *)*plVar23 == (long *)0x0) goto LAB_7103790df0;
      }
      plVar23 = plVar25;
      plVar24 = (long *)*plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
    lVar13 = *plVar25;
  }
  if (lVar13 != 0) goto LAB_7103790f2c;
  plVar24 = (long *)FUN_710392e290(0x10,0x70,(long ****)param_4,ppppbVar9,param_5,param_6,param_7,
                                   param_8);
  if (plVar24 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000070;
      pppplVar8 = &local_70;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar26 & 1) != 0) &&
         (plVar24 = (long *)FUN_710392e290(0x10,0x70,pppplVar8,ppppbVar9,param_5,param_6,param_7,
                                           param_8), plVar24 != (long *)0x0)) goto LAB_7103790e64;
    }
    plVar24 = (long *)0x0;
  }
LAB_7103790e64:
  uVar26 = 0;
  *(undefined4 *)(plVar24 + 4) = 0;
  while (local_b8[0] != 0) {
    *(byte *)((long)plVar24 + uVar26 + 0x28) = local_b8[0];
    if (0x3e < (int)uVar26 + 1U) {
      uVar26 = (ulong)((int)uVar26 + 1);
      break;
    }
    if (local_b8[uVar26 + 1] == 0) {
      uVar26 = uVar26 + 1;
      break;
    }
    *(byte *)((long)plVar24 + uVar26 + 0x29) = local_b8[uVar26 + 1];
    lVar13 = uVar26 + 2;
    uVar26 = uVar26 + 2;
    local_b8[0] = local_b8[lVar13];
  }
  *(undefined1 *)((long)plVar24 + (uVar26 & 0xffffffff) + 0x28) = 0;
  uVar15 = (uint)*(byte *)(plVar24 + 5);
  *(int *)((long)plVar24 + 0x24) = (int)uVar26;
  if (*(byte *)(plVar24 + 5) != 0) {
    pbVar12 = (byte *)((long)plVar24 + 0x29);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar15 != 0);
  }
  *(uint *)(plVar24 + 4) = uVar22;
  plVar24[0xd] = (long)plVar5;
  plVar24[2] = (long)plVar25;
  *plVar24 = 0;
  plVar24[1] = 0;
  *plVar23 = (long)plVar24;
  if (**(long **)(lVar21 + 0x98) != 0) {
    *(long *)(lVar21 + 0x98) = **(long **)(lVar21 + 0x98);
    plVar24 = (long *)*plVar23;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(*(long **)(lVar21 + 0xa0),plVar24)
  ;
  *(long *)(lVar21 + 0xa8) = *(long *)(lVar21 + 0xa8) + 1;
LAB_7103790f2c:
  plVar25 = plVar5 + 5;
  lVar13 = *plVar25;
  plVar23 = (long *)(*(long *)(param_1 + 8) + 8);
  *plVar25 = *plVar23;
  *(long **)(lVar13 + 8) = plVar23;
  *(long **)(*plVar23 + 8) = plVar25;
  *plVar23 = lVar13;
  (**(code **)(*plVar5 + 0x148))(plVar5,*(undefined8 *)(param_1 + 0x10));
  return;
}

