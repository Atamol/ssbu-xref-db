// addr:      710010eb50
// offset:    0x10eb50
// name:      FUN_710010eb50
// mangled:   
// signature: undefined FUN_710010eb50(void)


void FUN_710010eb50(int *param_1,long param_2)

{
  undefined8 uVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = *(undefined8 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(char **)(param_2 + 0x40) = "NexMatchGenerateSystemPasswordJob::GenerateMatchmakeSystemPassword";
  *(undefined8 *)(param_2 + 0x98) = uVar1;
  *(code **)(param_2 + 0x30) = FUN_710010ebe0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

