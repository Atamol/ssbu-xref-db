// addr:      710146f770
// offset:    0x146f770
// name:      FUN_710146f770
// mangled:   
// signature: undefined __cdecl FUN_710146f770(long param_1, undefined8 param_2, undefined8 param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710146f770(long param_1,undefined8 param_2,undefined8 param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long *********ppppppppplVar14;
  undefined1 uVar15;
  long lVar16;
  char *pcVar17;
  long *plVar18;
  char *pcVar19;
  long *plVar20;
  ushort uVar21;
  int iVar22;
  uint *puVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  float fVar32;
  uint uVar33;
  undefined8 local_e0;
  undefined1 *local_d8 [2];
  undefined8 local_c8;
  uint local_c0;
  int local_bc;
  undefined1 local_b8;
  undefined7 uStack_b7;
  long ********local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  long ********local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long *local_60;
  uint local_58;
  char local_54 [4];
  
  if ((*(int *)(param_1 + 0xd4) != 0) || (*(int *)(param_1 + 0xd8) != 0)) {
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x80);
    iVar10 = *(int *)(lVar16 + 0x2e0);
    if (iVar10 == 0) {
      uVar15 = 1;
      if (*(int *)(lVar16 + 800) == 1) {
        uVar15 = 2;
      }
      *(undefined1 *)(param_1 + 0xe0) = uVar15;
      if (0x12 < *(uint *)(param_1 + 0xcc)) goto LAB_71014705fc;
      lVar16 = param_1 + (long)(int)*(uint *)(param_1 + 0xcc) * 4;
      iVar10 = *(int *)(lVar16 + 0x80) + 1;
    }
    else {
      if (iVar10 != 2) {
        return;
      }
      if (0x11 < *(int *)(param_1 + 0xcc)) {
        return;
      }
      uVar9 = *(int *)(param_1 + 0xcc) + 1;
      *(uint *)(param_1 + 0xcc) = uVar9;
      if (0x12 < uVar9) {
LAB_71014705fc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar16 = param_1 + (long)(int)uVar9 * 4;
      iVar10 = 1;
    }
    *(int *)(lVar16 + 0x80) = iVar10;
    return;
  }
  lVar16 = *(long *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0xe0) = 0;
  FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(lVar16 + 0x80) + 8),1,(long ****)0x10501,
                 (byte ****)param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar16 + 0x70) = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_e0 = 0;
  local_d8[0] = &DAT_c1ffff0000000000;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = (long ********)&DAT_c1ffff0000000000;
  local_a8 = CONCAT71(local_a8._1_7_,0xff);
  local_90 = 0;
  local_d8[1] = &DAT_c1ffff0000000000;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  fVar32 = DAT_71052cfe24;
  if (DAT_71052cfe24 <= DAT_71052cfe20) {
    fVar32 = DAT_71052cfe20;
  }
  if (fVar32 <= 0.0) {
    fVar32 = 0.0;
  }
  else {
    fVar32 = (float)(uint)(int)fVar32;
  }
  local_e0 = CONCAT44(local_e0._4_4_,(int)fVar32);
  FUN_71015435c0((long *)&local_68,(long *)*DAT_71052c3910,0x10af089a93);
  plVar29 = (long *)CONCAT44(uStack_64,local_68);
  if (plVar29 != (long *)0x0) {
    local_88 = (long ********)0x1e12f5799c;
    uVar11 = (**(code **)(*plVar29 + 0x18))(plVar29,&local_88);
    uVar24 = local_e0;
    if ((uVar11 & 1) != 0) {
      local_e0._6_2_ = SUB82(uVar24,6);
      local_e0._0_6_ = CONCAT15((char)plVar29[0x2f],CONCAT14((char)plVar29[0x2e],(uint)local_e0));
    }
  }
  puVar12 = DAT_71052cc630;
  bVar8 = local_e0._4_1_ == '\0';
  if (bVar8) {
    local_e0 = local_e0 & 0xffffffffffff;
  }
  else {
    local_e0._0_7_ = CONCAT16(DAT_71052c51b0 == '\t' && DAT_71052c5259 != '\0',(undefined6)local_e0)
    ;
    lVar16 = *(long *)(DAT_710532f730 + 8);
    if (DAT_71052cc63a == '\0') {
      lVar31 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar31,(ulong)DAT_71052cc630);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar31,0x11b1ccb807);
      }
      lVar31 = 1;
      local_c8 = CONCAT44(local_c8._4_4_,(int)DAT_71052cc63b);
      local_d8[0] = puVar12;
    }
    else {
      lVar31 = 0;
    }
    puVar12 = DAT_71052cfe90;
    if (DAT_71052cfe9a == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052cfe90);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052cfe9b;
      if (1 < (int)lVar31 + 1U) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052d36f0;
    if (DAT_71052d36fa == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052d36f0);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052d36fb;
      if ((int)lVar31 != 0) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052d6f50;
    if (DAT_71052d6f5a == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052d6f50);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052d6f5b;
      if ((int)lVar31 != 0) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052da7b0;
    if (DAT_71052da7ba == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052da7b0);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052da7bb;
      if ((int)lVar31 != 0) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052de010;
    if (DAT_71052de01a == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052de010);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052de01b;
      if ((int)lVar31 != 0) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052e1870;
    if (DAT_71052e187a == '\0') {
      lVar27 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar27,(ulong)DAT_71052e1870);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar27,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052e187b;
      if ((int)lVar31 != 0) goto LAB_710146fcb0;
      lVar31 = 1;
    }
    puVar12 = DAT_71052e50d0;
    if (DAT_71052e50da == '\0') {
      lVar16 = *(long *)(lVar16 + 0x168);
      uVar9 = FUN_71032632a0(lVar16,(ulong)DAT_71052e50d0);
      if ((uVar9 & 1) != 0) {
        puVar12 = FUN_71032631a0(lVar16,0x11b1ccb807);
      }
      local_d8[lVar31] = puVar12;
      *(int *)(((ulong)&local_e0 | lVar31 << 2) + 0x18) = (int)DAT_71052e50db;
    }
  }
LAB_710146fcb0:
  uVar9 = (uint)local_e0;
  bVar8 = false;
  if (DAT_71052c36c0 != (long *)0x0) {
    pcVar19 = *(char **)(**(long **)(*DAT_71052c36c0 + 8) + 0x18);
    if ((*pcVar19 == '\f') && (iVar10 = *(int *)(pcVar19 + 1) + -1, 0 < *(int *)(pcVar19 + 1))) {
      lVar16 = *(long *)(**(long **)(*DAT_71052c36c0 + 8) + 0x10);
      iVar22 = 0;
      pcVar17 = "";
      do {
        iVar1 = iVar10 + iVar22;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar23 = (uint *)(*(long *)(lVar16 + 0x28) + (long)*(int *)(pcVar19 + 5) + (long)iVar1 * 8)
        ;
        uVar24 = *(ulong *)(*(long *)(lVar16 + 0x20) + (ulong)*puVar23 * 8);
        if (uVar24 == 0x144b75deff) {
          uVar33 = puVar23[1];
          if ((int)uVar33 < 0) goto LAB_710146fd60;
          pcVar17 = pcVar19 + (int)uVar33;
          break;
        }
        iVar7 = iVar1 + -1;
        if (uVar24 < 0x144b75df00) {
          iVar22 = iVar1 + 1;
          iVar7 = iVar10;
        }
        iVar10 = iVar7;
      } while (iVar22 <= iVar10);
    }
    else {
LAB_710146fd60:
      pcVar17 = "";
    }
    switch(*pcVar17) {
    case '\x01':
    case '\x03':
      uVar33 = (uint)(byte)pcVar17[1];
      break;
    case '\x02':
      uVar33 = (uint)pcVar17[1];
      break;
    case '\x04':
      uVar33 = (uint)*(short *)(pcVar17 + 1);
      break;
    case '\x05':
      uVar33 = (uint)*(ushort *)(pcVar17 + 1);
      break;
    case '\x06':
    case '\a':
      uVar33 = *(uint *)(pcVar17 + 1);
      break;
    default:
      uVar33 = 0;
    }
    bVar8 = uVar33 < (uint)local_e0;
  }
  local_e0 = CONCAT17(bVar8,(undefined7)local_e0);
  if (DAT_71052c51b6 == '\0') {
    lVar16 = 0x2120;
    if (DAT_71052c5259 == '\0' || DAT_71052c51b0 != '\t') {
      lVar16 = 0x1dd0;
    }
    bVar8 = *(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + lVar16 + 0x20) != 0;
  }
  else {
    bVar8 = false;
  }
  local_c0 = CONCAT31(local_c0._1_3_,bVar8);
  uVar21 = 0x14;
  if (DAT_71052c5259 == '\0' || DAT_71052c51b0 != '\t') {
    uVar21 = 0x12;
  }
  local_bc = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),uVar21,uVar9);
  if ((DAT_71052c5258 == '\0') || (DAT_71052c51b0 != '\t')) {
    bVar8 = true;
    if ((DAT_71052c51b0 == '\t') && (DAT_71052c5259 != '\0')) {
      param_4 = &local_88;
      local_54[0] = '\x01';
      local_58 = 0;
      local_88 = (long ********)&DAT_c1ffff0000000000;
      FUN_71017994c0(&local_58,local_54,0x14,param_4);
      bVar8 = local_54[0] != '\0';
    }
  }
  else {
    puVar28 = *(undefined8 **)(*DAT_7105314510 + 0x208);
    uVar24 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),local_d8[0]);
    if ((-1 < (int)uVar24) &&
       (uVar24 = *(ulong *)(*(long *)*puVar28 + (long)(int)uVar24 * 8 + 0x1bd8),
       (uVar24 & 0xff0000000000) != 0)) {
      lVar16 = *(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8);
      uVar9 = *(uint *)(lVar16 + 0x1df0);
      if (uVar9 != 0) {
        uVar11 = 0;
        puVar23 = (uint *)(lVar16 + 0x1dfc);
        do {
          if (*puVar23 <= (uint)uVar24) break;
          uVar11 = uVar11 + 1;
          puVar23 = puVar23 + 2;
        } while (uVar11 < uVar9);
      }
    }
    bVar8 = true;
  }
  local_b8 = bVar8;
  FUN_71014c07c0(&local_88);
  local_a0 = local_78;
  local_98 = uStack_70;
  local_b0 = local_88;
  local_a8 = local_80;
  local_90 = DAT_71052cc5f0;
  if (local_60 != (long *)0x0) {
    plVar29 = local_60 + 1;
    do {
      lVar16 = *plVar29;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar8) {
        *plVar29 = lVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar28 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x80);
  puVar28[0x2e] = local_e0;
  puVar28[0x2f] = local_d8[0];
  puVar28[0x30] = local_d8[1];
  puVar28[0x33] = CONCAT71(uStack_b7,local_b8);
  puVar28[0x34] = local_b0;
  puVar28[0x31] = local_c8;
  puVar28[0x32] = CONCAT44(local_bc,local_c0);
  puVar28[0x35] = local_a8;
  uVar9 = *(uint *)(puVar28 + 0x2e);
  *(undefined1 *)(puVar28 + 0x38) = local_90;
  puVar28[0x36] = local_a0;
  puVar28[0x37] = local_98;
  if (uVar9 == 0) {
    FUN_710377a310((long)(puVar28 + 0x1e),1);
    ppppppppplVar14 = (long *********)0x0;
  }
  else {
    FUN_710377a310((long)(puVar28 + 0x1e),1);
    ppppppppplVar14 = (long *********)(ulong)(uVar9 % 1000);
  }
  FUN_710377a310((long)(puVar28 + 0x20),1);
  if (*(char *)((long)puVar28 + 0x174) != '\0') {
    puVar12 = (undefined1 *)puVar28[0x2f];
    if ((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar12 & 0xffffffffff) != 0)) {
      lVar16 = *(long *)(DAT_710532f730 + 8);
      plVar29 = (long *)*puVar28;
      bVar8 = FUN_71032648e0(lVar16 + 0x160,(ulong)puVar12);
      if (bVar8) {
        puVar12 = FUN_71032631a0(*(long *)(lVar16 + 0x168),0x143829f67e);
      }
      ppppppppplVar14 = (long *********)(ulong)*(uint *)(puVar28 + 0x31);
      param_4 = (long *********)0x0;
      plVar29 = FUN_710323f330(plVar29,(ulong)puVar12,(ulong)ppppppppplVar14,0,param_5,param_6,
                               param_7,param_8);
      FUN_7103778b80(puVar28[0x23],(long)plVar29,ppppppppplVar14,(byte ****)param_4,param_5,param_6,
                     param_7,param_8);
    }
    puVar12 = (undefined1 *)puVar28[0x30];
    if ((((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar12 & 0xffffffffff) != 0)) {
      lVar16 = *(long *)(DAT_710532f730 + 8);
      plVar29 = (long *)*puVar28;
      bVar8 = FUN_71032648e0(lVar16 + 0x160,(ulong)puVar12);
      if (bVar8) {
        puVar12 = FUN_71032631a0(*(long *)(lVar16 + 0x168),0x143829f67e);
      }
      ppppppppplVar14 = (long *********)(ulong)*(uint *)((long)puVar28 + 0x18c);
      param_4 = (long *********)0x0;
      plVar29 = FUN_710323f330(plVar29,(ulong)puVar12,(ulong)ppppppppplVar14,0,param_5,param_6,
                               param_7,param_8);
      FUN_7103778b80(puVar28[0x25],(long)plVar29,ppppppppplVar14,(byte ****)param_4,param_5,param_6,
                     param_7,param_8);
    }
    if (*(char *)((long)puVar28 + 0x176) == '\0') {
      if (*(char *)((long)puVar28 + 0x175) == '\0') {
        uVar9 = 0x3f800000;
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0x40000000;
    }
    FUN_710377b010((ulong)uVar9,(long)(puVar28 + 8));
  }
  uVar33 = 0;
  uVar9 = uVar33;
  if (*(char *)(puVar28 + 0x32) != '\0') {
    uVar9 = 0x3f800000;
  }
  FUN_710377b010((ulong)uVar9,(long)(puVar28 + 10));
  if (*(char *)(puVar28 + 0x32) != '\0') {
    if (*(char *)(puVar28 + 0x33) != '\0') {
      uVar33 = 0x3f800000;
    }
    FUN_710377b010((ulong)uVar33,(long)(puVar28 + 0xc));
    ppppppppplVar14 = (long *********)(ulong)*(uint *)((long)puVar28 + 0x194);
    FUN_710377a310((long)(puVar28 + 0x1c),1);
  }
  puVar26 = (undefined8 *)puVar28[0x60];
  puVar28[0x61] = puVar26;
  if ((*(char *)(puVar28 + 0x35) == -1) || (*(int *)(puVar28 + 0x37) < 1)) goto LAB_7101470280;
  if ((undefined8 *)puVar28[0x62] != puVar26) {
    uVar2 = puVar28[0x34];
    uVar3 = puVar28[0x35];
    uVar4 = puVar28[0x37];
    puVar26[2] = puVar28[0x36];
    puVar26[3] = uVar4;
    *puVar26 = uVar2;
    puVar26[1] = uVar3;
    puVar28[0x61] = puVar28[0x61] + 0x20;
    goto LAB_7101470280;
  }
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = 0;
      local_88 = (long ********)&SUB_00000020;
      ppppppppplVar14 = &local_88;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar24 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,(byte ****)param_4,param_5,
                                   param_6,param_7,param_8), puVar13 != (undefined8 *)0x0))
      goto LAB_7101470254;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101470254:
  uVar3 = puVar28[0x35];
  uVar2 = puVar28[0x36];
  uVar4 = puVar28[0x37];
  *puVar13 = puVar28[0x34];
  puVar13[1] = uVar3;
  puVar13[2] = uVar2;
  puVar13[3] = uVar4;
  puVar28[0x60] = puVar13;
  puVar28[0x61] = puVar13 + 4;
  puVar28[0x62] = puVar13 + 4;
  if (puVar26 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar26);
  }
LAB_7101470280:
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  if (*(int *)(lVar16 + 0x2e0) == 0) {
    plVar29 = *(long **)(lVar16 + 0x18);
    plVar25 = (long *)plVar29[1];
    if (plVar25 != (long *)0x0) {
      if ((char)plVar29[2] != '\0') {
        plVar30 = *(long **)(*plVar29 + 0x80);
        plVar29 = (long *)(*plVar29 + 0x88);
        if (plVar30 != plVar29) {
          do {
            while( true ) {
              uVar24 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
              if (((uVar24 & 1) != 0) &&
                 (uVar24 = (**(code **)(*plVar25 + 0x120))(plVar25,plVar30[0xd]), (uVar24 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar30[0xd] + 0x178))();
                (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
              }
              plVar18 = (long *)plVar30[1];
              if ((long *)plVar30[1] == (long *)0x0) break;
              do {
                plVar30 = plVar18;
                plVar18 = (long *)*plVar30;
              } while ((long *)*plVar30 != (long *)0x0);
LAB_710147034c:
              if (plVar30 == plVar29) goto LAB_7101470364;
            }
            plVar18 = plVar30 + 2;
            plVar20 = (long *)*plVar18;
            if ((long *)*plVar20 != plVar30) {
              do {
                lVar31 = *plVar18;
                plVar18 = (long *)(lVar31 + 0x10);
                plVar30 = (long *)*plVar18;
              } while (*plVar30 != lVar31);
              goto LAB_710147034c;
            }
            plVar30 = plVar20;
          } while (plVar20 != plVar29);
LAB_7101470364:
          plVar25 = *(long **)(*(long *)(lVar16 + 0x18) + 8);
        }
      }
      (**(code **)(*plVar25 + 0x188))(plVar25);
    }
    plVar29 = *(long **)(lVar16 + 0x38);
    plVar25 = (long *)plVar29[1];
    if (plVar25 != (long *)0x0) {
      if ((char)plVar29[2] != '\0') {
        plVar30 = *(long **)(*plVar29 + 0x80);
        plVar29 = (long *)(*plVar29 + 0x88);
        if (plVar30 != plVar29) {
          do {
            while( true ) {
              uVar24 = (**(code **)(*(long *)plVar30[0xd] + 0x148))();
              if (((uVar24 & 1) != 0) &&
                 (uVar24 = (**(code **)(*plVar25 + 0x120))(plVar25,plVar30[0xd]), (uVar24 & 1) != 0)
                 ) {
                (**(code **)(*(long *)plVar30[0xd] + 0x178))();
                (**(code **)(*(long *)plVar30[0xd] + 0x140))((long *)plVar30[0xd],0);
              }
              plVar18 = (long *)plVar30[1];
              if ((long *)plVar30[1] == (long *)0x0) break;
              do {
                plVar30 = plVar18;
                plVar18 = (long *)*plVar30;
              } while ((long *)*plVar30 != (long *)0x0);
LAB_7101470438:
              if (plVar30 == plVar29) goto LAB_7101470450;
            }
            plVar18 = plVar30 + 2;
            plVar20 = (long *)*plVar18;
            if ((long *)*plVar20 != plVar30) {
              do {
                lVar31 = *plVar18;
                plVar18 = (long *)(lVar31 + 0x10);
                plVar30 = (long *)*plVar18;
              } while (*plVar30 != lVar31);
              goto LAB_7101470438;
            }
            plVar30 = plVar20;
          } while (plVar20 != plVar29);
LAB_7101470450:
          plVar25 = *(long **)(*(long *)(lVar16 + 0x38) + 8);
        }
      }
      (**(code **)(*plVar25 + 0x188))(plVar25);
    }
    FUN_710377b140(lVar16 + 0x70);
    FUN_710377b140(lVar16 + 0xa0);
    bVar5 = *(byte *)(lVar16 + 0x1c0);
    *(byte *)(lVar16 + 0x2fc) = bVar5 ^ 1;
    FUN_7103776640(&local_88,**(long **)(lVar16 + 8) + 8,(byte ****)"set_key_help_00",
                   ppppppppplVar14,param_4,param_5,param_6,param_7,param_8);
    uVar24 = local_80;
    if ((*(long *)(local_80 + 8) != 0) &&
       (lVar31 = *(long *)(*(long *)(local_80 + 8) + 0x18), lVar31 != 0)) {
      *(byte *)(lVar31 + 0x58) = (bVar5 | *(byte *)(lVar31 + 0x58) & 0xfe) ^ 1;
    }
    local_88 = (long ********)&PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar24 != 0) {
      uVar11 = *(ulong *)(uVar24 + 0x18);
      *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar24 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar24);
    }
    *(undefined4 *)(lVar16 + 800) = 0;
    *(undefined8 *)(lVar16 + 0x1d0) = 0;
    *(undefined8 *)(lVar16 + 0x1d8) = 0;
    *(undefined8 *)(lVar16 + 0x2d4) = 0;
    *(undefined8 *)(lVar16 + 0x2cc) = 0;
    *(undefined8 *)(lVar16 + 0x2c4) = 0;
    *(undefined8 *)(lVar16 + 700) = 0;
    *(undefined8 *)(lVar16 + 0x2b4) = 0;
    *(undefined8 *)(lVar16 + 0x2ac) = 0;
    *(undefined8 *)(lVar16 + 0x2a4) = 0;
    *(undefined8 *)(lVar16 + 0x294) = 0;
    *(undefined8 *)(lVar16 + 0x29c) = 0;
    *(undefined8 *)(lVar16 + 0x2e0) = 0xffffffff;
    *(undefined4 *)(lVar16 + 0x2e8) = 0xffffffff;
    *(undefined4 *)(lVar16 + 0x2dc) = 0;
    *(undefined1 *)(lVar16 + 0x2ec) = 0;
    *(undefined4 *)(lVar16 + 0x290) = 1;
    FUN_7101b5e670((long *)(lVar16 + 0x1c8));
  }
  return;
}

