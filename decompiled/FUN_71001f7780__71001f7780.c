// addr:      71001f7780
// offset:    0x1f7780
// name:      FUN_71001f7780
// mangled:   
// signature: undefined __cdecl FUN_71001f7780(long param_1)


void FUN_71001f7780(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined **local_190;
  undefined1 local_188 [16];
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char *local_160;
  
  FUN_71001b6080(&uStack_168);
  lVar1 = FUN_71001b0ab0((long)&uStack_168,"TransportBufferThread(recv ");
  lVar1 = FUN_71001b0ab0(lVar1,(&PTR_DAT_7104f555e0)[*(uint *)(param_1 + 0xe0)]);
  FUN_71001b0ab0(lVar1,")");
  puVar2 = FUN_71001af850(0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    local_188[0] = 0;
    local_178 = local_188;
    local_170 = 0x10;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_190,local_160,-1);
    FUN_71001b2360(puVar2,(long)&local_190,DAT_7104f577c0);
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &PTR_FUN_7104f59608;
    *(undefined8 **)(param_1 + 0xd8) = puVar2;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_190);
  }
  if (DAT_7104f577c8 == -0x80000000) {
    pvVar3 = *(void **)(param_1 + 0xd8);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0xd8);
    *(int *)((long)pvVar3 + 0x54) = DAT_7104f577c8;
  }
  *(long *)((long)pvVar3 + 0x68) = param_1;
  *(undefined4 *)((long)pvVar3 + 0x70) = 0;
  *(code **)((long)pvVar3 + 0x58) = FUN_71001f7710;
  *(undefined8 *)((long)pvVar3 + 0x60) = 0;
  FUN_71001b27e0(pvVar3,0);
  FUN_71001b60c0(&uStack_168);
  return;
}

