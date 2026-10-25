// addr:      710022d8d0
// offset:    0x22d8d0
// name:      FUN_710022d8d0
// mangled:   
// signature: undefined FUN_710022d8d0(void)


undefined8 * FUN_710022d8d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = FUN_71001af850(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"<unknown>",-1);
    FUN_71001d22e0(puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = &PTR_FUN_7104f5a630;
    puVar1[0x12] = 0;
    puVar1[0x11] = puVar1 + 0x12;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = param_1;
    puVar1[0x15] = puVar1 + 0x15;
    puVar1[0x16] = puVar1 + 0x15;
    *(undefined4 *)(puVar1 + 0xc) = 9;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"NotificationEventManager",-1);
    FUN_71001db340((long)puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
  }
  return puVar1;
}

