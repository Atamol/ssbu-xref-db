// addr:      7101d80560
// offset:    0x1d80560
// name:      FUN_7101d80560
// mangled:   
// signature: undefined __cdecl FUN_7101d80560(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d80560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = **(long **)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1dc) == 0) {
    FUN_7101d818b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x7104270235);
  }
  if (*(char *)(*(long *)(param_1 + 0x210) + 0x280) == '\0') {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
    if (((lVar5 != 0) &&
        (plVar1 = (long *)FUN_71037964b0(lVar5,0x7104270235), plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1d4);
    if (0x12 < uVar3) goto LAB_7101d8060c;
    uVar4 = 3;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1d4);
    if (0x12 < uVar3) {
LAB_7101d8060c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x188) = uVar4;
  return;
}

