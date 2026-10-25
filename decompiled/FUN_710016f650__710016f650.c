// addr:      710016f650
// offset:    0x16f650
// name:      FUN_710016f650
// mangled:   
// signature: undefined __cdecl FUN_710016f650(int * param_1, long * param_2, undefined4 * param_3, long param_4, uint param_5)


void FUN_710016f650(int *param_1,long *param_2,undefined4 *param_3,long param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 local_68;
  int local_58 [4];
  undefined4 local_48 [2];
  
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_68 = (ulong)local_68._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)&local_68);
  local_68 = 0;
  FUN_71000bb5d0(&local_68);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_68 + *plVar1 * 0x1194;
  memcpy(param_2 + 0x17,(void *)(param_4 + 8),0x1d6);
  FUN_710016e380((int *)&local_68,(long)param_2);
  FUN_71000bcf30(local_58,(int *)&local_68);
  if (local_58[0] != 0) {
    piVar2 = local_58;
    goto LAB_710016f78c;
  }
  FUN_7100181800((int *)&local_68,(long *)param_2[0xe],param_2 + 0x16);
  FUN_71000bcf30(local_58,(int *)&local_68);
  if (local_58[0] == 0) {
    FUN_7100172d30((int *)&local_68,param_2,param_3,3);
    FUN_71000bcf30(local_58,(int *)&local_68);
    if (local_58[0] != 0) {
      uVar3 = 0x10c08;
      goto LAB_710016f768;
    }
    if ((param_5 & 1) == 0) {
      DAT_71052ac5e0 = param_2[0x17];
      param_2[7] = 0;
      param_2[8] = (long)"LdnBackgroundProcessJob::CreateNetworkPrivate";
      param_2[6] = (long)FUN_710016f920;
      DAT_71052ac5e8 = *(undefined1 *)((long)param_2 + 0xc2);
    }
    else {
      param_2[7] = 0;
      param_2[8] = (long)"LdnBackgroundProcessJob::UpdateCreateNetworkSettingForFixedChannel";
      param_2[6] = (long)FUN_710016f810;
    }
    local_68 = local_68 & 0xffffffff00000000;
  }
  else {
    uVar3 = 0x10c07;
LAB_710016f768:
    local_68 = CONCAT44(local_68._4_4_,uVar3);
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_68 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_48);
  piVar2 = (int *)&local_68;
LAB_710016f78c:
  FUN_71000bce50(param_1,piVar2);
  return;
}

