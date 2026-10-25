// addr:      710370bc10
// offset:    0x370bc10
// name:      nex_connection_loop
// mangled:   
// signature: undefined __cdecl nex_connection_loop(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void nex_connection_loop(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                        long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ErrorResultVariant *this;
  code *pcVar1;
  ushort *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  uint *puVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar20;
  undefined1 uVar21;
  long lVar22;
  ErrorResultVariant *this_00;
  ErrorResultVariant *this_01;
  ErrorResultVariant *this_02;
  long lVar23;
  long **pplVar24;
  long lVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  long ***ppplVar30;
  undefined8 *puVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_118 [4];
  long ***local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined7 local_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  long local_c8;
  uint local_bc;
  undefined4 local_b8 [2];
  long ***local_b0;
  ulong local_a8;
  long lStack_a0;
  long ***local_98;
  ulong local_90;
  long local_88;
  long lStack_80;
  
  if (param_1[2] == 0) {
    lVar13 = FUN_710392e290(0x10,0x20000,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar13 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
        local_108 = (long ***)0x20000;
        param_3 = &local_108;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar14 & 1) != 0) &&
           (lVar13 = FUN_710392e290(0x10,0x20000,param_3,param_4,param_5,param_6,param_7,param_8),
           lVar13 != 0)) goto LAB_710370bc94;
      }
      lVar13 = 0;
    }
LAB_710370bc94:
    param_1[4] = lVar13;
    param_1[5] = lVar13;
    param_1[2] = lVar13;
    param_1[3] = lVar13 + 0x1ffff;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  DAT_71052ae0a8 = FUN_71036f8320;
  DAT_71052ae0b0 = FUN_71036f8350;
  FUN_71001b87f0();
  DAT_71052af0e0 = 2;
  FUN_71001b1400();
  lVar13 = *param_1;
  if (*(long *)(lVar13 + 0x38) == 0) {
    lVar22 = FUN_710392e290(0x10,0x42a288,param_3,param_4,param_5,param_6,param_7,param_8);
    if (lVar22 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
        local_108 = (long ***)0x42a288;
        pppplVar20 = &local_108;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar14 & 1) != 0) &&
           (lVar22 = FUN_710392e290(0x10,0x42a288,pppplVar20,param_4,param_5,param_6,param_7,param_8
                                   ), lVar22 != 0)) goto LAB_710370bd58;
      }
      lVar22 = 0;
    }
LAB_710370bd58:
    *(undefined8 *)(lVar22 + 0x2000) = 0;
    *(undefined8 *)(lVar22 + 0x4008) = 0;
    *(undefined8 *)(lVar22 + 0x6010) = 0;
    *(long *)(lVar22 + 0x206018) = lVar22 + 0x6018;
    param_3 = (long ****)&DAT_00000208;
    *(long *)(lVar22 + 0x406020) = lVar22 + 0x206020;
    *(long *)(lVar22 + 0x426028) = lVar22 + 0x406028;
    *(undefined8 *)(lVar22 + 0x42a030) = 0;
    *(long *)(lVar22 + 0x42a038) = lVar13;
    *(undefined1 *)(lVar22 + 0x42a050) = 0;
    *(undefined8 *)(lVar22 + 0x42a048) = 0;
    *(undefined8 *)(lVar22 + 0x42a040) = 0;
    memset((void *)(lVar22 + 0x42a058),0,0x208);
    *(undefined8 *)(lVar22 + 0x42a070) = 0;
    *(undefined4 *)(lVar22 + 0x42a078) = 0;
    *(undefined8 *)(lVar22 + 0x42a158) = 0;
    *(undefined8 *)(lVar22 + 0x42a150) = 0;
    *(undefined8 *)(lVar22 + 0x42a148) = 0;
    *(undefined8 *)(lVar22 + 0x42a140) = 0;
    *(undefined8 *)(lVar22 + 0x42a138) = 0;
    *(undefined8 *)(lVar22 + 0x42a130) = 0;
    *(undefined8 *)(lVar22 + 0x42a128) = 0;
    *(undefined8 *)(lVar22 + 0x42a120) = 0;
    *(undefined8 *)(lVar22 + 0x42a118) = 0;
    *(undefined8 *)(lVar22 + 0x42a110) = 0;
    *(undefined8 *)(lVar22 + 0x42a108) = 0;
    *(undefined8 *)(lVar22 + 0x42a100) = 0;
    *(undefined8 *)(lVar22 + 0x42a0f8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0f0) = 0;
    *(undefined8 *)(lVar22 + 0x42a0e8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0e0) = 0;
    *(undefined8 *)(lVar22 + 0x42a0d8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0d0) = 0;
    *(undefined8 *)(lVar22 + 0x42a0c8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0c0) = 0;
    *(undefined8 *)(lVar22 + 0x42a0b8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0b0) = 0;
    *(undefined8 *)(lVar22 + 0x42a0a8) = 0;
    *(undefined8 *)(lVar22 + 0x42a0a0) = 0;
    *(undefined8 *)(lVar22 + 0x42a098) = 0;
    *(undefined4 *)(lVar22 + 0x42a090) = 0;
    *(undefined8 *)(lVar22 + 0x42a088) = 0;
    *(undefined8 *)(lVar22 + 0x42a080) = 0;
    *(undefined ***)(lVar22 + 0x42a068) = &PTR_FUN_710523be60;
    *(undefined8 *)(lVar22 + 0x42a168) = 0;
    *(undefined8 *)(lVar22 + 0x42a250) = 0;
    *(undefined8 *)(lVar22 + 0x42a248) = 0;
    *(undefined8 *)(lVar22 + 0x42a240) = 0;
    *(undefined8 *)(lVar22 + 0x42a238) = 0;
    *(undefined8 *)(lVar22 + 0x42a230) = 0;
    *(undefined8 *)(lVar22 + 0x42a228) = 0;
    *(undefined8 *)(lVar22 + 0x42a220) = 0;
    *(undefined8 *)(lVar22 + 0x42a218) = 0;
    *(undefined8 *)(lVar22 + 0x42a210) = 0;
    *(undefined8 *)(lVar22 + 0x42a208) = 0;
    *(undefined8 *)(lVar22 + 0x42a200) = 0;
    *(undefined8 *)(lVar22 + 0x42a1f8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1f0) = 0;
    *(undefined8 *)(lVar22 + 0x42a1e8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1e0) = 0;
    *(undefined8 *)(lVar22 + 0x42a1d8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1d0) = 0;
    *(undefined8 *)(lVar22 + 0x42a1c8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1c0) = 0;
    *(undefined8 *)(lVar22 + 0x42a1b8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1b0) = 0;
    *(undefined8 *)(lVar22 + 0x42a1a8) = 0;
    *(undefined8 *)(lVar22 + 0x42a1a0) = 0;
    *(undefined8 *)(lVar22 + 0x42a198) = 0;
    *(undefined8 *)(lVar22 + 0x42a190) = 0;
    *(undefined4 *)(lVar22 + 0x42a188) = 0;
    *(undefined8 *)(lVar22 + 0x42a180) = 0;
    *(undefined8 *)(lVar22 + 0x42a178) = 0;
    *(undefined8 *)(lVar22 + 0x42a268) = 0;
    *(undefined8 *)(lVar22 + 0x42a280) = 0;
    *(undefined8 *)(lVar22 + 0x42a278) = 0;
    *(undefined8 *)(lVar22 + 0x42a270) = 0;
    *(undefined8 *)(lVar22 + 0x42a260) = 0;
    std::recursive_mutex::recursive_mutex((recursive_mutex *)(lVar22 + 0x42a268));
    *(long *)(lVar13 + 0x38) = lVar22;
    lVar13 = *param_1;
    lVar22 = *(long *)(lVar13 + 0x48);
  }
  else {
    lVar22 = *(long *)(lVar13 + 0x48);
  }
  if (lVar22 == 0) {
    if (DAT_710533a088 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      param_3 = (long ****)&DAT_00000008;
      plVar15 = (long *)(**(code **)(*DAT_710533a088 + 0x28))(DAT_710533a088,0xa0);
    }
    plVar15[9] = 0;
    *(undefined1 *)(plVar15 + 10) = 0;
    *(undefined2 *)(plVar15 + 8) = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[2] = 0;
    plVar15[3] = 0;
    *plVar15 = lVar13;
    plVar15[1] = 0;
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
        local_108 = (long ***)&DAT_000000f8;
        param_3 = &local_108;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar14 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar16 != (undefined8 *)0x0)) goto LAB_710370c1cc;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_710370c1cc:
    *puVar16 = 0;
    FUN_710022e6b0(puVar16 + 1,0);
    *(undefined1 *)((long)puVar16 + 0xd2) = 0;
    *(undefined2 *)(puVar16 + 0x1a) = 0;
    puVar16[0x19] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)puVar16 + 0xd4));
    puVar16[0x1e] = 0;
    puVar16[0x1d] = 0;
    puVar16[0x1c] = puVar16 + 0x1d;
    plVar15[0xb] = (long)puVar16;
    FUN_7103709800(plVar15 + 0xc,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_71036fe100(plVar15 + 0xd,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
        local_108 = (long ***)&DAT_000000f8;
        param_3 = &local_108;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar14 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,0xf8,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar16 != (undefined8 *)0x0)) goto LAB_710370c270;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_710370c270:
    *puVar16 = 0;
    FUN_710022e6b0(puVar16 + 1,0);
    *(undefined1 *)((long)puVar16 + 0xe2) = 0;
    *(undefined2 *)(puVar16 + 0x1c) = 0;
    puVar16[0x19] = &PTR_FUN_710523bd78;
    puVar16[0x1a] = 0;
    puVar16[0x1b] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)puVar16 + 0xe4));
    *(undefined1 *)(puVar16 + 0x1e) = 0;
    plVar15[0xe] = (long)puVar16;
    puVar16 = (undefined8 *)
              FUN_710392e290(0x10,0xe0,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar16 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
        local_108 = (long ***)&DAT_000000e0;
        pppplVar20 = &local_108;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar14 & 1) != 0) &&
           (puVar16 = (undefined8 *)
                      FUN_710392e290(0x10,0xe0,pppplVar20,param_4,param_5,param_6,param_7,param_8),
           puVar16 != (undefined8 *)0x0)) goto LAB_710370c304;
      }
      puVar16 = (undefined8 *)0x0;
    }
LAB_710370c304:
    *puVar16 = 0;
    FUN_710022e6b0(puVar16 + 1,0);
    *(undefined1 *)((long)puVar16 + 0xd2) = 0;
    *(undefined2 *)(puVar16 + 0x1a) = 0;
    puVar16[0x19] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)puVar16 + 0xd4));
    *(undefined1 *)((long)plVar15 + 0x8a) = 0;
    *(undefined2 *)(plVar15 + 0x11) = 0;
    plVar15[0xf] = (long)puVar16;
    plVar15[0x10] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar15 + 0x8c));
    *(undefined1 *)(plVar15 + 0x13) = 0;
    puVar16 = (undefined8 *)0x0;
    if ((DAT_710533a088 != (long *)0x0) &&
       (puVar16 = (undefined8 *)(**(code **)(*DAT_710533a088 + 0x28))(DAT_710533a088,0x10,8),
       puVar16 != (undefined8 *)0x0)) {
      *puVar16 = &DAT_710523be18;
      puVar16[1] = lVar13;
    }
    plVar15[1] = (long)puVar16;
    *(long **)(lVar13 + 0x48) = plVar15;
  }
  if (*(long *)(lVar13 + 0x50) == 0) {
    if (DAT_710533a088 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)(**(code **)(*DAT_710533a088 + 0x28))(DAT_710533a088,0x2d8,8);
    }
    *(undefined4 *)(plVar15 + 2) = 0;
    *plVar15 = lVar13;
    plVar15[1] = 0;
    *(undefined1 *)((long)plVar15 + 0x14) = 0;
    *(undefined4 *)(plVar15 + 3) = 0;
    *(undefined1 *)((long)plVar15 + 0x1c) = 0;
    *(undefined4 *)(plVar15 + 4) = 0xffffffff;
    *(undefined1 *)((long)plVar15 + 0x24) = 0;
    *(undefined1 *)(plVar15 + 5) = 0;
    *(undefined8 *)((long)plVar15 + 0x33) = 0;
    *(undefined8 *)((long)plVar15 + 0x2c) = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar15 + 0x3c));
    pppplVar20 = (long ****)&DAT_00000148;
    memset(plVar15 + 9,0,0x148);
    *(undefined4 *)(plVar15 + 0x34) = 0;
    plVar15[0x32] = (long)&PTR_FUN_710523be80;
    plVar15[0x33] = 0;
    *(undefined4 *)(plVar15 + 0x37) = 0;
    plVar15[0x55] = 0;
    plVar15[0x54] = 0;
    plVar15[0x53] = 0;
    plVar15[0x52] = 0;
    *(undefined2 *)(plVar15 + 0x51) = 0;
    plVar15[0x50] = 0;
    plVar15[0x4f] = 0;
    plVar15[0x4e] = 0;
    plVar15[0x4d] = 0;
    plVar15[0x4c] = 0;
    plVar15[0x4b] = 0;
    plVar15[0x4a] = 0;
    plVar15[0x49] = 0;
    plVar15[0x48] = 0;
    plVar15[0x47] = 0;
    plVar15[0x46] = 0;
    plVar15[0x45] = 0;
    plVar15[0x44] = 0;
    plVar15[0x43] = 0;
    plVar15[0x42] = 0;
    plVar15[0x41] = 0;
    plVar15[0x38] = 0;
    plVar15[0x35] = 0;
    plVar15[0x36] = 0;
    plVar15[0x3f] = 0;
    plVar15[0x40] = 0;
    plVar15[0x3d] = 0;
    plVar15[0x3e] = 0;
    plVar15[0x3b] = 0;
    plVar15[0x3c] = 0;
    plVar15[0x39] = 0;
    plVar15[0x3a] = 0;
    std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar15 + 0x52));
    plVar15[0x5a] = 0;
    plVar15[0x59] = 0;
    plVar15[0x58] = 0;
    plVar15[0x57] = 0;
    plVar15[0x56] = 0;
    *(long **)(lVar13 + 0x50) = plVar15;
    if (plVar15[1] == 0) {
      uVar4 = *(uint *)(lVar13 + 0x30);
      uVar12 = uVar4;
      if (uVar4 == 0) {
        uVar12 = 1;
      }
      ppplVar30 = (long ***)(ulong)uVar12;
      lVar22 = FUN_710392e290(8,ppplVar30,pppplVar20,param_4,param_5,param_6,param_7,param_8);
      if (lVar22 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
          pppplVar20 = &local_108;
          local_108 = ppplVar30;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
          if (((uVar14 & 1) != 0) &&
             (lVar22 = FUN_710392e290(8,ppplVar30,pppplVar20,param_4,param_5,param_6,param_7,param_8
                                     ), lVar22 != 0)) goto LAB_710370c528;
        }
        lVar22 = 0;
      }
LAB_710370c528:
      plVar15[1] = lVar22;
      *(uint *)(plVar15 + 2) = uVar4;
      lVar22 = *(long *)(lVar13 + 0x40);
      goto joined_r0x00710370c4a0;
    }
  }
  lVar22 = *(long *)(lVar13 + 0x40);
joined_r0x00710370c4a0:
  if (lVar22 == 0) {
    if (DAT_710533a088 == (long *)0x0) {
      puVar16 = (undefined8 *)0x0;
    }
    else {
      puVar16 = (undefined8 *)(**(code **)(*DAT_710533a088 + 0x28))(DAT_710533a088,0x380,8);
    }
    *(undefined1 *)(puVar16 + 2) = 0;
    *puVar16 = &PTR_FUN_710523c110;
    puVar16[1] = lVar13;
    memset(puVar16 + 3,0,0x223);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)puVar16 + 0x23c));
    puVar16[0x4a] = 0;
    puVar16[0x4b] = puVar16;
    puVar16[0x49] = &PTR_FUN_710523c130;
    puVar16[0x4c] = 0;
    *(undefined1 *)(puVar16 + 0x4d) = 0;
    memset(puVar16 + 0x4e,0,0x110);
    *(undefined8 **)(lVar13 + 0x40) = puVar16;
  }
  param_1[0x421] = *(long *)(*param_1 + 0x38);
  *(undefined1 *)(param_1 + 1) = 1;
  if ((char)param_1[0x422] != '\0') {
    this = (ErrorResultVariant *)((long)&local_100 + 4);
    this_00 = (ErrorResultVariant *)((ulong)&local_108 | 4);
    this_01 = (ErrorResultVariant *)((ulong)&local_b0 | 4);
    this_02 = (ErrorResultVariant *)((ulong)&local_98 | 4);
    do {
      if (DAT_71052ac580 != (long *)0x0) {
        FUN_71000b68a0(DAT_71052ac580,0);
      }
      lVar13 = param_1[0x421];
      if ((lVar13 == 0) ||
         (plVar15 = (long *)(lVar13 + 0x42a040), *(char *)(lVar13 + 0x42a050) == '\0')) {
LAB_710370c7b0:
        lVar13 = *param_1;
        if (lVar13 != 0) goto LAB_710370c7b8;
LAB_710370d6d4:
        uVar14 = 0;
      }
      else {
        std::recursive_mutex::lock();
        plVar17 = (long *)*plVar15;
        if ((plVar17 != (long *)0x0) && (lVar22 = *(long *)(lVar13 + 0x6010) * 8, lVar22 != 0)) {
          (**(code **)(*plVar17 + 0x10))
                    (plVar17,**(undefined8 **)(lVar13 + 0x4010),
                     *(undefined8 **)(lVar13 + 0x4010) + 1);
          if ((undefined8 *)(lVar13 + lVar22 + 0x4010) != (undefined8 *)(lVar13 + 0x4018)) {
            lVar22 = lVar22 + -8;
            puVar16 = (undefined8 *)(lVar13 + 0x4018);
            do {
              (**(code **)(*(long *)*plVar15 + 0x10))
                        ((long *)*plVar15,*(undefined8 *)*puVar16,(undefined8 *)*puVar16 + 1);
              lVar22 = lVar22 + -8;
              puVar16 = puVar16 + 1;
            } while (lVar22 != 0);
          }
        }
        *(undefined8 *)(lVar13 + 0x6010) = 0;
        *(long *)(lVar13 + 0x426028) = lVar13 + 0x406028;
        std::recursive_mutex::unlock();
        lVar22 = DAT_71052adb38;
        if (((DAT_71052adb38 == 0) || (iVar11 = FUN_7100146ba0(DAT_71052adb38), iVar11 != 1)) ||
           (nex_get_connection_error(local_118,lVar22), local_118[0] != 0)) goto LAB_710370c7b0;
        plVar17 = (long *)(lVar13 + 0x406020);
        plVar32 = *(long **)(lVar13 + 0x42a058);
        if ((plVar32 != (long *)0x0) && (*(char *)(lVar13 + 0x42a050) != '\0')) {
          local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
          nn::err::ErrorResultVariant::ErrorResultVariant(this_01);
          local_108 = (long ***)((ulong)local_108 & 0xffffffff00000000);
          nn::err::ErrorResultVariant::operator=(this_01,(Result *)&local_108);
          std::recursive_mutex::lock();
          if (*(long *)(lVar13 + 0x4008) != 0x400) {
            do {
              plVar29 = (long *)*plVar17;
              (**(code **)(*plVar32 + 0x80))
                        (&local_108,plVar32,&local_c8,plVar29 + 1,&local_bc,
                         ((int)lVar13 - (int)plVar29) + 0x406020);
              FUN_71000bcf30((int *)&local_b0,(int *)&local_108);
              if ((int)local_b0 != 0) {
                local_108 = (long ***)CONCAT44(local_108._4_4_,0x2c09);
                nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                if ((int)local_b0 != (int)local_108) {
                  local_98 = (long ***)CONCAT44(local_98._4_4_,0x2c27);
                  nn::err::ErrorResultVariant::ErrorResultVariant(this_02);
                  local_b8[0] = 0;
                  nn::err::ErrorResultVariant::operator=(this_02,(Result *)local_b8);
                  if ((int)local_b0 != (int)local_98) {
                    local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c04);
                    nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                    local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                    nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                    if ((int)local_b0 != (int)local_108) {
                      local_108 = (long ***)CONCAT44(local_108._4_4_,0x4c11);
                      nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                      local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                      nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                      if ((int)local_b0 != (int)local_108) {
                        local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c08);
                        nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                        nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                        if ((int)local_b0 != (int)local_108) {
                          local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c07);
                          nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                          local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                          nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                          if ((int)local_b0 != (int)local_108) {
                            local_108 = (long ***)CONCAT44(local_108._4_4_,0x2c03);
                            nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                            local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                            nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                            nex_error_info_init((int *)&local_108,(uint *)&local_b0,2);
                            lVar22 = DAT_710533a0b0;
                            local_98 = local_108;
                            local_90 = local_100;
                            local_88 = local_f8;
                            std::recursive_mutex::lock();
                            lVar23 = *(long *)(lVar22 + 0x40);
                            if (*(long *)(lVar22 + 0x30) != 0) {
                              uVar27 = *(ulong *)(lVar22 + 0x28);
                              uVar14 = 0;
                              if (uVar27 != 0) {
                                uVar14 = (lVar23 + 1U) / uVar27;
                              }
                              lVar23 = (lVar23 + 1U) - uVar14 * uVar27;
                              *(long *)(lVar22 + 0x40) = lVar23;
                            }
                            puVar26 = (undefined1 *)(*(long *)(lVar22 + 0x48) + lVar23 * 0x40);
                            *(long *)(lVar22 + 0x30) = *(long *)(lVar22 + 0x30) + 1;
                            *puVar26 = 2;
                            *(undefined8 *)(puVar26 + 0x19) = uStack_f0;
                            *(long *)(puVar26 + 0x11) = local_f8;
                            *(ulong *)(puVar26 + 9) = local_100;
                            *(long ****)(puVar26 + 1) = local_108;
                            *(ulong *)(puVar26 + 0x38) = CONCAT71(uStack_d0,uStack_d1);
                            *(ulong *)(puVar26 + 0x31) = CONCAT17(uStack_d1,local_d8);
                            *(undefined8 *)(puVar26 + 0x29) = uStack_e0;
                            *(undefined8 *)(puVar26 + 0x21) = local_e8;
                            std::recursive_mutex::unlock();
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
              *plVar29 = local_c8;
              if (*(ushort *)(plVar29 + 1) < 0x7f) {
                plVar18 = (long *)*plVar15;
                if (plVar18 != (long *)0x0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18,local_c8,plVar29 + 1);
                }
              }
              else {
                if (0x3ff < *(ulong *)(lVar13 + 0x4008)) goto LAB_710370e3b0;
                *(long **)(lVar13 + 0x2008 + *(ulong *)(lVar13 + 0x4008) * 8) = plVar29;
                *(long *)(lVar13 + 0x4008) = *(long *)(lVar13 + 0x4008) + 1;
                *plVar17 = *plVar17 + (ulong)(local_bc + 0xf & 0xfffffff8);
              }
              std::recursive_mutex::unlock();
              std::recursive_mutex::lock();
            } while (*(long *)(lVar13 + 0x4008) != 0x400);
          }
          std::recursive_mutex::unlock();
        }
        plVar32 = *(long **)(lVar13 + 0x42a060);
        if ((plVar32 == (long *)0x0) || (*(char *)(lVar13 + 0x42a050) == '\0')) goto LAB_710370c7b0;
        local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
        nn::err::ErrorResultVariant::ErrorResultVariant(this_01);
        local_108 = (long ***)((ulong)local_108 & 0xffffffff00000000);
        nn::err::ErrorResultVariant::operator=(this_01,(Result *)&local_108);
        std::recursive_mutex::lock();
        if (*(long *)(lVar13 + 0x4008) != 0x400) {
          do {
            plVar29 = (long *)*plVar17;
            FUN_7100165f60((int *)&local_108,plVar32,&local_c8,plVar29 + 1,&local_bc,
                           ((int)lVar13 - (int)plVar29) + 0x406020);
            FUN_71000bcf30((int *)&local_b0,(int *)&local_108);
            if ((int)local_b0 != 0) {
              local_108 = (long ***)CONCAT44(local_108._4_4_,0x2c09);
              nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
              local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
              nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
              if ((int)local_b0 != (int)local_108) {
                local_98 = (long ***)CONCAT44(local_98._4_4_,0x2c27);
                nn::err::ErrorResultVariant::ErrorResultVariant(this_02);
                local_b8[0] = 0;
                nn::err::ErrorResultVariant::operator=(this_02,(Result *)local_b8);
                if ((int)local_b0 != (int)local_98) {
                  local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c04);
                  nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                  local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                  nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                  if ((int)local_b0 != (int)local_108) {
                    local_108 = (long ***)CONCAT44(local_108._4_4_,0x4c11);
                    nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                    local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                    nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                    if ((int)local_b0 != (int)local_108) {
                      local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c08);
                      nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                      local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                      nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                      if ((int)local_b0 != (int)local_108) {
                        local_108 = (long ***)CONCAT44(local_108._4_4_,0x10c07);
                        nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                        nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                        if ((int)local_b0 != (int)local_108) {
                          local_108 = (long ***)CONCAT44(local_108._4_4_,0x2c03);
                          nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
                          local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                          nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_98);
                          nex_error_info_init((int *)&local_108,(uint *)&local_b0,2);
                          lVar13 = DAT_710533a0b0;
                          local_98 = local_108;
                          local_90 = local_100;
                          local_88 = local_f8;
                          std::recursive_mutex::lock();
                          lVar22 = *(long *)(lVar13 + 0x40);
                          if (*(long *)(lVar13 + 0x30) != 0) {
                            uVar27 = *(ulong *)(lVar13 + 0x28);
                            uVar14 = 0;
                            if (uVar27 != 0) {
                              uVar14 = (lVar22 + 1U) / uVar27;
                            }
                            lVar22 = (lVar22 + 1U) - uVar14 * uVar27;
                            *(long *)(lVar13 + 0x40) = lVar22;
                          }
                          puVar26 = (undefined1 *)(*(long *)(lVar13 + 0x48) + lVar22 * 0x40);
                          *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
                          *puVar26 = 2;
                          *(undefined8 *)(puVar26 + 0x19) = uStack_f0;
                          *(long *)(puVar26 + 0x11) = local_f8;
                          *(ulong *)(puVar26 + 9) = local_100;
                          *(long ****)(puVar26 + 1) = local_108;
                          *(ulong *)(puVar26 + 0x38) = CONCAT71(uStack_d0,uStack_d1);
                          *(ulong *)(puVar26 + 0x31) = CONCAT17(uStack_d1,local_d8);
                          *(undefined8 *)(puVar26 + 0x29) = uStack_e0;
                          *(undefined8 *)(puVar26 + 0x21) = local_e8;
                          std::recursive_mutex::unlock();
                        }
                      }
                    }
                  }
                }
              }
              break;
            }
            *plVar29 = local_c8;
            if (*(ushort *)(plVar29 + 1) < 0x7f) {
              plVar18 = (long *)*plVar15;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x10))(plVar18,local_c8,plVar29 + 1);
              }
            }
            else {
              if (0x3ff < *(ulong *)(lVar13 + 0x4008)) goto LAB_710370e3b0;
              *(long **)(lVar13 + 0x2008 + *(ulong *)(lVar13 + 0x4008) * 8) = plVar29;
              *(long *)(lVar13 + 0x4008) = *(long *)(lVar13 + 0x4008) + 1;
              *plVar17 = *plVar17 + (ulong)(local_bc + 0xf & 0xfffffff8);
            }
            std::recursive_mutex::unlock();
            std::recursive_mutex::lock();
          } while (*(long *)(lVar13 + 0x4008) != 0x400);
        }
        std::recursive_mutex::unlock();
        lVar13 = *param_1;
        if (lVar13 == 0) goto LAB_710370d6d4;
LAB_710370c7b8:
        lVar22 = *(long *)(lVar13 + 0x48);
        cVar5 = *(char *)(lVar22 + 0x98);
        if (cVar5 == '\x01') {
          if (*(long *)(lVar22 + 0x18) == 0) {
LAB_710370caf0:
            local_98 = (long ***)FUN_7100248210(*(long *)(lVar22 + 0x30));
            local_100 = local_100 & 0xffffffffff000000;
            local_108 = (long ***)0x0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            nn::err::ErrorResultVariant::operator=(this,(ErrorCode *)&local_98);
            local_100 = CONCAT62((int6)(CONCAT53((int5)(local_100 >> 0x18),0x10000) >> 0x10),3);
            local_108 = local_98;
            *(long ****)(lVar22 + 0x80) = local_98;
            *(ulong *)(lVar22 + 0x88) = local_100;
            *(long *)(lVar22 + 0x90) = local_f8;
            *(undefined1 *)(lVar22 + 0x98) = 0;
            nex_connection_cleanup(lVar22);
          }
          else {
            iVar11 = *(int *)(*(long *)(lVar22 + 0x18) + 0x14);
            if (iVar11 != 1) {
              if (iVar11 != 2) goto LAB_710370caf0;
              if (*(long *)(lVar22 + 0x10) == 0) {
                *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(*(long *)(lVar22 + 0x30) + 0xc0);
              }
              FUN_7100239ae0(*(long *)(lVar22 + 0x30),*(ulong *)(lVar22 + 8));
              plVar15 = *(long **)(lVar22 + 0x20);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(lVar22 + 0x10));
              }
              plVar15 = *(long **)(lVar22 + 0x28);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(lVar22 + 0x10));
              }
              plVar15 = (long *)**(long **)(lVar22 + 0x60);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(lVar22 + 0x10));
              }
              plVar15 = (long *)**(long **)(lVar22 + 0x68);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(lVar22 + 0x10));
              }
              plVar15 = (long *)**(long **)(lVar22 + 0x78);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x18))(plVar15,*(undefined8 *)(lVar22 + 0x10));
              }
              lVar23 = DAT_710533a0b8;
              plVar15 = *(long **)(DAT_710533a0b8 + 8);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x20);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x38);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x50);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x68);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x80);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0x98);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              plVar15 = *(long **)(lVar23 + 0xb0);
              if (plVar15 != (long *)0x0) {
                plVar15[1] = lVar22;
                (**(code **)(*plVar15 + 0x10))();
              }
              *(undefined1 *)(lVar22 + 0x98) = 2;
              FUN_71001b04d0(&local_108);
              thunk_FUN_7100242c00(*(undefined8 *)(lVar22 + 0x30),&local_108);
              FUN_71001b0920((long)&local_108);
            }
          }
        }
        else if (cVar5 == '\x03') {
          lVar23 = *(long *)(lVar22 + 0x18);
          if (lVar23 != 0) {
            if (*(int *)(lVar23 + 0x14) == 1) goto LAB_710370cb54;
            if (*(int *)(lVar23 + 0x14) == 2) {
              nex_connection_cleanup(lVar22);
              goto LAB_710370cae8;
            }
          }
          local_98 = *(long ****)(lVar23 + 0x58);
          local_90 = *(ulong *)(lVar23 + 0x60);
          local_88 = *(long *)(lVar23 + 0x68);
          FUN_710170cea0(&local_108,(uint *)&local_98,3);
          *(long ****)(lVar22 + 0x80) = local_108;
          *(ulong *)(lVar22 + 0x88) = local_100;
          *(long *)(lVar22 + 0x90) = local_f8;
          FUN_7100238f30(&local_108,*(long *)(lVar22 + 0x30));
          pcVar1 = FUN_710170d030;
          if ((int)local_108 < 0) {
            pcVar1 = (code *)0x0;
          }
          if (pcVar1 == (code *)0x0) {
LAB_710370cae8:
            *(undefined1 *)(lVar22 + 0x98) = 0;
          }
          else {
            *(undefined1 *)(lVar22 + 0x98) = 2;
          }
        }
        else if (cVar5 == '\x02') {
          FUN_7100238f30(&local_98,*(long *)(lVar22 + 0x30));
          pcVar1 = FUN_710170d030;
          if ((int)local_98 < 0) {
            pcVar1 = (code *)0x0;
          }
          if (pcVar1 == (code *)0x0) {
            FUN_710170cea0(&local_108,(uint *)&local_98,3);
            lVar23 = DAT_710533a0b0;
            local_b0 = local_108;
            local_a8 = local_100;
            lStack_a0 = local_f8;
            std::recursive_mutex::lock();
            lVar25 = *(long *)(lVar23 + 0x40);
            if (*(long *)(lVar23 + 0x30) != 0) {
              uVar27 = *(ulong *)(lVar23 + 0x28);
              uVar14 = 0;
              if (uVar27 != 0) {
                uVar14 = (lVar25 + 1U) / uVar27;
              }
              lVar25 = (lVar25 + 1U) - uVar14 * uVar27;
              *(long *)(lVar23 + 0x40) = lVar25;
            }
            puVar26 = (undefined1 *)(*(long *)(lVar23 + 0x48) + lVar25 * 0x40);
            *(long *)(lVar23 + 0x30) = *(long *)(lVar23 + 0x30) + 1;
            *puVar26 = 1;
            *(undefined8 *)(puVar26 + 0x19) = uStack_f0;
            *(long *)(puVar26 + 0x11) = local_f8;
            *(ulong *)(puVar26 + 9) = local_100;
            *(long ****)(puVar26 + 1) = local_108;
            *(ulong *)(puVar26 + 0x38) = CONCAT71(uStack_d0,uStack_d1);
            *(ulong *)(puVar26 + 0x31) = CONCAT17(uStack_d1,local_d8);
            *(undefined8 *)(puVar26 + 0x29) = uStack_e0;
            *(undefined8 *)(puVar26 + 0x21) = local_e8;
            std::recursive_mutex::unlock();
            goto LAB_710370cae8;
          }
        }
LAB_710370cb54:
        lVar22 = DAT_71052adb38;
        lVar13 = *(long *)(lVar13 + 0x40);
        cVar5 = *(char *)(lVar13 + 0x10);
        if (cVar5 == '\x04') {
LAB_710370cb70:
          lVar23 = *(long *)(*(long *)(lVar13 + 8) + 0x50);
          if ((lVar23 == 0) || (*(char *)(lVar23 + 0x14) == '\0')) goto LAB_710370ce24;
LAB_710370cb84:
          if (DAT_71052adb38 == 0) goto LAB_710370ce24;
          nex_get_connection_error((int *)&local_98,DAT_71052adb38);
          if ((int)local_98 == 0) {
            lVar22 = 0;
            do {
              lVar23 = lVar13 + lVar22;
              if ((((*(char *)(lVar23 + 0x28) == '\x01') && (*(long *)(lVar23 + 0x20) != 0)) &&
                  (*(long *)(lVar23 + 0x18) != *(long *)(lVar13 + 0x220))) &&
                 (plVar15 = (long *)FUN_7100161fa0(DAT_71052add68), plVar15 != (long *)0x0)) {
                lVar25 = (**(code **)(*plVar15 + 0x38))(plVar15,*(undefined8 *)(lVar23 + 0x18));
                if (lVar25 == 0) {
                  fVar35 = *(float *)(lVar23 + 0x30);
                  *(undefined4 *)(lVar23 + 0x2c) = 0;
                  fVar33 = 0.0;
                  if (fVar35 != 0.0) {
                    fVar33 = fVar35 + (0.0 - fVar35) * 0.5;
                  }
                  *(float *)(lVar23 + 0x30) = fVar33;
                  fVar33 = *(float *)(lVar23 + 0x34);
                  bVar10 = NAN(fVar33);
                  bVar9 = fVar33 == 0.0;
                  bVar8 = fVar33 < 0.0;
                  if (bVar9) {
                    *(float *)(lVar23 + 0x34) = 0.0;
                  }
                  else {
                    local_108 = (long ***)((ulong)local_108 & 0xffffffff00000000);
LAB_710370ce04:
                    pppplVar20 = &local_108;
                    if (bVar9 || bVar8 != bVar10) {
                      pppplVar20 = (long ****)(lVar23 + 0x34);
                    }
                    *(undefined4 *)(lVar23 + 0x34) = *(undefined4 *)pppplVar20;
                  }
                }
                else {
                  iVar11 = FUN_710015e850(lVar25);
                  fVar33 = (float)iVar11;
                  *(float *)(lVar23 + 0x2c) = fVar33;
                  if (iVar11 < 0) {
                    *(undefined8 *)(lVar23 + 0x30) = 0;
                  }
                  else {
                    fVar34 = *(float *)(lVar23 + 0x30);
                    fVar35 = fVar33;
                    if (fVar34 != 0.0) {
                      fVar35 = fVar34 + (fVar33 - fVar34) * 0.5;
                    }
                    *(float *)(lVar23 + 0x30) = fVar35;
                    fVar35 = *(float *)(lVar23 + 0x34);
                    if (fVar35 != 0.0) {
                      local_108 = (long ***)CONCAT44(local_108._4_4_,fVar33);
                      bVar10 = NAN(fVar35) || NAN(fVar33);
                      bVar9 = fVar35 == fVar33;
                      bVar8 = fVar35 < fVar33;
                      goto LAB_710370ce04;
                    }
                    *(float *)(lVar23 + 0x34) = fVar33;
                  }
                }
              }
              lVar22 = lVar22 + 0x20;
            } while (lVar22 != 0x200);
            goto LAB_710370ce24;
          }
          local_108 = (long ***)CONCAT44(local_108._4_4_,0x8c56);
          nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
          local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
          nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_b0);
          if ((((int)local_98 != (int)local_108) || (DAT_71052adfc0 == 0)) ||
             (iVar11 = FUN_7100193770(DAT_71052adfc0), iVar11 == 0)) {
            *(undefined1 *)(lVar13 + 0x10) = 5;
            uVar12 = FUN_7100147c10(lVar22);
            local_108 = (long ***)CONCAT44(local_108._4_4_,0x8c79);
            nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
            local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
            nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_b0);
            if ((uVar12 & 0xfffffffe) == 4) {
LAB_710370cf80:
              if (DAT_71052adfc0 != 0) {
                iVar11 = FUN_7100192f00(DAT_71052adfc0);
                if (iVar11 == 3) {
LAB_710370d04c:
                  local_100 = local_100 & 0xffffffffff000000;
                  local_108 = (long ***)0x0;
                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&local_b0);
                  *(long *)(lVar13 + 0x240) = local_f8;
                  *(ulong *)(lVar13 + 0x238) =
                       CONCAT62((uint6)(local_100 >> 0x10) & 0xffffffffff00,2);
                  *(undefined8 *)(lVar13 + 0x230) = 0x200000000;
                  local_108 = (long ***)&DAT_200000000;
                  local_f8 = *(long *)(lVar13 + 0x240);
                  local_100 = *(ulong *)(lVar13 + 0x238);
                  goto LAB_710370d0b8;
                }
                if (iVar11 != 4) goto LAB_710370d018;
              }
              nex_error_info_init((int *)&local_108,(uint *)&local_98,2);
              *(long *)(lVar13 + 0x240) = local_f8;
              *(ulong *)(lVar13 + 0x238) = local_100;
              *(long ****)(lVar13 + 0x230) = local_108;
              lVar13 = DAT_710533a0b0;
              std::recursive_mutex::lock();
              lVar22 = *(long *)(lVar13 + 0x40);
              if (*(long *)(lVar13 + 0x30) != 0) {
                uVar27 = *(ulong *)(lVar13 + 0x28);
                uVar14 = 0;
                if (uVar27 != 0) {
                  uVar14 = (lVar22 + 1U) / uVar27;
                }
                lVar22 = (lVar22 + 1U) - uVar14 * uVar27;
                *(long *)(lVar13 + 0x40) = lVar22;
              }
              *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
              uVar21 = 8;
              puVar26 = (undefined1 *)(*(long *)(lVar13 + 0x48) + lVar22 * 0x40);
LAB_710370d0f8:
              *puVar26 = uVar21;
            }
            else {
              if ((int)local_98 == (int)local_108) goto LAB_710370cf80;
              local_108 = (long ***)CONCAT44(local_108._4_4_,0x8c56);
              nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
              local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
              nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_b0);
              if ((int)local_98 == (int)local_108) {
LAB_710370d018:
                nex_error_info_init((int *)&local_108,(uint *)&local_98,2);
                *(long *)(lVar13 + 0x240) = local_f8;
                *(ulong *)(lVar13 + 0x238) = local_100;
                *(long ****)(lVar13 + 0x230) = local_108;
LAB_710370d0b8:
                lVar13 = DAT_710533a0b0;
                std::recursive_mutex::lock();
                lVar22 = *(long *)(lVar13 + 0x40);
                if (*(long *)(lVar13 + 0x30) != 0) {
                  uVar27 = *(ulong *)(lVar13 + 0x28);
                  uVar14 = 0;
                  if (uVar27 != 0) {
                    uVar14 = (lVar22 + 1U) / uVar27;
                  }
                  lVar22 = (lVar22 + 1U) - uVar14 * uVar27;
                  *(long *)(lVar13 + 0x40) = lVar22;
                }
                puVar26 = (undefined1 *)(*(long *)(lVar13 + 0x48) + lVar22 * 0x40);
                *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
                uVar21 = 2;
                goto LAB_710370d0f8;
              }
              local_108 = (long ***)CONCAT44(local_108._4_4_,0x8c78);
              nn::err::ErrorResultVariant::ErrorResultVariant(this_00);
              local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
              nn::err::ErrorResultVariant::operator=(this_00,(Result *)&local_b0);
              if ((int)local_98 == (int)local_108) goto LAB_710370d04c;
              nex_error_info_init((int *)&local_108,(uint *)&local_98,3);
              *(long *)(lVar13 + 0x240) = local_f8;
              *(ulong *)(lVar13 + 0x238) = local_100;
              *(long ****)(lVar13 + 0x230) = local_108;
              lVar13 = DAT_710533a0b0;
              std::recursive_mutex::lock();
              lVar22 = *(long *)(lVar13 + 0x40);
              if (*(long *)(lVar13 + 0x30) != 0) {
                uVar27 = *(ulong *)(lVar13 + 0x28);
                uVar14 = 0;
                if (uVar27 != 0) {
                  uVar14 = (lVar22 + 1U) / uVar27;
                }
                lVar22 = (lVar22 + 1U) - uVar14 * uVar27;
                *(long *)(lVar13 + 0x40) = lVar22;
              }
              puVar26 = (undefined1 *)(*(long *)(lVar13 + 0x48) + lVar22 * 0x40);
              *(long *)(lVar13 + 0x30) = *(long *)(lVar13 + 0x30) + 1;
              *puVar26 = 0;
            }
            *(undefined8 *)(puVar26 + 0x19) = uStack_f0;
            *(long *)(puVar26 + 0x11) = local_f8;
            *(ulong *)(puVar26 + 9) = local_100;
            *(long ****)(puVar26 + 1) = local_108;
            *(ulong *)(puVar26 + 0x38) = CONCAT71(uStack_d0,uStack_d1);
            *(ulong *)(puVar26 + 0x31) = CONCAT17(uStack_d1,local_d8);
            *(undefined8 *)(puVar26 + 0x29) = uStack_e0;
            *(undefined8 *)(puVar26 + 0x21) = local_e8;
            std::recursive_mutex::unlock();
          }
        }
        else {
          if (cVar5 == '\x02') goto LAB_710370cb84;
          if (cVar5 == '\0') goto LAB_710370cb70;
LAB_710370ce24:
          lVar22 = *(long *)(*(long *)(lVar13 + 8) + 0x50);
          if (lVar22 != 0) {
            FUN_7103703fd0(lVar22,*(char *)(lVar13 + 0x10),
                           (ulong)(*(long *)(lVar13 + 0x228) == *(long *)(lVar13 + 0x220)));
          }
        }
        uVar14 = (ulong)*(uint *)(*param_1 + 0x28);
      }
      std::recursive_mutex::lock();
      lVar13 = param_1[6];
      if ((lVar13 == 0) || (*(char *)(lVar13 + 0x80) == '\x06')) {
        std::recursive_mutex::unlock();
      }
      else {
        std::recursive_mutex::unlock();
        FUN_710370e500((long *)(lVar13 + 0x10),*param_1);
      }
      lVar13 = *param_1;
      std::recursive_mutex::lock();
      std::recursive_mutex::unlock();
      std::recursive_mutex::lock();
      if ((char)param_1[0xc] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0xd,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x4d] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x4e,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x8e] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x8f,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0xcf] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0xd0,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x110] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x111,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x151] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x152,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x192] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x193,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x1d3] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x1d4,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x214] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x215,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x255] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x256,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x296] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x297,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x2d7] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x2d8,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x318] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x319,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x359] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x35a,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x39a] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x39b,lVar13);
        std::recursive_mutex::lock();
      }
      if ((char)param_1[0x3db] != '\0') {
        std::recursive_mutex::unlock();
        FUN_710370e500(param_1 + 0x3dc,lVar13);
        std::recursive_mutex::lock();
      }
      std::recursive_mutex::unlock();
      puVar16 = (undefined8 *)param_1[0x421];
      if ((((puVar16 != (undefined8 *)0x0) && (puVar16[0x85407] != 0)) &&
          (*(char *)(puVar16 + 0x8540a) != '\0')) &&
         (local_98 = (long ***)&PTR_FUN_710523bea8, DAT_71052adb38 != 0)) {
        local_88 = puVar16[0x8540b];
        lStack_80 = puVar16[0x8540c];
        if ((local_88 != 0) && (lStack_80 != 0)) {
          lVar13 = *(long *)(DAT_71052adb38 + 0xf0);
          lVar22 = *(long *)(DAT_71052adb38 + 0xf8);
          std::recursive_mutex::lock();
          lVar23 = puVar16[0x400] << 3;
          if (lVar23 != 0) {
            puVar3 = puVar16 + 0x85406;
            puVar31 = puVar16;
            do {
              plVar17 = (long *)*puVar31;
              uVar6 = *(ushort *)((long)plVar17 + 0xe);
              puVar2 = (ushort *)(plVar17 + 1);
              plVar15 = plVar17;
              if ((uVar6 >> 1 & 1) == 0) {
LAB_710370dc74:
                if ((uVar6 >> 2 & 1) == 0) {
                  if ((uVar6 & 1) == 0) {
                    pplVar24 = local_98[2];
                  }
                  else {
                    pplVar24 = local_98[1];
                  }
                  uVar27 = (*(code *)pplVar24)(&local_98,*plVar15,puVar2);
                }
                else {
                  if ((uVar6 & 1) == 0) {
                    pplVar24 = local_98[4];
                  }
                  else {
                    pplVar24 = local_98[3];
                  }
                  uVar27 = (*(code *)pplVar24)(&local_98,puVar2,(int)plVar17[2] + 0xc);
                }
                if (((uVar27 & 1) == 0) &&
                   (uVar6 = *(ushort *)((long)plVar17 + 0xe), (uVar6 & 1) != 0)) {
                  uVar27 = *puVar3;
                  if (uVar27 != 0x400) {
                    if (uVar27 < 0x400) {
                      puVar19 = (uint *)(puVar16 + uVar27 * 2 + 0x84c06);
                      uVar7 = *(undefined2 *)((long)plVar17 + 10);
                      *puVar19 = (uint)*(ushort *)(plVar17 + 1);
                      puVar19[1] = (uint)uVar6;
                      *(undefined2 *)(puVar19 + 2) = uVar7;
                      puVar19[3] = (uint)local_90;
                      *puVar3 = *puVar3 + 1;
                      uVar6 = *(ushort *)((long)plVar17 + 0xe);
                      goto joined_r0x00710370dba8;
                    }
LAB_710370e3b0:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                }
                uVar6 = *(ushort *)((long)plVar17 + 0xe);
              }
              else {
                *plVar17 = lVar22;
                if (lVar22 != lVar13) {
                  plVar15 = (long *)*puVar31;
                  goto LAB_710370dc74;
                }
                *(ushort *)((long)plVar17 + 0xe) = uVar6 | 8;
                uVar6 = *(ushort *)((long)plVar17 + 0xe);
              }
joined_r0x00710370dba8:
              if (((uVar6 >> 3 & 1) != 0) &&
                 (((uVar6 >> 2 & 1) != 0 || (*(long *)*puVar31 == lVar13)))) {
                if (*puVar2 < 0x7f) {
                  if (puVar16[0xc02] != 0x400) {
                    plVar15 = (long *)puVar16[0x84c05];
                    uVar12 = (int)plVar17[2] + 0x2bU & 0xfffffff8;
                    if ((uVar12 + ((int)plVar15 - ((int)puVar16 + 0x406028)) >> 0x11 == 0) &&
                       (puVar16[0x84c05] = (long)plVar15 + (ulong)uVar12, plVar15 != (long *)0x0)) {
                      plVar15[1] = 0;
                      plVar15[2] = 0;
                      *plVar15 = 0;
                      *(undefined4 *)(plVar15 + 2) = 0;
                      *(short *)(plVar15 + 1) = (short)plVar17[1];
                      *(undefined2 *)((long)plVar15 + 0xe) = *(undefined2 *)((long)plVar17 + 0xe);
                      uVar12 = *(uint *)(plVar17 + 2);
                      memcpy((void *)((long)plVar15 + 0x14),(void *)((long)plVar17 + 0x14),
                             (ulong)uVar12);
                      *(uint *)(plVar15 + 2) = uVar12;
                      *plVar15 = lVar13;
                      if ((ulong)puVar16[0xc02] < 0x400) {
                        puVar16[puVar16[0xc02] + 0x802] = plVar15;
                        puVar16[0xc02] = puVar16[0xc02] + 1;
                        goto LAB_710370dd2c;
                      }
                      goto LAB_710370e3b0;
                    }
                  }
                }
                else if (puVar16[0x801] != 0x400) {
                  plVar15 = (long *)puVar16[0x80c04];
                  uVar12 = (int)plVar17[2] + 0x2bU & 0xfffffff8;
                  if ((uVar12 + ((int)plVar15 - ((int)puVar16 + 0x206020)) >> 0x15 == 0) &&
                     (puVar16[0x80c04] = (long)plVar15 + (ulong)uVar12, plVar15 != (long *)0x0)) {
                    plVar15[1] = 0;
                    plVar15[2] = 0;
                    *plVar15 = 0;
                    *(undefined4 *)(plVar15 + 2) = 0;
                    *(short *)(plVar15 + 1) = (short)plVar17[1];
                    *(undefined2 *)((long)plVar15 + 0xe) = *(undefined2 *)((long)plVar17 + 0xe);
                    uVar12 = *(uint *)(plVar17 + 2);
                    memcpy((void *)((long)plVar15 + 0x14),(void *)((long)plVar17 + 0x14),
                           (ulong)uVar12);
                    *(uint *)(plVar15 + 2) = uVar12;
                    *plVar15 = lVar13;
                    if ((ulong)puVar16[0x801] < 0x400) {
                      puVar16[puVar16[0x801] + 0x401] = plVar15;
                      puVar16[0x801] = puVar16[0x801] + 1;
                      goto LAB_710370dd2c;
                    }
                    goto LAB_710370e3b0;
                  }
                }
                uVar6 = *(ushort *)((long)plVar17 + 0xe);
                if ((uVar6 & 1) != 0) {
                  uVar27 = *puVar3;
                  if (uVar27 != 0x400) {
                    if (0x3ff < uVar27) goto LAB_710370e3b0;
                    puVar19 = (uint *)(puVar16 + uVar27 * 2 + 0x84c06);
                    uVar7 = *(undefined2 *)((long)plVar17 + 10);
                    *puVar19 = (uint)*(ushort *)(plVar17 + 1);
                    puVar19[1] = (uint)uVar6;
                    *(undefined2 *)(puVar19 + 2) = uVar7;
                    puVar19[3] = (uint)local_90;
                    *puVar3 = *puVar3 + 1;
                  }
                }
              }
LAB_710370dd2c:
              puVar31 = puVar31 + 1;
              lVar23 = lVar23 + -8;
            } while (lVar23 != 0);
          }
          puVar31 = puVar16 + 0x84c06;
          puVar16[0x400] = 0;
          puVar16[0x40c03] = puVar16 + 0xc03;
          std::recursive_mutex::unlock();
          lVar22 = DAT_710533a0b0;
          lVar13 = puVar16[0x85406];
          if (lVar13 != 0) {
            lVar13 = lVar13 << 4;
            do {
              local_108 = (long ***)*puVar31;
              local_100 = puVar31[1];
              std::recursive_mutex::lock();
              lVar23 = *(long *)(lVar22 + 0x40);
              if (*(long *)(lVar22 + 0x30) != 0) {
                uVar28 = *(ulong *)(lVar22 + 0x28);
                uVar27 = 0;
                if (uVar28 != 0) {
                  uVar27 = (lVar23 + 1U) / uVar28;
                }
                lVar23 = (lVar23 + 1U) - uVar27 * uVar28;
                *(long *)(lVar22 + 0x40) = lVar23;
              }
              puVar26 = (undefined1 *)(*(long *)(lVar22 + 0x48) + lVar23 * 0x40);
              *(long *)(lVar22 + 0x30) = *(long *)(lVar22 + 0x30) + 1;
              *puVar26 = 9;
              *(undefined8 *)(puVar26 + 0x19) = uStack_f0;
              *(long *)(puVar26 + 0x11) = local_f8;
              *(ulong *)(puVar26 + 9) = local_100;
              *(long ****)(puVar26 + 1) = local_108;
              *(ulong *)(puVar26 + 0x38) = CONCAT71(uStack_d0,uStack_d1);
              *(ulong *)(puVar26 + 0x31) = CONCAT17(uStack_d1,local_d8);
              *(undefined8 *)(puVar26 + 0x29) = uStack_e0;
              *(undefined8 *)(puVar26 + 0x21) = local_e8;
              std::recursive_mutex::unlock();
              puVar31 = puVar31 + 2;
              lVar13 = lVar13 + -0x10;
            } while (lVar13 != 0);
          }
          puVar16[0x85406] = 0;
        }
      }
      if (DAT_71052af1d8 == '\0') {
LAB_710370df74:
        lVar13 = DAT_71052af138;
        if (DAT_71052af138 != 0) {
LAB_710370de74:
          if ((*(long *)(lVar13 + 0x10) != 0) && (*(long *)(*(long *)(lVar13 + 0x10) + 0x10) != 0))
          {
            if (param_1[0x420] != 0) {
              lVar13 = nn::os::GetSystemTick();
              uVar28 = nn::os::ConvertToTimeSpan(lVar13 - DAT_71074470e8);
              uVar27 = ((long)uVar28 >> 0x20) * 0xe353f7cf +
                       ((uVar28 & 0xffffffff) * 0xe353f7cf >> 0x20);
              if (((((long)(((long)uVar28 >> 0x20) * 0x20c49ba5 + ((long)uVar27 >> 0x20) +
                           ((uVar28 & 0xffffffff) * 0x20c49ba5 + (uVar27 & 0xffffffff) >> 0x20)) >>
                    7) - ((long)uVar28 >> 0x3f)) * 1000 - param_1[0x420]) / 1000000 <= (long)uVar14)
              goto LAB_710370e044;
            }
            lVar13 = DAT_71052af138;
            if (DAT_71052af1d8 == '\0') {
joined_r0x00710370dfb0:
              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_710370dfd0;
              lVar13 = *(long *)(*(long *)(lVar13 + 0x10) + 0x10);
            }
            else {
              puVar19 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar12 = *puVar19;
              lVar13 = DAT_71052af138;
              if (uVar12 == 0) goto joined_r0x00710370dfb0;
              if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                lVar13 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x20);
                goto joined_r0x00710370dfb0;
              }
              FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                             ,0x47,0xe0000003,0);
LAB_710370dfd0:
              lVar13 = 0;
            }
            FUN_71001d9090(lVar13,8,0);
            lVar13 = nn::os::GetSystemTick();
            uVar27 = nn::os::ConvertToTimeSpan(lVar13 - DAT_71074470e8);
            uVar14 = ((long)uVar27 >> 0x20) * 0xe353f7cf +
                     ((uVar27 & 0xffffffff) * 0xe353f7cf >> 0x20);
            param_1[0x420] =
                 (((long)(((long)uVar27 >> 0x20) * 0x20c49ba5 + ((long)uVar14 >> 0x20) +
                         ((uVar27 & 0xffffffff) * 0x20c49ba5 + (uVar14 & 0xffffffff) >> 0x20)) >> 7)
                 - ((long)uVar27 >> 0x3f)) * 1000;
          }
        }
      }
      else {
        puVar19 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar12 = *puVar19;
        if (uVar12 == 0) goto LAB_710370df74;
        if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          lVar13 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x20);
          if (lVar13 == 0) goto LAB_710370e044;
          goto LAB_710370de74;
        }
        FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
      }
LAB_710370e044:
      if (DAT_71052ac580 != (long *)0x0) {
        FUN_71000b68a0(DAT_71052ac580,0);
      }
      nn::os::SleepThread(5000000);
    } while ((char)param_1[0x422] != '\0');
  }
  *(undefined1 *)(param_1 + 1) = 0;
  std::recursive_mutex::lock();
  uVar14 = param_1[2];
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  std::recursive_mutex::unlock();
  if (param_1[0x421] != 0) {
    plVar15 = (long *)(param_1[0x421] + 0x42a040);
    plVar17 = (long *)*plVar15;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 0x20))();
    }
    *plVar15 = 0;
    lVar13 = param_1[0x421];
    plVar15 = *(long **)(lVar13 + 0x42a048);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    *(long *)(lVar13 + 0x42a048) = 0;
    param_1[0x421] = 0;
  }
  lVar13 = *param_1;
  if (lVar13 != 0) {
    if (*(undefined8 **)(lVar13 + 0x40) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar13 + 0x40))();
      if (DAT_710533a088 != (long *)0x0) {
        (**(code **)(*DAT_710533a088 + 0x30))(DAT_710533a088,*(undefined8 *)(lVar13 + 0x40));
      }
      *(undefined8 *)(lVar13 + 0x40) = 0;
    }
    lVar22 = *(long *)(lVar13 + 0x50);
    if (lVar22 != 0) {
      if (*(ulong *)(lVar22 + 8) != 0) {
        FUN_710392eb40(*(ulong *)(lVar22 + 8));
      }
      *(undefined8 *)(lVar22 + 8) = 0;
      *(undefined4 *)(lVar22 + 0x10) = 0;
      FUN_7103703d70(*(long *)(lVar13 + 0x50));
      if (DAT_710533a088 != (long *)0x0) {
        (**(code **)(*DAT_710533a088 + 0x30))(DAT_710533a088,*(undefined8 *)(lVar13 + 0x50));
      }
      *(undefined8 *)(lVar13 + 0x50) = 0;
    }
    lVar22 = *(long *)(lVar13 + 0x48);
    if (lVar22 != 0) {
      FUN_7103700a90(DAT_710533a0b8);
      if ((long *)**(long **)(lVar22 + 0x78) != (long *)0x0) {
        (**(code **)(*(long *)**(long **)(lVar22 + 0x78) + 0x20))();
      }
      plVar15 = (long *)**(long **)(lVar22 + 0x68);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      if ((long *)**(long **)(lVar22 + 0x60) != (long *)0x0) {
        (**(code **)(*(long *)**(long **)(lVar22 + 0x60) + 0x20))();
      }
      if (*(long **)(lVar22 + 0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar22 + 0x28) + 0x20))();
      }
      if (*(long **)(lVar22 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)(lVar22 + 0x20) + 0x20))();
      }
      if (*(long *)(lVar22 + 0x30) != 0) {
        FUN_7100239af0(*(long *)(lVar22 + 0x30),*(ulong *)(lVar22 + 8));
      }
      *(undefined8 *)(lVar22 + 0x10) = 0;
      nex_connection_cleanup(lVar22);
      (**(code **)**(undefined8 **)(lVar22 + 8))();
      if (DAT_710533a088 != (long *)0x0) {
        (**(code **)(*DAT_710533a088 + 0x30))(DAT_710533a088,*(undefined8 *)(lVar22 + 8));
      }
      uVar14 = *(ulong *)(lVar22 + 0x78);
      *(undefined8 *)(lVar22 + 8) = 0;
      *(undefined8 *)(lVar22 + 0x78) = 0;
      if (uVar14 != 0) {
        FUN_710022e920((long *)(uVar14 + 8));
        FUN_710392eb40(uVar14);
      }
      uVar14 = *(ulong *)(lVar22 + 0x70);
      *(undefined8 *)(lVar22 + 0x70) = 0;
      if (uVar14 != 0) {
        FUN_710022e920((long *)(uVar14 + 8));
        FUN_710392eb40(uVar14);
      }
      FUN_71036fe470((ulong *)(lVar22 + 0x68));
      uVar14 = *(ulong *)(lVar22 + 0x60);
      *(undefined8 *)(lVar22 + 0x60) = 0;
      if (uVar14 != 0) {
        FUN_710022e920((long *)(uVar14 + 8));
        FUN_710392eb40(uVar14);
      }
      uVar14 = *(ulong *)(lVar22 + 0x58);
      *(undefined8 *)(lVar22 + 0x58) = 0;
      if (uVar14 != 0) {
        FUN_710370e4c0(uVar14 + 0xe0,*(undefined8 **)(uVar14 + 0xe8));
        FUN_710022e920((long *)(uVar14 + 8));
        FUN_710392eb40(uVar14);
      }
      if (DAT_710533a088 != (long *)0x0) {
        (**(code **)(*DAT_710533a088 + 0x30))(DAT_710533a088,*(undefined8 *)(lVar13 + 0x48));
      }
      *(undefined8 *)(lVar13 + 0x48) = 0;
    }
    lVar22 = *param_1;
    lVar13 = *(long *)(lVar22 + 0x38);
    if (lVar13 != 0) {
      std::recursive_mutex::~recursive_mutex((recursive_mutex *)(lVar13 + 0x42a268));
      *(undefined8 *)(lVar13 + 0x42a068) = &PTR_FUN_710523be60;
      uVar14 = *(ulong *)(lVar13 + 0x42a260);
      *(undefined8 *)(lVar13 + 0x42a260) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      *(undefined8 *)(lVar13 + 0x42a068) = &PTR_FUN_710523be80;
      uVar14 = *(ulong *)(lVar13 + 0x42a070);
      *(undefined8 *)(lVar13 + 0x42a070) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      if (*(ulong *)(lVar22 + 0x38) != 0) {
        FUN_710392eb40(*(ulong *)(lVar22 + 0x38));
      }
      *(undefined8 *)(lVar22 + 0x38) = 0;
    }
    *(undefined8 *)(lVar22 + 0x38) = 0;
    FUN_71001b89e0();
  }
  *(undefined1 *)((long)param_1 + 0x2111) = 1;
  return;
}

