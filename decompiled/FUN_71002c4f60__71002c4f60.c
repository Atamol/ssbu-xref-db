// addr:      71002c4f60
// offset:    0x2c4f60
// name:      FUN_71002c4f60
// mangled:   
// signature: undefined __cdecl FUN_71002c4f60(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71002c4f60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *local_48;
  undefined8 local_38;
  
  if (((DAT_71052b6eb0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71052b6eb0), iVar3 != 0)) {
    DAT_71052b69f8 = &PTR_FUN_7105269c88;
    DAT_71052b6a00 = 0x12;
    uRam00000071052b6a0b = 0;
    DAT_71052b6a10 = 0;
    DAT_71052b6a01._0_7_ = 0x6e69463a3a756e;
    DAT_71052b6a01._7_1_ = 0x61;
    DAT_71052b6a09 = 0x6c;
    DAT_71052b6a18 = 0;
    DAT_71052b6a30 = 0;
    DAT_71052b6a38 = 0;
    DAT_71052b6a50 = 0;
    DAT_71052b6a28 = 0;
    _DAT_71052b6a20 = 1;
    DAT_71052b6a48 = 0;
    DAT_71052b6a40 = &DAT_71052b6a48;
    DAT_71052b6a60 = 0;
    DAT_71052b6a58 = &DAT_71052b6a60;
    DAT_71052b6a78 = 0;
    DAT_71052b6b10 = (undefined8 *)0x0;
    DAT_71052b6a68 = 0;
    _DAT_71052b6a70 = 1;
    DAT_71052b6a80 = 0;
    DAT_71052b6a88 = 0;
    DAT_71052b6aa0 = 0;
    DAT_71052b6aa8 = 0;
    DAT_71052b6a90 = &PTR_FUN_7104f61e38;
    DAT_71052b6a98 = 0;
    DAT_71052b6ac0 = 0;
    DAT_71052b6ac8 = 0;
    DAT_71052b6ab0 = &PTR_FUN_7104f61e18;
    DAT_71052b6ab8 = 0;
    DAT_71052b6ae0 = 0;
    DAT_71052b6ae8 = 0;
    DAT_71052b6ad0 = &PTR_FUN_7104f61e38;
    DAT_71052b6ad8 = 0;
    DAT_71052b6b00 = 0;
    DAT_71052b6b08 = 0;
    DAT_71052b6af0 = &PTR_FUN_7104f61e18;
    DAT_71052b6af8 = 0;
    DAT_71052b6b18 = (undefined8 *)0x0;
    DAT_71052b6b20 = (undefined8 *)0x0;
    iVar3 = FUN_710392e1f0(&local_48,0x10,(long ****)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
    if ((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_38 = 0x80;
      uVar4 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38);
      if ((uVar4 & 1) != 0) {
        FUN_710392e1f0(&local_48,0x10,(long ****)&DAT_00000080,in_x3,in_x4,in_x5,in_x6,in_x7);
      }
    }
    nu::VirtualAllocHook(0x80,0x10,local_48);
    DAT_71052b6b20 = local_48 + 0x10;
    DAT_71052b6b10 = local_48;
    DAT_71052b6b18 = local_48;
    local_48[2] = 0;
    local_48[3] = 0;
    *local_48 = &PTR_FUN_7105242188;
    local_48[1] = 0;
    puVar2 = DAT_71052b6b18;
    puVar1 = DAT_71052b6b18 + 6;
    DAT_71052b6b18 = DAT_71052b6b18 + 4;
    *puVar1 = 0;
    puVar2[7] = 0;
    puVar2[4] = &PTR_FUN_7105242188;
    puVar2[5] = 0;
    puVar2 = DAT_71052b6b18;
    puVar1 = DAT_71052b6b18 + 6;
    DAT_71052b6b18 = DAT_71052b6b18 + 4;
    *puVar1 = 0;
    puVar2[7] = 0;
    puVar2[4] = &PTR_FUN_7105242188;
    puVar2[5] = 0;
    puVar2 = DAT_71052b6b18;
    puVar1 = DAT_71052b6b18 + 6;
    DAT_71052b6b18 = DAT_71052b6b18 + 4;
    *puVar1 = 0;
    puVar2[7] = 0;
    puVar2[4] = &PTR_FUN_7105242188;
    puVar2[5] = 0;
    DAT_71052b6b18 = DAT_71052b6b18 + 4;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71052b6eb0);
    return;
  }
  return;
}

