// addr:      7100122750
// offset:    0x122750
// name:      FUN_7100122750
// mangled:   
// signature: undefined __cdecl FUN_7100122750(int * param_1, long * param_2)


void FUN_7100122750(int *param_1,long *param_2)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[7] = 0;
  param_2[8] = (long)"CreateMeshJob::SetupLocalPlayerInfo";
  param_2[6] = (long)FUN_7100187730;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

