// addr:      71001042d0
// offset:    0x1042d0
// name:      FUN_71001042d0
// mangled:   
// signature: undefined FUN_71001042d0(void)


undefined8 FUN_71001042d0(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  int aiStack_158 [4];
  long alStack_148 [31];
  
  lVar1 = DAT_71052adb38;
  if ((*(int *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 4 + 0x180) !=
       0) && (*(int *)(DAT_71052adb38 + 0xd4) - 3U < 2)) {
    lVar2 = FUN_7100193a50(DAT_71052adfc0);
    lVar6 = *(long *)(lVar2 + 8);
    if (lVar6 == lVar2) {
      uVar4 = 0;
    }
    else {
      lVar5 = *(long *)(lVar1 + 0xb8);
      uVar4 = 0;
      do {
        uVar3 = FUN_7100150d50(lVar5,*(long *)(lVar6 + 0x10),aiStack_158);
        if (((uVar3 & 1) != 0) &&
           (aiStack_158[0] == *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180))) {
          uVar3 = (ulong)uVar4;
          uVar4 = uVar4 + 1;
          alStack_148[uVar3] = *(long *)(lVar6 + 0x10);
        }
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar2);
    }
    uVar3 = (ulong)(*(char *)(lVar1 + 0x162) == '\0');
    FUN_71000e2210(aiStack_158,*(long *)(lVar1 + uVar3 * 8 + 0x168),(int *)(param_1 + 0xc),
                   *(int *)(lVar1 + uVar3 * 4 + 0x180),alStack_148,uVar4);
    if (aiStack_158[0] == 0) {
      param_1[8] = (long)"NexMatchLeaveSessionJob::WaitMigrateMatchmakeSessionOwner";
      param_1[6] = (long)FUN_7100104430;
      param_1[7] = 0;
      return 5;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  return 0;
}

