// addr:      71000f02e0
// offset:    0xf02e0
// name:      FUN_71000f02e0
// mangled:   
// signature: undefined FUN_71000f02e0(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000f02e0(int *param_1,long *param_2,undefined4 *param_3,long param_4,long param_5,
                   byte param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ErrorResultVariant *this;
  long *plVar7;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  aiStack_78[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  uStack_a0 = (undefined **)((ulong)uStack_a0._4_4_ << 0x20);
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)&uStack_a0);
  param_2[0xe] = param_4;
  plVar1 = param_2 + 0x10;
  *(byte *)(param_2 + 0xf) = param_6 & 1;
  FUN_710015ffc0((long)plVar1,param_5);
  FUN_7100138520((uint *)&DAT_71052acf18);
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x20000;
  FUN_7100160990();
  uStack_98 = 0;
  uStack_a0 = (undefined **)0x20000;
  (**(code **)(*(long *)(param_2[0xe] + 0x10) + 0x28))((long *)(param_2[0xe] + 0x10),&uStack_a0);
  if (*(char *)((long)DAT_71052acd90 + 0xb1) == '\0') {
    uStack_a0 = (undefined **)CONCAT44(uStack_a0._4_4_,0x10c08);
    this = (ErrorResultVariant *)((ulong)&uStack_a0 | 4);
  }
  else {
    lVar4 = FUN_7100161fb0(DAT_71052add68);
    uStack_98 = 0;
    uStack_a0 = (undefined **)0x20000;
    plVar7 = (long *)(lVar4 + 8);
    (**(code **)(*plVar7 + 0x20))(plVar7,&uStack_a0);
    bVar3 = FUN_71001603a0((long)plVar1,(long)plVar7);
    if (bVar3) {
      bVar3 = FUN_7100160360((long)plVar7);
      if (bVar3) {
        uStack_a0 = (undefined **)CONCAT44(uStack_a0._4_4_,0x10c08);
        this = (ErrorResultVariant *)((ulong)&uStack_a0 | 4);
        goto LAB_71000f0650;
      }
      FUN_7100160500((long)plVar1,1);
      cVar2 = (char)param_2[0xf];
    }
    else {
      FUN_7100160500((long)plVar1,0);
      cVar2 = (char)param_2[0xf];
    }
    if (cVar2 != '\0') {
      lVar4 = param_2[0xe] + 0x18;
      bVar3 = FUN_71000b28f0(lVar4);
      if (!bVar3) {
        FUN_7100160440((long)plVar1,lVar4);
      }
      else {
        FUN_7100160450((long)plVar1,lVar4);
      }
      FUN_7100160500((long)plVar1,bVar3);
    }
    *(undefined8 *)((long)param_2 + 0x13c) = 0;
    if (*(char *)(param_2[0xe] + 0x38) == -2) {
      lVar4 = FUN_7100161fb0(DAT_71052add68);
      FUN_7100160b20(lVar4,(long)plVar1);
      lVar4 = FUN_7100161fb0(DAT_71052add68);
      uStack_98 = 0;
      uStack_a0 = (undefined **)0x20000;
      (**(code **)(*(long *)(lVar4 + 0x88) + 0x20))((long *)(lVar4 + 0x88),&uStack_a0);
      lVar4 = FUN_7100161fb0(DAT_71052add68);
      FUN_7100160230(&uStack_a0,(long)plVar1);
      FUN_71000beb40(lVar4 + 0x108,(long)&uStack_a0);
      uStack_a0 = &PTR_FUN_7104f4a808;
      FUN_71000b1cf0();
      lVar4 = FUN_7100161fb0(DAT_71052add68);
      uStack_98 = 0;
      uStack_a0 = (undefined **)0x20000;
      (**(code **)(*(long *)(lVar4 + 0x108) + 0x28))(lVar4 + 0x108,&uStack_a0);
      bVar3 = FUN_7100160300((long)plVar1);
      if ((bVar3) && (bVar3 = FUN_7100160320((long)plVar7), bVar3)) {
        *(undefined4 *)((long)param_2 + 0x13c) = 1;
      }
      bVar3 = FUN_7100160300((long)plVar1);
      if (bVar3) {
        *(undefined4 *)(param_2 + 0x28) = 1;
      }
      uVar5 = (**(code **)(*DAT_71052acd90 + 0x58))();
      if ((uVar5 & 1) != 0) {
        _DAT_71052ac624 = 0;
      }
    }
    *(undefined4 *)(param_2 + 0x27) = 0;
    *(undefined4 *)((long)param_2 + 0x144) = 0;
    bVar3 = FUN_71001603a0((long)plVar1,(long)plVar7);
    if ((!bVar3) && (bVar3 = FUN_7100160300((long)plVar7), bVar3)) {
      *(undefined4 *)(param_2 + 0x27) = 2;
      bVar3 = FUN_7100160320((long)plVar1);
      if ((bVar3) && ((char)param_2[0xf] == '\0')) {
        *(undefined4 *)((long)param_2 + 0x144) = 1;
      }
    }
    FUN_7100186630((int *)&uStack_a0,param_2,param_3,param_2[0xe],(long)plVar1,param_6 & 1);
    FUN_71000bcf30(aiStack_78,(int *)&uStack_a0);
    if (aiStack_78[0] != 0) {
      piVar6 = aiStack_78;
      goto LAB_71000f066c;
    }
    param_2[8] = (long)"NexConnectStationJob::TestCurrentAddress";
    param_2[6] = (long)FUN_71000f06a0;
    param_2[7] = 0;
    this = (ErrorResultVariant *)((ulong)&uStack_a0 | 4);
    uStack_a0 = (undefined **)((ulong)uStack_a0 & 0xffffffff00000000);
  }
LAB_71000f0650:
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  auStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
  piVar6 = (int *)&uStack_a0;
LAB_71000f066c:
  FUN_71000bce50(param_1,piVar6);
  return;
}

