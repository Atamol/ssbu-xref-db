// addr:      7101b0b340
// offset:    0x1b0b340
// name:      FUN_7101b0b340
// mangled:   
// signature: undefined __cdecl FUN_7101b0b340(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b0b340(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar6;
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
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined **local_50;
  ulong local_48;
  
  FUN_7103763e50(*(long *)(param_1 + 0x518));
  uVar7 = extraout_x1;
  if ((1 < *(int *)(param_1 + 0x260)) &&
     (plVar14 = *(long **)(param_1 + 0x40), plVar14 != (long *)0x0)) {
    lVar15 = *(long *)*plVar14;
    iVar4 = *(int *)(param_1 + 0x494);
    *(undefined4 *)((long *)*plVar14 + 2) = 0;
    plVar8 = *(long **)(lVar15 + 0x10);
    *plVar8 = lVar15;
    *(undefined4 *)(plVar8 + 1) = 0x48;
    lVar10 = *(long *)(lVar15 + 0x10);
    *(long *)(lVar15 + 0x10) = lVar10 + 0x10;
    lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 200);
    *(long *)(lVar15 + 0x10) = lVar10;
    if (lVar13 == lVar15) {
      lVar10 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar8[3] == 0x13) && (plVar6 = plVar8, plVar8[2] == 2)) break;
          piVar1 = (int *)((long)plVar8 + 0x1c);
          plVar8 = plVar8 + (long)*piVar1 * 4;
          plVar6 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      param_3 = "update";
      FUN_71038f4d40(lVar15,plVar6,"update");
      uVar7 = extraout_x1_01;
    }
    else {
      FUN_71038f4b20(lVar15,"update");
      FUN_71038f4fc0(lVar15,-2);
      uVar7 = extraout_x1_00;
    }
    puVar9 = (undefined8 *)(*(long *)(lVar15 + 0x10) + -0x10);
    if ((puVar9 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar15 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar15 + 0x10) = puVar9;
    }
    else {
      lVar10 = *(long *)*plVar14;
      plVar8 = *(long **)(lVar10 + 0x10);
      *(undefined4 *)(plVar8 + 1) = 0x13;
      *plVar8 = (long)iVar4;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 0x10;
      *(int *)(*plVar14 + 0x10) = *(int *)(*plVar14 + 0x10) + 1;
      FUN_7103377130(plVar14,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar7 = extraout_x1_02;
    }
  }
  if (0x12 < *(uint *)(param_1 + 0x25c)) {
LAB_7101b0bb10:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar3 = *(uint *)(param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4 + 0x210);
  if (*(uint *)(param_1 + 0x260) != uVar3) {
    *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x260);
    *(uint *)(param_1 + 0x260) = uVar3;
    if (0x19 < uVar3) goto LAB_7101b0bb10;
    lVar10 = param_1 + (long)(int)uVar3 * 0x10;
    uVar2 = *(undefined8 *)(lVar10 + 0x78);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar10 + 0x70);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    pcVar11 = *(code **)(param_1 + 0x60);
    uVar12 = *(ulong *)(param_1 + 0x68) & 1;
    if (uVar12 != 0 || pcVar11 != (code *)0x0) {
      if (uVar12 != 0) {
        pcVar11 = *(code **)(pcVar11 +
                            *(long *)(*(long *)(param_1 + 0x48) +
                                     ((long)*(ulong *)(param_1 + 0x68) >> 1)));
      }
      (*pcVar11)();
      uVar7 = extraout_x1_03;
    }
    *(undefined4 *)(param_1 + 0x264) = 0;
  }
  if (*(char *)(param_1 + 0x26c) != '\0') {
    pcVar11 = *(code **)(param_1 + 0x60);
    uVar12 = *(ulong *)(param_1 + 0x68) & 1;
    if (uVar12 != 0 || pcVar11 != (code *)0x0) {
      if (uVar12 != 0) {
        pcVar11 = *(code **)(pcVar11 +
                            *(long *)(*(long *)(param_1 + 0x48) +
                                     ((long)*(ulong *)(param_1 + 0x68) >> 1)));
      }
      (*pcVar11)();
      uVar7 = extraout_x1_04;
    }
    *(undefined4 *)(param_1 + 0x264) = 0;
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    pcVar11 = *(code **)(param_1 + 0x50);
    uVar12 = *(ulong *)(param_1 + 0x58) & 1;
    if (uVar12 != 0 || pcVar11 != (code *)0x0) {
      if (uVar12 != 0) {
        pcVar11 = *(code **)(pcVar11 +
                            *(long *)(*(long *)(param_1 + 0x48) +
                                     ((long)*(ulong *)(param_1 + 0x58) >> 1)));
      }
      (*pcVar11)();
      uVar7 = extraout_x1_05;
    }
  }
  *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
  lVar10 = param_1 + 0x3d0;
  if ((((*(char *)(*(long *)(param_1 + 0x470) + 0x60) != '\0') &&
       (uVar12 = FUN_710339c1e0((long *)(param_1 + 0x470),uVar7,(long ****)param_3,param_4,param_5,
                                param_6,param_7,param_8), uVar7 = extraout_x1_06, (uVar12 & 1) != 0)
       ) && (*(int *)(param_1 + 0x2f4) == 0)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) == '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x7104290194);
    FUN_7103778300(0x3f800000,uVar12,0x71042d4c7e);
    FUN_7103778300(0x3f800000,uVar12,0x710437aec0);
    uVar12 = local_48;
    *(undefined1 *)(param_1 + 0x468) = 1;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_07;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_08;
    }
  }
  if (((*(char *)(*(long *)(param_1 + 0x470) + 99) != '\0') && (*(int *)(param_1 + 0x2f4) == 0)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) != '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71044530ca);
    *(undefined1 *)(param_1 + 0x468) = 0;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_09;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_10;
    }
  }
  if ((((*(char *)(*(long *)(param_1 + 0x478) + 0x60) != '\0') &&
       (uVar12 = FUN_710339c1e0((long *)(param_1 + 0x478),uVar7,(long ****)param_3,param_4,param_5,
                                param_6,param_7,param_8), uVar7 = extraout_x1_11, (uVar12 & 1) != 0)
       ) && (*(int *)(param_1 + 0x2f4) == 1)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) == '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x7104290194);
    FUN_7103778300(0x3f800000,uVar12,0x71042d4c7e);
    FUN_7103778300(0x3f800000,uVar12,0x710437aec0);
    *(undefined1 *)(param_1 + 0x468) = 1;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_12;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_13;
    }
  }
  if (((*(char *)(*(long *)(param_1 + 0x478) + 99) != '\0') && (*(int *)(param_1 + 0x2f4) == 1)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) != '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71044530ca);
    *(undefined1 *)(param_1 + 0x468) = 0;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_14;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_15;
    }
  }
  if ((((*(char *)(*(long *)(param_1 + 0x480) + 0x60) != '\0') &&
       (uVar12 = FUN_710339c1e0((long *)(param_1 + 0x480),uVar7,(long ****)param_3,param_4,param_5,
                                param_6,param_7,param_8), uVar7 = extraout_x1_16, (uVar12 & 1) != 0)
       ) && (*(int *)(param_1 + 0x2f4) == 2)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) == '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x7104290194);
    FUN_7103778300(0x3f800000,uVar12,0x71042d4c7e);
    FUN_7103778300(0x3f800000,uVar12,0x710437aec0);
    *(undefined1 *)(param_1 + 0x468) = 1;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_17;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_18;
    }
  }
  if (((*(char *)(*(long *)(param_1 + 0x480) + 99) != '\0') && (*(int *)(param_1 + 0x2f4) == 2)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) != '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71044530ca);
    *(undefined1 *)(param_1 + 0x468) = 0;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    uVar7 = extraout_x1_19;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
      uVar7 = extraout_x1_20;
    }
  }
  if ((((*(char *)(*(long *)(param_1 + 0x488) + 0x60) != '\0') &&
       (uVar12 = FUN_710339c1e0((long *)(param_1 + 0x488),uVar7,(long ****)param_3,param_4,param_5,
                                param_6,param_7,param_8), (uVar12 & 1) != 0)) &&
      (*(int *)(param_1 + 0x2f4) == 3)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) == '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x7104290194);
    FUN_7103778300(0x3f800000,uVar12,0x71042d4c7e);
    FUN_7103778300(0x3f800000,uVar12,0x710437aec0);
    *(undefined1 *)(param_1 + 0x468) = 1;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
    }
  }
  if (((*(char *)(*(long *)(param_1 + 0x488) + 99) != '\0') && (*(int *)(param_1 + 0x2f4) == 3)) &&
     ((*(int *)(param_1 + 0x278) != 2 && (*(char *)(param_1 + 0x468) != '\0')))) {
    FUN_7103776640(&local_50,lVar10,(byte ****)"set_parts_aura",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar12 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71044530ca);
    *(undefined1 *)(param_1 + 0x468) = 0;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar12 != 0) {
      uVar5 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar12);
    }
  }
  return;
}

