// addr:      71001739f0
// offset:    0x1739f0
// name:      FUN_71001739f0
// mangled:   
// signature: undefined FUN_71001739f0(void)


void FUN_71001739f0(int *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_50;
  plVar1 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
  (**(code **)(*plVar1 + 0x30))(aiStack_40,plVar1,*(undefined8 *)(param_2 + 0x60));
  if (aiStack_40[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    lVar3 = *(long *)(param_2 + 0x68);
    *(undefined1 *)(lVar3 + 0x47d) = 0;
    *(undefined1 *)(lVar3 + 0x569) = 1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalCreateNetworkJob::WaitCreateNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100173ad0;
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  }
  else {
    piVar2 = aiStack_40;
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}

