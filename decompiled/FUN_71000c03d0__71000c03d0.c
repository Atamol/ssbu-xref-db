// addr:      71000c03d0
// offset:    0xc03d0
// name:      FUN_71000c03d0
// mangled:   
// signature: undefined __cdecl FUN_71000c03d0(int * param_1, long * param_2, long param_3, int param_4)


void FUN_71000c03d0(int *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_38[0] = 0x10c07;
  }
  else if (param_2[0xe] == 0) {
    local_38[0] = 0x10c08;
  }
  else {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    param_2[8] = (long)FUN_71000c0280;
    param_2[9] = (long)FUN_71000c02d0;
    param_2[10] = (long)param_2;
    iVar1 = FUN_7100028410((long)param_2,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar1 == -4) {
      local_38[0] = 0x10c01;
    }
    else if (iVar1 == 0) {
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0xc0b;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

