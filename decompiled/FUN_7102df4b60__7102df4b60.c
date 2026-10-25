// addr:      7102df4b60
// offset:    0x2df4b60
// name:      FUN_7102df4b60
// mangled:   
// signature: undefined __cdecl FUN_7102df4b60(undefined8 * param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x007102df4f48) */

void FUN_7102df4b60(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long extraout_x1_06;
  undefined8 uVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *param_1 = param_3;
  param_1[1] = param_4;
  ppppbVar9 = (byte ****)0x1;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[10] = &DAT_3f8000003f800000;
  pppplVar8 = *(long *****)(*(long *)(param_2 + 0x308) + 8);
  FUN_710315a0a0(&local_48,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                 pppplVar8,(byte ****)0x1,param_5,param_6,param_7,param_8);
  lVar10 = local_48;
  local_48 = 0;
  puVar15 = (undefined8 *)param_1[0xd];
  param_1[0xd] = lVar10;
  if (puVar15 == (undefined8 *)0x0) {
    cVar1 = *(char *)(lVar10 + 0x10);
    uVar7 = extraout_x1;
  }
  else {
    FUN_71025e8370(puVar15);
    FUN_710392eb40((ulong)puVar15);
    lVar10 = param_1[0xd];
    cVar1 = *(char *)(lVar10 + 0x10);
    uVar7 = extraout_x1_00;
  }
  local_48 = 0;
  if (cVar1 == '\0') {
    local_48 = 0;
    lVar16 = *(long *)(lVar10 + 8);
    *(undefined1 *)(lVar10 + 0x10) = 1;
    if (*(char *)(lVar10 + 0x11) == '\0') {
      if (*(char *)(lVar16 + 0x1c) != '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar16);
        *(undefined1 *)(lVar16 + 0x1c) = 0;
        uVar7 = extraout_x1_02;
      }
    }
    else if (*(char *)(lVar16 + 0x1c) == '\0') {
      (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,lVar16);
      *(undefined1 *)(lVar16 + 0x1c) = 1;
      uVar7 = extraout_x1_01;
    }
  }
  *(undefined4 *)(*(long *)(param_1[0xd] + 8) + 0x10) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uStack_58 = 0x3f80000000000000;
  local_60 = 0;
  for (plVar12 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
      plVar12 != *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8); plVar12 = plVar12 + 2) {
    if ((*(uint *)(plVar12 + 1) < 2) && (lVar10 = *plVar12, *(long *)(lVar10 + 0x68) == 0x655d74795)
       ) {
      if (lVar10 != 0) {
        if (*(long *)(lVar10 + 0xd8) == 0) {
          plVar12 = FUN_71026533a0((undefined8 *)(lVar10 + 0x90),0,pppplVar8,ppppbVar9,param_5,
                                   param_6,param_7,param_8);
          plVar6 = *(long **)(lVar10 + 0xd8);
          *(long **)(lVar10 + 0xd8) = plVar12;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
        uStack_58 = 0x3f80000000000000;
        local_60 = 0;
        plVar12 = *(long **)(lVar10 + 0xd8);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        uVar7 = extraout_x1_03;
        if (*(char *)(plVar12[1] + 0xa8) != '\0') {
          plVar6 = *(long **)(plVar12[1] + 0x48);
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
          uVar7 = extraout_x1_04;
          if (*(char *)(plVar12[1] + 0xa8) != '\0') {
            plVar6 = *(long **)(plVar12[1] + 0x48);
            (**(code **)(*plVar6 + 0x10))(plVar6,1);
            (**(code **)(*plVar6 + 0x10))(plVar6,2);
            uVar7 = extraout_x1_05;
          }
        }
        *(undefined1 *)(plVar12 + 4) = 0;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0xd8) == 0) {
            uVar4 = 0xffffffff;
            lVar16 = *(long *)(lVar10 + 0xd8);
            if (lVar16 != 0) goto LAB_7102df5004;
LAB_7102df504c:
            auVar17 = (**(code **)(**(long **)(lVar10 + 0x90) + 0x158))();
          }
          else {
            plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 8);
            uVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,"gr2_StgPlanktonFlower_Loc");
            lVar16 = *(long *)(lVar10 + 0xd8);
            if (lVar16 == 0) goto LAB_7102df504c;
LAB_7102df5004:
            uVar5 = (**(code **)(**(long **)(*(long *)(lVar16 + 8) + 8) + 0x10))();
            if (uVar5 <= uVar4) goto LAB_7102df504c;
            plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 0x48);
            (**(code **)(*plVar12 + 0x38))(plVar12,0);
            auVar17._8_8_ = extraout_x1_06;
            auVar17._0_8_ = extraout_x1_06 + (ulong)uVar4 * 0x40;
          }
          uVar7 = auVar17._8_8_;
          uStack_58 = *(undefined8 *)(auVar17._0_8_ + 0x38);
          local_60 = *(undefined8 *)(auVar17._0_8_ + 0x30);
        }
      }
      break;
    }
  }
  auVar2._8_8_ = uStack_58;
  auVar2._0_8_ = local_60;
  auVar3._8_8_ = uStack_58;
  auVar3._0_8_ = local_60;
  auVar17 = NEON_ext(auVar2,auVar3,8,1);
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = (ulong)auVar17._0_4_;
  param_1[8] = local_60;
  for (plVar12 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
      plVar12 != *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8); plVar12 = plVar12 + 2) {
    if ((*(uint *)(plVar12 + 1) < 2) && (lVar10 = *plVar12, *(long *)(lVar10 + 0x68) == 0xaf430fc3f)
       ) {
      param_1[3] = lVar10;
      lVar16 = 0;
      if (lVar10 != 0) {
        *(undefined1 *)(lVar10 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar10 + 0x108),uVar7,pppplVar8,ppppbVar9,param_5,param_6,param_7,
                       param_8);
        lVar10 = param_1[3];
        if (lVar10 == 0) goto LAB_7102df4d50;
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 1;
        }
        lVar16 = param_1[3];
      }
      if (lVar16 != 0) {
        if ((*(char *)(lVar16 + 0xe0) != '\0') && (*(long *)(lVar16 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar16 + 200) + 0x32) = 0x101;
        }
        if (*(long *)(lVar16 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar16 + 0xd8) + 0x22) = 1;
        }
        lVar10 = param_1[3];
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0xd8) == 0)) {
          plVar12 = FUN_71026533a0((undefined8 *)(lVar10 + 0x90),0,pppplVar8,ppppbVar9,param_5,
                                   param_6,param_7,param_8);
          plVar6 = *(long **)(lVar10 + 0xd8);
          *(long **)(lVar10 + 0xd8) = plVar12;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      goto LAB_7102df4d50;
    }
  }
  param_1[3] = 0;
LAB_7102df4d50:
  lVar10 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1f8);
  uVar11 = param_1[2];
  plVar12 = (long *)(lVar10 + 0x50);
  plVar6 = plVar12;
  if ((long *)*plVar12 != (long *)0x0) {
    plVar14 = (long *)*plVar12;
    plVar6 = (long *)(lVar10 + 0x50);
    do {
      while (plVar13 = plVar14, uVar11 < (ulong)plVar13[4]) {
        plVar14 = (long *)*plVar13;
        plVar6 = plVar13;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_7102df4db0;
      }
      if (uVar11 <= (ulong)plVar13[4]) break;
      plVar6 = plVar13 + 1;
      plVar14 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_7102df4db0:
  *(undefined4 *)(*(long *)(*plVar6 + 0x28) + 0x1c) = 0;
  if (*(ulong *)(lVar10 + 0x20) == uVar11) {
    if ((long *)*plVar12 != (long *)0x0) {
      plVar6 = (long *)(lVar10 + 0x50);
      plVar14 = (long *)*plVar12;
      do {
        while (uVar11 < (ulong)plVar14[4]) {
          plVar13 = (long *)*plVar14;
          plVar12 = plVar14;
          plVar6 = plVar14;
          plVar14 = plVar13;
          if (plVar13 == (long *)0x0) goto LAB_7102df4e0c;
        }
        plVar12 = plVar6;
        if (uVar11 <= (ulong)plVar14[4]) break;
        plVar6 = plVar14 + 1;
        plVar14 = (long *)*plVar6;
        plVar12 = plVar6;
      } while (plVar14 != (long *)0x0);
    }
LAB_7102df4e0c:
    FUN_7103737c30(*(float *)(*(long *)(*plVar12 + 0x28) + 0x1c));
  }
  return;
}

