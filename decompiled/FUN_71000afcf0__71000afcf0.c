// addr:      71000afcf0
// offset:    0xafcf0
// name:      FUN_71000afcf0
// mangled:   
// signature: undefined __cdecl FUN_71000afcf0(long param_1, undefined8 * param_2)


void FUN_71000afcf0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-8_2_1-Release");
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) &&
     (puVar4 = *(undefined4 **)(param_1 + 0xb0), puVar4 != (undefined4 *)0x0)) {
    FUN_71000338f0(plVar2);
    FUN_7100033920(plVar2,param_2,puVar4);
    FUN_710003b000(plVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_71000afeb0(*(long *)(param_1 + 0x28) + lVar3,param_2);
      lVar3 = lVar3 + 0x78;
    } while ((ulong)uVar1 * 0x78 - lVar3 != 0);
  }
  return;
}

