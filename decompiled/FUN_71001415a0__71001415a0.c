// addr:      71001415a0
// offset:    0x1415a0
// name:      FUN_71001415a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001415a0(long * param_1)


undefined8 FUN_71001415a0(long *param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar3 = FUN_7100146ba0(DAT_71052adb38);
  if ((uVar3 < 10 && (1 << (ulong)(uVar3 & 0x1f) & 0x3a0U) != 0) ||
     (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar4 == 6)) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  if ((ulong)param_1[0x12] <= *(ulong *)(DAT_71052ac580 + 0x30)) {
    pcVar6 = *(code **)(*param_1 + 0x60);
    goto LAB_710014172c;
  }
  uVar5 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
  if (*(int *)(DAT_71052adb38 + (ulong)(uVar5 == 0) * 4 + 0x180) == 0) {
    if ((*(int *)(DAT_71052adb38 + uVar5 * 4 + 0x180) != 0) &&
       (uVar5 = (**(code **)(**(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168) + 0xe0))(),
       (uVar5 & 1) != 0)) {
      iVar4 = *(int *)(lVar1 + 0xd4);
      if (iVar4 == 2) goto LAB_71001416c4;
      goto LAB_71001416dc;
    }
  }
  else {
    uVar5 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)(uVar5 == 0) * 8 + 0x168) + 0xe0))();
    if ((uVar5 & 1) == 0) {
      uVar5 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168) + 0xe0))
                        ();
      if ((uVar5 & 1) != 0) {
        FUN_7100150ec0(*(long *)(lVar1 + 0xb8),
                       *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180));
      }
    }
    else {
      iVar4 = *(int *)(lVar1 + 0xd4);
      if (iVar4 == 4) {
LAB_71001416c4:
        uVar2 = FUN_7100146e00(lVar1);
        if (uVar2 < 3) goto LAB_7100141724;
        iVar4 = *(int *)(lVar1 + 0xd4);
      }
LAB_71001416dc:
      if (iVar4 != 3) {
        return 5;
      }
    }
  }
LAB_7100141724:
  pcVar6 = *(code **)(*param_1 + 0x38);
LAB_710014172c:
  (*pcVar6)(param_1);
  return 0;
}

