// addr:      71001a3960
// offset:    0x1a3960
// name:      FUN_71001a3960
// mangled:   
// signature: undefined8 __cdecl FUN_71001a3960(long param_1)


undefined8 FUN_71001a3960(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char cVar7;
  int local_470 [4];
  undefined8 local_460;
  undefined4 local_458;
  
  local_460 = 0x80000000000;
  local_458 = 0;
  FUN_71000bec90();
  *(undefined1 *)(param_1 + 0xb9) = 1;
  plVar2 = (long *)FUN_7100161fa0(DAT_71052add68);
  lVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1 + 0x90);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x48) != 5)) {
LAB_71001a3a44:
    *(code **)(param_1 + 0x30) = FUN_71001a3920;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar6 = "ProcessJoinRequestJob::InitialStep";
  }
  else {
    uVar1 = FUN_7100192320(DAT_71052adfc0,lVar3);
    if ((~uVar1 & 0xff) != 0) {
      *(char *)(param_1 + 0xba) = (char)uVar1;
      *(code **)(param_1 + 0x30) = FUN_71001a3ae0;
LAB_71001a3a00:
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar6 = "ProcessJoinRequestJob::SendJoinRefused";
      goto LAB_71001a3a58;
    }
    if (*(long *)(DAT_71052adfc0 + 0x60) != 0) {
      FUN_710011bce0((long)&local_460);
      lVar4 = FUN_7100190ca0(DAT_71052adfc0);
      FUN_7100189240(local_470,lVar4,lVar3,&local_460);
      if (local_470[0] != 0) goto LAB_71001a3a44;
      uVar5 = (**(code **)(DAT_71052adfc0 + 0x60))(&local_460);
      if ((uVar5 & 1) == 0) {
        cVar7 = '\x01';
        *(undefined1 *)(param_1 + 0xba) = 1;
        if (DAT_71052acc25 != -1) {
          cVar7 = DAT_71052acc25 + '\x01';
        }
        DAT_71052acc25 = cVar7;
        *(code **)(param_1 + 0x30) = FUN_71001a3ae0;
        goto LAB_71001a3a00;
      }
    }
    *(code **)(param_1 + 0x30) = FUN_71001a3b80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar6 = "ProcessJoinRequestJob::SendJoinResponse";
  }
LAB_71001a3a58:
  *(char **)(param_1 + 0x40) = pcVar6;
  return 0;
}

