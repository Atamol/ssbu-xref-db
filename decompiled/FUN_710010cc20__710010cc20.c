// addr:      710010cc20
// offset:    0x10cc20
// name:      FUN_710010cc20
// mangled:   
// signature: undefined8 __cdecl FUN_710010cc20(long param_1)


undefined8 FUN_710010cc20(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = aiStack_90;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_40,local_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_60,local_50);
    piVar2 = aiStack_60;
    break;
  case 7:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_70,local_50);
    piVar2 = aiStack_70;
    break;
  case 8:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_80,local_50);
    piVar2 = aiStack_80;
    break;
  default:
    (**(code **)(**(long **)(param_1 + 0x90) + 0x70))
              (local_50,*(long **)(param_1 + 0x90),param_1 + 0x60,*(undefined4 *)(param_1 + 0x98));
    if (local_50[0] == 0) {
      *(char **)(param_1 + 0x40) = "NexMatchCommunityManagementJob::WaitDestroyCommunity";
      *(code **)(param_1 + 0x30) = FUN_710010cdf0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_90,local_50);
  }
  FUN_71000b41f0(puVar3,piVar2);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

