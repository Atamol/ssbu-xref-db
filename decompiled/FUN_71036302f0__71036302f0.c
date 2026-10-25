// addr:      71036302f0
// offset:    0x36302f0
// name:      FUN_71036302f0
// mangled:   
// signature: undefined __cdecl FUN_71036302f0(long param_1, ulong param_2, byte param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071036311c0) */
/* WARNING: Removing unreachable block (ram,0x007103631440) */
/* WARNING: Removing unreachable block (ram,0x0071036304a0) */
/* WARNING: Removing unreachable block (ram,0x0071036304c0) */
/* WARNING: Removing unreachable block (ram,0x0071036313ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71036302f0(long param_1,ulong param_2,byte param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte ****ppppbVar15;
  byte bVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  long lVar21;
  char *pcVar22;
  long lVar23;
  ulong *puVar24;
  void *__src;
  long lVar25;
  char *pcVar26;
  long ****pppplVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  long *local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long *local_f0;
  long local_e8;
  char *local_e0;
  long local_d8;
  long *local_d0;
  long local_c8;
  long ****local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  char *local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  ppppbVar15 = param_4;
  if (((DAT_7105338db8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338db8), iVar11 != 0)) {
    uRam00000071053382e5 = 0;
    DAT_71053382d8 = 0x16;
    _DAT_71053382e1 = 0x4e4941;
    DAT_71053382d9._0_7_ = 0x5f524f5252494d;
    DAT_71053382d9._7_1_ = 0x4d;
    DAT_71053382f8 = 0;
    DAT_7105338300 = (long ****)0x0;
    DAT_71053382e8 = 0;
    DAT_71053382f0 = 0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_71053382f0 = 0x21;
    DAT_71053382f8 = 0x1f;
    DAT_7105338300 = local_c0;
    builtin_strncpy((char *)((long)local_c0 + 0x17),"OR_CLEAR",8);
    local_c0[2] = (long ***)0x4f4c4f435f544345;
    *(char *)((long)local_c0 + 0x1f) = '\0';
    *local_c0 = (long ***)0x425f524f5252494d;
    local_c0[1] = (long ***)0x4646455f444e454c;
    DAT_7105338308 = 0;
    DAT_7105338310 = 0;
    DAT_7105338318 = (long ****)0x0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_7105338308 = 0x21;
    DAT_7105338310 = 0x1e;
    DAT_7105338318 = local_c0;
    builtin_strncpy((char *)((long)local_c0 + 0x16),"PTH_COPY",8);
    local_c0[2] = (long ***)0x545045445f544345;
    *(char *)((long)local_c0 + 0x1e) = '\0';
    *local_c0 = (long ***)0x425f524f5252494d;
    local_c0[1] = (long ***)0x4646455f444e454c;
    DAT_7105338320 = 0;
    DAT_7105338328 = 0;
    DAT_7105338330 = (long ****)0x0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x30;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x30,0x10,local_c0);
    DAT_7105338320 = 0x31;
    DAT_7105338328 = 0x23;
    DAT_7105338330 = local_c0;
    local_c0[2] = (long ***)0x545045445f544345;
    local_c0[3] = (long ***)0x455f59504f435f48;
    *local_c0 = (long ***)0x425f524f5252494d;
    local_c0[1] = (long ***)0x4646455f444e454c;
    *(char *)((long)local_c0 + 0x22) = 'H';
    *(undefined2 *)(local_c0 + 4) = 0x4749;
    *(char *)((long)local_c0 + 0x23) = '\0';
    DAT_7105338338 = 0;
    DAT_7105338340 = 0;
    DAT_7105338348 = (long ****)0x0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x30;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x30,0x10,local_c0);
    DAT_7105338338 = 0x31;
    DAT_7105338340 = 0x23;
    DAT_7105338348 = local_c0;
    local_c0[2] = (long ***)0x545045445f544345;
    local_c0[3] = (long ***)0x515f59504f435f48;
    *local_c0 = (long ***)0x425f524f5252494d;
    local_c0[1] = (long ***)0x4646455f444e454c;
    *(char *)((long)local_c0 + 0x22) = 'T';
    *(undefined2 *)(local_c0 + 4) = 0x4155;
    *(char *)((long)local_c0 + 0x23) = '\0';
    DAT_7105338350 = 0;
    DAT_7105338358 = 0;
    DAT_7105338360 = (long ****)0x0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_7105338350 = 0x21;
    DAT_7105338358 = 0x18;
    DAT_7105338360 = local_c0;
    *(char *)(local_c0 + 3) = '\0';
    local_c0[2] = (long ***)0x444e454c425f5443;
    *local_c0 = (long ***)0x505f524f5252494d;
    local_c0[1] = (long ***)0x41524645525f4552;
    DAT_7105338378._5_3_ = 0;
    DAT_7105338380 = 0;
    _DAT_7105338371 = 0x46455f444e454c;
    DAT_7105338378._0_1_ = 0x46;
    DAT_7105338368 = 0x26;
    DAT_7105338369._0_7_ = 0x5f524f5252494d;
    DAT_7105338369._7_1_ = 0x42;
    DAT_7105338388 = 0;
    DAT_7105338390 = (long ****)0x0;
    DAT_7105338378._1_4_ = 0x544345;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_7105338380 = 0x21;
    DAT_7105338388 = 0x19;
    DAT_7105338390 = local_c0;
    *(char *)(local_c0 + 3) = 'E';
    local_c0[2] = (long ***)0x4752454d5f544345;
    *(char *)((long)local_c0 + 0x19) = '\0';
    *local_c0 = (long ***)0x425f524f5252494d;
    local_c0[1] = (long ***)0x4646455f444e454c;
    DAT_7105338398 = 0;
    DAT_71053383a0 = 0;
    DAT_71053383a8 = (long ****)0x0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_7105338398 = 0x21;
    DAT_71053383a0 = 0x17;
    DAT_71053383a8 = local_c0;
    *(char *)((long)local_c0 + 0x17) = '\0';
    builtin_strncpy((char *)((long)local_c0 + 0xf),"_REFRACT",8);
    *local_c0 = (long ***)0x435f524f5252494d;
    local_c0[1] = (long ***)0x5f4552505f59504f;
    _DAT_71053383b1 = 0x5f524f5252494d;
    DAT_71053383b8._0_1_ = 0x50;
    DAT_71053383c0._4_4_ = 0;
    DAT_71053383b8._1_7_ = 0x524645525f4552;
    DAT_71053383c0._0_1_ = 0x41;
    DAT_71053383c0._1_2_ = 0x5443;
    DAT_71053383c8 = 0x1a;
    DAT_71053383b0 = 0x24;
    DAT_71053383e0 = 0x24;
    DAT_71053383f0._4_4_ = 0;
    DAT_71053383f8 = 0;
    DAT_71053383f0._1_2_ = 0x5241;
    uRam00000071053383d7 = 0;
    DAT_71053383d8 = 0;
    DAT_71053383d6 = 0;
    uRam00000071053383d1 = 0x5443454646;
    DAT_71053383c9._0_5_ = 0x4f5252494d;
    DAT_71053383c9._5_2_ = 0x5f52;
    DAT_71053383c9._7_1_ = 0x45;
    DAT_71053383c0._3_1_ = 0;
    DAT_7105338400 = 0;
    DAT_7105338408 = (long ****)0x0;
    _DAT_71053383e9 = 0x4e5f5443454646;
    DAT_71053383f0._0_1_ = 0x45;
    DAT_71053383e1._0_7_ = 0x5f524f5252494d;
    DAT_71053383e1._7_1_ = 0x45;
    DAT_71053383f0._3_1_ = 0;
    iVar11 = FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                            param_7,param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_88 = (undefined **)0x20;
      uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
      if ((uVar13 & 1) != 0) {
        FUN_710392e1f0(&local_c0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_c0);
    DAT_71053383f8 = 0x21;
    DAT_7105338400 = 0x18;
    DAT_7105338408 = local_c0;
    *(char *)(local_c0 + 3) = '\0';
    *local_c0 = (long ***)0x435f524f5252494d;
    local_c0[1] = (long ***)0x54534f505f59504f;
    local_c0[2] = (long ***)0x544341524645525f;
    DAT_7105338420._5_3_ = 0;
    DAT_7105338410 = 0x26;
    _DAT_7105338419 = 0x4645525f54534f;
    DAT_7105338420._0_1_ = 0x52;
    DAT_7105338411._0_7_ = 0x5f524f5252494d;
    DAT_7105338411._7_1_ = 0x50;
    DAT_7105338420._1_4_ = 0x544341;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338db8);
  }
  plVar6 = DAT_7105338f70;
  lVar5 = DAT_71053375a8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = &PTR_FUN_710522fe00;
  local_80 = 0;
  if ((param_2 & 1) == 0) {
    bVar7 = (param_3 & 1) == 0;
    uVar28 = 1;
    if (bVar7) {
      uVar28 = 2;
    }
    lVar21 = 1;
    if (bVar7) {
      lVar21 = 2;
    }
    bVar16 = param_3 ^ 1;
    bVar7 = false;
  }
  else {
    uVar28 = 0;
    lVar21 = 0;
    bVar16 = 0;
    param_3 = 0;
    bVar7 = true;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar28;
  pcVar22 = (char *)((ulong)&local_e0 | 1);
  lVar18 = lVar21 * 0x18;
  puVar24 = (ulong *)&DAT_71053382d8;
  bVar16 = bVar16 & 1;
  bVar2 = param_3 & 1;
  do {
    local_98 = 0;
    local_90 = (char *)0x0;
    local_a0 = 0;
    if ((*puVar24 & 1) == 0) {
      local_98 = puVar24[1];
      local_90 = (char *)puVar24[2];
      local_a0 = *puVar24;
    }
    else {
      uVar13 = puVar24[1];
      if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = (void *)puVar24[2];
      if (uVar13 < 0x17) {
        local_a0 = (ulong)(byte)((int)uVar13 << 1);
        pcVar26 = (char *)((ulong)&local_a0 | 1);
        if (uVar13 != 0) goto LAB_710363094c;
      }
      else {
        pppplVar27 = (long ****)(uVar13 + 0x10 & 0xfffffffffffffff0);
        iVar11 = FUN_710392e1f0(&local_e0,0x10,pppplVar27,ppppbVar15,param_5,param_6,param_7,param_8
                               );
        if (((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_c0 = pppplVar27,
           uVar12 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0),
           (uVar12 & 1) != 0)) {
          FUN_710392e1f0(&local_e0,0x10,pppplVar27,ppppbVar15,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar27,0x10,local_e0);
        local_a0 = (ulong)pppplVar27 | 1;
        local_90 = local_e0;
        pcVar26 = local_e0;
        local_98 = uVar13;
LAB_710363094c:
        memcpy(pcVar26,__src,uVar13);
      }
      pcVar26[uVar13] = '\0';
    }
    uVar13 = FUN_7103553740(lVar5,(byte *)&local_a0,(long)&local_88);
    pcVar26 = local_90;
    if (((uVar13 & 1) != 0) && (lVar25 = *(long *)(local_80 + 0x18), lVar25 != 0)) {
      local_d8 = 0;
      local_e0 = (char *)0x22;
      builtin_strncpy(pcVar22,"WIIFIT_RTP_MIRROR",0x11);
      local_d0 = (long *)0x0;
      FUN_71038566c0(&local_c0,lVar25,(byte *)&local_e0);
      local_f8 = 0;
      local_100 = 0x1e;
      builtin_strncpy((char *)((ulong)&local_100 | 1),"MAIN_RTP_MIRROR",0xf);
      local_f0 = (long *)0x0;
      FUN_71038566c0(&local_e0,lVar25,(byte *)&local_100);
      local_118 = 0;
      local_120 = 0x1e;
      builtin_strncpy((char *)((ulong)&local_120 | 1),"HALF_RTP_MIRROR",0xf);
      local_110 = (long *)0x0;
      FUN_71038566c0(&local_100,lVar25,(byte *)&local_120);
      uStack_130 = 0;
      local_138 = 0x1e;
      builtin_strncpy((char *)((ulong)&local_138 | 1),"QUAT_RTP_MIRROR",0xf);
      local_128 = 0;
      FUN_71038566c0(&local_120,lVar25,(byte *)&local_138);
      if ((local_b0 == (long *)0x0) || (*local_b0 != local_a8)) {
LAB_7103630abc:
        lVar17 = 0;
      }
      else {
        if (((ulong)param_4 & 1) == 0) {
          *(undefined1 *)(local_b8 + 0x60) = 0;
          goto LAB_7103630abc;
        }
        bVar7 = false;
        *(undefined1 *)(local_b8 + 0x60) = 1;
        lVar17 = local_b8;
      }
      bVar10 = false;
      if (local_d0 != (long *)0x0) {
        bVar10 = *local_d0 == local_c8;
      }
      bVar8 = false;
      if (local_f0 != (long *)0x0) {
        bVar8 = *local_f0 == local_e8;
      }
      bVar9 = false;
      if (local_110 != (long *)0x0) {
        bVar9 = *local_110 == local_108;
      }
      if (bVar10) {
        lVar23 = local_d8;
        if (!bVar7) {
          lVar23 = lVar17;
        }
        *(bool *)(local_d8 + 0x60) = bVar7;
        lVar17 = lVar23;
      }
      if (bVar8) {
        lVar23 = local_f8;
        if (bVar2 == 0) {
          lVar23 = lVar17;
        }
        *(byte *)(local_f8 + 0x60) = bVar2;
        lVar17 = lVar23;
      }
      lVar23 = lVar17;
      if (bVar9) {
        lVar23 = local_118;
        if (bVar16 == 0) {
          lVar23 = lVar17;
        }
        *(byte *)(local_118 + 0x60) = bVar16;
      }
      local_d8 = 0;
      local_e0 = (char *)0x1e;
      builtin_strncpy(pcVar22,"MAIN_DSP_MIRROR",0xf);
      local_d0 = (long *)0x0;
      FUN_71038566c0(&local_c0,lVar25,(byte *)&local_e0);
      local_f8 = 0;
      local_100 = 0x1e;
      builtin_strncpy((char *)((ulong)&local_100 | 1),"HALF_DSP_MIRROR",0xf);
      local_f0 = (long *)0x0;
      FUN_71038566c0(&local_e0,lVar25,(byte *)&local_100);
      local_118 = 0;
      local_120 = 0x1e;
      builtin_strncpy((char *)((ulong)&local_120 | 1),"QUAT_DSP_MIRROR",0xf);
      local_110 = (long *)0x0;
      FUN_71038566c0(&local_100,lVar25,(byte *)&local_120);
      bVar10 = false;
      if (local_b0 != (long *)0x0) {
        bVar10 = *local_b0 == local_a8;
      }
      bVar8 = false;
      if (local_d0 != (long *)0x0) {
        bVar8 = *local_d0 == local_c8;
      }
      bVar9 = false;
      if (local_f0 != (long *)0x0) {
        bVar9 = *local_f0 == local_e8;
      }
      if (bVar10) {
        *(bool *)(local_b8 + 0x60) = bVar7;
      }
      if (bVar8) {
        *(byte *)(local_d8 + 0x60) = bVar2;
      }
      if (bVar9) {
        *(byte *)(local_f8 + 0x60) = bVar16;
      }
      local_e0 = &DAT_0000001a;
      local_d0 = (long *)0x0;
      builtin_strncpy(pcVar22,"MAIN_VIEWPORT",0xd);
      local_d8 = 0;
      FUN_7103856830(&local_c0,lVar25,(byte *)&local_e0);
      lVar17 = local_b8;
      if (((local_b0 != (long *)0x0) && (*local_b0 == local_a8)) &&
         ((*(undefined1 *)(local_b8 + 0x60) = 1, lVar23 != 0 &&
          ((*(long **)(lVar23 + 0xa8) != (long *)0x0 &&
           (**(long **)(lVar23 + 0xa8) == *(long *)(lVar23 + 0xb0))))))) {
        (**(code **)(**(long **)(lVar23 + 0xa0) + 0x20))(&local_e0);
        fVar29 = (float)NEON_ucvtf(*(undefined4 *)(local_d8 + 0x1e8));
        fVar30 = (float)NEON_ucvtf(*(undefined4 *)(local_d8 + 0x1ec));
        *(float *)(lVar17 + 0xa8) = fVar29;
        *(float *)(lVar17 + 0xac) = fVar30;
        *(float *)(lVar17 + 0xc0) = *(float *)(lVar17 + 0xb8) + fVar29;
        *(float *)(lVar17 + 0xc4) = *(float *)(lVar17 + 0xbc) + fVar30;
      }
      iVar11 = FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                              param_7,param_8);
      if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_c0 = (long ****)&SUB_00000020;
        uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
        if ((uVar13 & 1) != 0) {
          FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,param_7,
                         param_8);
        }
      }
      nu::VirtualAllocHook(0x20,0x10,local_e0);
      pcVar26 = local_e0;
      builtin_strncpy(local_e0,"MIRROR_COPY_PRE_REFRACT",0x18);
      bVar4 = *(byte *)(lVar25 + 0x40);
      uVar13 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar13 = *(ulong *)(lVar25 + 0x48);
      }
      if (uVar13 == 0x17) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(lVar25 + 0x41) == 'M') {
            lVar17 = 0;
            do {
              if ((ulong)(bVar4 >> 1) - 1 == lVar17) {
                nu::VirtualFreeHook(local_e0);
                FUN_710392eb40((ulong)pcVar26);
                goto LAB_71036313f8;
              }
              pcVar20 = (char *)(lVar25 + 0x42 + lVar17);
              lVar23 = lVar17 + 1;
              lVar17 = lVar17 + 1;
            } while (*pcVar20 == local_e0[lVar23]);
          }
          goto code_r0x007103630de8;
        }
        iVar11 = memcmp(*(void **)(lVar25 + 0x50),local_e0,0x17);
        nu::VirtualFreeHook(pcVar26);
        FUN_710392eb40((ulong)pcVar26);
        if (iVar11 != 0) goto LAB_7103630df8;
LAB_71036313f8:
        if (((DAT_7105338dc0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&DAT_7105338dc0), iVar11 != 0)) {
          DAT_7105338d38 = 0x1c;
          DAT_7105338d48 = 0;
          DAT_7105338d60._2_6_ = 0;
          DAT_7105338d60._1_1_ = 0;
          uRam0000007105338d7a = 0;
          uRam0000007105338d41 = 0x5652535f524f;
          DAT_7105338d39._0_6_ = 0x494d5f565452;
          DAT_7105338d39._6_2_ = 0x5252;
          _DAT_7105338d51 = 0x454c425f565452;
          DAT_7105338d58._0_1_ = 0x4e;
          DAT_7105338d58._1_7_ = 0x52535f34365f44;
          DAT_7105338d60._0_1_ = 0x56;
          DAT_7105338d47 = 0;
          DAT_7105338d50 = 0x20;
          DAT_7105338d68 = 0x20;
          DAT_7105338d69._0_7_ = 0x454c425f565452;
          DAT_7105338d69._7_1_ = 0x4e;
          DAT_7105338d79 = 0;
          DAT_7105338d71._0_7_ = 0x52535f36315f44;
          DAT_7105338d71._7_1_ = 0x56;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105338dc0);
        }
        if (((DAT_7105338dc8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&DAT_7105338dc8), iVar11 != 0)) {
          uRam0000007105338432 = 0;
          DAT_7105338428 = 0x10;
          DAT_7105338438 = 0;
          DAT_7105338429._0_7_ = 0x65727574786554;
          DAT_7105338429._7_1_ = 0x30;
          DAT_7105338431 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105338dc8);
        }
        ppppbVar15 = *(byte *****)(&DAT_71046fd958 + lVar21 * 8);
        pbVar14 = &DAT_7105338428;
        param_5 = (long ****)(&DAT_7105338d38 + lVar18);
      }
      else {
code_r0x007103630de8:
        nu::VirtualFreeHook(local_e0);
        FUN_710392eb40((ulong)pcVar26);
LAB_7103630df8:
        iVar11 = FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                                param_7,param_8);
        if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_c0 = (long ****)&SUB_00000020;
          uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
          if ((uVar13 & 1) != 0) {
            FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                           param_7,param_8);
          }
        }
        nu::VirtualAllocHook(0x20,0x10,local_e0);
        pcVar26 = local_e0;
        builtin_strncpy(local_e0,"MIRROR_BLEND_EFFECT_DEPTH_COPY",0x1f);
        bVar4 = *(byte *)(lVar25 + 0x40);
        uVar13 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar13 = *(ulong *)(lVar25 + 0x48);
        }
        if (uVar13 != 0x1e) {
LAB_7103630f88:
          iVar11 = FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6
                                  ,param_7,param_8);
          if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_c0 = (long ****)&DAT_00000030;
            uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
            if ((uVar13 & 1) != 0) {
              FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,
                             param_7,param_8);
            }
          }
          nu::VirtualAllocHook(0x30,0x10,local_e0);
          pcVar20 = local_e0;
          builtin_strncpy(local_e0,"MIRROR_BLEND_EFFECT_DEPTH_COPY_EIGH",0x24);
          bVar4 = *(byte *)(lVar25 + 0x40);
          uVar13 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar13 = *(ulong *)(lVar25 + 0x48);
          }
          if (uVar13 == 0x23) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(lVar25 + 0x41) == 'M') {
                lVar17 = 0;
                do {
                  if ((ulong)(bVar4 >> 1) - 1 == lVar17) goto LAB_7103631384;
                  pcVar19 = (char *)(lVar25 + 0x42 + lVar17);
                  lVar23 = lVar17 + 1;
                  lVar17 = lVar17 + 1;
                } while (*pcVar19 == local_e0[lVar23]);
              }
            }
            else {
              iVar11 = memcmp(*(void **)(lVar25 + 0x50),local_e0,0x23);
              if (iVar11 == 0) {
LAB_7103631384:
                nu::VirtualFreeHook(pcVar20);
                FUN_710392eb40((ulong)pcVar20);
                nu::VirtualFreeHook(pcVar26);
                FUN_710392eb40((ulong)pcVar26);
                goto LAB_7103631458;
              }
            }
          }
          iVar11 = FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6
                                  ,param_7,param_8);
          if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_c0 = (long ****)&DAT_00000030;
            uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
            if ((uVar13 & 1) != 0) {
              FUN_710392e1f0(&local_e0,0x10,(long ****)&DAT_00000030,ppppbVar15,param_5,param_6,
                             param_7,param_8);
            }
          }
          nu::VirtualAllocHook(0x30,0x10,local_e0);
          pcVar19 = local_e0;
          builtin_strncpy(local_e0,"MIRROR_BLEND_EFFECT_DEPTH_COPY_QUAT",0x24);
          bVar4 = *(byte *)(lVar25 + 0x40);
          uVar13 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar13 = *(ulong *)(lVar25 + 0x48);
          }
          if (uVar13 == 0x23) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(lVar25 + 0x41) == 'M') {
                lVar17 = 0;
                do {
                  if ((ulong)(bVar4 >> 1) - 1 == lVar17) {
                    nu::VirtualFreeHook(local_e0);
                    FUN_710392eb40((ulong)pcVar19);
                    nu::VirtualFreeHook(pcVar20);
                    FUN_710392eb40((ulong)pcVar20);
                    goto LAB_7103631340;
                  }
                  pcVar1 = (char *)(lVar25 + 0x42 + lVar17);
                  lVar23 = lVar17 + 1;
                  lVar17 = lVar17 + 1;
                } while (*pcVar1 == local_e0[lVar23]);
              }
              goto code_r0x0071036311a4;
            }
            iVar11 = memcmp(*(void **)(lVar25 + 0x50),local_e0,0x23);
            nu::VirtualFreeHook(pcVar19);
            FUN_710392eb40((ulong)pcVar19);
            nu::VirtualFreeHook(pcVar20);
            FUN_710392eb40((ulong)pcVar20);
            nu::VirtualFreeHook(pcVar26);
            FUN_710392eb40((ulong)pcVar26);
            if (iVar11 == 0) goto LAB_7103631458;
          }
          else {
code_r0x0071036311a4:
            nu::VirtualFreeHook(local_e0);
            FUN_710392eb40((ulong)pcVar19);
            nu::VirtualFreeHook(pcVar20);
            FUN_710392eb40((ulong)pcVar20);
            nu::VirtualFreeHook(pcVar26);
            FUN_710392eb40((ulong)pcVar26);
          }
          iVar11 = FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6
                                  ,param_7,param_8);
          if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_c0 = (long ****)&SUB_00000020;
            uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
            if ((uVar13 & 1) != 0) {
              FUN_710392e1f0(&local_e0,0x10,(long ****)&SUB_00000020,ppppbVar15,param_5,param_6,
                             param_7,param_8);
            }
          }
          nu::VirtualAllocHook(0x20,0x10,local_e0);
          pcVar26 = local_e0;
          builtin_strncpy(local_e0,"MIRROR_BLEND_EFFECT_MERGE",0x1a);
          bVar4 = *(byte *)(lVar25 + 0x40);
          uVar13 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            uVar13 = *(ulong *)(lVar25 + 0x48);
          }
          if (uVar13 == 0x19) {
            if ((bVar4 & 1) != 0) {
              iVar11 = memcmp(*(void **)(lVar25 + 0x50),local_e0,0x19);
              nu::VirtualFreeHook(pcVar26);
              FUN_710392eb40((ulong)pcVar26);
              pcVar26 = local_90;
              if (iVar11 != 0) goto joined_r0x0071036314a0;
LAB_7103630458:
              if (((DAT_7105338de0 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_7105338de0), iVar11 != 0)) {
                DAT_7105338ca8 = 0x1e;
                uRam0000007105338cea = 0;
                DAT_7105338ce9 = 0;
                uRam0000007105338cb1 = 0x5652535f345f44;
                DAT_7105338cc0 = 0x22;
                DAT_7105338ca9._0_7_ = 0x454c425f565452;
                DAT_7105338ca9._7_1_ = 0x4e;
                DAT_7105338cc1._0_7_ = 0x454c425f565452;
                DAT_7105338cc1._7_1_ = 0x4e;
                uRam0000007105338cd3 = 0;
                DAT_7105338cd1 = 0x56;
                DAT_7105338cd8 = 0x20;
                DAT_7105338cc9._0_7_ = 0x535f3635325f44;
                DAT_7105338cc9._7_1_ = 0x52;
                DAT_7105338cb8 = 0;
                DAT_7105338cd2 = 0;
                DAT_7105338cd9._0_7_ = 0x454c425f565452;
                DAT_7105338cd9._7_1_ = 0x4e;
                DAT_7105338ce1._0_7_ = 0x52535f34365f44;
                DAT_7105338ce1._7_1_ = 0x56;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_7105338de0);
              }
              if (((DAT_7105338de8 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(&DAT_7105338de8), iVar11 != 0)) {
                uRam0000007105338464 = 0;
                DAT_7105338458 = 0x14;
                DAT_7105338459._0_7_ = 0x65737566666944;
                DAT_7105338459._7_1_ = 0x4d;
                DAT_7105338468 = 0;
                DAT_7105338461 = 0x7061;
                DAT_7105338463 = 0;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_7105338de8);
              }
              ppppbVar15 = *(byte *****)(&DAT_71046fd9a0 + lVar21 * 8);
              pbVar14 = &DAT_7105338458;
              param_5 = (long ****)(&DAT_7105338ca8 + lVar18);
              goto LAB_7103631498;
            }
            if (*(char *)(lVar25 + 0x41) == 'M') {
              lVar17 = 0;
              do {
                if ((ulong)(bVar4 >> 1) - 1 == lVar17) {
                  nu::VirtualFreeHook(local_e0);
                  FUN_710392eb40((ulong)pcVar26);
                  goto LAB_7103630458;
                }
                pcVar20 = (char *)(lVar25 + 0x42 + lVar17);
                lVar23 = lVar17 + 1;
                lVar17 = lVar17 + 1;
              } while (*pcVar20 == local_e0[lVar23]);
            }
          }
          nu::VirtualFreeHook(local_e0);
          FUN_710392eb40((ulong)pcVar26);
          pcVar26 = local_90;
          goto joined_r0x0071036314a0;
        }
        if ((bVar4 & 1) == 0) {
          if (*(char *)(lVar25 + 0x41) == 'M') {
            lVar17 = -(ulong)(bVar4 >> 1);
            pcVar19 = (char *)(lVar25 + 0x42);
            pcVar20 = local_e0;
            do {
              pcVar20 = pcVar20 + 1;
              lVar17 = lVar17 + 1;
              if (lVar17 == 0) goto LAB_7103631340;
              cVar3 = *pcVar19;
              pcVar19 = pcVar19 + 1;
            } while (cVar3 == *pcVar20);
          }
          goto LAB_7103630f88;
        }
        iVar11 = memcmp(*(void **)(lVar25 + 0x50),local_e0,0x1e);
        if (iVar11 != 0) goto LAB_7103630f88;
LAB_7103631340:
        nu::VirtualFreeHook(pcVar26);
        FUN_710392eb40((ulong)pcVar26);
LAB_7103631458:
        if (((DAT_7105338dd0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&DAT_7105338dd0), iVar11 != 0)) {
          uRam0000007105338cfe = 0;
          DAT_7105338cf0 = 0x18;
          _DAT_7105338cf9 = 0x5652535f;
          DAT_7105338d00 = 0;
          DAT_7105338d18._2_6_ = 0;
          DAT_7105338cf1._0_7_ = 0x49414d5f565344;
          DAT_7105338cf1._7_1_ = 0x4e;
          uRam0000007105338d32 = 0;
          _DAT_7105338d09 = 0x454c425f565344;
          DAT_7105338d10._0_1_ = 0x4e;
          DAT_7105338d10._1_7_ = 0x52535f34365f44;
          DAT_7105338d18._0_1_ = 0x56;
          DAT_7105338cfd = 0;
          DAT_7105338d08 = 0x20;
          DAT_7105338d18._1_1_ = 0;
          DAT_7105338d20 = 0x20;
          DAT_7105338d21._0_7_ = 0x454c425f565344;
          DAT_7105338d21._7_1_ = 0x4e;
          DAT_7105338d29._0_7_ = 0x52535f36315f44;
          DAT_7105338d29._7_1_ = 0x56;
          DAT_7105338d31 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105338dd0);
        }
        if (((DAT_7105338dd8 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&DAT_7105338dd8), iVar11 != 0)) {
          uRam000000710533844a = 0;
          DAT_7105338440 = 0x10;
          DAT_7105338450 = 0;
          DAT_7105338441._0_7_ = 0x614d6874706544;
          DAT_7105338441._7_1_ = 0x70;
          DAT_7105338449 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105338dd8);
        }
        ppppbVar15 = *(byte *****)(&DAT_71046fd988 + lVar21 * 8);
        pbVar14 = &DAT_7105338440;
        param_5 = (long ****)(&DAT_7105338cf0 + lVar18);
      }
LAB_7103631498:
      FUN_710362bda0(lVar25,pbVar14,plVar6,ppppbVar15,param_5,param_6,param_7,param_8);
      pcVar26 = local_90;
    }
joined_r0x0071036314a0:
    if ((local_a0 & 1) != 0) {
      local_90 = pcVar26;
      nu::VirtualFreeHook(pcVar26);
      FUN_710392eb40((ulong)pcVar26);
    }
    puVar24 = puVar24 + 3;
    if (puVar24 == (ulong *)&DAT_7105338428) {
      return;
    }
  } while( true );
}

