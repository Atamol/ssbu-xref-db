// addr:      7101a23a80
// offset:    0x1a23a80
// name:      FUN_7101a23a80
// mangled:   
// signature: undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a23a80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  int *piVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  undefined4 uVar17;
  long lVar18;
  byte *pbVar19;
  code *pcVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  undefined8 local_278;
  undefined **local_260;
  ulong local_258;
  undefined **local_250;
  ulong local_248;
  long ***local_240;
  long *local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined2 local_218;
  undefined6 uStack_216;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined2 uStack_20c;
  undefined2 local_20a;
  undefined8 local_208;
  undefined4 local_200;
  long *local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  undefined4 local_110;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  int local_68;
  uint local_64;
  
  *(undefined1 *)(*(long *)**(undefined8 **)(param_1 + 0x198) + 0x655) = 1;
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x198),0);
  lVar18 = *(long *)**(undefined8 **)(param_1 + 0x198);
  *(undefined1 *)(lVar18 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar18 + 0x600) + 0x4ab) = 0;
  lVar23 = *(long *)(lVar18 + 0x608);
  lVar25 = *(long *)(lVar18 + 0x610);
  if (lVar23 != lVar25) {
    uVar26 = (lVar25 + -0x10) - lVar23;
    uVar30 = ((uint)(uVar26 >> 4) & 0xfffffff) + 1;
    if ((uVar30 & 3) != 0) {
      lVar27 = -((ulong)uVar30 & 3);
      do {
        plVar5 = (long *)(lVar23 + 8);
        lVar23 = lVar23 + 0x10;
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar5 + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
      } while (lVar27 != 0);
    }
    if (0x2f < uVar26) {
      do {
        *(undefined1 *)(*(long *)(lVar23 + 8) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
        *(undefined1 *)(*(long *)(lVar23 + 0x18) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
        *(undefined1 *)(*(long *)(lVar23 + 0x28) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
        plVar5 = (long *)(lVar23 + 0x38);
        lVar23 = lVar23 + 0x40;
        *(undefined1 *)(*plVar5 + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
      } while (lVar25 != lVar23);
    }
  }
  lVar23 = *(long *)**(undefined8 **)(param_1 + 0x198);
  pppplVar12 = (long ****)&DAT_00000198;
  *(undefined8 *)(*(long *)(lVar23 + 0x600) + 0x484) = 0xffffffff00000002;
  memset(*(void **)(lVar23 + 0x600),0,0x198);
  if (*(char *)(param_1 + 0xf81) != '\0') {
    **(undefined4 **)(lVar23 + 0x600) = 0x100001;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 4) = 0x400004;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 8) = 0x800008;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xc) = 0x200002;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x10) = 0x20;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x14) = 0x40;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xdc) = 0xd0;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xe0) = 0xb0;
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0xe4) = 0xfffbffff;
  }
  iVar4 = *(int *)(param_1 + 0x16c);
  if (iVar4 == 0x1b) {
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x1c) = 0x80;
    iVar4 = *(int *)(param_1 + 0x16c);
  }
  if (iVar4 == 0x1c) {
    *(undefined4 *)(*(long *)(lVar23 + 0x600) + 0x34) = 0x10;
  }
  uVar26 = 0;
  lVar23 = 8;
  do {
    lVar18 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x198) + 0x608);
    if ((ulong)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x198) + 0x610) - lVar18 >> 4) <=
        uVar26) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar25 = *(long *)(lVar18 + lVar23);
    *(undefined4 *)(lVar25 + 0x490) = 0x3ed851ea;
    *(undefined2 *)(lVar25 + 0x4a8) = 1;
    *(undefined8 *)(lVar25 + 0x3fc) = 0x600000011;
    *(undefined8 *)(lVar25 + 0x404) = 0x6400000002;
    *(undefined8 *)(lVar25 + 0x40c) = 0;
    *(undefined8 *)(lVar25 + 0x414) = 0x600000011;
    *(undefined8 *)(lVar25 + 0x41c) = 0x6400000002;
    *(undefined8 *)(lVar25 + 0x424) = 0;
    lVar25 = *(long *)(lVar18 + lVar23);
    *(undefined8 *)(lVar25 + 0x484) = 0xffffffff00000000;
    if (*(int *)(lVar25 + 0x48c) != -1) {
      *(undefined4 *)(lVar25 + 0x48c) = 0xffffffff;
    }
    *(undefined1 *)(*(long *)(lVar18 + lVar23) + 0x4aa) = 0;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x10) = 0x20;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x14) = 0x40;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x18) = 0x40000;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x1c) = 0x80;
    plVar5 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    uVar26 = uVar26 + 1;
    if ((plVar5 == (long *)0x0) || (uVar6 = (**(code **)(*plVar5 + 0x48))(), (uVar6 & 1) == 0)) {
      uVar21 = 0x500;
      uVar17 = 0xa00;
    }
    else {
      uVar17 = 0x200;
      uVar21 = 0x100;
    }
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x20) = uVar21;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x24) = uVar17;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x40) = 0x40;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x44) = 0x80;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x48) = 0x40000;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0x4c) = 0x10;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0xdc) = 0xd0;
    *(undefined4 *)(*(long *)(lVar18 + lVar23) + 0xe0) = 0xb0;
    plVar5 = (long *)(lVar18 + lVar23);
    lVar23 = lVar23 + 0x10;
    *(undefined4 *)(*plVar5 + 0xe4) = 0xfffbffff;
  } while (uVar26 != 8);
  plVar5 = (long *)(**(long **)(param_1 + 0x198) + 0x10);
  uVar30 = 0x811c9dc5;
  puVar28 = (undefined8 *)(**(long **)(param_1 + 0x198) + 8);
  FUN_7103778300(0x3f800000,*plVar5,0x7104454503);
  FUN_7103778300(0x3f800000,*plVar5,0x7104421cc8);
  FUN_7103778300(0x3f800000,*plVar5,0x710438c35e);
  FUN_7103778760(*plVar5,0x710441237e);
  FUN_7103778760(*plVar5,0x71042d4aad);
  FUN_7103778760(*plVar5,0x71043be176);
  pcVar11 = "back_btn_long";
  if (*(char *)(param_1 + 0xf80) != '\0') {
    pcVar11 = "back_btn_short";
  }
  FUN_7103778300(0x3f800000,*plVar5,(long)pcVar11);
  uVar22 = uVar30;
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 6:
  case 7:
  case 8:
    local_c0 = 0xd00000000;
    uStack_b8 = (undefined1 *)0x70735f726f6c6f63;
    local_b0 = 0x74697269;
    local_ac = 0x73;
    uVar24 = 99;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
    local_c0 = 0xb00000000;
    uStack_b8 = (undefined1 *)0x746f5f726f6c6f63;
    local_b0 = 0x726568;
    uVar24 = 99;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    local_c0 = 0xc00000000;
    uStack_b8 = &DAT_6e6f5f726f6c6f63;
    local_b0 = 0x656e696c;
    uVar24 = 99;
    local_ac = (ushort)local_ac._1_1_ << 8;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  case 0x1a:
  case 0x1b:
    local_c0 = 0xb00000000;
    uStack_b8 = (undefined1 *)0x6f635f726f6c6f63;
    local_b0 = 0x656c6c;
    uVar24 = 99;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  case 0x1c:
    local_c0 = 0xc00000000;
    uStack_b8 = (undefined1 *)0x706f5f726f6c6f63;
    local_b0 = 0x6e6f6974;
    uVar24 = 99;
    local_ac = (ushort)local_ac._1_1_ << 8;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  case 0x1d:
    local_c0 = 0xb00000000;
    uStack_b8 = (undefined1 *)0x746f5f726f6c6f63;
    local_b0 = 0x726568;
    uVar24 = 99;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    break;
  default:
    local_c0 = 0xb00000000;
    uStack_b8 = (undefined1 *)0x656d5f726f6c6f63;
    local_b0 = 0x65656c;
    uVar24 = 99;
    pbVar19 = (byte *)((long)&uStack_b8 + 1);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
  }
  local_c0 = CONCAT44(local_c0._4_4_,uVar22);
  FUN_7103776640(&local_d0,(long)puVar28,(byte ****)"set_btn_01_back",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  uVar26 = local_c8;
  FUN_7103778300(0x3f800000,local_c8,(long)&uStack_b8);
  plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      local_230 = (undefined **)&DAT_00000008;
      pppplVar12 = (long ****)&local_230;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8)
         , plVar7 != (long *)0x0)) goto LAB_7101a2418c;
    }
    plVar7 = (long *)0x0;
  }
LAB_7101a2418c:
  *plVar7 = 0;
  lVar23 = *(long *)(uVar26 + 8);
  if (lVar23 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar23 + 0x60) != 0) {
      lVar18 = FUN_7103796f20(*(long *)(lVar23 + 0x60),*(long *)(lVar23 + 0x18) + 0xb0);
    }
  }
  *plVar7 = lVar18;
  uVar26 = *(ulong *)(param_1 + 0xe28);
  *(long **)(param_1 + 0xe28) = plVar7;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  plVar7 = (long *)**(long **)(param_1 + 0xe28);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x328))(plVar7,0);
    plVar7 = (long *)**(undefined8 **)(param_1 + 0xe28);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x218))(plVar7,0);
      (**(code **)(*plVar7 + 0x410))(plVar7);
      (**(code **)(*plVar7 + 0x3f0))(plVar7,0);
      iVar4 = (**(code **)(*plVar7 + 0x140))(plVar7);
      if ((iVar4 != 6) && (iVar4 = (**(code **)(*plVar7 + 0x140))(plVar7), iVar4 != 1)) {
        (**(code **)(*plVar7 + 0x400))(plVar7);
      }
      uVar26 = (**(code **)(*plVar7 + 0x158))(plVar7);
      if ((uVar26 & 1) == 0) {
        (**(code **)(*plVar7 + 0x370))(plVar7);
      }
    }
  }
  if (*(char *)(param_1 + 0xf80) == '\0') {
    FUN_7103776910(&local_e0,(long)&local_d0,(long ****)"set_txt_back_01",pppplVar12,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_7103776910(&local_f0,(long)&local_d0,(long ****)"set_txt_back_00",pppplVar12,param_4,param_5
                   ,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x170) == 1) {
      FUN_710377a120((long)&local_e0,"mel_return_02",pppplVar12,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_710377a120((long)&local_f0,"mel_over_return_02",pppplVar12,param_4,param_5,param_6,param_7
                     ,param_8);
      if (*(char *)(param_1 + 0xf82) == '\0') {
        pcVar11 = (char *)&local_228;
        local_228 = 0x726168635f6c656d;
        local_220 = 0x7463656c65735f61;
        local_218 = 27999;
        uStack_216 = 0x625f65656c65;
        uStack_210 = 0x6c61;
        uStack_20e = 0x6f6c;
        uStack_20c = 0x6e6f;
        local_20a = 0x725f;
        local_200 = 0x6d7269;
        local_208 = 0x666e6f635f656c75;
        uVar24 = 0x6d;
        pbVar19 = (byte *)((long)&local_228 + 1);
        uVar22 = uVar30;
        do {
          uVar22 = uVar22 * 0x89 ^ uVar24;
          uVar24 = (uint)*pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (uVar24 != 0);
        local_230 = (undefined **)CONCAT44(0x2b,uVar22);
        pppuVar8 = (undefined ***)(*(long *)(param_1 + 0x1d8) + 0x10);
        goto LAB_7101a24420;
      }
    }
    else {
      FUN_710377a120((long)&local_e0,"mel_return_00",pppplVar12,param_4,param_5,param_6,param_7,
                     param_8);
      pcVar11 = "mel_over_return_00";
      pppuVar8 = &local_f0;
LAB_7101a24420:
      FUN_710377a120((long)pppuVar8,pcVar11,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    }
    uVar26 = local_e8;
    local_f0 = &PTR_FUN_710523d9a8;
    local_e8 = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    uVar26 = local_d8;
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8 = 0;
    if (uVar26 != 0) goto LAB_7101a24448;
  }
  else {
    FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_btn_02_back",pppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    uVar26 = local_228;
    FUN_7103778300(0x3f800000,local_228,(long)&uStack_b8);
    local_230 = &PTR_FUN_710523d988;
    local_228 = 0;
    if (uVar26 != 0) {
      uVar6 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
LAB_7101a24448:
      FUN_710392eb40(uVar26);
    }
  }
  FUN_7103776640(&local_e0,(long)puVar28,(byte ****)"set_btn_02_title",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  uVar26 = local_d8;
  FUN_7103778300(0x3f800000,local_d8,0x71044544f4);
  plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (undefined **)((ulong)local_f0 & 0xffffffff00000000);
      local_230 = (undefined **)&DAT_00000008;
      pppplVar12 = (long ****)&local_230;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8)
         , plVar7 != (long *)0x0)) goto LAB_7101a244d4;
    }
    plVar7 = (long *)0x0;
  }
LAB_7101a244d4:
  *plVar7 = 0;
  lVar23 = *(long *)(uVar26 + 8);
  if (lVar23 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar23 + 0x60) != 0) {
      lVar18 = FUN_7103796f20(*(long *)(lVar23 + 0x60),*(long *)(lVar23 + 0x18) + 0xb0);
    }
  }
  *plVar7 = lVar18;
  uVar6 = *(ulong *)(param_1 + 0xe48);
  *(long **)(param_1 + 0xe48) = plVar7;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_230,(long)&local_e0,(long ****)"set_txt_title_00",pppplVar12,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar6 = local_228;
  puVar1 = (undefined8 *)(param_1 + 0xe50);
  if (puVar1 != &local_230) {
    local_228 = 0;
    uVar9 = *(ulong *)(param_1 + 0xe58);
    *(ulong *)(param_1 + 0xe58) = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_228;
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_230,(long)&local_e0,(long ****)"set_txt_onoff",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_228;
  if ((undefined8 *)(param_1 + 0xe60) != &local_230) {
    local_228 = 0;
    uVar9 = *(ulong *)(param_1 + 0xe68);
    *(ulong *)(param_1 + 0xe68) = uVar6;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar6 = local_228;
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_f0,(long)puVar28,(long ****)"set_txt_title_00",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  plVar7 = *(long **)(*(long *)(param_1 + 0xe58) + 0x10);
  if (plVar7 != (long *)0x0) {
    pppplVar12 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
    FUN_71037a2270(plVar7,(ushort *)&local_230,0,0);
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0xe68) + 0x10);
  if (plVar7 != (long *)0x0) {
    pppplVar12 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
    FUN_71037a2270(plVar7,(ushort *)&local_230,0,0);
  }
  if (*(long **)(local_e8 + 0x10) != (long *)0x0) {
    pppplVar12 = (long ****)0x0;
    param_4 = (byte ****)0x0;
    local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(local_e8 + 0x10),(ushort *)&local_230,0,0);
  }
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 0:
  case 3:
  case 4:
    if (*(char *)(param_1 + 0xf82) == '\0') {
      FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
      pcVar2 = "mel_chara_select_suddendeath_normal";
      if (*(int *)(param_1 + 0x16c) != 4) {
        pcVar2 = "mel_chara_select_melee_normal";
      }
      pcVar11 = "mel_chara_select_various_normal";
      if (*(int *)(param_1 + 0x16c) != 3) {
        pcVar11 = pcVar2;
      }
      goto LAB_7101a248e4;
    }
    FUN_7103778300(0x3f800000,*plVar5,0x71043be158);
    pcVar11 = "mel_chara_select_suddendeath_normal";
    if (*(int *)(param_1 + 0x16c) != 4) {
      pcVar11 = "mel_chara_select_melee_normal";
    }
    pcVar2 = "mel_chara_select_various_normal";
    if (*(int *)(param_1 + 0x16c) != 3) {
      pcVar2 = pcVar11;
    }
    FUN_710377a120((long)puVar1,pcVar2,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    local_64 = 1;
    uVar17 = 1;
    goto LAB_7101a248f4;
  default:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    if (*(long **)(local_e8 + 0x10) != (long *)0x0) {
      pppplVar12 = (long ****)0x0;
      param_4 = (byte ****)0x0;
      local_230 = (undefined **)((ulong)local_230 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_e8 + 0x10),(ushort *)&local_230,0,0);
    }
    goto LAB_7101a24ac4;
  case 5:
    FUN_7103778300(0x3f800000,*plVar5,0x710437cc00);
    goto LAB_7101a248ec;
  case 6:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_challengeboard";
    break;
  case 7:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_campaign";
    break;
  case 8:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_setorg";
    break;
  case 9:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_standard";
    break;
  case 10:
    lVar23 = *plVar5;
    if (*(char *)(param_1 + 0xf82) == '\0') goto LAB_7101a25c98;
    FUN_7103778300(0x3f800000,lVar23,0x71043be158);
    goto LAB_7101a25c84;
  case 0xb:
    FUN_7103778300(0x3f800000,*plVar5,0x7104454478);
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_training";
    break;
  case 0xc:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_challenger";
    break;
  case 0xd:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_homerun_single";
    break;
  case 0xe:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_homerun_coop";
    break;
  case 0xf:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_homerun_everyone";
    break;
  case 0x10:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_stgcreate";
    break;
  case 0x11:
    lVar23 = *plVar5;
    goto LAB_7101a24a40;
  case 0x12:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_vr";
LAB_7101a248e4:
    FUN_710377a120((long)&local_f0,pcVar11,pppplVar12,param_4,param_5,param_6,param_7,param_8);
LAB_7101a248ec:
    local_64 = 0;
    uVar17 = 0;
LAB_7101a248f4:
    local_278 = CONCAT44(uVar17,1);
    goto LAB_7101a24acc;
  case 0x13:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_online_room";
    break;
  case 0x14:
    FUN_7103778300(0x3f800000,*plVar5,0x710444302e);
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    FUN_710377a120((long)&local_f0,"mel_chara_select_anyone_single",pppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x16a) != '\0') {
      lVar23 = *plVar5;
      pcVar11 = "title_off";
      goto LAB_7101a25ca4;
    }
    goto LAB_7101a24ac4;
  case 0x15:
    FUN_7103778300(0x3f800000,*plVar5,0x710435af96);
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_anyone_double";
    break;
  case 0x16:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_online_tournament";
    break;
  case 0x17:
    FUN_7103778300(0x3f800000,*plVar5,0x71042d5ca1);
    lVar23 = *plVar5;
    pcVar11 = "scene_title_txt_00";
    goto LAB_7101a25ca4;
  case 0x18:
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_convention";
    break;
  case 0x19:
    FUN_7103778300(0x3f800000,*plVar5,0x71042c4803);
    lVar23 = *plVar5;
LAB_7101a24a40:
    FUN_7103778300(0x3f800000,lVar23,0x7104443046);
    pcVar11 = "mel_chara_select_share";
    break;
  case 0x1a:
    FUN_7103778300(0x3f800000,*plVar5,0x71042c4803);
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_replay";
    break;
  case 0x1b:
    FUN_7103778300(0x3f800000,*plVar5,0x7104348a98);
    FUN_7103778300(0x3f800000,*plVar5,0x7104443046);
    pcVar11 = "mel_chara_select_smaknowledge";
    break;
  case 0x1c:
    FUN_7103778300(0x3f800000,*plVar5,0x710439ce66);
    FUN_7103778300(0x3f800000,*plVar5,0x71043be158);
    FUN_7103778300(0x3f800000,uVar26,0x71042f7c87);
    FUN_710377a120((long)puVar1,"mel_chara_select_opt_fighter_hc",pppplVar12,param_4,param_5,param_6
                   ,param_7,param_8);
LAB_7101a25c84:
    local_278 = 0;
    local_64 = 1;
    goto LAB_7101a24acc;
  case 0x1d:
    lVar23 = *plVar5;
LAB_7101a25c98:
    pcVar11 = "scene_title_txt_00";
LAB_7101a25ca4:
    FUN_7103778300(0x3f800000,lVar23,(long)pcVar11);
    goto LAB_7101a24ac4;
  }
  FUN_710377a120((long)&local_f0,pcVar11,pppplVar12,param_4,param_5,param_6,param_7,param_8);
LAB_7101a24ac4:
  local_64 = 0;
  local_278 = 0;
LAB_7101a24acc:
  if (*(int *)(param_1 + 0x16c) == 6) {
    FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_lct_controller_entry",pppplVar12,param_4
                   ,param_5,param_6,param_7,param_8);
    uVar26 = local_228;
    FUN_7103778300(0x3f800000,local_228,0x71043ae0c3);
    FUN_7103778300(0x3f800000,uVar26,
                   (long)(&PTR_s_controller_joy_dual_71050a8880)[*(int *)(param_1 + 0xd88)]);
    FUN_7103776910(&local_100,(long)&local_230,(long ****)"set_txt_btn",pppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_100,
                   (&PTR_s_mel_chara_select_help_press_any__71050a8890)[*(int *)(param_1 + 0xd88)],
                   pppplVar12,param_4,param_5,param_6,param_7,param_8);
    uVar6 = local_f8;
    local_100 = &PTR_FUN_710523d9a8;
    local_f8 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    local_230 = &PTR_FUN_710523d988;
    local_228 = 0;
    if (uVar26 != 0) {
      uVar6 = *(ulong *)(uVar26 + 0x18);
      *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar26 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar26);
    }
  }
  FUN_7103776640(&local_100,(long)puVar28,(byte ****)"set_btn_ready",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_230,(long)&local_100,(long ****)"set_pic_ready",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar13 = (long *********)0x0;
  plVar7 = FUN_7103240d30(*(long **)(param_1 + 0x148),0x7104308504,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  uVar26 = local_228;
  FUN_7103778b80(local_228,(long)plVar7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_7103776910(&local_230,(long)&local_100,(long ****)"set_pic_ready_in_00",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  ppppppppplVar13 = (long *********)0x0;
  plVar7 = FUN_7103240d30(*(long **)(param_1 + 0x148),0x7104308504,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  uVar26 = local_228;
  FUN_7103778b80(local_228,(long)plVar7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_7103776910(&local_230,(long)&local_100,(long ****)"set_pic_ready_in_01",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  ppppppppplVar13 = (long *********)0x0;
  plVar7 = FUN_7103240d30(*(long **)(param_1 + 0x148),0x7104308504,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  uVar26 = local_228;
  FUN_7103778b80(local_228,(long)plVar7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_7103776910(&local_230,(long)&local_100,(long ****)"set_pic_ready_out_00",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  ppppppppplVar13 = (long *********)0x0;
  plVar7 = FUN_7103240d30(*(long **)(param_1 + 0x148),0x7104308504,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  uVar26 = local_228;
  FUN_7103778b80(local_228,(long)plVar7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_7103776910(&local_230,(long)&local_100,(long ****)"set_pic_ready_line_00",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  ppppppppplVar13 = (long *********)0x0;
  plVar7 = FUN_7103240d30(*(long **)(param_1 + 0x148),0x7104308504,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  uVar26 = local_228;
  FUN_7103778b80(local_228,(long)plVar7,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  uVar6 = local_f8;
  FUN_7103778300(0x3f800000,local_f8,0x7104328277);
  FUN_71037780e0(&local_230,(long)&local_100,(long ****)&DAT_7104421055,ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  uVar26 = local_228;
  if ((undefined8 *)(param_1 + 0xdf8) != &local_230) {
    local_228 = 0;
    uVar9 = *(ulong *)(param_1 + 0xe00);
    *(ulong *)(param_1 + 0xe00) = uVar26;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d9e8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_710377b010(0,param_1 + 0xdf8);
  FUN_71037780e0(&local_230,(long)&local_100,(long ****)&DAT_710428ff7d,ppppppppplVar13,param_4,
                 param_5,param_6,param_7,param_8);
  uVar26 = local_228;
  if ((undefined8 *)(param_1 + 0xe08) != &local_230) {
    local_228 = 0;
    uVar9 = *(ulong *)(param_1 + 0xe10);
    *(ulong *)(param_1 + 0xe10) = uVar26;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d9e8;
  local_228 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_710377b140(param_1 + 0xe08);
  plVar7 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_240 = (long ***)((ulong)local_240 & 0xffffffff00000000);
      local_230 = (undefined **)&DAT_00000008;
      ppppppppplVar13 = (long *********)&local_230;
      uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
      if (((uVar26 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7101a24e2c;
    }
    plVar7 = (long *)0x0;
  }
LAB_7101a24e2c:
  *plVar7 = 0;
  lVar23 = *(long *)(uVar6 + 8);
  if (lVar23 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = 0;
    if (*(long *)(lVar23 + 0x60) != 0) {
      lVar18 = FUN_7103796f20(*(long *)(lVar23 + 0x60),*(long *)(lVar23 + 0x18) + 0xb0);
    }
  }
  *plVar7 = lVar18;
  uVar26 = *(ulong *)(param_1 + 0xe38);
  *(long **)(param_1 + 0xe38) = plVar7;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  fVar31 = (float)FUN_71033112b0(0x43340000,*(long *)(DAT_710532f8c0 + 8),0xf0b7028bc);
  local_68 = (int)fVar31;
  FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_parts_balloon_rule",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  piVar14 = &local_68;
  FUN_71032d6ce0(*(long *)(param_1 + 0x1d8),(long)&local_230,piVar14,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  local_208 = CONCAT44(local_208._4_4_,0x656c75);
  local_228 = 0x726168635f6c656d;
  local_220 = 0x7463656c65735f61;
  local_218 = 27999;
  uStack_216 = 0x625f65656c65;
  uStack_210 = 0x6c61;
  uStack_20e = 0x6f6c;
  uStack_20c = 0x6e6f;
  local_20a = 0x725f;
  uVar24 = 0x6d;
  pbVar19 = (byte *)((long)&local_228 + 1);
  uVar22 = uVar30;
  do {
    uVar22 = uVar22 * 0x89 ^ uVar24;
    uVar24 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar24 != 0);
  local_230 = (undefined **)CONCAT44(0x23,uVar22);
  FUN_710377a120(*(long *)(param_1 + 0x1d8) + 0x10,(char *)&local_228,piVar14,param_4,param_5,
                 param_6,param_7,param_8);
  if ((*(int *)(param_1 + 0x170) == 1) && (*(char *)(param_1 + 0xf82) == '\0')) {
    local_228 = 0x726168635f6c656d;
    local_208 = 0x666e6f635f656c75;
    uVar24 = 0x6d;
    local_200 = 0x6d7269;
    local_220 = 0x7463656c65735f61;
    local_218 = 27999;
    uStack_216 = 0x625f65656c65;
    uStack_210 = 0x6c61;
    uStack_20e = 0x6f6c;
    uStack_20c = 0x6e6f;
    local_20a = 0x725f;
    pbVar19 = (byte *)((long)&local_228 + 1);
    uVar22 = uVar30;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar24;
      uVar24 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar24 != 0);
    local_230 = (undefined **)CONCAT44(0x2b,uVar22);
    FUN_710377a120(*(long *)(param_1 + 0x1d8) + 0x10,(char *)&local_228,piVar14,param_4,param_5,
                   param_6,param_7,param_8);
  }
  FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_parts_balloon_plus",piVar14,param_4,
                 param_5,param_6,param_7,param_8);
  piVar14 = &local_68;
  FUN_71032d6ce0(*(long *)(param_1 + 0x1e8),(long)&local_230,piVar14,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_parts_balloon_minus",piVar14,param_4,
                 param_5,param_6,param_7,param_8);
  piVar14 = &local_68;
  FUN_71032d6ce0(*(long *)(param_1 + 0x1f8),(long)&local_230,piVar14,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  FUN_7103776640(&local_230,(long)puVar28,(byte ****)"set_parts_balloon_shuffl",piVar14,param_4,
                 param_5,param_6,param_7,param_8);
  piVar14 = &local_68;
  FUN_71032d6ce0(*(long *)(param_1 + 0x208),(long)&local_230,piVar14,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar26 = local_228;
  local_230 = &PTR_FUN_710523d988;
  local_228 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  local_220 = 0x7463656c65735f61;
  local_228 = 0x726168635f6c656d;
  local_208 = 0x756c705f656d6172;
  uVar24 = 0x6d;
  local_200._0_2_ = 0x73;
  local_218 = 27999;
  uStack_216 = 0x625f65656c65;
  uStack_210 = 0x6c61;
  uStack_20e = 0x6f6c;
  uStack_20c = 0x6e6f;
  local_20a = 0x665f;
  pbVar19 = (byte *)((long)&local_228 + 1);
  uVar22 = uVar30;
  do {
    uVar22 = uVar22 * 0x89 ^ uVar24;
    uVar24 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar24 != 0);
  local_230 = (undefined **)CONCAT44(0x29,uVar22);
  FUN_710377a120(*(long *)(param_1 + 0x1e8) + 0x10,(char *)&local_228,piVar14,param_4,param_5,
                 param_6,param_7,param_8);
  local_220 = 0x7463656c65735f61;
  local_228 = 0x726168635f6c656d;
  local_208 = 0x6e696d5f656d6172;
  uVar24 = 0x6d;
  local_218 = 27999;
  uStack_216 = 0x625f65656c65;
  uStack_210 = 0x6c61;
  uStack_20e = 0x6f6c;
  uStack_20c = 0x6e6f;
  local_20a = 0x665f;
  local_200 = CONCAT13(local_200._3_1_,0x7375);
  pbVar19 = (byte *)((long)&local_228 + 1);
  uVar22 = uVar30;
  do {
    uVar22 = uVar22 * 0x89 ^ uVar24;
    uVar24 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar24 != 0);
  local_230 = (undefined **)CONCAT44(0x2a,uVar22);
  FUN_710377a120(*(long *)(param_1 + 0x1f8) + 0x10,(char *)&local_228,piVar14,param_4,param_5,
                 param_6,param_7,param_8);
  local_220 = 0x7463656c65735f61;
  local_20a = 0x735f;
  local_228 = 0x726168635f6c656d;
  uVar22 = 0x6d;
  local_218 = 27999;
  uStack_216 = 0x625f65656c65;
  uStack_210 = 0x6c61;
  uStack_20e = 0x6f6c;
  uStack_20c = 0x6e6f;
  local_208 = CONCAT17(local_208._7_1_,0x656c66667568);
  pbVar19 = (byte *)((long)&local_228 + 1);
  do {
    uVar30 = uVar30 * 0x89 ^ uVar22;
    uVar22 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar22 != 0);
  local_230 = (undefined **)CONCAT44(0x26,uVar30);
  FUN_710377a120(*(long *)(param_1 + 0x208) + 0x10,(char *)&local_228,piVar14,param_4,param_5,
                 param_6,param_7,param_8);
  local_230 = (undefined **)0x0;
  local_228 = 0x101;
  local_220 = CONCAT17(local_220._7_1_,0x1000100000001);
  local_218 = 0;
  uStack_216 = 0x41f000000000;
  uStack_210 = 0;
  uStack_20e = 0;
  local_1e0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_110 = 0;
  FUN_710337df20((long)&local_230);
  uVar15 = local_228;
  plVar7 = (long *)(param_1 + 0xe18);
  local_230 = (undefined **)CONCAT44(3,(undefined4)local_230);
  ppppbVar16 = (byte ****)&local_230;
  local_228._0_2_ = (ushort)(byte)local_228;
  uVar3 = local_228;
  local_228._5_3_ = SUB83(uVar15,5);
  local_228._0_5_ = CONCAT14(1,(int)uVar3);
  uStack_210 = 8;
  uStack_20e = 0;
  FUN_7103770b30(plVar7,puVar28,(long ****)"selector_0",ppppbVar16,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0xf80) == '\0') {
    pcVar11 = "set_btn_01_back";
  }
  else {
    pcVar11 = "set_btn_02_back";
  }
  FUN_71037717d0(plVar7,0,pcVar11,ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar7,2,"set_btn_03_rule",ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar7,6,"set_btn_ready",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar7 + 0x1b8);
  if (lVar23 != 0) {
    lVar18 = *plVar7 + 0x1b8;
    lVar25 = lVar18;
    lVar27 = lVar23;
    do {
      if (5 < *(int *)(lVar27 + 0x20)) {
        lVar25 = lVar27;
      }
      lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 6) * 8);
    } while (lVar27 != 0);
    if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) < 7)) &&
       (plVar29 = *(long **)(lVar25 + 0x28), plVar29 != (long *)0x0)) {
      (**(code **)(*plVar29 + 0x1f8))(plVar29,0);
      (**(code **)(*plVar29 + 0x388))(plVar29,1,0);
      lVar18 = *plVar7 + 0x1b8;
      lVar23 = *(long *)(*plVar7 + 0x1b8);
    }
    lVar25 = lVar18;
    if (lVar23 != 0) {
      do {
        if (1 < *(int *)(lVar23 + 0x20)) {
          lVar25 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
      } while (lVar23 != 0);
      if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) < 3)) &&
         (plVar29 = *(long **)(lVar25 + 0x28), plVar29 != (long *)0x0)) {
        (**(code **)(*plVar29 + 0x1f8))(plVar29,local_278 & 0xffffffff);
        (**(code **)(*plVar29 + 0x388))(plVar29,(uint)local_278 ^ 1,0);
      }
    }
  }
  FUN_71037717d0(plVar7,1,"set_btn_02_title",ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar7,3,"set_btn_04",ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar7,4,"set_btn_05",ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar7,5,"set_btn_06_shuffle",ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_7103771d60(&local_240,*plVar7,(long ****)0x5,ppppbVar16,param_5,param_6,param_7,param_8);
  plVar29 = local_238;
  local_238 = (long *)*local_238;
  if (local_238 != (long *)0x0) {
    (**(code **)(*local_238 + 0x268))(local_238,1,0);
  }
  local_240 = (long ***)&PTR_FUN_710523d9c8;
  local_238 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103771d60(&local_240,*plVar7,(long ****)0x3,ppppbVar16,param_5,param_6,param_7,param_8);
  plVar29 = local_238;
  plVar10 = (long *)*local_238;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x268))(plVar10,1,0);
  }
  local_240 = (long ***)&PTR_FUN_710523d9c8;
  local_238 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103771d60(&local_240,*plVar7,(long ****)&DAT_00000004,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  plVar29 = local_238;
  plVar10 = (long *)*local_238;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x268))(plVar10,1,0);
  }
  local_240 = (long ***)&PTR_FUN_710523d9c8;
  local_238 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar29);
  }
  uVar30 = local_64;
  lVar23 = *(long *)(*plVar7 + 0x1b8);
  if (lVar23 != 0) {
    lVar18 = *plVar7 + 0x1b8;
    lVar25 = lVar18;
    lVar27 = lVar23;
    do {
      if (0 < *(int *)(lVar27 + 0x20)) {
        lVar25 = lVar27;
      }
      lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 1) * 8);
    } while (lVar27 != 0);
    if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) < 2)) &&
       (plVar29 = *(long **)(lVar25 + 0x28), plVar29 != (long *)0x0)) {
      (**(code **)(*plVar29 + 0x1f8))(plVar29,local_64);
      (**(code **)(*plVar29 + 0x388))(plVar29,uVar30 ^ 1,0);
      lVar18 = *plVar7 + 0x1b8;
      lVar23 = *(long *)(*plVar7 + 0x1b8);
    }
    lVar25 = lVar18;
    if (lVar23 != 0) {
      do {
        if (4 < *(int *)(lVar23 + 0x20)) {
          lVar25 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 5) * 8);
      } while (lVar23 != 0);
      if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) < 6)) &&
         (plVar29 = *(long **)(lVar25 + 0x28), plVar29 != (long *)0x0)) {
        (**(code **)(*plVar29 + 0x1f8))(plVar29,local_278._4_4_);
        (**(code **)(*plVar29 + 0x388))(plVar29,local_278._4_4_ ^ 1,0);
      }
    }
  }
  lVar23 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar23 >> 3) < 4) {
    local_240 = (long ***)0x0;
  }
  else {
    local_240 = *(long ****)(lVar23 + 0x18);
  }
  FUN_7103772070(*plVar7,0,&local_240,ppppbVar16,param_5,param_6,param_7,param_8);
  local_240 = (long ***)0x106a2070e6;
  FUN_7103772070(*plVar7,1,&local_240,ppppbVar16,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar23 >> 3) < 4) {
    local_240 = (long ***)0x0;
  }
  else {
    local_240 = *(long ****)(lVar23 + 0x18);
  }
  FUN_7103772070(*(long *)(param_1 + 0xe18),2,&local_240,ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  local_240 = (long ***)0x175c743153;
  FUN_7103772070(*(long *)(param_1 + 0xe18),3,&local_240,ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  local_240 = (long ***)0x175c743153;
  FUN_7103772070(*(long *)(param_1 + 0xe18),4,&local_240,ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  local_240 = (long ***)0x151ca6c028;
  FUN_7103772070(*(long *)(param_1 + 0xe18),5,&local_240,ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  local_240 = (long ***)0x7fc420ce8;
  pppplVar12 = &local_240;
  FUN_7103772070(*(long *)(param_1 + 0xe18),6,pppplVar12,ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  fVar31 = (float)FUN_71033112b0(0x43340000,*(long *)(DAT_710532f8c0 + 8),0x1497091469);
  FUN_71037780e0(&local_250,(long)puVar28,(long ****)"controller_in",pppplVar12,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  pppplVar12 = (long ****)(ulong)(uint)(int)fVar31;
  FUN_7103764e60((long *)(param_1 + 0xe88),(undefined1 *)&local_250,pppplVar12,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  uVar26 = local_248;
  local_250 = &PTR_FUN_710523d9e8;
  local_248 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  FUN_71037780e0(&local_260,(long)puVar28,(long ****)"controller_out",pppplVar12,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  uVar15 = 0;
  FUN_7103764e60((long *)(param_1 + 0xe88),(undefined1 *)&local_260,(long ****)0x0,ppppbVar16,
                 param_5,param_6,param_7,param_8);
  uVar26 = local_258;
  local_260 = &PTR_FUN_710523d9e8;
  local_258 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  iVar4 = *(int *)(param_1 + 0x16c);
  if (iVar4 == 0x16) {
    FUN_7103778300(0x3f800000,*plVar5,0x710438c35e);
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_0",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar7 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar7 + 0x18);
      *(undefined ***)((long)plVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar7 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar7);
    }
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_1",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar7 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar7 + 0x18);
      *(undefined ***)((long)plVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar7 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar7);
    }
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_2",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar7 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar7 + 0x18);
      *(undefined ***)((long)plVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar7 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar7);
    }
    FUN_7103776910(&local_240,(long)puVar28,(long ****)"set_parts_inout_00",uVar15,ppppbVar16,
                   param_5,param_6,param_7,param_8);
    plVar7 = local_238;
    lVar23 = *local_238;
    if (lVar23 != 0) {
      *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe;
    }
    local_240 = (long ***)&PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar7);
    }
    iVar4 = *(int *)(param_1 + 0x16c);
  }
  if (iVar4 == 0xf) {
    FUN_7103778300(0x3f800000,*plVar5,0x710438c35e);
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_0",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar5 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar5 + 0x18);
      *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar5 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_1",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar5 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar5 + 0x18);
      *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar5 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7103776640(&local_240,(long)puVar28,(byte ****)"set_parts_score_2",uVar15,ppppbVar16,param_5
                   ,param_6,param_7,param_8);
    plVar5 = local_238;
    FUN_7103778300(0x3f800000,(long)local_238,0x7104339cd6);
    local_240 = (long ***)&PTR_FUN_710523d988;
    local_238 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      uVar26 = *(ulong *)((long)plVar5 + 0x18);
      *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar5 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7103776910(&local_240,(long)puVar28,(long ****)"set_parts_inout_00",uVar15,ppppbVar16,
                   param_5,param_6,param_7,param_8);
    plVar5 = local_238;
    lVar23 = *local_238;
    if (lVar23 != 0) {
      *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe;
    }
    local_240 = (long ***)&PTR_FUN_710523d9a8;
    local_238 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
  }
  if (alStack_140 == local_120) {
    pcVar20 = *(code **)(*local_120 + 0x20);
LAB_7101a25ad0:
    (*pcVar20)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar20 = *(code **)(*local_120 + 0x28);
    goto LAB_7101a25ad0;
  }
  if (alStack_170 == local_150) {
    pcVar20 = *(code **)(*local_150 + 0x20);
LAB_7101a25b00:
    (*pcVar20)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar20 = *(code **)(*local_150 + 0x28);
    goto LAB_7101a25b00;
  }
  if (alStack_1a0 == local_180) {
    pcVar20 = *(code **)(*local_180 + 0x20);
LAB_7101a25b30:
    (*pcVar20)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar20 = *(code **)(*local_180 + 0x28);
    goto LAB_7101a25b30;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar20 = *(code **)(*local_1b0 + 0x20);
LAB_7101a25b60:
    (*pcVar20)();
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_1b0 + 0x28);
    goto LAB_7101a25b60;
  }
  if ((long *)&local_200 == local_1e0) {
    pcVar20 = *(code **)(*local_1e0 + 0x20);
  }
  else {
    if (local_1e0 == (long *)0x0) goto LAB_7101a25b94;
    pcVar20 = *(code **)(*local_1e0 + 0x28);
  }
  (*pcVar20)();
LAB_7101a25b94:
  uVar26 = local_f8;
  local_100 = &PTR_FUN_710523d988;
  local_f8 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  uVar26 = local_e8;
  local_f0 = &PTR_FUN_710523d9a8;
  local_e8 = 0;
  if (uVar26 != 0) {
    FUN_710392eb40(uVar26);
  }
  uVar26 = local_d8;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  uVar26 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar26 != 0) {
    uVar6 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar26);
  }
  return;
}

