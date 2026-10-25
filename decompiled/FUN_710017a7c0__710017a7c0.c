// addr:      710017a7c0
// offset:    0x17a7c0
// name:      FUN_710017a7c0
// mangled:   
// signature: undefined FUN_710017a7c0(void)


void FUN_710017a7c0(int *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  long *plVar2;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long **)(param_2 + 0xa0) = plVar2;
  (**(code **)(*plVar2 + 0x140))();
  uVar1 = FUN_710013dc70(param_3);
  FUN_71001492c0(DAT_71052adb38,uVar1);
  *(code **)(param_2 + 0x30) = FUN_710017a880;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalMatchCreateSessionJob::CreateLocalNetwork";
  aiStack_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_48);
  return;
}

