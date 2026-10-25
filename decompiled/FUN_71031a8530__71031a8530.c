// addr:      71031a8530
// offset:    0x31a8530
// name:      FUN_71031a8530
// mangled:   
// signature: undefined __cdecl FUN_71031a8530(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, long * * * param_11, long * * * param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71031a8530(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,long ****param_7,
                   byte ****param_8,long ****param_9,undefined8 param_10,long ***param_11,
                   long ***param_12)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  code *pcVar20;
  float *pfVar21;
  long lVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_q0 [16];
  float fVar27;
  ulong uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  byte ****local_70;
  long *plStack_68;
  byte ***local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((int)param_6 != 1) {
    if ((int)param_6 != 0) {
      return;
    }
    lVar17 = param_5[0x26];
    *(undefined8 *)(lVar17 + 0x14c) = 0x7f8;
    *(undefined1 *)(lVar17 + 0x11) = 0;
    *(undefined1 *)(param_5[0x26] + 0xd) = 1;
    *(undefined1 *)(param_5[0x26] + 0xe) = 0;
    *(undefined1 *)(param_5[0x26] + 0xf) = 1;
    FUN_71031d71c0(param_1,param_2,param_3,param_4,(long *)param_5[0x26],param_6,param_7,param_8,
                   param_9,param_10,param_11,param_12);
    local_50 = 0;
    uStack_48 = 0;
    FUN_71031a4d90((long)param_5,&local_50);
    return;
  }
  if (*(int *)(param_5[0x26] + 0x140) != 0) {
    return;
  }
  lVar17 = *param_5;
  lVar22 = *(long *)(lVar17 + 0x68);
  iVar3 = *(int *)(lVar22 + 0x290);
  pcVar1 = (char *)(lVar22 + 0x10);
  pcVar23 = pcVar1;
  if (*(int *)(lVar22 + 0x14) == iVar3) {
LAB_71031a85fc:
    cVar4 = *pcVar23;
  }
  else {
    if (*(int *)(lVar22 + 0xb4) == iVar3) {
      pcVar23 = (char *)(lVar22 + 0xb0);
      goto LAB_71031a85fc;
    }
    if (*(int *)(lVar22 + 0x154) == iVar3) {
      cVar4 = *(char *)(lVar22 + 0x150);
    }
    else {
      pcVar23 = (char *)(lVar22 + 0x1f0);
      if (*(int *)(lVar22 + 500) != iVar3) {
        pcVar23 = pcVar1;
      }
      cVar4 = *pcVar23;
    }
  }
  if (cVar4 == '\0') {
    if (*(uint *)(lVar17 + 0x50) >> 0x1c != 0) {
      return;
    }
    *(undefined4 *)(lVar17 + 0x50) = 0x1000013;
    return;
  }
  if ((iVar3 != 0) && ((int)param_5[4] == 0xb)) {
    if (*(uint *)(lVar17 + 0x50) >> 0x1c != 0) {
      return;
    }
    *(undefined4 *)(lVar17 + 0x50) = 0x100000a;
    return;
  }
  if (*(int *)(lVar22 + 0x14) == iVar3) {
    cVar4 = *pcVar1;
  }
  else if (*(int *)(lVar22 + 0xb4) == iVar3) {
    cVar4 = *(char *)(lVar22 + 0xb0);
  }
  else if (*(int *)(lVar22 + 0x154) == iVar3) {
    cVar4 = *(char *)(lVar22 + 0x150);
  }
  else {
    pcVar23 = (char *)(lVar22 + 0x1f0);
    if (*(int *)(lVar22 + 500) != iVar3) {
      pcVar23 = pcVar1;
    }
    cVar4 = *pcVar23;
  }
  if (cVar4 == '\0') {
    return;
  }
  puVar24 = *(undefined8 **)(lVar17 + 0x60);
  pauVar2 = (undefined1 (*) [16])(param_7 + 2);
  if (*(char *)((long)puVar24 + 0xc) == '\0') {
    pfVar21 = (float *)(*DAT_71052b8f00 + 0xf40);
    puVar18 = (undefined8 *)*puVar24;
  }
  else {
    puVar18 = (undefined8 *)*puVar24;
    pfVar21 = (float *)(puVar18[0xb] + 0x38);
  }
  pppplVar15 = param_7;
  auVar25 = FUN_7103192030(*pauVar2,*pfVar21,*puVar18,*(char *)((long)puVar24 + 0xc));
  if (*(char *)((long)puVar24 + 0xc) == '\0') {
    pfVar21 = (float *)(*DAT_71052b8f00 + 0xf48);
    puVar18 = (undefined8 *)*puVar24;
  }
  else {
    puVar18 = (undefined8 *)*puVar24;
    pfVar21 = (float *)(puVar18[0xb] + 0x3c);
  }
  auVar26 = FUN_7103192030(*pauVar2,*pfVar21,*puVar18,*(char *)((long)puVar24 + 0xc));
  fVar35 = auVar25._8_4_;
  fVar29 = fVar35 - auVar26._8_4_;
  if (fVar29 == 0.0) {
    fVar35 = (float)_DAT_7107521008;
    fVar27 = (float)((ulong)_DAT_7107521008 >> 0x20);
    fVar31 = (float)_ConstantZero;
    fVar33 = (float)((ulong)_ConstantZero >> 0x20);
  }
  else {
    fVar27 = fVar35 / fVar29;
    fVar31 = auVar25._0_4_ + (auVar26._0_4_ - auVar25._0_4_) * fVar27;
    fVar33 = auVar25._4_4_ + (auVar26._4_4_ - auVar25._4_4_) * fVar27;
    fVar35 = fVar35 + (auVar26._8_4_ - fVar35) * fVar27;
    fVar27 = auVar25._12_4_ + (auVar26._12_4_ - auVar25._12_4_) * fVar27;
  }
  lVar22 = *(long *)(*param_5 + 0x68);
  iVar3 = *(int *)(lVar22 + 0x290);
  lVar17 = lVar22 + 0x10;
  if (*(int *)(lVar22 + 0x14) != iVar3) {
    if (*(int *)(lVar22 + 0xb4) == iVar3) {
      lVar17 = lVar22 + 0xb0;
    }
    else if (*(int *)(lVar22 + 0x154) == iVar3) {
      lVar17 = lVar22 + 0x150;
    }
    else {
      lVar17 = lVar22 + 0x1f0;
      if (*(int *)(lVar22 + 500) != iVar3) {
        lVar17 = lVar22 + 0x10;
      }
    }
  }
  plVar19 = *(long **)(*param_5 + 0x60);
  uVar28 = CONCAT44(0,*(uint *)(lVar17 + 8));
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar28;
  fVar32 = fVar31;
  fVar34 = fVar33;
  if (*(char *)((long)plVar19 + 0xd) != '\0') {
    fVar29 = *(float *)(*(long *)(*plVar19 + 0x30) + 0x10);
    fVar32 = fVar33 / fVar29;
    fVar31 = fVar29 * (float)(int)(fVar31 / fVar29);
    fVar35 = 0.0;
    fVar27 = 0.0;
    fVar33 = fVar29 * (float)(int)fVar32;
    fVar29 = fVar33;
    fVar32 = (float)(int)fVar32;
    fVar34 = 0.0;
  }
  uVar13 = 0;
  uVar30 = 0;
  local_60 = (byte ***)CONCAT44(fVar33,fVar31);
  uStack_58 = uVar28;
  switch((int)param_5[4]) {
  case 4:
    pppplVar15 = (long ****)0x64a2fdf87;
    break;
  case 5:
    pppplVar15 = (long ****)0x66b3e1469;
    break;
  case 6:
    uVar14 = 0x25b39155;
    goto LAB_71031a88ec;
  case 7:
    pppplVar15 = (long ****)0x6fef0a831;
    break;
  case 8:
    pppplVar15 = (long ****)0x637bdbc25;
    break;
  case 9:
    pppplVar15 = (long ****)0xa5a64c0f5;
    break;
  case 10:
    pppplVar15 = (long ****)0xfacc13cd9;
    break;
  case 0xb:
    uVar14 = 0xb910c1b8;
LAB_71031a88ec:
    pppplVar15 = (long ****)(uVar14 | 0x900000000);
    break;
  default:
    uVar12 = extraout_x1;
    plVar19 = (long *)0x0;
    ppppbVar16 = (byte ****)0x0;
    goto LAB_71031a8904;
  }
  param_8 = &local_60;
  auVar26._4_4_ = fVar33;
  auVar26._0_4_ = fVar31;
  auVar26._8_4_ = *(uint *)(lVar17 + 8);
  auVar26._12_4_ = 0;
  auVar8._4_4_ = fVar34;
  auVar8._0_4_ = fVar32;
  auVar8._8_4_ = fVar35;
  auVar8._12_4_ = fVar27;
  FUN_71031a20e0(auVar25,auVar26,ZEXT416((uint)fVar29),auVar8,(ulong *)&local_70,param_5,
                 (ulong)pppplVar15,param_8,param_9,param_10,param_11,param_12);
  uVar12 = extraout_x1_00;
  plVar19 = plStack_68;
  ppppbVar16 = local_70;
LAB_71031a8904:
  FUN_71031d0ce0((ulong *)param_5[1],uVar12,pppplVar15,param_8,param_9,param_10,param_11,param_12);
  if (ppppbVar16 != (byte ****)0x0) {
    auVar6._4_4_ = fVar33;
    auVar6._0_4_ = fVar31;
    auVar6._8_8_ = uVar28;
    auVar7._4_4_ = uVar30;
    auVar7._0_4_ = fVar29;
    auVar7._8_8_ = uVar13;
    auVar9._4_4_ = fVar34;
    auVar9._0_4_ = fVar32;
    auVar9._8_4_ = fVar35;
    auVar9._12_4_ = fVar27;
    FUN_71031dac60(extraout_q0,auVar6,auVar7,auVar9,(long *)param_5[0x26],pauVar2,
                   (ulong)*(byte *)(param_7 + 6),ppppbVar16,param_9,param_10,param_11,param_12);
    switch((int)param_5[4]) {
    case 4:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x49;
      break;
    case 5:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4a;
      break;
    case 6:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x47;
      break;
    case 7:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4b;
      break;
    case 8:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4c;
      break;
    case 9:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4d;
      break;
    case 10:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4e;
      break;
    case 0xb:
      lVar17 = **(long **)(*(long *)**(undefined8 **)(*param_5 + 0xa0) + 0x338);
      if (*(long *)(lVar17 + 8) == 0) goto switchD_71031a8944_default;
      local_70 = (byte ****)0x0;
      uVar10 = FUN_7102405040(*(long *)(lVar17 + 8),&local_70,1,ppppbVar16,param_9,param_10,param_11
                              ,param_12);
      if (uVar10 == 0xffffffff) goto switchD_71031a8944_default;
      if (uVar10 < 0x19) {
        plVar11 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
        if (((*plVar11 != 0) && ((int)plVar11[1] != -1)) &&
           ((int)plVar11[1] == *(int *)(*plVar11 + 0x20))) {
          FUN_7103736cf0(plVar11,(undefined1 (*) [12])&local_60);
        }
      }
      plVar11 = *(long **)(lVar17 + 8);
      pcVar20 = *(code **)(*plVar11 + 0x58);
      uVar13 = 0x4f;
      break;
    default:
      goto switchD_71031a8944_default;
    }
    (*pcVar20)(plVar11,uVar13,uVar10);
  }
switchD_71031a8944_default:
  if (plVar19 != (long *)0x0) {
    plVar11 = plVar19 + 1;
    do {
      lVar17 = *plVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = lVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

