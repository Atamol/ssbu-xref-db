// addr:      7101ef68a0
// offset:    0x1ef68a0
// name:      FUN_7101ef68a0
// mangled:   
// signature: undefined __cdecl FUN_7101ef68a0(long param_1, uint param_2, uint param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ef68a0(long param_1,uint param_2,uint param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  int *piVar12;
  float fVar13;
  undefined8 uVar14;
  float __x;
  float __y;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  long *local_58;
  undefined8 uVar15;
  
  uVar5 = param_2 - param_3;
  uVar2 = -uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  ppppbVar10 = (byte ****)param_4;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar5 = uVar2 + 10;
  if (DAT_710530d560 != 0) {
    uVar5 = uVar2;
  }
  lVar8 = param_1 + 600;
  FUN_7103778430(lVar8,"fxui_thunder_on_%02d",(ulong)(uVar2 << (DAT_710530d560 == 0)),ppppbVar10,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_60,lVar8,(long ****)"set_fxui_thunder_%02d",(ulong)uVar5,ppppbVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_70,lVar8,(long ****)"point_thunder_r_%02d",(ulong)param_2,ppppbVar10,param_5
                 ,param_6,param_7,param_8);
  uVar9 = (ulong)param_3;
  FUN_7103776910(&local_80,lVar8,(long ****)"point_thunder_b_%02d",uVar9,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  plVar7 = local_68;
  uVar14 = _ConstantZero;
  if (*local_68 != 0) {
    uVar14 = *(undefined8 *)(*local_68 + 0x30);
  }
  uVar15 = _ConstantZero;
  if (*local_78 != 0) {
    uVar15 = *(undefined8 *)(*local_78 + 0x30);
  }
  __x = (float)uVar14 - (float)uVar15;
  __y = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar15 >> 0x20);
  fVar13 = atan2f(__y,__x);
  lVar11 = *local_58;
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x3c) = 0;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
    *(float *)(lVar11 + 0x44) = (fVar13 * 180.0) / 3.1415927 + -90.0;
  }
  if (*plVar7 == 0) {
    lVar11 = *local_58;
    uVar14 = _ConstantZero;
    if (lVar11 == 0) goto LAB_7101ef6dbc;
LAB_7101ef6a34:
    *(ulong *)(lVar11 + 0x30) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) - __y * 0.5,(float)uVar14 - __x * 0.5);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
    plVar7 = FUN_710377aae0((long *)*local_58);
  }
  else {
    lVar11 = *local_58;
    uVar14 = *(undefined8 *)(*plVar7 + 0x30);
    if (lVar11 != 0) goto LAB_7101ef6a34;
LAB_7101ef6dbc:
    plVar7 = FUN_710377aae0((long *)0x0);
  }
  if (plVar7 != (long *)0x0) {
    *(undefined1 *)((long)plVar7 + 0x13a) = 1;
  }
  FUN_7103776910(&local_90,lVar8,(long ****)"set_rep_eff_thunder",uVar9,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  if (((*(long **)(local_88 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
     (lVar8 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x88), lVar8 != 0)) {
    FUN_710379e9c0(*(long **)(local_88 + 8),lVar8,0);
  }
  puVar1 = (undefined4 *)(param_1 + 0x2b8);
  if (((((*(long **)(param_1 + 0x2c8) != (long *)0x0) &&
        (uVar9 = (**(code **)(**(long **)(param_1 + 0x2c8) + 0x20))(), (uVar9 & 1) == 0)) &&
       ((*(char *)(*DAT_710593b438 + 1) != '\0' &&
        ((*(int *)(param_1 + 0x2d4) == 0x876500 && (DAT_7106dd53a8 == '\x01')))))) &&
      (*(int *)(param_1 + 0x2d0) == DAT_7106dd53ac)) &&
     ((((*(char *)(param_1 + 0x2d8) == '\0' && (*(long **)(param_1 + 0x2c8) != (long *)0x0)) &&
       (uVar9 = (**(code **)(**(long **)(param_1 + 0x2c8) + 0x20))(), (uVar9 & 1) == 0)) &&
      (uVar9 = (**(code **)(**(long **)(param_1 + 0x2c8) + 0x68))(), (uVar9 & 1) == 0)))) {
    FUN_710373b7f0((long)puVar1);
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a88b966a6,(long ****)&DAT_00000004,
                             ppppbVar10,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) {
    FUN_71024076d0(local_d0,0x1a88b966a6);
    *puVar1 = local_d0[0];
    if (local_c0 == 0) goto LAB_7101ef6be8;
    if (*(int *)(param_1 + 0x2d4) != 0x876500) goto LAB_7101ef6c38;
    if (*(int *)(param_1 + 0x2d0) == DAT_7106dd53ac) {
      if ((*(long *)(param_1 + 0x2c8) != 0) && (DAT_7106dd53a8 == '\x01')) {
        piVar12 = (int *)(*(long *)(param_1 + 0x2c8) + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined1 *)(param_1 + 0x2d8) = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = DAT_7106dd53ac;
    }
    *(long *)(param_1 + 0x2c8) = local_c0;
    piVar12 = (int *)(local_c0 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    local_b8 = 0;
    uStack_b4 = 0x876500;
    local_c0 = 0;
    local_b0 = 0;
    local_d0[0] = 0;
    local_98 = 0;
    local_a8 = 0xffffffffffffffff;
    uStack_a0 = 0;
    *puVar1 = 0;
LAB_7101ef6be8:
    if (((*(long *)(param_1 + 0x2c8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0x2d0) == DAT_7106dd53ac)) {
      piVar12 = (int *)(*(long *)(param_1 + 0x2c8) + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = *piVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  *(undefined1 *)(param_1 + 0x2d8) = 0;
LAB_7101ef6c38:
  *(undefined8 *)(param_1 + 0x2f0) = local_98;
  *(undefined8 *)(param_1 + 0x2e8) = uStack_a0;
  *(undefined8 *)(param_1 + 0x2e0) = local_a8;
  local_c8 = &PTR_FUN_7104f73d50;
  if (((local_c0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_b8 == DAT_7106dd53ac)) {
    piVar12 = (int *)(local_c0 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_c0 = 0;
  if ((param_4 & 1) == 0) {
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x18524aac0b,(long ****)&DAT_00000004,
                               ppppbVar10,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) {
      FUN_71024076d0(local_110,0x18524aac0b);
      if (((local_100 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_f8 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_100 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      local_f8 = 0;
      uStack_f4 = 0x876500;
      local_110[0] = 0;
      local_d8 = 0;
      local_e8 = 0xffffffffffffffff;
      uStack_e0 = 0;
    }
    local_108 = &PTR_FUN_7104f73d50;
    local_100 = 0;
    local_f0 = 0;
  }
  uVar9 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  plVar7 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  plVar7 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  plVar7 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  return;
}

