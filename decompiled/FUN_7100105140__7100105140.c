// addr:      7100105140
// offset:    0x105140
// name:      FUN_7100105140
// mangled:   
// signature: undefined FUN_7100105140(void)


undefined8 FUN_7100105140(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_60;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if ((puVar3 == (undefined4 *)0x0) || (*(char *)(puVar3 + 10) == '\0')) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(DAT_71052ac580 + 0x30);
      FUN_71000ede30(*(long *)(DAT_71052adb38 + 8));
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x40))
                (aiStack_40,*(long **)(param_1 + 0xa0),param_1 + 0x60);
      if (aiStack_40[0] == 0) {
        *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::WaitCreateMatchmake";
        *(code **)(param_1 + 0x30) = FUN_71001054b0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_60,aiStack_40);
    }
    else {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_50,aiStack_40);
      piVar2 = aiStack_50;
    }
    FUN_71000b41f0(puVar3,piVar2);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchCreateSessionJob::CompleteFailure";
  return 0;
}

