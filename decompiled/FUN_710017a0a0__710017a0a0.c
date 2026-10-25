// addr:      710017a0a0
// offset:    0x17a0a0
// name:      FUN_710017a0a0
// mangled:   
// signature: undefined FUN_710017a0a0(void)


undefined8 FUN_710017a0a0(long *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar5 = aiStack_90;
  uVar4 = (**(code **)(*param_1 + 0x48))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x58))();
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    iVar1 = (int)param_1[0xc];
    if (iVar1 == 2) {
      FUN_7100149270(DAT_71052adb38,*(int *)((long)param_1 + 0x114));
      FUN_710013f6f0(param_1,1);
      FUN_71000b40e0((undefined4 *)(param_1 + 0xc));
      lVar8 = param_1[0x28];
      uVar4 = FUN_7100174f00(lVar8);
      if (((uVar4 & 1) == 0) && (uVar3 = FUN_7100174f20(lVar8), (uVar3 & 1) == 0)) {
        puVar7 = (undefined4 *)param_1[0xb];
        aiStack_40[0] = 0xc406;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        aiStack_80[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_80);
        FUN_71000bce50(aiStack_60,aiStack_40);
        piVar5 = aiStack_60;
      }
      else {
        FUN_7100175430(aiStack_40,(long *)param_1[0x28]);
        if (aiStack_40[0] == 0) {
          FUN_7100175610(aiStack_80,param_1[0x28],(long)(param_1 + 0x12));
          FUN_71000bcf30(aiStack_40,aiStack_80);
          if (aiStack_40[0] == 0) {
            param_1[6] = (long)FUN_710013e7c0;
            param_1[7] = 0;
            pcVar6 = "JoinSessionJob::MeshStartup";
            goto LAB_710017a178;
          }
          puVar7 = (undefined4 *)param_1[0xb];
          FUN_71000bce50(aiStack_90,aiStack_40);
        }
        else {
          puVar7 = (undefined4 *)param_1[0xb];
          FUN_71000bce50(aiStack_70,aiStack_40);
          piVar5 = aiStack_70;
        }
      }
    }
    else {
      if (iVar1 != 3) {
        return 5;
      }
      puVar7 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_50,(int *)((long)param_1 + 100));
      piVar5 = aiStack_50;
    }
    FUN_71000b41f0(puVar7,piVar5);
    param_1[0xb] = 0;
  }
  else {
    bVar2 = FUN_71001749f0(param_1[0x28]);
    if ((bVar2) || (FUN_7100174a80(aiStack_40,param_1[0x28]), aiStack_40[0] == 0)) {
      param_1[6] = (long)FUN_710017a2b0;
      param_1[7] = 0;
      pcVar6 = "LocalMatchJoinSessionJob::WaitForCancel";
LAB_710017a178:
      param_1[8] = (long)pcVar6;
      return 0;
    }
    FUN_71000b4260((undefined4 *)param_1[0xb]);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return 1;
}

