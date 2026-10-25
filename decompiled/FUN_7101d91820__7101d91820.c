// addr:      7101d91820
// offset:    0x1d91820
// name:      FUN_7101d91820
// mangled:   
// signature: undefined __cdecl FUN_7101d91820(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d91820(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar15 = DAT_710532f730;
  lVar16 = *(long *)(param_1 + 0x2d8);
  lVar18 = *(long *)(param_1 + 0x2e0) - lVar16;
  if (lVar18 == 0) {
    iVar17 = 0;
    iVar7 = 0;
  }
  else {
    uVar11 = 0;
    iVar7 = 0;
    iVar17 = 0;
    piVar12 = (int *)(lVar16 + 4);
    do {
      uVar11 = uVar11 + 1;
      iVar7 = piVar12[-1] + iVar7;
      iVar17 = *piVar12 + iVar17;
      piVar12 = piVar12 + 2;
    } while (uVar11 < (ulong)(lVar18 >> 3));
  }
  lVar18 = (long)*(short *)(param_1 + 0x15c);
  if (lVar18 == -1 || 1999 < lVar18) {
LAB_7101d91914:
    iVar6 = 1;
  }
  else {
    lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar3 = *(ushort *)(lVar13 + lVar18 * 2 + 0x60);
    uVar11 = (ulong)uVar3;
    uVar14 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar14 <= (uint)uVar3) goto LAB_7101d91914;
    puVar2 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar11 * 0x140);
    if (uVar14 < uVar11 || uVar14 - uVar11 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    iVar6 = FUN_71025c9ac0(*(float *)(puVar2 + 0x3a),*(uint *)(param_1 + 0x268),
                           *(uint *)(puVar2 + 0x38));
  }
  uVar1 = *(int *)(param_1 + 0x270) + iVar7;
  *(uint *)(param_1 + 0x270) = uVar1;
  iVar17 = *(int *)(param_1 + 0x290) - iVar17;
  *(uint *)(param_1 + 0x268) = uVar1;
  *(int *)(param_1 + 0x290) = iVar17;
  *(int *)(param_1 + 0x288) = iVar17;
  if (lVar18 != -1 && 1999 >= lVar18) {
    lVar15 = *(long *)(*(long *)(lVar15 + 8) + 0x1d8);
    uVar3 = *(ushort *)(lVar15 + lVar18 * 2 + 0x60);
    uVar11 = (ulong)uVar3;
    uVar14 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar3 < (uint)uVar14) {
      puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar11 * 0x140);
      if (uVar14 < uVar11 || uVar14 - uVar11 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      iVar7 = FUN_71025c9ac0(*(float *)(puVar2 + 0x3a),uVar1,*(uint *)(puVar2 + 0x38));
      goto LAB_7101d91998;
    }
  }
  iVar7 = 1;
LAB_7101d91998:
  uVar10 = 0;
  *(long *)(param_1 + 0x2e0) = lVar16;
  FUN_7101d8cfb0(param_1,(ulong)(iVar6 != iVar7),0,param_4,param_5,param_6,param_7,param_8);
  FUN_7101d8d450(param_1,extraout_x1,uVar10,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_60,param_1 + 0x130,(byte ****)"set_parts_sp",uVar10,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_sp_icon_txt",uVar10,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_help",uVar10,param_4,param_5,param_6,
                 param_7,param_8);
  uVar14 = (ulong)*(uint *)(param_1 + 0x288);
  uVar10 = 1;
  FUN_710377a280((long)&local_80,(byte *)"mnu_spirits_raise_sp_n",1);
  uVar11 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar11 != 0) {
    uVar8 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar11 != 0) {
    uVar8 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_60,param_1 + 0x130,(byte ****)"set_parts_param_03",uVar10,uVar14,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_58;
  if ((*(long *)(local_58 + 8) != 0) &&
     (plVar9 = (long *)FUN_71037964b0(*(long *)(local_58 + 8),0x7104401909), plVar9 != (long *)0x0))
  {
    (**(code **)(*plVar9 + 0x1a0))(0);
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar11 != 0) {
    uVar14 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar11);
  }
  if (*(int *)(param_1 + 0x2c4) != -1) {
    FUN_710373b540(param_1 + 0x298,0);
    *(undefined4 *)(param_1 + 0x298) = 0;
    FUN_71039602c0(param_1 + 0x2a0);
    *(undefined ***)(param_1 + 0x2a0) = &PTR_FUN_7104f73d50;
    if (((*(long *)(param_1 + 0x2a8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0x2b0) == DAT_7106dd53ac)) {
      piVar12 = (int *)(*(long *)(param_1 + 0x2a8) + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0x87650000000000;
    *(undefined ***)(param_1 + 0x2a0) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined1 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

