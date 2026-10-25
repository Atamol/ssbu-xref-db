// addr:      710011d3f0
// offset:    0x11d3f0
// name:      FUN_710011d3f0
// mangled:   
// signature: undefined FUN_710011d3f0(void)


undefined8 FUN_710011d3f0(long param_1)

{
  int iVar1;
  int aiStack_b8 [4];
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_a8[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 8;
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    aiStack_a8[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013f360;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::MeshCleanup";
    return 0;
  }
  if (*(ulong *)(param_1 + 0x140) < *(ulong *)(DAT_71052ac580 + 0x30)) {
    FUN_710015fd60((undefined8 *)aiStack_a8);
    FUN_710015fea0(param_1 + 0x90,(long)aiStack_a8);
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b8 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b8 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_b8);
    *(code **)(param_1 + 0x30) = FUN_710011c8d0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::JoinMatchmakeSession";
    FUN_710015ff20((undefined8 *)aiStack_a8);
    return 0;
  }
  return 5;
}

