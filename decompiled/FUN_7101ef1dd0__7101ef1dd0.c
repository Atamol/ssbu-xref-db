// addr:      7101ef1dd0
// offset:    0x1ef1dd0
// name:      FUN_7101ef1dd0
// mangled:   
// signature: undefined __cdecl FUN_7101ef1dd0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef1dd0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 local_60 [4];
  long local_50;
  int local_48;
  
  if (*(int *)(param_1 + 0x24c) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x260),0x71042e7af5);
    if (*(char *)(*DAT_7105328e18 + 0x3a4) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x260),0x7104401d77);
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
        return;
      }
      uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xfa4d292ad,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_60,0xfa4d292ad);
      if (local_50 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_48 != DAT_7106dd53ac) {
        return;
      }
      piVar7 = (int *)(local_50 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x260),0x710434ab9c);
    uVar1 = *(uint *)(param_1 + 0x244);
    if (0x12 < uVar1) goto LAB_7101ef1f68;
    uVar8 = 5;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x260) + 8);
    if (((lVar4 != 0) &&
        (plVar5 = (long *)FUN_71037964b0(lVar4,0x7104401d77), plVar5 != (long *)0x0)) &&
       (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) == 0)) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x244);
    if (0x12 < uVar1) {
LAB_7101ef1f68:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = 2;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1f8) = uVar8;
  return;
}

