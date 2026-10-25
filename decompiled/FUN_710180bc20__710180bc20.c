// addr:      710180bc20
// offset:    0x180bc20
// name:      FUN_710180bc20
// mangled:   
// signature: undefined __cdecl FUN_710180bc20(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710180bc20(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar7;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_02, iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    iVar3 = *(int *)(param_1 + 0x14c);
    param_2 = extraout_x1_03;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14c);
  }
  if (iVar3 == 0) {
    plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x178) + 0x80) + 0x40);
    lVar14 = *(long *)*plVar13;
    *(undefined4 *)((long *)*plVar13 + 2) = 0;
    plVar10 = *(long **)(lVar14 + 0x10);
    *plVar10 = lVar14;
    *(undefined4 *)(plVar10 + 1) = 0x48;
    lVar6 = *(long *)(lVar14 + 0x10);
    *(long *)(lVar14 + 0x10) = lVar6 + 0x10;
    lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
    *(long *)(lVar14 + 0x10) = lVar6;
    if (lVar9 == lVar14) {
      lVar6 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
      if (*(uint *)(lVar6 + 0xc) < 2) {
        plVar10 = (long *)(*(long *)(lVar6 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2
                          ) * 0x20);
        do {
          if (((int)plVar10[3] == 0x13) && (plVar12 = plVar10, plVar10[2] == 2)) break;
          piVar1 = (int *)((long)plVar10 + 0x1c);
          plVar10 = plVar10 + (long)*piVar1 * 4;
          plVar12 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar12 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
      }
      pcVar8 = "set_camera_type";
      FUN_71038f4d40(lVar14,plVar12,"set_camera_type");
      param_3 = (undefined **)pcVar8;
    }
    else {
      FUN_71038f4b20(lVar14,"set_camera_type");
      FUN_71038f4fc0(lVar14,-2);
    }
    puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
    if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar14 + 0x10) = puVar11;
    }
    else {
      lVar6 = *(long *)*plVar13;
      puVar11 = *(undefined8 **)(lVar6 + 0x10);
      *puVar11 = 2;
      *(undefined4 *)(puVar11 + 1) = 0x13;
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 0x10;
      *(int *)(*plVar13 + 0x10) = *(int *)(*plVar13 + 0x10) + 1;
      FUN_7103377130(plVar13,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_71019e3b90(*(long *)(param_1 + 0x1a0),DAT_7105307d18,DAT_7105307cb8._1_1_,param_4,param_5,
                   param_6,param_7,param_8);
    fVar16 = (float)FUN_71033112b0(0x42c80000,*(long *)(DAT_710532f8c0 + 8),0x1fd116ef79);
    FUN_71023eea60(fVar16 * 0.01,DAT_7105329f38,2,0);
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1b0) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 0x80) + 0xfc);
  lVar6 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80);
  if (*(int *)(lVar6 + 0xe0) != 0) {
    if (*(char *)(lVar6 + 0x100) == '\0') {
      return;
    }
    *(undefined1 *)(lVar6 + 0x100) = 0;
    iVar3 = FUN_71019e40b0(*(long *)(*(long *)(param_1 + 0x1a0) + 0x80),param_2,(char *)param_3,
                           param_4,param_5,param_6,param_7,param_8);
    lVar6 = DAT_710532f8b0;
    DAT_7105307cb8._1_1_ = (byte)iVar3;
    if ((DAT_710532f7a0 != 0) &&
       (lVar9 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20), lVar9 != 0)) {
      cVar2 = *(char *)(lVar9 + 0x591e);
      if (cVar2 != '\x02') {
        if (cVar2 == '\x01') {
          if (7 < *(uint *)(lVar9 + 0xe0)) {
LAB_710180c31c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          FUN_71017e2fe0(*(long *)(DAT_7105324680 + (long)(int)*(uint *)(lVar9 + 0xe0) * 8 + 0xe8),
                         (ulong)(*(int *)(lVar9 + 0x18) * 0x2a + 4),(long *********)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        *(char *)(lVar9 + 0x591e) = '\x02';
      }
    }
    FUN_71033067a0(*(long *)(lVar6 + 8),0,(long *********)&DAT_7105307c88,param_4,param_5,param_6,
                   param_7,param_8);
    return;
  }
  uVar4 = FUN_71019e40b0(lVar6,param_2,(char *)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar6 = DAT_710532f8b0;
  if ((uVar4 & 0xff) != (uint)DAT_7105307cb8._1_1_) {
    DAT_7105307cb8._1_1_ = (byte)uVar4;
    if ((DAT_710532f7a0 != 0) &&
       (lVar9 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20), lVar9 != 0)) {
      cVar2 = *(char *)(lVar9 + 0x591e);
      if (cVar2 != '\x02') {
        if (cVar2 == '\x01') {
          if (7 < *(uint *)(lVar9 + 0xe0)) goto LAB_710180c31c;
          FUN_71017e2fe0(*(long *)(DAT_7105324680 + (long)(int)*(uint *)(lVar9 + 0xe0) * 8 + 0xe8),
                         (ulong)(*(int *)(lVar9 + 0x18) * 0x2a + 4),(long *********)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        *(char *)(lVar9 + 0x591e) = '\x02';
      }
    }
    param_3 = (undefined **)&DAT_7105307c88;
    FUN_71033067a0(*(long *)(lVar6 + 8),0,(long *********)&DAT_7105307c88,param_4,param_5,param_6,
                   param_7,param_8);
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80);
  plVar13 = *(long **)(lVar15 + 0x40);
  plVar10 = (long *)*plVar13;
  lVar14 = *plVar10;
  *(undefined4 *)(plVar10 + 2) = 0;
  plVar10 = *(long **)(lVar14 + 0x10);
  *plVar10 = lVar14;
  *(undefined4 *)(plVar10 + 1) = 0x48;
  lVar6 = *(long *)(lVar14 + 0x10);
  *(long *)(lVar14 + 0x10) = lVar6 + 0x10;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
  *(long *)(lVar14 + 0x10) = lVar6;
  if (lVar9 == lVar14) {
    lVar6 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
    if (*(uint *)(lVar6 + 0xc) < 2) {
      plVar10 = (long *)(*(long *)(lVar6 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar10[3] == 0x13) && (plVar12 = plVar10, plVar10[2] == 2)) break;
        piVar1 = (int *)((long)plVar10 + 0x1c);
        plVar10 = plVar10 + (long)*piVar1 * 4;
        plVar12 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar12 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
    pcVar8 = "get_voice_type";
    FUN_71038f4d40(lVar14,plVar12,"get_voice_type");
    param_3 = (undefined **)pcVar8;
  }
  else {
    FUN_71038f4b20(lVar14,"get_voice_type");
    FUN_71038f4fc0(lVar14,-2);
  }
  puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
  if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
    iVar3 = 0;
    *(undefined8 **)(lVar14 + 0x10) = puVar11;
  }
  else {
    iVar3 = FUN_7103377130(plVar13,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar13 = *(long **)(lVar15 + 0x40);
  plVar10 = (long *)*plVar13;
  lVar14 = *plVar10;
  *(undefined4 *)(plVar10 + 2) = 0;
  plVar10 = *(long **)(lVar14 + 0x10);
  *plVar10 = lVar14;
  *(undefined4 *)(plVar10 + 1) = 0x48;
  lVar6 = *(long *)(lVar14 + 0x10);
  *(long *)(lVar14 + 0x10) = lVar6 + 0x10;
  lVar9 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
  *(long *)(lVar14 + 0x10) = lVar6;
  if (lVar9 == lVar14) {
    lVar6 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
    if (*(uint *)(lVar6 + 0xc) < 2) {
      plVar10 = (long *)(*(long *)(lVar6 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar10[3] == 0x13) && (plVar12 = plVar10, plVar10[2] == 2)) break;
        piVar1 = (int *)((long)plVar10 + 0x1c);
        plVar10 = plVar10 + (long)*piVar1 * 4;
        plVar12 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar12 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
    }
    pcVar8 = "get_voice_pitch";
    FUN_71038f4d40(lVar14,plVar12,"get_voice_pitch");
    uVar7 = extraout_x1_00;
    param_3 = (undefined **)pcVar8;
  }
  else {
    FUN_71038f4b20(lVar14,"get_voice_pitch");
    FUN_71038f4fc0(lVar14,-2);
    uVar7 = extraout_x1;
  }
  puVar11 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
  if ((puVar11 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
    iVar5 = 0;
    *(undefined8 **)(lVar14 + 0x10) = puVar11;
  }
  else {
    iVar5 = FUN_7103377130(plVar13,1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar7 = extraout_x1_01;
  }
  plVar13 = (long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 600) + 0x18);
  plVar12 = (long *)*plVar13;
  plVar10 = plVar13;
  if (plVar12 != (long *)0x0) {
    do {
      if (iVar3 <= *(int *)((long)plVar12 + 0x1c)) {
        plVar10 = plVar12;
      }
      plVar12 = (long *)plVar12[*(int *)((long)plVar12 + 0x1c) < iVar3];
    } while (plVar12 != (long *)0x0);
    if ((plVar10 != plVar13) && (*(int *)((long)plVar10 + 0x1c) <= iVar3)) {
      uVar4 = *(uint *)(plVar10 + 4);
      if (iVar5 == 2) {
        uVar4 = uVar4 + 1;
      }
      else if (iVar5 == 0) {
        uVar4 = uVar4 - 1;
      }
      goto LAB_710180c054;
    }
  }
  uVar4 = 0x25;
LAB_710180c054:
  if ((uint)*(byte *)(lVar15 + 0xf8) != (uVar4 & 0xff)) {
    lVar6 = *(long *)(param_1 + 0x178);
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), uVar7 = extraout_x1_04, iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      uVar7 = extraout_x1_05;
    }
    FUN_71019cb2e0(*(long *)(lVar6 + 0x80),uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0x161) = 1;
  }
  FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  if (0 < *(int *)(param_1 + 0x144)) {
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
  }
  return;
}

