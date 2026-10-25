// addr:      7100186630
// offset:    0x186630
// name:      FUN_7100186630
// mangled:   
// signature: undefined __cdecl FUN_7100186630(int * param_1, long * param_2, undefined4 * param_3, long param_4, long param_5, byte param_6)


void FUN_7100186630(int *param_1,long *param_2,undefined4 *param_3,long param_4,long param_5,
                   byte param_6)

{
  int iVar1;
  undefined **local_70;
  undefined4 local_68;
  undefined4 local_48 [2];
  
  if (param_4 != 0) {
    iVar1 = FUN_71000b4920((long)param_2);
    if ((iVar1 != 0) && (iVar1 = FUN_71000b4920((long)param_2), iVar1 != 5)) {
      local_70 = (undefined **)0x80000000000;
      local_68 = 0;
      (**(code **)(*param_2 + 0x28))(param_2,&local_70);
      local_70 = (undefined **)CONCAT44(local_70._4_4_,0x10c08);
      goto LAB_7100186760;
    }
    if (param_3 != (undefined4 *)0x0) {
      param_2[0xd] = (long)param_3;
      FUN_71000b4160(param_3);
      param_2[0xe] = param_4;
      FUN_7100160230(&local_70,param_5);
      FUN_71000beb40(param_4 + 0x10,(long)&local_70);
      local_70 = &PTR_FUN_7104f4a808;
      FUN_71000b1cf0();
      *(byte *)(param_2 + 0xf) = param_6 & 1;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      *(undefined1 *)(param_2[0xe] + 0xb8) = 1;
      param_2[6] = (long)FUN_71001867a0;
      param_2[7] = 0;
      param_2[8] = (long)"ConnectStationJob::SendConnectionRequest";
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      goto LAB_7100186760;
    }
  }
  local_70 = (undefined **)CONCAT44(local_70._4_4_,0x10c07);
LAB_7100186760:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_70 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_48);
  FUN_71000bce50(param_1,(int *)&local_70);
  return;
}

