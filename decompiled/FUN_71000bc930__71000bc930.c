// addr:      71000bc930
// offset:    0xbc930
// name:      FUN_71000bc930
// mangled:   
// signature: undefined __cdecl FUN_71000bc930(int * param_1, long * param_2, long param_3, int param_4, uint param_5, uint param_6, int param_7)


void FUN_71000bc930(int *param_1,long *param_2,long param_3,int param_4,uint param_5,uint param_6,
                   int param_7)

{
  undefined8 uVar1;
  long lVar2;
  int local_50 [4];
  undefined4 local_38 [2];
  
  if ((((param_3 == 0) || (param_4 == 0)) || (9 < param_5)) ||
     (((param_6 & 0xfffffff8) != 8 || (8 < param_7 - 1U)))) {
    local_50[0] = 0x10c07;
  }
  else if (((int)param_2[2] == 0) && (*param_2 != 0)) {
    param_2[0xe] = (long)param_2;
    param_2[0xc] = (long)FUN_71000bc7e0;
    param_2[0xd] = (long)FUN_71000bc830;
    uVar1 = FUN_710002b820((long)(param_2 + 4),param_5,8,param_6,param_7,0,
                           "1.2.11.f-NINTENDO-SDK-v1",0x70);
    if ((int)uVar1 == -4) {
      local_50[0] = 0x10c01;
    }
    else if ((int)uVar1 == 0) {
      lVar2 = FUN_710002d920((long)(param_2 + 4),0x80);
      param_2[3] = lVar2 + -0x80;
      param_2[7] = param_3;
      *(int *)(param_2 + 8) = param_4;
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0xc0b;
    }
  }
  else {
    local_50[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_50);
  return;
}

