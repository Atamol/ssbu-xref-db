// addr:      7101c6c030
// offset:    0x1c6c030
// name:      FUN_7101c6c030
// mangled:   
// signature: undefined __cdecl FUN_7101c6c030(long param_1, byte * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c6c030(long param_1,byte *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long *********ppppppppplVar11;
  undefined8 uVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  long ***ppplVar18;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c6;
  ushort local_be;
  undefined1 local_bc;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  undefined8 *local_70;
  undefined **local_68;
  undefined8 *local_60;
  long ********local_58;
  undefined4 local_44;
  
  pppplVar10 = (long ****)&local_e0;
  pppplVar9 = param_3;
  FUN_7103776640(&local_88,param_1 + 0x88,(byte ****)"set_parts_header_btn",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar4 = (long *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
      local_e0 = (undefined **)&DAT_00000008;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      pppplVar9 = pppplVar10;
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,8,pppplVar10,param_4,param_5,param_6,param_7,param_8)
         , pppplVar9 = pppplVar10, plVar4 != (long *)0x0)) goto LAB_7101c6c0c8;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101c6c0c8:
  uVar5 = local_80;
  *plVar4 = 0;
  lVar15 = *(long *)(local_80 + 8);
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) == 0)) {
    *plVar4 = 0;
  }
  else {
    plVar6 = (long *)FUN_7103796f20(*(long *)(lVar15 + 0x60),*(long *)(lVar15 + 0x18) + 0xb0);
    *plVar4 = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x218))(plVar6,1);
      (**(code **)(*plVar6 + 0x408))(plVar6);
      (**(code **)(*plVar6 + 1000))(plVar6,1);
      iVar3 = (**(code **)(*plVar6 + 0x140))(plVar6);
      if ((iVar3 != 6) && (iVar3 = (**(code **)(*plVar6 + 0x140))(plVar6), iVar3 != 1)) {
        (**(code **)(*plVar6 + 0x3f8))(plVar6);
      }
      uVar7 = (**(code **)(*plVar6 + 0x158))(plVar6);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*plVar6 + 0x360))(plVar6);
      }
    }
  }
  FUN_710392eb40((ulong)plVar4);
  FUN_7103778300(0x3f800000,uVar5,0x71043196af);
  FUN_7103778300(0x3f800000,uVar5,0x71042d6312);
  FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_txt_name",pppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  ppppbVar13 = (byte ****)((long)param_3 + 0xc);
  ppppppppplVar11 = (long *********)0x1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_online_room_search_host_account",1);
  uVar5 = (ulong)local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (undefined1 *)0x0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776640(&local_98,(long)&local_88,(byte ****)"set_rep_icn_fighter_00",ppppppppplVar11,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  ppplVar18 = param_3[5];
  plVar4 = *(long **)(param_1 + 0x78);
  FUN_7103776910(&local_e0,(long)&local_98,(long ****)"set_icn_profile",ppppppppplVar11,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_68,(long)&local_98,(long ****)"set_icn_profile_bg",ppppppppplVar11,
                 ppppbVar13,param_5,param_6,param_7,param_8);
  plVar4 = FUN_7103240430(plVar4,(ulong)ppplVar18,(long ****)ppppppppplVar11,ppppbVar13,param_5,
                          param_6,param_7,param_8);
  FUN_7103778b80((long)local_d8,(long)plVar4,ppppppppplVar11,ppppbVar13,param_5,param_6,param_7,
                 param_8);
  local_78 = &PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,ppppbVar13,param_5,param_6,param_7,
                          param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ********)&SUB_00000020;
      ppppppppplVar11 = &local_58;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,ppppbVar13,param_5,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7101c6c2c4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101c6c2c4:
  puVar2 = local_60;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *puVar8 = *local_60;
  puVar8[1] = local_60[1];
  puVar8[2] = local_60[2];
  puVar8[3] = local_60[3];
  local_70 = puVar8;
  FUN_710337d450((long)&local_78,(ulong)ppplVar18);
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  uVar5 = (ulong)local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (undefined1 *)0x0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  uVar5 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7101c6ee80((uint *)&local_e0,param_2[0x85]);
  FUN_7103776910(&local_68,(long)&local_88,(long ****)"set_txt_cate",ppppppppplVar11,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_68,(char *)&local_d8,ppppppppplVar11,ppppbVar13,param_5,param_6,
                 param_7,param_8);
  puVar8 = local_60;
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_7101c6ec50((uint *)&local_e0,param_2[0x85]);
  uVar5 = local_80;
  FUN_7103778300(0x3f800000,local_80,(long)&local_d8);
  FUN_7103778300(0x3f800000,local_80,0x710424f5db);
  FUN_7103776910(&local_68,(long)&local_88,(long ****)"set_txt_rule",ppppppppplVar11,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  switch(param_2[0x86]) {
  case 0:
    local_e0._4_4_ = 0x18;
    local_c6 = (ulong)local_c6._7_1_ << 0x38;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x6f66;
    uVar14 = 0x811c9dc5;
    local_c6 = CONCAT26(local_c6._6_2_,0x6c6c615f6d72);
    uVar17 = 0x6d;
    pbVar16 = (byte *)((long)&local_d8 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
    break;
  default:
    local_e0._4_4_ = 0x19;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x6f66;
    local_c6 = 0x72756f665f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar16 = (byte *)((long)&local_d8 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
    break;
  case 2:
    local_be = local_be & 0xff00;
    local_e0._4_4_ = 0x1a;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x6f66;
    local_c6 = 0x65657268745f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar16 = (byte *)((long)&local_d8 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
    break;
  case 3:
    local_e0._4_4_ = 0x1c;
    local_bc = 0;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x6f66;
    local_c6 = 0x6f5f656e6f5f6d72;
    uVar14 = 0x811c9dc5;
    local_be = 0x656e;
    uVar17 = 0x6d;
    pbVar16 = (byte *)((long)&local_d8 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
    break;
  case 4:
    local_e0._4_4_ = 0x19;
    local_d0 = 0x5f6d6f6f725f656e;
    local_c8 = 0x6f66;
    local_c6 = 0x6d6165745f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar16 = (byte *)((long)&local_d8 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
  }
  local_c8 = 0x6f66;
  local_d0 = 0x5f6d6f6f725f656e;
  local_d8 = &DAT_696c6e6f5f756e6d;
  local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar14);
  FUN_710377a120((long)&local_68,(char *)&local_d8,ppppppppplVar11,ppppbVar13,param_5,param_6,
                 param_7,param_8);
  puVar8 = local_60;
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_7103778300(0x3f800000,local_80,0x710438cb54);
  FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_txt_max",ppppppppplVar11,ppppbVar13,
                 param_5,param_6,param_7,param_8);
  uVar7 = (ulong)*param_2;
  uVar12 = 1;
  FUN_710377a280((long)&local_e0,(byte *)"mnu_online_room_search_participants_max",1);
  puVar1 = local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (undefined1 *)0x0;
  if (puVar1 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_txt_slash",uVar12,uVar7,param_5,param_6,
                 param_7,param_8);
  uVar7 = (ulong)local_d8;
  lVar15 = *(long *)((long)local_d8 + 0x10);
  if (lVar15 != 0) {
    *(undefined2 *)(lVar15 + 0x27e) = 0x101;
    *(undefined1 *)(lVar15 + 0x280) = 1;
  }
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (undefined1 *)0x0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar5 != 0) {
    uVar7 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar5);
  }
  return;
}

