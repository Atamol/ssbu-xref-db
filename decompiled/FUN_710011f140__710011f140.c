// addr:      710011f140
// offset:    0x11f140
// name:      FUN_710011f140
// mangled:   
// signature: undefined FUN_710011f140(void)


void FUN_710011f140(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar4 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0xb0) = lVar4;
  if (lVar4 == 0) {
    aiStack_48[0] = 0x10c08;
  }
  else {
    sVar2 = FUN_710013dc70((long)param_3);
    if (sVar2 == 0) {
      aiStack_48[0] = 0x10c07;
    }
    else {
      FUN_710011b4c0(*(long *)(param_2 + 0xb0),param_3);
      bVar1 = FUN_7100116d40((long)param_3);
      *(byte *)(param_2 + 0xb8) = bVar1 & 1;
      uVar3 = FUN_710013dc70((long)param_3);
      FUN_71001492c0(DAT_71052adb38,uVar3);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LanMatchCreateSessionJob::CreateMatchmakeSession";
      *(code **)(param_2 + 0x30) = FUN_710011f240;
      aiStack_48[0] = 0;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_48);
  return;
}

