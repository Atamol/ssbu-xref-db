// addr:      71001097d0
// offset:    0x1097d0
// name:      FUN_71001097d0
// mangled:   
// signature: undefined FUN_71001097d0(void)


undefined8 FUN_71001097d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  lVar9 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x68) != '\0') {
LAB_7100109840:
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100108de0;
    pcVar7 = "NexMatchRandomMatchmakeJob::StartNatSession";
    goto LAB_7100109940;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    if (((*(char *)(param_1 + 0x7e) != '\0') || (*(char *)(param_1 + 0x81) != '\0')) ||
       (*(char *)(param_1 + 0x80) != '\0')) {
      plVar6 = FUN_71000bb680();
      *(long *)(param_1 + 0x158) = *(long *)(lVar9 + 0x30) + *plVar6 * 30000;
      lVar9 = DAT_71052ac580;
      plVar6 = FUN_71000bb680();
      lVar9 = *(long *)(lVar9 + 0x30) + *plVar6 * 10000;
      *(undefined1 *)(param_1 + 0x184) = 1;
      *(code **)(param_1 + 0x30) = FUN_710010a020;
      goto LAB_7100109930;
    }
    if (*(char *)(param_1 + 0x7c) != '\0') goto LAB_7100109840;
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    pcVar7 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  }
  else {
    plVar6 = FUN_71000bb680();
    *(long *)(param_1 + 0x158) = *(long *)(lVar9 + 0x30) + *plVar6 * 30000;
    lVar9 = DAT_71052ac580;
    cVar3 = *(char *)(param_1 + 0x80);
    plVar6 = FUN_71000bb680();
    lVar9 = *(long *)(lVar9 + 0x30);
    lVar2 = 60000;
    if (cVar3 != '\0') {
      lVar2 = 10000;
    }
    lVar8 = *plVar6;
    *(undefined1 *)(param_1 + 0x184) = 1;
    lVar9 = lVar9 + lVar8 * lVar2;
    *(code **)(param_1 + 0x30) = FUN_710010a020;
LAB_7100109930:
    *(long *)(param_1 + 0x160) = lVar9;
    pcVar7 = "NexMatchRandomMatchmakeJob::WaitForRetryJoinMesh";
  }
  uVar5 = 5;
LAB_7100109940:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar5;
}

