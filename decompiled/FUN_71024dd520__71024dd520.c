// addr:      71024dd520
// offset:    0x24dd520
// name:      FUN_71024dd520
// mangled:   
// signature: undefined __cdecl FUN_71024dd520(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71024dd520(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong *puVar28;
  long *__dest;
  undefined **ppuVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined2 uVar36;
  short sVar37;
  ushort uVar38;
  ushort uVar39;
  char cVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined **ppuVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  long ********pppppppplVar47;
  ulong uVar48;
  long ********pppppppplVar49;
  int iVar50;
  bool bVar51;
  bool bVar52;
  uint uVar53;
  uint uVar54;
  ulong *puVar55;
  undefined1 *puVar56;
  undefined *puVar57;
  undefined **__dest_00;
  long ********pppppppplVar58;
  ulong uVar59;
  ulong uVar60;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  long ***ppplVar61;
  int iVar62;
  int iVar63;
  uint uVar64;
  uint uVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  char *pcVar69;
  long *********ppppppppplVar70;
  long *plVar71;
  undefined8 *puVar72;
  long *******ppppppplVar73;
  ulong *puVar74;
  ulong uVar75;
  ulong uVar76;
  short *psVar77;
  ulong *puVar78;
  uint *puVar79;
  long *plVar80;
  byte *pbVar81;
  undefined1 uVar82;
  uint *puVar83;
  ulong *puVar84;
  int *piVar85;
  ulong *puVar86;
  int *piVar87;
  ulong uVar88;
  undefined8 uVar89;
  long lVar90;
  ulong uVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  ulong uVar95;
  ulong uVar96;
  long *plVar97;
  long ****pppplVar98;
  undefined8 *puVar99;
  long *plVar100;
  long *plVar101;
  uint *puVar102;
  ulong uVar103;
  ulong uVar104;
  float fVar105;
  undefined1 auVar106 [12];
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  undefined4 uVar110;
  undefined1 auVar111 [16];
  ulong local_280;
  long local_270;
  long *local_1f0;
  ulong *local_1d8;
  ulong *local_1b0;
  undefined8 local_168;
  long ********local_160;
  long ********local_158;
  undefined8 local_150;
  undefined **ppuStack_148;
  undefined **local_140;
  long *******local_130;
  long *******ppppppplStack_128;
  long *******local_120;
  undefined8 local_118;
  ulong local_110;
  long *******local_108;
  long *******local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  char acStack_c8 [16];
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  
  local_1f0 = param_1 + 0x3db;
  if (param_1[0x3db] != 0) {
    FUN_71024fce50(1.0,param_1[0x3db]);
    if ((*(int *)(*local_1f0 + 0x21c8) != 0) && (lVar66 = param_1[0x3e5], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*local_1f0 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3e5]);
    }
  }
  plVar101 = param_1 + 0x3dc;
  if (param_1[0x3dc] != 0) {
    FUN_71024fce50(1.0,param_1[0x3dc]);
    if ((*(int *)(*plVar101 + 0x21c8) != 0) && (lVar66 = param_1[0x3e6], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar101 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3e6]);
    }
  }
  plVar97 = param_1 + 0x3dd;
  if (param_1[0x3dd] != 0) {
    FUN_71024fce50(1.0,param_1[0x3dd]);
    if ((*(int *)(*plVar97 + 0x21c8) != 0) && (lVar66 = param_1[999], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar97 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[999]);
    }
  }
  plVar100 = param_1 + 0x3de;
  if (param_1[0x3de] != 0) {
    FUN_71024fce50(1.0,param_1[0x3de]);
    if ((*(int *)(*plVar100 + 0x21c8) != 0) && (lVar66 = param_1[1000], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar100 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[1000]);
    }
  }
  plVar71 = param_1 + 0x3df;
  if (param_1[0x3df] != 0) {
    FUN_71024fce50(1.0,param_1[0x3df]);
    if ((*(int *)(*plVar71 + 0x21c8) != 0) && (lVar66 = param_1[0x3e9], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar71 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3e9]);
    }
  }
  plVar80 = param_1 + 0x3e0;
  if (param_1[0x3e0] != 0) {
    FUN_71024fce50(1.0,param_1[0x3e0]);
    if ((*(int *)(*plVar80 + 0x21c8) != 0) && (lVar66 = param_1[0x3ea], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar80 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3ea]);
    }
  }
  plVar3 = param_1 + 0x3e1;
  if (param_1[0x3e1] != 0) {
    FUN_71024fce50(1.0,param_1[0x3e1]);
    if ((*(int *)(*plVar3 + 0x21c8) != 0) && (lVar66 = param_1[0x3eb], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar3 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3eb]);
    }
  }
  plVar4 = param_1 + 0x3e2;
  if (param_1[0x3e2] != 0) {
    FUN_71024fce50(1.0,param_1[0x3e2]);
    if ((*(int *)(*plVar4 + 0x21c8) != 0) && (lVar66 = param_1[0x3ec], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar4 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3ec]);
    }
  }
  plVar5 = param_1 + 0x3e3;
  if (param_1[0x3e3] != 0) {
    FUN_71024fce50(1.0,param_1[0x3e3]);
    if ((*(int *)(*plVar5 + 0x21c8) != 0) && (lVar66 = param_1[0x3ed], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar5 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3ed]);
    }
  }
  plVar6 = param_1 + 0x3e4;
  if (param_1[0x3e4] != 0) {
    FUN_71024fce50(1.0,param_1[0x3e4]);
    if ((*(int *)(*plVar6 + 0x21c8) != 0) && (lVar66 = param_1[0x3ee], lVar66 != 0)) {
      auVar111 = *(undefined1 (*) [16])(*plVar6 + 0x2160);
      auVar109 = NEON_ext(auVar111,auVar111,8,1);
      *(ulong *)(lVar66 + 0xa8) = (ulong)auVar109._0_4_;
      *(long *)(lVar66 + 0xa0) = auVar111._0_8_;
      FUN_7102508e30(param_1[0x3ee]);
    }
  }
  uVar53 = *(uint *)(param_1 + 0x30e);
  puVar102 = (uint *)(param_1 + 0x30e);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024dd8ec;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar102 = 0;
  }
LAB_71024dd8ec:
  uVar53 = *(uint *)((long)param_1 + 0x1874);
  puVar7 = (uint *)((long)param_1 + 0x1874);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024dd98c;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar7 = 0;
  }
LAB_71024dd98c:
  uVar53 = *(uint *)(param_1 + 0x30f);
  puVar8 = (uint *)(param_1 + 0x30f);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024dda2c;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar8 = 0;
  }
LAB_71024dda2c:
  uVar53 = *(uint *)((long)param_1 + 0x187c);
  puVar9 = (uint *)((long)param_1 + 0x187c);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddacc;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar9 = 0;
  }
LAB_71024ddacc:
  uVar53 = *(uint *)(param_1 + 0x310);
  puVar10 = (uint *)(param_1 + 0x310);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddb6c;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar10 = 0;
  }
LAB_71024ddb6c:
  uVar53 = *(uint *)((long)param_1 + 0x1884);
  puVar11 = (uint *)((long)param_1 + 0x1884);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddc10;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar11 = 0;
  }
LAB_71024ddc10:
  uVar53 = *(uint *)(param_1 + 0x311);
  puVar12 = (uint *)(param_1 + 0x311);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddcb4;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar12 = 0;
  }
LAB_71024ddcb4:
  uVar53 = *(uint *)((long)param_1 + 0x188c);
  puVar13 = (uint *)((long)param_1 + 0x188c);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddd58;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar13 = 0;
  }
LAB_71024ddd58:
  uVar53 = *(uint *)(param_1 + 0x312);
  puVar14 = (uint *)(param_1 + 0x312);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024dddfc;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar14 = 0;
  }
LAB_71024dddfc:
  uVar53 = *(uint *)((long)param_1 + 0x1894);
  puVar15 = (uint *)((long)param_1 + 0x1894);
  if (uVar53 != 0) {
    lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
    if ((int)uVar53 < 0) {
      std::mutex::lock();
    }
    else {
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar67 + 4) == uVar53) && (lVar67 != 0)) goto LAB_71024ddea0;
      std::mutex::lock();
      lVar67 = lVar66 + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((lVar67 != 0) && (*(uint *)(lVar67 + 4) == uVar53)) {
        *(undefined1 *)(lVar66 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
      }
    }
    std::mutex::unlock();
    *puVar15 = 0;
  }
LAB_71024ddea0:
  local_1b0 = (ulong *)(param_1 + 0x313);
  FUN_71024e5af0(local_1b0);
  puVar74 = (ulong *)(param_1 + 0x31d);
  FUN_71024e5af0(puVar74);
  puVar86 = (ulong *)(param_1 + 0x327);
  FUN_71024e5af0(puVar86);
  puVar16 = (ulong *)(param_1 + 0x331);
  FUN_71024e5af0(puVar16);
  puVar17 = (ulong *)(param_1 + 0x33b);
  FUN_71024e5af0(puVar17);
  puVar78 = (ulong *)(param_1 + 0x345);
  FUN_71024e5af0(puVar78);
  puVar18 = (ulong *)(param_1 + 0x34f);
  FUN_71024e5af0(puVar18);
  puVar19 = (ulong *)(param_1 + 0x359);
  FUN_71024e5af0(puVar19);
  puVar20 = (ulong *)(param_1 + 0x363);
  FUN_71024e5af0(puVar20);
  puVar21 = (ulong *)(param_1 + 0x36d);
  FUN_71024e5af0(puVar21);
  local_1d8 = (ulong *)(param_1 + 0x377);
  FUN_71024e5af0(local_1d8);
  puVar55 = (ulong *)(param_1 + 0x381);
  FUN_71024e5af0(puVar55);
  puVar84 = (ulong *)(param_1 + 0x38b);
  FUN_71024e5af0(puVar84);
  puVar22 = (ulong *)(param_1 + 0x395);
  FUN_71024e5af0(puVar22);
  puVar23 = (ulong *)(param_1 + 0x39f);
  FUN_71024e5af0(puVar23);
  puVar24 = (ulong *)(param_1 + 0x3a9);
  FUN_71024e5af0(puVar24);
  puVar25 = (ulong *)(param_1 + 0x3b3);
  FUN_71024e5af0(puVar25);
  puVar26 = (ulong *)(param_1 + 0x3bd);
  FUN_71024e5af0(puVar26);
  puVar27 = (ulong *)(param_1 + 0x3c7);
  FUN_71024e5af0(puVar27);
  puVar28 = (ulong *)(param_1 + 0x3d1);
  FUN_71024e5af0(puVar28);
  if (((short)param_1[0x2fc] < 1) && ((int)param_1[0x2ed] == 0)) {
    return;
  }
  bVar51 = FUN_71024e57b0((long)param_1);
  if (bVar51) {
    return;
  }
  __dest = param_1 + 0x2ee;
  sVar37 = (short)param_1[0x2fc];
  uVar53 = *(uint *)(param_1 + 0x305);
  if ((uint)(int)sVar37 <= uVar53) goto LAB_71024e3110;
  lVar66 = *(long *)(param_1[3] + 0x428);
  uVar53 = *(int *)(lVar66 + 0x21c8) - 1;
  if (uVar53 < 2) {
    if (*(float *)(lVar66 + 0x21b4) <= *(float *)(lVar66 + 0x2184)) {
      lVar67 = *(long *)(lVar66 + 0xb0);
      goto joined_r0x0071024de080;
    }
    if (*(float *)(lVar66 + 0x2184) < *(float *)(lVar66 + 0x21b8)) {
      lVar67 = *(long *)(lVar66 + 0x88);
      goto joined_r0x0071024de080;
    }
LAB_71024de084:
    lVar67 = *(long *)(lVar66 + 0x78);
  }
  else {
    lVar67 = *(long *)(lVar66 + 0x78);
joined_r0x0071024de080:
    if (lVar67 == 0) goto LAB_71024de084;
  }
  if (((0 < sVar37) || ((int)param_1[0x2ed] != 0)) && ((param_1[0x2f5] & 0xffffffffffU) != 0)) {
    uVar64 = *(uint *)(param_1[9] + 0x3208);
    if (uVar64 != 0) {
      uVar65 = 0;
      do {
        lVar93 = *(long *)(param_1[9] + (ulong)uVar65 * 8 + 8);
        if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2f5]) & 0xffffffffff) == 0) goto LAB_71024de0dc;
        uVar65 = uVar65 + 1;
      } while (uVar65 < uVar64);
    }
    lVar93 = 0;
LAB_71024de0dc:
    if (lVar93 != 0) {
      lVar67 = lVar93;
    }
  }
  pcVar69 = (char *)((long)param_1 + 0x1f94);
  uVar110 = 1;
  auVar106 = SUB1612(ZEXT816(0),0);
  switch((int)param_1[0x2f6]) {
  case 1:
    if (uVar53 < 2) {
      if (*(float *)(lVar66 + 0x21b4) <= *(float *)(lVar66 + 0x2184)) {
        lVar93 = *(long *)(lVar66 + 0xb0);
        goto joined_r0x0071024de188;
      }
      if (*(float *)(lVar66 + 0x2184) < *(float *)(lVar66 + 0x21b8)) {
        lVar93 = *(long *)(lVar66 + 0x88);
        goto joined_r0x0071024de188;
      }
LAB_71024de18c:
      lVar93 = *(long *)(lVar66 + 0x78);
    }
    else {
      lVar93 = *(long *)(lVar66 + 0x78);
joined_r0x0071024de188:
      if (lVar93 == 0) goto LAB_71024de18c;
    }
    if ((0 < sVar37) || ((int)param_1[0x2ed] != 0)) {
      if ((param_1[0x2f5] & 0xffffffffffU) != 0) {
        uVar64 = *(uint *)(param_1[9] + 0x3208);
        if (uVar64 != 0) {
          uVar65 = 0;
          do {
            lVar94 = *(long *)(param_1[9] + (ulong)uVar65 * 8 + 8);
            if (((*(ulong *)(lVar94 + 0x70) ^ param_1[0x2f5]) & 0xffffffffff) == 0)
            goto LAB_71024de1e4;
            uVar65 = uVar65 + 1;
          } while (uVar65 < uVar64);
        }
        lVar94 = 0;
LAB_71024de1e4:
        if (lVar94 != 0) {
          lVar93 = lVar94;
        }
      }
      if (((0 < sVar37) || ((int)param_1[0x2ed] != 0)) && ((param_1[0x2f7] & 0xffffffffffU) != 0)) {
        uVar64 = *(uint *)(param_1[9] + 0x3208);
        if (uVar64 != 0) {
          uVar65 = 0;
          do {
            lVar94 = *(long *)(param_1[9] + (ulong)uVar65 * 8 + 8);
            if (((*(ulong *)(lVar94 + 0x70) ^ param_1[0x2f7]) & 0xffffffffff) == 0)
            goto LAB_71024de240;
            uVar65 = uVar65 + 1;
          } while (uVar65 < uVar64);
        }
        lVar94 = 0;
LAB_71024de240:
        if (lVar94 != 0) {
          lVar93 = lVar94;
        }
      }
    }
    if (lVar93 != 0) {
      if (uVar53 < 2) {
        if (*(float *)(lVar66 + 0x21b4) <= *(float *)(lVar66 + 0x2184)) {
          lVar93 = *(long *)(lVar66 + 0xb0);
          goto joined_r0x0071024de284;
        }
        if (*(float *)(lVar66 + 0x2184) < *(float *)(lVar66 + 0x21b8)) {
          lVar93 = *(long *)(lVar66 + 0x88);
          goto joined_r0x0071024de284;
        }
LAB_71024de288:
        lVar93 = *(long *)(lVar66 + 0x78);
      }
      else {
        lVar93 = *(long *)(lVar66 + 0x78);
joined_r0x0071024de284:
        if (lVar93 == 0) goto LAB_71024de288;
      }
      if ((0 < sVar37) || ((int)param_1[0x2ed] != 0)) {
        if ((param_1[0x2f5] & 0xffffffffffU) != 0) {
          uVar53 = *(uint *)(param_1[9] + 0x3208);
          if (uVar53 != 0) {
            uVar64 = 0;
            do {
              lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
              if (((*(ulong *)(lVar66 + 0x70) ^ param_1[0x2f5]) & 0xffffffffff) == 0)
              goto LAB_71024de2e0;
              uVar64 = uVar64 + 1;
            } while (uVar64 < uVar53);
          }
          lVar66 = 0;
LAB_71024de2e0:
          if (lVar66 != 0) {
            lVar93 = lVar66;
          }
        }
        if (((0 < sVar37) || ((int)param_1[0x2ed] != 0)) && ((param_1[0x2f7] & 0xffffffffffU) != 0))
        {
          uVar53 = *(uint *)(param_1[9] + 0x3208);
          if (uVar53 != 0) {
            uVar64 = 0;
            do {
              lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
              if (((*(ulong *)(lVar66 + 0x70) ^ param_1[0x2f7]) & 0xffffffffff) == 0)
              goto LAB_71024de33c;
              uVar64 = uVar64 + 1;
            } while (uVar64 < uVar53);
          }
          lVar66 = 0;
LAB_71024de33c:
          if (lVar66 != 0) {
            lVar93 = lVar66;
          }
        }
      }
      auVar111._0_4_ = *(float *)(lVar93 + 0xc0) + (float)*(undefined8 *)(lVar93 + 0xa0);
      auVar111._4_4_ =
           *(float *)(lVar93 + 0xc4) + (float)((ulong)*(undefined8 *)(lVar93 + 0xa0) >> 0x20);
      auVar111._8_4_ = *(float *)(lVar93 + 200) + (float)*(undefined8 *)(lVar93 + 0xa8);
      auVar111._12_4_ =
           *(float *)(lVar93 + 0xcc) + (float)((ulong)*(undefined8 *)(lVar93 + 0xa8) >> 0x20);
      goto LAB_71024de350;
    }
    goto LAB_71024de360;
  case 2:
    break;
  case 3:
    uVar110 = 2;
    break;
  case 4:
    uVar110 = 3;
    break;
  case 5:
    uVar110 = 4;
    break;
  case 6:
    uVar110 = 5;
    break;
  default:
    auVar111 = *(undefined1 (*) [16])(param_1[2] + 0x90);
LAB_71024de350:
    auVar109 = NEON_ext(auVar111,auVar111,8,1);
    auVar106._8_4_ = auVar109._0_4_;
    auVar106._0_8_ = auVar111._0_8_;
LAB_71024de360:
    uVar110 = 6;
  }
  lVar66 = param_1[0x2f8];
  lVar68 = param_1[2];
  lVar93 = param_1[0x2f9];
  lVar94 = param_1[0x2fa];
  uVar89 = *(undefined8 *)((long)param_1 + 0x17d4);
  uVar32 = *(undefined4 *)((long)param_1 + 0x17dc);
  *(undefined4 *)(lVar68 + 0x164) = *(undefined4 *)((long)param_1 + 0x17cc);
  *(undefined4 *)(lVar68 + 0x1dc) = uVar110;
  *(ulong *)(lVar68 + 0xa8) = (ulong)auVar106._8_4_;
  *(long *)(lVar68 + 0xa0) = auVar106._0_8_;
  *(int *)(lVar68 + 0x118) = (int)lVar93;
  *(undefined4 *)(lVar68 + 0x11c) = 0;
  *(long *)(lVar68 + 0x110) = lVar66;
  *(int *)(lVar68 + 0x17c) = (int)lVar94;
  *(undefined8 *)(lVar68 + 0x1a4) = uVar89;
  *(undefined4 *)(lVar68 + 0x1ac) = uVar32;
  uVar89 = extraout_x1;
  if (((int)param_1[0x305] == 0) && (*(char *)((long)param_1 + 0x1f95) == '\0')) {
    *(undefined1 *)((long)param_1 + 0x1f95) = 1;
    iVar62 = (int)param_1[0x2fd];
    if (iVar62 == 1) {
      local_280 = param_1[0x3f1];
      lVar66 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      bVar51 = FUN_71032a9220(lVar66,local_280);
      if (bVar51) {
        lVar93 = param_1[0x3ef];
LAB_71024de448:
        uVar53 = FUN_71032a7800(lVar66,local_280);
        param_3 = (long *********)0xffff;
        if (uVar53 < (uint)((int)((ulong)(*(long *)(lVar66 + 0x28) - *(long *)(lVar66 + 0x20)) >> 6)
                           * -0x33333333)) {
          param_3 = (long *********)
                    (ulong)*(ushort *)(*(long *)(lVar66 + 0x20) + (ulong)uVar53 * 0x140);
        }
        local_270 = *(long *)(lVar93 + 0x80);
        *(undefined4 *)(local_270 + 0x38) = 1;
        *(short *)(local_270 + 0x3c) = (short)param_3;
        uVar89 = extraout_x1_00;
        if ((int)param_3 != 0xffff) {
          lVar66 = *(long *)(*DAT_7105329f98 + 0x20);
          goto LAB_71024de50c;
        }
      }
      else {
        local_280 = param_1[0x2fe];
        bVar51 = FUN_71032a9220(lVar66,local_280);
        lVar93 = param_1[0x3ef];
        if (bVar51) goto LAB_71024de448;
        local_270 = *(long *)(lVar93 + 0x80);
        *(undefined4 *)(local_270 + 0x38) = 1;
        *(undefined2 *)(local_270 + 0x3c) = 0;
        lVar66 = *(long *)(*DAT_7105329f98 + 0x20);
        param_3 = (long *********)0x0;
LAB_71024de50c:
        param_4 = (undefined1 (*) [16])0x1;
        FUN_710259c150(lVar66,0,(ushort)param_3,(byte ****)0x1,(long ****)param_5,param_6,param_7,
                       param_8);
        *(undefined1 *)(local_270 + 0x3e) = 1;
        uVar89 = extraout_x1_01;
      }
      iVar62 = (int)param_1[0x2fd];
    }
    if (iVar62 == 0x51) {
      lVar66 = *(long *)(DAT_710532f7e8 + 8);
      if (*(char *)(lVar66 + 0x161) == '\0') {
        *(undefined4 *)(lVar66 + 0xe0) = 0;
        *(undefined8 *)(lVar66 + 8) = 0;
        *(undefined8 *)(lVar66 + 0x10) = 0;
        *(undefined1 *)(lVar66 + 0xf4) = 0;
        *(undefined8 *)(lVar66 + 0x98) = 0x600000001;
        *(undefined8 *)(lVar66 + 0xec) = 0xffffffff00000000;
        *(undefined8 *)(lVar66 + 0xe4) = 0xffffffff00000001;
        *(undefined8 *)(lVar66 + 0xd0) = 0;
        *(undefined8 *)(lVar66 + 0xd8) = 0;
        *(undefined8 *)(lVar66 + 0xc0) = 0;
        *(undefined8 *)(lVar66 + 200) = 0;
        *(undefined8 *)(lVar66 + 0xb0) = 0;
        *(undefined8 *)(lVar66 + 0xb8) = 0;
        *(undefined8 *)(lVar66 + 0xa0) = 0;
        *(undefined8 *)(lVar66 + 0xa8) = 0;
      }
      *(undefined1 *)(lVar66 + 0x160) = 1;
    }
  }
  puVar79 = DAT_7105334948;
  lVar66 = DAT_710532f820;
  iVar62 = (int)param_1[0x2fd];
  iVar63 = iVar62;
  if (iVar62 == 0x51) {
    if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161) == '\0') {
      return;
    }
    if (*pcVar69 != '\0') {
      bVar51 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1c90c15fa4);
      if (!bVar51) {
        *(undefined4 *)(*(long *)(lVar66 + 8) + 0x118) = 0;
        *pcVar69 = '\0';
        return;
      }
      FUN_71032edf70(*(uint **)(lVar66 + 0x10),0x58ffff1c90c15fa4);
      FUN_71032f1bb0(*(long *)(lVar66 + 8),*(uint **)(lVar66 + 0x10),param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      *pcVar69 = '\0';
      return;
    }
    iVar63 = 0x51;
  }
  uVar53 = *(uint *)(param_1 + 0x305);
  if (uVar53 != (int)*(short *)((long)param_1 + 0x17e2)) goto switchD_71024de634_caseD_b;
  switch(iVar63) {
  case 1:
    lVar66 = param_1[0x3ef];
    lVar93 = *(long *)(lVar66 + 0x80);
    if (*(int *)(lVar93 + 0x38) != 0) {
      param_3 = (long *********)&DAT_00001000;
      FUN_7103775dc0((long *)**(undefined8 **)(lVar93 + 8),0,(long ****)&DAT_00001000,
                     (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
      *(undefined4 *)(lVar93 + 0x30) = 2;
    }
    *(undefined1 *)(lVar66 + 0x70) = 0;
    break;
  case 2:
    uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)0x1;
    goto LAB_71024e0c64;
  case 3:
    uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)0x2;
    goto LAB_71024e0c64;
  case 4:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar64 = 0;
      while (lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8),
            ((*(ulong *)(lVar66 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) != 0) {
        uVar64 = uVar64 + 1;
      }
      if (((*(ulong *)(*DAT_710532a868 + 0x170) ^ *(ulong *)(lVar66 + 0x70)) & 0xffffffffff) == 0) {
        param_3 = (long *********)0x6;
      }
      else if (((*(ulong *)(*DAT_710532a868 + 0x198) ^ *(ulong *)(lVar66 + 0x70)) & 0xffffffffff) ==
               0) {
        param_3 = (long *********)&DAT_00000007;
      }
      else {
        param_3 = (long *********)&DAT_00000004;
        switch(*(undefined4 *)(lVar66 + 0x88)) {
        case 2:
          break;
        case 3:
          param_3 = (long *********)0x5;
          break;
        default:
          param_3 = (long *********)0x3;
          break;
        case 10:
          uVar64 = 3;
          if (*(char *)(lVar66 + 0x25b) != '\0') {
            uVar64 = 10;
          }
          param_3 = (long *********)(ulong)uVar64;
          break;
        case 0xb:
          param_3 = (long *********)&DAT_0000000c;
        }
      }
      uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
      lVar66 = *(long *)(param_1[0x3f0] + 0x80);
      goto LAB_71024e0c64;
    }
    break;
  case 5:
    uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)&DAT_00000008;
    goto LAB_71024e0c64;
  case 6:
    uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)&DAT_00000009;
    goto LAB_71024e0c64;
  case 7:
    uVar53 = 0xb;
    if (2 < *(uint *)(*(long *)(param_1[1] + 8) + 4)) {
      uVar53 = 0xc;
    }
    param_3 = (long *********)(ulong)uVar53;
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    uVar59 = 0;
    goto LAB_71024e0c64;
  case 8:
    uVar59 = (ulong)((int)*(short *)((long)param_1 + 0x17e4) - uVar53);
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)0xa;
LAB_71024e0c64:
    FUN_7101e88540(lVar66,uVar59,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                   param_7,param_8);
    uVar89 = extraout_x1_08;
LAB_71024e0c68:
    lVar66 = param_1[0x3f0];
    lVar93 = *(long *)(lVar66 + 0x80);
    if (*(char *)(lVar93 + 0x110) == '\0') {
      uVar53 = *(uint *)(lVar93 + 0xa0);
      param_3 = (long *********)(ulong)uVar53;
      if ((int)uVar53 < 0x500000) {
        if ((int)uVar53 < 0x250000) {
          if ((int)uVar53 < 0x200000) {
            if ((int)uVar53 < 0x150000) {
              if ((int)uVar53 < 0x100000) {
                if ((int)uVar53 < 0xfe000) {
                  if ((int)uVar53 < 0x50000) {
                    if ((int)uVar53 < 0x10000) {
                      iVar62 = 3;
                      if (0 < (int)uVar53) {
                        iVar62 = 0;
                      }
                    }
                    else {
                      iVar62 = 1;
                    }
                  }
                  else {
                    iVar62 = 2;
                  }
                }
                else {
                  iVar62 = 8;
                }
              }
              else {
                iVar62 = 4;
              }
            }
            else {
              iVar62 = 6;
            }
          }
          else {
            iVar62 = 5;
          }
        }
        else {
          iVar62 = 7;
        }
      }
      else {
        iVar62 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)(lVar93 + 8),iVar62,(long ****)param_3,
                     (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
      *(undefined1 *)(lVar93 + 0x110) = 1;
      lVar66 = param_1[0x3f0];
      uVar89 = extraout_x1_16;
    }
    FUN_7101e8a300(lVar66,uVar89,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
    break;
  case 9:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    if (*(char *)((long)param_1 + 0x1f9f) != '\0') {
      lVar66 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xc0) + 0x80);
      if (*(int *)(lVar66 + 8) != -1) {
        puVar72 = *(undefined8 **)(lVar66 + 0x18);
        *(undefined4 *)(lVar66 + 8) = 0xffffffff;
        if (puVar72 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar66 + 0x18) = 0;
          FUN_7103375760(puVar72);
          FUN_710392eb40((ulong)puVar72);
          uVar89 = extraout_x1_06;
        }
        puVar72 = *(undefined8 **)(lVar66 + 0x10);
        if (puVar72 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar66 + 0x10) = 0;
          puVar99 = (undefined8 *)*puVar72;
          *puVar72 = 0;
          if (puVar99 != (undefined8 *)0x0) {
            FUN_7103773770(puVar99,uVar89,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                           param_6,param_7,param_8);
            FUN_710392eb40((ulong)puVar99);
          }
          FUN_710392eb40((ulong)puVar72);
        }
      }
      *(undefined1 *)((long)param_1 + 0x1f9f) = 0;
    }
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)0x0;
    goto LAB_71024e0bf8;
  case 10:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    if (*(char *)((long)param_1 + 0x1f9f) != '\0') {
      lVar66 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xc0) + 0x80);
      if (*(int *)(lVar66 + 8) != -1) {
        puVar72 = *(undefined8 **)(lVar66 + 0x18);
        *(undefined4 *)(lVar66 + 8) = 0xffffffff;
        if (puVar72 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar66 + 0x18) = 0;
          FUN_7103375760(puVar72);
          FUN_710392eb40((ulong)puVar72);
          uVar89 = extraout_x1_03;
        }
        puVar72 = *(undefined8 **)(lVar66 + 0x10);
        if (puVar72 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar66 + 0x10) = 0;
          puVar99 = (undefined8 *)*puVar72;
          *puVar72 = 0;
          if (puVar99 != (undefined8 *)0x0) {
            FUN_7103773770(puVar99,uVar89,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                           param_6,param_7,param_8);
            FUN_710392eb40((ulong)puVar99);
          }
          FUN_710392eb40((ulong)puVar72);
        }
      }
      *(undefined1 *)((long)param_1 + 0x1f9f) = 0;
    }
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    param_3 = (long *********)0xa;
LAB_71024e0bf8:
    FUN_7101e89d40(lVar66,(ulong)uVar53,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
    uVar89 = extraout_x1_07;
    goto LAB_71024e0c68;
  case 0xc:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    uVar53 = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    FUN_71024ef480((float)(int)uVar53,param_1[2],3);
    lVar66 = *DAT_710532a860;
    if (0x1e < (int)uVar53) goto LAB_71024e0720;
    uVar59 = 0x85f06df8;
LAB_71024e0d70:
    uVar59 = uVar59 | 0x1300000000;
    param_3 = (long *********)0x0;
    goto LAB_71024e0d78;
  case 0xd:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    uVar53 = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    FUN_71024ef480((float)(int)uVar53,param_1[2],5);
    lVar66 = *DAT_710532a860;
    if ((int)uVar53 < 0x1f) {
      uVar59 = 0x7fff509b;
      goto LAB_71024e0d70;
    }
LAB_71024e0720:
    uVar59 = 0x12539bb136;
    goto LAB_71024e09fc;
  case 0xe:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    uVar53 = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    FUN_71024ef480((float)(int)uVar53,param_1[2],7);
    lVar66 = *DAT_710532a860;
    if ((int)uVar53 < 0x1f) {
      uVar59 = 0x8f8600d;
      goto LAB_71024e0d70;
    }
    uVar59 = 0x10455d7d08;
LAB_71024e09fc:
    param_3 = (long *********)(ulong)uVar53;
LAB_71024e0d78:
    FUN_71024d3d10(lVar66,uVar59,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                   param_7,param_8);
    break;
  case 0xf:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    FUN_71024ef480((float)(int)(uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU)),param_1[2],9);
    param_3 = (long *********)0x0;
    FUN_71024d3d10(*DAT_710532a860,0x173615fbe8,(long ****)0x0,(byte ****)param_4,(long ****)param_5
                   ,param_6,param_7,param_8);
    break;
  case 0x11:
    lVar66 = param_1[0xb];
    if (*(int *)(lVar66 + 0x408) != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + 8 + uVar59 * 8);
        uVar60 = FUN_71024eb3d0(lVar93);
        if ((((uVar60 & 1) != 0) && (*(char *)(lVar93 + 0x167) == '\0')) &&
           (*(undefined1 *)(lVar93 + 0x167) = 1, *(long *)(lVar93 + 0xe8) != 0)) {
          *(undefined4 *)(lVar93 + 0x138) = 2;
          *(undefined4 *)(lVar93 + 0x140) = 0;
          FUN_71024e9c40(lVar93,extraout_x1_04,param_3,(byte ****)param_4,(long ****)param_5,
                         (long *)param_6,param_7,param_8);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < *(uint *)(lVar66 + 0x408));
    }
    break;
  case 0x12:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      FUN_71024fba70(*(long *)(param_1[0xc] + 8),param_1[0x2fe],param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    break;
  case 0x13:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      pppplVar98 = (long ****)
                   FUN_710328d680(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x378),param_1[0x2fe]);
      if ((((ulong)pppplVar98 & 0xff00000000000000) == 0x6f00000000000000) &&
         (((ulong)pppplVar98 & 0xffffffffff) != 0)) {
        param_3 = (long *********)(ulong)*(byte *)(*(long *)(DAT_710532f7c8 + 8) + 0x69);
        FUN_7101e89330(*(long **)(param_1[0x3f0] + 0x80),pppplVar98,(long ****)param_3,
                       (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
        lVar66 = param_1[0x3f0];
        lVar93 = *(long *)(lVar66 + 0x80);
        uVar89 = extraout_x1_02;
        if (*(char *)(lVar93 + 0x110) == '\0') {
          uVar53 = *(uint *)(lVar93 + 0xa0);
          if ((int)uVar53 < 0x500000) {
            if ((int)uVar53 < 0x250000) {
              if ((int)uVar53 < 0x200000) {
                if ((int)uVar53 < 0x150000) {
                  if ((int)uVar53 < 0x100000) {
                    if ((int)uVar53 < 0xfe000) {
                      if ((int)uVar53 < 0x50000) {
                        if ((int)uVar53 < 0x10000) {
                          iVar62 = 3;
                          if (0 < (int)uVar53) {
                            iVar62 = 0;
                          }
                        }
                        else {
                          iVar62 = 1;
                        }
                      }
                      else {
                        iVar62 = 2;
                      }
                    }
                    else {
                      iVar62 = 8;
                    }
                  }
                  else {
                    iVar62 = 4;
                  }
                }
                else {
                  iVar62 = 6;
                }
              }
              else {
                iVar62 = 5;
              }
            }
            else {
              iVar62 = 7;
            }
          }
          else {
            iVar62 = 9;
          }
          FUN_7103775dc0((long *)**(undefined8 **)(lVar93 + 8),iVar62,(long ****)(ulong)uVar53,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          iVar62 = *(int *)(lVar93 + 0xa0);
          if (iVar62 < 0x4fffff) {
            if (iVar62 < 0x24ffff) {
              if (iVar62 < 0x1fffff) {
                if (iVar62 < 0x14ffff) {
                  if (iVar62 < 0xfffff) {
                    if (iVar62 < 0xfdfff) {
                      if (iVar62 < 0x4ffff) {
                        if (iVar62 < 0xffff) {
                          uVar53 = iVar62 >> 0x1f & 3;
                        }
                        else {
                          uVar53 = 1;
                        }
                      }
                      else {
                        uVar53 = 2;
                      }
                    }
                    else {
                      uVar53 = 8;
                    }
                  }
                  else {
                    uVar53 = 4;
                  }
                }
                else {
                  uVar53 = 6;
                }
              }
              else {
                uVar53 = 5;
              }
            }
            else {
              uVar53 = 7;
            }
          }
          else {
            uVar53 = 9;
          }
          FUN_7103775dc0((long *)**(undefined8 **)(lVar93 + 0x10),uVar53,
                         (long ****)(ulong)(iVar62 + 1),(byte ****)param_4,(long ****)param_5,
                         param_6,param_7,param_8);
          iVar62 = *(int *)(lVar93 + 0xa0);
          param_3 = (long *********)(ulong)(iVar62 + 2);
          if (iVar62 < 0x4ffffe) {
            if (iVar62 < 0x24fffe) {
              if (iVar62 < 0x1ffffe) {
                if (iVar62 < 0x14fffe) {
                  if (iVar62 < 0xffffe) {
                    if (iVar62 < 0xfdffe) {
                      if (iVar62 < 0x4fffe) {
                        if (iVar62 < 0xfffe) {
                          iVar63 = 3;
                          if (-2 < iVar62) {
                            iVar63 = 0;
                          }
                        }
                        else {
                          iVar63 = 1;
                        }
                      }
                      else {
                        iVar63 = 2;
                      }
                    }
                    else {
                      iVar63 = 8;
                    }
                  }
                  else {
                    iVar63 = 4;
                  }
                }
                else {
                  iVar63 = 6;
                }
              }
              else {
                iVar63 = 5;
              }
            }
            else {
              iVar63 = 7;
            }
          }
          else {
            iVar63 = 9;
          }
          FUN_7103775dc0((long *)**(undefined8 **)(lVar93 + 0x18),iVar63,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          *(undefined1 *)(lVar93 + 0x110) = 1;
          lVar66 = param_1[0x3f0];
          uVar89 = extraout_x1_20;
        }
        FUN_7101e8a300(lVar66,uVar89,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        lVar66 = DAT_710532f730;
        uVar59 = FUN_710328ee30(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x378),(ulong)pppplVar98);
        if ((((int)uVar59 != -1) &&
            (uVar59 = FUN_710328ee30(*(long *)(*(long *)(lVar66 + 8) + 0x378),(ulong)pppplVar98),
            (int)uVar59 != -1)) && (*(char *)(*DAT_7105314510 + 1) == '\0')) {
          puVar72 = *(undefined8 **)(**(long **)(*DAT_7105314510 + 8) + 0x28);
          uVar53 = *(uint *)(puVar72 + 1);
          if (0x28 < uVar53) goto LAB_71024e5790;
          uVar59 = FUN_710328ee30(*(long *)(*(long *)(*(long *)(lVar66 + 8) + (long)(int)uVar53 * 8
                                                     + 8) + 8),(ulong)pppplVar98);
          if ((uint)uVar59 < 0x20) {
            puVar79 = (uint *)*puVar72;
            *puVar79 = *puVar79 | 1 << (ulong)((uint)uVar59 & 0x1f);
          }
        }
      }
      FUN_71033147c0(*(long *)(DAT_710532f8d0 + 8));
    }
    break;
  case 0x14:
    lVar66 = param_1[4];
    if ((lVar66 != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar93 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0)
          goto LAB_71024e0d80;
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x15:
    lVar66 = param_1[5];
    if ((lVar66 != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar93 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0)
          goto LAB_71024e0d80;
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x16:
    lVar66 = param_1[6];
    if ((lVar66 != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar93 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0)
          goto LAB_71024e0d80;
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x17:
    lVar66 = param_1[7];
    if ((lVar66 != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar93 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0)
          goto LAB_71024e0d80;
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x18:
    if ((param_1[4] != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if (lVar66 != 0) {
              lVar93 = *(long *)(param_1[4] + 0x10);
              if (*(uint *)(lVar93 + 0x2158) < 0x400) {
                if (*(uint *)(lVar93 + 0x2158) == 0) {
LAB_71024e2a00:
                  iVar62 = 1;
                }
                else {
                  uVar89 = *(undefined8 *)(lVar93 + 0x158);
                  uVar59 = 0;
                  do {
                    *(undefined8 *)(lVar93 + 0x160 + uVar59 * 8) = uVar89;
                    uVar53 = *(uint *)(lVar93 + 0x2158);
                    uVar59 = uVar59 + 1;
                  } while (uVar59 < uVar53);
LAB_71024e2280:
                  iVar62 = uVar53 + 1;
                }
                *(long *)(lVar93 + 0x158) = lVar66;
                *(int *)(lVar93 + 0x2158) = iVar62;
              }
            }
            break;
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x19:
    if ((param_1[5] != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
LAB_71024de740:
        lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
        if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024de758;
        if (lVar66 != 0) {
          lVar93 = *(long *)(param_1[5] + 0x10);
          if (*(uint *)(lVar93 + 0x2158) < 0x400) {
            if (*(uint *)(lVar93 + 0x2158) != 0) {
              uVar89 = *(undefined8 *)(lVar93 + 0x158);
              uVar59 = 0;
              do {
                *(undefined8 *)(lVar93 + 0x160 + uVar59 * 8) = uVar89;
                uVar53 = *(uint *)(lVar93 + 0x2158);
                uVar59 = uVar59 + 1;
              } while (uVar59 < uVar53);
              goto LAB_71024e2280;
            }
            goto LAB_71024e2a00;
          }
        }
        break;
      }
    }
    break;
  case 0x1a:
    if ((param_1[6] != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
LAB_71024df19c:
        lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
        if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024df1b4;
        if (lVar66 != 0) {
          lVar93 = *(long *)(param_1[6] + 0x10);
          if (*(uint *)(lVar93 + 0x2158) < 0x400) {
            if (*(uint *)(lVar93 + 0x2158) != 0) {
              uVar89 = *(undefined8 *)(lVar93 + 0x158);
              uVar59 = 0;
              do {
                *(undefined8 *)(lVar93 + 0x160 + uVar59 * 8) = uVar89;
                uVar53 = *(uint *)(lVar93 + 0x2158);
                uVar59 = uVar59 + 1;
              } while (uVar59 < uVar53);
              goto LAB_71024e2280;
            }
            goto LAB_71024e2a00;
          }
        }
        break;
      }
    }
    break;
  case 0x1b:
    if ((param_1[7] != 0) && ((param_1[0x2fe] & 0xffffffffffU) != 0)) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
LAB_71024df368:
        lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
        if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024df380;
        if (lVar66 != 0) {
          lVar93 = *(long *)(param_1[7] + 0x10);
          if (*(uint *)(lVar93 + 0x2158) < 0x400) {
            if (*(uint *)(lVar93 + 0x2158) != 0) {
              uVar89 = *(undefined8 *)(lVar93 + 0x158);
              uVar59 = 0;
              do {
                *(undefined8 *)(lVar93 + 0x160 + uVar59 * 8) = uVar89;
                uVar53 = *(uint *)(lVar93 + 0x2158);
                uVar59 = uVar59 + 1;
              } while (uVar59 < uVar53);
              goto LAB_71024e2280;
            }
            goto LAB_71024e2a00;
          }
        }
        break;
      }
    }
    break;
  case 0x1c:
    lVar66 = param_1[4];
    goto joined_r0x0071024df4bc;
  case 0x1d:
    lVar66 = param_1[5];
joined_r0x0071024df4bc:
    if (lVar66 != 0) {
LAB_71024dfda4:
      uVar59 = param_1[0x2fe] & 0xffffffffff;
      if (((uVar59 != 0) && (*(long *)(lVar66 + 8) != 0)) && (*(char *)(lVar66 + 0x60) != '\0')) {
        plVar101 = *(long **)(*(long *)(lVar66 + 8) + 0x120);
        uVar60 = 0xe46ef5315;
        if (uVar59 != 0x47dee83e5 || *(char *)(lVar66 + 0x61) == '\0') {
          uVar60 = param_1[0x2fe];
        }
        param_3 = (long *********)0x0;
        param_4 = (undefined1 (*) [16])0x0;
        param_5 = (undefined1 (*) [16])0x0;
        (**(code **)(*plVar101 + 0xe0))(ZEXT816(0),0x3f800000,ZEXT816(0),plVar101,uVar60);
      }
    }
    break;
  case 0x1e:
    lVar66 = param_1[6];
    goto joined_r0x0071024df870;
  case 0x1f:
    lVar66 = param_1[7];
joined_r0x0071024df870:
    if (lVar66 == 0) break;
    goto LAB_71024dfda4;
  case 0x20:
    lVar66 = param_1[4];
    goto joined_r0x0071024de76c;
  case 0x21:
    lVar66 = param_1[5];
joined_r0x0071024de76c:
    if (lVar66 != 0) {
LAB_71024e065c:
      plVar101 = *(long **)(lVar66 + 8);
      if (plVar101 != (long *)0x0) {
        if (*(char *)(lVar66 + 0x62) != '\0') {
          (**(code **)(*plVar101 + 0x540))(plVar101,0);
          *(undefined1 *)(lVar66 + 0x62) = 0;
          uVar89 = extraout_x1_05;
        }
        if ((*(long *)(lVar66 + 0x20) != 0) && (*(char *)(lVar66 + 99) != '\0')) {
          FUN_71035598f0((long *)(lVar66 + 0x20),uVar89,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          *(undefined1 *)(lVar66 + 99) = 0;
        }
        *(undefined1 *)(lVar66 + 0x60) = 0;
      }
    }
    break;
  case 0x22:
    lVar66 = param_1[6];
    goto joined_r0x0071024df408;
  case 0x23:
    lVar66 = param_1[7];
joined_r0x0071024df408:
    if (lVar66 == 0) break;
    goto LAB_71024e065c;
  case 0x24:
    lVar66 = param_1[4];
    if (lVar66 == 0) break;
    goto LAB_71024e00cc;
  case 0x25:
    lVar66 = param_1[5];
    goto joined_r0x0071024df254;
  case 0x26:
    lVar66 = param_1[6];
    goto joined_r0x0071024df254;
  case 0x27:
    lVar66 = param_1[7];
joined_r0x0071024df254:
    if (lVar66 != 0) {
LAB_71024e00cc:
      lVar66 = *(long *)(lVar66 + 8);
      plVar101 = *(long **)(lVar66 + 0x1d8);
      (**(code **)(*plVar101 + 0x288))(plVar101,0);
      plVar101 = *(long **)(lVar66 + 0x1d8);
      (**(code **)(*plVar101 + 0x1a8))(plVar101,0);
    }
    break;
  case 0x28:
    lVar66 = param_1[4];
    goto joined_r0x0071024e00a4;
  case 0x29:
    lVar66 = param_1[5];
joined_r0x0071024e00a4:
    if (lVar66 != 0) {
LAB_71024e0270:
      lVar66 = *(long *)(lVar66 + 8);
      plVar101 = *(long **)(lVar66 + 0x1d8);
      (**(code **)(*plVar101 + 0x288))(plVar101,1);
      plVar101 = *(long **)(lVar66 + 0x1d8);
      (**(code **)(*plVar101 + 0x1a8))(plVar101,1);
    }
    break;
  case 0x2a:
    lVar66 = param_1[6];
    goto joined_r0x0071024dedec;
  case 0x2b:
    lVar66 = param_1[7];
joined_r0x0071024dedec:
    if (lVar66 == 0) break;
    goto LAB_71024e0270;
  case 0x2c:
    lVar66 = param_1[4];
    goto joined_r0x0071024e041c;
  case 0x2d:
    lVar66 = param_1[5];
joined_r0x0071024e041c:
    if (lVar66 != 0) {
LAB_71024e0420:
      lVar93 = param_1[0x2ff];
      iVar62 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
      *(undefined8 *)(lVar66 + 0x48) = *(undefined8 *)(lVar66 + 0x48);
      *(ulong *)(lVar66 + 0x40) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar66 + 0x40) >> 0x20),(float)(int)lVar93);
      if (iVar62 < 1) {
        fVar105 = 360.0;
      }
      else {
        fVar105 = ABS(*(float *)(lVar66 + 0x30) - (float)(int)lVar93) / (float)iVar62;
      }
      *(undefined8 *)(lVar66 + 0x58) = *(undefined8 *)(lVar66 + 0x58);
      *(ulong *)(lVar66 + 0x50) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar66 + 0x50) >> 0x20),fVar105);
    }
    break;
  case 0x2e:
    lVar66 = param_1[6];
    goto joined_r0x0071024dea28;
  case 0x2f:
    lVar66 = param_1[7];
joined_r0x0071024dea28:
    if (lVar66 == 0) break;
    goto LAB_71024e0420;
  case 0x30:
    lVar66 = param_1[4];
    goto joined_r0x0071024dee80;
  case 0x31:
    lVar66 = param_1[5];
joined_r0x0071024dee80:
    if (lVar66 != 0) {
LAB_71024dee84:
      lVar93 = param_1[0x2ff];
      iVar62 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
      *(undefined8 *)(lVar66 + 0x48) = *(undefined8 *)(lVar66 + 0x48);
      *(ulong *)(lVar66 + 0x40) = CONCAT44((float)(int)lVar93,(int)*(undefined8 *)(lVar66 + 0x40));
      if (iVar62 < 1) {
        fVar105 = 360.0;
      }
      else {
        fVar105 = ABS(*(float *)(lVar66 + 0x34) - (float)(int)lVar93) / (float)iVar62;
      }
      *(undefined8 *)(lVar66 + 0x58) = *(undefined8 *)(lVar66 + 0x58);
      *(ulong *)(lVar66 + 0x50) = CONCAT44(fVar105,(int)*(undefined8 *)(lVar66 + 0x50));
    }
    break;
  case 0x32:
    lVar66 = param_1[6];
    goto joined_r0x0071024dec64;
  case 0x33:
    lVar66 = param_1[7];
joined_r0x0071024dec64:
    if (lVar66 == 0) break;
    goto LAB_71024dee84;
  case 0x34:
    lVar66 = param_1[4];
    goto joined_r0x0071024e07b4;
  case 0x35:
    lVar66 = param_1[5];
joined_r0x0071024e07b4:
    if (lVar66 != 0) {
LAB_71024e0808:
      lVar93 = param_1[0x2ff];
      iVar62 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
      *(ulong *)(lVar66 + 0x48) = (ulong)(uint)(float)(int)lVar93;
      *(undefined8 *)(lVar66 + 0x40) = *(undefined8 *)(lVar66 + 0x40);
      if (iVar62 < 1) {
        auVar109._12_4_ = 0;
        auVar109._0_12_ = _DAT_7104467fc0;
        auVar111 = NEON_ext(auVar109,*(undefined1 (*) [16])(lVar66 + 0x50),8,1);
        auVar111 = NEON_ext(auVar111,auVar111,8,1);
        *(long *)(lVar66 + 0x58) = auVar111._8_8_;
        *(long *)(lVar66 + 0x50) = auVar111._0_8_;
      }
      else {
        *(ulong *)(lVar66 + 0x58) =
             (ulong)(uint)(ABS(*(float *)(lVar66 + 0x38) - (float)(int)lVar93) / (float)iVar62);
        *(undefined8 *)(lVar66 + 0x50) = *(undefined8 *)(lVar66 + 0x50);
      }
    }
    break;
  case 0x36:
    lVar66 = param_1[6];
    goto joined_r0x0071024e0804;
  case 0x37:
    lVar66 = param_1[7];
joined_r0x0071024e0804:
    if (lVar66 == 0) break;
    goto LAB_71024e0808;
  case 0x38:
    lVar66 = param_1[4];
    goto joined_r0x0071024e0a60;
  case 0x39:
    lVar66 = param_1[5];
joined_r0x0071024e0a60:
    if (lVar66 != 0) {
LAB_71024e0a64:
      uVar59 = param_1[0x2fe];
      if ((uVar59 & 0xffffffffff) != 0) {
        uVar53 = *(uint *)(lVar66 + 0x18);
        if (uVar53 != 0) {
          lVar93 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if (0 < (int)uVar53) {
            lVar94 = lVar93 + (ulong)(uVar53 >> 0x18) * 0x300;
            if ((lVar94 != 0) && (*(uint *)(lVar94 + 4) == uVar53)) {
              *(undefined1 *)(lVar93 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
            }
          }
          std::mutex::unlock();
          *(undefined4 *)(lVar66 + 0x18) = 0;
        }
        if (*(char *)(*DAT_710532a860 + 0x5f3d7) == '\0') {
          param_8 = (long ***)&DAT_ffffffff;
          acStack_c8[0] = '\0';
          acStack_c8[1] = '\0';
          acStack_c8[2] = '\0';
          acStack_c8[3] = '\0';
          acStack_c8[4] = '\0';
          acStack_c8[5] = '\0';
          acStack_c8[6] = '\0';
          acStack_c8[7] = '\0';
          local_d0._0_4_ = 0;
          local_d0._4_4_ = 0;
          param_3 = (long *********)0x1800000;
          param_4 = (undefined1 (*) [16])&local_130;
          ppppppplStack_128 = (long *******)0x0;
          local_130 = (long *******)0x0;
          ppuStack_148 = (undefined **)&DAT_3f800000;
          local_150 = (undefined **)&DAT_3f8000003f800000;
          param_5 = (undefined1 (*) [16])&local_d0;
          param_6 = (undefined1 (*) [16])&local_150;
          param_7 = (long ***)0x0;
          uVar53 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,uVar59,0x1800000,
                                  param_4,param_5,param_6,0,-1,0);
        }
        else {
          uVar53 = 0;
        }
        *(uint *)(lVar66 + 0x18) = uVar53;
        FUN_71024edf10(lVar66);
      }
    }
    break;
  case 0x3a:
    lVar66 = param_1[6];
    goto joined_r0x0071024e0a08;
  case 0x3b:
    lVar66 = param_1[7];
joined_r0x0071024e0a08:
    if (lVar66 == 0) break;
    goto LAB_71024e0a64;
  case 0x3c:
    lVar66 = param_1[4];
    if (lVar66 != 0) {
      uVar59 = param_1[0x2fe];
joined_r0x0071024ded24:
      if (((uVar59 & 0xffffffffff) != 0) && (uVar53 = *(uint *)(lVar66 + 0x18), uVar53 != 0)) {
        lVar93 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if (0 < (int)uVar53) {
          lVar94 = lVar93 + (ulong)(uVar53 >> 0x18) * 0x300;
          if ((lVar94 != 0) && (*(uint *)(lVar94 + 4) == uVar53)) {
            *(undefined1 *)(lVar93 + (ulong)(uVar53 >> 0x18) * 0x300 + 0x2d8) = 1;
          }
        }
        std::mutex::unlock();
        *(undefined4 *)(lVar66 + 0x18) = 0;
      }
    }
    break;
  case 0x3d:
    lVar66 = param_1[5];
    if (lVar66 != 0) {
      uVar59 = param_1[0x2fe];
      goto joined_r0x0071024ded24;
    }
    break;
  case 0x3e:
    lVar66 = param_1[6];
    if (lVar66 != 0) {
      uVar59 = param_1[0x2fe];
      goto joined_r0x0071024ded24;
    }
    break;
  case 0x3f:
    lVar66 = param_1[7];
    if (lVar66 != 0) {
      uVar59 = param_1[0x2fe];
      goto joined_r0x0071024ded24;
    }
    break;
  case 0x40:
    lVar66 = param_1[4];
    if ((lVar66 != 0) &&
       (param_3 = (long *********)param_1[0x2fe], ((ulong)param_3 & 0xffffffffff) != 0)) {
      lVar93 = *(long *)(lVar66 + 8);
joined_r0x0071024e098c:
      if ((lVar93 != 0) && (*(char *)(lVar66 + 0x60) != '\0')) {
        param_4 = (undefined1 (*) [16])&DAT_ffffffff;
        (**(code **)(**(long **)(lVar93 + 0x220) + 0x78))(*(long **)(lVar93 + 0x220),1);
      }
    }
    break;
  case 0x41:
    lVar66 = param_1[5];
    if ((lVar66 != 0) &&
       (param_3 = (long *********)param_1[0x2fe], ((ulong)param_3 & 0xffffffffff) != 0)) {
      lVar93 = *(long *)(lVar66 + 8);
      goto joined_r0x0071024e098c;
    }
    break;
  case 0x42:
    lVar66 = param_1[6];
    if ((lVar66 != 0) &&
       (param_3 = (long *********)param_1[0x2fe], ((ulong)param_3 & 0xffffffffff) != 0)) {
      lVar93 = *(long *)(lVar66 + 8);
      goto joined_r0x0071024e098c;
    }
    break;
  case 0x43:
    lVar66 = param_1[7];
    if ((lVar66 != 0) &&
       (param_3 = (long *********)param_1[0x2fe], ((ulong)param_3 & 0xffffffffff) != 0)) {
      lVar93 = *(long *)(lVar66 + 8);
      goto joined_r0x0071024e098c;
    }
    break;
  case 0x44:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar66 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if ((lVar66 != 0) && (*(char *)(lVar66 + 0x25b) == '\0')) {
              FUN_71025087d0(lVar66,uVar89,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                             (long *)param_6,param_7,param_8);
              if ((*(uint *)(lVar66 + 0x248) & 0xfffffffe) != 2) {
                *(undefined4 *)(lVar66 + 0x238) = 0;
                *(undefined4 *)(lVar66 + 0x248) = 2;
              }
              lVar93 = param_1[9];
              plVar101 = (long *)param_1[10];
              if ((((*(char *)(lVar66 + 0x25c) != '\0') || (*(long *)(lVar66 + 0xe0) != 0)) ||
                  (*(long *)(lVar66 + 0xe8) != 0)) ||
                 (((*(long *)(lVar66 + 0xf0) != 0 || (*(long *)(lVar66 + 0xf8) != 0)) ||
                  (*(long *)(lVar66 + 0x100) != 0)))) {
                FUN_710250b4f0(lVar93,plVar101);
                if ((int)plVar101[0x641] != 0) {
                  uVar59 = 0;
                  do {
                    lVar66 = plVar101[uVar59 + 1];
                    lVar94 = *(long *)(lVar66 + 0x28);
                    if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                       (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                      uVar60 = 0;
                      do {
                        lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                        if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar66 + 8)) & 0xffffffffff) != 0)
                        {
                          *(long *)(lVar66 + 0xa0) = lVar68;
                          uVar53 = *(uint *)(lVar94 + 0x168);
                        }
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar53);
                    }
                    lVar94 = *(long *)(lVar66 + 0x30);
                    if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                       (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                      uVar60 = 0;
                      do {
                        lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                        if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar66 + 8)) & 0xffffffffff) != 0)
                        {
                          *(long *)(lVar66 + 0x98) = lVar68;
                          uVar53 = *(uint *)(lVar94 + 0x168);
                        }
                        uVar60 = uVar60 + 1;
                      } while (uVar60 < uVar53);
                    }
                    uVar59 = uVar59 + 1;
                  } while (uVar59 < *(uint *)(plVar101 + 0x641));
                }
                uVar53 = *(uint *)(lVar93 + 0x3208);
                if (uVar53 != 0) {
                  uVar59 = 0;
                  do {
                    lVar66 = *(long *)(lVar93 + uVar59 * 8 + 8);
                    uVar64 = *(uint *)(lVar66 + 0x168);
                    if (uVar64 != 0) {
                      uVar88 = *(ulong *)(lVar66 + 0x70);
                      uVar60 = 0;
                      do {
                        lVar94 = lVar66 + uVar60 * 8;
                        lVar92 = *(long *)(lVar94 + 0x170);
                        lVar68 = *(long *)(lVar92 + 0x30);
                        if (((*(ulong *)(lVar68 + 0x70) ^ uVar88) & 0xffffffffff) == 0)
                        goto LAB_71024e11a0;
                        for (lVar92 = *(long *)(lVar92 + 0x98); lVar90 = lVar68, lVar92 != 0;
                            lVar92 = *(long *)(lVar92 + 0xa0)) {
                          while (lVar68 = *(long *)(lVar92 + 0x30),
                                ((*(ulong *)(lVar90 + 0x70) ^ *(ulong *)(lVar68 + 0x70)) &
                                0xffffffffff) != 0) {
                            lVar92 = *(long *)(lVar92 + 0x98);
                            lVar90 = lVar68;
                            if (lVar92 == 0) goto LAB_71024e11b0;
                          }
LAB_71024e11a0:
                          lVar68 = *(long *)(lVar92 + 0x28);
                        }
LAB_71024e11b0:
                        uVar60 = uVar60 + 1;
                        *(long *)(lVar94 + 0x1d0) = lVar68;
                      } while (uVar60 != uVar64);
                      uVar53 = *(uint *)(lVar93 + 0x3208);
                    }
                    uVar59 = uVar59 + 1;
                  } while (uVar59 < uVar53);
                }
              }
              lVar93 = param_1[9];
              lVar66 = *(long *)(*(long *)(param_1[3] + 0x428) + 0x78);
              if (*(int *)(lVar93 + 0x3208) != 0) {
                uVar59 = 0;
                do {
                  *(undefined4 *)(*(long *)(lVar93 + 8 + uVar59 * 8) + 0x230) = 0xffff;
                  uVar59 = uVar59 + 1;
                } while (uVar59 < *(uint *)(lVar93 + 0x3208));
              }
LAB_71024e17e0:
              *(undefined4 *)(lVar66 + 0x230) = 0;
              FUN_710250e310(lVar66,0);
            }
            break;
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x45:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
LAB_71024e074c:
        lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
        if (((*(ulong *)(lVar66 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024e0764;
        if ((lVar66 != 0) && (*(char *)(lVar66 + 0x25b) == '\0')) {
          FUN_71025087d0(lVar66,uVar89,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                         (long *)param_6,param_7,param_8);
          lVar93 = param_1[9];
          plVar101 = (long *)param_1[10];
          if ((*(char *)(lVar66 + 0x25c) != '\0') ||
             ((((*(long *)(lVar66 + 0xe0) != 0 || (*(long *)(lVar66 + 0xe8) != 0)) ||
               (*(long *)(lVar66 + 0xf0) != 0)) ||
              ((*(long *)(lVar66 + 0xf8) != 0 || (*(long *)(lVar66 + 0x100) != 0)))))) {
            FUN_710250b4f0(lVar93,plVar101);
            if ((int)plVar101[0x641] != 0) {
              uVar59 = 0;
              do {
                lVar66 = plVar101[uVar59 + 1];
                lVar94 = *(long *)(lVar66 + 0x28);
                if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                   (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                  uVar60 = 0;
                  do {
                    lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                    if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar66 + 8)) & 0xffffffffff) != 0) {
                      *(long *)(lVar66 + 0xa0) = lVar68;
                      uVar53 = *(uint *)(lVar94 + 0x168);
                    }
                    uVar60 = uVar60 + 1;
                  } while (uVar60 < uVar53);
                }
                lVar94 = *(long *)(lVar66 + 0x30);
                if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                   (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                  uVar60 = 0;
                  do {
                    lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                    if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar66 + 8)) & 0xffffffffff) != 0) {
                      *(long *)(lVar66 + 0x98) = lVar68;
                      uVar53 = *(uint *)(lVar94 + 0x168);
                    }
                    uVar60 = uVar60 + 1;
                  } while (uVar60 < uVar53);
                }
                uVar59 = uVar59 + 1;
              } while (uVar59 < *(uint *)(plVar101 + 0x641));
            }
            uVar53 = *(uint *)(lVar93 + 0x3208);
            if (uVar53 != 0) {
              uVar59 = 0;
              do {
                lVar66 = *(long *)(lVar93 + uVar59 * 8 + 8);
                uVar64 = *(uint *)(lVar66 + 0x168);
                if (uVar64 != 0) {
                  uVar88 = *(ulong *)(lVar66 + 0x70);
                  uVar60 = 0;
                  do {
                    lVar94 = lVar66 + uVar60 * 8;
                    lVar92 = *(long *)(lVar94 + 0x170);
                    lVar68 = *(long *)(lVar92 + 0x30);
                    if (((*(ulong *)(lVar68 + 0x70) ^ uVar88) & 0xffffffffff) == 0)
                    goto LAB_71024e1774;
                    for (lVar92 = *(long *)(lVar92 + 0x98); lVar90 = lVar68, lVar92 != 0;
                        lVar92 = *(long *)(lVar92 + 0xa0)) {
                      while (lVar68 = *(long *)(lVar92 + 0x30),
                            ((*(ulong *)(lVar90 + 0x70) ^ *(ulong *)(lVar68 + 0x70)) & 0xffffffffff)
                            != 0) {
                        lVar92 = *(long *)(lVar92 + 0x98);
                        lVar90 = lVar68;
                        if (lVar92 == 0) goto LAB_71024e1784;
                      }
LAB_71024e1774:
                      lVar68 = *(long *)(lVar92 + 0x28);
                    }
LAB_71024e1784:
                    uVar60 = uVar60 + 1;
                    *(long *)(lVar94 + 0x1d0) = lVar68;
                  } while (uVar60 != uVar64);
                  uVar53 = *(uint *)(lVar93 + 0x3208);
                }
                uVar59 = uVar59 + 1;
              } while (uVar59 < uVar53);
            }
          }
          lVar93 = param_1[9];
          lVar66 = *(long *)(*(long *)(param_1[3] + 0x428) + 0x78);
          if (*(int *)(lVar93 + 0x3208) != 0) {
            uVar59 = 0;
            do {
              *(undefined4 *)(*(long *)(lVar93 + 8 + uVar59 * 8) + 0x230) = 0xffff;
              uVar59 = uVar59 + 1;
            } while (uVar59 < *(uint *)(lVar93 + 0x3208));
          }
          goto LAB_71024e17e0;
        }
        break;
      }
    }
    break;
  case 0x46:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      lVar66 = param_1[9];
      if (*(uint *)(lVar66 + 0x3208) != 0) {
        uVar53 = 0;
LAB_71024e0078:
        lVar93 = *(long *)(lVar66 + (ulong)uVar53 * 8 + 8);
        if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024e0090;
        if (lVar93 != 0) {
          if (*(char *)(lVar93 + 0x25b) != '\0') {
            *(undefined1 *)(lVar93 + 0x25b) = 0;
            FUN_7102508910(lVar93,2,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                           (long *)param_6,param_7,param_8);
            lVar66 = param_1[9];
          }
          plVar101 = (long *)param_1[10];
          if ((((*(char *)(lVar93 + 0x25c) != '\0') || (*(long *)(lVar93 + 0xe0) != 0)) ||
              (*(long *)(lVar93 + 0xe8) != 0)) ||
             (((*(long *)(lVar93 + 0xf0) != 0 || (*(long *)(lVar93 + 0xf8) != 0)) ||
              (*(long *)(lVar93 + 0x100) != 0)))) {
            FUN_710250b4f0(lVar66,plVar101);
            if ((int)plVar101[0x641] != 0) {
              uVar59 = 0;
              do {
                lVar93 = plVar101[uVar59 + 1];
                lVar94 = *(long *)(lVar93 + 0x28);
                if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                   (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                  uVar60 = 0;
                  do {
                    lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                    if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
                      *(long *)(lVar93 + 0xa0) = lVar68;
                      uVar53 = *(uint *)(lVar94 + 0x168);
                    }
                    uVar60 = uVar60 + 1;
                  } while (uVar60 < uVar53);
                }
                lVar94 = *(long *)(lVar93 + 0x30);
                if ((*(int *)(lVar94 + 0x88) == 0xd) &&
                   (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
                  uVar60 = 0;
                  do {
                    lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
                    if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
                      *(long *)(lVar93 + 0x98) = lVar68;
                      uVar53 = *(uint *)(lVar94 + 0x168);
                    }
                    uVar60 = uVar60 + 1;
                  } while (uVar60 < uVar53);
                }
                uVar59 = uVar59 + 1;
              } while (uVar59 < *(uint *)(plVar101 + 0x641));
            }
            uVar53 = *(uint *)(lVar66 + 0x3208);
            if (uVar53 != 0) {
              uVar59 = 0;
              do {
                lVar93 = *(long *)(lVar66 + uVar59 * 8 + 8);
                uVar64 = *(uint *)(lVar93 + 0x168);
                if (uVar64 != 0) {
                  uVar88 = *(ulong *)(lVar93 + 0x70);
                  uVar60 = 0;
                  do {
                    lVar94 = lVar93 + uVar60 * 8;
                    lVar92 = *(long *)(lVar94 + 0x170);
                    lVar68 = *(long *)(lVar92 + 0x30);
                    if (((*(ulong *)(lVar68 + 0x70) ^ uVar88) & 0xffffffffff) == 0)
                    goto LAB_71024e1578;
                    for (lVar92 = *(long *)(lVar92 + 0x98); lVar90 = lVar68, lVar92 != 0;
                        lVar92 = *(long *)(lVar92 + 0xa0)) {
                      while (lVar68 = *(long *)(lVar92 + 0x30),
                            ((*(ulong *)(lVar90 + 0x70) ^ *(ulong *)(lVar68 + 0x70)) & 0xffffffffff)
                            != 0) {
                        lVar92 = *(long *)(lVar92 + 0x98);
                        lVar90 = lVar68;
                        if (lVar92 == 0) goto LAB_71024e1588;
                      }
LAB_71024e1578:
                      lVar68 = *(long *)(lVar92 + 0x28);
                    }
LAB_71024e1588:
                    uVar60 = uVar60 + 1;
                    *(long *)(lVar94 + 0x1d0) = lVar68;
                  } while (uVar60 != uVar64);
                  uVar53 = *(uint *)(lVar66 + 0x3208);
                }
                uVar59 = uVar59 + 1;
              } while (uVar59 < uVar53);
            }
          }
          lVar93 = param_1[9];
          lVar66 = *(long *)(*(long *)(param_1[3] + 0x428) + 0x78);
          if (*(int *)(lVar93 + 0x3208) != 0) {
            uVar59 = 0;
            do {
              *(undefined4 *)(*(long *)(lVar93 + 8 + uVar59 * 8) + 0x230) = 0xffff;
              uVar59 = uVar59 + 1;
            } while (uVar59 < *(uint *)(lVar93 + 0x3208));
          }
          goto LAB_71024e17e0;
        }
        break;
      }
    }
    break;
  case 0x47:
    lVar66 = param_1[9];
    uVar53 = *(uint *)(lVar66 + 0x3208);
    if (uVar53 != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + 8 + uVar59 * 8);
        if (*(char *)(lVar93 + 0x25b) != '\0') {
          *(undefined1 *)(lVar93 + 0x25b) = 0;
          FUN_7102508910(lVar93,0,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                         (long *)param_6,param_7,param_8);
          uVar53 = *(uint *)(lVar66 + 0x3208);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar53);
      lVar66 = param_1[9];
    }
    plVar101 = (long *)param_1[10];
    FUN_710250b4f0(lVar66,plVar101);
    if ((int)plVar101[0x641] != 0) {
      uVar59 = 0;
      do {
        lVar93 = plVar101[uVar59 + 1];
        lVar94 = *(long *)(lVar93 + 0x28);
        if ((*(int *)(lVar94 + 0x88) == 0xd) && (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
          uVar60 = 0;
          do {
            lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
            if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
              *(long *)(lVar93 + 0xa0) = lVar68;
              uVar53 = *(uint *)(lVar94 + 0x168);
            }
            uVar60 = uVar60 + 1;
          } while (uVar60 < uVar53);
        }
        lVar94 = *(long *)(lVar93 + 0x30);
        if ((*(int *)(lVar94 + 0x88) == 0xd) && (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
          uVar60 = 0;
          do {
            lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
            if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
              *(long *)(lVar93 + 0x98) = lVar68;
              uVar53 = *(uint *)(lVar94 + 0x168);
            }
            uVar60 = uVar60 + 1;
          } while (uVar60 < uVar53);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < *(uint *)(plVar101 + 0x641));
    }
    uVar53 = *(uint *)(lVar66 + 0x3208);
    if (uVar53 != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + uVar59 * 8 + 8);
        uVar64 = *(uint *)(lVar93 + 0x168);
        if (uVar64 != 0) {
          uVar88 = *(ulong *)(lVar93 + 0x70);
          uVar60 = 0;
          do {
            lVar94 = lVar93 + uVar60 * 8;
            lVar92 = *(long *)(lVar94 + 0x170);
            lVar68 = *(long *)(lVar92 + 0x30);
            if (((*(ulong *)(lVar68 + 0x70) ^ uVar88) & 0xffffffffff) == 0) goto LAB_71024dffac;
            for (lVar92 = *(long *)(lVar92 + 0x98); lVar90 = lVar68, lVar92 != 0;
                lVar92 = *(long *)(lVar92 + 0xa0)) {
              while (lVar68 = *(long *)(lVar92 + 0x30),
                    ((*(ulong *)(lVar90 + 0x70) ^ *(ulong *)(lVar68 + 0x70)) & 0xffffffffff) != 0) {
                lVar92 = *(long *)(lVar92 + 0x98);
                lVar90 = lVar68;
                if (lVar92 == 0) goto LAB_71024dffbc;
              }
LAB_71024dffac:
              lVar68 = *(long *)(lVar92 + 0x28);
            }
LAB_71024dffbc:
            uVar60 = uVar60 + 1;
            *(long *)(lVar94 + 0x1d0) = lVar68;
          } while (uVar60 != uVar64);
          uVar53 = *(uint *)(lVar66 + 0x3208);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar53);
    }
    lVar93 = param_1[9];
    lVar66 = *(long *)(*(long *)(param_1[3] + 0x428) + 0x78);
    if (*(int *)(lVar93 + 0x3208) != 0) {
      uVar59 = 0;
      do {
        *(undefined4 *)(*(long *)(lVar93 + 8 + uVar59 * 8) + 0x230) = 0xffff;
        uVar59 = uVar59 + 1;
      } while (uVar59 < *(uint *)(lVar93 + 0x3208));
    }
    goto LAB_71024e0018;
  case 0x48:
    lVar66 = param_1[9];
    uVar53 = *(uint *)(lVar66 + 0x3208);
    if (uVar53 != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + 8 + uVar59 * 8);
        if ((*(char *)(lVar93 + 0x25b) != '\0') &&
           (0xb < *(uint *)(lVar93 + 0x88) ||
            (1 << (ulong)(*(uint *)(lVar93 + 0x88) & 0x1f) & 0xc1eU) == 0)) {
          *(undefined1 *)(lVar93 + 0x25b) = 0;
          FUN_7102508910(lVar93,0,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                         (long *)param_6,param_7,param_8);
          uVar53 = *(uint *)(lVar66 + 0x3208);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar53);
      lVar66 = param_1[9];
    }
    plVar101 = (long *)param_1[10];
    FUN_710250b4f0(lVar66,plVar101);
    if ((int)plVar101[0x641] != 0) {
      uVar59 = 0;
      do {
        lVar93 = plVar101[uVar59 + 1];
        lVar94 = *(long *)(lVar93 + 0x28);
        if ((*(int *)(lVar94 + 0x88) == 0xd) && (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
          uVar60 = 0;
          do {
            lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
            if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
              *(long *)(lVar93 + 0xa0) = lVar68;
              uVar53 = *(uint *)(lVar94 + 0x168);
            }
            uVar60 = uVar60 + 1;
          } while (uVar60 < uVar53);
        }
        lVar94 = *(long *)(lVar93 + 0x30);
        if ((*(int *)(lVar94 + 0x88) == 0xd) && (uVar53 = *(uint *)(lVar94 + 0x168), uVar53 != 0)) {
          uVar60 = 0;
          do {
            lVar68 = *(long *)(lVar94 + 0x170 + uVar60 * 8);
            if (((*(ulong *)(lVar68 + 8) ^ *(ulong *)(lVar93 + 8)) & 0xffffffffff) != 0) {
              *(long *)(lVar93 + 0x98) = lVar68;
              uVar53 = *(uint *)(lVar94 + 0x168);
            }
            uVar60 = uVar60 + 1;
          } while (uVar60 < uVar53);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < *(uint *)(plVar101 + 0x641));
    }
    uVar53 = *(uint *)(lVar66 + 0x3208);
    if (uVar53 != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + uVar59 * 8 + 8);
        uVar64 = *(uint *)(lVar93 + 0x168);
        if (uVar64 != 0) {
          uVar88 = *(ulong *)(lVar93 + 0x70);
          uVar60 = 0;
          do {
            lVar94 = lVar93 + uVar60 * 8;
            lVar92 = *(long *)(lVar94 + 0x170);
            lVar68 = *(long *)(lVar92 + 0x30);
            if (((*(ulong *)(lVar68 + 0x70) ^ uVar88) & 0xffffffffff) == 0) goto LAB_71024de9b4;
            for (lVar92 = *(long *)(lVar92 + 0x98); lVar90 = lVar68, lVar92 != 0;
                lVar92 = *(long *)(lVar92 + 0xa0)) {
              while (lVar68 = *(long *)(lVar92 + 0x30),
                    ((*(ulong *)(lVar90 + 0x70) ^ *(ulong *)(lVar68 + 0x70)) & 0xffffffffff) != 0) {
                lVar92 = *(long *)(lVar92 + 0x98);
                lVar90 = lVar68;
                if (lVar92 == 0) goto LAB_71024de9c4;
              }
LAB_71024de9b4:
              lVar68 = *(long *)(lVar92 + 0x28);
            }
LAB_71024de9c4:
            uVar60 = uVar60 + 1;
            *(long *)(lVar94 + 0x1d0) = lVar68;
          } while (uVar60 != uVar64);
          uVar53 = *(uint *)(lVar66 + 0x3208);
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar53);
    }
    lVar93 = param_1[9];
    lVar66 = *(long *)(*(long *)(param_1[3] + 0x428) + 0x78);
    if (*(int *)(lVar93 + 0x3208) != 0) {
      uVar59 = 0;
      do {
        *(undefined4 *)(*(long *)(lVar93 + 8 + uVar59 * 8) + 0x230) = 0xffff;
        uVar59 = uVar59 + 1;
      } while (uVar59 < *(uint *)(lVar93 + 0x3208));
    }
LAB_71024e0018:
    *(undefined4 *)(lVar66 + 0x230) = 0;
    FUN_710250e310(lVar66,0);
    break;
  case 0x49:
    lVar66 = param_1[0xb];
    uVar64 = *(uint *)(lVar66 + 0x408);
    if (uVar64 != 0) {
      uVar59 = 0;
      do {
        lVar93 = *(long *)(lVar66 + 8 + uVar59 * 8);
        uVar60 = FUN_71024eb3d0(lVar93);
        if ((uVar60 & 1) != 0) {
          if (lVar93 != 0) {
            local_ac = 0;
            uStack_a8 = 0;
            local_100 = (long *******)0x0;
            local_f8 = 0;
            local_b4 = 0;
            uStack_b0 = 0;
            local_110 = 0;
            local_108 = (long *******)0x0;
            acStack_c8[0xc] = '\0';
            acStack_c8[0xd] = '\0';
            acStack_c8[0xe] = '\0';
            acStack_c8[0xf] = '\0';
            uStack_b8 = 0;
            local_120 = (long *******)0x0;
            local_118 = (long *******)0x0;
            acStack_c8[4] = '\0';
            acStack_c8[5] = '\0';
            acStack_c8[6] = '\0';
            acStack_c8[7] = '\0';
            acStack_c8[8] = '\0';
            acStack_c8[9] = '\0';
            acStack_c8[10] = '\0';
            acStack_c8[0xb] = '\0';
            local_d0._4_4_ = 0;
            acStack_c8[0] = '\0';
            acStack_c8[1] = '\0';
            acStack_c8[2] = '\0';
            acStack_c8[3] = '\0';
            uVar59 = (ulong)local_150 >> 0x30;
            local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
            local_130 = (long *******)0x0;
            ppppppplStack_128 = (long *******)0x0;
            puVar55 = *(ulong **)(*DAT_710532a868 + 0x3a0);
            puVar84 = *(ulong **)(*DAT_710532a868 + 0x3a8);
            if ((*(ulong *)(lVar93 + 0xd8) & 0xffffffffff) != 0) goto joined_r0x0071024e0ea0;
            goto joined_r0x0071024e27e0;
          }
          break;
        }
        uVar59 = uVar59 + 1;
      } while (uVar59 < uVar64);
    }
    break;
  case 0x4a:
    uVar59 = param_1[0x2fe];
    if ((uVar59 & 0xffffffffff) != 0) {
      lVar66 = param_1[0xb];
      uVar53 = *(uint *)(lVar66 + 0x408);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar93 = *(long *)(lVar66 + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar93 + 8) ^ uVar59) & 0xffffffffff) == 0) {
            if (lVar93 != 0) {
              uVar64 = 0;
              goto LAB_71024e1350;
            }
            break;
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x4b:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      lVar66 = param_1[9];
      if (*(uint *)(lVar66 + 0x3208) != 0) {
        uVar53 = 0;
        do {
          lVar93 = *(long *)(lVar66 + (ulong)uVar53 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if (lVar93 != 0) {
              param_3 = (long *********)param_1[3];
              FUN_710250e380(lVar93,lVar66,(long)param_3);
            }
            break;
          }
          uVar53 = uVar53 + 1;
        } while (uVar53 < *(uint *)(lVar66 + 0x3208));
      }
    }
    break;
  case 0x4c:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if (lVar66 != 0) {
              lVar93 = *(long *)(param_1[3] + 0x428);
              param_3 = *(long **********)(lVar93 + 0x78);
              FUN_71024ff5b0(0.0,lVar93,lVar66,(long)param_3);
              if (*(int *)(*(long *)(lVar93 + 0x88) + 0x88) == 9) {
                *(long *)(lVar93 + 0x80) = *(long *)(lVar93 + 0x88);
              }
              *(undefined4 *)(param_1[3] + 0x438) = 0;
            }
            break;
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x4d:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        lVar66 = 0;
        do {
          lVar93 = *(long *)(param_1[9] + 8 + lVar66 * 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if ((lVar93 != 0) &&
               (((((lVar66 = *local_1f0, *(int *)(lVar66 + 0x21c8) == 0 ||
                   (lVar66 = *plVar101, local_1f0 = plVar101, *(int *)(lVar66 + 0x21c8) == 0)) ||
                  (lVar66 = *plVar97, local_1f0 = plVar97, *(int *)(lVar66 + 0x21c8) == 0)) ||
                 (((lVar66 = *plVar100, local_1f0 = plVar100, *(int *)(lVar66 + 0x21c8) == 0 ||
                   (lVar66 = *plVar71, local_1f0 = plVar71, *(int *)(lVar66 + 0x21c8) == 0)) ||
                  ((lVar66 = *plVar80, local_1f0 = plVar80, *(int *)(lVar66 + 0x21c8) == 0 ||
                   ((lVar66 = *plVar3, local_1f0 = plVar3, *(int *)(lVar66 + 0x21c8) == 0 ||
                    (lVar66 = *plVar4, local_1f0 = plVar4, *(int *)(lVar66 + 0x21c8) == 0)))))))) ||
                ((lVar66 = *plVar5, local_1f0 = plVar5, *(int *)(lVar66 + 0x21c8) == 0 ||
                 (lVar66 = *plVar6, local_1f0 = plVar6, *(int *)(lVar66 + 0x21c8) == 0)))))) {
              *(long *)(lVar66 + 0x78) = lVar93;
              switch(*(undefined4 *)(lVar93 + 0x88)) {
              case 1:
              case 2:
              case 10:
                cVar40 = *(char *)(lVar93 + 0x25b);
                goto joined_r0x0071024e53f0;
              default:
                goto switchD_71024e530c_caseD_3;
              case 5:
                goto switchD_71024e530c_caseD_5;
              case 6:
                goto switchD_71024e530c_caseD_6;
              }
            }
            break;
          }
          lVar66 = lVar66 + 1;
        } while ((uint)lVar66 < uVar53);
      }
    }
    break;
  case 0x4e:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar53 = *(uint *)(param_1[10] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
LAB_71024e07d8:
        lVar66 = *(long *)(param_1[10] + (ulong)uVar64 * 8 + 8);
        if (((*(ulong *)(lVar66 + 8) ^ param_1[0x2fe]) & 0xffffffffff) != 0)
        goto code_r0x0071024e07f0;
        if (lVar66 == 0) break;
        lVar93 = *local_1f0;
        if (*(int *)(lVar93 + 0x21c8) == 0) {
          lVar94 = 0;
        }
        else {
          lVar93 = *plVar101;
          if (*(int *)(lVar93 + 0x21c8) == 0) {
            lVar94 = 1;
          }
          else {
            lVar93 = *plVar97;
            if (*(int *)(lVar93 + 0x21c8) == 0) {
              lVar94 = 2;
            }
            else {
              lVar93 = *plVar100;
              if (*(int *)(lVar93 + 0x21c8) == 0) {
                lVar94 = 3;
              }
              else {
                lVar93 = *plVar71;
                if (*(int *)(lVar93 + 0x21c8) == 0) {
                  lVar94 = 4;
                }
                else {
                  lVar93 = *plVar80;
                  if (*(int *)(lVar93 + 0x21c8) == 0) {
                    lVar94 = 5;
                  }
                  else {
                    lVar93 = *plVar3;
                    if (*(int *)(lVar93 + 0x21c8) == 0) {
                      lVar94 = 6;
                    }
                    else {
                      lVar93 = *plVar4;
                      if (*(int *)(lVar93 + 0x21c8) == 0) {
                        lVar94 = 7;
                      }
                      else {
                        lVar93 = *plVar5;
                        if (*(int *)(lVar93 + 0x21c8) == 0) {
                          lVar94 = 8;
                        }
                        else {
                          lVar93 = *plVar6;
                          if (*(int *)(lVar93 + 0x21c8) != 0) break;
                          lVar94 = 9;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (*(uint *)(lVar93 + 0x2158) < 0x400) {
          if (*(uint *)(lVar93 + 0x2158) == 0) {
            iVar62 = 1;
          }
          else {
            uVar89 = *(undefined8 *)(lVar93 + 0x158);
            uVar59 = 0;
            do {
              *(undefined8 *)(lVar93 + 0x160 + uVar59 * 8) = uVar89;
              uVar59 = uVar59 + 1;
            } while (uVar59 < *(uint *)(lVar93 + 0x2158));
            iVar62 = *(uint *)(lVar93 + 0x2158) + 1;
          }
          *(long *)(lVar93 + 0x158) = lVar66;
          *(int *)(lVar93 + 0x2158) = iVar62;
        }
        param_1[lVar94 + 0x3e5] = lVar67;
        break;
      }
    }
    break;
  case 0x4f:
    uVar53 = *(uint *)(*DAT_710532a860 + 0x1c);
    if (uVar53 < 3) {
      uVar64 = *(uint *)(*DAT_710532a860 + 0x78);
      if (0x13 < uVar64) goto LAB_71024e5790;
      lVar66 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + (ulong)uVar53 * 0x3d700 +
               (ulong)uVar64 * 0x84;
      uVar64 = *(uint *)(lVar66 + 0x3ccb8);
      uVar53 = 0xff;
      if (((uVar64 ^ 0xffffffff) & 0xff) != 0) {
        uVar53 = uVar64 + 1 & 0xff;
      }
      *(uint *)(lVar66 + 0x3ccb8) = uVar53;
    }
    break;
  case 0x50:
    uVar53 = *(uint *)(*DAT_710532a860 + 0x1c);
    if (uVar53 < 3) {
      uVar64 = *(uint *)(*DAT_710532a860 + 0x78);
      if (0x13 < uVar64) goto LAB_71024e5790;
      lVar66 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + (ulong)uVar53 * 0x3d700 +
               (ulong)uVar64 * 0x84;
      uVar64 = *(uint *)(lVar66 + 0x3ccb8);
      uVar53 = 0;
      if ((uVar64 & 0xff) != 0) {
        uVar53 = uVar64 - 1 & 0xff;
      }
      *(uint *)(lVar66 + 0x3ccb8) = uVar53;
    }
    break;
  case 0x51:
    acStack_c8[0] = 0xff;
    acStack_c8[8] = '\0';
    acStack_c8[9] = '\0';
    acStack_c8[10] = '\0';
    acStack_c8[0xb] = '\0';
    acStack_c8[0xc] = '\0';
    acStack_c8[0xd] = '\0';
    acStack_c8[0xe] = '\0';
    acStack_c8[0xf] = '\0';
    uStack_b8 = 0;
    local_b4 = 0;
    local_d0._0_4_ = 0;
    local_d0._4_4_ = 0xc1ffff00;
    if ((param_1[0x2fe] & 0xffffffffffU) == 0) {
      FUN_710250ad70(&local_130,lVar67);
      acStack_c8._8_4_ = (undefined4)local_f8;
      acStack_c8._12_4_ = (undefined4)(local_f8 >> 0x20);
      uStack_b8 = (undefined4)uStack_f0;
      local_b4 = (undefined4)((ulong)uStack_f0 >> 0x20);
      local_130 = local_108;
      ppppppplStack_128 = local_100;
LAB_71024e12b8:
      acStack_c8._0_4_ = SUB84(ppppppplStack_128,0);
      acStack_c8._4_4_ = (undefined4)((ulong)ppppppplStack_128 >> 0x20);
      local_d0._0_4_ = (uint)local_130;
      local_d0._4_4_ = (undefined4)((ulong)local_130 >> 0x20);
    }
    else {
      for (puVar55 = *(ulong **)(*DAT_710532a868 + 0x400);
          puVar55 != *(ulong **)(*DAT_710532a868 + 0x408); puVar55 = puVar55 + 4) {
        if (((*puVar55 ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
          uVar59 = puVar55[1];
          if ((uVar59 & 0xff00000000000000) == 0xc100000000000000 && (uVar59 & 0xffffffffff) != 0) {
            ppppppplVar73 = (long *******)puVar55[2];
            uVar60 = puVar55[3];
            FUN_71032933e0((ulong *)&local_130,*(long *)(DAT_710532f730 + 8) + 0x2f0,uVar59);
            if (((ulong)ppppppplVar73 & 0xffffffffff) != 0) {
              local_120 = ppppppplVar73;
            }
            if (0 < (int)uVar60) {
              local_118 = (long *******)CONCAT44(local_118._4_4_,(int)uVar60);
            }
            acStack_c8._8_4_ = SUB84(local_120,0);
            acStack_c8._12_4_ = (undefined4)((ulong)local_120 >> 0x20);
            uStack_b8 = SUB84(local_118,0);
            local_b4 = (undefined4)((ulong)local_118 >> 0x20);
            goto LAB_71024e12b8;
          }
          break;
        }
      }
    }
    local_130 = (long *******)0x0;
    ppppppplStack_128 = (long *******)0x0;
    local_120 = (long *******)0x0;
    param_4 = (undefined1 (*) [16])&DAT_ffffffff;
    param_3 = (long *********)&local_d0;
    param_5 = (undefined1 (*) [16])&local_130;
    FUN_71032fd260(&local_150,*(long ****************)(DAT_710532f830 + 8),(long ****)param_3,
                   (long *************)&DAT_ffffffff,(long *************)param_5,(long)param_6,
                   (ulong)param_7,(ulong)param_8);
    if (local_150 == ppuStack_148) {
      for (puVar55 = *(ulong **)(*DAT_710532a868 + 0x400);
          puVar55 != *(ulong **)(*DAT_710532a868 + 0x408); puVar55 = puVar55 + 4) {
        if ((*puVar55 & 0xffffffffff) == 0xea6d0ac84) {
          param_3 = (long *********)puVar55[1];
          ppppppplVar73 = (long *******)puVar55[2];
          iVar62 = (int)puVar55[3];
          goto LAB_71024e2290;
        }
      }
      iVar62 = 0;
      ppppppplVar73 = (long *******)0x0;
      param_3 = (long *********)&DAT_c1ffff0000000000;
LAB_71024e2290:
      FUN_71032933e0((ulong *)&local_130,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)param_3);
      ppuVar43 = local_150;
      if (((ulong)ppppppplVar73 & 0xffffffffff) != 0) {
        local_120 = ppppppplVar73;
      }
      if (0 < iVar62) {
        local_118 = (long *******)CONCAT44(local_118._4_4_,iVar62);
      }
      if (ppuStack_148 < local_140) {
        ppuStack_148[2] = (undefined *)local_120;
        ppuStack_148[3] = (undefined *)local_118;
        *ppuStack_148 = (undefined *)local_130;
        ppuStack_148[1] = (undefined *)ppppppplStack_128;
        ppuStack_148 = ppuStack_148 + 4;
      }
      else {
        ppppppppplVar70 = (long *********)((long)ppuStack_148 - (long)local_150);
        uVar59 = ((long)ppppppppplVar70 >> 5) + 1;
        if (uVar59 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_140 - (long)local_150 >> 5) < 0x3ffffffffffffff) {
          uVar60 = (long)local_140 - (long)local_150 >> 4;
          if (uVar59 <= uVar60) {
            uVar59 = uVar60;
          }
          if (uVar59 != 0) {
            if (uVar59 >> 0x3b != 0) goto LAB_71024e5790;
            goto LAB_71024e2360;
          }
LAB_71024e23c0:
          __dest_00 = (undefined **)0x0;
        }
        else {
          uVar59 = 0x7ffffffffffffff;
LAB_71024e2360:
          pppppppplVar58 = (long ********)(uVar59 * 0x20);
          if (pppppppplVar58 == (long ********)0x0) {
            pppppppplVar58 = (long ********)0x1;
          }
          __dest_00 = (undefined **)
                      FUN_710392e290(0x10,pppppppplVar58,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
          if (__dest_00 == (undefined **)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_d4 = 0;
              param_3 = (long *********)&local_168;
              local_168 = (undefined **)pppppppplVar58;
              uVar60 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d4);
              if (((uVar60 & 1) != 0) &&
                 (__dest_00 = (undefined **)
                              FUN_710392e290(0x10,pppppppplVar58,(long ****)param_3,
                                             (byte ****)param_4,(long ****)param_5,param_6,param_7,
                                             param_8), __dest_00 != (undefined **)0x0))
              goto LAB_71024e23c4;
            }
            goto LAB_71024e23c0;
          }
        }
LAB_71024e23c4:
        ppuVar29 = __dest_00 + ((long)ppppppppplVar70 >> 5) * 4;
        ppuVar29[2] = (undefined *)local_120;
        ppuVar29[3] = (undefined *)local_118;
        *ppuVar29 = (undefined *)local_130;
        ppuVar29[1] = (undefined *)ppppppplStack_128;
        if (0 < (long)ppppppppplVar70) {
          memcpy(__dest_00,local_150,(size_t)ppppppppplVar70);
          param_3 = ppppppppplVar70;
        }
        bVar51 = local_150 != (undefined **)0x0;
        local_150 = __dest_00;
        ppuStack_148 = ppuVar29 + 4;
        local_140 = __dest_00 + uVar59 * 4;
        if (bVar51) {
          FUN_710392eb40((ulong)ppuVar43);
        }
      }
    }
    if (ppuStack_148 == local_150) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7101783be0((ulong *)&local_130,(ulong *)local_150);
    pppppppplVar58 =
         (long ********)
         FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                        param_7,param_8);
    if (pppppppplVar58 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d4 = 0;
        local_168 = (undefined **)&SUB_00000020;
        param_3 = (long *********)&local_168;
        uVar59 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d4);
        if (((uVar59 & 1) != 0) &&
           (pppppppplVar58 =
                 (long ********)
                 FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                                param_6,param_7,param_8), pppppppplVar58 != (long ********)0x0))
        goto LAB_71024e2480;
      }
      pppppppplVar58 = (long ********)0x0;
    }
LAB_71024e2480:
    local_160 = pppppppplVar58 + 4;
    pppppppplVar58[2] = local_120;
    pppppppplVar58[3] = local_118;
    *pppppppplVar58 = local_130;
    pppppppplVar58[1] = ppppppplStack_128;
    local_168 = (undefined **)pppppppplVar58;
    local_158 = local_160;
    bVar51 = FUN_71017831e0((ulong *)pppppppplVar58);
    pppppppplVar47 = local_160;
    lVar66 = DAT_710532f7e8;
    *(undefined4 *)(*(long *)(DAT_710532f7e8 + 8) + 0xf8) = 1;
    lVar93 = *(long *)(lVar66 + 8);
    ppppppplVar73 = *pppppppplVar58;
    ppppppplVar30 = pppppppplVar58[1];
    ppppppplVar31 = pppppppplVar58[3];
    *(long ********)(lVar93 + 0x110) = pppppppplVar58[2];
    *(long ********)(lVar93 + 0x118) = ppppppplVar31;
    *(long ********)(lVar93 + 0x100) = ppppppplVar73;
    *(long ********)(lVar93 + 0x108) = ppppppplVar30;
    lVar93 = *(long *)(lVar66 + 8);
    *(undefined2 *)(lVar93 + 0x120) = 1;
    *(bool *)(lVar93 + 0x122) = bVar51;
    *(undefined4 *)(lVar93 + 0x124) = 0;
    *(undefined1 *)(lVar93 + 0x128) = 0;
    lVar66 = *(long *)(lVar66 + 8);
    if (*(char *)(lVar66 + 0x161) != '\0') {
      if (0x12 < *(uint *)(lVar66 + 0xe4)) {
LAB_71024e5790:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(lVar66 + (long)(int)*(uint *)(lVar66 + 0xe4) * 4 + 0x98) = 5;
      if (*(int *)(lVar66 + 0xe4) < 0x12) {
        uVar53 = *(int *)(lVar66 + 0xe4) + 1;
        *(uint *)(lVar66 + 0xe4) = uVar53;
        if (0x12 < uVar53) goto LAB_71024e5790;
        *(undefined4 *)(lVar66 + (long)(int)uVar53 * 4 + 0x98) = 3;
      }
    }
    if ((long ********)local_168 == local_160) {
      bVar51 = true;
      pppppppplVar58 = (long ********)local_168;
    }
    else {
      bVar46 = false;
      bVar45 = false;
      bVar44 = false;
      bVar51 = true;
      uVar89 = extraout_x1_11;
      pppppppplVar58 = (long ********)local_168;
      do {
        local_130 = *pppppppplVar58;
        ppppppplStack_128 = pppppppplVar58[1];
        local_120 = pppppppplVar58[2];
        local_118 = pppppppplVar58[3];
        bVar52 = FUN_71017825b0((ulong *)&local_130,uVar89,param_3,(byte ****)param_4,
                                (long ****)param_5,param_6,param_7,param_8);
        if (bVar52) {
          if ((char)ppppppplStack_128 == '\x03') {
            bVar46 = true;
          }
          else if ((char)ppppppplStack_128 == '\x01') {
            bVar45 = true;
          }
          else if ((char)ppppppplStack_128 == '\0') {
            bVar44 = true;
          }
        }
        else {
          bVar51 = (bool)((char)ppppppplStack_128 == '\x04' & bVar51);
        }
        pppppppplVar58 = pppppppplVar58 + 4;
        uVar89 = extraout_x1_12;
      } while (pppppppplVar47 != pppppppplVar58);
      if (bVar44) {
        FUN_71032fe9d0(DAT_710532f830);
        uVar89 = extraout_x1_13;
      }
      if (bVar45) {
        FUN_71032fefa0(DAT_710532f830);
        uVar89 = extraout_x1_14;
      }
      pppppppplVar58 = (long ********)local_168;
      pppppppplVar47 = local_160;
      if (bVar46) {
        FUN_71032ff570(DAT_710532f830,uVar89,(ulong)param_3,(byte ****)param_4,(long ****)param_5,
                       param_6,param_7,param_8);
        pppppppplVar58 = (long ********)local_168;
        pppppppplVar47 = local_160;
      }
    }
    for (; pppppppplVar49 = local_160, pppppppplVar58 != local_160;
        pppppppplVar58 = pppppppplVar58 + 4) {
                    /* WARNING: Read-only address (ram,0x007104467fc0) is written */
      local_130 = *pppppppplVar58;
      ppppppplStack_128 = pppppppplVar58[1];
      local_120 = pppppppplVar58[2];
      local_118 = pppppppplVar58[3];
      local_160 = pppppppplVar47;
      FUN_71017830a0((ulong *)&local_130);
      pppppppplVar47 = local_160;
      local_160 = pppppppplVar49;
    }
                    /* WARNING: Read-only address (ram,0x007104467fc0) is written */
    if ((uint)(int)(short)param_1[0x2fc] <= (int)param_1[0x305] + 1U) {
      *(short *)(param_1 + 0x2fc) = (short)(int)param_1[0x305] + 2;
    }
    if (!bVar51 && acStack_c8[0] != '\x04') {
      *(undefined1 *)((long)param_1 + 0x1f94) = 1;
    }
    local_160 = pppppppplVar47;
    if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) != '\0') {
      FUN_7101af2070(*(long **)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xc0) + 0x80),9,
                     (long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      *(undefined1 *)((long)param_1 + 0x1f9f) = 1;
    }
    if ((long ********)local_168 != (long ********)0x0) {
      local_160 = (long ********)local_168;
      FUN_710392eb40((ulong)local_168);
    }
    if (local_150 != (undefined **)0x0) {
      ppuStack_148 = local_150;
      FUN_710392eb40((ulong)local_150);
    }
    goto LAB_71024e26c0;
  case 0x52:
LAB_71024e26c0:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      lVar66 = param_1[9];
      if (*(uint *)(lVar66 + 0x3208) != 0) {
        uVar53 = 0;
        do {
          lVar93 = *(long *)(lVar66 + (ulong)uVar53 * 8 + 8);
          if (((*(ulong *)(lVar93 + 0x70) ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
            if (lVar93 != 0) {
              param_3 = (long *********)param_1[3];
              FUN_710250e380(lVar93,lVar66,(long)param_3);
              if (*(char *)(lVar93 + 0x25b) == '\0') {
                param_3 = (long *********)param_1[1];
                param_4 = (undefined1 (*) [16])param_1[3];
                param_5 = (undefined1 (*) [16])param_1[9];
                param_6 = (undefined1 (*) [16])param_1[10];
                FUN_710250e500(lVar93,*param_1,(long ****)param_3,(byte ****)param_4,
                               (long ****)param_5,(long *)param_6,param_7,param_8);
              }
            }
            break;
          }
          uVar53 = uVar53 + 1;
        } while (uVar53 < *(uint *)(lVar66 + 0x3208));
      }
    }
    break;
  case 0x53:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      FUN_7102507720(param_1[3],param_1[0x2fe],param_3,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
    }
    break;
  case 0x54:
    uVar53 = *(uint *)(param_1[3] + 0x390);
    if (0 < (int)uVar53) {
      lVar66 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar53 >> 0x18) * 0x300;
      if ((*(uint *)(lVar66 + 4) == uVar53) && (lVar66 != 0)) {
        std::mutex::lock();
        if (*(uint *)(lVar66 + 4) == uVar53) {
          param_3 = (long *********)0x0;
          param_4 = (undefined1 (*) [16])0x0;
          FUN_71035707d0(lVar66,0,(long ****)0x0,0,(long ****)param_5,param_6,param_7,param_8);
        }
        std::mutex::unlock();
      }
    }
    break;
  case 0x55:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    *(undefined4 *)(lVar66 + 0x30) = 1;
    goto LAB_71024df890;
  case 0x56:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    lVar66 = *(long *)(param_1[1] + 8);
    *(undefined1 *)(lVar66 + 0x3c) = 1;
    *(undefined4 *)(lVar66 + 0x30) = 0;
    *(uint *)(lVar66 + 0x34) = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    *(undefined1 *)(*(long *)(param_1[1] + 8) + 0x3d) = 1;
    break;
  case 0x57:
    lVar66 = *(long *)(param_1[1] + 8);
    iVar62 = (int)*(short *)((long)param_1 + 0x17e4);
    *(undefined1 *)(lVar66 + 0x2c) = 0;
    goto LAB_71024dfbb8;
  case 0x58:
    sVar37 = *(short *)((long)param_1 + 0x17e4);
    lVar66 = *(long *)(param_1[1] + 8);
    *(undefined1 *)(lVar66 + 0x2c) = 1;
    uVar53 = (int)sVar37 - uVar53;
    goto LAB_71024dfbc0;
  case 0x59:
    lVar66 = param_1[1];
    iVar62 = (int)*(short *)((long)param_1 + 0x17e4);
    uVar82 = 2;
    goto LAB_71024dfbb0;
  case 0x5a:
    lVar66 = param_1[1];
    iVar62 = (int)*(short *)((long)param_1 + 0x17e4);
    uVar82 = 3;
    goto LAB_71024dfbb0;
  case 0x5b:
    lVar66 = param_1[1];
    iVar62 = (int)*(short *)((long)param_1 + 0x17e4);
    uVar82 = 4;
    goto LAB_71024dfbb0;
  case 0x5c:
    lVar66 = param_1[1];
    iVar62 = (int)*(short *)((long)param_1 + 0x17e4);
    uVar82 = 5;
LAB_71024dfbb0:
    lVar66 = *(long *)(lVar66 + 8);
    *(undefined1 *)(lVar66 + 0x2c) = uVar82;
LAB_71024dfbb8:
    uVar53 = iVar62 - uVar53;
LAB_71024dfbc0:
    *(undefined2 *)(lVar66 + 0x3c) = 1;
    *(undefined4 *)(lVar66 + 0x30) = 0;
    *(uint *)(lVar66 + 0x34) = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    *(undefined4 *)(lVar66 + 0x38) = 0;
    break;
  case 0x5d:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    *(undefined1 *)(lVar66 + 0x3e) = 1;
LAB_71024df890:
    *(undefined1 *)(lVar66 + 0x3c) = 1;
    *(uint *)(lVar66 + 0x38) = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    break;
  case 0x5e:
    uVar53 = (int)*(short *)((long)param_1 + 0x17e4) - uVar53;
    lVar66 = *(long *)(param_1[1] + 8);
    *(undefined1 *)(lVar66 + 0x3e) = 0;
    *(undefined1 *)(lVar66 + 0x3c) = 1;
    *(uint *)(lVar66 + 0x34) = uVar53 & ((int)uVar53 >> 0x1f ^ 0xffffffffU);
    break;
  case 0x5f:
    *(undefined4 *)(*DAT_710532a860 + 0x80) = 0;
    break;
  case 0x60:
    *(int *)(*DAT_710532a860 + 0x80) = (int)param_1[0x2ff] + 1;
    break;
  case 0x61:
    ppppppppplVar70 = (long *********)param_1[0x2fe];
    if (((ulong)ppppppppplVar70 & 0xffffffffff) != 0) {
      if ((*local_1d8 & 0xffffffffff) == 0) {
        lVar66 = 0;
      }
      else if ((*puVar55 & 0xffffffffff) == 0) {
        lVar66 = 1;
        local_1d8 = puVar55;
      }
      else if ((*puVar84 & 0xffffffffff) == 0) {
        lVar66 = 2;
        local_1d8 = puVar84;
      }
      else if ((*puVar22 & 0xffffffffff) == 0) {
        lVar66 = 3;
        local_1d8 = puVar22;
      }
      else if ((*puVar23 & 0xffffffffff) == 0) {
        lVar66 = 4;
        local_1d8 = puVar23;
      }
      else if ((*puVar24 & 0xffffffffff) == 0) {
        lVar66 = 5;
        local_1d8 = puVar24;
      }
      else if ((*puVar25 & 0xffffffffff) == 0) {
        lVar66 = 6;
        local_1d8 = puVar25;
      }
      else if ((*puVar26 & 0xffffffffff) == 0) {
        lVar66 = 7;
        local_1d8 = puVar26;
      }
      else if ((*puVar27 & 0xffffffffff) == 0) {
        lVar66 = 8;
        local_1d8 = puVar27;
      }
      else {
        if ((*puVar28 & 0xffffffffff) != 0) break;
        lVar66 = 9;
        local_1d8 = puVar28;
      }
      FUN_71024db230(local_1d8);
      *local_1d8 = (ulong)ppppppppplVar70;
      FUN_71024d1440((undefined4 *)&local_130,*DAT_710532a860,(ulong)ppppppppplVar70);
      *(undefined4 *)(param_1 + lVar66 * 10 + 0x378) = local_130._0_4_;
      if (local_120 == (long *******)0x0) {
        if (((param_1[lVar66 * 10 + 0x37a] != 0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)param_1[lVar66 * 10 + 0x37b] == DAT_7106dd53ac)) {
          piVar85 = (int *)(param_1[lVar66 * 10 + 0x37a] + 0x38);
          do {
            cVar40 = '\x01';
            bVar51 = (bool)ExclusiveMonitorPass(piVar85,0x10);
            if (bVar51) {
              *piVar85 = *piVar85 + -1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
        }
        param_1[lVar66 * 10 + 0x37a] = 0;
        plVar101 = param_1 + lVar66 * 10 + 0x37c;
LAB_71024e4db8:
        *(undefined1 *)plVar101 = 0;
      }
      else if (*(int *)((long)param_1 + lVar66 * 0x50 + 0x1bdc) == 0x876500) {
        if ((int)param_1[lVar66 * 10 + 0x37b] == DAT_7106dd53ac) {
          puVar55 = (ulong *)(param_1 + lVar66 * 10 + 0x37a);
          if ((param_1[lVar66 * 10 + 0x37a] != 0) && (DAT_7106dd53a8 == '\x01')) {
            piVar85 = (int *)(param_1[lVar66 * 10 + 0x37a] + 0x38);
            do {
              cVar40 = '\x01';
              bVar51 = (bool)ExclusiveMonitorPass(piVar85,0x10);
              if (bVar51) {
                *piVar85 = *piVar85 + -1;
                cVar40 = ExclusiveMonitorsStatus();
              }
            } while (cVar40 != '\0');
          }
          plVar101 = param_1 + lVar66 * 10 + 0x37c;
          *puVar55 = 0;
          *(undefined1 *)plVar101 = 0;
        }
        else {
          *(int *)(param_1 + lVar66 * 10 + 0x37b) = DAT_7106dd53ac;
          puVar55 = (ulong *)(param_1 + lVar66 * 10 + 0x37a);
          plVar101 = param_1 + lVar66 * 10 + 0x37c;
        }
        *puVar55 = (ulong)local_120;
        ppppppplVar73 = local_120 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
          if (bVar51) {
            *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + 1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
        goto LAB_71024e4db8;
      }
      param_1[lVar66 * 10 + 0x37f] = local_f8;
      param_1[lVar66 * 10 + 0x37e] = (long)local_100;
      param_1[lVar66 * 10 + 0x37d] = (long)local_108;
      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
      if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_118 == DAT_7106dd53ac)) {
        ppppppplVar73 = local_120 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
          if (bVar51) {
            *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
      }
      if ((*(int *)(*(long *)(DAT_710532f8d0 + 8) + 0x150) == 2) &&
         ((long *)param_1[lVar66 * 10 + 0x37a] != (long *)0x0)) {
        fVar105 = *(float *)(*DAT_710532a868 + 0x1f8);
        uVar59 = (**(code **)(*(long *)param_1[lVar66 * 10 + 0x37a] + 0x20))();
        if (((uVar59 & 1) == 0) &&
           ((((*(char *)(*DAT_710593b438 + 1) != '\0' &&
              (*(int *)((long)param_1 + lVar66 * 0x50 + 0x1bdc) == 0x876500)) &&
             (DAT_7106dd53a8 == '\x01')) &&
            (((int)param_1[lVar66 * 10 + 0x37b] == DAT_7106dd53ac &&
             ((char)param_1[lVar66 * 10 + 0x37c] == '\0')))))) {
          plVar101 = (long *)param_1[lVar66 * 10 + 0x37a];
          if ((plVar101 != (long *)0x0) &&
             ((uVar59 = (**(code **)(*plVar101 + 0x20))(), (uVar59 & 1) == 0 &&
              (uVar59 = (**(code **)(*(long *)param_1[lVar66 * 10 + 0x37a] + 0x68))(),
              (uVar59 & 1) == 0)))) {
            FUN_710373baa0(fVar105,(long)(param_1 + lVar66 * 10 + 0x378),0);
          }
        }
      }
      param_3 = ppppppppplVar70;
      if (*(char *)((long)param_1 + 0x1fa1) != '\0') {
        FUN_71024e5900((long)local_1d8);
        param_3 = ppppppppplVar70;
      }
    }
    break;
  case 0x62:
    uVar59 = param_1[0x2fe];
    if (((uVar59 & 0xffffffffff) != 0) &&
       ((((((((uVar59 ^ *local_1d8) & 0xffffffffff) == 0 ||
            (local_1d8 = puVar55, ((uVar59 ^ *puVar55) & 0xffffffffff) == 0)) ||
           (local_1d8 = puVar84, ((uVar59 ^ *puVar84) & 0xffffffffff) == 0)) ||
          (((local_1d8 = puVar22, ((uVar59 ^ *puVar22) & 0xffffffffff) == 0 ||
            (local_1d8 = puVar23, ((uVar59 ^ *puVar23) & 0xffffffffff) == 0)) ||
           ((local_1d8 = puVar24, ((uVar59 ^ *puVar24) & 0xffffffffff) == 0 ||
            ((local_1d8 = puVar25, ((uVar59 ^ *puVar25) & 0xffffffffff) == 0 ||
             (local_1d8 = puVar26, ((uVar59 ^ *puVar26) & 0xffffffffff) == 0)))))))) ||
         (local_1d8 = puVar27, ((uVar59 ^ *puVar27) & 0xffffffffff) == 0)) ||
        (local_1d8 = puVar28, ((uVar59 ^ *puVar28) & 0xffffffffff) == 0)))) {
      FUN_71024db230(local_1d8);
    }
    break;
  case 100:
    lVar66 = param_1[2];
    *(undefined8 *)(lVar66 + 0x120) = 0;
    *(undefined8 *)(lVar66 + 0x128) = 0;
    *(undefined4 *)(lVar66 + 0x168) = 0;
    break;
  case 0x65:
    *(undefined1 *)(*(long *)(param_1[0x3f0] + 0x80) + 0x113) = 1;
    break;
  case 0x66:
    lVar66 = *(long *)(param_1[0x3f0] + 0x80);
    if ((*(char *)(lVar66 + 0x113) != '\0') && (*(int *)(lVar66 + 0x98) == 3)) {
      plVar101 = *(long **)(lVar66 + 0x28);
      plVar97 = (long *)plVar101[1];
      if (plVar97 != (long *)0x0) {
        if ((char)plVar101[2] != '\0') {
          plVar100 = *(long **)(*plVar101 + 0x80);
          plVar101 = (long *)(*plVar101 + 0x88);
          if (plVar100 != plVar101) {
            do {
              uVar59 = (**(code **)(*(long *)plVar100[0xd] + 0x148))();
              if (((uVar59 & 1) != 0) &&
                 (uVar59 = (**(code **)(*plVar97 + 0x120))(plVar97,plVar100[0xd]), (uVar59 & 1) != 0
                 )) {
                (**(code **)(*(long *)plVar100[0xd] + 0x178))();
                (**(code **)(*(long *)plVar100[0xd] + 0x140))((long *)plVar100[0xd],0);
              }
              plVar71 = (long *)plVar100[1];
              if ((long *)plVar100[1] == (long *)0x0) {
                plVar71 = plVar100 + 2;
                plVar80 = (long *)*plVar71;
                if ((long *)*plVar80 != plVar100) {
                  do {
                    lVar93 = *plVar71;
                    plVar71 = (long *)(lVar93 + 0x10);
                    plVar80 = (long *)*plVar71;
                  } while (*plVar80 != lVar93);
                }
              }
              else {
                do {
                  plVar80 = plVar71;
                  plVar71 = (long *)*plVar80;
                } while ((long *)*plVar80 != (long *)0x0);
              }
              plVar100 = plVar80;
            } while (plVar80 != plVar101);
            plVar97 = *(long **)(*(long *)(lVar66 + 0x28) + 8);
          }
        }
        (**(code **)(*plVar97 + 0x168))(plVar97);
      }
    }
    *(undefined1 *)(lVar66 + 0x113) = 0;
    break;
  case 0x67:
    lVar66 = 0x1f96;
    goto LAB_71024e06c0;
  case 0x68:
    *(undefined1 *)((long)param_1 + 0x1f96) = 0;
    break;
  case 0x69:
    lVar66 = 0x1f97;
    goto LAB_71024e06c0;
  case 0x6a:
    *(undefined1 *)((long)param_1 + 0x1f97) = 0;
    break;
  case 0x6b:
    lVar66 = 0x1f98;
    goto LAB_71024e06c0;
  case 0x6c:
    *(undefined1 *)(param_1 + 0x3f3) = 0;
    break;
  case 0x6d:
    lVar66 = 0x1f99;
    goto LAB_71024e06c0;
  case 0x6e:
    *(undefined1 *)((long)param_1 + 0x1f99) = 0;
    break;
  case 0x6f:
    lVar66 = 0x1f9a;
    goto LAB_71024e06c0;
  case 0x70:
    *(undefined1 *)((long)param_1 + 0x1f9a) = 0;
    break;
  case 0x71:
    lVar66 = 0x1f9b;
    goto LAB_71024e06c0;
  case 0x72:
    *(undefined1 *)((long)param_1 + 0x1f9b) = 0;
    break;
  case 0x73:
    lVar66 = 0x1f9c;
    goto LAB_71024e06c0;
  case 0x74:
    *(undefined1 *)((long)param_1 + 0x1f9c) = 0;
    break;
  case 0x75:
    lVar66 = 0x1f9d;
    goto LAB_71024e06c0;
  case 0x76:
    *(undefined1 *)((long)param_1 + 0x1f9d) = 0;
    break;
  case 0x77:
    lVar66 = 0x1f9e;
    goto LAB_71024e06c0;
  case 0x78:
    *(undefined1 *)((long)param_1 + 0x1f9e) = 0;
    break;
  case 0x79:
    if ((param_1[0x2fe] & 0xffffffffffU) == 0) {
      *(undefined1 *)(*(long *)(param_1[0xc] + 8) + 0x5d8) = 1;
    }
    else {
      *(long *)(*(long *)(param_1[0xc] + 8) + 0x5d0) = param_1[0x2fe];
    }
    break;
  case 0x7a:
    uVar59 = param_1[0x2fe];
    lVar66 = *(long *)(param_1[0xc] + 8);
    *(undefined1 *)(lVar66 + 0x5d8) = 0;
    *(undefined8 *)(lVar66 + 0x5d0) = 0;
    if ((uVar59 & 0xffffffffff) == 0) {
      lVar93 = *(long *)(param_1[0xc] + 8);
      lVar66 = *(long *)(*(long *)(lVar93 + 0x560) + 0x80);
      if (*(int *)(lVar66 + 0x116c) == 2) {
        plVar101 = (long *)param_1[9];
        lVar94 = param_1[3];
        uVar59 = (ulong)*(uint *)(plVar101 + 0x641);
        if (*(uint *)(plVar101 + 0x641) != 0) {
          pppplVar98 = (long ****)param_1[0xb];
          do {
            plVar101 = plVar101 + 1;
            param_4 = (undefined1 (*) [16])0x0;
            FUN_71024fc200(lVar93,*plVar101,pppplVar98,0,(long ****)param_5,param_6,param_7,param_8)
            ;
            uVar59 = uVar59 - 1;
          } while (uVar59 != 0);
          lVar66 = *(long *)(*(long *)(lVar93 + 0x560) + 0x80);
        }
        param_3 = (long *********)0x0;
        FUN_7101e59d50(*(undefined1 (*) [16])(*(long *)(lVar94 + 0x428) + 0x2160),lVar66,0,0);
      }
    }
    else {
      lVar66 = *(long *)(param_1[0xc] + 8);
      uVar59 = param_1[0x2fe];
      lVar93 = param_1[9];
      param_3 = (long *********)param_1[0xb];
      if (((*(ulong *)(lVar66 + 0x5d0) ^ uVar59) & 0xffffffffff) == 0) {
        *(undefined8 *)(lVar66 + 0x5d0) = 0;
      }
      if (*(int *)(*(long *)(*(long *)(lVar66 + 0x560) + 0x80) + 0x116c) == 2) {
        uVar53 = *(uint *)(lVar93 + 0x3208);
        if (uVar53 != 0) {
          uVar64 = 0;
          do {
            lVar94 = *(long *)(lVar93 + (ulong)uVar64 * 8 + 8);
            if (((*(ulong *)(lVar94 + 0x70) ^ uVar59) & 0xffffffffff) == 0) goto LAB_71024e233c;
            uVar64 = uVar64 + 1;
          } while (uVar64 < uVar53);
        }
        lVar94 = 0;
LAB_71024e233c:
        param_4 = (undefined1 (*) [16])0x1;
        FUN_71024fc200(lVar66,lVar94,(long ****)param_3,1,(long ****)param_5,param_6,param_7,param_8
                      );
      }
    }
    break;
  case 0x7b:
    lVar66 = 0x1fa0;
LAB_71024e06c0:
    *(undefined1 *)((long)param_1 + lVar66) = 1;
    break;
  case 0x7c:
    *(undefined1 *)(param_1 + 0x3f4) = 0;
    break;
  case 0x7d:
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(int *)(lVar66 + 0x50) != 0) {
      *(undefined4 *)(lVar66 + 0x50) = 0;
      *(undefined1 *)(lVar66 + 0x54) = 1;
    }
    break;
  case 0x7e:
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(int *)(lVar66 + 0x50) != 1) {
      *(undefined4 *)(lVar66 + 0x50) = 1;
      *(undefined1 *)(lVar66 + 0x54) = 1;
    }
    break;
  case 0x7f:
    uVar59 = param_1[0x2fe];
    if ((uVar59 & 0xffffffffff) != 0) {
      uVar53 = *(uint *)(param_1[9] + 0x3208);
      if (uVar53 != 0) {
        uVar64 = 0;
        do {
          lVar66 = *(long *)(param_1[9] + (ulong)uVar64 * 8 + 8);
          if (((*(ulong *)(lVar66 + 0x70) ^ uVar59) & 0xffffffffff) == 0) {
            if (lVar66 != 0) {
              lVar66 = *(long *)(param_1[1] + 8);
              *(undefined4 *)(lVar66 + 0x40) = 1;
              *(ulong *)(lVar66 + 0x48) = uVar59;
            }
            break;
          }
          uVar64 = uVar64 + 1;
        } while (uVar64 < uVar53);
      }
    }
    break;
  case 0x80:
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(char *)(lVar66 + 0x28) == '\0') {
      uVar110 = 0x71;
LAB_71024e0258:
      *(undefined4 *)(lVar66 + 0x24) = uVar110;
      *(undefined1 *)(lVar66 + 0x28) = 1;
    }
    break;
  case 0x81:
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(char *)(lVar66 + 0x28) == '\0') {
      uVar110 = 0x72;
      goto LAB_71024e0258;
    }
    break;
  case 0x82:
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      uVar60 = param_1[0x2fe] & 0xffffffffffU | 0x4dffff0000000000;
      uVar59 = FUN_710327eea0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x388),uVar60);
      puVar72 = *(undefined8 **)(*DAT_7105314510 + 0x158);
      uVar53 = *(uint *)(*DAT_710532a860 + 0x1c);
      uVar64 = (uint)uVar59;
      if ((uVar53 < 3) && ((uVar64 & 0xff) < 0x20)) {
        uVar64 = 1 << (ulong)(uVar64 & 0x1f);
        if ((*(uint *)(*(long *)*puVar72 + (ulong)uVar53 * 0x3d700 + 0x3cc00) & uVar64) == 0) {
          param_3 = (long *********)0x1;
          FUN_710337ae10(uVar60,1,1);
LAB_71024e0ef4:
          lVar66 = *(long *)*puVar72 + (ulong)uVar53 * 0x3d700;
          *(uint *)(lVar66 + 0x3cc00) = *(uint *)(lVar66 + 0x3cc00) | uVar64;
        }
      }
      else {
        param_3 = (long *********)0x1;
        FUN_710337ae10(uVar60,1,1);
        if ((uVar53 < 3) && ((uVar64 & 0xff) < 0x20)) {
          uVar64 = 1 << (ulong)(uVar64 & 0x1f);
          goto LAB_71024e0ef4;
        }
      }
    }
    break;
  case 0x83:
    uVar53 = *(uint *)(param_1 + 0x3f2);
    if (uVar53 != 0) {
      if (uVar53 >> 0x19 < 5) {
        uVar64 = uVar53 >> 0x18;
        uVar59 = (ulong)uVar64;
        puVar83 = DAT_7105334948 + uVar59 * 0x6c;
        if ((puVar83 != (uint *)0x0) && (*puVar83 == uVar53)) {
          DAT_7105334948[uVar59 * 0x6c + 1] = 3;
          if (puVar79[uVar59 * 0x6c + 3] < 2) {
            puVar83 = puVar79 + uVar59 * 0x6c;
            *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x45a);
            uVar89 = *(undefined8 *)(puVar79 + 0x45e);
            *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x462);
            *(undefined8 *)(puVar83 + 0x2e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x466);
            *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x46a);
            *(undefined8 *)(puVar83 + 0x36) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x46e);
            uVar53 = puVar79[0x474];
            *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x472);
            *(undefined8 *)(puVar83 + 0x3e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x458);
            *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x45c);
            *(undefined8 *)(puVar83 + 0x28) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x460);
            *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x464);
            *(undefined8 *)(puVar83 + 0x30) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x468);
            *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x46c);
            *(undefined8 *)(puVar83 + 0x38) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x470);
          }
          else if (puVar79[uVar59 * 0x6c + 3] == 3) {
            if (uVar64 != puVar79[0x4d1]) {
LAB_71024e2af4:
              *puVar83 = 0;
              goto LAB_71024e2af8;
            }
            puVar83 = puVar79 + uVar59 * 0x6c;
            *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x43a);
            uVar89 = *(undefined8 *)(puVar79 + 0x43e);
            *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x442);
            *(undefined8 *)(puVar83 + 0x2e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x446);
            *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x44a);
            *(undefined8 *)(puVar83 + 0x36) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x44e);
            uVar53 = puVar79[0x454];
            *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x452);
            *(undefined8 *)(puVar83 + 0x3e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x438);
            *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x43c);
            *(undefined8 *)(puVar83 + 0x28) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x440);
            *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x444);
            *(undefined8 *)(puVar83 + 0x30) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x448);
            *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x44c);
            *(undefined8 *)(puVar83 + 0x38) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x450);
          }
          else {
            if (uVar64 != puVar79[0x4d3]) goto LAB_71024e2af4;
            puVar83 = puVar79 + uVar59 * 0x6c;
            *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x49a);
            uVar89 = *(undefined8 *)(puVar79 + 0x49e);
            *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x4a2);
            *(undefined8 *)(puVar83 + 0x2e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x4a6);
            *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x4aa);
            *(undefined8 *)(puVar83 + 0x36) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x4ae);
            uVar53 = puVar79[0x4b4];
            *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x4b2);
            *(undefined8 *)(puVar83 + 0x3e) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x498);
            *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x49c);
            *(undefined8 *)(puVar83 + 0x28) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x4a0);
            *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x4a4);
            *(undefined8 *)(puVar83 + 0x30) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x4a8);
            *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x4ac);
            *(undefined8 *)(puVar83 + 0x38) = uVar89;
            uVar89 = *(undefined8 *)(puVar79 + 0x4b0);
          }
          puVar83[0x44] = uVar53;
          *(undefined8 *)(puVar83 + 0x40) = uVar89;
          *(undefined8 *)(puVar83 + 0x4a) = DAT_71052301b8;
          uVar89 = DAT_71052301c8;
          *(undefined8 *)(puVar83 + 0x52) = DAT_71052301d8;
          *(undefined8 *)(puVar83 + 0x4e) = uVar89;
          uVar89 = DAT_71052301e8;
          *(undefined8 *)(puVar83 + 0x5a) = _DAT_71052301f8;
          *(undefined8 *)(puVar83 + 0x56) = uVar89;
          uVar53 = DAT_7105230220;
          uVar89 = DAT_7105230208;
          *(undefined8 *)(puVar83 + 0x62) = DAT_7105230218;
          *(undefined8 *)(puVar83 + 0x5e) = uVar89;
          uVar89 = DAT_71052301b0;
          *(undefined8 *)(puVar83 + 0x4c) = DAT_71052301c0;
          *(undefined8 *)(puVar83 + 0x48) = uVar89;
          uVar89 = DAT_71052301d0;
          *(undefined8 *)(puVar83 + 0x54) = DAT_71052301e0;
          *(undefined8 *)(puVar83 + 0x50) = uVar89;
          uVar89 = DAT_71052301f0;
          *(undefined8 *)(puVar83 + 0x5c) = DAT_7105230200;
          *(undefined8 *)(puVar83 + 0x58) = uVar89;
          uVar89 = DAT_7105230210;
          puVar83[100] = uVar53;
          *(undefined8 *)(puVar83 + 0x60) = uVar89;
          (puVar79 + uVar59 * 0x6c + 4)[0] = 0;
          (puVar79 + uVar59 * 0x6c + 4)[1] = 0;
        }
      }
LAB_71024e2af8:
      *(undefined4 *)(param_1 + 0x3f2) = 0;
    }
    if ((param_1[0x2fe] & 0xffffffffffU) != 0) {
      for (puVar55 = *(ulong **)(*DAT_710532a868 + 0x300);
          puVar55 != *(ulong **)(*DAT_710532a868 + 0x308); puVar55 = puVar55 + 3) {
        if (((*puVar55 ^ param_1[0x2fe]) & 0xffffffffff) == 0) {
          local_d0._0_4_ = (uint)puVar55[1];
          local_d0._4_4_ = *(undefined4 *)((long)puVar55 + 0xc);
          acStack_c8._0_4_ = *(undefined4 *)(puVar55 + 2);
          goto LAB_71024e2b60;
        }
      }
      acStack_c8._0_4_ = 0;
      local_d0._4_4_ = 0;
      local_d0._0_4_ = 0;
LAB_71024e2b60:
      param_3 = (long *********)&DAT_000000ff;
      param_4 = (undefined1 (*) [16])&local_130;
      param_5 = (undefined1 (*) [16])&local_d0;
      param_6 = (undefined1 (*) [16])0x0;
      param_7 = (long ***)0x0;
      local_130 = (long *******)&DAT_3f8000003f800000;
      ppppppplStack_128 = (long *******)&DAT_3f800000;
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = -0x80;
      acStack_c8[7] = '?';
      uVar53 = FUN_7103566b20((float)((int)*(short *)((long)param_1 + 0x17e4) -
                                     (int)*(short *)((long)param_1 + 0x17e2)),0x3f000000,0x3f800000,
                              0x3f800000,0,0,DAT_7105334948,3,0xff,(float *)param_4,
                              (undefined8 *)param_5,0,0);
      *(uint *)(param_1 + 0x3f2) = uVar53;
    }
    break;
  case 0x84:
    uVar64 = *(uint *)(param_1 + 0x3f2);
    if (uVar64 >> 0x19 < 5) {
      uVar65 = uVar64 >> 0x18;
      uVar59 = (ulong)uVar65;
      puVar83 = DAT_7105334948 + uVar59 * 0x6c;
      if ((puVar83 != (uint *)0x0) && (*puVar83 == uVar64)) {
        sVar37 = *(short *)((long)param_1 + 0x17e4);
        DAT_7105334948[uVar59 * 0x6c + 1] = 3;
        if (puVar79[uVar59 * 0x6c + 3] < 2) {
          puVar83 = puVar79 + uVar59 * 0x6c;
          *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x45a);
          uVar89 = *(undefined8 *)(puVar79 + 0x45e);
          *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x462);
          *(undefined8 *)(puVar83 + 0x2e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x466);
          *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x46a);
          *(undefined8 *)(puVar83 + 0x36) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x46e);
          uVar64 = puVar79[0x474];
          *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x472);
          *(undefined8 *)(puVar83 + 0x3e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x458);
          *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x45c);
          *(undefined8 *)(puVar83 + 0x28) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x460);
          *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x464);
          *(undefined8 *)(puVar83 + 0x30) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x468);
          *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x46c);
          *(undefined8 *)(puVar83 + 0x38) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x470);
        }
        else if (puVar79[uVar59 * 0x6c + 3] == 3) {
          if (uVar65 != puVar79[0x4d1]) {
LAB_71024e29e4:
            *puVar83 = 0;
            *(undefined4 *)(param_1 + 0x3f2) = 0;
            break;
          }
          puVar83 = puVar79 + uVar59 * 0x6c;
          *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x43a);
          uVar89 = *(undefined8 *)(puVar79 + 0x43e);
          *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x442);
          *(undefined8 *)(puVar83 + 0x2e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x446);
          *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x44a);
          *(undefined8 *)(puVar83 + 0x36) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x44e);
          uVar64 = puVar79[0x454];
          *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x452);
          *(undefined8 *)(puVar83 + 0x3e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x438);
          *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x43c);
          *(undefined8 *)(puVar83 + 0x28) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x440);
          *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x444);
          *(undefined8 *)(puVar83 + 0x30) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x448);
          *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x44c);
          *(undefined8 *)(puVar83 + 0x38) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x450);
        }
        else {
          if (uVar65 != puVar79[0x4d3]) goto LAB_71024e29e4;
          puVar83 = puVar79 + uVar59 * 0x6c;
          *(undefined8 *)(puVar83 + 0x2a) = *(undefined8 *)(puVar79 + 0x49a);
          uVar89 = *(undefined8 *)(puVar79 + 0x49e);
          *(undefined8 *)(puVar83 + 0x32) = *(undefined8 *)(puVar79 + 0x4a2);
          *(undefined8 *)(puVar83 + 0x2e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x4a6);
          *(undefined8 *)(puVar83 + 0x3a) = *(undefined8 *)(puVar79 + 0x4aa);
          *(undefined8 *)(puVar83 + 0x36) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x4ae);
          uVar64 = puVar79[0x4b4];
          *(undefined8 *)(puVar83 + 0x42) = *(undefined8 *)(puVar79 + 0x4b2);
          *(undefined8 *)(puVar83 + 0x3e) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x498);
          *(undefined8 *)(puVar83 + 0x2c) = *(undefined8 *)(puVar79 + 0x49c);
          *(undefined8 *)(puVar83 + 0x28) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x4a0);
          *(undefined8 *)(puVar83 + 0x34) = *(undefined8 *)(puVar79 + 0x4a4);
          *(undefined8 *)(puVar83 + 0x30) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x4a8);
          *(undefined8 *)(puVar83 + 0x3c) = *(undefined8 *)(puVar79 + 0x4ac);
          *(undefined8 *)(puVar83 + 0x38) = uVar89;
          uVar89 = *(undefined8 *)(puVar79 + 0x4b0);
        }
        puVar83[0x44] = uVar64;
        *(undefined8 *)(puVar83 + 0x40) = uVar89;
        *(undefined8 *)(puVar83 + 0x4a) = DAT_71052301b8;
        uVar89 = DAT_71052301c8;
        *(undefined8 *)(puVar83 + 0x52) = DAT_71052301d8;
        *(undefined8 *)(puVar83 + 0x4e) = uVar89;
        uVar89 = DAT_71052301e8;
        *(undefined8 *)(puVar83 + 0x5a) = _DAT_71052301f8;
        *(undefined8 *)(puVar83 + 0x56) = uVar89;
        uVar64 = DAT_7105230220;
        uVar89 = DAT_7105230208;
        *(undefined8 *)(puVar83 + 0x62) = DAT_7105230218;
        *(undefined8 *)(puVar83 + 0x5e) = uVar89;
        uVar89 = DAT_71052301b0;
        *(undefined8 *)(puVar83 + 0x4c) = DAT_71052301c0;
        *(undefined8 *)(puVar83 + 0x48) = uVar89;
        uVar89 = DAT_71052301d0;
        *(undefined8 *)(puVar83 + 0x54) = DAT_71052301e0;
        *(undefined8 *)(puVar83 + 0x50) = uVar89;
        uVar89 = DAT_71052301f0;
        *(undefined8 *)(puVar83 + 0x5c) = DAT_7105230200;
        *(undefined8 *)(puVar83 + 0x58) = uVar89;
        uVar89 = DAT_7105230210;
        puVar83[100] = uVar64;
        *(undefined8 *)(puVar83 + 0x60) = uVar89;
        puVar79[uVar59 * 0x6c + 4] = 0;
        puVar79[uVar59 * 0x6c + 5] = (uint)(float)(int)((int)sVar37 - uVar53);
      }
    }
    *(undefined4 *)(param_1 + 0x3f2) = 0;
    break;
  case 0x85:
    *(undefined1 *)(param_1[3] + 0x452) = 1;
    break;
  case 0x86:
    *(undefined1 *)(param_1[3] + 0x452) = 0;
    break;
  case 0x87:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      *(undefined4 *)(lVar66 + 4) = 0;
LAB_71024e0140:
      *(undefined4 *)(lVar66 + 0x20) = 1;
      if ((uVar59 & 0xffffffffff) == 0) {
        *(undefined8 *)(lVar66 + 0x10) = 0;
        *(undefined8 *)(lVar66 + 0x18) = 0;
        *(undefined8 *)(lVar66 + 8) = 0;
      }
      else {
        *(undefined8 *)(lVar66 + 0x10) = 0;
        *(undefined8 *)(lVar66 + 0x18) = 0;
        *(ulong *)(lVar66 + 8) = uVar59;
      }
    }
    break;
  case 0x88:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      *(undefined4 *)(lVar66 + 4) = 1;
      goto LAB_71024e0140;
    }
    break;
  case 0x89:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 2;
LAB_71024e0138:
      *(undefined4 *)(lVar66 + 4) = uVar110;
      goto LAB_71024e0140;
    }
    break;
  case 0x8a:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 3;
      goto LAB_71024e0138;
    }
    break;
  case 0x8b:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 4;
      goto LAB_71024e0138;
    }
    break;
  case 0x8c:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 5;
      goto LAB_71024e0138;
    }
    break;
  case 0x8d:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 6;
      goto LAB_71024e0138;
    }
    break;
  case 0x8e:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 7;
      goto LAB_71024e0138;
    }
    break;
  case 0x8f:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 8;
      goto LAB_71024e0138;
    }
    break;
  case 0x90:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 9;
      goto LAB_71024e0138;
    }
    break;
  case 0x91:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 10;
      goto LAB_71024e0138;
    }
    break;
  case 0x92:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0xb;
      goto LAB_71024e0138;
    }
    break;
  case 0x93:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0xc;
      goto LAB_71024e0138;
    }
    break;
  case 0x94:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0xd;
      goto LAB_71024e0138;
    }
    break;
  case 0x95:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0xe;
      goto LAB_71024e0138;
    }
    break;
  case 0x96:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0xf;
      goto LAB_71024e0138;
    }
    break;
  case 0x97:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0x10;
      goto LAB_71024e0138;
    }
    break;
  case 0x98:
    lVar66 = *(long *)(param_1[1] + 8);
    uVar59 = param_1[0x2fe];
    if ((*(int *)(lVar66 + 4) == 0xffff) || (*(int *)(lVar66 + 0x20) < 1)) {
      uVar110 = 0x11;
      goto LAB_71024e0138;
    }
    break;
  case 0x99:
    FUN_710177a5c0(0x55);
    FUN_710176b770(0x55);
    lVar66 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x398);
    uVar59 = 0x1e510fec5f;
    goto LAB_71024df8d4;
  case 0x9a:
    FUN_710177a5c0(0x55);
    FUN_710176b770(0x55);
    lVar66 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x398);
    uVar59 = 0x1d87ceb2ec;
LAB_71024df8d4:
    uVar59 = FUN_710328cf90(lVar66,uVar59);
    FUN_71017981d0(uVar59);
    uVar59 = FUN_710328cf90(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x398),0x227a10344d);
    FUN_71017981d0(uVar59);
    **(undefined1 **)(param_1[1] + 8) = 1;
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(char *)(lVar66 + 0x28) == '\0') {
      *(undefined4 *)(lVar66 + 0x24) = 2;
      *(undefined1 *)(lVar66 + 0x28) = 1;
    }
    break;
  case 0x9b:
    uVar53 = *(uint *)(*DAT_710532a860 + 0x1c);
    if (2 < uVar53) goto LAB_71024e5790;
    puVar72 = *(undefined8 **)(*DAT_7105314510 + 0x158);
    pcVar69 = (char *)(*(long *)*puVar72 + (ulong)uVar53 * 0x3d700 + 0x3cc37);
    if (*pcVar69 == '\0') {
      lVar66 = *(long *)**(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x18);
      iVar63 = *(int *)(lVar66 + 0x18);
      iVar62 = 999999999;
      if (iVar63 + 1U < 999999999) {
        iVar62 = iVar63 + 1;
      }
      *(int *)(lVar66 + 0x18) = iVar62;
      pcVar69 = (char *)(*(long *)*puVar72 + (ulong)uVar53 * 0x3d700 + 0x3cc37);
    }
    *pcVar69 = '\x01';
    FUN_710177a5c0(0x54);
    FUN_710177a5c0(0x55);
    FUN_710176b770(0x55);
    FUN_710176b770(0x56);
    uVar59 = FUN_710328cf90(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x398),0x1ca368b868);
    FUN_71017981d0(uVar59);
    uVar59 = FUN_710328cf90(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x398),0x227a10344d);
    FUN_71017981d0(uVar59);
    **(undefined1 **)(param_1[1] + 8) = 1;
    lVar66 = *(long *)(param_1[1] + 8);
    if (*(char *)(lVar66 + 0x28) == '\0') {
      *(undefined4 *)(lVar66 + 0x24) = 2;
      *(undefined1 *)(lVar66 + 0x28) = 1;
    }
    uVar59 = FUN_71032b9e40(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x3c8),0x1da031c794);
    FUN_71017982a0(uVar59);
    break;
  case 0x9c:
    if ((uint)(int)(short)param_1[0x2fc] <= uVar53 + 1) {
      *(short *)(param_1 + 0x2fc) = (short)uVar53 + 2;
    }
    break;
  case 0x9d:
    lVar94 = *(long *)(param_1[0xc] + 8);
    lVar68 = *(long *)(DAT_710532f730 + 8);
    lVar93 = *(long *)(lVar68 + 0x168);
    lVar66 = *(long *)(lVar93 + 8);
    pcVar69 = *(char **)(lVar66 + 0x20);
    if ((*pcVar69 == '\f') && (iVar62 = *(int *)(pcVar69 + 1) + -1, 0 < *(int *)(pcVar69 + 1))) {
      iVar63 = 0;
      uVar59 = *(ulong *)(lVar66 + 0x48) & 0xffffffffff;
      pbVar81 = &DAT_7104742dbb;
      do {
        iVar2 = iVar62 + iVar63;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar79 = (uint *)(*(long *)(*(long *)(lVar66 + 0x18) + 0x28) + (long)*(int *)(pcVar69 + 5)
                          + (long)iVar2 * 8);
        uVar60 = *(ulong *)(*(long *)(*(long *)(lVar66 + 0x18) + 0x20) + (ulong)*puVar79 * 8);
        if (uVar60 == uVar59) {
          uVar53 = puVar79[1];
          if ((int)uVar53 < 0) goto LAB_71024e18b8;
          pbVar81 = (byte *)(pcVar69 + (int)uVar53);
          break;
        }
        iVar50 = iVar2 + -1;
        if (uVar60 <= uVar59) {
          iVar63 = iVar2 + 1;
          iVar50 = iVar62;
        }
        iVar62 = iVar50;
      } while (iVar63 <= iVar62);
    }
    else {
LAB_71024e18b8:
      pbVar81 = &DAT_7104742dbb;
    }
    puVar55 = (ulong *)&DAT_c1ffff0000000000;
    if ((*pbVar81 - 0xb < 2) && (uVar53 = *(uint *)(pbVar81 + 1), uVar53 != 0)) {
      uVar33 = *(uint *)(*DAT_710532a860 + 0x1c);
      puVar72 = *(undefined8 **)(*DAT_7105314510 + 0x158);
      uVar65 = 0;
      local_1d8 = (ulong *)&DAT_c1ffff0000000000;
      uVar64 = 1;
      do {
        puVar55 = (ulong *)FUN_7103263d20(lVar93,uVar64 - 1);
        bVar51 = FUN_71032648e0(lVar68 + 0x160,(ulong)puVar55);
        if (bVar51) {
          puVar56 = FUN_71032631a0(lVar93,0x143829f67e);
          if ((((((ulong)puVar55 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar55 & 0xffffffffff) != 0)) &&
              (((ulong)puVar56 & 0xff00000000000000) == 0xc100000000000000)) &&
             (((ulong)puVar56 & 0xffffffffff) != 0)) {
            if ((((ulong)puVar56 ^ (ulong)puVar55) & 0xffffffffff) == 0) goto LAB_71024e19dc;
          }
          else if ((((ulong)puVar56 & 0xffffffffff) != 0 &&
                   ((ulong)puVar56 & 0xff00000000000000) == 0xc100000000000000) ==
                   (((ulong)puVar55 & 0xff00000000000000) == 0xc100000000000000 &&
                   ((ulong)puVar55 & 0xffffffffff) != 0)) goto LAB_71024e19dc;
        }
        else {
LAB_71024e19dc:
          uVar54 = FUN_71032662f0(lVar93,(ulong)puVar55);
          if (((uVar54 & 1) != 0) &&
             (uVar54 = FUN_7103264d20(lVar93,(ulong)puVar55), (uVar54 & 1) != 0)) {
            param_3 = (long *********)0x0;
            uVar59 = FUN_7101797560((undefined1 *)puVar55,0,0);
            if ((uVar59 & 1) != 0) {
              uVar54 = 1;
              if ((((ulong)puVar55 & 0xff00000000000000) == 0xc100000000000000) &&
                 (((ulong)puVar55 & 0xffffffffff) != 0)) {
                plVar101 = (long *)*puVar72;
                uVar59 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                        (undefined1 *)puVar55);
                uVar54 = (uint)uVar59;
                if (uVar54 != 0xffffffff) {
                  if (2 < uVar33) goto LAB_71024e5790;
                  if (uVar54 < 0x80) {
                    bVar51 = (*(uint *)(*plVar101 + (ulong)uVar33 * 0x3d700 +
                                        (ulong)(uVar54 >> 5) * 4 + 0x3d6e8) &
                             1 << (ulong)(uVar54 & 0x1f)) == 0;
                    uVar54 = (uint)bVar51;
                    if (!bVar51) {
                      puVar55 = local_1d8;
                    }
                    goto LAB_71024e1ab0;
                  }
                }
                uVar54 = 1;
              }
LAB_71024e1ab0:
              uVar65 = uVar65 + uVar54;
              local_1d8 = puVar55;
            }
          }
          puVar55 = (ulong *)&DAT_c1ffff0000000000;
          if (1 < uVar65) break;
        }
        puVar55 = local_1d8;
        if (uVar53 <= uVar64) break;
        lVar93 = *(long *)(lVar68 + 0x168);
        uVar64 = uVar64 + 1;
      } while( true );
    }
    lVar66 = *(long *)(*(long *)(lVar94 + 0x558) + 0x80);
    if ((((ulong)puVar55 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar55 & 0xffffffffff) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x710429232d);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x710424fb2b);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x71043addb7);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x71042c5477);
      lVar93 = *(long *)(DAT_710532f730 + 8);
      uVar53 = FUN_7103263540(*(long *)(lVar93 + 0x168),(ulong)puVar55,0,param_4,param_5,param_6,
                              param_7,param_8);
      FUN_7103262310((uint *)&local_130,*(long *)(lVar93 + 0x168),(ulong)puVar55);
      pppppppplVar58 = &ppppppplStack_128;
      FUN_71003a4ca0((uint *)&local_d0,"nam_chr1_%02d_%s",(ulong)uVar53,pppppppplVar58,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_150,lVar66 + 0x30,(long ****)"set_txt_02",pppppppplVar58,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      param_4 = (undefined1 (*) [16])acStack_c8;
      uVar89 = 1;
      FUN_710377a280((long)&local_150,(byte *)"cam_map_add_fighter_single",1);
      FUN_7103776640(&local_168,lVar66 + 0x30,(byte ****)"set_parts_btn_00",uVar89,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_130,(long)&local_168,(long ****)"set_txt_00",uVar89,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_130,"pop_btn_ok",uVar89,param_4,param_5,param_6,param_7,param_8);
      ppppppplVar73 = ppppppplStack_128;
      local_130 = (long *******)&PTR_FUN_710523d9a8;
      ppppppplStack_128 = (long *******)0x0;
      if (ppppppplVar73 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar73);
      }
      (**(code **)(**(long **)(lVar66 + 0x1c8) + 0x60))(*(long **)(lVar66 + 0x1c8),1);
      uVar89 = 0;
      FUN_7103771a80((long *)(lVar66 + 0x1c8),10,0);
      FUN_7103314bc0(0xd9ffff174066d45c,extraout_x1_09,uVar89,(byte ****)param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      param_3 = (long *********)0x186ee7cc4f;
      FUN_71024d1440((undefined4 *)&local_130,*DAT_710532a860,0x186ee7cc4f);
      pppppppplVar58 = local_160;
      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
      if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_118 == DAT_7106dd53ac)) {
        local_120 = local_120 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(local_120,0x10);
          if (bVar51) {
            *(int *)local_120 = *(int *)local_120 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
      }
      local_120 = (long *******)0x0;
      local_110 = local_110 & 0xffffffffffffff00;
      local_168 = &PTR_FUN_710523d988;
      local_160 = (long ********)0x0;
      if (pppppppplVar58 != (long ********)0x0) {
        ppppppplVar73 = pppppppplVar58[3];
        pppppppplVar58[2] = (long *******)&PTR_FUN_710523d9a8;
        pppppppplVar58[3] = (long *******)0x0;
        if (ppppppplVar73 != (long *******)0x0) {
          FUN_710392eb40((ulong)ppppppplVar73);
        }
        FUN_710392eb40((ulong)pppppppplVar58);
      }
      ppuVar43 = ppuStack_148;
      local_150 = &PTR_FUN_710523d9a8;
      ppuStack_148 = (undefined **)0x0;
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x710429232d);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x710424fb2b);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x71043addb7);
      FUN_7103778300(0x3f800000,*(long *)(lVar66 + 0x38),0x71042c5477);
      FUN_7103776910(&local_d0,lVar66 + 0x30,(long ****)"set_txt_02",param_3,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_d0,"cam_map_add_fighter_plural",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_150,lVar66 + 0x30,(byte ****)"set_parts_btn_00",param_3,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_130,(long)&local_150,(long ****)"set_txt_00",param_3,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_130,"pop_btn_ok",param_3,param_4,param_5,param_6,param_7,param_8);
      ppppppplVar73 = ppppppplStack_128;
      local_130 = (long *******)&PTR_FUN_710523d9a8;
      ppppppplStack_128 = (long *******)0x0;
      if (ppppppplVar73 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar73);
      }
      (**(code **)(**(long **)(lVar66 + 0x1c8) + 0x60))(*(long **)(lVar66 + 0x1c8),1);
      uVar89 = 0;
      FUN_7103771a80((long *)(lVar66 + 0x1c8),10,0);
      FUN_7103314bc0(0xd9ffff174066d45c,extraout_x1_10,uVar89,(byte ****)param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      param_3 = (long *********)0x186ee7cc4f;
      FUN_71024d1440((undefined4 *)&local_130,*DAT_710532a860,0x186ee7cc4f);
      ppuVar43 = ppuStack_148;
      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
      if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_118 == DAT_7106dd53ac)) {
        local_120 = local_120 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(local_120,0x10);
          if (bVar51) {
            *(int *)local_120 = *(int *)local_120 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
      }
      local_120 = (long *******)0x0;
      local_110 = local_110 & 0xffffffffffffff00;
      local_150 = &PTR_FUN_710523d988;
      ppuStack_148 = (undefined **)0x0;
      if (ppuVar43 != (undefined **)0x0) {
        puVar57 = ppuVar43[3];
        ppuVar43[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar43[3] = (undefined *)0x0;
        if (puVar57 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar57);
        }
        FUN_710392eb40((ulong)ppuVar43);
      }
      ppuVar43 = (undefined **)CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
      local_d0._0_4_ = 0x523d9a8;
      local_d0._4_4_ = 0x71;
      acStack_c8[0] = '\0';
      acStack_c8[1] = '\0';
      acStack_c8[2] = '\0';
      acStack_c8[3] = '\0';
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = '\0';
      acStack_c8[7] = '\0';
    }
    if (ppuVar43 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar43);
    }
    *(undefined1 *)(lVar94 + 0x5dd) = 1;
    lVar94 = *(long *)(DAT_710532f730 + 8);
    lVar93 = *(long *)(lVar94 + 0x168);
    lVar66 = *(long *)(lVar93 + 8);
    pcVar69 = *(char **)(lVar66 + 0x20);
    if ((*pcVar69 == '\f') && (iVar62 = *(int *)(pcVar69 + 1) + -1, 0 < *(int *)(pcVar69 + 1))) {
      iVar63 = 0;
      uVar59 = *(ulong *)(lVar66 + 0x48) & 0xffffffffff;
      pbVar81 = &DAT_7104742dbb;
      do {
        iVar2 = iVar62 + iVar63;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar79 = (uint *)(*(long *)(*(long *)(lVar66 + 0x18) + 0x28) + (long)*(int *)(pcVar69 + 5)
                          + (long)iVar2 * 8);
        uVar60 = *(ulong *)(*(long *)(*(long *)(lVar66 + 0x18) + 0x20) + (ulong)*puVar79 * 8);
        if (uVar60 == uVar59) {
          uVar53 = puVar79[1];
          if ((int)uVar53 < 0) goto LAB_71024e1f70;
          pbVar81 = (byte *)(pcVar69 + (int)uVar53);
          break;
        }
        iVar50 = iVar2 + -1;
        if (uVar60 <= uVar59) {
          iVar63 = iVar2 + 1;
          iVar50 = iVar62;
        }
        iVar62 = iVar50;
      } while (iVar63 <= iVar62);
    }
    else {
LAB_71024e1f70:
      pbVar81 = &DAT_7104742dbb;
    }
    if ((*pbVar81 - 0xb < 2) && (iVar62 = *(int *)(pbVar81 + 1), iVar62 != 0)) {
      uVar64 = *(uint *)(*DAT_710532a860 + 0x1c);
      puVar72 = *(undefined8 **)(*DAT_7105314510 + 0x158);
      uVar53 = 0;
      do {
        puVar56 = FUN_7103263d20(lVar93,uVar53);
        uVar65 = FUN_71032662f0(lVar93,(ulong)puVar56);
        if (((uVar65 & 1) != 0) &&
           (uVar65 = FUN_7103264d20(lVar93,(ulong)puVar56), (uVar65 & 1) != 0)) {
          param_3 = (long *********)0x0;
          uVar59 = FUN_7101797560(puVar56,0,0);
          if (((uVar59 & 1) != 0) &&
             ((((ulong)puVar56 & 0xff00000000000000) == 0xc100000000000000 &&
              (((ulong)puVar56 & 0xffffffffff) != 0)))) {
            plVar101 = (long *)*puVar72;
            uVar59 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar56);
            uVar65 = (uint)uVar59;
            if (uVar65 != 0xffffffff) {
              if (2 < uVar64) goto LAB_71024e5790;
              if ((uVar65 < 0x80) &&
                 ((*(uint *)(*plVar101 + (ulong)uVar64 * 0x3d700 + (ulong)(uVar65 >> 5) * 4 +
                            0x3d6e8) & 1 << (ulong)(uVar65 & 0x1f)) != 0)) goto LAB_71024e20e0;
            }
            plVar101 = (long *)*puVar72;
            uVar59 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar56);
            if (2 < uVar64) goto LAB_71024e5790;
            uVar65 = (uint)uVar59;
            if (uVar65 < 0x80) {
              lVar66 = *plVar101 + (ulong)uVar64 * 0x3d700 + (ulong)(uVar65 >> 5) * 4;
              *(uint *)(lVar66 + 0x3d6e8) =
                   *(uint *)(lVar66 + 0x3d6e8) | 1 << (ulong)(uVar65 & 0x1f);
            }
          }
        }
LAB_71024e20e0:
        if (iVar62 - 1U == uVar53) break;
        lVar93 = *(long *)(lVar94 + 0x168);
        uVar53 = uVar53 + 1;
      } while( true );
    }
  }
switchD_71024de634_caseD_b:
  if (((int)param_1[0x305] == (int)*(short *)((long)param_1 + 0x17fc)) && ((int)param_1[0x300] != 0)
     ) {
    *(int *)(param_1[3] + 0x438) = (int)param_1[0x300];
    if (-1 < *(short *)((long)param_1 + 0x1804)) {
      *(float *)(*(long *)(param_1[3] + 0x428) + 0x219c) =
           (float)(int)*(short *)((long)param_1 + 0x1804);
    }
  }
  iVar62 = (int)param_1[0x305];
  if (((iVar62 == *(short *)((long)param_1 + 0x1806)) && (-1 < (short)param_1[0x301])) &&
     ((*(uint *)(lVar67 + 0x248) & 0xfffffffe) != 2)) {
    *(undefined4 *)(lVar67 + 0x238) = 0;
    *(undefined4 *)(lVar67 + 0x248) = 2;
    iVar62 = (int)param_1[0x305];
  }
  if ((iVar62 == *(short *)((long)param_1 + 0x180a)) && ((param_1[0x302] & 0xffffffffffU) != 0)) {
    if ((*local_1b0 & 0xffffffffff) == 0) {
LAB_71024e2e30:
      lVar66 = 0;
    }
    else {
      local_120 = (long *******)0x0;
      local_118 = (long *******)0x87650000000000;
      local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x314]);
      ppppppplVar73 = (long *******)param_1[0x316];
      if (ppppppplVar73 != (long *******)0x0) {
        if (DAT_7106dd53ac != 0) {
          local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
        }
        ppppppplVar30 = ppppppplVar73 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
          if (bVar51) {
            *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
            cVar40 = ExclusiveMonitorsStatus();
          }
          local_120 = ppppppplVar73;
        } while (cVar40 != '\0');
      }
      local_110 = local_110 & 0xffffffffffffff00;
      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
      local_108 = (long *******)param_1[0x319];
      local_100 = (long *******)param_1[0x31a];
      local_f8 = param_1[0x31b];
      uVar53 = FUN_71024d15d0((long)&local_130);
      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
      if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)local_118 == DAT_7106dd53ac)) {
        ppppppplVar73 = local_120 + 7;
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
          if (bVar51) {
            *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
      }
      if ((uVar53 & 1) == 0) goto LAB_71024e2e30;
      local_1b0 = puVar74;
      if ((*puVar74 & 0xffffffffff) == 0) {
        lVar66 = 1;
      }
      else {
        local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x31e]);
        local_120 = (long *******)0x0;
        local_118 = (long *******)0x87650000000000;
        ppppppplVar73 = (long *******)param_1[800];
        if (ppppppplVar73 != (long *******)0x0) {
          if (DAT_7106dd53ac != 0) {
            local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
          }
          ppppppplVar30 = ppppppplVar73 + 7;
          do {
            cVar40 = '\x01';
            bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
            if (bVar51) {
              *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
              cVar40 = ExclusiveMonitorsStatus();
            }
            local_120 = ppppppplVar73;
          } while (cVar40 != '\0');
        }
        local_110 = local_110 & 0xffffffffffffff00;
        ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
        local_108 = (long *******)param_1[0x323];
        local_100 = (long *******)param_1[0x324];
        local_f8 = param_1[0x325];
        uVar53 = FUN_71024d15d0((long)&local_130);
        ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
        if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
           ((int)local_118 == DAT_7106dd53ac)) {
          ppppppplVar73 = local_120 + 7;
          do {
            cVar40 = '\x01';
            bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
            if (bVar51) {
              *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
        }
        if ((uVar53 & 1) == 0) {
          lVar66 = 1;
        }
        else {
          local_1b0 = puVar86;
          if ((*puVar86 & 0xffffffffff) == 0) {
            lVar66 = 2;
          }
          else {
            local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x328]);
            local_120 = (long *******)0x0;
            local_118 = (long *******)0x87650000000000;
            ppppppplVar73 = (long *******)param_1[0x32a];
            if (ppppppplVar73 != (long *******)0x0) {
              if (DAT_7106dd53ac != 0) {
                local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
              }
              ppppppplVar30 = ppppppplVar73 + 7;
              do {
                cVar40 = '\x01';
                bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                if (bVar51) {
                  *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                  cVar40 = ExclusiveMonitorsStatus();
                }
                local_120 = ppppppplVar73;
              } while (cVar40 != '\0');
            }
            local_110 = local_110 & 0xffffffffffffff00;
            ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
            local_108 = (long *******)param_1[0x32d];
            local_100 = (long *******)param_1[0x32e];
            local_f8 = param_1[0x32f];
            uVar53 = FUN_71024d15d0((long)&local_130);
            ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
            if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_118 == DAT_7106dd53ac)) {
              ppppppplVar73 = local_120 + 7;
              do {
                cVar40 = '\x01';
                bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                if (bVar51) {
                  *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                  cVar40 = ExclusiveMonitorsStatus();
                }
              } while (cVar40 != '\0');
            }
            if ((uVar53 & 1) == 0) {
              lVar66 = 2;
            }
            else {
              local_1b0 = puVar16;
              if ((*puVar16 & 0xffffffffff) == 0) {
                lVar66 = 3;
              }
              else {
                local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x332]);
                local_120 = (long *******)0x0;
                local_118 = (long *******)0x87650000000000;
                ppppppplVar73 = (long *******)param_1[0x334];
                if (ppppppplVar73 != (long *******)0x0) {
                  if (DAT_7106dd53ac != 0) {
                    local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                  }
                  ppppppplVar30 = ppppppplVar73 + 7;
                  do {
                    cVar40 = '\x01';
                    bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                    if (bVar51) {
                      *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                      cVar40 = ExclusiveMonitorsStatus();
                    }
                    local_120 = ppppppplVar73;
                  } while (cVar40 != '\0');
                }
                local_110 = local_110 & 0xffffffffffffff00;
                ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                local_108 = (long *******)param_1[0x337];
                local_100 = (long *******)param_1[0x338];
                local_f8 = param_1[0x339];
                uVar53 = FUN_71024d15d0((long)&local_130);
                ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
                if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                   ((int)local_118 == DAT_7106dd53ac)) {
                  ppppppplVar73 = local_120 + 7;
                  do {
                    cVar40 = '\x01';
                    bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                    if (bVar51) {
                      *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                      cVar40 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar40 != '\0');
                }
                if ((uVar53 & 1) == 0) {
                  lVar66 = 3;
                }
                else {
                  if ((*puVar17 & 0xffffffffff) != 0) {
                    local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x33c]);
                    local_120 = (long *******)0x0;
                    local_118 = (long *******)0x87650000000000;
                    ppppppplVar73 = (long *******)param_1[0x33e];
                    if (ppppppplVar73 != (long *******)0x0) {
                      if (DAT_7106dd53ac != 0) {
                        local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                      }
                      ppppppplVar30 = ppppppplVar73 + 7;
                      do {
                        cVar40 = '\x01';
                        bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                        if (bVar51) {
                          *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                          cVar40 = ExclusiveMonitorsStatus();
                        }
                        local_120 = ppppppplVar73;
                      } while (cVar40 != '\0');
                    }
                    local_110 = local_110 & 0xffffffffffffff00;
                    ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                    local_108 = (long *******)param_1[0x341];
                    local_100 = (long *******)param_1[0x342];
                    local_f8 = param_1[0x343];
                    uVar53 = FUN_71024d15d0((long)&local_130);
                    ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
                    if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                       ((int)local_118 == DAT_7106dd53ac)) {
                      ppppppplVar73 = local_120 + 7;
                      do {
                        cVar40 = '\x01';
                        bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                        if (bVar51) {
                          *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                          cVar40 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar40 != '\0');
                    }
                    if ((uVar53 & 1) != 0) {
                      if ((*puVar78 & 0xffffffffff) == 0) {
                        lVar66 = 5;
                        local_1b0 = puVar78;
                        goto LAB_71024e2e38;
                      }
                      local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x346]);
                      local_120 = (long *******)0x0;
                      local_118 = (long *******)0x87650000000000;
                      ppppppplVar73 = (long *******)param_1[0x348];
                      if (ppppppplVar73 != (long *******)0x0) {
                        if (DAT_7106dd53ac != 0) {
                          local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                        }
                        ppppppplVar30 = ppppppplVar73 + 7;
                        do {
                          cVar40 = '\x01';
                          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                          if (bVar51) {
                            *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                            cVar40 = ExclusiveMonitorsStatus();
                          }
                          local_120 = ppppppplVar73;
                        } while (cVar40 != '\0');
                      }
                      local_110 = local_110 & 0xffffffffffffff00;
                      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                      local_108 = (long *******)param_1[0x34b];
                      local_100 = (long *******)param_1[0x34c];
                      local_f8 = param_1[0x34d];
                      uVar53 = FUN_71024d15d0((long)&local_130);
                      if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                         ((int)local_118 == DAT_7106dd53ac)) {
                        ppppppplVar73 = local_120 + 7;
                        do {
                          cVar40 = '\x01';
                          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                          if (bVar51) {
                            *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                            cVar40 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar40 != '\0');
                      }
                      if ((uVar53 & 1) == 0) {
                        lVar66 = 5;
                      }
                      else {
                        if ((*puVar18 & 0xffffffffff) != 0) {
                          local_130 = (long *******)CONCAT44(local_130._4_4_,(int)param_1[0x350]);
                          local_120 = (long *******)0x0;
                          local_118 = (long *******)0x87650000000000;
                          ppppppplVar73 = (long *******)param_1[0x352];
                          if (ppppppplVar73 != (long *******)0x0) {
                            if (DAT_7106dd53ac != 0) {
                              local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                            }
                            ppppppplVar30 = ppppppplVar73 + 7;
                            do {
                              cVar40 = '\x01';
                              bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                              if (bVar51) {
                                *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                                cVar40 = ExclusiveMonitorsStatus();
                              }
                              local_120 = ppppppplVar73;
                            } while (cVar40 != '\0');
                          }
                          local_110 = local_110 & 0xffffffffffffff00;
                          ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                          local_108 = (long *******)param_1[0x355];
                          local_100 = (long *******)param_1[0x356];
                          local_f8 = param_1[0x357];
                          uVar53 = FUN_71024d15d0((long)&local_130);
                          if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                             ((int)local_118 == DAT_7106dd53ac)) {
                            ppppppplVar73 = local_120 + 7;
                            do {
                              cVar40 = '\x01';
                              bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                              if (bVar51) {
                                *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                                cVar40 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar40 != '\0');
                          }
                          if ((uVar53 & 1) != 0) {
                            if ((*puVar19 & 0xffffffffff) != 0) {
                              local_130 = (long *******)
                                          CONCAT44(local_130._4_4_,(int)param_1[0x35a]);
                              local_120 = (long *******)0x0;
                              local_118 = (long *******)0x87650000000000;
                              ppppppplVar73 = (long *******)param_1[0x35c];
                              if (ppppppplVar73 != (long *******)0x0) {
                                if (DAT_7106dd53ac != 0) {
                                  local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                                }
                                ppppppplVar30 = ppppppplVar73 + 7;
                                do {
                                  cVar40 = '\x01';
                                  bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                                  if (bVar51) {
                                    *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                                    cVar40 = ExclusiveMonitorsStatus();
                                  }
                                  local_120 = ppppppplVar73;
                                } while (cVar40 != '\0');
                              }
                              local_110 = local_110 & 0xffffffffffffff00;
                              ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                              local_108 = (long *******)param_1[0x35f];
                              local_100 = (long *******)param_1[0x360];
                              local_f8 = param_1[0x361];
                              uVar53 = FUN_71024d15d0((long)&local_130);
                              if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01'))
                                 && ((int)local_118 == DAT_7106dd53ac)) {
                                ppppppplVar73 = local_120 + 7;
                                do {
                                  cVar40 = '\x01';
                                  bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                                  if (bVar51) {
                                    *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                                    cVar40 = ExclusiveMonitorsStatus();
                                  }
                                } while (cVar40 != '\0');
                              }
                              if ((uVar53 & 1) != 0) {
                                if ((*puVar20 & 0xffffffffff) != 0) {
                                  local_130 = (long *******)
                                              CONCAT44(local_130._4_4_,(int)param_1[0x364]);
                                  local_120 = (long *******)0x0;
                                  local_118 = (long *******)0x87650000000000;
                                  ppppppplVar73 = (long *******)param_1[0x366];
                                  if (ppppppplVar73 != (long *******)0x0) {
                                    if (DAT_7106dd53ac != 0) {
                                      local_118 = (long *******)CONCAT44(0x876500,DAT_7106dd53ac);
                                    }
                                    ppppppplVar30 = ppppppplVar73 + 7;
                                    do {
                                      cVar40 = '\x01';
                                      bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                                      if (bVar51) {
                                        *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                                        cVar40 = ExclusiveMonitorsStatus();
                                      }
                                      local_120 = ppppppplVar73;
                                    } while (cVar40 != '\0');
                                  }
                                  local_110 = local_110 & 0xffffffffffffff00;
                                  ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                                  local_108 = (long *******)param_1[0x369];
                                  local_100 = (long *******)param_1[0x36a];
                                  local_f8 = param_1[0x36b];
                                  uVar53 = FUN_71024d15d0((long)&local_130);
                                  if (((local_120 != (long *******)0x0) &&
                                      (DAT_7106dd53a8 == '\x01')) &&
                                     ((int)local_118 == DAT_7106dd53ac)) {
                                    ppppppplVar73 = local_120 + 7;
                                    do {
                                      cVar40 = '\x01';
                                      bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                                      if (bVar51) {
                                        *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                                        cVar40 = ExclusiveMonitorsStatus();
                                      }
                                    } while (cVar40 != '\0');
                                  }
                                  if ((uVar53 & 1) != 0) {
                                    if ((*puVar21 & 0xffffffffff) != 0) {
                                      local_130 = (long *******)
                                                  CONCAT44(local_130._4_4_,(int)param_1[0x36e]);
                                      local_120 = (long *******)0x0;
                                      local_118 = (long *******)0x87650000000000;
                                      ppppppplVar73 = (long *******)param_1[0x370];
                                      if (ppppppplVar73 != (long *******)0x0) {
                                        if (DAT_7106dd53ac != 0) {
                                          local_118 = (long *******)
                                                      CONCAT44(0x876500,DAT_7106dd53ac);
                                        }
                                        ppppppplVar30 = ppppppplVar73 + 7;
                                        do {
                                          cVar40 = '\x01';
                                          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
                                          if (bVar51) {
                                            *(int *)ppppppplVar30 = *(int *)ppppppplVar30 + 1;
                                            cVar40 = ExclusiveMonitorsStatus();
                                          }
                                          local_120 = ppppppplVar73;
                                        } while (cVar40 != '\0');
                                      }
                                      local_110 = local_110 & 0xffffffffffffff00;
                                      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d30;
                                      local_108 = (long *******)param_1[0x373];
                                      local_100 = (long *******)param_1[0x374];
                                      local_f8 = param_1[0x375];
                                      uVar53 = FUN_71024d15d0((long)&local_130);
                                      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
                                      if (((local_120 != (long *******)0x0) &&
                                          (DAT_7106dd53a8 == '\x01')) &&
                                         ((int)local_118 == DAT_7106dd53ac)) {
                                        ppppppplVar73 = local_120 + 7;
                                        do {
                                          cVar40 = '\x01';
                                          bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
                                          if (bVar51) {
                                            *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
                                            cVar40 = ExclusiveMonitorsStatus();
                                          }
                                        } while (cVar40 != '\0');
                                      }
                                      if ((uVar53 & 1) != 0) goto LAB_71024e304c;
                                      lVar66 = 9;
                                      local_1b0 = puVar21;
                                      goto LAB_71024e2e38;
                                    }
                                    lVar66 = 9;
                                    puVar78 = puVar21;
                                    goto LAB_71024e52d0;
                                  }
                                }
                                lVar66 = 8;
                                puVar78 = puVar20;
                                goto LAB_71024e52d0;
                              }
                            }
                            lVar66 = 7;
                            puVar78 = puVar19;
                            goto LAB_71024e52d0;
                          }
                        }
                        lVar66 = 6;
                        puVar78 = puVar18;
                      }
LAB_71024e52d0:
                      ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
                      local_1b0 = puVar78;
                      goto LAB_71024e2e38;
                    }
                  }
                  ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
                  lVar66 = 4;
                  local_1b0 = puVar17;
                }
              }
            }
          }
        }
      }
    }
LAB_71024e2e38:
    param_3 = (long *********)param_1[0x302];
    uVar38 = *(ushort *)((long)param_1 + 0x180a);
    uVar39 = *(ushort *)((long)param_1 + 0x180c);
    FUN_71024db230(local_1b0);
    *local_1b0 = (ulong)param_3;
    FUN_71024d1440((undefined4 *)&local_130,*DAT_710532a860,(ulong)param_3);
    *(undefined4 *)(param_1 + lVar66 * 10 + 0x314) = local_130._0_4_;
    if (local_120 == (long *******)0x0) {
      if (((param_1[lVar66 * 10 + 0x316] != 0) && (DAT_7106dd53a8 == '\x01')) &&
         ((int)param_1[lVar66 * 10 + 0x317] == DAT_7106dd53ac)) {
        piVar85 = (int *)(param_1[lVar66 * 10 + 0x316] + 0x38);
        do {
          cVar40 = '\x01';
          bVar51 = (bool)ExclusiveMonitorPass(piVar85,0x10);
          if (bVar51) {
            *piVar85 = *piVar85 + -1;
            cVar40 = ExclusiveMonitorsStatus();
          }
        } while (cVar40 != '\0');
      }
      param_1[lVar66 * 10 + 0x316] = 0;
      plVar101 = param_1 + lVar66 * 10 + 0x318;
LAB_71024e2fc0:
      *(undefined1 *)plVar101 = 0;
    }
    else if (*(int *)((long)param_1 + lVar66 * 0x50 + 0x18bc) == 0x876500) {
      if ((int)param_1[lVar66 * 10 + 0x317] == DAT_7106dd53ac) {
        puVar74 = (ulong *)(param_1 + lVar66 * 10 + 0x316);
        if ((param_1[lVar66 * 10 + 0x316] != 0) && (DAT_7106dd53a8 == '\x01')) {
          piVar85 = (int *)(param_1[lVar66 * 10 + 0x316] + 0x38);
          do {
            cVar40 = '\x01';
            bVar51 = (bool)ExclusiveMonitorPass(piVar85,0x10);
            if (bVar51) {
              *piVar85 = *piVar85 + -1;
              cVar40 = ExclusiveMonitorsStatus();
            }
          } while (cVar40 != '\0');
        }
        plVar101 = param_1 + lVar66 * 10 + 0x318;
        *puVar74 = 0;
        *(undefined1 *)plVar101 = 0;
      }
      else {
        *(int *)(param_1 + lVar66 * 10 + 0x317) = DAT_7106dd53ac;
        puVar74 = (ulong *)(param_1 + lVar66 * 10 + 0x316);
        plVar101 = param_1 + lVar66 * 10 + 0x318;
      }
      *puVar74 = (ulong)local_120;
      ppppppplVar73 = local_120 + 7;
      do {
        cVar40 = '\x01';
        bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
        if (bVar51) {
          *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + 1;
          cVar40 = ExclusiveMonitorsStatus();
        }
      } while (cVar40 != '\0');
      goto LAB_71024e2fc0;
    }
    param_1[lVar66 * 10 + 0x31b] = local_f8;
    param_1[lVar66 * 10 + 0x31a] = (long)local_100;
    param_1[lVar66 * 10 + 0x319] = (long)local_108;
    ppppppplStack_128 = (long *******)&PTR_FUN_7104f73d50;
    if (((local_120 != (long *******)0x0) && (DAT_7106dd53a8 == '\x01')) &&
       ((int)local_118 == DAT_7106dd53ac)) {
      ppppppplVar73 = local_120 + 7;
      do {
        cVar40 = '\x01';
        bVar51 = (bool)ExclusiveMonitorPass(ppppppplVar73,0x10);
        if (bVar51) {
          *(int *)ppppppplVar73 = *(int *)ppppppplVar73 + -1;
          cVar40 = ExclusiveMonitorsStatus();
        }
      } while (cVar40 != '\0');
    }
    if (uVar38 < uVar39) {
      *(int *)(param_1 + lVar66 * 10 + 0x31c) = (int)(short)uVar39 - (int)(short)uVar38;
    }
  }
LAB_71024e304c:
  if ((((int)param_1[0x305] == (int)(short)param_1[0x303]) &&
      ((param_1[0x304] & 0xffffffffffU) != 0)) &&
     (((*puVar102 == 0 ||
       (((((puVar102 = puVar7, *puVar7 == 0 || (puVar102 = puVar8, *puVar8 == 0)) ||
          (puVar102 = puVar9, *puVar9 == 0)) ||
         ((puVar102 = puVar10, *puVar10 == 0 || (puVar102 = puVar11, *puVar11 == 0)))) ||
        (puVar102 = puVar12, *puVar12 == 0)))) ||
      (((puVar102 = puVar13, *puVar13 == 0 || (puVar102 = puVar14, *puVar14 == 0)) ||
       (puVar102 = puVar15, *puVar15 == 0)))))) {
    if (*(char *)(*DAT_710532a860 + 0x5f3d7) == '\0') {
      acStack_c8[0] = '\0';
      acStack_c8[1] = '\0';
      acStack_c8[2] = '\0';
      acStack_c8[3] = '\0';
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = '\0';
      acStack_c8[7] = '\0';
      local_d0._0_4_ = 0;
      local_d0._4_4_ = 0;
      param_8 = (long ***)&DAT_ffffffff;
      param_3 = (long *********)0x1800000;
      ppppppplStack_128 = (long *******)0x0;
      local_130 = (long *******)0x0;
      param_4 = (undefined1 (*) [16])&local_130;
      ppuStack_148 = (undefined **)&DAT_3f800000;
      local_150 = (undefined **)&DAT_3f8000003f800000;
      param_5 = (undefined1 (*) [16])&local_d0;
      param_6 = (undefined1 (*) [16])&local_150;
      param_7 = (long ***)0x0;
      uVar53 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,param_1[0x304],
                              0x1800000,param_4,param_5,param_6,0,-1,0);
      *puVar102 = uVar53;
      if ((uVar53 != 0) && (-1 < (int)uVar53)) {
        lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
        uVar59 = (ulong)(uVar53 >> 0x18);
        lVar93 = lVar66 + uVar59 * 0x300;
        if ((*(uint *)(lVar93 + 4) == uVar53) && (lVar93 != 0)) {
          pauVar1 = (undefined1 (*) [12])(lVar67 + 0xa0);
          uVar110 = (undefined4)((ulong)*(undefined8 *)(lVar67 + 0xa8) >> 0x20);
          uVar89 = *(undefined8 *)*pauVar1;
          fVar108 = *(float *)(lVar67 + 0xb0);
          fVar105 = *(float *)(*DAT_710532a868 + 0x104);
          fVar107 = *(float *)(*DAT_710532a868 + (ulong)*(uint *)(*DAT_710532a860 + 0x78) * 0x138 +
                              0x51c);
          if (*(char *)(lVar66 + uVar59 * 0x300 + 0x2d6) == '\0') {
            auVar41._12_4_ = uVar110;
            auVar41._0_12_ = *pauVar1;
            auVar42._12_4_ = uVar110;
            auVar42._0_12_ = *pauVar1;
            auVar111 = NEON_ext(auVar41,auVar42,8,1);
            lVar67 = lVar66 + uVar59 * 0x300;
            *(ulong *)(lVar67 + 0x128) = (ulong)auVar111._0_4_;
            *(undefined8 *)(lVar67 + 0x120) = uVar89;
            *(undefined1 *)(lVar67 + 0x2da) = 1;
          }
          else {
            lVar93 = lVar66 + uVar59 * 0x300;
            *(ulong *)(lVar93 + 0xf8) =
                 CONCAT44(*(undefined4 *)(lVar93 + 0xfc),(int)*(undefined8 *)(lVar67 + 0xa8));
            *(undefined8 *)(lVar93 + 0xf0) = uVar89;
          }
          if (*(long *)(lVar66 + uVar59 * 0x300 + 0x58) == 0) {
            lVar66 = lVar66 + uVar59 * 0x300;
            *(undefined8 *)(lVar66 + 0x130) = 0;
            *(undefined8 *)(lVar66 + 0x138) = 0;
          }
          lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
          lVar67 = lVar66 + uVar59 * 0x300;
          uVar64 = *(uint *)(lVar67 + 4);
          if ((lVar67 != 0) && (uVar64 == uVar53)) {
            lVar66 = lVar66 + uVar59 * 0x300;
            *(undefined1 *)(lVar66 + 0x2da) = 1;
            *(undefined8 *)(lVar66 + 0x118) = 0;
            *(ulong *)(lVar66 + 0x110) = (ulong)(uint)(fVar108 * 0.017453292) << 0x20;
            lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
            lVar67 = lVar66 + uVar59 * 0x300;
            uVar64 = *(uint *)(lVar67 + 4);
          }
          if ((lVar67 != 0) && (uVar64 == uVar53)) {
            fVar105 = fVar105 * fVar107;
            lVar66 = lVar66 + uVar59 * 0x300;
            *(undefined1 *)(lVar66 + 0x2da) = 1;
            uVar64 = *(uint *)(lVar66 + 0x26c) | 0x2000;
            if (!NAN(fVar105)) {
              uVar64 = *(uint *)(lVar66 + 0x26c) & 0xffffdfff;
            }
            *(float *)(lVar66 + 0x108) = fVar105;
            *(undefined4 *)(lVar66 + 0x10c) = 0;
            *(ulong *)(lVar66 + 0x100) = CONCAT44(fVar105,fVar105);
            *(uint *)(lVar66 + 0x26c) = uVar64;
            lVar66 = *lib::Singleton<lib::EffectManager>::instance_;
            lVar67 = lVar66 + uVar59 * 0x300;
            uVar64 = *(uint *)(lVar67 + 4);
          }
          if ((lVar67 != 0) && (uVar64 == uVar53)) {
            *(undefined1 *)(lVar66 + uVar59 * 0x300 + 0x2d4) = 1;
          }
        }
      }
    }
    else {
      *puVar102 = 0;
    }
  }
  uVar53 = (int)param_1[0x305] + 1;
  *(uint *)(param_1 + 0x305) = uVar53;
LAB_71024e3110:
  plVar101 = param_1 + 0x2fd;
  if (((int)*plVar101 == 0x9c) && (*(char *)(param_1[2] + 0x970) == '\0')) {
    return;
  }
  if (uVar53 < (uint)(int)(short)param_1[0x2fc]) {
    return;
  }
  bVar51 = FUN_71024e57b0((long)param_1);
  if (bVar51) {
    return;
  }
  iVar62 = (int)*plVar101;
  if (iVar62 == 0x13) {
    FUN_71033148b0(*(long *)(DAT_710532f8d0 + 8));
    iVar62 = (int)*plVar101;
  }
  if (iVar62 == 0x51) {
    lVar66 = *(long *)(DAT_710532f7e8 + 8);
    if (*(char *)(lVar66 + 0x161) != '\0') {
      *(undefined8 *)(lVar66 + 0x98) = 0x600000000;
      *(undefined8 *)(lVar66 + 8) = 0;
      *(undefined8 *)(lVar66 + 0x10) = 0;
      *(undefined8 *)(lVar66 + 0xec) = 0xffffffff00000000;
      *(undefined4 *)(lVar66 + 0xe0) = 0;
      *(undefined1 *)(lVar66 + 0xf4) = 0;
      *(undefined8 *)(lVar66 + 0xe4) = 0xffffffff00000001;
      *(undefined8 *)(lVar66 + 0xd0) = 0;
      *(undefined8 *)(lVar66 + 0xd8) = 0;
      *(undefined8 *)(lVar66 + 0xc0) = 0;
      *(undefined8 *)(lVar66 + 200) = 0;
      *(undefined8 *)(lVar66 + 0xb0) = 0;
      *(undefined8 *)(lVar66 + 0xb8) = 0;
      *(undefined8 *)(lVar66 + 0xa0) = 0;
      *(undefined8 *)(lVar66 + 0xa8) = 0;
    }
    FUN_71032eb9f0(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8),0,param_3,param_4,(long ****)param_5
                   ,param_6,param_7,param_8);
    if (*(char *)((long)param_1 + 0x1f9f) != '\0') {
      FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),extraout_x1_17,(long ****)param_3,
                     (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
    }
  }
  if ((int)*plVar101 == 99) {
    lVar66 = param_1[0x2f8];
    uVar53 = *(uint *)(param_1 + 0x2f9);
    lVar67 = param_1[2];
    *(undefined4 *)(lVar67 + 0x168) = *(undefined4 *)((long)param_1 + 0x17cc);
    *(ulong *)(lVar67 + 0x128) = (ulong)uVar53;
    *(long *)(lVar67 + 0x120) = lVar66;
  }
  if ((param_1[0x2f1] & 0xffffffffffU) == 0) {
LAB_71024e3258:
    uVar59 = 0;
  }
  else {
    param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x2ef);
    param_4 = (undefined1 (*) [16])(ulong)*(uint *)((long)param_1 + 0x177c);
    uVar59 = FUN_7102510150(param_1[9],param_1[0xb],*(uint *)(param_1 + 0x2ef),
                            *(uint *)((long)param_1 + 0x177c),param_1[0x2f0]);
    if ((uVar59 & 1) == 0) goto LAB_71024e3258;
    uVar59 = param_1[0x2f1];
  }
  if ((param_1[0x2f4] & 0xffffffffffU) != 0) {
    param_3 = (long *********)(ulong)*(uint *)(param_1 + 0x2f2);
    param_4 = (undefined1 (*) [16])(ulong)*(uint *)((long)param_1 + 0x1794);
    uVar60 = FUN_7102510150(param_1[9],param_1[0xb],*(uint *)(param_1 + 0x2f2),
                            *(uint *)((long)param_1 + 0x1794),param_1[0x2f3]);
    if ((uVar60 & 1) != 0) {
      uVar60 = param_1[0x2f4];
      uVar53 = *(uint *)(param_1 + 0x2ed);
      pppppppplVar58 = (long ********)local_168;
      uVar110 = local_d4;
      goto joined_r0x0071024e3308;
    }
  }
  uVar60 = 0;
  uVar53 = *(uint *)(param_1 + 0x2ed);
  pppppppplVar58 = (long ********)local_168;
  uVar110 = local_d4;
joined_r0x0071024e3308:
  uVar34 = (undefined2)((ulong)local_150 >> 0x30);
  local_d4._2_2_ = (undefined2)((uint)uVar110 >> 0x10);
  local_168._6_2_ = (undefined2)((ulong)pppppppplVar58 >> 0x30);
  if (uVar53 == 0) {
    ppuVar43 = local_150;
    if ((uVar59 & 0xffffffffff) != 0) {
      local_100 = (long *******)0x0;
      local_f8 = 0;
      local_110 = 0;
      local_108 = (long *******)0x0;
      local_b4 = 0;
      uStack_b0 = 0;
      local_120 = (long *******)0x0;
      local_118 = (long *******)0x0;
      local_ac = 0;
      uStack_a8 = 0;
      acStack_c8[0xc] = '\0';
      acStack_c8[0xd] = '\0';
      acStack_c8[0xe] = '\0';
      acStack_c8[0xf] = '\0';
      uStack_b8 = 0;
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = '\0';
      acStack_c8[7] = '\0';
      acStack_c8[8] = '\0';
      acStack_c8[9] = '\0';
      acStack_c8[10] = '\0';
      acStack_c8[0xb] = '\0';
      local_d0._4_4_ = 0;
      acStack_c8[0] = '\0';
      acStack_c8[1] = '\0';
      acStack_c8[2] = '\0';
      acStack_c8[3] = '\0';
      local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
      local_130 = (long *******)0x0;
      ppppppplStack_128 = (long *******)0x0;
      for (puVar74 = *(ulong **)(*DAT_710532a868 + 0x3a0); ppuVar43 = local_150,
          puVar74 != *(ulong **)(*DAT_710532a868 + 0x3a8); puVar74 = puVar74 + 0x17) {
        if (((*puVar74 ^ uVar59) & 0xffffffffff) == 0) {
          local_130 = (long *******)*puVar74;
          ppppppplStack_128 = (long *******)puVar74[1];
          local_120 = (long *******)puVar74[2];
          local_118 = (long *******)puVar74[3];
          local_110 = puVar74[4];
          local_108 = (long *******)puVar74[5];
          local_100 = (long *******)puVar74[6];
          local_f8 = puVar74[7];
          uVar59 = puVar74[8];
          local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar74 + 0x44);
          local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x44) >> 0x20);
          acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x4c);
          acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x4c) >> 0x20);
          uStack_a8 = *(undefined4 *)((long)puVar74 + 0x6c);
          uStack_b8 = (undefined4)*(undefined8 *)((long)puVar74 + 0x5c);
          local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x5c) >> 0x20);
          uStack_b0 = (undefined4)*(undefined8 *)((long)puVar74 + 100);
          local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 100) >> 0x20);
          acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x54);
          acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x54) >> 0x20);
          sVar37 = (short)puVar74[0xe];
          local_150 = (undefined **)
                      CONCAT44(CONCAT22(uVar34,*(undefined2 *)((long)puVar74 + 0x76)),
                               *(undefined4 *)((long)puVar74 + 0x72));
          uVar88 = puVar74[0xf];
          uVar53 = *(uint *)((long)puVar74 + 0x7c);
          ppplVar61 = (long ***)puVar74[0x10];
          uVar64 = (uint)puVar74[0x11];
          uVar38 = *(ushort *)((long)puVar74 + 0x8c);
          local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar74 + 0x8e));
          local_d8 = *(undefined2 *)((long)puVar74 + 0x9e);
          param_4 = (undefined1 (*) [16])puVar74[0x12];
          uVar48 = puVar74[0x13];
          uVar34 = *(undefined2 *)((long)puVar74 + 0x9a);
          uVar35 = *(undefined2 *)((long)puVar74 + 0x9c);
          uVar103 = puVar74[0x14];
          uVar96 = puVar74[0x15];
          local_168 = (undefined **)
                      CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar74 + 0xae)),
                               *(undefined4 *)((long)puVar74 + 0xaa));
          pppppppplVar58 = (long ********)local_168;
          ppuVar43 = local_150;
          uVar110 = local_d4;
          if (sVar37 == 0) break;
          uVar91 = puVar74[0x16];
          if (((int)*plVar101 != 0x9c) ||
             (uVar65 = (uint)*(byte *)(param_1[2] + 0x970), *(byte *)(param_1[2] + 0x970) != 0)) {
            if (*(uint *)(param_1 + 0x305) < (uint)(int)(short)param_1[0x2fc]) {
              uVar65 = 0;
            }
            else {
              bVar51 = FUN_71024e57b0((long)param_1);
              uVar65 = *(uint *)(param_1 + 0x2ed);
              if (uVar65 == 0) {
                if (!bVar51) {
                  param_1[0x2f0] = (long)local_120;
                  param_1[0x2f1] = (long)local_118;
                  *__dest = (long)local_130;
                  param_1[0x2ef] = (long)ppppppplStack_128;
                  param_1[0x2f4] = (long)local_100;
                  param_1[0x2f5] = local_f8;
                  param_1[0x2f2] = local_110;
                  param_1[0x2f3] = (long)local_108;
                  *(int *)(param_1 + 0x2f6) = (int)uVar59;
                  *(ulong *)((long)param_1 + 0x17bc) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
                  *(ulong *)((long)param_1 + 0x17b4) = CONCAT44(local_d0._4_4_,(uint)local_d0);
                  *(ulong *)((long)param_1 + 0x17d4) = CONCAT44(local_ac,uStack_b0);
                  *(ulong *)((long)param_1 + 0x17cc) = CONCAT44(local_b4,uStack_b8);
                  *(ulong *)((long)param_1 + 0x17c4) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
                  *(undefined4 *)((long)param_1 + 0x17dc) = uStack_a8;
                  *(short *)(param_1 + 0x2fc) = sVar37;
                  *(undefined4 *)((long)param_1 + 0x17e2) = (undefined4)local_150;
                  *(undefined2 *)((long)param_1 + 0x17e6) = local_150._4_2_;
                  *(int *)(param_1 + 0x2fd) = (int)uVar88;
                  *(uint *)((long)param_1 + 0x17ec) = uVar53;
                  param_1[0x2fe] = (long)ppplVar61;
                  *(uint *)(param_1 + 0x2ff) = uVar64;
                  *(ushort *)((long)param_1 + 0x17fc) = uVar38;
                  param_1[0x300] = (long)param_4;
                  *(short *)(param_1 + 0x301) = (short)uVar48;
                  *(undefined2 *)((long)param_1 + 0x180a) = uVar34;
                  *(undefined2 *)((long)param_1 + 0x180c) = uVar35;
                  *(undefined2 *)((long)param_1 + 0x17fe) = (undefined2)local_d4;
                  param_1[0x302] = uVar103;
                  *(short *)(param_1 + 0x303) = (short)uVar96;
                  *(undefined2 *)((long)param_1 + 0x180e) = local_d8;
                  *(undefined2 *)((long)param_1 + 0x181e) = local_168._4_2_;
                  *(undefined4 *)((long)param_1 + 0x181a) = (undefined4)local_168;
                  param_1[0x304] = uVar91;
                  *(undefined4 *)(param_1 + 0x305) = 0;
                  *(undefined1 *)((long)param_1 + 0x1f95) = 0;
                  FUN_71024dd520(param_1,extraout_x1_18,param_3,param_4,
                                 (undefined1 (*) [16])(ulong)uVar38,
                                 (undefined1 (*) [16])(ulong)uVar64,ppplVar61,
                                 (long ***)(ulong)uVar53);
                  pppppppplVar58 = (long ********)local_168;
                  ppuVar43 = local_150;
                  uVar110 = local_d4;
                  break;
                }
              }
            }
          }
          param_1[(ulong)uVar65 * 0x17 + 0xf] = (long)local_120;
          param_1[(ulong)uVar65 * 0x17 + 0x10] = (long)local_118;
          param_1[(ulong)uVar65 * 0x17 + 0xd] = (long)local_130;
          param_1[(ulong)uVar65 * 0x17 + 0xe] = (long)ppppppplStack_128;
          *(int *)(param_1 + (ulong)uVar65 * 0x17 + 0x15) = (int)uVar59;
          param_1[(ulong)uVar65 * 0x17 + 0x13] = (long)local_100;
          param_1[(ulong)uVar65 * 0x17 + 0x14] = local_f8;
          param_1[(ulong)uVar65 * 0x17 + 0x11] = local_110;
          param_1[(ulong)uVar65 * 0x17 + 0x12] = (long)local_108;
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xb4) =
               CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xac) =
               CONCAT44(local_d0._4_4_,(uint)local_d0);
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xd4) = uStack_a8;
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xcc) = CONCAT44(local_ac,uStack_b0);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xc4) = CONCAT44(local_b4,uStack_b8);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xbc) =
               CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x1b) = sVar37;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xde) = local_150._4_2_;
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xda) = (undefined4)local_150;
          *(int *)(param_1 + (ulong)uVar65 * 0x17 + 0x1c) = (int)uVar88;
          *(uint *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xe4) = uVar53;
          param_1[(ulong)uVar65 * 0x17 + 0x1d] = (long)ppplVar61;
          *(uint *)(param_1 + (ulong)uVar65 * 0x17 + 0x1e) = uVar64;
          *(ushort *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xf4) = uVar38;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xf6) = (undefined2)local_d4;
          param_1[(ulong)uVar65 * 0x17 + 0x1f] = (long)param_4;
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x20) = (short)uVar48;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x102) = uVar34;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x104) = uVar35;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x106) = local_d8;
          param_1[(ulong)uVar65 * 0x17 + 0x21] = uVar103;
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x22) = (short)uVar96;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x116) = local_168._4_2_;
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x112) = (undefined4)local_168;
          param_1[(ulong)uVar65 * 0x17 + 0x23] = uVar91;
          *(int *)(param_1 + 0x2ed) = (int)param_1[0x2ed] + 1;
          pppppppplVar58 = (long ********)local_168;
          ppuVar43 = local_150;
          uVar110 = local_d4;
          break;
        }
      }
    }
    local_150 = ppuVar43;
    if ((uVar60 & 0xffffffffff) != 0) {
      uVar53 = *(uint *)(param_1 + 0x2ed);
      local_150._4_4_ = (uint)((ulong)ppuVar43 >> 0x20);
      uVar64 = local_150._4_4_;
      local_d4._2_2_ = (undefined2)((uint)uVar110 >> 0x10);
      local_168._6_2_ = (undefined2)((ulong)pppppppplVar58 >> 0x30);
      local_150._6_2_ = (undefined2)((ulong)ppuVar43 >> 0x30);
      uVar34 = local_150._6_2_;
      if (uVar53 == 0) {
        local_100 = (long *******)0x0;
        local_f8 = 0;
        local_110 = 0;
        local_108 = (long *******)0x0;
        local_b4 = 0;
        uStack_b0 = 0;
        local_120 = (long *******)0x0;
        local_118 = (long *******)0x0;
        local_ac = 0;
        uStack_a8 = 0;
        acStack_c8[0xc] = '\0';
        acStack_c8[0xd] = '\0';
        acStack_c8[0xe] = '\0';
        acStack_c8[0xf] = '\0';
        uStack_b8 = 0;
        acStack_c8[4] = '\0';
        acStack_c8[5] = '\0';
        acStack_c8[6] = '\0';
        acStack_c8[7] = '\0';
        acStack_c8[8] = '\0';
        acStack_c8[9] = '\0';
        acStack_c8[10] = '\0';
        acStack_c8[0xb] = '\0';
        local_d0._4_4_ = 0;
        acStack_c8[0] = '\0';
        acStack_c8[1] = '\0';
        acStack_c8[2] = '\0';
        acStack_c8[3] = '\0';
        local_150 = (undefined **)((ulong)uVar64 << 0x20);
        local_130 = (long *******)0x0;
        ppppppplStack_128 = (long *******)0x0;
        puVar74 = *(ulong **)(*DAT_710532a868 + 0x3a0);
        puVar86 = *(ulong **)(*DAT_710532a868 + 0x3a8);
        if (puVar74 != puVar86) {
LAB_71024e3d78:
          if (((*puVar74 ^ uVar60) & 0xffffffffff) != 0) goto code_r0x0071024e3d88;
          local_130 = (long *******)*puVar74;
          ppppppplStack_128 = (long *******)puVar74[1];
          local_120 = (long *******)puVar74[2];
          local_118 = (long *******)puVar74[3];
          local_110 = puVar74[4];
          local_108 = (long *******)puVar74[5];
          local_100 = (long *******)puVar74[6];
          local_f8 = puVar74[7];
          uVar59 = puVar74[8];
          local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar74 + 0x44);
          local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x44) >> 0x20);
          acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x4c);
          acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x4c) >> 0x20);
          uStack_a8 = *(undefined4 *)((long)puVar74 + 0x6c);
          uStack_b8 = (undefined4)*(undefined8 *)((long)puVar74 + 0x5c);
          local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x5c) >> 0x20);
          uStack_b0 = (undefined4)*(undefined8 *)((long)puVar74 + 100);
          local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 100) >> 0x20);
          acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x54);
          acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x54) >> 0x20);
          sVar37 = (short)puVar74[0xe];
          local_150 = (undefined **)
                      CONCAT44(CONCAT22(uVar34,*(undefined2 *)((long)puVar74 + 0x76)),
                               *(undefined4 *)((long)puVar74 + 0x72));
          uVar60 = puVar74[0xf];
          uVar53 = *(uint *)((long)puVar74 + 0x7c);
          ppplVar61 = (long ***)puVar74[0x10];
          uVar64 = (uint)puVar74[0x11];
          uVar38 = *(ushort *)((long)puVar74 + 0x8c);
          local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar74 + 0x8e));
          local_d8 = *(undefined2 *)((long)puVar74 + 0x9e);
          uVar103 = puVar74[0x12];
          uVar88 = puVar74[0x13];
          uVar34 = *(undefined2 *)((long)puVar74 + 0x9a);
          uVar35 = *(undefined2 *)((long)puVar74 + 0x9c);
          uVar96 = puVar74[0x14];
          uVar48 = puVar74[0x15];
          local_168 = (undefined **)
                      CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar74 + 0xae)),
                               *(undefined4 *)((long)puVar74 + 0xaa));
          pppppppplVar58 = (long ********)local_168;
          uVar110 = local_d4;
          if (sVar37 == 0) goto LAB_71024e446c;
          uVar91 = puVar74[0x16];
          if (((int)*plVar101 != 0x9c) ||
             (uVar65 = (uint)*(byte *)(param_1[2] + 0x970), *(byte *)(param_1[2] + 0x970) != 0)) {
            if (*(uint *)(param_1 + 0x305) < (uint)(int)(short)param_1[0x2fc]) {
              uVar65 = 0;
            }
            else {
              bVar51 = FUN_71024e57b0((long)param_1);
              uVar65 = *(uint *)(param_1 + 0x2ed);
              if (uVar65 == 0) {
                if (!bVar51) {
                  param_1[0x2f0] = (long)local_120;
                  param_1[0x2f1] = (long)local_118;
                  *__dest = (long)local_130;
                  param_1[0x2ef] = (long)ppppppplStack_128;
                  param_1[0x2f4] = (long)local_100;
                  param_1[0x2f5] = local_f8;
                  param_1[0x2f2] = local_110;
                  param_1[0x2f3] = (long)local_108;
                  *(int *)(param_1 + 0x2f6) = (int)uVar59;
                  *(ulong *)((long)param_1 + 0x17bc) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
                  *(ulong *)((long)param_1 + 0x17b4) = CONCAT44(local_d0._4_4_,(uint)local_d0);
                  *(ulong *)((long)param_1 + 0x17d4) = CONCAT44(local_ac,uStack_b0);
                  *(ulong *)((long)param_1 + 0x17cc) = CONCAT44(local_b4,uStack_b8);
                  *(ulong *)((long)param_1 + 0x17c4) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
                  *(undefined4 *)((long)param_1 + 0x17dc) = uStack_a8;
                  *(short *)(param_1 + 0x2fc) = sVar37;
                  *(undefined4 *)((long)param_1 + 0x17e2) = (undefined4)local_150;
                  *(undefined2 *)((long)param_1 + 0x17e6) = local_150._4_2_;
                  *(int *)(param_1 + 0x2fd) = (int)uVar60;
                  *(uint *)((long)param_1 + 0x17ec) = uVar53;
                  param_1[0x2fe] = (long)ppplVar61;
                  *(uint *)(param_1 + 0x2ff) = uVar64;
                  *(ushort *)((long)param_1 + 0x17fc) = uVar38;
                  param_1[0x300] = uVar103;
                  *(short *)(param_1 + 0x301) = (short)uVar88;
                  *(undefined2 *)((long)param_1 + 0x180a) = uVar34;
                  *(undefined2 *)((long)param_1 + 0x180c) = uVar35;
                  *(undefined2 *)((long)param_1 + 0x17fe) = (undefined2)local_d4;
                  param_1[0x302] = uVar96;
                  *(short *)(param_1 + 0x303) = (short)uVar48;
                  *(undefined2 *)((long)param_1 + 0x180e) = local_d8;
                  *(undefined2 *)((long)param_1 + 0x181e) = local_168._4_2_;
                  *(undefined4 *)((long)param_1 + 0x181a) = (undefined4)local_168;
                  param_1[0x304] = uVar91;
                  *(undefined4 *)(param_1 + 0x305) = 0;
                  *(undefined1 *)((long)param_1 + 0x1f95) = 0;
                  FUN_71024dd520(param_1,extraout_x1_19,param_3,param_4,
                                 (undefined1 (*) [16])(ulong)uVar38,
                                 (undefined1 (*) [16])(ulong)uVar64,ppplVar61,
                                 (long ***)(ulong)uVar53);
                  pppppppplVar58 = (long ********)local_168;
                  uVar110 = local_d4;
                  goto LAB_71024e446c;
                }
              }
            }
          }
          param_1[(ulong)uVar65 * 0x17 + 0xf] = (long)local_120;
          param_1[(ulong)uVar65 * 0x17 + 0x10] = (long)local_118;
          param_1[(ulong)uVar65 * 0x17 + 0xd] = (long)local_130;
          param_1[(ulong)uVar65 * 0x17 + 0xe] = (long)ppppppplStack_128;
          *(int *)(param_1 + (ulong)uVar65 * 0x17 + 0x15) = (int)uVar59;
          param_1[(ulong)uVar65 * 0x17 + 0x13] = (long)local_100;
          param_1[(ulong)uVar65 * 0x17 + 0x14] = local_f8;
          param_1[(ulong)uVar65 * 0x17 + 0x11] = local_110;
          param_1[(ulong)uVar65 * 0x17 + 0x12] = (long)local_108;
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xb4) =
               CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xac) =
               CONCAT44(local_d0._4_4_,(uint)local_d0);
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xd4) = uStack_a8;
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xcc) = CONCAT44(local_ac,uStack_b0);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xc4) = CONCAT44(local_b4,uStack_b8);
          *(ulong *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xbc) =
               CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x1b) = sVar37;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xde) = local_150._4_2_;
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xda) = (undefined4)local_150;
          *(int *)(param_1 + (ulong)uVar65 * 0x17 + 0x1c) = (int)uVar60;
          *(uint *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xe4) = uVar53;
          param_1[(ulong)uVar65 * 0x17 + 0x1d] = (long)ppplVar61;
          *(uint *)(param_1 + (ulong)uVar65 * 0x17 + 0x1e) = uVar64;
          *(ushort *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xf4) = uVar38;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0xf6) = (undefined2)local_d4;
          param_1[(ulong)uVar65 * 0x17 + 0x1f] = uVar103;
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x20) = (short)uVar88;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x102) = uVar34;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x104) = uVar35;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x106) = local_d8;
          param_1[(ulong)uVar65 * 0x17 + 0x21] = uVar96;
          *(short *)(param_1 + (ulong)uVar65 * 0x17 + 0x22) = (short)uVar48;
          *(undefined2 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x116) = local_168._4_2_;
          *(undefined4 *)((long)param_1 + (ulong)uVar65 * 0xb8 + 0x112) = (undefined4)local_168;
          param_1[(ulong)uVar65 * 0x17 + 0x23] = uVar91;
          iVar62 = (int)param_1[0x2ed] + 1;
LAB_71024e3b5c:
          *(int *)(param_1 + 0x2ed) = iVar62;
          pppppppplVar58 = (long ********)local_168;
          uVar110 = local_d4;
        }
      }
      else {
        local_100 = (long *******)0x0;
        local_f8 = 0;
        local_110 = 0;
        local_108 = (long *******)0x0;
        local_b4 = 0;
        uStack_b0 = 0;
        local_120 = (long *******)0x0;
        local_118 = (long *******)0x0;
        local_ac = 0;
        uStack_a8 = 0;
        acStack_c8[0xc] = '\0';
        acStack_c8[0xd] = '\0';
        acStack_c8[0xe] = '\0';
        acStack_c8[0xf] = '\0';
        uStack_b8 = 0;
        acStack_c8[4] = '\0';
        acStack_c8[5] = '\0';
        acStack_c8[6] = '\0';
        acStack_c8[7] = '\0';
        acStack_c8[8] = '\0';
        acStack_c8[9] = '\0';
        acStack_c8[10] = '\0';
        acStack_c8[0xb] = '\0';
        local_d0._4_4_ = 0;
        acStack_c8[0] = '\0';
        acStack_c8[1] = '\0';
        acStack_c8[2] = '\0';
        acStack_c8[3] = '\0';
        local_150 = (undefined **)((ulong)uVar64 << 0x20);
        local_130 = (long *******)0x0;
        ppppppplStack_128 = (long *******)0x0;
        puVar74 = *(ulong **)(*DAT_710532a868 + 0x3a0);
        puVar86 = *(ulong **)(*DAT_710532a868 + 0x3a8);
        if (puVar74 != puVar86) {
          do {
            if (((*puVar74 ^ uVar60) & 0xffffffffff) == 0) {
              local_130 = (long *******)*puVar74;
              ppppppplStack_128 = (long *******)puVar74[1];
              local_120 = (long *******)puVar74[2];
              local_118 = (long *******)puVar74[3];
              local_110 = puVar74[4];
              local_108 = (long *******)puVar74[5];
              local_100 = (long *******)puVar74[6];
              local_f8 = puVar74[7];
              uVar59 = puVar74[8];
              local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar74 + 0x44);
              local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x44) >> 0x20);
              acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x4c);
              acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x4c) >> 0x20);
              uStack_a8 = *(undefined4 *)((long)puVar74 + 0x6c);
              uStack_b8 = (undefined4)*(undefined8 *)((long)puVar74 + 0x5c);
              local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x5c) >> 0x20);
              uStack_b0 = (undefined4)*(undefined8 *)((long)puVar74 + 100);
              local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 100) >> 0x20);
              acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x54);
              acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x54) >> 0x20)
              ;
              uVar60 = puVar74[0xe];
              local_150 = (undefined **)
                          CONCAT44(CONCAT22(uVar34,*(undefined2 *)((long)puVar74 + 0x76)),
                                   *(undefined4 *)((long)puVar74 + 0x72));
              uVar88 = puVar74[0xf];
              uVar32 = *(undefined4 *)((long)puVar74 + 0x7c);
              uVar91 = puVar74[0x10];
              uVar48 = puVar74[0x11];
              uVar34 = *(undefined2 *)((long)puVar74 + 0x8c);
              local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar74 + 0x8e));
              local_d8 = *(undefined2 *)((long)puVar74 + 0x9e);
              uVar95 = puVar74[0x12];
              uVar96 = puVar74[0x13];
              uVar35 = *(undefined2 *)((long)puVar74 + 0x9a);
              uVar36 = *(undefined2 *)((long)puVar74 + 0x9c);
              uVar104 = puVar74[0x14];
              uVar103 = puVar74[0x15];
              local_168 = (undefined **)
                          CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar74 + 0xae)),
                                   *(undefined4 *)((long)puVar74 + 0xaa));
              pppppppplVar58 = (long ********)local_168;
              uVar110 = local_d4;
              if ((uVar53 < 0x20) && ((short)uVar60 != 0)) {
                uVar76 = puVar74[0x16];
                plVar97 = param_1 + (long)(int)uVar53 * 0x17 + -10;
                do {
                  memcpy(param_1 + (long)(int)uVar53 * 0x17 + 0xd,plVar97,0xb8);
                  iVar62 = uVar53 - 2;
                  plVar97 = plVar97 + -0x17;
                  uVar53 = uVar53 - 1;
                } while (-1 < iVar62);
                param_1[0xf] = (long)local_120;
                param_1[0x10] = (long)local_118;
                *(int *)(param_1 + 0x15) = (int)uVar59;
                param_1[0xd] = (long)local_130;
                param_1[0xe] = (long)ppppppplStack_128;
                param_1[0x13] = (long)local_100;
                param_1[0x14] = local_f8;
                param_1[0x11] = local_110;
                param_1[0x12] = (long)local_108;
                *(ulong *)((long)param_1 + 0xb4) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
                *(ulong *)((long)param_1 + 0xac) = CONCAT44(local_d0._4_4_,(uint)local_d0);
                *(short *)(param_1 + 0x1b) = (short)uVar60;
                *(ulong *)((long)param_1 + 0xcc) = CONCAT44(local_ac,uStack_b0);
                *(ulong *)((long)param_1 + 0xc4) = CONCAT44(local_b4,uStack_b8);
                *(undefined4 *)((long)param_1 + 0xd4) = uStack_a8;
                *(ulong *)((long)param_1 + 0xbc) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
                *(int *)(param_1 + 0x1c) = (int)uVar88;
                *(undefined2 *)((long)param_1 + 0xde) = local_150._4_2_;
                *(undefined4 *)((long)param_1 + 0xe4) = uVar32;
                param_1[0x1d] = uVar91;
                *(int *)(param_1 + 0x1e) = (int)uVar48;
                *(undefined2 *)((long)param_1 + 0xf4) = uVar34;
                *(undefined4 *)((long)param_1 + 0xda) = (undefined4)local_150;
                param_1[0x1f] = uVar95;
                *(short *)(param_1 + 0x20) = (short)uVar96;
                *(undefined2 *)((long)param_1 + 0x102) = uVar35;
                *(undefined2 *)((long)param_1 + 0x104) = uVar36;
                *(undefined2 *)((long)param_1 + 0xf6) = (undefined2)local_d4;
                param_1[0x21] = uVar104;
                *(short *)(param_1 + 0x22) = (short)uVar103;
                *(undefined2 *)((long)param_1 + 0x106) = local_d8;
                *(undefined4 *)((long)param_1 + 0x112) = (undefined4)local_168;
                *(undefined2 *)((long)param_1 + 0x116) = local_168._4_2_;
                *(int *)(param_1 + 0x2ed) = (int)param_1[0x2ed] + 1;
                param_1[0x23] = uVar76;
                pppppppplVar58 = (long ********)local_168;
                uVar110 = local_d4;
              }
              break;
            }
            puVar74 = puVar74 + 0x17;
          } while (puVar86 != puVar74);
        }
      }
    }
  }
  else {
    if ((uVar60 & 0xffffffffff) != 0) {
      local_100 = (long *******)0x0;
      local_f8 = 0;
      local_110 = 0;
      local_108 = (long *******)0x0;
      local_b4 = 0;
      uStack_b0 = 0;
      local_120 = (long *******)0x0;
      local_118 = (long *******)0x0;
      local_ac = 0;
      uStack_a8 = 0;
      acStack_c8[0xc] = '\0';
      acStack_c8[0xd] = '\0';
      acStack_c8[0xe] = '\0';
      acStack_c8[0xf] = '\0';
      uStack_b8 = 0;
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = '\0';
      acStack_c8[7] = '\0';
      acStack_c8[8] = '\0';
      acStack_c8[9] = '\0';
      acStack_c8[10] = '\0';
      acStack_c8[0xb] = '\0';
      local_d0._4_4_ = 0;
      acStack_c8[0] = '\0';
      acStack_c8[1] = '\0';
      acStack_c8[2] = '\0';
      acStack_c8[3] = '\0';
      local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
      local_130 = (long *******)0x0;
      ppppppplStack_128 = (long *******)0x0;
      puVar74 = *(ulong **)(*DAT_710532a868 + 0x3a0);
      puVar86 = *(ulong **)(*DAT_710532a868 + 0x3a8);
      if (puVar74 != puVar86) {
        do {
          if (((*puVar74 ^ uVar60) & 0xffffffffff) == 0) {
            local_130 = (long *******)*puVar74;
            ppppppplStack_128 = (long *******)puVar74[1];
            local_120 = (long *******)puVar74[2];
            local_118 = (long *******)puVar74[3];
            local_110 = puVar74[4];
            local_108 = (long *******)puVar74[5];
            local_100 = (long *******)puVar74[6];
            local_f8 = puVar74[7];
            uVar60 = puVar74[8];
            local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar74 + 0x44);
            local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x44) >> 0x20);
            acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x4c);
            acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x4c) >> 0x20);
            uStack_a8 = *(undefined4 *)((long)puVar74 + 0x6c);
            uStack_b8 = (undefined4)*(undefined8 *)((long)puVar74 + 0x5c);
            local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x5c) >> 0x20);
            uStack_b0 = (undefined4)*(undefined8 *)((long)puVar74 + 100);
            local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 100) >> 0x20);
            acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x54);
            acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x54) >> 0x20);
            uVar88 = puVar74[0xe];
            local_150 = (undefined **)
                        CONCAT44(CONCAT22(uVar34,*(undefined2 *)((long)puVar74 + 0x76)),
                                 *(undefined4 *)((long)puVar74 + 0x72));
            uVar48 = puVar74[0xf];
            uVar32 = *(undefined4 *)((long)puVar74 + 0x7c);
            uVar95 = puVar74[0x10];
            uVar96 = puVar74[0x11];
            uVar34 = *(undefined2 *)((long)puVar74 + 0x8c);
            local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar74 + 0x8e));
            local_d8 = *(undefined2 *)((long)puVar74 + 0x9e);
            uVar104 = puVar74[0x12];
            uVar103 = puVar74[0x13];
            uVar35 = *(undefined2 *)((long)puVar74 + 0x9a);
            uVar36 = *(undefined2 *)((long)puVar74 + 0x9c);
            uVar76 = puVar74[0x14];
            uVar91 = puVar74[0x15];
            local_168 = (undefined **)
                        CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar74 + 0xae)),
                                 *(undefined4 *)((long)puVar74 + 0xaa));
            pppppppplVar58 = (long ********)local_168;
            uVar110 = local_d4;
            if ((uVar53 < 0x20) && ((short)uVar88 != 0)) {
              uVar75 = puVar74[0x16];
              plVar97 = param_1 + (long)(int)uVar53 * 0x17 + -10;
              do {
                memcpy(param_1 + (long)(int)uVar53 * 0x17 + 0xd,plVar97,0xb8);
                iVar62 = uVar53 - 2;
                plVar97 = plVar97 + -0x17;
                uVar53 = uVar53 - 1;
              } while (-1 < iVar62);
              param_1[0xf] = (long)local_120;
              param_1[0x10] = (long)local_118;
              *(int *)(param_1 + 0x15) = (int)uVar60;
              param_1[0xd] = (long)local_130;
              param_1[0xe] = (long)ppppppplStack_128;
              param_1[0x13] = (long)local_100;
              param_1[0x14] = local_f8;
              param_1[0x11] = local_110;
              param_1[0x12] = (long)local_108;
              *(ulong *)((long)param_1 + 0xb4) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
              *(ulong *)((long)param_1 + 0xac) = CONCAT44(local_d0._4_4_,(uint)local_d0);
              *(short *)(param_1 + 0x1b) = (short)uVar88;
              *(undefined4 *)((long)param_1 + 0xd4) = uStack_a8;
              *(ulong *)((long)param_1 + 0xc4) = CONCAT44(local_b4,uStack_b8);
              *(ulong *)((long)param_1 + 0xcc) = CONCAT44(local_ac,uStack_b0);
              *(ulong *)((long)param_1 + 0xbc) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
              uVar53 = (int)param_1[0x2ed] + 1;
              *(int *)(param_1 + 0x1c) = (int)uVar48;
              *(undefined2 *)((long)param_1 + 0xde) = local_150._4_2_;
              *(undefined4 *)((long)param_1 + 0xe4) = uVar32;
              param_1[0x1d] = uVar95;
              *(int *)(param_1 + 0x1e) = (int)uVar96;
              *(undefined2 *)((long)param_1 + 0xf4) = uVar34;
              *(undefined4 *)((long)param_1 + 0xda) = (undefined4)local_150;
              param_1[0x1f] = uVar104;
              *(short *)(param_1 + 0x20) = (short)uVar103;
              *(undefined2 *)((long)param_1 + 0x102) = uVar35;
              *(undefined2 *)((long)param_1 + 0x104) = uVar36;
              *(undefined2 *)((long)param_1 + 0xf6) = (undefined2)local_d4;
              param_1[0x21] = uVar76;
              *(short *)(param_1 + 0x22) = (short)uVar91;
              *(undefined2 *)((long)param_1 + 0x106) = local_d8;
              *(undefined4 *)((long)param_1 + 0x112) = (undefined4)local_168;
              *(undefined2 *)((long)param_1 + 0x116) = local_168._4_2_;
              *(uint *)(param_1 + 0x2ed) = uVar53;
              param_1[0x23] = uVar75;
              pppppppplVar58 = (long ********)local_168;
              uVar110 = local_d4;
            }
            break;
          }
          puVar74 = puVar74 + 0x17;
        } while (puVar86 != puVar74);
      }
    }
    local_d4 = uVar110;
    local_168 = (undefined **)pppppppplVar58;
    pppppppplVar58 = (long ********)local_168;
    uVar110 = local_d4;
    if ((uVar59 & 0xffffffffff) != 0) {
      local_100 = (long *******)0x0;
      local_f8 = 0;
      local_110 = 0;
      local_108 = (long *******)0x0;
      local_b4 = 0;
      uStack_b0 = 0;
      local_120 = (long *******)0x0;
      local_118 = (long *******)0x0;
      local_ac = 0;
      uStack_a8 = 0;
      acStack_c8[0xc] = '\0';
      acStack_c8[0xd] = '\0';
      acStack_c8[0xe] = '\0';
      acStack_c8[0xf] = '\0';
      uStack_b8 = 0;
      acStack_c8[4] = '\0';
      acStack_c8[5] = '\0';
      acStack_c8[6] = '\0';
      acStack_c8[7] = '\0';
      acStack_c8[8] = '\0';
      acStack_c8[9] = '\0';
      acStack_c8[10] = '\0';
      acStack_c8[0xb] = '\0';
      local_d0._4_4_ = 0;
      acStack_c8[0] = '\0';
      acStack_c8[1] = '\0';
      acStack_c8[2] = '\0';
      acStack_c8[3] = '\0';
      uVar60 = (ulong)local_150 >> 0x30;
      local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
      local_130 = (long *******)0x0;
      ppppppplStack_128 = (long *******)0x0;
      puVar74 = *(ulong **)(*DAT_710532a868 + 0x3a0);
      puVar86 = *(ulong **)(*DAT_710532a868 + 0x3a8);
      if (puVar74 != puVar86) {
LAB_71024e36a4:
        if (((*puVar74 ^ uVar59) & 0xffffffffff) != 0) goto code_r0x0071024e36b4;
        local_130 = (long *******)*puVar74;
        ppppppplStack_128 = (long *******)puVar74[1];
        local_120 = (long *******)puVar74[2];
        local_118 = (long *******)puVar74[3];
        local_110 = puVar74[4];
        local_108 = (long *******)puVar74[5];
        local_100 = (long *******)puVar74[6];
        local_f8 = puVar74[7];
        uVar59 = puVar74[8];
        local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar74 + 0x44);
        local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x44) >> 0x20);
        acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x4c);
        acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x4c) >> 0x20);
        uStack_a8 = *(undefined4 *)((long)puVar74 + 0x6c);
        uStack_b8 = (undefined4)*(undefined8 *)((long)puVar74 + 0x5c);
        local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x5c) >> 0x20);
        uStack_b0 = (undefined4)*(undefined8 *)((long)puVar74 + 100);
        local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 100) >> 0x20);
        acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar74 + 0x54);
        acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar74 + 0x54) >> 0x20);
        uVar88 = puVar74[0xe];
        local_150 = (undefined **)
                    CONCAT44(CONCAT22((short)uVar60,*(undefined2 *)((long)puVar74 + 0x76)),
                             *(undefined4 *)((long)puVar74 + 0x72));
        uVar60 = puVar74[0xf];
        uVar32 = *(undefined4 *)((long)puVar74 + 0x7c);
        uVar104 = puVar74[0x10];
        uVar48 = puVar74[0x11];
        uVar34 = *(undefined2 *)((long)puVar74 + 0x8c);
        local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar74 + 0x8e));
        local_d8 = *(undefined2 *)((long)puVar74 + 0x9e);
        uVar95 = puVar74[0x12];
        uVar96 = puVar74[0x13];
        uVar35 = *(undefined2 *)((long)puVar74 + 0x9a);
        uVar36 = *(undefined2 *)((long)puVar74 + 0x9c);
        uVar91 = puVar74[0x14];
        uVar103 = puVar74[0x15];
        local_168 = (undefined **)
                    CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar74 + 0xae)),
                             *(undefined4 *)((long)puVar74 + 0xaa));
        pppppppplVar58 = (long ********)local_168;
        uVar110 = local_d4;
        if ((uVar53 < 0x20) && ((short)uVar88 != 0)) {
          uVar76 = puVar74[0x16];
          if (uVar53 == 0) {
            iVar62 = 1;
          }
          else {
            plVar97 = param_1 + (long)(int)uVar53 * 0x17 + -10;
            do {
              memcpy(param_1 + (long)(int)uVar53 * 0x17 + 0xd,plVar97,0xb8);
              iVar62 = uVar53 - 2;
              plVar97 = plVar97 + -0x17;
              uVar53 = uVar53 - 1;
            } while (-1 < iVar62);
            iVar62 = (int)param_1[0x2ed] + 1;
          }
          param_1[0xf] = (long)local_120;
          param_1[0x10] = (long)local_118;
          param_1[0xd] = (long)local_130;
          param_1[0xe] = (long)ppppppplStack_128;
          *(int *)(param_1 + 0x15) = (int)uVar59;
          param_1[0x13] = (long)local_100;
          param_1[0x14] = local_f8;
          param_1[0x11] = local_110;
          param_1[0x12] = (long)local_108;
          *(ulong *)((long)param_1 + 0xb4) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
          *(ulong *)((long)param_1 + 0xac) = CONCAT44(local_d0._4_4_,(uint)local_d0);
          *(short *)(param_1 + 0x1b) = (short)uVar88;
          *(undefined4 *)((long)param_1 + 0xd4) = uStack_a8;
          *(ulong *)((long)param_1 + 0xcc) = CONCAT44(local_ac,uStack_b0);
          *(ulong *)((long)param_1 + 0xc4) = CONCAT44(local_b4,uStack_b8);
          *(ulong *)((long)param_1 + 0xbc) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
          *(int *)(param_1 + 0x1c) = (int)uVar60;
          *(undefined4 *)((long)param_1 + 0xe4) = uVar32;
          param_1[0x1d] = uVar104;
          *(int *)(param_1 + 0x1e) = (int)uVar48;
          *(undefined2 *)((long)param_1 + 0xf4) = uVar34;
          *(undefined2 *)((long)param_1 + 0xde) = local_150._4_2_;
          *(undefined4 *)((long)param_1 + 0xda) = (undefined4)local_150;
          param_1[0x1f] = uVar95;
          *(short *)(param_1 + 0x20) = (short)uVar96;
          *(undefined2 *)((long)param_1 + 0x102) = uVar35;
          *(undefined2 *)((long)param_1 + 0x104) = uVar36;
          *(undefined2 *)((long)param_1 + 0xf6) = (undefined2)local_d4;
          param_1[0x21] = uVar91;
          *(short *)(param_1 + 0x22) = (short)uVar103;
          *(undefined2 *)((long)param_1 + 0x106) = local_d8;
          *(undefined2 *)((long)param_1 + 0x116) = local_168._4_2_;
          *(undefined4 *)((long)param_1 + 0x112) = (undefined4)local_168;
          param_1[0x23] = uVar76;
          goto LAB_71024e3b5c;
        }
      }
    }
  }
LAB_71024e446c:
  local_d4 = uVar110;
  local_168 = (undefined **)pppppppplVar58;
  if (((((int)*plVar101 != 0x9c) || (*(char *)(param_1[2] + 0x970) != '\0')) &&
      ((uint)(int)(short)param_1[0x2fc] <= *(uint *)(param_1 + 0x305))) &&
     (bVar51 = FUN_71024e57b0((long)param_1), !bVar51)) {
    uVar53 = *(uint *)(param_1 + 0x2ed);
    if (uVar53 == 0) {
      lVar66 = param_1[2];
      *(undefined4 *)(lVar66 + 0x1dc) = 1;
      *(undefined4 *)(lVar66 + 0x164) = 0;
      *(undefined8 *)(lVar66 + 0xa8) = 0;
      *(undefined8 *)(lVar66 + 0xa0) = 0;
      *(undefined8 *)(lVar66 + 0x118) = 0;
      *(undefined8 *)(lVar66 + 0x110) = 0;
      *(undefined4 *)(lVar66 + 0x17c) = 0;
      *(undefined8 *)(lVar66 + 0x1a4) = 0;
      *(undefined4 *)(lVar66 + 0x1ac) = 0;
      param_1[0x2f4] = 0;
      param_1[0x2f5] = 0;
      param_1[0x2f2] = 0;
      param_1[0x2f3] = 0;
      param_1[0x2f0] = 0;
      param_1[0x2f1] = 0;
      *__dest = 0;
      param_1[0x2ef] = 0;
      *(undefined4 *)(param_1 + 0x2f6) = 1;
      *(undefined4 *)(param_1 + 0x2fd) = 0;
      param_1[0x2fe] = 0;
      *(undefined4 *)(param_1 + 0x2ff) = 0;
      *(undefined2 *)((long)param_1 + 0x17fc) = 0;
      param_1[0x2fa] = 0;
      *(undefined8 *)((long)param_1 + 0x17de) = 0;
      *(undefined4 *)(param_1 + 0x301) = 0xffff;
      param_1[0x2fb] = 0;
      param_1[0x2f9] = 0;
      param_1[0x2f8] = 0;
      param_1[0x2f7] = 0;
      param_1[0x300] = 0;
      *(undefined2 *)((long)param_1 + 0x180c) = 0;
      param_1[0x302] = 0;
      *(undefined2 *)(param_1 + 0x303) = 0;
      param_1[0x304] = 0;
      *(undefined4 *)(param_1[3] + 0x438) = 0;
      FUN_710175e350();
      psVar77 = (short *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x88d68);
      lVar66 = 8000;
      do {
        if (((psVar77[-0x50] != -1) || (psVar77[-0x28] != -1)) ||
           ((*psVar77 != -1 || (psVar77[0x28] != -1)))) {
          lVar66 = *(long *)(param_1[1] + 8);
          if (*(int *)(lVar66 + 0x24) == 2) {
            if (*(char *)(lVar66 + 0x28) != '\0') {
              return;
            }
            uVar110 = 0x74;
          }
          else {
            if (*(char *)(lVar66 + 0x28) != '\0') {
              return;
            }
            uVar110 = 0x75;
          }
          *(undefined4 *)(lVar66 + 0x24) = uVar110;
          *(undefined1 *)(lVar66 + 0x28) = 1;
          return;
        }
        lVar66 = lVar66 + -0x140;
        psVar77 = psVar77 + 0xa0;
      } while (lVar66 != 0);
    }
    else {
      memcpy(__dest,param_1 + 0xd,0xb8);
      *(undefined4 *)(param_1 + 0x305) = 0;
      *(undefined1 *)((long)param_1 + 0x1f95) = 0;
      uVar59 = 0;
      do {
        while (uVar59 == 0x1f) {
          param_1[0x2dc] = 0;
          param_1[0x2dd] = 0;
          uVar59 = 0x20;
          param_1[0x2da] = 0;
          param_1[0x2db] = 0;
          param_1[0x2d8] = 0;
          param_1[0x2d9] = 0;
          param_1[0x2d6] = 0;
          param_1[0x2d7] = 0;
          *(undefined4 *)(param_1 + 0x2de) = 1;
          *(undefined4 *)(param_1 + 0x2e5) = 0;
          param_1[0x2e6] = 0;
          *(undefined4 *)(param_1 + 0x2e7) = 0;
          *(undefined2 *)((long)param_1 + 0x173c) = 0;
          *(undefined8 *)((long)param_1 + 0x171e) = 0;
          param_1[0x2df] = 0;
          param_1[0x2e2] = 0;
          param_1[0x2e3] = 0;
          param_1[0x2e0] = 0;
          param_1[0x2e1] = 0;
          param_1[0x2e8] = 0;
          *(undefined4 *)(param_1 + 0x2e9) = 0xffff;
          *(undefined2 *)((long)param_1 + 0x174c) = 0;
          param_1[0x2ea] = 0;
          *(undefined2 *)(param_1 + 0x2eb) = 0;
          param_1[0x2ec] = 0;
          if (uVar53 < 0x21) goto LAB_71024e4570;
        }
        uVar60 = uVar59 + 1;
        memcpy(param_1 + uVar59 * 0x17 + 0xd,param_1 + uVar59 * 0x17 + 0x24,0xb8);
        uVar53 = *(uint *)(param_1 + 0x2ed);
        uVar59 = uVar60;
      } while (uVar60 < uVar53);
LAB_71024e4570:
      *(uint *)(param_1 + 0x2ed) = uVar53 - 1;
    }
  }
                    /* WARNING: Read-only address (ram,0x007104467fc0) is written */
  return;
code_r0x0071024e07f0:
  uVar64 = uVar64 + 1;
  if (uVar53 <= uVar64) goto switchD_71024de634_caseD_b;
  goto LAB_71024e07d8;
switchD_71024e530c_caseD_5:
  if (*(char *)(lVar93 + 0x25b) != '\0') goto switchD_71024e530c_caseD_3;
  piVar85 = *(int **)(*DAT_710532a868 + 0x340);
  piVar87 = *(int **)(*DAT_710532a868 + 0x348);
  if (piVar85 == piVar87) goto switchD_71024e530c_caseD_6;
LAB_71024e53d0:
  if (*piVar85 != *(int *)(lVar93 + 0x8c)) goto code_r0x0071024e53dc;
  cVar40 = *(char *)((long)piVar85 + 0x7e);
joined_r0x0071024e53f0:
  if (cVar40 != '\0') {
switchD_71024e530c_caseD_3:
    if (2 < *(uint *)(lVar93 + 0x168)) {
      uVar110 = 0;
      if (*(char *)(lVar66 + 0x74) != '\0') {
        uVar110 = 3;
      }
      *(undefined4 *)(lVar66 + 0x21c8) = uVar110;
      *(undefined8 *)(lVar66 + 0xe0) = 0;
      *(undefined8 *)(lVar66 + 0x21bc) = 0;
      *(undefined4 *)(lVar66 + 0x110) = 0;
      *(undefined8 *)(lVar66 + 0x100) = 0;
      *(undefined8 *)(lVar66 + 0x108) = 0;
      *(undefined8 *)(lVar66 + 0xf0) = 0;
      *(undefined8 *)(lVar66 + 0xf8) = 0;
      *(undefined4 *)(lVar66 + 0x140) = 0;
      *(undefined8 *)(lVar66 + 0x130) = 0;
      *(undefined8 *)(lVar66 + 0x138) = 0;
      *(undefined8 *)(lVar66 + 0x120) = 0;
      *(undefined8 *)(lVar66 + 0x128) = 0;
    }
  }
switchD_71024e530c_caseD_6:
  uVar110 = *(undefined4 *)(lVar93 + 0xa0);
  uVar32 = *(undefined4 *)(lVar93 + 0xa4);
  lVar66 = *local_1f0;
  *(ulong *)(lVar66 + 0x2168) = (ulong)*(uint *)(lVar93 + 0xa8);
  *(undefined4 *)(lVar66 + 0x2160) = uVar110;
  *(undefined4 *)(lVar66 + 0x2164) = uVar32;
  lVar66 = *local_1f0;
  uVar110 = *(undefined4 *)(lVar66 + 0x2160);
  uVar32 = *(undefined4 *)(lVar66 + 0x2164);
  *(ulong *)(lVar67 + 0xa8) = (ulong)*(uint *)(lVar66 + 0x2168);
  *(undefined4 *)(lVar67 + 0xa0) = uVar110;
  *(undefined4 *)(lVar67 + 0xa4) = uVar32;
  FUN_7102508e30(lVar67);
  goto switchD_71024de634_caseD_b;
code_r0x0071024e53dc:
  piVar85 = piVar85 + 0x20;
  if (piVar87 == piVar85) goto switchD_71024e530c_caseD_6;
  goto LAB_71024e53d0;
  while (uVar64 = uVar64 + 1, uVar64 < uVar53) {
LAB_71024e1350:
    lVar93 = *(long *)(lVar66 + (ulong)uVar64 * 8 + 8);
    if (((*(ulong *)(lVar93 + 8) ^ uVar59) & 0xffffffffff) == 0) goto LAB_71024e1378;
  }
  lVar93 = 0;
LAB_71024e1378:
  if ((*(char *)(lVar93 + 0x167) == '\0') &&
     (*(undefined1 *)(lVar93 + 0x167) = 1, *(long *)(lVar93 + 0xe8) != 0)) {
    *(undefined4 *)(lVar93 + 0x138) = 2;
    *(undefined4 *)(lVar93 + 0x140) = 0;
    FUN_71024e9c40(lVar93,uVar89,param_3,(byte ****)param_4,(long ****)param_5,(long *)param_6,
                   param_7,param_8);
  }
  goto switchD_71024de634_caseD_b;
joined_r0x0071024e27e0:
  if (puVar55 == puVar84) goto switchD_71024de634_caseD_b;
  if ((*puVar55 & 0xffffffffff) == 0x129edf7a8a) goto LAB_71024e2810;
  puVar55 = puVar55 + 0x17;
  goto joined_r0x0071024e27e0;
joined_r0x0071024e0ea0:
  if (puVar55 == puVar84) goto switchD_71024de634_caseD_b;
  if (((*puVar55 ^ *(ulong *)(lVar93 + 0xd8)) & 0xffffffffff) == 0) goto LAB_71024e2810;
  puVar55 = puVar55 + 0x17;
  goto joined_r0x0071024e0ea0;
LAB_71024e2810:
  local_130 = (long *******)*puVar55;
  ppppppplStack_128 = (long *******)puVar55[1];
  local_120 = (long *******)puVar55[2];
  local_118 = (long *******)puVar55[3];
  local_110 = puVar55[4];
  local_108 = (long *******)puVar55[5];
  local_100 = (long *******)puVar55[6];
  local_f8 = puVar55[7];
  uVar60 = puVar55[8];
  local_d0._0_4_ = (uint)*(undefined8 *)((long)puVar55 + 0x44);
  local_d0._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar55 + 0x44) >> 0x20);
  acStack_c8._0_4_ = (undefined4)*(undefined8 *)((long)puVar55 + 0x4c);
  acStack_c8._4_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar55 + 0x4c) >> 0x20);
  uStack_a8 = *(undefined4 *)((long)puVar55 + 0x6c);
  uStack_b8 = (undefined4)*(undefined8 *)((long)puVar55 + 0x5c);
  local_b4 = (undefined4)((ulong)*(undefined8 *)((long)puVar55 + 0x5c) >> 0x20);
  uStack_b0 = (undefined4)*(undefined8 *)((long)puVar55 + 100);
  local_ac = (undefined4)((ulong)*(undefined8 *)((long)puVar55 + 100) >> 0x20);
  acStack_c8._8_4_ = (undefined4)*(undefined8 *)((long)puVar55 + 0x54);
  acStack_c8._12_4_ = (undefined4)((ulong)*(undefined8 *)((long)puVar55 + 0x54) >> 0x20);
  sVar37 = (short)puVar55[0xe];
  local_150 = (undefined **)
              CONCAT44(CONCAT22((short)uVar59,*(undefined2 *)((long)puVar55 + 0x76)),
                       *(undefined4 *)((long)puVar55 + 0x72));
  uVar59 = puVar55[0xf];
  uVar110 = *(undefined4 *)((long)puVar55 + 0x7c);
  uVar103 = puVar55[0x10];
  uVar88 = puVar55[0x11];
  uVar34 = *(undefined2 *)((long)puVar55 + 0x8c);
  local_d4 = CONCAT22(local_d4._2_2_,*(undefined2 *)((long)puVar55 + 0x8e));
  uVar91 = puVar55[0x12];
  uVar48 = puVar55[0x13];
  uVar35 = *(undefined2 *)((long)puVar55 + 0x9a);
  uVar36 = *(undefined2 *)((long)puVar55 + 0x9c);
  local_d8 = *(undefined2 *)((long)puVar55 + 0x9e);
  uVar95 = puVar55[0x14];
  uVar96 = puVar55[0x15];
  local_168 = (undefined **)
              CONCAT44(CONCAT22(local_168._6_2_,*(undefined2 *)((long)puVar55 + 0xae)),
                       *(undefined4 *)((long)puVar55 + 0xaa));
  uVar64 = *(uint *)(param_1 + 0x2ed);
  if ((uVar64 < 0x20) && (sVar37 != 0)) {
    uVar104 = puVar55[0x16];
    if (((iVar62 != 0x9c) || (*(char *)(param_1[2] + 0x970) != '\0')) &&
       ((uint)(int)(short)param_1[0x2fc] <= uVar53)) {
      bVar51 = FUN_71024e57b0((long)param_1);
      if (!bVar51) {
        param_1[0x2f0] = (long)local_120;
        param_1[0x2f1] = (long)local_118;
        *__dest = (long)local_130;
        param_1[0x2ef] = (long)ppppppplStack_128;
        param_1[0x2f4] = (long)local_100;
        param_1[0x2f5] = local_f8;
        param_1[0x2f2] = local_110;
        param_1[0x2f3] = (long)local_108;
        *(int *)(param_1 + 0x2f6) = (int)uVar60;
        *(ulong *)((long)param_1 + 0x17bc) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
        *(ulong *)((long)param_1 + 0x17b4) = CONCAT44(local_d0._4_4_,(uint)local_d0);
        *(undefined4 *)((long)param_1 + 0x17dc) = uStack_a8;
        *(ulong *)((long)param_1 + 0x17d4) = CONCAT44(local_ac,uStack_b0);
        *(ulong *)((long)param_1 + 0x17cc) = CONCAT44(local_b4,uStack_b8);
        *(ulong *)((long)param_1 + 0x17c4) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
        *(short *)(param_1 + 0x2fc) = sVar37;
        *(undefined4 *)((long)param_1 + 0x17e2) = (undefined4)local_150;
        *(undefined2 *)((long)param_1 + 0x17e6) = local_150._4_2_;
        *(int *)(param_1 + 0x2fd) = (int)uVar59;
        *(undefined4 *)((long)param_1 + 0x17ec) = uVar110;
        param_1[0x2fe] = uVar103;
        *(int *)(param_1 + 0x2ff) = (int)uVar88;
        *(undefined2 *)((long)param_1 + 0x17fc) = uVar34;
        param_1[0x300] = uVar91;
        *(short *)(param_1 + 0x301) = (short)uVar48;
        *(undefined2 *)((long)param_1 + 0x180a) = uVar35;
        *(undefined2 *)((long)param_1 + 0x180c) = uVar36;
        *(undefined2 *)((long)param_1 + 0x17fe) = (undefined2)local_d4;
        param_1[0x302] = uVar95;
        *(undefined2 *)((long)param_1 + 0x180e) = local_d8;
        *(short *)(param_1 + 0x303) = (short)uVar96;
        *(undefined2 *)((long)param_1 + 0x181e) = local_168._4_2_;
        *(undefined4 *)((long)param_1 + 0x181a) = (undefined4)local_168;
        param_1[0x304] = uVar104;
        *(undefined4 *)(param_1 + 0x305) = 0;
        *(undefined1 *)((long)param_1 + 0x1f95) = 0;
        FUN_71024dd520(param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
        goto switchD_71024de634_caseD_b;
      }
      uVar64 = *(uint *)(param_1 + 0x2ed);
    }
    if ((uVar64 != 0) && (uVar53 = uVar64 - 1, -1 < (int)uVar53)) {
      lVar66 = (long)(int)uVar53;
      uVar65 = uVar53;
      if ((uVar64 & 1) != 0) {
        param_3 = (long *********)&DAT_000000b8;
        memcpy(param_1 + (long)(int)uVar64 * 0x17 + 0xd,param_1 + lVar66 * 0x17 + 0xd,0xb8);
        uVar65 = uVar64 - 2;
        lVar66 = lVar66 + -1;
        uVar64 = uVar53;
      }
      if (uVar53 != 0) {
        lVar93 = lVar66 << 0x20;
        plVar101 = param_1 + lVar66 * 0x17 + -10;
        uVar53 = (int)lVar66 - 1;
        do {
          memcpy(param_1 + (long)(int)uVar64 * 0x17 + 0xd,plVar101 + 0x17,0xb8);
          param_3 = (long *********)&DAT_000000b8;
          memcpy(param_1 + (lVar93 >> 0x20) * 0x17 + 0xd,plVar101,0xb8);
          uVar65 = uVar65 - 2;
          lVar93 = lVar93 + -0x200000000;
          plVar101 = plVar101 + -0x2e;
          uVar64 = uVar53;
          uVar53 = uVar53 - 2;
        } while (-1 < (int)uVar65);
      }
      uVar64 = *(uint *)(param_1 + 0x2ed);
    }
    param_1[0xf] = (long)local_120;
    param_1[0x10] = (long)local_118;
    param_1[0xd] = (long)local_130;
    param_1[0xe] = (long)ppppppplStack_128;
    *(int *)(param_1 + 0x15) = (int)uVar60;
    param_1[0x13] = (long)local_100;
    param_1[0x14] = local_f8;
    param_1[0x11] = local_110;
    param_1[0x12] = (long)local_108;
    *(ulong *)((long)param_1 + 0xb4) = CONCAT44(acStack_c8._4_4_,acStack_c8._0_4_);
    *(ulong *)((long)param_1 + 0xac) = CONCAT44(local_d0._4_4_,(uint)local_d0);
    *(short *)(param_1 + 0x1b) = sVar37;
    *(ulong *)((long)param_1 + 0xcc) = CONCAT44(local_ac,uStack_b0);
    *(undefined4 *)((long)param_1 + 0xd4) = uStack_a8;
    *(ulong *)((long)param_1 + 0xc4) = CONCAT44(local_b4,uStack_b8);
    *(ulong *)((long)param_1 + 0xbc) = CONCAT44(acStack_c8._12_4_,acStack_c8._8_4_);
    *(int *)(param_1 + 0x1c) = (int)uVar59;
    *(undefined2 *)((long)param_1 + 0xde) = local_150._4_2_;
    *(undefined4 *)((long)param_1 + 0xe4) = uVar110;
    param_1[0x1d] = uVar103;
    *(int *)(param_1 + 0x1e) = (int)uVar88;
    *(undefined2 *)((long)param_1 + 0xf4) = uVar34;
    *(undefined4 *)((long)param_1 + 0xda) = (undefined4)local_150;
    param_1[0x1f] = uVar91;
    *(short *)(param_1 + 0x20) = (short)uVar48;
    *(undefined2 *)((long)param_1 + 0x102) = uVar35;
    *(undefined2 *)((long)param_1 + 0x104) = uVar36;
    *(undefined2 *)((long)param_1 + 0xf6) = (undefined2)local_d4;
    param_1[0x21] = uVar95;
    *(undefined2 *)((long)param_1 + 0x106) = local_d8;
    *(short *)(param_1 + 0x22) = (short)uVar96;
    *(undefined4 *)((long)param_1 + 0x112) = (undefined4)local_168;
    param_1[0x23] = uVar104;
    *(undefined2 *)((long)param_1 + 0x116) = local_168._4_2_;
    *(uint *)(param_1 + 0x2ed) = uVar64 + 1;
  }
  goto switchD_71024de634_caseD_b;
code_r0x0071024e0090:
  uVar53 = uVar53 + 1;
  if (*(uint *)(lVar66 + 0x3208) <= uVar53) goto switchD_71024de634_caseD_b;
  goto LAB_71024e0078;
code_r0x0071024e0764:
  uVar64 = uVar64 + 1;
  if (uVar53 <= uVar64) goto switchD_71024de634_caseD_b;
  goto LAB_71024e074c;
code_r0x0071024df380:
  uVar64 = uVar64 + 1;
  if (uVar53 <= uVar64) goto switchD_71024de634_caseD_b;
  goto LAB_71024df368;
code_r0x0071024df1b4:
  uVar64 = uVar64 + 1;
  if (uVar53 <= uVar64) goto switchD_71024de634_caseD_b;
  goto LAB_71024df19c;
code_r0x0071024de758:
  uVar64 = uVar64 + 1;
  if (uVar53 <= uVar64) goto switchD_71024de634_caseD_b;
  goto LAB_71024de740;
LAB_71024e0d80:
  if (lVar93 != 0) {
    FUN_71024edaf0(lVar66,lVar93);
  }
  goto switchD_71024de634_caseD_b;
code_r0x0071024e36b4:
  puVar74 = puVar74 + 0x17;
  if (puVar86 == puVar74) goto LAB_71024e446c;
  goto LAB_71024e36a4;
code_r0x0071024e3d88:
  puVar74 = puVar74 + 0x17;
  if (puVar86 == puVar74) goto LAB_71024e446c;
  goto LAB_71024e3d78;
}

