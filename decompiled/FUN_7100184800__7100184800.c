// addr:      7100184800
// offset:    0x184800
// name:      FUN_7100184800
// mangled:   
// signature: undefined8 __cdecl FUN_7100184800(long param_1)


undefined8 FUN_7100184800(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0') {
    uVar2 = 5;
    switch(iVar1) {
    case 1:
      goto switchD_7100184854_caseD_1;
    case 2:
      FUN_710017dde0(*(long *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      FUN_710017eae0(*(long **)(param_1 + 0xb0));
      local_38[0] = 0;
      goto LAB_710018487c;
    case 3:
      FUN_71000bce50(local_38,(int *)(param_1 + 0x6c));
      break;
    case 4:
      goto switchD_7100184854_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_71000b4300(param_1 + 0x68);
    }
switchD_7100184854_caseD_4:
    local_38[0] = 0x6c05;
LAB_710018487c:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  }
  FUN_71000bcf30((int *)(param_1 + 0x9c),local_38);
  uVar2 = 0;
  *(code **)(param_1 + 0x30) = FUN_71001849e0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalAllowParticipatingJob::WaitBackgroundJobEnd";
switchD_7100184854_caseD_1:
  return uVar2;
}

