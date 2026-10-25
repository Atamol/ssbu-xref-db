// addr:      71018bb950
// offset:    0x18bb950
// name:      FUN_71018bb950
// mangled:   
// signature: undefined __cdecl FUN_71018bb950(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018bb950(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long alStack_a0 [4];
  long *local_80;
  
  lVar10 = *(long *)(DAT_7105329740 + 8);
  iVar6 = *(int *)(param_1 + 0xec);
  if (iVar6 != 0) goto LAB_71018bbbd8;
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x17a3061361,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar4 & 1) != 0)) {
    FUN_71024076d0(local_e0,0x17a3061361);
    if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c8 == DAT_7106dd53ac)) {
      piVar7 = (int *)(local_d0 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    local_c8 = 0x87650000000000;
    local_b8 = 0xffffffffffffffff;
    uStack_b0 = 0;
    local_e0[0] = 0;
    local_a8 = 0;
  }
  local_d8 = &PTR_FUN_7104f73d50;
  local_d0 = 0;
  local_c0 = 0;
  lVar9 = *(long *)(param_1 + 0x110);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar9 + 0x80) + 0x10),0x71043be875);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar9 + 0x80) + 0x10),0x71042d6495);
  fVar12 = *(float *)(param_1 + 0x154) - *(float *)(param_1 + 0x150);
  fVar14 = *(float *)(lVar10 + 0xe8);
  fVar15 = *(float *)(param_1 + 0x150) + fVar12 * 0.5;
  fVar11 = *(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x158);
  lVar9 = *(long *)(DAT_7105329740 + 8);
  fVar16 = *(float *)(param_1 + 0x158) + fVar11 * 0.5;
  fVar17 = fVar11 * fVar14 * 0.5;
  fVar11 = fVar12 * fVar14 * 0.5;
  plVar5 = *(long **)(lVar9 + 0x2b0);
  if (plVar5 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else if ((long *)(lVar9 + 0x290) == plVar5) {
    local_80 = alStack_a0;
    (**(code **)(*plVar5 + 0x18))(plVar5,alStack_a0);
  }
  else {
    local_80 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  FUN_71019f0670(alStack_a0,(long *)(param_1 + 0x180));
  if (alStack_a0 == local_80) {
    pcVar8 = *(code **)(*local_80 + 0x20);
LAB_71018bbb74:
    (*pcVar8)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar8 = *(code **)(*local_80 + 0x28);
    goto LAB_71018bbb74;
  }
  fVar12 = 1.0 / *(float *)(param_1 + 0x130);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x140);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
  uVar1 = *(undefined4 *)(lVar9 + 0x2c8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(lVar9 + 0x2c0);
  iVar6 = *(int *)(param_1 + 0xec);
  *(float *)(param_1 + 0x150) = fVar15 - fVar11;
  *(float *)(param_1 + 0x154) = fVar15 + fVar11;
  *(float *)(param_1 + 0x158) = fVar16 - fVar17;
  *(float *)(param_1 + 0x15c) = fVar16 + fVar17;
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  *(ulong *)(param_1 + 0x160) = CONCAT44(fVar14 + fVar12 * 960.0,fVar14 + fVar12 * -960.0);
  *(ulong *)(param_1 + 0x168) = CONCAT44(fVar13 + fVar12 * 540.0,fVar13 + fVar12 * -540.0);
  *(undefined4 *)(param_1 + 0x170) = 0;
LAB_71018bbbd8:
  if (*(int *)(lVar10 + 0xec) <= iVar6) {
    if (0x12 < *(uint *)(param_1 + 0xe4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 5;
  }
  return;
}

