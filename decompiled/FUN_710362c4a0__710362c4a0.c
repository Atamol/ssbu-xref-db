// addr:      710362c4a0
// offset:    0x362c4a0
// name:      FUN_710362c4a0
// mangled:   
// signature: undefined __cdecl FUN_710362c4a0(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710362c4a0(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  undefined ***pppuVar7;
  undefined3 uVar8;
  undefined ***pppuVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  char *__s2;
  byte bVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined2 uStack_85;
  undefined3 uStack_83;
  undefined ***local_80;
  undefined **local_78;
  undefined ***local_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  pppuVar7 = DAT_7105338f70;
  if (((DAT_7105338d88 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338d88), iVar11 != 0)) {
    uRam000000710533847a = 0;
    DAT_7105338470 = 0x10;
    DAT_7105338480 = 0;
    DAT_7105338471._0_7_ = 0x614d6874706544;
    DAT_7105338471._7_1_ = 0x70;
    DAT_7105338479 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338d88);
  }
  if (((DAT_7105338d90 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338d90), iVar11 != 0)) {
    uRam0000007105338492 = 0;
    DAT_7105338488 = 0x10;
    DAT_7105338498 = 0;
    DAT_7105338489._0_7_ = 0x65727574786554;
    DAT_7105338489._7_1_ = 0x30;
    DAT_7105338491 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338d90);
  }
  if (((DAT_7105338d98 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338d98), iVar11 != 0)) {
    uRam0000007105338bd5 = 0;
    DAT_7105338bc8 = 0x16;
    _DAT_7105338bd1 = 0x524f52;
    DAT_7105338bc9._0_7_ = 0x494d5f45444f4e;
    DAT_7105338bc9._7_1_ = 0x52;
    DAT_7105338bd8 = 0;
    DAT_7105338be0 = 0x10100;
    _DAT_7105338be8 = 0;
    DAT_7105338bf0 = 0;
    DAT_7105338bf8 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338be8 = 0x21;
    DAT_7105338bf0 = 0x17;
    DAT_7105338bf8 = local_b0;
    *(char *)((long)local_b0 + 0x17) = '\0';
    builtin_strncpy((char *)((long)local_b0 + 0xf),"_REFRACT",8);
    *local_b0 = (undefined *)0x52494d5f45444f4e;
    local_b0[1] = (undefined *)0x5f4552505f524f52;
    DAT_7105338c00 = 0x100;
    DAT_7105338c10 = 0;
    DAT_7105338c18 = (undefined **)0x0;
    _DAT_7105338c08 = 0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338c08 = 0x21;
    DAT_7105338c10 = 0x18;
    DAT_7105338c18 = local_b0;
    *(char *)(local_b0 + 3) = '\0';
    local_b0[2] = (undefined *)0x544341524645525f;
    *local_b0 = (undefined *)0x52494d5f45444f4e;
    local_b0[1] = (undefined *)0x54534f505f524f52;
    DAT_7105338c20 = 0x100;
    DAT_7105338c30 = 0;
    DAT_7105338c38 = (undefined **)0x0;
    _DAT_7105338c28 = 0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338c28 = 0x21;
    DAT_7105338c30 = 0x1d;
    DAT_7105338c38 = local_b0;
    builtin_strncpy((char *)((long)local_b0 + 0x15),"CT_BLEND",8);
    local_b0[2] = (undefined *)0x5f54434152464552;
    *(char *)((long)local_b0 + 0x1d) = '\0';
    *local_b0 = (undefined *)0x52494d5f45444f4e;
    local_b0[1] = (undefined *)0x5f4552505f524f52;
    _DAT_7105338c48 = 0;
    DAT_7105338c50 = 0;
    DAT_7105338c58 = (undefined **)0x0;
    DAT_7105338c40 = 0x100;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338c48 = 0x21;
    DAT_7105338c50 = 0x18;
    DAT_7105338c58 = local_b0;
    *(char *)(local_b0 + 3) = '\0';
    local_b0[2] = (undefined *)0x5443454646455f44;
    *local_b0 = (undefined *)0x52494d5f45444f4e;
    local_b0[1] = (undefined *)0x4e454c425f524f52;
    uRam0000007105338c7c = 0;
    DAT_7105338c7b = 0;
    DAT_7105338c90 = 0;
    DAT_7105338c98 = (undefined **)0x0;
    DAT_7105338c68 = 0x24;
    DAT_7105338c69._0_7_ = 0x494d5f45444f4e;
    DAT_7105338c69._7_1_ = 0x52;
    DAT_7105338c60 = 0x10100;
    DAT_7105338c71._0_7_ = 0x4646455f524f52;
    DAT_7105338c71._7_1_ = 0x45;
    DAT_7105338c79 = 0x5443;
    DAT_7105338c80 = 0x10100;
    _DAT_7105338c88 = 0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338c88 = 0x21;
    DAT_7105338c90 = 0x17;
    DAT_7105338c98 = local_b0;
    builtin_strncpy((char *)((long)local_b0 + 0xf),"ECT_NEAR",8);
    *(char *)((long)local_b0 + 0x17) = '\0';
    *local_b0 = (undefined *)0x52494d5f45444f4e;
    local_b0[1] = (undefined *)0x454646455f524f52;
    DAT_7105338ca0 = 0x10100;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338d98);
  }
  if (((DAT_7105338da0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338da0), iVar11 != 0)) {
    uRam0000007105338a1d = 0;
    DAT_7105338a10 = 0x16;
    _DAT_7105338a19 = 0x4e4941;
    DAT_7105338a30 = 0x100000000;
    DAT_7105338a11._0_7_ = 0x5f524f5252494d;
    DAT_7105338a11._7_1_ = 0x4d;
    DAT_7105338a38 = 0x1a;
    uRam0000007105338a47 = 0;
    DAT_7105338a48 = 0;
    DAT_7105338a20 = 0;
    DAT_7105338a28 = 0;
    uRam0000007105338a41 = 0x5443454646;
    DAT_7105338a39._0_5_ = 0x4f5252494d;
    DAT_7105338a39._5_2_ = 0x5f52;
    DAT_7105338a39._7_1_ = 0x45;
    DAT_7105338a46 = 0;
    DAT_7105338a50 = 0;
    DAT_7105338a74 = 0;
    DAT_7105338a64._0_4_ = 0;
    DAT_7105338a64._4_4_ = 0;
    DAT_7105338a58 = 1;
    DAT_7105338a6c._0_4_ = 0;
    DAT_7105338a6c._4_4_ = 0;
    DAT_7105338a5c._0_4_ = 0;
    DAT_7105338a5c._4_4_ = 0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    DAT_7105338a5c._4_4_ = 0x21;
    DAT_7105338a64._0_4_ = 0;
    DAT_7105338a64._4_4_ = 0x1f;
    DAT_7105338a6c._0_4_ = 0;
    DAT_7105338a6c._4_4_ = SUB84(local_b0,0);
    DAT_7105338a74 = (undefined4)((ulong)local_b0 >> 0x20);
    builtin_strncpy((char *)((long)local_b0 + 0x17),"OR_CLEAR",8);
    local_b0[2] = (undefined *)0x4f4c4f435f544345;
    *(char *)((long)local_b0 + 0x1f) = '\0';
    *local_b0 = (undefined *)0x425f524f5252494d;
    local_b0[1] = (undefined *)0x4646455f444e454c;
    _DAT_7105338a88 = 0;
    DAT_7105338a78 = &DAT_100000002;
    DAT_7105338a80 = 0x200000001;
    DAT_7105338a90 = 0;
    DAT_7105338a98 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338a88 = 0x21;
    DAT_7105338a90 = 0x1e;
    DAT_7105338a98 = local_b0;
    builtin_strncpy((char *)((long)local_b0 + 0x16),"PTH_COPY",8);
    local_b0[2] = (undefined *)0x545045445f544345;
    *(char *)((long)local_b0 + 0x1e) = '\0';
    *local_b0 = (undefined *)0x425f524f5252494d;
    local_b0[1] = (undefined *)0x4646455f444e454c;
    _DAT_7105338ab0 = 0;
    DAT_7105338ab8 = 0;
    DAT_7105338ac0 = (undefined **)0x0;
    DAT_7105338aa0 = &DAT_100000002;
    DAT_7105338aa8 = 0x200000002;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x30;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x30,0x10,local_b0);
    _DAT_7105338ab0 = 0x31;
    DAT_7105338ab8 = 0x23;
    DAT_7105338ac0 = local_b0;
    local_b0[2] = (undefined *)0x545045445f544345;
    local_b0[3] = (undefined *)0x455f59504f435f48;
    *(char *)((long)local_b0 + 0x22) = 'H';
    *local_b0 = (undefined *)0x425f524f5252494d;
    local_b0[1] = (undefined *)0x4646455f444e454c;
    *(undefined2 *)(local_b0 + 4) = 0x4749;
    *(char *)((long)local_b0 + 0x23) = '\0';
    DAT_7105338ae0 = 0;
    DAT_7105338ae8 = (undefined **)0x0;
    _DAT_7105338ad8 = 0;
    DAT_7105338ac8 = 0x200000002;
    DAT_7105338ad0 = 0x200000002;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x30;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x30,0x10,local_b0);
    _DAT_7105338ad8 = 0x31;
    DAT_7105338ae0 = 0x23;
    DAT_7105338ae8 = local_b0;
    local_b0[2] = (undefined *)0x545045445f544345;
    local_b0[3] = (undefined *)0x515f59504f435f48;
    *(char *)((long)local_b0 + 0x22) = 'T';
    *local_b0 = (undefined *)0x425f524f5252494d;
    local_b0[1] = (undefined *)0x4646455f444e454c;
    *(undefined2 *)(local_b0 + 4) = 0x4155;
    *(char *)((long)local_b0 + 0x23) = '\0';
    DAT_7105338b08 = 0;
    DAT_7105338b10 = (undefined **)0x0;
    _DAT_7105338b00 = 0;
    DAT_7105338af0 = 0x200000002;
    DAT_7105338af8 = 0x200000002;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338b00 = 0x21;
    DAT_7105338b08 = 0x19;
    DAT_7105338b10 = local_b0;
    *(char *)(local_b0 + 3) = 'E';
    local_b0[2] = (undefined *)0x4752454d5f544345;
    *(char *)((long)local_b0 + 0x19) = '\0';
    *local_b0 = (undefined *)0x425f524f5252494d;
    local_b0[1] = (undefined *)0x4646455f444e454c;
    _DAT_7105338b28 = 0;
    DAT_7105338b18 = &DAT_100000002;
    DAT_7105338b20 = 0x200000001;
    DAT_7105338b30 = 0;
    DAT_7105338b38 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338b28 = 0x21;
    DAT_7105338b30 = 0x17;
    DAT_7105338b38 = local_b0;
    *(char *)((long)local_b0 + 0x17) = '\0';
    builtin_strncpy((char *)((long)local_b0 + 0xf),"_REFRACT",8);
    *local_b0 = (undefined *)0x435f524f5252494d;
    local_b0[1] = (undefined *)0x5f4552505f59504f;
    _DAT_7105338b50 = 0;
    DAT_7105338b40 = &DAT_100000002;
    DAT_7105338b48 = 0x200000001;
    DAT_7105338b58 = 0;
    DAT_7105338b60 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338b50 = 0x21;
    DAT_7105338b58 = 0x18;
    DAT_7105338b60 = local_b0;
    *(char *)(local_b0 + 3) = '\0';
    local_b0[2] = (undefined *)0x544341524645525f;
    *local_b0 = (undefined *)0x435f524f5252494d;
    local_b0[1] = (undefined *)0x54534f505f59504f;
    _DAT_7105338b78 = 0;
    DAT_7105338b68 = &DAT_100000002;
    DAT_7105338b70 = 0x200000001;
    DAT_7105338b80 = 0;
    DAT_7105338b88 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    _DAT_7105338b78 = 0x21;
    DAT_7105338b80 = 0x1a;
    DAT_7105338b88 = local_b0;
    *(undefined2 *)(local_b0 + 3) = 0x524f;
    local_b0[2] = (undefined *)0x5252494d5f59425f;
    *local_b0 = (undefined *)0x454c435f4e49414d;
    local_b0[1] = (undefined *)0x524f4c4f435f5241;
    *(char *)((long)local_b0 + 0x1a) = '\0';
    DAT_7105338b90 = &DAT_100000002;
    DAT_7105338b98 = 0x200000002;
    DAT_7105338ba0 = 0x20;
    DAT_7105338bb0._2_6_ = 0;
    DAT_7105338bb8 = 0x200000001;
    _DAT_7105338ba9 = 0x4f4c4f435f5241;
    DAT_7105338bb0._0_1_ = 0x52;
    DAT_7105338ba1._0_7_ = 0x4c435f4e49414d;
    DAT_7105338ba1._7_1_ = 0x45;
    DAT_7105338bb0._1_1_ = 0;
    DAT_7105338bc0 = 1;
    DAT_7105338bc4 = 1;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338da0);
  }
  lVar20 = DAT_71053375a8;
  if (param_2 == 0) {
    plVar13 = (long *)(DAT_71053375a8 + 0x10);
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338bc8);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338be0;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338be0;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338be8);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338c00;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338c00;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c08);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338c20;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338c20;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c28);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338c40;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338c40;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c48);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338c60;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338c60;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c68);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar12[6];
      }
      uVar17 = (undefined1)DAT_7105338c80;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338c80;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar12 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar13 = FUN_7103550630(plVar13,&DAT_7105338c88);
    if (plVar13 != (long *)0x0) {
      if (((long *)plVar13[7] == (long *)0x0) || (*(long *)plVar13[7] != plVar13[8])) {
        lVar18 = 0;
      }
      else {
        lVar18 = plVar13[6];
      }
      uVar17 = (undefined1)DAT_7105338ca0;
      *(undefined1 *)(lVar18 + 0x10) = (undefined1)DAT_7105338ca0;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar13 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(undefined1 *)(*plVar13 + 0x14) = uVar17;
            plVar13 = plVar13 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
            *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
            plVar13 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(undefined1 *)(*plVar13 + 0x14) = uVar17;
          } while (lVar18 != lVar29);
        }
      }
    }
LAB_710362cff4:
    param_4 = (byte ****)0x1;
    bVar10 = true;
    FUN_71036302f0(param_1,1,0,(byte ****)0x1,param_5,param_6,param_7,param_8);
  }
  else {
    if (param_2 == 1) {
      plVar13 = (long *)(DAT_71053375a8 + 0x10);
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338bc8);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338be0._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338be0._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338be8);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338c00._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338c00._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338c08);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338c20._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338c20._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338c28);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338c40._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338c40._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338c48);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338c60._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338c60._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar12 = FUN_7103550630(plVar13,&DAT_7105338c68);
      if (plVar12 != (long *)0x0) {
        if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar12[6];
        }
        uVar17 = DAT_7105338c80._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338c80._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar12 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
              plVar12 = plVar12 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar12 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar12 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      plVar13 = FUN_7103550630(plVar13,&DAT_7105338c88);
      if (plVar13 != (long *)0x0) {
        if (((long *)plVar13[7] == (long *)0x0) || (*(long *)plVar13[7] != plVar13[8])) {
          lVar18 = 0;
        }
        else {
          lVar18 = plVar13[6];
        }
        uVar17 = DAT_7105338ca0._1_1_;
        *(undefined1 *)(lVar18 + 0x10) = DAT_7105338ca0._1_1_;
        lVar29 = **(long **)(lVar18 + 0x48);
        lVar18 = (*(long **)(lVar18 + 0x48))[1];
        if (lVar29 != lVar18) {
          uVar23 = (lVar18 + -0x40) - lVar29;
          uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
          uVar14 = (ulong)uVar1 & 3;
          if ((uVar1 & 3) != 0) {
            lVar25 = -uVar14;
            plVar13 = (long *)(lVar29 + 0x28);
            do {
              lVar25 = lVar25 + 1;
              *(undefined1 *)(*plVar13 + 0x14) = uVar17;
              plVar13 = plVar13 + 8;
            } while (lVar25 != 0);
            lVar29 = lVar29 + uVar14 * 0x40;
          }
          if (0xbf < uVar23) {
            do {
              *(undefined1 *)(*(long *)(lVar29 + 0x28) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0x68) + 0x14) = uVar17;
              *(undefined1 *)(*(long *)(lVar29 + 0xa8) + 0x14) = uVar17;
              plVar13 = (long *)(lVar29 + 0xe8);
              lVar29 = lVar29 + 0x100;
              *(undefined1 *)(*plVar13 + 0x14) = uVar17;
            } while (lVar18 != lVar29);
          }
        }
      }
      goto LAB_710362cff4;
    }
    plVar13 = (long *)(DAT_71053375a8 + 0x10);
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338bc8);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362c76c;
LAB_710362c5dc:
        cVar6 = DAT_7105338be0._3_1_;
LAB_710362c77c:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362c5dc;
LAB_710362c76c:
        if (param_2 == 2) {
          cVar6 = DAT_7105338be0._2_1_;
          goto LAB_710362c77c;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338be8);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d0e4;
LAB_710362d0cc:
        cVar6 = DAT_7105338c00._3_1_;
LAB_710362d0f4:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362d0cc;
LAB_710362d0e4:
        if (param_2 == 2) {
          cVar6 = DAT_7105338c00._2_1_;
          goto LAB_710362d0f4;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c08);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d1d0;
LAB_710362d1b8:
        cVar6 = DAT_7105338c20._3_1_;
LAB_710362d1e0:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362d1b8;
LAB_710362d1d0:
        if (param_2 == 2) {
          cVar6 = DAT_7105338c20._2_1_;
          goto LAB_710362d1e0;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c28);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d2bc;
LAB_710362d2a4:
        cVar6 = DAT_7105338c40._3_1_;
LAB_710362d2cc:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362d2a4;
LAB_710362d2bc:
        if (param_2 == 2) {
          cVar6 = DAT_7105338c40._2_1_;
          goto LAB_710362d2cc;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c48);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d3a8;
LAB_710362d390:
        cVar6 = DAT_7105338c60._3_1_;
LAB_710362d3b8:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362d390;
LAB_710362d3a8:
        if (param_2 == 2) {
          cVar6 = DAT_7105338c60._2_1_;
          goto LAB_710362d3b8;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar12 = FUN_7103550630(plVar13,&DAT_7105338c68);
    if (plVar12 != (long *)0x0) {
      if (((long *)plVar12[7] == (long *)0x0) || (*(long *)plVar12[7] != plVar12[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d494;
LAB_710362d47c:
        cVar6 = DAT_7105338c80._3_1_;
LAB_710362d4a4:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar12[6];
        if (param_2 == 3) goto LAB_710362d47c;
LAB_710362d494:
        if (param_2 == 2) {
          cVar6 = DAT_7105338c80._2_1_;
          goto LAB_710362d4a4;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar12 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar12 + 0x14) = bVar10;
            plVar12 = plVar12 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar12 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar12 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    plVar13 = FUN_7103550630(plVar13,&DAT_7105338c88);
    if (plVar13 != (long *)0x0) {
      if (((long *)plVar13[7] == (long *)0x0) || (*(long *)plVar13[7] != plVar13[8])) {
        lVar18 = 0;
        if (param_2 != 3) goto LAB_710362d580;
LAB_710362d568:
        cVar6 = DAT_7105338ca0._3_1_;
LAB_710362d590:
        bVar10 = cVar6 != '\0';
      }
      else {
        lVar18 = plVar13[6];
        if (param_2 == 3) goto LAB_710362d568;
LAB_710362d580:
        if (param_2 == 2) {
          cVar6 = DAT_7105338ca0._2_1_;
          goto LAB_710362d590;
        }
        bVar10 = false;
      }
      *(bool *)(lVar18 + 0x10) = bVar10;
      lVar29 = **(long **)(lVar18 + 0x48);
      lVar18 = (*(long **)(lVar18 + 0x48))[1];
      if (lVar29 != lVar18) {
        uVar23 = (lVar18 + -0x40) - lVar29;
        uVar1 = ((uint)(uVar23 >> 6) & 0x3ffffff) + 1;
        uVar14 = (ulong)uVar1 & 3;
        if ((uVar1 & 3) != 0) {
          lVar25 = -uVar14;
          plVar13 = (long *)(lVar29 + 0x28);
          do {
            lVar25 = lVar25 + 1;
            *(bool *)(*plVar13 + 0x14) = bVar10;
            plVar13 = plVar13 + 8;
          } while (lVar25 != 0);
          lVar29 = lVar29 + uVar14 * 0x40;
        }
        if (0xbf < uVar23) {
          do {
            *(bool *)(*(long *)(lVar29 + 0x28) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0x68) + 0x14) = bVar10;
            *(bool *)(*(long *)(lVar29 + 0xa8) + 0x14) = bVar10;
            plVar13 = (long *)(lVar29 + 0xe8);
            lVar29 = lVar29 + 0x100;
            *(bool *)(*plVar13 + 0x14) = bVar10;
          } while (lVar18 != lVar29);
        }
      }
    }
    if (param_2 == 2) {
      local_90._2_1_ = 0;
      local_90._0_1_ = 0;
      local_90._1_1_ = 0;
      *(undefined1 *)((long)&local_90 + (ulong)*(uint *)(param_1 + 0x34)) = 1;
      uVar14 = (ulong)(byte)local_90;
      bVar15 = local_90._1_1_;
LAB_710362d660:
      param_4 = (byte ****)0x0;
      FUN_71036302f0(param_1,uVar14,bVar15,(byte ****)0x0,param_5,param_6,param_7,param_8);
    }
    else if (param_2 == 3) {
      uVar14 = 1;
      bVar15 = 0;
      goto LAB_710362d660;
    }
    bVar10 = false;
  }
  lVar29 = *(long *)(lVar20 + 0x70);
  for (lVar18 = *(long *)(lVar20 + 0x68); lVar18 != lVar29; lVar18 = lVar18 + 0x20) {
    lVar22 = *(long *)(lVar18 + 8);
    lVar25 = *(long *)(lVar22 + 0x30);
    lVar5 = *(long *)(lVar22 + 0x38);
    if (lVar5 != lVar25) {
      if (lVar25 == lVar5) {
        bVar15 = 0;
      }
      else {
        bVar15 = 0;
        do {
          lVar24 = lVar25 + 0x40;
          cVar6 = *(char *)(*(long *)(lVar25 + 8) + 0x14);
          bVar15 = bVar15 | cVar6 != '\0';
          lVar25 = lVar24;
        } while (cVar6 == '\0' && lVar5 != lVar24);
      }
      *(byte *)(*(long *)(lVar22 + 0x18) + 0xf0) = bVar15;
    }
  }
  puVar28 = &DAT_7105338a10;
  lVar18 = 0;
  do {
    pbVar3 = &DAT_7105338a10 + lVar18;
    ppuVar16 = (undefined **)&local_b0;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    local_b0 = &PTR_FUN_710522fe00;
    uVar14 = FUN_7103553740(lVar20,pbVar3,(long)ppuVar16);
    if ((uVar14 & 1) != 0) {
      switch(param_2) {
      case 0:
        piVar26 = (int *)(puVar28 + 0x18);
        break;
      case 1:
        piVar26 = (int *)(puVar28 + 0x1c);
        break;
      case 2:
        piVar26 = (int *)(puVar28 + 0x20);
        break;
      case 3:
        piVar26 = (int *)((long)&DAT_7105338a30 + lVar18 + 4);
        break;
      default:
        goto switchD_710362dc10_default;
      }
      uVar17 = 1;
      if (*piVar26 == 1) {
LAB_710362dc48:
        *(undefined1 *)(*(long *)(local_a8 + 0x18) + 0xf0) = uVar17;
      }
      else if (*piVar26 == 2) {
        uVar17 = 0;
        goto LAB_710362dc48;
      }
      if (param_2 == 2) {
        iVar11 = *(int *)(param_1 + 0x30);
        if (iVar11 == 2) {
          bVar15 = *pbVar3;
          uVar14 = (ulong)(bVar15 >> 1);
          if ((bVar15 & 1) != 0) {
            uVar14 = *(ulong *)((long)&DAT_7105338a11 + lVar18 + 7);
          }
          if (uVar14 == 0x23) {
            pvVar19 = *(void **)((long)&DAT_7105338a20 + lVar18);
            if ((bVar15 & 1) == 0) {
              pvVar19 = (void *)((long)&DAT_7105338a11 + lVar18);
            }
            __s2 = "MIRROR_BLEND_EFFECT_DEPTH_COPY_QUAT";
LAB_710362dd1c:
            ppuVar16 = (undefined **)0x23;
            iVar11 = memcmp(pvVar19,__s2,0x23);
joined_r0x00710362dd24:
            if (iVar11 == 0) {
              *(undefined1 *)(*(long *)(local_a8 + 0x18) + 0xf0) = 1;
            }
          }
        }
        else if (iVar11 == 1) {
          bVar15 = *pbVar3;
          uVar14 = (ulong)(bVar15 >> 1);
          if ((bVar15 & 1) != 0) {
            uVar14 = *(ulong *)((long)&DAT_7105338a11 + lVar18 + 7);
          }
          if (uVar14 == 0x23) {
            pvVar19 = *(void **)((long)&DAT_7105338a20 + lVar18);
            if ((bVar15 & 1) == 0) {
              pvVar19 = (void *)((long)&DAT_7105338a11 + lVar18);
            }
            __s2 = "MIRROR_BLEND_EFFECT_DEPTH_COPY_EIGH";
            goto LAB_710362dd1c;
          }
        }
        else if (iVar11 == 0) {
          bVar15 = *pbVar3;
          uVar14 = (ulong)(bVar15 >> 1);
          if ((bVar15 & 1) != 0) {
            uVar14 = *(ulong *)((long)&DAT_7105338a11 + lVar18 + 7);
          }
          if (uVar14 == 0x1e) {
            pvVar19 = *(void **)((long)&DAT_7105338a20 + lVar18);
            if ((bVar15 & 1) == 0) {
              pvVar19 = (void *)((long)&DAT_7105338a11 + lVar18);
            }
            ppuVar16 = (undefined **)&DAT_0000001e;
            iVar11 = memcmp(pvVar19,"MIRROR_BLEND_EFFECT_DEPTH_COPY",0x1e);
            goto joined_r0x00710362dd24;
          }
        }
      }
switchD_710362dc10_default:
      bVar15 = *pbVar3;
      uVar14 = (ulong)(bVar15 >> 1);
      if ((bVar15 & 1) != 0) {
        uVar14 = *(ulong *)((long)&DAT_7105338a11 + lVar18 + 7);
      }
      if (uVar14 == 0x18) {
        pvVar19 = *(void **)((long)&DAT_7105338a20 + lVar18);
        if ((bVar15 & 1) == 0) {
          pvVar19 = (void *)((long)&DAT_7105338a11 + lVar18);
        }
        ppuVar16 = (undefined **)&SUB_00000018;
        iVar11 = memcmp(pvVar19,"MIRROR_COPY_POST_REFRACT",0x18);
        if (iVar11 == 0) {
          if (param_2 < 2) {
LAB_710362d720:
            lVar29 = *(long *)(local_a8 + 0x18);
            if (lVar29 == 0) {
              uStack_88 = 0;
              uStack_86 = 0;
              uStack_85 = 0;
              uStack_83 = 0;
              local_80 = (undefined ***)0x0;
              local_90._0_1_ = 0;
              local_90._1_1_ = 0;
              local_90._2_1_ = 0;
              local_90._3_2_ = 0;
              local_90._5_3_ = 0;
              iVar11 = FUN_710392e1f0(&local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,
                                      param_6,param_7,param_8);
              if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
                local_68 = 0x20;
                uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
                if ((uVar14 & 1) != 0) {
                  FUN_710392e1f0(&local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,
                                 param_7,param_8);
                }
              }
              ppuVar16 = (undefined **)local_70;
              nu::VirtualAllocHook(0x20,0x10,local_70);
              local_90._0_1_ = 0x21;
              local_90._1_1_ = 0;
              local_90._2_1_ = 0;
              local_90._3_2_ = 0;
              local_90._5_3_ = 0;
              uStack_88 = 0x18;
              uStack_86 = 0;
              uStack_85 = 0;
              uStack_83 = 0;
              local_80 = local_70;
              local_70[2] = (undefined **)0x73705f797469636f;
              *(char *)(local_70 + 3) = '\0';
              *local_70 = (undefined **)0x6665725f79706f63;
              local_70[1] = (undefined **)0x6c65765f74636172;
            }
            else {
              FUN_7103856830(&local_90,lVar29,&DAT_7105338488);
              if ((local_80 != (undefined ***)0x0) && (*local_80 == local_78)) {
                *(undefined1 *)
                 (CONCAT35(uStack_83,CONCAT23(uStack_85,CONCAT12(uStack_86,uStack_88))) + 0x60) = 0;
              }
              FUN_7103856830(&local_90,lVar29,&DAT_7105338470);
              if ((local_80 != (undefined ***)0x0) && (*local_80 == local_78)) {
                *(undefined1 *)
                 (CONCAT35(uStack_83,CONCAT23(uStack_85,CONCAT12(uStack_86,uStack_88))) + 0x60) = 1;
              }
              uStack_88 = 0;
              uStack_86 = 0;
              uStack_85 = 0;
              uStack_83 = 0;
              local_80 = (undefined ***)0x0;
              local_90._0_1_ = 0;
              local_90._1_1_ = 0;
              local_90._2_1_ = 0;
              local_90._3_2_ = 0;
              local_90._5_3_ = 0;
              iVar11 = FUN_710392e1f0(&local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,
                                      param_6,param_7,param_8);
              if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
                local_68 = 0x20;
                uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
                if ((uVar14 & 1) != 0) {
                  FUN_710392e1f0(&local_70,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,
                                 param_7,param_8);
                }
              }
              ppuVar16 = (undefined **)local_70;
              nu::VirtualAllocHook(0x20,0x10,local_70);
              local_90._0_1_ = 0x21;
              local_90._1_1_ = 0;
              local_90._2_1_ = 0;
              local_90._3_2_ = 0;
              local_90._5_3_ = 0;
              uStack_88 = 0x18;
              uStack_86 = 0;
              uStack_85 = 0;
              uStack_83 = 0;
              local_80 = local_70;
              local_70[2] = (undefined **)0x73705f797469636f;
              *local_70 = (undefined **)0x6665725f79706f63;
              local_70[1] = (undefined **)0x6c65765f74636172;
              *(char *)(local_70 + 3) = '\0';
              FUN_710385bfe0(lVar29,&local_90);
              if (((byte)local_90 & 1) == 0) goto LAB_710362dd74;
            }
            pppuVar9 = local_80;
            nu::VirtualFreeHook(local_80);
            FUN_710392eb40((ulong)pppuVar9);
          }
          else if (param_2 == 2) {
            lVar29 = *(long *)(local_a8 + 0x18);
            local_90._0_1_ = 0;
            local_90._1_1_ = 0;
            local_90._2_1_ = 0;
            local_90._3_2_ = 0;
            local_90._5_3_ = 0;
            uStack_88 = 0;
            uStack_86 = 0;
            uStack_85 = 0;
            uStack_83 = 0;
            local_80 = (undefined ***)0x0;
            iVar11 = FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_68 = 0x30;
              uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68);
              if ((uVar14 & 1) != 0) {
                FUN_710392e1f0(&local_70,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,
                               param_7,param_8);
              }
            }
            nu::VirtualAllocHook(0x30,0x10,local_70);
            pppuVar9 = local_70;
            local_90._0_1_ = 0x31;
            local_90._1_1_ = 0;
            local_90._2_1_ = 0;
            local_90._3_2_ = 0;
            local_90._5_3_ = 0;
            uStack_88 = 0x2b;
            uStack_86 = 0;
            uStack_85 = 0;
            uStack_83 = 0;
            local_80 = local_70;
            local_70[4] = (undefined **)0x756c426e61697373;
            local_70[2] = (undefined **)0x6c6f73655263696d;
            local_70[3] = (undefined **)0x7561476e6f697475;
            *(char *)((long)local_70 + 0x2b) = '\0';
            *local_70 = (undefined **)0x736552726f6c6f43;
            local_70[1] = (undefined **)0x616e794465766c6f;
            *(char *)((long)local_70 + 0x2a) = 'S';
            *(undefined2 *)(local_70 + 5) = 0x5072;
            if (lVar29 == 0) {
              nu::VirtualFreeHook(local_70);
              FUN_710392eb40((ulong)pppuVar9);
            }
            else {
              FUN_710385bfe0(lVar29,&local_90);
              pppuVar9 = local_80;
              if (((byte)local_90 & 1) != 0) {
                nu::VirtualFreeHook(local_80);
                FUN_710392eb40((ulong)pppuVar9);
              }
              FUN_7103856830(&local_90,lVar29,&DAT_7105338470);
              if ((local_80 != (undefined ***)0x0) && (*local_80 == local_78)) {
                *(undefined1 *)
                 (CONCAT35(uStack_83,CONCAT23(uStack_85,CONCAT12(uStack_86,uStack_88))) + 0x60) = 0;
              }
            }
            if (((DAT_7105338da8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_7105338da8), iVar11 != 0)) {
              DAT_71053384a0 = 0x1c;
              DAT_71053384b0 = 0;
              uRam00000071053384a9 = 0x5652535f524f;
              DAT_71053384a1._0_6_ = 0x494d5f565452;
              DAT_71053384a1._6_2_ = 0x5252;
              DAT_71053384c8._2_6_ = 0;
              _DAT_71053384b9 = 0x454c425f565452;
              DAT_71053384c0._0_1_ = 0x4e;
              DAT_71053384c8._1_1_ = 0;
              uRam00000071053384e2 = 0;
              DAT_71053384e1 = 0;
              DAT_71053384c0._1_7_ = 0x52535f34365f44;
              DAT_71053384c8._0_1_ = 0x56;
              DAT_71053384af = 0;
              DAT_71053384b8 = 0x20;
              DAT_71053384d0 = 0x20;
              DAT_71053384d1._0_7_ = 0x454c425f565452;
              DAT_71053384d1._7_1_ = 0x4e;
              DAT_71053384d9._0_7_ = 0x52535f36315f44;
              DAT_71053384d9._7_1_ = 0x56;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_7105338da8);
            }
            param_4 = *(byte *****)(&DAT_71046fd958 + (ulong)*(uint *)(param_1 + 0x30) * 8);
            param_5 = (long ****)(&DAT_71053384a0 + (ulong)*(uint *)(param_1 + 0x30) * 0x18);
            ppuVar16 = (undefined **)pppuVar7;
            FUN_710362bda0(lVar29,&DAT_7105338488,(long *)pppuVar7,param_4,param_5,param_6,param_7,
                           param_8);
            if (*(long *)(param_1 + 0xe0) != 0) {
              lVar29 = (ulong)*(uint *)(param_1 + 0x30) * 8;
              uVar4 = *(undefined4 *)(&DAT_71046fd974 + lVar29);
              *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(&DAT_71046fd970 + lVar29);
              *(undefined4 *)(param_1 + 0xd4) = uVar4;
              *(undefined8 *)(param_1 + 0xd8) = 0x3fa000003fa00000;
              *(undefined1 *)(*(long *)(param_1 + 0xe0) + 1) = 1;
            }
          }
          else if (param_2 == 3) goto LAB_710362d720;
        }
      }
    }
LAB_710362dd74:
    lVar18 = lVar18 + 0x28;
    puVar28 = puVar28 + 0x28;
  } while (lVar18 != 0x1b8);
  if (1 < param_2 - 1) {
    lVar20 = DAT_7105336db8;
    for (plVar13 = *(long **)(*lib::Singleton<lib::EffectManager>::instance_ + 0x19510);
        DAT_7105336db8 = lVar20, plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      uVar14 = plVar13[0x18];
      plVar13[0x18] = 0;
      if (uVar14 != 0) {
        plVar12 = *(long **)(uVar14 + 8);
        if (plVar12 != (long *)0x0) {
          plVar2 = plVar12 + 1;
          do {
            lVar20 = *plVar2;
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar10) {
              *plVar2 = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__shared_weak_count::__release_weak();
          }
        }
        FUN_710392eb40(uVar14);
      }
      lVar20 = DAT_7105336e08;
      if (plVar13[0x1d] != 0) {
        piVar26 = (int *)plVar13[0x1e];
        std::mutex::lock();
        iVar11 = FUN_71000338a0(lVar20 + 0x3178,piVar26);
        FUN_710003aaa0((int)lVar20 + 0x3250,iVar11);
        piVar26[0] = -1;
        piVar26[1] = -1;
        std::mutex::unlock();
        FUN_710003a3b0((undefined1 *)plVar13[0x1d]);
        uVar14 = plVar13[0x1d];
        plVar13[0x1d] = 0;
        if (uVar14 != 0) {
          FUN_710003a260();
          FUN_710392eb40(uVar14);
        }
      }
      uVar14 = plVar13[0x1e];
      plVar13[0x1e] = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      plVar13[0xe] = 0;
      plVar13[0xf] = 0;
      plVar13[0xd] = 0;
      lVar20 = DAT_7105336db8;
    }
    *(undefined8 *)(lVar20 + 0x150) = 0;
    *(undefined8 *)(lVar20 + 0x50) = 0;
    *(undefined8 *)(lVar20 + 0x58) = 0;
    *(undefined8 *)(lVar20 + 0x48) = 0;
    *(undefined8 *)(lVar20 + 0x70) = 0;
    *(undefined8 *)(lVar20 + 0x78) = 0;
    *(undefined8 *)(lVar20 + 0x68) = 0;
    return;
  }
  if (((DAT_7105338db0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_7105338db0), iVar11 != 0)) {
    uRam00000071053384f2 = 0;
    DAT_71053384e8 = 0x10;
    DAT_71053384e9._0_7_ = 0x46565f305f4433;
    DAT_71053384e9._7_1_ = 0x58;
    DAT_71053384f8 = 0;
    DAT_7105338500 = 0x1a;
    DAT_7105338530 = 0x80000;
    DAT_7105338534 = 0x8000;
    uRam000000710533854e = 0;
    DAT_7105338540 = 0x18;
    DAT_7105338591 = 1;
    _DAT_7105338549 = 0x54434546;
    DAT_7105338598 = 0x1e;
    DAT_7105338541._0_7_ = 0x455f444e454c42;
    DAT_7105338541._7_1_ = 0x46;
    uRam00000071053385a1 = 0x5846565f524145;
    DAT_7105338568._1_2_ = 0x4345;
    DAT_7105338588 = 0x40000;
    DAT_710533858c = 0x8000;
    DAT_71053385e0 = 0x40000;
    DAT_71053385e4 = 0x8000;
    DAT_71053385f0 = 0x16;
    DAT_71053384f1 = 0;
    DAT_7105338518 = 0;
    DAT_7105338538 = 0;
    DAT_710533854d = 0;
    DAT_7105338568._3_1_ = 0x54;
    _DAT_7105338561 = 0x46455f444e454c;
    DAT_7105338568._0_1_ = 0x46;
    DAT_7105338568._4_4_ = 0;
    DAT_7105338570 = 0;
    DAT_7105338590 = 0;
    DAT_7105338599._0_7_ = 0x5f544345464645;
    DAT_7105338599._7_1_ = 0x4e;
    _DAT_71053385a8 = 0;
    DAT_71053385e8 = 0;
    DAT_71053385c0._4_4_ = 0;
    DAT_71053385c0._1_2_ = 0x5241;
    DAT_71053385c0._3_1_ = 0;
    DAT_71053385c8 = 0;
    uRam000000710533850f = 0;
    DAT_7105338510 = 0;
    uRam0000007105338509 = 0x5443454646;
    DAT_7105338501._0_5_ = 0x4f5252494d;
    DAT_7105338501._5_2_ = 0x5f52;
    DAT_7105338501._7_1_ = 0x45;
    DAT_710533850e = 0;
    DAT_7105338520 = 0;
    DAT_7105338528 = 0;
    DAT_7105338550 = 0;
    DAT_7105338558 = 0x26;
    DAT_7105338559._0_7_ = 0x5f524f5252494d;
    DAT_7105338559._7_1_ = 0x42;
    DAT_7105338578 = 0;
    DAT_7105338580 = 0;
    DAT_71053385b0 = 0x24;
    _DAT_71053385b9 = 0x4e5f5443454646;
    DAT_71053385c0._0_1_ = 0x45;
    DAT_71053385b1._0_7_ = 0x5f524f5252494d;
    DAT_71053385b1._7_1_ = 0x45;
    DAT_71053385d0 = 0;
    DAT_71053385d8 = 0;
    DAT_7105338600 = 0;
    _DAT_71053385f9 = 0x4341;
    DAT_71053385f1._0_7_ = 0x4645525f455250;
    DAT_71053385f1._7_1_ = 0x52;
    DAT_71053385fb = 0x54;
    _DAT_71053385fc = 0;
    DAT_7105338608 = 0x24;
    DAT_7105338618._4_4_ = 0;
    DAT_7105338618._1_2_ = 0x5443;
    _DAT_7105338611 = 0x524645525f4552;
    DAT_7105338618._0_1_ = 0x41;
    DAT_7105338609._0_7_ = 0x5f524f5252494d;
    DAT_7105338609._7_1_ = 0x50;
    DAT_7105338620 = 0x28;
    DAT_7105338618._3_1_ = 0;
    DAT_7105338630._6_2_ = 0;
    DAT_7105338630._1_2_ = 0x4c4f;
    DAT_7105338630._3_1_ = 0x4f;
    DAT_7105338630._4_1_ = 0x52;
    _DAT_7105338629 = 0x41524645;
    DAT_710533862d = 0x43;
    _DAT_710533862e = 0x5f54;
    DAT_7105338630._0_1_ = 0x43;
    DAT_7105338621._0_1_ = 0x46;
    DAT_7105338621._1_6_ = 0x5f4552505f42;
    DAT_7105338621._7_1_ = 0x52;
    DAT_7105338638 = 0x40000;
    DAT_710533863c = 0xc000;
    DAT_7105338648 = 0x22;
    DAT_7105338630._5_1_ = 0;
    DAT_7105338640 = 0;
    DAT_7105338658._3_5_ = 0;
    DAT_7105338658._1_1_ = 0x44;
    _DAT_7105338651 = 0x454c425f544341;
    DAT_7105338658._0_1_ = 0x4e;
    DAT_7105338649._0_7_ = 0x4645525f455250;
    DAT_7105338649._7_1_ = 0x52;
    DAT_7105338658._2_1_ = 0;
    DAT_7105338660 = 0;
    DAT_7105338668 = 0;
    DAT_7105338670 = (undefined **)0x0;
    iVar11 = FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_1_ = 0x20;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      uVar14 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar14 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    nu::VirtualAllocHook(0x20,0x10,local_b0);
    DAT_7105338660 = 0x21;
    DAT_7105338668 = 0x18;
    DAT_7105338670 = local_b0;
    *(char *)(local_b0 + 3) = '\0';
    local_b0[2] = (undefined *)0x444e454c425f5443;
    *local_b0 = (undefined *)0x505f524f5252494d;
    local_b0[1] = (undefined *)0x41524645525f4552;
    DAT_71053386a8._6_2_ = 0;
    DAT_71053386a0 = 0x18;
    DAT_71053386a8._5_1_ = 0;
    DAT_71053386b0 = 0;
    ppuVar16 = &PTR_LOOP_7104f17000;
    DAT_71053386f8 = 0x1e;
    DAT_71053386b8 = 0x26;
    DAT_71053386c8._3_1_ = 0x54;
    DAT_71053386c8._1_2_ = 0x4341;
    DAT_71053386c8._4_4_ = 0;
    DAT_71053386d0 = 0;
    DAT_71053386f0 = 0;
    DAT_7105338710 = 0x26;
    DAT_7105338749 = 0;
    DAT_7105338750 = 0x24;
    _DAT_7105338688 = 0;
    uRam000000710533868b = 0;
    DAT_710533868d = 0;
    DAT_710533868f = 0;
    DAT_7105338690 = 0xc00000040000;
    DAT_7105338698 = 0x100;
    DAT_71053386a8._1_4_ = 0x54434152;
    _DAT_71053386a1 = 0x45525f54534f50;
    DAT_71053386a8._0_1_ = 0x46;
    DAT_71053386e8 = 0x4000;
    DAT_71053386ec = 0x8000;
    _DAT_71053386c1 = 0x4645525f54534f;
    DAT_71053386c8._0_1_ = 0x52;
    DAT_71053386b9._0_7_ = 0x5f524f5252494d;
    DAT_71053386b9._7_1_ = 0x50;
    DAT_7105338711._0_7_ = 0x5f524f5252494d;
    DAT_7105338711._7_1_ = 0x50;
    DAT_7105338740 = 0x4000;
    DAT_7105338744 = 0x8000;
    DAT_7105338748 = 1;
    uRam0000007105338701 = 0x49555f54434152;
    DAT_71053386f9._0_7_ = 0x45525f54534f50;
    DAT_71053386f9._7_1_ = 0x46;
    _DAT_7105338708 = 0;
    DAT_7105338719._0_7_ = 0x4645525f54534f;
    DAT_7105338719._7_1_ = 0x52;
    DAT_7105338723 = 0x54;
    DAT_7105338721 = 0x4341;
    _DAT_7105338724 = 0;
    DAT_7105338728 = 0;
    _DAT_7105338681 = 0;
    _DAT_7105338683 = 0;
    _DAT_7105338685 = 0;
    DAT_7105338678 = 0xe;
    DAT_710533867f = 0x4e;
    DAT_710533867d = 0x4941;
    DAT_7105338679 = 0x4d5f4246;
    DAT_7105338680 = 0;
    DAT_71053386d8 = 0;
    DAT_71053386e0 = 0;
    DAT_7105338730 = 0;
    DAT_7105338738 = 0;
    DAT_7105338760._4_4_ = 0;
    DAT_7105338760._1_2_ = 0x5846;
    DAT_7105338760._3_1_ = 0;
    _DAT_7105338759 = 0x5f44485f524145;
    DAT_7105338760._0_1_ = 0x56;
    DAT_7105338751._0_7_ = 0x5f544345464645;
    DAT_7105338751._7_1_ = 0x4e;
    DAT_7105338768 = 0x24;
    DAT_7105338778._4_4_ = 0;
    DAT_7105338778._1_2_ = 0x5241;
    _DAT_7105338771 = 0x4e5f5443454646;
    DAT_7105338778._0_1_ = 0x45;
    DAT_7105338769._0_7_ = 0x5f524f5252494d;
    DAT_7105338769._7_1_ = 0x45;
    DAT_7105338780 = 0xe;
    DAT_7105338778._3_1_ = 0;
    DAT_7105338787 = 0x4e;
    _DAT_7105338789 = 0;
    _DAT_710533878d = 0;
    DAT_7105338790._1_4_ = 0;
    DAT_7105338790._5_1_ = 0;
    DAT_7105338790._6_1_ = 0;
    DAT_7105338790._7_1_ = 0;
    DAT_7105338785 = 0x4941;
    DAT_7105338781 = 0x4d5f4246;
    DAT_7105338788 = 0;
    DAT_7105338798 = 0x8000;
    DAT_710533879c = 0x8000;
    DAT_71053387a0 = 0;
    DAT_71053387a8 = 0x24;
    DAT_71053387b8._4_4_ = 0;
    DAT_71053387b8._1_2_ = 0x4433;
    _DAT_71053387b1 = 0x5443454646455f;
    DAT_71053387b8._0_1_ = 0x5f;
    DAT_71053387a9._0_7_ = 0x555f444e454c42;
    DAT_71053387a9._7_1_ = 0x49;
    DAT_71053387b8._3_1_ = 0;
    DAT_71053387c0 = 0x26;
    DAT_71053387d0._1_2_ = 0x4345;
    _DAT_71053387c9 = 0x46455f444e454c;
    DAT_71053387d0._0_1_ = 0x46;
    DAT_71053387c1._0_7_ = 0x5f524f5252494d;
    DAT_71053387c1._7_1_ = 0x42;
    DAT_71053387d0._3_1_ = 0x54;
    DAT_71053387d0._4_4_ = 0;
    DAT_71053387d8 = 0;
    DAT_71053387f0 = 0x4000;
    DAT_71053387f4 = 0x8000;
    DAT_71053387f8 = 0;
    DAT_71053387f9 = 1;
    DAT_7105338800 = 0x16;
    DAT_7105338810 = 0;
    DAT_710533880b = 0x4e;
    DAT_71053387e0 = 0;
    DAT_71053387e8 = 0;
    _DAT_7105338809 = 0x4941;
    DAT_7105338801._0_7_ = 0x5f544345464645;
    DAT_7105338801._7_1_ = 0x4d;
    _DAT_710533880c = 0;
    DAT_7105338818 = 0x1a;
    uRam0000007105338827 = 0;
    DAT_7105338828 = 0;
    uRam0000007105338821 = 0x5443454646;
    DAT_7105338819._0_5_ = 0x4f5252494d;
    DAT_7105338819._5_2_ = 0x5f52;
    DAT_7105338819._7_1_ = 0x45;
    DAT_7105338826 = 0;
    DAT_7105338850 = 0;
    DAT_7105338868._2_6_ = 0;
    DAT_7105338840 = 0;
    DAT_7105338848 = 0x800000020000;
    DAT_7105338858 = 0x20;
    DAT_7105338838 = 0;
    DAT_7105338830 = 0;
    _DAT_7105338861 = 0x4c475f54434546;
    DAT_7105338868._0_1_ = 0x52;
    DAT_7105338859._0_7_ = 0x455f444e454c42;
    DAT_7105338859._7_1_ = 0x46;
    DAT_7105338868._1_1_ = 0;
    DAT_7105338870 = 0x26;
    DAT_7105338880._1_2_ = 0x4345;
    _DAT_7105338879 = 0x46455f444e454c;
    DAT_7105338880._0_1_ = 0x46;
    DAT_7105338871._0_7_ = 0x5f524f5252494d;
    DAT_7105338871._7_1_ = 0x42;
    DAT_71053388a0 = 0x10000;
    DAT_71053388a9 = 1;
    DAT_7105338880._3_1_ = 0x54;
    DAT_7105338880._4_4_ = 0;
    DAT_7105338898 = 0;
    DAT_7105338890 = 0;
    DAT_7105338888 = 0;
    DAT_71053388a4 = 0x8000;
    DAT_71053388a8 = 0;
    DAT_71053388c0 = 0;
    uRam00000071053388bf = 0;
    DAT_71053388b0 = 0x1a;
    uRam00000071053388b9 = 0x425f4e4941;
    DAT_71053388b1._0_5_ = 0x4345464645;
    DAT_71053388b1._5_2_ = 0x5f54;
    DAT_71053388b1._7_1_ = 0x4d;
    DAT_71053388be = 0;
    DAT_71053388d8 = 0;
    uRam00000071053388d7 = 0;
    DAT_71053388c8 = 0x1a;
    uRam00000071053388d1 = 0x5443454646;
    DAT_71053388c9._0_5_ = 0x4f5252494d;
    DAT_71053388c9._5_2_ = 0x5f52;
    DAT_71053388c9._7_1_ = 0x45;
    DAT_71053388f8 = 0x800000004000;
    DAT_7105338908 = 0x22;
    DAT_7105338918._3_5_ = 0;
    DAT_7105338918._1_1_ = 0x46;
    DAT_71053388d6 = 0;
    DAT_71053388f0 = 0;
    DAT_71053388e8 = 0;
    _DAT_71053388e0 = 0;
    DAT_7105338900 = 0;
    _DAT_7105338911 = 0x5846565f524145;
    DAT_7105338918._0_1_ = 0x5f;
    DAT_7105338909._0_7_ = 0x5f544345464645;
    DAT_7105338909._7_1_ = 0x4e;
    DAT_7105338918._2_1_ = 0;
    DAT_7105338930._4_4_ = 0;
    DAT_7105338920 = 0x24;
    DAT_7105338930._1_2_ = 0x5241;
    _DAT_7105338929 = 0x4e5f5443454646;
    DAT_7105338930._0_1_ = 0x45;
    DAT_7105338921._0_7_ = 0x5f524f5252494d;
    DAT_7105338921._7_1_ = 0x45;
    DAT_7105338950 = 0x4000;
    DAT_7105338970._3_5_ = 0;
    DAT_7105338970._1_1_ = 0x45;
    DAT_7105338930._3_1_ = 0;
    DAT_7105338948 = 0;
    DAT_7105338940 = 0;
    _DAT_7105338938 = 0;
    DAT_7105338954 = 0x8000;
    DAT_7105338958 = 0;
    DAT_7105338960 = 0x22;
    _DAT_7105338969 = 0x49465f54434546;
    DAT_7105338970._0_1_ = 0x4e;
    DAT_7105338961._0_7_ = 0x455f444e454c42;
    DAT_7105338961._7_1_ = 0x46;
    DAT_7105338970._2_1_ = 0;
    DAT_7105338988._4_4_ = 0;
    DAT_7105338978 = 0x24;
    DAT_7105338988._1_2_ = 0x5241;
    _DAT_7105338981 = 0x4e5f5443454646;
    DAT_7105338988._0_1_ = 0x45;
    DAT_7105338979._0_7_ = 0x5f524f5252494d;
    DAT_7105338979._7_1_ = 0x45;
    DAT_71053389a8 = 0x40000;
    DAT_71053389ac = 0x8000;
    DAT_71053389b8 = 0x2a;
    DAT_7105338988._3_1_ = 0;
    DAT_71053389a0 = 0;
    DAT_7105338998 = 0;
    _DAT_7105338990 = 0;
    DAT_71053389b0 = 0;
    DAT_71053389c8._7_1_ = 0;
    DAT_71053389c8._1_5_ = 0x454e49465f;
    _DAT_71053389c1 = 0x5f54434546;
    _DAT_71053389c6 = 0x4c47;
    DAT_71053389c8._0_1_ = 0x52;
    DAT_71053389b9._0_7_ = 0x455f444e454c42;
    DAT_71053389b9._7_1_ = 0x46;
    DAT_71053389c8._6_1_ = 0;
    DAT_71053389e0 = 0;
    uRam00000071053389df = 0;
    DAT_71053389d0 = 0x1a;
    uRam00000071053389d9 = 0x5443454646;
    DAT_71053389d1._0_5_ = 0x4f5252494d;
    DAT_71053389d1._5_2_ = 0x5f52;
    DAT_71053389d1._7_1_ = 0x45;
    DAT_71053389de = 0;
    DAT_71053389f8 = 0;
    DAT_71053389f0 = 0;
    _DAT_71053389e8 = 0;
    DAT_7105338a00 = 0x800000040000;
    DAT_7105338a08 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105338db0);
  }
  iVar11 = 0;
  if (!bVar10) {
    iVar11 = *(int *)(param_1 + 0x34);
  }
  if (iVar11 == 1) {
    uStack_88 = 0;
    local_90._0_1_ = 0;
    local_90._1_1_ = 0;
    local_90._2_1_ = 0;
    local_90._3_2_ = 0;
    local_90._5_3_ = 0;
    if ((DAT_7105338620 & 1) != 0) {
      *(undefined1 *)
       CONCAT26(DAT_7105338630._6_2_,
                CONCAT15(DAT_7105338630._5_1_,
                         CONCAT14(DAT_7105338630._4_1_,
                                  CONCAT13(DAT_7105338630._3_1_,
                                           CONCAT21(DAT_7105338630._1_2_,(undefined1)DAT_7105338630)
                                          )))) = 0;
      DAT_7105338621._7_1_ = 0;
      _DAT_7105338629 = 0;
      DAT_710533862d = 0;
      _DAT_710533862e = 0;
      if ((DAT_7105338620 & 1) != 0) {
        pvVar19 = (void *)CONCAT26(DAT_7105338630._6_2_,
                                   CONCAT15(DAT_7105338630._5_1_,
                                            CONCAT14(DAT_7105338630._4_1_,
                                                     CONCAT13(DAT_7105338630._3_1_,
                                                              CONCAT21(DAT_7105338630._1_2_,
                                                                       (undefined1)DAT_7105338630)))
                                           ));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    DAT_7105338630._6_2_ = uStack_88;
    uVar8 = local_90._5_3_;
    DAT_7105338630._1_2_ = local_90._3_2_;
    DAT_7105338630._0_1_ = local_90._2_1_;
    DAT_7105338620 = 0x18;
    _DAT_7105338629 = 0x3635325f;
    uStack_88 = 0;
    _DAT_710533862e = CONCAT11(local_90._1_1_,(byte)local_90);
    local_90._0_1_ = 0;
    local_90._1_1_ = 0;
    local_90._2_1_ = 0;
    local_90._3_2_ = 0;
    local_90._5_3_ = 0;
    DAT_7105338630._3_1_ = (undefined1)uVar8;
    DAT_7105338630._4_1_ = (undefined1)((uint3)uVar8 >> 8);
    DAT_7105338630._5_1_ = (undefined1)((uint3)uVar8 >> 0x10);
    DAT_7105338621._0_1_ = 0x46;
    DAT_7105338621._1_6_ = 0x4e454c425f42;
    DAT_7105338621._7_1_ = 0x44;
    DAT_710533862d = 0;
    uStack_86 = 0;
    if ((DAT_7105338678 & 1) != 0) {
      *(undefined1 *)
       CONCAT17(DAT_710533868f,
                CONCAT25(DAT_710533868d,CONCAT23(uRam000000710533868b,_DAT_7105338688))) = 0;
      DAT_7105338680 = 0;
      _DAT_7105338681 = 0;
      _DAT_7105338683 = 0;
      _DAT_7105338685 = 0;
      if ((DAT_7105338678 & 1) != 0) {
        pvVar19 = (void *)CONCAT17(DAT_710533868f,
                                   CONCAT25(DAT_710533868d,
                                            CONCAT23(uRam000000710533868b,_DAT_7105338688)));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    uVar8 = local_90._5_3_;
    DAT_710533868f = uStack_86;
    DAT_710533868d = uStack_88;
    _DAT_7105338685 = CONCAT12(local_90._2_1_,CONCAT11(local_90._1_1_,(byte)local_90));
    uVar21 = CONCAT35(local_90._5_3_,CONCAT23(local_90._3_2_,_DAT_7105338685));
    local_90._0_1_ = 0;
    local_90._1_1_ = 0;
    local_90._2_1_ = 0;
    local_90._3_2_ = 0;
    local_90._5_3_ = 0;
    DAT_7105338678 = 0x16;
    _DAT_7105338681 = 0x365f;
    _DAT_7105338683 = 0x34;
    uStack_86 = 0;
    _DAT_7105338688 = (undefined3)((ulong)uVar21 >> 0x18);
    uRam000000710533868b = (undefined2)((uint3)uVar8 >> 8);
    DAT_7105338679 = 0x425f4246;
    DAT_710533867d = 0x454c;
    DAT_710533867f = 0x4e;
    DAT_7105338680 = 0x44;
    uStack_88 = 0;
    if ((DAT_7105338780 & 1) != 0) {
      *(undefined1 *)
       CONCAT17(DAT_7105338790._7_1_,
                CONCAT16(DAT_7105338790._6_1_,
                         CONCAT15(DAT_7105338790._5_1_,
                                  CONCAT41(DAT_7105338790._1_4_,(byte)DAT_7105338790)))) = 0;
      bVar15 = (byte)DAT_7105338790;
      DAT_7105338788 = 0;
      _DAT_7105338789 = 0;
      _DAT_710533878d = (uint)(byte)DAT_7105338790 << 0x18;
      if ((DAT_7105338780 & 1) != 0) {
        pvVar19 = (void *)CONCAT17(DAT_7105338790._7_1_,
                                   CONCAT16(DAT_7105338790._6_1_,
                                            CONCAT15(DAT_7105338790._5_1_,
                                                     CONCAT41(DAT_7105338790._1_4_,bVar15))));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    _DAT_7105338789 = 0x34365f;
    uVar21 = CONCAT35(local_90._5_3_,
                      CONCAT23(local_90._3_2_,
                               CONCAT12(local_90._2_1_,CONCAT11(local_90._1_1_,(byte)local_90))));
    DAT_7105338790._5_1_ = (undefined1)uStack_88;
    DAT_7105338790._6_1_ = (undefined1)((ushort)uStack_88 >> 8);
    uVar27 = 0x1b9bf729ed;
  }
  else {
    if (iVar11 != 2) {
      local_90._0_1_ = 0;
      local_90._1_1_ = 0;
      if ((DAT_7105338620 & 1) != 0) {
        *(undefined1 *)
         CONCAT26(DAT_7105338630._6_2_,
                  CONCAT15(DAT_7105338630._5_1_,
                           CONCAT14(DAT_7105338630._4_1_,
                                    CONCAT13(DAT_7105338630._3_1_,
                                             CONCAT21(DAT_7105338630._1_2_,
                                                      (undefined1)DAT_7105338630))))) = 0;
        DAT_7105338621._7_1_ = 0;
        _DAT_7105338629 = 0;
        DAT_710533862d = 0;
        _DAT_710533862e = 0;
        if ((DAT_7105338620 & 1) != 0) {
          pvVar19 = (void *)CONCAT26(DAT_7105338630._6_2_,
                                     CONCAT15(DAT_7105338630._5_1_,
                                              CONCAT14(DAT_7105338630._4_1_,
                                                       CONCAT13(DAT_7105338630._3_1_,
                                                                CONCAT21(DAT_7105338630._1_2_,
                                                                         (undefined1)DAT_7105338630)
                                                               ))));
          nu::VirtualFreeHook(pvVar19);
          FUN_710392eb40((ulong)pvVar19);
        }
      }
      DAT_7105338630._6_2_ = CONCAT11(local_90._1_1_,(byte)local_90);
      DAT_7105338620 = 0x28;
      DAT_7105338630._1_2_ = 0x4c4f;
      DAT_7105338630._3_1_ = 0x4f;
      DAT_7105338630._4_1_ = 0x52;
      DAT_7105338630._5_1_ = 0;
      _DAT_7105338629 = 0x41524645;
      DAT_710533862d = 0x43;
      _DAT_710533862e = 0x5f54;
      DAT_7105338630._0_1_ = 0x43;
      DAT_7105338621._0_1_ = 0x46;
      DAT_7105338621._1_6_ = 0x5f4552505f42;
      DAT_7105338621._7_1_ = 0x52;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      local_90._0_1_ = 0;
      local_90._1_1_ = 0;
      local_90._2_1_ = 0;
      local_90._3_2_ = 0;
      local_90._5_3_ = 0;
      if ((DAT_7105338678 & 1) != 0) {
        *(undefined1 *)
         CONCAT17(DAT_710533868f,
                  CONCAT25(DAT_710533868d,CONCAT23(uRam000000710533868b,_DAT_7105338688))) = 0;
        DAT_7105338680 = 0;
        _DAT_7105338681 = 0;
        _DAT_7105338683 = 0;
        _DAT_7105338685 = 0;
        if ((DAT_7105338678 & 1) != 0) {
          pvVar19 = (void *)CONCAT17(DAT_710533868f,
                                     CONCAT25(DAT_710533868d,
                                              CONCAT23(uRam000000710533868b,_DAT_7105338688)));
          nu::VirtualFreeHook(pvVar19);
          FUN_710392eb40((ulong)pvVar19);
        }
      }
      _DAT_7105338683 = CONCAT11(local_90._1_1_,(byte)local_90);
      DAT_7105338678 = 0x12;
      _DAT_7105338681 = 0x52;
      DAT_7105338679 = 0x4d5f4246;
      DAT_710533867d = 0x5249;
      DAT_710533867f = 0x52;
      DAT_7105338680 = 0x4f;
      uRam000000710533868b = uStack_88;
      DAT_710533868d = (undefined2)CONCAT21(uStack_85,uStack_86);
      DAT_710533868f = (undefined1)((ushort)uStack_85 >> 8);
      _DAT_7105338685 =
           (undefined3)(CONCAT23(local_90._3_2_,CONCAT12(local_90._2_1_,_DAT_7105338683)) >> 0x10);
      _DAT_7105338688 = local_90._5_3_;
      local_90._0_1_ = 0;
      local_90._1_1_ = 0;
      if ((DAT_7105338780 & 1) != 0) {
        *(undefined1 *)
         CONCAT17(DAT_7105338790._7_1_,
                  CONCAT16(DAT_7105338790._6_1_,
                           CONCAT15(DAT_7105338790._5_1_,
                                    CONCAT41(DAT_7105338790._1_4_,(byte)DAT_7105338790)))) = 0;
        bVar15 = (byte)DAT_7105338790;
        DAT_7105338788 = 0;
        _DAT_7105338789 = 0;
        _DAT_710533878d = (uint)(byte)DAT_7105338790 << 0x18;
        if ((DAT_7105338780 & 1) != 0) {
          pvVar19 = (void *)CONCAT17(DAT_7105338790._7_1_,
                                     CONCAT16(DAT_7105338790._6_1_,
                                              CONCAT15(DAT_7105338790._5_1_,
                                                       CONCAT41(DAT_7105338790._1_4_,bVar15))));
          nu::VirtualFreeHook(pvVar19);
          FUN_710392eb40((ulong)pvVar19);
        }
      }
      DAT_7105338780 = 0x28;
      DAT_7105338790._1_4_ = 0x524f4c4f;
      _DAT_7105338789 = 0x41524645;
      _DAT_710533878d = 0x435f5443;
      DAT_7105338781 = 0x505f4246;
      DAT_7105338785 = 0x4552;
      DAT_7105338787 = 0x5f;
      DAT_7105338788 = 0x52;
      DAT_7105338790._5_1_ = 0;
      uVar27 = 0x1beb9ddd62;
      DAT_7105338790._6_1_ = (byte)local_90;
      DAT_7105338790._7_1_ = local_90._1_1_;
      goto LAB_710362e474;
    }
    if ((DAT_7105338620 & 1) != 0) {
      *(undefined1 *)
       CONCAT26(DAT_7105338630._6_2_,
                CONCAT15(DAT_7105338630._5_1_,
                         CONCAT14(DAT_7105338630._4_1_,
                                  CONCAT13(DAT_7105338630._3_1_,
                                           CONCAT21(DAT_7105338630._1_2_,(undefined1)DAT_7105338630)
                                          )))) = 0;
      DAT_7105338621._7_1_ = 0;
      _DAT_7105338629 = 0;
      DAT_710533862d = 0;
      _DAT_710533862e = 0;
      if ((DAT_7105338620 & 1) != 0) {
        pvVar19 = (void *)CONCAT26(DAT_7105338630._6_2_,
                                   CONCAT15(DAT_7105338630._5_1_,
                                            CONCAT14(DAT_7105338630._4_1_,
                                                     CONCAT13(DAT_7105338630._3_1_,
                                                              CONCAT21(DAT_7105338630._1_2_,
                                                                       (undefined1)DAT_7105338630)))
                                           ));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    DAT_7105338620 = 0x24;
    DAT_7105338630._1_2_ = 0x3631;
    DAT_7105338630._3_1_ = 0;
    _DAT_7105338629 = 0x5f454c41;
    DAT_710533862d = 0x44;
    _DAT_710533862e = 0x574f;
    DAT_7105338630._0_1_ = 0x4e;
    DAT_7105338630._4_1_ = 0;
    DAT_7105338630._5_1_ = 0;
    DAT_7105338630._6_2_ = 0;
    DAT_7105338621._0_1_ = 0x46;
    DAT_7105338621._1_6_ = 0x535f4f4d5f42;
    DAT_7105338621._7_1_ = 0x43;
    uStack_86 = 0;
    uStack_88 = 0;
    local_90._0_1_ = 0;
    local_90._1_1_ = 0;
    local_90._2_1_ = 0;
    local_90._3_2_ = 0;
    local_90._5_3_ = 0;
    if ((DAT_7105338678 & 1) != 0) {
      *(undefined1 *)
       CONCAT17(DAT_710533868f,
                CONCAT25(DAT_710533868d,CONCAT23(uRam000000710533868b,_DAT_7105338688))) = 0;
      DAT_7105338680 = 0;
      _DAT_7105338681 = 0;
      _DAT_7105338683 = 0;
      _DAT_7105338685 = 0;
      if ((DAT_7105338678 & 1) != 0) {
        pvVar19 = (void *)CONCAT17(DAT_710533868f,
                                   CONCAT25(DAT_710533868d,
                                            CONCAT23(uRam000000710533868b,_DAT_7105338688)));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    uVar8 = local_90._5_3_;
    DAT_710533868f = uStack_86;
    DAT_710533868d = uStack_88;
    _DAT_7105338685 = CONCAT12(local_90._2_1_,CONCAT11(local_90._1_1_,(byte)local_90));
    uVar21 = CONCAT35(local_90._5_3_,CONCAT23(local_90._3_2_,_DAT_7105338685));
    local_90._0_1_ = 0;
    local_90._1_1_ = 0;
    local_90._2_1_ = 0;
    local_90._3_2_ = 0;
    local_90._5_3_ = 0;
    DAT_7105338678 = 0x16;
    _DAT_7105338681 = 0x315f;
    _DAT_7105338683 = 0x36;
    uStack_86 = 0;
    _DAT_7105338688 = (undefined3)((ulong)uVar21 >> 0x18);
    uRam000000710533868b = (undefined2)((uint3)uVar8 >> 8);
    DAT_7105338679 = 0x425f4246;
    DAT_710533867d = 0x454c;
    DAT_710533867f = 0x4e;
    DAT_7105338680 = 0x44;
    uStack_88 = 0;
    if ((DAT_7105338780 & 1) != 0) {
      *(undefined1 *)
       CONCAT17(DAT_7105338790._7_1_,
                CONCAT16(DAT_7105338790._6_1_,
                         CONCAT15(DAT_7105338790._5_1_,
                                  CONCAT41(DAT_7105338790._1_4_,(byte)DAT_7105338790)))) = 0;
      bVar15 = (byte)DAT_7105338790;
      DAT_7105338788 = 0;
      _DAT_7105338789 = 0;
      _DAT_710533878d = (uint)(byte)DAT_7105338790 << 0x18;
      if ((DAT_7105338780 & 1) != 0) {
        pvVar19 = (void *)CONCAT17(DAT_7105338790._7_1_,
                                   CONCAT16(DAT_7105338790._6_1_,
                                            CONCAT15(DAT_7105338790._5_1_,
                                                     CONCAT41(DAT_7105338790._1_4_,bVar15))));
        nu::VirtualFreeHook(pvVar19);
        FUN_710392eb40((ulong)pvVar19);
      }
    }
    _DAT_7105338789 = 0x36315f;
    uVar21 = CONCAT35(local_90._5_3_,
                      CONCAT23(local_90._3_2_,
                               CONCAT12(local_90._2_1_,CONCAT11(local_90._1_1_,(byte)local_90))));
    uVar27 = 0x1cbeefe7bd;
    DAT_7105338790._5_1_ = (undefined1)uStack_88;
    DAT_7105338790._6_1_ = (undefined1)((ushort)uStack_88 >> 8);
  }
  DAT_7105338788 = 0x44;
  DAT_7105338787 = 0x4e;
  DAT_7105338785 = 0x454c;
  DAT_7105338781 = 0x425f4246;
  DAT_7105338780 = 0x16;
  _DAT_710533878d = (int)uVar21;
  DAT_7105338790._1_4_ = (undefined4)((ulong)uVar21 >> 0x20);
  DAT_7105338790._7_1_ = uStack_86;
LAB_710362e474:
  plVar13 = lib::Singleton<lib::EffectManager>::instance_;
  FUN_7103564800(*lib::Singleton<lib::EffectManager>::instance_,&DAT_71053384e8,ppuVar16,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338540,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338598,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053385f0,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338648,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053386a0,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053386f8,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338750,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053387a8,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338800,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338858,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053388b0,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338908,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_7105338960,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  FUN_7103564800(*plVar13,&DAT_71053389b8,ppuVar16,param_4,param_5,param_6,param_7,param_8);
  DAT_7105334804 = (uint)(param_2 == 2);
  FUN_71035b6710(DAT_7105336db8,uVar27);
  return;
}

