// addr:      710011d5a0
// offset:    0x11d5a0
// name:      FUN_710011d5a0
// mangled:   
// signature: undefined FUN_710011d5a0(void)


undefined8 FUN_710011d5a0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    pcVar8 = FUN_710013e970;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x120) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x11a) == '\0' && (*(char *)(param_1 + 0x11b) == '\0')) &&
         (*(char *)(param_1 + 0x11d) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x11f) + 1, *(byte *)(param_1 + 0x11f) = bVar2,
       lVar3 = DAT_71052adb38, 1 < bVar2)) {
      pcVar8 = FUN_710013f360;
      uVar5 = 5;
      pcVar9 = "LanMatchJoinSessionJob::MeshCleanup";
    }
    else {
      puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
      FUN_7100150b70((long *)*puVar1);
      (**(code **)(**(long **)(lVar3 + 8) + 0x28))();
      lVar6 = FUN_7100193580(DAT_71052adfc0);
      lVar3 = DAT_71052ac580;
      iVar4 = *(int *)(lVar6 + 0x68);
      plVar7 = FUN_71000bb680();
      uVar5 = 5;
      *(long *)(param_1 + 0x140) = *(long *)(lVar3 + 0x30) + *plVar7 * ((long)iVar4 + 9000);
      pcVar8 = FUN_710011d3f0;
      pcVar9 = "LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession";
    }
  }
  *(code **)(param_1 + 0x30) = pcVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  return uVar5;
}

