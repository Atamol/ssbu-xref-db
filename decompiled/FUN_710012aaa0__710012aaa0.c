// addr:      710012aaa0
// offset:    0x12aaa0
// name:      FUN_710012aaa0
// mangled:   
// signature: undefined __cdecl FUN_710012aaa0(int * param_1, long * param_2, char param_3, undefined2 * param_4)


void FUN_710012aaa0(int *param_1,long *param_2,char param_3,undefined2 *param_4)

{
  long *plVar1;
  int local_80 [4];
  int local_70 [6];
  undefined2 local_58;
  int local_50 [4];
  undefined4 local_38 [2];
  
  plVar1 = param_2 + 0xc;
  FUN_71000b9f60(local_50,(int *)plVar1,param_3,2,0x11);
  if (local_50[0] != 0) {
    local_70[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_70 | 4));
    local_80[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
    FUN_71000bce50(param_1,local_70);
    return;
  }
  FUN_71000b1c30((undefined8 *)local_70);
  local_58 = 30000;
  FUN_71000ba0c0(local_80,(int *)plVar1,(ulong)local_70,0,1);
  FUN_71000bcf30(local_50,local_80);
  if (local_50[0] == 0) {
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = 30000;
    }
  }
  else if (local_50[0] != 0) {
    FUN_71000ba010(local_80,(int *)plVar1);
    local_80[0] = 0x10c08;
    goto LAB_710012abe0;
  }
  FUN_71000b40e0((undefined4 *)(param_2 + 0x1b1));
  *(undefined1 *)(param_2 + 0x1b8) = 1;
  *(undefined1 *)((long)param_2 + 0xd81) = 0;
  param_2[0x1b9] = 0;
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[7] = 0;
  param_2[8] = (long)"LanMatchmakeUpdateJob::Update";
  param_2[6] = (long)FUN_710012ac30;
  local_80[0] = 0;
LAB_710012abe0:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_80 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_80);
  FUN_71000b1cf0();
  return;
}

