// addr:      7102ada760
// offset:    0x2ada760
// name:      FUN_7102ada760
// mangled:   
// signature: undefined __cdecl FUN_7102ada760(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ada760(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  long *plVar24;
  char *pcVar25;
  long ****pppplVar26;
  long *plVar27;
  long *plVar28;
  undefined8 extraout_x1;
  undefined8 uVar29;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  byte ****ppppbVar30;
  long ****pppplVar31;
  long lVar32;
  long *plVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  byte *pbVar40;
  uint uVar41;
  ulong *puVar42;
  long ****pppplVar43;
  long ****pppplVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  long lVar48;
  undefined1 auVar49 [16];
  long ***local_80;
  long ****local_78;
  ulong local_70;
  undefined4 local_64;
  
  puVar19 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000008;
      param_3 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_7102ada7e0;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102ada7e0:
  plVar21 = (long *)FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000030;
      param_3 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar21 != (long *)0x0)) goto LAB_7102ada834;
    }
    plVar21 = (long *)0x0;
  }
LAB_7102ada834:
  plVar21[3] = 0;
  plVar21[4] = 0;
  plVar21[1] = 0;
  plVar21[2] = 0;
  *plVar21 = param_1;
  *(undefined4 *)(plVar21 + 5) = 0x3f800000;
  *puVar19 = plVar21;
  puVar22 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar22 != (undefined8 *)0x0)) goto LAB_7102ada8a0;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_7102ada8a0:
  *puVar22 = &DAT_710510f598;
  puVar22[1] = 0;
  puVar22[2] = 0;
  puVar22[3] = puVar19;
  *(undefined8 **)(param_1 + 0x828) = puVar19;
  plVar21 = *(long **)(param_1 + 0x830);
  *(undefined8 **)(param_1 + 0x830) = puVar22;
  if (plVar21 != (long *)0x0) {
    plVar24 = plVar21 + 1;
    do {
      lVar32 = *plVar24;
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar14) {
        *plVar24 = lVar32 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar21 = (long *)**(undefined8 **)(param_1 + 0x828);
  if (plVar21 != (long *)0x0) {
    uVar16 = FUN_7103151710((byte *)"PIL0003");
    puVar42 = (ulong *)(plVar21 + 1);
    lVar32 = FUN_710262cd30(*(long *)(*(long *)(*plVar21 + 0x300) + 8),uVar16);
    uVar16 = *(uint *)(lVar32 + 0x110);
    uVar20 = *(ulong *)(lVar32 + 0x108);
    puVar23 = FUN_7102691880(puVar42,0,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar23[1] = (ulong)uVar16;
    *puVar23 = uVar20;
    uVar16 = FUN_7103151710((byte *)"PIL0004");
    lVar32 = FUN_710262cd30(*(long *)(*(long *)(*plVar21 + 0x300) + 8),uVar16);
    uVar16 = *(uint *)(lVar32 + 0x110);
    uVar20 = *(ulong *)(lVar32 + 0x108);
    puVar23 = FUN_7102691880(puVar42,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar23[1] = (ulong)uVar16;
    *puVar23 = uVar20;
    uVar16 = FUN_7103151710((byte *)"PIL0001");
    lVar32 = FUN_710262cd30(*(long *)(*(long *)(*plVar21 + 0x300) + 8),uVar16);
    uVar16 = *(uint *)(lVar32 + 0x110);
    uVar20 = *(ulong *)(lVar32 + 0x108);
    puVar23 = FUN_7102691880(puVar42,2,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar23[1] = (ulong)uVar16;
    *puVar23 = uVar20;
    uVar16 = FUN_7103151710((byte *)"PIL0002");
    lVar32 = FUN_710262cd30(*(long *)(*(long *)(*plVar21 + 0x300) + 8),uVar16);
    uVar20 = *(ulong *)(lVar32 + 0x108);
    uVar16 = *(uint *)(lVar32 + 0x110);
    puVar23 = FUN_7102691880(puVar42,3,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar23[1] = (ulong)uVar16;
    *puVar23 = uVar20;
  }
  plVar21 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000008;
      param_3 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         plVar21 != (long *)0x0)) goto LAB_7102adaaac;
    }
    plVar21 = (long *)0x0;
  }
LAB_7102adaaac:
  FUN_7102ae18c0(plVar21,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar19 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&SUB_00000020;
      param_3 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_7102adab0c;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adab0c:
  *puVar19 = &DAT_710510f5d0;
  puVar19[1] = 0;
  puVar19[2] = 0;
  puVar19[3] = plVar21;
  *(long **)(param_1 + 0x850) = plVar21;
  plVar21 = *(long **)(param_1 + 0x858);
  *(undefined8 **)(param_1 + 0x858) = puVar19;
  if (plVar21 != (long *)0x0) {
    plVar24 = plVar21 + 1;
    do {
      lVar32 = *plVar24;
      cVar2 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar14) {
        *plVar24 = lVar32 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  pppplVar43 = *(long *****)(param_1 + 0x850);
  puVar19 = (undefined8 *)FUN_710392e290(0x10,0x130,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000130;
      pppplVar31 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x130,pppplVar31,param_4,param_5,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_7102adabbc;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adabbc:
  pcVar25 = "dyr_left_up_set";
  pppplVar31 = (long ****)0x0;
  FUN_7102addb00(puVar19,param_1,pppplVar43,(byte *)"dyr_left_up_set",0,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x7c0) = puVar19;
  *(undefined1 *)((long)puVar19 + 0x104) = 0;
  lVar32 = **(long **)(param_1 + 0x828);
  uVar45 = 0;
  uVar46 = 0;
  lVar48 = 0;
  if ((((lVar32 != 0) && (uVar20 = *(ulong *)(lVar32 + 0x10), uVar20 != 0)) &&
      ((long *)**(long **)(lVar32 + 8) != (long *)0x0)) &&
     (plVar21 = *(long **)**(long **)(lVar32 + 8), plVar21 != (long *)0x0)) {
    if ((uVar20 - 1 & uVar20) == 0) {
      do {
        if ((plVar21[1] & uVar20 - 1) != 0) break;
        if ((plVar21[1] == 0) && ((int)plVar21[2] == 0)) goto LAB_7102adac70;
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
    else {
      do {
        uVar34 = plVar21[1];
        if (uVar34 == 0) {
          if ((int)plVar21[2] == 0) goto LAB_7102adac70;
        }
        else {
          if (uVar34 < uVar20) break;
          uVar37 = 0;
          if (uVar20 != 0) {
            uVar37 = uVar34 / uVar20;
          }
          if (uVar34 != uVar37 * uVar20) break;
        }
        plVar21 = (long *)*plVar21;
      } while (plVar21 != (long *)0x0);
    }
  }
  goto LAB_7102adac74;
LAB_7102adac70:
  lVar48 = plVar21[5];
  uVar45 = (undefined4)plVar21[4];
  uVar46 = (undefined4)((ulong)plVar21[4] >> 0x20);
LAB_7102adac74:
  auVar49._4_4_ = uVar46;
  auVar49._0_4_ = uVar45;
  auVar49._8_8_ = lVar48;
  auVar4._4_4_ = uVar46;
  auVar4._0_4_ = uVar45;
  auVar4._8_8_ = lVar48;
  auVar49 = NEON_ext(auVar49,auVar4,8,1);
  *(undefined1 *)(puVar19 + 0xc) = 1;
  puVar19[0x23] = (ulong)auVar49._0_4_;
  puVar19[0x22] = CONCAT44(uVar46,uVar45);
  FUN_710313ef20(*(long **)(param_1 + 0x7c0));
  pppplVar44 = *(long *****)(param_1 + 0x850);
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x130,pppplVar43,(byte ****)pcVar25,pppplVar31,param_6,param_7,
                           param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000130;
      pppplVar43 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x130,pppplVar43,(byte ****)pcVar25,pppplVar31,param_6,
                                   param_7,param_8), puVar19 != (undefined8 *)0x0))
      goto LAB_7102adacf8;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adacf8:
  pcVar25 = "dyr_right_up_set";
  pppplVar43 = (long ****)0x0;
  FUN_7102addb00(puVar19,param_1,pppplVar44,(byte *)"dyr_right_up_set",0,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x7c8) = puVar19;
  *(undefined1 *)((long)puVar19 + 0x104) = 1;
  lVar32 = **(long **)(param_1 + 0x828);
  uVar45 = 0;
  uVar46 = 0;
  lVar48 = 0;
  if ((lVar32 != 0) && (uVar20 = *(ulong *)(lVar32 + 0x10), uVar20 != 0)) {
    uVar37 = uVar20 - 1;
    uVar34 = 1;
    if (uVar20 < 2) {
      uVar34 = (ulong)(uVar37 != 0);
    }
    if ((uVar37 & uVar20) == 0) {
      uVar34 = uVar37 & 1;
    }
    plVar21 = *(long **)(*(long *)(lVar32 + 8) + uVar34 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if ((uVar37 & uVar20) == 0) {
        do {
          uVar20 = plVar21[1];
          if (uVar20 != 1 && (uVar20 & uVar37) != uVar34) break;
          if ((uVar20 == 1) && ((int)plVar21[2] == 1)) goto LAB_7102adade0;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar37 = plVar21[1];
          if (uVar37 == 1) {
            if ((int)plVar21[2] == 1) goto LAB_7102adade0;
          }
          else {
            if (uVar20 <= uVar37) {
              uVar39 = 0;
              if (uVar20 != 0) {
                uVar39 = uVar37 / uVar20;
              }
              uVar37 = uVar37 - uVar39 * uVar20;
            }
            if (uVar37 != uVar34) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_7102adade4:
  auVar5._4_4_ = uVar46;
  auVar5._0_4_ = uVar45;
  auVar5._8_8_ = lVar48;
  auVar6._4_4_ = uVar46;
  auVar6._0_4_ = uVar45;
  auVar6._8_8_ = lVar48;
  auVar49 = NEON_ext(auVar5,auVar6,8,1);
  *(undefined1 *)(puVar19 + 0xc) = 1;
  puVar19[0x23] = (ulong)auVar49._0_4_;
  puVar19[0x22] = CONCAT44(uVar46,uVar45);
  FUN_710313ef20(*(long **)(param_1 + 0x7c8));
  pppplVar31 = *(long *****)(param_1 + 0x850);
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x130,pppplVar44,(byte ****)pcVar25,pppplVar43,param_6,param_7,
                           param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000130;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x130,pppplVar44,(byte ****)pcVar25,pppplVar43,param_6,
                                   param_7,param_8), puVar19 != (undefined8 *)0x0))
      goto LAB_7102adae68;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adae68:
  pcVar25 = "dyr_left_down_set";
  pppplVar43 = (long ****)0x0;
  FUN_7102addb00(puVar19,param_1,pppplVar31,(byte *)"dyr_left_down_set",0,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 2000) = puVar19;
  *(undefined1 *)((long)puVar19 + 0x104) = 2;
  lVar32 = **(long **)(param_1 + 0x828);
  uVar45 = 0;
  uVar46 = 0;
  lVar48 = 0;
  if ((lVar32 != 0) && (uVar20 = *(ulong *)(lVar32 + 0x10), uVar20 != 0)) {
    uVar34 = uVar20 - 1;
    if ((uVar34 & uVar20) == 0) {
      uVar37 = uVar34 & 2;
    }
    else {
      uVar37 = 2;
      if (uVar20 < 3) {
        uVar37 = 0;
        if (uVar20 != 0) {
          uVar37 = 2 / uVar20;
        }
        uVar37 = 2 - uVar37 * uVar20;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar32 + 8) + uVar37 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if ((uVar34 & uVar20) == 0) {
        do {
          uVar20 = plVar21[1];
          if (uVar20 != 2 && (uVar20 & uVar34) != uVar37) break;
          if ((uVar20 == 2) && ((int)plVar21[2] == 2)) goto LAB_7102adaf5c;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar21[1];
          if (uVar34 == 2) {
            if ((int)plVar21[2] == 2) goto LAB_7102adaf5c;
          }
          else {
            if (uVar20 <= uVar34) {
              uVar39 = 0;
              if (uVar20 != 0) {
                uVar39 = uVar34 / uVar20;
              }
              uVar34 = uVar34 - uVar39 * uVar20;
            }
            if (uVar34 != uVar37) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_7102adaf60:
  auVar7._4_4_ = uVar46;
  auVar7._0_4_ = uVar45;
  auVar7._8_8_ = lVar48;
  auVar8._4_4_ = uVar46;
  auVar8._0_4_ = uVar45;
  auVar8._8_8_ = lVar48;
  auVar49 = NEON_ext(auVar7,auVar8,8,1);
  *(undefined1 *)(puVar19 + 0xc) = 1;
  puVar19[0x23] = (ulong)auVar49._0_4_;
  puVar19[0x22] = CONCAT44(uVar46,uVar45);
  FUN_710313ef20(*(long **)(param_1 + 2000));
  pppplVar44 = *(long *****)(param_1 + 0x850);
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x130,pppplVar31,(byte ****)pcVar25,pppplVar43,param_6,param_7,
                           param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000130;
      pppplVar31 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x130,pppplVar31,(byte ****)pcVar25,pppplVar43,param_6,
                                   param_7,param_8), puVar19 != (undefined8 *)0x0))
      goto LAB_7102adafe4;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adafe4:
  pcVar25 = "dyr_right_down_set";
  pppplVar43 = (long ****)0x0;
  FUN_7102addb00(puVar19,param_1,pppplVar44,(byte *)"dyr_right_down_set",0,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x7d8) = puVar19;
  *(undefined1 *)((long)puVar19 + 0x104) = 3;
  lVar32 = **(long **)(param_1 + 0x828);
  uVar45 = 0;
  uVar46 = 0;
  lVar48 = 0;
  if ((lVar32 != 0) && (uVar20 = *(ulong *)(lVar32 + 0x10), uVar20 != 0)) {
    uVar34 = uVar20 - 1;
    if ((uVar34 & uVar20) == 0) {
      uVar37 = uVar34 & 3;
    }
    else {
      uVar37 = 3;
      if (uVar20 < 4) {
        uVar37 = 0;
        if (uVar20 != 0) {
          uVar37 = 3 / uVar20;
        }
        uVar37 = 3 - uVar37 * uVar20;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar32 + 8) + uVar37 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if ((uVar34 & uVar20) == 0) {
        do {
          uVar20 = plVar21[1];
          if (uVar20 != 3 && (uVar20 & uVar34) != uVar37) break;
          if ((uVar20 == 3) && ((int)plVar21[2] == 3)) goto LAB_7102adb0d8;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar34 = plVar21[1];
          if (uVar34 == 3) {
            if ((int)plVar21[2] == 3) goto LAB_7102adb0d8;
          }
          else {
            if (uVar20 <= uVar34) {
              uVar39 = 0;
              if (uVar20 != 0) {
                uVar39 = uVar34 / uVar20;
              }
              uVar34 = uVar34 - uVar39 * uVar20;
            }
            if (uVar34 != uVar37) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
LAB_7102adb0dc:
  auVar9._4_4_ = uVar46;
  auVar9._0_4_ = uVar45;
  auVar9._8_8_ = lVar48;
  auVar10._4_4_ = uVar46;
  auVar10._0_4_ = uVar45;
  auVar10._8_8_ = lVar48;
  auVar49 = NEON_ext(auVar9,auVar10,8,1);
  *(undefined1 *)(puVar19 + 0xc) = 1;
  puVar19[0x23] = (ulong)auVar49._0_4_;
  puVar19[0x22] = CONCAT44(uVar46,uVar45);
  FUN_710313ef20(*(long **)(param_1 + 0x7d8));
  for (plVar21 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0); uVar29 = extraout_x1,
      plVar21 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar32 = *plVar21, *(long *)(lVar32 + 0x68) == 0x153f0a3e53)) {
      *(long *)(param_1 + 0x7f0) = lVar32;
      if (lVar32 != 0) {
        if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar32 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar32 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x22) = 0;
        }
        lVar32 = *(long *)(param_1 + 0x7f0);
        if (lVar32 == 0) {
          lVar32 = 0;
        }
        else {
          *(undefined1 *)(lVar32 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar32 + 0x108),extraout_x1,pppplVar44,(byte ****)pcVar25,
                         pppplVar43,param_6,param_7,param_8);
          lVar32 = *(long *)(param_1 + 0x7f0);
        }
        FUN_710260fdd0(0,lVar32,1);
        lVar32 = *(long *)(param_1 + 0x7f0);
        uVar29 = extraout_x1_01;
        if (lVar32 != 0) {
          if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar32 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar32 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar32 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar32 + 0xb0) + 0x10) = 0;
          }
        }
      }
      goto LAB_7102adb148;
    }
  }
  *(undefined8 *)(param_1 + 0x7f0) = 0;
LAB_7102adb148:
  for (plVar21 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar21 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar32 = *plVar21, *(long *)(lVar32 + 0x68) == 0x164029fb46)) {
      *(long *)(param_1 + 0x7f8) = lVar32;
      if (lVar32 != 0) {
        if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar32 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar32 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x22) = 0;
        }
        lVar32 = *(long *)(param_1 + 0x7f8);
        if (lVar32 == 0) {
          lVar32 = 0;
        }
        else {
          *(undefined1 *)(lVar32 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar32 + 0x108),uVar29,pppplVar44,(byte ****)pcVar25,pppplVar43,
                         param_6,param_7,param_8);
          lVar32 = *(long *)(param_1 + 0x7f8);
        }
        FUN_710260fdd0(0,lVar32,1);
        lVar32 = *(long *)(param_1 + 0x7f8);
        uVar29 = extraout_x1_02;
        if (lVar32 != 0) {
          if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar32 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar32 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar32 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar32 + 0xb0) + 0x10) = 0;
          }
        }
      }
      goto LAB_7102adb190;
    }
  }
  *(undefined8 *)(param_1 + 0x7f8) = 0;
LAB_7102adb190:
  for (plVar21 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar21 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar32 = *plVar21, *(long *)(lVar32 + 0x68) == 0x17961d13b4)) {
      *(long *)(param_1 + 0x800) = lVar32;
      if (lVar32 != 0) {
        if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar32 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar32 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x22) = 0;
        }
        lVar32 = *(long *)(param_1 + 0x800);
        if (lVar32 == 0) {
          lVar32 = 0;
        }
        else {
          *(undefined1 *)(lVar32 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar32 + 0x108),uVar29,pppplVar44,(byte ****)pcVar25,pppplVar43,
                         param_6,param_7,param_8);
          lVar32 = *(long *)(param_1 + 0x800);
        }
        FUN_710260fdd0(0,lVar32,1);
        lVar32 = *(long *)(param_1 + 0x800);
        uVar29 = extraout_x1_03;
        if (lVar32 != 0) {
          if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar32 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar32 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar32 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar32 + 0xb0) + 0x10) = 0;
          }
        }
      }
      goto LAB_7102adb1d8;
    }
  }
  *(undefined8 *)(param_1 + 0x800) = 0;
LAB_7102adb1d8:
  for (plVar21 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar21 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) &&
       (lVar32 = *plVar21, *(long *)(lVar32 + 0x68) == 0x184aa6bcbc)) {
      *(long *)(param_1 + 0x808) = lVar32;
      if (lVar32 != 0) {
        if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar32 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar32 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x22) = 0;
        }
        lVar32 = *(long *)(param_1 + 0x808);
        if (lVar32 == 0) {
          lVar32 = 0;
        }
        else {
          *(undefined1 *)(lVar32 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar32 + 0x108),uVar29,pppplVar44,(byte ****)pcVar25,pppplVar43,
                         param_6,param_7,param_8);
          lVar32 = *(long *)(param_1 + 0x808);
        }
        FUN_710260fdd0(0,lVar32,1);
        lVar32 = *(long *)(param_1 + 0x808);
        if (lVar32 != 0) {
          if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar32 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar32 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar32 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar32 + 0xb0) + 0x10) = 0;
          }
        }
      }
      goto LAB_7102adb220;
    }
  }
  *(undefined8 *)(param_1 + 0x808) = 0;
LAB_7102adb220:
  plVar21 = *(long **)(param_1 + 0x828);
  *(undefined4 *)(param_1 + 0x810) = 0;
  pppplVar31 = (long ****)(param_1 + 0x738);
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar44,(byte ****)pcVar25,pppplVar43,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000008;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar44,(byte ****)pcVar25,pppplVar43,param_6,param_7,
                                   param_8), puVar19 != (undefined8 *)0x0)) goto LAB_7102adb284;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adb284:
  plVar24 = (long *)FUN_710392e290(0x10,0x38,pppplVar44,(byte ****)pcVar25,pppplVar43,param_6,
                                   param_7,param_8);
  if (plVar24 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000038;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (plVar24 = (long *)FUN_710392e290(0x10,0x38,pppplVar44,(byte ****)pcVar25,pppplVar43,
                                           param_6,param_7,param_8), plVar24 != (long *)0x0))
      goto LAB_7102adb2e4;
    }
    plVar24 = (long *)0x0;
  }
LAB_7102adb2e4:
  uVar20 = 0;
  *(undefined2 *)(plVar24 + 6) = 0;
  *plVar24 = param_1;
  plVar24[1] = (long)pppplVar31;
  plVar24[4] = 0;
  plVar24[5] = 0;
  plVar24[2] = 0;
  plVar24[3] = 0;
  lVar32 = param_1;
LAB_7102adb340:
  ppppbVar30 = (byte ****)&DAT_710532d000;
  plVar33 = *(long **)(*(long *)(lVar32 + 0x300) + 0x18);
  plVar28 = (long *)*plVar33;
  plVar33 = (long *)plVar33[1];
  if (plVar28 != plVar33) {
    do {
      uVar16 = (uint)(byte)*(&PTR_s_00_LU_Pillar_710510f868)[uVar20];
      if (uVar16 == 0) {
        uVar37 = 0;
        uVar34 = 0;
      }
      else {
        uVar34 = 0;
        uVar41 = 0xffffffff;
        pbVar40 = (&PTR_s_00_LU_Pillar_710510f868)[uVar20];
        do {
          pbVar40 = pbVar40 + 1;
          uVar17 = uVar16 + 0x20;
          if (0x19 < uVar16 - 0x41) {
            uVar17 = uVar16;
          }
          uVar41 = (&DAT_7104754084)[(uVar17 ^ uVar41) & 0xff] ^ uVar41 >> 8;
          uVar16 = (uint)*pbVar40;
          uVar34 = uVar34 + 0x100000000;
        } while (uVar16 != 0);
        uVar37 = (ulong)~uVar41;
        uVar34 = uVar34 & 0xff00000000;
      }
      if ((*(ulong *)(*plVar28 + 0xa0) & 0xffffffffff) == (uVar34 | uVar37)) {
        lVar48 = *(long *)(*plVar28 + 0x120);
        if ((lVar48 != 0) && (DAT_710532d7b0 != 0)) {
          uVar34 = DAT_710532d7b0 - 1;
          if ((uVar34 & DAT_710532d7b0) == 0) {
            uVar37 = uVar34 & uVar20;
          }
          else {
            uVar37 = uVar20;
            if (DAT_710532d7b0 <= uVar20) {
              uVar37 = 0;
              if (DAT_710532d7b0 != 0) {
                uVar37 = uVar20 / DAT_710532d7b0;
              }
              uVar37 = uVar20 - uVar37 * DAT_710532d7b0;
            }
          }
          plVar28 = *(long **)(DAT_710532d7a8 + uVar37 * 8);
          if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
            if ((uVar34 & DAT_710532d7b0) == 0) goto LAB_7102adb46c;
            goto LAB_7102adb42c;
          }
        }
        break;
      }
      plVar28 = plVar28 + 1;
    } while (plVar28 != plVar33);
  }
  goto LAB_7102adba80;
LAB_7102adade0:
  lVar48 = plVar21[5];
  uVar45 = (undefined4)plVar21[4];
  uVar46 = (undefined4)((ulong)plVar21[4] >> 0x20);
  goto LAB_7102adade4;
LAB_7102adaf5c:
  lVar48 = plVar21[5];
  uVar45 = (undefined4)plVar21[4];
  uVar46 = (undefined4)((ulong)plVar21[4] >> 0x20);
  goto LAB_7102adaf60;
LAB_7102adb0d8:
  lVar48 = plVar21[5];
  uVar45 = (undefined4)plVar21[4];
  uVar46 = (undefined4)((ulong)plVar21[4] >> 0x20);
  goto LAB_7102adb0dc;
LAB_7102adb42c:
  do {
    uVar34 = plVar28[1];
    if (uVar34 == uVar20) {
      if (uVar20 == *(uint *)(plVar28 + 2)) goto LAB_7102adb4a0;
    }
    else {
      if (DAT_710532d7b0 <= uVar34) {
        uVar39 = 0;
        if (DAT_710532d7b0 != 0) {
          uVar39 = uVar34 / DAT_710532d7b0;
        }
        uVar34 = uVar34 - uVar39 * DAT_710532d7b0;
      }
      if (uVar34 != uVar37) break;
    }
    plVar28 = (long *)*plVar28;
  } while (plVar28 != (long *)0x0);
  goto LAB_7102adba80;
LAB_7102adb4a0:
  puVar22 = (undefined8 *)
            FUN_710392e290(0x10,0xd0,(long ****)&DAT_710532d000,(byte ****)&DAT_710532d000,
                           pppplVar43,param_6,param_7,param_8);
  if (puVar22 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_000000d0;
      pppplVar44 = &local_80;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar34 & 1) != 0) &&
         (puVar22 = (undefined8 *)
                    FUN_710392e290(0x10,0xd0,pppplVar44,ppppbVar30,pppplVar43,param_6,param_7,
                                   param_8), puVar22 != (undefined8 *)0x0)) goto LAB_7102adb4fc;
    }
    puVar22 = (undefined8 *)0x0;
  }
LAB_7102adb4fc:
  pbVar40 = (byte *)plVar28[3];
  local_80 = (long ***)0x1;
  local_78 = (long ****)&DAT_100000001;
  local_70 = 0x1000000001;
  FUN_710313e6a0(puVar22,lVar32,&local_80,ppppbVar30,pppplVar43,param_6,param_7,param_8);
  *(undefined4 *)((long)puVar22 + 0x44) = 1;
  *(undefined1 *)((long)puVar22 + 0x5c) = 1;
  *puVar22 = &PTR_FUN_710510f798;
  *(undefined2 *)(puVar22 + 9) = 0;
  *(undefined8 *)((long)puVar22 + 0x54) = 0;
  *(undefined8 *)((long)puVar22 + 0x4c) = 0;
  *(undefined1 *)(puVar22 + 0xc) = 0;
  *(undefined4 *)(puVar22 + 0x12) = 0x3f800000;
  *(undefined1 *)((long)puVar22 + 0x94) = 0;
  puVar22[0xd] = lVar32;
  puVar22[0xe] = 0;
  puVar22[0x10] = 0;
  puVar22[0x11] = 0;
  puVar22[0x13] = 0;
  puVar22[0x14] = 0;
  uVar13 = _DAT_7107521008;
  uVar29 = _ConstantZero;
  *(undefined4 *)(puVar22 + 0x18) = 0;
  *(undefined2 *)((long)puVar22 + 0xc4) = 0x100;
  *(undefined1 *)((long)puVar22 + 0xc6) = 0;
  puVar22[0x17] = uVar13;
  puVar22[0x16] = uVar29;
  if ((pbVar40 != (byte *)0x0) && (uVar16 = (uint)*pbVar40, *pbVar40 != 0)) {
    plVar28 = *(long **)(*(long *)(lVar32 + 0x310) + 0xd0);
    plVar33 = *(long **)(*(long *)(lVar32 + 0x310) + 0xd8);
    if (plVar28 != plVar33) {
      uVar34 = 0;
      uVar41 = 0xffffffff;
      do {
        pbVar40 = pbVar40 + 1;
        uVar17 = uVar16 + 0x20;
        if (0x19 < uVar16 - 0x41) {
          uVar17 = uVar16;
        }
        uVar41 = (&DAT_7104754084)[(uVar17 ^ uVar41) & 0xff] ^ uVar41 >> 8;
        uVar16 = (uint)*pbVar40;
        uVar34 = uVar34 + 0x100000000;
      } while (uVar16 != 0);
      do {
        if ((*(uint *)(plVar28 + 1) < 2) &&
           (lVar35 = *plVar28, (uVar34 & 0xff00000000 | (ulong)~uVar41) == *(ulong *)(lVar35 + 0x68)
           )) {
          puVar22[0xe] = lVar35;
          if (lVar35 != 0) {
            if ((*(char *)(lVar35 + 0xe0) != '\0') && (*(long *)(lVar35 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar35 + 200) + 0x32) = 0;
            }
            if (*(long *)(lVar35 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar35 + 0xd8) + 0x22) = 0;
            }
          }
          goto LAB_7102adb624;
        }
        plVar28 = plVar28 + 2;
      } while (plVar33 != plVar28);
    }
  }
  puVar22[0xe] = 0;
LAB_7102adb624:
  FUN_710260fdd0(0,puVar22[0xe],1);
  lVar35 = puVar22[0xe];
  if (lVar35 != 0) {
    if ((*(char *)(lVar35 + 0xe0) != '\0') && (*(long *)(lVar35 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar35 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar35 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar35 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar35 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar35 + 0xb0) + 0x10) = 0;
    }
  }
  if (puVar22[7] != 0) {
    plVar28 = *(long **)(puVar22[7] + 0x130);
    pppplVar43 = (long ****)0x0;
    (**(code **)(*plVar28 + 0x60))(plVar28,0,lVar48,0);
  }
  lVar48 = puVar22[0xe];
  *(undefined1 *)((long)puVar22 + 0xc6) = 0;
  if ((lVar48 == 0) || (*(char *)(lVar48 + 0xe0) == '\0')) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)(**(long **)(lVar48 + 0x90) + 0x220))();
  }
  local_80 = (long ***)0x16;
  local_70 = 0;
  builtin_strncpy((char *)((ulong)&local_80 | 1),"Pillarfirst",0xb);
  local_78 = (long ****)0x0;
  if (uVar16 != 0) {
    uVar41 = 0;
    do {
      lVar48 = puVar22[0xe];
      pcVar25 = (char *)0x0;
      if (lVar48 != 0) {
        if ((*(char *)(lVar48 + 0xe0) == '\0') ||
           (uVar17 = (**(code **)(**(long **)(lVar48 + 0x90) + 0x220))(), uVar17 <= uVar41)) {
          pcVar25 = (char *)0x0;
        }
        else {
          pcVar25 = (char *)(**(code **)(**(long **)(lVar48 + 0x90) + 0x228))
                                      (*(long **)(lVar48 + 0x90),uVar41);
        }
      }
      pppplVar26 = (long ****)strlen(pcVar25);
      pppplVar44 = (long ****)((ulong)local_80 >> 1 & 0x7f);
      if (((ulong)local_80 & 1) != 0) {
        pppplVar44 = local_78;
      }
      if ((pppplVar26 == pppplVar44) &&
         (iVar18 = std::string::compare
                             ((ulong)&local_80,0,(char *)0xffffffffffffffff,(ulong)pcVar25),
         pppplVar43 = pppplVar26, iVar18 == 0)) {
        *(undefined1 *)((long)puVar22 + 0xc6) = 1;
        break;
      }
      uVar41 = uVar41 + 1;
    } while (uVar41 < uVar16);
  }
  if ((((ulong)local_80 & 1) != 0) && (local_70 != 0)) {
    FUN_710392eb40(local_70);
  }
  *(undefined1 *)((long)puVar22 + 0xc5) = *(undefined1 *)(lVar32 + 0x18);
  lVar32 = (**(code **)(**(long **)(puVar22[7] + 0x130) + 0x1a0))();
  if (*(long *)(lVar32 + 0x30) != 0) {
    lVar48 = *(long *)(lVar32 + 0x38);
    lVar32 = lVar48 + *(long *)(lVar32 + 0x30) * 0x2d0;
    do {
      iVar18 = *(int *)(lVar48 + 0xc);
      if (0 < iVar18) {
        iVar1 = *(int *)(lVar48 + 8);
        lVar35 = (long)iVar1;
        do {
          lVar38 = *(long *)(lVar48 + lVar35 * 8 + 0x30);
          if (lVar38 != 0) {
            *(code **)(lVar38 + 0x30) = FUN_710313f320;
          }
          lVar35 = lVar35 + 1;
        } while (lVar35 < iVar18 + iVar1);
      }
      lVar48 = lVar48 + 0x2d0;
    } while (lVar48 != lVar32);
  }
  lVar48 = 0;
  uVar46 = 0;
  uVar47 = 0;
  plVar28 = plVar24 + uVar20 + 2;
  *plVar28 = (long)puVar22;
  lVar32 = *plVar21;
  uVar45 = uVar46;
  if (lVar32 != 0) {
    uVar34 = *(ulong *)(lVar32 + 0x10);
    lVar48 = 0;
    uVar45 = 0;
    if (uVar34 != 0) {
      uVar39 = uVar34 - 1;
      iVar18 = (int)uVar20;
      uVar37 = (ulong)iVar18;
      if ((uVar39 & uVar34) == 0) {
        uVar36 = uVar39 & uVar37;
      }
      else {
        uVar36 = uVar37;
        if (uVar34 <= uVar37) {
          uVar36 = 0;
          if (uVar34 != 0) {
            uVar36 = uVar37 / uVar34;
          }
          uVar36 = uVar37 - uVar36 * uVar34;
        }
      }
      plVar33 = *(long **)(*(long *)(lVar32 + 8) + uVar36 * 8);
      lVar48 = 0;
      uVar45 = uVar46;
      if (plVar33 != (long *)0x0) {
        plVar33 = (long *)*plVar33;
        lVar48 = 0;
        uVar45 = 0;
        if (plVar33 != (long *)0x0) {
          if ((uVar39 & uVar34) == 0) {
            do {
              uVar34 = plVar33[1];
              if (uVar34 != uVar37 && (uVar34 & uVar39) != uVar36) break;
              if ((uVar34 == uVar37) && ((int)plVar33[2] == iVar18)) goto LAB_7102adb970;
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
          else {
            do {
              uVar39 = plVar33[1];
              if (uVar39 == uVar37) {
                if ((int)plVar33[2] == iVar18) goto LAB_7102adb970;
              }
              else {
                if (uVar34 <= uVar39) {
                  uVar3 = 0;
                  if (uVar34 != 0) {
                    uVar3 = uVar39 / uVar34;
                  }
                  uVar39 = uVar39 - uVar3 * uVar34;
                }
                if (uVar39 != uVar36) break;
              }
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
          }
          lVar48 = 0;
          uVar45 = uVar46;
        }
      }
    }
  }
  goto LAB_7102adb974;
LAB_7102adb970:
  lVar48 = plVar33[5];
  uVar47 = (undefined4)((ulong)plVar33[4] >> 0x20);
  uVar45 = (int)plVar33[4];
LAB_7102adb974:
  auVar11._4_4_ = uVar47;
  auVar11._0_4_ = uVar45;
  auVar11._8_8_ = lVar48;
  auVar12._4_4_ = uVar47;
  auVar12._0_4_ = uVar45;
  auVar12._8_8_ = lVar48;
  auVar49 = NEON_ext(auVar11,auVar12,8,1);
  bVar14 = uVar20 < 2;
  lVar32 = 0x2c;
  if (!bVar14) {
    lVar32 = 0x28;
  }
  puVar22[0x11] = (ulong)auVar49._0_4_;
  puVar22[0x10] = CONCAT44(uVar47,uVar45);
  iVar18 = *(int *)(plVar24[1] + lVar32);
  *(float *)(puVar22 + 0x14) = (float)iVar18;
  *(float *)((long)puVar22 + 0x9c) = (float)iVar18;
  bVar15 = *(char *)(*plVar24 + 0x18) != '\0';
  *(bool *)(*plVar28 + 0x60) = bVar14 && bVar15;
  plVar28 = (long *)*plVar28;
  if (bVar14 && bVar15) {
    FUN_710313ef20(plVar28);
    lVar32 = *plVar24;
    uVar20 = uVar20 + 1;
    goto LAB_7102adb340;
  }
  if ((char)plVar28[8] != '\0') {
    plVar33 = (long *)plVar28[6];
    if (((plVar33 != (long *)0x0) && ((char)plVar33[2] != '\0')) &&
       (*(undefined1 *)(plVar33 + 2) = 0, (char)plVar33[10] != '\0')) {
      plVar27 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar33 + 8));
      (**(code **)(*plVar27 + 0x48))(plVar27,0);
      *(undefined1 *)(plVar33 + 10) = 0;
    }
    (**(code **)(*plVar28 + 0x30))(plVar28);
  }
  *(undefined1 *)(plVar28 + 8) = 0;
  goto LAB_7102adba80;
  while( true ) {
    if ((uVar39 == uVar20) && (uVar20 == *(uint *)(plVar28 + 2))) goto LAB_7102adb4a0;
    plVar28 = (long *)*plVar28;
    if (plVar28 == (long *)0x0) break;
LAB_7102adb46c:
    uVar39 = plVar28[1];
    if (uVar39 != uVar20 && (uVar39 & uVar34) != uVar37) break;
  }
LAB_7102adba80:
  ppppbVar30 = (byte ****)&DAT_710532d000;
  pppplVar44 = (long ****)&DAT_710532d000;
  uVar29 = 0xd0;
  uVar20 = uVar20 + 1;
  if (uVar20 != 4) {
    lVar32 = *plVar24;
    goto LAB_7102adb340;
  }
  *puVar19 = plVar24;
  puVar23 = *(ulong **)(param_1 + 0x820);
  *(undefined8 **)(param_1 + 0x820) = puVar19;
  if (puVar23 != (ulong *)0x0) {
    uVar20 = *puVar23;
    *puVar23 = 0;
    if (uVar20 != 0) {
      FUN_710392eb40(uVar20);
    }
    FUN_710392eb40((ulong)puVar23);
    uVar29 = extraout_x1_00;
  }
  for (plVar21 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar21 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar21 = plVar21 + 2) {
    if ((*(uint *)(plVar21 + 1) < 2) && (lVar32 = *plVar21, *(long *)(lVar32 + 0x68) == 0xe5dc69478)
       ) {
      if (lVar32 != 0) {
        *(undefined1 *)(lVar32 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar32 + 0x108),uVar29,pppplVar44,ppppbVar30,pppplVar43,param_6,
                       param_7,param_8);
        *(byte *)(lVar32 + 0x118) = *(byte *)(lVar32 + 0x118) | 1;
      }
      break;
    }
  }
  plVar21 = (long *)FUN_710392e290(0x10,0x160,pppplVar44,ppppbVar30,pppplVar43,param_6,param_7,
                                   param_8);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000160;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x160,pppplVar44,ppppbVar30,pppplVar43,param_6,
                                           param_7,param_8), plVar21 != (long *)0x0))
      goto LAB_7102adbc88;
    }
    plVar21 = (long *)0x0;
  }
LAB_7102adbc88:
  pcVar25 = "stc_ghostfloorl_set";
  ppppbVar30 = (byte ****)0x0;
  pppplVar43 = pppplVar31;
  FUN_7102adef90(plVar21,param_1,(long ****)"stc_ghostfloorl_set",0,pppplVar31,param_6,param_7,
                 param_8);
  *(long **)(param_1 + 0x840) = plVar21;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if ((char)plVar21[8] != '\0') {
      plVar24 = (long *)plVar21[6];
      if (((plVar24 != (long *)0x0) && ((char)plVar24[2] != '\0')) &&
         (*(undefined1 *)(plVar24 + 2) = 0, (char)plVar24[10] != '\0')) {
        plVar28 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar24 + 8));
        (**(code **)(*plVar28 + 0x48))(plVar28,0);
        *(undefined1 *)(plVar24 + 10) = 0;
      }
      (**(code **)(*plVar21 + 0x30))(plVar21);
    }
    *(undefined1 *)(plVar21 + 8) = 0;
  }
  else {
    FUN_710313ef20(plVar21);
  }
  plVar21 = (long *)FUN_710392e290(0x10,0x160,(long ****)pcVar25,ppppbVar30,pppplVar43,param_6,
                                   param_7,param_8);
  if (plVar21 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000160;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (plVar21 = (long *)FUN_710392e290(0x10,0x160,pppplVar44,ppppbVar30,pppplVar43,param_6,
                                           param_7,param_8), plVar21 != (long *)0x0))
      goto LAB_7102adbd70;
    }
    plVar21 = (long *)0x0;
  }
LAB_7102adbd70:
  pcVar25 = "stc_ghostfloorr_set";
  ppppbVar30 = (byte ****)0x1;
  pppplVar43 = pppplVar31;
  FUN_7102adef90(plVar21,param_1,(long ****)"stc_ghostfloorr_set",1,pppplVar31,param_6,param_7,
                 param_8);
  *(long **)(param_1 + 0x848) = plVar21;
  if (*(char *)(param_1 + 0x18) == '\0') {
    if ((char)plVar21[8] != '\0') {
      plVar24 = (long *)plVar21[6];
      if (((plVar24 != (long *)0x0) && ((char)plVar24[2] != '\0')) &&
         (*(undefined1 *)(plVar24 + 2) = 0, (char)plVar24[10] != '\0')) {
        plVar28 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar24 + 8));
        (**(code **)(*plVar28 + 0x48))(plVar28,0);
        *(undefined1 *)(plVar24 + 10) = 0;
      }
      (**(code **)(*plVar21 + 0x30))(plVar21);
    }
    *(undefined1 *)(plVar21 + 8) = 0;
  }
  else {
    FUN_710313ef20(plVar21);
  }
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)pcVar25,ppppbVar30,pppplVar43,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000008;
      pppplVar44 = &local_80;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar20 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar44,ppppbVar30,pppplVar43,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_7102adbe58;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7102adbe58:
  FUN_7102ae0e30(puVar19,param_1,pppplVar31,ppppbVar30,pppplVar43,param_6,param_7,param_8);
  puVar23 = *(ulong **)(param_1 + 0x818);
  *(undefined8 **)(param_1 + 0x818) = puVar19;
  if (puVar23 == (ulong *)0x0) {
    return;
  }
  uVar20 = *puVar23;
  *puVar23 = 0;
  if (uVar20 != 0) {
    plVar21 = *(long **)(uVar20 + 0x68);
    *(undefined8 *)(uVar20 + 0x68) = 0;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    FUN_710392eb40(uVar20);
  }
  FUN_710392eb40((ulong)puVar23);
  return;
}

