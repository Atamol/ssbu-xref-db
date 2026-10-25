// addr:      710010c6e0
// offset:    0x10c6e0
// name:      FUN_710010c6e0
// mangled:   
// signature: undefined FUN_710010c6e0(void)


void FUN_710010c6e0(int *param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  lVar1 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x90) = lVar1;
  if (lVar1 == 0) {
    aiStack_38[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    aiStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)aiStack_48);
    piVar2 = aiStack_38;
  }
  else {
    FUN_71000e5db0(aiStack_38,lVar1,param_3);
    if (aiStack_38[0] == 0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "NexMatchCommunityManagementJob::UpdateCommunity";
      *(code **)(param_2 + 0x30) = FUN_710010c7c0;
      aiStack_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
      piVar2 = aiStack_48;
    }
    else {
      piVar2 = aiStack_38;
    }
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}

