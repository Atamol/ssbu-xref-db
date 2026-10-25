// addr:      7101e0b1b0
// offset:    0x1e0b1b0
// name:      FUN_7101e0b1b0
// mangled:   
// signature: undefined __cdecl FUN_7101e0b1b0(long * param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e0b1b0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  byte ***pppbVar10;
  byte ***pppbVar11;
  void *pvVar12;
  long **pplVar13;
  ulong uVar14;
  long ***ppplVar15;
  byte **ppbVar16;
  ulong uVar17;
  byte ***pppbVar18;
  long *plVar19;
  undefined8 *puVar20;
  char *pcVar21;
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
  undefined8 extraout_x1_25;
  long ****pppplVar22;
  long ****pppplVar23;
  byte ****ppppbVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  long lVar29;
  code *pcVar30;
  long lVar31;
  long ***ppplVar32;
  long lVar33;
  undefined4 *puVar34;
  ulong uVar35;
  byte *pbVar36;
  byte **ppbVar37;
  uint uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long lVar41;
  ulong uVar42;
  byte ***pppbVar43;
  void *pvVar44;
  long *plVar45;
  undefined8 *puVar46;
  long *plVar47;
  undefined1 auVar48 [16];
  long ***local_260;
  long *local_258;
  long ***local_250;
  undefined8 local_248;
  long ***local_240;
  byte ***local_208;
  byte ***local_200;
  byte ***local_1f8;
  byte ***local_1f0;
  undefined8 local_1e8;
  byte ***local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1d0;
  long ***local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined1 uStack_1a6;
  undefined1 uStack_1a5;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  undefined1 uStack_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  undefined2 uStack_19c;
  undefined2 local_19a;
  undefined1 local_198;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  undefined4 local_a0;
  long ***local_88;
  undefined8 *local_80;
  undefined4 local_74 [5];
  
  *(bool *)((long)param_1 + 0x59d) = param_2 != 0;
  *(bool *)((long)param_1 + 0x59f) = param_2 == 2;
  *(byte *)((long)param_1 + 0x59e) =
       (byte)(*(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x138) + 0xdc) >> 0x14) & 1;
  plVar19 = param_1 + 0x9a;
  FUN_71032cbf30(plVar19,*(long *)param_1[1],(ulong *)&DAT_71045459c8,(byte ****)0x2,param_5,param_6
                 ,param_7,param_8);
  FUN_71032cbf30(param_1 + 0x9b,*(long *)param_1[1],(ulong *)&DAT_71045459d0,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar29 = *(long *)param_1[0x9a];
  plVar1 = param_1 + 0xa2;
  if (plVar1 != (long *)(lVar29 + 8)) {
    *(undefined8 *)param_1[0xa3] = **(undefined8 **)(lVar29 + 0x10);
    *(undefined8 *)(param_1[0xa3] + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 8);
    lVar33 = *(long *)(lVar29 + 0x10);
    lVar29 = param_1[0xa3];
    if (lVar29 != lVar33) {
      **(undefined8 **)(lVar29 + 0x18) = **(undefined8 **)(lVar33 + 0x18);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar33 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x18);
    }
  }
  FUN_71032cbf30(param_1 + 0x9c,*(long *)param_1[1],(ulong *)&DAT_71045459d8,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar29 = *(long *)param_1[0x9c];
  if (param_1 + 0x9d != (long *)(lVar29 + 8)) {
    *(undefined8 *)param_1[0x9e] = **(undefined8 **)(lVar29 + 0x10);
    *(undefined8 *)(param_1[0x9e] + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x10) + 8);
    lVar33 = *(long *)(lVar29 + 0x10);
    lVar29 = param_1[0x9e];
    if (lVar29 != lVar33) {
      **(undefined8 **)(lVar29 + 0x18) = **(undefined8 **)(lVar33 + 0x18);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar33 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar33 + 0x18) + 0x18);
    }
  }
  lVar29 = **(long **)*plVar19;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x1c) = 0x80;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x20) = 0x500;
  lVar29 = *(long *)(**(long **)*plVar19 + 0x608);
  if (*(long *)(**(long **)*plVar19 + 0x610) == lVar29) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar29 + 8) + 0x24) = 0x20;
  if (*(char *)((long)param_1 + 0x59e) == '\0') {
    pcVar21 = "hide_btn_sync";
  }
  else {
    pcVar21 = "show_btn_sync";
  }
  FUN_7103778300(0x3f800000,param_1[0xa3],(long)pcVar21);
  local_1c0 = (undefined **)0x0;
  local_1b0 = CONCAT17(local_1b0._7_1_,0x1000100000001);
  local_1b8 = 0x101;
  local_1a8 = 0;
  uStack_1a6 = 0;
  uStack_1a5 = 0;
  uStack_1a4 = 0;
  uStack_1a3 = 0;
  uStack_1a2 = 0xf0;
  uStack_1a1 = 0x41;
  uStack_1a0 = 0;
  uStack_19f = 0;
  uStack_19e = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  FUN_710337df20((long)&local_1c0);
  plVar47 = param_1 + 0xa4;
  ppppbVar24 = (byte ****)&local_1c0;
  FUN_7103770b30(plVar47,plVar1,(long ****)"selector_0",ppppbVar24,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar47,1,"scr_sort",ppppbVar24,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar47,2,"scr_ctrl",ppppbVar24,param_5,param_6,param_7,param_8);
  if (*(char *)((long)param_1 + 0x59e) != '\0') {
    FUN_71037717d0(plVar47,3,"set_parts_btn_sync",ppppbVar24,param_5,param_6,param_7,param_8);
  }
  ppppbVar24 = (byte ****)0x0;
  FUN_7103771930(param_1[0xa4],1,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  local_250 = (long ***)0x7fc420ce8;
  pppplVar22 = &local_250;
  FUN_7103772070(param_1[0xa4],1,pppplVar22,ppppbVar24,param_5,param_6,param_7,param_8);
  puVar34 = (undefined4 *)param_1[0xae];
  plVar47 = param_1 + 0xad;
  uVar26 = extraout_x1;
  if (puVar34 < (undefined4 *)param_1[0xaf]) {
    *puVar34 = 2;
    puVar34 = (undefined4 *)(param_1[0xae] + 4);
    param_1[0xae] = (long)puVar34;
  }
  else {
    pvVar44 = (void *)*plVar47;
    pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
    uVar42 = ((long)pppplVar23 >> 2) + 1;
    if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfcc;
    lVar29 = param_1[0xaf] - (long)pvVar44;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar17 = lVar29 >> 1;
      if (uVar42 <= uVar17) {
        uVar42 = uVar17;
      }
      if (uVar42 != 0) {
        if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfb8;
        goto LAB_7101e0b568;
      }
LAB_7101e0b5c8:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar42 = 0x3fffffffffffffff;
LAB_7101e0b568:
      ppplVar32 = (long ***)(uVar42 * 4);
      if (ppplVar32 == (long ***)0x0) {
        ppplVar32 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8);
      uVar26 = extraout_x1_00;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
          pppplVar22 = &local_250;
          local_250 = ppplVar32;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
          uVar26 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                               param_7,param_8), uVar26 = extraout_x1_01,
             pvVar12 != (void *)0x0)) goto LAB_7101e0b5cc;
        }
        goto LAB_7101e0b5c8;
      }
    }
LAB_7101e0b5cc:
    puVar4 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
    puVar34 = puVar4 + 1;
    *puVar4 = 2;
    if (0 < (long)pppplVar23) {
      memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
      uVar26 = extraout_x1_02;
      pppplVar22 = pppplVar23;
    }
    param_1[0xad] = (long)pvVar12;
    param_1[0xae] = (long)puVar34;
    param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar34 = (undefined4 *)param_1[0xae];
      uVar26 = extraout_x1_03;
    }
  }
  if (puVar34 < (undefined4 *)param_1[0xaf]) {
    *puVar34 = 1;
    param_1[0xae] = param_1[0xae] + 4;
  }
  else {
    pvVar44 = (void *)*plVar47;
    pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
    uVar42 = ((long)pppplVar23 >> 2) + 1;
    if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfcc;
    lVar29 = param_1[0xaf] - (long)pvVar44;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar17 = lVar29 >> 1;
      if (uVar42 <= uVar17) {
        uVar42 = uVar17;
      }
      if (uVar42 != 0) {
        if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfb8;
        goto LAB_7101e0b680;
      }
LAB_7101e0b6e0:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar42 = 0x3fffffffffffffff;
LAB_7101e0b680:
      ppplVar32 = (long ***)(uVar42 * 4);
      if (ppplVar32 == (long ***)0x0) {
        ppplVar32 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8);
      uVar26 = extraout_x1_04;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
          pppplVar22 = &local_250;
          local_250 = ppplVar32;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
          uVar26 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                               param_7,param_8), uVar26 = extraout_x1_05,
             pvVar12 != (void *)0x0)) goto LAB_7101e0b6e4;
        }
        goto LAB_7101e0b6e0;
      }
    }
LAB_7101e0b6e4:
    puVar34 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
    *puVar34 = 1;
    if (0 < (long)pppplVar23) {
      memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
      uVar26 = extraout_x1_06;
      pppplVar22 = pppplVar23;
    }
    param_1[0xad] = (long)pvVar12;
    param_1[0xae] = (long)(puVar34 + 1);
    param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      uVar26 = extraout_x1_07;
    }
  }
  if ((DAT_710523d00c < 0xe) && ((0x3801U >> (ulong)(DAT_710523d00c & 0x1f) & 1) != 0)) {
    puVar34 = (undefined4 *)param_1[0xae];
    if (puVar34 < (undefined4 *)param_1[0xaf]) {
      *puVar34 = 0xc;
      param_1[0xae] = param_1[0xae] + 4;
    }
    else {
      pvVar44 = (void *)*plVar47;
      pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
      uVar42 = ((long)pppplVar23 >> 2) + 1;
      if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfcc;
      lVar29 = param_1[0xaf] - (long)pvVar44;
      if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
        uVar17 = lVar29 >> 1;
        if (uVar42 <= uVar17) {
          uVar42 = uVar17;
        }
        if (uVar42 != 0) {
          if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfb8;
          goto LAB_7101e0b7b4;
        }
LAB_7101e0b814:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar42 = 0x3fffffffffffffff;
LAB_7101e0b7b4:
        ppplVar32 = (long ***)(uVar42 * 4);
        if (ppplVar32 == (long ***)0x0) {
          ppplVar32 = (long ***)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                         param_7,param_8);
        uVar26 = extraout_x1_08;
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
            pppplVar22 = &local_250;
            local_250 = ppplVar32;
            auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
            uVar26 = auVar48._8_8_;
            if (((auVar48._0_8_ & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,
                                                 param_6,param_7,param_8), uVar26 = extraout_x1_09,
               pvVar12 != (void *)0x0)) goto LAB_7101e0b818;
          }
          goto LAB_7101e0b814;
        }
      }
LAB_7101e0b818:
      puVar34 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
      *puVar34 = 0xc;
      if (0 < (long)pppplVar23) {
        memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
        uVar26 = extraout_x1_10;
        pppplVar22 = pppplVar23;
      }
      param_1[0xad] = (long)pvVar12;
      param_1[0xae] = (long)(puVar34 + 1);
      param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
      if (pvVar44 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar44);
        uVar26 = extraout_x1_11;
      }
    }
  }
  puVar34 = (undefined4 *)param_1[0xae];
  if (puVar34 < (undefined4 *)param_1[0xaf]) {
    *puVar34 = 0xd;
    puVar34 = (undefined4 *)(param_1[0xae] + 4);
    param_1[0xae] = (long)puVar34;
  }
  else {
    pvVar44 = (void *)*plVar47;
    pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
    uVar42 = ((long)pppplVar23 >> 2) + 1;
    if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfcc;
    lVar29 = param_1[0xaf] - (long)pvVar44;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar17 = lVar29 >> 1;
      if (uVar42 <= uVar17) {
        uVar42 = uVar17;
      }
      if (uVar42 != 0) {
        if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfb8;
        goto LAB_7101e0b8cc;
      }
LAB_7101e0b92c:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar42 = 0x3fffffffffffffff;
LAB_7101e0b8cc:
      ppplVar32 = (long ***)(uVar42 * 4);
      if (ppplVar32 == (long ***)0x0) {
        ppplVar32 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8);
      uVar26 = extraout_x1_12;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
          pppplVar22 = &local_250;
          local_250 = ppplVar32;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
          uVar26 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                               param_7,param_8), uVar26 = extraout_x1_13,
             pvVar12 != (void *)0x0)) goto LAB_7101e0b930;
        }
        goto LAB_7101e0b92c;
      }
    }
LAB_7101e0b930:
    puVar4 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
    puVar34 = puVar4 + 1;
    *puVar4 = 0xd;
    if (0 < (long)pppplVar23) {
      memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
      uVar26 = extraout_x1_14;
      pppplVar22 = pppplVar23;
    }
    param_1[0xad] = (long)pvVar12;
    param_1[0xae] = (long)puVar34;
    param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar34 = (undefined4 *)param_1[0xae];
      uVar26 = extraout_x1_15;
    }
  }
  if (puVar34 < (undefined4 *)param_1[0xaf]) {
    *puVar34 = 3;
    puVar34 = (undefined4 *)(param_1[0xae] + 4);
    param_1[0xae] = (long)puVar34;
  }
  else {
    pvVar44 = (void *)*plVar47;
    pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
    uVar42 = ((long)pppplVar23 >> 2) + 1;
    if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfcc;
    lVar29 = param_1[0xaf] - (long)pvVar44;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar17 = lVar29 >> 1;
      if (uVar42 <= uVar17) {
        uVar42 = uVar17;
      }
      if (uVar42 != 0) {
        if (uVar42 >> 0x3e != 0) goto LAB_7101e0cfb8;
        goto LAB_7101e0b9e4;
      }
LAB_7101e0ba44:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar42 = 0x3fffffffffffffff;
LAB_7101e0b9e4:
      ppplVar32 = (long ***)(uVar42 * 4);
      if (ppplVar32 == (long ***)0x0) {
        ppplVar32 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8);
      uVar26 = extraout_x1_16;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
          pppplVar22 = &local_250;
          local_250 = ppplVar32;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
          uVar26 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                               param_7,param_8), uVar26 = extraout_x1_17,
             pvVar12 != (void *)0x0)) goto LAB_7101e0ba48;
        }
        goto LAB_7101e0ba44;
      }
    }
LAB_7101e0ba48:
    puVar4 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
    puVar34 = puVar4 + 1;
    *puVar4 = 3;
    if (0 < (long)pppplVar23) {
      memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
      uVar26 = extraout_x1_18;
      pppplVar22 = pppplVar23;
    }
    param_1[0xad] = (long)pvVar12;
    param_1[0xae] = (long)puVar34;
    param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      puVar34 = (undefined4 *)param_1[0xae];
      uVar26 = extraout_x1_19;
    }
  }
  if (puVar34 < (undefined4 *)param_1[0xaf]) {
    *puVar34 = 0x14;
    param_1[0xae] = param_1[0xae] + 4;
  }
  else {
    pvVar44 = (void *)*plVar47;
    pppplVar23 = (long ****)((long)puVar34 - (long)pvVar44);
    uVar42 = ((long)pppplVar23 >> 2) + 1;
    if (uVar42 >> 0x3e != 0) {
LAB_7101e0cfcc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar29 = param_1[0xaf] - (long)pvVar44;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar17 = lVar29 >> 1;
      if (uVar42 <= uVar17) {
        uVar42 = uVar17;
      }
      if (uVar42 != 0) {
        if (uVar42 >> 0x3e != 0) {
LAB_7101e0cfb8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7101e0bafc;
      }
LAB_7101e0bb5c:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar42 = 0x3fffffffffffffff;
LAB_7101e0bafc:
      ppplVar32 = (long ***)(uVar42 * 4);
      if (ppplVar32 == (long ***)0x0) {
        ppplVar32 = (long ***)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8);
      uVar26 = extraout_x1_20;
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1f0 = (byte ***)((ulong)local_1f0 & 0xffffffff00000000);
          pppplVar22 = &local_250;
          local_250 = ppplVar32;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1f0);
          uVar26 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                               param_7,param_8), uVar26 = extraout_x1_21,
             pvVar12 != (void *)0x0)) goto LAB_7101e0bb60;
        }
        goto LAB_7101e0bb5c;
      }
    }
LAB_7101e0bb60:
    puVar34 = (undefined4 *)((long)pvVar12 + ((long)pppplVar23 >> 2) * 4);
    *puVar34 = 0x14;
    if (0 < (long)pppplVar23) {
      memcpy(pvVar12,pvVar44,(size_t)pppplVar23);
      uVar26 = extraout_x1_22;
      pppplVar22 = pppplVar23;
    }
    param_1[0xad] = (long)pvVar12;
    param_1[0xae] = (long)(puVar34 + 1);
    param_1[0xaf] = (long)((long)pvVar12 + uVar42 * 4);
    if (pvVar44 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar44);
      uVar26 = extraout_x1_23;
    }
  }
  local_1e0 = (byte ***)0x0;
  uStack_1d8 = 0;
  FUN_7103776290(&local_1d0,uVar26,pppplVar22,ppppbVar24,param_5,param_6,param_7,param_8);
  local_1e8 = (byte ***)((ulong)local_1e8._4_4_ << 0x20);
  uStack_1d8 = uRam0000007107459008;
  local_1e0 = _ConstantZero;
  local_1c8[1] = (long **)0x0;
  uVar8 = 0;
  if (*(char *)((long)param_1 + 0x59e) != '\0') {
    uVar8 = 0xc;
  }
  local_1f0 = (byte ***)(ulong)uVar8;
  FUN_7103776640(&local_250,(long)plVar1,(byte ****)"scr_sort",pppplVar22,ppppbVar24,param_5,param_6
                 ,param_7,param_8);
  ppplVar32 = local_1c8;
  local_1c8 = local_248;
  local_248 = (long ***)0x0;
  if (ppplVar32 != (long ***)0x0) {
    pplVar13 = ppplVar32[3];
    ppplVar32[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar32[3] = (long **)0x0;
    if (pplVar13 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar13);
    }
    FUN_710392eb40((ulong)ppplVar32);
  }
  local_250 = (long ***)&PTR_FUN_710523d988;
  local_248 = (long ***)0x0;
  local_1e0 = _ConstantZero;
  uStack_1d8 = uRam0000007107459008;
  if (*local_1c8[3] != (long *)0x0) {
    local_1e0 = (byte ***)(*local_1c8[3])[6];
    uStack_1d8 = 0;
  }
  local_200 = (byte ***)0x0;
  local_1f8 = (byte ***)0x0;
  local_208 = (byte ***)0x0;
  lVar29 = param_1[0xad];
  uVar8 = 0x811c9dc5;
  if (param_1[0xae] != lVar29) {
    uVar42 = 0;
    do {
      pppbVar18 = local_1f8;
      pppbVar43 = local_200;
      uVar17 = 0x38e38e38e38e38e;
      FUN_71025c6970((uint *)&local_250,*(undefined4 *)(lVar29 + uVar42 * 4));
      pppbVar10 = local_208;
      if (pppbVar43 == pppbVar18) {
        lVar29 = (long)pppbVar43 - (long)local_208 >> 3;
        uVar14 = lVar29 * -0x71c71c71c71c71c7 + 1;
        if (0x38e38e38e38e38e < uVar14) goto LAB_7101e0cfc4;
        lVar33 = (long)pppbVar18 - (long)local_208 >> 3;
        if ((ulong)(lVar33 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
          uVar35 = lVar33 * 0x1c71c71c71c71c72;
          uVar17 = uVar14;
          if (uVar14 <= uVar35) {
            uVar17 = uVar35;
          }
          if (uVar17 != 0) goto LAB_7101e0bd70;
          lVar33 = 0;
        }
        else {
LAB_7101e0bd70:
          ppplVar32 = (long ***)(uVar17 * 0x48);
          if (ppplVar32 == (long ***)0x0) {
            ppplVar32 = (long ***)0x1;
          }
          lVar33 = FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                  param_8);
          if (lVar33 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
              pppplVar22 = &local_88;
              local_88 = ppplVar32;
              uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
              if (((uVar14 & 1) != 0) &&
                 (lVar33 = FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,
                                          param_7,param_8), lVar33 != 0)) goto LAB_7101e0bde0;
            }
            lVar33 = 0;
          }
        }
LAB_7101e0bde0:
        pppbVar18 = (byte ***)(lVar33 + lVar29 * 8);
        local_1f8 = (byte ***)(lVar33 + uVar17 * 0x48);
        *(uint *)pppbVar18 = 0;
        for (uVar17 = 0; *(char *)((long)&local_248 + uVar17) != '\0'; uVar17 = uVar17 + 2) {
          *(char *)((long)pppbVar18 + uVar17 + 8) = *(char *)((long)&local_248 + uVar17);
          if (0x3e < (int)uVar17 + 1U) {
            uVar17 = (ulong)((int)uVar17 + 1);
            break;
          }
          cVar6 = *(char *)((long)&local_248 + uVar17 + 1);
          if (cVar6 == '\0') {
            uVar17 = uVar17 + 1;
            break;
          }
          *(char *)((long)pppbVar18 + uVar17 + 9) = cVar6;
        }
        lVar31 = lVar33 + lVar29 * 8;
        *(undefined1 *)(lVar31 + 8 + (uVar17 & 0xffffffff)) = 0;
        *(int *)(lVar31 + 4) = (int)uVar17;
        uVar28 = (uint)*(byte *)(lVar31 + 8);
        uVar38 = uVar8;
        if (*(byte *)(lVar31 + 8) != 0) {
          pbVar36 = (byte *)(lVar33 + lVar29 * 8 + 9);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar28;
            uVar28 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar28 != 0);
        }
        local_200 = pppbVar18 + 9;
        *(uint *)pppbVar18 = uVar38;
        pppbVar11 = pppbVar10;
        while (pppbVar43 != pppbVar10) {
          *(uint *)(pppbVar18 + -9) = 0;
          uVar17 = 0;
          do {
            cVar6 = *(char *)((long)pppbVar43 + (uVar17 - 0x40));
            uVar14 = uVar17;
            if (cVar6 == '\0') break;
            *(char *)((long)pppbVar18 + (uVar17 - 0x40)) = cVar6;
            cVar6 = *(char *)((long)pppbVar43 + (uVar17 - 0x3f));
            if (cVar6 == '\0') {
              uVar14 = uVar17 + 1;
              break;
            }
            *(char *)((long)pppbVar18 + (uVar17 - 0x3f)) = cVar6;
            cVar6 = *(char *)((long)pppbVar43 + (uVar17 - 0x3e));
            if (cVar6 == '\0') {
              uVar14 = uVar17 + 2;
              break;
            }
            uVar14 = uVar17 + 3;
            *(char *)((long)pppbVar18 + (uVar17 - 0x3e)) = cVar6;
            uVar17 = uVar14;
          } while ((uint)uVar14 < 0x3f);
          *(undefined1 *)((long)pppbVar18 + ((uVar14 & 0xffffffff) - 0x40)) = 0;
          uVar28 = (uint)*(byte *)(pppbVar18 + -8);
          *(uint *)((long)pppbVar18 + -0x44) = (uint)uVar14;
          uVar38 = uVar8;
          if (*(byte *)(pppbVar18 + -8) != 0) {
            lVar29 = -0x3f;
            do {
              uVar38 = uVar38 * 0x89 ^ uVar28;
              uVar28 = (uint)*(byte *)((long)pppbVar18 + lVar29);
              lVar29 = lVar29 + 1;
            } while (uVar28 != 0);
          }
          pppbVar18 = pppbVar18 + -9;
          *(uint *)pppbVar18 = uVar38;
          pppbVar11 = local_208;
          pppbVar43 = pppbVar43 + -9;
        }
        local_208 = pppbVar18;
        if (pppbVar11 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar11);
        }
      }
      else {
        *(uint *)pppbVar43 = 0;
        uVar17 = 0;
        do {
          uVar14 = uVar17;
          if (*(char *)((long)&local_248 + uVar17) == '\0') break;
          *(char *)((long)pppbVar43 + uVar17 + 8) = *(char *)((long)&local_248 + uVar17);
          cVar6 = *(char *)((long)&local_248 + uVar17 + 1);
          if (cVar6 == '\0') {
            uVar14 = uVar17 + 1;
            break;
          }
          *(char *)((long)pppbVar43 + uVar17 + 9) = cVar6;
          cVar6 = *(char *)((long)&local_248 + uVar17 + 2);
          if (cVar6 == '\0') {
            uVar14 = uVar17 + 2;
            break;
          }
          uVar14 = uVar17 + 3;
          *(char *)((long)pppbVar43 + uVar17 + 10) = cVar6;
          uVar17 = uVar14;
        } while ((uint)uVar14 < 0x3f);
        *(undefined1 *)((long)pppbVar43 + (uVar14 & 0xffffffff) + 8) = 0;
        *(uint *)((long)pppbVar43 + 4) = (uint)uVar14;
        uVar28 = (uint)*(byte *)(pppbVar43 + 1);
        uVar38 = uVar8;
        if (*(byte *)(pppbVar43 + 1) != 0) {
          pbVar36 = (byte *)((long)pppbVar43 + 9);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar28;
            uVar28 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar28 != 0);
        }
        *(uint *)pppbVar43 = uVar38;
        local_200 = local_200 + 9;
      }
      lVar29 = param_1[0xad];
      uVar42 = (ulong)((int)uVar42 + 1);
    } while (uVar42 < (ulong)(param_1[0xae] - lVar29 >> 2));
  }
  FUN_7103776640(&local_88,(long)plVar1,(byte ****)"blinder",pppplVar22,ppppbVar24,param_5,param_6,
                 param_7,param_8);
  pppbVar10 = local_200;
  pppbVar43 = local_208;
  local_248 = (long ***)0x0;
  local_240 = (long ***)0x0;
  local_250 = (long ***)0x0;
  ppplVar32 = (long ***)((long)local_200 - (long)local_208);
  if (ppplVar32 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar32 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppplVar15 = (long ***)
                FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar15 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        pppplVar22 = &local_260;
        local_260 = ppplVar32;
        uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar42 & 1) != 0) &&
           (ppplVar15 = (long ***)
                        FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,param_5,param_6,param_7,
                                       param_8), ppplVar15 != (long ***)0x0)) goto LAB_7101e0c068;
      }
      ppplVar15 = (long ***)0x0;
    }
LAB_7101e0c068:
    local_240 = ppplVar15 + ((long)ppplVar32 >> 3);
    local_248 = ppplVar15;
    for (; local_250 = ppplVar15, pppbVar43 != pppbVar10; pppbVar43 = pppbVar43 + 9) {
      *(uint *)local_248 = 0;
      uVar42 = 0;
      do {
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 8);
        uVar17 = uVar42;
        if (cVar6 == '\0') break;
        *(char *)((long)local_248 + uVar42 + 8) = cVar6;
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 9);
        if (cVar6 == '\0') {
          uVar17 = uVar42 + 1;
          break;
        }
        *(char *)((long)local_248 + uVar42 + 9) = cVar6;
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 10);
        if (cVar6 == '\0') {
          uVar17 = uVar42 + 2;
          break;
        }
        uVar17 = uVar42 + 3;
        *(char *)((long)local_248 + uVar42 + 10) = cVar6;
        uVar42 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)local_248 + (uVar17 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_248 + 4) = (uint)uVar17;
      uVar28 = (uint)*(byte *)(local_248 + 1);
      uVar38 = uVar8;
      if (*(byte *)(local_248 + 1) != 0) {
        pbVar36 = (byte *)((long)local_248 + 9);
        do {
          uVar38 = uVar38 * 0x89 ^ uVar28;
          uVar28 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar28 != 0);
      }
      *(uint *)local_248 = uVar38;
      local_248 = local_248 + 9;
    }
  }
  pppplVar22 = &local_250;
  ppppbVar24 = &local_1f0;
  pppplVar23 = &local_88;
  FUN_71032ccb70((long)(param_1 + 0xa6),param_1 + 0x9b,pppplVar22,ppppbVar24,pppplVar23,param_6,
                 param_7,param_8);
  if (local_250 != (long ***)0x0) {
    local_248 = local_250;
    FUN_710392eb40((ulong)local_250);
  }
  FUN_7103776910(&local_260,(long)plVar1,(long ****)"btn_cursor",pppplVar22,ppppbVar24,pppplVar23,
                 param_6,param_7,param_8);
  plVar47 = local_258;
  lVar29 = *local_258;
  if (lVar29 != 0) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  local_260 = (long ***)&PTR_FUN_710523d9a8;
  local_258 = (long *)0x0;
  if (plVar47 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar47);
  }
  puVar20 = local_80;
  local_88 = (long ***)&PTR_FUN_710523d988;
  local_80 = (undefined8 *)0x0;
  if (puVar20 != (undefined8 *)0x0) {
    uVar42 = puVar20[3];
    puVar20[2] = &PTR_FUN_710523d9a8;
    puVar20[3] = 0;
    if (uVar42 != 0) {
      FUN_710392eb40(uVar42);
    }
    FUN_710392eb40((ulong)puVar20);
  }
  if (local_208 != (byte ***)0x0) {
    local_200 = local_208;
    FUN_710392eb40((ulong)local_208);
  }
  ppplVar32 = local_1c8;
  local_1d0 = &PTR_FUN_710523d988;
  local_1c8 = (long ***)0x0;
  if (ppplVar32 != (long ***)0x0) {
    pplVar13 = ppplVar32[3];
    ppplVar32[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar32[3] = (long **)0x0;
    if (pplVar13 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar13);
    }
    FUN_710392eb40((ulong)ppplVar32);
  }
  if (alStack_d0 == local_b0) {
    pcVar30 = *(code **)(*local_b0 + 0x20);
LAB_7101e0c21c:
    (*pcVar30)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101e0c21c;
  }
  if (alStack_100 == local_e0) {
    pcVar30 = *(code **)(*local_e0 + 0x20);
LAB_7101e0c24c:
    (*pcVar30)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101e0c24c;
  }
  if (alStack_130 == local_110) {
    pcVar30 = *(code **)(*local_110 + 0x20);
LAB_7101e0c27c:
    (*pcVar30)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar30 = *(code **)(*local_110 + 0x28);
    goto LAB_7101e0c27c;
  }
  if (alStack_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7101e0c2ac:
    (*pcVar30)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7101e0c2ac;
  }
  if (alStack_190 == local_170) {
    pcVar30 = *(code **)(*local_170 + 0x20);
LAB_7101e0c2dc:
    (*pcVar30)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar30 = *(code **)(*local_170 + 0x28);
    goto LAB_7101e0c2dc;
  }
  FUN_7103776640(&local_1f0,(long)plVar1,(byte ****)"set_parts_det_key",pppplVar22,ppppbVar24,
                 pppplVar23,param_6,param_7,param_8);
  FUN_7103776910(&local_1c0,(long)&local_1f0,(long ****)"set_txt_help",pppplVar22,ppppbVar24,
                 pppplVar23,param_6,param_7,param_8);
  FUN_710377a120((long)&local_1c0,"mnu_spirits_setorg_submenu",pppplVar22,ppppbVar24,pppplVar23,
                 param_6,param_7,param_8);
  uVar42 = local_1b8;
  local_1c0 = &PTR_FUN_710523d9a8;
  local_1b8 = 0;
  if (uVar42 != 0) {
    FUN_710392eb40(uVar42);
  }
  pppbVar43 = local_1e8;
  local_1f0 = (byte ***)&PTR_FUN_710523d988;
  local_1e8 = (byte ***)0x0;
  if (pppbVar43 != (byte ***)0x0) {
    ppbVar16 = pppbVar43[3];
    pppbVar43[2] = &PTR_FUN_710523d9a8;
    pppbVar43[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar43);
  }
  FUN_7103776640(&local_1c0,(long)plVar1,(byte ****)"set_parts_det_key",pppplVar22,ppppbVar24,
                 pppplVar23,param_6,param_7,param_8);
  uVar42 = local_1b8;
  if ((*(long *)(local_1b8 + 8) != 0) &&
     (lVar29 = *(long *)(*(long *)(local_1b8 + 8) + 0x18), lVar29 != 0)) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
  }
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar42 != 0) {
    uVar17 = *(ulong *)(uVar42 + 0x18);
    *(undefined ***)(uVar42 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar42 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar42);
  }
  local_1f0 = (byte ***)0x0;
  local_1c0 = (undefined **)0x2000000000;
  local_1b8 = 0x69696d6d5f756e6d;
  local_1b0 = 0x6e656d6275735f66;
  local_1a8 = 0x5f75;
  uStack_1a6 = 0x66;
  uStack_1a5 = 0x61;
  uStack_1a4 = 0x76;
  uStack_1a3 = 0x6f;
  uStack_1a2 = 0x72;
  uStack_1a1 = 0x69;
  uStack_1a0 = 0x74;
  uStack_19f = 0x65;
  uStack_19e = 0x675f;
  uStack_19c = 0x6975;
  uVar28 = 0x6d;
  lVar29 = 9;
  local_19a = 0x6564;
  local_198 = 0;
  local_1e8 = (byte ***)0x0;
  local_1e0 = (byte ***)0x0;
  uVar38 = uVar8;
  do {
    uVar38 = uVar38 * 0x89 ^ uVar28;
    uVar28 = (uint)*(byte *)((long)&local_1c0 + lVar29);
    lVar29 = lVar29 + 1;
  } while (uVar28 != 0);
  local_1c0 = (undefined **)CONCAT44(0x20,uVar38);
  FUN_71019c1c50((ulong *)&local_1f0,(long)&local_1c0,pppplVar22,ppppbVar24,pppplVar23,param_6,
                 param_7,param_8);
  local_1c0 = (undefined **)0x1400000000;
  local_1b8 = 0x69696d6d5f756e6d;
  local_1b0 = 0x65645f6275735f66;
  local_1a8 = 0x656c;
  uStack_1a6 = 0x74;
  uStack_1a5 = 0x65;
  uVar28 = 0x6d;
  lVar29 = 9;
  uStack_1a4 = 0;
  uVar38 = uVar8;
  do {
    uVar38 = uVar38 * 0x89 ^ uVar28;
    uVar28 = (uint)*(byte *)((long)&local_1c0 + lVar29);
    lVar29 = lVar29 + 1;
  } while (uVar28 != 0);
  local_1c0 = (undefined **)CONCAT44(0x14,uVar38);
  if (local_1e8 < local_1e0) {
    *(uint *)local_1e8 = 0;
    for (uVar42 = 0; *(char *)((long)&local_1b8 + uVar42) != '\0'; uVar42 = uVar42 + 2) {
      *(char *)((long)local_1e8 + uVar42 + 8) = *(char *)((long)&local_1b8 + uVar42);
      if (0x3e < (int)uVar42 + 1U) {
        uVar42 = (ulong)((int)uVar42 + 1);
        break;
      }
      cVar6 = *(char *)((long)&local_1b8 + uVar42 + 1);
      if (cVar6 == '\0') {
        uVar42 = uVar42 + 1;
        break;
      }
      *(char *)((long)local_1e8 + uVar42 + 9) = cVar6;
    }
    *(undefined1 *)((long)local_1e8 + (uVar42 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1e8 + 4) = (uint)uVar42;
    uVar28 = (uint)*(byte *)(local_1e8 + 1);
    uVar38 = uVar8;
    if (*(byte *)(local_1e8 + 1) != 0) {
      pbVar36 = (byte *)((long)local_1e8 + 9);
      do {
        uVar38 = uVar38 * 0x89 ^ uVar28;
        uVar28 = (uint)*pbVar36;
        pbVar36 = pbVar36 + 1;
      } while (uVar28 != 0);
    }
    *(uint *)local_1e8 = uVar38;
    local_1e8 = local_1e8 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1f0,(long)&local_1c0,pppplVar22,ppppbVar24,pppplVar23,param_6,
                   param_7,param_8);
  }
  pppbVar10 = local_1e8;
  pppbVar43 = local_1f0;
  ppplVar32 = (long ***)((long)local_1e8 - (long)local_1f0);
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  local_1c0 = (undefined **)0x0;
  local_200 = (byte ***)0x0;
  local_1f8 = (byte ***)0x0;
  local_208 = (byte ***)0x0;
  if (ppplVar32 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar32 >> 3) * -0x71c71c71c71c71c7)) {
LAB_7101e0cfc4:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar18 = (byte ***)
                FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,pppplVar23,param_6,param_7,
                               param_8);
    if (pppbVar18 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
        pppplVar22 = &local_88;
        local_88 = ppplVar32;
        uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
        if (((uVar42 & 1) != 0) &&
           (pppbVar18 = (byte ***)
                        FUN_710392e290(0x10,ppplVar32,pppplVar22,ppppbVar24,pppplVar23,param_6,
                                       param_7,param_8), pppbVar18 != (byte ***)0x0))
        goto LAB_7101e0c5dc;
      }
      pppbVar18 = (byte ***)0x0;
    }
LAB_7101e0c5dc:
    local_1f8 = pppbVar18 + ((long)ppplVar32 >> 3);
    local_200 = pppbVar18;
    for (; local_208 = pppbVar18, pppbVar10 != pppbVar43; pppbVar43 = pppbVar43 + 9) {
      *(uint *)local_200 = 0;
      uVar42 = 0;
      do {
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 8);
        uVar17 = uVar42;
        if (cVar6 == '\0') break;
        *(char *)((long)local_200 + uVar42 + 8) = cVar6;
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 9);
        if (cVar6 == '\0') {
          uVar17 = uVar42 + 1;
          break;
        }
        *(char *)((long)local_200 + uVar42 + 9) = cVar6;
        cVar6 = *(char *)((long)pppbVar43 + uVar42 + 10);
        if (cVar6 == '\0') {
          uVar17 = uVar42 + 2;
          break;
        }
        uVar17 = uVar42 + 3;
        *(char *)((long)local_200 + uVar42 + 10) = cVar6;
        uVar42 = uVar17;
      } while ((uint)uVar17 < 0x3f);
      *(undefined1 *)((long)local_200 + (uVar17 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_200 + 4) = (uint)uVar17;
      uVar28 = (uint)*(byte *)(local_200 + 1);
      uVar38 = uVar8;
      if (*(byte *)(local_200 + 1) != 0) {
        pbVar36 = (byte *)((long)local_200 + 9);
        do {
          uVar38 = uVar38 * 0x89 ^ uVar28;
          uVar28 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar28 != 0);
      }
      *(uint *)local_200 = uVar38;
      local_200 = local_200 + 9;
    }
  }
  pppplVar22 = (long ****)&local_1c0;
  ppppbVar24 = &local_208;
  uVar25 = 1;
  uVar27 = 1;
  uVar26 = 0;
  FUN_71032d6470(param_1[0xac],plVar19,pppplVar22,ppppbVar24,(long ****)0x1,0,1,param_8);
  if (local_208 != (byte ***)0x0) {
    local_200 = local_208;
    FUN_710392eb40((ulong)local_208);
  }
  FUN_7103778430((long)plVar1,"submenu_in",pppplVar22,ppppbVar24,uVar25,uVar26,uVar27,param_8);
  FUN_7103778760(param_1[0xa3],0x71042921b0);
  *(undefined2 *)(param_1 + 0xb3) = 0x101;
  if (local_1f0 != (byte ***)0x0) {
    local_1e8 = local_1f0;
    FUN_710392eb40((ulong)local_1f0);
  }
  local_1c0 = (undefined **)0x0;
  local_1b8 = 0x4248000041800000;
  local_1b0 = 0x101013f800000;
  local_1a8 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  uStack_1a6 = 1;
  local_b0 = (long *)0x0;
  uStack_19f = 0;
  uStack_1a1 = 0;
  uStack_1a0 = 0;
  uStack_1a5 = 0;
  uStack_1a4 = 0;
  uStack_1a3 = 0;
  uStack_1a2 = 0;
  FUN_710337e790((long)&local_1c0);
  pppplVar22 = (long ****)(param_1 + 2);
  pcVar21 = "scroll";
  ppppbVar24 = (byte ****)&local_1c0;
  local_1c0 = (undefined **)CONCAT44(99,(undefined4)local_1c0);
  uStack_1a4 = 1;
  uStack_1a3 = 1;
  FUN_7103781a20(param_1 + 0xa5,plVar1,(byte ****)"scroll",ppppbVar24,pppplVar22,uVar26,uVar27,
                 param_8);
  (**(code **)(*(long *)param_1[0xa5] + 0x60))((long *)param_1[0xa5],0);
  lVar29 = param_1[0xa5];
  lVar33 = *param_1;
  local_1f0 = (byte ***)0x0;
  local_1e8 = (byte ***)0x0;
  local_1e0 = (byte ***)0x0;
  FUN_71019bb740((ulong *)&local_1f0,*(long *)(lVar29 + 0x170) - *(long *)(lVar29 + 0x168) >> 3,
                 (long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,uVar27,param_8);
  plVar47 = *(long **)(lVar29 + 0x170);
  pppbVar43 = local_1f0;
  pppbVar10 = local_1e8;
  for (plVar19 = *(long **)(lVar29 + 0x168); local_1f0 = pppbVar43, local_1e8 = pppbVar10,
      plVar19 != plVar47; plVar19 = plVar19 + 1) {
    if (pppbVar10 == local_1e0) {
      FUN_71019bb8f0((long *)&local_1f0,(undefined8 *)(*plVar19 + 8),(long ****)pcVar21,ppppbVar24,
                     pppplVar22,uVar26,uVar27,param_8);
    }
    else {
      FUN_7103776390(pppbVar10,(undefined8 *)(*plVar19 + 8),(long ****)pcVar21,ppppbVar24,pppplVar22
                     ,uVar26,uVar27,param_8);
      local_1e8 = local_1e8 + 2;
    }
    pppbVar43 = local_1f0;
    pppbVar10 = local_1e8;
  }
  uVar7 = *(undefined1 *)((long)param_1 + 0x59d);
  if (pppbVar43 != pppbVar10) {
    do {
      plVar19 = (long *)FUN_710392e290(0x10,0xf0,(long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,
                                       uVar27,param_8);
      if (plVar19 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
          local_88 = (long ***)&DAT_000000f0;
          pcVar21 = (char *)&local_88;
          uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
          if (((uVar42 & 1) != 0) &&
             (plVar19 = (long *)FUN_710392e290(0x10,0xf0,(long ****)pcVar21,ppppbVar24,pppplVar22,
                                               uVar26,uVar27,param_8), plVar19 != (long *)0x0))
          goto LAB_7101e0c8ac;
        }
        plVar19 = (long *)0x0;
      }
LAB_7101e0c8ac:
      plVar19[2] = 0;
      plVar45 = plVar19 + 1;
      *plVar45 = 0;
      *plVar19 = (long)&PTR_FUN_71050b15f0;
      plVar47 = plVar19 + 3;
      *plVar47 = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      plVar19[4] = (long)plVar47;
      plVar19[5] = 0;
      *(undefined4 *)(plVar19 + 0x18) = 0xffffffff;
      *(undefined1 *)((long)plVar19 + 0xc4) = 0;
      plVar19[0x16] = 0;
      plVar19[0x17] = 0xffffffff;
      plVar19[0x14] = 0;
      plVar19[0x15] = 0;
      plVar19[0x12] = 0;
      plVar19[0x13] = 0;
      plVar19[0x10] = 0;
      plVar19[0x11] = 0;
      plVar19[0xe] = 0;
      plVar19[0xf] = 0;
      plVar19[0xc] = 0;
      plVar19[0xd] = 0;
      plVar19[10] = 0;
      plVar19[0xb] = 0;
      plVar19[8] = 0;
      plVar19[9] = 0;
      plVar19[0x19] = (long)&PTR_FUN_710523d9a8;
      puVar20 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,uVar27,
                               param_8);
      uVar25 = extraout_x1_24;
      if (puVar20 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
          local_88 = (long ***)&SUB_00000020;
          pcVar21 = (char *)&local_88;
          auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
          uVar25 = auVar48._8_8_;
          if (((auVar48._0_8_ & 1) != 0) &&
             (puVar20 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,
                                       uVar27,param_8), uVar25 = extraout_x1_25,
             puVar20 != (undefined8 *)0x0)) goto LAB_7101e0c95c;
        }
        puVar20 = (undefined8 *)0x0;
      }
LAB_7101e0c95c:
      puVar20[2] = 0;
      puVar20[3] = 0;
      *puVar20 = 0;
      puVar20[1] = 0;
      plVar19[0x1a] = (long)puVar20;
      FUN_7103776290(plVar19 + 0x1b,uVar25,(long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,uVar27,
                     param_8);
      *(undefined2 *)((long)plVar19 + 0xea) = 0xffff;
      plVar19[9] = (long)FUN_7101e09e50;
      plVar19[10] = 0;
      *(undefined1 *)(plVar19 + 0x1d) = 0;
      plVar19[0xb] = (long)FUN_7101e09e60;
      plVar19[0xc] = 0;
      if (0x12 < *(uint *)((long)plVar19 + 0xb4)) goto LAB_7101e0cfb8;
      *(undefined4 *)((long)plVar19 + (long)(int)*(uint *)((long)plVar19 + 0xb4) * 4 + 0x68) = 0;
      FUN_7103776910(&local_88,(long)pppbVar43,(long ****)"set_rep_spirit",pcVar21,ppppbVar24,
                     pppplVar22,uVar26,uVar27,param_8);
      plVar19[3] = lVar33;
      if (pppbVar43 != (byte ***)(plVar19 + 0x1b)) {
        *(byte **)plVar19[0x1c] = *pppbVar43[1];
        *(byte **)(plVar19[0x1c] + 8) = pppbVar43[1][1];
        ppbVar37 = pppbVar43[1];
        ppbVar16 = (byte **)plVar19[0x1c];
        if (ppbVar16 != ppbVar37) {
          *(undefined8 *)ppbVar16[3] = *(undefined8 *)ppbVar37[3];
          *(undefined8 *)(ppbVar16[3] + 8) = *(undefined8 *)(ppbVar37[3] + 8);
          *(undefined8 *)(ppbVar16[3] + 0x10) = *(undefined8 *)(ppbVar37[3] + 0x10);
          *(undefined8 *)(ppbVar16[3] + 0x18) = *(undefined8 *)(ppbVar37[3] + 0x18);
        }
      }
      if (&local_88 != (long ****)(plVar19 + 0x19)) {
        *(undefined8 *)plVar19[0x1a] = *local_80;
        *(undefined8 *)(plVar19[0x1a] + 8) = local_80[1];
        *(undefined8 *)(plVar19[0x1a] + 0x10) = local_80[2];
        *(undefined8 *)(plVar19[0x1a] + 0x18) = local_80[3];
      }
      puVar20 = (undefined8 *)param_1[0x6a];
      if (puVar20 == (undefined8 *)param_1[0x6b]) {
        puVar46 = (undefined8 *)param_1[0x69];
        lVar29 = (long)puVar20 - (long)puVar46 >> 4;
        uVar42 = lVar29 + 1;
        if (uVar42 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar31 = param_1[0x6b] - (long)puVar46;
        if ((ulong)(lVar31 >> 4) < 0x7ffffffffffffff) {
          uVar17 = lVar31 >> 3;
          if (uVar42 <= uVar17) {
            uVar42 = uVar17;
          }
          if (uVar42 != 0) {
            if (uVar42 >> 0x3c == 0) goto LAB_7101e0cb0c;
            goto LAB_7101e0cfb8;
          }
          lVar31 = 0;
        }
        else {
          uVar42 = 0xfffffffffffffff;
LAB_7101e0cb0c:
          ppplVar32 = (long ***)(uVar42 * 0x10);
          if (ppplVar32 == (long ***)0x0) {
            ppplVar32 = (long ***)0x1;
          }
          lVar31 = FUN_710392e290(0x10,ppplVar32,(long ****)pcVar21,ppppbVar24,pppplVar22,uVar26,
                                  uVar27,param_8);
          if (lVar31 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_74[0] = 0;
              pcVar21 = (char *)&local_260;
              local_260 = ppplVar32;
              uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
              if (((uVar17 & 1) != 0) &&
                 (lVar31 = FUN_710392e290(0x10,ppplVar32,(long ****)pcVar21,ppppbVar24,pppplVar22,
                                          uVar26,uVar27,param_8), lVar31 != 0)) goto LAB_7101e0cb70;
            }
            lVar31 = 0;
          }
        }
LAB_7101e0cb70:
        puVar39 = (undefined8 *)(lVar31 + lVar29 * 0x10);
        lVar5 = lVar31 + uVar42 * 0x10;
        *puVar39 = plVar47;
        puVar39[1] = plVar19;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar9) {
            *plVar45 = *plVar45 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        puVar2 = puVar39 + 2;
        if (puVar20 != puVar46) {
          uVar17 = (long)(puVar20 + -2) - (long)puVar46;
          uVar8 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
          uVar42 = (ulong)uVar8 & 3;
          if ((uVar8 & 3) != 0) {
            lVar41 = -uVar42;
            puVar39 = puVar39 + -1;
            puVar40 = puVar20 + -2;
            do {
              puVar39[-1] = *puVar40;
              *puVar39 = puVar40[1];
              *puVar40 = 0;
              puVar40[1] = 0;
              lVar41 = lVar41 + 1;
              puVar39 = puVar39 + -2;
              puVar40 = puVar40 + -2;
            } while (lVar41 != 0);
            puVar39 = (undefined8 *)(lVar31 + (lVar29 - uVar42) * 0x10);
            puVar20 = puVar20 + uVar42 * -2;
          }
          if (0x2f < uVar17) {
            puVar39 = puVar39 + -4;
            do {
              puVar39[2] = puVar20[-2];
              puVar39[3] = puVar20[-1];
              puVar20[-2] = 0;
              puVar20[-1] = 0;
              *puVar39 = puVar20[-4];
              puVar39[1] = puVar20[-3];
              puVar20[-4] = 0;
              puVar20[-3] = 0;
              puVar39[-2] = puVar20[-6];
              puVar39[-1] = puVar20[-5];
              puVar20[-6] = 0;
              puVar20[-5] = 0;
              puVar40 = puVar20 + -8;
              puVar39[-4] = *puVar40;
              puVar39[-3] = puVar20[-7];
              puVar39 = puVar39 + -8;
              *puVar40 = 0;
              puVar20[-7] = 0;
              puVar20 = puVar40;
            } while (puVar46 != puVar40);
          }
          puVar46 = (undefined8 *)param_1[0x69];
          puVar20 = (undefined8 *)param_1[0x6a];
          param_1[0x6a] = (long)puVar2;
          param_1[0x69] = lVar31 + (lVar29 + (uVar17 >> 4 ^ 0xffffffffffffffff)) * 0x10;
          param_1[0x6b] = lVar5;
joined_r0x007101e0cc7c:
          if (puVar20 != puVar46) {
            do {
              plVar47 = (long *)puVar20[-1];
              puVar20 = puVar20 + -2;
              if (plVar47 != (long *)0x0) {
                plVar3 = plVar47 + 1;
                do {
                  lVar29 = *plVar3;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar9) {
                    *plVar3 = lVar29 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar29 == 0) goto LAB_7101e0ccb4;
              }
              if (puVar20 == puVar46) break;
            } while( true );
          }
          goto joined_r0x007101e0c840;
        }
        param_1[0x69] = (long)puVar39;
        param_1[0x6a] = (long)puVar2;
        param_1[0x6b] = lVar5;
joined_r0x007101e0c840:
        if (puVar46 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar46);
        }
      }
      else {
        *puVar20 = plVar47;
        puVar20[1] = plVar19;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar9) {
            *plVar45 = *plVar45 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        param_1[0x6a] = param_1[0x6a] + 0x10;
      }
      puVar20 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined8 *)0x0;
      if (puVar20 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar20);
      }
      do {
        lVar29 = *plVar45;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar45,0x10);
        if (bVar9) {
          *plVar45 = lVar29 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
        std::__shared_weak_count::__release_weak();
      }
      pppbVar43 = pppbVar43 + 2;
    } while (pppbVar43 != pppbVar10);
  }
  pppbVar10 = local_1f0;
  *(undefined1 *)((long)param_1 + 0x362) = 1;
  *(undefined1 *)((long)param_1 + 0x361) = uVar7;
  pppbVar43 = local_1e8;
  if (local_1f0 != (byte ***)0x0) {
    while (pppbVar43 != pppbVar10) {
      pppbVar43 = pppbVar43 + -2;
      (*(code *)**pppbVar43)(pppbVar43);
    }
    local_1e8 = pppbVar10;
    if (local_1f0 != (byte ***)0x0) {
      FUN_710392eb40((ulong)local_1f0);
    }
  }
  pppplVar23 = (long ****)(ulong)*(uint *)((long)param_1 + 0x364);
  uVar42 = (ulong)*(byte *)((long)param_1 + 0x361);
  FUN_7102528f40(*(long *)(*DAT_7105329f98 + 0x30),param_1 + 3,pppplVar23,uVar42,pppplVar22,uVar26,
                 uVar27,param_8);
  uVar8 = *(byte *)((long)param_1 + 0x361) ^ 1;
  *(char *)(param_1 + 0x6c) = (char)uVar8;
  if (0 < (int)((int)((ulong)(param_1[4] - param_1[3]) >> 3) + uVar8)) {
    uVar42 = 1;
    pppplVar23 = (long ****)0x0;
    FUN_7103783c10(param_1 + 0xa5,*(byte *)((long)param_1 + 0x59d) ^ 1,0,1,pppplVar22,uVar26,uVar27,
                   param_8);
  }
  if (alStack_d0 == local_b0) {
    pcVar30 = *(code **)(*local_b0 + 0x20);
LAB_7101e0ce08:
    (*pcVar30)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101e0ce08;
  }
  if (alStack_100 == local_e0) {
    pcVar30 = *(code **)(*local_e0 + 0x20);
LAB_7101e0ce38:
    (*pcVar30)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar30 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101e0ce38;
  }
  if (alStack_130 == local_110) {
    pcVar30 = *(code **)(*local_110 + 0x20);
LAB_7101e0ce68:
    (*pcVar30)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar30 = *(code **)(*local_110 + 0x28);
    goto LAB_7101e0ce68;
  }
  if (alStack_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7101e0ce98:
    (*pcVar30)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7101e0ce98;
  }
  if (alStack_190 == local_170) {
    pcVar30 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) goto LAB_7101e0cecc;
    pcVar30 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar30)();
LAB_7101e0cecc:
  FUN_7103778760(param_1[0xa3],0x710428ff7d);
  FUN_7103776640(&local_1c0,(long)plVar1,(byte ****)"set_parts_det_key",pppplVar23,uVar42,pppplVar22
                 ,uVar26,uVar27,param_8);
  uVar17 = local_1b8;
  if ((*(long *)(local_1b8 + 8) != 0) &&
     (lVar29 = *(long *)(*(long *)(local_1b8 + 8) + 0x18), lVar29 != 0)) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
  }
  if (*(char *)((long)param_1 + 0x599) == '\0') {
    FUN_7103778430((long)plVar1,"submenu_in",pppplVar23,uVar42,pppplVar22,uVar26,uVar27,param_8);
    *(undefined1 *)((long)param_1 + 0x599) = 1;
    cVar6 = (char)param_1[0xb3];
  }
  else {
    cVar6 = (char)param_1[0xb3];
  }
  if (cVar6 == '\0') {
    FUN_7103778300(0x3f800000,param_1[0xa3],0x71042921b0);
  }
  *(undefined1 *)(param_1 + 0xb3) = 1;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar17 != 0) {
    uVar42 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar42 != 0) {
      FUN_710392eb40(uVar42);
    }
    FUN_710392eb40(uVar17);
  }
  return;
LAB_7101e0ccb4:
  (**(code **)(*plVar47 + 0x10))(plVar47);
  std::__shared_weak_count::__release_weak();
  goto joined_r0x007101e0cc7c;
}

