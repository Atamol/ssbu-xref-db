// addr:      710022d4a0
// offset:    0x22d4a0
// name:      FUN_710022d4a0
// mangled:   
// signature: undefined __cdecl FUN_710022d4a0(long param_1, long * param_2)


void FUN_710022d4a0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long alStack_98 [2];
  undefined **local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined ***local_58;
  
  plVar4 = param_2 + 1;
  FUN_710170df50(param_2,(undefined8 *)*plVar4);
  param_2[2] = 0;
  *param_2 = (long)plVar4;
  *plVar4 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x18);
  if ((ulong)(lVar3 - lVar2) < 4) {
    uVar5 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar5 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar2 + 4;
    if ((ulong)(lVar3 - (lVar2 + 4)) < (ulong)uVar5) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_710022d544;
    }
  }
  if (uVar5 < 0x10000) {
    if (uVar5 == 0) {
      return;
    }
    do {
      local_80[0] = 0;
      uStack_68 = 0x10;
      local_88 = &PTR_FUN_710509cc08;
      local_70 = local_80;
      FUN_71001b76c0((long)alStack_98);
      FUN_7100228650(param_1,(long)&local_88);
      FUN_7100228930(param_1,alStack_98);
      local_58 = &local_88;
      auVar6 = FUN_71000ebb80(param_2,(long)&local_88,&DAT_710449e948,(long *)&local_58);
      FUN_71001b76e0((long *)(auVar6._0_8_ + 0x48),alStack_98);
      FUN_71001b78a0(alStack_98);
      local_88 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_88);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    return;
  }
LAB_710022d544:
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

