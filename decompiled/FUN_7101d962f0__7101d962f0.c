// addr:      7101d962f0
// offset:    0x1d962f0
// name:      FUN_7101d962f0
// mangled:   
// signature: undefined __cdecl FUN_7101d962f0(long param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d962f0(long param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined **local_118;
  ulong local_110 [8];
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined5 uStack_9d;
  undefined2 local_98;
  undefined8 local_96;
  undefined8 local_8e;
  ulong local_68;
  
  if (((param_2 & 0x24) != 0) && (*(char *)(param_1 + 0x4c) == '\x03')) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x710428ff7d);
  }
  if ((param_2 >> 1 & 1) != 0) {
    FUN_7103776640(&local_c0,param_1 + 8,(byte ****)"set_parts_atr_icon",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x50) == '\0') {
      pcVar11 = "spirit_attacker";
    }
    else {
      pcVar11 = "spirit_supporter";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)pcVar11);
    FUN_7103776640(&local_d0,param_1 + 8,(byte ****)"set_parts_atr_bg",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    sVar4 = *(short *)(param_1 + 0x4e);
    uVar10 = 0;
    if ((sVar4 != -1) && (sVar4 < 2000)) {
      lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar3 = *(ushort *)(lVar15 + (long)(int)sVar4 * 2 + 0x60);
      uVar13 = (ulong)uVar3;
      uVar16 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar3 < (uint)uVar16) {
        puVar1 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar13 * 0x140);
        if (uVar16 < uVar13 || uVar16 - uVar13 == 0) {
          puVar1 = &DAT_7105182b08;
        }
        if (*(char *)(puVar1 + 0x2f) == '\0') {
          if (2 < *(byte *)(puVar1 + 0x36) - 1) goto LAB_7101d96440;
          uVar10 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
        }
        else {
          uVar10 = 4;
        }
      }
      else {
LAB_7101d96440:
        uVar10 = 0;
      }
    }
    FUN_710339dde0((uint *)&local_118,uVar10,'\0');
    uVar13 = local_c8;
    FUN_7103778300(0x3f800000,local_c8,(long)local_110);
    param_3 = (long *********)(ulong)(*(char *)(param_1 + 0x50) == '\x01');
    FUN_71025b1400((long)&local_c0,(uint)*(byte *)(param_1 + 0x52),(ulong)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x53) == '\0') {
      pcVar11 = "arrow_hide";
LAB_7101d9654c:
      FUN_7103778300(0x3f800000,local_b8,(long)pcVar11);
    }
    else if (*(int *)(param_1 + 0x54) == 2) {
      uVar12 = 0x811c9dc5;
      local_a8 = 0x6f727261;
      pcVar11 = (char *)&local_a8;
      uStack_a4 = 0x5f77;
      if (*(char *)(param_1 + 0x53) < '\x01') {
        uStack_a2 = 0x6f64;
        uStack_a0 = 0x77;
        uStack_9f = 0x6e;
        uVar17 = 0x61;
        uStack_9e = 0;
        uVar5 = 10;
        pbVar14 = (byte *)((long)&local_a8 + 1);
        do {
          uVar12 = uVar12 * 0x89 ^ uVar17;
          uVar17 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar17 != 0);
      }
      else {
        uStack_a2 = 0x7075;
        uVar17 = 0x61;
        uStack_a0 = 0;
        uVar5 = 8;
        pbVar14 = (byte *)((long)&local_a8 + 1);
        do {
          uVar12 = uVar12 * 0x89 ^ uVar17;
          uVar17 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar17 != 0);
      }
      local_b0 = (undefined **)CONCAT44(uVar5,uVar12);
      goto LAB_7101d9654c;
    }
    local_d0 = &PTR_FUN_710523d988;
    local_c8 = 0;
    if (uVar13 != 0) {
      uVar16 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar13);
    }
    uVar13 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar13 != 0) {
      uVar16 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar13);
    }
  }
  if ((param_2 >> 3 & 1) != 0) {
    FUN_7103776640(&local_118,param_1 + 8,(byte ****)"set_parts_class",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_c0,param_1 + 8,(byte ****)"set_parts_atr_bg",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar13 = local_b8;
    switch(*(undefined1 *)(param_1 + 0x51)) {
    default:
      FUN_7103778300(0x3f800000,local_b8,0x7104464374);
      FUN_7103778300(0x3f800000,local_110[0],0x7104464374);
      pcVar11 = "color_none";
      uVar16 = local_110[0];
      break;
    case 1:
      FUN_7103778300(0x3f800000,local_b8,0x7104442147);
      FUN_7103778300(0x3f800000,local_110[0],0x7104442147);
      pcVar11 = "color_hope";
      uVar16 = local_110[0];
      break;
    case 2:
      FUN_7103778300(0x3f800000,local_b8,0x71044530ac);
      FUN_7103778300(0x3f800000,local_110[0],0x71044530ac);
      pcVar11 = "color_ace";
      uVar16 = local_110[0];
      break;
    case 3:
      FUN_7103778300(0x3f800000,local_b8,0x710436ac3e);
      FUN_7103778300(0x3f800000,local_110[0],0x710436ac3e);
      pcVar11 = "color_legend";
      uVar16 = local_110[0];
    }
    FUN_7103778300(0x3f800000,uVar16,(long)pcVar11);
    switch(*(undefined1 *)(param_1 + 0x51)) {
    case 0:
      uVar12 = 0x811c9dc5;
      local_b0._4_4_ = 0x21;
      uStack_a4 = 0x7469;
      uStack_a2 = 0x5f73;
      uStack_a0 = 99;
      uStack_9f = 0x6f;
      uStack_9e = 0x6d;
      uStack_9d = 0x5f74636c5f;
      local_98 = 0x6369;
      local_96 = 0x7373616c635f6e6f;
      local_8e = 0x656369766f6e5f;
      uVar17 = 0x73;
      pbVar14 = (byte *)((long)&local_a8 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar17 != 0);
      break;
    case 1:
      uVar12 = 0x811c9dc5;
      local_b0._4_4_ = 0x1f;
      uStack_a4 = 0x7469;
      uStack_a2 = 0x5f73;
      uStack_a0 = 99;
      uStack_9f = 0x6f;
      uStack_9e = 0x6d;
      uStack_9d = 0x5f74636c5f;
      local_98 = 0x6369;
      local_96 = 0x7373616c635f6e6f;
      local_8e = CONCAT26(local_8e._6_2_,0x65706f685f);
      uVar17 = 0x73;
      pbVar14 = (byte *)((long)&local_a8 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar17 != 0);
      break;
    case 2:
      local_b0._4_4_ = 0x1e;
      uStack_a4 = 0x7469;
      uStack_a2 = 0x5f73;
      uStack_a0 = 99;
      uStack_9f = 0x6f;
      uStack_9e = 0x6d;
      uStack_9d = 0x5f74636c5f;
      local_98 = 0x6369;
      local_96 = 0x7373616c635f6e6f;
      uVar12 = 0x811c9dc5;
      uVar17 = 0x73;
      local_8e = CONCAT35(local_8e._5_3_,0x6563615f);
      pbVar14 = (byte *)((long)&local_a8 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar17 != 0);
      break;
    case 3:
      uVar12 = 0x811c9dc5;
      local_b0._4_4_ = 0x21;
      uStack_a4 = 0x7469;
      uStack_a2 = 0x5f73;
      uStack_a0 = 99;
      uStack_9f = 0x6f;
      uStack_9e = 0x6d;
      uStack_9d = 0x5f74636c5f;
      local_98 = 0x6369;
      local_96 = 0x7373616c635f6e6f;
      local_8e = 0x646e6567656c5f;
      uVar17 = 0x73;
      pbVar14 = (byte *)((long)&local_a8 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (uVar17 != 0);
      break;
    default:
      local_a8 = local_a8 & 0xffffff00;
      local_b0 = (undefined **)0x811c9dc5;
      goto LAB_7101d9695c;
    }
    local_96 = 0x7373616c635f6e6f;
    local_98 = 0x6369;
    uStack_9d = 0x5f74636c5f;
    uStack_9e = 0x6d;
    uStack_9f = 0x6f;
    uStack_a0 = 99;
    uStack_a2 = 0x5f73;
    uStack_a4 = 0x7469;
    local_a8 = 0x72697073;
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar12);
LAB_7101d9695c:
    FUN_7103776910(&local_d0,(long)&local_118,(long ****)"set_pic_txt",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar8 = local_c8;
    if (local_b0._4_4_ < 1) {
      FUN_71037790a0(local_c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      plVar19 = *(long **)(param_1 + 0x40);
      local_68 = FUN_710323af70((long)&local_a8,0);
      if ((local_68 & 0xffffffffff) != 0) {
        lVar15 = *plVar19;
        param_4 = (byte ****)(ulong)*(uint *)(lVar15 + 0x68);
        FUN_710323c4e0(lVar15,&local_68,(long *********)(long)*(int *)(lVar15 + 0x70),param_4,
                       param_5,param_6,param_7,param_8);
      }
      param_3 = (long *********)0x0;
      plVar19 = FUN_7103240d30(*(long **)(param_1 + 0x40),(long)&local_a8,(long ****)0x0,param_4,
                               param_5,param_6,param_7,param_8);
      uVar8 = local_c8;
      FUN_7103778b80(local_c8,(long)plVar19,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    local_d0 = &PTR_FUN_710523d9a8;
    local_c8 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar13 != 0) {
      uVar8 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar13);
    }
    local_118 = &PTR_FUN_710523d988;
    local_110[0] = 0;
    if (uVar16 != 0) {
      uVar13 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar16);
    }
  }
  if ((param_2 >> 4 & 1) != 0) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      FUN_7103776640(&local_b0,param_1 + 8,(byte ****)"set_parts_class",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8));
      pcVar11 = "on_empty";
    }
    else {
      FUN_7103776640(&local_b0,param_1 + 8,(byte ****)"set_parts_class",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar13 = CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8));
      pcVar11 = "off_empty";
    }
    FUN_7103778300(0x3f800000,uVar13,(long)pcVar11);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    if (uVar13 != 0) {
      uVar16 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar13);
    }
  }
  if ((param_2 >> 5 & 1) != 0) {
    cVar2 = *(char *)(param_1 + 0x5d);
    if (cVar2 == '\x02') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71042702c7);
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar11 = "on_event_pin";
    }
    else {
      if (cVar2 == '\x01') {
        lVar15 = *(long *)(param_1 + 0x10);
        pcVar11 = "on_event";
      }
      else {
        if (cVar2 != '\0') goto LAB_7101d96b54;
        lVar15 = *(long *)(param_1 + 0x10);
        pcVar11 = "off_event";
      }
      FUN_7103778300(0x3f800000,lVar15,(long)pcVar11);
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar11 = "off_event_pin";
    }
    FUN_7103778300(0x3f800000,lVar15,(long)pcVar11);
  }
LAB_7101d96b54:
  if ((param_2 >> 2 & 1) != 0) {
    switch(*(undefined1 *)(param_1 + 0x4c)) {
    default:
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar11 = "base_spirit";
      break;
    case 2:
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar11 = "base_wait";
      break;
    case 3:
      lVar15 = *(long *)(param_1 + 0x10);
      pcVar11 = "base_lock";
    }
    FUN_7103778300(0x3f800000,lVar15,(long)pcVar11);
  }
  if ((param_2 >> 6 & 1) == 0) goto joined_r0x007101d96d30;
  uVar12 = *(uint *)(param_1 + 0x58);
  lVar15 = *(long *)(param_1 + 0x10);
  param_4 = (byte ****)((ulong)uVar12 / 0xe10);
  uVar17 = uVar12 / 0x3c + (uVar12 / 0xe10) * -0x3c;
  if ((*(long *)(lVar15 + 8) == 0) ||
     (plVar19 = (long *)FUN_71037964b0(*(long *)(lVar15 + 8),0x71042b474b), plVar19 == (long *)0x0))
  {
    if (uVar17 < 5) {
LAB_7101d96cb4:
      pcVar11 = "on_limit";
      goto LAB_7101d96cbc;
    }
  }
  else {
    bVar6 = (**(code **)(*plVar19 + 0x130))();
    if (((bVar6 ^ uVar17 < 5) & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0x10);
      if (uVar17 < 5) goto LAB_7101d96cb4;
      pcVar11 = "off_limit";
LAB_7101d96cbc:
      FUN_7103778300(0x3f800000,lVar15,(long)pcVar11);
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\x02') {
    lVar15 = param_1 + 0x28;
  }
  else {
    lVar15 = param_1 + 0x18;
  }
  if (uVar12 < 0xe10 && uVar17 == 0) {
    param_3 = (long *********)0x1;
    param_4 = (byte ****)(ulong)(uVar12 % 0x3c);
    FUN_710377a280(lVar15,(byte *)"mnu_spirits_challengeboard_list_time_02",1);
  }
  else {
    param_3 = (long *********)0x3;
    param_5 = (long ****)(ulong)uVar17;
    param_6 = (ulong)(uVar12 % 0x3c);
    FUN_710377a280(lVar15,(byte *)"mnu_spirits_challengeboard_list_time_01",3);
  }
joined_r0x007101d96d30:
  if ((param_2 >> 7 & 1) != 0) {
    FUN_7103776640(&local_b0,param_1 + 8,(byte ****)"set_parts_text_scroll",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar15 = *(long *)(CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8)) + 8);
    if (lVar15 != 0) {
      puVar18 = *(undefined8 **)(lVar15 + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593ba40), iVar7 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(&DAT_710593ba48), iVar7 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar18 != (undefined8 *)0x0) {
        for (puVar9 = (undefined8 *)(**(code **)*puVar18)(puVar18); puVar9 != (undefined8 *)0x0;
            puVar9 = (undefined8 *)*puVar9) {
          if ((undefined8 **)puVar9 == &DAT_710593ba58) {
            *(undefined1 *)(puVar18 + 0xc) = 1;
            break;
          }
        }
      }
    }
    FUN_7103776910(&local_118,(long)&local_b0,(long ****)"set_txt_mask",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_118,(char *)(param_1 + 0x68),param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar13 = local_110[0];
    local_118 = &PTR_FUN_710523d9a8;
    local_110[0] = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_7103776910(&local_118,(long)&local_b0,(long ****)"set_txt_main",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_118,(char *)(param_1 + 0x68),param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar13 = local_110[0];
    local_118 = &PTR_FUN_710523d9a8;
    local_110[0] = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    uVar13 = CONCAT26(uStack_a2,CONCAT24(uStack_a4,local_a8));
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    uStack_a4 = 0;
    uStack_a2 = 0;
    if (uVar13 != 0) {
      uVar16 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar13);
    }
  }
  return;
}

