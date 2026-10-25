// addr:      7101eb3a40
// offset:    0x1eb3a40
// name:      FUN_7101eb3a40
// mangled:   
// signature: undefined __cdecl FUN_7101eb3a40(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eb3a40(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined4 local_b0 [4];
  long local_a0;
  int local_98;
  undefined4 local_70 [4];
  long local_60;
  int local_58;
  
  lVar8 = **(long **)(param_1 + 8);
  lVar3 = *(long *)(lVar8 + 0x10);
  bVar2 = *(int *)(param_1 + 0x270) != 1;
  if (*(char *)(*(long *)(param_1 + 0x318) + 0x161) == '\0') {
    if (bVar2) {
      FUN_7103778300(0x3f800000,lVar3,0x710435befc);
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x71043cfc04);
      *(undefined4 *)(param_1 + 0x270) = 1;
      lVar3 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3) < 6) {
        uVar5 = 0;
        cVar1 = *(char *)(lVar3 + 0x191);
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar3 + 0x40) + 0x28);
        cVar1 = *(char *)(lVar3 + 0x191);
      }
      if (cVar1 != '\0') {
        return;
      }
      uVar6 = FUN_7103313f20(lVar3,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_b0,uVar5);
      if (local_a0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_98 != DAT_7106dd53ac) {
        return;
      }
      piVar7 = (int *)(local_a0 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      return;
    }
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 == 0) goto LAB_7101eb3b58;
    plVar4 = (long *)FUN_71037964b0(lVar3,0x710435befc);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x138))();
      if ((uVar5 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar8 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb3b58;
    }
    plVar4 = (long *)FUN_71037964b0(lVar3,0x71043cfc04);
  }
  else {
    if (bVar2) {
      FUN_7103778300(0x3f800000,lVar3,0x710435befc);
      FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x710425fc28);
      if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1d8);
      }
      FUN_7101ec5050(*(long *)(param_1 + 0x318),1);
      *(undefined4 *)(param_1 + 0x270) = 1;
      lVar3 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40) >> 3) < 6) {
        uVar5 = 0;
        cVar1 = *(char *)(lVar3 + 0x191);
      }
      else {
        uVar5 = *(ulong *)(*(long *)(lVar3 + 0x40) + 0x28);
        cVar1 = *(char *)(lVar3 + 0x191);
      }
      if (cVar1 != '\0') {
        return;
      }
      uVar6 = FUN_7103313f20(lVar3,uVar5,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_70,uVar5);
      if (local_60 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_58 != DAT_7106dd53ac) {
        return;
      }
      piVar7 = (int *)(local_60 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      return;
    }
    lVar3 = *(long *)(lVar3 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)FUN_71037964b0(lVar3,0x710435befc);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar3 = *(long *)(*(long *)(lVar8 + 0x10) + 8);
        if (lVar3 == 0) goto LAB_7101eb3adc;
      }
      plVar4 = (long *)FUN_71037964b0(lVar3,0x710425fc28);
      if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
        return;
      }
    }
LAB_7101eb3adc:
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) == '\0') goto LAB_7101eb3b58;
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1e0) + 8);
  }
  if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
    return;
  }
LAB_7101eb3b58:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

