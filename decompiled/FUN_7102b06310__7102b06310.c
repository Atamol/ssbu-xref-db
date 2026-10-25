// addr:      7102b06310
// offset:    0x2b06310
// name:      FUN_7102b06310
// mangled:   
// signature: undefined __cdecl FUN_7102b06310(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102b06310(long *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long *extraout_x1;
  long *plVar8;
  long *extraout_x1_00;
  char *pcVar9;
  long ****pppplVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
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
  param_1[1] = param_3;
  *(int *)(param_1 + 2) = (int)param_4;
  plVar17 = param_1 + 3;
  *plVar17 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  pcVar9 = "s04_yak_chikuwablock";
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  pppplVar10 = param_5;
  FUN_710262c340((long *)local_128,*(long **)(*(long *)(param_2 + 0x300) + 0x20),
                 "s04_yak_chikuwablock");
  local_178 = 0;
  local_180 = local_128[0];
  for (uVar11 = 0; local_118[uVar11] != 0; uVar11 = uVar11 + 2) {
    local_170[uVar11] = local_118[uVar11];
    if (0x3e < (int)uVar11 + 1U) {
      uVar11 = (ulong)((int)uVar11 + 1);
      break;
    }
    if (local_118[uVar11 + 1] == 0) {
      uVar11 = uVar11 + 1;
      break;
    }
    local_170[uVar11 + 1] = local_118[uVar11 + 1];
  }
  local_178 = 0x811c9dc5;
  local_170[uVar11 & 0xffffffff] = 0;
  local_174 = (int)uVar11;
  uVar14 = (uint)local_170[0];
  if (uVar14 != 0) {
    pbVar12 = local_170;
    do {
      pbVar12 = pbVar12 + 1;
      local_178 = local_178 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar12;
    } while (uVar14 != 0);
  }
  local_130 = local_d8;
  for (uVar11 = 0; local_c0[uVar11] != '\0'; uVar11 = uVar11 + 2) {
    local_1c8[uVar11] = local_c0[uVar11];
    if (0x3e < (int)uVar11 + 1U) {
      uVar11 = (ulong)((int)uVar11 + 1);
      break;
    }
    if (local_c0[uVar11 + 1] == '\0') {
      uVar11 = uVar11 + 1;
      break;
    }
    local_1c8[uVar11 + 1] = local_c0[uVar11 + 1];
  }
  local_1c8[uVar11 & 0xffffffff] = '\0';
  if (local_1c8[0] != '\0') {
    pcVar15 = local_1c8;
    do {
      pcVar15 = pcVar15 + 1;
    } while (*pcVar15 != '\0');
  }
  local_188 = local_80;
  if (local_128[0] == plStack_d0) {
    return;
  }
  iVar13 = 0;
  plVar8 = extraout_x1;
  do {
    lVar18 = *local_128[0];
    plVar16 = *(long **)(lVar18 + 0x110);
    if ((plVar16 != (long *)0x0) && (*plVar16 != plVar16[1])) {
      if (iVar13 == (int)param_1[2]) {
        lVar5 = *(long *)(*param_1 + 0x310);
        if (iVar13 != 0) {
          plVar8 = *(long **)(lVar5 + 0xd0);
          if (plVar8 == *(long **)(lVar5 + 0xd8)) goto LAB_7102b06634;
          goto LAB_7102b065cc;
        }
        if ((long ***)((ulong)param_5 & 0xffffffffff) == (long ***)0x0) goto LAB_7102b06634;
        plVar16 = *(long **)(lVar5 + 0xd0);
        break;
      }
      iVar13 = iVar13 + 1;
    }
    do {
      local_128[0] = local_128[0] + 1;
      local_180 = local_128[0];
      plVar16 = local_d8;
      if (local_128[0] == local_d8) break;
      uVar14 = (uint)local_170[0];
      if (uVar14 == 0) {
        uVar4 = 0;
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        plVar8 = (long *)&DAT_ffffffff;
        pbVar12 = local_170;
        do {
          pbVar12 = pbVar12 + 1;
          param_4 = (byte ****)(ulong)(uVar14 - 0x41);
          pppplVar10 = (long ****)(ulong)(uVar14 + 0x20);
          uVar2 = uVar14 + 0x20;
          if (0x19 < uVar14 - 0x41) {
            uVar2 = uVar14;
          }
          uVar2 = (&DAT_7104754084)[(uVar2 ^ (uint)plVar8) & 0xff] ^ (uint)plVar8 >> 8;
          plVar8 = (long *)(ulong)uVar2;
          uVar14 = (uint)*pbVar12;
          uVar11 = uVar11 + 0x100000000;
        } while (*pbVar12 != 0);
        uVar4 = (ulong)~uVar2;
        uVar11 = uVar11 & 0xff00000000;
        pcVar9 = (char *)0x0;
      }
      plVar16 = local_128[0];
    } while ((*(ulong *)(*local_128[0] + 0xa0) & 0xffffffffff) != (uVar11 | uVar4));
    local_128[0] = plVar16;
    if (local_128[0] == plStack_d0) {
      return;
    }
  } while( true );
joined_r0x007102b06608:
  if (plVar16 == *(long **)(lVar5 + 0xd8)) goto LAB_7102b06634;
  if ((*(uint *)(plVar16 + 1) < 2) &&
     (pppplVar6 = (long ****)*plVar16, (long ***)((ulong)param_5 & 0xffffffffff) == pppplVar6[0xd]))
  goto LAB_7102b06638;
  plVar16 = plVar16 + 2;
  goto joined_r0x007102b06608;
  while (plVar8 = plVar8 + 2, *(long **)(lVar5 + 0xd8) != plVar8) {
LAB_7102b065cc:
    if ((*(uint *)(plVar8 + 1) < 2) &&
       (((ulong)param_5 & 0xffffffffff) == *(ulong *)(*plVar8 + 0x68))) {
      pppplVar6 = FUN_710262fb80(lVar5,plVar8,(long *********)pcVar9,param_4,pppplVar10,param_6,
                                 param_7,param_8);
      plVar8 = extraout_x1_00;
      goto LAB_7102b06638;
    }
  }
LAB_7102b06634:
  pppplVar6 = (long ****)0x0;
LAB_7102b06638:
  param_1[3] = (long)pppplVar6;
  param_1[4] = *(long *)(lVar18 + 0x110);
  pauVar1 = (undefined1 (*) [16])(lVar18 + 0x140);
  lVar18 = *(long *)*pauVar1;
  auVar19 = NEON_ext(*pauVar1,*pauVar1,8,1);
  param_1[7] = (ulong)auVar19._0_4_;
  param_1[6] = lVar18;
  if (pppplVar6 != (long ****)0x0) {
    *(byte *)(pppplVar6 + 0x23) = *(byte *)(pppplVar6 + 0x23) | 1;
    lVar18 = *plVar17;
    if (lVar18 == 0) goto LAB_7102b066c0;
    if ((*(char *)(lVar18 + 0xe0) != '\0') && (*(long *)(lVar18 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar18 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar18 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar18 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar18 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar18 + 0xb0) + 0x10) = 0;
    }
  }
  lVar18 = *plVar17;
  if (lVar18 != 0) {
    *(undefined1 *)(lVar18 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar18 + 0x108),plVar8,(long ****)pcVar9,param_4,pppplVar10,param_6,
                   param_7,param_8);
  }
LAB_7102b066c0:
  if (*(char *)(*param_1 + 0x18) != '\0') {
    plVar8 = (long *)((long *)param_1[4])[1];
    for (plVar17 = *(long **)param_1[4]; plVar17 != plVar8; plVar17 = plVar17 + 1) {
      lVar5 = *plVar17;
      lVar18 = *(long *)(lVar5 + 0x60);
      if (lVar18 != 0) {
        sVar3 = *(short *)(lVar18 + 8) + -1;
        *(short *)(lVar18 + 8) = sVar3;
        if ((sVar3 < 1) && (*(long **)(lVar5 + 0x60) != (long *)0x0)) {
          (**(code **)(**(long **)(lVar5 + 0x60) + 8))();
        }
        *(undefined8 *)(lVar5 + 0x60) = 0;
      }
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)pcVar9,param_4,pppplVar10,param_6,param_7,param_8
                             );
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_78 = (long ********)&SUB_00000020;
          pcVar9 = (char *)&local_78;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar11 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)pcVar9,param_4,pppplVar10,param_6,param_7
                                      ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102b06780;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102b06780:
      *(undefined4 *)(puVar7 + 1) = 0x10001;
      *puVar7 = &PTR_FUN_710507f650;
      puVar7[2] = param_1 + 8;
      puVar7[3] = FUN_7102b067e0;
      *(undefined8 **)(lVar5 + 0x60) = puVar7;
    }
  }
  FUN_71025f4d80(*(long **)param_1[4],(long *)((undefined8 *)param_1[4])[1],1);
  return;
}

