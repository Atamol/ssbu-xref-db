// addr:      7102b01870
// offset:    0x2b01870
// name:      FUN_7102b01870
// mangled:   
// signature: undefined __cdecl FUN_7102b01870(long * param_1, long param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b01870(long *param_1,long param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long *plVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long ****pppplVar7;
  undefined8 *puVar8;
  long *extraout_x1;
  long *plVar9;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  char *pcVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  ulong uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  long *plVar19;
  undefined1 uVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  char local_1c8 [64];
  undefined8 local_188;
  long *local_180;
  uint local_178;
  undefined4 local_174;
  byte local_170 [64];
  long *local_130;
  long *local_128 [2];
  byte local_118 [64];
  long *local_d8;
  long *plStack_d0;
  char local_c0 [64];
  undefined8 local_80;
  long ********local_78;
  undefined4 local_6c [3];
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  plVar21 = param_1 + 3;
  *plVar21 = 0;
  param_1[4] = 0;
  lVar6 = _DAT_7107521008;
  lVar22 = _ConstantZero;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  param_1[7] = lVar6;
  param_1[6] = lVar22;
  *(undefined2 *)(param_1 + 9) = 0;
  pcVar10 = "S04_YAK_BlockBrick_wait";
  ppppbVar11 = param_4;
  pppplVar12 = param_5;
  FUN_710262c340((long *)local_128,*(long **)(*(long *)(param_2 + 0x300) + 0x20),
                 "S04_YAK_BlockBrick_wait");
  local_178 = 0;
  local_180 = local_128[0];
  for (uVar14 = 0; local_118[uVar14] != 0; uVar14 = uVar14 + 2) {
    local_170[uVar14] = local_118[uVar14];
    if (0x3e < (int)uVar14 + 1U) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
    if (local_118[uVar14 + 1] == 0) {
      uVar14 = uVar14 + 1;
      break;
    }
    local_170[uVar14 + 1] = local_118[uVar14 + 1];
  }
  local_178 = 0x811c9dc5;
  local_170[uVar14 & 0xffffffff] = 0;
  local_174 = (int)uVar14;
  uVar17 = (uint)local_170[0];
  if (uVar17 != 0) {
    pbVar15 = local_170;
    do {
      pbVar15 = pbVar15 + 1;
      local_178 = local_178 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
    } while (uVar17 != 0);
  }
  local_130 = local_d8;
  for (uVar14 = 0; local_c0[uVar14] != '\0'; uVar14 = uVar14 + 2) {
    local_1c8[uVar14] = local_c0[uVar14];
    if (0x3e < (int)uVar14 + 1U) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
    if (local_c0[uVar14 + 1] == '\0') {
      uVar14 = uVar14 + 1;
      break;
    }
    local_1c8[uVar14 + 1] = local_c0[uVar14 + 1];
  }
  local_1c8[uVar14 & 0xffffffff] = '\0';
  if (local_1c8[0] != '\0') {
    pcVar18 = local_1c8;
    do {
      pcVar18 = pcVar18 + 1;
    } while (*pcVar18 != '\0');
  }
  local_188 = local_80;
  if (local_128[0] == plStack_d0) {
    return;
  }
  iVar16 = 0;
  plVar9 = extraout_x1;
  do {
    lVar22 = *local_128[0];
    plVar19 = *(long **)(lVar22 + 0x110);
    if ((plVar19 != (long *)0x0) && (*plVar19 != plVar19[1])) {
      if (iVar16 == (int)param_1[1]) {
        lVar6 = *(long *)(*param_1 + 0x310);
        plVar19 = (long *)(*param_1 + 0x310);
        if (iVar16 != 0) {
          plVar9 = *(long **)(lVar6 + 0xd0);
          if (plVar9 == *(long **)(lVar6 + 0xd8)) goto LAB_7102b01b6c;
          goto LAB_7102b01b44;
        }
        if ((long ***)((ulong)param_4 & 0xffffffffff) == (long ***)0x0) goto LAB_7102b01bb0;
        plVar3 = *(long **)(lVar6 + 0xd0);
        break;
      }
      iVar16 = iVar16 + 1;
    }
    do {
      local_128[0] = local_128[0] + 1;
      local_180 = local_128[0];
      plVar19 = local_d8;
      if (local_128[0] == local_d8) break;
      uVar17 = (uint)local_170[0];
      if (uVar17 == 0) {
        uVar5 = 0;
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        plVar9 = (long *)&DAT_ffffffff;
        pbVar15 = local_170;
        do {
          pbVar15 = pbVar15 + 1;
          ppppbVar11 = (byte ****)(ulong)(uVar17 - 0x41);
          pppplVar12 = (long ****)(ulong)(uVar17 + 0x20);
          uVar2 = uVar17 + 0x20;
          if (0x19 < uVar17 - 0x41) {
            uVar2 = uVar17;
          }
          uVar2 = (&DAT_7104754084)[(uVar2 ^ (uint)plVar9) & 0xff] ^ (uint)plVar9 >> 8;
          plVar9 = (long *)(ulong)uVar2;
          uVar17 = (uint)*pbVar15;
          uVar14 = uVar14 + 0x100000000;
        } while (*pbVar15 != 0);
        uVar5 = (ulong)~uVar2;
        uVar14 = uVar14 & 0xff00000000;
        pcVar10 = (char *)0x0;
      }
      plVar19 = local_128[0];
    } while ((*(ulong *)(*local_128[0] + 0xa0) & 0xffffffffff) != (uVar14 | uVar5));
    local_128[0] = plVar19;
    if (local_128[0] == plStack_d0) {
      return;
    }
  } while( true );
joined_r0x007102b01b84:
  if (plVar3 == *(long **)(lVar6 + 0xd8)) goto LAB_7102b01bb0;
  if ((*(uint *)(plVar3 + 1) < 2) &&
     (pppplVar7 = (long ****)*plVar3, (long ***)((ulong)param_4 & 0xffffffffff) == pppplVar7[0xd]))
  goto LAB_7102b01bb4;
  plVar3 = plVar3 + 2;
  goto joined_r0x007102b01b84;
LAB_7102b01bb0:
  pppplVar7 = (long ****)0x0;
LAB_7102b01bb4:
  param_1[2] = (long)pppplVar7;
  if ((long ***)((ulong)param_5 & 0xffffffffff) != (long ***)0x0) {
    for (puVar8 = *(undefined8 **)(*plVar19 + 0xd0); puVar8 != *(undefined8 **)(*plVar19 + 0xd8);
        puVar8 = puVar8 + 2) {
      if ((*(uint *)(puVar8 + 1) < 2) &&
         (pppplVar13 = (long ****)*puVar8,
         (long ***)((ulong)param_5 & 0xffffffffff) == pppplVar13[0xd])) goto LAB_7102b01c4c;
    }
  }
  goto LAB_7102b01c48;
  while (plVar9 = plVar9 + 2, *(long **)(lVar6 + 0xd8) != plVar9) {
LAB_7102b01b44:
    if ((*(uint *)(plVar9 + 1) < 2) &&
       (((ulong)param_4 & 0xffffffffff) == *(ulong *)(*plVar9 + 0x68))) {
      pppplVar7 = FUN_710262fb80(lVar6,plVar9,(long *********)pcVar10,ppppbVar11,pppplVar12,param_6,
                                 param_7,param_8);
      plVar19 = (long *)(*param_1 + 0x310);
      goto LAB_7102b01c08;
    }
  }
LAB_7102b01b6c:
  pppplVar7 = (long ****)0x0;
LAB_7102b01c08:
  param_1[2] = (long)pppplVar7;
  lVar6 = *plVar19;
  plVar9 = *(long **)(lVar6 + 0xd0);
  if (plVar9 != *(long **)(lVar6 + 0xd8)) {
    do {
      if ((*(uint *)(plVar9 + 1) < 2) &&
         (((ulong)param_5 & 0xffffffffff) == *(ulong *)(*plVar9 + 0x68))) {
        pppplVar13 = FUN_710262fb80(lVar6,plVar9,(long *********)pcVar10,ppppbVar11,pppplVar12,
                                    param_6,param_7,param_8);
        pppplVar7 = (long ****)param_1[2];
        plVar9 = extraout_x1_03;
        goto LAB_7102b01c4c;
      }
      plVar9 = plVar9 + 2;
    } while (*(long **)(lVar6 + 0xd8) != plVar9);
  }
LAB_7102b01c48:
  pppplVar13 = (long ****)0x0;
LAB_7102b01c4c:
  param_1[3] = (long)pppplVar13;
  param_1[4] = *(long *)(lVar22 + 0x110);
  pauVar1 = (undefined1 (*) [16])(lVar22 + 0x140);
  lVar22 = *(long *)*pauVar1;
  auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
  param_1[7] = (ulong)auVar23._0_4_;
  param_1[6] = lVar22;
  if (pppplVar7 != (long ****)0x0) {
    *(byte *)(pppplVar7 + 0x23) = *(byte *)(pppplVar7 + 0x23) | 1;
    pppplVar13 = (long ****)*plVar21;
  }
  if (pppplVar13 != (long ****)0x0) {
    *(byte *)(pppplVar13 + 0x23) = *(byte *)(pppplVar13 + 0x23) | 1;
    lVar22 = *plVar21;
    if (lVar22 != 0) {
      if (*(long *)(lVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 1;
        lVar22 = *plVar21;
        if (lVar22 == 0) goto LAB_7102b01cd4;
      }
      if (*(long *)(lVar22 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x22) = 0;
        lVar22 = *plVar21;
        if (lVar22 == 0) goto LAB_7102b01cd4;
      }
      *(undefined1 *)(lVar22 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar22 + 0x108),plVar9,(long ****)pcVar10,ppppbVar11,pppplVar12,
                     param_6,param_7,param_8);
      plVar9 = extraout_x1_00;
    }
  }
LAB_7102b01cd4:
  if (*(char *)(param_2 + 0x18) != '\0') {
    plVar19 = (long *)((long *)param_1[4])[1];
    for (plVar21 = *(long **)param_1[4]; plVar21 != plVar19; plVar21 = plVar21 + 1) {
      lVar6 = *plVar21;
      lVar22 = *(long *)(lVar6 + 0x68);
      if (lVar22 != 0) {
        sVar4 = *(short *)(lVar22 + 8) + -1;
        *(short *)(lVar22 + 8) = sVar4;
        if ((sVar4 < 1) && (*(long **)(lVar6 + 0x68) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar6 + 0x68) + 8))();
        }
        *(undefined8 *)(lVar6 + 0x68) = 0;
      }
      puVar8 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)pcVar10,ppppbVar11,pppplVar12,param_6,param_7,
                              param_8);
      plVar9 = extraout_x1_01;
      if (puVar8 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_78 = (long ********)&SUB_00000020;
          pcVar10 = (char *)&local_78;
          auVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          plVar9 = auVar23._8_8_;
          if (((auVar23._0_8_ & 1) != 0) &&
             (puVar8 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)pcVar10,ppppbVar11,pppplVar12,param_6,
                                      param_7,param_8), plVar9 = extraout_x1_02,
             puVar8 != (undefined8 *)0x0)) goto LAB_7102b01d90;
        }
        puVar8 = (undefined8 *)0x0;
      }
LAB_7102b01d90:
      *(undefined4 *)(puVar8 + 1) = 0x10001;
      *puVar8 = &PTR_FUN_710507f650;
      puVar8[2] = param_1 + 8;
      puVar8[3] = FUN_7102b01e20;
      *(undefined8 **)(lVar6 + 0x68) = puVar8;
    }
  }
  lVar22 = param_1[2];
  if (*(uint *)(param_1 + 1) < 3) {
    uVar20 = 1;
    if (lVar22 != 0) {
      *(undefined1 *)(lVar22 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar22 + 0x108),plVar9,(long ****)pcVar10,ppppbVar11,pppplVar12,
                     param_6,param_7,param_8);
    }
  }
  else {
    if (lVar22 != 0) {
      *(undefined1 *)(lVar22 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar22 + 0x108),plVar9,(long ****)pcVar10,ppppbVar11,pppplVar12,
                     param_6,param_7,param_8);
    }
    uVar20 = 0;
  }
  *(undefined1 *)((long)param_1 + 0x41) = uVar20;
  return;
}

