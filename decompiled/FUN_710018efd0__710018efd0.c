// addr:      710018efd0
// offset:    0x18efd0
// name:      FUN_710018efd0
// mangled:   
// signature: undefined FUN_710018efd0(void)


undefined8 FUN_710018efd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_7100161fa0(DAT_71052add68);
  lVar3 = *(long *)(lVar1 + 0x20);
  do {
    if (lVar3 == lVar1 + 0x18) {
LAB_710018f060:
      *(code **)(param_1 + 0x30) = FUN_710018ee90;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LeaveMeshJob::LeaveSuccess";
      return 0;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x48) == 5) &&
       (lVar2 = FUN_7100161fa0(DAT_71052add68), lVar4 != *(long *)(lVar2 + 0x98))) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
        return 5;
      }
      goto LAB_710018f060;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}

