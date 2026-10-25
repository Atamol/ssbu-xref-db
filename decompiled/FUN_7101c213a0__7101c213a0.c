// addr:      7101c213a0
// offset:    0x1c213a0
// name:      FUN_7101c213a0
// mangled:   
// signature: undefined __cdecl FUN_7101c213a0(long param_1, int param_2, uint param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c213a0(long param_1,int param_2,uint param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined **local_630;
  ulong local_628;
  uint local_620 [2];
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 local_5d8;
  byte local_5d0 [64];
  undefined **local_590;
  ulong local_588;
  undefined **local_580;
  ulong local_578;
  uint local_570 [2];
  undefined1 local_568 [64];
  undefined8 local_528;
  undefined5 uStack_520;
  undefined3 local_51b;
  undefined5 uStack_518;
  undefined8 local_4d4;
  undefined2 local_4cc;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined2 local_88;
  char local_86;
  short local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined2 local_72;
  undefined1 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  
  if (6 < param_3) {
    return;
  }
  local_4d4 = 0;
  local_4cc = 0;
  local_cc = 0;
  uStack_518 = 0;
  local_84 = 0x3c;
  local_528 = 0xffffffffffffffff;
  uStack_520 = 0;
  local_51b = 0;
  uVar11 = (ulong)param_3;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 0;
  local_b8 = 0;
  local_88 = 0;
  local_86 = '\0';
  local_82 = 0x200000503;
  local_7a = 0x10300010100000a;
  local_72 = 0x100;
  local_70 = 2;
  local_5c = 0xffffffffffffffff;
  local_64 = 0xffffffffffffffff;
  local_6c = 0xffffffffffffffff;
  local_54 = 0xffffffff;
  uVar3 = param_4;
  if (DAT_710532f730 != 0) {
    lVar13 = *(long *)(DAT_710532f730 + 8);
    lVar12 = *(long *)(lVar13 + 0x178);
    uVar1 = FUN_71032b23e0(*(long *)(lVar12 + 8),0xd56784f97);
    uVar2 = FUN_71032b1e40(lVar12,uVar1);
    if (-1 < (int)uVar2) {
      uVar1 = FUN_71032b1e40(*(long *)(lVar13 + 0x178),uVar1);
      lVar12 = (uVar1 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)&local_64 + lVar12 + 4) =
           *(uint *)((long)&local_64 + lVar12 + 4) &
           (1 << (ulong)((uint)uVar1 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar1 = FUN_7101c1d0b0(param_1,param_2,&local_528);
  if ((uVar1 & 1) == 0) {
    return;
  }
  local_568[0] = 0;
  local_570[0] = 0;
  local_570[1] = 0;
  FUN_710062dc20(local_570,"set_parts_det_%02d");
  FUN_7103776640(&local_580,**(long **)(param_1 + 0x170) + 8,(byte ****)local_568,uVar11,uVar3,
                 param_5,param_6,param_7,param_8);
  uVar1 = local_578;
  if ((*(long *)(local_578 + 8) != 0) &&
     (lVar12 = *(long *)(*(long *)(local_578 + 8) + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe | (int)param_4 != 0;
  }
  if (local_88._1_1_ == '\x02') {
    pcVar4 = "det_win_stamina";
LAB_7101c21580:
    FUN_7103778300(0x3f800000,local_578,(long)pcVar4);
  }
  else {
    if (local_88._1_1_ == '\x01') {
      pcVar4 = "det_win_stock";
      goto LAB_7101c21580;
    }
    if (local_88._1_1_ == '\0') {
      pcVar4 = "det_win_time";
      goto LAB_7101c21580;
    }
  }
  uVar10 = 0x811c9dc5;
  FUN_7103776910(&local_590,(long)&local_580,(long ****)"set_txt_det_title_00",uVar11,uVar3,param_5,
                 param_6,param_7,param_8);
  local_5d0[0] = 0;
  local_5d8 = 0;
  uVar6 = uVar10;
  local_620[0] = uVar10;
  switch((int)param_4) {
  case 1:
    uVar2 = local_608 >> 0x10;
    local_610 = 0x6d696c656d69745f;
    local_608 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0x7469);
    uVar6 = 0x6d;
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_620[1] = 0x12;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    uVar6 = 0x811c9dc5;
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      uVar6 = uVar10;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  case 2:
    local_610._6_2_ = local_610._6_2_ & 0xff00;
    local_610 = CONCAT26(local_610._6_2_,0x6b636f74735f);
    uVar6 = 0x6d;
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_620[1] = 0xe;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    uVar6 = 0x811c9dc5;
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      uVar6 = uVar10;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  case 3:
    local_608 = local_608 & 0xffffffffffffff00;
    local_610 = 0x616e696d6174735f;
    uVar6 = 0x6d;
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_620[1] = 0x10;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    uVar6 = 0x811c9dc5;
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      uVar6 = uVar10;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  case 4:
    uVar6 = 0x6d;
    local_610 = CONCAT26(local_610._6_2_,0x646e6f635f);
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_620[1] = 0xd;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    uVar6 = 0x811c9dc5;
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      uVar6 = uVar10;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  case 5:
    local_610 = 0x7469726970735f;
    uVar6 = 0x6d;
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 != 0);
    local_620[1] = 0xf;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    uVar6 = 0x811c9dc5;
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      uVar6 = uVar10;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  case 6:
    uVar2 = local_608 >> 0x20;
    local_610 = 0x6f665f6d6165745f;
    local_608 = CONCAT44((uint)uVar2 & 0xffffff00,0x74616d72);
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_618 + 1);
    do {
      local_620[0] = local_620[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    local_620[1] = 0x14;
    uVar2 = 0;
    bVar8 = 0x6d;
    do {
      local_5d0[uVar2] = bVar8;
      if (0x3e < (int)uVar2 + 1U) {
        uVar2 = (ulong)((int)uVar2 + 1);
        break;
      }
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 1);
      if (bVar8 == 0) {
        uVar2 = uVar2 + 1;
        break;
      }
      local_5d0[uVar2 + 1] = bVar8;
      bVar8 = *(byte *)((long)&local_618 + uVar2 + 2);
      uVar2 = uVar2 + 2;
    } while (bVar8 != 0);
    local_5d0[uVar2 & 0xffffffff] = 0;
    local_5d8._0_4_ = 0;
    local_5d8._4_4_ = (int)uVar2;
    uVar7 = (uint)local_5d0[0];
    if (local_5d0[0] != 0) {
      pbVar5 = local_5d0;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
    }
    break;
  default:
    goto switchD_7101c215cc_default;
  }
  local_618 = 0x656c75725f6c656d;
  local_5d8 = CONCAT44(local_5d8._4_4_,uVar6);
switchD_7101c215cc_default:
  FUN_710377a120((long)&local_590,(char *)local_5d0,uVar11,uVar3,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_630,(long)&local_580,(long ****)"set_txt_det_val_00",uVar11,uVar3,param_5,
                 param_6,param_7,param_8);
  switch(param_4 & 0xffffffff) {
  case 0:
    if (*(long **)(local_628 + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(local_628 + 0x10),&DAT_7104867c2e);
    }
    break;
  case 1:
    FUN_7101c09200((long)&local_630,local_84,uVar11,uVar3,param_5,param_6,param_7,param_8);
    break;
  case 2:
    plVar9 = *(long **)(local_628 + 0x10);
    if (plVar9 == (long *)0x0) break;
    uVar6 = (uint)(byte)local_82;
    goto LAB_7101c21d88;
  case 3:
    if (local_82._1_1_ < 0xc) {
      uVar6 = *(uint *)(&UNK_7104ada8a0 + (long)(char)local_82._1_1_ * 4);
    }
    else {
      uVar6 = 0x96;
    }
    plVar9 = *(long **)(local_628 + 0x10);
    if (plVar9 == (long *)0x0) break;
LAB_7101c21d88:
    local_5e8 = 0;
    local_620[0] = 0;
    local_620[1] = 0;
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_608 = 0;
    uStack_600 = 0;
    local_618 = 0;
    local_610 = 0;
    uVar6 = FUN_71037ad940((long)local_620,0x20,0,uVar6,0,0);
    FUN_71037a2270(plVar9,(ushort *)local_620,uVar6,0);
    break;
  case 4:
    uVar6 = 1;
    if (local_82._2_1_ - 1 < 4) {
      uVar6 = local_82._2_1_ + 1;
    }
    FUN_710377a120((long)&local_630,"mel_rule_cond_%d",(ulong)(uVar6 & 0xff),uVar3,param_5,param_6,
                   param_7,param_8);
    break;
  case 5:
    local_618 = 0x687469775f6e6d63;
    if (local_82._3_1_ == '\0') {
      local_610 = CONCAT44(local_610._4_4_,0x74756f);
      local_620[1] = 0xb;
      uVar6 = 99;
      pbVar5 = (byte *)((long)&local_618 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    else {
      local_620[1] = 8;
      uVar6 = 99;
      local_610 = local_610 & 0xffffffffffffff00;
      pbVar5 = (byte *)((long)&local_618 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_7101c21efc;
  case 6:
    if (local_86 == '\x02') {
      local_620[1] = 0x17;
      local_618 = 0x656c75725f6c656d;
      local_610 = 0x6f665f6d6165745f;
      uVar6 = 0x6d;
      local_608 = 0x32305f74616d72;
      pbVar5 = (byte *)((long)&local_618 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    else if (local_86 == '\x01') {
      local_620[1] = 0x17;
      local_618 = 0x656c75725f6c656d;
      local_610 = 0x6f665f6d6165745f;
      uVar6 = 0x6d;
      local_608 = 0x31305f74616d72;
      pbVar5 = (byte *)((long)&local_618 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    else if (local_86 == '\0') {
      local_620[1] = 0x17;
      local_618 = 0x656c75725f6c656d;
      local_610 = 0x6f665f6d6165745f;
      uVar6 = 0x6d;
      local_608 = 0x30305f74616d72;
      pbVar5 = (byte *)((long)&local_618 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
    }
    else {
      local_618 = local_618 & 0xffffffffffffff00;
      local_620[1] = 0;
    }
LAB_7101c21efc:
    local_620[0] = uVar10;
    FUN_710377a120((long)&local_630,(char *)&local_618,uVar11,uVar3,param_5,param_6,param_7,param_8)
    ;
  }
  uVar3 = local_628;
  local_630 = &PTR_FUN_710523d9a8;
  local_628 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_588;
  local_590 = &PTR_FUN_710523d9a8;
  local_588 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

