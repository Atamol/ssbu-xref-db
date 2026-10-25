// addr:      710010cb80
// offset:    0x10cb80
// name:      FUN_710010cb80
// mangled:   
// signature: undefined FUN_710010cb80(void)


void FUN_710010cb80(int *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  lVar1 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x90) = lVar1;
  if (lVar1 == 0) {
    aiStack_38[0] = 0x10c08;
  }
  else {
    *(undefined4 *)(param_2 + 0x98) = param_3;
    *(code **)(param_2 + 0x30) = FUN_710010cc20;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "NexMatchCommunityManagementJob::DestroyCommunity";
    aiStack_38[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

