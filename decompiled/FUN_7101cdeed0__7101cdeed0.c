// addr:      7101cdeed0
// offset:    0x1cdeed0
// name:      FUN_7101cdeed0
// mangled:   
// signature: undefined __cdecl FUN_7101cdeed0(long param_1, undefined8 param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cdeed0(long param_1,undefined8 param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ushort uVar4;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined4 local_c0 [2];
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined **local_40;
  long *local_38;
  uint uVar5;
  
  if (*(ulong *)(param_1 + 0x290) == 0) {
    uVar5 = 0xffff;
    iVar1 = *(int *)(param_1 + 0x22c);
  }
  else {
    param_3 = (ulong)*(uint *)(param_1 + 0x288);
    uVar4 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_1 + 0x290),
                           *(uint *)(param_1 + 0x288));
    uVar5 = (uint)uVar4;
    iVar1 = *(int *)(param_1 + 0x22c);
  }
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x2d0);
    if (*(char *)(lVar7 + 0x280) != '\0') {
      FUN_7103771be0((long *)(param_1 + 0x2d0),7,0);
      lVar7 = *(long *)(param_1 + 0x2d0);
    }
    if (*(int *)(lVar7 + 0x25c) != 7) {
      return;
    }
    lVar7 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 3) < 4) {
      uVar12 = 0;
      cVar2 = *(char *)(lVar7 + 0x191);
    }
    else {
      uVar12 = *(ulong *)(*(long *)(lVar7 + 0x40) + 0x18);
      cVar2 = *(char *)(lVar7 + 0x191);
    }
    if ((cVar2 == '\0') &&
       (uVar6 = FUN_7103313f20(lVar7,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                               ,param_8), (uVar6 & 1) != 0)) {
      FUN_71024076d0(local_c0,uVar12);
      if ((local_b0 != 0) && ((DAT_7106dd53a8 == '\x01' && ((int)local_a8 == DAT_7106dd53ac)))) {
        piVar8 = (int *)(local_b0 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      local_a8 = 0x87650000000000;
      local_98 = 0xffffffffffffffff;
      uStack_90 = 0;
      local_c0[0] = 0;
      local_88 = 0;
    }
    local_b8 = &PTR_FUN_7104f73d50;
    local_b0 = 0;
    local_a0 = 0;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 600),0x71042d63b4);
    FUN_7101cdfad0(param_1 + 0x250,1,(ulong)uVar5,1,param_5,param_6,param_7,param_8);
    if (0x12 < *(uint *)(param_1 + 0x224)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x224) * 4 + 0x1d8) = 2;
    return;
  }
  lVar7 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 3) < 6) {
    uVar12 = 0;
    cVar2 = *(char *)(lVar7 + 0x191);
  }
  else {
    uVar12 = *(ulong *)(*(long *)(lVar7 + 0x40) + 0x28);
    cVar2 = *(char *)(lVar7 + 0x191);
  }
  if (cVar2 == '\0') {
    param_3 = 4;
    uVar6 = FUN_7103313f20(lVar7,uVar12,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                           param_8);
    if ((uVar6 & 1) != 0) {
      FUN_71024076d0(local_80,uVar12);
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar8 = (int *)(local_70 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_7101cdf054;
    }
  }
  local_68 = 0x87650000000000;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0;
  local_80[0] = 0;
  local_48 = 0;
LAB_7101cdf054:
  local_78 = &PTR_FUN_7104f73d50;
  local_70 = 0;
  local_60 = 0;
  FUN_7103776910(&local_40,param_1 + 0x250,(long ****)"set_fxui_like_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar9 = local_38;
  FUN_710377aa20((long *)*local_38,0);
  lVar7 = *local_38;
  if (lVar7 == 0) {
    local_38 = (long *)0x0;
  }
  else {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
    local_38 = (long *)*local_38;
  }
  FUN_710377acb0(local_38,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  (**(code **)(**(long **)(param_1 + 0x2b0) + 0x70))(*(long **)(param_1 + 0x2b0),0);
  FUN_7101cdf660(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x2b8) + 0x70))(*(long **)(param_1 + 0x2b8),0);
  (**(code **)(**(long **)(param_1 + 0x2c0) + 0x70))(*(long **)(param_1 + 0x2c0),0);
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x70))(*(long **)(param_1 + 0x2c8),0);
  (**(code **)(**(long **)(param_1 + 0x2d8) + 0x70))(*(long **)(param_1 + 0x2d8),0);
  lVar7 = *(long *)(param_1 + 0x2d0);
  plVar9 = *(long **)(lVar7 + 0x1c8);
  while (plVar9 != (long *)(lVar7 + 0x1d0)) {
    *(undefined4 *)(plVar9 + 5) = 0;
    plVar10 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar10 = plVar9 + 2;
      bVar3 = *(long **)*plVar10 != plVar9;
      plVar9 = (long *)*plVar10;
      if (bVar3) {
        do {
          lVar11 = *plVar10;
          plVar10 = (long *)(lVar11 + 0x10);
          plVar9 = (long *)*plVar10;
        } while (*plVar9 != lVar11);
      }
    }
    else {
      do {
        plVar9 = plVar10;
        plVar10 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  *(undefined8 *)(lVar7 + 600) = 0xffffffffffffffff;
  *(undefined8 *)(lVar7 + 0x250) = 0xffffffffffffffff;
  *(undefined1 *)(lVar7 + 0x280) = 0;
  *(undefined4 *)(lVar7 + 0x282) = 0;
  FUN_7103771a80((long *)(param_1 + 0x2d0),7,1);
  (**(code **)(**(long **)(param_1 + 0x2d0) + 0x70))(*(long **)(param_1 + 0x2d0),1);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 600),0x71042f8402);
  FUN_7101cdfad0(param_1 + 0x250,0,(ulong)uVar5,1,param_5,param_6,param_7,param_8);
  return;
}

