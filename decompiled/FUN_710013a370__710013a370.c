// addr:      710013a370
// offset:    0x13a370
// name:      FUN_710013a370
// mangled:   
// signature: undefined FUN_710013a370(void)


void FUN_710013a370(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_78;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  undefined1 auStack_64 [36];
  
  puStack_70 = auStack_64;
  puStack_78 = &DAT_7104f4ea38;
  uStack_68 = 0x20;
  FUN_7100135780((long)&puStack_78);
  puStack_78 = &DAT_7104f4ebf0;
  *puStack_70 = 0;
  FUN_71001357a0((long)&puStack_78);
  (**(code **)(puStack_78 + 0x18))(&puStack_78);
  uVar2 = 0;
  do {
    if (puStack_70[uVar2] == '\0') goto LAB_710013a45c;
    if (puStack_70[uVar2 + 1] == '\0') {
      uVar2 = uVar2 + 1;
      goto LAB_710013a45c;
    }
    if (puStack_70[uVar2 + 2] == '\0') {
      uVar2 = uVar2 + 2;
      goto LAB_710013a45c;
    }
    uVar1 = uVar2 + 2;
    uVar2 = uVar2 + 3;
  } while (uVar1 >> 0x13 == 0);
  uVar2 = 0;
LAB_710013a45c:
  (**(code **)(puStack_78 + 0x18))(&puStack_78);
  (**(code **)(*param_2 + 8))(param_2,puStack_70,uVar2 & 0xffffffff);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
  (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10),1);
  return;
}

