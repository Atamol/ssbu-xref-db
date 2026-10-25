// addr:      71013cdd00
// offset:    0x13cdd00
// name:      FUN_71013cdd00
// mangled:   
// signature: undefined __cdecl FUN_71013cdd00(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013cdd00(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined1 *puVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  undefined8 uVar20;
  long lVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  byte bVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  long lVar30;
  long ***local_70;
  undefined4 local_64;
  
  pppplVar19 = &local_70;
  pppplVar13 = &local_70;
  plVar29 = *(long **)(param_1 + 0x50);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  bVar25 = 2;
  if (DAT_71052c599a != '\0') {
    bVar25 = 1;
  }
  bVar2 = DAT_71052c599a == '\0';
  if (DAT_71052c573a == '\0') {
    bVar2 = bVar25;
  }
  if (DAT_71052c5bfa == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (DAT_71052c5e5a == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (DAT_71052c60ba == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (DAT_71052c631a == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (DAT_71052c657a == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (DAT_71052c67da == '\0') {
    bVar2 = bVar2 + 1;
  }
  if (bVar2 < 2) {
    bVar2 = 1;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar8 = DAT_71053050f0;
  lVar21 = *(long *)(**(long **)(*plVar29 + 8) + 0xcd0);
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)&DAT_00000088;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      param_3 = (undefined **)pppplVar19;
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,pppplVar19,param_4,param_5,param_6,param_7,param_8),
         param_3 = (undefined **)pppplVar19, puVar9 != (undefined8 *)0x0)) goto LAB_71013cde38;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71013cde38:
  *puVar9 = &PTR_FUN_71050abf38;
  puVar9[1] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[0xf] = lVar21 + 0x28;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  plVar11 = (long *)FUN_710392e290(0x10,0x450,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ***)0x450;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar10 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x450,pppplVar13,param_4,param_5,param_6,param_7,
                                           param_8), plVar11 != (long *)0x0)) goto LAB_71013cdec0;
    }
    plVar11 = (long *)0x0;
  }
LAB_71013cdec0:
  ppppbVar17 = (byte ****)(ulong)(iVar8 == 0x7010800);
  ppppbVar14 = (byte ****)(ulong)(bVar2 < 4);
  FUN_7101bc3210(plVar11,(long)puVar9,ppppbVar14,ppppbVar17,param_5,param_6,param_7,param_8);
  puVar9[0x10] = plVar11;
  puVar9[2] = &DAT_7105333600;
  uVar6 = DAT_7105333664;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = uVar6;
  do {
    uVar26 = DAT_7105333650;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar26 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,extraout_x1,(long ****)ppppbVar14,ppppbVar17,param_5,param_6,param_7,
                 param_8);
  lVar21 = plVar29[0x26];
  plVar29[0x26] = (long)puVar9;
  if (lVar21 != 0) {
    FUN_71032cad20(lVar21);
    puVar9 = (undefined8 *)plVar29[0x26];
  }
  *(bool *)((long)plVar29 + 0x266) = bVar2 < 4;
  *(undefined1 *)((long)plVar29 + 0x265) = 1;
  lVar28 = puVar9[0x10];
  *(undefined1 *)(lVar28 + 0x430) = 1;
  FUN_710377aee0(0x3f800000,lVar28 + 0x1a0);
  lVar21 = *(long *)(*(long *)(lVar28 + 0x338) + 0x1b8);
  if (lVar21 != 0) {
    lVar27 = *(long *)(lVar28 + 0x338) + 0x1b8;
    lVar30 = lVar27;
    do {
      if (1 < *(int *)(lVar21 + 0x20)) {
        lVar30 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 2) * 8);
    } while (lVar21 != 0);
    if (((lVar30 != lVar27) && (*(int *)(lVar30 + 0x20) < 3)) &&
       (plVar11 = *(long **)(lVar30 + 0x28), plVar11 != (long *)0x0)) {
      bVar7 = *(char *)(lVar28 + 0x430) == '\0';
      (**(code **)(*plVar11 + 0x1f8))(plVar11,!bVar7);
      ppppbVar14 = (byte ****)0x0;
      (**(code **)(*plVar11 + 0x388))(plVar11,bVar7);
    }
  }
  if (*(char *)(lVar28 + 0x431) == '\0') {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(lVar28 + 0x430) != '\0';
  }
  (**(code **)(**(long **)(lVar28 + 0x348) + 0x60))(*(long **)(lVar28 + 0x348),bVar7);
  lVar21 = *(long *)(plVar29[0x26] + 0x80);
  *(undefined4 *)(lVar21 + 0x428) = 7;
  FUN_710377a120(lVar21 + 0x270,"mel_mockbattle_cp_attack",ppppbVar14,ppppbVar17,param_5,param_6,
                 param_7,param_8);
  if (bVar2 == 2) {
    uVar15 = 1;
    uVar18 = 1;
    pppplVar19 = (long ****)0x1;
    uVar20 = 0;
    FUN_7101bc96d0(*(long *)(plVar29[0x26] + 0x80),1,(long ****)0x1,(byte ****)0x1,(long ****)0x1,0,
                   param_7,param_8);
    lVar21 = *(long *)(plVar29[0x26] + 0x80);
    piVar23 = *(int **)(lVar21 + 0x438);
    piVar22 = *(int **)(lVar21 + 0x440);
    if ((piVar23 != piVar22) && (*piVar23 != 4)) {
      piVar24 = piVar23 + 1;
      do {
        if (piVar22 == piVar24) goto LAB_71013ce1a4;
        piVar23 = piVar24 + 1;
        iVar8 = *piVar24;
        piVar24 = piVar23;
      } while (iVar8 != 4);
LAB_71013ce178:
      piVar23 = piVar23 + -1;
    }
  }
  else if (bVar2 == 1) {
    uVar18 = 1;
    pppplVar19 = (long ****)0x1;
    uVar20 = 1;
    uVar15 = 0;
    FUN_7101bc96d0(*(long *)(plVar29[0x26] + 0x80),1,(long ****)0x0,(byte ****)0x1,(long ****)0x1,1,
                   param_7,param_8);
    lVar21 = *(long *)(plVar29[0x26] + 0x80);
    piVar23 = *(int **)(lVar21 + 0x438);
    piVar22 = *(int **)(lVar21 + 0x440);
    if ((piVar23 != piVar22) && (*piVar23 != 4)) {
      piVar24 = piVar23 + 1;
      do {
        if (piVar22 == piVar24) goto LAB_71013ce1a4;
        piVar23 = piVar24 + 1;
        iVar8 = *piVar24;
        piVar24 = piVar23;
      } while (iVar8 != 4);
      goto LAB_71013ce178;
    }
  }
  else {
    if (bVar2 != 3) {
      pppplVar19 = (long ****)0x0;
      uVar20 = 0;
      FUN_7101bc96d0(*(long *)(plVar29[0x26] + 0x80),0,(long ****)0x1,(byte ****)0x0,(long ****)0x0,
                     0,param_7,param_8);
      lVar21 = *(long *)(plVar29[0x26] + 0x80);
      piVar22 = *(int **)(lVar21 + 0x438);
      piVar23 = *(int **)(lVar21 + 0x440);
      if (piVar22 != piVar23) {
        iVar8 = *piVar22;
        while (iVar8 != 0) {
          piVar22 = piVar22 + 1;
          if (piVar23 == piVar22) goto LAB_71013ce47c;
          iVar8 = *piVar22;
        }
      }
      if (piVar22 != piVar23) {
        *(undefined4 *)(lVar21 + 0x420) = 0;
        FUN_710377a280(lVar21 + 0x230,(byte *)"mel_mockbattle_cp_n",1);
        lVar21 = *(long *)(plVar29[0x26] + 0x80);
      }
LAB_71013ce47c:
      lVar21 = *(long *)(lVar21 + 0x220) + 0x20;
      goto LAB_71013ce1ac;
    }
    uVar15 = 1;
    uVar18 = 1;
    pppplVar19 = (long ****)0x0;
    uVar20 = 0;
    FUN_7101bc96d0(*(long *)(plVar29[0x26] + 0x80),1,(long ****)0x1,(byte ****)0x1,(long ****)0x0,0,
                   param_7,param_8);
    lVar21 = *(long *)(plVar29[0x26] + 0x80);
    piVar23 = *(int **)(lVar21 + 0x438);
    piVar22 = *(int **)(lVar21 + 0x440);
    if ((piVar23 != piVar22) && (*piVar23 != 4)) {
      piVar24 = piVar23 + 1;
      do {
        if (piVar22 == piVar24) goto LAB_71013ce1a4;
        piVar23 = piVar24 + 1;
        iVar8 = *piVar24;
        piVar24 = piVar23;
      } while (iVar8 != 4);
      goto LAB_71013ce178;
    }
  }
  if (piVar23 != piVar22) {
    *(undefined4 *)(lVar21 + 0x420) = 4;
    FUN_710377a120(lVar21 + 0x230,"mel_mockbattle_cp_auto",uVar15,uVar18,pppplVar19,uVar20,param_7,
                   param_8);
    lVar21 = *(long *)(plVar29[0x26] + 0x80);
  }
LAB_71013ce1a4:
  lVar21 = *(long *)(lVar21 + 0x220) + 0x30;
LAB_71013ce1ac:
  FUN_710377aee0(0x3f800000,lVar21);
  uVar4 = *(uint *)(plVar29 + 0x2a);
  uVar26 = 2;
  if (uVar4 == 0xffffffff) {
    uVar26 = 1;
  }
  uVar3 = (uint)(uVar4 != 0xffffffff);
  if (*(int *)((long)plVar29 + 0x154) != -1) {
    uVar3 = uVar26;
  }
  if (uVar3 != -(uint)((int)plVar29[0x2b] != -1)) {
    lVar21 = 0;
    lVar28 = 0x55;
    while( true ) {
      if (7 < uVar4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar30 = plVar29[0x29];
      puVar12 = *(undefined1 **)(lVar30 + (long)(int)uVar4 * 0x1d8 + 0x68);
      lVar27 = (*(long **)(plVar29[0x26] + 0x80))[0x44];
      if (((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000 &&
          ((ulong)puVar12 & 0xffffffffff) != 0) {
        plVar11 = *(long **)(**(long **)(plVar29[0x26] + 0x80) + 0x78);
        if (*(char *)(lVar30 + (long)(int)uVar4 * 0x1d8 + 0x74) != '\0') {
          puVar12 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x11b1ccb807);
        }
        ppppppppplVar16 = (long *********)(ulong)*(uint *)(lVar30 + (long)(int)uVar4 * 0x1d8 + 0x70)
        ;
        ppppbVar14 = (byte ****)0x0;
        plVar11 = FUN_710323f330(plVar11,(ulong)puVar12,(ulong)ppppppppplVar16,0,pppplVar19,uVar20,
                                 param_7,param_8);
        FUN_7103778b80(*(long *)(lVar27 + lVar21 + 0x98),(long)plVar11,ppppppppplVar16,ppppbVar14,
                       pppplVar19,uVar20,param_7,param_8);
        lVar27 = *(long *)(*(long *)(plVar29[0x26] + 0x80) + 0x220);
      }
      lVar27 = lVar27 + lVar21;
      *(undefined4 *)(lVar27 + 0xb0) = 0;
      FUN_710377a280(lVar27 + 0x70,(byte *)"mel_mockbattle_dmg_n",1);
      FUN_710377a280(lVar27 + 0x80,(byte *)"mel_mockbattle_dmg_decimal_n",1);
      bVar7 = (int)plVar29[0x2a] != -1;
      uVar10 = 2;
      if (!bVar7) {
        uVar10 = 1;
      }
      uVar1 = (ulong)bVar7;
      if (*(int *)((long)plVar29 + 0x154) != -1) {
        uVar1 = uVar10;
      }
      if ((int)plVar29[0x2b] != -1) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 <= lVar28 - 0x54U) break;
      uVar4 = *(uint *)((long)plVar29 + lVar28 * 4);
      lVar21 = lVar21 + 0x58;
      lVar28 = lVar28 + 1;
    }
  }
  plVar11 = *(long **)(*plVar29 + 0x48);
  lVar21 = (**(code **)(*plVar11 + 0x10))(plVar11,*plVar29,0xd);
  plVar29[0x27] = lVar21;
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053050f0 == 0x7010101) || (DAT_71053050f0 == 0x7010400)) ||
     (DAT_71053050f0 == 0x7010800)) {
    bVar25 = 1;
  }
  else {
    bVar25 = 0;
  }
  FUN_710140d6f0(plVar29[0x28],(long *)(*(long *)(plVar29[0x26] + 0x80) + 0x228),
                 **(long **)(*plVar29 + 8) + 0xcd8,bVar25);
  plVar29[0x45] = plVar29[0x26];
  plVar29[0x4a] = *(long *)(plVar29[0x26] + 0x80) + 0x328;
  return;
}

