// addr:      71015753f0
// offset:    0x15753f0
// name:      FUN_71015753f0
// mangled:   
// signature: undefined __cdecl FUN_71015753f0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71015753f0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined8 extraout_x1_01;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  ulong uVar11;
  code *pcVar12;
  int *piVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  plVar6 = DAT_71052c36c0;
  if (DAT_71052c36c0 == (long *)0x0) goto LAB_71015756d0;
  iVar4 = *(int *)(param_1 + 0x14c);
  if (iVar4 != 0) {
    iVar4 = iVar4 - (int)*(float *)(param_1 + 0x15c);
  }
  *(int *)(**(long **)(*DAT_71052c36c0 + 8) + 0x11c) = iVar4;
  FUN_71015758b0(param_1);
  plVar5 = DAT_71052c36c0;
  if (*(long *)(**(long **)(*plVar6 + 0x18) + 0x40) != 0) goto LAB_71015756d0;
  if (DAT_71052c36c0 != (long *)0x0) {
    lVar16 = **(long **)(*DAT_71052c36c0 + 8);
    lVar15 = *(long *)(lVar16 + 0x268);
    pcVar10 = *(char **)(param_1 + 0x10);
    if ((lVar15 == *(long *)(lVar16 + 0x270)) ||
       ((ulong)(*(long *)(lVar16 + 0x270) - lVar15 >> 2) <= (ulong)*(uint *)(lVar16 + 0x280))) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x280) * 4);
    }
    *(int *)(pcVar10 + 0xac) = iVar4;
    uVar1 = *(uint *)(**(long **)(*plVar5 + 8) + 0x284);
    *(uint *)(pcVar10 + 0xb0) = uVar1;
    if (1 < uVar1) goto LAB_71015758a4;
    lVar15 = *(long *)(param_1 + 0x20);
    fVar17 = *(float *)(**(long **)(*plVar5 + 8) + 0x120);
    lVar16 = lVar15 + (long)iVar4 * 0x3860;
    uVar8 = (uint)fVar17;
    param_3 = (undefined **)(ulong)uVar8;
    *(float *)(lVar16 + (ulong)uVar1 * 4 + 0x3848) = fVar17;
    uVar14 = 0x14;
    if (pcVar10[0xa9] == '\0' || *pcVar10 != '\t') {
      uVar14 = 0x12;
    }
    iVar4 = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),uVar14,uVar8);
    *(int *)(lVar16 + 0x3810) = iVar4;
    FUN_7101577420(param_1,extraout_x1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar11 = 0;
    piVar13 = (int *)(lVar15 + 0x37f0);
    do {
      lVar16 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + uVar11 * 8 + 0x20);
      if (((lVar16 != 0) && (*(long *)(lVar16 + 0x4178) != 0)) &&
         ((DAT_71052b6fd8 == (long *)0x0 ||
          ((iVar4 = *(int *)(*(long *)(lVar16 + 0x4178) + 0x6c), iVar4 != -1 &&
           (*(char *)(*DAT_71052b6fd8 + (long)iVar4 + 0x80) == '\0')))))) {
        lVar16 = *(long *)(lVar16 + 0xf8);
        *piVar13 = **(int **)(lVar16 + 0x28a8) + **(int **)(lVar16 + 0x16f8) +
                   **(int **)(lVar16 + 0x3a58) + *piVar13;
      }
      uVar11 = uVar11 + 1;
      piVar13 = piVar13 + 0xe18;
    } while (uVar11 < 8);
    *(int *)(lVar15 + 0x1c56c) = *(int *)(param_1 + 0x150) + *(int *)(lVar15 + 0x1c56c);
  }
  pcVar10 = *(char **)(param_1 + 0x10);
  if ((*pcVar10 == '\t') && (pcVar10[0xa9] == '\0' && pcVar10[0xa8] == '\0')) {
    lVar15 = **(long **)(*plVar6 + 0x18);
    *(undefined4 *)(lVar15 + 0x1c0) = 0x78;
    *(undefined4 *)(lVar15 + 0x1c8) = 0;
    FUN_71039602c0(lVar15 + 0x1d0);
    *(undefined ***)(lVar15 + 0x1d0) = &PTR_FUN_7104f73d50;
    if (((*(long *)(lVar15 + 0x1d8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(lVar15 + 0x1e0) == DAT_7106dd53ac)) {
      piVar13 = (int *)(*(long *)(lVar15 + 0x1d8) + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar3) {
          *piVar13 = *piVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined8 *)(lVar15 + 0x1e0) = 0;
    *(undefined8 *)(lVar15 + 0x1e8) = 0;
    *(undefined8 *)(lVar15 + 0x1d0) = 0;
    *(undefined8 *)(lVar15 + 0x1d8) = 0;
    param_4 = (byte ****)(ulong)*(uint *)(lVar15 + 0x13c);
    *(undefined ***)(lVar15 + 0x1d0) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(lVar15 + 0x1d8) = 0;
    param_3 = (undefined **)0x1;
    *(undefined8 *)(lVar15 + 0x1e0) = 0x87650000000000;
    *(undefined1 *)(lVar15 + 0x1e8) = 0;
    *(undefined4 *)(lVar15 + 0x204) = 0;
    *(undefined8 *)(lVar15 + 0x1f0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar15 + 0x1f8) = 0;
    lVar16 = **(long **)(DAT_71052c3420 + 8);
    FUN_710377a280(*(long *)(*(long *)(*(long *)(**(long **)(lVar16 + 0xc40) + 0x9a0) + 8) + 0x80) +
                   0x200,(byte *)"mel_homerun_world_pw_n",1);
    lVar16 = *(long *)(*(long *)(*(long *)(**(long **)(lVar16 + 0xc40) + 0x9a0) + 8) + 0x80);
    if (*(int *)(lVar16 + 1000) == 0) {
      *(long *)(lVar16 + 0x3f8) = lVar16 + 0x110;
      if (0x12 < *(uint *)(lVar16 + 0x3e4)) {
LAB_71015758a4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0x3e4) * 4 + 0x398) = 2;
      if (*(int *)(lVar16 + 0x3e4) < 0x12) {
        uVar1 = *(int *)(lVar16 + 0x3e4) + 1;
        *(uint *)(lVar16 + 0x3e4) = uVar1;
        if (0x12 < uVar1) goto LAB_71015758a4;
        *(undefined4 *)(lVar16 + (long)(int)uVar1 * 4 + 0x398) = 1;
      }
    }
    if ((*(long **)(lVar15 + 8) != (long *)0x0) &&
       (plVar6 = *(long **)(**(long **)(lVar15 + 8) + 8), plVar6 != (long *)0x0)) {
      param_3 = (undefined **)&DAT_ffffffff;
      (**(code **)(*plVar6 + 0x58))(plVar6,0x22);
    }
    pcVar12 = FUN_71015759e0;
  }
  else {
    lVar15 = *(long *)(*(long *)(*(long *)(**(long **)(**(long **)(DAT_71052c3420 + 8) + 0xc40) +
                                          0x9a0) + 8) + 0x80);
    plVar5 = *(long **)(*(long *)(lVar15 + 0x38) + 8);
    if (plVar5 == (long *)0x0) {
LAB_7101575644:
      FUN_710377aee0(0x3f800000,lVar15 + 0x30);
      uVar7 = extraout_x1_00;
    }
    else {
      auVar18 = (**(code **)(*plVar5 + 0x130))();
      uVar7 = auVar18._8_8_;
      if ((auVar18._0_8_ & 1) == 0) goto LAB_7101575644;
    }
    plVar5 = *(long **)(*plVar6 + 8);
    *(undefined4 *)(*plVar5 + 0x284) = 0;
    *(undefined4 *)(*plVar5 + 0x280) = 0;
    lVar16 = **(long **)(*plVar6 + 8);
    lVar15 = *(long *)(lVar16 + 0x268);
    if ((lVar15 == *(long *)(lVar16 + 0x270)) ||
       ((ulong)(*(long *)(lVar16 + 0x270) - lVar15 >> 2) <= (ulong)*(uint *)(lVar16 + 0x280))) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(lVar15 + (ulong)*(uint *)(lVar16 + 0x280) * 4);
    }
    *(undefined4 *)(pcVar10 + 0xac) = uVar9;
    *(undefined4 *)(pcVar10 + 0xb0) = *(undefined4 *)(**(long **)(*plVar6 + 8) + 0x284);
    FUN_7101575fa0(param_1,uVar7,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar12 = FUN_71015768f0;
  }
  *(code **)(param_1 + 0x138) = pcVar12;
  *(undefined8 *)(param_1 + 0x140) = 0;
LAB_71015756d0:
  FUN_7101572540((char *)(param_1 + 0x148),(uint)*(byte *)(param_1 + 0x19));
  FUN_7101573ed0(param_1,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

