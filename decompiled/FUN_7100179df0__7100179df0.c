// addr:      7100179df0
// offset:    0x179df0
// name:      FUN_7100179df0
// mangled:   
// signature: undefined FUN_7100179df0(void)


void FUN_7100179df0(int *param_1,long param_2,long *param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Result *pRVar7;
  int *piVar8;
  long lVar9;
  ErrorResultVariant *this;
  long lVar10;
  long *plVar11;
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  piVar8 = aiStack_70;
  pRVar7 = (Result *)aiStack_70;
  lVar9 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x138) = lVar9;
  if (lVar9 == 0) {
    aiStack_60[0] = 0x10c08;
LAB_7100179ef0:
    this = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    aiStack_70[0] = 0;
  }
  else {
    if ((param_3 == (long *)0x0) || (lVar9 = (**(code **)(*param_3 + 0x10))(param_3), lVar9 == 0)) {
      aiStack_60[0] = 0x10c07;
      goto LAB_7100179ef0;
    }
    lVar9 = FUN_7100177440((long)param_3);
    pbVar4 = (byte *)FUN_71000bae40(lVar9);
    lVar9 = FUN_7100177440((long)param_3);
    iVar2 = FUN_71000bae50(lVar9);
    uVar3 = FUN_710013c780(pbVar4,iVar2);
    plVar11 = *(long **)(param_2 + 0x138);
    uVar5 = (**(code **)(*param_3 + 0x10))(param_3);
    uVar6 = (**(code **)(*param_3 + 0x48))(param_3);
    (**(code **)(*plVar11 + 0x150))
              (aiStack_70,plVar11,uVar5,uVar6,*(undefined1 *)((long)param_3 + 0x16),uVar3);
    if (aiStack_70[0] != 0) goto LAB_7100179f18;
    lVar10 = *(long *)(*(long *)(param_2 + 0x140) + 0x18);
    lVar9 = FUN_7100177440((long)param_3);
    FUN_71000bae70(aiStack_60,(long *)(lVar10 + 0x380),lVar9);
    plVar11 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
    uVar1 = (**(code **)(*plVar11 + 0x30))();
    FUN_71001492c0(DAT_71052adb38,uVar1);
    *(char **)(param_2 + 0x40) = "LocalMatchJoinSessionJob::JoinMatchmakeSession";
    *(code **)(param_2 + 0x30) = FUN_7100179fc0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    this = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    pRVar7 = (Result *)auStack_48;
    auStack_48[0] = 0;
  }
  nn::err::ErrorResultVariant::operator=(this,pRVar7);
  piVar8 = aiStack_60;
LAB_7100179f18:
  FUN_71000bce50(param_1,piVar8);
  return;
}

