// addr:      71001f6670
// offset:    0x1f6670
// name:      FUN_71001f6670
// mangled:   
// signature: undefined FUN_71001f6670(void)


undefined4 FUN_71001f6670(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined **ppuStack_58;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = FUN_71001af850(0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 800) = 0;
  }
  else {
    auStack_50[0] = 0;
    puStack_40 = auStack_50;
    uStack_38 = 0x10;
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&ppuStack_58,"TransportBufferThread(send)",-1);
    FUN_71001b2360(puVar2,(long)&ppuStack_58,DAT_7104f577c4);
    puVar2[0xd] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = &PTR_FUN_7104f595c8;
    *(undefined8 **)(param_1 + 800) = puVar2;
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_58);
  }
  if (DAT_7104f577c8 == -0x80000000) {
    pvVar3 = *(void **)(param_1 + 800);
  }
  else {
    pvVar3 = *(void **)(param_1 + 800);
    *(int *)((long)pvVar3 + 0x54) = DAT_7104f577c8;
  }
  *(long *)((long)pvVar3 + 0x68) = param_1;
  *(undefined4 *)((long)pvVar3 + 0x70) = 0;
  *(code **)((long)pvVar3 + 0x58) = FUN_71001f6780;
  *(undefined8 *)((long)pvVar3 + 0x60) = 0;
  uVar1 = FUN_71001b27e0(pvVar3,0);
  return uVar1;
}

