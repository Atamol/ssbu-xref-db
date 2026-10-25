// addr:      71000fd6b0
// offset:    0xfd6b0
// name:      FUN_71000fd6b0
// mangled:   
// signature: undefined FUN_71000fd6b0(void)


undefined8 FUN_71000fd6b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined4 *)(param_1 + 0x230) = 0xe;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 7) {
    aiStack_50[0] = 0xc420;
  }
  else if (iVar4 == 6) {
    aiStack_50[0] = 0xa471;
  }
  else if (iVar4 == 5) {
    aiStack_50[0] = 0xc406;
  }
  else {
    if (iVar4 != 8) {
      *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
      puVar2 = DAT_71052adfc0;
      FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
      aiStack_60[0] = 0x6c50;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
        bVar3 = FUN_7100140060(param_1);
        lVar1 = DAT_71052ac580;
        if (bVar3) {
          uVar5 = 0;
          *(code **)(param_1 + 0x30) = FUN_71000fe3b0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          pcVar8 = "NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession";
        }
        else {
          plVar7 = FUN_71000bb680();
          uVar5 = 0;
          *(long *)(param_1 + 0x208) = *(long *)(lVar1 + 0x30) + *plVar7 * 5000;
          *(code **)(param_1 + 0x30) = FUN_71000fe620;
          *(undefined8 *)(param_1 + 0x38) = 0;
          pcVar8 = "NexMatchJointSessionJob::WaitMeshRestart";
        }
        goto LAB_71000fd7a4;
      }
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      bVar3 = FUN_71001931d0((long)puVar2);
      if (bVar3) {
        bVar3 = FUN_7100140e30(param_1);
        if (((bVar3) || (*(int *)(param_1 + 0x90) == 9)) ||
           (uVar6 = FUN_7100146ed0(DAT_71052adb38), (uVar6 & 1) == 0)) {
          FUN_7100191ee0(aiStack_60,puVar2);
          FUN_71000bcf30(aiStack_50,aiStack_60);
          *(undefined4 *)(param_1 + 0x94) = 3;
          goto joined_r0x0071000fd92c;
        }
        FUN_71001921b0(aiStack_60,puVar2);
        FUN_71000bcf30(aiStack_50,aiStack_60);
        *(undefined4 *)(param_1 + 0x94) = 2;
        if (aiStack_50[0] == 0) goto LAB_71000fd97c;
LAB_71000fd930:
        bVar3 = FUN_7100140060(param_1);
        lVar1 = DAT_71052ac580;
        if (bVar3) {
          pcVar9 = FUN_71000fe3b0;
          uVar5 = 0;
          pcVar8 = "NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession";
        }
        else {
          plVar7 = FUN_71000bb680();
          uVar5 = 0;
          pcVar8 = "NexMatchJointSessionJob::WaitMeshRestart";
          *(long *)(param_1 + 0x208) = *(long *)(lVar1 + 0x30) + *plVar7 * 5000;
          pcVar9 = FUN_71000fe620;
        }
      }
      else {
        FUN_7100192c30(aiStack_60,(long)puVar2);
        FUN_71000bcf30(aiStack_50,aiStack_60);
        *(undefined4 *)(param_1 + 0x94) = 1;
joined_r0x0071000fd92c:
        if (aiStack_50[0] != 0) goto LAB_71000fd930;
LAB_71000fd97c:
        pcVar9 = FUN_71000fe7b0;
        uVar5 = 5;
        pcVar8 = "NexMatchJointSessionJob::WaitLeavePreviousMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_71000fd7a4;
    }
    aiStack_50[0] = 0xc421;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar5 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar8 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fd7a4:
  *(char **)(param_1 + 0x40) = pcVar8;
  return uVar5;
}

