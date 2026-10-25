// addr:      710016f810
// offset:    0x16f810
// name:      FUN_710016f810
// mangled:   
// signature: undefined FUN_710016f810(void)


undefined8 FUN_710016f810(long param_1)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined2 *)(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0x300) = *(undefined2 *)(param_1 + 0x28c);
  memset(&uStack_40,0,0x10);
  *(undefined8 *)(param_1 + 0x2f0) = uVar6;
  *(ulong *)(param_1 + 0x2f8) = CONCAT44(uStack_34,CONCAT22(uVar1,uStack_38));
  *(undefined1 *)(param_1 + 0x302) = *(undefined1 *)(param_1 + 0xc2);
  uStack_40 = uVar6;
  uStack_36 = uVar1;
  uVar3 = FUN_710016af60(*(long *)(param_1 + 0x70));
  *(short *)(param_1 + 0x304) = (short)uVar3;
  bVar2 = FUN_7100182850(*(long *)(param_1 + 0x70));
  if (bVar2) {
    if (*(char *)(param_1 + 0x78) != '\0') {
      uVar6 = FUN_71000b63d0();
      uVar5 = FUN_71000b63d0();
      FUN_7100173820(param_1,uVar6,uVar5);
    }
    uVar4 = FUN_7100173100(param_1);
    FUN_71001820f0(*(long *)(param_1 + 0x70),uVar4);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xd0))
              (*(long **)(param_1 + 0x70),param_1 + 0x105,uVar4);
  }
  DAT_71052ac5e0 = *(undefined8 *)(param_1 + 0xb8);
  DAT_71052ac5e8 = *(undefined1 *)(param_1 + 0xc2);
  *(code **)(param_1 + 0x30) = FUN_710016f920;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LdnBackgroundProcessJob::CreateNetworkPrivate";
  return 0;
}

