// addr:      7100172f80
// offset:    0x172f80
// name:      FUN_7100172f80
// mangled:   
// signature: undefined __cdecl FUN_7100172f80(int * param_1, long * param_2, undefined4 * param_3, long * param_4)


void FUN_7100172f80(int *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 local_60;
  int local_50 [4];
  undefined4 local_38 [2];
  
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_60 = (ulong)local_60._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  if (((char)param_2[0xf] != '\0') && (bVar1 = FUN_7100182850(param_2[0xe]), bVar1)) {
    uVar2 = FUN_71000bf830((int *)(param_2 + 0x10));
    FUN_71001820f0(param_2[0xe],uVar2);
  }
  FUN_7100181800((int *)&local_60,(long *)param_2[0xe],param_4);
  FUN_71000bcf30(local_50,(int *)&local_60);
  if (local_50[0] == 0) {
    local_60 = 0;
    FUN_71000bb5d0(&local_60);
    plVar3 = FUN_71000bb680();
    param_2[0xd] = local_60 + *plVar3 * 3000;
    FUN_7100172d30((int *)&local_60,param_2,param_3,3);
    FUN_71000bcf30(local_50,(int *)&local_60);
    if (local_50[0] == 0) {
      param_2[6] = 0x50;
      param_2[7] = 1;
      param_2[8] = (long)"LocalBackgroundProcessJob::CreateNetwork";
      local_60 = (ulong)local_60._4_4_ << 0x20;
    }
    else {
      local_60 = CONCAT44(local_60._4_4_,0x10c08);
    }
  }
  else {
    local_60 = CONCAT44(local_60._4_4_,0x10c07);
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_60 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,(int *)&local_60);
  return;
}

