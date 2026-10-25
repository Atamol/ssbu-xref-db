// addr:      7100120130
// offset:    0x120130
// name:      FUN_7100120130
// mangled:   
// signature: undefined FUN_7100120130(void)


void FUN_7100120130(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int aiStack_60 [4];
  undefined4 auStack_48 [2];
  
  plVar4 = (long *)(**(code **)(*param_3 + 0x40))(param_3);
  lVar7 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x178) = lVar7;
  if (lVar7 == 0) {
    aiStack_60[0] = 0x10c08;
  }
  else {
    lVar5 = (**(code **)(*param_3 + 0x48))(param_3,0);
    bVar1 = (**(code **)(*param_3 + 0x50))(param_3);
    uVar6 = FUN_710011baa0(lVar7,lVar5,bVar1);
    if (((uVar6 & 1) == 0) || (sVar2 = FUN_710013dc70((long)plVar4), sVar2 == 0)) {
      aiStack_60[0] = 0x10c07;
    }
    else {
      FUN_710011b4c0(*(long *)(param_2 + 0x178),plVar4);
      uVar3 = FUN_710013dc70((long)plVar4);
      FUN_71001492c0(DAT_71052adb38,uVar3);
      bVar1 = FUN_7100116d40((long)plVar4);
      *(byte *)(param_2 + 0x188) = bVar1 & 1;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LanMatchRandomMatchmakeJob::RandomMatchmake";
      *(code **)(param_2 + 0x30) = FUN_7100120290;
      aiStack_60[0] = 0;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
  auStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_48);
  FUN_71000bce50(param_1,aiStack_60);
  return;
}

