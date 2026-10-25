// addr:      7101c689c0
// offset:    0x1c689c0
// name:      FUN_7101c689c0
// mangled:   
// signature: undefined __cdecl FUN_7101c689c0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c689c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined2 local_940;
  undefined8 local_93e;
  undefined4 local_936;
  undefined2 local_932;
  ulong local_930;
  uint local_928;
  undefined1 local_924;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined5 uStack_540;
  undefined8 local_4fc;
  undefined2 local_4f4;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_b0;
  char cStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined **local_78;
  ulong local_70;
  
  local_550 = 0xffffffffffffffff;
  local_4fc = 0;
  local_4f4 = 0;
  local_f4 = 0;
  uStack_540 = 0;
  uStack_ac = 0x3c;
  uStack_548._0_5_ = 0;
  uStack_548._5_3_ = 0;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  cStack_af = 0;
  uStack_ae = 0;
  uStack_aa = 0x503;
  uStack_a8 = 0x20000;
  uStack_a2 = 10;
  uStack_a0 = 0x10300010100;
  local_9a = 0x100;
  local_98 = 2;
  local_84 = 0xffffffffffffffff;
  local_8c = 0xffffffffffffffff;
  local_94 = 0xffffffffffffffff;
  local_7c = 0xffffffff;
  if (DAT_710532f730 != 0) {
    lVar14 = *(long *)(DAT_710532f730 + 8);
    lVar13 = *(long *)(lVar14 + 0x178);
    uVar4 = FUN_71032b23e0(*(long *)(lVar13 + 8),0xd56784f97);
    uVar5 = FUN_71032b1e40(lVar13,uVar4);
    if (-1 < (int)uVar5) {
      uVar4 = FUN_71032b1e40(*(long *)(lVar14 + 0x178),uVar4);
      lVar13 = (uVar4 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)&local_8c + lVar13 + 4) =
           *(uint *)((long)&local_8c + lVar13 + 4) &
           (1 << (ulong)((uint)uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 0x6c);
  local_958 = (undefined **)0x0;
  uStack_a8 = (undefined6)*(undefined8 *)(param_2 + 0x74);
  uStack_a2 = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x74) >> 0x30);
  uStack_a0 = (undefined6)*(undefined8 *)(param_2 + 0x7c);
  local_9a = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x7c) >> 0x30);
  local_b0 = (undefined1)uVar9;
  cStack_af = (char)((ulong)uVar9 >> 8);
  uStack_ae = (undefined1)((ulong)uVar9 >> 0x10);
  uStack_ad = (undefined1)((ulong)uVar9 >> 0x18);
  uStack_ac = (undefined2)((ulong)uVar9 >> 0x20);
  uStack_aa = (undefined2)((ulong)uVar9 >> 0x30);
  local_950 = (undefined1 *)((ulong)local_950 & 0xffffffffffff0000);
  FUN_71017ab0c0((long)&local_550,&local_958);
  lVar13 = param_1 + 0x88;
  FUN_7103776640(&local_78,lVar13,(byte ****)"set_Parts_hd_u_cont_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppppbVar7 = *(byte *****)(param_1 + 0x78);
  ppppppppplVar6 = (long *********)&local_958;
  FUN_7101c6fec0((long)&local_78,cStack_af,ppppppppplVar6,ppppbVar7,param_5,param_6,param_7,param_8)
  ;
  uVar4 = local_70;
  local_78 = &PTR_FUN_710523d988;
  local_70 = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_7101c6f7f0((uint *)&local_550,*(undefined1 *)(param_2 + 0x87));
  FUN_7103776910(&local_958,lVar13,(long ****)"set_txt_hd_b_cont_00",ppppppppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_958,(char *)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  uVar4 = (ulong)local_950;
  local_958 = &PTR_FUN_710523d9a8;
  local_950 = (undefined1 *)0x0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar1 = *(undefined1 *)(param_2 + 0x78);
  FUN_71003a4ca0((uint *)&local_550,"txt_sub_hd_%02d",0,ppppppppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_958,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_958,"mnu_online_room_setting_stage",ppppppppplVar6,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar4 = (ulong)local_950;
  local_958 = &PTR_FUN_710523d9a8;
  local_950 = (undefined1 *)0x0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar15 = 0x811c9dc5;
  uVar12 = uVar15;
  switch(uVar1) {
  case 4:
    local_958._4_4_ = 0x1c;
    local_948 = 0x5f6d6f6f725f656e;
    local_940 = 0x7473;
    local_936 = (uint)local_936._3_1_ << 0x18;
    local_93e = 0x646e61725f656761;
    local_936 = CONCAT22(local_936._2_2_,0x6d6f);
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_950 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
    break;
  case 5:
    local_948 = 0x5f6d6f6f725f656e;
    local_940 = 0x7473;
    local_93e = 0x646e61725f656761;
    local_936 = 0x625f6d6f;
    local_932 = 0x7461;
    local_958._4_4_ = 0x2c;
    local_924 = 0;
    local_930 = 0x646c656966656c74;
    local_928 = 0x646e655f;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_950 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
    break;
  case 6:
    local_948 = 0x5f6d6f6f725f656e;
    local_940 = 0x7473;
    local_93e = 0x646e61725f656761;
    local_936 = 0x625f6d6f;
    local_958._4_4_ = 0x28;
    local_928 = local_928 & 0xffffff00;
    local_932 = 0x7461;
    local_930 = 0x646c656966656c74;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_950 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
    break;
  case 7:
    local_958._4_4_ = 0x20;
    local_948 = 0x5f6d6f6f725f656e;
    local_940 = 0x7473;
    local_930 = local_930 & 0xffffffffffffff00;
    uVar11 = 0x6d;
    local_93e = 0x646e61725f656761;
    local_936 = 0x655f6d6f;
    local_932 = 0x646e;
    pbVar10 = (byte *)((long)&local_950 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
    break;
  default:
    local_958._4_4_ = 0x27;
    local_948 = 0x5f6d6f6f725f656e;
    local_940 = 0x7473;
    local_93e = 0x766572705f656761;
    local_936 = 0x73756f69;
    local_932 = 0x796c;
    local_930 = 0x7463656c65735f;
    uVar11 = 0x6d;
    pbVar10 = (byte *)((long)&local_950 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar11 != 0);
  }
  local_940 = 0x7473;
  local_948 = 0x5f6d6f6f725f656e;
  local_950 = &DAT_696c6e6f5f756e6d;
  local_958 = (undefined **)CONCAT44(local_958._4_4_,uVar12);
  FUN_71003a4ca0((uint *)&local_550,"set_txt_sub_hd_%02d",0,ppppppppplVar6,ppppbVar7,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_78,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_78,(char *)&local_950,ppppppppplVar6,ppppbVar7,param_5,param_6,param_7
                 ,param_8);
  uVar4 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  if (*(char *)(param_2 + 0x88) == '\0') {
    uVar9 = 1;
    uVar12 = 1;
    cVar2 = *(char *)(param_2 + 0x75);
  }
  else {
    FUN_71003a4ca0((uint *)&local_550,"txt_sub_hd_%02d",1,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_958,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_958,"mnu_online_room_setting_amiibo",ppppppppplVar6,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    puVar3 = local_950;
    local_958 = &PTR_FUN_710523d9a8;
    local_950 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar3);
    }
    for (uVar4 = 0; "mnu_online_room_spirits_on"[uVar4] != '\0'; uVar4 = uVar4 + 2) {
      cVar2 = "mnu_online_room_spirits_on"[uVar4 + 1];
      *(char *)((long)&local_950 + uVar4) = "mnu_online_room_spirits_on"[uVar4];
      if (cVar2 == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      *(char *)((long)&local_950 + uVar4 + 1) = cVar2;
    }
    *(char *)((long)&local_950 + (uVar4 & 0xffffffff)) = '\0';
    uVar11 = (uint)(byte)local_950;
    uVar12 = uVar15;
    if ((byte)local_950 != 0) {
      pbVar10 = (byte *)((long)&local_950 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (uVar11 != 0);
    }
    local_958 = (undefined **)CONCAT44((int)uVar4,uVar12);
    FUN_71003a4ca0((uint *)&local_550,"set_txt_sub_hd_%02d",1,ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_78,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_78,(char *)&local_950,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    uVar9 = 2;
    uVar12 = 2;
    cVar2 = *(char *)(param_2 + 0x75);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_2 + 0x8b);
  }
  else {
    uVar12 = (int)uVar9 + 1;
    FUN_71003a4ca0((uint *)&local_550,"txt_sub_hd_%02d",uVar9,ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_958,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_958,"mnu_online_room_setting_spirits",ppppppppplVar6,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    puVar3 = local_950;
    local_958 = &PTR_FUN_710523d9a8;
    local_950 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar3);
    }
    for (uVar4 = 0; "mnu_online_room_spirits_on"[uVar4] != '\0'; uVar4 = uVar4 + 2) {
      cVar2 = "mnu_online_room_spirits_on"[uVar4 + 1];
      *(char *)((long)&local_950 + uVar4) = "mnu_online_room_spirits_on"[uVar4];
      if (cVar2 == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      *(char *)((long)&local_950 + uVar4 + 1) = cVar2;
    }
    *(char *)((long)&local_950 + (uVar4 & 0xffffffff)) = '\0';
    uVar8 = (uint)(byte)local_950;
    uVar11 = uVar15;
    if ((byte)local_950 != 0) {
      pbVar10 = (byte *)((long)&local_950 + 1);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    local_958 = (undefined **)CONCAT44((int)uVar4,uVar11);
    FUN_71003a4ca0((uint *)&local_550,"set_txt_sub_hd_%02d",uVar9,ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_78,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_78,(char *)&local_950,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    cVar2 = *(char *)(param_2 + 0x8b);
  }
  if (cVar2 != '\0') {
    uVar11 = uVar12 + 1;
    FUN_71003a4ca0((uint *)&local_550,"txt_sub_hd_%02d",(ulong)uVar12,ppppppppplVar6,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_958,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_958,"mnu_online_room_setting_stgcreate",ppppppppplVar6,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    puVar3 = local_950;
    local_958 = &PTR_FUN_710523d9a8;
    local_950 = (undefined1 *)0x0;
    if (puVar3 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar3);
    }
    for (uVar4 = 0; "mnu_online_room_stgcreate_on"[uVar4] != '\0'; uVar4 = uVar4 + 2) {
      cVar2 = "mnu_online_room_stgcreate_on"[uVar4 + 1];
      *(char *)((long)&local_950 + uVar4) = "mnu_online_room_stgcreate_on"[uVar4];
      if (cVar2 == '\0') {
        uVar4 = uVar4 + 1;
        break;
      }
      *(char *)((long)&local_950 + uVar4 + 1) = cVar2;
    }
    *(char *)((long)&local_950 + (uVar4 & 0xffffffff)) = '\0';
    uVar8 = (uint)(byte)local_950;
    if ((byte)local_950 != 0) {
      pbVar10 = (byte *)((long)&local_950 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (uVar8 != 0);
    }
    local_958 = (undefined **)CONCAT44((int)uVar4,uVar15);
    FUN_71003a4ca0((uint *)&local_550,"set_txt_sub_hd_%02d",(ulong)uVar12,ppppppppplVar6,ppppbVar7,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_78,lVar13,(long ****)&uStack_548,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_78,(char *)&local_950,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    uVar12 = uVar11;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  FUN_71003a4ca0((uint *)&local_550,"detail_disp_%02d",(ulong)uVar12,ppppppppplVar6,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x90),(long)&uStack_548);
  return;
}

