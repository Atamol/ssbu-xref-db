// addr:      7102ef6bd0
// offset:    0x2ef6bd0
// name:      FUN_7102ef6bd0
// mangled:   
// signature: undefined __cdecl FUN_7102ef6bd0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x007102ef76bc) */

void FUN_7102ef6bd0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long ****pppplVar6;
  ulong *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *********ppppppppplVar8;
  long *********ppppppppplVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  char *pcVar12;
  long *********ppppppppplVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  uint *puVar20;
  undefined8 uVar21;
  long *plVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long ****pppplVar29;
  ulong *puVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  long ********local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined4 local_64;
  
  ppppppppplVar9 = &local_b0;
  ppppppppplVar10 = &local_b0;
  ppppppppplVar11 = &local_b0;
  ppppppppplVar13 = &local_b0;
  plVar16 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  puVar2 = (undefined8 *)plVar16[1];
  for (puVar5 = (undefined8 *)*plVar16; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    pppplVar29 = (long ****)*puVar5;
    uVar23 = (uint)*(byte *)(pppplVar29 + 0xb);
    if (*(byte *)(pppplVar29 + 0xb) != 0) {
      plVar16 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar22 = *(long **)(*(long *)(param_1 + 0x310) + 0xd8);
      if (plVar16 != plVar22) {
        uVar24 = 0;
        lVar26 = 0x59;
        uVar3 = 0xffffffff;
        uVar28 = 0xffffffff;
        do {
          uVar1 = uVar23 + 0x20;
          if (0x19 < uVar23 - 0x41) {
            uVar1 = uVar23;
          }
          uVar23 = (uint)*(byte *)((long)pppplVar29 + lVar26);
          lVar26 = lVar26 + 1;
          uVar28 = (&DAT_7104754084)[(uVar1 ^ uVar28) & 0xff] ^ uVar28 >> 8;
          uVar24 = uVar24 + 0x100000000;
        } while (uVar23 != 0);
        do {
          if ((*(uint *)(plVar16 + 1) < 2) &&
             (lVar26 = *plVar16,
             (uVar24 & 0xff00000000 | (ulong)~uVar28) == *(ulong *)(lVar26 + 0x68))) {
            if (lVar26 != 0) {
              if (((*(long *)(lVar26 + 0x68) == 0xf389b917e) ||
                  (*(long *)(lVar26 + 0x68) == 0x10316bc953)) ||
                 (*(long *)(lVar26 + 0x68) == 0x10cb64f430)) {
                plVar16 = (long *)FUN_710392e290(0x10,0x1e0,param_3,param_4,param_5,param_6,param_7,
                                                 param_8);
                if (plVar16 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_64 = 0;
                    local_b0 = (long ********)&DAT_000001e0;
                    ppppppppplVar8 = &local_b0;
                    uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                    if (((uVar24 & 1) != 0) &&
                       (plVar16 = (long *)FUN_710392e290(0x10,0x1e0,(long ****)ppppppppplVar8,
                                                         param_4,param_5,param_6,param_7,param_8),
                       plVar16 != (long *)0x0)) goto LAB_7102ef6e28;
                  }
                  plVar16 = (long *)0x0;
                }
LAB_7102ef6e28:
                FUN_7103145960(plVar16,param_1,(long)pppplVar29,param_4,param_5,param_6,param_7,
                               param_8);
              }
              else {
                plVar16 = (long *)FUN_710392e290(0x10,0x1f0,param_3,param_4,param_5,param_6,param_7,
                                                 param_8);
                if (plVar16 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_64 = 0;
                    local_b0 = (long ********)&DAT_000001f0;
                    ppppppppplVar8 = &local_b0;
                    uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                    if (((uVar24 & 1) != 0) &&
                       (plVar16 = (long *)FUN_710392e290(0x10,0x1f0,(long ****)ppppppppplVar8,
                                                         param_4,param_5,param_6,param_7,param_8),
                       plVar16 != (long *)0x0)) goto LAB_7102ef6c88;
                  }
                  plVar16 = (long *)0x0;
                }
LAB_7102ef6c88:
                FUN_71031455c0(plVar16,param_1,(long)pppplVar29,param_4,param_5,param_6,param_7,
                               param_8);
                *plVar16 = (long)&PTR_FUN_710514b6c8;
                plVar16[0x3a] = param_1;
                *(undefined2 *)(plVar16 + 0x3b) = 0;
                plVar16[0x3c] = 0;
                *(undefined2 *)((long)plVar16 + 0x151) = 0;
                lVar26 = *(long *)(**(long **)(param_1 + 0x338) + 8);
                if (lVar26 != 0) {
                  pppplVar29 = (long ****)0x0;
                  uVar3 = FUN_7102405040(lVar26,plVar16 + 0x3c,0,param_4,param_5,param_6,param_7,
                                         param_8);
                }
                puVar17 = (undefined8 *)plVar16[0x17];
                *(undefined4 *)(plVar16 + 0x3d) = uVar3;
                if (puVar17 != (undefined8 *)0x0) {
                  pppplVar29 = (long ****)0x1;
                  FUN_71025f4d80((long *)*puVar17,(long *)puVar17[1],1);
                }
              }
              FUN_710313ef20(plVar16);
              param_3 = pppplVar29;
            }
            break;
          }
          plVar16 = plVar16 + 2;
        } while (plVar22 != plVar16);
      }
    }
  }
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x250,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ********)0x250;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar24 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x250,(long ****)ppppppppplVar9,param_4,param_5,param_6,
                                  param_7,param_8), puVar5 != (undefined8 *)0x0))
      goto LAB_7102ef6ea8;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102ef6ea8:
  lVar26 = param_1 + 0x738;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  puVar5[0x12] = 0xffffffff00000000;
  *puVar5 = &PTR_FUN_710514b770;
  puVar5[1] = param_1;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = lVar26;
  puVar5[3] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0xffffffffffffffff;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x3f800000ffffffff;
  memset((void *)((long)puVar5 + 0x9c),0,0x1b4);
  puVar5[0xe] = &DAT_100000001;
  puVar5[0xf] = &DAT_100000001;
  *(undefined4 *)(puVar5 + 0x10) = 1;
  plVar16 = *(long **)(param_1 + 0x948);
  *(undefined8 **)(param_1 + 0x948) = puVar5;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
    puVar5 = *(undefined8 **)(param_1 + 0x948);
  }
  pppplVar29 = (long ****)(param_1 + 0x850);
  ppppbVar14 = (byte ****)(param_1 + 0x808);
  pppplVar6 = (long ****)(param_1 + 0x8a8);
  FUN_7102ef9a60((long)puVar5,(long *)(param_1 + 0x7c0),(long *)pppplVar29,(long *)ppppbVar14,
                 (long *)pppplVar6);
  lVar18 = *(long *)(param_1 + 0x948);
  uVar21 = *(undefined8 *)(param_1 + 0x7f0);
  uVar25 = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(lVar18 + 0x200) = uVar25;
  *(undefined8 *)(lVar18 + 0x1f0) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x880);
  uVar25 = *(undefined8 *)(param_1 + 0x888);
  *(undefined8 *)(lVar18 + 0x218) = *(undefined8 *)(param_1 + 0x890);
  *(undefined8 *)(lVar18 + 0x210) = uVar25;
  *(undefined8 *)(lVar18 + 0x208) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(lVar18 + 0x228) = *(undefined8 *)(param_1 + 0x840);
  *(undefined8 *)(lVar18 + 0x220) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x8d8);
  *(undefined8 *)(lVar18 + 0x238) = *(undefined8 *)(param_1 + 0x8e0);
  *(undefined8 *)(lVar18 + 0x230) = uVar21;
  lVar18 = *(long *)(param_1 + 0x948);
  *(undefined4 *)(lVar18 + 0x70) = *(undefined4 *)(param_1 + 0x794);
  *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(param_1 + 0x798);
  *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(param_1 + 0x79c);
  *(undefined4 *)(lVar18 + 0x7c) = *(undefined4 *)(param_1 + 0x7a0);
  *(undefined4 *)(lVar18 + 0x80) = *(undefined4 *)(param_1 + 0x7a4);
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x250,pppplVar29,ppppbVar14,pppplVar6,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ********)0x250;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar24 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x250,(long ****)ppppppppplVar10,ppppbVar14,pppplVar6,param_6
                                  ,param_7,param_8), puVar5 != (undefined8 *)0x0))
      goto LAB_7102ef701c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102ef701c:
  puVar5[0x12] = 0xffffffff00000000;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  *puVar5 = &PTR_FUN_710514b770;
  puVar5[1] = param_1;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = lVar26;
  puVar5[3] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0xffffffffffffffff;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0x3f800000ffffffff;
  memset((void *)((long)puVar5 + 0x9c),0,0x1b4);
  puVar5[0xe] = &DAT_100000001;
  puVar5[0xf] = &DAT_100000001;
  *(undefined4 *)(puVar5 + 0x10) = 1;
  plVar16 = *(long **)(param_1 + 0x950);
  *(undefined8 **)(param_1 + 0x950) = puVar5;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 8))();
    puVar5 = *(undefined8 **)(param_1 + 0x950);
  }
  pppplVar29 = (long ****)(param_1 + 0x8c0);
  FUN_7102ef9a60((long)puVar5,(long *)(param_1 + 0x7d8),(long *)(param_1 + 0x868),
                 (long *)(param_1 + 0x820),(long *)pppplVar29);
  lVar18 = *(long *)(param_1 + 0x950);
  uVar21 = *(undefined8 *)(param_1 + 0x7f0);
  uVar25 = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(lVar18 + 0x1f8) = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(lVar18 + 0x200) = uVar25;
  *(undefined8 *)(lVar18 + 0x1f0) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x880);
  uVar25 = *(undefined8 *)(param_1 + 0x888);
  *(undefined8 *)(lVar18 + 0x218) = *(undefined8 *)(param_1 + 0x890);
  *(undefined8 *)(lVar18 + 0x210) = uVar25;
  *(undefined8 *)(lVar18 + 0x208) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x838);
  *(undefined8 *)(lVar18 + 0x228) = *(undefined8 *)(param_1 + 0x840);
  *(undefined8 *)(lVar18 + 0x220) = uVar21;
  uVar21 = *(undefined8 *)(param_1 + 0x8d8);
  *(undefined8 *)(lVar18 + 0x238) = *(undefined8 *)(param_1 + 0x8e0);
  *(undefined8 *)(lVar18 + 0x230) = uVar21;
  lVar18 = *(long *)(param_1 + 0x950);
  *(undefined4 *)(lVar18 + 0x70) = *(undefined4 *)(param_1 + 0x7a8);
  *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(param_1 + 0x7ac);
  *(undefined4 *)(lVar18 + 0x78) = *(undefined4 *)(param_1 + 0x7b0);
  *(undefined4 *)(lVar18 + 0x7c) = *(undefined4 *)(param_1 + 0x7b4);
  *(undefined4 *)(lVar18 + 0x80) = *(undefined4 *)(param_1 + 0x7b8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x948),0,(long ****)"dyr_a_1_leftplatform_set",
                 (byte ****)"stc_leftplatformlinea_1_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x948),1,(long ****)"dyr_a_2_leftplatform_set",
                 (byte ****)"stc_leftplatformlinea_2_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x948),2,(long ****)"dyr_a_3_leftplatform_set",
                 (byte ****)"stc_leftplatformlinea_3_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x948),3,(long ****)"dyr_a_4_leftplatform_set",
                 (byte ****)"stc_leftplatformlinea_4_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x948),4,(long ****)"dyr_a_6_leftplatform_set",
                 (byte ****)"stc_leftplatformlinea_6_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x950),0,(long ****)"dyr_b_1_rightplatform_set",
                 (byte ****)"stc_rightplatformlineb_1_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x950),1,(long ****)"dyr_b_2_rightplatform_set",
                 (byte ****)"stc_rightplatformlineb_2_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x950),2,(long ****)"dyr_b_3_rightplatform_set",
                 (byte ****)"stc_rightplatformlineb_3_set",pppplVar29,param_6,param_7,param_8);
  FUN_7102ef7ef0(*(long *)(param_1 + 0x950),3,(long ****)"dyr_b_4_rightplatform_set",
                 (byte ****)"stc_rightplatformlineb_4_set",pppplVar29,param_6,param_7,param_8);
  pcVar12 = "dyr_b_6_rightplatform_set";
  pcVar15 = "stc_rightplatformlineb_6_set";
  FUN_7102ef7ef0(*(long *)(param_1 + 0x950),4,(long ****)"dyr_b_6_rightplatform_set",
                 (byte ****)"stc_rightplatformlineb_6_set",pppplVar29,param_6,param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x310);
  plVar19 = (long *)(lVar18 + 0xd0);
  plVar16 = (long *)*plVar19;
  plVar22 = (long *)(lVar18 + 0xd8);
  if (plVar16 == (long *)*plVar22) {
    lVar27 = 0;
  }
  else {
    do {
      if ((*(uint *)(plVar16 + 1) < 2) &&
         (lVar27 = *plVar16, *(long *)(lVar27 + 0x68) == 0xebb01e24d)) goto LAB_7102ef72a8;
      plVar16 = plVar16 + 2;
    } while ((long *)*plVar22 != plVar16);
    lVar27 = 0;
  }
LAB_7102ef72a8:
  *(long *)(param_1 + 0x980) = lVar27;
  for (plVar16 = (long *)*plVar19; plVar16 != (long *)*plVar22; plVar16 = plVar16 + 2) {
    if ((*(uint *)(plVar16 + 1) < 2) && (*(long *)(*plVar16 + 0x68) == 0xebb01e24d)) {
      pppplVar6 = FUN_710262fb80(lVar18,plVar16,(long *********)pcVar12,(byte ****)pcVar15,
                                 pppplVar29,param_6,param_7,param_8);
      plVar19 = (long *)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar22 = (long *)(*(long *)(param_1 + 0x310) + 0xd8);
      goto LAB_7102ef72fc;
    }
  }
  pppplVar6 = (long ****)0x0;
LAB_7102ef72fc:
  *(long *****)(param_1 + 0x988) = pppplVar6;
  for (plVar16 = (long *)*plVar19; plVar16 != (long *)*plVar22; plVar16 = plVar16 + 2) {
    if ((*(uint *)(plVar16 + 1) < 2) &&
       (lVar18 = *plVar16, *(long *)(lVar18 + 0x68) == 0x10316bc953)) goto LAB_7102ef7354;
  }
  lVar18 = 0;
LAB_7102ef7354:
  *(long *)(param_1 + 0x990) = lVar18;
  for (plVar16 = (long *)*plVar19; plVar16 != (long *)*plVar22; plVar16 = plVar16 + 2) {
    if ((*(uint *)(plVar16 + 1) < 2) &&
       (lVar18 = *plVar16, *(long *)(lVar18 + 0x68) == 0x10cb64f430)) goto LAB_7102ef7394;
  }
  lVar18 = 0;
LAB_7102ef7394:
  *(long *)(param_1 + 0x998) = lVar18;
  for (plVar19 = (long *)*plVar19; plVar19 != (long *)*plVar22; plVar19 = plVar19 + 2) {
    if ((*(uint *)(plVar19 + 1) < 2) && (lVar18 = *plVar19, *(long *)(lVar18 + 0x68) == 0xf389b917e)
       ) goto LAB_7102ef73d4;
  }
  lVar18 = 0;
LAB_7102ef73d4:
  *(long *)(param_1 + 0x9a0) = lVar18;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x2c0,(long ****)pcVar12,(byte ****)pcVar15,pppplVar29,param_6,
                          param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ********)&DAT_000002c0;
      uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar24 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x2c0,(long ****)ppppppppplVar11,(byte ****)pcVar15,
                                  pppplVar29,param_6,param_7,param_8), puVar5 != (undefined8 *)0x0))
      goto LAB_7102ef7434;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102ef7434:
  FUN_7102ef9c90(puVar5,param_1,lVar26,(byte ****)pcVar15,pppplVar29,param_6,param_7,param_8);
  uVar24 = *(ulong *)(param_1 + 0x978);
  *(undefined8 **)(param_1 + 0x978) = puVar5;
  if (uVar24 != 0) {
    FUN_7102efc9d0(uVar24);
    FUN_710392eb40(uVar24);
    puVar5 = *(undefined8 **)(param_1 + 0x978);
  }
  puVar20 = *(uint **)(puVar5[0x56] + 0x340);
  fVar31 = *(float *)(puVar5[0x57] + 0x1b8);
  fVar32 = *(float *)(puVar5[0x57] + 0x1bc);
  uVar23 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  uVar28 = puVar20[3];
  uVar23 = uVar23 ^ uVar23 >> 8 ^ uVar28 ^ uVar28 >> 0x13;
  puVar20[1] = puVar20[2];
  puVar20[2] = uVar28;
  puVar20[3] = uVar23;
  *(undefined4 *)((long)puVar5 + 0x24) = 4;
  *(float *)(puVar5 + 5) = fVar31 + (fVar32 - fVar31) * (float)uVar23 * 2.3283064e-10;
  puVar20 = *(uint **)(puVar5[0x56] + 0x340);
  fVar31 = *(float *)(puVar5[0x57] + 0x1b8);
  fVar32 = *(float *)(puVar5[0x57] + 0x1bc);
  uVar23 = *puVar20;
  *puVar20 = puVar20[1];
  uVar28 = puVar20[3];
  uVar23 = uVar23 ^ uVar23 << 0xb;
  uVar23 = uVar23 ^ uVar23 >> 8 ^ uVar28 ^ uVar28 >> 0x13;
  puVar20[1] = puVar20[2];
  puVar20[2] = uVar28;
  puVar20[3] = uVar23;
  *(undefined4 *)(puVar5 + 6) = 5;
  *(float *)((long)puVar5 + 0x34) = fVar31 + (fVar32 - fVar31) * (float)uVar23 * 2.3283064e-10;
  FUN_7102efca80(*(long *)(param_1 + 0x978),*(long *)(param_1 + 0x980),
                 *(long *****)(param_1 + 0x988),(byte ****)pcVar15,pppplVar29,param_6,param_7,
                 param_8);
  pcVar12 = *(char **)(param_1 + 0x998);
  FUN_7102efcf00(*(long *)(param_1 + 0x978),*(long *)(param_1 + 0x990),(long ****)pcVar12,
                 (byte ****)pcVar15,pppplVar29,param_6,param_7,param_8);
  FUN_7102efcfe0(*(long *)(param_1 + 0x978),*(long *)(param_1 + 0x9a0),(long ****)pcVar12,
                 (byte ****)pcVar15,pppplVar29,param_6,param_7,param_8);
  plVar22 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar16 = (long *)*plVar22;
  do {
    uVar21 = extraout_x1;
    if (plVar16 == (long *)plVar22[1]) goto LAB_7102ef75fc;
    lVar26 = *plVar16;
    plVar16 = plVar16 + 1;
  } while ((*(ulong *)(lVar26 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  if (lVar26 != 0) {
    puVar5 = *(undefined8 **)(lVar26 + 0x130);
    *(undefined8 **)(param_1 + 0x9a8) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar5,(undefined8 *)puVar5[1],"IPP0001");
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x9a8),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x9a8))[1],"IPP0002");
      pcVar12 = "IPP0003";
      FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x9a8),
                     (undefined8 *)(*(undefined8 **)(param_1 + 0x9a8))[1],"IPP0003");
      puVar5 = *(undefined8 **)(param_1 + 0x9a8);
      uVar21 = extraout_x1_00;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_71025f5420((undefined8 *)*puVar5,(undefined8 *)puVar5[1],"IPP0004");
        pcVar12 = "IPP0005";
        FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_1 + 0x9a8),
                       (undefined8 *)(*(undefined8 **)(param_1 + 0x9a8))[1],"IPP0005");
        uVar21 = extraout_x1_01;
      }
    }
  }
LAB_7102ef75fc:
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_7102ef7b90(param_1,uVar21,(long ****)pcVar12,(byte ****)pcVar15,pppplVar29,param_6,param_7,
                   param_8);
  }
  puVar7 = (ulong *)FUN_710392e290(0x10,0x20,(long ****)pcVar12,(byte ****)pcVar15,pppplVar29,
                                   param_6,param_7,param_8);
  uVar21 = extraout_x1_02;
  if (puVar7 == (ulong *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ********)&SUB_00000020;
      auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar21 = auVar33._8_8_;
      pcVar12 = (char *)ppppppppplVar13;
      if (((auVar33._0_8_ & 1) != 0) &&
         (puVar7 = (ulong *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,(byte ****)pcVar15,
                                           pppplVar29,param_6,param_7,param_8),
         uVar21 = extraout_x1_03, pcVar12 = (char *)ppppppppplVar13, puVar7 != (ulong *)0x0))
      goto LAB_7102ef7668;
    }
    puVar7 = (ulong *)0x0;
  }
LAB_7102ef7668:
  puVar7[3] = 0x1c8a9955b8;
  uVar24 = 0x183f6f2e7e;
  *puVar7 = 0x183f6f2e7e;
  puVar7[1] = 0x199d22d9ba;
  puVar7[2] = 0x1b5eb93985;
  puVar30 = puVar7;
  do {
    for (plVar16 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar16 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar16 = plVar16 + 2) {
      if ((*(uint *)(plVar16 + 1) < 2) && (lVar26 = *plVar16, uVar24 == *(ulong *)(lVar26 + 0x68)))
      {
        if (lVar26 != 0) {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),uVar21,(long ****)pcVar12,(byte ****)pcVar15,
                         pppplVar29,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          uVar21 = extraout_x1_04;
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
    do {
      if (puVar30 == puVar7 + 3) {
        if (puVar7 != (ulong *)0x0) {
          FUN_710392eb40((ulong)puVar7);
        }
        if (DAT_71052b9390 != 0) {
          local_a8 = 0x3f800000;
          local_a0 = 0;
          uStack_98 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          local_79 = 0;
          local_b0 = (long ********)0x0;
          local_90 = 0x2bf800000;
          uStack_88 = 0;
          iVar4 = FUN_710056c360(DAT_71052b9390,(uint *)&local_b0,(long *********)pcVar12,
                                 (byte ****)pcVar15,(undefined *)pppplVar29,param_6,param_7,param_8)
          ;
          *(int *)(param_1 + 0x95c) = iVar4;
        }
        return;
      }
      puVar30 = puVar30 + 1;
      uVar24 = *puVar30 & 0xffffffffff;
    } while (uVar24 == 0);
  } while( true );
}

