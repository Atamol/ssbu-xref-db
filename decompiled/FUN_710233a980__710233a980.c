// addr:      710233a980
// offset:    0x233a980
// name:      FUN_710233a980
// mangled:   
// signature: undefined __cdecl FUN_710233a980(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710233a980(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long ****pppplVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  byte *pbVar23;
  long lVar24;
  undefined1 uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  if (*(int *)((long)param_1 + 0xf4) != 0) {
    lVar21 = *(long *)(*param_1 + 0x28);
    if (*(long *)(lVar21 + 0x60) != 0) {
      return;
    }
    if (*(long *)(lVar21 + 0x30) != *(long *)(lVar21 + 0x38)) {
      return;
    }
    if (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0) {
      return;
    }
    FUN_7103737a20(2,0);
    FUN_7103737a20(3,0);
    FUN_7103737a20(4,0);
    puVar13 = DAT_710532f8f0;
    if (DAT_710532f8f0 != (undefined8 *)0x0) {
      puVar28 = (ulong *)*DAT_710532f8f0;
      *DAT_710532f8f0 = 0;
      if (puVar28 != (ulong *)0x0) {
        uVar12 = *puVar28;
        if (uVar12 != 0) {
          puVar28[1] = uVar12;
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40((ulong)puVar28);
      }
      FUN_710392eb40((ulong)puVar13);
      DAT_710532f8f0 = (undefined8 *)0x0;
    }
    if (*(int *)(*param_1 + 0x40) == 2) {
      uVar22 = *(uint *)((long)param_1 + 0xec);
      if (0x12 < uVar22) goto LAB_710233b444;
      uVar19 = 1;
    }
    else {
      if (*(int *)(*param_1 + 0x40) == 3) {
        *(undefined1 *)(param_1 + 0x23) = 1;
      }
      uVar22 = *(uint *)((long)param_1 + 0xec);
      if (0x12 < uVar22) {
LAB_710233b444:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar19 = 4;
    }
    *(undefined4 *)((long)param_1 + (long)(int)uVar22 * 4 + 0xa0) = uVar19;
    return;
  }
  uVar22 = DAT_71052c5250._4_4_;
  if ((char)param_1[0x20] == '\0') goto LAB_710233ae54;
  cVar10 = *(char *)((long)param_1 + 0x101);
  cVar3 = *(char *)((long)param_1 + 0x103);
  cVar4 = *(char *)((long)param_1 + 0x104);
  cVar5 = *(char *)((long)param_1 + 0x106);
  uVar25 = *(undefined1 *)((long)param_1 + 0x107);
  lVar21 = param_1[0x21];
  cVar6 = *(char *)((long)param_1 + 0x109);
  if (*(char *)((long)param_1 + 0x105) != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51da = 1;
  }
  if (cVar10 != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51b0 = 0x19;
  }
  if (cVar3 != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51b0 = 0x11;
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51d0 = 0;
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51d2._1_1_ = 0;
  }
  if (cVar4 != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_71052c51b0 = 0x18;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar9 = (char)lVar21 != '\0';
  DAT_71052c51cc = uVar25;
  FUN_7103737a20(2,bVar9);
  FUN_7103737a20(3,bVar9);
  FUN_7103737a20(4,cVar6 != '\0');
  if (DAT_710532f8f0 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar13 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d0 = local_d0 & 0xffffffff00000000;
        local_88 = (long ***)&DAT_00000008;
        param_3 = (undefined **)&local_88;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
        if (((uVar12 & 1) != 0) &&
           (puVar13 = (undefined8 *)
                      FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar13 != (undefined8 *)0x0)) goto LAB_710233abe0;
      }
      puVar13 = (undefined8 *)0x0;
    }
LAB_710233abe0:
    plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    if (plVar14 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d0 = local_d0 & 0xffffffff00000000;
        local_88 = (long ***)&SUB_00000020;
        param_3 = (undefined **)&local_88;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
        if (((uVar12 & 1) != 0) &&
           (plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                             param_7,param_8), plVar14 != (long *)0x0))
        goto LAB_710233ac3c;
      }
      plVar14 = (long *)0x0;
    }
LAB_710233ac3c:
    plVar14[3] = 0;
    lVar21 = FUN_710392e290(0x10,0x2f00,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar21 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d0 = local_d0 & 0xffffffff00000000;
        local_88 = (long ***)0x2f00;
        pppplVar17 = (long ****)&local_88;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
        if (((uVar12 & 1) != 0) &&
           (lVar21 = FUN_710392e290(0x10,0x2f00,pppplVar17,param_4,param_5,param_6,param_7,param_8),
           lVar21 != 0)) goto LAB_710233ac94;
      }
      lVar21 = 0;
    }
LAB_710233ac94:
    plVar14[2] = lVar21 + 0x2f00;
    *plVar14 = lVar21;
    plVar14[1] = lVar21;
    *puVar13 = plVar14;
    DAT_710532f8f0 = puVar13;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51b0 != 9) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51b2 == '\0') {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      DAT_71052c51cd._0_1_ = 1;
    }
  }
  uVar22 = DAT_71052c5250._4_4_;
  if (cVar5 == '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar12 = 0;
    do {
      iVar11 = (int)uVar12;
      if ((&DAT_71052c574a)[(long)iVar11 * 0x260] == '\t') {
        uVar26 = 0;
        puVar28 = &DAT_71052c5730;
        do {
          if (uVar12 != uVar26) {
            uVar27 = (&DAT_71052c5730)[(long)iVar11 * 0x4c];
            uVar16 = *puVar28;
            uVar15 = uVar16 & 0xffffffffff;
            if ((uVar27 & 0xff00000000000000) == 0xc100000000000000 && (uVar27 & 0xffffffffff) != 0)
            {
              if (((uVar16 & 0xff00000000000000) == 0xc100000000000000) && (uVar15 != 0)) {
                uVar15 = (uVar16 ^ uVar27) & 0xffffffffff;
                goto joined_r0x00710233ad9c;
              }
            }
            else {
              if ((uVar16 & 0xff00000000000000) == 0xc100000000000000) {
joined_r0x00710233ad9c:
                if (uVar15 != 0) goto LAB_710233adb0;
              }
              if ((&DAT_71052c5749)[(long)iVar11 * 0x260] == *(char *)((long)puVar28 + 0x19)) {
                uVar25 = 2;
                goto LAB_710233adc4;
              }
            }
          }
LAB_710233adb0:
          uVar26 = uVar26 + 1;
          puVar28 = puVar28 + 0x4c;
        } while (uVar26 < 8);
        uVar25 = 0;
LAB_710233adc4:
        (&DAT_71052c574a)[(long)iVar11 * 0x260] = uVar25;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 8);
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    cVar10 = FUN_71017acc20();
    if (cVar10 == '\x1e') {
      uVar22 = 0;
    }
    else {
      bVar7 = **(byte **)**(undefined8 **)(*DAT_7105314510 + 0x78);
      uVar22 = 2;
      bVar8 = bVar7;
      if (1 < bVar7) {
        bVar8 = 2;
      }
      if ((bVar8 < 3) && (bVar7 < 2)) {
        uVar22 = (uint)(bVar8 == 1);
      }
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
  }
LAB_710233ae54:
  DAT_71052c5250._4_4_ = uVar22;
  lVar21 = *param_1;
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pcVar1 = "HomeRunReplaySequenceScene";
  if (DAT_71052c51b0 != 9) {
    pcVar1 = "MeleeReplayNormalSequenceScene";
  }
  uVar12 = 0;
  pcVar2 = "MeleeReplayCompetitionContinuationSequenceScene";
  if (DAT_71052c51e9 != '\x03' || (DAT_71052c51b0 & 0xfe) != 2) {
    pcVar2 = pcVar1;
  }
  while( true ) {
    bVar8 = pcVar2[uVar12];
    if (bVar8 == 0) break;
    local_c8[uVar12] = bVar8;
    if (0x3e < (int)uVar12 + 1U) {
      uVar12 = (ulong)((int)uVar12 + 1);
      break;
    }
    bVar8 = (pcVar2 + uVar12)[1];
    if (bVar8 == 0) {
      uVar12 = uVar12 + 1;
      break;
    }
    local_c8[uVar12 + 1] = bVar8;
    uVar12 = uVar12 + 2;
  }
  uVar18 = 0x811c9dc5;
  local_c8[uVar12 & 0xffffffff] = 0;
  uVar20 = (uint)local_c8[0];
  uVar22 = uVar18;
  if (local_c8[0] != 0) {
    pbVar23 = local_c8;
    do {
      pbVar23 = pbVar23 + 1;
      uVar22 = uVar22 * 0x89 ^ uVar20;
      uVar20 = (uint)*pbVar23;
    } while (uVar20 != 0);
  }
  local_d0 = CONCAT44((int)uVar12,uVar22);
  lVar24 = *(long *)(lVar21 + 0x38);
  if (lVar24 == 0) {
    local_80[0] = 0;
    local_88 = (long ***)0x0;
  }
  else {
    uVar12 = 0;
    while( true ) {
      pbVar23 = (byte *)(lVar24 + 0x10 + uVar12);
      bVar8 = *pbVar23;
      if (bVar8 == 0) break;
      local_80[uVar12] = bVar8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      bVar8 = pbVar23[1];
      if (bVar8 == 0) {
        uVar12 = uVar12 + 1;
        break;
      }
      local_80[uVar12 + 1] = bVar8;
      uVar12 = uVar12 + 2;
    }
    local_80[uVar12 & 0xffffffff] = 0;
    uVar22 = (uint)local_80[0];
    local_88 = (long ***)(uVar12 << 0x20);
    if (local_80[0] != 0) {
      pbVar23 = local_80;
      do {
        pbVar23 = pbVar23 + 1;
        uVar18 = uVar18 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar23;
      } while (uVar22 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar12,uVar18);
  }
  FUN_71037266d0(*(long *)(lVar21 + 0x20),&local_d0,(long ****)&local_88,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(lVar21 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return;
}

