// addr:      7102b04e40
// offset:    0x2b04e40
// name:      FUN_7102b04e40
// mangled:   
// signature: undefined __cdecl FUN_7102b04e40(long * param_1, long param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b04e40(long *param_1,long param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long *plVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  long *extraout_x1;
  long *plVar11;
  long *extraout_x1_00;
  long *extraout_x1_01;
  char *pcVar12;
  undefined **ppuVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  char *pcVar19;
  long *plVar20;
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
  plVar21 = param_1 + 2;
  *plVar21 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar7 = _DAT_7107521008;
  lVar22 = _ConstantZero;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[7] = lVar7;
  param_1[6] = lVar22;
  pcVar12 = "S04_YAK_BlockQuestion";
  ppppbVar14 = param_4;
  pppplVar15 = param_5;
  FUN_710262c340((long *)local_128,*(long **)(*(long *)(param_2 + 0x300) + 0x20),
                 "S04_YAK_BlockQuestion");
  local_178 = 0;
  local_180 = local_128[0];
  for (uVar16 = 0; local_118[uVar16] != 0; uVar16 = uVar16 + 2) {
    local_170[uVar16] = local_118[uVar16];
    if (0x3e < (int)uVar16 + 1U) {
      uVar16 = (ulong)((int)uVar16 + 1);
      break;
    }
    if (local_118[uVar16 + 1] == 0) {
      uVar16 = uVar16 + 1;
      break;
    }
    local_170[uVar16 + 1] = local_118[uVar16 + 1];
  }
  local_178 = 0x811c9dc5;
  local_170[uVar16 & 0xffffffff] = 0;
  local_174 = (int)uVar16;
  uVar18 = (uint)local_170[0];
  if (uVar18 != 0) {
    pbVar17 = local_170;
    do {
      pbVar17 = pbVar17 + 1;
      local_178 = local_178 * 0x89 ^ uVar18;
      uVar18 = (uint)*pbVar17;
    } while (uVar18 != 0);
  }
  local_130 = local_d8;
  for (uVar16 = 0; local_c0[uVar16] != '\0'; uVar16 = uVar16 + 2) {
    local_1c8[uVar16] = local_c0[uVar16];
    if (0x3e < (int)uVar16 + 1U) {
      uVar16 = (ulong)((int)uVar16 + 1);
      break;
    }
    if (local_c0[uVar16 + 1] == '\0') {
      uVar16 = uVar16 + 1;
      break;
    }
    local_1c8[uVar16 + 1] = local_c0[uVar16 + 1];
  }
  local_1c8[uVar16 & 0xffffffff] = '\0';
  if (local_1c8[0] != '\0') {
    pcVar19 = local_1c8;
    do {
      pcVar19 = pcVar19 + 1;
    } while (*pcVar19 != '\0');
  }
  local_188 = local_80;
  if (local_128[0] == plStack_d0) {
    return;
  }
  iVar5 = 0;
  plVar11 = extraout_x1;
  ppuVar13 = (undefined **)pcVar12;
  do {
    lVar22 = *local_128[0];
    plVar20 = *(long **)(lVar22 + 0x110);
    if ((plVar20 != (long *)0x0) && (*plVar20 != plVar20[1])) {
      if (iVar5 == (int)param_1[1]) {
        lVar7 = *(long *)(*param_1 + 0x310);
        plVar20 = (long *)(*param_1 + 0x310);
        if (iVar5 == 0) {
          if ((long ***)((ulong)param_4 & 0xffffffffff) == (long ***)0x0) goto LAB_7102b05174;
          plVar3 = *(long **)(lVar7 + 0xd0);
          goto joined_r0x007102b05148;
        }
        plVar11 = *(long **)(lVar7 + 0xd0);
        if (plVar11 == *(long **)(lVar7 + 0xd8)) goto LAB_7102b05130;
        break;
      }
      iVar5 = iVar5 + 1;
    }
    do {
      local_128[0] = local_128[0] + 1;
      local_180 = local_128[0];
      plVar20 = local_d8;
      if (local_128[0] == local_d8) break;
      uVar18 = (uint)local_170[0];
      if (uVar18 == 0) {
        uVar6 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        plVar11 = (long *)&DAT_ffffffff;
        pbVar17 = local_170;
        do {
          pbVar17 = pbVar17 + 1;
          ppppbVar14 = (byte ****)(ulong)(uVar18 - 0x41);
          pppplVar15 = (long ****)(ulong)(uVar18 + 0x20);
          uVar2 = uVar18 + 0x20;
          if (0x19 < uVar18 - 0x41) {
            uVar2 = uVar18;
          }
          uVar2 = (&DAT_7104754084)[(uVar2 ^ (uint)plVar11) & 0xff] ^ (uint)plVar11 >> 8;
          plVar11 = (long *)(ulong)uVar2;
          uVar18 = (uint)*pbVar17;
          uVar16 = uVar16 + 0x100000000;
        } while (*pbVar17 != 0);
        uVar6 = (ulong)~uVar2;
        uVar16 = uVar16 & 0xff00000000;
        ppuVar13 = (undefined **)0x0;
      }
      plVar20 = local_128[0];
    } while ((*(ulong *)(*local_128[0] + 0xa0) & 0xffffffffff) != (uVar16 | uVar6));
    local_128[0] = plVar20;
    if (local_128[0] == plStack_d0) {
      return;
    }
  } while( true );
  while (plVar11 = plVar11 + 2, *(long **)(lVar7 + 0xd8) != plVar11) {
    if ((*(uint *)(plVar11 + 1) < 2) &&
       (((ulong)param_4 & 0xffffffffff) == *(ulong *)(*plVar11 + 0x68))) {
      pppplVar8 = FUN_710262fb80(lVar7,plVar11,(long *********)ppuVar13,ppppbVar14,pppplVar15,
                                 param_6,param_7,param_8);
      plVar20 = (long *)(*param_1 + 0x310);
      goto LAB_7102b051cc;
    }
  }
LAB_7102b05130:
  pppplVar8 = (long ****)0x0;
LAB_7102b051cc:
  param_1[2] = (long)pppplVar8;
  lVar7 = *plVar20;
  plVar11 = *(long **)(lVar7 + 0xd0);
  if (plVar11 == *(long **)(lVar7 + 0xd8)) goto LAB_7102b0521c;
  do {
    if ((*(uint *)(plVar11 + 1) < 2) &&
       (((ulong)param_5 & 0xffffffffff) == *(ulong *)(*plVar11 + 0x68))) {
      pppplVar9 = FUN_710262fb80(lVar7,plVar11,(long *********)ppuVar13,ppppbVar14,pppplVar15,
                                 param_6,param_7,param_8);
      pppplVar8 = (long ****)*plVar21;
      param_1[3] = (long)pppplVar9;
      plVar11 = extraout_x1_00;
      goto joined_r0x007102b05294;
    }
    plVar11 = plVar11 + 2;
  } while (*(long **)(lVar7 + 0xd8) != plVar11);
  lVar7 = 0;
LAB_7102b05210:
  param_1[3] = lVar7;
  if (pppplVar8 != (long ****)0x0) goto LAB_7102b05228;
LAB_7102b05298:
  lVar7 = *plVar21;
  goto joined_r0x007102b05278;
joined_r0x007102b05148:
  if (plVar3 == *(long **)(lVar7 + 0xd8)) goto LAB_7102b05174;
  if ((*(uint *)(plVar3 + 1) < 2) &&
     (pppplVar8 = (long ****)*plVar3, (long ***)((ulong)param_4 & 0xffffffffff) == pppplVar8[0xd]))
  goto LAB_7102b05178;
  plVar3 = plVar3 + 2;
  goto joined_r0x007102b05148;
LAB_7102b05174:
  pppplVar8 = (long ****)0x0;
LAB_7102b05178:
  param_1[2] = (long)pppplVar8;
  if (((ulong)param_5 & 0xffffffffff) != 0) {
    for (plVar3 = *(long **)(*plVar20 + 0xd0); plVar3 != *(long **)(*plVar20 + 0xd8);
        plVar3 = plVar3 + 2) {
      if ((*(uint *)(plVar3 + 1) < 2) &&
         (lVar7 = *plVar3, ((ulong)param_5 & 0xffffffffff) == *(ulong *)(lVar7 + 0x68)))
      goto LAB_7102b05210;
    }
  }
LAB_7102b0521c:
  param_1[3] = 0;
joined_r0x007102b05294:
  if (pppplVar8 == (long ****)0x0) goto LAB_7102b05298;
LAB_7102b05228:
  *(byte *)(pppplVar8 + 0x23) = *(byte *)(pppplVar8 + 0x23) | 1;
  lVar7 = *plVar21;
  if (lVar7 == 0) goto LAB_7102b052ac;
  if ((*(char *)(lVar7 + 0xe0) != '\0') && (*(long *)(lVar7 + 200) != 0)) {
    *(undefined2 *)(*(long *)(lVar7 + 200) + 0x30) = 0x101;
  }
  if (*(long *)(lVar7 + 0xd8) != 0) {
    *(undefined1 *)(*(long *)(lVar7 + 0xd8) + 0x21) = 1;
  }
  if (*(char *)(lVar7 + 0xe0) == '\0') goto LAB_7102b05298;
  *(undefined1 *)(*(long *)(lVar7 + 0xb0) + 0x10) = 0;
  lVar7 = *plVar21;
joined_r0x007102b05278:
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar7 + 0x108),plVar11,(long ****)ppuVar13,ppppbVar14,pppplVar15,param_6
                   ,param_7,param_8);
    plVar11 = extraout_x1_01;
  }
LAB_7102b052ac:
  lVar7 = param_1[3];
  if (lVar7 != 0) {
    *(byte *)(lVar7 + 0x118) = *(byte *)(lVar7 + 0x118) | 1;
    lVar7 = param_1[3];
    if (lVar7 != 0) {
      if ((*(char *)(lVar7 + 0xe0) != '\0') && (*(long *)(lVar7 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar7 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar7 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar7 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar7 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar7 + 0xb0) + 0x10) = 0;
      }
      lVar7 = param_1[3];
      if (lVar7 != 0) {
        *(undefined1 *)(lVar7 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar7 + 0x108),plVar11,(long ****)ppuVar13,ppppbVar14,pppplVar15,
                       param_6,param_7,param_8);
      }
    }
  }
  pauVar1 = (undefined1 (*) [16])(lVar22 + 0x140);
  lVar7 = *(long *)*pauVar1;
  auVar23 = NEON_ext(*pauVar1,*pauVar1,8,1);
  param_1[7] = (ulong)auVar23._0_4_;
  param_1[6] = lVar7;
  param_1[4] = *(long *)(lVar22 + 0x110);
  if (*(char *)(*param_1 + 0x18) != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      ppuVar13 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if ('\0' < DAT_71052c5204) {
      plVar11 = (long *)((long *)param_1[4])[1];
      for (plVar21 = *(long **)param_1[4]; plVar21 != plVar11; plVar21 = plVar21 + 1) {
        lVar7 = *plVar21;
        lVar22 = *(long *)(lVar7 + 0x68);
        if (lVar22 != 0) {
          sVar4 = *(short *)(lVar22 + 8) + -1;
          *(short *)(lVar22 + 8) = sVar4;
          if ((sVar4 < 1) && (*(long **)(lVar7 + 0x68) != (long *)0x0)) {
            (**(code **)(**(long **)(lVar7 + 0x68) + 8))();
          }
          *(undefined8 *)(lVar7 + 0x68) = 0;
        }
        puVar10 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppuVar13,ppppbVar14,pppplVar15,param_6,param_7
                                 ,param_8);
        if (puVar10 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            local_78 = (long ********)&SUB_00000020;
            ppuVar13 = (undefined **)&local_78;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar16 & 1) != 0) &&
               (puVar10 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppuVar13,ppppbVar14,pppplVar15,param_6
                                         ,param_7,param_8), puVar10 != (undefined8 *)0x0))
            goto LAB_7102b05414;
          }
          puVar10 = (undefined8 *)0x0;
        }
LAB_7102b05414:
        *(undefined4 *)(puVar10 + 1) = 0x10001;
        *puVar10 = &PTR_FUN_710507f650;
        puVar10[2] = param_1 + 8;
        puVar10[3] = FUN_7102b054a0;
        *(undefined8 **)(lVar7 + 0x68) = puVar10;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  return;
}

