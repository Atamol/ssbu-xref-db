// addr:      710016ea60
// offset:    0x16ea60
// name:      FUN_710016ea60
// mangled:   
// signature: undefined FUN_710016ea60(void)


void FUN_710016ea60(int *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  int *piVar2;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar1 = param_4[1];
  param_2[0x52] = *param_4;
  param_2[0x53] = lVar1;
  aiStack_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_710016eb70(aiStack_58,(long)param_2);
  FUN_71000bcf30(aiStack_48,aiStack_58);
  if (aiStack_48[0] == 0) {
    FUN_7100172d30(aiStack_58,param_2,param_3,7);
    FUN_71000bcf30(aiStack_48,aiStack_58);
    if (aiStack_48[0] == 0) {
      param_2[8] = (long)"LdnBackgroundProcessJob::ScanNetwork";
      param_2[6] = (long)FUN_710016ec20;
      param_2[7] = 0;
      aiStack_58[0] = 0;
    }
    else {
      aiStack_58[0] = 0x10c08;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
    piVar2 = aiStack_58;
  }
  else {
    piVar2 = aiStack_48;
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}

