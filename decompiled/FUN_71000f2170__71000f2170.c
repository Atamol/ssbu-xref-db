// addr:      71000f2170
// offset:    0xf2170
// name:      FUN_71000f2170
// mangled:   
// signature: undefined FUN_71000f2170(void)


void FUN_71000f2170(int *param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  lVar4 = DAT_71052adb38;
  iVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (iVar1 == 0) {
    aiStack_50[0] = 0x10c07;
  }
  else {
    FUN_71000e4820(aiStack_50,*(long *)(lVar4 + (ulong)*(byte *)(lVar4 + 0x162) * 8 + 0x168),
                   (long)param_3);
    *(undefined1 *)(param_2 + 0x16c) = 0;
    lVar4 = *(long *)(lVar4 + 8);
    *(undefined4 *)(param_2 + 0x168) = 0;
    iVar1 = FUN_71000ee2c0(lVar4);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        iVar1 = FUN_71000ee290(lVar4,uVar5);
        if (iVar1 != 0) {
          uVar2 = FUN_71000ee290(lVar4,uVar5);
          *(undefined4 *)(param_2 + (ulong)*(uint *)(param_2 + 0x168) * 4 + 0x158) = uVar2;
          *(int *)(param_2 + 0x168) = *(int *)(param_2 + 0x168) + 1;
        }
        uVar5 = uVar5 + 1;
        uVar3 = FUN_71000ee2c0(lVar4);
      } while (uVar5 < uVar3);
    }
    *(char **)(param_2 + 0x40) = "NexMatchJoinSessionJob::LeaveJoinedMatchmakeSession";
    *(code **)(param_2 + 0x30) = FUN_71000f22b0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    aiStack_50[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}

