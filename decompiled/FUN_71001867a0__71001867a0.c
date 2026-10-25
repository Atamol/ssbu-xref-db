// addr:      71001867a0
// offset:    0x1867a0
// name:      FUN_71001867a0
// mangled:   
// signature: undefined FUN_71001867a0(void)


undefined8 FUN_71001867a0(long *param_1)

{
  bool bVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uStack_28;
  
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 == (int *)0x0) || ((char)piVar2[10] == '\0')) {
    if (*(char *)(param_1[0xe] + 0x78) == '\0') {
      uStack_28 = 0;
      FUN_71000bb5d0(&uStack_28);
      *(char *)(param_1[0xe] + 0x78) = (char)uStack_28 + (char)(uStack_28 / 0xfe) * '\x02' + '\x02';
    }
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (((uVar3 & 1) == 0) && (bVar1 = FUN_7100186950((long)param_1), bVar1)) {
      if (0x1f < *(byte *)(param_1[0xe] + 0x38)) {
        *(undefined8 *)(param_1[0xe] + 0x80) = *DAT_71052add68;
      }
      *(undefined1 *)((long)param_1 + 0x79) = 0;
      lVar6 = DAT_71052ac580;
      lVar5 = param_1[0xc];
      plVar4 = FUN_71000bb680();
      lVar6 = *(long *)(lVar6 + 0x30);
      lVar7 = *plVar4;
      param_1[6] = (long)FUN_7100186b50;
      param_1[7] = 0;
      param_1[0xb] = lVar6 + lVar7 * (int)lVar5;
      param_1[8] = (long)"ConnectStationJob::WaitRequestAck";
      return 5;
    }
    param_1[6] = (long)FUN_7100186ed0;
    param_1[7] = 0;
    param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
    return 0;
  }
  if (2 < *piVar2 - 2U) {
    FUN_71000b4260(piVar2);
  }
  lVar5 = param_1[0xe];
  param_1[0xd] = 0;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x48) == 4) {
      *(undefined4 *)(lVar5 + 0x48) = 6;
      return 1;
    }
    return 1;
  }
  return 1;
}

