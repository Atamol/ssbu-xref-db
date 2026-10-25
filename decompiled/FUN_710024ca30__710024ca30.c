// addr:      710024ca30
// offset:    0x24ca30
// name:      FUN_710024ca30
// mangled:   
// signature: undefined FUN_710024ca30(void)


undefined8 * FUN_710024ca30(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar1 = FUN_71001af850(200);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[7] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[10] = puVar1 + 8;
    puVar1[0xb] = 0x10;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0x200;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_7104f5cc18;
    *(undefined8 *)((long)puVar1 + 0x24) = 1;
    FUN_71001b3cb0((long)(puVar1 + 7),"");
    *(undefined1 *)(puVar1 + 0xc) = 0;
    *puVar1 = &PTR_FUN_7104f5cea8;
    puVar3 = puVar1 + 0xd;
    *puVar3 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar1 + 0xe) = 1;
    *(undefined1 *)((long)puVar1 + 0x74) = 0;
    *puVar3 = &PTR_FUN_7104f56018;
    uVar2 = FUN_71001cf750();
    FUN_71001cf760((long)puVar3,uVar2,0);
    *puVar1 = &PTR_FUN_7104f5cff8;
    puVar1[0x14] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar1 + 0x15) = 0;
    puVar1[0x17] = puVar1 + 0x15;
    puVar1[0x18] = 0x10;
    FUN_71001b47e0((long)(puVar1 + 0x14),"DynamicGathering",-1);
  }
  return puVar1;
}

