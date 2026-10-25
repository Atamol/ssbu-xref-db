// addr:      71001b87f0
// offset:    0x1b87f0
// name:      FUN_71001b87f0
// mangled:   
// signature: undefined __cdecl FUN_71001b87f0(void)


/* WARNING: Removing unreachable block (ram,0x0071001b889c) */
/* WARNING: Removing unreachable block (ram,0x0071001b88c8) */

void FUN_71001b87f0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  (**(code **)(DAT_71052aed00 + 0x10))(&DAT_71052aed00);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX-4_6_13-appc2");
  if (DAT_71052aec10 == (undefined8 *)0x0) {
    if (DAT_71052ae0a8 == (code *)0x0) {
      puVar5 = malloc(0x88);
    }
    else {
      puVar5 = (undefined8 *)(*DAT_71052ae0a8)(0x88);
    }
    *puVar5 = DAT_71052ae0b0;
    puVar7 = puVar5 + 2;
    *puVar7 = &PTR_FUN_7104f54e58;
    puVar5[7] = 0;
    puVar5[8] = &PTR_FUN_7104f54b48;
    puVar5[9] = &PTR_FUN_7104f54c30;
    puVar5[3] = &PTR_FUN_7104f552e8;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    nn::os::InitializeMutex((MutexType *)(puVar5 + 10),true,0);
    *(undefined1 *)(puVar5 + 0xf) = 0;
    *(undefined8 *)((long)puVar5 + 0x7c) = 1;
    puVar5[0xe] = &PTR_FUN_7104f54b90;
    *(undefined4 *)((long)puVar5 + 0x84) = 0;
    puVar5[8] = &PTR_FUN_7104f551a8;
    DAT_71052aec08 = 1;
    DAT_71052aec60 = puVar7;
    if (DAT_71052ae0a8 == (code *)0x0) {
      puVar5 = malloc(0x238);
    }
    else {
      puVar5 = (undefined8 *)(*DAT_71052ae0a8)(0x238);
    }
    *puVar5 = DAT_71052ae0b0;
    FUN_71001b7d40(puVar5 + 2);
    DAT_71052aec10 = puVar5 + 2;
  }
  else {
    piVar1 = (int *)(DAT_71052aec10 + 1);
    iVar6 = *piVar1;
    if (iVar6 == *piVar1) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_71001b89b8;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar2 = *piVar1, iVar2 != iVar6) {
        ClearExclusiveLocal();
        iVar6 = iVar2;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      iVar6 = iVar2;
    } while (cVar3 != '\0');
  }
LAB_71001b89b8:
                    /* WARNING: Could not recover jumptable at 0x0071001b89d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_71052aed00 + 0x20))(&DAT_71052aed00);
  return;
}

