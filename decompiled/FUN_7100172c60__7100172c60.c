// addr:      7100172c60
// offset:    0x172c60
// name:      FUN_7100172c60
// mangled:   
// signature: undefined __cdecl FUN_7100172c60(int * param_1, long * param_2, undefined4 * param_3)


void FUN_7100172c60(int *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long local_50 [2];
  long local_40 [2];
  undefined4 local_28 [2];
  
  plVar2 = local_50;
  local_40[0] = 0;
  FUN_71000bb5d0(local_40);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_40[0] + *plVar1 * 45000;
  FUN_7100172d30((int *)local_40,param_2,param_3,1);
  if ((int)local_40[0] == 0) {
    param_2[6] = 0x58;
    param_2[7] = 1;
    *(undefined1 *)((long)param_2 + 100) = 0;
    param_2[8] = (long)"LocalBackgroundProcessJob::DestroyNetwork";
    local_50[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    plVar2 = local_40;
  }
  FUN_71000bce50(param_1,(int *)plVar2);
  return;
}

