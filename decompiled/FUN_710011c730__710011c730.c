// addr:      710011c730
// offset:    0x11c730
// name:      FUN_710011c730
// mangled:   
// signature: undefined FUN_710011c730(void)


void FUN_710011c730(int *param_1,long param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  lVar5 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long *)(param_2 + 0x138) = lVar5;
  if (lVar5 == 0) {
    aiStack_50[0] = 0x10c08;
    goto LAB_710011c884;
  }
  if (param_3 == (long *)0x0) {
    aiStack_50[0] = 0x10c07;
    goto LAB_710011c884;
  }
  lVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  bVar1 = FUN_710012d1f0(lVar5);
  if (bVar1 < 8) {
LAB_710011c7cc:
    aiStack_50[0] = 0x6470;
  }
  else {
    bVar1 = FUN_710012d1f0(lVar5);
    if (bVar1 < 9) {
      bVar1 = FUN_710012d210(lVar5);
      plVar4 = (long *)FUN_7100116f40();
      bVar2 = FUN_71001170b0(plVar4);
      if (bVar1 < bVar2) goto LAB_710011c7cc;
      bVar1 = FUN_710012d210(lVar5);
      plVar4 = (long *)FUN_7100116f40();
      bVar2 = FUN_71001170b0(plVar4);
      if (bVar2 < bVar1) goto LAB_710011c814;
      aiStack_50[0] = 0;
    }
    else {
LAB_710011c814:
      aiStack_50[0] = 0x646f;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_2 + 0x148),aiStack_50);
  FUN_710011b830(*(long *)(param_2 + 0x138),param_3);
  uVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  *(undefined4 *)(param_2 + 0x114) = uVar3;
  *(code **)(param_2 + 0x30) = FUN_710011c8d0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LanMatchJoinSessionJob::JoinMatchmakeSession";
  aiStack_50[0] = 0;
LAB_710011c884:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}

