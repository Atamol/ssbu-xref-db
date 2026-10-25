// addr:      7101e726b0
// offset:    0x1e726b0
// name:      FUN_7101e726b0
// mangled:   
// signature: undefined __cdecl FUN_7101e726b0(long param_1, byte param_2, ulong param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101e726b0(long param_1,byte param_2,ulong param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined6 uVar5;
  undefined3 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ushort uVar20;
  char local_1e0 [64];
  undefined1 auStack_1a0 [6];
  char local_19a;
  char local_190;
  ulong local_b8;
  ulong local_b0;
  undefined8 local_a8;
  byte abStack_a7 [7];
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_96;
  ushort local_8e;
  undefined1 local_8c;
  
  lVar15 = param_4;
  FUN_7101e722f0(param_1,param_2,param_4);
  if (*(char *)(param_4 + 9) != '\0') {
    return;
  }
  if (3 < param_2) {
    return;
  }
  lVar19 = param_1 + (ulong)param_2 * 8;
  lVar10 = *(long *)(lVar19 + 0x210);
  if (lVar10 == 0) {
    return;
  }
  puVar1 = &DAT_71043cd335;
  if (*(char *)(param_4 + 10) != '\0') {
    puVar1 = &DAT_710429257e;
  }
  *(char *)(lVar10 + 0xfa) = *(char *)(param_4 + 10);
  FUN_7103778300(0x3f800000,*(long *)(lVar10 + 200),(long)puVar1);
  lVar19 = *(long *)(lVar19 + 0x210);
  if (lVar19 == 0) {
    return;
  }
  lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  local_b8 = param_3;
  uVar7 = FUN_71032a7800(lVar18,param_3 & 0xffffffffff);
  lVar10 = *(long *)(lVar18 + 0x20);
  uVar14 = (*(long *)(lVar18 + 0x28) - lVar10 >> 6) * -0x3333333333333333;
  if (uVar7 < (uint)uVar14) {
    uVar20 = 0xffff;
    uVar4 = *(ushort *)(lVar10 + (ulong)uVar7 * 0x140);
    if (uVar4 == 0xffff) {
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = (ulong)*(ushort *)(lVar18 + (long)(short)uVar4 * 2 + 0x60);
      uVar20 = uVar4;
    }
  }
  else {
    uVar17 = 0xffffffff;
    uVar20 = 0xffff;
  }
  puVar2 = (undefined2 *)(lVar10 + uVar17 * 0x140);
  if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
    puVar2 = &DAT_7105182b08;
  }
  uVar14 = 0;
  while( true ) {
    pcVar16 = (char *)((long)puVar2 + uVar14 + 0x18);
    cVar3 = *pcVar16;
    if (cVar3 == '\0') break;
    local_1e0[uVar14] = cVar3;
    if (0x3e < (int)uVar14 + 1U) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
    cVar3 = pcVar16[1];
    if (cVar3 == '\0') {
      uVar14 = uVar14 + 1;
      break;
    }
    local_1e0[uVar14 + 1] = cVar3;
    uVar14 = uVar14 + 2;
  }
  uVar7 = 0x811c9dc5;
  local_1e0[uVar14 & 0xffffffff] = '\0';
  if (local_1e0[0] != '\0') {
    pcVar16 = local_1e0;
    do {
      pcVar16 = pcVar16 + 1;
    } while (*pcVar16 != '\0');
  }
  uVar9 = 0xe8;
  memcpy(auStack_1a0,puVar2 + 0x2c,0xe8);
  *(ulong *)(lVar19 + 0xf0) = param_3 & 0xffffffffff;
  *(undefined1 *)(lVar19 + 0xf9) = 1;
  pcVar16 = "effect_rarity_show";
  if (local_190 != '\x03') {
    pcVar16 = "effect_rarity_hide";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 8),(long)pcVar16);
  if (local_19a == '\x01') {
    FUN_710377a120(lVar19 + 0x40,"nam_goods_category_supporter",uVar9,lVar15,param_5,param_6,param_7
                   ,param_8);
  }
  else if (local_19a == '\0') {
    FUN_710377a120(lVar19 + 0x40,"nam_goods_category_attacker",uVar9,lVar15,param_5,param_6,param_7,
                   param_8);
  }
  else {
    plVar8 = *(long **)(*(long *)(lVar19 + 0x48) + 0x10);
    if (plVar8 != (long *)0x0) {
      local_b0 = local_b0 & 0xffffffff00000000;
      FUN_71037a2270(plVar8,(ushort *)&local_b0,0,0);
    }
  }
  FUN_71025b10e0(lVar19 + 0x20,local_190);
  uVar5 = local_a0._2_6_;
  uVar13 = uVar7;
  switch(local_190) {
  case '\0':
    local_b0 = 0xa00000000;
    local_a8 = 0x6f6e5f726f6c6f63;
    uVar12 = 99;
    local_a0 = CONCAT53(local_a0._3_5_,0x656e);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x01':
    local_b0 = 0xa00000000;
    local_a8 = 0x6f685f726f6c6f63;
    uVar12 = 99;
    local_a0 = CONCAT53(local_a0._3_5_,0x6570);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x02':
    local_b0 = 0x900000000;
    local_a8 = 0x63615f726f6c6f63;
    local_a0 = CONCAT62(uVar5,0x65);
    uVar12 = 99;
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x03':
    local_b0 = 0xc00000000;
    local_a8 = 0x656c5f726f6c6f63;
    uVar12 = 99;
    local_a0 = CONCAT35(local_a0._5_3_,0x646e6567);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  default:
    local_b0 = 0xa00000000;
    local_a8 = 0x6f6e5f726f6c6f63;
    uVar12 = 99;
    local_a0 = CONCAT53(local_a0._3_5_,0x656e);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar13);
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x28),(long)&stack0xffffffffffffff58);
  uVar6 = local_a0._5_3_;
  uVar13 = uVar7;
  switch(local_190) {
  case '\0':
    local_b0 = 0xc00000000;
    local_a8 = 0x6f6e5f7373616c63;
    uVar12 = 99;
    local_a0 = CONCAT35(uVar6,0x65636976);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x01':
    local_b0 = 0xa00000000;
    local_a8 = 0x6f685f7373616c63;
    uVar12 = 99;
    local_a0 = CONCAT53(local_a0._3_5_,0x6570);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x02':
    local_b0 = 0x900000000;
    local_a8 = 0x63615f7373616c63;
    local_a0 = CONCAT62(local_a0._2_6_,0x65);
    uVar12 = 99;
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case '\x03':
    local_b0 = 0xc00000000;
    local_a8 = 0x656c5f7373616c63;
    uVar12 = 99;
    local_a0 = CONCAT35(uVar6,0x646e6567);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  default:
    local_b0 = 0xc00000000;
    local_a8 = 0x6f6e5f7373616c63;
    uVar12 = 99;
    local_a0 = CONCAT35(uVar6,0x65636976);
    pbVar11 = abStack_a7;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar13);
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 8),(long)&stack0xffffffffffffff58);
  uVar13 = 0;
  if ((uVar20 == 0xffff) || (1999 < (short)uVar20)) goto LAB_7101e72d78;
  lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar4 = *(ushort *)(lVar15 + ((long)((ulong)uVar20 << 0x30) >> 0x2f) + 0x60);
  uVar14 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
  if ((uint)uVar4 < (uint)uVar14) {
    uVar17 = 0xffffffff;
    if (uVar20 != 0xffff) {
      uVar17 = (ulong)uVar4;
    }
    puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar17 * 0x140);
    if (uVar14 < uVar17 || uVar14 - uVar17 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    if (*(char *)(puVar2 + 0x2f) != '\0') {
      uVar13 = 4;
      goto LAB_7101e72d78;
    }
    if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
      uVar13 = 0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3);
      goto LAB_7101e72d78;
    }
  }
  uVar13 = 0;
LAB_7101e72d78:
  FUN_71025b10e0(lVar19 + 0x10,local_190);
  FUN_710339dde0((uint *)&local_b0,(char)uVar13,'\0');
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x18),(long)&stack0xffffffffffffff58);
  switch(uVar13 & 0xff) {
  case 0:
    local_b0 = 0x1800000000;
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x617474615f746972;
    local_98 = 0x6b63;
    uVar13 = 99;
    local_96 = CONCAT17(local_96._7_1_,0x6e6f6e5f7265);
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
    break;
  case 1:
    local_b0 = 0x1c00000000;
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x617474615f746972;
    local_98 = 0x6b63;
    local_96 = 0x6e6566666f5f7265;
    local_8e = 0x6573;
    uVar13 = 99;
    local_8c = 0;
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
    break;
  case 2:
    local_b0 = 0x1c00000000;
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x617474615f746972;
    local_98 = 0x6b63;
    local_96 = 0x6e656665645f7265;
    local_8e = 0x6573;
    uVar13 = 99;
    local_8c = 0;
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
    break;
  case 3:
    local_b0 = 0x1a00000000;
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x617474615f746972;
    local_98 = 0x6b63;
    local_96 = 0x776f7268745f7265;
    local_8e = local_8e & 0xff00;
    uVar13 = 99;
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
    break;
  case 4:
    local_b0 = 0x1500000000;
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x707075735f746972;
    local_98 = 0x726f;
    local_96 = CONCAT44(local_96._4_4_,0x726574);
    uVar13 = 99;
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
    break;
  default:
    local_a8 = 0x6970735f64726163;
    local_a0 = 0x617474615f746972;
    local_b0 = 0x1800000000;
    local_98 = 0x6b63;
    uVar13 = 99;
    local_96 = CONCAT17(local_96._7_1_,0x6e6f6e5f7265);
    pbVar11 = abStack_a7;
    do {
      uVar7 = uVar7 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar13 != 0);
  }
  local_a8 = 0x6970735f64726163;
  local_b0 = CONCAT44(local_b0._4_4_,uVar7);
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 8),(long)&stack0xffffffffffffff58);
  return;
}

