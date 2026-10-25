// addr:      71000fbbe0
// offset:    0xfbbe0
// name:      FUN_71000fbbe0
// mangled:   
// signature: undefined FUN_71000fbbe0(void)


undefined8 FUN_71000fbbe0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    if (*(ulong *)(param_1 + 0x210) < *(ulong *)(DAT_71052ac580 + 0x30)) {
      aiStack_50[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    plVar10 = *(long **)(DAT_71052adb38 + 8);
    plVar5 = (long *)FUN_71000ecfb0((long)plVar10,0);
    if (plVar5 == (long *)0x0) {
      uVar3 = 1;
      plVar5 = (long *)FUN_71000ecfb0((long)plVar10,1);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xf0);
      uVar6 = (**(code **)(*plVar5 + 0x18))();
      uVar3 = (**(code **)(*plVar10 + 0x60))(plVar10,uVar1,uVar6);
      plVar5 = (long *)FUN_71000ecfb0((long)plVar10,1);
    }
    if (plVar5 != (long *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0xf0);
      uVar6 = (**(code **)(*plVar5 + 0x18))();
      uVar4 = (**(code **)(*plVar10 + 0x60))(plVar10,uVar1,uVar6);
      uVar3 = uVar3 & uVar4;
    }
    plVar5 = (long *)FUN_71000ecfb0((long)plVar10,2);
    if (plVar5 != (long *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0xf0);
      uVar6 = (**(code **)(*plVar5 + 0x18))();
      uVar4 = (**(code **)(*plVar10 + 0x60))(plVar10,uVar1,uVar6);
      uVar3 = uVar3 & uVar4;
    }
    plVar5 = (long *)FUN_71000ecfb0((long)plVar10,3);
    if (plVar5 != (long *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 0xf0);
      uVar6 = (**(code **)(*plVar5 + 0x18))();
      uVar4 = (**(code **)(*plVar10 + 0x60))(plVar10,uVar1,uVar6);
      uVar3 = uVar3 & uVar4;
    }
    if ((uVar3 & 1) == 0) {
      aiStack_50[0] = 0;
      aiStack_50[1] = 0x20000;
      aiStack_50[2] = 0;
      (**(code **)(*plVar10 + 0x38))(plVar10,aiStack_50);
      return 5;
    }
    lVar8 = *(long *)(DAT_71052ac580 + 0x30);
    lVar9 = *(long *)(param_1 + 0x128);
    plVar5 = FUN_71000bb680();
    DAT_71052ac93c = 0;
    if (*plVar5 != 0) {
      DAT_71052ac93c = (undefined4)((lVar8 - lVar9) / *plVar5);
    }
    pcVar7 = "NexMatchJointSessionJob::SendNextSessionId";
    *(code **)(param_1 + 0x30) = FUN_71000fc2f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000fbd58;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fbd58:
  *(char **)(param_1 + 0x40) = pcVar7;
  return 0;
}

