// addr:      7102e158e0
// offset:    0x2e158e0
// name:      FUN_7102e158e0
// mangled:   
// signature: undefined __cdecl FUN_7102e158e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102e158e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte ****ppppbVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined2 local_1b4;
  undefined1 local_1b2;
  long ***local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined2 local_15b;
  undefined1 local_159;
  long ****local_158;
  byte local_150;
  byte bStack_14f;
  undefined2 uStack_14e;
  uint uStack_14c;
  undefined1 uStack_148;
  undefined1 local_147;
  byte local_146;
  undefined2 local_145;
  undefined1 local_143;
  undefined2 local_142;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined2 local_13c;
  undefined1 local_13a;
  ulong local_138;
  undefined2 local_130;
  undefined4 local_12e;
  undefined2 local_12a;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long ***local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined2 local_e8;
  undefined2 local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  long ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000010;
      param_3 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7102e1595c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e1595c:
  uVar24 = *(undefined8 *)(param_1 + 8);
  *puVar6 = &PTR_FUN_710513f810;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&SUB_00000020;
      param_3 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7102e159c0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102e159c0:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = uVar24;
  puVar8[1] = 0;
  puVar6[1] = puVar8;
  plVar9 = *(long **)(param_1 + 0x120);
  *(undefined8 **)(param_1 + 0x120) = puVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    puVar6 = *(undefined8 **)(param_1 + 0x120);
  }
  FUN_7102dfe700((long *)puVar6[1],(byte *)"stc_s03_steelroom_bg_set",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7102dfe700(*(long **)(*(long *)(param_1 + 0x120) + 8),
                 (byte *)"stc_s03_steelroom_blend_buffer_set",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar18 = *(long *)(*(long *)(param_1 + 0x120) + 8);
  if (lVar18 != 0) {
    plVar25 = *(long **)(lVar18 + 0x10);
    uVar24 = extraout_x1;
    for (plVar9 = *(long **)(lVar18 + 8); plVar9 != plVar25; plVar9 = plVar9 + 1) {
      lVar18 = *plVar9;
      if (lVar18 != 0) {
        *(undefined1 *)(lVar18 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar18 + 0x108),uVar24,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar18 = *plVar9;
        uVar24 = extraout_x1_00;
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) | 1;
        }
      }
    }
  }
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x38,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000038;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x38,pppplVar13,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_7102e15aac;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e15aac:
  uVar24 = *(undefined8 *)(param_1 + 8);
  uVar21 = *(undefined8 *)(param_1 + 0x10);
  lVar18 = *(long *)(param_1 + 0x18);
  puVar6[4] = 0;
  puVar6[2] = uVar21;
  puVar6[3] = lVar18;
  *puVar6 = &PTR_FUN_710513fa70;
  puVar6[1] = uVar24;
  puVar6[5] = 0;
  puVar6[6] = 0;
  plVar9 = *(long **)(param_1 + 0x118);
  *(undefined8 **)(param_1 + 0x118) = puVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    puVar6 = *(undefined8 **)(param_1 + 0x118);
    lVar18 = *(long *)(param_1 + 0x18);
  }
  FUN_7102e14260(**(undefined4 **)(lVar18 + 0x9c0),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],**(undefined4 **)(lVar18 + 0xa20),
                 (*(undefined4 **)(lVar18 + 0xa20))[1],(long)puVar6,0x71043abce6,
                 *(long *****)(lVar18 + 0x760),*(byte *****)(lVar18 + 0x700),(long ****)0x23,0x24,
                 param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x18);
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x9c0) + 4),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 8),
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0xc),*(long *)(param_1 + 0x118),
                 0x710437aa6a,(long ****)(*(long *)(lVar18 + 0x760) + 0xc),
                 (byte ****)(*(long *)(lVar18 + 0x700) + 0x10),(long ****)0x23,0x24,param_7,param_8)
  ;
  lVar18 = *(long *)(param_1 + 0x18);
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x9c0) + 8),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x10),
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x14),*(long *)(param_1 + 0x118),
                 0x710428fb72,(long ****)(*(long *)(lVar18 + 0x760) + 0x18),
                 (byte ****)(*(long *)(lVar18 + 0x700) + 0x20),(long ****)0x23,0x24,param_7,param_8)
  ;
  lVar18 = *(long *)(param_1 + 0x18);
  pppplVar13 = (long ****)(*(long *)(lVar18 + 0x760) + 0x24);
  ppppbVar14 = (byte ****)(*(long *)(lVar18 + 0x700) + 0x30);
  pppplVar15 = (long ****)0x23;
  uVar24 = 0x24;
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x9c0) + 0xc),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x18),
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x1c),*(long *)(param_1 + 0x118),
                 0x710427ee76,pppplVar13,ppppbVar14,(long ****)0x23,0x24,param_7,param_8);
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x20);
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x28);
  if (puVar6 != puVar8) {
    do {
      plVar9 = (long *)*puVar6;
      plVar25 = (long *)puVar6[1];
      if (plVar25 == (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9,0);
      }
      else {
        plVar11 = plVar25 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        (**(code **)(*plVar9 + 0x18))(plVar9,0);
        do {
          lVar18 = *plVar11;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar8);
    plVar25 = *(long **)(*(long *)(param_1 + 0x118) + 0x28);
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x118) + 0x20); plVar9 != plVar25;
        plVar9 = plVar9 + 2) {
      lVar18 = *plVar9;
      plVar11 = (long *)plVar9[1];
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) | 1;
      }
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
        do {
          lVar18 = *plVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0xf0,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_000000f0;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7102e15d7c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e15d7c:
  uVar21 = *(undefined8 *)(param_1 + 8);
  *puVar6 = &PTR_FUN_710513fa40;
  puVar6[1] = uVar21;
  puVar6[2] = 0;
  puVar6[3] = 0;
  for (uVar7 = 0; "registeel"[uVar7] != '\0'; uVar7 = uVar7 + 2) {
    *(char *)((long)puVar6 + uVar7 + 0x20) = "registeel"[uVar7];
    if ("registeel"[uVar7 + 1] == '\0') {
      uVar7 = uVar7 + 1;
      break;
    }
    *(char *)((long)puVar6 + uVar7 + 0x21) = "registeel"[uVar7 + 1];
  }
  *(undefined1 *)((long)puVar6 + (uVar7 & 0xffffffff) + 0x20) = 0;
  uVar23 = (uint)*(byte *)(puVar6 + 4);
  uVar20 = 0x811c9dc5;
  *(int *)((long)puVar6 + 0x1c) = (int)uVar7;
  if (*(byte *)(puVar6 + 4) != 0) {
    pbVar19 = (byte *)((long)puVar6 + 0x21);
    do {
      uVar20 = uVar20 * 0x89 ^ uVar23;
      uVar23 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar23 != 0);
  }
  puVar6[0x1c] = 0;
  puVar6[0x13] = 0;
  puVar6[0x14] = 0;
  puVar6[0xe] = 0x3d08888900000000;
  *(undefined4 *)(puVar6 + 0x10) = 0x3e4ccccd;
  *(uint *)(puVar6 + 3) = uVar20;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *(undefined1 *)((long)puVar6 + 100) = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined1 *)((long)puVar6 + 0x6c) = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(undefined1 *)((long)puVar6 + 0x7c) = 0;
  *(undefined4 *)(puVar6 + 0x15) = 0;
  *puVar6 = &PTR_FUN_710513fbf0;
  *(undefined4 *)(puVar6 + 0x1d) = 0;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  plVar9 = *(long **)(param_1 + 0x110);
  *(undefined8 **)(param_1 + 0x110) = puVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    puVar6 = *(undefined8 **)(param_1 + 0x110);
  }
  lVar18 = *(long *)(param_1 + 0x18);
  pppplVar13 = (long ****)(*(long *)(lVar18 + 0x700) + 0x40);
  ppppbVar14 = (byte ****)0x23;
  pppplVar15 = (long ****)&DAT_00000024;
  FUN_7102e12e40(*(undefined4 *)(*(long *)(lVar18 + 0x9c0) + 0x10),**(undefined4 **)(lVar18 + 0x948)
                 ,(*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x20),
                 *(undefined4 *)(*(long *)(lVar18 + 0xa20) + 0x24),(long)puVar6,
                 *(long *)(lVar18 + 0x760) + 0x30,pppplVar13,0x23,0x24,uVar24,param_7,param_8);
  puVar22 = *(undefined4 **)(*(long *)(param_1 + 0x18) + 0x1b8);
  lVar18 = *(long *)(param_1 + 0x110);
  uVar2 = puVar22[1];
  *(undefined4 *)(lVar18 + 0xe0) = *puVar22;
  *(undefined4 *)(lVar18 + 0xe4) = uVar2;
  (**(code **)(**(long **)(param_1 + 0x110) + 0x18))(*(long **)(param_1 + 0x110),0);
  lVar18 = *(long *)(*(long *)(param_1 + 0x110) + 0x10);
  if (lVar18 != 0) {
    *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) | 1;
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000010;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7102e15f60;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e15f60:
  ppppbVar12 = *(byte *****)(param_1 + 0x18);
  FUN_7102e1a360(puVar6,*(long *)(param_1 + 8),ppppbVar12,ppppbVar14,pppplVar15,uVar24,param_7,
                 param_8);
  plVar9 = *(long **)(param_1 + 0x128);
  *(undefined8 **)(param_1 + 0x128) = puVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar12,ppppbVar14,pppplVar15,uVar24,param_7,
                          param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000010;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7102e15fe4;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e15fe4:
  pppplVar13 = *(long *****)(param_1 + 0x18);
  ppppbVar14 = (byte ****)0x1;
  FUN_7102e1ab00(puVar6,*(ulong *)(param_1 + 8),pppplVar13,(byte ****)0x1,pppplVar15,uVar24,param_7,
                 param_8);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&SUB_00000020;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar8 != (undefined8 *)0x0)) goto LAB_7102e1604c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102e1604c:
  *puVar8 = &DAT_710513fb98;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = puVar6;
  *(undefined8 **)(param_1 + 0x138) = puVar6;
  plVar9 = *(long **)(param_1 + 0x140);
  *(undefined8 **)(param_1 + 0x140) = puVar8;
  if (plVar9 != (long *)0x0) {
    plVar25 = plVar9 + 1;
    do {
      lVar18 = *plVar25;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000010;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7102e160f8;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e160f8:
  pppplVar13 = *(long *****)(param_1 + 0x18);
  ppppbVar14 = (byte ****)0x0;
  FUN_7102e1ab00(puVar6,*(ulong *)(param_1 + 8),pppplVar13,(byte ****)0x0,pppplVar15,uVar24,param_7,
                 param_8);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&SUB_00000020;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar8 != (undefined8 *)0x0)) goto LAB_7102e16160;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102e16160:
  *puVar8 = &DAT_710513fb98;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = puVar6;
  *(undefined8 **)(param_1 + 0x148) = puVar6;
  plVar9 = *(long **)(param_1 + 0x150);
  *(undefined8 **)(param_1 + 0x150) = puVar8;
  if (plVar9 != (long *)0x0) {
    plVar25 = plVar9 + 1;
    do {
      lVar18 = *plVar25;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar5) {
        *plVar25 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (long ***)&DAT_00000010;
      pppplVar13 = &local_1b0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,pppplVar15,uVar24,param_7,param_8)
         , puVar6 != (undefined8 *)0x0)) goto LAB_7102e16204;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_7102e16204:
  FUN_7102e1d840(puVar6,*(long *)(param_1 + 8),*(long *****)(param_1 + 0x18),
                 (byte ****)"stc_s03_steel_hole_set",(long ****)0x0,uVar24,param_7,param_8);
  plVar9 = *(long **)(param_1 + 0x130);
  *(undefined8 **)(param_1 + 0x130) = puVar6;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    puVar6 = *(undefined8 **)(param_1 + 0x130);
  }
  plVar25 = (long *)puVar6[1];
  plVar9 = (long *)plVar25[1];
  if (plVar9 != (long *)0x0) {
    if (((*(float *)(plVar25 + 3) < -400.0) && (*(float *)((long)plVar25 + 0x14) < -400.0)) &&
       ((char)plVar25[2] == '\0')) {
      FUN_71025f4d80((long *)*plVar9,(long *)plVar9[1],1);
      *(undefined1 *)(plVar25 + 2) = 1;
      plVar9 = (long *)plVar25[1];
    }
    *(undefined4 *)(plVar25 + 3) = 0xc3c80000;
  }
  lVar18 = *plVar25;
  uStack_a8 = 0;
  local_b0 = (long ***)&DAT_3f800000;
  uStack_98 = 0;
  local_a0 = 0x3f80000000000000;
  uStack_88 = 0x3f800000;
  local_90 = 0;
  uStack_78 = 0x3f80000000000000;
  local_80 = 0xc3c8000000000000;
  if (lVar18 != 0) {
    (**(code **)(**(long **)(lVar18 + 0x90) + 0x148))(*(long **)(lVar18 + 0x90),&local_b0);
    lVar18 = *(long *)(lVar18 + 0xd8);
    if (lVar18 != 0) {
      local_1a0 = local_a0;
      uStack_198 = uStack_98;
      local_1b0 = local_b0;
      uStack_1a8 = uStack_a8;
      local_180 = local_80;
      local_178 = uStack_78;
      local_190 = local_90;
      local_188 = uStack_88;
      if (*(char *)(*(long *)(lVar18 + 8) + 0xa8) != '\0') {
        plVar25 = *(long **)(*(long *)(lVar18 + 8) + 0x48);
        (**(code **)(*plVar25 + 0x20))(plVar25,&local_1b0);
      }
      *(undefined1 *)(lVar18 + 0x20) = 1;
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar25 = (long *)*plVar9;
    plVar9 = (long *)plVar9[1];
    if (plVar25 != plVar9) {
      do {
        lVar18 = *plVar25;
        if (*(char *)(lVar18 + 0x128) == '\0' ||
            (*(char *)(*(long *)(lVar18 + 8) + 0xe8) != '\0' ||
            *(char *)(*(long *)(lVar18 + 8) + 0xe7) != '\0')) {
          *(undefined1 *)(lVar18 + 0x129) = 1;
LAB_7102e163b8:
          *(undefined8 *)(lVar18 + 0x18) = 0;
          *(undefined8 *)(lVar18 + 0x10) = local_80;
        }
        else if ((1e-05 < ABS((float)*(undefined8 *)(lVar18 + 0x10) - (float)local_80)) ||
                (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x20) -
                             (float)((ulong)local_80 >> 0x20)))) {
          *(undefined1 *)(lVar18 + 0x12a) = 1;
          goto LAB_7102e163b8;
        }
        if (1e-05 <= ABS(*(float *)(lVar18 + 0x30))) {
          *(undefined4 *)(lVar18 + 0x30) = 0;
          *(undefined1 *)(lVar18 + 0x129) = 1;
        }
        uVar21 = *(undefined8 *)(lVar18 + 0x58);
        uVar24 = *(undefined8 *)(lVar18 + 0x50);
        if (1e-05 <= ABS((float)uVar24 + -1.0)) {
          uVar24 = CONCAT44((int)((ulong)uVar24 >> 0x20),0x3f800000);
          *(undefined1 *)(lVar18 + 0x129) = 1;
          *(undefined8 *)(lVar18 + 0x58) = uVar21;
          *(undefined8 *)(lVar18 + 0x50) = uVar24;
        }
        if (1e-05 <= ABS((float)((ulong)uVar24 >> 0x20) + -1.0)) {
          *(undefined1 *)(lVar18 + 0x129) = 1;
          *(undefined8 *)(lVar18 + 0x58) = uVar21;
          *(ulong *)(lVar18 + 0x50) = CONCAT44(0x3f800000,(int)uVar24);
        }
        plVar25 = plVar25 + 1;
      } while (plVar9 != plVar25);
    }
  }
  uStack_118 = uRam0000007107459008;
  local_120 = _ConstantZero;
  lVar18 = *(long *)(param_1 + 0x18);
  local_1bc = 0;
  local_1c0 = 0;
  local_70 = (long ***)((ulong)local_70._7_1_ << 0x38);
  local_1b0 = _ConstantZero;
  auVar4._8_8_ = _DAT_7107521008;
  auVar4._0_8_ = _ConstantZero;
  auVar27._8_8_ = _DAT_7107521008;
  auVar27._0_8_ = _ConstantZero;
  auVar27 = NEON_ext(auVar27,auVar4,8,1);
  uStack_1a8 = (ulong)auVar27._0_4_;
  local_188 = *(undefined8 *)(lVar18 + 0x34c);
  local_180 = *(undefined8 *)(lVar18 + 0x354);
  local_170 = *(undefined4 *)(lVar18 + 0x374);
  local_158 = *(long *****)(lVar18 + 0x368);
  local_150 = *(byte *)(lVar18 + 0x365);
  ppppbVar14 = (byte ****)(ulong)local_150;
  bStack_14f = *(byte *)(lVar18 + 0x370);
  pppplVar13 = (long ****)(ulong)bStack_14f;
  local_146 = *(byte *)(lVar18 + 0x371);
  uVar16 = (ulong)local_146;
  local_13c = *(undefined2 *)(lVar18 + 0x378);
  bVar5 = *(char *)(lVar18 + 0x372) != '\0';
  uVar7 = (ulong)bVar5;
  local_143 = *(char *)(lVar18 + 0x364) != '\0';
  uVar17 = (ulong)(byte)local_143;
  local_160 = 0x3f;
  uStack_15e = 7;
  uStack_15d = 0;
  uStack_15c = 0x1f;
  local_159 = local_1b2;
  local_178 = CONCAT44(*(undefined4 *)(lVar18 + 0x360),0x3f800000);
  local_168 = 0x31ed91fca;
  local_15b = local_1b4;
  local_190 = (ulong)(uint)(float)*(int *)(lVar18 + 0x348);
  uStack_14e = 0;
  local_147 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_14c = (uint)bVar5;
  uStack_148 = 0;
  local_145 = 0;
  local_142 = 0;
  uStack_140 = 0;
  uStack_13f = 0;
  local_13a = 0xe;
  uStack_13e = 0;
  uStack_13d = 0;
  local_138 = (ulong)*(uint *)(lVar18 + 0x35c);
  local_130 = 0;
  local_12a = local_1c4;
  local_128 = 0x31ed91fca;
  local_110 = local_70;
  local_12e = local_1c8;
  local_108 = &DAT_3f8000003f800000;
  local_100 = 0;
  local_f8 = 0x425cbfc4f;
  uStack_f0 = 0x7fb997a80;
  local_e0 = 0xbf800000;
  local_e8 = 0;
  local_e4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_bc = 0x3f800000;
  local_c4 = 0xffffffff;
  local_c0 = 3;
  local_b8 = 0;
  local_b6 = 0;
  local_90 = 0x240a00000;
  uStack_a8 = 0;
  local_b0 = (long ***)0x40a00000c2a00000;
  uStack_98 = 0;
  local_a0 = 0x43200000;
  lVar18 = *(long *)(param_1 + 8);
  lVar26 = *(long *)(*(long *)(param_1 + 0x110) + 0x10);
  plVar9 = (long *)FUN_710392e290(0x10,0x110,local_158,ppppbVar14,pppplVar13,uVar7,uVar16,uVar17);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1c8 = 0;
      local_70 = (long ***)&DAT_00000110;
      pppplVar15 = (long ****)&local_70;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
      if (((uVar10 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x110,pppplVar15,ppppbVar14,pppplVar13,uVar7,uVar16,
                                          uVar17), plVar9 != (long *)0x0)) goto LAB_7102e16734;
    }
    plVar9 = (long *)0x0;
  }
LAB_7102e16734:
  local_70 = (long ***)&DAT_00000004;
  puStack_68 = &DAT_100000001;
  local_60 = 0x1000000001;
  FUN_710313e6a0(plVar9,lVar18,(long ****)&local_70,ppppbVar14,pppplVar13,uVar7,uVar16,uVar17);
  *(undefined1 *)((long)plVar9 + 0x5c) = 1;
  *(undefined4 *)((long)plVar9 + 0x44) = 4;
  *(undefined2 *)(plVar9 + 9) = 0;
  *(undefined8 *)((long)plVar9 + 0x54) = 0;
  *(undefined8 *)((long)plVar9 + 0x4c) = 0;
  *(undefined1 *)(plVar9 + 0xc) = 0;
  plVar9[0x19] = 0;
  plVar9[0x18] = (long)&DAT_3f8000003f800000;
  plVar9[0x1b] = 0;
  plVar9[0x1a] = 0x3f800000;
  *plVar9 = (long)&PTR_FUN_7105178c88;
  plVar9[0xd] = lVar26;
  *(undefined4 *)(plVar9 + 0x16) = 0xffffffff;
  plVar9[0x21] = 0x3f80000000000000;
  plVar9[0x20] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1c] = 0x3f80000000000000;
  plVar9[0x1f] = 0x3f800000;
  plVar9[0x1e] = 0;
  plVar9[0xf] = 0;
  plVar9[0xe] = 0x3f800000;
  plVar9[0x11] = 0;
  plVar9[0x10] = 0x3f80000000000000;
  plVar9[0x13] = 0x3f800000;
  plVar9[0x12] = 0;
  plVar9[0x15] = 0x3f80000000000000;
  plVar9[0x14] = 0;
  puVar6 = (undefined8 *)(param_1 + 0x90);
  *puVar6 = plVar9;
  if (plVar9[7] != 0) {
    plVar9 = *(long **)(plVar9[7] + 0x130);
    (**(code **)(*plVar9 + 0x100))(plVar9,0,&local_b0,0,0,0);
    plVar9 = (long *)*puVar6;
  }
  if (plVar9[7] != 0) {
    plVar9 = *(long **)(plVar9[7] + 0xa0);
    (**(code **)(*plVar9 + 0x68))(plVar9,0,0,&local_1b0);
    plVar9 = (long *)*puVar6;
  }
  puStack_68 = (undefined1 *)0x0;
  local_70 = (long ***)0xc2c8000000000000;
  if (plVar9[7] != 0) {
    plVar9 = *(long **)(plVar9[7] + 0xa0);
    (**(code **)(*plVar9 + 0x130))(plVar9,0,&local_70);
    plVar9 = (long *)*puVar6;
  }
  if ((char)plVar9[8] != '\0') {
    plVar25 = (long *)plVar9[6];
    if (((plVar25 != (long *)0x0) && ((char)plVar25[2] != '\0')) &&
       (*(undefined1 *)(plVar25 + 2) = 0, (char)plVar25[10] != '\0')) {
      plVar11 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar25 + 8));
      (**(code **)(*plVar11 + 0x48))(plVar11,0);
      *(undefined1 *)(plVar25 + 10) = 0;
    }
    (**(code **)(*plVar9 + 0x30))(plVar9);
  }
  *(undefined1 *)(plVar9 + 8) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}

