// addr:      7100147420
// offset:    0x147420
// name:      FUN_7100147420
// mangled:   
// signature: undefined __cdecl FUN_7100147420(long param_1, int param_2, int param_3, int * param_4)


void FUN_7100147420(long param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  ErrorResultVariant *this;
  int iVar3;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  iVar3 = *(int *)(param_1 + 0x158);
  piVar1 = (int *)(param_1 + 0xdc);
  FUN_71000bce50(local_58,piVar1);
  if (*(int *)(param_1 + 0x158) == 2) {
    return;
  }
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0xd8) != 0) goto switchD_7100147484_caseD_1;
    goto LAB_7100147528;
  case 1:
    goto switchD_7100147484_caseD_1;
  case 2:
    if (*(int *)(param_1 + 0xd8) - 3U < 5) {
      return;
    }
    if (*(int *)(param_1 + 0xd8) == 0) {
      return;
    }
    if ((*(int *)(param_1 + 0x158) != 0) && ((param_3 == 0 || (param_3 == 5)))) goto LAB_7100147528;
    goto switchD_7100147484_caseD_1;
  case 3:
    local_68[0] = 0xc406;
    break;
  case 4:
    local_68[0] = 0xa471;
    break;
  case 5:
    local_68[0] = 0xc420;
    break;
  case 6:
    local_68[0] = 0xc421;
    break;
  case 7:
    local_68[0] = 0xa46e;
    this = (ErrorResultVariant *)((ulong)local_68 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_48[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
    if (*param_4 != local_68[0]) {
      local_68[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      goto LAB_7100147514;
    }
    goto LAB_7100147520;
  default:
    goto switchD_7100147484_default;
  }
  this = (ErrorResultVariant *)((ulong)local_68 | 4);
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
LAB_7100147514:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=(this,(Result *)local_48);
  param_4 = local_68;
LAB_7100147520:
  FUN_71000bcf30(local_58,param_4);
switchD_7100147484_default:
  iVar3 = 8;
LAB_7100147528:
  iVar2 = *(int *)(param_1 + 0xd8);
joined_r0x0071001474a8:
  if (((iVar2 != param_2) || (*(int *)(param_1 + 0x158) != iVar3)) || (*piVar1 != local_58[0])) {
    *(int *)(param_1 + 0xd8) = param_2;
    *(int *)(param_1 + 0x158) = iVar3;
    FUN_71000bcf30(piVar1,local_58);
  }
  return;
switchD_7100147484_caseD_1:
  FUN_71000bcf30(local_58,param_4);
  iVar2 = *(int *)(param_1 + 0xd8);
  iVar3 = param_3;
  goto joined_r0x0071001474a8;
}

