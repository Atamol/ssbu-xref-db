// addr:      7101e85830
// offset:    0x1e85830
// name:      FUN_7101e85830
// mangled:   
// signature: undefined __cdecl FUN_7101e85830(long * param_1)


void FUN_7101e85830(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)((long)param_1 + 0x16) != '\0') {
    lVar6 = *param_1;
    lVar1 = *(long *)(lVar6 + 0x58) + (ulong)*(byte *)((long)param_1 + 0x17) * 0x10;
    if (lVar1 != 0 &&
        (ulong)*(byte *)((long)param_1 + 0x17) <
        (ulong)(*(long *)(lVar6 + 0x60) - *(long *)(lVar6 + 0x58) >> 4)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar1 + 8),0x71042b4a6a);
      lVar6 = *param_1;
    }
    if (*(long *)(lVar6 + 0xa0) != 0) {
      FUN_710373b7f0(*(long *)(lVar6 + 0xa0));
      uVar4 = *(ulong *)(lVar6 + 0xa0);
      *(undefined8 *)(lVar6 + 0xa0) = 0;
      if (uVar4 != 0) {
        *(undefined ***)(uVar4 + 8) = &PTR_FUN_7104f73d50;
        if (((*(long *)(uVar4 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(uVar4 + 0x18) == DAT_7106dd53ac)) {
          piVar5 = (int *)(*(long *)(uVar4 + 0x10) + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
            if (bVar3) {
              *piVar5 = *piVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined8 *)(uVar4 + 0x10) = 0;
        *(undefined1 *)(uVar4 + 0x20) = 0;
        FUN_710392eb40(uVar4);
      }
    }
    *(undefined1 *)((long)param_1 + 0x16) = 0;
  }
  return;
}

