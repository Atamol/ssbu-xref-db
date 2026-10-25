// addr:      7101c018d0
// offset:    0x1c018d0
// name:      FUN_7101c018d0
// mangled:   
// signature: undefined __cdecl FUN_7101c018d0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c018d0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 local_60 [4];
  long local_50;
  int local_48;
  
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x80) + 0x10),0x7104453107);
  if (*(int *)(param_1 + 0xbcc) == 1) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x80) + 0x10),0x710435b6d2);
    if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19a1900879,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar3 & 1) != 0)) &&
        (FUN_71024076d0(local_60,0x19a1900879), local_50 != 0)) &&
       ((DAT_7106dd53a8 == '\x01' && (local_48 == DAT_7106dd53ac)))) {
      piVar4 = (int *)(local_50 + 0x38);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  return;
}

