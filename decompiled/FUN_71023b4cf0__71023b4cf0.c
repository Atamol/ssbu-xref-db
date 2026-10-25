// addr:      71023b4cf0
// offset:    0x23b4cf0
// name:      FUN_71023b4cf0
// mangled:   
// signature: undefined __cdecl FUN_71023b4cf0(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023b4cf0(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  byte ***local_60;
  undefined2 local_58;
  undefined1 local_56;
  
  lVar11 = DAT_710532f8b0;
  if (*(int *)((long)param_1 + 0x184) != 0) {
    if ((((*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x328) != '\0') &&
         (*(char *)((long)param_1 + 0x19c) == '\0')) &&
        (*(undefined1 *)((long)param_1 + 0x19c) = 1, DAT_710532f7a0 != (undefined8 *)0x0)) &&
       (puVar15 = (uint *)*DAT_710532f7a0, ((byte)*puVar15 >> 1 & 1) != 0)) {
      lVar7 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x5920) == '\x06')) {
        FUN_7100653490(lVar7,0);
        param_2 = extraout_x1;
      }
      puVar15[0x12] = 3;
      if ((((puVar15[0x26] != 2) && (puVar15[0x3a] != 2)) &&
          ((puVar15[0x4e] != 2 &&
           (((puVar15[0x62] != 2 && (puVar15[0x76] != 2)) && (puVar15[0x8a] != 2)))))) &&
         (puVar15[0x9e] != 2)) {
        *puVar15 = *puVar15 | 0x20;
      }
    }
    lVar7 = *param_1;
    lVar10 = *(long *)(lVar7 + 0x28);
    if (*(long *)(lVar10 + 0x60) != 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x30) != *(long *)(lVar10 + 0x38)) {
      return;
    }
    if (*(long *)(*(long *)(lVar7 + 0x20) + 0x10) != 0) {
      return;
    }
    iVar3 = *(int *)(lVar7 + 0x40);
    if (iVar3 == 3) {
      *(undefined1 *)((long)param_1 + 0x19c) = 1;
      if (*(uint *)((long)param_1 + 0x17c) < 0x13) {
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x17c) * 4 + 0x130) = 5
        ;
        return;
      }
    }
    else {
      lVar11 = *(long *)(lVar11 + 8);
      if (*(char *)(lVar11 + 0x328) != '\0') {
        lVar11 = *(long *)(DAT_710532f8b0 + 8);
        *(undefined8 *)(lVar11 + 0x318) = *(undefined8 *)(lVar11 + 0x310);
        *(undefined1 *)(lVar11 + 0x328) = 0;
        if (-1 < *(int *)(lVar11 + 0x134)) {
          uVar5 = 0;
          do {
            if (0x12 < uVar5) goto LAB_71023b54ac;
            if (*(int *)(lVar11 + 0xe8 + uVar5 * 4) == 9) {
              return;
            }
            bVar1 = (long)uVar5 < (long)*(int *)(lVar11 + 0x134);
            uVar5 = uVar5 + 1;
          } while (bVar1);
        }
        if (*(int *)(lVar11 + 0x138) != 0) {
          *(undefined8 *)(lVar11 + 0x128) = 0;
          *(undefined8 *)(lVar11 + 0x130) = 0x300000000;
          *(undefined8 *)(lVar11 + 0x138) = 0xffffffff;
          *(undefined4 *)(lVar11 + 0x140) = 0xffffffff;
          *(undefined8 *)(lVar11 + 8) = 0;
          *(undefined8 *)(lVar11 + 0x10) = 0;
          *(undefined1 *)(lVar11 + 0x144) = 0;
          *(undefined8 *)(lVar11 + 0x118) = 0;
          *(undefined8 *)(lVar11 + 0x120) = 0;
          *(undefined8 *)(lVar11 + 0x108) = 0;
          *(undefined8 *)(lVar11 + 0x110) = 0;
          *(undefined8 *)(lVar11 + 0xf8) = 0;
          *(undefined8 *)(lVar11 + 0x100) = 0;
          *(undefined8 *)(lVar11 + 0xe8) = 0x900000000;
          *(undefined8 *)(lVar11 + 0xf0) = 0x400000008;
          return;
        }
        return;
      }
      if (*(int *)(lVar11 + 0x138) != 0) {
        return;
      }
      *(undefined1 *)((long)param_1 + 0x19c) = 0;
      if (iVar3 == 4) {
        *(undefined1 *)((long)param_1 + 0x19d) = 1;
        uVar14 = *(uint *)((long)param_1 + 0x17c);
        if (uVar14 < 0x13) {
          uVar9 = 6;
LAB_71023b5468:
          *(undefined4 *)((long)param_1 + (long)(int)uVar14 * 4 + 0x130) = uVar9;
          lVar11 = *(long *)(*DAT_7105329f98 + 0x20);
          FUN_710323b9e0(*(long *)(lVar11 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar11 + 0x10);
          *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(lVar11 + 0x28);
          *(undefined8 *)(lVar11 + 0x48) = *(undefined8 *)(lVar11 + 0x40);
          *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(lVar11 + 0x58);
          return;
        }
      }
      else {
        uVar14 = *(uint *)((long)param_1 + 0x17c);
        if (uVar14 < 0x13) {
          uVar9 = 0xe;
          goto LAB_71023b5468;
        }
      }
    }
LAB_71023b54ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x44) == 0x32391b77) {
    iVar3 = strcmp((char *)(lVar7 + 0x4c),"SpiritsTestplayScene");
    pcVar8 = (char *)((long)param_1 + 0x19d);
    if (iVar3 != 0) {
      cVar2 = *pcVar8;
      goto joined_r0x0071023b4de0;
    }
  }
  else {
    cVar2 = *(char *)((long)param_1 + 0x19d);
joined_r0x0071023b4de0:
    pcVar8 = (char *)((long)param_1 + 0x19d);
    if (cVar2 == '\0') {
      if (*(char *)((long)param_1 + 0x19f) == '\0') {
        local_56 = 0;
        goto LAB_71023b4dec;
      }
      pcVar8 = (char *)((long)param_1 + 0x19f);
    }
  }
  local_56 = 1;
  *pcVar8 = '\0';
LAB_71023b4dec:
  uVar6 = 0x811c9dc5;
  local_60 = (byte ***)&PTR_FUN_71050ba538;
  local_58 = 0x101;
  local_118 = 0x656e6563537465;
  local_120 = 0x5373746972697053;
  uVar13 = 0x53;
  lVar10 = 9;
  uVar14 = uVar6;
  do {
    uVar14 = uVar14 * 0x89 ^ uVar13;
    uVar13 = (uint)*(byte *)((long)&local_128 + lVar10);
    lVar10 = lVar10 + 1;
  } while (uVar13 != 0);
  local_128 = CONCAT44(0xf,uVar14);
  lVar10 = *(long *)(lVar7 + 0x38);
  if (lVar10 == 0) {
    local_b8 = local_b8 & 0xffffffffffffff00;
    local_c0 = (long ***)0x0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      pcVar8 = (char *)(lVar10 + 0x10 + uVar5);
      cVar2 = *pcVar8;
      if (cVar2 == '\0') break;
      *(char *)((long)&local_b8 + uVar5) = cVar2;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      cVar2 = pcVar8[1];
      if (cVar2 == '\0') {
        uVar5 = uVar5 + 1;
        break;
      }
      *(char *)((long)&local_b8 + uVar5 + 1) = cVar2;
      uVar5 = uVar5 + 2;
    }
    *(undefined1 *)((long)&local_b8 + (uVar5 & 0xffffffff)) = 0;
    uVar14 = (uint)(byte)local_b8;
    local_c0 = (long ***)(uVar5 << 0x20);
    if ((byte)local_b8 != 0) {
      pbVar12 = (byte *)((long)&local_b8 + 1);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (uVar14 != 0);
    }
    local_c0 = (long ***)CONCAT44((int)uVar5,uVar6);
  }
  FUN_71037266d0(*(long *)(lVar7 + 0x20),&local_128,(long ****)&local_c0,&local_60,param_5,param_6,
                 param_7,param_8);
  *(undefined4 *)(lVar7 + 0x30) = 1;
  if (*(int *)(*(long *)(lVar11 + 8) + 0x138) == 0) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_128 = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = (long ***)0x0;
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_110 = 0;
    local_108 = 0;
    local_120 = 0;
    local_118 = 0;
    lVar11 = *(long *)(DAT_710532f730 + 8);
    puVar4 = FUN_71032631a0(*(long *)(lVar11 + 0x168),0xedaf3c863);
    uVar5 = FUN_71032b23e0(*(long *)(*(long *)(lVar11 + 0x178) + 8),0x16d5030b51);
    lVar11 = *(long *)(DAT_710532f8b0 + 8);
    *(undefined1 **)(lVar11 + 0x148) = puVar4;
    *(undefined8 *)(lVar11 + 0x150) = 0x100010000000000;
    *(undefined1 *)(lVar11 + 0x328) = 0;
    *(undefined8 *)(lVar11 + 0x158) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x160) = 0x1000c0b0a040303;
    *(undefined2 *)(lVar11 + 0x168) = 0x205;
    *(undefined1 *)(lVar11 + 0x16a) = 2;
    *(undefined4 *)(lVar11 + 0x16b) = 0x1010101;
    *(undefined8 *)(lVar11 + 0x16f) = 0xc0b0a03030404;
    *(undefined8 *)(lVar11 + 0x177) = 0x101010102020501;
    *(undefined2 *)(lVar11 + 0x17f) = 0xd0d;
    *(undefined4 *)(lVar11 + 0x181) = 0x20304;
    *(undefined2 *)(lVar11 + 0x185) = 0x102;
    *(undefined8 *)(lVar11 + 0x187) = 0x1010101;
    *(ulong *)(lVar11 + 0x197) = local_b8;
    *(undefined8 *)(lVar11 + 0x1b7) = local_98;
    *(long ****)(lVar11 + 399) = local_c0;
    *(undefined8 *)(lVar11 + 0x1af) = uStack_a0;
    *(undefined8 *)(lVar11 + 0x1a7) = local_a8;
    *(undefined8 *)(lVar11 + 0x1c7) = local_88;
    *(undefined8 *)(lVar11 + 0x19f) = uStack_b0;
    *(undefined1 *)(lVar11 + 0x1e7) = local_68;
    *(undefined8 *)(lVar11 + 0x1bf) = uStack_90;
    *(undefined8 *)(lVar11 + 0x1d7) = local_78;
    *(undefined8 *)(lVar11 + 0x1cf) = uStack_80;
    *(undefined8 *)(lVar11 + 0x1df) = uStack_70;
    *(undefined8 *)(lVar11 + 0x1e8) = 0x13ffff0000000000;
    *(undefined8 *)(lVar11 + 0x1f0) = 0x5affff0000000000;
    *(undefined2 *)(lVar11 + 0x1fc) = local_c4;
    *(undefined4 *)(lVar11 + 0x1f8) = local_c8;
    *(undefined1 **)(lVar11 + 0x200) = &DAT_c1ffff0000000000;
    *(undefined8 *)(lVar11 + 0x208) = 0x10000000003;
    *(undefined8 *)(lVar11 + 0x218) = 0x1000c0b0a040303;
    *(undefined2 *)(lVar11 + 0x220) = 0x205;
    *(undefined2 *)(lVar11 + 0x1fe) = local_cc;
    *(undefined8 *)(lVar11 + 0x210) = 0xffffffff;
    *(undefined1 *)(lVar11 + 0x222) = 2;
    *(undefined4 *)(lVar11 + 0x223) = 0x1010101;
    *(undefined8 *)(lVar11 + 0x227) = 0xc0b0a03030404;
    *(undefined4 *)(lVar11 + 0x22f) = 0x2020501;
    *(undefined8 *)(lVar11 + 0x233) = 0x3040d0d01010101;
    *(undefined8 *)(lVar11 + 0x23b) = 0x101010101020002;
    *(undefined4 *)(lVar11 + 0x243) = 0;
    *(undefined8 *)(lVar11 + 0x25f) = local_110;
    *(undefined8 *)(lVar11 + 599) = local_118;
    *(undefined8 *)(lVar11 + 0x24f) = local_120;
    *(undefined8 *)(lVar11 + 0x247) = local_128;
    *(undefined8 *)(lVar11 + 0x27f) = local_f0;
    *(undefined8 *)(lVar11 + 0x277) = local_f8;
    *(undefined8 *)(lVar11 + 0x26f) = local_100;
    *(undefined8 *)(lVar11 + 0x267) = local_108;
    *(undefined1 *)(lVar11 + 0x29f) = local_d0;
    *(undefined8 *)(lVar11 + 0x297) = local_d8;
    *(undefined8 *)(lVar11 + 0x28f) = local_e0;
    *(undefined8 *)(lVar11 + 0x287) = local_e8;
    *(undefined8 *)(lVar11 + 0x2a0) = 0x13ffff0000000000;
    *(undefined8 *)(lVar11 + 0x2a8) = 0x5affff0000000000;
    *(undefined2 *)(lVar11 + 0x2b4) = 0;
    *(undefined4 *)(lVar11 + 0x2b0) = 0;
    *(undefined1 *)(lVar11 + 0x2b8) = 2;
    *(undefined2 *)(lVar11 + 0x2b6) = 0;
    *(undefined2 *)(lVar11 + 0x2bd) = local_138;
    *(undefined4 *)(lVar11 + 0x2b9) = local_13c;
    *(undefined1 *)(lVar11 + 0x2bf) = local_136;
    *(ulong *)(lVar11 + 0x2c0) = uVar5;
    *(undefined2 *)(lVar11 + 0x2c8) = 0x100;
    *(undefined1 *)(lVar11 + 0x2ca) = 1;
    *(undefined8 *)(lVar11 + 0x2cc) = 0x100010100000001;
    iVar3 = *(int *)(lVar11 + 0x138);
    *(undefined4 *)(lVar11 + 0x138) = 0xffffffff;
    *(undefined4 *)(lVar11 + 0x140) = 0xffffffff;
    *(undefined1 *)(lVar11 + 0x2d4) = 1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x130) = 0;
    *(undefined4 *)(lVar11 + 0x13c) = 0;
    *(undefined1 *)(lVar11 + 0x144) = 0;
    *(undefined4 *)(lVar11 + 0x134) = 1;
    *(undefined4 *)(lVar11 + 0xe8) = 3;
    *(undefined4 *)(lVar11 + 0xec) = 1;
    *(undefined8 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x128) = 0;
    *(undefined8 *)(lVar11 + 0x110) = 0;
    *(undefined8 *)(lVar11 + 0x118) = 0;
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *(undefined8 *)(lVar11 + 0x108) = 0;
    *(undefined8 *)(lVar11 + 0xf0) = 0;
    *(undefined8 *)(lVar11 + 0xf8) = 0;
    if (iVar3 != 0) {
      *(undefined8 *)(lVar11 + 0xf0) = 0x800000009;
      *(undefined4 *)(lVar11 + 0x134) = 4;
      *(undefined4 *)(lVar11 + 0xf8) = 4;
    }
    FUN_7101845ea0(param_1 + 0x32);
  }
  return;
}

