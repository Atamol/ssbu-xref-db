// addr:      7102841990
// offset:    0x2841990
// name:      FUN_7102841990
// mangled:   
// signature: undefined __cdecl FUN_7102841990(byte * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, char * param_8)


void FUN_7102841990(byte ****param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   undefined1 (*param_7) [16],char *param_8)

{
  byte ****ppppbVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  long ***ppplVar11;
  uint uVar12;
  int iVar13;
  byte ***pppbVar14;
  long lVar15;
  long ***ppplVar16;
  byte **ppbVar17;
  long *plVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar19;
  long ****pppplVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  char *pcVar26;
  long ***ppplVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  int *piVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  byte *pbVar38;
  byte ***pppbVar39;
  byte *pbVar40;
  long **pplVar41;
  long ***ppplVar42;
  undefined1 (*pauVar43) [16];
  uint uVar44;
  undefined1 (*pauVar45) [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulong local_268;
  ulong local_260;
  undefined8 local_238;
  byte local_230;
  byte abStack_22f [63];
  long ***local_1f0;
  uint local_1e8;
  undefined4 local_1e4;
  byte local_1e0 [64];
  undefined8 local_1a0;
  long ***local_198;
  uint local_190;
  undefined4 local_18c;
  byte local_188 [64];
  long ***local_148;
  long ***local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  long ***local_f0;
  long ***ppplStack_e8;
  byte local_d8 [64];
  undefined8 local_98;
  byte ***local_90 [2];
  undefined4 local_74;
  
  FUN_71025d9250((long *)param_1,param_2,param_3,param_4,param_5,param_6,(long ******)param_7,
                 (long ***)param_8);
  pppbVar39 = param_1[0x68];
  pppbVar14 = (byte ***)
              FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                             param_6,param_7,param_8);
  if (pppbVar14 == (byte ***)0x0) {
    local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
    local_140 = (long ***)&SUB_00000020;
    pppplVar20 = &local_140;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
    pppbVar14 = (byte ***)
                FUN_710392e290(0x10,0x20,pppplVar20,(byte ****)param_4,(long ****)param_5,param_6,
                               param_7,param_8);
  }
  *(undefined1 *)(pppbVar14 + 3) = 0;
  *pppbVar14 = (byte **)pppbVar39;
  pppbVar14[1] = (byte **)0xffffffffffffffff;
  pppbVar14[2] = (byte **)0xffffffffffffffff;
  pppbVar39 = param_1[0xfe];
  param_1[0xfe] = pppbVar14;
  if (pppbVar39 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar39);
  }
  ppppbVar1 = param_1 + 0xe7;
  param_1[0x10a] = (byte ***)ppppbVar1;
  *(undefined8 *)((long)param_1 + 0x86c) = 0xc1a00000;
  fVar46 = *(float *)(param_1 + 0xed);
  *(float *)((long)param_1 + 0x864) = fVar46;
  if (fVar46 < *(float *)(param_1 + 0x10d)) {
    *(float *)(param_1 + 0x10d) = fVar46;
  }
  *(float *)(param_1 + 0x10d) = fVar46;
  param_1[0x111] = (byte ***)0x3f8000003e4ccccd;
  *(float *)(param_1 + 0x110) = fVar46;
  if (fVar46 < *(float *)((long)param_1 + 0x884)) {
    *(float *)((long)param_1 + 0x884) = fVar46;
  }
  *(float *)((long)param_1 + 0x884) = fVar46;
  *(undefined8 *)((long)param_1 + 0x8a4) = 0x43480000;
  *(float *)((long)param_1 + 0x89c) = fVar46;
  if (fVar46 < *(float *)(param_1 + 0x114)) {
    *(float *)(param_1 + 0x114) = fVar46;
  }
  *(float *)(param_1 + 0x114) = fVar46;
  fVar46 = *(float *)(param_1 + 0xeb);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)((long)param_1 + 0x8c4) = 0xc1a00000;
  *(float *)(param_1 + 0x117) = fVar46;
  if (fVar46 < *(float *)((long)param_1 + 0x8bc)) {
    *(float *)((long)param_1 + 0x8bc) = fVar46;
  }
  *(undefined4 *)((long)param_1 + 0x8dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3e4ccccd;
  *(float *)((long)param_1 + 0x8d4) = fVar46;
  if (fVar46 < *(float *)(param_1 + 0x11b)) {
    *(float *)(param_1 + 0x11b) = fVar46;
  }
  *(undefined4 *)(param_1 + 0x11f) = 0;
  *(undefined4 *)((long)param_1 + 0x8fc) = 0x43480000;
  *(float *)(param_1 + 0x11e) = fVar46;
  if (fVar46 < *(float *)((long)param_1 + 0x8f4)) {
    *(float *)((long)param_1 + 0x8f4) = fVar46;
  }
  local_230 = 0;
  local_238 = 0;
  FUN_710062dc20((uint *)&local_238,"0%d_Item");
  pbVar40 = *param_1[0x60][3];
  pbVar5 = param_1[0x60][3][1];
  if (pbVar40 != pbVar5) {
    do {
      uVar12 = (uint)local_230;
      if (uVar12 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        pbVar38 = abStack_22f;
        do {
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar38;
          uVar36 = uVar36 + 0x100000000;
          pbVar38 = pbVar38 + 1;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      if ((*(ulong *)(*(long *)pbVar40 + 0xa0) & 0xffffffffff) == (uVar36 | uVar37)) {
        plVar18 = *(long **)(*(long *)pbVar40 + 0x130);
        if (plVar18 != (long *)0x0) {
          puVar3 = (undefined8 *)*plVar18;
          goto joined_r0x007102841bec;
        }
        break;
      }
      pbVar40 = pbVar40 + 8;
    } while (pbVar40 != pbVar5);
  }
  goto LAB_7102841c24;
joined_r0x007102841bec:
  if (puVar3 == (undefined8 *)plVar18[1]) goto LAB_7102841c1c;
  pppbVar14 = (byte ***)*puVar3;
  if ((pppbVar14[3] != (byte **)0x0) && (*(int *)(pppbVar14[3] + 0x20) == 0x9840001))
  goto LAB_7102841c20;
  puVar3 = puVar3 + 1;
  goto joined_r0x007102841bec;
joined_r0x007102841cf8:
  if (puVar3 == (undefined8 *)plVar18[1]) goto LAB_7102841d2c;
  pppbVar14 = (byte ***)*puVar3;
  if ((pppbVar14[3] != (byte **)0x0) && (*(int *)(pppbVar14[3] + 0x20) == 0x9840065))
  goto LAB_7102841d30;
  puVar3 = puVar3 + 1;
  goto joined_r0x007102841cf8;
LAB_7102841d2c:
  pppbVar14 = (byte ***)0x0;
LAB_7102841d30:
  param_1[0x121] = pppbVar14;
  goto LAB_7102841d34;
joined_r0x007102841e08:
  if (puVar3 == (undefined8 *)plVar18[1]) goto LAB_7102841e3c;
  pppbVar14 = (byte ***)*puVar3;
  if ((pppbVar14[3] != (byte **)0x0) && (*(int *)(pppbVar14[3] + 0x20) == 0x98400c9))
  goto LAB_7102841e40;
  puVar3 = puVar3 + 1;
  goto joined_r0x007102841e08;
LAB_7102841e3c:
  pppbVar14 = (byte ***)0x0;
LAB_7102841e40:
  param_1[0x122] = pppbVar14;
  goto LAB_7102841e44;
joined_r0x007102841f18:
  if (puVar3 == (undefined8 *)plVar18[1]) goto LAB_7102841f4c;
  pppbVar14 = (byte ***)*puVar3;
  if ((pppbVar14[3] != (byte **)0x0) && (*(int *)(pppbVar14[3] + 0x20) == 0x984012d))
  goto LAB_7102841f50;
  puVar3 = puVar3 + 1;
  goto joined_r0x007102841f18;
LAB_7102841f4c:
  pppbVar14 = (byte ***)0x0;
LAB_7102841f50:
  param_1[0x123] = pppbVar14;
  goto LAB_7102841f54;
joined_r0x007102842028:
  if (puVar3 == (undefined8 *)plVar18[1]) goto LAB_710284205c;
  pppbVar14 = (byte ***)*puVar3;
  if ((pppbVar14[3] != (byte **)0x0) && (*(int *)(pppbVar14[3] + 0x20) == 0x9840191))
  goto LAB_7102842060;
  puVar3 = puVar3 + 1;
  goto joined_r0x007102842028;
LAB_710284205c:
  pppbVar14 = (byte ***)0x0;
LAB_7102842060:
  param_1[0x124] = pppbVar14;
  goto LAB_7102842064;
LAB_7102841c1c:
  pppbVar14 = (byte ***)0x0;
LAB_7102841c20:
  param_1[0x120] = pppbVar14;
LAB_7102841c24:
  FUN_710062dc20((uint *)&local_238,"0%d_Item");
  pbVar40 = *param_1[0x60][3];
  pbVar5 = param_1[0x60][3][1];
  if (pbVar40 != pbVar5) {
    do {
      uVar12 = (uint)local_230;
      if (uVar12 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        pbVar38 = abStack_22f;
        do {
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar38;
          uVar36 = uVar36 + 0x100000000;
          pbVar38 = pbVar38 + 1;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      if ((*(ulong *)(*(long *)pbVar40 + 0xa0) & 0xffffffffff) == (uVar36 | uVar37)) {
        plVar18 = *(long **)(*(long *)pbVar40 + 0x130);
        if (plVar18 != (long *)0x0) {
          puVar3 = (undefined8 *)*plVar18;
          goto joined_r0x007102841cf8;
        }
        break;
      }
      pbVar40 = pbVar40 + 8;
    } while (pbVar40 != pbVar5);
  }
LAB_7102841d34:
  FUN_710062dc20((uint *)&local_238,"0%d_Item");
  pbVar40 = *param_1[0x60][3];
  pbVar5 = param_1[0x60][3][1];
  if (pbVar40 != pbVar5) {
    do {
      uVar12 = (uint)local_230;
      if (uVar12 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        pbVar38 = abStack_22f;
        do {
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar38;
          uVar36 = uVar36 + 0x100000000;
          pbVar38 = pbVar38 + 1;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      if ((*(ulong *)(*(long *)pbVar40 + 0xa0) & 0xffffffffff) == (uVar36 | uVar37)) {
        plVar18 = *(long **)(*(long *)pbVar40 + 0x130);
        if (plVar18 != (long *)0x0) {
          puVar3 = (undefined8 *)*plVar18;
          goto joined_r0x007102841e08;
        }
        break;
      }
      pbVar40 = pbVar40 + 8;
    } while (pbVar40 != pbVar5);
  }
LAB_7102841e44:
  FUN_710062dc20((uint *)&local_238,"0%d_Item");
  pbVar40 = *param_1[0x60][3];
  pbVar5 = param_1[0x60][3][1];
  if (pbVar40 != pbVar5) {
    do {
      uVar12 = (uint)local_230;
      if (uVar12 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        pbVar38 = abStack_22f;
        do {
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar38;
          uVar36 = uVar36 + 0x100000000;
          pbVar38 = pbVar38 + 1;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      if ((*(ulong *)(*(long *)pbVar40 + 0xa0) & 0xffffffffff) == (uVar36 | uVar37)) {
        plVar18 = *(long **)(*(long *)pbVar40 + 0x130);
        if (plVar18 != (long *)0x0) {
          puVar3 = (undefined8 *)*plVar18;
          goto joined_r0x007102841f18;
        }
        break;
      }
      pbVar40 = pbVar40 + 8;
    } while (pbVar40 != pbVar5);
  }
LAB_7102841f54:
  pppplVar20 = (long ****)&DAT_00000004;
  FUN_710062dc20((uint *)&local_238,"0%d_Item");
  pbVar40 = *param_1[0x60][3];
  pbVar5 = param_1[0x60][3][1];
  if (pbVar40 != pbVar5) {
    do {
      uVar12 = (uint)local_230;
      if (uVar12 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        pbVar38 = abStack_22f;
        do {
          pppplVar20 = (long ****)(ulong)(uVar12 + 0x20);
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar38;
          uVar36 = uVar36 + 0x100000000;
          pbVar38 = pbVar38 + 1;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      if ((*(ulong *)(*(long *)pbVar40 + 0xa0) & 0xffffffffff) == (uVar36 | uVar37)) {
        plVar18 = *(long **)(*(long *)pbVar40 + 0x130);
        if (plVar18 != (long *)0x0) {
          puVar3 = (undefined8 *)*plVar18;
          goto joined_r0x007102842028;
        }
        break;
      }
      pbVar40 = pbVar40 + 8;
    } while (pbVar40 != pbVar5);
  }
LAB_7102842064:
  pppbVar14 = (byte ***)
              FUN_710392e290(0x10,8,pppplVar20,(byte ****)param_4,(long ****)param_5,param_6,param_7
                             ,param_8);
  if (pppbVar14 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_00000008;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (pppbVar14 = (byte ***)
                      FUN_710392e290(0x10,8,pppplVar20,(byte ****)param_4,(long ****)param_5,param_6
                                     ,param_7,param_8), pppbVar14 != (byte ***)0x0))
      goto LAB_71028420c0;
    }
    pppbVar14 = (byte ***)0x0;
  }
LAB_71028420c0:
  pcVar21 = "STG_ARENA_SMOKE";
  ppppbVar25 = (byte ****)0x0;
  FUN_7102845ed0(pppbVar14,(long)param_1,(long ****)"STG_ARENA_SMOKE",(byte ****)0x0,
                 (long ****)param_5,param_6,param_7,param_8);
  pppbVar39 = param_1[0xff];
  param_1[0xff] = pppbVar14;
  uVar19 = extraout_x1;
  if (pppbVar39 != (byte ***)0x0) {
    FUN_71028461f0(pppbVar39);
    FUN_710392eb40((ulong)pppbVar39);
    uVar19 = extraout_x1_00;
  }
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0x9e7aaa8fd)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x110] = 0;
        FUN_71025e9d50((long *)(pbVar40 + 0x108),uVar19,(long ****)pcVar21,ppppbVar25,
                       (long ****)param_5,param_6,param_7,param_8);
        pbVar40[0x118] = pbVar40[0x118] | 1;
      }
      break;
    }
  }
  pauVar28 = (undefined1 (*) [16])param_1[0x67];
  if (*(char *)(param_1 + 3) == '\0') {
LAB_71028421a0:
    bVar9 = false;
  }
  else {
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51ba != '\0') {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51b9 == '\0') goto LAB_71028421a0;
    }
    bVar9 = true;
  }
  param_1[0x109] = (byte ***)pauVar28;
  param_1[0x100] = (byte ***)param_1;
  piVar4 = (int *)**(long **)(param_1[100][9][100] + 0x40);
  piVar6 = (int *)(*(long **)(param_1[100][9][100] + 0x40))[1];
  lVar15 = (long)piVar6 - (long)piVar4;
  uVar36 = (lVar15 >> 4) * 0x6db6db6db6db6db7;
  piVar34 = piVar4;
  piVar10 = piVar4;
  if (lVar15 == 0) {
LAB_7102842240:
    local_260 = 0xffffffff;
  }
  else {
    for (; (piVar10 != piVar6 &&
           ((*piVar10 != 0 ||
            (piVar34 = piVar10, (*(ulong *)(piVar10 + 2) & 0xffffffffff) != 0xfa46aa69c))));
        piVar10 = piVar10 + 0x1c) {
      piVar34 = piVar6;
    }
    local_260 = ((long)piVar34 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if (uVar36 <= local_260) goto LAB_7102842240;
  }
  piVar34 = piVar4;
  piVar10 = piVar4;
  if (lVar15 == 0) {
LAB_71028422ac:
    local_268 = 0xffffffff;
  }
  else {
    for (; (piVar10 != piVar6 &&
           ((*piVar10 != 0 ||
            (piVar34 = piVar10, (*(ulong *)(piVar10 + 2) & 0xffffffffff) != 0xdc2440205))));
        piVar10 = piVar10 + 0x1c) {
      piVar34 = piVar6;
    }
    local_268 = ((long)piVar34 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
    if (uVar36 <= local_268) goto LAB_71028422ac;
  }
  pcVar21 = "s02_hmdl_01turi_asiba";
  FUN_710262c340((long *)&local_140,(long *)param_1[0x60][4],"s02_hmdl_01turi_asiba");
  ppplVar16 = local_140;
  local_190 = 0;
  local_198 = local_140;
  for (uVar36 = 0; *(byte *)((long)&local_130 + uVar36) != 0; uVar36 = uVar36 + 2) {
    local_188[uVar36] = *(byte *)((long)&local_130 + uVar36);
    if (0x3e < (int)uVar36 + 1U) {
      uVar36 = (ulong)((int)uVar36 + 1);
      break;
    }
    bVar7 = *(byte *)((long)&local_130 + uVar36 + 1);
    if (bVar7 == 0) {
      uVar36 = uVar36 + 1;
      break;
    }
    local_188[uVar36 + 1] = bVar7;
  }
  uVar12 = 0x811c9dc5;
  local_188[uVar36 & 0xffffffff] = 0;
  ppplVar11 = ppplStack_e8;
  ppplVar27 = local_f0;
  uVar44 = (uint)local_188[0];
  local_18c = (int)uVar36;
  uVar32 = (uint)local_188[0];
  local_190 = uVar12;
  if (uVar32 != 0) {
    pbVar40 = local_188;
    do {
      pbVar40 = pbVar40 + 1;
      local_190 = local_190 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar40;
    } while (uVar32 != 0);
  }
  local_1e8 = 0;
  local_1f0 = ppplStack_e8;
  local_148 = local_f0;
  for (uVar36 = 0; local_d8[uVar36] != 0; uVar36 = uVar36 + 2) {
    local_1e0[uVar36] = local_d8[uVar36];
    if (0x3e < (int)uVar36 + 1U) {
      uVar36 = (ulong)((int)uVar36 + 1);
      break;
    }
    if (local_d8[uVar36 + 1] == 0) {
      uVar36 = uVar36 + 1;
      break;
    }
    local_1e0[uVar36 + 1] = local_d8[uVar36 + 1];
  }
  local_1e0[uVar36 & 0xffffffff] = 0;
  local_1e4 = (int)uVar36;
  uVar32 = (uint)local_1e0[0];
  if (local_1e0[0] != 0) {
    pbVar40 = local_1e0;
    do {
      pbVar40 = pbVar40 + 1;
      uVar12 = uVar12 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar40;
    } while (uVar32 != 0);
  }
  local_1e8 = uVar12;
  local_1a0 = local_98;
  if (ppplVar16 != ppplVar11) {
    uVar12 = 0;
    if (bVar9) {
      pauVar43 = param_6;
      pauVar45 = param_7;
      do {
        param_6 = pauVar43;
        param_7 = pauVar45;
        ppplVar42 = ppplVar16;
        if (uVar12 < 3) {
          param_6 = (undefined1 (*) [16])*ppplVar16;
          pbVar40 = (byte *)(&DAT_71050ea410)[(int)uVar12];
          param_7 = param_6 + 0x14;
          pppbVar14 = (byte ***)
                      FUN_710392e290(0x10,0x170,(long ****)pcVar21,ppppbVar25,(long ****)param_5,
                                     pauVar43,pauVar45,param_8);
          if (pppbVar14 == (byte ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_74 = 0;
              local_90[0] = (byte ***)&DAT_00000170;
              ppppbVar22 = local_90;
              uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
              if (((uVar36 & 1) != 0) &&
                 (pppbVar14 = (byte ***)
                              FUN_710392e290(0x10,0x170,(long ****)ppppbVar22,ppppbVar25,
                                             (long ****)param_5,pauVar43,pauVar45,param_8),
                 pppbVar14 != (byte ***)0x0)) goto LAB_71028424e8;
            }
            pppbVar14 = (byte ***)0x0;
          }
LAB_71028424e8:
          pcVar21 = (char *)0x1;
          param_8 = "s02_hmdl_01turi_asiba";
          ppppbVar25 = param_1;
          param_5 = pauVar28;
          FUN_7102848de0(pppbVar14,1,1,param_1,(long ****)pauVar28,(long)param_6,(long ***)param_7,
                         (long ***)"s02_hmdl_01turi_asiba",(byte *)"s02_01turi_rope",
                         (byte *)"s02_01turi_asiba_koware",(int)local_260,(int)local_268,
                         (byte *)"01_Item",pbVar40,ppppbVar1,uVar12 != 0);
          FUN_710313ef20((long *)pppbVar14);
          lVar15 = (**(code **)(*(long *)pppbVar14[7][0x26] + 0x1a0))();
          if (*(long *)(lVar15 + 0x30) != 0) {
            lVar29 = *(long *)(lVar15 + 0x38);
            lVar15 = lVar29 + *(long *)(lVar15 + 0x30) * 0x2d0;
            do {
              iVar13 = *(int *)(lVar29 + 0xc);
              if (0 < iVar13) {
                iVar8 = *(int *)(lVar29 + 8);
                lVar30 = (long)iVar8;
                do {
                  lVar35 = *(long *)(lVar29 + lVar30 * 8 + 0x30);
                  if (lVar35 != 0) {
                    *(code **)(lVar35 + 0x30) = FUN_710313f320;
                  }
                  lVar30 = lVar30 + 1;
                } while (lVar30 < iVar13 + iVar8);
              }
              lVar29 = lVar29 + 0x2d0;
            } while (lVar29 != lVar15);
          }
          local_90[0] = pppbVar14;
          if (param_1[0x102] < param_1[0x103]) {
            *param_1[0x102] = (byte **)pppbVar14;
            param_1[0x102] = param_1[0x102] + 1;
          }
          else {
            FUN_710284a980((ulong *)(param_1 + 0x101),local_90,(long ****)pcVar21,ppppbVar25,
                           (long ****)param_5,param_6,param_7,param_8);
          }
          param_1[(long)(int)uVar12 + 0x104] = pppbVar14;
          uVar12 = uVar12 + 1;
        }
        do {
          ppplVar42 = ppplVar42 + 1;
          local_198 = ppplVar42;
          ppplVar16 = ppplVar27;
          if (ppplVar42 == ppplVar27) break;
          if (uVar44 == 0) {
            uVar37 = 0;
            uVar36 = 0;
          }
          else {
            uVar36 = 0;
            uVar32 = 0xffffffff;
            uVar33 = uVar44;
            pbVar40 = local_188;
            do {
              pbVar40 = pbVar40 + 1;
              uVar2 = uVar33 + 0x20;
              if (0x19 < uVar33 - 0x41) {
                uVar2 = uVar33;
              }
              uVar32 = (&DAT_7104754084)[(uVar2 ^ uVar32) & 0xff] ^ uVar32 >> 8;
              uVar33 = (uint)*pbVar40;
              uVar36 = uVar36 + 0x100000000;
            } while (uVar33 != 0);
            uVar37 = (ulong)~uVar32;
            uVar36 = uVar36 & 0xff00000000;
          }
          ppplVar16 = ppplVar42;
        } while (((ulong)(*ppplVar42)[0x14] & 0xffffffffff) != (uVar36 | uVar37));
        pauVar43 = param_6;
        pauVar45 = param_7;
      } while (ppplVar16 != ppplVar11);
    }
    else {
      do {
        if (uVar12 < 3) {
          pauVar45 = (undefined1 (*) [16])*ppplVar16;
          pbVar40 = (byte *)(&DAT_71050ea410)[(int)uVar12];
          pauVar43 = pauVar45 + 0x14;
          pppbVar14 = (byte ***)
                      FUN_710392e290(0x10,0x170,(long ****)pcVar21,ppppbVar25,(long ****)param_5,
                                     param_6,param_7,param_8);
          if (pppbVar14 == (byte ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_74 = 0;
              local_90[0] = (byte ***)&DAT_00000170;
              ppppbVar22 = local_90;
              uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
              if (((uVar36 & 1) != 0) &&
                 (pppbVar14 = (byte ***)
                              FUN_710392e290(0x10,0x170,(long ****)ppppbVar22,ppppbVar25,
                                             (long ****)param_5,param_6,param_7,param_8),
                 pppbVar14 != (byte ***)0x0)) goto LAB_710284274c;
            }
            pppbVar14 = (byte ***)0x0;
          }
LAB_710284274c:
          pcVar21 = (char *)0x1;
          param_8 = "s02_hmdl_01turi_asiba";
          ppppbVar25 = param_1;
          param_5 = pauVar28;
          FUN_7102848de0(pppbVar14,1,1,param_1,(long ****)pauVar28,(long)pauVar45,(long ***)pauVar43
                         ,(long ***)"s02_hmdl_01turi_asiba",(byte *)"s02_01turi_rope",
                         (byte *)"s02_01turi_asiba_koware",(int)local_260,(int)local_268,
                         (byte *)"01_Item",pbVar40,ppppbVar1,uVar12 != 0);
          param_6 = pauVar45;
          param_7 = pauVar43;
          if (*(char *)(pppbVar14 + 8) != '\0') {
            ppbVar17 = pppbVar14[6];
            if (((ppbVar17 != (byte **)0x0) && (*(byte *)(ppbVar17 + 2) != 0)) &&
               (*(byte *)(ppbVar17 + 2) = 0, *(byte *)(ppbVar17 + 10) != 0)) {
              plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*ppbVar17 + 8));
              (**(code **)(*plVar18 + 0x48))(plVar18,0);
              *(byte *)(ppbVar17 + 10) = 0;
            }
            (*(code *)(*pppbVar14)[6])(pppbVar14);
            param_6 = pauVar45;
            param_7 = pauVar43;
          }
          *(undefined1 *)(pppbVar14 + 8) = 0;
          lVar15 = (**(code **)(*(long *)pppbVar14[7][0x26] + 0x1a0))();
          if (*(long *)(lVar15 + 0x30) != 0) {
            lVar29 = *(long *)(lVar15 + 0x38);
            lVar15 = lVar29 + *(long *)(lVar15 + 0x30) * 0x2d0;
            do {
              iVar13 = *(int *)(lVar29 + 0xc);
              if (0 < iVar13) {
                iVar8 = *(int *)(lVar29 + 8);
                lVar30 = (long)iVar8;
                do {
                  lVar35 = *(long *)(lVar29 + lVar30 * 8 + 0x30);
                  if (lVar35 != 0) {
                    *(code **)(lVar35 + 0x30) = FUN_710313f320;
                  }
                  lVar30 = lVar30 + 1;
                } while (lVar30 < iVar13 + iVar8);
              }
              lVar29 = lVar29 + 0x2d0;
            } while (lVar29 != lVar15);
          }
          local_90[0] = pppbVar14;
          if (param_1[0x102] < param_1[0x103]) {
            *param_1[0x102] = (byte **)pppbVar14;
            param_1[0x102] = param_1[0x102] + 1;
          }
          else {
            FUN_710284a980((ulong *)(param_1 + 0x101),local_90,(long ****)pcVar21,ppppbVar25,
                           (long ****)param_5,param_6,param_7,param_8);
          }
          param_1[(long)(int)uVar12 + 0x104] = pppbVar14;
          uVar12 = uVar12 + 1;
        }
        do {
          ppplVar16 = ppplVar16 + 1;
          local_198 = ppplVar16;
          ppplVar42 = ppplVar27;
          if (ppplVar16 == ppplVar27) break;
          if (uVar44 == 0) {
            uVar37 = 0;
            uVar36 = 0;
          }
          else {
            uVar36 = 0;
            uVar32 = 0xffffffff;
            uVar33 = uVar44;
            pbVar40 = local_188;
            do {
              pbVar40 = pbVar40 + 1;
              uVar2 = uVar33 + 0x20;
              if (0x19 < uVar33 - 0x41) {
                uVar2 = uVar33;
              }
              uVar32 = (&DAT_7104754084)[(uVar2 ^ uVar32) & 0xff] ^ uVar32 >> 8;
              uVar33 = (uint)*pbVar40;
              uVar36 = uVar36 + 0x100000000;
            } while (*pbVar40 != 0);
            uVar37 = (ulong)~uVar32;
            uVar36 = uVar36 & 0xff00000000;
          }
          ppplVar42 = ppplVar16;
        } while (((ulong)(*ppplVar16)[0x14] & 0xffffffffff) != (uVar36 | uVar37));
        ppplVar16 = ppplVar42;
      } while (ppplVar16 != ppplVar11);
    }
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0xb8,(long ****)pcVar21,ppppbVar25,(long ****)param_5,param_6,
                             param_7,param_8);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_000000b8;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)param_5,param_6,
                                     param_7,param_8), ppplVar16 != (long ***)0x0))
      goto LAB_71028429bc;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_71028429bc:
  local_130 = 0x1000000001;
  pppplVar20 = &local_140;
  local_140 = (long ***)0x0;
  puStack_138 = &DAT_100000001;
  FUN_710313e6a0(ppplVar16,(long)param_1,pppplVar20,ppppbVar25,(long ****)param_5,param_6,param_7,
                 param_8);
  *(undefined4 *)((long)ppplVar16 + 0x74) = 0x3f800000;
  *(undefined4 *)((long)ppplVar16 + 0x44) = 0;
  *(undefined2 *)(ppplVar16 + 9) = 0;
  *(undefined1 *)((long)ppplVar16 + 0x5c) = 1;
  *(undefined8 *)((long)ppplVar16 + 0x54) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x4c) = 0;
  *(undefined1 *)(ppplVar16 + 0xc) = 0;
  *(undefined8 *)((long)ppplVar16 + 100) = 1;
  *(undefined8 *)((long)ppplVar16 + 0x6c) = 0;
  *ppplVar16 = (long **)&PTR_FUN_71050ea0d8;
  ppplVar16[0xf] = (long **)0x0;
  ppplVar16[0x10] = (long **)0x0;
  ppplVar16[0x13] = (long **)(ppplVar16 + 0xf);
  *(undefined4 *)(ppplVar16 + 0x16) = 1;
  ppplVar16[0x11] = (long **)0x0;
  ppplVar16[0x12] = (long **)0x0;
  ppplVar16[0x14] = (long **)0x0;
  ppplVar16[0x15] = (long **)0x0;
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0xfd88da743)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x118] = pbVar40[0x118] | 1;
        ppplVar16[0x13][(long)ppplVar16[0x14]] = (long *)pbVar40;
        ppplVar16[0x14] = (long **)((long)ppplVar16[0x14] + 1);
      }
      break;
    }
  }
  pbVar40 = *param_1[0x60][3];
  do {
    if (pbVar40 == param_1[0x60][3][1]) goto LAB_7102842af0;
    lVar15 = *(long *)pbVar40;
    pbVar40 = pbVar40 + 8;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xfd88da743);
  pplVar41 = *(long ***)(lVar15 + 0x110);
  if ((pplVar41 != (long **)0x0) && (*pplVar41 != pplVar41[1])) {
    ppplVar16[0x15] = pplVar41;
  }
LAB_7102842af0:
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  ppppbVar22 = param_1 + 0x101;
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)param_5,param_6,
                   param_7,param_8);
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0x150,pppplVar20,ppppbVar25,(long ****)param_5,param_6,param_7,
                             param_8);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_00000150;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0x150,pppplVar20,ppppbVar25,(long ****)param_5,param_6,
                                     param_7,param_8), ppplVar16 != (long ***)0x0))
      goto LAB_7102842bec;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_7102842bec:
  pcVar21 = "s02_02sekizou_a01";
  pcVar26 = "s02_02sekizou_a02";
  pppplVar20 = (long ****)0x0;
  ppppbVar25 = param_1;
  pauVar43 = pauVar28;
  pcVar23 = pcVar21;
  FUN_7102846ac0(ppplVar16,2,0,param_1,(long ****)pauVar28,(byte *)"s02_02sekizou_a01",
                 (byte *)"s02_02sekizou_a02",(byte *)"s02_02sekizou_a01",(byte *)"02_Item",
                 (byte *)"IPP0202",ppppbVar1);
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  lVar15 = (**(code **)(*ppplVar16[7][0x26] + 0x1a0))();
  if (*(long *)(lVar15 + 0x30) != 0) {
    lVar29 = *(long *)(lVar15 + 0x38);
    lVar15 = lVar29 + *(long *)(lVar15 + 0x30) * 0x2d0;
    do {
      iVar13 = *(int *)(lVar29 + 0xc);
      if (0 < iVar13) {
        iVar8 = *(int *)(lVar29 + 8);
        lVar30 = (long)iVar8;
        do {
          lVar35 = *(long *)(lVar29 + lVar30 * 8 + 0x30);
          if (lVar35 != 0) {
            *(code **)(lVar35 + 0x30) = FUN_710313f320;
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < iVar13 + iVar8);
      }
      lVar29 = lVar29 + 0x2d0;
    } while (lVar29 != lVar15);
  }
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)pauVar43,pcVar21,
                   pcVar26,pcVar23);
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0x150,pppplVar20,ppppbVar25,(long ****)pauVar43,pcVar21,pcVar26,
                             pcVar23);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_00000150;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0x150,pppplVar20,ppppbVar25,(long ****)pauVar43,pcVar21,
                                     pcVar26,pcVar23), ppplVar16 != (long ***)0x0))
      goto LAB_7102842d9c;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_7102842d9c:
  pcVar21 = "s02_02sekizou_b01";
  pcVar26 = "s02_02sekizou_b02";
  pppplVar20 = (long ****)0x0;
  ppppbVar25 = param_1;
  ppplVar27 = (long ***)pcVar21;
  FUN_7102846ac0(ppplVar16,2,0,param_1,(long ****)pauVar28,(byte *)"s02_02sekizou_b01",
                 (byte *)"s02_02sekizou_b02",(byte *)"s02_02sekizou_b01",(byte *)"02_Item",
                 (byte *)"IPP0203",ppppbVar1);
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  lVar15 = (**(code **)(*ppplVar16[7][0x26] + 0x1a0))();
  if (*(long *)(lVar15 + 0x30) != 0) {
    lVar29 = *(long *)(lVar15 + 0x38);
    lVar15 = lVar29 + *(long *)(lVar15 + 0x30) * 0x2d0;
    do {
      iVar13 = *(int *)(lVar29 + 0xc);
      if (0 < iVar13) {
        iVar8 = *(int *)(lVar29 + 8);
        lVar30 = (long)iVar8;
        do {
          lVar35 = *(long *)(lVar29 + lVar30 * 8 + 0x30);
          if (lVar35 != 0) {
            *(code **)(lVar35 + 0x30) = FUN_710313f320;
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < iVar13 + iVar8);
      }
      lVar29 = lVar29 + 0x2d0;
    } while (lVar29 != lVar15);
  }
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                   pcVar26,ppplVar27);
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,pcVar26,
                             ppplVar27);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_000000b8;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                                     pcVar26,ppplVar27), ppplVar16 != (long ***)0x0))
      goto LAB_7102842f44;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_7102842f44:
  pppplVar20 = &local_140;
  local_140 = (long ***)0x0;
  puStack_138 = &DAT_100000001;
  local_130 = 0x1000000001;
  FUN_710313e6a0(ppplVar16,(long)param_1,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,pcVar26,
                 ppplVar27);
  *(undefined1 *)((long)ppplVar16 + 0x5c) = 1;
  *(undefined8 *)((long)ppplVar16 + 100) = 2;
  *(undefined4 *)((long)ppplVar16 + 0x74) = 0x3f800000;
  *(undefined4 *)((long)ppplVar16 + 0x44) = 0;
  *(undefined2 *)(ppplVar16 + 9) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x54) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x4c) = 0;
  *(undefined1 *)(ppplVar16 + 0xc) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x6c) = 0;
  *ppplVar16 = (long **)&PTR_FUN_71050ea0d8;
  ppplVar16[0x10] = (long **)0x0;
  ppplVar16[0xf] = (long **)0x0;
  *(undefined4 *)(ppplVar16 + 0x16) = 0;
  ppplVar16[0x13] = (long **)(ppplVar16 + 0xf);
  ppplVar16[0x11] = (long **)0x0;
  ppplVar16[0x12] = (long **)0x0;
  ppplVar16[0x14] = (long **)0x0;
  ppplVar16[0x15] = (long **)0x0;
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0xd7bba6ed1)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x118] = pbVar40[0x118] | 1;
        ppplVar16[0x13][(long)ppplVar16[0x14]] = (long *)pbVar40;
        ppplVar16[0x14] = (long **)((long)ppplVar16[0x14] + 1);
      }
      break;
    }
  }
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                   pcVar26,ppplVar27);
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,pcVar26,
                             ppplVar27);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_000000b8;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                                     pcVar26,ppplVar27), ppplVar16 != (long ***)0x0))
      goto LAB_7102843114;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_7102843114:
  pppplVar20 = &local_140;
  local_130 = 0x1000000001;
  local_140 = (long ***)0x0;
  puStack_138 = &DAT_100000001;
  FUN_710313e6a0(ppplVar16,(long)param_1,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,pcVar26,
                 ppplVar27);
  *(undefined4 *)((long)ppplVar16 + 0x74) = 0x3f800000;
  *(undefined1 *)((long)ppplVar16 + 0x5c) = 1;
  *(undefined4 *)((long)ppplVar16 + 0x44) = 0;
  *(undefined2 *)(ppplVar16 + 9) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x54) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x4c) = 0;
  *(undefined1 *)(ppplVar16 + 0xc) = 0;
  *(undefined8 *)((long)ppplVar16 + 100) = 3;
  *(undefined8 *)((long)ppplVar16 + 0x6c) = 0;
  *ppplVar16 = (long **)&PTR_FUN_71050ea0d8;
  ppplVar16[0x10] = (long **)0x0;
  ppplVar16[0xf] = (long **)0x0;
  ppplVar16[0x13] = (long **)(ppplVar16 + 0xf);
  *(undefined4 *)(ppplVar16 + 0x16) = 3;
  ppplVar16[0x11] = (long **)0x0;
  ppplVar16[0x12] = (long **)0x0;
  ppplVar16[0x14] = (long **)0x0;
  ppplVar16[0x15] = (long **)0x0;
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0xe3ce728c1)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x118] = pbVar40[0x118] | 1;
        ppplVar16[0x13][(long)ppplVar16[0x14]] = (long *)pbVar40;
        ppplVar16[0x14] = (long **)((long)ppplVar16[0x14] + 1);
      }
      break;
    }
  }
  pbVar40 = *param_1[0x60][3];
  do {
    if (pbVar40 == param_1[0x60][3][1]) goto LAB_7102843238;
    lVar15 = *(long *)pbVar40;
    pbVar40 = pbVar40 + 8;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xe3ce728c1);
  pplVar41 = *(long ***)(lVar15 + 0x110);
  if ((pplVar41 != (long **)0x0) && (*pplVar41 != pplVar41[1])) {
    ppplVar16[0x15] = pplVar41;
  }
LAB_7102843238:
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                   pcVar26,ppplVar27);
  }
  pcVar23 = "s02_04kassya_asiba";
  FUN_710262c340((long *)&local_140,(long *)param_1[0x60][4],"s02_04kassya_asiba");
  ppplVar16 = local_140;
  uVar12 = 0x811c9dc5;
  local_190 = 0;
  local_198 = local_140;
  for (uVar36 = 0; *(byte *)((long)&local_130 + uVar36) != 0; uVar36 = uVar36 + 2) {
    local_188[uVar36] = *(byte *)((long)&local_130 + uVar36);
    if (0x3e < (int)uVar36 + 1U) {
      uVar36 = (ulong)((int)uVar36 + 1);
      break;
    }
    bVar7 = *(byte *)((long)&local_130 + uVar36 + 1);
    if (bVar7 == 0) {
      uVar36 = uVar36 + 1;
      break;
    }
    local_188[uVar36 + 1] = bVar7;
  }
  local_188[uVar36 & 0xffffffff] = 0;
  uVar44 = (uint)local_188[0];
  local_18c = (int)uVar36;
  uVar32 = (uint)local_188[0];
  local_190 = uVar12;
  if (uVar32 != 0) {
    pbVar40 = local_188;
    do {
      pbVar40 = pbVar40 + 1;
      local_190 = local_190 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar40;
    } while (uVar32 != 0);
  }
  local_1f0 = ppplStack_e8;
  local_148 = local_f0;
  local_1e8 = 0;
  for (uVar36 = 0; local_d8[uVar36] != 0; uVar36 = uVar36 + 2) {
    local_1e0[uVar36] = local_d8[uVar36];
    if (0x3e < (int)uVar36 + 1U) {
      uVar36 = (ulong)((int)uVar36 + 1);
      break;
    }
    if (local_d8[uVar36 + 1] == 0) {
      uVar36 = uVar36 + 1;
      break;
    }
    local_1e0[uVar36 + 1] = local_d8[uVar36 + 1];
  }
  local_1e0[uVar36 & 0xffffffff] = 0;
  uVar32 = (uint)local_1e0[0];
  local_1e4 = (int)uVar36;
  if (local_1e0[0] != 0) {
    pbVar40 = local_1e0;
    do {
      pbVar40 = pbVar40 + 1;
      uVar12 = uVar12 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar40;
    } while (uVar32 != 0);
  }
  local_1a0 = local_98;
  local_1e8 = uVar12;
  if (ppplVar16 != ppplStack_e8) {
    if (bVar9) {
      uVar36 = 0;
      do {
        if (1 < uVar36) break;
        pauVar43 = (undefined1 (*) [16])*ppplVar16;
        pppbVar14 = (byte ***)
                    FUN_710392e290(0x10,0x110,(long ****)pcVar23,ppppbVar25,(long ****)pauVar28,
                                   pcVar21,pcVar26,ppplVar27);
        if (pppbVar14 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_74 = 0;
            local_90[0] = (byte ***)&DAT_00000110;
            ppppbVar24 = local_90;
            uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
            if (((uVar37 & 1) != 0) &&
               (pppbVar14 = (byte ***)
                            FUN_710392e290(0x10,0x110,(long ****)ppppbVar24,ppppbVar25,
                                           (long ****)pauVar28,pcVar21,pcVar26,ppplVar27),
               pppbVar14 != (byte ***)0x0)) goto LAB_71028434ec;
          }
          pppbVar14 = (byte ***)0x0;
        }
LAB_71028434ec:
        pcVar26 = (char *)(ulong)(uVar36 != 0);
        pcVar23 = (char *)0x0;
        ppppbVar25 = param_1;
        pcVar21 = (char *)ppppbVar1;
        FUN_7102848440((ulong)(uint)((float)(int)uVar36 * 771.0 + 0.0),pppbVar14,4,0,param_1,
                       (long ****)pauVar43,ppppbVar1,(ulong)pcVar26,ppplVar27);
        FUN_710313ef20((long *)pppbVar14);
        local_90[0] = pppbVar14;
        if (param_1[0x102] < param_1[0x103]) {
          *param_1[0x102] = (byte **)pppbVar14;
          param_1[0x102] = param_1[0x102] + 1;
          pauVar28 = pauVar43;
        }
        else {
          FUN_710284a980((ulong *)ppppbVar22,local_90,(long ****)pcVar23,ppppbVar25,
                         (long ****)pauVar43,pcVar21,pcVar26,ppplVar27);
          pauVar28 = pauVar43;
        }
        param_1[uVar36 + 0x107] = pppbVar14;
        local_198 = ppplVar16;
        do {
          local_198 = local_198 + 1;
          ppplVar16 = local_f0;
          if (local_198 == local_f0) break;
          if (uVar44 == 0) {
            uVar31 = 0;
            uVar37 = 0;
          }
          else {
            uVar37 = 0;
            uVar12 = 0xffffffff;
            uVar32 = uVar44;
            pbVar40 = local_188;
            do {
              pbVar40 = pbVar40 + 1;
              uVar33 = uVar32 + 0x20;
              if (0x19 < uVar32 - 0x41) {
                uVar33 = uVar32;
              }
              uVar12 = (&DAT_7104754084)[(uVar33 ^ uVar12) & 0xff] ^ uVar12 >> 8;
              uVar32 = (uint)*pbVar40;
              uVar37 = uVar37 + 0x100000000;
            } while (uVar32 != 0);
            uVar31 = (ulong)~uVar12;
            uVar37 = uVar37 & 0xff00000000;
          }
          ppplVar16 = local_198;
        } while (((ulong)(*local_198)[0x14] & 0xffffffffff) != (uVar37 | uVar31));
        uVar36 = uVar36 + 1;
      } while (ppplVar16 != ppplStack_e8);
    }
    else {
      uVar36 = 0;
      do {
        if (1 < uVar36) break;
        pauVar43 = (undefined1 (*) [16])*ppplVar16;
        pppbVar14 = (byte ***)
                    FUN_710392e290(0x10,0x110,(long ****)pcVar23,ppppbVar25,(long ****)pauVar28,
                                   pcVar21,pcVar26,ppplVar27);
        if (pppbVar14 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_74 = 0;
            local_90[0] = (byte ***)&DAT_00000110;
            ppppbVar24 = local_90;
            uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
            if (((uVar37 & 1) != 0) &&
               (pppbVar14 = (byte ***)
                            FUN_710392e290(0x10,0x110,(long ****)ppppbVar24,ppppbVar25,
                                           (long ****)pauVar28,pcVar21,pcVar26,ppplVar27),
               pppbVar14 != (byte ***)0x0)) goto LAB_7102843694;
          }
          pppbVar14 = (byte ***)0x0;
        }
LAB_7102843694:
        pcVar26 = (char *)(ulong)(uVar36 != 0);
        pcVar23 = (char *)0x0;
        ppppbVar25 = param_1;
        pcVar21 = (char *)ppppbVar1;
        FUN_7102848440((ulong)(uint)((float)(int)uVar36 * 771.0 + 0.0),pppbVar14,4,0,param_1,
                       (long ****)pauVar43,ppppbVar1,(ulong)pcVar26,ppplVar27);
        pauVar28 = pauVar43;
        if (*(char *)(pppbVar14 + 8) != '\0') {
          ppbVar17 = pppbVar14[6];
          if (((ppbVar17 != (byte **)0x0) && (*(byte *)(ppbVar17 + 2) != 0)) &&
             (*(byte *)(ppbVar17 + 2) = 0, *(byte *)(ppbVar17 + 10) != 0)) {
            plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*ppbVar17 + 8));
            (**(code **)(*plVar18 + 0x48))(plVar18,0);
            *(byte *)(ppbVar17 + 10) = 0;
          }
          (*(code *)(*pppbVar14)[6])(pppbVar14);
          pauVar28 = pauVar43;
        }
        *(undefined1 *)(pppbVar14 + 8) = 0;
        local_90[0] = pppbVar14;
        if (param_1[0x102] < param_1[0x103]) {
          *param_1[0x102] = (byte **)pppbVar14;
          param_1[0x102] = param_1[0x102] + 1;
        }
        else {
          FUN_710284a980((ulong *)ppppbVar22,local_90,(long ****)pcVar23,ppppbVar25,
                         (long ****)pauVar28,pcVar21,pcVar26,ppplVar27);
        }
        param_1[uVar36 + 0x107] = pppbVar14;
        local_198 = ppplVar16;
        do {
          local_198 = local_198 + 1;
          ppplVar16 = local_f0;
          if (local_198 == local_f0) break;
          if (uVar44 == 0) {
            uVar31 = 0;
            uVar37 = 0;
          }
          else {
            uVar37 = 0;
            uVar12 = 0xffffffff;
            uVar32 = uVar44;
            pbVar40 = local_188;
            do {
              pbVar40 = pbVar40 + 1;
              uVar33 = uVar32 + 0x20;
              if (0x19 < uVar32 - 0x41) {
                uVar33 = uVar32;
              }
              uVar12 = (&DAT_7104754084)[(uVar33 ^ uVar12) & 0xff] ^ uVar12 >> 8;
              uVar32 = (uint)*pbVar40;
              uVar37 = uVar37 + 0x100000000;
            } while (*pbVar40 != 0);
            uVar31 = (ulong)~uVar12;
            uVar37 = uVar37 & 0xff00000000;
          }
          ppplVar16 = local_198;
        } while (((ulong)(*local_198)[0x14] & 0xffffffffff) != (uVar37 | uVar31));
        uVar36 = uVar36 + 1;
      } while (ppplVar16 != ppplStack_e8);
    }
  }
  ppplVar16 = (long ***)
              FUN_710392e290(0x10,0xb8,(long ****)pcVar23,ppppbVar25,(long ****)pauVar28,pcVar21,
                             pcVar26,ppplVar27);
  if (ppplVar16 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_198 = (long ***)((ulong)local_198 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_000000b8;
      pppplVar20 = &local_140;
      uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_198);
      if (((uVar36 & 1) != 0) &&
         (ppplVar16 = (long ***)
                      FUN_710392e290(0x10,0xb8,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                                     pcVar26,ppplVar27), ppplVar16 != (long ***)0x0))
      goto LAB_7102843844;
    }
    ppplVar16 = (long ***)0x0;
  }
LAB_7102843844:
  local_140 = (long ***)0x0;
  puStack_138 = &DAT_100000001;
  pppplVar20 = &local_140;
  local_130 = 0x1000000001;
  FUN_710313e6a0(ppplVar16,(long)param_1,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,pcVar26,
                 ppplVar27);
  *(undefined8 *)((long)ppplVar16 + 100) = 4;
  *(undefined4 *)((long)ppplVar16 + 0x74) = 0x3f800000;
  *(undefined1 *)((long)ppplVar16 + 0x5c) = 1;
  *(undefined8 *)((long)ppplVar16 + 0x54) = 0;
  *ppplVar16 = (long **)&PTR_FUN_71050ea0d8;
  *(undefined4 *)((long)ppplVar16 + 0x44) = 0;
  *(undefined2 *)(ppplVar16 + 9) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x4c) = 0;
  *(undefined1 *)(ppplVar16 + 0xc) = 0;
  *(undefined8 *)((long)ppplVar16 + 0x6c) = 0;
  ppplVar16[0x10] = (long **)0x0;
  ppplVar16[0xf] = (long **)0x0;
  ppplVar16[0x13] = (long **)(ppplVar16 + 0xf);
  *(undefined4 *)(ppplVar16 + 0x16) = 1;
  ppplVar16[0x11] = (long **)0x0;
  ppplVar16[0x12] = (long **)0x0;
  ppplVar16[0x14] = (long **)0x0;
  ppplVar16[0x15] = (long **)0x0;
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0x11860b241d)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x118] = pbVar40[0x118] | 1;
        ppplVar16[0x13][(long)ppplVar16[0x14]] = (long *)pbVar40;
        pplVar41 = ppplVar16[0x14];
        ppplVar16[0x14] = (long **)((long)pplVar41 + 1);
        if ((long **)((long)pplVar41 + 1) == (long **)&DAT_00000004) goto LAB_71028439ac;
      }
      break;
    }
  }
  for (ppbVar17 = param_1[0x62][0x1a]; ppbVar17 != param_1[0x62][0x1b]; ppbVar17 = ppbVar17 + 2) {
    if ((*(uint *)(ppbVar17 + 1) < 2) &&
       (pbVar40 = *ppbVar17, *(long *)(pbVar40 + 0x68) == 0xc35733b87)) {
      if (pbVar40 != (byte *)0x0) {
        pbVar40[0x118] = pbVar40[0x118] | 1;
        ppplVar16[0x13][(long)ppplVar16[0x14]] = (long *)pbVar40;
        ppplVar16[0x14] = (long **)((long)ppplVar16[0x14] + 1);
      }
      break;
    }
  }
LAB_71028439ac:
  pbVar40 = *param_1[0x60][3];
  do {
    if (pbVar40 == param_1[0x60][3][1]) goto LAB_71028439f8;
    lVar15 = *(long *)pbVar40;
    pbVar40 = pbVar40 + 8;
  } while ((*(ulong *)(lVar15 + 0xa0) & 0xffffffffff) != 0xc35733b87);
  pplVar41 = *(long ***)(lVar15 + 0x110);
  if ((pplVar41 != (long **)0x0) && (*pplVar41 != pplVar41[1])) {
    ppplVar16[0x15] = pplVar41;
  }
LAB_71028439f8:
  if (bVar9) {
    FUN_710313ef20((long *)ppplVar16);
  }
  else {
    if (*(char *)(ppplVar16 + 8) != '\0') {
      pplVar41 = ppplVar16[6];
      if (((pplVar41 != (long **)0x0) && (*(byte *)(pplVar41 + 2) != 0)) &&
         (*(byte *)(pplVar41 + 2) = 0, *(byte *)(pplVar41 + 10) != 0)) {
        plVar18 = (long *)FUN_71003ac560((ulong)*(uint *)(*pplVar41 + 1));
        (**(code **)(*plVar18 + 0x48))(plVar18,0);
        *(byte *)(pplVar41 + 10) = 0;
      }
      (*(code *)(*ppplVar16)[6])(ppplVar16);
    }
    *(undefined1 *)(ppplVar16 + 8) = 0;
  }
  local_140 = ppplVar16;
  if (param_1[0x102] < param_1[0x103]) {
    *param_1[0x102] = (byte **)ppplVar16;
    param_1[0x102] = param_1[0x102] + 1;
  }
  else {
    FUN_710284a980((ulong *)ppppbVar22,&local_140,pppplVar20,ppppbVar25,(long ****)pauVar28,pcVar21,
                   pcVar26,ppplVar27);
  }
  pppbVar14 = param_1[0x60];
  FUN_710262bb40((long)pppbVar14,0x1f);
  FUN_710262beb0((long)pppbVar14,0xffffffe0);
  pppbVar39 = param_1[0x102];
  for (pppbVar14 = param_1[0x101]; pppbVar14 != pppbVar39; pppbVar14 = pppbVar14 + 1) {
    ppbVar17 = *pppbVar14;
    *(undefined4 *)((long)ppbVar17 + 0x6c) = 3;
    (**(code **)(*ppbVar17 + 0xa0))();
    ppbVar17 = *pppbVar14;
    *(undefined4 *)((long)ppbVar17 + 0x6c) = 0;
    (**(code **)(*ppbVar17 + 0xa8))();
  }
  if (*(char *)(param_1 + 3) != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51ba == '\0') goto LAB_7102843d08;
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51b9 != '\0') goto LAB_7102843d08;
  }
  pppbVar14 = param_1[0xfe];
  *(undefined4 *)(param_1 + 0xfb) = 0xb;
  iVar13 = *(int *)(pppbVar14 + 1);
  if (iVar13 == -1) {
    FUN_7102845d70(pppbVar14);
    iVar13 = *(int *)(pppbVar14 + 1);
  }
  *(undefined4 *)(pppbVar14 + 1) = *(undefined4 *)((long)pppbVar14 + 0xc);
  *(undefined4 *)((long)pppbVar14 + 0xc) = *(undefined4 *)(pppbVar14 + 2);
  *(undefined4 *)(pppbVar14 + 2) = *(undefined4 *)((long)pppbVar14 + 0x14);
  *(undefined4 *)((long)pppbVar14 + 0x14) = 0xffffffff;
  *(int *)((long)pppbVar14 + 0x1c) = iVar13;
  *(undefined1 *)(pppbVar14 + 3) = 1;
  pppbVar14 = param_1[0x101];
  pppbVar39 = param_1[0x102];
  iVar13 = iVar13 + 1;
  *(int *)(param_1 + 0xfd) = iVar13;
  if (pppbVar14 != pppbVar39) {
    do {
      ppbVar17 = *pppbVar14;
      if (*(int *)((long)ppbVar17 + 100) == iVar13) {
        *(undefined4 *)((long)ppbVar17 + 0x6c) = 4;
        (**(code **)(*ppbVar17 + 0xb0))();
      }
      pppbVar14 = pppbVar14 + 1;
    } while (pppbVar39 != pppbVar14);
    iVar13 = *(int *)(param_1 + 0xfd);
  }
  FUN_7102845920((long)param_1,iVar13);
  pppbVar14 = param_1[0x101];
  pppbVar39 = param_1[0x102];
  iVar13 = *(int *)(param_1 + 0xfd);
  if (pppbVar14 != pppbVar39) {
    fVar46 = *(float *)(param_1 + 0x10d);
    fVar47 = *(float *)((long)param_1 + 0x864);
    fVar48 = *(float *)((long)param_1 + 0x85c);
    fVar51 = *(float *)(param_1 + 0x10c);
    fVar52 = *(float *)(param_1 + 0x10e);
    fVar49 = *(float *)((long)param_1 + 0x86c);
    fVar50 = *(float *)((long)param_1 + 0x884);
    fVar53 = *(float *)(param_1 + 0x110);
    fVar54 = *(float *)(param_1 + 0x10f);
    fVar56 = *(float *)((long)param_1 + 0x87c);
    fVar57 = *(float *)((long)param_1 + 0x88c);
    fVar55 = *(float *)(param_1 + 0x111);
    do {
      ppbVar17 = *pppbVar14;
      if ((*(int *)((long)ppbVar17 + 100) == iVar13) && (*(int *)(ppbVar17 + 0xd) == 0)) {
        *(float *)(ppbVar17 + 0xe) =
             fVar49 + (fVar52 - fVar49) * (fVar48 + (fVar46 / fVar47) * (fVar51 - fVar48));
        *(float *)((long)*pppbVar14 + 0x74) =
             fVar55 + (fVar57 - fVar55) * (fVar54 + (fVar50 / fVar53) * (fVar56 - fVar54));
      }
      pppbVar14 = pppbVar14 + 1;
    } while (pppbVar39 != pppbVar14);
    iVar13 = *(int *)(param_1 + 0xfd);
  }
  fVar46 = sinf((*(float *)(param_1 + 0x114) / *(float *)((long)param_1 + 0x89c)) * 1.5707964);
  pppbVar14 = param_1[0x101];
  pppbVar39 = param_1[0x102];
  if (pppbVar14 != pppbVar39) {
    fVar47 = *(float *)((long)param_1 + 0x894);
    fVar49 = *(float *)(param_1 + 0x113);
    fVar50 = *(float *)(param_1 + 0x115);
    fVar48 = *(float *)((long)param_1 + 0x8a4);
    do {
      ppbVar17 = *pppbVar14;
      if ((*(int *)((long)ppbVar17 + 100) == iVar13) && (*(int *)(ppbVar17 + 0xd) == 1)) {
        *(float *)(ppbVar17 + 0xe) =
             fVar48 + (fVar50 - fVar48) * (fVar47 + fVar46 * (fVar49 - fVar47));
        *(undefined4 *)((long)*pppbVar14 + 0x74) = 0x3f800000;
      }
      pppbVar14 = pppbVar14 + 1;
    } while (pppbVar39 != pppbVar14);
  }
LAB_7102843d08:
  if (*(char *)(param_1 + 0x19) == '\0') {
    return;
  }
  ppbVar17 = param_1[0x62][0x23];
  if (ppbVar17 != (byte **)0x0) {
    if ((*ppbVar17)[0x80] != 0) {
      plVar18 = *(long **)(*ppbVar17 + 0x30);
      (**(code **)(*plVar18 + 0x180))(plVar18,0xc748414bf,0);
      if ((*ppbVar17)[0x80] != 0) {
        plVar18 = *(long **)(*ppbVar17 + 0x30);
        (**(code **)(*plVar18 + 0x180))(plVar18,0xc5fa9477c,0);
        if ((*ppbVar17)[0x80] != 0) {
          plVar18 = *(long **)(*ppbVar17 + 0x30);
          (**(code **)(*plVar18 + 0x180))(plVar18,0xc46b2763d,0);
          if ((*ppbVar17)[0x80] != 0) {
            plVar18 = *(long **)(*ppbVar17 + 0x30);
            (**(code **)(*plVar18 + 0x180))(plVar18,0xc09f3e0fa,0);
          }
        }
      }
    }
    if (*(char *)(param_1 + 3) != '\0') {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51ba == '\0') {
        return;
      }
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51b9 != '\0') {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xfd) - 1U < 4) && ((*ppbVar17)[0x80] != 0)) {
      plVar18 = *(long **)(*ppbVar17 + 0x30);
      pbVar40 = *(byte **)(&DAT_71050ea0a8 + (ulong)(*(int *)(param_1 + 0xfd) - 1U) * 8);
      uVar12 = (uint)*pbVar40;
      if (*pbVar40 == 0) {
        uVar37 = 0;
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        uVar32 = 0xffffffff;
        do {
          pbVar40 = pbVar40 + 1;
          uVar44 = uVar12 + 0x20;
          if (0x19 < uVar12 - 0x41) {
            uVar44 = uVar12;
          }
          uVar32 = (&DAT_7104754084)[(uVar44 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar12 = (uint)*pbVar40;
          uVar36 = uVar36 + 0x100000000;
        } while (uVar12 != 0);
        uVar37 = (ulong)~uVar32;
        uVar36 = uVar36 & 0xff00000000;
      }
      (**(code **)(*plVar18 + 0x180))(plVar18,uVar36 | uVar37,1);
    }
    return;
  }
  return;
}

