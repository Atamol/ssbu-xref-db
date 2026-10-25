// addr:      7102ef6140
// offset:    0x2ef6140
// name:      FUN_7102ef6140
// mangled:   
// signature: undefined __cdecl FUN_7102ef6140(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102ef6140(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar3;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint auStack_68 [2];
  byte local_60;
  byte abStack_5f [63];
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71003a4ca0(auStack_68,"resultstage_set_win%d",1,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar6 = (uint)local_60;
  if (local_60 != 0) {
    plVar4 = *(long **)(param_1[0x62] + 0xd0);
    plVar2 = *(long **)(param_1[0x62] + 0xd8);
    if (plVar4 != plVar2) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar8 = abStack_5f;
      do {
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
        uVar6 = (uint)*pbVar8;
        uVar5 = uVar5 + 0x100000000;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      do {
        if ((*(uint *)(plVar4 + 1) < 2) &&
           (lVar9 = *plVar4, (uVar5 & 0xff00000000 | (ulong)~uVar7) == *(ulong *)(lVar9 + 0x68))) {
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar9 + 0x108),extraout_x1,(long ****)param_3,(byte ****)param_4
                           ,(long ****)param_5,param_6,param_7,param_8);
          }
          goto LAB_7102ef6208;
        }
        plVar4 = plVar4 + 2;
      } while (plVar2 != plVar4);
    }
  }
  lVar9 = 0;
LAB_7102ef6208:
  param_1[0xe7] = lVar9;
  FUN_71003a4ca0(auStack_68,"resultstage_set_win%d",2,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar6 = (uint)local_60;
  if (local_60 != 0) {
    plVar4 = *(long **)(param_1[0x62] + 0xd0);
    plVar2 = *(long **)(param_1[0x62] + 0xd8);
    if (plVar4 != plVar2) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar8 = abStack_5f;
      do {
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
        uVar6 = (uint)*pbVar8;
        uVar5 = uVar5 + 0x100000000;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      do {
        if ((*(uint *)(plVar4 + 1) < 2) &&
           (lVar9 = *plVar4, (uVar5 & 0xff00000000 | (ulong)~uVar7) == *(ulong *)(lVar9 + 0x68))) {
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar9 + 0x108),extraout_x1_00,(long ****)param_3,
                           (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          }
          goto LAB_7102ef62bc;
        }
        plVar4 = plVar4 + 2;
      } while (plVar2 != plVar4);
    }
  }
  lVar9 = 0;
LAB_7102ef62bc:
  param_1[0xe8] = lVar9;
  FUN_71003a4ca0(auStack_68,"resultstage_set_win%d",3,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar6 = (uint)local_60;
  uVar3 = extraout_x1_01;
  if (local_60 != 0) {
    plVar4 = *(long **)(param_1[0x62] + 0xd0);
    plVar2 = *(long **)(param_1[0x62] + 0xd8);
    if (plVar4 != plVar2) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar8 = abStack_5f;
      do {
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
          uVar1 = uVar6;
        }
        uVar7 = (&DAT_7104754084)[(uVar1 ^ uVar7) & 0xff] ^ uVar7 >> 8;
        uVar6 = (uint)*pbVar8;
        uVar5 = uVar5 + 0x100000000;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
      do {
        if ((*(uint *)(plVar4 + 1) < 2) &&
           (lVar9 = *plVar4, (uVar5 & 0xff00000000 | (ulong)~uVar7) == *(ulong *)(lVar9 + 0x68))) {
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar9 + 0x108),extraout_x1_01,(long ****)param_3,
                           (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
            uVar3 = extraout_x1_05;
          }
          goto LAB_7102ef6370;
        }
        plVar4 = plVar4 + 2;
      } while (plVar2 != plVar4);
    }
  }
  lVar9 = 0;
LAB_7102ef6370:
  param_1[0xe9] = lVar9;
  if (DAT_71052c35c8 == 0) {
    uVar6 = 0;
    lVar9 = param_1[0xe7];
  }
  else {
    uVar6 = **(uint **)(DAT_71052c35c8 + 8);
    lVar9 = param_1[0xe7];
  }
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar9 + 0x108),uVar3,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar3 = extraout_x1_02;
  }
  lVar9 = param_1[0xe8];
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar9 + 0x108),uVar3,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar3 = extraout_x1_03;
  }
  lVar9 = param_1[0xe9];
  if (lVar9 != 0) {
    *(undefined1 *)(lVar9 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar9 + 0x108),uVar3,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar3 = extraout_x1_04;
  }
  if (uVar6 < 3) {
    lVar9 = param_1[(long)(int)uVar6 + 0xe7];
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar9 + 0x108),uVar3,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

