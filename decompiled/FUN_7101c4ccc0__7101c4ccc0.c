// addr:      7101c4ccc0
// offset:    0x1c4ccc0
// name:      FUN_7101c4ccc0
// mangled:   
// signature: undefined __cdecl FUN_7101c4ccc0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c4ccc0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 local_60 [2];
  undefined **local_58;
  long local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 200) + 8),0x71042d62be);
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1a0d2d4630,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar4 & 1) != 0)) {
    FUN_71024076d0(local_60,0x1a0d2d4630);
    if (((local_50 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_48 == DAT_7106dd53ac)) {
      piVar5 = (int *)(local_50 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    local_48 = 0x87650000000000;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0;
    local_60[0] = 0;
    local_28 = 0;
  }
  local_58 = &PTR_FUN_7104f73d50;
  local_50 = 0;
  local_40 = 0;
  if (0x12 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4;
  *(int *)(lVar1 + 0x68) = *(int *)(lVar1 + 0x68) + 1;
  return;
}

