// addr:      71000f4300
// offset:    0xf4300
// name:      FUN_71000f4300
// mangled:   
// signature: undefined FUN_71000f4300(void)


undefined8 FUN_71000f4300(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_b0 [16];
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  lVar7 = DAT_71052adb38;
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  (**(code **)(**(long **)(lVar7 + 8) + 0x28))();
  lVar7 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x11a) == '\0') {
    if (((*(char *)(param_1 + 0x11b) == '\0') && (*(char *)(param_1 + 0x11e) == '\0')) &&
       (*(char *)(param_1 + 0x11d) == '\0')) {
      if (*(char *)(param_1 + 0x119) == '\0') {
        *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
        *(code **)(param_1 + 0x30) = FUN_71000f2880;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      FUN_710015fd60(auStack_b0);
      FUN_710015fea0(param_1 + 0x90,(long)auStack_b0);
      *(code **)(param_1 + 0x30) = FUN_71000f3580;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::GetStationLocation";
      FUN_710015ff20(auStack_b0);
      return 0;
    }
    plVar5 = FUN_71000bb680();
    *(long *)(param_1 + 0x140) = *(long *)(lVar7 + 0x30) + *plVar5 * 30000;
    lVar7 = DAT_71052ac580;
    plVar5 = FUN_71000bb680();
    lVar7 = *(long *)(lVar7 + 0x30) + *plVar5 * 10000;
    *(undefined1 *)(param_1 + 0x16c) = 1;
  }
  else {
    plVar5 = FUN_71000bb680();
    *(long *)(param_1 + 0x140) = *(long *)(lVar7 + 0x30) + *plVar5 * 30000;
    lVar7 = DAT_71052ac580;
    cVar3 = *(char *)(param_1 + 0x11d);
    plVar5 = FUN_71000bb680();
    lVar7 = *(long *)(lVar7 + 0x30);
    lVar2 = 60000;
    if (cVar3 != '\0') {
      lVar2 = 10000;
    }
    lVar6 = *plVar5;
    *(undefined1 *)(param_1 + 0x16c) = 1;
    lVar7 = lVar7 + lVar6 * lVar2;
  }
  *(long *)(param_1 + 0x148) = lVar7;
  *(code **)(param_1 + 0x30) = FUN_71000f4b10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::WaitForRetryJoinMesh";
  return 5;
}

