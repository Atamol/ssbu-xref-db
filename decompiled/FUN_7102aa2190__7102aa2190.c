// addr:      7102aa2190
// offset:    0x2aa2190
// name:      FUN_7102aa2190
// mangled:   
// signature: undefined __cdecl FUN_7102aa2190(undefined8 * param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102aa2190(undefined8 *param_1,long param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  plVar2 = param_1 + 3;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  pppplVar5 = (long ****)0x217;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  pppplVar6 = param_5;
  uVar7 = param_6;
  memset(plVar2,0,0x217);
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  for (plVar3 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar3 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar3 = plVar3 + 2) {
    if ((*(uint *)(plVar3 + 1) < 2) && (lVar9 = *plVar3, *(long *)(lVar9 + 0x68) == 0x119612cae1)) {
      param_1[3] = lVar9;
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0xd8) != 0)) goto LAB_7102aa22d0;
      plVar3 = FUN_71026533a0((undefined8 *)(lVar9 + 0x90),0,pppplVar5,param_4,pppplVar6,uVar7,
                              param_7,param_8);
      plVar4 = *(long **)(lVar9 + 0xd8);
      *(long **)(lVar9 + 0xd8) = plVar3;
      if (plVar4 == (long *)0x0) goto LAB_7102aa22d0;
      (**(code **)(*plVar4 + 8))();
      lVar9 = *plVar2;
      goto joined_r0x007102aa24ac;
    }
  }
  param_1[3] = 0;
LAB_7102aa22d0:
  lVar9 = *plVar2;
joined_r0x007102aa24ac:
  if (lVar9 == 0) {
LAB_7102aa24b0:
    *(undefined4 *)((long)param_1 + 0x2ac) = 0xffffffff;
LAB_7102aa24b8:
    *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
LAB_7102aa24c0:
    *(undefined4 *)((long)param_1 + 0x2b4) = 0xffffffff;
LAB_7102aa24c8:
    *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
LAB_7102aa24d0:
    *(undefined4 *)((long)param_1 + 700) = 0xffffffff;
LAB_7102aa24d8:
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
LAB_7102aa24e0:
    *(undefined4 *)((long)param_1 + 0x2c4) = 0xffffffff;
LAB_7102aa24e8:
    *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
LAB_7102aa24f0:
    *(undefined4 *)((long)param_1 + 0x2cc) = 0xffffffff;
LAB_7102aa24f8:
    *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
LAB_7102aa2500:
    *(undefined4 *)((long)param_1 + 0x2d4) = 0xffffffff;
LAB_7102aa2508:
    *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
LAB_7102aa2510:
    *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
LAB_7102aa2518:
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
LAB_7102aa2520:
    *(undefined4 *)((long)param_1 + 0x2e4) = 0xffffffff;
LAB_7102aa2528:
    *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
LAB_7102aa2530:
    *(undefined4 *)((long)param_1 + 0x2ec) = 0xffffffff;
LAB_7102aa2538:
    *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
LAB_7102aa2540:
    *(undefined4 *)((long)param_1 + 0x2f4) = 0xffffffff;
LAB_7102aa2548:
    *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
LAB_7102aa2550:
    *(undefined4 *)((long)param_1 + 0x2fc) = 0xffffffff;
LAB_7102aa2558:
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
LAB_7102aa2560:
    *(undefined4 *)((long)param_1 + 0x304) = 0xffffffff;
LAB_7102aa2568:
    *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
LAB_7102aa2570:
    *(undefined4 *)((long)param_1 + 0x30c) = 0xffffffff;
LAB_7102aa2578:
    *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
LAB_7102aa2580:
    *(undefined4 *)((long)param_1 + 0x314) = 0xffffffff;
LAB_7102aa2588:
    *(undefined4 *)(param_1 + 99) = 0xffffffff;
  }
  else {
    *(byte *)(lVar9 + 0x118) = *(byte *)(lVar9 + 0x118) | 1;
    lVar9 = *plVar2;
    if (lVar9 == 0) goto LAB_7102aa24b0;
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN3");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2ac) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa2320;
      }
      goto LAB_7102aa24b8;
    }
    *(undefined4 *)((long)param_1 + 0x2ac) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa2320:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN4");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x56) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa2350;
      }
      goto LAB_7102aa24c0;
    }
    *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa2350:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN9");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2b4) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa2380;
      }
      goto LAB_7102aa24c8;
    }
    *(undefined4 *)((long)param_1 + 0x2b4) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa2380:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN10");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x57) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa23b0;
      }
      goto LAB_7102aa24d0;
    }
    *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa23b0:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN15");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 700) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa23e0;
      }
      goto LAB_7102aa24d8;
    }
    *(undefined4 *)((long)param_1 + 700) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa23e0:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN2");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x58) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa2410;
      }
      goto LAB_7102aa24e0;
    }
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa2410:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN5");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2c4) = uVar1;
      if (lVar9 != 0) {
        lVar8 = *(long *)(lVar9 + 0xd8);
        goto joined_r0x007102aa2440;
      }
      goto LAB_7102aa24e8;
    }
    *(undefined4 *)((long)param_1 + 0x2c4) = 0xffffffff;
    lVar8 = *(long *)(lVar9 + 0xd8);
joined_r0x007102aa2440:
    if (lVar8 != 0) {
      plVar2 = *(long **)(*(long *)(lVar8 + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN8");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x59) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2630;
      goto LAB_7102aa24f0;
    }
    *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
LAB_7102aa2630:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN11");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2cc) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa266c;
      goto LAB_7102aa24f8;
    }
    *(undefined4 *)((long)param_1 + 0x2cc) = 0xffffffff;
LAB_7102aa266c:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN14");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5a) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa26a8;
      goto LAB_7102aa2500;
    }
    *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
LAB_7102aa26a8:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN1");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2d4) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa26e4;
      goto LAB_7102aa2508;
    }
    *(undefined4 *)((long)param_1 + 0x2d4) = 0xffffffff;
LAB_7102aa26e4:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN6");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5b) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2720;
      goto LAB_7102aa2510;
    }
    *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
LAB_7102aa2720:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN7");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2dc) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa275c;
      goto LAB_7102aa2518;
    }
    *(undefined4 *)((long)param_1 + 0x2dc) = 0xffffffff;
LAB_7102aa275c:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN12");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2798;
      goto LAB_7102aa2520;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
LAB_7102aa2798:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN13");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2e4) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa27d4;
      goto LAB_7102aa2528;
    }
    *(undefined4 *)((long)param_1 + 0x2e4) = 0xffffffff;
LAB_7102aa27d4:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN28");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5d) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2810;
      goto LAB_7102aa2530;
    }
    *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
LAB_7102aa2810:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN27");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2ec) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa284c;
      goto LAB_7102aa2538;
    }
    *(undefined4 *)((long)param_1 + 0x2ec) = 0xffffffff;
LAB_7102aa284c:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN22");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5e) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2888;
      goto LAB_7102aa2540;
    }
    *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
LAB_7102aa2888:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN21");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2f4) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa28c4;
      goto LAB_7102aa2548;
    }
    *(undefined4 *)((long)param_1 + 0x2f4) = 0xffffffff;
LAB_7102aa28c4:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN16");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x5f) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2900;
      goto LAB_7102aa2550;
    }
    *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
LAB_7102aa2900:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN29");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x2fc) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa293c;
      goto LAB_7102aa2558;
    }
    *(undefined4 *)((long)param_1 + 0x2fc) = 0xffffffff;
LAB_7102aa293c:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN26");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x60) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2978;
      goto LAB_7102aa2560;
    }
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
LAB_7102aa2978:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN23");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x304) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa29b4;
      goto LAB_7102aa2568;
    }
    *(undefined4 *)((long)param_1 + 0x304) = 0xffffffff;
LAB_7102aa29b4:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN20");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x61) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa29f0;
      goto LAB_7102aa2570;
    }
    *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
LAB_7102aa29f0:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN17");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x30c) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2a2c;
      goto LAB_7102aa2578;
    }
    *(undefined4 *)((long)param_1 + 0x30c) = 0xffffffff;
LAB_7102aa2a2c:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN30");
      lVar9 = param_1[3];
      *(undefined4 *)(param_1 + 0x62) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2a68;
      goto LAB_7102aa2580;
    }
    *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
LAB_7102aa2a68:
    if (*(long *)(lVar9 + 0xd8) != 0) {
      plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN25");
      lVar9 = param_1[3];
      *(undefined4 *)((long)param_1 + 0x314) = uVar1;
      if (lVar9 != 0) goto LAB_7102aa2aa4;
      goto LAB_7102aa2588;
    }
    *(undefined4 *)((long)param_1 + 0x314) = 0xffffffff;
LAB_7102aa2aa4:
    if (*(long *)(lVar9 + 0xd8) == 0) {
      *(undefined4 *)(param_1 + 99) = 0xffffffff;
LAB_7102aa2ae0:
      if (*(long *)(lVar9 + 0xd8) == 0) {
        *(undefined4 *)((long)param_1 + 0x31c) = 0xffffffff;
LAB_7102aa2b1c:
        if (*(long *)(lVar9 + 0xd8) != 0) {
          plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
          uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN18");
          goto LAB_7102aa2598;
        }
      }
      else {
        plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
        uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN19");
        lVar9 = param_1[3];
        *(undefined4 *)((long)param_1 + 0x31c) = uVar1;
        if (lVar9 != 0) goto LAB_7102aa2b1c;
      }
      uVar1 = 0xffffffff;
      goto LAB_7102aa2598;
    }
    plVar2 = *(long **)(*(long *)(*(long *)(lVar9 + 0xd8) + 8) + 8);
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,"BlockN24");
    lVar9 = param_1[3];
    *(undefined4 *)(param_1 + 99) = uVar1;
    if (lVar9 != 0) goto LAB_7102aa2ae0;
  }
  uVar1 = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x31c) = 0xffffffff;
LAB_7102aa2598:
  *(undefined4 *)(param_1 + 100) = uVar1;
  param_1[0x41] = param_6;
  param_1[0x40] = param_5;
  return;
}

