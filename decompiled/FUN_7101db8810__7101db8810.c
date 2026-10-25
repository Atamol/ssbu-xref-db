// addr:      7101db8810
// offset:    0x1db8810
// name:      FUN_7101db8810
// mangled:   
// signature: undefined __cdecl FUN_7101db8810(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 * param_8, long * * * param_9, long * * * param_10)


void FUN_7101db8810(undefined1 param_1 [16],long ********param_2,undefined8 *param_3,
                   undefined8 param_4,undefined8 param_5,byte ****param_6,long ****param_7,
                   undefined8 *param_8,long ***param_9,long ***param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  long ***ppplVar8;
  byte ***pppbVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte **ppbVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long **pplVar20;
  long lVar21;
  byte ***pppbVar22;
  long ***ppplVar23;
  undefined1 uVar24;
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
  undefined8 uVar25;
  long *********ppppppppplVar26;
  long ****pppplVar27;
  byte ****ppppbVar28;
  uint uVar29;
  long lVar30;
  byte *pbVar31;
  ushort *puVar32;
  int *piVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  char cVar37;
  long lVar38;
  undefined1 uVar39;
  long *********ppppppppplVar40;
  undefined1 *puVar41;
  char *pcVar42;
  byte bVar43;
  byte ***pppbVar44;
  long ********pppppppplVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 local_2d0;
  undefined4 local_2b0;
  undefined4 local_298 [2];
  undefined **local_290;
  long local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined **local_258;
  byte ***local_250;
  undefined **local_248;
  ulong local_240;
  undefined **local_238;
  undefined8 local_230;
  undefined **local_1f0;
  ulong local_1e8 [8];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long ********local_d0;
  byte ***pppbStack_c8;
  undefined4 local_c0;
  ushort local_bc;
  
  lVar30 = DAT_710532f8b8;
  if (*(int *)((long)param_3 + 0xc4) != 0) {
    return;
  }
  lVar38 = *(long *)*param_3;
  if (((DAT_710532f4d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_710532f4d8), iVar11 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar35 = *(long *)(lVar38 + 0x28);
    if (lVar35 == 0) goto LAB_7101db88ac;
LAB_7101db8868:
    lVar21 = lVar38 + 0x28;
    do {
      bVar10 = (*(ulong *)(lVar35 + 0x20) & 0xffffffffff) < 0x1145a829f5;
      if (!bVar10) {
        lVar21 = lVar35;
      }
      lVar35 = *(long *)(lVar35 + (ulong)bVar10 * 8);
    } while (lVar35 != 0);
    if ((lVar21 == lVar38 + 0x28) || (0x1145a829f5 < (*(ulong *)(lVar21 + 0x20) & 0xfffffffffe)))
    goto LAB_7101db88ac;
    ppppppppplVar26 = (long *********)(lVar21 + 0x28);
  }
  else {
    lVar35 = *(long *)(lVar38 + 0x28);
    if (lVar35 != 0) goto LAB_7101db8868;
LAB_7101db88ac:
    ppppppppplVar26 = (long *********)&DAT_710532f4a4;
  }
  if ((*(int *)ppppppppplVar26 != 0xffffff) &&
     (iVar11 = FUN_710330a8f0(*(long **)(lVar30 + 8),(ulong *)&DAT_71045458f8,
                              (long ****)&DAT_00000004,param_6,param_7,param_8,param_9,param_10),
     iVar11 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar11,ppppppppplVar26,param_6,
                   param_7,(ulong)param_8,param_9,param_10);
  }
  *(undefined1 *)((long)param_3 + 0x101) = 1;
  ppppbVar28 = (byte ****)0x1;
  FUN_71032cbf30(param_3 + 0x1a,*(long *)*param_3,(ulong *)&DAT_7104545900,(byte ****)0x1,param_7,
                 param_8,param_9,param_10);
  lVar30 = *(long *)param_3[0x1a];
  puVar1 = param_3 + 0x1b;
  if (puVar1 != (undefined8 *)(lVar30 + 8)) {
    *(undefined8 *)param_3[0x1c] = **(undefined8 **)(lVar30 + 0x10);
    *(undefined8 *)(param_3[0x1c] + 8) = *(undefined8 *)(*(long *)(lVar30 + 0x10) + 8);
    lVar38 = *(long *)(lVar30 + 0x10);
    lVar30 = param_3[0x1c];
    if (lVar30 != lVar38) {
      **(undefined8 **)(lVar30 + 0x18) = **(undefined8 **)(lVar38 + 0x18);
      *(undefined8 *)(*(long *)(lVar30 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar38 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar30 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar38 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar30 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar38 + 0x18) + 0x18);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
LAB_7101db8a30:
    lVar30 = param_3[0x1c];
    pcVar42 = "fighter_cp_default";
  }
  else if (*(char *)((long)param_3 + 0x24c) == '\0') {
    if ((*(char *)(param_3 + 0x2d) != '\0') && (param_3[0x3b] != param_3[0x3a])) {
      uVar34 = (ulong)*(short *)(param_3 + 0x3d);
      lVar30 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar34 != 0xffffffffffffffff) {
        uVar34 = (ulong)*(ushort *)(lVar30 + uVar34 * 2 + 0x60);
      }
      if (((uint)uVar34 <
           (uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) *
                 -0x33333333)) &&
         (*(char *)(*(long *)(lVar30 + 0x20) + (uVar34 & 0xffffffff) * 0x140 + 0x5e) == '\x03'))
      goto LAB_7101db8a30;
    }
    lVar30 = param_3[0x1c];
    if (*(char *)((long)param_3 + 0x219) == '\x01') {
      pcVar42 = "fighter_cp_light";
    }
    else {
      pcVar42 = "fighter_cp_dark";
    }
  }
  else {
    lVar30 = param_3[0x1c];
    pcVar42 = "fighter_cp_boss";
  }
  FUN_7103778300(0x3f800000,lVar30,(long)pcVar42);
  lVar38 = *(long *)(DAT_710532f730 + 8);
  uVar6 = *(ushort *)((long)param_3 + 0x15a);
  lVar30 = *(long *)(lVar38 + 0x1d8);
  uVar39 = 0;
  bVar43 = 4;
  if (((short)uVar6 != -1) && ((short)uVar6 < 2000)) {
    uVar5 = *(ushort *)(lVar30 + (long)(int)(short)uVar6 * 2 + 0x60);
    uVar34 = (ulong)uVar5;
    uVar36 = (*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar5 < (uint)uVar36) {
      puVar3 = (undefined2 *)(*(long *)(lVar30 + 0x20) + uVar34 * 0x140);
      if (uVar36 < uVar34 || uVar36 - uVar34 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      bVar43 = *(byte *)(puVar3 + 0x36);
      if (bVar43 - 1 < 3) {
        uVar39 = (undefined1)(0x20301 >> (ulong)((bVar43 - 1 & 3) << 3));
      }
      else {
        uVar39 = 0;
      }
    }
    else {
      uVar39 = 0;
      bVar43 = 4;
    }
  }
  local_110 = (byte ***)((ulong)local_110 & 0xffffffffffffff00);
  local_118 = (undefined **)0x0;
  local_158 = (long ***)((ulong)local_158 & 0xffffffffffffff00);
  local_160 = (undefined **)0x0;
  uVar34 = FUN_71032a9470(lVar30,uVar6);
  FUN_71032a9540((uint *)&local_d0,lVar30,uVar34);
  FUN_71003a4ca0((uint *)&local_1a8,"spi_%s",&pppbStack_c8,uVar34,ppppbVar28,param_7,param_8,param_9
                 ,param_10);
  for (uVar34 = 0; *(char *)((long)&local_1a0 + uVar34) != '\0'; uVar34 = uVar34 + 2) {
    *(char *)((long)&local_110 + uVar34) = *(char *)((long)&local_1a0 + uVar34);
    if (0x3e < (int)uVar34 + 1U) {
      uVar34 = (ulong)((int)uVar34 + 1);
      break;
    }
    cVar37 = *(char *)((long)&local_1a0 + uVar34 + 1);
    if (cVar37 == '\0') {
      uVar34 = uVar34 + 1;
      break;
    }
    *(char *)((long)&local_110 + uVar34 + 1) = cVar37;
  }
  uVar13 = 0x811c9dc5;
  *(char *)((long)&local_110 + (uVar34 & 0xffffffff)) = '\0';
  local_118 = (undefined **)CONCAT44((int)uVar34,(uint)local_118);
  uVar29 = (uint)(byte)local_110;
  uVar12 = uVar13;
  if ((byte)local_110 != 0) {
    pbVar31 = (byte *)((long)&local_110 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar31;
      pbVar31 = pbVar31 + 1;
    } while (uVar29 != 0);
  }
  local_118 = (undefined **)CONCAT44((int)uVar34,uVar12);
  lVar30 = *(long *)(DAT_710532f730 + 8);
  uVar12 = uVar13;
  if (*(char *)((long)param_3 + 0x11a) == '\0') {
    uVar34 = param_3[0x21];
    uVar12 = FUN_7103263540(*(long *)(lVar30 + 0x168),uVar34,(ulong)*(byte *)(param_3 + 0x23),
                            ppppbVar28,param_7,param_8,param_9,param_10);
    FUN_7103262310((uint *)&local_d0,*(long *)(lVar30 + 0x168),uVar34);
    FUN_71003a4ca0((uint *)&local_1a8,"nam_chr1_%02d_%s",(ulong)uVar12,&pppbStack_c8,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    for (uVar34 = 0; *(char *)((long)&local_1a0 + uVar34) != '\0'; uVar34 = uVar34 + 2) {
      *(char *)((long)&local_158 + uVar34) = *(char *)((long)&local_1a0 + uVar34);
      if (0x3e < (int)uVar34 + 1U) {
        uVar34 = (ulong)((int)uVar34 + 1);
        break;
      }
      cVar37 = *(char *)((long)&local_1a0 + uVar34 + 1);
      if (cVar37 == '\0') {
        uVar34 = uVar34 + 1;
        break;
      }
      *(char *)((long)&local_158 + uVar34 + 1) = cVar37;
    }
    *(undefined1 *)((long)&local_158 + (uVar34 & 0xffffffff)) = 0;
    local_160._4_4_ = (int)uVar34;
    uVar29 = (uint)(byte)local_158;
    uVar12 = 0x811c9dc5;
    if ((byte)local_158 != 0) {
      pbVar31 = (byte *)((long)&local_158 + 1);
      uVar12 = uVar13;
      do {
        uVar12 = uVar12 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar31;
        pbVar31 = pbVar31 + 1;
      } while (uVar29 != 0);
    }
  }
  else {
    uVar34 = param_3[0x21];
    uVar29 = FUN_7103263540(*(long *)(lVar30 + 0x168),uVar34,0,ppppbVar28,param_7,param_8,param_9,
                            param_10);
    FUN_7103262310((uint *)&local_d0,*(long *)(lVar30 + 0x168),uVar34);
    FUN_71003a4ca0((uint *)&local_1a8,"nam_chr1_%02d_%s",(ulong)uVar29,&pppbStack_c8,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    for (uVar34 = 0; *(char *)((long)&local_1a0 + uVar34) != '\0'; uVar34 = uVar34 + 2) {
      *(char *)((long)&local_158 + uVar34) = *(char *)((long)&local_1a0 + uVar34);
      if (0x3e < (int)uVar34 + 1U) {
        uVar34 = (ulong)((int)uVar34 + 1);
        break;
      }
      cVar37 = *(char *)((long)&local_1a0 + uVar34 + 1);
      if (cVar37 == '\0') {
        uVar34 = uVar34 + 1;
        break;
      }
      *(char *)((long)&local_158 + uVar34 + 1) = cVar37;
    }
    *(undefined1 *)((long)&local_158 + (uVar34 & 0xffffffff)) = 0;
    local_160._4_4_ = (int)uVar34;
    uVar29 = (uint)(byte)local_158;
    if ((byte)local_158 != 0) {
      pbVar31 = (byte *)((long)&local_158 + 1);
      do {
        uVar12 = uVar12 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar31;
        pbVar31 = pbVar31 + 1;
      } while (uVar29 != 0);
    }
  }
  uVar25 = 0;
  local_160 = (undefined **)CONCAT44(local_160._4_4_,uVar12);
  FUN_710339dde0((uint *)&local_d0,uVar39,'\0');
  if (bVar43 == 4) {
    FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_parts_hbg_00",uVar25,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    uVar34 = (ulong)local_1a0;
    FUN_7103778300(0x3f800000,(long)local_1a0,0x71043f0da0);
    local_1a8 = &PTR_FUN_710523d988;
    local_1a0 = (long ***)0x0;
    if (uVar34 != 0) {
      uVar36 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar36 != 0) {
        FUN_710392eb40(uVar36);
      }
      FUN_710392eb40(uVar34);
    }
    FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_parts_bg_00",uVar25,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pcVar42 = "spirit_null";
  }
  else {
    FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_parts_hbg_00",uVar25,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    uVar34 = (ulong)local_1a0;
    pcVar42 = (char *)&pppbStack_c8;
    FUN_7103778300(0x3f800000,(long)local_1a0,(long)pcVar42);
    local_1a8 = &PTR_FUN_710523d988;
    local_1a0 = (long ***)0x0;
    if (uVar34 != 0) {
      uVar36 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar36 != 0) {
        FUN_710392eb40(uVar36);
      }
      FUN_710392eb40(uVar34);
    }
    FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_parts_bg_00",uVar25,ppppbVar28,param_7,
                   param_8,param_9,param_10);
  }
  uVar36 = (ulong)local_1a0;
  FUN_7103778300(0x3f800000,(long)local_1a0,(long)pcVar42);
  FUN_7103776910(&local_1f0,(long)puVar1,(long ****)"set_txt_fighter_00",uVar25,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  FUN_710377a120((long)&local_1f0,(char *)&local_158,uVar25,ppppbVar28,param_7,param_8,param_9,
                 param_10);
  uVar34 = local_1e8[0];
  local_1f0 = &PTR_FUN_710523d9a8;
  local_1e8[0] = 0;
  if (uVar34 != 0) {
    FUN_710392eb40(uVar34);
  }
  FUN_7103776640(&local_1f0,(long)puVar1,(byte ****)"set_parts_spirit_name_00",uVar25,ppppbVar28,
                 param_7,param_8,param_9,param_10);
  FUN_7103776910(&local_238,(long)&local_1f0,(long ****)"set_txt_help",uVar25,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  uVar34 = local_1e8[0];
  sVar7 = *(short *)((long)param_3 + 0x15a);
  if (((sVar7 == -1) || (1999 < sVar7)) ||
     (lVar30 = *(long *)(lVar38 + 0x1d8),
     (uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) * -0x33333333)
     <= (uint)*(ushort *)(lVar30 + (long)(int)sVar7 * 2 + 0x60))) {
    if ((*(long *)(local_1e8[0] + 8) != 0) &&
       (lVar30 = *(long *)(*(long *)(local_1e8[0] + 8) + 0x18), lVar30 != 0)) {
      *(byte *)(lVar30 + 0x58) = *(byte *)(lVar30 + 0x58) & 0xfe;
    }
  }
  else {
    FUN_7103778300(0x3f800000,local_1e8[0],0x710425d1ad);
    FUN_710377a120((long)&local_238,(char *)&local_110,uVar25,ppppbVar28,param_7,param_8,param_9,
                   param_10);
  }
  uVar14 = local_230;
  local_238 = &PTR_FUN_710523d9a8;
  local_230 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  local_1f0 = &PTR_FUN_710523d988;
  local_1e8[0] = 0;
  if (uVar34 != 0) {
    uVar14 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar34);
  }
  local_1a8 = &PTR_FUN_710523d988;
  local_1a0 = (long ***)0x0;
  if (uVar36 != 0) {
    uVar34 = *(ulong *)(uVar36 + 0x18);
    *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar36 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40(uVar36);
  }
  lVar30 = *(long *)(DAT_710532f730 + 8);
  local_110 = (byte ***)((ulong)local_110 & 0xffffffffffffff00);
  local_118 = (undefined **)0x0;
  local_158 = (long ***)((ulong)local_158 & 0xffffffffffffff00);
  local_160 = (undefined **)0x0;
  puVar2 = param_3 + 0x2c;
  if (*(char *)(param_3 + 0x2d) == '\0') {
LAB_7101db9124:
    uVar39 = 0;
joined_r0x007101db90c4:
    if (*(char *)((long)param_3 + 0x24c) == '\0') goto LAB_7101db90c8;
    uVar24 = 0;
  }
  else {
    if (*(char *)((long)param_3 + 0x24c) != '\0') {
      lVar38 = param_3[0x3a];
      lVar35 = param_3[0x3b];
LAB_7101db9070:
      uVar12 = (uint)((ulong)(lVar35 - lVar38) >> 3);
      if (uVar12 != 0) {
        uVar29 = 0;
        do {
          lVar35 = *(long *)(lVar38 + (ulong)uVar29 * 8);
          if (*(char *)(lVar35 + 0x10) == '\x01') {
            uVar12 = *(byte *)(lVar35 + 0x48) - 1;
            if (uVar12 < 3) {
              uVar39 = (undefined1)(0x20301 >> (ulong)((uVar12 & 3) << 3));
              goto joined_r0x007101db90c4;
            }
            break;
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 < uVar12);
      }
      goto LAB_7101db9124;
    }
    lVar38 = param_3[0x3a];
    lVar35 = param_3[0x3b];
    if (lVar35 != lVar38) goto LAB_7101db9070;
    uVar39 = 0;
LAB_7101db90c8:
    uVar34 = (ulong)*(short *)((long)param_3 + 0x15c);
    lVar38 = *(long *)(lVar30 + 0x1d8);
    if (uVar34 != 0xffffffffffffffff) {
      uVar34 = (ulong)*(ushort *)(lVar38 + uVar34 * 2 + 0x60);
    }
    uVar36 = (*(long *)(lVar38 + 0x28) - *(long *)(lVar38 + 0x20) >> 6) * -0x3333333333333333;
    puVar3 = (undefined2 *)(*(long *)(lVar38 + 0x20) + uVar34 * 0x140);
    if (uVar36 < uVar34 || uVar36 - uVar34 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    uVar24 = 4;
    if (*(char *)(puVar3 + 0x2f) != '\x01') {
      uVar24 = uVar39;
    }
  }
  FUN_710339dde0((uint *)&local_1a8,uVar24,'\0');
  FUN_710339dde0((uint *)&local_1f0,uVar39,'\0');
  lVar38 = *(long *)(DAT_710532f730 + 8);
  uVar34 = param_3[0x2a];
  uVar12 = FUN_7103263540(*(long *)(lVar38 + 0x168),uVar34,(ulong)*(byte *)(param_3 + 0x2b),
                          ppppbVar28,param_7,param_8,param_9,param_10);
  FUN_7103262310((uint *)&local_d0,*(long *)(lVar38 + 0x168),uVar34);
  FUN_71003a4ca0((uint *)&local_238,"nam_chr1_%02d_%s",(ulong)uVar12,&pppbStack_c8,ppppbVar28,
                 param_7,param_8,param_9,param_10);
  for (uVar34 = 0; *(char *)((long)&local_230 + uVar34) != '\0'; uVar34 = uVar34 + 2) {
    *(char *)((long)&local_158 + uVar34) = *(char *)((long)&local_230 + uVar34);
    if (0x3e < (int)uVar34 + 1U) {
      uVar34 = (ulong)((int)uVar34 + 1);
      break;
    }
    cVar37 = *(char *)((long)&local_230 + uVar34 + 1);
    if (cVar37 == '\0') {
      uVar34 = uVar34 + 1;
      break;
    }
    *(char *)((long)&local_158 + uVar34 + 1) = cVar37;
  }
  pppplVar27 = (long ****)&local_158;
  *(char *)((long)pppplVar27 + (uVar34 & 0xffffffff)) = '\0';
  local_160 = (undefined **)CONCAT44((int)uVar34,(undefined4)local_160);
  uVar29 = (uint)(byte)local_158;
  uVar12 = uVar13;
  if ((byte)local_158 != 0) {
    pbVar31 = (byte *)((long)&local_158 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar29;
      uVar29 = (uint)*pbVar31;
      pbVar31 = pbVar31 + 1;
    } while (uVar29 != 0);
  }
  local_160 = (undefined **)CONCAT44((int)uVar34,uVar12);
  lVar38 = *(long *)(lVar30 + 0x1d8);
  pppplVar15 = (long ****)FUN_71032a9470(lVar38,*(ushort *)((long)param_3 + 0x15c));
  FUN_71032a9540((uint *)&local_d0,lVar38,(ulong)pppplVar15);
  FUN_71003a4ca0((uint *)&local_238,"spi_%s",&pppbStack_c8,pppplVar15,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  for (uVar34 = 0; *(char *)((long)&local_230 + uVar34) != '\0'; uVar34 = uVar34 + 2) {
    *(char *)((long)&local_110 + uVar34) = *(char *)((long)&local_230 + uVar34);
    if (0x3e < (int)uVar34 + 1U) {
      uVar34 = (ulong)((int)uVar34 + 1);
      break;
    }
    cVar37 = *(char *)((long)&local_230 + uVar34 + 1);
    if (cVar37 == '\0') {
      uVar34 = uVar34 + 1;
      break;
    }
    *(char *)((long)&local_110 + uVar34 + 1) = cVar37;
  }
  *(char *)((long)&local_110 + (uVar34 & 0xffffffff)) = '\0';
  uVar12 = (uint)(byte)local_110;
  local_118 = (undefined **)CONCAT44((int)uVar34,(uint)local_118);
  if ((byte)local_110 != 0) {
    pbVar31 = (byte *)((long)&local_110 + 1);
    do {
      uVar13 = uVar13 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar31;
      pbVar31 = pbVar31 + 1;
    } while (uVar12 != 0);
  }
  local_118 = (undefined **)CONCAT44((int)uVar34,uVar13);
  FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_hbg_01",pppplVar15,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  pppbVar22 = pppbStack_c8;
  FUN_7103778300(0x3f800000,(long)pppbStack_c8,(long)&local_1a0);
  local_d0 = (long ********)&PTR_FUN_710523d988;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    ppbVar16 = pppbVar22[3];
    pppbVar22[2] = &PTR_FUN_710523d9a8;
    pppbVar22[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar22);
  }
  FUN_7103776640(&local_248,(long)puVar1,(byte ****)"set_parts_bg_01",pppplVar15,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  uVar34 = local_240;
  if (*(char *)((long)param_3 + 0x24c) == '\0') {
    if ((*(char *)(param_3 + 0x2d) != '\0') && (param_3[0x3b] != param_3[0x3a])) {
      uVar36 = (ulong)*(short *)(param_3 + 0x3d);
      lVar38 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar36 != 0xffffffffffffffff) {
        uVar36 = (ulong)*(ushort *)(lVar38 + uVar36 * 2 + 0x60);
      }
      if (((uint)uVar36 <
           (uint)((int)((ulong)(*(long *)(lVar38 + 0x28) - *(long *)(lVar38 + 0x20)) >> 6) *
                 -0x33333333)) &&
         (*(char *)(*(long *)(lVar38 + 0x20) + (uVar36 & 0xffffffff) * 0x140 + 0x5e) == '\x03')) {
        if (*(char *)((long)param_3 + 0x219) == '\x01') {
          pcVar42 = "campaign_light";
        }
        else {
          pcVar42 = "campaign_dark";
        }
        goto LAB_7101db9400;
      }
    }
    pcVar42 = (char *)local_1e8;
  }
  else {
    pcVar42 = "campaign_boss";
  }
LAB_7101db9400:
  FUN_7103778300(0x3f800000,local_240,(long)pcVar42);
  FUN_7103778300(0x3f800000,local_240,0x710432a70e);
  FUN_7103778300(0x3f800000,local_240,0x71043f0fa9);
  if (*(char *)((long)param_3 + 0x24c) == '\0') {
    if ((*(char *)(param_3 + 0x2d) != '\0') && (param_3[0x3b] != param_3[0x3a])) {
      uVar36 = (ulong)*(short *)(param_3 + 0x3d);
      lVar38 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (uVar36 != 0xffffffffffffffff) {
        uVar36 = (ulong)*(ushort *)(lVar38 + uVar36 * 2 + 0x60);
      }
      if (((uint)uVar36 <
           (uint)((int)((ulong)(*(long *)(lVar38 + 0x28) - *(long *)(lVar38 + 0x20)) >> 6) *
                 -0x33333333)) &&
         (*(char *)(*(long *)(lVar38 + 0x20) + (uVar36 & 0xffffffff) * 0x140 + 0x5e) == '\x03'))
      goto LAB_7101db9648;
    }
    FUN_7102499260((uint *)&local_d0,(long)puVar2);
    FUN_71024999d0((uint *)&local_238,(long)puVar2);
    FUN_7103776910(&local_258,(long)puVar1,(long ****)"set_txt_fighter_01",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    ppppbVar28 = &pppbStack_c8;
    param_8 = &local_230;
    pppplVar15 = (long ****)0x3;
    FUN_710377a280((long)&local_258,(byte *)"mnu_spirits_challengeboard_detail_target_fighter",3);
    pppbVar22 = local_250;
    local_258 = &PTR_FUN_710523d9a8;
    local_250 = (byte ***)0x0;
    param_7 = pppplVar27;
joined_r0x007101db96f0:
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
    if (*(char *)(param_3 + 0x43) != '\0') goto LAB_7101db9490;
LAB_7101db9708:
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_name_01",pppplVar15,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    FUN_7103776910(&local_238,(long)&local_d0,(long ****)"set_txt_help",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    sVar7 = *(short *)((long)param_3 + 0x15c);
    if ((sVar7 == -1) || (1999 < sVar7)) {
LAB_7101db9794:
      if ((pppbStack_c8[1] != (byte **)0x0) &&
         (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0)) {
        pbVar31[0x58] = pbVar31[0x58] & 0xfe;
      }
    }
    else {
      lVar30 = *(long *)(lVar30 + 0x1d8);
      uVar6 = *(ushort *)(lVar30 + (long)(int)sVar7 * 2 + 0x60);
      if ((uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) *
                -0x33333333) <= (uint)uVar6) goto LAB_7101db9794;
      if (*(char *)(*(long *)(lVar30 + 0x20) + (ulong)uVar6 * 0x140 + 0x5e) == '\0') {
        pcVar42 = "attacker";
      }
      else {
        pcVar42 = "supporter";
      }
      FUN_7103778300(0x3f800000,(long)pppbStack_c8,(long)pcVar42);
      FUN_710377a120((long)&local_238,(char *)&local_110,pppplVar15,ppppbVar28,param_7,param_8,
                     param_9,param_10);
    }
LAB_7101db9834:
    uVar36 = local_230;
    local_238 = &PTR_FUN_710523d9a8;
    local_230 = 0;
    if (uVar36 != 0) {
      FUN_710392eb40(uVar36);
    }
  }
  else {
    uVar12 = FUN_7102510850(param_3[0x2e],extraout_x1,pppplVar15,ppppbVar28,param_7,param_8,param_9,
                            param_10);
    if ((uVar12 & 1) == 0) {
LAB_7101db9648:
      FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_txt_fighter_01",pppplVar15,ppppbVar28,
                     param_7,param_8,param_9,param_10);
      FUN_710377a120((long)&local_d0,(char *)pppplVar27,pppplVar15,ppppbVar28,param_7,param_8,
                     param_9,param_10);
      pppbVar22 = pppbStack_c8;
      local_d0 = (long ********)&PTR_FUN_710523d9a8;
      pppbStack_c8 = (byte ***)0x0;
      goto joined_r0x007101db96f0;
    }
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_txt_fighter_01",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    FUN_710377a120((long)&local_d0,"cam_info_piece_boss_unknown",pppplVar15,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
    if (*(char *)(param_3 + 0x43) == '\0') goto LAB_7101db9708;
LAB_7101db9490:
    uVar36 = (ulong)*(short *)((long)param_3 + 0x15c);
    lVar38 = *(long *)(lVar30 + 0x1d8);
    if (uVar36 != 0xffffffffffffffff) {
      uVar36 = (ulong)*(ushort *)(lVar38 + uVar36 * 2 + 0x60);
    }
    if (((uint)((int)((ulong)(*(long *)(lVar38 + 0x28) - *(long *)(lVar38 + 0x20)) >> 6) *
               -0x33333333) <= (uint)uVar36) ||
       (*(char *)(*(long *)(lVar38 + 0x20) + (uVar36 & 0xffffffff) * 0x140 + 0x5e) != '\x02')) {
      FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_name_02",pppplVar15,
                     ppppbVar28,param_7,param_8,param_9,param_10);
      FUN_7103776910(&local_238,(long)&local_d0,(long ****)"set_txt_help",pppplVar15,ppppbVar28,
                     param_7,param_8,param_9,param_10);
      pppbVar22 = pppbStack_c8;
      sVar7 = *(short *)((long)param_3 + 0x15c);
      if ((sVar7 == -1) || (1999 < sVar7)) {
LAB_7101db966c:
        if ((pppbStack_c8[1] != (byte **)0x0) &&
           (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0)) {
          pbVar31[0x58] = pbVar31[0x58] & 0xfe;
        }
      }
      else {
        lVar30 = *(long *)(lVar30 + 0x1d8);
        uVar6 = *(ushort *)(lVar30 + (long)(int)sVar7 * 2 + 0x60);
        if ((uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) *
                  -0x33333333) <= (uint)uVar6) goto LAB_7101db966c;
        if (*(char *)(*(long *)(lVar30 + 0x20) + (ulong)uVar6 * 0x140 + 0x5e) == '\0') {
          pcVar42 = "attacker";
        }
        else {
          pcVar42 = "supporter";
        }
        FUN_7103778300(0x3f800000,(long)pppbStack_c8,(long)pcVar42);
        FUN_710377a120((long)&local_238,(char *)&local_110,pppplVar15,ppppbVar28,param_7,param_8,
                       param_9,param_10);
      }
      FUN_7103776910(&local_258,(long)puVar1,(long ****)"set_txt_spirit_01",pppplVar15,ppppbVar28,
                     param_7,param_8,param_9,param_10);
      pppbVar44 = local_250;
      ppbVar16 = *local_250;
      if (ppbVar16 != (byte **)0x0) {
        *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
      }
      local_258 = &PTR_FUN_710523d9a8;
      local_250 = (byte ***)0x0;
      if (pppbVar44 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar44);
      }
      goto LAB_7101db9834;
    }
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_txt_spirit_01",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    FUN_710377a120((long)&local_d0,(char *)&local_110,pppplVar15,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    pppbVar22 = pppbStack_c8;
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_name_02",pppplVar15,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
  }
  pppbStack_c8 = (byte ***)0x0;
  local_d0 = (long ********)&PTR_FUN_710523d988;
  if (pppbVar22 != (byte ***)0x0) {
    pppbStack_c8 = (byte ***)0x0;
    local_d0 = (long ********)&PTR_FUN_710523d988;
    ppbVar16 = pppbVar22[3];
    pppbVar22[2] = &PTR_FUN_710523d9a8;
    pppbVar22[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar22);
  }
  local_248 = &PTR_FUN_710523d988;
  local_240 = 0;
  if (uVar34 != 0) {
    uVar36 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar36 != 0) {
      FUN_710392eb40(uVar36);
    }
    FUN_710392eb40(uVar34);
  }
  uVar6 = *(ushort *)((long)param_3 + 0x15a);
  lVar30 = *(long *)(*DAT_7105329f98 + 0x20);
  if (uVar6 != 0xffff) {
    puVar32 = *(ushort **)(lVar30 + 0x10);
    lVar38 = *(long *)(lVar30 + 0x18) - (long)puVar32;
    uVar34 = lVar38 >> 3;
    if (0 < (int)uVar34) {
      uVar36 = 0;
      do {
        if (uVar34 <= uVar36) goto LAB_7101dbbc50;
        if (*puVar32 == uVar6) {
          if (-1 < (int)uVar36) {
            uVar34 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar6);
            pppplVar15 = (long ****)0x17;
            plVar17 = FUN_710323faf0((long *)(lVar30 + 8),uVar34,(undefined **)0x17,ppppbVar28,
                                     param_7,param_8,param_9,param_10);
            goto LAB_7101db9920;
          }
          break;
        }
        uVar36 = uVar36 + 1;
        puVar32 = puVar32 + 4;
      } while ((long)uVar36 < lVar38 * 0x20000000 >> 0x20);
    }
  }
  plVar17 = (long *)(lVar30 + 0x70);
LAB_7101db9920:
  if ((*(long *)plVar17[1] == 0) || (*(char *)(param_3 + 0x43) != '\0')) {
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_00",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
  }
  else {
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_00",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    param_7 = (long ****)0x1;
    pppplVar15 = (long ****)0x0;
    ppppbVar28 = (byte ****)0x0;
    FUN_71025ae6d0((long)&local_d0,*(ushort *)((long)param_3 + 0x15a),0,0,1,param_8,param_9,param_10
                  );
    pppbVar22 = pppbStack_c8;
  }
  local_d0 = (long ********)&PTR_FUN_710523d988;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    ppbVar16 = pppbVar22[3];
    pppbVar22[2] = &PTR_FUN_710523d9a8;
    pppbVar22[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar22);
  }
  if (*(char *)(param_3 + 0x2d) == '\0') {
LAB_7101db9a38:
    if (*(char *)((long)param_3 + 0x24c) != '\0') goto LAB_7101db9b4c;
LAB_7101db9a3c:
    uVar6 = *(ushort *)((long)param_3 + 0x15c);
    lVar30 = *(long *)(*DAT_7105329f98 + 0x20);
    if (uVar6 != 0xffff) {
      puVar32 = *(ushort **)(lVar30 + 0x10);
      lVar38 = *(long *)(lVar30 + 0x18) - (long)puVar32;
      uVar34 = lVar38 >> 3;
      if (0 < (int)uVar34) {
        uVar36 = 0;
        do {
          if (uVar34 <= uVar36) {
LAB_7101dbbc50:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*puVar32 == uVar6) {
            if (-1 < (int)uVar36) {
              uVar34 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar6);
              pppplVar15 = (long ****)0x17;
              plVar17 = FUN_710323faf0((long *)(lVar30 + 8),uVar34,(undefined **)0x17,ppppbVar28,
                                       param_7,param_8,param_9,param_10);
              goto LAB_7101db9ad4;
            }
            break;
          }
          uVar36 = uVar36 + 1;
          puVar32 = puVar32 + 4;
        } while ((long)uVar36 < lVar38 * 0x20000000 >> 0x20);
      }
    }
    plVar17 = (long *)(lVar30 + 0x70);
LAB_7101db9ad4:
    if (*(long *)plVar17[1] == 0) goto LAB_7101db9b4c;
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_spirit_01",pppplVar15,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    param_7 = (long ****)0x1;
    FUN_71025ae6d0((long)&local_d0,*(ushort *)((long)param_3 + 0x15c),0,0,1,param_8,param_9,param_10
                  );
    FUN_7103778300(0x3f800000,param_3[0x1c],0x71042d6736);
    pppbVar22 = pppbStack_c8;
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  else {
    if ((*(char *)((long)param_3 + 0x24c) == '\0') && (param_3[0x3b] == param_3[0x3a]))
    goto LAB_7101db9a3c;
    uVar34 = (ulong)*(short *)(param_3 + 0x3d);
    lVar30 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar34 != 0xffffffffffffffff) {
      uVar34 = (ulong)*(ushort *)(lVar30 + uVar34 * 2 + 0x60);
    }
    if (((uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) *
               -0x33333333) <= (uint)uVar34) ||
       (*(char *)(*(long *)(lVar30 + 0x20) + (uVar34 & 0xffffffff) * 0x140 + 0x5e) != '\x03'))
    goto LAB_7101db9a38;
LAB_7101db9b4c:
    FUN_7103778300(0x3f800000,param_3[0x1c],0x71043adc7a);
  }
  ppppppppplVar26 = (long *********)(ulong)*(byte *)(param_3 + 0x23);
  ppppbVar28 = (byte ****)0x3;
  ppppppppplVar40 = (long *********)0xf1d20e57b;
  lVar30 = *(long *)(DAT_710532f730 + 8);
  plVar17 = FUN_710323f330((long *)*param_3,param_3[0x21],(ulong)ppppppppplVar26,3,param_7,param_8,
                           param_9,param_10);
  if (*(long *)plVar17[1] != 0) {
    FUN_7103776910(&local_118,(long)puVar1,(long ****)"set_rep_fighter_00",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    FUN_7103776910(&local_160,(long)puVar1,(long ****)"set_rep_fighter_00_sdw",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar22 = local_110;
    FUN_7103778b80((long)local_110,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    FUN_7103778b80((long)local_158,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    uVar12 = FUN_7103280ec0(*(long *)(lVar30 + 0x2a8),param_3[0x21],(ulong)*(byte *)(param_3 + 0x23)
                            ,ppppbVar28,param_7,param_8,param_9,param_10);
    uVar34 = 0;
    lVar38 = *(long *)(*(long *)(lVar30 + 0x2a8) + 8);
    auVar46 = FUN_710326ad60(ZEXT816(0),lVar38,uVar12,0x12091e3aee);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar34;
    auVar47 = FUN_710326ad60(auVar47 << 0x40,lVar38,uVar12,0x127e190a78);
    param_2 = auVar47._0_8_;
    ppppppppplVar26 = ppppppppplVar40;
    auVar48 = FUN_710326ad60(ZEXT816(0x3f800000),lVar38,uVar12,0xf1d20e57b);
    plVar17 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8
                                     ,param_9,param_10);
    if (plVar17 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1a8 = (undefined **)((ulong)local_1a8 & 0xffffffff00000000);
        local_d0 = (long ********)&SUB_00000020;
        ppppppppplVar26 = &local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a8);
        if (((uVar34 & 1) != 0) &&
           (plVar17 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7
                                             ,param_8,param_9,param_10), plVar17 != (long *)0x0))
        goto LAB_7101db9cb8;
      }
      plVar17 = (long *)0x0;
    }
LAB_7101db9cb8:
    plVar17[2] = 0;
    plVar17[3] = 0;
    *plVar17 = 0;
    plVar17[1] = 0;
    *plVar17 = (long)*pppbVar22;
    plVar17[1] = (long)pppbVar22[1];
    pppppppplVar45 = (long ********)CONCAT44(auVar47._0_4_,auVar46._0_4_);
    plVar17[2] = (long)local_110[2];
    plVar17[3] = (long)local_110[3];
    pppbStack_c8 = (byte ***)0x0;
    local_d0 = pppppppplVar45;
    FUN_7103779770(auVar48._0_4_,(long)plVar17,&local_d0);
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    puVar18 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,param_9
                             ,param_10);
    if (puVar18 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1a8 = (undefined **)((ulong)local_1a8 & 0xffffffff00000000);
        local_d0 = (long ********)&SUB_00000020;
        ppppppppplVar26 = &local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1a8);
        if (((uVar34 & 1) != 0) &&
           (puVar18 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8
                                     ,param_9,param_10), puVar18 != (undefined8 *)0x0))
        goto LAB_7101db9d78;
      }
      puVar18 = (undefined8 *)0x0;
    }
LAB_7101db9d78:
    ppplVar23 = local_158;
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *puVar18 = *local_158;
    puVar18[1] = local_158[1];
    puVar18[2] = local_158[2];
    puVar18[3] = local_158[3];
    pppbStack_c8 = (byte ***)0x0;
    local_d0 = pppppppplVar45;
    FUN_7103779770(auVar48._0_4_,(long)puVar18,&local_d0);
    if (puVar18 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
    local_160 = &PTR_FUN_710523d9a8;
    local_158 = (long ***)0x0;
    if (ppplVar23 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar23);
    }
    pppbVar22 = local_110;
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                           param_10);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118 = (undefined **)((ulong)local_118 & 0xffffffff00000000);
      local_d0 = (long ********)&SUB_00000020;
      ppppppppplVar26 = &local_d0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
      if (((uVar34 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,
                                   param_9,param_10), puVar18 != (undefined8 *)0x0))
      goto LAB_7101db9e48;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_7101db9e48:
  puVar18[2] = 0;
  puVar18[3] = 0;
  *puVar18 = 0;
  puVar18[1] = 0;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                           param_10);
  uVar25 = extraout_x1_00;
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_118 = (undefined **)((ulong)local_118 & 0xffffffff00000000);
      local_d0 = (long ********)&SUB_00000020;
      ppppppppplVar26 = &local_d0;
      auVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
      uVar25 = auVar47._8_8_;
      if (((auVar47._0_8_ & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,
                                   param_9,param_10), uVar25 = extraout_x1_01,
         puVar19 != (undefined8 *)0x0)) goto LAB_7101db9eac;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_7101db9eac:
  puVar19[2] = 0;
  puVar19[3] = 0;
  *puVar19 = 0;
  puVar19[1] = 0;
  if (*(char *)((long)param_3 + 0x24c) == '\0') {
    puVar41 = (undefined1 *)param_3[0x2a];
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_rep_fighter_01",ppppppppplVar26,ppppbVar28
                   ,param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    pppbStack_c8 = (byte ***)0x0;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_rep_fighter_01_sdw",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar44 = pppbStack_c8;
    pppbStack_c8 = (byte ***)0x0;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar19);
    }
    uVar12 = (uint)*(byte *)(param_3 + 0x2b);
  }
  else {
    puVar41 = (undefined1 *)param_3[0x4a];
    uVar12 = FUN_7102510850(param_3[0x2e],uVar25,(long ****)ppppppppplVar26,ppppbVar28,param_7,
                            param_8,param_9,param_10);
    if ((uVar12 & 1) == 0) {
      pcVar42 = "boss_art";
    }
    else {
      pcVar42 = "boss_silhouette";
    }
    FUN_7103778300(0x3f800000,param_3[0x1c],(long)pcVar42);
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_rep_boss",ppppppppplVar26,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    pppbStack_c8 = (byte ***)0x0;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_rep_boss_sdw",ppppppppplVar26,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    pppbVar44 = pppbStack_c8;
    pppbStack_c8 = (byte ***)0x0;
    if (puVar19 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar19);
    }
    uVar12 = 0;
  }
  pppbStack_c8 = (byte ***)0x0;
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  ppppbVar28 = (byte ****)0x3;
  ppppppppplVar26 = (long *********)(ulong)uVar12;
  plVar17 = FUN_710323f330((long *)*param_3,(ulong)puVar41,(ulong)ppppppppplVar26,3,param_7,param_8,
                           param_9,param_10);
  if (*(long *)plVar17[1] != 0) {
    FUN_7103778b80((long)pppbVar22,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    FUN_7103778b80((long)pppbVar44,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    uVar13 = FUN_7103280ec0(*(long *)(lVar30 + 0x2a8),(ulong)puVar41,(ulong)uVar12,ppppbVar28,
                            param_7,param_8,param_9,param_10);
    uVar34 = 0;
    lVar38 = *(long *)(*(long *)(lVar30 + 0x2a8) + 8);
    auVar47 = FUN_710326ad60(ZEXT816(0),lVar38,uVar13,0x12091e3aee);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar34;
    auVar46 = FUN_710326ad60(auVar46 << 0x40,lVar38,uVar13,0x127e190a78);
    auVar48 = FUN_710326ad60(ZEXT816(0x3f800000),lVar38,uVar13,0xf1d20e57b);
    puVar18 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar40,ppppbVar28,param_7,param_8,param_9
                             ,param_10);
    if (puVar18 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_118 = (undefined **)((ulong)local_118 & 0xffffffff00000000);
        local_d0 = (long ********)&SUB_00000020;
        ppppppppplVar40 = &local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
        if (((uVar34 & 1) != 0) &&
           (puVar18 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar40,ppppbVar28,param_7,param_8
                                     ,param_9,param_10), puVar18 != (undefined8 *)0x0))
        goto LAB_7101dba0dc;
      }
      puVar18 = (undefined8 *)0x0;
    }
LAB_7101dba0dc:
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    local_2b0 = auVar47._0_4_;
    *puVar18 = *pppbVar22;
    local_2d0 = auVar46._0_4_;
    puVar18[1] = pppbVar22[1];
    puVar18[2] = pppbVar22[2];
    pppppppplVar45 = (long ********)CONCAT44(local_2d0,local_2b0);
    puVar18[3] = pppbVar22[3];
    pppbStack_c8 = (byte ***)0x0;
    param_2 = pppppppplVar45;
    local_d0 = pppppppplVar45;
    FUN_7103779770(auVar48._0_4_,(long)puVar18,&local_d0);
    ppppppppplVar26 = ppppppppplVar40;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
      ppppppppplVar26 = ppppppppplVar40;
    }
    puVar18 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8,param_9
                             ,param_10);
    if (puVar18 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_118 = (undefined **)((ulong)local_118 & 0xffffffff00000000);
        local_d0 = (long ********)&SUB_00000020;
        ppppppppplVar26 = &local_d0;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
        if (((uVar34 & 1) != 0) &&
           (puVar18 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar28,param_7,param_8
                                     ,param_9,param_10), puVar18 != (undefined8 *)0x0))
        goto LAB_7101dba19c;
      }
      puVar18 = (undefined8 *)0x0;
    }
LAB_7101dba19c:
    puVar18[2] = 0;
    puVar18[3] = 0;
    *puVar18 = 0;
    puVar18[1] = 0;
    *puVar18 = *pppbVar44;
    puVar18[1] = pppbVar44[1];
    puVar18[2] = pppbVar44[2];
    puVar18[3] = pppbVar44[3];
    pppbStack_c8 = (byte ***)0x0;
    local_d0 = pppppppplVar45;
    FUN_7103779770(auVar48._0_4_,(long)puVar18,&local_d0);
    if (puVar18 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar18);
    }
  }
  if ((*(char *)(param_3 + 0x43) != '\0') && (*(char *)((long)param_3 + 0x24c) == '\0')) {
    if (((ulong)puVar41 & 0xffffffffff) == 0x1112944904) {
      puVar41 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x1c2d9aa545);
    }
    uVar13 = FUN_7103280ec0(*(long *)(lVar30 + 0x2a8),(ulong)puVar41,(ulong)uVar12,ppppbVar28,
                            param_7,param_8,param_9,param_10);
    lVar38 = *(long *)(lVar30 + 0x2a8);
    ppppppppplVar26 = (long *********)0x135ac2027a;
    ppppbVar28 = (byte ****)0x0;
    uVar13 = FUN_710326a6e0(*(long *)(lVar38 + 8),uVar13,0x135ac2027a,0);
    uVar29 = 0;
    if ((uVar13 & 1) != 0) {
      uVar13 = FUN_7103280ec0(lVar38,(ulong)puVar41,(ulong)uVar12,ppppbVar28,param_7,param_8,param_9
                              ,param_10);
      ppppppppplVar26 = (long *********)0x11190eeb67;
      ppppbVar28 = (byte ****)0x0;
      uVar29 = FUN_710326aa20(*(long *)(*(long *)(lVar30 + 0x2a8) + 8),uVar13,0x11190eeb67,0);
    }
    FUN_71003a4ca0((uint *)&local_d0,"redeye_%02d",(ulong)uVar29,ppppppppplVar26,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    FUN_7103778300(0x3f800000,param_3[0x1c],(long)&pppbStack_c8);
    if (0 < (int)uVar29) {
      uVar13 = 0;
      do {
        ppppbVar28 = (byte ****)(ulong)uVar13;
        param_7 = (long ****)0x0;
        auVar47 = FUN_7103281470(lVar30 + 0x2a0,(ulong)puVar41,(ulong)uVar12,ppppbVar28,0,param_8,
                                 param_9,param_10);
        ppppppppplVar26 = (long *********)(ulong)uVar13;
        pppppppplVar45 = param_2;
        FUN_7103776910(&local_118,(long)puVar1,(long ****)"redeye_%02d",ppppppppplVar26,ppppbVar28,
                       param_7,param_8,param_9,param_10);
        pppbVar9 = local_110;
        ppbVar16 = *local_110;
        if (ppbVar16 != (byte **)0x0) {
          *(int *)(ppbVar16 + 6) = auVar47._0_4_;
          *(int *)((long)ppbVar16 + 0x34) = (int)param_2;
          *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) | 0x10;
        }
        local_118 = &PTR_FUN_710523d9a8;
        local_110 = (byte ***)0x0;
        if (pppbVar9 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar9);
        }
        uVar13 = uVar13 + 1;
        param_2 = pppppppplVar45;
      } while (uVar29 != uVar13);
    }
  }
  if (pppbVar44 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar44);
  }
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  sVar7 = *(short *)((long)param_3 + 0x15a);
  uVar12 = 4;
  if (sVar7 == -1) {
    cVar37 = *(char *)(param_3 + 0x2d);
  }
  else {
    if (sVar7 < 2000) {
      lVar30 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar6 = *(ushort *)(lVar30 + (long)(int)sVar7 * 2 + 0x60);
      uVar34 = (ulong)uVar6;
      uVar36 = (*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar36 <= (uint)uVar6) {
        uVar12 = 4;
        cVar37 = *(char *)(param_3 + 0x2d);
        goto joined_r0x007101dba424;
      }
      puVar3 = (undefined2 *)(*(long *)(lVar30 + 0x20) + uVar34 * 0x140);
      if (uVar36 < uVar34 || uVar36 - uVar34 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      uVar12 = (uint)*(byte *)(puVar3 + 0x36);
    }
    cVar37 = *(char *)(param_3 + 0x2d);
  }
joined_r0x007101dba424:
  if (cVar37 != '\0') {
    if (*(char *)((long)param_3 + 0x24c) == '\0') {
      lVar30 = param_3[0x3a];
      lVar38 = param_3[0x3b];
      if (lVar38 == lVar30) goto LAB_7101dba464;
    }
    else {
      lVar30 = param_3[0x3a];
      lVar38 = param_3[0x3b];
    }
    uVar13 = (uint)((ulong)(lVar38 - lVar30) >> 3);
    if (uVar13 != 0) {
      uVar29 = 0;
      do {
        lVar38 = *(long *)(lVar30 + (ulong)uVar29 * 8);
        if (*(char *)(lVar38 + 0x10) == '\x01') {
          cVar37 = *(char *)(lVar38 + 0x48);
          goto LAB_7101dba468;
        }
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar13);
    }
  }
LAB_7101dba464:
  cVar37 = '\0';
LAB_7101dba468:
  uVar34 = param_3[0x22];
  ppppppppplVar40 = (long *********)(ulong)*(byte *)((long)param_3 + 0x119);
  FUN_7103776640(&local_1a8,(long)puVar1,(byte ****)"set_parts_player_00",ppppppppplVar26,ppppbVar28
                 ,param_7,param_8,param_9,param_10);
  FUN_7103776910(&local_d0,(long)&local_1a8,(long ****)"set_txt_num",ppppppppplVar26,ppppbVar28,
                 param_7,param_8,param_9,param_10);
  pppbVar22 = pppbStack_c8;
  ppbVar16 = *pppbStack_c8;
  if (ppbVar16 != (byte **)0x0) {
    *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
  }
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  FUN_71003a4ca0((uint *)&local_d0,"cmn_%dp",1,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                 param_10);
  FUN_7103776910(&local_118,(long)&local_1a8,(long ****)"set_txt_player",ppppppppplVar26,ppppbVar28,
                 param_7,param_8,param_9,param_10);
  FUN_710377a120((long)&local_118,(char *)&pppbStack_c8,ppppppppplVar26,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  pppbVar22 = local_110;
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  uVar39 = (undefined1)(0x20301 >> (ulong)((uVar12 - 1 & 3) << 3));
  if (2 < uVar12 - 1) {
    uVar39 = 0;
  }
  pppplVar27 = (long ****)0x0;
  FUN_710339dde0((uint *)&local_118,uVar39,'\0');
  ppplVar23 = local_1a0;
  if (uVar12 == 4) {
    FUN_7103778300(0x3f800000,(long)local_1a0,0x71042b4792);
LAB_7101dba54c:
    FUN_7103778300(0x3f800000,(long)ppplVar23,0x71043ab85a);
  }
  else {
    FUN_7103778300(0x3f800000,(long)local_1a0,(long)&local_110);
    if (uVar12 == 3) {
      uVar12 = (uint)(cVar37 == '\x01');
      if (cVar37 != '\x02') goto LAB_7101dba730;
LAB_7101dbb038:
      uVar12 = 0xffffffff;
    }
    else {
      if (uVar12 == 2) {
        uVar12 = (uint)(cVar37 == '\x03');
        if (cVar37 == '\x01') goto LAB_7101dbb038;
      }
      else {
        if (uVar12 != 1) goto LAB_7101dba54c;
        uVar12 = (uint)(cVar37 == '\x02');
        if (cVar37 == '\x03') goto LAB_7101dbb038;
      }
LAB_7101dba730:
      if (uVar12 == 0) goto LAB_7101dba54c;
    }
    FUN_7103776290(&local_160,extraout_x1_02,pppplVar27,ppppbVar28,param_7,param_8,param_9,param_10)
    ;
    *local_158 = *ppplVar23;
    local_158[1] = ppplVar23[1];
    if (local_158 != ppplVar23) {
      *local_158[3] = *ppplVar23[3];
      local_158[3][1] = ppplVar23[3][1];
      local_158[3][2] = ppplVar23[3][2];
      local_158[3][3] = ppplVar23[3][3];
    }
    local_150 = 1;
    local_14c = CONCAT11(1,0 < (int)uVar12);
    puVar18 = (undefined8 *)param_3[0x5d];
    if (puVar18 == (undefined8 *)param_3[0x5e]) {
      FUN_7101dbbf10(param_3 + 0x5c,&local_160,pppplVar27,ppppbVar28,param_7,param_8,param_9,
                     param_10);
    }
    else {
      FUN_7103776390(puVar18,&local_160,pppplVar27,ppppbVar28,param_7,param_8,param_9,param_10);
      *(undefined2 *)((long)puVar18 + 0x14) = local_14c;
      *(undefined4 *)(puVar18 + 2) = local_150;
      param_3[0x5d] = param_3[0x5d] + 0x18;
    }
    ppplVar8 = local_158;
    local_160 = &PTR_FUN_710523d988;
    local_158 = (long ***)0x0;
    if (ppplVar8 != (long ***)0x0) {
      pplVar20 = ppplVar8[3];
      ppplVar8[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar8[3] = (long **)0x0;
      if (pplVar20 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar20);
      }
      FUN_710392eb40((ulong)ppplVar8);
    }
  }
  ppppbVar28 = (byte ****)0x2;
  plVar17 = FUN_710323f330((long *)*param_3,uVar34,(ulong)ppppppppplVar40,2,param_7,param_8,param_9,
                           param_10);
  FUN_7103776910(&local_160,(long)&local_1a8,(long ****)"set_rep_fighter",ppppppppplVar40,ppppbVar28
                 ,param_7,param_8,param_9,param_10);
  ppplVar8 = local_158;
  FUN_7103778b80((long)local_158,(long)plVar17,ppppppppplVar40,ppppbVar28,param_7,param_8,param_9,
                 param_10);
  local_160 = &PTR_FUN_710523d9a8;
  local_158 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar8);
  }
  FUN_7103778300(0x3f800000,(long)ppplVar23,0x710425fa89);
  local_1a8 = &PTR_FUN_710523d988;
  local_1a0 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    pplVar20 = ppplVar23[3];
    ppplVar23[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar23[3] = (long **)0x0;
    if (pplVar20 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar20);
    }
    FUN_710392eb40((ulong)ppplVar23);
  }
  uVar34 = (ulong)(param_3[0x25] - param_3[0x24]) >> 3 & 0xffffffff;
  uVar25 = 0;
  FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_p_0%d",0,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  pppbVar44 = pppbStack_c8;
  FUN_7103778300(0x3f800000,(long)pppbStack_c8,0x71042b4792);
  FUN_7103778300(0x3f800000,(long)pppbVar44,0x71043ab85a);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num",uVar25,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  pppbVar22 = local_110;
  ppbVar16 = *local_110;
  if (ppbVar16 != (byte **)0x0) {
    *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  if (uVar34 == 0) {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710432a66a);
  }
  else {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710425fa89);
    if ((ulong *)param_3[0x25] == (ulong *)param_3[0x24]) goto LAB_7101dbbc54;
    if ((byte *)param_3[0x28] == (byte *)param_3[0x27]) goto LAB_7101dbbc5c;
    ppppbVar28 = (byte ****)0x2;
    ppppppppplVar26 = (long *********)(ulong)*(byte *)param_3[0x27];
    plVar17 = FUN_710323f330((long *)*param_3,*(ulong *)param_3[0x24],(ulong)ppppppppplVar26,2,
                             param_7,param_8,param_9,param_10);
    FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_rep_fighter",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar22 = local_110;
    FUN_7103778b80((long)local_110,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  local_d0 = (long ********)&PTR_FUN_710523d988;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar44 != (byte ***)0x0) {
    ppbVar16 = pppbVar44[3];
    pppbVar44[2] = &PTR_FUN_710523d9a8;
    pppbVar44[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar44);
  }
  uVar25 = 1;
  FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_p_0%d",1,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  pppbVar44 = pppbStack_c8;
  FUN_7103778300(0x3f800000,(long)pppbStack_c8,0x71042b4792);
  FUN_7103778300(0x3f800000,(long)pppbVar44,0x71043ab85a);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num",uVar25,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  pppbVar22 = local_110;
  ppbVar16 = *local_110;
  if (ppbVar16 != (byte **)0x0) {
    *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  if (uVar34 < 2) {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710432a66a);
  }
  else {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710425fa89);
    if ((ulong)((long)(param_3[0x25] - param_3[0x24]) >> 3) < 2) goto LAB_7101dbbc54;
    if ((ulong)(param_3[0x28] - param_3[0x27]) < 2) goto LAB_7101dbbc5c;
    ppppbVar28 = (byte ****)0x2;
    ppppppppplVar26 = (long *********)(ulong)*(byte *)(param_3[0x27] + 1);
    plVar17 = FUN_710323f330((long *)*param_3,*(ulong *)(param_3[0x24] + 8),(ulong)ppppppppplVar26,2
                             ,param_7,param_8,param_9,param_10);
    FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_rep_fighter",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar22 = local_110;
    FUN_7103778b80((long)local_110,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  local_d0 = (long ********)&PTR_FUN_710523d988;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar44 != (byte ***)0x0) {
    ppbVar16 = pppbVar44[3];
    pppbVar44[2] = &PTR_FUN_710523d9a8;
    pppbVar44[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar44);
  }
  uVar25 = 2;
  FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_p_0%d",2,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  pppbVar44 = pppbStack_c8;
  FUN_7103778300(0x3f800000,(long)pppbStack_c8,0x71042b4792);
  FUN_7103778300(0x3f800000,(long)pppbVar44,0x71043ab85a);
  FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_txt_num",uVar25,ppppbVar28,param_7,
                 param_8,param_9,param_10);
  pppbVar22 = local_110;
  ppbVar16 = *local_110;
  if (ppbVar16 != (byte **)0x0) {
    *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
  }
  local_118 = &PTR_FUN_710523d9a8;
  local_110 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  if (uVar34 < 3) {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710432a66a);
  }
  else {
    FUN_7103778300(0x3f800000,(long)pppbVar44,0x710425fa89);
    if ((ulong)((long)(param_3[0x25] - param_3[0x24]) >> 3) < 3) {
LAB_7101dbbc54:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if ((ulong)(param_3[0x28] - param_3[0x27]) < 3) {
LAB_7101dbbc5c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar28 = (byte ****)0x2;
    ppppppppplVar26 = (long *********)(ulong)*(byte *)(param_3[0x27] + 2);
    plVar17 = FUN_710323f330((long *)*param_3,*(ulong *)(param_3[0x24] + 0x10),
                             (ulong)ppppppppplVar26,2,param_7,param_8,param_9,param_10);
    FUN_7103776910(&local_118,(long)&local_d0,(long ****)"set_rep_fighter",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    pppbVar22 = local_110;
    FUN_7103778b80((long)local_110,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                   param_10);
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  local_d0 = (long ********)&PTR_FUN_710523d988;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar44 != (byte ***)0x0) {
    ppbVar16 = pppbVar44[3];
    pppbVar44[2] = &PTR_FUN_710523d9a8;
    pppbVar44[3] = (byte **)0x0;
    if (ppbVar16 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar16);
    }
    FUN_710392eb40((ulong)pppbVar44);
  }
  lVar30 = *(long *)(DAT_710532f730 + 8);
  sVar7 = *(short *)((long)param_3 + 0x15a);
  cVar37 = '\0';
  if ((sVar7 != -1) && (sVar7 < 2000)) {
    lVar38 = *(long *)(lVar30 + 0x1d8);
    uVar6 = *(ushort *)(lVar38 + (long)(int)sVar7 * 2 + 0x60);
    uVar34 = (ulong)uVar6;
    uVar36 = (*(long *)(lVar38 + 0x28) - *(long *)(lVar38 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar6 < (uint)uVar36) {
      puVar3 = (undefined2 *)(*(long *)(lVar38 + 0x20) + uVar34 * 0x140);
      if (uVar36 < uVar34 || uVar36 - uVar34 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      cVar37 = *(char *)(puVar3 + 0x36);
    }
    else {
      cVar37 = '\0';
    }
  }
  pcVar42 = (char *)param_3[0x57];
  if (((char *)param_3[0x58] == pcVar42) || (*pcVar42 != '\x01')) {
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",0,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",1,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",2,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",3,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",4,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",5,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",6,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",7,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",8,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",9,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
    }
    ppppppppplVar26 = (long *********)0xa;
    FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",10,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      goto LAB_7101dbb510;
    }
  }
  else {
    uVar25 = 0;
    FUN_7103776640(&local_118,(long)puVar1,(byte ****)"set_parts_cp_%02d",0,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar22 = local_110;
    if ((local_110[1] != (byte **)0x0) && (pbVar31 = local_110[1][3], pbVar31 != (byte *)0x0)) {
      pbVar31[0x58] = pbVar31[0x58] | 1;
    }
    FUN_7103776910(&local_d0,(long)&local_118,(long ****)"set_txt_player",uVar25,ppppbVar28,param_7,
                   param_8,param_9,param_10);
    pppbVar44 = pppbStack_c8;
    ppbVar16 = *pppbStack_c8;
    if (ppbVar16 != (byte **)0x0) {
      *(byte *)(ppbVar16 + 0xb) = *(byte *)(ppbVar16 + 0xb) & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar44 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar44);
    }
    uVar34 = *(ulong *)(pcVar42 + 8);
    bVar43 = pcVar42[0x10];
    uVar13 = FUN_71032638e0(*(long *)(lVar30 + 0x168),uVar34);
    uVar12 = 0;
    if ((uVar13 & 1) == 0) {
      uVar12 = (uint)bVar43;
    }
    FUN_7103778300(0x3f800000,(long)pppbVar22,0x710425fa89);
    plVar17 = (long *)*param_3;
    ppppppppplVar26 = (long *********)0x2;
    local_d0 = (long ********)FUN_7103238a70(uVar34,(ulong)uVar12,2);
    if (((ulong)local_d0 & 0xffffffffff) != 0) {
      lVar38 = *plVar17;
      ppppppppplVar26 = (long *********)(long)*(int *)(lVar38 + 0x70);
      ppppbVar28 = (byte ****)(ulong)*(uint *)(lVar38 + 0x68);
      FUN_710323c4e0(lVar38,(ulong *)&local_d0,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                     param_10);
    }
    FUN_7103776910(&local_d0,(long)&local_118,(long ****)"set_rep_fighter",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    ppppbVar28 = (byte ****)0x2;
    ppppppppplVar26 = (long *********)(ulong)uVar12;
    plVar17 = FUN_710323f330((long *)*param_3,uVar34,(ulong)ppppppppplVar26,2,param_7,param_8,
                             param_9,param_10);
    pppbVar44 = pppbStack_c8;
    FUN_7103778b80((long)pppbStack_c8,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,
                   param_9,param_10);
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar44 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar44);
    }
    uVar39 = (undefined1)(0x20301 >> (ulong)(((byte)pcVar42[0x12] - 1 & 3) << 3));
    if (2 < (byte)pcVar42[0x12] - 1) {
      uVar39 = 0;
    }
    FUN_7103776910(&local_d0,(long)&local_118,(long ****)"set_txt_power",ppppppppplVar26,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    FUN_710377a280((long)&local_d0,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
    pppbVar44 = pppbStack_c8;
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar44 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar44);
    }
    cVar4 = pcVar42[0x12];
    if (cVar4 == '\x03') {
      uVar12 = (uint)(cVar37 == '\x01');
      bVar10 = cVar37 == '\x02';
LAB_7101dbb178:
      if (bVar10) {
        uVar12 = 0xffffffff;
      }
    }
    else {
      if (cVar4 == '\x02') {
        uVar12 = (uint)(cVar37 == '\x03');
        bVar10 = cVar37 == '\x01';
        goto LAB_7101dbb178;
      }
      if (cVar4 == '\x01') {
        uVar12 = (uint)(cVar37 == '\x02');
        bVar10 = cVar37 == '\x03';
        goto LAB_7101dbb178;
      }
      uVar12 = 0;
    }
    pppplVar27 = (long ****)(ulong)(byte)pcVar42[0x11];
    ppppbVar28 = (byte ****)(ulong)uVar12;
    param_7 = (long ****)0x0;
    FUN_71025b12c0((long)&local_118,uVar39,(uint)(byte)pcVar42[0x11],ppppbVar28,0,param_8,param_9,
                   param_10);
    if (uVar12 != 0) {
      FUN_7103776290(&local_d0,extraout_x1_03,pppplVar27,ppppbVar28,param_7,param_8,param_9,param_10
                    );
      *pppbStack_c8 = *pppbVar22;
      pppbStack_c8[1] = pppbVar22[1];
      if (pppbStack_c8 != pppbVar22) {
        *pppbStack_c8[3] = *pppbVar22[3];
        pppbStack_c8[3][1] = pppbVar22[3][1];
        pppbStack_c8[3][2] = pppbVar22[3][2];
        pppbStack_c8[3][3] = pppbVar22[3][3];
      }
      local_bc = (ushort)(0 < (int)uVar12);
      local_c0 = 1;
      puVar18 = (undefined8 *)param_3[0x5d];
      if (puVar18 == (undefined8 *)param_3[0x5e]) {
        FUN_7101dbbf10(param_3 + 0x5c,&local_d0,pppplVar27,ppppbVar28,param_7,param_8,param_9,
                       param_10);
      }
      else {
        FUN_7103776390(puVar18,&local_d0,pppplVar27,ppppbVar28,param_7,param_8,param_9,param_10);
        *(ushort *)((long)puVar18 + 0x14) = local_bc;
        *(undefined4 *)(puVar18 + 2) = local_c0;
        param_3[0x5d] = param_3[0x5d] + 0x18;
      }
      pppbVar44 = pppbStack_c8;
      local_d0 = (long ********)&PTR_FUN_710523d988;
      pppbStack_c8 = (byte ***)0x0;
      if (pppbVar44 != (byte ***)0x0) {
        ppbVar16 = pppbVar44[3];
        pppbVar44[2] = &PTR_FUN_710523d9a8;
        pppbVar44[3] = (byte **)0x0;
        if (ppbVar16 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar16);
        }
        FUN_710392eb40((ulong)pppbVar44);
      }
    }
    lVar38 = 0;
    uVar34 = 1;
    do {
      ppppppppplVar26 = (long *********)(uVar34 & 0xffffffff);
      FUN_7103776640(&local_d0,(long)puVar1,(byte ****)"set_parts_cp_%02d",ppppppppplVar26,
                     ppppbVar28,param_7,param_8,param_9,param_10);
      pppbVar44 = pppbStack_c8;
      lVar35 = param_3[0x57];
      uVar36 = (param_3[0x58] - lVar35 >> 3) * -0x5555555555555555;
      if (uVar36 < uVar34 || uVar36 - uVar34 == 0) {
        if ((pppbStack_c8[1] != (byte **)0x0) &&
           (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0)) {
          pbVar31[0x58] = pbVar31[0x58] & 0xfe;
        }
      }
      else {
        if ((pppbStack_c8[1] != (byte **)0x0) &&
           (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0)) {
          pbVar31[0x58] = pbVar31[0x58] | 1;
        }
        lVar35 = lVar35 + lVar38;
        uVar36 = *(ulong *)(lVar35 + 0x20);
        bVar43 = *(byte *)(lVar35 + 0x28);
        uVar13 = FUN_71032638e0(*(long *)(lVar30 + 0x168),uVar36);
        plVar17 = (long *)*param_3;
        uVar12 = 0;
        if ((uVar13 & 1) == 0) {
          uVar12 = (uint)bVar43;
        }
        ppppppppplVar26 = (long *********)0x2;
        local_160 = (undefined **)FUN_7103238a70(uVar36,(ulong)uVar12,2);
        if (((ulong)local_160 & 0xffffffffff) != 0) {
          lVar21 = *plVar17;
          ppppppppplVar26 = (long *********)(long)*(int *)(lVar21 + 0x70);
          ppppbVar28 = (byte ****)(ulong)*(uint *)(lVar21 + 0x68);
          FUN_710323c4e0(lVar21,&local_160,ppppppppplVar26,ppppbVar28,param_7,param_8,param_9,
                         param_10);
        }
        FUN_7103776910(&local_160,(long)&local_d0,(long ****)"set_rep_fighter",ppppppppplVar26,
                       ppppbVar28,param_7,param_8,param_9,param_10);
        ppppbVar28 = (byte ****)0x2;
        ppppppppplVar26 = (long *********)(ulong)uVar12;
        plVar17 = FUN_710323f330((long *)*param_3,*(ulong *)(lVar35 + 0x20),(ulong)ppppppppplVar26,2
                                 ,param_7,param_8,param_9,param_10);
        ppplVar23 = local_158;
        FUN_7103778b80((long)local_158,(long)plVar17,ppppppppplVar26,ppppbVar28,param_7,param_8,
                       param_9,param_10);
        local_160 = &PTR_FUN_710523d9a8;
        local_158 = (long ***)0x0;
        if (ppplVar23 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar23);
        }
        FUN_7103778300(0x3f800000,(long)pppbVar44,0x71042b4792);
        if (*(byte *)(lVar35 + 0x29) < 2) {
          FUN_7103776910(&local_160,(long)&local_d0,(long ****)"set_txt_num",ppppppppplVar26,
                         ppppbVar28,param_7,param_8,param_9,param_10);
          ppplVar23 = local_158;
          pplVar20 = *local_158;
          if (pplVar20 != (long **)0x0) {
            *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) & 0xfe;
          }
          local_160 = &PTR_FUN_710523d9a8;
          local_158 = (long ***)0x0;
          if (ppplVar23 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar23);
          }
        }
        else {
          FUN_7103776910(&local_160,(long)&local_d0,(long ****)"set_txt_num",ppppppppplVar26,
                         ppppbVar28,param_7,param_8,param_9,param_10);
          ppplVar23 = local_158;
          pplVar20 = *local_158;
          if (pplVar20 != (long **)0x0) {
            *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) | 1;
          }
          local_160 = &PTR_FUN_710523d9a8;
          local_158 = (long ***)0x0;
          if (ppplVar23 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar23);
          }
          FUN_7103776910(&local_160,(long)&local_d0,(long ****)"set_txt_num",ppppppppplVar26,
                         ppppbVar28,param_7,param_8,param_9,param_10);
          ppppbVar28 = (byte ****)(ulong)*(byte *)(lVar35 + 0x29);
          ppppppppplVar26 = (long *********)0x1;
          FUN_710377a280((long)&local_160,(byte *)"mnu_spirits_challengeboard_match_enemy_n",1);
          ppplVar23 = local_158;
          local_160 = &PTR_FUN_710523d9a8;
          local_158 = (long ***)0x0;
          if (ppplVar23 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar23);
          }
        }
      }
      pppbStack_c8 = (byte ***)0x0;
      local_d0 = (long ********)&PTR_FUN_710523d988;
      if (pppbVar44 != (byte ***)0x0) {
        pppbStack_c8 = (byte ***)0x0;
        local_d0 = (long ********)&PTR_FUN_710523d988;
        ppbVar16 = pppbVar44[3];
        pppbVar44[2] = &PTR_FUN_710523d9a8;
        pppbVar44[3] = (byte **)0x0;
        if (ppbVar16 != (byte **)0x0) {
          FUN_710392eb40((ulong)ppbVar16);
        }
        FUN_710392eb40((ulong)pppbVar44);
      }
      lVar38 = lVar38 + 0x18;
      uVar34 = uVar34 + 1;
    } while (lVar38 != 0xf0);
    local_118 = &PTR_FUN_710523d988;
    local_110 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
LAB_7101dbb510:
      FUN_710392eb40((ulong)pppbVar22);
    }
  }
  FUN_7103776640(&local_160,(long)puVar1,(byte ****)"set_parts_rule_02",ppppppppplVar26,ppppbVar28,
                 param_7,param_8,param_9,param_10);
  ppplVar23 = local_158;
  switch(*(undefined1 *)((long)param_3 + 0x179)) {
  case 0:
    FUN_7103776640(&local_d0,(long)&local_160,(byte ****)&DAT_710437c9f7,ppppppppplVar26,ppppbVar28,
                   param_7,param_8,param_9,param_10);
    pppbVar22 = pppbStack_c8;
    if ((pppbStack_c8[1] != (byte **)0x0) && (pbVar31 = pppbStack_c8[1][3], pbVar31 != (byte *)0x0))
    {
      pbVar31[0x58] = pbVar31[0x58] & 0xfe;
    }
    local_d0 = (long ********)&PTR_FUN_710523d988;
    pppbStack_c8 = (byte ***)0x0;
    ppplVar23 = local_158;
    if (pppbVar22 != (byte ***)0x0) {
      ppbVar16 = pppbVar22[3];
      pppbVar22[2] = &PTR_FUN_710523d9a8;
      pppbVar22[3] = (byte **)0x0;
      if (ppbVar16 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar16);
      }
      FUN_710392eb40((ulong)pppbVar22);
      ppplVar23 = local_158;
    }
    goto LAB_7101dbb5fc;
  case 1:
    pcVar42 = "icon_stock";
    break;
  case 2:
    pcVar42 = "icon_hp";
    break;
  case 3:
    pcVar42 = "icon_stock";
    goto LAB_7101dbb5dc;
  case 4:
    pcVar42 = "icon_hp";
LAB_7101dbb5dc:
    FUN_7103778300(0x3f800000,(long)local_158,(long)pcVar42);
LAB_7101dbb5fc:
    FUN_7103778300(0x3f800000,(long)ppplVar23,0x710425f91d);
    uVar6 = *(ushort *)((long)param_3 + 0x17a);
    uVar12 = (uint)uVar6 + (uVar6 / 0x3c) * -0x3c;
    FUN_7103776910(&local_d0,(long)&local_160,(long ****)"set_txt_limit_time",ppppppppplVar26,
                   ppppbVar28,param_7,param_8,param_9,param_10);
    uVar34 = (ulong)uVar12 & 0xffff;
    if (0x3e6 < (uVar12 & 0xffff)) {
      uVar34 = 999;
    }
    ppppbVar28 = (byte ****)(uVar34 + (uVar6 / 0x3c + (uVar6 / 0xe10) * -0x3c) * 1000);
    FUN_710377a280((long)&local_d0,(byte *)"mnu_spirits_challengeboard_detail_time_01",1);
    pppbVar22 = pppbStack_c8;
    local_d0 = (long ********)&PTR_FUN_710523d9a8;
    pppbStack_c8 = (byte ***)0x0;
    if (pppbVar22 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar22);
    }
  default:
    goto switchD_7101dbb544_default;
  }
  FUN_7103778300(0x3f800000,(long)local_158,(long)pcVar42);
  FUN_7103778300(0x3f800000,(long)ppplVar23,0x7104280f22);
switchD_7101dbb544_default:
  lVar30 = *(long *)(DAT_710532f730 + 8);
  if (*(uint *)((long)param_3 + 0x184) < 0x16c) {
    iVar11 = (&DAT_710454a7ec)[(long)(int)*(uint *)((long)param_3 + 0x184) * 0x12];
  }
  else {
    iVar11 = -1;
  }
  uVar34 = FUN_71032b24e0(lVar30 + 0x170,iVar11);
  FUN_71032b1a60((uint *)&local_d0,*(long *)(lVar30 + 0x178),uVar34);
  FUN_71003a4ca0((uint *)&local_118,"nam_stg1_%s",&pppbStack_c8,uVar34,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  FUN_7103776910(&local_d0,(long)puVar1,(long ****)"set_txt_stage",uVar34,ppppbVar28,param_7,param_8
                 ,param_9,param_10);
  ppppbVar28 = (byte ****)&local_110;
  pppplVar27 = (long ****)0x1;
  FUN_710377a280((long)&local_d0,(byte *)"mnu_spirits_challengeboard_detail_stage",1);
  pppbVar22 = pppbStack_c8;
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  pppbStack_c8 = (byte ***)0x0;
  if (pppbVar22 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar22);
  }
  ppplVar23 = local_158;
  local_160 = &PTR_FUN_710523d988;
  local_158 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    pplVar20 = ppplVar23[3];
    ppplVar23[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar23[3] = (long **)0x0;
    if (pplVar20 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar20);
    }
    FUN_710392eb40((ulong)ppplVar23);
  }
  local_118 = (undefined **)0x0;
  local_110 = (byte ***)0x0;
  uStack_108 = 0;
  FUN_71025b39a0(&local_118,(long)puVar2,pppplVar27,ppppbVar28,param_7,param_8,param_9,param_10);
  uVar13 = (int)((ulong)((long)local_110 - (long)local_118) >> 2) * -0x6eb3e453;
  uVar12 = 3;
  if (uVar13 < 3) {
    uVar12 = uVar13 & 0xff;
  }
  FUN_71003a4ca0((uint *)&local_d0,"hint_%02d",(ulong)uVar12,pppplVar27,ppppbVar28,param_7,param_8,
                 param_9,param_10);
  FUN_7103778300(0x3f800000,param_3[0x1c],(long)&pppbStack_c8);
  uVar25 = 0;
  FUN_7103776910(&local_160,(long)puVar1,(long ****)"set_txt_hint_%02d",0,ppppbVar28,param_7,param_8
                 ,param_9,param_10);
  ppplVar23 = local_158;
  if (uVar12 == 0) {
    pplVar20 = *local_158;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) & 0xfe;
    }
  }
  else {
    if (local_110 == (byte ***)local_118) goto LAB_7101dbbc64;
    pplVar20 = *local_158;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) | 1;
    }
    if (*(int *)((long)local_118 + 0x4c) < 1) {
      FUN_710377a120((long)&local_160,(char *)(local_118 + 1),uVar25,ppppbVar28,param_7,param_8,
                     param_9,param_10);
    }
    else {
      ppppbVar28 = (byte ****)(local_118 + 1);
      FUN_710377a280((long)&local_160,(byte *)(local_118 + 10),1);
    }
  }
  local_158 = (long ***)0x0;
  local_160 = &PTR_FUN_710523d9a8;
  if (ppplVar23 != (long ***)0x0) {
    local_158 = (long ***)0x0;
    local_160 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)ppplVar23);
  }
  uVar25 = 1;
  FUN_7103776910(&local_160,(long)puVar1,(long ****)"set_txt_hint_%02d",1,ppppbVar28,param_7,param_8
                 ,param_9,param_10);
  ppplVar23 = local_158;
  if (uVar12 < 2) {
    pplVar20 = *local_158;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) & 0xfe;
    }
  }
  else {
    if ((ulong)(((long)local_110 - (long)local_118 >> 2) * 0x14c1bacf914c1bad) < 2)
    goto LAB_7101dbbc64;
    pplVar20 = *local_158;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) | 1;
    }
    if (*(int *)(local_118 + 0x1c) < 1) {
      FUN_710377a120((long)&local_160,(char *)((long)local_118 + 0x9c),uVar25,ppppbVar28,param_7,
                     param_8,param_9,param_10);
    }
    else {
      ppppbVar28 = (byte ****)((long)local_118 + 0x9c);
      FUN_710377a280((long)&local_160,(byte *)((long)local_118 + 0xe4),1);
    }
  }
  local_158 = (long ***)0x0;
  local_160 = &PTR_FUN_710523d9a8;
  if (ppplVar23 != (long ***)0x0) {
    local_158 = (long ***)0x0;
    local_160 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)ppplVar23);
  }
  pppplVar27 = (long ****)0x2;
  FUN_7103776910(&local_160,(long)puVar1,(long ****)"set_txt_hint_%02d",2,ppppbVar28,param_7,param_8
                 ,param_9,param_10);
  ppplVar23 = local_158;
  if (uVar12 < 3) {
    pplVar20 = *local_158;
    uVar25 = extraout_x1_04;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) & 0xfe;
    }
  }
  else {
    if ((ulong)(((long)local_110 - (long)local_118 >> 2) * 0x14c1bacf914c1bad) < 3) {
LAB_7101dbbc64:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    pplVar20 = *local_158;
    if (pplVar20 != (long **)0x0) {
      *(byte *)(pplVar20 + 0xb) = *(byte *)(pplVar20 + 0xb) | 1;
    }
    if (*(int *)((long)local_118 + 0x174) < 1) {
      FUN_710377a120((long)&local_160,(char *)(local_118 + 0x26),pppplVar27,ppppbVar28,param_7,
                     param_8,param_9,param_10);
      uVar25 = extraout_x1_08;
    }
    else {
      ppppbVar28 = (byte ****)(local_118 + 0x26);
      pppplVar27 = (long ****)0x1;
      FUN_710377a280((long)&local_160,(byte *)(local_118 + 0x2f),1);
      uVar25 = extraout_x1_05;
    }
  }
  local_158 = (long ***)0x0;
  local_160 = &PTR_FUN_710523d9a8;
  if (ppplVar23 != (long ***)0x0) {
    local_158 = (long ***)0x0;
    local_160 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)ppplVar23);
    uVar25 = extraout_x1_06;
  }
  if ((byte ***)local_118 != (byte ***)0x0) {
    local_110 = (byte ***)local_118;
    FUN_710392eb40((ulong)local_118);
    uVar25 = extraout_x1_07;
  }
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),uVar25,pppplVar27,ppppbVar28,param_7,param_8,param_9,
                 param_10);
  FUN_710373b540(*(long *)(*DAT_7105329f98 + 0x50) + 0x1e0,0);
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar34 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x15b3321a40,(long ****)&DAT_00000004,
                              ppppbVar28,param_7,param_8,param_9,param_10), (uVar34 & 1) != 0)) {
    FUN_71024076d0(local_298,0x15b3321a40);
    if (((local_288 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_280 == DAT_7106dd53ac)) {
      piVar33 = (int *)(local_288 + 0x38);
      do {
        cVar37 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar33,0x10);
        if (bVar10) {
          *piVar33 = *piVar33 + -1;
          cVar37 = ExclusiveMonitorsStatus();
        }
      } while (cVar37 != '\0');
    }
  }
  else {
    local_280 = 0x87650000000000;
    local_270 = 0xffffffffffffffff;
    uStack_268 = 0;
    local_298[0] = 0;
    local_260 = 0;
  }
  local_290 = &PTR_FUN_7104f73d50;
  local_288 = 0;
  local_278 = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((uint)DAT_7105307b68 != 0xffffffff) {
    FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),(uint)DAT_7105307b68,0x196626ef7a,0,0,0,0,0
                  );
  }
  if (*(uint *)((long)param_3 + 0xbc) < 0x13) {
    *(undefined4 *)((long)param_3 + (long)(int)*(uint *)((long)param_3 + 0xbc) * 4 + 0x70) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

