// addr:      710010a020
// offset:    0x10a020
// name:      FUN_710010a020
// mangled:   
// signature: undefined FUN_710010a020(void)


undefined8 FUN_710010a020(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(param_1 + 0x160) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(undefined1 *)(param_1 + 0x184) = 0;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar4 = "NexMatchRandomMatchmakeJob::StartNatSession";
        goto LAB_710010a11c;
      }
      if (*(ulong *)(param_1 + 0x158) < *(ulong *)(DAT_71052ac580 + 0x30)) goto LAB_710010a17c;
      lVar5 = *(long *)(param_1 + 0x150);
      if ((lVar5 == 0) || (lVar3 = FUN_71000c36b0(DAT_71052acd90), lVar5 != lVar3)) {
        return 5;
      }
      sVar1 = FUN_7100146e00(DAT_71052adb38);
      *(undefined1 *)(param_1 + 0x184) = 0;
      if (sVar1 == 1) {
        *(undefined1 *)(param_1 + 0x80) = 0;
        *(code **)(param_1 + 0x30) = FUN_710010a210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar4 = "NexMatchRandomMatchmakeJob::ChangeParticipation";
        goto LAB_710010a11c;
      }
    }
    else {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
LAB_710010a17c:
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    goto LAB_710010a11c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar4 = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_710010a11c:
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

