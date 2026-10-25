// addr:      7103374690
// offset:    0x3374690
// name:      FUN_7103374690
// mangled:   
// signature: undefined __cdecl FUN_7103374690(long param_1, char * param_2, undefined8 param_3)


void FUN_7103374690(long param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  puVar2 = FUN_71038f6930(param_1,8);
  *puVar2 = param_3;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"MetatableLayoutSubMenu");
  FUN_71038f5c00(param_1,-2);
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x40);
  if (*(uint *)(lVar5 + 0xc) < 2) {
    plVar3 = (long *)(*(long *)(lVar5 + 0x18) +
                     ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar5 + 0xb) & 0x3f)) & 2) *
                     0x20);
    do {
      if (((int)plVar3[3] == 0x13) && (plVar4 = plVar3, plVar3[2] == 2)) break;
      piVar1 = (int *)((long)plVar3 + 0x1c);
      plVar3 = plVar3 + (long)*piVar1 * 4;
      plVar4 = &DAT_7104862960;
    } while (*piVar1 != 0);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar5 + 0x10) + 0x10);
  }
  FUN_71038f5390(param_1,plVar4,param_2);
  return;
}

