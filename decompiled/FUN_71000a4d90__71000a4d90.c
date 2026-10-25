// addr:      71000a4d90
// offset:    0xa4d90
// name:      FUN_71000a4d90
// mangled:   
// signature: bool __cdecl FUN_71000a4d90(long param_1, long * param_2, long param_3, int param_4, byte param_5, undefined8 param_6)


bool FUN_71000a4d90(long param_1,long *param_2,long param_3,int param_4,byte param_5,
                   undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar1 != 0) {
    FUN_7100099da0(lVar1,(long)param_2);
    lVar1 = (long)param_4 * 8;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1));
    *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1) = 0;
    FUN_7100093660();
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x540,0x80);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_7100099560(puVar2,*(undefined8 *)(param_1 + 0x38),param_2,param_3,0,0,0,param_4,param_1,
                   param_5 & 1,param_6);
    *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)param_4 * 8) = puVar2;
  }
  return puVar2 != (undefined8 *)0x0;
}

