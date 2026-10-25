// addr:      7100148fb0
// offset:    0x148fb0
// name:      FUN_7100148fb0
// mangled:   
// signature: undefined __cdecl FUN_7100148fb0(int * param_1, long param_2, long param_3)


void FUN_7100148fb0(int *param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (param_3 == 0) {
    local_38[0] = 0x10c07;
    goto LAB_7100149050;
  }
  switch(*(undefined4 *)(param_2 + 0x140)) {
  case 1:
  case 3:
  case 4:
    iVar1 = *(int *)(param_2 + 0x110);
    break;
  default:
    goto switchD_7100148fe8_caseD_2;
  case 0x1a:
    iVar1 = *(int *)(param_2 + 0x110);
  }
  if ((iVar1 - 2U < 3) &&
     (plVar2 = *(long **)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168),
     plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x007100149024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x118))(param_1);
    return;
  }
switchD_7100148fe8_caseD_2:
  local_38[0] = 0x10c08;
LAB_7100149050:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}

