// addr:      7101d0f540
// offset:    0x1d0f540
// name:      FUN_7101d0f540
// mangled:   
// signature: undefined __cdecl FUN_7101d0f540(uint * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0f540(uint *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = param_4 & 0xffffffff;
  uVar3 = (uint)param_4;
  switch((int)param_3) {
  case 1:
    FUN_71003a4ca0(param_1,"win_%d",uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 2:
    if (3 < uVar3) {
LAB_7101d0f604:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    pcVar2 = "lose_%d_w%d_r%d";
    break;
  case 3:
    uVar3 = *(uint *)(param_2 + 0x1c);
    pcVar2 = "center_%d_h%d";
    goto LAB_7101d0f5c0;
  case 4:
    uVar3 = *(uint *)(param_2 + 0x24);
    pcVar2 = "enlarge_%d_s%d";
LAB_7101d0f5c0:
    FUN_71003a4ca0(param_1,pcVar2,uVar4,(ulong)uVar3,param_4,param_5,param_6,param_7,param_8);
    return;
  default:
    if (3 < uVar3) goto LAB_7101d0f604;
    uVar1 = *(uint *)(param_2 + 0x18);
    pcVar2 = "progress_%d_w%d_r%d";
  }
  FUN_71003a4ca0(param_1,pcVar2,uVar4,(ulong)uVar1,
                 (ulong)*(uint *)(param_2 + (long)(int)uVar3 * 4 + 0x28),param_5,param_6,param_7,
                 param_8);
  return;
}

