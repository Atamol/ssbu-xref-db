// addr:      71001074b0
// offset:    0x1074b0
// name:      FUN_71001074b0
// mangled:   
// signature: undefined FUN_71001074b0(void)


void FUN_71001074b0(int *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(long **)(param_2 + 0x90) = param_3;
  (**(code **)(*param_3 + 0xb0))(aiStack_50,param_3,param_2 + 0x60);
  piVar1 = (int *)(param_2 + 0x98);
  FUN_71000bcf30(piVar1,aiStack_50);
  if (*(int *)(param_2 + 0x98) != 0) {
    aiStack_50[0] = 0xac5a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    if (*piVar1 != aiStack_50[0]) goto LAB_710010758c;
  }
  *(char **)(param_2 + 0x40) = "NexMatchBrowseMatchmakeJob::WaitRequestSessionInfo";
  *(code **)(param_2 + 0x30) = FUN_71001075b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  piVar1 = aiStack_50;
LAB_710010758c:
  FUN_71000bce50(param_1,piVar1);
  return;
}

