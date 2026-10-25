// addr:      7101af1980
// offset:    0x1af1980
// name:      FUN_7101af1980
// mangled:   
// signature: undefined __cdecl FUN_7101af1980(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af1980(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 1;
    return;
  }
  plVar9 = (long *)(param_1 + 0xd8);
  lVar7 = *plVar9;
  if (*(char *)(lVar7 + 0x280) != '\0') {
    FUN_7103771be0(plVar9,0,0);
    lVar7 = *plVar9;
  }
  iVar1 = *(int *)(lVar7 + 0x25c);
  if (iVar1 != -1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
    if (((lVar7 != 0) &&
        (plVar9 = (long *)FUN_71037964b0(lVar7,0x710429232d), plVar9 != (long *)0x0)) &&
       (uVar4 = (**(code **)(*plVar9 + 0x138))(), (uVar4 & 1) == 0)) {
      FUN_7103778760(*(long *)(param_1 + 0xd0),0x710429232d);
    }
    uVar6 = 3;
    if (iVar1 != 1) {
      uVar6 = 1;
    }
    *(undefined4 *)(param_1 + 0xec) = uVar6;
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
    lVar7 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar7 + 0x48) - *(long *)(lVar7 + 0x40) >> 3) < 3) {
      uVar4 = 0;
      cVar2 = *(char *)(lVar7 + 0x191);
    }
    else {
      uVar4 = *(ulong *)(*(long *)(lVar7 + 0x40) + 0x10);
      cVar2 = *(char *)(lVar7 + 0x191);
    }
    if ((cVar2 == '\0') &&
       (uVar5 = FUN_7103313f20(lVar7,uVar4,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                               param_8), (uVar5 & 1) != 0)) {
      FUN_71024076d0(local_70,uVar4);
      if ((local_60 != 0) && ((DAT_7106dd53a8 == '\x01' && ((int)local_58 == DAT_7106dd53ac)))) {
        piVar8 = (int *)(local_60 + 0x38);
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
      local_58 = 0x87650000000000;
      local_48 = 0xffffffffffffffff;
      uStack_40 = 0;
      local_70[0] = 0;
      local_38 = 0;
    }
    local_68 = &PTR_FUN_7104f73d50;
    local_60 = 0;
    local_50 = 0;
    if (0x12 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
    return;
  }
  return;
}

