// addr:      71001068d0
// offset:    0x1068d0
// name:      FUN_71001068d0
// mangled:   
// signature: undefined FUN_71001068d0(void)


void FUN_71001068d0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  *(undefined8 *)(param_2 + 0x90) = param_3;
  iVar1 = FUN_710014f120(param_4);
  if (iVar1 == 1) {
    FUN_71000e9cd0(aiStack_48,*(long *)(param_2 + 0x90),(int *)(param_2 + 0x60),param_4);
    FUN_71000bcf30((int *)(param_2 + 0x98),aiStack_48);
    if (*(int *)(param_2 + 0x98) != 0) {
      aiStack_48[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
      if (*(int *)(param_2 + 0x98) != aiStack_48[0]) {
LAB_7100106a8c:
        piVar2 = (int *)(param_2 + 0x98);
        goto LAB_7100106b10;
      }
    }
    pcVar3 = FUN_7100106b30;
    pcVar4 = "NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner";
LAB_7100106adc:
    *(code **)(param_2 + 0x30) = pcVar3;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = pcVar4;
    aiStack_48[0] = 0;
  }
  else {
    iVar1 = FUN_710014f120(param_4);
    if (iVar1 == 2) {
      FUN_71000ea3e0(aiStack_48,*(long *)(param_2 + 0x90),(int *)(param_2 + 0x60),param_4);
      FUN_71000bcf30((int *)(param_2 + 0x98),aiStack_48);
      if (*(int *)(param_2 + 0x98) != 0) {
        aiStack_48[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
        if (*(int *)(param_2 + 0x98) != aiStack_48[0]) goto LAB_7100106a8c;
      }
      pcVar3 = FUN_7100106d20;
      pcVar4 = "NexMatchBrowseMatchmakeJob::WaitFindSessionByParticipant";
      goto LAB_7100106adc;
    }
    iVar1 = FUN_710014f120(param_4);
    if (iVar1 == 3) {
      FUN_71000ead70(aiStack_48,*(long *)(param_2 + 0x90),(int *)(param_2 + 0x60),param_4);
      FUN_71000bcf30((int *)(param_2 + 0x98),aiStack_48);
      if (*(int *)(param_2 + 0x98) != 0) {
        aiStack_48[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
        if (*(int *)(param_2 + 0x98) != aiStack_48[0]) goto LAB_7100106a8c;
      }
      pcVar3 = FUN_7100106f10;
      pcVar4 = "NexMatchBrowseMatchmakeJob::WaitFindSessionBySessionId";
      goto LAB_7100106adc;
    }
    FUN_71000e4650(aiStack_48,*(long *)(param_2 + 0x90),param_4,1);
    if (aiStack_48[0] == 0) {
      pcVar3 = FUN_7100107100;
      pcVar4 = "NexMatchBrowseMatchmakeJob::BrowseMatchmake";
      goto LAB_7100106adc;
    }
    aiStack_48[0] = 0x10c07;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  piVar2 = aiStack_48;
LAB_7100106b10:
  FUN_71000bce50(param_1,piVar2);
  return;
}

