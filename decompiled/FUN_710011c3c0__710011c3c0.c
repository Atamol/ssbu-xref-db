// addr:      710011c3c0
// offset:    0x11c3c0
// name:      FUN_710011c3c0
// mangled:   
// signature: undefined FUN_710011c3c0(void)


void FUN_710011c3c0(int *param_1,long *param_2,undefined4 *param_3,long param_4,long *param_5,
                   byte param_6)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  piVar3 = (int *)&uStack_a0;
  aiStack_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  uStack_a0 = (undefined **)((ulong)uStack_a0._4_4_ << 0x20);
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)&uStack_a0);
  param_2[0xe] = param_4;
  *(byte *)(param_2 + 0xf) = param_6 & 1;
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  (**(code **)(*param_5 + 0x20))(param_5,&uStack_a0);
  plVar1 = param_2 + 0x10;
  FUN_710015ffc0((long)plVar1,(long)param_5);
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  FUN_7100160990();
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x40000000;
  (**(code **)(*(long *)(param_4 + 0x10) + 0x28))((long *)(param_4 + 0x10),&uStack_a0);
  if (*(char *)(param_4 + 0x38) == -2) {
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    FUN_7100160b20(lVar2,(long)plVar1);
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    uStack_98 = 0;
    uStack_a0 = (undefined **)0x40000000;
    (**(code **)(*(long *)(lVar2 + 0x88) + 0x20))((long *)(lVar2 + 0x88),&uStack_a0);
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    FUN_7100160230(&uStack_a0,(long)plVar1);
    FUN_71000beb40(lVar2 + 0x108,(long)&uStack_a0);
    uStack_a0 = &PTR_FUN_7104f4a808;
    FUN_71000b1cf0();
    lVar2 = FUN_7100161fb0(DAT_71052add68);
    uStack_98 = 0;
    uStack_a0 = (undefined **)0x40000000;
    (**(code **)(*(long *)(lVar2 + 0x108) + 0x28))(lVar2 + 0x108,&uStack_a0);
  }
  FUN_7100186630((int *)&uStack_a0,param_2,param_3,param_4,(long)plVar1,param_6 & 1);
  FUN_71000bcf30(aiStack_78,(int *)&uStack_a0);
  if (aiStack_78[0] == 0) {
    param_2[8] = (long)"LanConnectStationJob::TryCurrentAddress";
    param_2[6] = (long)FUN_710011c5e0;
    param_2[7] = 0;
    uStack_a0 = (undefined **)((ulong)uStack_a0 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_a0 | 4));
    auStack_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_a0 | 4),(Result *)auStack_68);
  }
  else {
    piVar3 = aiStack_78;
  }
  FUN_71000bce50(param_1,piVar3);
  return;
}

