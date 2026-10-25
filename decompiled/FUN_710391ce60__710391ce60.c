// addr:      710391ce60
// offset:    0x391ce60
// name:      FUN_710391ce60
// mangled:   
// signature: undefined __cdecl FUN_710391ce60(long * param_1, int param_2, void * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710391ce60(long *param_1,int param_2,void *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)((long)param_1 + 0x2c) <= param_2) {
    if (param_2 == 0) {
      FUN_71038f4a00(param_1[3],param_3,param_4 - (long)param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1[3],"invalid capture index %%%d",(ulong)(param_2 + 1),param_4,param_5,
                   param_6,param_7,param_8);
  }
  uVar1 = param_1[(long)param_2 * 2 + 7];
  if (uVar1 != 0xffffffffffffffff) {
    lVar2 = param_1[3];
    if (uVar1 == 0xfffffffffffffffe) {
      plVar3 = *(long **)(lVar2 + 0x10);
      *plVar3 = param_1[(long)param_2 * 2 + 6] + (1 - *param_1);
      *(undefined4 *)(plVar3 + 1) = 0x13;
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 0x10;
      return;
    }
    FUN_71038f4a00(lVar2,(void *)param_1[(long)param_2 * 2 + 6],uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1[3],"unfinished capture",0xffffffffffffffff,param_4,param_5,param_6,param_7,
                 param_8);
}

