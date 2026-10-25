// addr:      710017bbd0
// offset:    0x17bbd0
// name:      FUN_710017bbd0
// mangled:   
// signature: undefined FUN_710017bbd0(void)


void FUN_710017bbd0(int *param_1,long param_2,undefined4 param_3,long *param_4,long *param_5,
                   uint param_6)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  long lVar7;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  if ((param_5 == (long *)0x0) || (param_4 == (long *)0x0)) {
    aiStack_60[0] = 0x10c07;
LAB_710017bc38:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
  }
  else {
    *(long **)(param_2 + 0x98) = param_4;
    uVar2 = (**(code **)(*param_4 + 0x138))(param_4);
    if ((uVar2 & 1) != 0) {
      aiStack_60[0] = 0x10c08;
      goto LAB_710017bc38;
    }
    *(undefined4 *)(param_2 + 0xa0) = 0;
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
    uVar2 = (**(code **)(*param_5 + 0x38))(param_5,1);
    if ((uVar2 & 1) == 0) {
LAB_710017bda8:
      FUN_71000b40e0((undefined4 *)(param_2 + 0x60));
      if ((param_6 & 1) != 0) {
        (**(code **)(**(long **)(param_2 + 0x98) + 0x80))
                  (aiStack_70,*(long **)(param_2 + 0x98),(undefined4 *)(param_2 + 0x60),param_3);
        FUN_71000bcf30(aiStack_60,aiStack_70);
        if (aiStack_60[0] != 0) goto LAB_710017bc5c;
        *(undefined4 *)(param_2 + 0xa0) = 1;
      }
      pcVar5 = FUN_710017bea0;
      pcVar6 = "LocalMatchUpdateSessionSettingJob::SignalProcess";
LAB_710017be00:
      *(code **)(param_2 + 0x30) = pcVar5;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = pcVar6;
      aiStack_70[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4))
      ;
      aiStack_80[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)aiStack_80);
      piVar4 = aiStack_70;
      goto LAB_710017bc60;
    }
    lVar7 = *(long *)(param_2 + 0x98);
    pvVar3 = (void *)(**(code **)(*param_5 + 0x50))(param_5);
    uVar1 = (**(code **)(*param_5 + 0x20))(param_5);
    FUN_71001792f0(aiStack_70,lVar7,pvVar3,uVar1);
    FUN_71000bcf30(aiStack_60,aiStack_70);
    if (aiStack_60[0] == 0) goto LAB_710017bda8;
    aiStack_70[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
    aiStack_80[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)aiStack_80);
    if (aiStack_60[0] != aiStack_70[0]) {
      aiStack_80[0] = 0x10c07;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_80 | 4))
      ;
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)auStack_48);
      if (aiStack_60[0] == aiStack_80[0]) goto LAB_710017bc5c;
      FUN_71000bcf30((int *)(param_2 + 0xa4),aiStack_60);
      pcVar5 = FUN_710017be40;
      pcVar6 = "LocalMatchUpdateSessionSettingJob::CompleteFailure";
      goto LAB_710017be00;
    }
  }
LAB_710017bc5c:
  piVar4 = aiStack_60;
LAB_710017bc60:
  FUN_71000bce50(param_1,piVar4);
  return;
}

