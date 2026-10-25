// addr:      71037fb770
// offset:    0x37fb770
// name:      FUN_71037fb770
// mangled:   
// signature: undefined __cdecl FUN_71037fb770(undefined4 * param_1, long * param_2, undefined4 * param_3, undefined * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71037fb770(undefined4 *param_1,long *param_2,undefined4 *param_3,undefined *param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  logic_error *plVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long ****pppplVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  void *pvVar20;
  byte ****ppppbVar21;
  byte ****ppppbVar22;
  undefined4 uVar23;
  code *pcVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  ulong uVar27;
  long ****pppplVar28;
  uint uVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_390 [8];
  int aiStack_388 [16];
  undefined1 auStack_348 [8];
  int local_340;
  int local_33c [17];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [4];
  undefined1 auStack_2cc [4];
  undefined1 auStack_2c8 [4];
  undefined1 auStack_2c4 [4];
  undefined1 auStack_2c0 [64];
  undefined *local_280;
  undefined1 local_278;
  undefined **local_260;
  uint local_248 [2];
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined1 local_228;
  undefined7 uStack_227;
  byte local_1ff;
  undefined8 local_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  uint uStack_1e4;
  uint local_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 *local_1cc;
  ulong local_1c4;
  uint local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined1 *local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined8 local_174;
  undefined1 *local_16c;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined1 local_148;
  undefined8 local_144;
  undefined1 *local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_114;
  undefined1 *local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined1 *local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  int local_78;
  undefined4 uStack_74;
  
  uVar23 = *param_3;
  *(undefined8 *)((long)param_2 + 0x34) = 0x100000000;
  *(undefined4 *)(param_2 + 6) = uVar23;
  *(undefined1 *)((long)param_2 + 0x3c) = *(undefined1 *)(param_3 + 6);
  local_278 = *(undefined1 *)(param_3 + 0xe);
  local_280 = &DAT_7105265bf8;
  local_260 = &local_280;
  do {
    iVar9 = DAT_7105941908;
    cVar6 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105941908,0x10);
    if (bVar5) {
      DAT_7105941908 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 == 0) {
    pcVar24 = FUN_71037fe5e0;
    nv::SetGraphicsAllocator(FUN_71037fe4e0,FUN_71037fe5a0,FUN_71037fe5e0,(void *)0x0);
    nv::InitializeGraphics(&DAT_7105942000,0x1400000);
    param_5 = (byte ****)0x0;
    nv::SetGraphicsDevtoolsAllocator(FUN_71037fe4e0,FUN_71037fe5a0,FUN_71037fe5e0,(void *)0x0);
    param_4 = pcVar24;
  }
  if (local_260 == (undefined **)0x0) {
    puVar15 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar15 = &DAT_7105242050;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar15,&std::bad_function_call::typeinfo,std::exception::~exception);
  }
  (**(code **)(*local_260 + 0x30))();
  lVar10 = FUN_710392e290(0x10,0x3000,(long ****)param_4,param_5,param_6,param_7,param_8,param_9);
  if (lVar10 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_240._0_4_ = 0;
      local_1f8 = (long ****)0x3000;
      pppplVar17 = (long ****)&local_1f8;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
      if (((uVar11 & 1) != 0) &&
         (lVar10 = FUN_710392e290(0x10,0x3000,pppplVar17,param_5,param_6,param_7,param_8,param_9),
         lVar10 != 0)) goto LAB_71037fb8ac;
    }
    lVar10 = 0;
  }
LAB_71037fb8ac:
  (*DAT_71059408e8)(auStack_2c0);
  cVar6 = (*DAT_7105940900)(lVar10,auStack_2c0);
  if (cVar6 == '\0') {
LAB_71037fc858:
    uVar23 = 0xf0040001;
LAB_71037fc860:
    *param_1 = uVar23;
    goto LAB_71037fc864;
  }
  param_2[0xd] = lVar10;
  FUN_71037f8180(lVar10,DAT_7105940918);
  FUN_7100033a40(param_2[0xd],DAT_71052aa340);
  (*DAT_7105940920)(param_2[0xd],0x2f,auStack_2c4);
  (*DAT_7105940920)(param_2[0xd],0x31,auStack_2c8);
  (*DAT_7105940920)(param_2[0xd],0x2e,auStack_2cc);
  (*DAT_7105940920)(param_2[0xd],0x30,auStack_2d0);
  (*DAT_7105940960)(param_2[0xd],1);
  (*DAT_7105940968)(param_2[0xd],1);
  (*DAT_7105940988)(0x3f800000,param_2[0xd]);
  local_2e0 = 0;
  uStack_2d8 = 0x3f80000000000000;
  (*DAT_7105940970)(param_2[0xd],&local_2e0,0x38);
  uVar11 = 0;
  plVar30 = param_2 + 0x21;
  do {
    (*DAT_7105940920)(param_2[0xd],uVar11 & 0xffffffff,plVar30);
    uVar11 = uVar11 + 1;
    plVar30 = (long *)((long)plVar30 + 4);
  } while (uVar11 != 0x60);
  iVar3 = *(int *)((long)param_2 + 0x144);
  lVar10 = param_2[0x29];
  iVar4 = *(int *)((long)param_2 + 0x14c);
  *(int *)(param_2 + 0x1f) = iVar3;
  *(int *)((long)param_2 + 0xfc) = (int)lVar10;
  lVar14 = param_2[0x2a];
  *(int *)(param_2 + 0x20) = iVar4;
  *(int *)((long)param_2 + 0x104) = (int)lVar14;
  ppppbVar22 = *(byte *****)(param_3 + 8);
  ppppbVar21 = *(byte *****)(param_3 + 10);
  iVar9 = param_3[0xc];
  iVar8 = param_3[0xd];
  iVar7 = FUN_710392e1f0(&local_240,0x10,(long ****)0x31a0,param_5,param_6,param_7,param_8,param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_1f8 = (long ****)0x31a0;
    uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_1f8);
    if ((uVar11 & 1) != 0) {
      FUN_710392e1f0(&local_240,0x10,(long ****)0x31a0,param_5,param_6,param_7,param_8,param_9);
    }
  }
  nu::VirtualAllocHook(0x31a0,0x10,(void *)CONCAT44(local_240._4_4_,(uint)local_240));
  puVar15 = (undefined8 *)CONCAT44(local_240._4_4_,(uint)local_240);
  FUN_71037c3a70(puVar15);
  *puVar15 = &PTR_FUN_7105265e88;
  plVar30 = puVar15 + 2;
  *plVar30 = 0;
  puVar15[5] = 0;
  puVar15[0xb] = 0;
  puVar15[6] = 0;
  puVar15[3] = 0;
  puVar15[4] = 0;
  puVar15[0xc] = puVar15 + 0xc;
  puVar15[0xd] = puVar15 + 0xc;
  puVar15[0x108] = 0;
  puVar15[0x105] = 0;
  puVar15[0x106] = puVar15 + 0x105;
  puVar15[0x107] = puVar15 + 0x105;
  *(undefined4 *)(puVar15 + 0x108) = 0;
  FUN_71037c6f70((long)(puVar15 + 5));
  puVar15[0x10c] = 0;
  puVar15[0x10b] = 0;
  puVar15[0x111] = 0;
  puVar15[0x112] = puVar15 + 0x112;
  puVar15[0x113] = puVar15 + 0x112;
  puVar15[0x20e] = 0;
  puVar15[0x20b] = 0;
  puVar15[0x20c] = puVar15 + 0x20b;
  puVar15[0x20d] = puVar15 + 0x20b;
  *(undefined4 *)(puVar15 + 0x20e) = 0;
  FUN_71037c6f70((long)(puVar15 + 0x10b));
  puVar15[0x212] = 0;
  puVar15[0x211] = 0;
  puVar15[0x217] = 0;
  puVar15[0x218] = puVar15 + 0x218;
  puVar15[0x219] = puVar15 + 0x218;
  puVar15[0x314] = 0;
  puVar15[0x311] = 0;
  puVar15[0x312] = puVar15 + 0x311;
  puVar15[0x313] = puVar15 + 0x311;
  *(undefined4 *)(puVar15 + 0x314) = 0;
  FUN_71037c6f70((long)(puVar15 + 0x211));
  puVar15[0x318] = 0;
  puVar15[0x317] = 0;
  puVar15[0x31d] = 0;
  puVar15[0x31e] = puVar15 + 0x31e;
  puVar15[799] = puVar15 + 0x31e;
  puVar15[0x41a] = 0;
  puVar15[0x417] = 0;
  puVar15[0x418] = puVar15 + 0x417;
  puVar15[0x419] = puVar15 + 0x417;
  *(undefined4 *)(puVar15 + 0x41a) = 0;
  FUN_71037c6f70((long)(puVar15 + 0x317));
  puVar15[0x41e] = 0;
  puVar15[0x41d] = 0;
  puVar15[0x423] = 0;
  puVar15[0x424] = puVar15 + 0x424;
  puVar15[0x425] = puVar15 + 0x424;
  puVar15[0x520] = 0;
  puVar15[0x51d] = 0;
  puVar15[0x51e] = puVar15 + 0x51d;
  puVar15[0x51f] = puVar15 + 0x51d;
  *(undefined4 *)(puVar15 + 0x520) = 0;
  FUN_71037c6f70((long)(puVar15 + 0x41d));
  puVar15[0x524] = 0;
  puVar15[0x523] = 0;
  puVar15[0x529] = 0;
  puVar15[0x52a] = puVar15 + 0x52a;
  puVar15[0x52b] = puVar15 + 0x52a;
  puVar15[0x626] = 0;
  puVar15[0x623] = 0;
  puVar15[0x624] = puVar15 + 0x623;
  puVar15[0x625] = puVar15 + 0x623;
  *(undefined4 *)(puVar15 + 0x626) = 0;
  FUN_71037c6f70((long)(puVar15 + 0x523));
  *(undefined1 *)(puVar15 + 0x62c) = 0;
  puVar15[0x62b] = 0;
  puVar15[0x62a] = 0;
  puVar15[0x629] = 0;
  puVar15[0x630] = 0;
  puVar15[0x633] = 0;
  puVar15[0x632] = 0;
  puVar15[0x631] = 0;
  puVar15[0x62f] = 0;
  puVar15[0x62e] = 0;
  *(undefined2 *)(puVar15 + 0x630) = 1;
  *(undefined1 *)((long)puVar15 + 0x3182) = 0;
  param_2[0x1c] = (long)puVar15;
  if (((DAT_7105335e18 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_7105335e18), iVar7 != 0)) {
    FUN_71037c3a70(&DAT_7105335b90);
    _DAT_7105335bc8 = 0;
    DAT_7105335bb8 = 0;
    DAT_7105335bc0._0_5_ = 0;
    DAT_7105335bc0._5_3_ = 0;
    DAT_7105335b90 = &PTR_FUN_7105265b08;
    DAT_7105335ba8 = 0;
    DAT_7105335bb0 = 0;
    std::recursive_mutex::recursive_mutex((recursive_mutex *)&DAT_7105335bd0);
    DAT_7105335b90 = &PTR_FUN_7105265b48;
    DAT_7105335bf0 = &PTR_FUN_7105265b98;
    DAT_7105335bf8 = 0;
    DAT_7105335c38 = 0;
    DAT_7105335c40 = 0;
    DAT_7105335c48 = 0;
    _DAT_7105335c30 = 1;
    DAT_7105335c50 = 0x20000;
    DAT_7105335c20 = 0;
    DAT_7105335c28 = 0;
    DAT_7105335c10 = 0;
    DAT_7105335c18 = 0;
    DAT_7105335c00 = 0;
    DAT_7105335c08 = 0;
    DAT_7105335c88 = 0;
    _DAT_7105335c90 = 0;
    DAT_7105335c78 = 0;
    DAT_7105335c80 = 0;
    DAT_7105335c68 = 0;
    DAT_7105335c70 = 0;
    DAT_7105335c58 = 0;
    DAT_7105335c60 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105335e18);
  }
  uVar26 = DAT_7105335bf8;
  (*DAT_7105940920)(DAT_7105335bf8,0x19,puVar15 + 0x62d);
  (*DAT_7105940bd0)(&local_1f8);
  (*DAT_7105940bc8)(&local_1f8,uVar26);
  pppplVar17 = (long ****)&DAT_00000004;
  FUN_71037ff890((long)puVar15,&local_1f8,4,(ulong)ppppbVar21);
  lVar12 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar21,param_6,param_7,param_8,param_9);
  if (lVar12 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_33c[1] = 0;
      local_240._0_4_ = 0x100;
      local_240._4_4_ = 0;
      pppplVar17 = (long ****)&local_240;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_33c + 1);
      if (((uVar11 & 1) != 0) &&
         (lVar12 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar21,param_6,param_7,param_8,param_9),
         lVar12 != 0)) goto LAB_71037fbd98;
    }
    lVar12 = 0;
  }
LAB_71037fbd98:
  puVar15[3] = lVar12;
  cVar6 = (*DAT_7105940c08)(lVar12,&local_1f8);
  if (cVar6 == '\0') {
    FUN_71037ff980(aiStack_388,(long)puVar15);
LAB_71037fc1c0:
    (**(code **)(*param_2 + 0x38))(auStack_2e8,param_2);
  }
  else {
    (*DAT_7105940c10)(puVar15[3],"Shader");
    ppppbVar21 = (byte ****)
                 (ulong)(uint)((iVar9 + iVar4) * iVar3 + (iVar8 + (int)lVar14) * (int)lVar10);
    pppplVar17 = (long ****)0x5;
    FUN_71037ff890((long)puVar15,&local_1f8,5,(ulong)ppppbVar21);
    lVar10 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar21,param_6,param_7,param_8,param_9);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_33c[1] = 0;
        local_240._0_4_ = 0x100;
        local_240._4_4_ = 0;
        pppplVar17 = (long ****)&local_240;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_33c + 1);
        if (((uVar11 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar21,param_6,param_7,param_8,param_9
                                   ), lVar10 != 0)) goto LAB_71037fbe50;
      }
      lVar10 = 0;
    }
LAB_71037fbe50:
    puVar15[4] = lVar10;
    cVar6 = (*DAT_7105940c08)(lVar10,&local_1f8);
    if (cVar6 == '\0') {
      FUN_71037ff980(&local_78,(long)puVar15);
      goto LAB_71037fc1c0;
    }
    (*DAT_7105940c10)(puVar15[4],"Descriptors");
    pppplVar17 = (long ****)0x3;
    FUN_71037ff890((long)puVar15,&local_1f8,3,(ulong)ppppbVar22);
    lVar10 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_33c[1] = 0;
        local_240._0_4_ = 0x100;
        local_240._4_4_ = 0;
        pppplVar17 = (long ****)&local_240;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_33c + 1);
        if (((uVar11 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9
                                   ), lVar10 != 0)) goto LAB_71037fbee4;
      }
      lVar10 = 0;
    }
LAB_71037fbee4:
    *plVar30 = lVar10;
    cVar6 = (*DAT_7105940c08)(lVar10,&local_1f8);
    if (cVar6 == '\0') {
      FUN_71037ff980((int *)local_248,(long)puVar15);
      goto LAB_71037fc1c0;
    }
    (*DAT_7105940c10)(*plVar30,"Uncached/Uncached");
    iVar9 = param_3[0xc];
    uVar23 = param_3[0xd];
    iVar8 = FUN_710392e1f0(&local_240,0x10,(long ****)&DAT_00000100,ppppbVar22,param_6,param_7,
                           param_8,param_9);
    if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_1f8 = (long ****)&DAT_00000100;
      uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_1f8);
      if ((uVar11 & 1) != 0) {
        FUN_710392e1f0(&local_240,0x10,(long ****)&DAT_00000100,ppppbVar22,param_6,param_7,param_8,
                       param_9);
      }
    }
    ppuVar18 = (undefined **)CONCAT44(local_240._4_4_,(uint)local_240);
    nu::VirtualAllocHook(0x100,0x10,ppuVar18);
    puVar15 = (undefined8 *)CONCAT44(local_240._4_4_,(uint)local_240);
    FUN_71037c3a70(puVar15);
    puVar15[0x1d] = 0;
    *puVar15 = &PTR_FUN_7105265f78;
    *(undefined4 *)(puVar15 + 0xe) = 0x3f800000;
    *(undefined4 *)(puVar15 + 0x13) = 0x3f800000;
    *(undefined4 *)(puVar15 + 0x18) = 0x3f800000;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[0x11] = 0;
    puVar15[0x12] = 0;
    puVar15[0xf] = 0;
    puVar15[0x10] = 0;
    puVar15[0x16] = 0;
    puVar15[0x17] = 0;
    puVar15[0x14] = 0;
    puVar15[0x15] = 0;
    puVar15[0x1b] = 0;
    puVar15[0x1c] = 0;
    *(undefined2 *)(puVar15 + 0x1c) = 1;
    *(undefined1 *)((long)puVar15 + 0xe2) = 0;
    puVar15[0x1e] = 0;
    puVar15[0x1f] = 0;
    puVar15[0x19] = 0;
    puVar15[0x1a] = 0;
    param_2[0x1e] = (long)puVar15;
    if (((DAT_7105335e18 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_7105335e18), iVar8 != 0)) {
      FUN_71037c3a70(&DAT_7105335b90);
      _DAT_7105335bc8 = 0;
      DAT_7105335bb8 = 0;
      DAT_7105335bc0._0_5_ = 0;
      DAT_7105335bc0._5_3_ = 0;
      DAT_7105335b90 = &PTR_FUN_7105265b08;
      DAT_7105335ba8 = 0;
      DAT_7105335bb0 = 0;
      std::recursive_mutex::recursive_mutex((recursive_mutex *)&DAT_7105335bd0);
      DAT_7105335b90 = &PTR_FUN_7105265b48;
      DAT_7105335bf0 = &PTR_FUN_7105265b98;
      DAT_7105335bf8 = 0;
      DAT_7105335c38 = 0;
      ppuVar18 = &PTR_LOOP_7104f17000;
      DAT_7105335c40 = 0;
      DAT_7105335c48 = 0;
      _DAT_7105335c30 = 1;
      DAT_7105335c50 = 0x20000;
      DAT_7105335c20 = 0;
      DAT_7105335c28 = 0;
      DAT_7105335c10 = 0;
      DAT_7105335c18 = 0;
      DAT_7105335c00 = 0;
      DAT_7105335c08 = 0;
      DAT_7105335c88 = 0;
      _DAT_7105335c90 = 0;
      DAT_7105335c78 = 0;
      DAT_7105335c80 = 0;
      DAT_7105335c68 = 0;
      DAT_7105335c70 = 0;
      DAT_7105335c58 = 0;
      DAT_7105335c60 = 0;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105335e18);
    }
    *(int *)(puVar15 + 2) = iVar9;
    *(undefined4 *)((long)puVar15 + 0x14) = uVar23;
    iVar3 = DAT_7105335c90;
    *(int *)(puVar15 + 3) = DAT_7105335c90;
    *(int *)((long)puVar15 + 0x1c) = DAT_7105335c90;
    iVar8 = (int)DAT_7105335c88;
    lVar10 = FUN_710392e290(0x10,0x20,(long ****)ppuVar18,ppppbVar22,param_6,param_7,param_8,param_9
                           );
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_240._0_4_ = 0;
        local_1f8 = (long ****)&SUB_00000020;
        pppplVar17 = (long ****)&local_1f8;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
        if (((uVar11 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9)
           , lVar10 != 0)) goto LAB_71037fc070;
      }
      lVar10 = 0;
    }
LAB_71037fc070:
    puVar15[0x1a] = lVar10;
    ppppbVar22 = (byte ****)(ulong)(uint)(*(int *)(puVar15 + 2) + *(int *)(puVar15 + 3));
    pppplVar17 = (long ****)0x0;
    cVar6 = (*DAT_7105940c58)(lVar10,*(undefined8 *)(DAT_7105335c70 + 0x20));
    if (cVar6 == '\0') {
      FUN_71037ffe80(local_33c + 1,(long)puVar15);
LAB_71037fc204:
      (**(code **)(*param_2 + 0x38))(auStack_2f0,param_2);
    }
    else {
      (*DAT_7105940c60)(puVar15[0x1a],"main Texture Pool");
      lVar10 = FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
      if (lVar10 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_240._0_4_ = 0;
          local_1f8 = (long ****)&SUB_00000020;
          pppplVar17 = (long ****)&local_1f8;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
          if (((uVar11 & 1) != 0) &&
             (lVar10 = FUN_710392e290(0x10,0x20,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                      param_9), lVar10 != 0)) goto LAB_71037fc118;
        }
        lVar10 = 0;
      }
LAB_71037fc118:
      puVar15[0x1b] = lVar10;
      ppppbVar22 = (byte ****)
                   (ulong)(uint)(*(int *)((long)puVar15 + 0x14) + *(int *)((long)puVar15 + 0x1c));
      pppplVar17 = (long ****)(ulong)(uint)((iVar9 + iVar3) * iVar8);
      cVar6 = (*DAT_7105940c98)(lVar10,*(undefined8 *)(DAT_7105335c70 + 0x20));
      if (cVar6 == '\0') {
        FUN_71037ffe80(aiStack_388,(long)puVar15);
        goto LAB_71037fc204;
      }
      (*DAT_7105940ca0)(puVar15[0x1b],"main Sampler Pool");
      uVar11 = (ulong)*(uint *)(puVar15 + 2);
      local_1f8 = (long ****)((ulong)local_1f8 & 0xffffffff00000000);
      lVar10 = puVar15[4];
      uVar27 = puVar15[5] - lVar10 >> 2;
      if (uVar27 < uVar11) {
        pppplVar17 = (long ****)&local_1f8;
        FUN_71037fff60(puVar15 + 4,uVar11 - uVar27,(undefined4 *)pppplVar17,ppppbVar22,param_6,
                       param_7,param_8,param_9);
      }
      else if (uVar27 != uVar11) {
        puVar15[5] = lVar10 + uVar11 * 4;
      }
      uVar11 = (ulong)*(uint *)((long)puVar15 + 0x14);
      local_1f8 = (long ****)((ulong)local_1f8 & 0xffffffff00000000);
      lVar10 = puVar15[7];
      uVar27 = puVar15[8] - lVar10 >> 2;
      if (uVar27 < uVar11) {
        pppplVar17 = (long ****)&local_1f8;
        FUN_71037fff60(puVar15 + 7,uVar11 - uVar27,(undefined4 *)pppplVar17,ppppbVar22,param_6,
                       param_7,param_8,param_9);
      }
      else if (uVar27 != uVar11) {
        puVar15[8] = lVar10 + uVar11 * 4;
      }
      lVar10 = FUN_710392e290(0x10,0xa0,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
      if (lVar10 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_240._0_4_ = 0;
          local_1f8 = (long ****)&DAT_000000a0;
          pppplVar17 = (long ****)&local_1f8;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
          if (((uVar11 & 1) != 0) &&
             (lVar10 = FUN_710392e290(0x10,0xa0,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                      param_9), lVar10 != 0)) goto LAB_71037fc2c0;
        }
        lVar10 = 0;
      }
LAB_71037fc2c0:
      param_2[0x11] = lVar10;
      cVar6 = (*DAT_71059413e8)(lVar10,param_2[0xd]);
      if (cVar6 != '\0') {
        (*DAT_7105940a08)(local_33c + 1);
        (*DAT_7105940a00)(local_33c + 1,param_2[0xd]);
        (*DAT_7105940a10)(local_33c + 1,1);
        (*DAT_7105940a20)(local_33c + 1,0x200000);
        (*DAT_7105940a18)(local_33c + 1,0x200000);
        (*DAT_7105940a28)(local_33c + 1,0x20000);
        lVar10 = FUN_710392e290(0x10,0x2000,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        if (lVar10 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_240._0_4_ = 0;
            local_1f8 = (long ****)0x2000;
            pppplVar17 = (long ****)&local_1f8;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
            if (((uVar11 & 1) != 0) &&
               (lVar10 = FUN_710392e290(0x10,0x2000,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                        param_9), lVar10 != 0)) goto LAB_71037fc3a4;
          }
          lVar10 = 0;
        }
LAB_71037fc3a4:
        param_2[0xe] = lVar10;
        (*DAT_7105940a98)(lVar10,local_33c + 1);
        lVar10 = FUN_710392e290(0x10,0x40,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        if (lVar10 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_240._0_4_ = 0;
            local_1f8 = (long ****)&DAT_00000040;
            pppplVar17 = (long ****)&local_1f8;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
            if (((uVar11 & 1) != 0) &&
               (lVar10 = FUN_710392e290(0x10,0x40,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                        param_9), lVar10 != 0)) goto LAB_71037fc40c;
          }
          lVar10 = 0;
        }
LAB_71037fc40c:
        param_2[0x10] = lVar10;
        (*DAT_7105941858)(lVar10,param_2[0xd]);
        FUN_71037c9210();
        lVar10 = FUN_710392e290(0x10,0x2000,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        if (lVar10 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_240._0_4_ = 0;
            local_1f8 = (long ****)0x2000;
            pppplVar17 = (long ****)&local_1f8;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
            if (((uVar11 & 1) != 0) &&
               (lVar10 = FUN_710392e290(0x10,0x2000,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                        param_9), lVar10 != 0)) goto LAB_71037fc478;
          }
          lVar10 = 0;
        }
LAB_71037fc478:
        param_2[0xf] = lVar10;
        (*DAT_7105940a08)(local_33c + 1);
        (*DAT_7105940a00)(local_33c + 1,param_2[0xd]);
        (*DAT_7105940a10)(local_33c + 1,3);
        (*DAT_7105940a98)(param_2[0xf],local_33c + 1);
        (*DAT_7105940920)(param_2[0xd],0x16,local_33c);
        param_2[0x1a] = (long)local_33c[0];
        (*DAT_7105940920)(param_2[0xd],0x14,&local_340);
        (*DAT_7105940920)(param_2[0xd],0x13,local_248);
        local_248[0] = local_248[0] + 0xfff & 0xfffff000;
        uVar27 = (ulong)local_340;
        pppplVar17 = (long ****)(long)local_33c[0];
        uVar11 = uVar27;
        if (uVar27 < 9) {
          uVar11 = 8;
        }
        iVar9 = FUN_710392e1f0(&local_240,uVar11,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                               param_9);
        if (((iVar9 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_1f8 = pppplVar17,
           uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_1f8),
           (uVar13 & 1) != 0)) {
          FUN_710392e1f0(&local_240,uVar11,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        }
        nu::VirtualAllocHook
                  ((ulong)pppplVar17,uVar27,(void *)CONCAT44(local_240._4_4_,(uint)local_240));
        param_2[0x19] = CONCAT44(local_240._4_4_,(uint)local_240);
        if (CONCAT44(local_240._4_4_,(uint)local_240) == 0) {
          (**(code **)(*param_2 + 0x38))(auStack_348,param_2);
          goto LAB_71037fc858;
        }
        uVar27 = (ulong)(int)local_248[0];
        pppplVar17 = (long ****)param_2[0x18];
        uVar11 = uVar27;
        if (uVar27 < 9) {
          uVar11 = 8;
        }
        iVar9 = FUN_710392e1f0(&local_240,uVar11,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                               param_9);
        if (((iVar9 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_1f8 = pppplVar17,
           uVar13 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_1f8),
           (uVar13 & 1) != 0)) {
          FUN_710392e1f0(&local_240,uVar11,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        }
        pppplVar19 = (long ****)CONCAT44(local_240._4_4_,(uint)local_240);
        nu::VirtualAllocHook((ulong)pppplVar17,uVar27,pppplVar19);
        lVar10 = CONCAT44(local_240._4_4_,(uint)local_240);
        param_2[0x1b] = lVar10;
        lVar14 = FUN_710392e290(0x10,0x100,pppplVar19,ppppbVar22,param_6,param_7,param_8,param_9);
        if (lVar14 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_240._0_4_ = 0;
            local_1f8 = (long ****)&DAT_00000100;
            pppplVar17 = (long ****)&local_1f8;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
            if (((uVar11 & 1) != 0) &&
               (lVar14 = FUN_710392e290(0x10,0x100,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                        param_9), lVar14 != 0)) goto LAB_71037fc674;
          }
          lVar14 = 0;
        }
LAB_71037fc674:
        FUN_7103812c30(aiStack_388,lVar10,param_2[0x18],0);
        cVar6 = (*DAT_7105940c08)(lVar14,aiStack_388);
        if (cVar6 == '\0') {
          (**(code **)(*param_2 + 0x38))(auStack_390,param_2);
          goto LAB_71037fc858;
        }
        param_2[0x12] = lVar14;
        param_2[0x13] = 0;
        (*DAT_7105941420)(param_2[0x11],param_2[0x19],(long)local_33c[0]);
        pppplVar17 = (long ****)param_2[0x13];
        ppppbVar22 = (byte ****)param_2[0x18];
        (*DAT_7105941418)(param_2[0x11],param_2[0x12]);
        (*DAT_7105941400)(param_2[0x11],FUN_71037fb200);
        (*DAT_71059413f8)(param_2[0x11],"Texture Upload CmdBuf");
        puVar15 = (undefined8 *)
                  FUN_710392e290(0x10,0x50,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
        if (puVar15 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_240._0_4_ = 0;
            local_1f8 = (long ****)&DAT_00000050;
            pppplVar17 = (long ****)&local_1f8;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
            if (((uVar11 & 1) != 0) &&
               (puVar15 = (undefined8 *)
                          FUN_710392e290(0x10,0x50,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                         param_9), puVar15 != (undefined8 *)0x0))
            goto LAB_71037fc764;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_71037fc764:
        puVar15[7] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        *(undefined4 *)(puVar15 + 5) = 0;
        puVar15[3] = 0;
        puVar15[4] = 0;
        *puVar15 = 0;
        puVar15[6] = &PTR_FUN_71052324b8;
        puVar15[1] = 0;
        puVar15[2] = 0;
        param_2[0x1d] = (long)puVar15;
        local_1ff = 0;
        local_240._0_4_ = (uint)local_240 & 0xffffff00;
        FUN_71037c9810((long)&local_240,"dynamic buffer");
        local_1f8 = (long ****)0x0;
        local_1f0 = 0x180000;
        uStack_1ec = 0;
        local_1e8 = 2;
        uVar11 = (ulong)local_1ff;
        local_1a4._0_2_ = (ushort)(byte)local_1a4;
        uStack_1e4 = uStack_1e4 & 0xffffff00;
        if (0x40 < uVar11) {
          plVar16 = (logic_error *)__cxa_allocate_exception(0x10);
          std::logic_error::logic_error(plVar16,"FixedString<>: size is over NUM_CHAR");
          *(undefined **)plVar16 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(plVar16,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
        }
        if (local_1ff == 0) {
          puVar25 = &local_1f8;
        }
        else {
          uVar27 = 0;
          puVar25 = &local_240;
          do {
            local_1a4._0_2_ = CONCAT11((char)uVar27 + '\x01',(byte)local_1a4);
            *(undefined1 *)((long)&uStack_1e4 + uVar27) = *(undefined1 *)puVar25;
            uVar27 = local_1a4 >> 8 & 0xff;
            if (0x40 < uVar27) {
              plVar16 = (logic_error *)__cxa_allocate_exception(0x10);
              std::logic_error::logic_error(plVar16,"FixedString<>: size is over NUM_CHAR");
              *(undefined **)plVar16 = &DAT_7107960010;
                    /* WARNING: Subroutine does not return */
              __cxa_throw(plVar16,&std::out_of_range::typeinfo,std::out_of_range::~out_of_range);
            }
            uVar11 = uVar11 - 1;
            puVar25 = (undefined8 *)((long)puVar25 + 1);
          } while (uVar11 != 0);
          puVar25 = (undefined8 *)((long)&local_1f8 + uVar27);
        }
        *(undefined1 *)((long)puVar25 + 0x14) = 0;
        iVar9 = FUN_710392e1f0(&local_78,0x10,(long ****)0xf20,ppppbVar22,param_6,param_7,param_8,
                               param_9);
        if ((iVar9 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_240._0_4_ = 0xf20;
          local_240._4_4_ = 0;
          uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_240);
          if ((uVar11 & 1) != 0) {
            FUN_710392e1f0(&local_78,0x10,(long ****)0xf20,ppppbVar22,param_6,param_7,param_8,
                           param_9);
          }
        }
        pvVar20 = (void *)CONCAT44(uStack_74,local_78);
        nu::VirtualAllocHook(0xf20,0x10,pvVar20);
        plVar30 = (long *)CONCAT44(uStack_74,local_78);
        FUN_71037c3a70(plVar30);
        *(undefined4 *)(plVar30 + 2) = 0;
        *(undefined1 *)((long)plVar30 + 0x14) = 0;
        plVar30[0x1e3] = 0;
        *plVar30 = (long)&PTR_thunk_FUN_71037d1400_7105242f28;
        if (plVar30 == (long *)0x0) {
          puVar25 = (undefined8 *)0x0;
          uVar26 = 0;
        }
        else {
          puVar25 = (undefined8 *)plVar30[1];
          uVar26 = *puVar25;
        }
        plVar1 = (long *)puVar15[7];
        plVar2 = (long *)puVar15[8];
        puVar15[7] = plVar30;
        puVar15[8] = puVar25;
        lVar10 = puVar15[9];
        puVar15[9] = uVar26;
        if (((plVar2 != (long *)0x0) && (plVar1 != (long *)0x0)) && (*plVar2 == lVar10)) {
          (**(code **)(*plVar1 + 8))();
          plVar30 = (long *)puVar15[7];
        }
        (**(code **)(*plVar30 + 0x10))(&local_78,plVar30,&local_1f8);
        uVar26 = extraout_x1;
        if (-1 < local_78) {
          *puVar15 = 0x80000;
          puVar15[1] = 3;
          (**(code **)(*(long *)puVar15[7] + 0x18))(&local_240);
          uVar31 = *(undefined8 *)(CONCAT44(uStack_234,local_238) + 0x98);
          uVar26 = (*DAT_7105940d30)(uVar31);
          puVar15[2] = uVar26;
          auVar32 = (*DAT_7105940d28)(uVar31);
          uVar26 = auVar32._8_8_;
          puVar15[3] = auVar32._0_8_;
        }
        if (DAT_7105335b08 == '\0') {
          if (param_3[1] != 0) {
            FUN_710359be70((long)((float)(uint)param_3[1] / DAT_7105335b50),uVar26,pvVar20,
                           ppppbVar22,param_6,param_7,param_8,param_9);
          }
          local_1e8 = 0;
          uStack_1e4 = 0;
          local_1f8 = (long ****)0x1;
          local_1f0 = 0;
          uStack_1ec = 1;
          uStack_1d8._4_4_ = 1;
          uStack_1d0 = 0;
          local_1cc = &DAT_10000000f;
          local_1e0 = local_1e0 & 0xffffff00;
          uStack_1dc = 0;
          uStack_1d8._0_4_ = (uint)uStack_1d8 & 0xffffff00;
          local_1c4 = 0;
          local_1bc = 1;
          local_1b8 = 0;
          local_1a4 = 1;
          local_19c = &DAT_10000000f;
          local_1b0 = 0;
          local_1ac = 0;
          local_1a8 = 0;
          local_194 = 0;
          local_190 = 0x100000000;
          local_188 = 0;
          local_174 = 1;
          local_16c = &DAT_10000000f;
          local_180 = 0;
          local_17c = 0;
          local_178 = 0;
          local_164 = 0;
          local_15c = 1;
          local_158 = 0;
          local_144 = 1;
          local_13c = &DAT_10000000f;
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_134 = 0;
          local_12c = 1;
          local_128 = 0;
          local_114 = 1;
          local_10c = &DAT_10000000f;
          local_120 = 0;
          local_11c = 0;
          local_118 = 0;
          local_104 = 0;
          local_fc = 1;
          local_f8 = 0;
          local_e4 = 1;
          local_dc = &DAT_10000000f;
          local_f0 = 0;
          local_ec = 0;
          local_e8 = 0;
          local_d4 = 0;
          local_a0 = 0x100000000;
          DAT_7105335b08 = '\x01';
          local_cc = 1;
          local_c8 = 0;
          local_b4 = 1;
          local_b0 = 0xf00000000;
          local_c0 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_a8 = 1;
          local_98 = 0;
          local_84 = 1;
          local_7c = 0xf;
          local_90 = 0;
          local_8c = 0;
          local_88 = 0;
          FUN_710359b630(&local_240,(uint *)&local_1f8,pvVar20,ppppbVar22,param_6,param_7,param_8,
                         param_9);
          uVar26 = extraout_x1_00;
          if (((long *)CONCAT44(uStack_22c,local_230) == (long *)0x0) ||
             (*(long *)CONCAT44(uStack_22c,local_230) != CONCAT71(uStack_227,local_228))) {
            DAT_7105335b60 = 0;
          }
          else {
            DAT_7105335b60 = CONCAT44(uStack_234,local_238);
            if (DAT_7105335b60 != 0) {
              DAT_7105335b68 = *(undefined8 **)(DAT_7105335b60 + 8);
              DAT_7105335b70 = *DAT_7105335b68;
              goto LAB_71037fcbc4;
            }
          }
          DAT_7105335b70 = 0;
          DAT_7105335b68 = (undefined8 *)0x0;
        }
LAB_71037fcbc4:
        if (DAT_7105335490 == '\0') {
          if (param_3[2] != 0) {
            FUN_7103593d50((long)((float)(uint)param_3[2] / DAT_71053354d8),uVar26,pvVar20,
                           ppppbVar22,param_6,param_7,param_8,param_9);
          }
          DAT_7105335490 = '\x01';
          local_1f8 = (long ****)CONCAT44(3,(uint)local_1f8);
          local_1f0 = local_1f0 & 0xffffff00;
          local_1f8 = (long ****)CONCAT62(local_1f8._2_6_,0x101);
          uStack_1ec = 0;
          local_1e8 = 0xff;
          local_1cc = (undefined1 *)0x0;
          uStack_1d8._4_4_ = 0;
          uStack_1d0 = 0;
          uStack_1e4 = 0xff;
          local_1e0 = 7;
          local_1c4 = local_1c4 & 0xffffffff00000000;
          uStack_1dc = 0;
          uStack_1d8._0_4_ = 0;
          FUN_7103593520(&local_240,(byte *)&local_1f8,pvVar20,ppppbVar22,param_6,param_7,param_8,
                         param_9);
          uVar26 = extraout_x1_01;
          if (((long *)CONCAT44(uStack_22c,local_230) == (long *)0x0) ||
             (*(long *)CONCAT44(uStack_22c,local_230) != CONCAT71(uStack_227,local_228))) {
            DAT_71053354e8 = 0;
          }
          else {
            DAT_71053354e8 = CONCAT44(uStack_234,local_238);
            if (DAT_71053354e8 != 0) {
              DAT_71053354f0 = *(undefined8 **)(DAT_71053354e8 + 8);
              DAT_71053354f8 = *DAT_71053354f0;
              goto LAB_71037fcc94;
            }
          }
          DAT_71053354f8 = 0;
          DAT_71053354f0 = (undefined8 *)0x0;
        }
LAB_71037fcc94:
        if (DAT_71052b6f20 == '\0') {
          if (param_3[3] != 0) {
            FUN_71035915f0((long)((float)(uint)param_3[3] / DAT_71052b6f68),uVar26,pvVar20,
                           ppppbVar22,param_6,param_7,param_8,param_9);
          }
          DAT_71052b6f20 = '\x01';
          local_240._0_4_ = 1;
          uStack_234 = 0;
          local_230 = 0;
          local_240._4_4_ = 0;
          local_238 = 0;
          uStack_22c = 0x1000001;
          local_228 = 0;
          FUN_7103590cf0(&local_1f8,(uint *)&local_240,pvVar20,ppppbVar22,param_6,param_7,param_8,
                         param_9);
          uVar26 = extraout_x1_02;
          if (((long *)CONCAT44(uStack_1e4,local_1e8) == (long *)0x0) ||
             (*(long *)CONCAT44(uStack_1e4,local_1e8) != CONCAT44(uStack_1dc,local_1e0))) {
            DAT_71052b6f78 = 0;
          }
          else {
            DAT_71052b6f78 = CONCAT44(uStack_1ec,local_1f0);
            if (DAT_71052b6f78 != 0) {
              DAT_71052b6f80 = *(undefined8 **)(DAT_71052b6f78 + 8);
              DAT_71052b6f88 = *DAT_71052b6f80;
              goto LAB_71037fcd4c;
            }
          }
          DAT_71052b6f88 = 0;
          DAT_71052b6f80 = (undefined8 *)0x0;
        }
LAB_71037fcd4c:
        if (DAT_7105335500 == '\0') {
          if (param_3[4] != 0) {
            FUN_7103592e20((long)((float)(uint)param_3[4] / DAT_7105335548),uVar26,pvVar20,
                           ppppbVar22,param_6,param_7,param_8,param_9);
          }
          DAT_7105335500 = '\x01';
          local_1f8 = (long ****)0x0;
          local_1f0 = 0;
          uStack_1ec = 1;
          local_1e8 = 1;
          uStack_1e4 = 1;
          local_1e0 = 0;
          uStack_1dc = 0;
          uStack_1d0 = 0;
          uStack_1d8._0_4_ = 0;
          uStack_1d8._4_4_ = 0;
          local_1cc = (undefined1 *)0x41800000;
          local_1c4 = 0x700000001;
          local_1bc = local_1bc & 0xffffff00;
          FUN_7103591e00(&local_240,(uint *)&local_1f8,pvVar20,ppppbVar22,param_6,param_7,param_8,
                         param_9);
          uVar26 = extraout_x1_03;
          if ((((long *)CONCAT44(uStack_22c,local_230) == (long *)0x0) ||
              (*(long *)CONCAT44(uStack_22c,local_230) != CONCAT71(uStack_227,local_228))) ||
             (DAT_7105335558 = CONCAT44(uStack_234,local_238), DAT_7105335558 == 0)) {
            DAT_7105335568 = 0;
            DAT_7105335558 = 0;
            DAT_7105335560 = (undefined8 *)0x0;
          }
          else {
            DAT_7105335560 = *(undefined8 **)(DAT_7105335558 + 0x60);
            DAT_7105335568 = *DAT_7105335560;
          }
        }
        if (DAT_7105337298 == '\0') {
          if (param_3[5] != 0) {
            FUN_71035e97b0((long)((float)(uint)param_3[5] / DAT_71053372e0),uVar26,pvVar20,
                           ppppbVar22,param_6,param_7,param_8,param_9);
          }
          DAT_7105337298 = '\x01';
          local_238 = 0;
          uStack_234 = 0;
          local_230 = 0;
          uStack_22c = 0;
          local_240._0_4_ = 0;
          local_240._4_4_ = 0;
          FUN_71035e88e0(&local_1f8,&local_240,pvVar20,ppppbVar22,param_6,param_7,param_8,param_9);
          if (((long *)CONCAT44(uStack_1e4,local_1e8) == (long *)0x0) ||
             (*(long *)CONCAT44(uStack_1e4,local_1e8) != CONCAT44(uStack_1dc,local_1e0))) {
            DAT_71053372f0 = 0;
          }
          else {
            DAT_71053372f0 = CONCAT44(uStack_1ec,local_1f0);
            if (DAT_71053372f0 != 0) {
              DAT_71053372f8 = *(undefined8 **)(DAT_71053372f0 + 8);
              DAT_7105337300 = *DAT_71053372f8;
              goto LAB_71037fceb0;
            }
          }
          DAT_7105337300 = 0;
          DAT_71053372f8 = (undefined8 *)0x0;
        }
LAB_71037fceb0:
        std::recursive_mutex::lock();
        lVar10 = param_2[3];
        uVar29 = *(uint *)(param_2 + 6);
        uVar11 = (ulong)uVar29;
        if ((ulong)((param_2[5] - lVar10 >> 3) * -0x5555555555555555) < uVar11) {
          uStack_1d8 = param_2 + 5;
          lVar14 = param_2[4];
          pppplVar17 = (long ****)(uVar11 * 0x18);
          iVar9 = FUN_710392e1f0(&local_78,0x10,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                 param_9);
          local_240 = (long ****)CONCAT44(local_240._4_4_,(uint)local_240);
          if ((iVar9 == 0xc) &&
             (local_240 = (long ****)CONCAT44(local_240._4_4_,(uint)local_240),
             DAT_710593d2b0 != (long *)0x0)) {
            local_240 = pppplVar17;
            uVar27 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_240);
            if ((uVar27 & 1) != 0) {
              FUN_710392e1f0(&local_78,0x10,pppplVar17,ppppbVar22,param_6,param_7,param_8,param_9);
            }
          }
          nu::VirtualAllocHook((ulong)pppplVar17,0x10,(void *)CONCAT44(uStack_74,local_78));
          lVar14 = CONCAT44(uStack_74,local_78) + (lVar14 - lVar10 >> 3) * 8;
          pppplVar17 = (long ****)param_2[3];
          lVar10 = lVar14;
          local_1f8 = pppplVar17;
          pppplVar19 = (long ****)param_2[4];
          if ((long ****)param_2[4] != pppplVar17) {
            do {
              *(undefined8 *)(lVar10 + -0x10) = 0;
              *(undefined8 *)(lVar10 + -8) = 0;
              *(undefined8 *)(lVar10 + -0x18) = 0;
              pppplVar28 = pppplVar19 + -3;
              *(long ****)(lVar10 + -0x18) = *pppplVar28;
              *(long ****)(lVar10 + -0x10) = pppplVar19[-2];
              *(long ****)(lVar10 + -8) = pppplVar19[-1];
              *pppplVar28 = (long ***)0x0;
              pppplVar19[-2] = (long ***)0x0;
              pppplVar19[-1] = (long ***)0x0;
              lVar10 = lVar10 + -0x18;
              pppplVar19 = pppplVar28;
            } while (pppplVar17 != pppplVar28);
            pppplVar17 = (long ****)param_2[4];
            local_1f8 = (long ****)param_2[3];
          }
          param_2[3] = lVar10;
          param_2[4] = lVar14;
          local_1f0 = (uint)local_1f8;
          uStack_1ec = (undefined4)((ulong)local_1f8 >> 0x20);
          local_1e8 = SUB84(pppplVar17,0);
          uStack_1e4 = (uint)((ulong)pppplVar17 >> 0x20);
          lVar10 = param_2[5];
          param_2[5] = CONCAT44(uStack_74,local_78) + uVar11 * 0x18;
          local_1e0 = (uint)lVar10;
          uStack_1dc = (undefined4)((ulong)lVar10 >> 0x20);
          FUN_71037fe6e0(&local_1f8);
          uVar29 = *(uint *)(param_2 + 6);
        }
        if (uVar29 != 0) {
          uVar29 = 0;
          do {
            puVar15 = (undefined8 *)param_2[4];
            if (puVar15 < (undefined8 *)param_2[5]) {
              puVar15[1] = 0;
              puVar15[2] = 0;
              *puVar15 = 0;
              param_2[4] = param_2[4] + 0x18;
            }
            else {
              lVar14 = param_2[3];
              lVar10 = (long)puVar15 - lVar14 >> 3;
              uVar11 = lVar10 * -0x5555555555555555 + 1;
              if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar14 = param_2[5] - lVar14 >> 3;
              uVar27 = 0xaaaaaaaaaaaaaaa;
              uStack_1d8 = param_2 + 5;
              if ((ulong)(lVar14 * -0x5555555555555555) < 0x555555555555555) {
                uVar13 = lVar14 * 0x5555555555555556;
                uVar27 = uVar11;
                if (uVar11 <= uVar13) {
                  uVar27 = uVar13;
                }
                if (uVar27 != 0) goto LAB_71037fd0a8;
                lVar14 = 0;
              }
              else {
LAB_71037fd0a8:
                uStack_1dc = 0;
                local_1e0 = 0;
                pppplVar17 = (long ****)(uVar27 * 0x18);
                iVar9 = FUN_710392e1f0(&local_78,0x10,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                       param_9);
                if ((iVar9 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
                  local_240 = pppplVar17;
                  uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_240);
                  if ((uVar11 & 1) != 0) {
                    FUN_710392e1f0(&local_78,0x10,pppplVar17,ppppbVar22,param_6,param_7,param_8,
                                   param_9);
                  }
                }
                nu::VirtualAllocHook((ulong)pppplVar17,0x10,(void *)CONCAT44(uStack_74,local_78));
                lVar14 = CONCAT44(uStack_74,local_78);
              }
              puVar25 = (undefined8 *)(lVar14 + lVar10 * 8);
              puVar15 = puVar25 + 3;
              puVar25[1] = 0;
              puVar25[2] = 0;
              *puVar25 = 0;
              pppplVar17 = (long ****)param_2[3];
              local_1f8 = pppplVar17;
              pppplVar19 = (long ****)param_2[4];
              if ((long ****)param_2[4] != pppplVar17) {
                do {
                  puVar25[-2] = 0;
                  puVar25[-1] = 0;
                  puVar25[-3] = 0;
                  pppplVar28 = pppplVar19 + -3;
                  puVar25[-3] = *pppplVar28;
                  puVar25[-2] = pppplVar19[-2];
                  puVar25[-1] = pppplVar19[-1];
                  *pppplVar28 = (long ***)0x0;
                  pppplVar19[-2] = (long ***)0x0;
                  pppplVar19[-1] = (long ***)0x0;
                  puVar25 = puVar25 + -3;
                  pppplVar19 = pppplVar28;
                } while (pppplVar17 != pppplVar28);
                pppplVar17 = (long ****)param_2[4];
                local_1f8 = (long ****)param_2[3];
              }
              param_2[3] = (long)puVar25;
              param_2[4] = (long)puVar15;
              local_1f0 = (uint)local_1f8;
              uStack_1ec = (undefined4)((ulong)local_1f8 >> 0x20);
              local_1e8 = SUB84(pppplVar17,0);
              uStack_1e4 = (uint)((ulong)pppplVar17 >> 0x20);
              lVar10 = param_2[5];
              param_2[5] = lVar14 + uVar27 * 0x18;
              local_1e0 = (uint)lVar10;
              uStack_1dc = (undefined4)((ulong)lVar10 >> 0x20);
              FUN_71037fe6e0(&local_1f8);
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 < *(uint *)(param_2 + 6));
        }
        std::recursive_mutex::unlock();
        uVar23 = 0;
        goto LAB_71037fc860;
      }
      (**(code **)(*param_2 + 0x38))(auStack_2f8,param_2);
    }
  }
  *param_1 = 0xf0040001;
LAB_71037fc864:
  if (&local_280 == local_260) {
    pcVar24 = *(code **)(*local_260 + 0x20);
  }
  else {
    if (local_260 == (undefined **)0x0) {
      return;
    }
    pcVar24 = *(code **)(*local_260 + 0x28);
  }
  (*pcVar24)();
  return;
}

