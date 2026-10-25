// addr:      71018c4f50
// offset:    0x18c4f50
// name:      FUN_71018c4f50
// mangled:   
// signature: undefined __cdecl FUN_71018c4f50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018c4f50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  undefined2 uVar9;
  ushort uVar10;
  char cVar11;
  byte ***pppbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  bool bVar15;
  int iVar16;
  undefined4 *puVar17;
  long ***ppplVar18;
  long *plVar19;
  ulong uVar20;
  float *pfVar21;
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
  long *plVar22;
  undefined8 extraout_x1_18;
  undefined8 uVar23;
  long ****pppplVar24;
  char *pcVar25;
  undefined **ppuVar26;
  code *pcVar27;
  ulong uVar28;
  undefined1 *puVar29;
  uint uVar30;
  byte *pbVar31;
  ushort *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined8 uVar36;
  uint *puVar37;
  uint *puVar38;
  undefined8 *puVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  long ****pppplVar43;
  long lVar44;
  float fVar45;
  long **pplVar46;
  long **pplVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 *local_250;
  undefined4 *local_248;
  undefined4 *local_240;
  undefined8 local_238;
  long ****local_230;
  undefined8 uStack_228;
  float local_220;
  undefined4 uStack_21c;
  long ****pppplStack_218;
  long ****local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  short local_1e8;
  undefined1 uStack_1e6;
  undefined1 uStack_1e5;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined1 uStack_1e2;
  undefined1 uStack_1e1;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined2 uStack_1de;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  long local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_74 [5];
  
  uVar35 = (uint)param_3;
  switch((int)param_2) {
  case 1:
    break;
  case 2:
    pppplVar43 = (long ****)(ulong)(~uVar35 & 1);
    FUN_71018c84c0(param_1,*(uint *)(param_1 + 0x1a0),~uVar35 & 1,param_4,param_5,param_6,param_7,
                   param_8);
    lVar41 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
    if (*(int *)(lVar41 + 8) != -1) {
      puVar39 = *(undefined8 **)(lVar41 + 0x18);
      *(undefined4 *)(lVar41 + 8) = 0xffffffff;
      uVar23 = extraout_x1_08;
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x18) = 0;
        FUN_7103375760(puVar39);
        FUN_710392eb40((ulong)puVar39);
        uVar23 = extraout_x1_09;
      }
      puVar39 = *(undefined8 **)(lVar41 + 0x10);
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x10) = 0;
        puVar42 = (undefined8 *)*puVar39;
        *puVar39 = 0;
        if (puVar42 != (undefined8 *)0x0) {
          FUN_7103773770(puVar42,uVar23,pppplVar43,param_4,param_5,param_6,param_7,param_8);
          FUN_710392eb40((ulong)puVar42);
        }
        FUN_710392eb40((ulong)puVar39);
      }
    }
    if (*(long *)(param_1 + 0x180) == 0) {
      puVar39 = (undefined8 *)
                FUN_710392e290(0x10,0x88,pppplVar43,param_4,param_5,param_6,param_7,param_8);
      if (puVar39 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = 0.0;
          local_200._0_4_ = 1.90577e-43;
          local_200._4_4_ = 0;
          pppplVar43 = (long ****)&local_200;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          if (((uVar20 & 1) != 0) &&
             (puVar39 = (undefined8 *)
                        FUN_710392e290(0x10,0x88,pppplVar43,param_4,param_5,param_6,param_7,param_8)
             , puVar39 != (undefined8 *)0x0)) goto LAB_71018c5788;
        }
        puVar39 = (undefined8 *)0x0;
      }
LAB_71018c5788:
      *puVar39 = &PTR_FUN_71050aee90;
      puVar39[1] = 0;
      puVar39[0xc] = 0;
      puVar39[0xd] = 0x1ffffffff;
      *(undefined1 *)(puVar39 + 0xb) = 0;
      puVar39[2] = 0;
      puVar39[3] = 0;
      puVar39[0xf] = (long *)(param_1 + 0x160);
      *(undefined1 *)(puVar39 + 0xe) = 1;
      puVar39[9] = 0;
      puVar39[10] = 0;
      puVar42 = (undefined8 *)
                FUN_710392e290(0x10,0x68,pppplVar43,param_4,param_5,param_6,param_7,param_8);
      if (puVar42 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = 0.0;
          local_200._0_4_ = 1.45735e-43;
          local_200._4_4_ = 0;
          pppplVar43 = (long ****)&local_200;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          if (((uVar20 & 1) != 0) &&
             (puVar42 = (undefined8 *)
                        FUN_710392e290(0x10,0x68,pppplVar43,param_4,param_5,param_6,param_7,param_8)
             , puVar42 != (undefined8 *)0x0)) goto LAB_71018c580c;
        }
        puVar42 = (undefined8 *)0x0;
      }
LAB_71018c580c:
      *(undefined4 *)(puVar42 + 1) = 0x1000;
      puVar42[3] = 0;
      puVar42[4] = 0;
      puVar42[2] = 0;
      ppuVar26 = &PTR_DAT_71050aee70;
      param_4 = (byte ****)0x2dd5c9e030;
      param_5 = (long ****)0x1;
      puVar42[6] = 0;
      puVar42[5] = puVar42 + 6;
      fVar45 = -2.876587e-38;
      puVar42[7] = 0;
      puVar42[8] = 0;
      *puVar42 = &PTR_FUN_71050aeec8;
      *(undefined1 *)(puVar42 + 9) = 0;
      *(undefined8 *)((long)puVar42 + 0x51) = 0;
      *(undefined8 *)((long)puVar42 + 0x4c) = 0;
      *(undefined1 *)((long)puVar42 + 100) = 0;
      *(undefined8 *)((long)puVar42 + 0x5c) = 0;
      puVar39[0x10] = puVar42;
      FUN_71032cb040((long)puVar42,(long *)(param_1 + 0x160),(long ****)&PTR_DAT_71050aee70,
                     (byte ****)0x2dd5c9e030,(long ****)0x1,param_6,param_7,param_8);
      lVar41 = puVar39[0x10];
      pbVar31 = (byte *)&uStack_1f8;
      uStack_1f8._4_2_ = 0x32;
      uVar33 = 0x74;
      local_200._0_4_ = fVar45;
      do {
        pbVar31 = (byte *)((long)pbVar31 + 1);
        local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar33);
        uVar33 = (uint)*pbVar31;
      } while (uVar33 != 0);
      if ((0xd < DAT_710523d00c) ||
         (*(int *)(&UNK_7104742e80 + (long)(int)DAT_710523d00c * 4) - 1U < 7)) {
        uStack_1f8._4_2_ = 0x33;
        pbVar31 = (byte *)&uStack_1f8;
        uVar33 = 0x74;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          fVar45 = (float)((int)fVar45 * 0x89 ^ uVar33);
          uVar33 = (uint)*pbVar31;
          local_200._0_4_ = fVar45;
        } while (uVar33 != 0);
      }
      uStack_1f8._0_4_ = 0x5f747874;
      local_200._4_4_ = 5;
      if (*(undefined8 **)(lVar41 + 0x18) == *(undefined8 **)(lVar41 + 0x10)) {
LAB_71018c84ac:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7103776640((undefined8 *)&local_220,**(long **)**(undefined8 **)(lVar41 + 0x10) + 8,
                     (byte ****)"btn_00",ppuVar26,param_4,param_5,param_6,param_7,param_8);
      pppplVar43 = pppplStack_218;
      FUN_7103778300(0x3f800000,(long)pppplStack_218,(long)&uStack_1f8);
      local_220 = 7.704177e-36;
      uStack_21c = 0x71;
      pppplStack_218 = (long ****)0x0;
      uVar23 = extraout_x1_10;
      if (pppplVar43 != (long ****)0x0) {
        ppplVar18 = pppplVar43[3];
        pppplVar43[2] = (long ***)&PTR_FUN_710523d9a8;
        pppplVar43[3] = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar18);
        }
        FUN_710392eb40((ulong)pppplVar43);
        uVar23 = extraout_x1_11;
      }
      if (*(undefined8 **)(lVar41 + 0x40) != (undefined8 *)0x0) {
        plVar19 = (long *)**(undefined8 **)(lVar41 + 0x40);
        if (plVar19 == (long *)0x0) {
          lVar40 = 0;
        }
        else {
          lVar40 = *plVar19;
        }
        if (*(undefined8 **)(lVar41 + 0x18) == *(undefined8 **)(lVar41 + 0x10)) goto LAB_71018c84ac;
        ppuVar26 = *(undefined ***)**(undefined8 **)(lVar41 + 0x10);
        FUN_71033743c0(lVar40,"layout_root",ppuVar26);
        uVar23 = extraout_x1_13;
        if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
          ppuVar26 = (undefined **)&DAT_71042b2a84;
          param_4 = (byte ****)&DAT_ffffffff;
          FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"BUTTON_ID_NONE",&DAT_71042b2a84);
          uVar23 = extraout_x1_14;
          if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
            ppuVar26 = (undefined **)&DAT_71042b2a84;
            param_4 = (byte ****)0x0;
            FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"BUTTON_ID_FULL_KEY_CON",
                           &DAT_71042b2a84);
            uVar23 = extraout_x1_15;
            if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
              ppuVar26 = (undefined **)&DAT_71042b2a84;
              param_4 = (byte ****)0x1;
              FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"BUTTON_ID_JOY_CON",
                             &DAT_71042b2a84);
              uVar23 = extraout_x1_16;
              if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
                ppuVar26 = (undefined **)&DAT_71042b2a84;
                param_4 = (byte ****)0x2;
                FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"BUTTON_ID_GC_CON",
                               &DAT_71042b2a84);
                uVar23 = extraout_x1_17;
              }
            }
          }
        }
      }
      puVar39[2] = &DAT_7105333600;
      uVar13 = DAT_7105333664;
      *(undefined4 *)(puVar39 + 0xd) = DAT_7105333660;
      *(undefined4 *)((long)puVar39 + 0x6c) = uVar13;
      do {
        uVar33 = DAT_7105333650;
        cVar11 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
        if (bVar15) {
          DAT_7105333650 = 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0' || (uVar33 & 1) != 0);
      puVar39[9] = DAT_7105333648;
      DAT_7105333650 = 0;
      DAT_7105333648 = puVar39;
      FUN_71032caea0((long)puVar39,uVar23,(long ****)ppuVar26,param_4,param_5,param_6,param_7,
                     param_8);
      lVar41 = *(long *)(param_1 + 0x180);
      *(undefined8 **)(param_1 + 0x180) = puVar39;
      if (lVar41 != 0) {
        FUN_71032cad20(lVar41);
      }
    }
    local_230 = (long ****)((ulong)local_230 & 0xffffffffffffff00);
    local_238 = (long ***)0x0;
    FUN_71018c8fa0(*(uint *)(param_1 + 0x1a0),(byte *)&local_238);
    ppplVar18 = local_238;
    uVar33 = *(uint *)(param_1 + 0xf9b0);
    lVar41 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    uVar7 = local_230._0_1_;
    *(undefined1 *)(*(long *)(param_1 + 0x180) + 0x70) = 0;
    if (*(char *)(lVar41 + 100) == '\0') {
      if (*(undefined8 **)(lVar41 + 0x18) == *(undefined8 **)(lVar41 + 0x10)) goto LAB_71018c8498;
      lVar44 = **(long **)**(undefined8 **)(lVar41 + 0x10);
      lVar40 = *(long *)(*(long *)(lVar44 + 0x10) + 8);
      if ((lVar40 == 0) ||
         ((((plVar19 = (long *)FUN_71037964b0(lVar40,0x710438cd89), plVar19 != (long *)0x0 &&
            ((uVar20 = (**(code **)(*plVar19 + 0x138))(), (uVar20 & 1) == 0 ||
             (lVar40 = *(long *)(*(long *)(lVar44 + 0x10) + 8), lVar40 == 0)))) ||
           (plVar19 = (long *)FUN_71037964b0(lVar40,0x710438cd89), plVar19 == (long *)0x0)) ||
          (uVar20 = (**(code **)(*plVar19 + 0x130))(), (uVar20 & 1) == 0)))) {
        FUN_7103778300(0x3f800000,*(long *)(lVar44 + 0x10),0x710438cd89);
      }
      *(undefined1 *)(lVar41 + 100) = 1;
    }
    *(char *)(lVar41 + 0x51) = (char)((ulong)ppplVar18 >> 8);
    *(char *)(lVar41 + 0x52) = (char)((ulong)ppplVar18 >> 0x10);
    *(char *)(lVar41 + 0x53) = (char)((ulong)ppplVar18 >> 0x18);
    *(char *)(lVar41 + 0x54) = (char)((ulong)ppplVar18 >> 0x20);
    *(char *)(lVar41 + 0x55) = (char)((ulong)ppplVar18 >> 0x28);
    *(char *)(lVar41 + 0x56) = (char)((ulong)ppplVar18 >> 0x30);
    *(uint *)(lVar41 + 0x60) = uVar33;
    *(char *)(lVar41 + 0x50) = (char)ppplVar18;
    *(char *)(lVar41 + 0x57) = (char)((ulong)ppplVar18 >> 0x38);
    *(undefined1 *)(lVar41 + 0x58) = uVar7;
    FUN_7101d2f860(lVar41);
    FUN_7101d2f860(lVar41);
    FUN_7101d2f860(lVar41);
    puVar39 = *(undefined8 **)(lVar41 + 0x40);
    if (puVar39 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar41 + 0x5c) = 0;
    }
    else {
      if ((long *)*puVar39 == (long *)0x0) {
        *(undefined4 *)(lVar41 + 0x5c) = 0;
      }
      else {
        param_4 = (byte ****)0x1;
        FUN_7103375650((long *)*puVar39,"is_reset",&DAT_71043cdb7b);
        puVar39 = *(undefined8 **)(lVar41 + 0x40);
        *(undefined4 *)(lVar41 + 0x5c) = 0;
        if (puVar39 == (undefined8 *)0x0) goto LAB_71018c7cec;
      }
      puVar42 = (undefined8 *)0x0;
      if ((long *)*puVar39 != (long *)0x0) {
        param_4 = (byte ****)(ulong)uVar33;
        FUN_7103375650((long *)*puVar39,"BUTTON_ID_INIT",&DAT_71042b2a84);
        puVar42 = (undefined8 *)0x0;
        if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
          param_4 = (byte ****)(ulong)(uVar35 & 1);
          FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"IS_BACK",&DAT_71043cdb7b);
          puVar42 = (undefined8 *)**(undefined8 **)(lVar41 + 0x40);
        }
      }
      FUN_7103376980(puVar42);
    }
LAB_71018c7cec:
    lVar41 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    puVar39 = *(undefined8 **)(lVar41 + 0x10);
    if (*(undefined8 **)(lVar41 + 0x18) == puVar39) goto LAB_71018c8498;
    FUN_7103775dc0((long *)**(undefined8 **)*puVar39,0,(long ****)0x1002,param_4,param_5,param_6,
                   param_7,param_8);
    lVar41 = DAT_710532f8b0;
    if (((ulong)param_3 & 1) != 0) {
      return;
    }
    if (DAT_710532f7a0 == (undefined8 *)0x0) {
      bVar15 = true;
    }
    else {
      lVar40 = *(long *)(DAT_710532f8b0 + 8);
      FUN_71032ca050((uint *)*DAT_710532f7a0,0,(ulong)*(byte *)(lVar40 + 0x2b8),(byte ****)0x1,
                     param_5,param_6,param_7,param_8);
      *(undefined1 *)(*lib::Singleton<app::FighterManager>::instance_ + 0xd0) =
           *(undefined1 *)(lVar40 + 0x2d0);
      bVar15 = DAT_710532f7a0 == (undefined8 *)0x0;
    }
    auVar48 = NEON_ext(_ConstantZero,_ConstantZero,8,1);
    pppplStack_218 = (long ****)(ulong)auVar48._0_4_;
    auVar49._0_8_ = (undefined8)nn::util::Vector3f::ConstantZero;
    auVar49._8_4_ = auVar48._0_4_;
    auVar49._12_4_ = 0;
    local_220 = (float)nn::util::Vector3f::ConstantZero;
    uStack_21c = nn::util::Vector3f::ConstantZero._4_4_;
    if ((bVar15) ||
       (lVar40 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20), lVar40 == 0))
    goto LAB_71018c7e20;
    if ((ulong)*(byte *)(lVar40 + 0x5918) < *(ulong *)(lVar40 + 0x4150)) {
      lVar40 = lVar40 + (ulong)*(byte *)(lVar40 + 0x5918) * 8;
      plVar19 = *(long **)(lVar40 + 0x4160);
      if ((plVar19 == (long *)0x0) ||
         (uVar20 = (**(code **)(*plVar19 + 0x518))(), (uVar20 & 1) == 0)) goto LAB_71018c7df0;
      lVar40 = *(long *)(lVar40 + 0x4160);
    }
    else {
LAB_71018c7df0:
      lVar40 = 0;
    }
    FUN_71003a9ab0(&local_200,lVar40);
    plVar19 = *(long **)(*(long *)(CONCAT26(uStack_1f8._6_2_,
                                            CONCAT24(uStack_1f8._4_2_,(uint)uStack_1f8)) + 0x20) +
                        0x38);
    (**(code **)(*plVar19 + 0x70))(plVar19,&local_220);
    auVar49._4_4_ = uStack_21c;
    auVar49._0_4_ = local_220;
    auVar49._8_8_ = pppplStack_218;
LAB_71018c7e20:
    local_220 = auVar49._0_4_ + 15.0;
    pppplStack_218 = auVar49._8_8_;
    auVar48._4_12_ = auVar49._4_12_;
    auVar48._0_4_ = local_220;
    uStack_21c = auVar49._4_4_;
    lVar40 = *(long *)(lVar41 + 8);
    if ((*(char *)(lVar40 + 0x2d3) != '\0') && (*(long *)(lVar40 + 0x330) == 0)) {
      local_1bc = 0x3f80000000000000;
      auVar49 = NEON_ext(auVar49,auVar49,8,1);
      uStack_1f8._0_4_ = auVar49._0_4_;
      local_1c4 = 0;
      uStack_1d4 = *(undefined4 *)(*lib::Singleton<app::ItemParamAccessor>::instance_ + 0x4ea4);
      uStack_1e0 = 8;
      uStack_1df = 0;
      uStack_1de = 0;
      uStack_1dc = 0x50000000;
      local_1c8 = 0xffffffff;
      local_1d8 = 0xffffffff;
      local_1d0 = 0x1450000000;
      uStack_1f8._4_2_ = 0;
      uStack_1f8._6_2_ = 0;
      local_1e8 = auVar49._0_2_;
      uStack_1e6 = auVar49[2];
      uStack_1e5 = auVar49[3];
      uStack_1e4 = 0;
      uStack_1e3 = 0;
      uStack_1e2 = 0;
      uStack_1e1 = 0;
      local_200._0_4_ = local_220;
      local_200._4_4_ = uStack_21c;
      local_1f0 = auVar48._0_8_;
      if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
        pppplVar43 = FUN_71015db0b0(lib::Singleton<app::ItemManager>::instance_,&local_200,0,
                                    (byte ****)0x1,(long ****)0x0,param_6,param_7,param_8);
        *(long *****)(lVar40 + 0x330) = pppplVar43;
        (*(code *)(*pppplVar43[0x1d])[0x26])(pppplVar43[0x1d],0,0x20000008);
        plVar19 = *(long **)(*(long *)(lVar40 + 0x330) + 0xe8);
        (**(code **)(*plVar19 + 0x110))(plVar19,0x20000000);
      }
      *(undefined8 *)(lVar40 + 0x338) = 0;
      lVar40 = *(long *)(lVar41 + 8);
    }
    *(undefined8 *)(lVar40 + 0x4a0) = 0x3f80000000000000;
    *(undefined8 *)(lVar40 + 0x458) = 0x3f80000000000000;
    *(undefined4 *)(lVar40 + 0x480) = 0x3f800000;
    *(undefined8 *)(lVar40 + 0x4a8) = 0x3f800000bf800000;
    *(undefined4 *)(lVar40 + 0x4b0) = 0xbf800000;
    *(long *)(lVar40 + 0x440) = lVar40 + 0x4a0;
    *(undefined4 *)(lVar40 + 0x468) = 0xbf800000;
    *(undefined8 *)(lVar40 + 0x460) = 0x3f800000bf800000;
    *(undefined8 *)(lVar40 + 0x470) = 0;
    *(undefined8 *)(lVar40 + 0x478) = 0;
    *(undefined4 *)(lVar40 + 0x370) = 0;
    *(undefined1 *)(lVar40 + 0x490) = 1;
    *(undefined4 *)(lVar40 + 0x488) = 0;
    if (*(char *)(lVar40 + 0x37c) != '\0') {
      return;
    }
    (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,lVar40 + 0x360)
    ;
    *(undefined1 *)(lVar40 + 0x37c) = 1;
    return;
  case 3:
    lVar41 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
    if (*(int *)(lVar41 + 8) != -1) {
      puVar39 = *(undefined8 **)(lVar41 + 0x18);
      *(undefined4 *)(lVar41 + 8) = 0xffffffff;
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x18) = 0;
        FUN_7103375760(puVar39);
        FUN_710392eb40((ulong)puVar39);
        param_2 = extraout_x1_00;
      }
      puVar39 = *(undefined8 **)(lVar41 + 0x10);
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x10) = 0;
        puVar42 = (undefined8 *)*puVar39;
        *puVar39 = 0;
        if (puVar42 != (undefined8 *)0x0) {
          FUN_7103773770(puVar42,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_710392eb40((ulong)puVar42);
        }
        FUN_710392eb40((ulong)puVar39);
      }
    }
    if (*(long *)(param_1 + 0x188) == 0) {
      puVar39 = (undefined8 *)
                FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar39 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = 0.0;
          local_200._0_4_ = 1.90577e-43;
          local_200._4_4_ = 0;
          param_3 = (long ****)&local_200;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          if (((uVar20 & 1) != 0) &&
             (puVar39 = (undefined8 *)
                        FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
             puVar39 != (undefined8 *)0x0)) goto LAB_71018c51f0;
        }
        puVar39 = (undefined8 *)0x0;
      }
LAB_71018c51f0:
      *puVar39 = &PTR_FUN_71050aee30;
      puVar39[1] = 0;
      puVar39[0xc] = 0;
      puVar39[0xd] = 0x1ffffffff;
      puVar39[2] = 0;
      puVar39[3] = 0;
      *(undefined1 *)(puVar39 + 0xb) = 0;
      puVar39[0xf] = (long *)(param_1 + 0x160);
      *(undefined1 *)(puVar39 + 0xe) = 1;
      puVar39[9] = 0;
      puVar39[10] = 0;
      puVar42 = (undefined8 *)
                FUN_710392e290(0x10,0x148,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar23 = extraout_x1_01;
      if (puVar42 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = 0.0;
          local_200._0_4_ = 4.59626e-43;
          local_200._4_4_ = 0;
          param_3 = (long ****)&local_200;
          auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          uVar23 = auVar49._8_8_;
          if (((auVar49._0_8_ & 1) != 0) &&
             (puVar42 = (undefined8 *)
                        FUN_710392e290(0x10,0x148,param_3,param_4,param_5,param_6,param_7,param_8),
             uVar23 = extraout_x1_02, puVar42 != (undefined8 *)0x0)) goto LAB_71018c5278;
        }
        puVar42 = (undefined8 *)0x0;
      }
LAB_71018c5278:
      puVar42[3] = 0;
      puVar42[4] = 0;
      *(undefined4 *)(puVar42 + 1) = 0x1000;
      puVar42[2] = 0;
      puVar42[6] = 0;
      puVar42[9] = 0x1000;
      *(undefined8 *)((long)puVar42 + 0x54) = 0xa040303ffffffff;
      *(undefined4 *)((long)puVar42 + 0x5c) = 0x1000c0b;
      *(undefined4 *)((long)puVar42 + 99) = 0x1010101;
      *(undefined1 *)((long)puVar42 + 0x67) = 4;
      puVar42[5] = puVar42 + 6;
      uVar33 = 0x811c9dc5;
      *puVar42 = &PTR_FUN_71050aec30;
      puVar42[7] = 0;
      puVar42[8] = 0;
      *(undefined1 *)(puVar42 + 10) = 0;
      *(undefined2 *)(puVar42 + 0xc) = 0x205;
      *(undefined1 *)((long)puVar42 + 0x62) = 2;
      puVar42[0xd] = 0x1000c0b0a030304;
      *(undefined2 *)(puVar42 + 0xe) = 0x205;
      *(undefined1 *)((long)puVar42 + 0x72) = 2;
      *(undefined8 *)((long)puVar42 + 0x73) = 0x3040d0d01010101;
      *(undefined8 *)((long)puVar42 + 0x7b) = 0x101010101020002;
      FUN_7101d361f0(puVar42 + 0x11,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined2 *)(puVar42 + 0x18) = 0x205;
      puVar42[0x16] = 0xffffffff00000000;
      puVar42[0x17] = 0x1000c0b0a040303;
      *(undefined8 *)((long)puVar42 + 0xc3) = 0x303040401010101;
      *(undefined8 *)((long)puVar42 + 0xcb) = 0x2020501000c0b0a;
      puVar42[0x1f] = 0;
      puVar42[0x20] = 0;
      *(undefined4 *)((long)puVar42 + 0xe4) = 0xffffffff;
      puVar42[0x21] = 0x5f74706f5f706f70;
      *(undefined4 *)(puVar42 + 0x22) = 0x5f6e7462;
      *(undefined2 *)((long)puVar42 + 0x114) = 0x656b;
      *(undefined1 *)((long)puVar42 + 0x116) = 0x79;
      *(undefined1 *)((long)puVar42 + 0xc2) = 2;
      *(undefined8 *)((long)puVar42 + 0xd3) = 0x3040d0d01010101;
      *(undefined8 *)((long)puVar42 + 0xdb) = 0x101010101020002;
      puVar42[0x1d] = 0;
      puVar42[0x1e] = 0;
      *(undefined8 *)((long)puVar42 + 0x117) = 0x67697373616f6e5f;
      *(undefined8 *)((long)puVar42 + 0x11f) = 0x7574636e75705f6e;
      *(undefined2 *)((long)puVar42 + 0x127) = 0x7461;
      uVar30 = 0x70;
      *(undefined4 *)((long)puVar42 + 0x129) = 0x6e6f69;
      lVar41 = 0x109;
      *(undefined4 *)((long)puVar42 + 0x104) = 0x24;
      uVar35 = uVar33;
      do {
        uVar35 = uVar35 * 0x89 ^ uVar30;
        uVar30 = (uint)*(byte *)((long)puVar42 + lVar41);
        lVar41 = lVar41 + 1;
      } while (uVar30 != 0);
      ppuVar26 = &PTR_DAT_71050aee10;
      param_4 = (byte ****)0x3172945de6;
      *(uint *)(puVar42 + 0x20) = uVar35;
      param_5 = (long ****)0x1;
      puVar39[0x10] = puVar42;
      FUN_71032cb040((long)puVar42,(long *)(param_1 + 0x160),(long ****)&PTR_DAT_71050aee10,
                     (byte ****)0x3172945de6,(long ****)0x1,param_6,param_7,param_8);
      pplVar47 = (long **)puVar39[0x10];
      local_200 = (byte ***)CONCAT44(local_200._4_4_,(float)local_200);
      if (pplVar47[3] == pplVar47[2]) goto LAB_71018c8498;
      pppplVar43 = *(long *****)*pplVar47[2];
      *(undefined4 *)((**pppplVar43)[0xc0] + 2) = 0x220;
      *(undefined4 *)((**pppplVar43)[0xc0] + 3) = 0x10;
      local_200 = (byte ***)CONCAT44(local_200._4_4_,(float)local_200);
      if ((ulong)((long)pplVar47[3] - (long)pplVar47[2] >> 3) < 2) goto LAB_71018c8498;
      FUN_7103776640((undefined8 *)&local_220,**(long **)pplVar47[2][1] + 8,
                     (byte ****)"set_btn_m_decide",ppuVar26,param_4,param_5,param_6,param_7,param_8)
      ;
      FUN_710337d360((undefined8 *)&local_220,extraout_x1_03,ppuVar26,param_4,param_5,param_6,
                     param_7,param_8);
      pppplVar24 = pppplStack_218;
      local_220 = 7.704177e-36;
      uStack_21c = 0x71;
      pppplStack_218 = (long ****)0x0;
      uVar23 = extraout_x1_04;
      pcVar25 = (char *)ppuVar26;
      if (pppplVar24 != (long ****)0x0) {
        ppplVar18 = pppplVar24[3];
        pppplVar24[2] = (long ***)&PTR_FUN_710523d9a8;
        pppplVar24[3] = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar18);
          pcVar25 = (char *)ppuVar26;
        }
        FUN_710392eb40((ulong)pppplVar24);
        uVar23 = extraout_x1_05;
      }
      pplVar46 = pplVar47 + 8;
      if (*pplVar46 != (long *)0x0) {
        plVar19 = (long *)**pplVar46;
        if (plVar19 == (long *)0x0) {
          lVar41 = 0;
        }
        else {
          lVar41 = *plVar19;
        }
        FUN_71033743c0(lVar41,"layout_root",pppplVar43);
        plVar19 = *pplVar46;
        if ((long *)*plVar19 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042b2a84;
          FUN_7103375650((long *)*plVar19,"CONTROLLER_FULL_KEY",&DAT_71042b2a84);
          plVar19 = *pplVar46;
          if ((long *)*plVar19 != (long *)0x0) {
            pppplVar43 = (long ****)&DAT_71042b2a84;
            FUN_7103375650((long *)*plVar19,"CONTROLLER_JOY_CON",&DAT_71042b2a84);
            plVar19 = *pplVar46;
            if ((long *)*plVar19 != (long *)0x0) {
              pppplVar43 = (long ****)&DAT_71042b2a84;
              FUN_7103375650((long *)*plVar19,"CONTROLLER_GC_CON",&DAT_71042b2a84);
              plVar19 = *pplVar46;
              if ((long *)*plVar19 != (long *)0x0) {
                pppplVar43 = (long ****)&DAT_71042d5020;
                FUN_7103375650((long *)*plVar19,"MSG_LABEL_FULL_KEY",&DAT_71042d5020);
                plVar19 = *pplVar46;
                if ((long *)*plVar19 != (long *)0x0) {
                  pppplVar43 = (long ****)&DAT_71042d5020;
                  FUN_7103375650((long *)*plVar19,"MSG_LABEL_JOY_CON",&DAT_71042d5020);
                  plVar19 = *pplVar46;
                  if ((long *)*plVar19 != (long *)0x0) {
                    pppplVar43 = (long ****)&DAT_71042d5020;
                    FUN_7103375650((long *)*plVar19,"MSG_LABEL_GC_CON",&DAT_71042d5020);
                    plVar19 = *pplVar46;
                    if ((long *)*plVar19 != (long *)0x0) {
                      pppplVar43 = (long ****)&DAT_71042b2a84;
                      FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_TRIGGER_L",&DAT_71042b2a84);
                      plVar19 = *pplVar46;
                      if ((long *)*plVar19 != (long *)0x0) {
                        pppplVar43 = (long ****)&DAT_71042b2a84;
                        FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_TRIGGER_R",&DAT_71042b2a84);
                        plVar19 = *pplVar46;
                        if ((long *)*plVar19 != (long *)0x0) {
                          pppplVar43 = (long ****)&DAT_71042b2a84;
                          FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_TRIGGER_ZL",&DAT_71042b2a84)
                          ;
                          plVar19 = *pplVar46;
                          if ((long *)*plVar19 != (long *)0x0) {
                            pppplVar43 = (long ****)&DAT_71042b2a84;
                            FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_TRIGGER_ZR",
                                           &DAT_71042b2a84);
                            plVar19 = *pplVar46;
                            if ((long *)*plVar19 != (long *)0x0) {
                              pppplVar43 = (long ****)&DAT_71042b2a84;
                              FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_UP",&DAT_71042b2a84);
                              plVar19 = *pplVar46;
                              if ((long *)*plVar19 != (long *)0x0) {
                                pppplVar43 = (long ****)&DAT_71042b2a84;
                                FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_SIDE",&DAT_71042b2a84)
                                ;
                                plVar19 = *pplVar46;
                                if ((long *)*plVar19 != (long *)0x0) {
                                  pppplVar43 = (long ****)&DAT_71042b2a84;
                                  FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_DOWN",
                                                 &DAT_71042b2a84);
                                  plVar19 = *pplVar46;
                                  if ((long *)*plVar19 != (long *)0x0) {
                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                    FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_BUTTON_A",
                                                   &DAT_71042b2a84);
                                    plVar19 = *pplVar46;
                                    if ((long *)*plVar19 != (long *)0x0) {
                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                      FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_BUTTON_B",
                                                     &DAT_71042b2a84);
                                      plVar19 = *pplVar46;
                                      if ((long *)*plVar19 != (long *)0x0) {
                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                        FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_STICK_R",
                                                       &DAT_71042b2a84);
                                        plVar19 = *pplVar46;
                                        if ((long *)*plVar19 != (long *)0x0) {
                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                          FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_BUTTON_X",
                                                         &DAT_71042b2a84);
                                          plVar19 = *pplVar46;
                                          if ((long *)*plVar19 != (long *)0x0) {
                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                            FUN_7103375650((long *)*plVar19,"BUTTON_ID_FK_BUTTON_Y",
                                                           &DAT_71042b2a84);
                                            plVar19 = *pplVar46;
                                            if ((long *)*plVar19 != (long *)0x0) {
                                              pppplVar43 = (long ****)&DAT_71042b2a84;
                                              FUN_7103375650((long *)*plVar19,
                                                             "BUTTON_ID_JC_TRIGGER_LR",
                                                             &DAT_71042b2a84);
                                              plVar19 = *pplVar46;
                                              if ((long *)*plVar19 != (long *)0x0) {
                                                pppplVar43 = (long ****)&DAT_71042b2a84;
                                                FUN_7103375650((long *)*plVar19,
                                                               "BUTTON_ID_JC_TRIGGER_ZLR",
                                                               &DAT_71042b2a84);
                                                plVar19 = *pplVar46;
                                                if ((long *)*plVar19 != (long *)0x0) {
                                                  pppplVar43 = (long ****)&DAT_71042b2a84;
                                                  FUN_7103375650((long *)*plVar19,
                                                                 "BUTTON_ID_JC_TRIGGER_SL",
                                                                 &DAT_71042b2a84);
                                                  plVar19 = *pplVar46;
                                                  if ((long *)*plVar19 != (long *)0x0) {
                                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                                    FUN_7103375650((long *)*plVar19,
                                                                   "BUTTON_ID_JC_TRIGGER_SR",
                                                                   &DAT_71042b2a84);
                                                    plVar19 = *pplVar46;
                                                    if ((long *)*plVar19 != (long *)0x0) {
                                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                                      FUN_7103375650((long *)*plVar19,
                                                                     "BUTTON_ID_JC_UP",
                                                                     &DAT_71042b2a84);
                                                      plVar19 = *pplVar46;
                                                      if ((long *)*plVar19 != (long *)0x0) {
                                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                                        FUN_7103375650((long *)*plVar19,
                                                                       "BUTTON_ID_JC_RIGHT",
                                                                       &DAT_71042b2a84);
                                                        plVar19 = *pplVar46;
                                                        if ((long *)*plVar19 != (long *)0x0) {
                                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                                          FUN_7103375650((long *)*plVar19,
                                                                         "BUTTON_ID_JC_LEFT",
                                                                         &DAT_71042b2a84);
                                                          plVar19 = *pplVar46;
                                                          if ((long *)*plVar19 != (long *)0x0) {
                                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                                            FUN_7103375650((long *)*plVar19,
                                                                           "BUTTON_ID_JC_DOWN",
                                                                           &DAT_71042b2a84);
                                                            plVar19 = *pplVar46;
                                                            if ((long *)*plVar19 != (long *)0x0) {
                                                              pppplVar43 = (long ****)
                                                                           &DAT_71042b2a84;
                                                              FUN_7103375650((long *)*plVar19,
                                                                                                                                                          
                                                  "BUTTON_ID_GC_TRIGGER_L",&DAT_71042b2a84);
                                                  plVar19 = *pplVar46;
                                                  if ((long *)*plVar19 != (long *)0x0) {
                                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                                    FUN_7103375650((long *)*plVar19,
                                                                   "BUTTON_ID_GC_TRIGGER_R",
                                                                   &DAT_71042b2a84);
                                                    plVar19 = *pplVar46;
                                                    if ((long *)*plVar19 != (long *)0x0) {
                                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                                      FUN_7103375650((long *)*plVar19,
                                                                     "BUTTON_ID_GC_TRIGGER_Z",
                                                                     &DAT_71042b2a84);
                                                      plVar19 = *pplVar46;
                                                      if ((long *)*plVar19 != (long *)0x0) {
                                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                                        FUN_7103375650((long *)*plVar19,
                                                                       "BUTTON_ID_GC_UP",
                                                                       &DAT_71042b2a84);
                                                        plVar19 = *pplVar46;
                                                        if ((long *)*plVar19 != (long *)0x0) {
                                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                                          FUN_7103375650((long *)*plVar19,
                                                                         "BUTTON_ID_GC_SIDE",
                                                                         &DAT_71042b2a84);
                                                          plVar19 = *pplVar46;
                                                          if ((long *)*plVar19 != (long *)0x0) {
                                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                                            FUN_7103375650((long *)*plVar19,
                                                                           "BUTTON_ID_GC_DOWN",
                                                                           &DAT_71042b2a84);
                                                            plVar19 = *pplVar46;
                                                            if ((long *)*plVar19 != (long *)0x0) {
                                                              pppplVar43 = (long ****)
                                                                           &DAT_71042b2a84;
                                                              FUN_7103375650((long *)*plVar19,
                                                                             "BUTTON_ID_GC_BUTTON_A"
                                                                             ,&DAT_71042b2a84);
                                                              plVar19 = *pplVar46;
                                                              if ((long *)*plVar19 != (long *)0x0) {
                                                                pppplVar43 = (long ****)
                                                                             &DAT_71042b2a84;
                                                                FUN_7103375650((long *)*plVar19,
                                                                                                                                                              
                                                  "BUTTON_ID_GC_BUTTON_B",&DAT_71042b2a84);
                                                  plVar19 = *pplVar46;
                                                  if ((long *)*plVar19 != (long *)0x0) {
                                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                                    FUN_7103375650((long *)*plVar19,
                                                                   "BUTTON_ID_GC_STICK_C",
                                                                   &DAT_71042b2a84);
                                                    plVar19 = *pplVar46;
                                                    if ((long *)*plVar19 != (long *)0x0) {
                                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                                      FUN_7103375650((long *)*plVar19,
                                                                     "BUTTON_ID_GC_BUTTON_X",
                                                                     &DAT_71042b2a84);
                                                      plVar19 = *pplVar46;
                                                      if ((long *)*plVar19 != (long *)0x0) {
                                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                                        FUN_7103375650((long *)*plVar19,
                                                                       "BUTTON_ID_GC_BUTTON_Y",
                                                                       &DAT_71042b2a84);
                                                        plVar19 = *pplVar46;
                                                        if ((long *)*plVar19 != (long *)0x0) {
                                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                                          FUN_7103375650((long *)*plVar19,
                                                                         "BUTTON_ID_OPTION",
                                                                         &DAT_71042b2a84);
                                                          plVar19 = *pplVar46;
                                                          if ((long *)*plVar19 != (long *)0x0) {
                                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                                            FUN_7103375650((long *)*plVar19,
                                                                           "BUTTON_ID_TEST",
                                                                           &DAT_71042b2a84);
                                                            plVar19 = *pplVar46;
                                                            if ((long *)*plVar19 != (long *)0x0) {
                                                              pppplVar43 = (long ****)
                                                                           &DAT_71042b2a84;
                                                              FUN_7103375650((long *)*plVar19,
                                                                             "BUTTON_ID_SAVE",
                                                                             &DAT_71042b2a84);
                                                              plVar19 = *pplVar46;
                                                              if ((long *)*plVar19 != (long *)0x0) {
                                                                pppplVar43 = (long ****)
                                                                             &DAT_71042b2a84;
                                                                FUN_7103375650((long *)*plVar19,
                                                                               "BUTTON_ID_RESET",
                                                                               &DAT_71042b2a84);
                                                                plVar19 = *pplVar46;
                                                                if ((long *)*plVar19 != (long *)0x0)
                                                                {
                                                                  pppplVar43 = (long ****)
                                                                               &DAT_71042b2a84;
                                                                  FUN_7103375650((long *)*plVar19,
                                                                                 "BUTTON_RESET",
                                                                                 &DAT_71042b2a84);
                                                                  plVar19 = *pplVar46;
                                                                  if ((long *)*plVar19 !=
                                                                      (long *)0x0) {
                                                                    pppplVar43 = (long ****)
                                                                                 &DAT_71042b2a84;
                                                                    FUN_7103375650((long *)*plVar19,
                                                                                   "BUTTON_ID_NONE",
                                                                                   &DAT_71042b2a84);
                                                                    plVar19 = *pplVar46;
                                                                    if ((long *)*plVar19 !=
                                                                        (long *)0x0) {
                                                                      pppplVar43 = (long ****)
                                                                                   &DAT_71042b2a84;
                                                                      FUN_7103375650((long *)*
                                                  plVar19,"OPERATE_ATTACK",&DAT_71042b2a84);
                                                  plVar19 = *pplVar46;
                                                  if ((long *)*plVar19 != (long *)0x0) {
                                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                                    FUN_7103375650((long *)*plVar19,
                                                                   "OPERATE_SPECIAL",&DAT_71042b2a84
                                                                  );
                                                    plVar19 = *pplVar46;
                                                    if ((long *)*plVar19 != (long *)0x0) {
                                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                                      FUN_7103375650((long *)*plVar19,"OPERATE_JUMP"
                                                                     ,&DAT_71042b2a84);
                                                      plVar19 = *pplVar46;
                                                      if ((long *)*plVar19 != (long *)0x0) {
                                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                                        FUN_7103375650((long *)*plVar19,
                                                                       "OPERATE_GUARD",
                                                                       &DAT_71042b2a84);
                                                        plVar19 = *pplVar46;
                                                        if ((long *)*plVar19 != (long *)0x0) {
                                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                                          FUN_7103375650((long *)*plVar19,
                                                                         "OPERATE_CATCH",
                                                                         &DAT_71042b2a84);
                                                          plVar19 = *pplVar46;
                                                          if ((long *)*plVar19 != (long *)0x0) {
                                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                                            FUN_7103375650((long *)*plVar19,
                                                                           "OPERATE_SMASH",
                                                                           &DAT_71042b2a84);
                                                            plVar19 = *pplVar46;
                                                            if ((long *)*plVar19 != (long *)0x0) {
                                                              pppplVar43 = (long ****)
                                                                           &DAT_71042b2a84;
                                                              FUN_7103375650((long *)*plVar19,
                                                                             "OPERATE_SMASH_UP",
                                                                             &DAT_71042b2a84);
                                                              plVar19 = *pplVar46;
                                                              if ((long *)*plVar19 != (long *)0x0) {
                                                                pppplVar43 = (long ****)
                                                                             &DAT_71042b2a84;
                                                                FUN_7103375650((long *)*plVar19,
                                                                               "OPERATE_SMASH_SIDE",
                                                                               &DAT_71042b2a84);
                                                                plVar19 = *pplVar46;
                                                                if ((long *)*plVar19 != (long *)0x0)
                                                                {
                                                                  pppplVar43 = (long ****)
                                                                               &DAT_71042b2a84;
                                                                  FUN_7103375650((long *)*plVar19,
                                                                                                                                                                  
                                                  "OPERATE_SMASH_DOWN",&DAT_71042b2a84);
                                                  plVar19 = *pplVar46;
                                                  if ((long *)*plVar19 != (long *)0x0) {
                                                    pppplVar43 = (long ****)&DAT_71042b2a84;
                                                    FUN_7103375650((long *)*plVar19,"OPERATE_APPEAL"
                                                                   ,&DAT_71042b2a84);
                                                    plVar19 = *pplVar46;
                                                    if ((long *)*plVar19 != (long *)0x0) {
                                                      pppplVar43 = (long ****)&DAT_71042b2a84;
                                                      FUN_7103375650((long *)*plVar19,
                                                                     "OPERATE_APPEAL_UP",
                                                                     &DAT_71042b2a84);
                                                      plVar19 = *pplVar46;
                                                      if ((long *)*plVar19 != (long *)0x0) {
                                                        pppplVar43 = (long ****)&DAT_71042b2a84;
                                                        FUN_7103375650((long *)*plVar19,
                                                                       "OPERATE_APPEAL_SIDE",
                                                                       &DAT_71042b2a84);
                                                        plVar19 = *pplVar46;
                                                        if ((long *)*plVar19 != (long *)0x0) {
                                                          pppplVar43 = (long ****)&DAT_71042b2a84;
                                                          FUN_7103375650((long *)*plVar19,
                                                                         "OPERATE_APPEAL_DOWN",
                                                                         &DAT_71042b2a84);
                                                          plVar19 = *pplVar46;
                                                          if ((long *)*plVar19 != (long *)0x0) {
                                                            pppplVar43 = (long ****)&DAT_71042b2a84;
                                                            FUN_7103375650((long *)*plVar19,
                                                                           "OPERATE_NONE",
                                                                           &DAT_71042b2a84);
                                                            plVar19 = *pplVar46;
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_1e8 = 0x7461;
        local_200._4_4_ = 0x16;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e6 = 0x74;
        uStack_1e5 = 0x61;
        uStack_1e4 = 99;
        uStack_1e3 = 0x6b;
        pbVar31 = (byte *)&uStack_1f8;
        uStack_1e2 = 0;
        uVar35 = 0x6d;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)*plVar19 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)*plVar19,"MSG_LABEL_ATTACK",&DAT_71042d5020);
        }
        local_1e8 = 0x7473;
        local_200._4_4_ = 0x16;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e6 = 0x72;
        uStack_1e5 = 0x6f;
        uStack_1e4 = 0x6e;
        uStack_1e3 = 0x67;
        uVar35 = 0x6d;
        uStack_1e2 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_ATTACK_STRONG",&DAT_71042d5020);
        }
        local_200._4_4_ = 0x17;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1e8 = 0x7073;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e6 = 0x5f;
        uStack_1e5 = 0x6d;
        uStack_1e4 = 0x6f;
        uStack_1e3 = 0x76;
        uVar35 = 0x6d;
        uStack_1e2 = 0x65;
        uStack_1e1 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_SPECIAL",&DAT_71042d5020);
        }
        pbVar31 = (byte *)&uStack_1f8;
        local_1e8 = 0x756a;
        uStack_1e6 = 0x6d;
        uStack_1e5 = 0x70;
        uVar35 = 0x6d;
        local_200._4_4_ = 0x14;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e4 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_JUMP",&DAT_71042d5020);
        }
        local_1e8 = 0x6873;
        local_200._4_4_ = 0x16;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e6 = 0x69;
        uStack_1e5 = 0x65;
        uStack_1e4 = 0x6c;
        uStack_1e3 = 100;
        uVar35 = 0x6d;
        uStack_1e2 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_GUARD",&DAT_71042d5020);
        }
        pbVar31 = (byte *)&uStack_1f8;
        local_1e8 = 0x6f68;
        uStack_1e6 = 0x6c;
        uStack_1e5 = 100;
        uVar35 = 0x6d;
        local_200._4_4_ = 0x14;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e4 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_CATCH",&DAT_71042d5020);
        }
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        uVar35 = 0x6d;
        local_1e8 = 0x6d73;
        local_200._4_4_ = 0x15;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        uStack_1e6 = 0x61;
        uStack_1e5 = 0x73;
        uStack_1e4 = 0x68;
        uStack_1e3 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_SMASH",&DAT_71042d5020);
        }
        uVar35 = 0x6d;
        pbVar31 = (byte *)&uStack_1f8;
        local_200._4_4_ = 0x15;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x6d73;
        uStack_1e6 = 0x61;
        uStack_1e5 = 0x73;
        uStack_1e4 = 0x68;
        uStack_1e3 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_SMASH_UP",&DAT_71042d5020);
        }
        uVar35 = 0x6d;
        pbVar31 = (byte *)&uStack_1f8;
        local_200._4_4_ = 0x15;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x6d73;
        uStack_1e6 = 0x61;
        uStack_1e5 = 0x73;
        uStack_1e4 = 0x68;
        uStack_1e3 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_SMASH_SIDE",&DAT_71042d5020);
        }
        uVar35 = 0x6d;
        pbVar31 = (byte *)&uStack_1f8;
        local_200._4_4_ = 0x15;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x6d73;
        uStack_1e6 = 0x61;
        uStack_1e5 = 0x73;
        uStack_1e4 = 0x68;
        uStack_1e3 = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_SMASH_DOWN",&DAT_71042d5020);
        }
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x7061;
        uVar35 = 0x6d;
        local_200._4_4_ = 0x19;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        uStack_1e6 = 0x70;
        uStack_1e5 = 0x65;
        uStack_1e4 = 0x61;
        uStack_1e3 = 0x6c;
        uStack_1e2 = 0x5f;
        uStack_1e1 = 0x75;
        uStack_1e0 = 0x70;
        uStack_1df = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_APPEAL",&DAT_71042d5020);
        }
        uVar35 = 0x6d;
        local_200._4_4_ = 0x19;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x7061;
        uStack_1e6 = 0x70;
        uStack_1e5 = 0x65;
        uStack_1e4 = 0x61;
        uStack_1e3 = 0x6c;
        uStack_1e2 = 0x5f;
        uStack_1e1 = 0x75;
        uStack_1e0 = 0x70;
        uStack_1df = 0;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_APPEAL_UP",&DAT_71042d5020);
        }
        local_200._4_4_ = 0x1b;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x7061;
        uStack_1e6 = 0x70;
        uStack_1e5 = 0x65;
        uStack_1e4 = 0x61;
        uStack_1e3 = 0x6c;
        uStack_1e2 = 0x5f;
        uStack_1e1 = 0x73;
        uStack_1e0 = 0x69;
        uStack_1df = 100;
        uVar35 = 0x6d;
        uStack_1de = 0x65;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_APPEAL_SIDE",&DAT_71042d5020);
        }
        local_200._4_4_ = 0x1b;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        pbVar31 = (byte *)&uStack_1f8;
        local_1f0 = 0x5f79656b5f6e7462;
        local_1e8 = 0x7061;
        uStack_1e6 = 0x70;
        uStack_1e5 = 0x65;
        uStack_1e4 = 0x61;
        uStack_1e3 = 0x6c;
        uStack_1e2 = 0x5f;
        uStack_1e1 = 100;
        uStack_1e0 = 0x6f;
        uStack_1df = 0x77;
        uVar35 = 0x6d;
        uStack_1de = 0x6e;
        local_200._0_4_ = (float)uVar33;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          local_200._0_4_ = (float)((int)(float)local_200 * 0x89 ^ uVar35);
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_APPEAL_DOWN",&DAT_71042d5020);
        }
        local_1e8 = 0x6f6e;
        local_200._4_4_ = 0x18;
        uStack_1f8._0_4_ = 0x5f756e6d;
        uStack_1f8._4_2_ = 0x706f;
        uStack_1f8._6_2_ = 0x5f74;
        local_1f0 = 0x5f79656b5f6e7462;
        uStack_1e6 = 0x61;
        uStack_1e5 = 0x73;
        uStack_1e4 = 0x73;
        uStack_1e3 = 0x69;
        param_4 = (byte ****)&uStack_1f8;
        pbVar31 = (byte *)&uStack_1f8;
        uStack_1e2 = 0x67;
        uStack_1e1 = 0x6e;
        uVar35 = 0x6d;
        uStack_1e0 = 0;
        do {
          pbVar31 = (byte *)((long)pbVar31 + 1);
          uVar33 = uVar33 * 0x89 ^ uVar35;
          uVar35 = (uint)*pbVar31;
        } while (uVar35 != 0);
        local_200._0_4_ = (float)uVar33;
        if ((long *)**pplVar46 != (long *)0x0) {
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)**pplVar46,"MSG_LABEL_NONE",&DAT_71042d5020);
        }
        plVar19 = *pplVar46;
        if ((long *)*plVar19 != (long *)0x0) {
          param_4 = (byte ****)(pplVar47 + 0x21);
          pppplVar43 = (long ****)&DAT_71042d5020;
          FUN_7103375650((long *)*plVar19,"DELIMITER_MSG_LABEL",&DAT_71042d5020);
          plVar19 = pplVar47[8];
          if ((long *)*plVar19 != (long *)0x0) {
            pppplVar43 = (long ****)&DAT_71042b2a84;
            param_4 = (byte ****)0x0;
            FUN_7103375650((long *)*plVar19,"FLICK_SENSOR_LOW",&DAT_71042b2a84);
            plVar19 = *pplVar46;
            if ((long *)*plVar19 != (long *)0x0) {
              pppplVar43 = (long ****)&DAT_71042b2a84;
              param_4 = (byte ****)0x1;
              FUN_7103375650((long *)*plVar19,"FLICK_SENSOR_NORMAL",&DAT_71042b2a84);
              plVar19 = *pplVar46;
              if ((long *)*plVar19 != (long *)0x0) {
                pppplVar43 = (long ****)&DAT_71042b2a84;
                param_4 = (byte ****)0x2;
                FUN_7103375650((long *)*plVar19,"FLICK_SENSOR_HIGH",&DAT_71042b2a84);
                plVar19 = *pplVar46;
                if ((long *)*plVar19 != (long *)0x0) {
                  pppplVar43 = (long ****)&DAT_71042b2a84;
                  param_4 = (byte ****)0x3;
                  FUN_7103375650((long *)*plVar19,"SCENE_EXIT_CODE_TEST",&DAT_71042b2a84);
                  plVar19 = *pplVar46;
                }
              }
            }
          }
        }
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x28,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_238 = (long ***)((ulong)local_238._4_4_ << 0x20);
            local_200._0_4_ = 5.60519e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_238);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x28,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7040;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7040:
        *ppplVar18 = (long **)&PTR_FUN_71050aec78;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[2] = pplVar47;
        ppplVar18[3] = (long **)FUN_7101d2bd10;
        *(undefined4 *)(ppplVar18 + 1) = 0;
        pppplVar43 = (long ****)&local_238;
        local_238 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"restore_settings",pppplVar43,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar18 = local_238;
        local_238 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (long ***)((ulong)local_80._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c70e8;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c70e8:
        ppplVar18[2] = pplVar47;
        *ppplVar18 = (long **)&PTR_FUN_71050aeca0;
        ppplVar18[3] = (long **)FUN_7101d2bda0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        pppplVar43 = (long ****)&local_80;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_80 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_operation",pppplVar43,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar18 = local_80;
        local_80 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ***)((ulong)local_88._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7198;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7198:
        ppplVar18[3] = (long **)FUN_7101d2bf40;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        *ppplVar18 = (long **)&PTR_FUN_71050aecc8;
        ppplVar18[2] = pplVar47;
        pppplVar43 = (long ****)&local_88;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_88 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_option_vibration",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_88;
        local_88 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_90 = (long ***)((ulong)local_90._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7248;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7248:
        *ppplVar18 = (long **)&PTR_FUN_71050aecc8;
        ppplVar18[3] = (long **)FUN_7101d2bf70;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        pppplVar43 = (long ****)&local_90;
        ppplVar18[2] = pplVar47;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_90 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_option_smash_attack",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_90;
        local_90 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_98 = (long ***)((ulong)local_98._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c72f0;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c72f0:
        *ppplVar18 = (long **)&PTR_FUN_71050aecc8;
        ppplVar18[3] = (long **)FUN_7101d2bfa0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        pppplVar43 = (long ****)&local_98;
        ppplVar18[2] = pplVar47;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_98 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_option_flick_up_jump",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_98;
        local_98 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_a0 = (long ***)((ulong)local_a0._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7398;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7398:
        ppplVar18[3] = (long **)FUN_7101d2bfd0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        *ppplVar18 = (long **)&PTR_FUN_71050aecf0;
        ppplVar18[2] = pplVar47;
        pppplVar43 = (long ****)&local_a0;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_a0 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_option_flick_sensor",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_a0;
        local_a0 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x28,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_a8 = (long ***)((ulong)local_a8._4_4_ << 0x20);
            local_200._0_4_ = 5.60519e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x28,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7448;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7448:
        *ppplVar18 = (long **)&PTR_FUN_71050aed18;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[2] = pplVar47;
        ppplVar18[3] = (long **)FUN_7101d2c000;
        *(undefined4 *)(ppplVar18 + 1) = 0;
        pppplVar43 = (long ****)&local_a8;
        local_a8 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"open_sub_window",pppplVar43,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar18 = local_a8;
        local_a8 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_b0 = (long ***)((ulong)local_b0._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c74f0;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c74f0:
        *ppplVar18 = (long **)&PTR_FUN_71050aecc8;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)FUN_7101d2c2a0;
        ppplVar18[2] = pplVar47;
        ppplVar18[3] = (long **)0x0;
        pppplVar43 = (long ****)&local_b0;
        ppplVar18[6] = (long **)0x0;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_b0 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"is_setting_changed",pppplVar43,param_4,param_5,param_6
                       ,param_7,param_8);
        ppplVar18 = local_b0;
        local_b0 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_b8 = (long ***)((ulong)local_b8._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7598;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7598:
        *ppplVar18 = (long **)&PTR_FUN_71050aed40;
        ppplVar18[2] = pplVar47;
        ppplVar18[3] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)FUN_7101d2c6b0;
        pppplVar43 = (long ****)&local_b8;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_b8 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"is_button_setting_changed",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_b8;
        local_b8 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c0 = (long ***)((ulong)local_c0._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7648;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7648:
        *ppplVar18 = (long **)&PTR_FUN_71050aecc8;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)FUN_7101d2c8c0;
        ppplVar18[2] = pplVar47;
        ppplVar18[3] = (long **)0x0;
        pppplVar43 = (long ****)&local_c0;
        ppplVar18[6] = (long **)0x0;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_c0 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"is_default_settings",pppplVar43,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar18 = local_c0;
        local_c0 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c8 = (long ***)((ulong)local_c8._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c76f0;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c76f0:
        *ppplVar18 = (long **)&PTR_FUN_71050aecf0;
        ppplVar18[3] = (long **)FUN_7101d2c8d0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        pppplVar43 = (long ****)&local_c8;
        ppplVar18[2] = pplVar47;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_c8 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"get_not_assigned_operation_num",pppplVar43,param_4,
                       param_5,param_6,param_7,param_8);
        ppplVar18 = local_c8;
        local_c8 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_d0 = (long ***)((ulong)local_d0._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7798;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7798:
        ppplVar18[3] = (long **)FUN_7101d2ddb0;
        ppplVar18[4] = (long **)0x0;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        *ppplVar18 = (long **)&PTR_FUN_71050aed68;
        ppplVar18[2] = pplVar47;
        pppplVar43 = (long ****)&local_d0;
        *(undefined4 *)(ppplVar18 + 1) = 1;
        local_d0 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"can_test_play",pppplVar43,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar18 = local_d0;
        local_d0 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        ppplVar18 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (ppplVar18 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_d8 = (long ***)((ulong)local_d8._4_4_ << 0x20);
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
            if (((uVar20 & 1) != 0) &&
               (ppplVar18 = (long ***)
                            FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                           param_8), ppplVar18 != (long ***)0x0))
            goto LAB_71018c7848;
          }
          ppplVar18 = (long ***)0x0;
        }
LAB_71018c7848:
        ppplVar18[2] = pplVar47;
        *ppplVar18 = (long **)&PTR_FUN_71050aed90;
        ppplVar18[5] = (long **)0x0;
        ppplVar18[6] = (long **)0x0;
        ppplVar18[3] = (long **)FUN_7101d2de90;
        ppplVar18[4] = (long **)0x0;
        pppplVar43 = (long ****)&local_d8;
        *(undefined4 *)(ppplVar18 + 1) = 0;
        local_d8 = ppplVar18;
        FUN_7103376af0((long)plVar19,(byte *)"start_test_play",pppplVar43,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar18 = local_d8;
        local_d8 = (long ***)0x0;
        if (ppplVar18 != (long ***)0x0) {
          (*(code *)(*ppplVar18)[1])();
        }
        plVar19 = *pplVar46;
        puVar42 = (undefined8 *)
                  FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,param_8);
        if (puVar42 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_74[0] = 0;
            local_200._0_4_ = 7.84727e-44;
            local_200._4_4_ = 0;
            pppplVar43 = (long ****)&local_200;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
            if (((uVar20 & 1) != 0) &&
               (puVar42 = (undefined8 *)
                          FUN_710392e290(0x10,0x38,pppplVar43,param_4,param_5,param_6,param_7,
                                         param_8), puVar42 != (undefined8 *)0x0))
            goto LAB_71018c78f4;
          }
          puVar42 = (undefined8 *)0x0;
        }
LAB_71018c78f4:
        *puVar42 = &PTR_FUN_71050aed68;
        puVar42[4] = 0;
        puVar42[5] = FUN_7101d2deb0;
        puVar42[2] = pplVar47;
        puVar42[3] = 0;
        puVar42[6] = 0;
        *(undefined4 *)(puVar42 + 1) = 1;
        local_200._0_4_ = SUB84(puVar42,0);
        local_200._4_4_ = (int)((ulong)puVar42 >> 0x20);
        FUN_7103376af0((long)plVar19,(byte *)"is_playing",(long ****)&local_200,param_4,param_5,
                       param_6,param_7,param_8);
        plVar19 = (long *)CONCAT44(local_200._4_4_,(float)local_200);
        local_200._0_4_ = 0.0;
        local_200._4_4_ = 0;
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 8))();
        }
        pcVar25 = "option_button_ctrl_func";
        FUN_71038f7260(lVar41,"option_button_ctrl_func");
        puVar42 = *(undefined8 **)(lVar41 + 0x10);
        *puVar42 = puVar42[-2];
        puVar42[1] = puVar42[-1];
        lVar40 = *(long *)(lVar41 + 0x10);
        *(long *)(lVar41 + 0x10) = lVar40 + 0x10;
        FUN_71038f5390(lVar41,(long *)(lVar40 + -0x10),"__index");
        FUN_71038f9510(lVar41,(long *)&PTR_s_selector_setup_bind_func_71050aeda8,0,param_4,param_5,
                       param_6,param_7,param_8);
        *(long *)(lVar41 + 0x10) = *(long *)(lVar41 + 0x10) + -0x10;
        plVar19 = FUN_71038f6930(lVar41,8);
        *plVar19 = (long)pplVar47;
        FUN_71038f4d40(lVar41,(long *)(*(long *)(lVar41 + 0x18) + 0x40),"option_button_ctrl_func");
        FUN_71038f5c00(lVar41,-2);
        uVar23 = extraout_x1_12;
        if (lVar41 != 0) {
          lVar40 = *(long *)(*(long *)(lVar41 + 0x18) + 0x40);
          if (*(uint *)(lVar40 + 0xc) < 2) {
            plVar19 = (long *)(*(long *)(lVar40 + 0x18) +
                              ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar40 + 0xb) & 0x3f)
                                             ) & 2) * 0x20);
            do {
              if (((int)plVar19[3] == 0x13) && (plVar22 = plVar19, plVar19[2] == 2)) break;
              piVar1 = (int *)((long)plVar19 + 0x1c);
              plVar19 = plVar19 + (long)*piVar1 * 4;
              plVar22 = &DAT_7104862960;
            } while (*piVar1 != 0);
          }
          else {
            plVar22 = (long *)(*(long *)(lVar40 + 0x10) + 0x10);
          }
          pcVar25 = "option_button_ctrl_func";
          FUN_71038f5390(lVar41,plVar22,"option_button_ctrl_func");
          uVar23 = extraout_x1_18;
        }
      }
      puVar39[2] = &DAT_7105333600;
      uVar13 = DAT_7105333664;
      *(undefined4 *)(puVar39 + 0xd) = DAT_7105333660;
      *(undefined4 *)((long)puVar39 + 0x6c) = uVar13;
      do {
        uVar35 = DAT_7105333650;
        cVar11 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
        if (bVar15) {
          DAT_7105333650 = 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0' || (uVar35 & 1) != 0);
      puVar39[9] = DAT_7105333648;
      DAT_7105333650 = 0;
      DAT_7105333648 = puVar39;
      FUN_71032caea0((long)puVar39,uVar23,(long ****)pcVar25,param_4,param_5,param_6,param_7,param_8
                    );
      lVar41 = *(long *)(param_1 + 0x188);
      *(undefined8 **)(param_1 + 0x188) = puVar39;
      if (lVar41 != 0) {
        FUN_71032cad20(lVar41);
      }
    }
    uVar35 = *(uint *)(param_1 + 0x1a0);
    puVar29 = &DAT_7105314518;
    if ((uVar35 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
      puVar29 = (undefined1 *)
                (*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) + (ulong)uVar35 * 0xf7d8
                );
    }
    *(undefined1 *)(param_1 + 0x1a4) = *puVar29;
    if ((undefined1 *)(param_1 + 0x1a4) != puVar29) {
      if (*(short *)(puVar29 + 0xc) == 0) {
        uVar33 = 0;
      }
      else {
        *(short *)(param_1 + 0x1b0) = *(short *)(puVar29 + 0xc);
        if (*(short *)(puVar29 + 0xe) == 0) {
          uVar33 = 1;
        }
        else {
          *(short *)(param_1 + 0x1b2) = *(short *)(puVar29 + 0xe);
          if (*(short *)(puVar29 + 0x10) == 0) {
            uVar33 = 2;
          }
          else {
            *(short *)(param_1 + 0x1b4) = *(short *)(puVar29 + 0x10);
            if (*(short *)(puVar29 + 0x12) == 0) {
              uVar33 = 3;
            }
            else {
              *(short *)(param_1 + 0x1b6) = *(short *)(puVar29 + 0x12);
              if (*(short *)(puVar29 + 0x14) == 0) {
                uVar33 = 4;
              }
              else {
                *(short *)(param_1 + 0x1b8) = *(short *)(puVar29 + 0x14);
                if (*(short *)(puVar29 + 0x16) == 0) {
                  uVar33 = 5;
                }
                else {
                  *(short *)(param_1 + 0x1ba) = *(short *)(puVar29 + 0x16);
                  if (*(short *)(puVar29 + 0x18) == 0) {
                    uVar33 = 6;
                  }
                  else {
                    *(short *)(param_1 + 0x1bc) = *(short *)(puVar29 + 0x18);
                    if (*(short *)(puVar29 + 0x1a) == 0) {
                      uVar33 = 7;
                    }
                    else {
                      *(short *)(param_1 + 0x1be) = *(short *)(puVar29 + 0x1a);
                      if (*(short *)(puVar29 + 0x1c) == 0) {
                        uVar33 = 8;
                      }
                      else {
                        *(short *)(param_1 + 0x1c0) = *(short *)(puVar29 + 0x1c);
                        if (*(short *)(puVar29 + 0x1e) == 0) {
                          uVar33 = 9;
                        }
                        else {
                          *(short *)(param_1 + 0x1c2) = *(short *)(puVar29 + 0x1e);
                          uVar33 = 10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined2 *)(param_1 + (ulong)uVar33 * 2 + 0x1b0) = 0;
      *(uint *)(param_1 + 0x1ac) = uVar33;
      puVar32 = (ushort *)(param_1 + 0x1b0);
      uVar30 = (uint)*puVar32;
      uVar33 = 0x811c9dc5;
      if (*puVar32 != 0) {
        do {
          puVar32 = puVar32 + 1;
          uVar33 = uVar33 * 0x89 ^ uVar30;
          uVar30 = (uint)*puVar32;
        } while (uVar30 != 0);
      }
      *(uint *)(param_1 + 0x1a8) = uVar33;
    }
    memcpy((void *)(param_1 + 0x1c8),puVar29 + 0x24,0xf7b4);
    uVar23 = *(undefined8 *)(param_1 + 0x1c8);
    uVar4 = *(undefined8 *)(param_1 + 0x1d0);
    uVar36 = *(undefined8 *)(param_1 + 0x1d8);
    lVar41 = *(long *)(param_1 + 0x188);
    uVar2 = *(undefined8 *)(param_1 + 0x1e0);
    uVar5 = *(undefined8 *)(param_1 + 0x1e8);
    uVar9 = *(undefined2 *)(param_1 + 0x1f0);
    uVar7 = *(undefined1 *)(param_1 + 0x1f2);
    uVar33 = *(uint *)(param_1 + 0xf9b0);
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar30 = (uint)DAT_7105307b68;
    lVar40 = (long)(int)(uint)DAT_7105307b68;
    *(undefined1 *)(lVar41 + 0x70) = 0;
    lVar41 = *(long *)(lVar41 + 0x80);
    uStack_1f8._0_4_ = (uint)uVar4;
    uStack_1f8._4_2_ = (ushort)((ulong)uVar4 >> 0x20);
    uStack_1f8._6_2_ = (short)((ulong)uVar4 >> 0x30);
    local_200._0_4_ = (float)uVar23;
    local_200._4_4_ = (int)((ulong)uVar23 >> 0x20);
    local_1d8 = CONCAT22(CONCAT11(local_1d8._3_1_,uVar7),uVar9);
    local_1e8 = (short)uVar2;
    uStack_1e6 = (undefined1)((ulong)uVar2 >> 0x10);
    uStack_1e5 = (undefined1)((ulong)uVar2 >> 0x18);
    uStack_1e4 = (undefined1)((ulong)uVar2 >> 0x20);
    uStack_1e3 = (undefined1)((ulong)uVar2 >> 0x28);
    uStack_1e2 = (undefined1)((ulong)uVar2 >> 0x30);
    uStack_1e1 = (undefined1)((ulong)uVar2 >> 0x38);
    uStack_1e0 = (undefined1)uVar5;
    uStack_1df = (undefined1)((ulong)uVar5 >> 8);
    uStack_1de = (undefined2)((ulong)uVar5 >> 0x10);
    uStack_1dc = (undefined4)((ulong)uVar5 >> 0x20);
    bVar15 = false;
    *(undefined2 *)(lVar41 + 0x80) = uVar9;
    *(undefined8 *)(lVar41 + 0x68) = uVar36;
    *(undefined1 *)(lVar41 + 0x82) = uVar7;
    *(undefined4 *)(lVar41 + 0xb0) = 0;
    *(uint *)(lVar41 + 0xb4) = uVar35;
    *(undefined8 *)(lVar41 + 0x58) = uVar23;
    *(undefined8 *)(lVar41 + 0x60) = uVar4;
    *(undefined8 *)(lVar41 + 0x70) = uVar2;
    *(undefined8 *)(lVar41 + 0x78) = uVar5;
    *(undefined8 *)(lVar41 + 0xc0) = uVar4;
    *(undefined8 *)(lVar41 + 200) = uVar36;
    *(undefined8 *)(lVar41 + 0xb8) = uVar23;
    *(undefined1 *)(lVar41 + 0xe2) = uVar7;
    *(undefined2 *)(lVar41 + 0xe0) = uVar9;
    *(uint *)(lVar41 + 0xe4) = uVar30;
    *(uint *)(lVar41 + 0x4c) = uVar33;
    *(undefined8 *)(lVar41 + 0xd0) = uVar2;
    *(undefined8 *)(lVar41 + 0xd8) = uVar5;
    if (uVar30 < 10) {
      if (*(char *)(DAT_71053398b0 + 8) == '\0') {
        puVar39 = &DAT_7105339830;
      }
      else {
        puVar39 = (undefined8 *)(&DAT_7105339860)[lVar40];
      }
      bVar15 = *(int *)(puVar39[2] + 0x9c) == 5;
    }
    *(bool *)(lVar41 + 0x50) = bVar15;
    local_1f0 = uVar36;
    if (*(undefined8 **)(lVar41 + 0x40) != (undefined8 *)0x0) {
      plVar19 = (long *)**(undefined8 **)(lVar41 + 0x40);
      puVar39 = (undefined8 *)0x0;
      if (plVar19 != (long *)0x0) {
        param_4 = (byte ****)(ulong)uVar33;
        FUN_7103375650(plVar19,"CONTROLLER_TYPE",&DAT_71042b2a84);
        puVar39 = (undefined8 *)0x0;
        if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
          param_4 = (byte ****)(ulong)*(byte *)(lVar41 + 0x50);
          FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"IS_PRO",&DAT_71043cdb7b);
          puVar39 = (undefined8 *)0x0;
          if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
            param_4 = (byte ****)0x0;
            FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"BUTTON_ID_INIT",&DAT_71042b2a84
                          );
            puVar39 = (undefined8 *)0x0;
            if ((long *)**(undefined8 **)(lVar41 + 0x40) != (long *)0x0) {
              param_4 = (byte ****)0x0;
              FUN_7103375650((long *)**(undefined8 **)(lVar41 + 0x40),"IS_BACK",&DAT_71043cdb7b);
              puVar39 = (undefined8 *)**(undefined8 **)(lVar41 + 0x40);
            }
          }
        }
      }
      FUN_7103376980(puVar39);
    }
    lVar41 = *(long *)(param_1 + 0x188);
    *(undefined4 *)(*(long *)(lVar41 + 0x80) + 0x48) = 0x1003;
    lVar41 = *(long *)(lVar41 + 0x80);
    if (*(undefined8 **)(lVar41 + 0x18) != *(undefined8 **)(lVar41 + 0x10)) {
      uVar35 = *(uint *)(lVar41 + 0x48);
      if ((int)uVar35 < 0x500000) {
        if ((int)uVar35 < 0x250000) {
          if ((int)uVar35 < 0x200000) {
            if ((int)uVar35 < 0x150000) {
              if ((int)uVar35 < 0x100000) {
                if ((int)uVar35 < 0xfe000) {
                  if ((int)uVar35 < 0x50000) {
                    if ((int)uVar35 < 0x10000) {
                      iVar16 = 3;
                      if (0 < (int)uVar35) {
                        iVar16 = 0;
                      }
                    }
                    else {
                      iVar16 = 1;
                    }
                  }
                  else {
                    iVar16 = 2;
                  }
                }
                else {
                  iVar16 = 8;
                }
              }
              else {
                iVar16 = 4;
              }
            }
            else {
              iVar16 = 6;
            }
          }
          else {
            iVar16 = 5;
          }
        }
        else {
          iVar16 = 7;
        }
      }
      else {
        iVar16 = 9;
      }
      FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(lVar41 + 0x10),iVar16,
                     (long ****)(ulong)uVar35,param_4,param_5,param_6,param_7,param_8);
      return;
    }
    goto LAB_71018c8498;
  case 4:
    FUN_7101af86a0(*(long *)(param_1 + 0x168),1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar41 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
    if (*(int *)(lVar41 + 8) != -1) {
      puVar39 = *(undefined8 **)(lVar41 + 0x18);
      *(undefined4 *)(lVar41 + 8) = 0xffffffff;
      uVar23 = extraout_x1_06;
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x18) = 0;
        FUN_7103375760(puVar39);
        FUN_710392eb40((ulong)puVar39);
        uVar23 = extraout_x1_07;
      }
      puVar39 = *(undefined8 **)(lVar41 + 0x10);
      if (puVar39 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar41 + 0x10) = 0;
        puVar42 = (undefined8 *)*puVar39;
        *puVar39 = 0;
        if (puVar42 != (undefined8 *)0x0) {
          FUN_7103773770(puVar42,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_710392eb40((ulong)puVar42);
        }
        FUN_710392eb40((ulong)puVar39);
      }
    }
    lVar41 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    if (*(char *)(lVar41 + 100) == '\0') {
LAB_71018c5658:
      lVar41 = DAT_710532f8b0;
      FUN_71033093b0(*(long *)(DAT_710532f8b0 + 8),(long *)(param_1 + 0x160),(undefined **)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103309b80(*(long *)(*(long *)(lVar41 + 8) + 0x340),*(uint *)(param_1 + 0xf97c),
                     (undefined8 *)(param_1 + 0xf980),param_4,param_5,param_6,param_7,param_8);
      return;
    }
    local_200 = (byte ***)CONCAT44(local_200._4_4_,(float)local_200);
    if (*(undefined8 **)(lVar41 + 0x18) != *(undefined8 **)(lVar41 + 0x10)) {
      lVar44 = **(long **)**(undefined8 **)(lVar41 + 0x10);
      lVar40 = *(long *)(*(long *)(lVar44 + 0x10) + 8);
      if ((((lVar40 == 0) ||
           ((plVar19 = (long *)FUN_71037964b0(lVar40,0x7104433415), plVar19 != (long *)0x0 &&
            ((uVar20 = (**(code **)(*plVar19 + 0x138))(), (uVar20 & 1) == 0 ||
             (lVar40 = *(long *)(*(long *)(lVar44 + 0x10) + 8), lVar40 == 0)))))) ||
          (plVar19 = (long *)FUN_71037964b0(lVar40,0x7104433415), plVar19 == (long *)0x0)) ||
         (uVar20 = (**(code **)(*plVar19 + 0x130))(), (uVar20 & 1) == 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar44 + 0x10),0x7104433415);
      }
      *(undefined1 *)(lVar41 + 100) = 0;
      goto LAB_71018c5658;
    }
    goto LAB_71018c8498;
  default:
    goto switchD_71018c4f98_default;
  }
  pbVar31 = (byte *)(param_1 + 0xf9c0);
  if (DAT_710532f7f0 == 0) {
LAB_71018c4fc4:
    lVar41 = DAT_710532f8d0;
    if (*pbVar31 == 0) {
      FUN_7103313c50(*(ulong **)(DAT_710532f8d0 + 8));
      lVar40 = *(long *)(lVar41 + 8);
      if (*(char *)(lVar40 + 0x22) != '\0') {
        FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
        *(undefined1 *)(lVar40 + 0x22) = 0;
        lVar40 = *(long *)(lVar41 + 8);
      }
      if (*(char *)(lVar40 + 0x23) != '\0') {
        *(undefined1 *)(lVar40 + 0x23) = 0;
        FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
      }
    }
  }
  else if (*pbVar31 == 0) {
    FUN_71032eafc0(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_71018c4fc4;
  }
  pppplVar24 = (long ****)(ulong)(~uVar35 & 1);
  FUN_71018c84c0(param_1,0xffffffff,~uVar35 & 1,param_4,param_5,param_6,param_7,param_8);
  FUN_7101af2070(*(long **)(*(long *)(param_1 + 0x170) + 0x80),6,pppplVar24,param_4,param_5,param_6,
                 param_7,param_8);
  local_230 = (long ****)0x0;
  uStack_228 = 0;
  local_238 = (long ***)0x0;
  FUN_71018c89b0(&local_238,extraout_x1,pppplVar24,param_4,param_5,param_6,param_7,param_8);
  pppplVar43 = local_230;
  ppplVar18 = local_238;
  pppbVar12 = (byte ***)((long)local_230 - (long)local_238);
  puVar39 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  lVar41 = *(long *)(param_1 + 0x178);
  local_248 = (undefined4 *)0x0;
  local_240 = (undefined4 *)0x0;
  local_250 = (undefined4 *)0x0;
  if (pppbVar12 != (byte ***)0x0) {
    if (0x666666666666666 < (ulong)(((long)pppbVar12 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar17 = (undefined4 *)
              FUN_710392e290(0x10,pppbVar12,pppplVar24,param_4,param_5,param_6,param_7,param_8);
    if (puVar17 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = 0.0;
        pppplVar24 = (long ****)&local_200;
        local_200 = pppbVar12;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if ((uVar20 & 1) != 0) {
          puVar17 = (undefined4 *)
                    FUN_710392e290(0x10,pppbVar12,pppplVar24,param_4,param_5,param_6,param_7,param_8
                                  );
          if (puVar17 != (undefined4 *)0x0) goto LAB_71018c50f8;
        }
      }
      puVar17 = (undefined4 *)0x0;
    }
LAB_71018c50f8:
    local_240 = puVar17 + ((long)pppbVar12 >> 3) * 2;
    local_250 = puVar17;
    local_248 = puVar17;
    FUN_71018c8e40((long)&local_250,(undefined4 *)ppplVar18,(undefined4 *)pppplVar43);
    pppplVar24 = pppplVar43;
  }
  puVar14 = local_248;
  puVar17 = local_250;
  bVar6 = *pbVar31;
  pppbVar12 = (byte ***)((long)local_248 - (long)local_250);
  uVar33 = *(uint *)(param_1 + 0x1a0);
  lVar40 = *(long *)(lVar41 + 0x80);
  cVar11 = *(char *)(*(long *)*puVar39 + 0x67);
  *(undefined1 *)(lVar41 + 0x70) = 0;
  local_220 = 0.0;
  uStack_21c = 0;
  pppplStack_218 = (long ****)0x0;
  local_210 = (long ****)0x0;
  if (pppbVar12 != (byte ***)0x0) {
    if (0x666666666666666 < (ulong)(((long)pppbVar12 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppplVar43 = (long ****)
                 FUN_710392e290(0x10,pppbVar12,pppplVar24,param_4,param_5,param_6,param_7,param_8);
    if (pppplVar43 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
        pppplVar43 = (long ****)&local_200;
        local_200 = pppbVar12;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if ((uVar20 & 1) != 0) {
          pppplVar43 = (long ****)
                       FUN_710392e290(0x10,pppbVar12,pppplVar43,param_4,param_5,param_6,param_7,
                                      param_8);
          if (pppplVar43 != (long ****)0x0) goto LAB_71018c5a5c;
        }
      }
      pppplVar43 = (long ****)0x0;
    }
LAB_71018c5a5c:
    local_210 = pppplVar43 + ((long)pppbVar12 >> 3);
    local_220 = SUB84(pppplVar43,0);
    uStack_21c = (undefined4)((ulong)pppplVar43 >> 0x20);
    pppplStack_218 = pppplVar43;
    FUN_71018c8e40((long)&local_220,puVar17,puVar14);
  }
  pfVar21 = (float *)(lVar40 + 0x58);
  *(undefined8 *)(lVar40 + 0x60) = *(undefined8 *)pfVar21;
  *(undefined8 *)(lVar40 + 0xb8) = 0xffffffff00000000;
  if (pfVar21 != &local_220) {
    FUN_7101d37fd0((long *)pfVar21,(long ****)CONCAT44(uStack_21c,local_220),pppplStack_218,param_4,
                   param_5,param_6,param_7,param_8);
  }
  plVar19 = (long *)(lVar40 + 0x48);
  if (*plVar19 == 0) {
    if (*(undefined8 **)(lVar40 + 0x18) == *(undefined8 **)(lVar40 + 0x10)) goto LAB_71018c8498;
    lVar41 = **(long **)**(undefined8 **)(lVar40 + 0x10);
    local_1e8 = 0;
    local_200._0_4_ = 0.0;
    local_200._4_4_ = 0;
    uStack_1f8._0_4_ = 0x41800000;
    uStack_1f8._4_2_ = 0;
    uStack_1f8._6_2_ = 0x4248;
    local_1f0 = 0x101013f800000;
    uStack_1e6 = 1;
    local_1b0 = (long *)0x0;
    local_180 = (long *)0x0;
    local_150 = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    uStack_1df = 0;
    uStack_1e1 = 0;
    uStack_1e0 = 0;
    uStack_1e5 = 0;
    uStack_1e4 = 0;
    uStack_1e3 = 0;
    uStack_1e2 = 0;
    FUN_710337e790((long)&local_200);
    param_5 = (long ****)(lVar40 + 0x50);
    param_4 = (byte ****)&local_200;
    local_200._4_4_ =
         (int)((ulong)(*(long *)(lVar40 + 0x60) - *(long *)(lVar40 + 0x58)) >> 3) * -0x33333333;
    uStack_1e2 = 1;
    uStack_1e1 = 1;
    FUN_7103781a20(plVar19,(undefined8 *)(lVar41 + 8),(byte ****)"scroll",param_4,param_5,param_6,
                   param_7,param_8);
    if (alStack_110 == local_f0) {
      pcVar27 = *(code **)(*local_f0 + 0x20);
LAB_71018c5bb8:
      (*pcVar27)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar27 = *(code **)(*local_f0 + 0x28);
      goto LAB_71018c5bb8;
    }
    if (alStack_140 == local_120) {
      pcVar27 = *(code **)(*local_120 + 0x20);
LAB_71018c5be8:
      (*pcVar27)();
    }
    else if (local_120 != (long *)0x0) {
      pcVar27 = *(code **)(*local_120 + 0x28);
      goto LAB_71018c5be8;
    }
    if (alStack_170 == local_150) {
      pcVar27 = *(code **)(*local_150 + 0x20);
LAB_71018c5c18:
      (*pcVar27)();
    }
    else if (local_150 != (long *)0x0) {
      pcVar27 = *(code **)(*local_150 + 0x28);
      goto LAB_71018c5c18;
    }
    if (alStack_1a0 == local_180) {
      pcVar27 = *(code **)(*local_180 + 0x20);
LAB_71018c5c48:
      (*pcVar27)();
    }
    else if (local_180 != (long *)0x0) {
      pcVar27 = *(code **)(*local_180 + 0x28);
      goto LAB_71018c5c48;
    }
    if (&local_1d0 == local_1b0) {
      pcVar27 = *(code **)(*local_1b0 + 0x20);
    }
    else {
      if (local_1b0 == (long *)0x0) goto LAB_71018c5c7c;
      pcVar27 = *(code **)(*local_1b0 + 0x28);
    }
    (*pcVar27)();
  }
  else {
    FUN_7103783690(plVar19,(int)((ulong)(*(long *)(lVar40 + 0x60) - *(long *)(lVar40 + 0x58)) >> 3)
                           * -0x33333333);
  }
LAB_71018c5c7c:
  uVar30 = 1;
  (**(code **)(*(long *)*plVar19 + 0x60))((long *)*plVar19,1);
  (**(code **)(*(long *)*plVar19 + 0x70))((long *)*plVar19,1);
  if (uVar33 == 0xffffffff) {
    uVar34 = 0;
    puVar39 = *(undefined8 **)(lVar40 + 0x40);
  }
  else {
    puVar38 = *(uint **)(lVar40 + 0x58);
    puVar3 = *(uint **)(lVar40 + 0x60);
    if (puVar38 == puVar3) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      puVar37 = puVar38;
      do {
        uVar23 = local_1f0;
        uVar30 = *puVar37;
        uVar10 = (ushort)puVar37[3];
        uStack_1f8._0_4_ = (uint)uVar10;
        if (uVar10 != 0) {
          uStack_1f8._4_2_ = uVar10;
          if (*(short *)((long)puVar37 + 0xe) == 0) {
            uStack_1f8._0_4_ = 1;
          }
          else {
            uStack_1f8._6_2_ = *(short *)((long)puVar37 + 0xe);
            sVar8 = (short)puVar37[4];
            if (sVar8 == 0) {
              uStack_1f8._0_4_ = 2;
            }
            else {
              local_1f0 = CONCAT62(local_1f0._2_6_,sVar8);
              if (*(short *)((long)puVar37 + 0x12) == 0) {
                uStack_1f8._0_4_ = 3;
              }
              else {
                local_1f0._4_4_ = SUB84(uVar23,4);
                local_1f0._0_4_ = CONCAT22(*(short *)((long)puVar37 + 0x12),sVar8);
                if ((short)puVar37[5] == 0) {
                  uStack_1f8._0_4_ = 4;
                }
                else {
                  local_1f0._6_2_ = SUB82(uVar23,6);
                  local_1f0._0_6_ = CONCAT24((short)puVar37[5],(undefined4)local_1f0);
                  if (*(short *)((long)puVar37 + 0x16) == 0) {
                    uStack_1f8._0_4_ = 5;
                  }
                  else {
                    local_1f0 = CONCAT26(*(short *)((long)puVar37 + 0x16),(undefined6)local_1f0);
                    if ((short)puVar37[6] == 0) {
                      uStack_1f8._0_4_ = 6;
                    }
                    else {
                      local_1e8 = (short)puVar37[6];
                      sVar8 = *(short *)((long)puVar37 + 0x1a);
                      if (sVar8 == 0) {
                        uStack_1f8._0_4_ = 7;
                      }
                      else {
                        uStack_1e6 = (undefined1)sVar8;
                        uStack_1e5 = (undefined1)((ushort)sVar8 >> 8);
                        sVar8 = (short)puVar37[7];
                        if (sVar8 == 0) {
                          uStack_1f8._0_4_ = 8;
                        }
                        else {
                          uStack_1e4 = (undefined1)sVar8;
                          uStack_1e3 = (undefined1)((ushort)sVar8 >> 8);
                          sVar8 = *(short *)((long)puVar37 + 0x1e);
                          if (sVar8 == 0) {
                            uStack_1f8._0_4_ = 9;
                          }
                          else {
                            uStack_1e2 = (undefined1)sVar8;
                            uStack_1e1 = (undefined1)((ushort)sVar8 >> 8);
                            uStack_1f8._0_4_ = 10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        *(undefined2 *)((long)&uStack_1f8 + (ulong)(uint)uStack_1f8 * 2 + 4) = 0;
        puVar32 = (ushort *)((long)&uStack_1f8 + 6);
        uVar10 = uStack_1f8._4_2_;
        while (uVar10 != 0) {
          uVar10 = *puVar32;
          puVar32 = puVar32 + 1;
        }
        local_200 = (byte ***)(ulong)uVar30;
        if (uVar30 == uVar33) break;
        uVar34 = uVar34 + 1;
        puVar37 = puVar37 + 10;
        local_200 = (byte ***)(ulong)uVar30;
      } while (puVar37 != puVar3);
    }
    uVar28 = ((long)puVar3 - (long)puVar38 >> 3) * -0x3333333333333333;
    uVar20 = (ulong)(int)uVar34;
    bVar15 = uVar28 - uVar20 == 0;
    if (uVar28 < uVar20 || bVar15) {
      uVar34 = 0;
    }
    uVar30 = 1;
    if (uVar28 >= uVar20 && !bVar15) {
      uVar30 = 2;
    }
    puVar39 = *(undefined8 **)(lVar40 + 0x40);
  }
  if (puVar39 != (undefined8 *)0x0) {
    puVar42 = (undefined8 *)0x0;
    if ((long *)*puVar39 != (long *)0x0) {
      param_4 = (byte ****)(ulong)(bVar6 ^ 1);
      FUN_7103375650((long *)*puVar39,"ENABLE_PALLET",&DAT_71043cdb7b);
      puVar42 = (undefined8 *)0x0;
      if ((long *)**(undefined8 **)(lVar40 + 0x40) != (long *)0x0) {
        param_4 = (byte ****)(ulong)(cVar11 != '\0');
        FUN_7103375650((long *)**(undefined8 **)(lVar40 + 0x40),"MENU_VIBRATION",&DAT_71043cdb7b);
        puVar42 = (undefined8 *)0x0;
        if ((long *)**(undefined8 **)(lVar40 + 0x40) != (long *)0x0) {
          param_4 = (byte ****)(ulong)uVar34;
          FUN_7103375650((long *)**(undefined8 **)(lVar40 + 0x40),"ITEM_INDEX_INIT",&DAT_71042b2a84)
          ;
          puVar42 = (undefined8 *)0x0;
          if ((long *)**(undefined8 **)(lVar40 + 0x40) != (long *)0x0) {
            param_4 = (byte ****)(ulong)uVar30;
            FUN_7103375650((long *)**(undefined8 **)(lVar40 + 0x40),"FOCUS_INIT",&DAT_71042b2a84);
            puVar42 = (undefined8 *)0x0;
            if ((long *)**(undefined8 **)(lVar40 + 0x40) != (long *)0x0) {
              param_4 = (byte ****)(ulong)(uVar35 & 1);
              FUN_7103375650((long *)**(undefined8 **)(lVar40 + 0x40),"IS_BACK",&DAT_71043cdb7b);
              puVar42 = (undefined8 *)**(undefined8 **)(lVar40 + 0x40);
            }
          }
        }
      }
    }
    FUN_7103376980(puVar42);
  }
  if (((ulong)param_3 & 1) == 0) {
    FUN_710366ac20(1);
  }
  pppplVar43 = (long ****)CONCAT44(uStack_21c,local_220);
  if (pppplVar43 != (long ****)0x0) {
    pppplStack_218 = pppplVar43;
    FUN_710392eb40((ulong)pppplVar43);
  }
  if (local_250 != (undefined4 *)0x0) {
    local_248 = local_250;
    FUN_710392eb40((ulong)local_250);
  }
  lVar41 = *(long *)(*(long *)(param_1 + 0x178) + 0x80);
  puVar39 = *(undefined8 **)(lVar41 + 0x10);
  if (*(undefined8 **)(lVar41 + 0x18) != puVar39) {
    FUN_7103775dc0((long *)**(undefined8 **)*puVar39,0,(long ****)0x1001,param_4,param_5,param_6,
                   param_7,param_8);
    lVar41 = DAT_710532f8b0;
    if (((ulong)param_3 & 1) != 0) {
      if ((DAT_710532f7a0 != (undefined8 *)0x0) &&
         (puVar38 = (uint *)*DAT_710532f7a0, ((byte)*puVar38 >> 1 & 1) != 0)) {
        lVar40 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
        if ((lVar40 != 0) && (*(char *)(lVar40 + 0x5920) == '\x06')) {
          FUN_7100653490(lVar40,0);
        }
        puVar38[0x12] = 3;
        if (((((puVar38[0x26] != 2) && (puVar38[0x3a] != 2)) && (puVar38[0x4e] != 2)) &&
            ((puVar38[0x62] != 2 && (puVar38[0x76] != 2)))) &&
           ((puVar38[0x8a] != 2 && (puVar38[0x9e] != 2)))) {
          *puVar38 = *puVar38 | 0x20;
        }
      }
      lVar44 = *(long *)(lVar41 + 8);
      lVar40 = lVar44 + 0x360;
      local_200._0_4_ = (float)*DAT_71052b8f00;
      local_200._4_4_ = (int)((ulong)*DAT_71052b8f00 >> 0x20);
      FUN_71004f2980(&local_200,lVar40);
      *(undefined4 *)(lVar44 + 0x370) = 1;
      FUN_7100519ee0(lVar40);
      if (*(char *)(lVar44 + 0x37c) != '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar40);
        *(undefined1 *)(lVar44 + 0x37c) = 0;
      }
      lVar41 = *(long *)(lVar41 + 8);
      local_200 = (byte ***)CONCAT44(local_200._4_4_,(float)local_200);
      if ((*(char *)(lVar41 + 0x2d3) != '\0') &&
         (plVar19 = *(long **)(lVar41 + 0x330),
         local_200 = (byte ***)CONCAT44(local_200._4_4_,(float)local_200), plVar19 != (long *)0x0))
      {
        (**(code **)(*plVar19 + 0x520))(plVar19,0);
        *(undefined8 *)(lVar41 + 0x330) = 0;
      }
    }
    if (local_238 != (long ***)0x0) {
      local_230 = (long ****)local_238;
      FUN_710392eb40((ulong)local_238);
    }
switchD_71018c4f98_default:
    return;
  }
LAB_71018c8498:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

