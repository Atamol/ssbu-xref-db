// addr:      71001876b0
// offset:    0x1876b0
// name:      FUN_71001876b0
// mangled:   
// signature: undefined FUN_71001876b0(void)


void FUN_71001876b0(int *param_1,long *param_2)

{
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[7] = 0;
  param_2[8] = (long)"CreateMeshJob::SetupLocalPlayerInfo";
  param_2[6] = (long)FUN_7100187730;
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

