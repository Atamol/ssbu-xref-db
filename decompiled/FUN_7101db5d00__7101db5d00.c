// addr:      7101db5d00
// offset:    0x1db5d00
// name:      FUN_7101db5d00
// mangled:   
// signature: undefined __cdecl FUN_7101db5d00(long param_1, long param_2, ushort * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101db5d00(long param_1,long param_2,ushort *param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  long *********ppppppppplVar10;
  byte ****ppppbVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined **local_138;
  ulong local_130;
  undefined **local_128;
  ulong local_120 [8];
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a6;
  undefined8 local_9e;
  
  uVar2 = *param_3;
  if ((uVar2 == 0xffff) || (1999 < (short)uVar2)) {
LAB_7101db5f54:
    lVar15 = *(long *)(*(long *)(param_2 + 8) + 8);
    if (lVar15 == 0) {
      return;
    }
    lVar15 = *(long *)(lVar15 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    return;
  }
  lVar18 = *(long *)(DAT_710532f730 + 8);
  lVar15 = *(long *)(lVar18 + 0x1d8);
  uVar2 = *(ushort *)(lVar15 + (long)(int)(short)uVar2 * 2 + 0x60);
  uVar12 = (ulong)uVar2;
  uVar16 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
  if ((uint)uVar16 <= (uint)uVar2) goto LAB_7101db5f54;
  lVar13 = *DAT_7105329f98;
  puVar1 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar12 * 0x140);
  if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  puVar9 = param_3;
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710432a524);
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710434a7c2);
  FUN_7103776910(&local_c0,param_2,(long ****)"time_limit_base",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  plVar20 = local_b8;
  lVar15 = *local_b8;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar20);
  }
  FUN_7103776910(&local_c0,param_2,(long ****)"set_txt_time_limit",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  plVar20 = local_b8;
  lVar15 = *local_b8;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar20);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71042b4786);
  FUN_7103776910(&local_d0,param_2,(long ****)"set_rep_spirits_0",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_e0,param_2,(long ****)"set_rep_spirits_0_sdw",puVar9,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_71025ae1b0(*param_3,&local_d0,0,(byte ****)0x0,param_5,param_6,param_7,param_8);
  ppppbVar11 = (byte ****)0x0;
  FUN_71025ae1b0(*param_3,&local_e0,0,(byte ****)0x0,param_5,param_6,param_7,param_8);
  lVar15 = *(long *)(lVar18 + 0x1d8);
  uVar12 = FUN_71032a9470(lVar15,*param_3);
  FUN_71032a9540((uint *)&local_c0,lVar15,uVar12);
  FUN_71003a4ca0((uint *)&local_128,"spi_%s",&local_b8,uVar12,ppppbVar11,param_5,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_c0,param_2,(byte ****)"set_parts_text_scroll",uVar12,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  if (*(long *)((long)local_b8 + 8) != 0) {
    puVar19 = *(undefined8 **)(*(long *)((long)local_b8 + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba40), iVar3 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba48), iVar3 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar19 != (undefined8 *)0x0) {
      for (puVar4 = (undefined8 *)(**(code **)*puVar19)(puVar19); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if ((undefined8 **)puVar4 == &DAT_710593ba58) {
          *(undefined1 *)(puVar19 + 0xc) = 1;
          break;
        }
      }
    }
  }
  FUN_7103776910(&local_138,(long)&local_c0,(long ****)"set_txt_mask",uVar12,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_138,(char *)local_120,uVar12,ppppbVar11,param_5,param_6,param_7,
                 param_8);
  uVar16 = local_130;
  local_138 = &PTR_FUN_710523d9a8;
  local_130 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  FUN_7103776910(&local_138,(long)&local_c0,(long ****)"set_txt_main",uVar12,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_138,(char *)local_120,uVar12,ppppbVar11,param_5,param_6,param_7,
                 param_8);
  uVar16 = local_130;
  local_138 = &PTR_FUN_710523d9a8;
  local_130 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = (ulong)local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = (long *)0x0;
  if (uVar16 != 0) {
    uVar5 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  if (*(char *)(puVar1 + 0x2f) == '\0') {
    pcVar8 = "spirit_attacker";
  }
  else {
    pcVar8 = "spirit_supporter";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)pcVar8);
  FUN_7103776640(&local_128,param_2,(byte ****)"set_parts_atr_icon",uVar12,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_d0,param_2,(byte ****)"set_parts_atr_bg",uVar12,ppppbVar11,param_5,param_6,
                 param_7,param_8);
  if (*(char *)(puVar1 + 0x2f) == '\0') {
    if (*(byte *)(puVar1 + 0x36) - 1 < 3) {
      uVar6 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 4;
  }
  FUN_710339dde0((uint *)&local_c0,uVar6,'\0');
  uVar12 = local_c8;
  FUN_7103778300(0x3f800000,local_c8,(long)&local_b8);
  if ((char)param_3[8] != '\0') {
    if ((char)param_3[0x7a] == '\0') {
      lVar15 = *(long *)(param_3 + 0x3c);
      lVar18 = *(long *)(param_3 + 0x40);
      if (lVar18 == lVar15) goto LAB_7101db6130;
    }
    else {
      lVar15 = *(long *)(param_3 + 0x3c);
      lVar18 = *(long *)(param_3 + 0x40);
    }
    uVar7 = (uint)((ulong)(lVar18 - lVar15) >> 3);
    if (uVar7 != 0) {
      uVar14 = 0;
      do {
        lVar18 = *(long *)(lVar15 + (ulong)uVar14 * 8);
        if (*(char *)(lVar18 + 0x10) == '\x01') {
          uVar7 = (uint)*(byte *)(lVar18 + 0x48);
          goto LAB_7101db6134;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
    }
  }
LAB_7101db6130:
  uVar7 = 0;
LAB_7101db6134:
  ppppppppplVar10 = (long *********)(ulong)(*(char *)(puVar1 + 0x2f) == '\x01');
  FUN_71025b1400((long)&local_128,uVar7,(ulong)ppppppppplVar10,ppppbVar11,param_5,param_6,param_7,
                 param_8);
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar12 != 0) {
    uVar16 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar12);
  }
  uVar12 = local_120[0];
  local_128 = &PTR_FUN_710523d988;
  local_120[0] = 0;
  if (uVar12 != 0) {
    uVar16 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar12);
  }
  FUN_7103776640(&local_128,param_2,(byte ****)"set_parts_class",ppppppppplVar10,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_d0,param_2,(byte ****)"set_parts_atr_bg",ppppppppplVar10,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  uVar12 = local_c8;
  switch(*(undefined1 *)(puVar1 + 0x34)) {
  default:
    FUN_7103778300(0x3f800000,local_c8,0x7104464374);
    uVar16 = local_120[0];
    FUN_7103778300(0x3f800000,local_120[0],0x7104464374);
    pcVar8 = "color_none";
    break;
  case 1:
    FUN_7103778300(0x3f800000,local_c8,0x7104442147);
    uVar16 = local_120[0];
    FUN_7103778300(0x3f800000,local_120[0],0x7104442147);
    pcVar8 = "color_hope";
    break;
  case 2:
    FUN_7103778300(0x3f800000,local_c8,0x71044530ac);
    uVar16 = local_120[0];
    FUN_7103778300(0x3f800000,local_120[0],0x71044530ac);
    pcVar8 = "color_ace";
    break;
  case 3:
    FUN_7103778300(0x3f800000,local_c8,0x710436ac3e);
    uVar16 = local_120[0];
    FUN_7103778300(0x3f800000,local_120[0],0x710436ac3e);
    pcVar8 = "color_legend";
  }
  FUN_7103778300(0x3f800000,uVar16,(long)pcVar8);
  switch(*(undefined1 *)(puVar1 + 0x34)) {
  case 0:
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = 0x21;
    local_b0 = 0x5f74636c5f6d6f63;
    local_a8 = 0x6369;
    local_a6 = 0x7373616c635f6e6f;
    local_9e = 0x656369766f6e5f;
    uVar7 = 0x73;
    pbVar17 = (byte *)((long)&local_b8 + 1);
    do {
      local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (uVar7 != 0);
    break;
  case 1:
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = 0x1f;
    local_b0 = 0x5f74636c5f6d6f63;
    local_a8 = 0x6369;
    local_a6 = 0x7373616c635f6e6f;
    local_9e = CONCAT26(local_9e._6_2_,0x65706f685f);
    uVar7 = 0x73;
    pbVar17 = (byte *)((long)&local_b8 + 1);
    do {
      local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (uVar7 != 0);
    break;
  case 2:
    local_c0._4_4_ = 0x1e;
    local_b0 = 0x5f74636c5f6d6f63;
    local_a8 = 0x6369;
    local_a6 = 0x7373616c635f6e6f;
    local_c0._0_4_ = 0x811c9dc5;
    uVar7 = 0x73;
    local_9e = CONCAT35(local_9e._5_3_,0x6563615f);
    pbVar17 = (byte *)((long)&local_b8 + 1);
    do {
      local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (uVar7 != 0);
    break;
  case 3:
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = 0x21;
    local_b0 = 0x5f74636c5f6d6f63;
    local_a8 = 0x6369;
    local_a6 = 0x7373616c635f6e6f;
    local_9e = 0x646e6567656c5f;
    uVar7 = 0x73;
    pbVar17 = (byte *)((long)&local_b8 + 1);
    do {
      local_c0._0_4_ = (uint)local_c0 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (uVar7 != 0);
    break;
  default:
    local_b8 = (long *)((ulong)local_b8 & 0xffffffffffffff00);
    local_c0._0_4_ = 0x811c9dc5;
    local_c0._4_4_ = 0;
    goto LAB_7101db6530;
  }
  local_a6 = 0x7373616c635f6e6f;
  local_a8 = 0x6369;
  local_b0 = 0x5f74636c5f6d6f63;
  local_b8 = (long *)0x5f73746972697073;
LAB_7101db6530:
  FUN_7103776910(&local_e0,(long)&local_128,(long ****)"set_pic_txt",ppppppppplVar10,ppppbVar11,
                 param_5,param_6,param_7,param_8);
  uVar5 = local_d8;
  if (local_c0._4_4_ < 1) {
    FUN_71037790a0(local_d8,1,ppppppppplVar10,ppppbVar11,param_5,param_6,param_7,param_8);
  }
  else {
    plVar20 = *(long **)(param_1 + 0x118);
    local_138 = (undefined **)FUN_710323af70((long)&local_b8,0);
    if (((ulong)local_138 & 0xffffffffff) != 0) {
      lVar15 = *plVar20;
      ppppbVar11 = (byte ****)(ulong)*(uint *)(lVar15 + 0x68);
      FUN_710323c4e0(lVar15,(ulong *)&local_138,(long *********)(long)*(int *)(lVar15 + 0x70),
                     ppppbVar11,param_5,param_6,param_7,param_8);
    }
    ppppppppplVar10 = (long *********)0x0;
    plVar20 = FUN_7103240d30(*(long **)(param_1 + 0x118),(long)&local_b8,(long ****)0x0,ppppbVar11,
                             param_5,param_6,param_7,param_8);
    uVar5 = local_d8;
    FUN_7103778b80(local_d8,(long)plVar20,ppppppppplVar10,ppppbVar11,param_5,param_6,param_7,param_8
                  );
  }
  local_d8 = 0;
  local_e0 = &PTR_FUN_710523d9a8;
  if (uVar5 != 0) {
    local_d8 = 0;
    local_e0 = &PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar5);
  }
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar12 != 0) {
    uVar5 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar12);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120[0] = 0;
  if (uVar16 != 0) {
    uVar12 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar16);
  }
  uVar2 = *param_3;
  if ((uVar2 != 0xffff) && (iVar3 = (int)(short)uVar2, iVar3 < 2000)) {
    lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (((uint)*(ushort *)(lVar15 + (long)iVar3 * 2 + 0x60) <
         (uint)((int)((ulong)(*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20)) >> 6) *
               -0x33333333)) &&
       (*(short *)(*(long *)(lVar13 + 0x30) + (long)iVar3 * 0x24 + 0x20) != 0)) {
      FUN_7103776640(&local_c0,param_2,(byte ****)"set_parts_class",ppppppppplVar10,ppppbVar11,
                     param_5,param_6,param_7,param_8);
      pcVar8 = "off_empty";
      goto LAB_7101db66a0;
    }
  }
  FUN_7103776640(&local_c0,param_2,(byte ****)"set_parts_class",ppppppppplVar10,ppppbVar11,param_5,
                 param_6,param_7,param_8);
  pcVar8 = "on_empty";
LAB_7101db66a0:
  uVar12 = (ulong)local_b8;
  FUN_7103778300(0x3f800000,(long)local_b8,(long)pcVar8);
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = (long *)0x0;
  if (uVar12 != 0) {
    uVar16 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    FUN_710392eb40(uVar12);
  }
  if ((char)param_3[0xc0] == '\0') {
    FUN_7103778630(0,*(long *)(param_2 + 8),0x7104319319);
  }
  else {
    FUN_7103778760(*(long *)(param_2 + 8),0x7104319319);
    FUN_7103776640(&local_c0,param_2,(byte ****)"set_parts_clear_00",ppppppppplVar10,ppppbVar11,
                   param_5,param_6,param_7,param_8);
    uVar12 = (ulong)local_b8;
    FUN_7103778300(0x3f800000,(long)local_b8,0x71043f0fa9);
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = (long *)0x0;
    if (uVar12 != 0) {
      uVar16 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar12);
    }
  }
  return;
}

