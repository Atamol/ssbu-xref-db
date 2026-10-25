// addr:      71001bdb60
// offset:    0x1bdb60
// name:      FUN_71001bdb60
// mangled:   
// signature: undefined FUN_71001bdb60(void)


undefined4 FUN_71001bdb60(long param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  sockaddr sStack_40;
  undefined1 uStack_3f;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  memset(&sStack_40,0,0x10);
  uStack_3f = 2;
  uStack_3c = nn::socket::InetHtonl(*param_2);
  uStack_3e = nn::socket::InetHtons((ushort)param_2[2]);
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(ulong *)(param_1 + 0x18) =
         CONCAT44(uStack_3c,CONCAT22(uStack_3e,CONCAT11(uStack_3f,sStack_40)));
    *(undefined8 *)(param_1 + 0x20) = uStack_38;
    puVar2 = FUN_71001af850(0x78);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
      auStack_60[0] = 0;
      puStack_50 = auStack_60;
      uStack_48 = 0x10;
      ppuStack_68 = &PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&ppuStack_68,"BerkeleySocketDriver Connect Thread",-1);
      FUN_71001b2360(puVar2,(long)&ppuStack_68,DAT_7104f555d8);
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *puVar2 = &DAT_7104f55a68;
      *(undefined8 **)(param_1 + 0x30) = puVar2;
      ppuStack_68 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&ppuStack_68);
    }
    if (DAT_7104f555dc == -0x80000000) {
      pvVar3 = *(void **)(param_1 + 0x30);
    }
    else {
      pvVar3 = *(void **)(param_1 + 0x30);
      *(int *)((long)pvVar3 + 0x54) = DAT_7104f555dc;
    }
    *(code **)((long)pvVar3 + 0x58) = FUN_71001bdcf0;
    *(undefined8 *)((long)pvVar3 + 0x60) = 0;
    *(long *)((long)pvVar3 + 0x68) = param_1;
    *(long *)((long)pvVar3 + 0x70) = param_1;
    FUN_71001b27e0(pvVar3,0x8000);
    uVar4 = 3;
  }
  else {
    iVar1 = nn::socket::Connect(*(int *)(param_1 + 0xc),&sStack_40,0x10);
    if (iVar1 < 0) {
      iVar1 = nn::socket::GetLastErrno();
      uVar4 = 3;
      if (iVar1 != 0x73) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

