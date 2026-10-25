// addr:      71025c7300
// offset:    0x25c7300
// name:      FUN_71025c7300
// mangled:   
// signature: undefined __cdecl FUN_71025c7300(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71025c7300(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  ulong local_78;
  
  local_d0 = 0x615f746972697073;
  local_c8 = 0x5f72656b63617474;
  local_c0 = 0x6e6f6e;
  uVar9 = 0x811c9dc5;
  uVar10 = 0x73;
  pbVar7 = (byte *)((long)&local_d0 + 1);
  do {
    uVar9 = uVar9 * 0x89 ^ uVar10;
    uVar10 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  } while (uVar10 != 0);
  local_d8 = CONCAT44(0x13,uVar9);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)&local_d0);
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)&local_d0);
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_it_non",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_pic_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  FUN_71037790a0((long)local_88,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_it_offense",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_pic_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  FUN_71037790a0((long)local_88,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_it_defense",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_pic_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  FUN_71037790a0((long)local_88,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_it_throw",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_pic_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  FUN_71037790a0((long)local_88,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_it_supporter",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_pic_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  FUN_71037790a0((long)local_88,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  FUN_7103776640(&local_80,param_2,(byte ****)"set_parts_text_scroll",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_mask",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_main",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_txt_lv",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_bar_exp",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar4 = local_88;
  lVar8 = *local_88;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x48) = 0x3f80000000000000;
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_txt_param_attacker",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar4 = local_88;
  lVar8 = *local_88;
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_txt_offense",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_txt_defense",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 0x10) != (long *)0x0) {
    FUN_71037a28a0(*(long **)((long)local_88 + 0x10),&DAT_7104867c2e);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  fVar12 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar12 = 0.001;
  }
  fVar11 = powf(0.9999,fVar12);
  fVar12 = powf(0.0001,1.0 / fVar12);
  fVar11 = ((((1.0 - fVar11) + fVar12) * 0.5) / 0.0001) * 0.0;
  fVar12 = fVar11;
  if (1.0 < fVar11) {
    fVar12 = 1.0;
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_bar_offense",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_e8,param_1,(long ****)"set_bar_offense_sdw",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_f8,param_1,(long ****)"set_bar_defense",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_108,param_1,(long ****)"set_bar_defense_sdw",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_88;
  if (*(long **)((long)local_88 + 8) == (long *)0x0) {
    if (((*(long *)((long)local_88 + 0x18) != 0) &&
        (lVar8 = *(long *)(*(long *)((long)local_88 + 0x18) + 0x118), lVar8 != 0)) &&
       ((*(byte *)(lVar8 + 0x14) & 3) != 0)) {
      plVar6 = *(long **)(*(long *)(lVar8 + 0x18) + 8);
      goto joined_r0x0071025c79d4;
    }
  }
  else {
    lVar8 = FUN_71000597e0(*(long **)((long)local_88 + 8));
    if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x14) & 3) != 0)) {
      plVar6 = *(long **)(*(long *)(lVar8 + 0x18) + 8);
joined_r0x0071025c79d4:
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(&local_120);
        fVar13 = (float)NEON_ucvtf((uint)local_120 & 0xffff);
        NEON_ucvtf((uint)local_120 >> 0x10);
        goto LAB_71025c7a14;
      }
    }
  }
  fVar13 = (float)_ConstantZero;
LAB_71025c7a14:
  uStack_118 = uRam0000007107459008;
  fVar14 = 1.0;
  if (0.0 <= fVar11) {
    fVar14 = 1.0 - fVar12;
  }
  local_120 = CONCAT44((int)((ulong)_ConstantZero >> 0x20),-(fVar14 * fVar13));
  FUN_7103779770(1.0,(long)plVar4,&local_120);
  uVar3 = local_e0;
  FUN_7103779770(1.0,local_e0,&local_120);
  uVar2 = local_f0;
  uStack_128 = uRam0000007107459008;
  local_130 = CONCAT44((int)((ulong)_ConstantZero >> 0x20),-(fVar14 * fVar13));
  FUN_7103779770(1.0,local_f0,&local_130);
  uVar5 = local_100;
  FUN_7103779770(1.0,local_100,&local_130);
  FUN_7103776910(&local_140,param_2,(long ****)"set_rep_series",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_138;
  FUN_71037790a0(local_138,1,param_3,param_4,param_5,param_6,param_7,param_8);
  local_140 = &PTR_FUN_710523d9a8;
  local_138 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  local_108 = &PTR_FUN_710523d9a8;
  local_100 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar1 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

