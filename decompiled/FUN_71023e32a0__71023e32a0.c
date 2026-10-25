// addr:      71023e32a0
// offset:    0x23e32a0
// name:      FUN_71023e32a0
// mangled:   
// signature: undefined __cdecl FUN_71023e32a0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, byte * * * * param_5, byte * * * * param_6, byte * * * * param_7, byte * * * * param_8)


void FUN_71023e32a0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   byte ****param_5,byte ****param_6,byte ****param_7,byte ****param_8)

{
  int iVar1;
  long ***ppplVar2;
  int *piVar3;
  long *************ppppppppppppplVar4;
  uint uVar5;
  byte **ppbVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  long **************pppppppppppppplVar10;
  long *************__src;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long ***ppplVar16;
  long *************__dest;
  void *__dest_00;
  long ****pppplVar17;
  int iVar18;
  byte ****ppppbVar19;
  byte bVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  char *pcVar24;
  ulong uVar25;
  byte *pbVar26;
  long ************pppppppppppplVar27;
  long *plVar28;
  long ***ppplVar29;
  long lVar30;
  byte ****ppppbVar31;
  byte *pbVar32;
  char *pcVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  long lVar38;
  long *plVar39;
  int *piVar40;
  int *piVar41;
  int iVar42;
  uint *puVar43;
  ulong uVar44;
  undefined8 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  size_t __n;
  long ****pppplVar48;
  byte ****ppppbVar49;
  byte *pbVar50;
  long **pplVar51;
  undefined8 local_1a0;
  undefined8 local_198;
  long ************local_190;
  long ************local_188;
  undefined **local_180;
  undefined8 *local_178;
  ulong local_170;
  void *local_168;
  void *local_160;
  void *local_158;
  undefined1 local_150;
  long *************local_148;
  long *************local_140;
  long *************local_138;
  undefined8 local_130;
  byte local_128 [64];
  long **************local_e8;
  ulong local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long ***local_a0;
  
  if (*(int *)((long)param_1 + 0x144) != 0) {
    lVar30 = *(long *)(*param_1 + 0x28);
    if (*(long *)(lVar30 + 0x60) != 0) {
      return;
    }
    if (*(long *)(lVar30 + 0x30) != *(long *)(lVar30 + 0x38)) {
      return;
    }
    if (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0) {
      return;
    }
    if (*(uint *)((long)param_1 + 0x13c) < 0x13) {
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x13c) * 4 + 0xf0) = 9;
      return;
    }
    goto LAB_71023e51c0;
  }
  *(undefined8 *)(param_1[0x2d] + 0x70) = 0x104eec5a72;
  FUN_7101845ea0(param_1 + 0x2d);
  lVar38 = *(long *)(DAT_7105329de8 + 8);
  puVar45 = *(undefined8 **)(*DAT_7105314510 + 0x208);
  lVar22 = param_1[0x2b];
  cVar7 = *(char *)(lVar22 + 1);
  puVar46 = *(undefined1 **)(lVar22 + 0x10);
  cVar8 = *(char *)(*(long *)(lVar38 + 0xb8) + 4);
  lVar30 = lVar38 + 0x1c8;
  lVar38 = *(long *)(lVar38 + 0x1c8);
  do {
    if ((int)cVar8 <= *(int *)(lVar38 + 0x1c)) {
      lVar30 = lVar38;
    }
    lVar38 = *(long *)(lVar38 + (ulong)(*(int *)(lVar38 + 0x1c) < (int)cVar8) * 8);
  } while (lVar38 != 0);
  lVar38 = 0;
  if (*(int *)(lVar30 + 0x1c) <= (int)cVar8) {
    lVar38 = lVar30 + 0x20;
  }
  *(int *)(lVar22 + 0x234) = *(int *)(lVar38 + 0x40) + *(int *)(lVar22 + 0x230);
  uVar14 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar46);
  iVar13 = (int)uVar14;
  if (cVar7 < '\x02') {
    if (iVar13 < 0) goto LAB_71023e3408;
    puVar23 = (undefined8 *)(*(long *)*puVar45 + (long)iVar13 * 0x18);
    local_1a0 = (undefined **)*puVar23;
    local_198 = (long ************)puVar23[1];
    local_190 = (long ************)puVar23[2];
LAB_71023e33fc:
  }
  else {
    if (-1 < iVar13) {
      lVar30 = *(long *)*puVar45 + (long)iVar13 * 0x18;
      local_1a0 = *(undefined ***)(lVar30 + 0x948);
      local_198 = *(long *************)(lVar30 + 0x950);
      local_190 = *(long *************)(lVar30 + 0x958);
      goto LAB_71023e33fc;
    }
LAB_71023e3408:
    local_198 = (long ************)0x0;
    local_190 = (long ************)0x0;
    local_1a0 = (undefined **)0x0;
  }
  pppppppppppppplVar10 = (long **************)local_1a0;
  lVar30 = param_1[0x2b];
  if ((local_1a0._5_1_ == '\0') || ((uint)local_1a0 < *(uint *)(lVar30 + 0x234))) {
    local_1a0._6_2_ = SUB82(pppppppppppppplVar10,6);
    local_1a0._0_6_ =
         CONCAT15(1,CONCAT14((char)*(undefined4 *)(lVar30 + 0x18),*(uint *)(lVar30 + 0x234)));
    if ('\x01' < cVar7) {
      local_198 = *(long *************)(lVar30 + 0x28);
      local_190 = (long ************)CONCAT71(local_190._1_7_,(char)*(undefined4 *)(lVar30 + 0x30));
    }
  }
  if (*(char *)(lVar30 + 0x25c) != '\0') {
    if ((local_1a0._6_1_ == '\0') || ((int)(uint)local_1a0._7_1_ < (int)*(char *)(lVar30 + 4))) {
      local_1a0 = (undefined **)CONCAT17(*(char *)(lVar30 + 4),CONCAT16(1,(undefined6)local_1a0));
    }
  }
  if (cVar7 < '\x02') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((((((DAT_710530a7b0 == '\0' && DAT_710530a7b1 == '\0') && DAT_710530a7b2 == '\0') &&
           DAT_710530a7b3 == '\0') && DAT_710530a7b4 == '\0') && DAT_710530a7b5 == '\0') &&
        DAT_710530a7b6 == '\0') && DAT_710530a7b7 == '\0') {
      uVar14 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar46);
      iVar13 = (int)uVar14;
      if (-1 < iVar13) {
        if (local_1a0._6_1_ == '\0') {
          lVar30 = *(long *)*puVar45;
          if (*(uint *)(lVar30 + (long)iVar13 * 0x18) < (uint)local_1a0) goto LAB_71023e35f4;
        }
        else {
LAB_71023e35f4:
          param_3 = (undefined **)&local_1a0;
          FUN_71017461f0(0,puVar46,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
          lVar30 = *(long *)*puVar45;
        }
        puVar45 = (undefined8 *)(lVar30 + (long)iVar13 * 0x18);
        *(undefined1 *)(puVar45 + 2) = local_190._0_1_;
        *puVar45 = local_1a0;
        puVar45[1] = local_198;
      }
    }
    lVar30 = param_1[0x2b];
    puVar45 = *(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 0x20);
    uVar21 = 999999999;
    if (*(char *)(lVar30 + 0x25c) != '\0') {
      uVar34 = **(uint **)*puVar45;
      uVar35 = uVar21;
      if (uVar34 + 1 < 999999999) {
        uVar35 = uVar34 + 1;
      }
      **(uint **)*puVar45 = uVar35;
      lVar30 = param_1[0x2b];
    }
    uVar35 = *(int *)(lVar30 + 0x244) + *(int *)(lVar30 + 0x240);
    lVar22 = *(long *)*puVar45;
    if (*(uint *)(lVar22 + 8) < uVar35) {
      if (0x3b9ac9fe < uVar35) {
        uVar35 = uVar21;
      }
      *(uint *)(lVar22 + 8) = uVar35;
      lVar30 = param_1[0x2b];
      lVar22 = *(long *)*puVar45;
    }
    uVar35 = *(uint *)(lVar30 + 0x24c);
    if (*(uint *)(lVar22 + 0xc) < uVar35) {
      if (0x3b9ac9fe < uVar35) {
        uVar35 = uVar21;
      }
      *(uint *)(lVar22 + 0xc) = uVar35;
    }
  }
  else {
    if (((DAT_71053144d8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_71053144d8), iVar13 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((((((DAT_710530a7b0 == '\0' && DAT_710530a7b1 == '\0') && DAT_710530a7b2 == '\0') &&
           DAT_710530a7b3 == '\0') && DAT_710530a7b4 == '\0') && DAT_710530a7b5 == '\0') &&
        DAT_710530a7b6 == '\0') && DAT_710530a7b7 == '\0') {
      uVar14 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar46);
      iVar13 = (int)uVar14;
      if (-1 < iVar13) {
        if (local_1a0._6_1_ == '\0') {
          lVar30 = *(long *)*puVar45;
          if (*(uint *)(lVar30 + (long)iVar13 * 0x18 + 0x948) < (uint)local_1a0)
          goto LAB_71023e352c;
        }
        else {
LAB_71023e352c:
          param_3 = (undefined **)&local_1a0;
          FUN_71017461f0(1,puVar46,(long ****)param_3,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
          lVar30 = *(long *)*puVar45;
        }
        lVar30 = lVar30 + (long)iVar13 * 0x18;
        *(undefined1 *)(lVar30 + 0x958) = local_190._0_1_;
        *(long *************)(lVar30 + 0x950) = local_198;
        *(undefined ***)(lVar30 + 0x948) = local_1a0;
      }
    }
  }
  plVar28 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar39 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar39 == 0) {
    plVar15 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,(long ****)param_5,param_6
                                     ,param_7,param_8);
    if (plVar15 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_130 = local_130 & 0xffffffff00000000;
        local_b0 = (long ***)&SUB_00000018;
        param_3 = (undefined **)&local_b0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
        if (((uVar14 & 1) != 0) &&
           (plVar15 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,(long ****)param_5
                                             ,param_6,param_7,param_8), plVar15 != (long *)0x0))
        goto LAB_71023e3754;
      }
      plVar15 = (long *)0x0;
    }
LAB_71023e3754:
    *(undefined1 *)(plVar15 + 2) = 0;
    plVar15[1] = (long)plVar28;
    lVar30 = *plVar28;
    *plVar15 = lVar30;
    *(long **)(lVar30 + 8) = plVar15;
    *plVar28 = (long)plVar15;
    *plVar39 = *plVar39 + 1;
  }
  else {
    *(byte *)(*plVar28 + 0x10) = *(byte *)(*plVar28 + 0x10) & 1;
  }
  local_140 = (long *************)0x0;
  local_138 = (long *************)0x0;
  local_148 = (long *************)0x0;
  pcVar24 = *(char **)(*(long *)(DAT_7105329de8 + 8) + 0x138);
  if ((*pcVar24 == '\f') && (iVar13 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    ppppbVar31 = *(byte *****)(*(long *)(DAT_7105329de8 + 8) + 0x130);
    iVar18 = 0;
    do {
      iVar42 = iVar13 + iVar18;
      if (iVar42 < 0) {
        iVar42 = iVar42 + 1;
      }
      iVar42 = iVar42 >> 1;
      puVar43 = (uint *)((long)ppppbVar31[5] + (long)iVar42 * 8 + (long)*(int *)(pcVar24 + 5));
      if (ppppbVar31[4][*puVar43] == (byte **)0x502c42079) {
        uVar14 = (ulong)(int)puVar43[1];
        ppppbVar49 = (byte ****)0x0;
        pbVar50 = &DAT_7104742dbb;
        if ((uVar14 & 0x80000000) == 0) {
          ppppbVar49 = ppppbVar31;
          pbVar50 = (byte *)(pcVar24 + uVar14);
        }
        goto LAB_71023e381c;
      }
      iVar37 = iVar42 + -1;
      if (ppppbVar31[4][*puVar43] < (byte **)0x502c4207a) {
        iVar18 = iVar42 + 1;
        iVar37 = iVar13;
      }
      iVar13 = iVar37;
    } while (iVar18 <= iVar13);
    ppppbVar49 = (byte ****)0x0;
    pbVar50 = &DAT_7104742dbb;
  }
  else {
    ppppbVar49 = (byte ****)0x0;
    pbVar50 = &DAT_7104742dbb;
  }
LAB_71023e381c:
  uVar35 = 0x811c9dc5;
  local_e8 = (long **************)0x0;
  local_e0 = 0x3f80000000000000;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d8 = &DAT_3f8000003f800000;
  local_d0 = &DAT_3f8000003f800000;
  local_c8 = 0;
  local_198 = (long ************)((ulong)local_198 & 0xffffffffffffff00);
  local_1a0._4_4_ = 0;
  lVar30 = param_1[0x2b];
  uVar21 = 0xffffffff;
  pcVar24 = "";
  if (*(char *)(lVar30 + 0x25d) != '\0') {
    pcVar24 = "ticket_";
  }
  do {
    if (*pcVar24 == '\0') break;
    lVar22 = (long)local_1a0._4_4_;
    uVar21 = uVar21 + 1;
    local_1a0._4_4_ = local_1a0._4_4_ + 1;
    *(char *)((long)&local_198 + lVar22) = *pcVar24;
    pcVar24 = pcVar24 + 1;
  } while (uVar21 < 0x3e);
  *(undefined1 *)((long)&local_198 + (long)local_1a0._4_4_) = 0;
  if ((byte)local_198 != '\0') {
    pcVar24 = (char *)((long)&local_198 + 1);
    do {
      cVar7 = *pcVar24;
      pcVar24 = pcVar24 + 1;
    } while (cVar7 != '\0');
  }
  if (local_1a0._4_4_ < 0x3f) {
    pcVar24 = "lost_";
    if (*(char *)(lVar30 + 0x25c) != '\0') {
      pcVar24 = "";
    }
    iVar13 = local_1a0._4_4_ + -1;
    do {
      cVar7 = *pcVar24;
      if (cVar7 == '\0') break;
      lVar30 = (long)local_1a0._4_4_;
      iVar13 = iVar13 + 1;
      pcVar24 = pcVar24 + 1;
      local_1a0._4_4_ = local_1a0._4_4_ + 1;
      *(char *)((long)&local_198 + lVar30) = cVar7;
    } while (iVar13 < 0x3e);
  }
  *(undefined1 *)((long)&local_198 + (long)local_1a0._4_4_) = 0;
  uVar21 = (uint)(byte)local_198;
  if ((byte)local_198 != 0) {
    pbVar26 = (byte *)((long)&local_198 + 1);
    uVar35 = 0x811c9dc5;
    do {
      uVar35 = uVar35 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar26;
      pbVar26 = pbVar26 + 1;
    } while (uVar21 != 0);
  }
  local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar35);
  FUN_71003a4ca0((uint *)&local_b0,"%scapacity",&local_198,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71003a4ca0((uint *)&local_130,"%slottery_id",&local_198,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (local_b0._4_4_ == 0) {
    uVar14 = 0;
    if (local_130._4_4_ == 0) goto LAB_71023e3a58;
LAB_71023e39fc:
    uVar21 = 0xffffffff;
    pbVar26 = local_128;
    do {
      pbVar32 = pbVar26 + 1;
      bVar20 = *pbVar26;
      uVar35 = bVar20 + 0x20;
      if (0x19 < bVar20 - 0x41) {
        uVar35 = (uint)bVar20;
      }
      uVar21 = (&DAT_7104754084)[(uVar35 ^ uVar21) & 0xff] ^ uVar21 >> 8;
      pbVar26 = pbVar32;
    } while (pbVar32 < local_128 + local_130._4_4_);
    uVar25 = (ulong)~uVar21;
  }
  else {
    uVar21 = 0xffffffff;
    pbVar26 = (byte *)&local_a8;
    do {
      pbVar32 = pbVar26 + 1;
      bVar20 = *pbVar26;
      uVar35 = bVar20 + 0x20;
      if (0x19 < bVar20 - 0x41) {
        uVar35 = (uint)bVar20;
      }
      uVar21 = (&DAT_7104754084)[(uVar35 ^ uVar21) & 0xff] ^ uVar21 >> 8;
      pbVar26 = pbVar32;
    } while (pbVar32 < (byte *)((long)&local_a8 + (ulong)local_b0._4_4_));
    uVar14 = (ulong)~uVar21;
    if (local_130._4_4_ != 0) goto LAB_71023e39fc;
LAB_71023e3a58:
    uVar25 = 0;
  }
  bVar20 = *pbVar50;
  if (bVar20 - 0xb < 2) {
    iVar13 = *(int *)(pbVar50 + 1);
    lVar30 = (long)iVar13;
    if (0 < iVar13) {
      ppbVar6 = (byte **)(uVar25 | ((long)(int)local_130._4_4_ & 0xffU) << 0x20);
      cVar7 = *(char *)(param_1[0x2b] + 4);
      ppppbVar31 = (byte ****)(uVar14 | ((long)(int)local_b0._4_4_ & 0xffU) << 0x20);
      uVar14 = 0;
LAB_71023e3abc:
      if (bVar20 == 0xb) {
        param_7 = ppppbVar49;
        ppppbVar19 = (byte ****)(pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5));
      }
      else {
        param_7 = (byte ****)0x0;
        ppppbVar19 = (byte ****)&DAT_7104742dbb;
      }
      param_4 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar19 == '\f') &&
         (iVar18 = *(int *)((long)ppppbVar19 + 1) + -1, 0 < *(int *)((long)ppppbVar19 + 1))) {
        param_6 = (byte ****)param_7[4];
        param_5 = (byte ****)0x0;
        param_7 = (byte ****)((long)param_7[5] + (long)*(int *)((long)ppppbVar19 + 5));
        do {
          uVar21 = (uint)param_5;
          iVar42 = iVar18 + uVar21;
          if (iVar42 < 0) {
            iVar42 = iVar42 + 1;
          }
          uVar35 = iVar42 >> 1;
          param_8 = (byte ****)(ulong)uVar35;
          if (param_6[*(uint *)(param_7 + (int)uVar35)] == (byte ***)0xabb6b6fef) {
            uVar21 = *(uint *)((long)(param_7 + (int)uVar35) + 4);
            if (-1 < (int)uVar21) {
              param_4 = (byte ****)((long)ppppbVar19 + (long)(int)uVar21);
            }
            break;
          }
          iVar42 = uVar35 - 1;
          if (param_6[*(uint *)(param_7 + (int)uVar35)] < (byte ***)0xabb6b6ff0) {
            uVar21 = uVar35 + 1;
            iVar42 = iVar18;
          }
          iVar18 = iVar42;
          param_5 = (byte ****)(ulong)uVar21;
        } while ((int)uVar21 <= iVar18);
      }
      iVar18 = (int)cVar7;
      switch(*(undefined1 *)param_4) {
      case 1:
      case 3:
        if ((int)cVar7 < (int)(uint)*(byte *)((long)param_4 + 1)) goto LAB_71023e3e30;
        goto LAB_71023e3bd8;
      case 2:
        iVar42 = (int)*(char *)((long)param_4 + 1);
        break;
      case 4:
        iVar42 = (int)*(short *)((long)param_4 + 1);
        break;
      case 5:
        uVar21 = (uint)*(ushort *)((long)param_4 + 1);
        goto joined_r0x0071023e3b94;
      case 6:
      case 7:
        uVar21 = *(uint *)((long)param_4 + 1);
joined_r0x0071023e3b94:
        if ((int)uVar21 <= iVar18) goto LAB_71023e3bd8;
        goto LAB_71023e3e30;
      default:
        if (-1 < iVar18) goto LAB_71023e3bd8;
        goto LAB_71023e3e30;
      }
      if (iVar18 < iVar42) goto LAB_71023e3e30;
LAB_71023e3bd8:
      cVar8 = *(char *)(param_1[0x2b] + 4);
      if (bVar20 == 0xb) {
        ppppbVar19 = (byte ****)(pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5));
        param_8 = ppppbVar49;
      }
      else {
        param_8 = (byte ****)0x0;
        ppppbVar19 = (byte ****)&DAT_7104742dbb;
      }
      param_5 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar19 == '\f') &&
         (iVar42 = *(int *)((long)ppppbVar19 + 1) + -1, 0 < *(int *)((long)ppppbVar19 + 1))) {
        param_7 = (byte ****)param_8[4];
        param_6 = (byte ****)0x0;
        param_8 = (byte ****)((long)param_8[5] + (long)*(int *)((long)ppppbVar19 + 5));
        do {
          uVar21 = (uint)param_6;
          iVar37 = iVar42 + uVar21;
          if (iVar37 < 0) {
            iVar37 = iVar37 + 1;
          }
          iVar37 = iVar37 >> 1;
          if (param_7[*(uint *)(param_8 + iVar37)] == (byte ***)0xabb6b6fef) {
            uVar21 = *(uint *)((long)(param_8 + iVar37) + 4);
            if (-1 < (int)uVar21) {
              param_5 = (byte ****)((long)ppppbVar19 + (long)(int)uVar21);
            }
            break;
          }
          iVar1 = iVar37 + -1;
          if (param_7[*(uint *)(param_8 + iVar37)] < (byte ***)0xabb6b6ff0) {
            uVar21 = iVar37 + 1;
            iVar1 = iVar42;
          }
          iVar42 = iVar1;
          param_6 = (byte ****)(ulong)uVar21;
        } while ((int)uVar21 <= iVar42);
      }
      iVar42 = (int)uVar14;
      if (6 < *(byte *)param_5 - 1) {
        param_4 = (byte ****)0x0;
        if ((int)cVar8 == 0) goto LAB_71023e3e60;
        goto LAB_71023e3cf8;
      }
      switch((uint)*(byte *)param_5) {
      default:
        param_4 = (byte ****)(ulong)*(byte *)((long)param_5 + 1);
        uVar21 = (uint)*(byte *)((long)param_5 + 1);
        goto joined_r0x0071023e3ce4;
      case 2:
        param_4 = (byte ****)(long)*(char *)((long)param_5 + 1);
        uVar21 = (uint)*(char *)((long)param_5 + 1);
joined_r0x0071023e3ce4:
        if (uVar21 == (int)cVar8) goto LAB_71023e3e60;
        goto LAB_71023e3cf8;
      case 4:
        param_4 = (byte ****)(long)*(short *)((long)param_5 + 1);
        uVar21 = (uint)*(short *)((long)param_5 + 1);
        break;
      case 5:
        param_4 = (byte ****)(ulong)*(ushort *)((long)param_5 + 1);
        uVar21 = (uint)*(ushort *)((long)param_5 + 1);
        break;
      case 6:
      case 7:
        uVar21 = *(uint *)((long)param_5 + 1);
        param_4 = (byte ****)(ulong)uVar21;
      }
      if (uVar21 == (int)cVar8) {
LAB_71023e3e60:
        pbVar26 = &DAT_7104742dbb;
        ppppbVar19 = (byte ****)0x0;
        if ((bVar20 == 0xb) && (iVar42 < iVar13)) {
          pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5);
          ppppbVar19 = ppppbVar49;
        }
        if ((*pbVar26 != 0xc) || (iVar13 = *(int *)(pbVar26 + 1) + -1, *(int *)(pbVar26 + 1) < 1))
        goto LAB_71023e3fa8;
        iVar18 = 0;
        pbVar32 = &DAT_7104742dbb;
        goto LAB_71023e3ebc;
      }
LAB_71023e3cf8:
      if (lVar30 + -1 <= (long)uVar14) goto LAB_71023e3e30;
      param_6 = (byte ****)0x0;
      uVar25 = uVar14 + 1;
      if (bVar20 == 0xb) {
        ppppbVar19 = (byte ****)&DAT_7104742dbb;
        if ((long)uVar25 < lVar30) {
          ppppbVar19 = (byte ****)(pbVar50 + *(int *)(pbVar50 + (uVar25 & 0x3fffffff) * 4 + 5));
          param_6 = ppppbVar49;
        }
      }
      else {
        ppppbVar19 = (byte ****)&DAT_7104742dbb;
      }
      param_5 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar19 == '\f') &&
         (iVar37 = *(int *)((long)ppppbVar19 + 1) + -1, 0 < *(int *)((long)ppppbVar19 + 1))) {
        param_8 = (byte ****)param_6[4];
        param_7 = (byte ****)0x0;
        param_6 = (byte ****)((long)param_6[5] + (long)*(int *)((long)ppppbVar19 + 5));
        do {
          uVar21 = (uint)param_7;
          iVar1 = iVar37 + uVar21;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          if (param_8[*(uint *)(param_6 + iVar1)] == (byte ***)0xabb6b6fef) {
            uVar21 = *(uint *)((long)(param_6 + iVar1) + 4);
            if (-1 < (int)uVar21) {
              param_5 = (byte ****)((long)ppppbVar19 + (long)(int)uVar21);
            }
            break;
          }
          iVar11 = iVar1 + -1;
          if (param_8[*(uint *)(param_6 + iVar1)] < (byte ***)0xabb6b6ff0) {
            uVar21 = iVar1 + 1;
            iVar11 = iVar37;
          }
          iVar37 = iVar11;
          param_7 = (byte ****)(ulong)uVar21;
        } while ((int)uVar21 <= iVar37);
      }
      iVar37 = (int)cVar7;
      switch(*(undefined1 *)param_5) {
      case 1:
      case 3:
        param_4 = (byte ****)(ulong)*(byte *)((long)param_5 + 1);
        if ((int)(uint)*(byte *)((long)param_5 + 1) <= iVar37) goto LAB_71023e3e30;
        break;
      case 2:
        param_4 = (byte ****)(long)*(char *)((long)param_5 + 1);
        iVar18 = (int)*(char *)((long)param_5 + 1);
        goto joined_r0x0071023e3dfc;
      case 4:
        param_4 = (byte ****)(long)*(short *)((long)param_5 + 1);
        iVar18 = (int)*(short *)((long)param_5 + 1);
joined_r0x0071023e3dfc:
        if (iVar37 < iVar18) break;
LAB_71023e3e30:
        uVar14 = uVar14 + 1;
        if (lVar30 <= (long)uVar14) goto LAB_71023e4524;
        goto LAB_71023e3abc;
      case 5:
        param_4 = (byte ****)(ulong)*(ushort *)((long)param_5 + 1);
        uVar21 = (uint)*(ushort *)((long)param_5 + 1);
        goto joined_r0x0071023e3dec;
      case 6:
      case 7:
        uVar21 = *(uint *)((long)param_5 + 1);
        param_4 = (byte ****)(ulong)uVar21;
joined_r0x0071023e3dec:
        if (iVar18 < (int)uVar21) break;
        goto LAB_71023e3e30;
      default:
        param_4 = (byte ****)0x0;
        if (-1 < iVar18) goto LAB_71023e3e30;
      }
      pbVar26 = &DAT_7104742dbb;
      ppppbVar19 = (byte ****)0x0;
      if ((bVar20 == 0xb) && (iVar42 < iVar13)) {
        pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5);
        ppppbVar19 = ppppbVar49;
      }
      if ((*pbVar26 != 0xc) || (uVar21 = *(int *)(pbVar26 + 1) - 1, *(int *)(pbVar26 + 1) < 1))
      goto LAB_71023e40b8;
      iVar18 = 0;
      param_4 = (byte ****)((long)ppppbVar19[5] + (long)*(int *)(pbVar26 + 5));
      pbVar32 = &DAT_7104742dbb;
      goto LAB_71023e3f58;
    }
  }
  goto LAB_71023e4524;
  while( true ) {
    iVar1 = iVar37 + -1;
    if (ppppbVar19[4][*puVar43] <= ppppbVar31) {
      iVar18 = iVar37 + 1;
      iVar1 = iVar13;
    }
    iVar13 = iVar1;
    if (iVar13 < iVar18) break;
LAB_71023e3ebc:
    iVar37 = iVar13 + iVar18;
    if (iVar37 < 0) {
      iVar37 = iVar37 + 1;
    }
    iVar37 = iVar37 >> 1;
    puVar43 = (uint *)((long)ppppbVar19[5] + (long)iVar37 * 8 + (long)*(int *)(pbVar26 + 5));
    if ((byte ****)ppppbVar19[4][*puVar43] == ppppbVar31) {
      uVar21 = puVar43[1];
      if ((int)uVar21 < 0) {
LAB_71023e3fa8:
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = pbVar26 + (int)uVar21;
      }
      break;
    }
  }
  switch(*pbVar32) {
  case 1:
  case 3:
    uVar21 = (uint)pbVar32[1];
    break;
  case 2:
    uVar21 = (uint)(char)pbVar32[1];
    break;
  case 4:
    uVar21 = (uint)*(short *)(pbVar32 + 1);
    break;
  case 5:
    uVar21 = (uint)*(ushort *)(pbVar32 + 1);
    break;
  case 6:
  case 7:
    uVar21 = *(uint *)(pbVar32 + 1);
    break;
  default:
    uVar21 = 0;
  }
  local_e0 = CONCAT44(local_e0._4_4_,uVar21);
  if ((*pbVar50 == 0xb) && (iVar42 < *(int *)(pbVar50 + 1))) {
    pbVar50 = pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5);
  }
  else {
    ppppbVar49 = (byte ****)0x0;
    pbVar50 = &DAT_7104742dbb;
  }
  if ((*pbVar50 != 0xc) || (iVar13 = *(int *)(pbVar50 + 1) + -1, *(int *)(pbVar50 + 1) < 1))
  goto LAB_71023e44f0;
  iVar18 = 0;
  do {
    iVar42 = iVar13 + iVar18;
    if (iVar42 < 0) {
      iVar42 = iVar42 + 1;
    }
    iVar42 = iVar42 >> 1;
    puVar43 = (uint *)((long)ppppbVar49[5] + (long)iVar42 * 8 + (long)*(int *)(pbVar50 + 5));
    if (ppppbVar49[4][*puVar43] == ppbVar6) goto LAB_71023e44e0;
    iVar37 = iVar42 + -1;
    if (ppppbVar49[4][*puVar43] <= ppbVar6) {
      iVar18 = iVar42 + 1;
      iVar37 = iVar13;
    }
    iVar13 = iVar37;
  } while (iVar18 <= iVar13);
  goto LAB_71023e44d8;
LAB_71023e44e0:
  if ((int)puVar43[1] < 0) {
LAB_71023e44f0:
    ppppbVar49 = (byte ****)0x0;
    pbVar50 = &DAT_7104742dbb;
  }
  else {
    pbVar50 = pbVar50 + (int)puVar43[1];
  }
  goto LAB_71023e44fc;
  while( true ) {
    param_6 = (byte ****)(ulong)(uVar35 - 1);
    uVar34 = uVar35 - 1;
    if (param_7 < (byte ****)0xabb6b6ff0) {
      iVar18 = uVar35 + 1;
      uVar34 = uVar21;
    }
    uVar21 = uVar34;
    if ((int)uVar21 < iVar18) break;
LAB_71023e3f58:
    iVar1 = uVar21 + iVar18;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    uVar35 = iVar1 >> 1;
    param_5 = (byte ****)(ulong)uVar35;
    param_6 = param_4 + (int)uVar35;
    param_7 = (byte ****)ppppbVar19[4][*(uint *)param_6];
    if (param_7 == (byte ****)0xabb6b6fef) {
      if ((int)*(uint *)((long)param_6 + 4) < 0) {
LAB_71023e40b8:
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = pbVar26 + (int)*(uint *)((long)param_6 + 4);
      }
      break;
    }
  }
  switch(*pbVar32) {
  case 1:
  case 3:
    uVar21 = (uint)pbVar32[1];
    break;
  case 2:
    uVar21 = (uint)(char)pbVar32[1];
    break;
  case 4:
    uVar21 = (uint)*(short *)(pbVar32 + 1);
    break;
  case 5:
    uVar21 = (uint)*(ushort *)(pbVar32 + 1);
    break;
  case 6:
  case 7:
    uVar21 = *(uint *)(pbVar32 + 1);
    break;
  default:
    uVar21 = 0;
  }
  pbVar26 = &DAT_7104742dbb;
  ppppbVar19 = (byte ****)0x0;
  if ((bVar20 == 0xb) && ((int)uVar25 < iVar13)) {
    pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar25 & 0x3fffffff) * 4 + 5);
    ppppbVar19 = ppppbVar49;
  }
  if ((*pbVar26 == 0xc) && (uVar35 = *(int *)(pbVar26 + 1) - 1, 0 < *(int *)(pbVar26 + 1))) {
    param_4 = (byte ****)ppppbVar19[4];
    iVar18 = 0;
    param_5 = (byte ****)((long)ppppbVar19[5] + (long)*(int *)(pbVar26 + 5));
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar1 = uVar35 + iVar18;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar34 = iVar1 >> 1;
      param_6 = (byte ****)(ulong)uVar34;
      param_7 = param_5 + (int)uVar34;
      param_8 = (byte ****)param_4[*(uint *)param_7];
      if (param_8 == (byte ****)0xabb6b6fef) {
        if ((int)*(uint *)((long)param_7 + 4) < 0) goto LAB_71023e41bc;
        pbVar32 = pbVar26 + (int)*(uint *)((long)param_7 + 4);
        break;
      }
      param_7 = (byte ****)(ulong)(uVar34 - 1);
      uVar36 = uVar34 - 1;
      if (param_8 < (byte ****)0xabb6b6ff0) {
        iVar18 = uVar34 + 1;
        uVar36 = uVar35;
      }
      uVar35 = uVar36;
    } while (iVar18 <= (int)uVar35);
  }
  else {
LAB_71023e41bc:
    pbVar32 = &DAT_7104742dbb;
  }
  switch(*pbVar32) {
  case 1:
  case 3:
    uVar35 = (uint)pbVar32[1];
    break;
  case 2:
    uVar35 = (uint)(char)pbVar32[1];
    break;
  case 4:
    uVar35 = (uint)*(short *)(pbVar32 + 1);
    break;
  case 5:
    uVar35 = (uint)*(ushort *)(pbVar32 + 1);
    break;
  case 6:
  case 7:
    uVar35 = *(uint *)(pbVar32 + 1);
    break;
  default:
    uVar35 = 0;
  }
  pbVar26 = &DAT_7104742dbb;
  ppppbVar19 = (byte ****)0x0;
  if ((bVar20 == 0xb) && (iVar42 < iVar13)) {
    pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5);
    ppppbVar19 = ppppbVar49;
  }
  if ((*pbVar26 == 0xc) && (uVar34 = *(int *)(pbVar26 + 1) - 1, 0 < *(int *)(pbVar26 + 1))) {
    param_4 = (byte ****)ppppbVar19[4];
    iVar18 = 0;
    param_5 = (byte ****)((long)ppppbVar19[5] + (long)*(int *)(pbVar26 + 5));
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar1 = uVar34 + iVar18;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar36 = iVar1 >> 1;
      param_6 = (byte ****)(ulong)uVar36;
      param_7 = param_5 + (int)uVar36;
      param_8 = (byte ****)param_4[*(uint *)param_7];
      if (param_8 == ppppbVar31) {
        if ((int)*(uint *)((long)param_7 + 4) < 0) goto LAB_71023e42c0;
        pbVar32 = pbVar26 + (int)*(uint *)((long)param_7 + 4);
        break;
      }
      param_7 = (byte ****)(ulong)(uVar36 - 1);
      uVar5 = uVar36 - 1;
      if (param_8 <= ppppbVar31) {
        iVar18 = uVar36 + 1;
        uVar5 = uVar34;
      }
      uVar34 = uVar5;
    } while (iVar18 <= (int)uVar34);
  }
  else {
LAB_71023e42c0:
    pbVar32 = &DAT_7104742dbb;
  }
  switch(*pbVar32) {
  case 1:
  case 3:
    uVar34 = (uint)pbVar32[1];
    break;
  case 2:
    uVar34 = (uint)(char)pbVar32[1];
    break;
  case 4:
    uVar34 = (uint)*(short *)(pbVar32 + 1);
    break;
  case 5:
    uVar34 = (uint)*(ushort *)(pbVar32 + 1);
    break;
  case 6:
  case 7:
    uVar34 = *(uint *)(pbVar32 + 1);
    break;
  default:
    uVar34 = 0;
  }
  pbVar26 = &DAT_7104742dbb;
  ppppbVar19 = (byte ****)0x0;
  if ((bVar20 == 0xb) && ((int)uVar25 < iVar13)) {
    pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar25 & 0x3fffffff) * 4 + 5);
    ppppbVar19 = ppppbVar49;
  }
  if ((*pbVar26 == 0xc) && (uVar36 = *(int *)(pbVar26 + 1) - 1, 0 < *(int *)(pbVar26 + 1))) {
    iVar13 = 0;
    pbVar32 = &DAT_7104742dbb;
    do {
      iVar18 = uVar36 + iVar13;
      if (iVar18 < 0) {
        iVar18 = iVar18 + 1;
      }
      uVar5 = iVar18 >> 1;
      param_4 = (byte ****)(ulong)uVar5;
      param_5 = (byte ****)
                ((long)ppppbVar19[5] + (long)(int)uVar5 * 8 + (long)*(int *)(pbVar26 + 5));
      param_6 = (byte ****)ppppbVar19[4][*(uint *)param_5];
      if (param_6 == ppppbVar31) {
        if ((int)*(uint *)((long)param_5 + 4) < 0) goto LAB_71023e43c4;
        pbVar32 = pbVar26 + (int)*(uint *)((long)param_5 + 4);
        break;
      }
      param_5 = (byte ****)(ulong)(uVar5 - 1);
      uVar12 = uVar5 - 1;
      if (param_6 <= ppppbVar31) {
        iVar13 = uVar5 + 1;
        uVar12 = uVar36;
      }
      uVar36 = uVar12;
    } while (iVar13 <= (int)uVar36);
  }
  else {
LAB_71023e43c4:
    pbVar32 = &DAT_7104742dbb;
  }
  switch(*pbVar32) {
  case 1:
  case 3:
    uVar36 = (uint)pbVar32[1];
    break;
  case 2:
    uVar36 = (uint)(char)pbVar32[1];
    break;
  case 4:
    uVar36 = (uint)*(short *)(pbVar32 + 1);
    break;
  case 5:
    uVar36 = (uint)*(ushort *)(pbVar32 + 1);
    break;
  case 6:
  case 7:
    uVar36 = *(uint *)(pbVar32 + 1);
    break;
  default:
    uVar36 = 0;
  }
  iVar13 = 0;
  if (uVar35 - uVar21 != 0) {
    iVar13 = (int)((iVar37 - uVar21) * (uVar36 - uVar34)) / (int)(uVar35 - uVar21);
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar13 + uVar34);
  if ((*pbVar50 == 0xb) && (iVar42 < *(int *)(pbVar50 + 1))) {
    pbVar50 = pbVar50 + *(int *)(pbVar50 + (uVar14 & 0x3fffffff) * 4 + 5);
  }
  else {
    ppppbVar49 = (byte ****)0x0;
    pbVar50 = &DAT_7104742dbb;
  }
  if ((*pbVar50 != 0xc) || (iVar13 = *(int *)(pbVar50 + 1) + -1, *(int *)(pbVar50 + 1) < 1))
  goto LAB_71023e44f0;
  iVar18 = 0;
  do {
    iVar42 = iVar13 + iVar18;
    if (iVar42 < 0) {
      iVar42 = iVar42 + 1;
    }
    iVar42 = iVar42 >> 1;
    puVar43 = (uint *)((long)ppppbVar49[5] + (long)iVar42 * 8 + (long)*(int *)(pbVar50 + 5));
    if (ppppbVar49[4][*puVar43] == ppbVar6) goto LAB_71023e44e0;
    iVar37 = iVar42 + -1;
    if (ppppbVar49[4][*puVar43] <= ppbVar6) {
      iVar18 = iVar42 + 1;
      iVar37 = iVar13;
    }
    iVar13 = iVar37;
  } while (iVar18 <= iVar13);
LAB_71023e44d8:
  pbVar50 = &DAT_7104742dbb;
  ppppbVar49 = (byte ****)0x0;
LAB_71023e44fc:
  if (*pbVar50 == 9) {
    local_e8 = (long **************)ppppbVar49[4][*(int *)(pbVar50 + 1)];
  }
  else {
    local_e8 = (long **************)0x0;
  }
LAB_71023e4524:
  lVar30 = param_1[0x2b];
  if ('\x01' < *(char *)(lVar30 + 1)) {
    pcVar24 = *(char **)(*(long *)(DAT_7105329de8 + 8) + 0x138);
    if ((*pcVar24 == '\f') && (iVar13 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
      lVar22 = *(long *)(*(long *)(DAT_7105329de8 + 8) + 0x130);
      iVar18 = 0;
      pcVar33 = "";
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0x87779e404) {
          uVar21 = puVar43[1];
          if ((int)uVar21 < 0) goto LAB_71023e45d0;
          pcVar33 = pcVar24 + (int)uVar21;
          break;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0x87779e405) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
    }
    else {
LAB_71023e45d0:
      pcVar33 = "";
    }
    switch(*pcVar33) {
    case '\x01':
    case '\x03':
      uVar21 = (uint)(byte)pcVar33[1];
      break;
    case '\x02':
      uVar21 = (uint)pcVar33[1];
      break;
    case '\x04':
      uVar21 = (uint)*(short *)(pcVar33 + 1);
      break;
    case '\x05':
      uVar21 = (uint)*(ushort *)(pcVar33 + 1);
      break;
    case '\x06':
    case '\a':
      uVar21 = *(uint *)(pcVar33 + 1);
      break;
    default:
      uVar21 = 0;
    }
    local_e0 = CONCAT44(local_e0._4_4_,(int)((int)local_e0 * uVar21) / 100);
  }
  if ((*(char *)(lVar30 + 0x25d) == '\0') && (*(char *)(lVar30 + 10) == '\0')) {
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  pppplVar17 = (long ****)&DAT_00000004;
  FUN_71023e6470(&local_148,&local_e8,4,param_4,(long ****)param_5,(long)param_6,(ulong)param_7,
                 (ulong)param_8);
  if (local_c8 != 0) {
    local_c0 = local_c8;
    FUN_710392eb40(local_c8);
  }
  lVar30 = param_1[0x2b];
  if (*(char *)(lVar30 + 0x25c) != '\0') {
    pcVar24 = *(char **)(*(long *)(DAT_7105329de8 + 8) + 0x138);
    if ((*pcVar24 == '\f') && (iVar13 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
      lVar22 = *(long *)(*(long *)(DAT_7105329de8 + 8) + 0x130);
      iVar18 = 0;
      pcVar33 = "";
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0x59f987f7a) {
          uVar21 = puVar43[1];
          if ((int)uVar21 < 0) goto LAB_71023e472c;
          pcVar33 = pcVar24 + (int)uVar21;
          goto LAB_71023e4738;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0x59f987f7b) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
      lVar22 = 0;
    }
    else {
LAB_71023e472c:
      lVar22 = 0;
      pcVar33 = "";
    }
LAB_71023e4738:
    local_190 = (long ************)&DAT_3f8000003f800000;
    local_178 = (undefined8 *)0x0;
    local_170 = 0;
    local_188 = (long ************)&DAT_3f8000003f800000;
    local_180 = (undefined **)0x0;
    if ((*pcVar33 == '\f') && (iVar13 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
      iVar18 = 0;
      pcVar24 = "";
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pcVar33 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0x532993751) {
          uVar21 = puVar43[1];
          if ((int)uVar21 < 0) goto LAB_71023e47e8;
          pcVar24 = pcVar33 + (int)uVar21;
          break;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0x532993752) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
    }
    else {
LAB_71023e47e8:
      pcVar24 = "";
    }
    switch(*pcVar24) {
    case '\x01':
    case '\x03':
      uVar21 = (uint)(byte)pcVar24[1];
      break;
    case '\x02':
      uVar21 = (uint)pcVar24[1];
      break;
    case '\x04':
      uVar21 = (uint)*(short *)(pcVar24 + 1);
      break;
    case '\x05':
      uVar21 = (uint)*(ushort *)(pcVar24 + 1);
      break;
    case '\x06':
    case '\a':
      uVar21 = *(uint *)(pcVar24 + 1);
      break;
    default:
      uVar21 = 0;
    }
    if ((*pcVar33 == '\f') && (iVar13 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
      iVar18 = 0;
      pcVar24 = "";
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pcVar33 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0x8b5e8b174) {
          uVar35 = puVar43[1];
          if ((int)uVar35 < 0) goto LAB_71023e48f0;
          pcVar24 = pcVar33 + (int)uVar35;
          break;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0x8b5e8b175) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
    }
    else {
LAB_71023e48f0:
      pcVar24 = "";
    }
    switch(*pcVar24) {
    case '\x01':
    case '\x03':
      uVar35 = (uint)(byte)pcVar24[1];
      break;
    case '\x02':
      uVar35 = (uint)pcVar24[1];
      break;
    case '\x04':
      uVar35 = (uint)*(short *)(pcVar24 + 1);
      break;
    case '\x05':
      uVar35 = (uint)*(ushort *)(pcVar24 + 1);
      break;
    case '\x06':
    case '\a':
      uVar35 = *(uint *)(pcVar24 + 1);
      break;
    default:
      uVar35 = 0;
    }
    uVar34 = 0;
    if (uVar21 != 0) {
      uVar34 = (int)(uVar35 * (*(int *)(lVar30 + 0x244) + *(int *)(lVar30 + 0x240))) / (int)uVar21;
    }
    if ((int)uVar34 <= (int)uVar35) {
      uVar35 = uVar34;
    }
    local_198 = (long ************)CONCAT44(0x3f800000,uVar35);
    if ((*pcVar33 == '\f') && (iVar13 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
      iVar18 = 0;
      pcVar24 = "";
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pcVar33 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0xacfaa77dd) {
          uVar21 = puVar43[1];
          if ((int)uVar21 < 0) goto LAB_71023e49f0;
          pcVar24 = pcVar33 + (int)uVar21;
          goto LAB_71023e49fc;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0xacfaa77de) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
      lVar22 = 0;
    }
    else {
LAB_71023e49f0:
      lVar22 = 0;
      pcVar24 = "";
    }
LAB_71023e49fc:
    if (*pcVar24 == '\t') {
      local_1a0 = *(undefined ***)(*(long *)(lVar22 + 0x20) + (long)*(int *)(pcVar24 + 1) * 8);
    }
    else {
      local_1a0 = (undefined **)0x0;
    }
    pppplVar17 = (long ****)&DAT_00000008;
    FUN_71023e6470(&local_148,(long ***************)&local_1a0,8,param_4,(long ****)param_5,
                   (long)param_6,(ulong)param_7,(ulong)param_8);
    if (local_180 != (undefined **)0x0) {
      local_178 = local_180;
      FUN_710392eb40((ulong)local_180);
    }
    pcVar24 = *(char **)(*(long *)(DAT_7105329de8 + 8) + 0x138);
    if ((*pcVar24 == '\f') && (iVar13 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
      lVar30 = *(long *)(*(long *)(DAT_7105329de8 + 8) + 0x130);
      iVar18 = 0;
      pbVar50 = &DAT_7104742dbb;
      do {
        iVar42 = iVar13 + iVar18;
        if (iVar42 < 0) {
          iVar42 = iVar42 + 1;
        }
        iVar42 = iVar42 >> 1;
        puVar43 = (uint *)(*(long *)(lVar30 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar42 * 8
                          );
        uVar14 = *(ulong *)(*(long *)(lVar30 + 0x20) + (ulong)*puVar43 * 8);
        if (uVar14 == 0x61cc16efe) {
          uVar21 = puVar43[1];
          if ((int)uVar21 < 0) goto LAB_71023e4ae0;
          pbVar50 = (byte *)(pcVar24 + (int)uVar21);
          goto LAB_71023e4aec;
        }
        iVar37 = iVar42 + -1;
        if (uVar14 < 0x61cc16eff) {
          iVar18 = iVar42 + 1;
          iVar37 = iVar13;
        }
        iVar13 = iVar37;
      } while (iVar18 <= iVar13);
      lVar30 = 0;
    }
    else {
LAB_71023e4ae0:
      lVar30 = 0;
      pbVar50 = &DAT_7104742dbb;
    }
LAB_71023e4aec:
    local_a8 = (long ***)0x0;
    local_a0 = (long ***)0x0;
    local_b0 = (long ***)0x0;
    bVar20 = *pbVar50;
    if ((bVar20 - 0xb < 2) &&
       (uVar14 = (ulong)*(uint *)(pbVar50 + 1), 0 < (int)*(uint *)(pbVar50 + 1))) {
      uVar25 = 0;
      do {
        ppplVar29 = local_b0;
        iVar13 = *(int *)(param_1[0x2b] + 0x24c);
        lVar22 = 0;
        if (bVar20 == 0xb) {
          pbVar26 = &DAT_7104742dbb;
          if ((long)uVar25 < (long)(int)uVar14) {
            pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar25 & 0x3fffffff) * 4 + 5);
            lVar22 = lVar30;
          }
        }
        else {
          pbVar26 = &DAT_7104742dbb;
        }
        pbVar32 = &DAT_7104742dbb;
        if ((*pbVar26 == 0xc) && (iVar18 = *(int *)(pbVar26 + 1) + -1, 0 < *(int *)(pbVar26 + 1))) {
          iVar42 = 0;
          do {
            iVar37 = iVar18 + iVar42;
            if (iVar37 < 0) {
              iVar37 = iVar37 + 1;
            }
            iVar37 = iVar37 >> 1;
            puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar26 + 5) +
                              (long)iVar37 * 8);
            uVar44 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
            if (uVar44 == 0x532993751) {
              uVar21 = puVar43[1];
              if (-1 < (int)uVar21) {
                pbVar32 = pbVar26 + (int)uVar21;
              }
              break;
            }
            iVar1 = iVar37 + -1;
            if (uVar44 < 0x532993752) {
              iVar42 = iVar37 + 1;
              iVar1 = iVar18;
            }
            iVar18 = iVar1;
          } while (iVar42 <= iVar18);
        }
        switch(*pbVar32) {
        case 1:
        case 3:
          uVar21 = (uint)pbVar32[1];
          break;
        case 2:
          if (iVar13 < (char)pbVar32[1]) goto LAB_71023e4e84;
          goto LAB_71023e4c84;
        case 4:
          uVar21 = (uint)*(short *)(pbVar32 + 1);
          break;
        case 5:
          uVar21 = (uint)*(ushort *)(pbVar32 + 1);
          break;
        case 6:
        case 7:
          uVar21 = *(uint *)(pbVar32 + 1);
          break;
        default:
          if (-1 < iVar13) goto LAB_71023e4c84;
          goto LAB_71023e4e84;
        }
        if ((int)uVar21 <= iVar13) {
LAB_71023e4c84:
          lVar22 = 0;
          if (bVar20 == 0xb) {
            pbVar26 = &DAT_7104742dbb;
            if ((long)uVar25 < (long)(int)uVar14) {
              pbVar26 = pbVar50 + *(int *)(pbVar50 + (uVar25 & 0x3fffffff) * 4 + 5);
              lVar22 = lVar30;
            }
          }
          else {
            pbVar26 = &DAT_7104742dbb;
          }
          if ((*pbVar26 == 0xc) && (iVar13 = *(int *)(pbVar26 + 1) + -1, 0 < *(int *)(pbVar26 + 1)))
          {
            iVar18 = 0;
            do {
              iVar42 = iVar13 + iVar18;
              if (iVar42 < 0) {
                iVar42 = iVar42 + 1;
              }
              iVar42 = iVar42 >> 1;
              puVar43 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar26 + 5) +
                                (long)iVar42 * 8);
              uVar14 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar43 * 8);
              if (uVar14 == 0xacfaa77dd) {
                uVar21 = puVar43[1];
                if (-1 < (int)uVar21) {
                  pbVar26 = pbVar26 + (int)uVar21;
                  goto LAB_71023e4d3c;
                }
                break;
              }
              iVar37 = iVar42 + -1;
              if (uVar14 < 0xacfaa77de) {
                iVar18 = iVar42 + 1;
                iVar37 = iVar13;
              }
              iVar13 = iVar37;
            } while (iVar18 <= iVar13);
          }
          lVar22 = 0;
          pbVar26 = &DAT_7104742dbb;
LAB_71023e4d3c:
          if (*pbVar26 == 9) {
            pplVar51 = *(long ***)(*(long *)(lVar22 + 0x20) + (long)*(int *)(pbVar26 + 1) * 8);
          }
          else {
            pplVar51 = (long **)0x0;
          }
          if (local_a8 < local_a0) {
            *local_a8 = pplVar51;
            local_a8 = local_a8 + 1;
          }
          else {
            pppplVar48 = (long ****)((long)local_a8 - (long)local_b0);
            uVar14 = ((long)pppplVar48 >> 3) + 1;
            if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_a0 - (long)local_b0 >> 3) < 0xfffffffffffffff) {
              uVar44 = (long)local_a0 - (long)local_b0 >> 2;
              if (uVar14 <= uVar44) {
                uVar14 = uVar44;
              }
              if (uVar14 != 0) {
                if (uVar14 >> 0x3d == 0) goto LAB_71023e4dcc;
                goto LAB_71023e51c0;
              }
LAB_71023e4e2c:
              ppplVar16 = (long ***)0x0;
            }
            else {
              uVar14 = 0x1fffffffffffffff;
LAB_71023e4dcc:
              pppppppppppplVar27 = (long ************)(uVar14 * 8);
              if (pppppppppppplVar27 == (long ************)0x0) {
                pppppppppppplVar27 = (long ************)0x1;
              }
              ppplVar16 = (long ***)
                          FUN_710392e290(0x10,pppppppppppplVar27,pppplVar17,param_4,
                                         (long ****)param_5,param_6,param_7,param_8);
              if (ppplVar16 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_130 = local_130 & 0xffffffff00000000;
                  pppplVar17 = (long ****)&local_1a0;
                  local_1a0 = (undefined **)pppppppppppplVar27;
                  uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                  if (((uVar44 & 1) != 0) &&
                     (ppplVar16 = (long ***)
                                  FUN_710392e290(0x10,pppppppppppplVar27,pppplVar17,param_4,
                                                 (long ****)param_5,param_6,param_7,param_8),
                     ppplVar16 != (long ***)0x0)) goto LAB_71023e4e30;
                }
                goto LAB_71023e4e2c;
              }
            }
LAB_71023e4e30:
            ppplVar2 = ppplVar16 + ((long)pppplVar48 >> 3);
            *ppplVar2 = pplVar51;
            if (0 < (long)pppplVar48) {
              memcpy(ppplVar16,ppplVar29,(size_t)pppplVar48);
              pppplVar17 = pppplVar48;
            }
            local_b0 = ppplVar16;
            local_a8 = ppplVar2 + 1;
            local_a0 = ppplVar16 + uVar14;
            if (ppplVar29 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar29);
            }
          }
          bVar20 = *pbVar50;
        }
LAB_71023e4e84:
        if (1 < (byte)(bVar20 - 0xb)) break;
        uVar14 = (ulong)*(int *)(pbVar50 + 1);
        uVar25 = uVar25 + 1;
      } while ((long)uVar25 < (long)uVar14);
    }
    ppplVar16 = local_a8;
    *(int *)(param_1[0x2b] + 0x254) = (int)((ulong)((long)local_a8 - (long)local_b0) >> 3);
    for (ppplVar29 = local_b0; ppplVar29 != ppplVar16; ppplVar29 = ppplVar29 + 1) {
      local_178 = (undefined8 *)0x0;
      local_170 = 0;
      pppplVar17 = (long ****)&DAT_00000010;
      local_198 = (long ************)&DAT_3f80000000000000;
      local_190 = (long ************)&DAT_3f8000003f800000;
      local_188 = (long ************)&DAT_3f8000003f800000;
      local_180 = (undefined **)0x0;
      local_1a0 = (undefined **)*ppplVar29;
      FUN_71023e6470(&local_148,(long ***************)&local_1a0,0x10,param_4,(long ****)param_5,
                     (long)param_6,(ulong)param_7,(ulong)param_8);
      if (local_180 != (undefined **)0x0) {
        local_178 = local_180;
        FUN_710392eb40((ulong)local_180);
      }
    }
    if (local_b0 != (long ***)0x0) {
      local_a8 = local_b0;
      FUN_710392eb40((ulong)local_b0);
    }
    if (*(char *)(param_1[0x2b] + 0x25c) != '\0') {
      puVar47 = *(undefined1 **)(param_1[0x2b] + 0x10);
      local_1a0 = (undefined **)&local_148;
      lVar30 = *(long *)(DAT_710532f730 + 8);
      lVar22 = *(long *)(lVar30 + 0x168);
      puVar46 = FUN_71032631a0(lVar22,0x11b1ccb807);
      if ((((((ulong)puVar47 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar47 & 0xffffffffff) != 0)) &&
          (((ulong)puVar46 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar46 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar46 ^ (ulong)puVar47) & 0xffffffffff) == 0) {
LAB_71023e4ff0:
          puVar46 = FUN_71032631a0(lVar22,0x1280f1c82e);
          FUN_71023e5b70(&local_1a0,puVar46,pppplVar17,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
          puVar46 = FUN_71032631a0(*(long *)(lVar30 + 0x168),0x14ef73f367);
          FUN_71023e5b70(&local_1a0,puVar46,pppplVar17,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
          puVar47 = FUN_71032631a0(*(long *)(lVar30 + 0x168),0x12915a4ff6);
        }
      }
      else if ((((ulong)puVar46 & 0xffffffffff) != 0 &&
               ((ulong)puVar46 & 0xff00000000000000) == 0xc100000000000000) ==
               (((ulong)puVar47 & 0xff00000000000000) == 0xc100000000000000 &&
               ((ulong)puVar47 & 0xffffffffff) != 0)) goto LAB_71023e4ff0;
      FUN_71023e5b70(&local_1a0,puVar47,pppplVar17,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      plVar28 = *(long **)(DAT_71052c35c0 + 8);
      local_198 = (long ************)plVar28[1];
      local_190 = (long ************)plVar28[2];
      local_180 = (undefined **)plVar28[4];
      if (local_190 == local_198) {
        local_178 = (undefined8 *)plVar28[5];
LAB_71023e50d8:
        iVar13 = 0;
      }
      else {
        plVar39 = (long *)((long)local_198 + ((ulong)local_180 >> 7 & 0x1fffffffffffff8));
        piVar40 = (int *)(*plVar39 + ((ulong)local_180 & 0x3ff) * 4);
        local_178 = (undefined8 *)plVar28[5];
        piVar3 = (int *)(*(long *)((long)local_198 +
                                  ((ulong)((long)local_178 + (long)local_180) >> 7 &
                                  0x1fffffffffffff8)) +
                        ((long)local_178 + (long)local_180 & 0x3ffU) * 4);
        if (piVar3 == piVar40) goto LAB_71023e50d8;
        iVar13 = 0;
        do {
          piVar41 = piVar40 + 1;
          iVar13 = *piVar40 + iVar13;
          if ((long)piVar41 - *plVar39 == 0x1000) {
            plVar39 = plVar39 + 1;
            piVar41 = (int *)*plVar39;
          }
          piVar40 = piVar41;
        } while (piVar3 != piVar41);
      }
      local_1a0 = (undefined **)*plVar28;
      *plVar28 = 0;
      plVar28[1] = 0;
      plVar28[2] = 0;
      local_188 = (long ************)plVar28[3];
      plVar28[3] = 0;
      plVar28[4] = 0;
      plVar28[5] = 0;
      FUN_710143ebe0(&local_1a0);
      if (iVar13 != 0) {
        lVar30 = *(long *)(DAT_710532f730 + 8);
        pppplVar17 = (long ****)
                     FUN_71032817a0(*(long *)(*(long *)(lVar30 + 0x2f8) + 8),0x14a2eb7d34);
        FUN_71032933e0(&local_1a0,lVar30 + 0x2f0,(ulong)pppplVar17);
        __src = local_148;
        local_188 = (long ************)CONCAT44(local_188._4_4_,iVar13);
        if (local_140 < local_138) {
          local_140[2] = local_190;
          local_140[3] = local_188;
          *local_140 = (long ************)local_1a0;
          local_140[1] = local_198;
          local_140 = local_140 + 4;
        }
        else {
          pppplVar48 = (long ****)((long)local_140 - (long)local_148);
          uVar14 = ((long)pppplVar48 >> 5) + 1;
          if (uVar14 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_138 - (long)local_148 >> 5) < 0x3ffffffffffffff) {
            uVar25 = (long)local_138 - (long)local_148 >> 4;
            if (uVar14 <= uVar25) {
              uVar14 = uVar25;
            }
            if (uVar14 != 0) {
              if (uVar14 >> 0x3b != 0) {
LAB_71023e51c0:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_71023e51c8;
            }
LAB_71023e5228:
            __dest = (long *************)0x0;
          }
          else {
            uVar14 = 0x7ffffffffffffff;
LAB_71023e51c8:
            ppplVar29 = (long ***)(uVar14 * 0x20);
            if (ppplVar29 == (long ***)0x0) {
              ppplVar29 = (long ***)0x1;
            }
            __dest = (long *************)
                     FUN_710392e290(0x10,ppplVar29,pppplVar17,param_4,(long ****)param_5,param_6,
                                    param_7,param_8);
            if (__dest == (long *************)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_130 = local_130 & 0xffffffff00000000;
                pppplVar17 = (long ****)&local_b0;
                local_b0 = ppplVar29;
                uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                if (((uVar25 & 1) != 0) &&
                   (__dest = (long *************)
                             FUN_710392e290(0x10,ppplVar29,pppplVar17,param_4,(long ****)param_5,
                                            param_6,param_7,param_8),
                   __dest != (long *************)0x0)) goto LAB_71023e522c;
              }
              goto LAB_71023e5228;
            }
          }
LAB_71023e522c:
          ppppppppppppplVar4 = __dest + ((long)pppplVar48 >> 5) * 4;
          ppppppppppppplVar4[2] = local_190;
          ppppppppppppplVar4[3] = local_188;
          *ppppppppppppplVar4 = (long ************)local_1a0;
          ppppppppppppplVar4[1] = local_198;
          if (0 < (long)pppplVar48) {
            memcpy(__dest,__src,(size_t)pppplVar48);
            pppplVar17 = pppplVar48;
          }
          local_148 = __dest;
          local_140 = ppppppppppppplVar4 + 4;
          local_138 = __dest + uVar14 * 4;
          if (__src != (long *************)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
      }
    }
  }
  uVar21 = 0x811c9dc5;
  local_190 = *(long *************)(param_1[0x2b] + 0x10);
  local_1a0 = &PTR_FUN_71050a2a00;
  local_198 = (long ************)CONCAT44(local_198._4_4_,3);
  local_180 = &PTR_FUN_710523da48;
  local_188 = (long ************)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1[0x2b] + 0x18));
  puVar45 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar17,param_4,(long ****)param_5,param_6,param_7,param_8);
  if (puVar45 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = local_130 & 0xffffffff00000000;
      local_b0 = (long ***)&DAT_00000010;
      pppplVar17 = (long ****)&local_b0;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      if (((uVar14 & 1) != 0) &&
         (puVar45 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,pppplVar17,param_4,(long ****)param_5,param_6,param_7,
                                   param_8), puVar45 != (undefined8 *)0x0)) goto LAB_71023e52fc;
    }
    puVar45 = (undefined8 *)0x0;
  }
LAB_71023e52fc:
  *puVar45 = 0;
  puVar45[1] = 0;
  local_178 = puVar45;
  ppplVar29 = (long ***)((long)local_140 - (long)local_148);
  local_170 = local_170 & 0xffffffff00000000;
  local_160 = (void *)0x0;
  local_158 = (void *)0x0;
  local_168 = (void *)0x0;
  if (ppplVar29 == (long ***)0x0) goto LAB_71023e53b0;
  if ((ulong)((long)ppplVar29 >> 5) >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  __dest_00 = (void *)FUN_710392e290(0x10,ppplVar29,pppplVar17,param_4,(long ****)param_5,param_6,
                                     param_7,param_8);
  if (__dest_00 == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = local_130 & 0xffffffff00000000;
      pppplVar17 = (long ****)&local_b0;
      local_b0 = ppplVar29;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      if (((uVar14 & 1) != 0) &&
         (__dest_00 = (void *)FUN_710392e290(0x10,ppplVar29,pppplVar17,param_4,(long ****)param_5,
                                             param_6,param_7,param_8), __dest_00 != (void *)0x0))
      goto LAB_71023e5380;
    }
    __dest_00 = (void *)0x0;
  }
LAB_71023e5380:
  local_158 = (void *)((long)__dest_00 + ((long)ppplVar29 >> 5) * 0x20);
  __n = (long)local_140 - (long)local_148;
  local_168 = __dest_00;
  local_160 = __dest_00;
  if (0 < (long)__n) {
    memcpy(__dest_00,local_148,__n);
    local_160 = (void *)((long)__dest_00 + __n);
  }
LAB_71023e53b0:
  local_150 = 0;
  lVar22 = *param_1;
  local_130 = 0xe00000000;
  local_128[0] = 0x50;
  local_128[1] = 0x72;
  local_128[2] = 0x69;
  local_128[3] = 0x7a;
  local_128[4] = 0x65;
  local_128[5] = 0x4c;
  local_128[6] = 0x69;
  local_128[7] = 0x73;
  local_128[8] = 0x74;
  local_128[9] = 0x53;
  local_128[10] = 99;
  local_128[0xb] = 0x65;
  uVar34 = 0x50;
  lVar30 = 9;
  local_128[0xc] = 0x6e;
  local_128[0xd] = 0x65;
  local_128[0xe] = 0;
  uVar35 = 0x811c9dc5;
  do {
    uVar35 = uVar35 * 0x89 ^ uVar34;
    uVar34 = (uint)*(byte *)((long)&local_130 + lVar30);
    lVar30 = lVar30 + 1;
  } while (uVar34 != 0);
  local_130 = CONCAT44(0xe,uVar35);
  lVar30 = *(long *)(lVar22 + 0x38);
  if (lVar30 == 0) {
    local_a8 = (long ***)((ulong)local_a8 & 0xffffffffffffff00);
    local_b0 = (long ***)0x0;
  }
  else {
    uVar14 = 0;
    while( true ) {
      pcVar24 = (char *)(lVar30 + 0x10 + uVar14);
      cVar7 = *pcVar24;
      if (cVar7 == '\0') break;
      *(char *)((long)&local_a8 + uVar14) = cVar7;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar7 = pcVar24[1];
      if (cVar7 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_a8 + uVar14 + 1) = cVar7;
      uVar14 = uVar14 + 2;
    }
    *(undefined1 *)((long)&local_a8 + (uVar14 & 0xffffffff)) = 0;
    uVar35 = (uint)(byte)local_a8;
    local_b0 = (long ***)(uVar14 << 0x20);
    if ((byte)local_a8 != 0) {
      pbVar50 = (byte *)((long)&local_a8 + 1);
      uVar21 = 0x811c9dc5;
      do {
        uVar21 = uVar21 * 0x89 ^ uVar35;
        uVar35 = (uint)*pbVar50;
        pbVar50 = pbVar50 + 1;
      } while (uVar35 != 0);
    }
    local_b0 = (long ***)CONCAT44((int)uVar14,uVar21);
  }
  FUN_71037266d0(*(long *)(lVar22 + 0x20),&local_130,(long ****)&local_b0,(byte ****)&local_1a0,
                 (long ****)param_5,param_6,param_7,param_8);
  *(undefined4 *)(lVar22 + 0x30) = 1;
  local_1a0 = &PTR_FUN_71050a2a00;
  if (local_168 != (void *)0x0) {
    local_160 = local_168;
    FUN_710392eb40((ulong)local_168);
  }
  puVar45 = local_178;
  local_180 = &PTR_FUN_710523da48;
  local_178 = (undefined8 *)0x0;
  if (puVar45 != (undefined8 *)0x0) {
    plVar28 = (long *)puVar45[1];
    *puVar45 = 0;
    puVar45[1] = 0;
    if (plVar28 != (long *)0x0) {
      plVar39 = plVar28 + 1;
      do {
        lVar30 = *plVar39;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar39,0x10);
        if (bVar9) {
          *plVar39 = lVar30 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        std::__shared_weak_count::__release_weak();
      }
      plVar28 = (long *)puVar45[1];
      if (plVar28 != (long *)0x0) {
        plVar39 = plVar28 + 1;
        do {
          lVar30 = *plVar39;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar39,0x10);
          if (bVar9) {
            *plVar39 = lVar30 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar30 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar45);
  }
  if (local_148 != (long *************)0x0) {
    local_140 = local_148;
    FUN_710392eb40((ulong)local_148);
  }
  return;
}

