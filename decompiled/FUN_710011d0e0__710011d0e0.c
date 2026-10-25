// addr:      710011d0e0
// offset:    0x11d0e0
// name:      FUN_710011d0e0
// mangled:   
// signature: undefined FUN_710011d0e0(void)


undefined8 FUN_710011d0e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0x138) + 0xb8))();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x60) == 3) {
      aiStack_38[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
      uVar1 = FUN_7100191bb0(DAT_71052adfc0);
      if (2 < (uVar1 & 0xffff)) {
        *(undefined1 *)(param_1 + 0x11a) = 1;
      }
      pcVar4 = FUN_710013f090;
      pcVar3 = "LanMatchJoinSessionJob::LeaveMesh";
    }
    else {
      pcVar4 = FUN_710013f3b0;
      pcVar3 = "LanMatchJoinSessionJob::CompleteProcess";
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar3;
    return 0;
  }
  return 5;
}

