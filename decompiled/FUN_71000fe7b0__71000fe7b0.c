// addr:      71000fe7b0
// offset:    0xfe7b0
// name:      FUN_71000fe7b0
// mangled:   
// signature: undefined FUN_71000fe7b0(void)


undefined8 FUN_71000fe7b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  char *pcVar7;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  puVar2 = DAT_71052adfc0;
  if (iVar4 == 7) {
    aiStack_48[0] = 0xc420;
  }
  else if (iVar4 == 6) {
    aiStack_48[0] = 0xa471;
  }
  else if (iVar4 == 5) {
    aiStack_48[0] = 0xc406;
  }
  else {
    if (iVar4 != 8) {
      piVar5 = (int *)param_1[0xb];
      if ((piVar5 != (int *)0x0) && ((char)piVar5[10] != '\0')) {
        if (2 < *piVar5 - 2U) {
          FUN_71000b4260(piVar5);
        }
        param_1[0xb] = 0;
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        FUN_7100140910(param_1);
        return 1;
      }
      aiStack_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      aiStack_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
      iVar4 = *(int *)((long)param_1 + 0x94);
      if (iVar4 == 3) {
        bVar3 = FUN_7100191f90((long)puVar2);
        if (!bVar3) {
          return 5;
        }
        FUN_7100191fc0(aiStack_58,(long)puVar2);
      }
      else if (iVar4 == 2) {
        bVar3 = FUN_7100192260((long)puVar2);
        if (!bVar3) {
          return 5;
        }
        FUN_7100192290(aiStack_58,(long)puVar2);
      }
      else if (iVar4 == 1) {
        bVar3 = FUN_7100192ce0((long)puVar2);
        if (!bVar3) {
          return 5;
        }
        FUN_7100192d10(aiStack_58,(long)puVar2);
      }
      else {
        aiStack_58[0] = 0x10c08;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
      }
      FUN_71000bcf30(aiStack_48,aiStack_58);
      FUN_71001902d0(DAT_71052adfc0);
      bVar3 = FUN_7100140060((long)param_1);
      lVar1 = DAT_71052ac580;
      if (bVar3) {
        *(undefined1 *)((long)param_1 + 0xfc) = 0;
        param_1[6] = (long)FUN_71000fe3b0;
        param_1[7] = 0;
        pcVar7 = "NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession";
      }
      else {
        plVar6 = FUN_71000bb680();
        param_1[0x41] = *(long *)(lVar1 + 0x30) + *plVar6 * 5000;
        pcVar7 = "NexMatchJointSessionJob::WaitMeshRestart";
        param_1[6] = (long)FUN_71000fe620;
        param_1[7] = 0;
      }
      goto LAB_71000fe898;
    }
    aiStack_48[0] = 0xc421;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fe898:
  param_1[8] = (long)pcVar7;
  return 0;
}

