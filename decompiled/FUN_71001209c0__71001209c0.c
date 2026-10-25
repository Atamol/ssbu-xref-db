// addr:      71001209c0
// offset:    0x1209c0
// name:      FUN_71001209c0
// mangled:   
// signature: undefined FUN_71001209c0(void)


undefined8 FUN_71001209c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x178) + 0xb8))();
  if ((uVar4 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x110) == 3) {
    uVar3 = FUN_7100191bb0(DAT_71052adfc0);
    if ((uVar3 & 0xffff) < 3) {
      uVar3 = FUN_7100191bb0(DAT_71052adfc0);
      lVar2 = DAT_71052adb38;
      if ((uVar3 & 0xffff) != 0) {
        puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
        FUN_7100150b70((long *)*puVar1);
        (**(code **)(**(long **)(lVar2 + 8) + 0x28))();
        FUN_710011beb0(*(long *)(param_1 + 0x178),*(undefined4 *)(param_1 + 100));
        pcVar6 = FUN_7100120290;
        pcVar5 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
        goto LAB_7100120ae0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x7d) = 1;
    }
    aiStack_38[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar6 = FUN_7100143750;
    pcVar5 = "LanMatchRandomMatchmakeJob::LeaveMesh";
  }
  else {
    pcVar6 = FUN_71001438f0;
    pcVar5 = "LanMatchRandomMatchmakeJob::CompleteProcess";
  }
LAB_7100120ae0:
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

