// addr:      71036b1a40
// offset:    0x36b1a40
// name:      FUN_71036b1a40
// mangled:   
// signature: undefined __cdecl FUN_71036b1a40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71036b1a40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long ****pppplVar7;
  uint extraout_w8;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_80;
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  void *local_70;
  undefined4 local_64;
  
  plVar9 = (long *)**(undefined8 **)(param_1 + 8);
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0xa8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80._0_1_ = 0xa8;
      local_80._1_4_ = 0;
      local_80._5_2_ = 0;
      local_80._7_1_ = 0;
      pppplVar7 = (long ****)&local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0xa8,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_71036b1acc;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_71036b1acc:
  *puVar2 = &PTR_FUN_7105239ed0;
  puVar2[1] = param_1;
  plVar6 = puVar2 + 3;
  *plVar6 = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = &PTR_FUN_7105239610;
  puVar2[6] = &PTR_FUN_7105239f88;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = &PTR_FUN_7105239610;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xb] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x10] = 0;
  pppplVar7 = (long ****)(puVar2 + 0xf);
  *pppplVar7 = (long ***)&PTR_FUN_7105239610;
  puVar2[0x14] = 0;
  plVar14 = (long *)**(undefined8 **)(param_1 + 8);
  lVar4 = (**(code **)(*plVar14 + 0x38))(plVar14);
  uVar3 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_80._0_1_ = 0x14;
  uStack_77 = 0x6e6f;
  local_80._1_4_ = 0x6e617274;
  local_80._5_2_ = 0x6973;
  local_80._7_1_ = 0x74;
  local_78 = 0x69;
  uVar13 = 0x74;
  lVar11 = 2;
  local_70 = (void *)0x0;
  uStack_75 = 0;
  while( true ) {
    uVar13 = (uVar13 * -0x395b586ca42e166b ^ uVar13 * -0x395b586ca42e166b >> 0x2f) *
             -0x395b586ca42e166b ^ uVar3;
    uVar3 = uVar13 * -0x395b586ca42e166b + 0xe6546b64;
    if (lVar11 == 0xb) break;
    uVar13 = (ulong)*(byte *)((long)&local_80 + lVar11);
    lVar11 = lVar11 + 1;
  }
  uVar3 = uVar13 * 0x395b586ca42e166b + -0xe6546b65 + uVar3 * 0x200000;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  plVar5 = FUN_7103682860(lVar4 + 0x80,(uVar3 ^ uVar3 >> 0x1c) * 0x80000001,(byte *)&local_80);
  if (plVar5 != (long *)0x0) {
    uVar8 = *(uint *)(plVar5 + 9) ^ (int)*(uint *)(plVar5 + 9) >> 0x1f;
    if (uVar8 == 0xf) {
      lVar11 = plVar5[10];
      if (((long *)plVar5[7] == (long *)0x0) || (*(long *)plVar5[7] != plVar5[8])) {
        *plVar6 = 0;
LAB_71036b1c78:
        puVar2[4] = 0;
        puVar2[5] = 0;
        if (lVar11 == 0) goto LAB_71036b1c88;
LAB_71036b1c58:
        if (*(long *)(lVar11 + 8) == 0) goto LAB_71036b1c88;
        puVar2[7] = lVar11;
        puVar12 = *(undefined8 **)(lVar11 + 8);
        puVar2[8] = puVar12;
        uVar10 = *puVar12;
      }
      else {
        lVar4 = plVar5[6];
        *plVar6 = lVar4;
        if (lVar4 == 0) goto LAB_71036b1c78;
        puVar12 = *(undefined8 **)(lVar4 + 8);
        puVar2[4] = puVar12;
        puVar2[5] = *puVar12;
        if (lVar11 != 0) goto LAB_71036b1c58;
LAB_71036b1c88:
        uVar10 = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
      }
      puVar2[9] = uVar10;
      goto LAB_71036b1c94;
    }
    if ((uVar8 < 0x14) && ((1 << (ulong)(uVar8 & 0x1f) & 0x77fffU) != 0)) goto LAB_71036b2058;
    FUN_71036b2390();
    uVar8 = extraout_w8;
LAB_71036b2038:
    if ((0x13 < uVar8) || ((1 << (ulong)(uVar8 & 0x1f) & 0x7dfffU) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_71036b21a0();
    }
LAB_71036b2058:
                    /* WARNING: Subroutine does not return */
    FUN_7103741710();
  }
LAB_71036b1c94:
  lVar11 = (**(code **)(*plVar14 + 0x38))(plVar14);
  local_80._5_2_ = 0x6372;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_70 = (void *)0x0;
  local_80._0_1_ = 0xc;
  local_80._1_4_ = 0x735f7274;
  local_80._7_1_ = 0;
  FUN_71036b2070(lVar11,(byte *)&local_80,(long)(puVar2 + 10));
  pvVar1 = local_70;
  if (((byte)local_80 & 1) != 0) {
    nu::VirtualFreeHook(local_70);
    FUN_710392eb40((ulong)pvVar1);
  }
  lVar11 = (**(code **)(*plVar14 + 0x38))(plVar14);
  local_80._5_2_ = 0x7473;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_70 = (void *)0x0;
  local_80._0_1_ = 0xc;
  local_80._1_4_ = 0x645f7274;
  local_80._7_1_ = 0;
  FUN_71036b2070(lVar11,(byte *)&local_80,(long)pppplVar7);
  pvVar1 = local_70;
  if (((byte)local_80 & 1) != 0) {
    nu::VirtualFreeHook(local_70);
    FUN_710392eb40((ulong)pvVar1);
  }
  *(undefined4 *)(puVar2[7] + 0x10) = 0x3f800000;
  plVar14 = *(long **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x50,pppplVar7,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80._0_1_ = 0x50;
      local_80._1_4_ = 0;
      local_80._5_2_ = 0;
      local_80._7_1_ = 0;
      pppplVar7 = (long ****)&local_80;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x50,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_71036b1de4;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_71036b1de4:
  *puVar2 = &PTR_FUN_7105239e40;
  puVar2[1] = param_1;
  plVar14 = puVar2 + 3;
  *plVar14 = 0;
  puVar2[2] = &PTR_FUN_7105239610;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = &PTR_FUN_7105239eb0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  lVar4 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 8) + 0x38))();
  uVar3 = 0;
  local_80._7_1_ = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_80._0_1_ = 10;
  local_80._1_4_ = 0x6e656c62;
  uVar13 = 0x62;
  lVar11 = 2;
  local_70 = (void *)0x0;
  local_80._5_2_ = 100;
  while( true ) {
    uVar13 = (uVar13 * -0x395b586ca42e166b ^ uVar13 * -0x395b586ca42e166b >> 0x2f) *
             -0x395b586ca42e166b ^ uVar3;
    uVar3 = uVar13 * -0x395b586ca42e166b + 0xe6546b64;
    if (lVar11 == 6) break;
    uVar13 = (ulong)*(byte *)((long)&local_80 + lVar11);
    lVar11 = lVar11 + 1;
  }
  uVar3 = uVar13 * 0x395b586ca42e166b + -0xe6546b65 + uVar3 * 0x200000;
  uVar3 = (uVar3 ^ uVar3 >> 0x18) * 0x109;
  uVar3 = (uVar3 ^ uVar3 >> 0xe) * 0x15;
  plVar6 = FUN_7103682860(lVar4 + 0x80,(uVar3 ^ uVar3 >> 0x1c) * 0x80000001,(byte *)&local_80);
  if (plVar6 == (long *)0x0) goto LAB_71036b1f64;
  uVar8 = *(uint *)(plVar6 + 9) ^ (int)*(uint *)(plVar6 + 9) >> 0x1f;
  if (uVar8 != 0xd) goto LAB_71036b2038;
  lVar11 = plVar6[10];
  if (((long *)plVar6[7] == (long *)0x0) || (*(long *)plVar6[7] != plVar6[8])) {
    *plVar14 = 0;
LAB_71036b1f48:
    puVar2[4] = 0;
    puVar2[5] = 0;
    if (lVar11 == 0) goto LAB_71036b1f58;
LAB_71036b1f28:
    if (*(long *)(lVar11 + 8) == 0) goto LAB_71036b1f58;
    puVar2[7] = lVar11;
    puVar12 = *(undefined8 **)(lVar11 + 8);
    puVar2[8] = puVar12;
    uVar10 = *puVar12;
  }
  else {
    lVar4 = plVar6[6];
    *plVar14 = lVar4;
    if (lVar4 == 0) goto LAB_71036b1f48;
    puVar12 = *(undefined8 **)(lVar4 + 8);
    puVar2[4] = puVar12;
    puVar2[5] = *puVar12;
    if (lVar11 != 0) goto LAB_71036b1f28;
LAB_71036b1f58:
    uVar10 = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
  }
  puVar2[9] = uVar10;
LAB_71036b1f64:
  plVar14 = *(long **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar2;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  lVar11 = (**(code **)(*plVar9 + 0x38))();
  local_70 = (void *)0x0;
  uStack_72 = 0;
  local_80._0_1_ = 0x18;
  local_80._1_4_ = 0x6e656c62;
  local_80._5_2_ = 0x5f64;
  local_80._7_1_ = 0x72;
  local_78 = 0x65;
  uStack_77 = 0x7573;
  uStack_75 = 0x6c;
  uStack_74 = 0x74;
  uStack_73 = 0;
  FUN_71036b2070(lVar11,(byte *)&local_80,param_1 + 0x10);
  pvVar1 = local_70;
  if (((byte)local_80 & 1) != 0) {
    nu::VirtualFreeHook(local_70);
    FUN_710392eb40((ulong)pvVar1);
  }
  return;
}

