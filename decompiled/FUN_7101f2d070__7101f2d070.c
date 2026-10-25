// addr:      7101f2d070
// offset:    0x1f2d070
// name:      FUN_7101f2d070
// mangled:   
// signature: undefined __cdecl FUN_7101f2d070(long param_1, long * param_2, ulong * param_3, ulong * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f2d070(long param_1,long *param_2,ulong *param_3,ulong *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  char cVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar9;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  long ****pppplVar10;
  byte ****ppppbVar11;
  long lVar12;
  code *pcVar13;
  byte ***pppbVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long ****pppplVar22;
  void *pvVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  long ***local_1c8;
  ulong local_1c0;
  long ***local_1b8;
  long ***local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  ulong local_178;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  puVar2 = (undefined8 *)(param_1 + 0xd0);
  FUN_71032cbf30(puVar2,*param_2,param_3,(byte ****)0x1,param_5,param_6,param_7,param_8);
  FUN_71032cbf30((undefined8 *)(param_1 + 0x2e190),*param_2,param_4,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar16 = *(long *)**(undefined8 **)(param_1 + 0xd0);
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0x494) = 0;
  lVar12 = *(long *)(lVar16 + 0x608);
  lVar16 = *(long *)(lVar16 + 0x610);
  if (lVar12 != lVar16) {
    uVar19 = (lVar16 + -0x10) - lVar12;
    uVar18 = ((uint)(uVar19 >> 4) & 0xfffffff) + 1;
    if ((uVar18 & 3) != 0) {
      lVar20 = -((ulong)uVar18 & 3);
      do {
        plVar1 = (long *)(lVar12 + 8);
        lVar12 = lVar12 + 0x10;
        lVar20 = lVar20 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 0;
      } while (lVar20 != 0);
    }
    if (0x2f < uVar19) {
      do {
        *(undefined4 *)(*(long *)(lVar12 + 8) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar12 + 0x18) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar12 + 0x28) + 0x494) = 0;
        plVar1 = (long *)(lVar12 + 0x38);
        lVar12 = lVar12 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 0;
      } while (lVar16 != lVar12);
    }
  }
  FUN_71037760f0(**(long **)*puVar2,1);
  lVar16 = **(long **)*puVar2;
  *(undefined1 *)(lVar16 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar16 + 0x600) + 0x4ab) = 0;
  lVar12 = *(long *)(lVar16 + 0x608);
  lVar20 = *(long *)(lVar16 + 0x610);
  if (lVar12 != lVar20) {
    uVar19 = (lVar20 + -0x10) - lVar12;
    uVar18 = ((uint)(uVar19 >> 4) & 0xfffffff) + 1;
    if ((uVar18 & 3) != 0) {
      lVar21 = -((ulong)uVar18 & 3);
      do {
        plVar1 = (long *)(lVar12 + 8);
        lVar12 = lVar12 + 0x10;
        lVar21 = lVar21 + 1;
        *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar16 + 0x656);
      } while (lVar21 != 0);
    }
    if (0x2f < uVar19) {
      do {
        *(undefined1 *)(*(long *)(lVar12 + 8) + 0x4ab) = *(undefined1 *)(lVar16 + 0x656);
        *(undefined1 *)(*(long *)(lVar12 + 0x18) + 0x4ab) = *(undefined1 *)(lVar16 + 0x656);
        *(undefined1 *)(*(long *)(lVar12 + 0x28) + 0x4ab) = *(undefined1 *)(lVar16 + 0x656);
        plVar1 = (long *)(lVar12 + 0x38);
        lVar12 = lVar12 + 0x40;
        *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar16 + 0x656);
      } while (lVar20 != lVar12);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0xd0) + 0x600) + 0x18) = 0x100;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0xd0) + 0x600) + 0x1c) = 0x200;
  *(undefined4 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0xd0) + 0x600) + 0x20) = 0x80;
  local_1a0 = (undefined **)0x0;
  local_190 = CONCAT17(local_190._7_1_,0x1000100000001);
  puStack_188 = &DAT_41f0000000000000;
  local_180 = (undefined **)((ulong)local_180._4_4_ << 0x20);
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = &DAT_00010101;
  FUN_710337df20((long)&local_1a0);
  plVar1 = (long *)(param_1 + 0xe8);
  ppppbVar11 = (byte ****)&local_1a0;
  FUN_7103770b30(plVar1,(undefined8 *)(**(long **)(param_1 + 0xd0) + 8),(long ****)"selector_1",
                 ppppbVar11,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,0,"set_parts_btn_tab_00",ppppbVar11,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,1,"set_parts_btn_tab_01",ppppbVar11,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x60))(*(long **)(param_1 + 0xe8),0);
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x70))(*(long **)(param_1 + 0xe8),0);
  FUN_7103771930(*(long *)(param_1 + 0xe8),0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  FUN_7103771930(*(long *)(param_1 + 0xe8),1,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6
                 ,param_7,param_8);
  if (alStack_b0 == local_90) {
    pcVar13 = *(code **)(*local_90 + 0x20);
LAB_7101f2d370:
    (*pcVar13)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar13 = *(code **)(*local_90 + 0x28);
    goto LAB_7101f2d370;
  }
  if (alStack_e0 == local_c0) {
    pcVar13 = *(code **)(*local_c0 + 0x20);
LAB_7101f2d3a0:
    (*pcVar13)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f2d3a0;
  }
  if (alStack_110 == local_f0) {
    pcVar13 = *(code **)(*local_f0 + 0x20);
LAB_7101f2d3d0:
    (*pcVar13)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f2d3d0;
  }
  if (alStack_140 == local_120) {
    pcVar13 = *(code **)(*local_120 + 0x20);
LAB_7101f2d400:
    (*pcVar13)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar13 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f2d400;
  }
  if (alStack_170 == local_150) {
    pcVar13 = *(code **)(*local_150 + 0x20);
LAB_7101f2d430:
    (*pcVar13)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar13 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f2d430;
  }
  puStack_188 = &DAT_41f0000000000000;
  local_1a0 = (undefined **)0x0;
  local_190 = CONCAT17(local_190._7_1_,0x1000100000001);
  local_180 = (undefined **)((ulong)local_180 & 0xffffffff00000000);
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = (undefined1 *)0x1000000000100;
  FUN_710337df20((long)&local_1a0);
  plVar1 = (long *)(param_1 + 0xf0);
  ppppbVar11 = (byte ****)&local_1a0;
  FUN_7103770b30(plVar1,(undefined8 *)(**(long **)(param_1 + 0xd0) + 8),(long ****)"selector_0",
                 ppppbVar11,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,2,"scr_sort",ppppbVar11,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x60))(*(long **)(param_1 + 0xf0),0);
  (**(code **)(**(long **)(param_1 + 0xf0) + 0x70))(*(long **)(param_1 + 0xf0),0);
  ppppbVar11 = (byte ****)0x0;
  FUN_7103771930(*(long *)(param_1 + 0xf0),2,(long ****)&DAT_00000008,(byte ****)0x0,param_5,param_6
                 ,param_7,param_8);
  pppplVar10 = (long ****)0x1;
  FUN_7103771a80(plVar1,2,1);
  if (alStack_b0 == local_90) {
    pcVar13 = *(code **)(*local_90 + 0x20);
LAB_7101f2d534:
    (*pcVar13)();
    uVar9 = extraout_x1_00;
  }
  else {
    uVar9 = extraout_x1;
    if (local_90 != (long *)0x0) {
      pcVar13 = *(code **)(*local_90 + 0x28);
      goto LAB_7101f2d534;
    }
  }
  if (alStack_e0 == local_c0) {
    pcVar13 = *(code **)(*local_c0 + 0x20);
LAB_7101f2d56c:
    (*pcVar13)();
    uVar9 = extraout_x1_01;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101f2d56c;
  }
  if (alStack_110 == local_f0) {
    pcVar13 = *(code **)(*local_f0 + 0x20);
LAB_7101f2d59c:
    (*pcVar13)();
    uVar9 = extraout_x1_02;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101f2d59c;
  }
  plVar1 = (long *)(param_1 + 0x2e1c0);
  if (alStack_140 == local_120) {
    pcVar13 = *(code **)(*local_120 + 0x20);
LAB_7101f2d5d0:
    (*pcVar13)();
    uVar9 = extraout_x1_03;
  }
  else if (local_120 != (long *)0x0) {
    pcVar13 = *(code **)(*local_120 + 0x28);
    goto LAB_7101f2d5d0;
  }
  if (alStack_170 == local_150) {
    pcVar13 = *(code **)(*local_150 + 0x20);
LAB_7101f2d600:
    (*pcVar13)();
    uVar9 = extraout_x1_04;
  }
  else if (local_150 != (long *)0x0) {
    pcVar13 = *(code **)(*local_150 + 0x28);
    goto LAB_7101f2d600;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x2e1c8);
  if (puVar4 < *(undefined4 **)(param_1 + 0x2e1d0)) {
    *puVar4 = 0;
    *(long *)(param_1 + 0x2e1c8) = *(long *)(param_1 + 0x2e1c8) + 4;
  }
  else {
    pvVar23 = (void *)*plVar1;
    pppplVar22 = (long ****)((long)puVar4 - (long)pvVar23);
    uVar19 = ((long)pppplVar22 >> 2) + 1;
    if (uVar19 >> 0x3e != 0) goto LAB_7101f2dd20;
    lVar12 = (long)*(undefined4 **)(param_1 + 0x2e1d0) - (long)pvVar23;
    if ((ulong)(lVar12 >> 2) < 0x1fffffffffffffff) {
      uVar8 = lVar12 >> 1;
      if (uVar19 <= uVar8) {
        uVar19 = uVar8;
      }
      if (uVar19 != 0) {
        if (uVar19 >> 0x3e != 0) goto LAB_7101f2d66c;
        goto LAB_7101f2d678;
      }
LAB_7101f2d6e0:
      pvVar7 = (void *)0x0;
    }
    else {
      uVar19 = 0x3fffffffffffffff;
LAB_7101f2d678:
      pppbVar14 = (byte ***)(uVar19 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar7 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar10,ppppbVar11,param_5,param_6,param_7,
                                      param_8);
      uVar9 = extraout_x1_05;
      if (pvVar7 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b8 = (long ***)((ulong)local_1b8 & 0xffffffff00000000);
          pppplVar10 = (long ****)&local_1a0;
          local_1a0 = (undefined **)pppbVar14;
          auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
          uVar9 = auVar25._8_8_;
          if (((auVar25._0_8_ & 1) != 0) &&
             (pvVar7 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar10,ppppbVar11,param_5,param_6,
                                              param_7,param_8), uVar9 = extraout_x1_06,
             pvVar7 != (void *)0x0)) goto LAB_7101f2d6e4;
        }
        goto LAB_7101f2d6e0;
      }
    }
LAB_7101f2d6e4:
    puVar4 = (undefined4 *)((long)pvVar7 + ((long)pppplVar22 >> 2) * 4);
    *puVar4 = 0;
    if (0 < (long)pppplVar22) {
      memcpy(pvVar7,pvVar23,(size_t)pppplVar22);
      uVar9 = extraout_x1_07;
      pppplVar10 = pppplVar22;
    }
    *(void **)(param_1 + 0x2e1d0) = (void *)((long)pvVar7 + uVar19 * 4);
    *plVar1 = (long)pvVar7;
    *(undefined4 **)(param_1 + 0x2e1c8) = puVar4 + 1;
    if (pvVar23 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar23);
      uVar9 = extraout_x1_08;
    }
  }
  puVar3 = (ulong *)(param_1 + 0x2e1d8);
  uVar24 = 0x811c9dc5;
  local_198 = (undefined1 *)0x6c7065725f756e6d;
  local_190 = 0x5f617461645f7961;
  puStack_188 = (undefined1 *)0x30305f74726f73;
  uVar15 = 0x6d;
  lVar12 = 9;
  uVar18 = uVar24;
  do {
    uVar18 = uVar18 * 0x89 ^ uVar15;
    uVar15 = (uint)*(byte *)((long)&local_1a0 + lVar12);
    lVar12 = lVar12 + 1;
  } while (uVar15 != 0);
  local_1a0 = (undefined **)CONCAT44(0x17,uVar18);
  puVar5 = *(uint **)(param_1 + 0x2e1e0);
  if (puVar5 < *(uint **)(param_1 + 0x2e1e8)) {
    *puVar5 = 0;
    for (uVar19 = 0; *(char *)((long)&local_198 + uVar19) != '\0'; uVar19 = uVar19 + 2) {
      *(char *)((long)puVar5 + uVar19 + 8) = *(char *)((long)&local_198 + uVar19);
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      cVar6 = *(char *)((long)&local_198 + uVar19 + 1);
      if (cVar6 == '\0') {
        uVar19 = uVar19 + 1;
        break;
      }
      *(char *)((long)puVar5 + uVar19 + 9) = cVar6;
    }
    *(undefined1 *)((long)puVar5 + (uVar19 & 0xffffffff) + 8) = 0;
    puVar5[1] = (uint)uVar19;
    uVar15 = (uint)(byte)puVar5[2];
    uVar18 = uVar24;
    if ((byte)puVar5[2] != 0) {
      pbVar17 = (byte *)((long)puVar5 + 9);
      do {
        uVar18 = uVar18 * 0x89 ^ uVar15;
        uVar15 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar15 != 0);
    }
    *puVar5 = uVar18;
    *(long *)(param_1 + 0x2e1e0) = *(long *)(param_1 + 0x2e1e0) + 0x48;
  }
  else {
    FUN_71019c1c50(puVar3,(long)&local_1a0,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
    uVar9 = extraout_x1_09;
  }
  if ((0xd < DAT_710523d00c) || ((0x3801U >> (ulong)(DAT_710523d00c & 0x1f) & 1) == 0))
  goto LAB_7101f2dab4;
  puVar4 = *(undefined4 **)(param_1 + 0x2e1c8);
  if (puVar4 < *(undefined4 **)(param_1 + 0x2e1d0)) {
    *puVar4 = 1;
    *(long *)(param_1 + 0x2e1c8) = *(long *)(param_1 + 0x2e1c8) + 4;
  }
  else {
    pvVar23 = (void *)*plVar1;
    pppplVar10 = (long ****)((long)puVar4 - (long)pvVar23);
    uVar19 = ((long)pppplVar10 >> 2) + 1;
    if (uVar19 >> 0x3e != 0) {
LAB_7101f2dd20:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (long)*(undefined4 **)(param_1 + 0x2e1d0) - (long)pvVar23;
    if ((ulong)(lVar12 >> 2) < 0x1fffffffffffffff) {
      uVar8 = lVar12 >> 1;
      if (uVar19 <= uVar8) {
        uVar19 = uVar8;
      }
      if (uVar19 != 0) {
        if (uVar19 >> 0x3e != 0) {
LAB_7101f2d66c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101f2d8f4;
      }
      pvVar7 = (void *)0x0;
    }
    else {
      uVar19 = 0x3fffffffffffffff;
LAB_7101f2d8f4:
      pppbVar14 = (byte ***)(uVar19 * 4);
      if (pppbVar14 == (byte ***)0x0) {
        pppbVar14 = (byte ***)0x1;
      }
      pvVar7 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar10,ppppbVar11,param_5,param_6,param_7,
                                      param_8);
      uVar9 = extraout_x1_10;
      if (pvVar7 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b8 = (long ***)((ulong)local_1b8 & 0xffffffff00000000);
          pppplVar22 = (long ****)&local_1a0;
          local_1a0 = (undefined **)pppbVar14;
          auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b8);
          uVar9 = auVar25._8_8_;
          if (((auVar25._0_8_ & 1) != 0) &&
             (pvVar7 = (void *)FUN_710392e290(0x10,pppbVar14,pppplVar22,ppppbVar11,param_5,param_6,
                                              param_7,param_8), uVar9 = extraout_x1_11,
             pvVar7 != (void *)0x0)) goto LAB_7101f2d95c;
        }
        pvVar7 = (void *)0x0;
      }
    }
LAB_7101f2d95c:
    puVar4 = (undefined4 *)((long)pvVar7 + ((long)pppplVar10 >> 2) * 4);
    *puVar4 = 1;
    if (0 < (long)pppplVar10) {
      memcpy(pvVar7,pvVar23,(size_t)pppplVar10);
      uVar9 = extraout_x1_12;
    }
    *plVar1 = (long)pvVar7;
    *(undefined4 **)(param_1 + 0x2e1c8) = puVar4 + 1;
    *(void **)(param_1 + 0x2e1d0) = (void *)((long)pvVar7 + uVar19 * 4);
    if (pvVar23 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar23);
      uVar9 = extraout_x1_13;
    }
  }
  local_198 = (undefined1 *)0x6c7065725f756e6d;
  local_190 = 0x5f617461645f7961;
  uVar15 = 0x6d;
  lVar12 = 9;
  puStack_188 = (undefined1 *)0x32305f74726f73;
  uVar18 = uVar24;
  do {
    uVar18 = uVar18 * 0x89 ^ uVar15;
    uVar15 = (uint)*(byte *)((long)&local_1a0 + lVar12);
    lVar12 = lVar12 + 1;
  } while (uVar15 != 0);
  local_1a0 = (undefined **)CONCAT44(0x17,uVar18);
  puVar5 = *(uint **)(param_1 + 0x2e1e0);
  if (puVar5 < *(uint **)(param_1 + 0x2e1e8)) {
    *puVar5 = 0;
    for (uVar19 = 0; *(char *)((long)&local_198 + uVar19) != '\0'; uVar19 = uVar19 + 2) {
      *(char *)((long)puVar5 + uVar19 + 8) = *(char *)((long)&local_198 + uVar19);
      if (0x3e < (int)uVar19 + 1U) {
        uVar19 = (ulong)((int)uVar19 + 1);
        break;
      }
      cVar6 = *(char *)((long)&local_198 + uVar19 + 1);
      if (cVar6 == '\0') {
        uVar19 = uVar19 + 1;
        break;
      }
      *(char *)((long)puVar5 + uVar19 + 9) = cVar6;
    }
    *(undefined1 *)((long)puVar5 + (uVar19 & 0xffffffff) + 8) = 0;
    uVar18 = (uint)(byte)puVar5[2];
    puVar5[1] = (uint)uVar19;
    if ((byte)puVar5[2] != 0) {
      pbVar17 = (byte *)((long)puVar5 + 9);
      do {
        uVar24 = uVar24 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
    }
    *puVar5 = uVar24;
    *(long *)(param_1 + 0x2e1e0) = *(long *)(param_1 + 0x2e1e0) + 0x48;
  }
  else {
    FUN_71019c1c50(puVar3,(long)&local_1a0,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
    uVar9 = extraout_x1_14;
  }
LAB_7101f2dab4:
  local_190 = 0;
  puStack_188 = (undefined1 *)0x0;
  FUN_7103776290(&local_180,uVar9,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
  local_198 = (undefined1 *)((ulong)local_198 & 0xffffffff00000000);
  puStack_188 = (undefined1 *)uRam0000007107459008;
  local_190 = _ConstantZero;
  *(undefined8 *)(local_178 + 8) = 0;
  local_1a0 = (undefined **)0xb;
  FUN_7103776640(&local_1b8,*(long *)*puVar2 + 8,(byte ****)"scr_sort",pppplVar10,ppppbVar11,param_5
                 ,param_6,param_7,param_8);
  uVar19 = local_178;
  local_178 = (ulong)local_1b0;
  local_1b0 = (long ***)0x0;
  if (uVar19 != 0) {
    uVar8 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar19);
  }
  local_1b8 = (long ***)&PTR_FUN_710523d988;
  local_1b0 = (long ***)0x0;
  local_190 = _ConstantZero;
  puStack_188 = (undefined1 *)uRam0000007107459008;
  if (**(long **)(local_178 + 0x18) != 0) {
    local_190 = *(undefined8 *)(**(long **)(local_178 + 0x18) + 0x30);
    puStack_188 = (undefined1 *)0;
  }
  FUN_7101f2dd30(&local_1b8,(long *)puVar3,pppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_1c8,**(long **)(param_1 + 0xd0) + 8,(byte ****)"blinder",pppplVar10,
                 ppppbVar11,param_5,param_6,param_7,param_8);
  pppplVar10 = &local_1b8;
  ppppbVar11 = (byte ****)&local_1a0;
  pppplVar22 = &local_1c8;
  FUN_71032ccb70(param_1 + 0x2e198,(undefined8 *)(param_1 + 0x2e190),pppplVar10,ppppbVar11,
                 pppplVar22,param_6,param_7,param_8);
  uVar19 = local_1c0;
  local_1c8 = (long ***)&PTR_FUN_710523d988;
  local_1c0 = 0;
  uVar9 = extraout_x1_15;
  if (uVar19 != 0) {
    uVar8 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar19);
    uVar9 = extraout_x1_16;
  }
  if (local_1b8 != (long ***)0x0) {
    local_1b0 = local_1b8;
    FUN_710392eb40((ulong)local_1b8);
    uVar9 = extraout_x1_17;
  }
  uVar19 = local_178;
  local_180 = &PTR_FUN_710523d988;
  local_178 = 0;
  if (uVar19 != 0) {
    uVar8 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar19);
    uVar9 = extraout_x1_18;
  }
  if (*(undefined4 **)(param_1 + 0x2e1c8) == (undefined4 *)*plVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(param_1 + 0x2e1f4) = *(undefined4 *)*plVar1;
  FUN_7101f23c20(param_1,uVar9,pppplVar10,ppppbVar11,pppplVar22,param_6,param_7,param_8);
  *(bool *)(param_1 + 0x2e1f8) = 1 < (ulong)(*(long *)(param_1 + 0x2e1c8) - *plVar1 >> 2);
  FUN_7103776640(&local_1a0,**(long **)(param_1 + 0xd0) + 8,(byte ****)"scr_sort",pppplVar10,
                 ppppbVar11,pppplVar22,param_6,param_7,param_8);
  uVar19 = (ulong)local_198;
  if ((*(long *)((long)local_198 + 8) != 0) &&
     (lVar12 = *(long *)(*(long *)((long)local_198 + 8) + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe | *(byte *)(param_1 + 0x2e1f8);
  }
  local_1a0 = &PTR_FUN_710523d988;
  local_198 = (undefined1 *)0x0;
  if (uVar19 != 0) {
    uVar8 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar19);
  }
  FUN_7103778760(*(long *)(*(long *)*puVar2 + 0x10),0x710428ff7d);
  return;
}

