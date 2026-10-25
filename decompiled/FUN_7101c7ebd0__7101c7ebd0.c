// addr:      7101c7ebd0
// offset:    0x1c7ebd0
// name:      FUN_7101c7ebd0
// mangled:   
// signature: undefined __cdecl FUN_7101c7ebd0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c7ebd0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  uint uVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  undefined **local_120;
  undefined8 *local_118 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long ********local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  ushort local_b6;
  undefined1 local_b4;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  undefined8 *local_78;
  long ********local_70;
  undefined4 local_64;
  
  iVar2 = (int)param_3;
  ppppbVar12 = param_4;
  pppplVar13 = param_5;
  FUN_7103776640(&local_90,param_1,(byte ****)"set_rep_icn_fighter_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar1 = *(ushort *)(param_2 + 0x9c);
  plVar16 = (long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2e8) + 0x18);
  plVar18 = (long *)*plVar16;
  plVar8 = plVar16;
  if (plVar18 == (long *)0x0) {
LAB_7101c7ec80:
    FUN_7103776910(&local_d8,(long)&local_90,(long ****)"set_icn_profile",param_3,ppppbVar12,
                   pppplVar13,param_6,param_7,param_8);
    FUN_7103776910(&local_120,(long)&local_90,(long ****)"set_icn_profile_bg",param_3,ppppbVar12,
                   pppplVar13,param_6,param_7,param_8);
    FUN_71037790a0((long)local_d0,1,param_3,ppppbVar12,pppplVar13,param_6,param_7,param_8);
    puVar9 = local_118[0];
    local_120 = &PTR_FUN_710523d9a8;
    local_118[0] = (undefined8 *)0x0;
    uVar19 = (ulong)local_d0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar9);
    }
  }
  else {
    do {
      if (*(ushort *)(plVar18 + 4) >= uVar1) {
        plVar8 = plVar18;
      }
      plVar18 = (long *)plVar18[*(ushort *)(plVar18 + 4) < uVar1];
    } while (plVar18 != (long *)0x0);
    if (((plVar8 == plVar16) || (uVar1 < *(ushort *)(plVar8 + 4))) ||
       (uVar19 = plVar8[5],
       (uVar19 & 0xff00000000000000) != 0x1e00000000000000 || (uVar19 & 0xffffffffff) == 0))
    goto LAB_7101c7ec80;
    FUN_7103776910(&local_d8,(long)&local_90,(long ****)"set_icn_profile",param_3,ppppbVar12,
                   pppplVar13,param_6,param_7,param_8);
    FUN_7103776910(&local_120,(long)&local_90,(long ****)"set_icn_profile_bg",param_3,ppppbVar12,
                   pppplVar13,param_6,param_7,param_8);
    plVar8 = FUN_7103240430((long *)param_5,uVar19,(long ****)param_3,ppppbVar12,pppplVar13,param_6,
                            param_7,param_8);
    FUN_7103778b80((long)local_d0,(long)plVar8,param_3,ppppbVar12,pppplVar13,param_6,param_7,param_8
                  );
    local_80 = &PTR_FUN_710523d9a8;
    puVar9 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)param_3,ppppbVar12,pppplVar13,param_6,param_7,
                            param_8);
    if (puVar9 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&SUB_00000020;
        param_3 = &local_70;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (puVar9 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,ppppbVar12,pppplVar13,param_6,
                                    param_7,param_8), puVar9 != (undefined8 *)0x0))
        goto LAB_7101c7f43c;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_7101c7f43c:
    puVar3 = local_118[0];
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    *puVar9 = *local_118[0];
    puVar9[1] = local_118[0][1];
    puVar9[2] = local_118[0][2];
    puVar9[3] = local_118[0][3];
    local_78 = puVar9;
    FUN_710337d450((long)&local_80,uVar19);
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar9);
    }
    local_120 = &PTR_FUN_710523d9a8;
    local_118[0] = (undefined8 *)0x0;
    uVar19 = (ulong)local_d0;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar3);
      uVar19 = (ulong)local_d0;
    }
  }
  local_d0 = (long ********)0x0;
  local_d8 = &PTR_FUN_710523d9a8;
  if (uVar19 != 0) {
    local_d0 = (long ********)0x0;
    local_d8 = &PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar19);
  }
  uVar19 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar19 != 0) {
    uVar6 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar19);
  }
  FUN_7103776910(&local_120,param_1,(long ****)"set_txt_name",param_3,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  local_d8 = (undefined **)
             FUN_710392e290(0x10,8,(long ****)param_3,ppppbVar12,pppplVar13,param_6,param_7,param_8)
  ;
  if ((long ********)local_d8 == (long ********)0x0) {
    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
    local_d8 = (undefined **)&DAT_00000008;
    param_3 = (long *********)&local_d8;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
    local_d8 = (undefined **)
               FUN_710392e290(0x10,8,(long ****)param_3,ppppbVar12,pppplVar13,param_6,param_7,
                              param_8);
  }
  puVar9 = local_118[0];
  local_d0 = (long ********)(local_d8 + 1);
  *local_d8 = (undefined *)(param_2 + 0x80);
  local_c8 = local_d0;
  if ((long *)local_118[0][2] != (long *)0x0) {
    param_3 = (long *********)&local_d8;
    FUN_71037a2660((long *)local_118[0][2],(byte *)"mnu_online_room_create_host_account",
                   (long *)param_3);
  }
  FUN_7103776910(&local_80,param_1,(long ****)"set_txt_name_00",param_3,ppppbVar12,pppplVar13,
                 param_6,param_7,param_8);
  puVar3 = local_78;
  if (*(long **)((long)local_78 + 0x10) != (long *)0x0) {
    param_3 = (long *********)&local_d8;
    FUN_71037a2660(*(long **)((long)local_78 + 0x10),(byte *)"mnu_online_room_create_host_account",
                   (long *)param_3);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  if ((long ********)local_d8 != (long ********)0x0) {
    local_d0 = (long ********)local_d8;
    FUN_710392eb40((ulong)local_d8);
  }
  local_120 = &PTR_FUN_710523d9a8;
  local_118[0] = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7101c6ee80((uint *)&local_d8,*(undefined1 *)(param_2 + 0xfe));
  FUN_7103776910(&local_120,param_1,(long ****)"set_txt_cate",param_3,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_120,(char *)&local_d0,param_3,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  puVar9 = local_118[0];
  local_120 = &PTR_FUN_710523d9a8;
  local_118[0] = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_120,param_1,(long ****)"set_txt_cate_00",param_3,ppppbVar12,pppplVar13,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_120,(char *)&local_d0,param_3,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  puVar9 = local_118[0];
  local_120 = &PTR_FUN_710523d9a8;
  local_118[0] = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7101c6ec50((uint *)&local_120,*(undefined1 *)(param_2 + 0xfe));
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)local_118);
  switch(*(undefined1 *)(param_2 + 0xff)) {
  case 0:
    local_d8._4_4_ = 0x18;
    local_be = (ulong)local_be._7_1_ << 0x38;
    local_c8 = (long ********)0x5f6d6f6f725f656e;
    local_c0 = 0x6f66;
    uVar14 = 0x811c9dc5;
    local_be = CONCAT26(local_be._6_2_,0x6c6c615f6d72);
    uVar17 = 0x6d;
    pbVar15 = (byte *)((long)&local_d0 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  default:
    local_d8._4_4_ = 0x19;
    local_c8 = (long ********)0x5f6d6f6f725f656e;
    local_c0 = 0x6f66;
    local_be = 0x72756f665f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar15 = (byte *)((long)&local_d0 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 2:
    local_b6 = local_b6 & 0xff00;
    local_d8._4_4_ = 0x1a;
    local_c8 = (long ********)0x5f6d6f6f725f656e;
    local_c0 = 0x6f66;
    local_be = 0x65657268745f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar15 = (byte *)((long)&local_d0 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 3:
    local_d8._4_4_ = 0x1c;
    local_b4 = 0;
    local_c8 = (long ********)0x5f6d6f6f725f656e;
    local_c0 = 0x6f66;
    local_be = 0x6f5f656e6f5f6d72;
    uVar14 = 0x811c9dc5;
    local_b6 = 0x656e;
    uVar17 = 0x6d;
    pbVar15 = (byte *)((long)&local_d0 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 4:
    local_d8._4_4_ = 0x19;
    local_c8 = (long ********)0x5f6d6f6f725f656e;
    local_c0 = 0x6f66;
    local_be = 0x6d6165745f6d72;
    uVar14 = 0x811c9dc5;
    uVar17 = 0x6d;
    pbVar15 = (byte *)((long)&local_d0 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
  }
  local_c0 = 0x6f66;
  local_c8 = (long ********)0x5f6d6f6f725f656e;
  local_d0 = (long ********)&DAT_696c6e6f5f756e6d;
  local_d8 = (undefined **)CONCAT44(local_d8._4_4_,uVar14);
  FUN_7103776910(&local_120,param_1,(long ****)"set_txt_rule",param_3,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_120,(char *)&local_d0,param_3,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  puVar9 = local_118[0];
  local_120 = &PTR_FUN_710523d9a8;
  local_118[0] = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  FUN_7103776910(&local_120,param_1,(long ****)"set_txt_rule_00",param_3,ppppbVar12,pppplVar13,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_120,(char *)&local_d0,param_3,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  puVar9 = local_118[0];
  local_120 = &PTR_FUN_710523d9a8;
  local_118[0] = (undefined8 *)0x0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  if (iVar2 == 2) {
    FUN_7103776910(&local_d8,param_1,(long ****)"set_txt_now",param_3,ppppbVar12,pppplVar13,param_6,
                   param_7,param_8);
    uVar19 = (ulong)(*(byte *)(param_2 + 4) & 0x3f);
    uVar11 = 1;
    FUN_710377a280((long)&local_d8,(byte *)"mnu_online_room_search_participants_n",1);
    puVar4 = (undefined1 *)local_d0;
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long ********)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    FUN_7103776910(&local_d8,param_1,(long ****)"set_txt_max",uVar11,uVar19,pppplVar13,param_6,
                   param_7,param_8);
    uVar6 = (ulong)(*(byte *)(param_2 + 5) & 0x3f);
    uVar11 = 1;
    FUN_710377a280((long)&local_d8,(byte *)"mnu_online_room_search_participants_max",1);
    uVar19 = (ulong)local_d0;
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long ********)0x0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_7103776910(&local_d8,param_1,(long ****)"set_txt_slash",uVar11,uVar6,pppplVar13,param_6,
                   param_7,param_8);
    uVar19 = (ulong)local_d0;
    lVar7 = *(long *)((long)local_d0 + 0x10);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 0x27e) = 0x101;
      *(undefined1 *)(lVar7 + 0x280) = 1;
    }
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long ********)0x0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x710438cb54);
    if ((*(byte *)(param_2 + 4) & 0x3f) < (*(byte *)(param_2 + 5) & 0x3f)) {
      bVar5 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
      if (((bVar5) || (*(char *)(param_2 + 0xfe) != '\x03')) &&
         ((uVar19 = FUN_7101797350(0), (uVar19 & 1) != 0 || (*(char *)(param_2 + 0xfe) != '\b')))) {
        pcVar10 = "gray_off";
      }
      else {
        pcVar10 = "gray_on";
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),(long)pcVar10);
      lVar7 = *(long *)(param_1 + 8);
      pcVar10 = "num_on";
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71043bedce);
      lVar7 = *(long *)(param_1 + 8);
      pcVar10 = "num_max";
    }
    FUN_7103778300(0x3f800000,lVar7,(long)pcVar10);
    if (((ulong)param_4 & 1) == 0) {
      lVar7 = *(long *)(param_1 + 8);
    }
    else {
      lVar7 = *(long *)(param_1 + 8);
      if (*(char *)(param_2 + 7) != '\0') {
        pcVar10 = "key_on";
        goto LAB_7101c7f508;
      }
    }
    pcVar10 = "key_off";
  }
  else {
    if (iVar2 != 1) {
      return;
    }
    FUN_7103776910(&local_d8,param_1,(long ****)"set_txt_center",param_3,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    FUN_710377a280((long)&local_d8,(byte *)"mnu_online_room_player_number_n",1);
    puVar4 = (undefined1 *)local_d0;
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long ********)0x0;
    if (puVar4 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar4);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x710434a3e5);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x710424f5db);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042d6312);
    lVar7 = *(long *)(param_1 + 8);
    pcVar10 = "gray_off";
  }
LAB_7101c7f508:
  FUN_7103778300(0x3f800000,lVar7,(long)pcVar10);
  return;
}

