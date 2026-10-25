// addr:      7100014250
// offset:    0x14250
// name:      FUN_7100014250
// mangled:   
// signature: undefined8 __cdecl FUN_7100014250(long param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7100014250(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (plVar3 = (long *)FUN_710000bc20(*(long *)(param_1 + 0xa8)), plVar3 != (long *)0x0)) {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      lVar4 = *plVar3;
      bVar2 = FUN_7100017280((byte *)(lVar4 + 0x1a),*(byte **)(param_2 + 0xd8));
      if ((bVar2) && (uVar1 = *(ushort *)(lVar4 + 0x18), *(uint *)(param_2 + 0x198) == (uint)uVar1))
      {
        FUN_7100015de0(param_1,(byte *)"Site %s:%d is pipeline blacklisted\n",
                       *(undefined8 *)(param_2 + 0xd8),(ulong)uVar1,param_5,param_6,param_7,param_8)
        ;
        return 1;
      }
      plVar3 = (long *)plVar3[2];
    } while (plVar3 != (long *)0x0);
  }
  return 0;
}

