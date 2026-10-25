// addr:      710016df90
// offset:    0x16df90
// name:      FUN_710016df90
// mangled:   
// signature: undefined FUN_710016df90(void)


void FUN_710016df90(int *param_1,long param_2,undefined4 *param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar1 = aiStack_60;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  lVar2 = *(long *)(param_2 + 0x68);
  if (*(char *)(lVar2 + 0x843c) == '\0') {
    (**(code **)(**(long **)(lVar2 + 0x400) + 0x30))
              (aiStack_60,*(long **)(lVar2 + 0x400),*(undefined8 *)(param_2 + 0x60),param_4);
  }
  else {
    FUN_710016f650(aiStack_60,*(long **)(lVar2 + 0x400),*(undefined4 **)(param_2 + 0x60),param_4,1);
  }
  FUN_71000bcf30(aiStack_50,aiStack_60);
  if (aiStack_50[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    lVar2 = *(long *)(param_2 + 0x68);
    *(undefined1 *)(lVar2 + 0x47d) = 0;
    *(undefined1 *)(lVar2 + 0x569) = 1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalCreateNetworkJob::WaitCreateNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100173ad0;
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
  }
  else {
    piVar1 = aiStack_50;
  }
  FUN_71000bce50(param_1,piVar1);
  return;
}

