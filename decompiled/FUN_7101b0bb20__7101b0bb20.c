// addr:      7101b0bb20
// offset:    0x1b0bb20
// name:      FUN_7101b0bb20
// mangled:   
// signature: undefined __cdecl FUN_7101b0bb20(undefined8 * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b0bb20(undefined8 *param_1,undefined8 param_2,char *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
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
  undefined8 extraout_x1_12;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  
  plVar13 = (long *)param_1[8];
  *param_1 = &DAT_71050aa2e8;
  if (plVar13 != (long *)0x0) {
    lVar16 = *(long *)*plVar13;
    iVar1 = *(int *)((long)param_1 + 0x494);
    *(undefined4 *)((long *)*plVar13 + 2) = 0;
    plVar8 = *(long **)(lVar16 + 0x10);
    *plVar8 = lVar16;
    *(undefined4 *)(plVar8 + 1) = 0x48;
    lVar10 = *(long *)(lVar16 + 0x10);
    *(long *)(lVar16 + 0x10) = lVar10 + 0x10;
    lVar12 = *(long *)(*(long *)(lVar16 + 0x18) + 200);
    *(long *)(lVar16 + 0x10) = lVar10;
    if (lVar12 == lVar16) {
      lVar10 = *(long *)(*(long *)(lVar16 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar8 = (long *)(*(long *)(lVar10 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar8[3] == 0x13) && (plVar6 = plVar8, plVar8[2] == 2)) break;
          piVar11 = (int *)((long)plVar8 + 0x1c);
          plVar8 = plVar8 + (long)*piVar11 * 4;
          plVar6 = &DAT_7104862960;
        } while (*piVar11 != 0);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      param_3 = "finalize";
      FUN_71038f4d40(lVar16,plVar6,"finalize");
    }
    else {
      FUN_71038f4b20(lVar16,"finalize");
      FUN_71038f4fc0(lVar16,-2);
    }
    puVar9 = (undefined8 *)(*(long *)(lVar16 + 0x10) + -0x10);
    if ((puVar9 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar16 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar16 + 0x10) = puVar9;
    }
    else {
      lVar10 = *(long *)*plVar13;
      plVar8 = *(long **)(lVar10 + 0x10);
      *(undefined4 *)(plVar8 + 1) = 0x13;
      *plVar8 = (long)iVar1;
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 0x10;
      *(int *)(*plVar13 + 0x10) = *(int *)(*plVar13 + 0x10) + 1;
      FUN_7103377130(plVar13,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  FUN_71033997f0(param_1 + 0xa6);
  uVar4 = param_1[0xa3];
  param_1[0xa2] = &PTR_FUN_710523d7d8;
  param_1[0xa3] = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar4 = param_1[0x9d];
  if (uVar4 != 0) {
    param_1[0x9e] = uVar4;
    FUN_710392eb40(uVar4);
  }
  param_1[0x95] = &PTR_FUN_7104f73d50;
  if (((param_1[0x96] != 0) && (DAT_7106dd53a8 == '\x01')) &&
     (*(int *)(param_1 + 0x97) == DAT_7106dd53ac)) {
    piVar11 = (int *)(param_1[0x96] + 0x38);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x96] = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  FUN_710339b480(param_1 + 0x91);
  FUN_710339b480(param_1 + 0x90);
  FUN_710339b480(param_1 + 0x8f);
  FUN_710339b480(param_1 + 0x8e);
  puVar9 = (undefined8 *)param_1[0x8a];
  uVar7 = extraout_x1;
  if (puVar9 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[0x8b];
    if (puVar14 == puVar9) {
      param_1[0x8b] = puVar9;
      puVar14 = puVar9;
    }
    else {
      do {
        puVar14 = puVar14 + -2;
        (**(code **)*puVar14)(puVar14);
      } while (puVar9 != puVar14);
      puVar14 = (undefined8 *)param_1[0x8a];
      param_1[0x8b] = puVar9;
      uVar7 = extraout_x1_00;
    }
    if (puVar14 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar14);
      uVar7 = extraout_x1_01;
    }
  }
  puVar9 = (undefined8 *)param_1[0x87];
  if (puVar9 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[0x88];
    if (puVar14 == puVar9) {
      param_1[0x88] = puVar9;
      puVar14 = puVar9;
    }
    else {
      do {
        puVar14 = puVar14 + -2;
        (**(code **)*puVar14)(puVar14);
      } while (puVar9 != puVar14);
      puVar14 = (undefined8 *)param_1[0x87];
      param_1[0x88] = puVar9;
      uVar7 = extraout_x1_02;
    }
    if (puVar14 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar14);
      uVar7 = extraout_x1_03;
    }
  }
  puVar15 = (ulong *)param_1[0x83];
  param_1[0x81] = &PTR_FUN_71050aa330;
  if (puVar15 != (ulong *)0x0) {
    puVar17 = (ulong *)param_1[0x84];
    if (puVar17 == puVar15) {
      param_1[0x84] = puVar15;
      puVar17 = puVar15;
    }
    else {
      do {
        puVar17 = puVar17 + -1;
        uVar4 = *puVar17;
        *puVar17 = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
          uVar7 = extraout_x1_04;
        }
      } while (puVar15 != puVar17);
      puVar17 = (ulong *)param_1[0x83];
      param_1[0x84] = puVar15;
    }
    if (puVar17 != (ulong *)0x0) {
      FUN_710392eb40((ulong)puVar17);
      uVar7 = extraout_x1_05;
    }
  }
  plVar13 = (long *)param_1[0x80];
  param_1[0x80] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
    uVar7 = extraout_x1_06;
  }
  plVar13 = (long *)param_1[0x7f];
  param_1[0x7f] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
    uVar7 = extraout_x1_07;
  }
  plVar13 = (long *)param_1[0x7e];
  param_1[0x7e] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
    uVar7 = extraout_x1_08;
  }
  uVar4 = param_1[0x7d];
  param_1[0x7c] = &PTR_FUN_710523d9e8;
  param_1[0x7d] = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
    uVar7 = extraout_x1_09;
  }
  uVar4 = param_1[0x7b];
  param_1[0x7a] = &PTR_FUN_710523d988;
  param_1[0x7b] = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
    uVar7 = extraout_x1_10;
  }
  uVar4 = param_1[0x76];
  if (uVar4 != 0) {
    param_1[0x77] = uVar4;
    FUN_710392eb40(uVar4);
    uVar7 = extraout_x1_11;
  }
  puVar9 = (undefined8 *)param_1[0x53];
  param_1[0x52] = &PTR_FUN_710523da48;
  param_1[0x53] = 0;
  if (puVar9 != (undefined8 *)0x0) {
    plVar13 = (long *)puVar9[1];
    *puVar9 = 0;
    puVar9[1] = 0;
    if (plVar13 != (long *)0x0) {
      plVar8 = plVar13 + 1;
      do {
        lVar10 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        std::__shared_weak_count::__release_weak();
      }
      plVar13 = (long *)puVar9[1];
      if (plVar13 != (long *)0x0) {
        plVar8 = plVar13 + 1;
        do {
          lVar10 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar9);
    uVar7 = extraout_x1_12;
  }
  FUN_71032cbe10(param_1,uVar7,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

