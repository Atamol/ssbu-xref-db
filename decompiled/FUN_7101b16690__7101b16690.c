// addr:      7101b16690
// offset:    0x1b16690
// name:      FUN_7101b16690
// mangled:   
// signature: undefined __cdecl FUN_7101b16690(long param_1, int * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b16690(long param_1,int *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined6 uVar10;
  byte ***pppbVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  byte **ppbVar19;
  undefined1 uVar20;
  ushort uVar21;
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
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  byte ****ppppbVar22;
  char *pcVar23;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 *puVar24;
  long ****pppplVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  ulong uVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *********ppppppppplVar37;
  byte ***pppbVar38;
  long ********pppppppplVar39;
  long *plVar40;
  long *********ppppppppplVar41;
  long lVar42;
  long lVar43;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined2 local_280;
  undefined8 local_27e;
  undefined4 local_276;
  undefined2 uStack_272;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined6 uStack_26e;
  undefined2 local_268;
  undefined1 local_266;
  undefined **local_250;
  ulong local_248;
  undefined **local_240;
  ulong local_238;
  undefined **local_230;
  ulong local_228;
  uint auStack_220 [2];
  byte abStack_218 [64];
  undefined **local_1d8;
  byte ***local_1d0 [8];
  undefined **local_190;
  ulong local_188;
  byte ***local_180;
  undefined8 local_178;
  undefined8 local_170;
  byte ***local_138;
  byte ***local_130;
  undefined8 uStack_128;
  undefined **local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c6;
  undefined4 local_be;
  undefined2 uStack_ba;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  byte ***local_80;
  
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar26 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 8);
  ppppppppplVar37 = (long *********)(param_1 + 0xf8);
  *ppppppppplVar37 = *(long *********)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x108) = uVar26;
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(int *)(param_1 + 0x118) = *param_2;
  *(char *)(param_1 + 0x11c) = (char)param_2[10];
  *(char *)(param_1 + 0x11d) = (char)param_2[0xc];
  lVar35 = DAT_710532f730;
  uVar17 = 0xd9ffff0000000000;
  if (((uint)uVar3 & 0xff) == 3) {
    uVar17 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),
                            *(ulong *)(param_1 + 0x108));
  }
  *(ulong *)(param_1 + 0x130) = uVar17;
  lVar35 = *(long *)(*(long *)(*(long *)(lVar35 + 8) + 0x2f8) + 8);
  uVar17 = *(ulong *)(param_1 + 0xf8);
  puVar18 = FUN_71032817a0(lVar35,0x18cd5a705b);
  if (((uVar17 & 0xff00000000000000) == 0xc100000000000000) && ((uVar17 & 0xffffffffff) != 0)) {
    uVar27 = 0x5030000;
    if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000 ||
        ((ulong)puVar18 & 0xffffffffff) == 0) || (((ulong)puVar18 ^ uVar17) & 0xffffffffff) != 0) {
      puVar18 = FUN_71032817a0(lVar35,0x182fe2e3bf);
      uVar30 = (ulong)puVar18 & 0xff00000000000000;
      uVar28 = (ulong)puVar18 & 0xffffffffff;
      if (uVar30 != 0xc100000000000000 || uVar28 == 0) goto LAB_7101b167e8;
      bVar12 = (((ulong)puVar18 ^ uVar17) & 0xffffffffff) == 0;
LAB_7101b16818:
      uVar27 = 0x4080000;
      if (!bVar12) {
        uVar27 = 0;
      }
    }
  }
  else {
    uVar27 = 0x5030000;
    if (((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar18 & 0xffffffffff) != 0) {
      puVar18 = FUN_71032817a0(lVar35,0x182fe2e3bf);
      uVar28 = (ulong)puVar18 & 0xffffffffff;
      uVar30 = (ulong)puVar18 & 0xff00000000000000;
LAB_7101b167e8:
      bVar12 = (uVar28 != 0 && uVar30 == 0xc100000000000000) ==
               ((uVar17 & 0xff00000000000000) == 0xc100000000000000 && (uVar17 & 0xffffffffff) != 0)
      ;
      goto LAB_7101b16818;
    }
  }
  *(undefined4 *)(param_1 + 0x138) = uVar27;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  FUN_7101780fd0(auStack_220,(ulong *)ppppppppplVar37,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar35 = param_1 + 0xd8;
  FUN_7103776910(&local_230,lVar35,(long ****)"set_txt_item_name_00",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_240,lVar35,(long ****)"set_txt_item_name_01",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  lVar36 = *(long *)(DAT_710532f730 + 8);
  uVar17 = *(ulong *)(param_1 + 0xf8);
  puVar18 = FUN_71032817a0(*(long *)(*(long *)(lVar36 + 0x2f8) + 8),0x1f3ee3d814);
  if (((((uVar17 & 0xff00000000000000) == 0xc100000000000000) && ((uVar17 & 0xffffffffff) != 0)) &&
      (((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar18 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar18 ^ uVar17) & 0xffffffffff) != 0) goto LAB_7101b168c4;
LAB_7101b16930:
    if (*(long **)(local_228 + 0x10) != (long *)0x0) {
      param_4 = (byte ****)0x0;
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_228 + 0x10),(ushort *)&local_e0,0,0);
      lVar36 = *(long *)(DAT_710532f730 + 8);
    }
    lVar36 = *(long *)(lVar36 + 0x1d8);
    uVar15 = FUN_71032a7800(lVar36,0xf91e07ad5);
    if (uVar15 < (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                       -0x33333333)) {
      uVar21 = *(ushort *)(*(long *)(lVar36 + 0x20) + (ulong)uVar15 * 0x140);
    }
    else {
      uVar21 = 0xffff;
    }
    uVar17 = FUN_71032a9470(lVar36,uVar21);
    FUN_71032a9540((uint *)&local_e0,lVar36,uVar17);
    FUN_71003a4ca0((uint *)&local_138,"spi_%s",&local_d8,uVar17,param_4,param_5,param_6,param_7,
                   param_8);
    param_4 = &local_130;
    param_3 = (long *********)0x1;
    FUN_710377a280((long)&local_240,abStack_218,1);
  }
  else {
    if ((((ulong)puVar18 & 0xffffffffff) != 0 &&
        ((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) ==
        ((uVar17 & 0xff00000000000000) == 0xc100000000000000 && (uVar17 & 0xffffffffff) != 0))
    goto LAB_7101b16930;
LAB_7101b168c4:
    FUN_710377a120((long)&local_230,(char *)abStack_218,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if (*(long **)(local_238 + 0x10) != (long *)0x0) {
      param_3 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_238 + 0x10),(ushort *)&local_e0,0,0);
    }
  }
  uVar15 = 0x811c9dc5;
  FUN_7103776910(&local_250,lVar35,(long ****)"set_txt_item_caption",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  cVar6 = *(char *)(param_1 + 0x100);
  if (cVar6 == '\x05') {
    lVar36 = *(long *)(DAT_710532f730 + 8);
    lVar42 = *(long *)(lVar36 + 0x318);
    ppppppppplVar41 =
         (long *********)FUN_710327d930(*(long *)(lVar42 + 8),*(ulong *)(param_1 + 0x108));
LAB_7101b16a68:
    uVar17 = FUN_710327d0d0(lVar42,(ulong)ppppppppplVar41);
    uVar26 = extraout_x1_00;
    if ((uVar17 & 0xffffffffff) != 0x7db8309f9) goto LAB_7101b16d80;
    FUN_710327cd40((uint *)&local_e0,*(long *)(lVar36 + 0x318),(ulong)ppppppppplVar41);
    FUN_71003a4ca0((uint *)&local_298,"mnu_insert_popup_help_%s",&local_d8,ppppppppplVar41,param_4,
                   param_5,param_6,param_7,param_8);
    uVar26 = extraout_x1_01;
    param_3 = ppppppppplVar41;
    if (local_298._4_4_ == 0) goto LAB_7101b16d88;
LAB_7101b16f70:
    lVar36 = *(long *)(DAT_710532f730 + 8);
    uVar17 = *(ulong *)(param_1 + 0xf8);
    puVar18 = FUN_71032817a0(*(long *)(*(long *)(lVar36 + 0x2f8) + 8),0x1f3ee3d814);
    if ((((uVar17 & 0xff00000000000000) == 0xc100000000000000) && ((uVar17 & 0xffffffffff) != 0)) &&
       (((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar18 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar18 ^ uVar17) & 0xffffffffff) != 0) goto LAB_7101b16fc8;
LAB_7101b17014:
      lVar36 = *(long *)(lVar36 + 0x1d8);
      uVar16 = FUN_71032a7800(lVar36,0xf91e07ad5);
      if (uVar16 < (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                         -0x33333333)) {
        uVar21 = *(ushort *)(*(long *)(lVar36 + 0x20) + (ulong)uVar16 * 0x140);
      }
      else {
        uVar21 = 0xffff;
      }
      uVar17 = FUN_71032a9470(lVar36,uVar21);
      FUN_71032a9540((uint *)&local_e0,lVar36,uVar17);
      FUN_71003a4ca0((uint *)&local_138,"spi_%s",&local_d8,uVar17,param_4,param_5,param_6,param_7,
                     param_8);
      param_4 = &local_130;
      param_3 = (long *********)0x1;
      FUN_710377a280((long)&local_250,(byte *)&local_290,1);
      uVar26 = extraout_x1_09;
    }
    else {
      if ((((ulong)puVar18 & 0xffffffffff) != 0 &&
          ((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) ==
          ((uVar17 & 0xff00000000000000) == 0xc100000000000000 && (uVar17 & 0xffffffffff) != 0))
      goto LAB_7101b17014;
LAB_7101b16fc8:
      FUN_710377a120((long)&local_250,(char *)&local_290,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar26 = extraout_x1_08;
    }
  }
  else {
    if (cVar6 == '\x06') {
      lVar36 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar18 = FUN_71032817a0(lVar36,0x1cd6be4c9b);
      pppppppplVar39 = *ppppppppplVar37;
      uVar26 = extraout_x1_02;
      uVar16 = uVar15;
      if ((((ulong)pppppppplVar39 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)pppppppplVar39 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
           ((((ulong)puVar18 & 0xffffffffff) == 0 ||
            ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) != 0)))) {
          puVar18 = FUN_71032817a0(lVar36,0x22eae490b8);
          if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
             ((((ulong)puVar18 & 0xffffffffff) != 0 &&
              ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) {
LAB_7101b16dac:
            local_298._4_4_ = 0x2a;
            uVar32 = 0x6d;
            local_288 = 0x7075706f705f7472;
            local_280 = 0x685f;
            local_266 = 0;
            local_27e = 0x6c6168635f706c65;
            local_276 = 0x676e656c;
            uStack_272 = 0x5f65;
            uStack_270 = 0x62;
            uStack_26f = 0x6f;
            uStack_26e = 0x6f635f647261;
            local_268 = 0x706f;
            pbVar29 = (byte *)((long)&local_290 + 1);
            do {
              uVar16 = uVar16 * 0x89 ^ uVar32;
              uVar32 = (uint)*pbVar29;
              pbVar29 = pbVar29 + 1;
            } while (uVar32 != 0);
          }
          else {
            puVar18 = FUN_71032817a0(lVar36,0x18cd5a705b);
            if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
               ((((ulong)puVar18 & 0xffffffffff) != 0 &&
                ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) {
LAB_7101b16e58:
              local_298._4_4_ = 0x20;
              uVar32 = 0x6d;
              local_288 = 0x7075706f705f7472;
              local_280 = 0x685f;
              uStack_270 = 0;
              local_27e = 0x6e756f735f706c65;
              local_276 = 0x656d5f64;
              uStack_272 = 0x756e;
              pbVar29 = (byte *)((long)&local_290 + 1);
              do {
                uVar16 = uVar16 * 0x89 ^ uVar32;
                uVar32 = (uint)*pbVar29;
                pbVar29 = pbVar29 + 1;
              } while (uVar32 != 0);
            }
            else {
              puVar18 = FUN_71032817a0(lVar36,0x182fe2e3bf);
              if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
                 ((((ulong)puVar18 & 0xffffffffff) != 0 &&
                  ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) {
LAB_7101b16ee8:
                local_298._4_4_ = 0x21;
                local_288 = 0x7075706f705f7472;
                local_280 = 0x685f;
                local_27e = 0x6c6168635f706c65;
                local_276 = 0x676e656c;
                uStack_272 = 0x7265;
                uStack_270 = 0x73;
                uStack_26f = 0;
                uVar32 = 0x6d;
                pbVar29 = (byte *)((long)&local_290 + 1);
                do {
                  uVar16 = uVar16 * 0x89 ^ uVar32;
                  uVar32 = (uint)*pbVar29;
                  pbVar29 = pbVar29 + 1;
                } while (uVar32 != 0);
              }
              else {
                puVar18 = FUN_71032817a0(lVar36,0x18295f2988);
                if (((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
                    ((((ulong)puVar18 & 0xffffffffff) != 0 &&
                     (uVar26 = extraout_x1_03,
                     (((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) ||
                   ((puVar18 = FUN_71032817a0(lVar36,0x1f3ee3d814), uVar26 = extraout_x1_04,
                    ((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000 ||
                    ((((ulong)puVar18 & 0xffffffffff) == 0 ||
                     ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) != 0))))))
                goto LAB_7101b16d80;
LAB_7101b16c20:
                local_298._4_4_ = 0x1f;
                local_288 = 0x7075706f705f7472;
                local_280 = 0x685f;
                local_27e = 0x706f68735f706c65;
                local_276 = 0x65706f5f;
                uStack_272 = 0x6e;
                uVar32 = 0x6d;
                pbVar29 = (byte *)((long)&local_290 + 1);
                do {
                  uVar16 = uVar16 * 0x89 ^ uVar32;
                  uVar32 = (uint)*pbVar29;
                  pbVar29 = pbVar29 + 1;
                } while (uVar32 != 0);
              }
            }
          }
          local_280 = 0x685f;
          local_288 = 0x7075706f705f7472;
          local_290 = 0x65736e695f756e6d;
          local_298 = CONCAT44(local_298._4_4_,uVar16);
          goto LAB_7101b16f70;
        }
      }
      else if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
              (((ulong)puVar18 & 0xffffffffff) != 0)) {
        puVar18 = FUN_71032817a0(lVar36,0x22eae490b8);
        if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
           (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b16dac;
        puVar18 = FUN_71032817a0(lVar36,0x18cd5a705b);
        if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
           (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b16e58;
        puVar18 = FUN_71032817a0(lVar36,0x182fe2e3bf);
        if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
           (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b16ee8;
        puVar18 = FUN_71032817a0(lVar36,0x18295f2988);
        uVar26 = extraout_x1_05;
        if (((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
            (((ulong)puVar18 & 0xffffffffff) != 0)) &&
           ((puVar18 = FUN_71032817a0(lVar36,0x1f3ee3d814),
            ((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000 ||
            (uVar26 = extraout_x1_06, ((ulong)puVar18 & 0xffffffffff) == 0)))) goto LAB_7101b16c20;
      }
    }
    else {
      uVar26 = extraout_x1;
      if (cVar6 != '\a') {
        lVar36 = *(long *)(DAT_710532f730 + 8);
        lVar42 = *(long *)(lVar36 + 0x318);
        ppppppppplVar41 = (long *********)0x2dffff0000000000;
        goto LAB_7101b16a68;
      }
    }
LAB_7101b16d80:
    local_290 = local_290 & 0xffffffffffffff00;
    local_298 = 0x811c9dc5;
LAB_7101b16d88:
    if (*(long **)(local_248 + 0x10) != (long *)0x0) {
      param_3 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_248 + 0x10),(ushort *)&local_e0,0,0);
      uVar26 = extraout_x1_07;
    }
  }
  lVar36 = *(long *)(param_1 + 0xe0);
  bVar12 = *(char *)((long)param_2 + 0x29) != '\0';
  if (*(long *)(lVar36 + 8) != 0) {
    iVar5 = *param_2;
    uVar16 = iVar5 - 1;
    if (uVar16 < 3) {
      iVar9 = param_2[1];
      if (*(char *)(param_1 + 0x11c) == '\0') {
        pcVar23 = "data_spirit_00";
      }
      else {
        pcVar23 = "data_spirit_01";
      }
      FUN_7103778300(0x3f800000,lVar36,(long)pcVar23);
      if ((char)iVar9 == '\0') {
        pcVar23 = "layout_shop";
      }
      else {
        pcVar23 = "layout_other";
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)pcVar23);
LAB_7101b17458:
      FUN_7103776910(&local_e0,lVar35,(long ****)"set_txt_header",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_header_shadow",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      if (iVar5 == 2) {
        pcVar23 = "mnu_insert_popup_grade_up";
      }
      else {
        if (iVar5 != 3) {
          if (bVar12) goto LAB_7101b174c8;
          FUN_710377a120((long)&local_e0,"mnu_insert_popup_get",param_3,param_4,param_5,param_6,
                         param_7,param_8);
          FUN_710377a120((long)&local_138,"mnu_insert_popup_get",param_3,param_4,param_5,param_6,
                         param_7,param_8);
          bVar14 = false;
          if (2 < uVar16) goto LAB_7101b175c4;
          goto LAB_7101b174f4;
        }
        pcVar23 = "mnu_insert_popup_recall";
      }
      FUN_710377a120((long)&local_e0,pcVar23,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_138,pcVar23,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101b174f4:
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_new",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pppbVar38 = local_178;
      puVar1 = &DAT_710429257e;
      if (!bVar12) {
        puVar1 = &DAT_71043cd335;
      }
      FUN_7103778300(0x3f800000,(long)local_178,(long)puVar1);
      local_180 = (byte ***)&PTR_FUN_710523d988;
      local_178 = (byte ***)0x0;
      if (pppbVar38 != (byte ***)0x0) {
        ppbVar19 = pppbVar38[3];
        pppbVar38[2] = &PTR_FUN_710523d9a8;
        pppbVar38[3] = (byte **)0x0;
        if (ppbVar19 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar19);
        }
        FUN_710392eb40((ulong)pppbVar38);
      }
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_new_r",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar17 = (ulong)local_178;
      FUN_7103778300(0x3f800000,(long)local_178,0x71043cd335);
      local_178 = (byte ***)0x0;
      uVar26 = extraout_x1_10;
    }
    else {
      if (iVar5 != 4) {
        cVar6 = *(char *)(param_1 + 0x100);
        if (cVar6 == '\a') {
          lVar42 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
          puVar18 = FUN_71032817a0(lVar42,0x12f8a058c5);
          uVar17 = *(ulong *)(param_1 + 0xf8);
          if (((uVar17 & 0xff00000000000000) != 0xc100000000000000) ||
             ((uVar17 & 0xffffffffff) == 0)) {
            if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar18 & 0xffffffffff) != 0)) {
              puVar18 = FUN_71032817a0(lVar42,0x10310db94a);
              if (((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) goto LAB_7101b171bc;
              goto joined_r0x007101b173b0;
            }
LAB_7101b17440:
            pcVar23 = "data_get_00";
            goto LAB_7101b17448;
          }
          if (((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
              (((ulong)puVar18 & 0xffffffffff) != 0)) &&
             ((((ulong)puVar18 ^ uVar17) & 0xffffffffff) == 0)) goto LAB_7101b17440;
          puVar18 = FUN_71032817a0(lVar42,0x10310db94a);
          bVar12 = false;
          if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
             (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b17458;
          puVar18 = (undefined1 *)((ulong)puVar18 ^ uVar17);
joined_r0x007101b173b0:
          if (((ulong)puVar18 & 0xffffffffff) == 0) goto LAB_7101b171bc;
        }
        else {
          if (cVar6 == '\x05') {
            lVar42 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8);
            uVar17 = FUN_710327d930(lVar42,*(ulong *)(param_1 + 0x108));
            uVar28 = FUN_710327d930(lVar42,0xd61d998cb);
            bVar14 = (uVar17 & 0xffffffffff) != 0;
            uVar30 = uVar17 & 0xff00000000000000;
            bVar12 = uVar30 == 0x2d00000000000000 && bVar14;
            if (((uVar30 == 0x2d00000000000000 && bVar14) &&
                ((uVar28 & 0xff00000000000000) == 0x2d00000000000000)) &&
               ((uVar28 & 0xffffffffff) != 0)) {
              if (((uVar28 ^ uVar17) & 0xffffffffff) == 0) {
LAB_7101b173f4:
                pcVar23 = "data_get_02";
                goto LAB_7101b17448;
              }
              uVar28 = FUN_710327d930(lVar42,0x155f9548cb);
              uVar30 = uVar28 & 0xffffffffff;
LAB_7101b17424:
              uVar31 = uVar28 & 0xff00000000000000;
              if ((uVar31 != 0x2d00000000000000) || (uVar30 == 0)) goto LAB_7101b19064;
              if (((uVar28 ^ uVar17) & 0xffffffffff) != 0) goto LAB_7101b17440;
            }
            else {
              if (((uVar28 & 0xffffffffff) != 0 &&
                  (uVar28 & 0xff00000000000000) == 0x2d00000000000000) ==
                  (uVar30 == 0x2d00000000000000 && (uVar17 & 0xffffffffff) != 0))
              goto LAB_7101b173f4;
              uVar28 = FUN_710327d930(lVar42,0x155f9548cb);
              uVar30 = uVar28 & 0xffffffffff;
              if (bVar12) goto LAB_7101b17424;
              uVar31 = uVar28 & 0xff00000000000000;
LAB_7101b19064:
              if ((uVar30 != 0 && uVar31 == 0x2d00000000000000) != bVar12) goto LAB_7101b17440;
            }
            pcVar23 = "data_get_03";
          }
          else {
            if (cVar6 != '\x03') goto LAB_7101b17440;
LAB_7101b171bc:
            pcVar23 = "data_get_01";
          }
LAB_7101b17448:
          FUN_7103778300(0x3f800000,lVar36,(long)pcVar23);
        }
        bVar12 = false;
        goto LAB_7101b17458;
      }
      uVar17 = *(ulong *)(param_1 + 0xf8);
      puVar18 = FUN_71032817a0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8),
                               0x1f3ee3d814);
      if ((((uVar17 & 0xff00000000000000) == 0xc100000000000000) && ((uVar17 & 0xffffffffff) != 0))
         && ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar18 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar18 ^ uVar17) & 0xffffffffff) != 0) goto LAB_7101b17154;
LAB_7101b17200:
        pcVar23 = "data_release_01";
      }
      else {
        if ((((ulong)puVar18 & 0xffffffffff) != 0 &&
            ((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) ==
            ((uVar17 & 0xff00000000000000) == 0xc100000000000000 && (uVar17 & 0xffffffffff) != 0))
        goto LAB_7101b17200;
LAB_7101b17154:
        pcVar23 = "data_release_00";
      }
      FUN_7103778300(0x3f800000,lVar36,(long)pcVar23);
      FUN_7103776910(&local_e0,lVar35,(long ****)"set_txt_header",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_header_shadow",param_3,param_4,param_5,
                     param_6,param_7,param_8);
LAB_7101b174c8:
      FUN_710377a120((long)&local_e0,"mnu_insert_popup_unlock",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a120((long)&local_138,"mnu_insert_popup_unlock",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      bVar14 = true;
      bVar12 = bVar14;
      if (uVar16 < 3) goto LAB_7101b174f4;
LAB_7101b175c4:
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_new",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pppbVar38 = local_178;
      FUN_7103778300(0x3f800000,(long)local_178,0x71043cd335);
      local_180 = (byte ***)&PTR_FUN_710523d988;
      local_178 = (byte ***)0x0;
      if (pppbVar38 != (byte ***)0x0) {
        ppbVar19 = pppbVar38[3];
        pppbVar38[2] = &PTR_FUN_710523d9a8;
        pppbVar38[3] = (byte **)0x0;
        if (ppbVar19 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar19);
        }
        FUN_710392eb40((ulong)pppbVar38);
      }
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_new_r",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar17 = (ulong)local_178;
      puVar1 = &DAT_710429257e;
      if (!bVar14) {
        puVar1 = &DAT_71043cd335;
      }
      FUN_7103778300(0x3f800000,(long)local_178,(long)puVar1);
      local_178 = (byte ***)0x0;
      uVar26 = extraout_x1_11;
    }
    local_178 = (byte ***)0x0;
    local_180 = (byte ***)&PTR_FUN_710523d988;
    if (uVar17 != 0) {
      local_178 = (byte ***)0x0;
      local_180 = (byte ***)&PTR_FUN_710523d988;
      uVar28 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      FUN_710392eb40(uVar17);
      uVar26 = extraout_x1_12;
    }
    pppbVar38 = local_130;
    local_138 = (byte ***)&PTR_FUN_710523d9a8;
    local_130 = (byte ***)0x0;
    if (pppbVar38 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar38);
      uVar26 = extraout_x1_13;
    }
    plVar40 = local_d8;
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar40);
      uVar26 = extraout_x1_14;
    }
    lVar36 = *(long *)(param_1 + 0xe0);
    if (*(long *)(lVar36 + 8) == 0) goto switchD_7101b176d8_caseD_2;
    switch(*(undefined1 *)(param_1 + 0x100)) {
    case 0:
      local_e0 = (undefined **)0x2100000000;
      local_d8 = (long *)0x65736e695f756e6d;
      local_d0 = 0x7075706f705f7472;
      local_c8 = 0x635f;
      local_c6 = 0x5f79726f67657461;
      local_be = 0x5f69696d;
      uStack_ba = 0x6168;
      uStack_b8 = 0x74;
      uStack_b7 = 0;
      uVar16 = 0x6d;
      pbVar29 = (byte *)((long)&local_d8 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar16;
        uVar16 = (uint)*pbVar29;
        pbVar29 = pbVar29 + 1;
      } while (uVar16 != 0);
      local_e0 = (undefined **)CONCAT44(0x21,uVar15);
      FUN_7103778300(0x3f800000,lVar36,0x71043be291);
      FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_category",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377a120((long)&local_138,(char *)&local_d8,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppbVar38 = local_130;
      local_138 = (byte ***)&PTR_FUN_710523d9a8;
      local_130 = (byte ***)0x0;
      if (pppbVar38 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar38);
      }
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_item",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b11bd0((long)&local_180,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x1;
      local_130 = (byte ***)0x0;
      uStack_128 = 0;
      local_138 = (byte ***)0x0;
      FUN_7101b15150((long *)&local_138,(long)&local_180,2,1,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)(local_130 + -2));
      FUN_7101b11160((long)&local_180,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      pppbVar11 = local_138;
      uVar26 = extraout_x1_15;
      pppbVar38 = local_130;
      if (local_138 != (byte ***)0x0) {
        while (pppbVar38 != pppbVar11) {
          pppbVar38 = pppbVar38 + -2;
          (*(code *)**pppbVar38)(pppbVar38);
          uVar26 = extraout_x1_16;
        }
joined_r0x007101b19498:
        local_130 = pppbVar11;
        if (local_138 != (byte ***)0x0) {
          FUN_710392eb40((ulong)local_138);
          uVar26 = extraout_x1_29;
        }
      }
      break;
    case 1:
      local_e0 = (undefined **)0x2200000000;
      local_d8 = (long *)0x65736e695f756e6d;
      local_d0 = 0x7075706f705f7472;
      local_c8 = 0x635f;
      local_c6 = 0x5f79726f67657461;
      local_be = 0x5f69696d;
      uStack_ba = 0x6f62;
      uStack_b8 = 100;
      uStack_b7 = 0x79;
      uVar16 = 0x6d;
      uStack_b6 = 0;
      pbVar29 = (byte *)((long)&local_d8 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar16;
        uVar16 = (uint)*pbVar29;
        pbVar29 = pbVar29 + 1;
      } while (uVar16 != 0);
      local_e0 = (undefined **)CONCAT44(0x22,uVar15);
      FUN_7103778300(0x3f800000,lVar36,0x71043be291);
      FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_category",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377a120((long)&local_138,(char *)&local_d8,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppbVar38 = local_130;
      local_138 = (byte ***)&PTR_FUN_710523d9a8;
      local_130 = (byte ***)0x0;
      if (pppbVar38 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar38);
      }
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_item",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b11bd0((long)&local_180,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x1;
      local_130 = (byte ***)0x0;
      uStack_128 = 0;
      local_138 = (byte ***)0x0;
      FUN_7101b15150((long *)&local_138,(long)&local_180,2,1,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)(local_130 + -2));
      FUN_7101b11160((long)&local_180,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      pppbVar11 = local_138;
      uVar26 = extraout_x1_17;
      pppbVar38 = local_130;
      if (local_138 != (byte ***)0x0) {
        while (pppbVar38 != pppbVar11) {
          pppbVar38 = pppbVar38 + -2;
          (*(code *)**pppbVar38)(pppbVar38);
          uVar26 = extraout_x1_18;
        }
        goto joined_r0x007101b19498;
      }
      break;
    default:
      goto switchD_7101b176d8_caseD_2;
    case 3:
      puVar24 = &local_e0;
      local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
      local_e0 = (undefined **)0x811c9dc5;
      FUN_7101b199c0(param_1,6,(long)puVar24,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_1d8,lVar35,(byte ****)"set_parts_item",puVar24,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b11bd0((long)&local_1d8,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x1;
      local_178 = (byte ***)0x0;
      local_170 = 0;
      local_180 = (byte ***)0x0;
      FUN_7101b15150((long *)&local_180,(long)&local_1d8,2,1,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)(local_178 + -2));
      FUN_7101b11160((long)&local_1d8,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      lVar36 = DAT_710532f730;
      if (*(char *)(param_1 + 0x100) == '\x03') {
        lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x278);
        uVar17 = FUN_71032575c0(lVar42,*(ulong *)(param_1 + 0x108));
        param_3 = (long *********)FUN_710325dd40(lVar42,uVar17);
        FUN_710327c2f0((uint *)&local_138,*(long *)(lVar36 + 8) + 0x2b0,(ulong)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        local_130 = (byte ***)((ulong)local_130 & 0xffffffffffffff00);
        local_138 = (byte ***)0x811c9dc5;
        param_3 = ppppppppplVar37;
      }
      FUN_7103776910(&local_88,lVar35,(long ****)"set_txt_item_music",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_88,(char *)&local_130,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppbVar38 = local_80;
      local_88 = &PTR_FUN_710523d9a8;
      local_80 = (byte ***)0x0;
      uVar26 = extraout_x1_20;
      if (pppbVar38 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar38);
        uVar26 = extraout_x1_21;
      }
      pppbVar11 = local_180;
      pppbVar38 = local_178;
      if (local_180 != (byte ***)0x0) {
        while (pppbVar38 != pppbVar11) {
          pppbVar38 = pppbVar38 + -2;
          (*(code *)**pppbVar38)(pppbVar38);
          uVar26 = extraout_x1_22;
        }
        local_178 = pppbVar11;
        if (local_180 != (byte ***)0x0) {
          FUN_710392eb40((ulong)local_180);
          uVar26 = extraout_x1_23;
        }
      }
      pppbVar38 = local_1d0[0];
      local_1d8 = &PTR_FUN_710523d988;
      local_1d0[0] = (byte ***)0x0;
      if (pppbVar38 == (byte ***)0x0) goto switchD_7101b176d8_caseD_2;
      goto LAB_7101b1940c;
    case 4:
      lVar36 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      iVar5 = param_2[1];
      uVar16 = FUN_71032a7800(lVar36,*(ulong *)(param_1 + 0x108));
      uVar26 = extraout_x1_19;
      if (((uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                 -0x33333333) <= uVar16) ||
         (uVar21 = *(ushort *)(*(long *)(lVar36 + 0x20) + (ulong)uVar16 * 0x140), uVar21 == 0xffff))
      goto switchD_7101b176d8_caseD_2;
      bVar12 = FUN_71025c9890(uVar21);
      uVar16 = 2;
      if (!bVar12) {
        uVar16 = 0;
      }
      FUN_7103776640(&local_88,lVar35,(byte ****)"set_parts_spirit",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar26 = 1;
      param_5 = (long ****)0x1;
      uVar17 = (ulong)uVar16;
      FUN_71025ae6d0((long)&local_88,uVar21,(byte)uVar16,1,1,param_6,param_7,param_8);
      FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_rep_spirit_aw_sdw",uVar17,uVar26,
                     param_5,param_6,param_7,param_8);
      uVar26 = 1;
      param_4 = (byte ****)(ulong)uVar16;
      FUN_71025ae1b0(uVar21,&local_98,1,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_f0,lVar35,(byte ****)"set_parts_paramset",uVar26,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_7101b14960(*(long **)(param_1 + 200),(long)&local_f0,uVar21,param_4,param_5,param_6,
                     param_7,param_8);
      lVar42 = *(long *)(DAT_710532f730 + 8);
      lVar36 = *(long *)(lVar42 + 0x1d8);
      uVar28 = (ulong)*(ushort *)(lVar36 + (long)(short)uVar21 * 2 + 0x60);
      uVar17 = (*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20) >> 6) * -0x3333333333333333;
      puVar2 = (undefined2 *)(*(long *)(lVar36 + 0x20) + uVar28 * 0x140);
      if (uVar17 < uVar28 || uVar17 - uVar28 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      bVar7 = *(byte *)(puVar2 + 0x2f);
      uVar17 = (ulong)bVar7;
      if (bVar7 == 0) {
        if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
          uVar20 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
        }
        else {
          uVar20 = 0;
        }
      }
      else {
        uVar20 = 4;
      }
      FUN_710339dde0((uint *)&local_138,uVar20,bVar7);
      if ((*(char *)(puVar2 + 0x2f) == '\x03') && ((char)iVar5 != '\0')) {
        FUN_7103778300(0x3f800000,local_e8,0x710424f898);
      }
      uVar10 = local_170._2_6_;
      switch(*(undefined1 *)(puVar2 + 0x34)) {
      case 0:
        local_180 = (byte ***)0xa00000000;
        local_178 = (byte ***)0x6f6e5f7373616c63;
        uVar16 = 99;
        local_170 = CONCAT53(local_170._3_5_,0x656e);
        pbVar29 = (byte *)((long)&local_178 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
        break;
      case 1:
        local_180 = (byte ***)0xa00000000;
        local_178 = (byte ***)0x6f685f7373616c63;
        uVar16 = 99;
        local_170 = CONCAT53(local_170._3_5_,0x6570);
        pbVar29 = (byte *)((long)&local_178 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
        break;
      case 2:
        local_180 = (byte ***)0x900000000;
        local_178 = (byte ***)0x63615f7373616c63;
        local_170 = CONCAT62(uVar10,0x65);
        uVar16 = 99;
        pbVar29 = (byte *)((long)&local_178 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
        break;
      case 3:
        local_180 = (byte ***)0xc00000000;
        local_178 = (byte ***)0x656c5f7373616c63;
        uVar16 = 99;
        local_170 = CONCAT35(local_170._5_3_,0x646e6567);
        pbVar29 = (byte *)((long)&local_178 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
        break;
      default:
        local_180 = (byte ***)0xa00000000;
        local_178 = (byte ***)0x6f6e5f7373616c63;
        uVar16 = 99;
        local_170 = CONCAT53(local_170._3_5_,0x656e);
        pbVar29 = (byte *)((long)&local_178 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
      }
      local_180 = (byte ***)CONCAT44(local_180._4_4_,uVar15);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)&local_178);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),(long)&local_130);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),(long)&local_130);
      FUN_7103776640(&local_190,param_1 + 0xe8,(byte ****)"set_parts_spirits_bg",uVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar17 = local_188;
      FUN_7103778300(0x3f800000,local_188,(long)&local_130);
      lVar36 = *(long *)(lVar42 + 0x1d8);
      param_3 = (long *********)FUN_71032a9470(lVar36,uVar21);
      FUN_71032a9540((uint *)&local_e0,lVar36,(ulong)param_3);
      FUN_71003a4ca0((uint *)&local_1d8,"spi_%s",&local_d8,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7103776910(&local_e0,lVar35,(long ****)"set_txt_spirit_name_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_e0,(char *)local_1d0,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar40 = local_d8;
      if (*(char *)(puVar2 + 0x2f) == '\x01') {
        *(undefined4 *)(param_1 + 0x148) = 0x5a;
      }
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8 = (long *)0x0;
      uVar26 = extraout_x1_31;
      if (plVar40 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar40);
        uVar26 = extraout_x1_32;
      }
      local_190 = &PTR_FUN_710523d988;
      local_188 = 0;
      if (uVar17 != 0) {
        uVar28 = *(ulong *)(uVar17 + 0x18);
        *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar17 + 0x18) = 0;
        if (uVar28 != 0) {
          FUN_710392eb40(uVar28);
        }
        FUN_710392eb40(uVar17);
        uVar26 = extraout_x1_33;
      }
      uVar17 = local_e8;
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = 0;
      if (uVar17 != 0) {
        uVar28 = *(ulong *)(uVar17 + 0x18);
        *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar17 + 0x18) = 0;
        if (uVar28 != 0) {
          FUN_710392eb40(uVar28);
        }
        FUN_710392eb40(uVar17);
        uVar26 = extraout_x1_34;
      }
      uVar17 = local_90;
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
        uVar26 = extraout_x1_35;
      }
      pppbVar38 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = (byte ***)0x0;
      goto joined_r0x007101b1981c;
    case 5:
      lVar36 = *(long *)(DAT_710532f730 + 8);
      lVar42 = *(long *)(*(long *)(lVar36 + 0x318) + 8);
      uVar17 = FUN_710327d930(lVar42,*(ulong *)(param_1 + 0x108));
      uVar28 = FUN_710327d930(lVar42,0xd61d998cb);
      bVar14 = (uVar17 & 0xffffffffff) != 0;
      bVar13 = (uVar17 & 0xff00000000000000) == 0x2d00000000000000;
      bVar12 = bVar13 && bVar14;
      if (((bVar13 && bVar14) && ((uVar28 & 0xff00000000000000) == 0x2d00000000000000)) &&
         ((uVar28 & 0xffffffffff) != 0)) {
        if (((uVar28 ^ uVar17) & 0xffffffffff) == 0) {
LAB_7101b17f24:
          FUN_7103776640(&local_e0,lVar35,(byte ****)"set_parts_txt_gold",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_7103776910(&local_138,(long)&local_e0,(long ****)"set_txt_help",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          uVar16 = *(uint *)(param_1 + 0x110);
          pcVar23 = "mnu_insert_popup_reward_g";
          goto LAB_7101b18d0c;
        }
        uVar28 = FUN_710327d930(lVar42,0x155f9548cb);
        uVar30 = uVar28 & 0xffffffffff;
LAB_7101b180d8:
        uVar31 = uVar28 & 0xff00000000000000;
        if ((uVar31 != 0x2d00000000000000) || (uVar30 == 0)) goto LAB_7101b18cb8;
        if (((uVar28 ^ uVar17) & 0xffffffffff) == 0) goto LAB_7101b18cd8;
      }
      else {
        if (((uVar28 & 0xffffffffff) != 0 && (uVar28 & 0xff00000000000000) == 0x2d00000000000000) ==
            ((uVar17 & 0xff00000000000000) == 0x2d00000000000000 && (uVar17 & 0xffffffffff) != 0))
        goto LAB_7101b17f24;
        uVar28 = FUN_710327d930(lVar42,0x155f9548cb);
        uVar30 = uVar28 & 0xffffffffff;
        if (bVar13 && bVar14) goto LAB_7101b180d8;
        uVar31 = uVar28 & 0xff00000000000000;
LAB_7101b18cb8:
        if ((uVar30 != 0 && uVar31 == 0x2d00000000000000) != bVar12) goto LAB_7101b18d54;
LAB_7101b18cd8:
        FUN_7103776640(&local_e0,lVar35,(byte ****)"set_parts_txt_sp",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_7103776910(&local_138,(long)&local_e0,(long ****)"set_txt_help",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar16 = *(uint *)(param_1 + 0x110);
        pcVar23 = "mnu_insert_popup_reward_sp";
LAB_7101b18d0c:
        param_4 = (byte ****)(ulong)uVar16;
        param_3 = (long *********)0x1;
        FUN_710377a280((long)&local_138,(byte *)pcVar23,1);
        pppbVar38 = local_130;
        local_138 = (byte ***)&PTR_FUN_710523d9a8;
        local_130 = (byte ***)0x0;
        if (pppbVar38 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar38);
        }
        plVar40 = local_d8;
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = (long *)0x0;
        if (plVar40 != (long *)0x0) {
          uVar28 = plVar40[3];
          plVar40[2] = (long)&PTR_FUN_710523d9a8;
          plVar40[3] = 0;
          if (uVar28 != 0) {
            FUN_710392eb40(uVar28);
          }
          FUN_710392eb40((ulong)plVar40);
        }
      }
LAB_7101b18d54:
      lVar42 = *(long *)(lVar36 + 0x318);
      lVar43 = *(long *)(lVar42 + 8);
      uVar28 = FUN_710327d930(lVar43,0x155f9548cb);
      uVar30 = uVar28 & 0xffffffffff;
      if (bVar13 && bVar14) {
        if (((uVar28 & 0xff00000000000000) == 0x2d00000000000000) && (uVar30 != 0)) {
          if (((uVar28 ^ uVar17) & 0xffffffffff) != 0) {
LAB_7101b18eac:
            uVar31 = FUN_710327d930(lVar43,0xd61d998cb);
            uVar30 = uVar31 & 0xff00000000000000;
            uVar28 = uVar31 & 0xffffffffff;
            if ((uVar30 != 0x2d00000000000000) || (uVar28 == 0)) goto LAB_7101b18f4c;
            if (((uVar31 ^ uVar17) & 0xffffffffff) == 0) goto LAB_7101b18f68;
            goto LAB_7101b18ee8;
          }
        }
        else if ((uVar30 != 0 && (uVar28 & 0xff00000000000000) == 0x2d00000000000000) != bVar12)
        goto LAB_7101b18eac;
LAB_7101b18e18:
        local_e0 = (undefined **)0x1d00000000;
        local_d8 = (long *)0x65736e695f756e6d;
        local_d0 = 0x7075706f705f7472;
        local_c8 = 0x735f;
        local_c6 = 0x6f705f7469726970;
        local_be = 0x746e69;
        uVar16 = 0x6d;
        pbVar29 = (byte *)((long)&local_d8 + 1);
        do {
          uVar15 = uVar15 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (uVar16 != 0);
        local_e0 = (undefined **)CONCAT44(0x1d,uVar15);
        lVar36 = *(long *)(param_1 + 0xe0);
        pcVar23 = "category_color_03";
LAB_7101b1930c:
        local_d0 = 0x7075706f705f7472;
        local_d8 = (long *)0x65736e695f756e6d;
        FUN_7103778300(0x3f800000,lVar36,(long)pcVar23);
        FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_category",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_138,(char *)&local_d8,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        pppbVar38 = local_130;
joined_r0x007101b19010:
        local_130 = (byte ***)0x0;
        local_138 = (byte ***)&PTR_FUN_710523d9a8;
        if (pppbVar38 != (byte ***)0x0) {
          local_130 = (byte ***)0x0;
          local_138 = (byte ***)&PTR_FUN_710523d9a8;
          FUN_710392eb40((ulong)pppbVar38);
        }
      }
      else {
        if ((uVar30 != 0 && (uVar28 & 0xff00000000000000) == 0x2d00000000000000) == bVar12)
        goto LAB_7101b18e18;
        uVar28 = FUN_710327d930(lVar43,0xd61d998cb);
        uVar30 = uVar28 & 0xff00000000000000;
        uVar28 = uVar28 & 0xffffffffff;
LAB_7101b18f4c:
        if ((uVar28 != 0 && uVar30 == 0x2d00000000000000) == bVar12) {
LAB_7101b18f68:
          local_e0 = (undefined **)0x1500000000;
          local_d8 = (long *)0x65736e695f756e6d;
          local_d0 = 0x7075706f705f7472;
          local_c8 = 0x675f;
          local_c6 = CONCAT44(local_c6._4_4_,0x646c6f);
          uVar16 = 0x6d;
          pbVar29 = (byte *)((long)&local_d8 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (uVar16 != 0);
          local_e0 = (undefined **)CONCAT44(0x15,uVar15);
          lVar36 = *(long *)(param_1 + 0xe0);
          pcVar23 = "category_color_03";
LAB_7101b18fe4:
          local_d0 = 0x7075706f705f7472;
          local_d8 = (long *)0x65736e695f756e6d;
          FUN_7103778300(0x3f800000,lVar36,(long)pcVar23);
          FUN_7103776910(&local_138,lVar35,(long ****)"set_txt_category",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_710377a120((long)&local_138,(char *)&local_d8,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          pppbVar38 = local_130;
          goto joined_r0x007101b19010;
        }
LAB_7101b18ee8:
        uVar28 = FUN_710327d3b0(lVar42,uVar17);
        uVar28 = uVar28 & 0xffffffffff;
        if (((uVar28 == 0xdaaec3d9f) || (uVar28 == 0x106cb91611)) || (uVar28 == 0xe32ae387d)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        uVar28 = FUN_710327d0d0(*(long *)(lVar36 + 0x318),uVar17);
        if (((uVar28 & 0xffffffffff) == 0x7db8309f9) && (bVar8)) {
          local_e0 = (undefined **)0x2100000000;
          local_d8 = (long *)0x65736e695f756e6d;
          local_d0 = 0x7075706f705f7472;
          local_c8 = 0x635f;
          local_c6 = 0x5f79726f67657461;
          local_be = 0x695f7073;
          uStack_ba = 0x6574;
          uStack_b8 = 0x6d;
          uStack_b7 = 0;
          uVar16 = 0x6d;
          pbVar29 = (byte *)((long)&local_d8 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (uVar16 != 0);
LAB_7101b192f8:
          local_c6 = 0x5f79726f67657461;
          local_c8 = 0x635f;
          local_e0 = (undefined **)CONCAT44(local_e0._4_4_,uVar15);
          lVar36 = *(long *)(param_1 + 0xe0);
          pcVar23 = "category_color_04";
          goto LAB_7101b1930c;
        }
        uVar28 = FUN_710327d3b0(*(long *)(lVar36 + 0x318),uVar17);
        uVar30 = FUN_710327d0d0(*(long *)(lVar36 + 0x318),uVar17);
        if (((uVar28 & 0xffffffffff) == 0x697117991) && ((uVar30 & 0xffffffffff) == 0x7db8309f9)) {
          local_d8 = (long *)0x65736e695f756e6d;
          local_d0 = 0x7075706f705f7472;
          local_c8 = 0x635f;
          local_e0 = (undefined **)0x2000000000;
          local_c6 = 0x5f79726f67657461;
          local_be = 0x72656e65;
          uStack_ba = 0x7967;
          uVar16 = 0x6d;
          uStack_b8 = 0;
          pbVar29 = (byte *)((long)&local_d8 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (uVar16 != 0);
          goto LAB_7101b192f8;
        }
        lVar36 = *(long *)(*(long *)(lVar36 + 0x318) + 8);
        uVar28 = FUN_710327d930(lVar36,0x1ae148d108);
        uVar30 = uVar28 & 0xffffffffff;
        if (bVar13 && bVar14) {
          if (((uVar28 & 0xff00000000000000) == 0x2d00000000000000) && (uVar30 != 0)) {
            if (((uVar28 ^ uVar17) & 0xffffffffff) != 0) {
LAB_7101b19948:
              uVar30 = FUN_710327d930(lVar36,0x18723aaa88);
              uVar31 = uVar30 & 0xff00000000000000;
              uVar28 = uVar30 & 0xffffffffff;
              if ((uVar31 != 0x2d00000000000000) || (uVar28 == 0)) goto LAB_7101b19984;
              if (((uVar30 ^ uVar17) & 0xffffffffff) == 0) goto LAB_7101b199a0;
              goto LAB_7101b19348;
            }
          }
          else if ((uVar30 != 0 && (uVar28 & 0xff00000000000000) == 0x2d00000000000000) != bVar12)
          goto LAB_7101b19948;
LAB_7101b1989c:
          local_e0 = (undefined **)0x2300000000;
          local_d8 = (long *)0x65736e695f756e6d;
          local_d0 = 0x7075706f705f7472;
          local_c8 = 0x635f;
          local_c6 = 0x5f79726f67657461;
          local_be = 0x706d6163;
          uStack_ba = 0x695f;
          uVar16 = 0x6d;
          uStack_b8 = 0x74;
          uStack_b7 = 0x65;
          uStack_b6 = 0x6d;
          uStack_b5 = 0;
          pbVar29 = (byte *)((long)&local_d8 + 1);
          do {
            uVar15 = uVar15 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar29;
            pbVar29 = pbVar29 + 1;
          } while (uVar16 != 0);
          local_e0 = (undefined **)CONCAT44(0x23,uVar15);
          lVar36 = *(long *)(param_1 + 0xe0);
          pcVar23 = "category_color_04";
          goto LAB_7101b18fe4;
        }
        if ((uVar30 != 0 && (uVar28 & 0xff00000000000000) == 0x2d00000000000000) == bVar12)
        goto LAB_7101b1989c;
        uVar28 = FUN_710327d930(lVar36,0x18723aaa88);
        uVar31 = uVar28 & 0xff00000000000000;
        uVar28 = uVar28 & 0xffffffffff;
LAB_7101b19984:
        if ((uVar28 != 0 && uVar31 == 0x2d00000000000000) == bVar12) {
LAB_7101b199a0:
          param_3 = (long *********)&local_e0;
          local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          local_e0 = (undefined **)0x811c9dc5;
          FUN_7101b199c0(param_1,7,(long)param_3,param_4,param_5,param_6,param_7,param_8);
        }
      }
LAB_7101b19348:
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_item",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b11bd0((long)&local_180,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x1;
      local_130 = (byte ***)0x0;
      uStack_128 = 0;
      local_138 = (byte ***)0x0;
      FUN_7101b15150((long *)&local_138,(long)&local_180,2,1,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)(local_130 + -2));
      FUN_7101b11160((long)&local_180,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      pppbVar11 = local_138;
      uVar26 = extraout_x1_27;
      pppbVar38 = local_130;
      if (local_138 != (byte ***)0x0) {
        while (pppbVar38 != pppbVar11) {
          pppbVar38 = pppbVar38 + -2;
          (*(code *)**pppbVar38)(pppbVar38);
          uVar26 = extraout_x1_28;
        }
        goto joined_r0x007101b19498;
      }
      break;
    case 6:
      lVar36 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar18 = FUN_71032817a0(lVar36,0x1cd6be4c9b);
      pppppppplVar39 = *ppppppppplVar37;
      if ((((ulong)pppppppplVar39 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)pppppppplVar39 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
           ((((ulong)puVar18 & 0xffffffffff) != 0 &&
            ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) goto LAB_7101b1800c;
        puVar18 = FUN_71032817a0(lVar36,0x22eae490b8);
        if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
           ((((ulong)puVar18 & 0xffffffffff) != 0 &&
            ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) {
LAB_7101b18134:
          local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          uVar27 = 10;
        }
        else {
          puVar18 = FUN_71032817a0(lVar36,0x18cd5a705b);
          if (((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
              ((((ulong)puVar18 & 0xffffffffff) != 0 &&
               ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))) ||
             ((puVar18 = FUN_71032817a0(lVar36,0x18295f2988),
              ((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
              ((((ulong)puVar18 & 0xffffffffff) != 0 &&
               ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)))))) {
LAB_7101b18124:
            local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
            uVar27 = 1;
          }
          else {
            puVar18 = FUN_71032817a0(lVar36,0x182fe2e3bf);
            if (((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
                (((ulong)puVar18 & 0xffffffffff) == 0)) ||
               ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) != 0))
            goto LAB_7101b1800c;
LAB_7101b17da8:
            uVar27 = 3;
            local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          }
        }
      }
      else {
        if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar18 & 0xffffffffff) != 0)) {
          puVar18 = FUN_71032817a0(lVar36,0x22eae490b8);
          if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
             (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b18134;
          puVar18 = FUN_71032817a0(lVar36,0x18cd5a705b);
          if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
             (((((ulong)puVar18 & 0xffffffffff) == 0 ||
               (puVar18 = FUN_71032817a0(lVar36,0x18295f2988),
               ((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000)) ||
              (((ulong)puVar18 & 0xffffffffff) == 0)))) goto LAB_7101b18124;
          puVar18 = FUN_71032817a0(lVar36,0x182fe2e3bf);
          if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
             (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b17da8;
        }
LAB_7101b1800c:
        local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
        uVar27 = 2;
      }
      local_e0 = (undefined **)0x811c9dc5;
      puVar24 = &local_e0;
      FUN_7101b199c0(param_1,uVar27,(long)puVar24,param_4,param_5,param_6,param_7,param_8);
      lVar36 = *(long *)(DAT_710532f730 + 8);
      pppppppplVar39 = *ppppppppplVar37;
      puVar18 = FUN_71032817a0(*(long *)(*(long *)(lVar36 + 0x2f8) + 8),0x1f3ee3d814);
      if (((((ulong)pppppppplVar39 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)pppppppplVar39 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000 &&
          (((ulong)puVar18 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) != 0) goto LAB_7101b181a4;
LAB_7101b18290:
        lVar36 = *(long *)(lVar36 + 0x1d8);
        uVar15 = FUN_71032a7800(lVar36,0xf91e07ad5);
        if (uVar15 < (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6)
                           * -0x33333333)) {
          uVar21 = *(ushort *)(*(long *)(lVar36 + 0x20) + (ulong)uVar15 * 0x140);
        }
        else {
          uVar21 = 0xffff;
        }
        bVar12 = FUN_71025c9890(uVar21);
        uVar16 = 2;
        uVar15 = uVar16;
        if (!bVar12) {
          uVar15 = 0;
        }
        FUN_7103776640(&local_138,lVar35,(byte ****)"set_parts_spirit",puVar24,param_4,param_5,
                       param_6,param_7,param_8);
        bVar12 = FUN_71025c9890(uVar21);
        if (!bVar12) {
          uVar16 = 0;
        }
        uVar17 = (ulong)uVar16;
        uVar26 = 1;
        param_5 = (long ****)0x1;
        FUN_71025ae6d0((long)&local_138,uVar21,(byte)uVar16,1,1,param_6,param_7,param_8);
        FUN_7103776910(&local_180,(long)&local_138,(long ****)"set_rep_spirit_aw_sdw",uVar17,uVar26,
                       param_5,param_6,param_7,param_8);
        ppppppppplVar37 = (long *********)0x1;
        param_4 = (byte ****)(ulong)uVar15;
        FUN_71025ae1b0(uVar21,&local_180,1,param_4,param_5,param_6,param_7,param_8);
        pppbVar38 = local_178;
        local_180 = (byte ***)&PTR_FUN_710523d9a8;
        local_178 = (byte ***)0x0;
        if (pppbVar38 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar38);
        }
        pppbVar38 = local_130;
        local_138 = (byte ***)&PTR_FUN_710523d988;
        local_130 = (byte ***)0x0;
      }
      else {
        if ((((ulong)puVar18 & 0xffffffffff) != 0 &&
            ((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) ==
            (((ulong)pppppppplVar39 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)pppppppplVar39 & 0xffffffffff) != 0)) goto LAB_7101b18290;
LAB_7101b181a4:
        FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_item",puVar24,param_4,param_5,param_6
                       ,param_7,param_8);
        FUN_7101b11bd0((long)&local_180,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x1;
        local_130 = (byte ***)0x0;
        uStack_128 = 0;
        local_138 = (byte ***)0x0;
        FUN_7101b15150((long *)&local_138,(long)&local_180,2,1,param_5,param_6,param_7,param_8);
        FUN_710377b140((long)(local_130 + -2));
        FUN_7101b11160((long)&local_180,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                       param_6,param_7,param_8);
        pppbVar11 = local_138;
        pppbVar38 = local_130;
        if (local_138 != (byte ***)0x0) {
          while (pppbVar38 != pppbVar11) {
            pppbVar38 = pppbVar38 + -2;
            (*(code *)**pppbVar38)(pppbVar38);
          }
          local_130 = pppbVar11;
          if (local_138 != (byte ***)0x0) {
            FUN_710392eb40((ulong)local_138);
          }
        }
        pppbVar38 = local_178;
        local_180 = (byte ***)&PTR_FUN_710523d988;
        local_178 = (byte ***)0x0;
      }
      if (pppbVar38 != (byte ***)0x0) {
        ppbVar19 = pppbVar38[3];
        pppbVar38[2] = &PTR_FUN_710523d9a8;
        pppbVar38[3] = (byte **)0x0;
        if (ppbVar19 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar19);
        }
        FUN_710392eb40((ulong)pppbVar38);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      cVar6 = *(char *)(param_1 + 0x11c);
      uVar26 = extraout_x1_24;
      param_3 = ppppppppplVar37;
      goto joined_r0x007101b183a4;
    case 7:
      lVar36 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar18 = FUN_71032817a0(lVar36,0x12f8a058c5);
      pppppppplVar39 = *ppppppppplVar37;
      if ((((ulong)pppppppplVar39 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)pppppppplVar39 & 0xffffffffff) != 0)) {
        if (((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
            (((ulong)puVar18 & 0xffffffffff) != 0)) &&
           ((((ulong)puVar18 ^ (ulong)pppppppplVar39) & 0xffffffffff) == 0)) {
LAB_7101b180f8:
          param_3 = (long *********)&local_e0;
          local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
          local_e0 = (undefined **)0x811c9dc5;
          FUN_7101b199c0(param_1,9,(long)param_3,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          puVar18 = FUN_71032817a0(lVar36,0x10310db94a);
          if ((((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar18 & 0xffffffffff) != 0)) {
            puVar18 = (undefined1 *)((ulong)puVar18 ^ (ulong)pppppppplVar39);
joined_r0x007101b18050:
            if (((ulong)puVar18 & 0xffffffffff) == 0) goto LAB_7101b18054;
          }
        }
      }
      else {
        if ((((ulong)puVar18 & 0xff00000000000000) != 0xc100000000000000) ||
           (((ulong)puVar18 & 0xffffffffff) == 0)) goto LAB_7101b180f8;
        puVar18 = FUN_71032817a0(lVar36,0x10310db94a);
        if (((ulong)puVar18 & 0xff00000000000000) == 0xc100000000000000)
        goto joined_r0x007101b18050;
LAB_7101b18054:
        param_3 = (long *********)&local_e0;
        local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
        local_e0 = (undefined **)0x811c9dc5;
        FUN_7101b199c0(param_1,6,(long)param_3,param_4,param_5,param_6,param_7,param_8);
        lVar36 = DAT_710532f730;
        if (*(char *)(param_1 + 0x100) == '\x03') {
          lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x278);
          uVar17 = FUN_71032575c0(lVar42,*(ulong *)(param_1 + 0x108));
          param_3 = (long *********)FUN_710325dd40(lVar42,uVar17);
          FUN_710327c2f0((uint *)&local_138,*(long *)(lVar36 + 8) + 0x2b0,(ulong)param_3,param_4,
                         param_5,param_6,param_7,param_8);
        }
        else {
          local_130 = (byte ***)((ulong)local_130 & 0xffffffffffffff00);
          local_138 = (byte ***)0x811c9dc5;
        }
        FUN_7103776910(&local_180,lVar35,(long ****)"set_txt_item_music",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_180,(char *)&local_130,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        pppbVar38 = local_178;
        local_180 = (byte ***)&PTR_FUN_710523d9a8;
        local_178 = (byte ***)0x0;
        if (pppbVar38 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar38);
        }
      }
      FUN_7103776640(&local_180,lVar35,(byte ****)"set_parts_item",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b11bd0((long)&local_180,(ulong *)ppppppppplVar37,(long *********)0x2,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      param_4 = (byte ****)0x1;
      local_130 = (byte ***)0x0;
      uStack_128 = 0;
      local_138 = (byte ***)0x0;
      FUN_7101b15150((long *)&local_138,(long)&local_180,2,1,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)(local_130 + -2));
      FUN_7101b11160((long)&local_180,*(long **)(param_1 + 200),ppppppppplVar37,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xf0),0x710436beaa);
      pppbVar11 = local_138;
      uVar26 = extraout_x1_25;
      pppbVar38 = local_130;
      if (local_138 != (byte ***)0x0) {
        while (pppbVar38 != pppbVar11) {
          pppbVar38 = pppbVar38 + -2;
          (*(code *)**pppbVar38)(pppbVar38);
          uVar26 = extraout_x1_26;
        }
        goto joined_r0x007101b19498;
      }
    }
    pppbVar38 = local_178;
    local_180 = (byte ***)&PTR_FUN_710523d988;
    local_178 = (byte ***)0x0;
    param_3 = ppppppppplVar37;
joined_r0x007101b1981c:
    if (pppbVar38 != (byte ***)0x0) {
LAB_7101b1940c:
      ppbVar19 = pppbVar38[3];
      pppbVar38[2] = &PTR_FUN_710523d9a8;
      pppbVar38[3] = (byte **)0x0;
      if (ppbVar19 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar19);
      }
      FUN_710392eb40((ulong)pppbVar38);
      uVar26 = extraout_x1_30;
    }
  }
switchD_7101b176d8_caseD_2:
  cVar6 = *(char *)(param_1 + 0x11c);
joined_r0x007101b183a4:
  if (cVar6 != '\0') {
    FUN_7101b16520(param_1,uVar26,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101b19434;
  }
  (**(code **)(**(long **)(param_1 + 0x140) + 0x60))(*(long **)(param_1 + 0x140),1);
  pppplVar25 = (long ****)0x0;
  FUN_7103771d60(&local_e0,*(long *)(param_1 + 0x140),(long ****)0x0,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar40 = local_d8;
  FUN_710377ad90(&local_138,*local_d8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppbVar38 = local_130;
  ppbVar19 = *local_130;
  if (ppbVar19 != (byte **)0x0) {
    *(byte *)(ppbVar19 + 0xb) = *(byte *)(ppbVar19 + 0xb) | 1;
  }
  local_138 = (byte ***)&PTR_FUN_710523d9a8;
  local_130 = (byte ***)0x0;
  if (pppbVar38 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar38);
  }
  local_e0 = &PTR_FUN_710523d9c8;
  local_d8 = (long *)0x0;
  if (plVar40 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar40);
  }
  uVar15 = param_2[0xb];
  iVar5 = *(int *)(param_1 + 0x138);
  bVar12 = 0 < (int)uVar15;
  bVar13 = iVar5 == 0;
  uVar26 = 1;
  bVar14 = bVar12 && bVar13;
  FUN_7103771d60(&local_180,*(long *)(param_1 + 0x140),(long ****)0x1,param_4,param_5,param_6,
                 param_7,param_8);
  if (bVar12 && bVar13) {
    if (*local_178 == (byte **)0x0) {
      ppppbVar22 = (byte ****)&DAT_7104867c2e;
    }
    else {
      ppppbVar22 = (byte ****)(*local_178)[0x11];
    }
    FUN_7103776640(&local_e0,lVar35,ppppbVar22,uVar26,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_138,(long)&local_e0,(long ****)"set_txt_icon",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_138,"mnu_insert_popup_skip_guide",uVar26,param_4,param_5,param_6,
                   param_7,param_8);
    pppbVar38 = local_130;
    local_138 = (byte ***)&PTR_FUN_710523d9a8;
    local_130 = (byte ***)0x0;
    if (pppbVar38 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar38);
    }
    FUN_7103776910(&local_138,(long)&local_e0,(long ****)"set_txt_help",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar15;
    FUN_710377a280((long)&local_138,(byte *)"mnu_insert_popup_skip",1);
    pppbVar38 = local_130;
    local_138 = (byte ***)&PTR_FUN_710523d9a8;
    local_130 = (byte ***)0x0;
    if (pppbVar38 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar38);
    }
    plVar40 = local_d8;
    local_e0 = &PTR_FUN_710523d988;
    local_d8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      uVar17 = plVar40[3];
      plVar40[2] = (long)&PTR_FUN_710523d9a8;
      plVar40[3] = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40((ulong)plVar40);
    }
  }
  lVar36 = *(long *)(param_1 + 0x140);
  lVar42 = *(long *)(lVar36 + 0x1b8);
  if (lVar42 != 0) {
    lVar43 = lVar36 + 0x1b8;
    lVar33 = lVar43;
    lVar34 = lVar42;
    do {
      if (0 < *(int *)(lVar34 + 0x20)) {
        lVar33 = lVar34;
      }
      lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 1) * 8);
    } while (lVar34 != 0);
    if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,bVar14);
      (**(code **)(*plVar40 + 0x388))(plVar40,(int)uVar15 < 1 || iVar5 != 0,0);
      lVar36 = *(long *)(param_1 + 0x140);
      lVar42 = *(long *)(lVar36 + 0x1b8);
      lVar43 = lVar36 + 0x1b8;
    }
    lVar33 = lVar43;
    if (lVar42 != 0) {
      do {
        if (0 < *(int *)(lVar42 + 0x20)) {
          lVar33 = lVar42;
        }
        lVar42 = *(long *)(lVar42 + (ulong)(*(int *)(lVar42 + 0x20) < 1) * 8);
      } while (lVar42 != 0);
      if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x208))(plVar40,bVar14);
        (**(code **)(*plVar40 + 0x388))(plVar40,!bVar12 || !bVar13,0);
        lVar36 = *(long *)(param_1 + 0x140);
      }
    }
  }
  pppplVar25 = (long ****)0x1;
  FUN_7103771d60(&local_e0,lVar36,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  plVar40 = local_d8;
  FUN_710377ad90(&local_138,*local_d8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppbVar38 = local_130;
  ppbVar19 = *local_130;
  if (ppbVar19 != (byte **)0x0) {
    *(byte *)(ppbVar19 + 0xb) = *(byte *)(ppbVar19 + 0xb) & 0xfe | bVar14;
  }
  local_138 = (byte ***)&PTR_FUN_710523d9a8;
  local_130 = (byte ***)0x0;
  if (pppbVar38 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar38);
  }
  local_e0 = &PTR_FUN_710523d9c8;
  local_d8 = (long *)0x0;
  if (plVar40 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar40);
  }
  pppbVar38 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9c8;
  local_178 = (byte ***)0x0;
  if (pppbVar38 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar38);
  }
  iVar5 = *(int *)(param_1 + 0x138);
  bVar12 = iVar5 != 0;
  if ((char)param_2[4] == '\x03') {
    bVar14 = (char)param_2[1] != '\0';
  }
  else {
    bVar14 = false;
  }
  uVar26 = 2;
  FUN_7103771d60(&local_1d8,*(long *)(param_1 + 0x140),(long ****)0x2,param_4,param_5,param_6,
                 param_7,param_8);
  pppbVar38 = local_1d0[0];
  if (*local_1d0[0] == (byte **)0x0) {
    ppppbVar22 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar22 = (byte ****)(*local_1d0[0])[0x11];
  }
  FUN_7103776640(&local_88,lVar35,ppppbVar22,uVar26,param_4,param_5,param_6,param_7,param_8);
  if (iVar5 == 0) {
    if (!bVar14) goto LAB_7101b18990;
    uVar17 = 0xd9ffff0000000000;
    if ((char)param_2[4] == '\x03') {
      uVar17 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),
                              *(ulong *)(param_2 + 6));
    }
    *(ulong *)(param_1 + 0x130) = uVar17;
    FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_txt_icon",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_e0,"mnu_insert_popup_move_guide",uVar26,param_4,param_5,param_6,
                   param_7,param_8);
    plVar40 = local_d8;
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar40);
    }
    uVar26 = 2;
    FUN_7103771d60(&local_e0,*(long *)(param_1 + 0x140),(long ****)0x2,param_4,param_5,param_6,
                   param_7,param_8);
    plVar40 = local_d8;
    if (*local_d8 == 0) {
      ppppbVar22 = (byte ****)&DAT_7104867c2e;
    }
    else {
      ppppbVar22 = *(byte *****)(*local_d8 + 0x88);
    }
    FUN_7103776640(&local_180,lVar35,ppppbVar22,uVar26,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_138,(long)&local_180,(long ****)"set_txt_help",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    pppbVar11 = local_178;
    local_180 = (byte ***)&PTR_FUN_710523d988;
    local_178 = (byte ***)0x0;
    if (pppbVar11 != (byte ***)0x0) {
      ppbVar19 = pppbVar11[3];
      pppbVar11[2] = &PTR_FUN_710523d9a8;
      pppbVar11[3] = (byte **)0x0;
      if (ppbVar19 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar19);
      }
      FUN_710392eb40((ulong)pppbVar11);
    }
    FUN_710377a120((long)&local_138,"mnu_insert_popup_sound_try",uVar26,param_4,param_5,param_6,
                   param_7,param_8);
    pppbVar11 = local_130;
    local_138 = (byte ***)&PTR_FUN_710523d9a8;
    local_130 = (byte ***)0x0;
    if (pppbVar11 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar11);
    }
    local_e0 = &PTR_FUN_710523d9c8;
    local_d8 = (long *)0x0;
    if (plVar40 == (long *)0x0) goto LAB_7101b1899c;
    FUN_710392eb40((ulong)plVar40);
    cVar6 = *(char *)(param_1 + 0x14c);
  }
  else {
    FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_txt_icon",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_e0,"mnu_insert_popup_move_guide",uVar26,param_4,param_5,param_6,
                   param_7,param_8);
    plVar40 = local_d8;
    local_e0 = &PTR_FUN_710523d9a8;
    local_d8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar40);
    }
    FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_help",uVar26,param_4,param_5,
                   param_6,param_7,param_8);
    if (iVar5 < 0x4080000) {
      if ((iVar5 == 0x3010000) || (iVar5 == 0x3040000)) {
        pcVar23 = "mnu_insert_popup_move_spboard";
        goto LAB_7101b18814;
      }
LAB_7101b18c00:
      if (*(long **)(local_90 + 0x10) != (long *)0x0) {
        param_4 = (byte ****)0x0;
        local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_90 + 0x10),(ushort *)&local_e0,0,0);
      }
    }
    else {
      if (iVar5 == 0x4080000) {
        pcVar23 = "mnu_insert_popup_move_challengers";
      }
      else {
        if (iVar5 != 0x5030000) goto LAB_7101b18c00;
        pcVar23 = "mnu_insert_popup_move_soundtest";
      }
LAB_7101b18814:
      FUN_710377a120((long)&local_98,pcVar23,uVar26,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7103771d60(&local_180,*(long *)(param_1 + 0x140),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    lVar36 = *(long *)(param_1 + 0x140);
    lVar42 = *(long *)(lVar36 + 0x1b8);
    if (lVar42 != 0) {
      lVar43 = lVar36 + 0x1b8;
      lVar33 = lVar43;
      lVar34 = lVar42;
      do {
        if (0 < *(int *)(lVar34 + 0x20)) {
          lVar33 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 1) * 8);
      } while (lVar34 != 0);
      if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x1f8))(plVar40,0);
        (**(code **)(*plVar40 + 0x388))(plVar40,1,0);
        lVar36 = *(long *)(param_1 + 0x140);
        lVar42 = *(long *)(lVar36 + 0x1b8);
        lVar43 = lVar36 + 0x1b8;
      }
      lVar33 = lVar43;
      if (lVar42 != 0) {
        do {
          if (0 < *(int *)(lVar42 + 0x20)) {
            lVar33 = lVar42;
          }
          lVar42 = *(long *)(lVar42 + (ulong)(*(int *)(lVar42 + 0x20) < 1) * 8);
        } while (lVar42 != 0);
        if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 2)) &&
           (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
          (**(code **)(*plVar40 + 0x208))(plVar40,0);
          (**(code **)(*plVar40 + 0x388))(plVar40,1,0);
          lVar36 = *(long *)(param_1 + 0x140);
        }
      }
    }
    pppplVar25 = (long ****)0x1;
    FUN_7103771d60(&local_e0,lVar36,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
    plVar40 = local_d8;
    FUN_710377ad90(&local_138,*local_d8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
    pppbVar11 = local_130;
    ppbVar19 = *local_130;
    if (ppbVar19 != (byte **)0x0) {
      *(byte *)(ppbVar19 + 0xb) = *(byte *)(ppbVar19 + 0xb) & 0xfe;
    }
    local_138 = (byte ***)&PTR_FUN_710523d9a8;
    local_130 = (byte ***)0x0;
    if (pppbVar11 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar11);
    }
    local_e0 = &PTR_FUN_710523d9c8;
    local_d8 = (long *)0x0;
    if (plVar40 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar40);
    }
    pppbVar11 = local_178;
    local_180 = (byte ***)&PTR_FUN_710523d9c8;
    local_178 = (byte ***)0x0;
    if (pppbVar11 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar11);
    }
    uVar17 = local_90;
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    if (!bVar14) {
LAB_7101b18990:
      *(undefined8 *)(param_1 + 0x130) = 0xd9ffff0000000000;
    }
LAB_7101b1899c:
    cVar6 = *(char *)(param_1 + 0x14c);
  }
  if (cVar6 == '\0') {
    *(undefined8 *)(param_1 + 0x120) = **(undefined8 **)(DAT_710532f8d0 + 8);
  }
  if ((iVar5 == 0) && (bVar14)) {
    uVar17 = *(ulong *)(param_1 + 0x130);
    uVar28 = *(ulong *)(param_1 + 0x120);
    if (((uVar17 & 0xff00000000000000) == 0xd900000000000000) &&
       ((((uVar17 & 0xffffffffff) != 0 && ((uVar28 & 0xff00000000000000) == 0xd900000000000000)) &&
        ((uVar28 & 0xffffffffff) != 0)))) {
      bVar12 = ((uVar28 ^ uVar17) & 0xffffffffff) == 0;
    }
    else {
      bVar12 = ((uVar28 & 0xffffffffff) != 0 && (uVar28 & 0xff00000000000000) == 0xd900000000000000)
               == ((uVar17 & 0xff00000000000000) == 0xd900000000000000 &&
                  (uVar17 & 0xffffffffff) != 0);
    }
    bVar12 = (bool)(bVar12 ^ 1);
  }
  lVar36 = *(long *)(param_1 + 0x140);
  lVar42 = *(long *)(lVar36 + 0x1b8);
  if (lVar42 != 0) {
    lVar43 = lVar36 + 0x1b8;
    lVar33 = lVar43;
    lVar34 = lVar42;
    do {
      if (1 < *(int *)(lVar34 + 0x20)) {
        lVar33 = lVar34;
      }
      lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 2) * 8);
    } while (lVar34 != 0);
    if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 3)) &&
       (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
      (**(code **)(*plVar40 + 0x1f8))(plVar40,bVar12);
      (**(code **)(*plVar40 + 0x388))(plVar40,bVar12 ^ 1,0);
      lVar36 = *(long *)(param_1 + 0x140);
      lVar42 = *(long *)(lVar36 + 0x1b8);
      lVar43 = lVar36 + 0x1b8;
    }
    lVar33 = lVar43;
    if (lVar42 != 0) {
      do {
        if (1 < *(int *)(lVar42 + 0x20)) {
          lVar33 = lVar42;
        }
        lVar42 = *(long *)(lVar42 + (ulong)(*(int *)(lVar42 + 0x20) < 2) * 8);
      } while (lVar42 != 0);
      if (((lVar33 != lVar43) && (*(int *)(lVar33 + 0x20) < 3)) &&
         (plVar40 = *(long **)(lVar33 + 0x28), plVar40 != (long *)0x0)) {
        (**(code **)(*plVar40 + 0x208))(plVar40,bVar12);
        (**(code **)(*plVar40 + 0x388))(plVar40,bVar12 ^ 1,0);
        lVar36 = *(long *)(param_1 + 0x140);
      }
    }
  }
  pppplVar25 = (long ****)0x2;
  FUN_7103771d60(&local_e0,lVar36,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
  plVar40 = local_d8;
  FUN_710377ad90(&local_138,*local_d8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppbVar11 = local_130;
  ppbVar19 = *local_130;
  if (ppbVar19 != (byte **)0x0) {
    *(byte *)(ppbVar19 + 0xb) = *(byte *)(ppbVar19 + 0xb) & 0xfe | bVar12;
  }
  local_138 = (byte ***)&PTR_FUN_710523d9a8;
  local_130 = (byte ***)0x0;
  if (pppbVar11 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar11);
  }
  FUN_7103776910(&local_138,lVar35,(long ****)"set_link_base",pppplVar25,param_4,param_5,param_6,
                 param_7,param_8);
  pppbVar11 = local_130;
  ppbVar19 = *local_130;
  if (ppbVar19 != (byte **)0x0) {
    *(byte *)(ppbVar19 + 0xb) = *(byte *)(ppbVar19 + 0xb) & 0xfe | bVar12;
  }
  local_138 = (byte ***)&PTR_FUN_710523d9a8;
  local_130 = (byte ***)0x0;
  if (pppbVar11 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar11);
  }
  local_e0 = &PTR_FUN_710523d9c8;
  local_d8 = (long *)0x0;
  if (plVar40 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar40);
  }
  pppbVar11 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = (byte ***)0x0;
  if (pppbVar11 != (byte ***)0x0) {
    ppbVar19 = pppbVar11[3];
    pppbVar11[2] = &PTR_FUN_710523d9a8;
    pppbVar11[3] = (byte **)0x0;
    if (ppbVar19 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar19);
    }
    FUN_710392eb40((ulong)pppbVar11);
  }
  local_1d8 = &PTR_FUN_710523d9c8;
  local_1d0[0] = (byte ***)0x0;
  if (pppbVar38 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar38);
  }
LAB_7101b19434:
  uVar17 = local_248;
  local_250 = &PTR_FUN_710523d9a8;
  local_248 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_238;
  local_240 = &PTR_FUN_710523d9a8;
  local_238 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_228;
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  return;
}

