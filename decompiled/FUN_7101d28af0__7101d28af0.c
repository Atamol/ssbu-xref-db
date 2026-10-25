// addr:      7101d28af0
// offset:    0x1d28af0
// name:      FUN_7101d28af0
// mangled:   
// signature: undefined __cdecl FUN_7101d28af0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * * * * * * * * * * param_5, long * * * * * * * * * param_6, ulong param_7, ulong param_8)


void FUN_7101d28af0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long *************param_5,long *********param_6,ulong param_7,ulong param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  undefined8 uVar21;
  long *********ppppppppplVar22;
  byte ****ppppbVar23;
  long *********ppppppppplVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  byte *pbVar28;
  uint uVar29;
  ulong uVar30;
  char cVar31;
  long lVar32;
  long *********ppppppppplVar33;
  undefined8 *puVar34;
  byte bVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  uint uVar39;
  float fVar40;
  long ***local_488;
  char acStack_480 [4];
  char local_47c [72];
  char local_434 [396];
  undefined **local_2a8;
  uint local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined2 local_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  undefined2 local_242;
  long ************local_218;
  ulong local_210;
  long ********local_208;
  ulong local_200;
  long ********local_1f8;
  ulong local_1f0;
  undefined **local_1e8;
  long *local_1e0;
  long ********local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_19e;
  undefined4 local_196;
  undefined2 local_192;
  undefined8 local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_156;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined4 local_148;
  undefined2 local_144;
  undefined1 local_142;
  undefined8 local_128;
  undefined1 local_120 [64];
  undefined **local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined1 local_b2;
  long ********local_88;
  ulong local_80;
  
  if (*(int *)(param_1 + 0x11c) != 0) {
    lVar26 = *(long *)(param_1 + 0x158);
    if (*(int *)(lVar26 + 0xe8) == 0) {
      if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161) == '\0') {
        return;
      }
      if (*(int *)(*(long *)(DAT_710532f7e8 + 8) + 0xe8) != 2) {
        return;
      }
      FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x170),param_2,param_3,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      uVar21 = 1;
      **(uint **)(DAT_710593b988 + 8) =
           **(uint **)(DAT_710593b988 + 8) &
           (1 << (ulong)(*(uint *)(param_1 + 0x14c) & 0x1f) ^ 0xffffffffU);
      FUN_71033145d0(DAT_710532f8d0,0xd9ffff13b148f9ab,1,param_4,(long ****)param_5,param_6,param_7,
                     param_8);
      (**(code **)(**(long **)(param_1 + 0x178) + 0x70))(*(long **)(param_1 + 0x178),1);
      lVar26 = *(long *)(param_1 + 0x188);
      uVar9 = *(uint *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8);
      ppppbVar23 = (byte ****)(ulong)uVar9;
      uVar19 = extraout_x1_00;
      if (*(uint *)(lVar26 + 0x94) != uVar9) {
        uVar21 = 1;
        *(uint *)(lVar26 + 0x94) = uVar9;
        FUN_710377a280(lVar26,(byte *)(lVar26 + 0x18),1);
        uVar19 = extraout_x1_01;
      }
      *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
      if (*(uint *)(param_1 + 0x114) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x114) * 4 + 200) = 6;
        if ((((((*(char *)(param_1 + 0x1b8) == '\0') && (*(char *)(param_1 + 0x1e8) == '\0')) &&
              (*(char *)(param_1 + 0x218) == '\0')) &&
             (((*(char *)(param_1 + 0x248) == '\0' && (*(char *)(param_1 + 0x278) == '\0')) &&
              ((*(char *)(param_1 + 0x2a8) == '\0' &&
               ((*(char *)(param_1 + 0x2d8) == '\0' && (*(char *)(param_1 + 0x308) == '\0'))))))))
            && (*(char *)(param_1 + 0x338) == '\0')) && (*(char *)(param_1 + 0x368) == '\0')) {
          return;
        }
        FUN_7101d2b290(param_1,uVar19,uVar21,ppppbVar23,param_5,(long)param_6,param_7,param_8);
        return;
      }
      goto LAB_7101d2a9f8;
    }
    if (*(char *)(lVar26 + 0x268) == '\0') {
      return;
    }
    if (*(char *)(lVar26 + 0x269) != '\0') {
      *(undefined4 *)(param_1 + 0x55c) = 4;
    }
    pppplVar20 = (long ****)(param_1 + 400);
    memcpy((void *)(param_1 + 0x370),pppplVar20,0x1e0);
    if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar19 = 0x1e0;
    memcpy(&local_488,&DAT_7105308570,0x1e0);
    if ((((ulong)local_488 & 0xff00000000000000) != 0xc100000000000000) ||
       (((ulong)local_488 & 0xffffffffff) == 0)) {
      FUN_7103384c30(&local_488,1,uVar19,param_4,param_5,(long)param_6,param_7,param_8);
    }
    memcpy(pppplVar20,&local_488,0x1e0);
    FUN_7101d2ad80(param_1,param_1 + 0x370,(long)pppplVar20);
    FUN_7101d2aec0(param_1,extraout_x1,pppplVar20,param_4,(long ****)param_5,param_6,param_7,param_8
                  );
    lVar26 = *(long *)(param_1 + 0x158);
    if ((*(int *)(lVar26 + 0xe8) != 0) && (*(int *)(lVar26 + 0xe8) != 6)) {
      if (0x12 < *(uint *)(lVar26 + 0xe4)) goto LAB_7101d2a9f8;
      *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar26 + 0xe4) * 4 + 0x98) = 6;
    }
    if (*(char *)(lVar26 + 0x25f) == '\0') goto LAB_7101d28e48;
    plVar17 = (long *)(*DAT_7105314508 + 0x5b4dd8);
    plVar16 = (long *)(*DAT_7105314508 + 0x5b4de8);
    if (*plVar16 == 0) {
      plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar20,param_4,(long ****)param_5,param_6,
                                       param_7,param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = local_d0 & 0xffffffff00000000;
          local_488 = (long ***)&SUB_00000018;
          pppplVar20 = &local_488;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar12 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar20,param_4,(long ****)param_5,
                                               param_6,param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101d28e20;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101d28e20:
      *(undefined1 *)(plVar11 + 2) = 0;
      plVar11[1] = (long)plVar17;
      lVar27 = *plVar17;
      *plVar11 = lVar27;
      *(long **)(lVar27 + 8) = plVar11;
      *plVar17 = (long)plVar11;
      *plVar16 = *plVar16 + 1;
    }
    else {
      *(byte *)(*plVar17 + 0x10) = *(byte *)(*plVar17 + 0x10) & 1;
    }
    *(undefined1 *)(lVar26 + 0x25f) = 0;
LAB_7101d28e48:
    *(undefined1 *)(lVar26 + 0x260) = 0;
    *(undefined1 *)(lVar26 + 0x268) = 0;
    lVar26 = DAT_710532f8b8;
    if (*(char *)(param_1 + 0x140) != '\0') {
      fVar40 = (float)FUN_71033112b0(0x41900000,*(long *)(DAT_710532f8c0 + 8),0x10c14641ae);
      lVar26 = *(long *)(lVar26 + 8);
      iVar10 = *(int *)(lVar26 + 100);
      iVar6 = iVar10 + -1;
      *(int *)(lVar26 + 100) = iVar6;
      if (iVar6 == 0 || iVar10 < 1) {
        if (fVar40 <= 1.0) {
          fVar40 = 1.0;
        }
        *(undefined4 *)(lVar26 + 0x50) = 0;
        *(undefined4 *)(lVar26 + 0x54) = *(undefined4 *)(lVar26 + 0x58);
        *(undefined4 *)(lVar26 + 0x5c) = 0;
        *(undefined4 *)(lVar26 + 100) = 0;
        *(float *)(lVar26 + 0x60) = 1.0 / fVar40;
      }
    }
    if (*(char *)(param_1 + 0x141) != '\0') {
      FUN_71032fffb0(*(long *)(DAT_710532f840 + 8),3);
    }
    return;
  }
  uVar9 = *(uint *)(param_1 + 0x144);
  pppplVar20 = (long ****)(ulong)uVar9;
  if ((int)uVar9 < 0x500000) {
    if ((int)uVar9 < 0x250000) {
      if ((int)uVar9 < 0x200000) {
        if ((int)uVar9 < 0x150000) {
          if ((int)uVar9 < 0x100000) {
            if ((int)uVar9 < 0xfe000) {
              if ((int)uVar9 < 0x50000) {
                if ((int)uVar9 < 0x10000) {
                  iVar10 = 3;
                  if (0 < (int)uVar9) {
                    iVar10 = 0;
                  }
                }
                else {
                  iVar10 = 1;
                }
              }
              else {
                iVar10 = 2;
              }
            }
            else {
              iVar10 = 8;
            }
          }
          else {
            iVar10 = 4;
          }
        }
        else {
          iVar10 = 6;
        }
      }
      else {
        iVar10 = 5;
      }
    }
    else {
      iVar10 = 7;
    }
  }
  else {
    iVar10 = 9;
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x170),iVar10,pppplVar20,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  uVar9 = *(uint *)(param_1 + 0x180);
  if (9 < uVar9) goto LAB_7101d2a9f8;
  uVar39 = 0x811c9dc5;
  lVar27 = param_1 + (long)(int)uVar9 * 0x30;
  FUN_71032d6810(param_1 + 0x138,0,pppplVar20,param_4,(long ****)param_5,param_6,param_7,param_8);
  lVar26 = *(long *)(param_1 + 0x158);
  uVar19 = *(undefined8 *)(lVar27 + 0x198);
  *(undefined8 *)(lVar26 + 0x118) = *(undefined8 *)(lVar27 + 400);
  *(undefined8 *)(lVar26 + 0x120) = uVar19;
  uVar21 = *(undefined8 *)(lVar27 + 0x1b0);
  uVar19 = *(undefined8 *)(lVar27 + 0x1a0);
  uVar3 = *(undefined1 *)(lVar27 + 0x1b8);
  *(undefined8 *)(lVar26 + 0x130) = *(undefined8 *)(lVar27 + 0x1a8);
  *(undefined8 *)(lVar26 + 0x138) = uVar21;
  *(undefined1 *)(lVar26 + 0x140) = uVar3;
  *(undefined8 *)(lVar26 + 0x128) = uVar19;
  FUN_710338bbe0(&local_488,lVar26 + 0x118,pppplVar20,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(lVar26 + 0x148) = local_488._0_1_;
  if ((long ****)(lVar26 + 0x148) != &local_488) {
    for (uVar12 = 0; local_47c[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)(lVar26 + uVar12 + 0x154) = local_47c[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_47c[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)(lVar26 + uVar12 + 0x155) = local_47c[uVar12 + 1];
    }
    *(undefined1 *)(lVar26 + 0x154 + (uVar12 & 0xffffffff)) = 0;
    *(int *)(lVar26 + 0x150) = (int)uVar12;
    uVar25 = (uint)*(byte *)(lVar26 + 0x154);
    uVar29 = uVar39;
    if (*(byte *)(lVar26 + 0x154) != 0) {
      pbVar28 = (byte *)(lVar26 + 0x155);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar28;
        pbVar28 = pbVar28 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)(lVar26 + 0x14c) = uVar29;
    for (uVar12 = 0; local_434[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)(lVar26 + uVar12 + 0x19c) = local_434[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_434[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)(lVar26 + uVar12 + 0x19d) = local_434[uVar12 + 1];
    }
    *(undefined1 *)(lVar26 + 0x19c + (uVar12 & 0xffffffff)) = 0;
    *(int *)(lVar26 + 0x198) = (int)uVar12;
    uVar25 = (uint)*(byte *)(lVar26 + 0x19c);
    uVar29 = uVar39;
    if (*(byte *)(lVar26 + 0x19c) != 0) {
      pbVar28 = (byte *)(lVar26 + 0x19d);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar28;
        pbVar28 = pbVar28 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)(lVar26 + 0x194) = uVar29;
  }
  if (*(char *)(lVar26 + 0x120) == '\x05') {
    uVar12 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                            *(ulong *)(lVar26 + 0x128));
    bVar7 = (uVar12 & 0xffffffffff) != 0;
    uVar30 = uVar12 & 0xffffffffff;
    bVar8 = (uVar12 & 0xff00000000000000) == 0x2d00000000000000;
    if (!bVar8 || uVar30 == 0) goto LAB_7101d29170;
    bVar7 = uVar30 == 0x155f9548cb;
    bVar8 = uVar30 == 0xd61d998cb;
  }
  else {
    bVar7 = false;
    bVar8 = true;
LAB_7101d29170:
    bVar8 = (bool)(bVar8 & bVar7);
    bVar7 = false;
  }
  *(uint *)(lVar26 + 0x1dc) = uVar9;
  FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),0x7104308ac3);
  FUN_7103778760(*(long *)(lVar26 + 0x108),0x710428ff7d);
  lVar36 = *(long *)(DAT_710532f730 + 8);
  if (*(char *)(lVar26 + 0x120) == '\x05') {
    uVar12 = FUN_710327d930(*(long *)(*(long *)(lVar36 + 0x318) + 8),*(ulong *)(lVar26 + 0x128));
  }
  else {
    uVar12 = 0x2dffff0000000000;
  }
  iVar10 = FUN_710338b490(uVar12);
  *(bool *)(lVar26 + 0x25d) = iVar10 == 1;
  uVar12 = *(ulong *)(lVar26 + 0x118);
  puVar13 = FUN_71032817a0(*(long *)(*(long *)(lVar36 + 0x2f8) + 8),0x181c99f843);
  if (((((uVar12 & 0xff00000000000000) == 0xc100000000000000) && ((uVar12 & 0xffffffffff) != 0)) &&
      (((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar13 & 0xffffffffff) != 0)) {
    if ((((ulong)puVar13 ^ uVar12) & 0xffffffffff) == 0) {
LAB_7101d292ac:
      *(undefined1 *)(lVar26 + 0x25d) = 1;
    }
  }
  else if ((((ulong)puVar13 & 0xffffffffff) != 0 &&
           ((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) ==
           ((uVar12 & 0xff00000000000000) == 0xc100000000000000 && (uVar12 & 0xffffffffff) != 0))
  goto LAB_7101d292ac;
  ppppppppplVar33 = (long *********)(lVar27 + 400);
  lVar27 = lVar26 + 0x100;
  uVar29 = uVar39;
  if (bVar7) {
    *(undefined1 *)(lVar26 + 0x25d) = 1;
    *(undefined8 *)(lVar26 + 0x19c) = 0x646f6f675f6d616e;
    *(undefined8 *)(lVar26 + 0x1a4) = 0x735f706c65685f73;
    *(undefined2 *)(lVar26 + 0x1ac) = 0x70;
    *(undefined4 *)(lVar26 + 0x198) = 0x11;
    uVar25 = 0x6e;
    pbVar28 = (byte *)(lVar26 + 0x19d);
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (uVar25 != 0);
LAB_7101d293a4:
    *(uint *)(lVar26 + 0x194) = uVar29;
  }
  else if (bVar8) {
    *(undefined1 *)(lVar26 + 0x25d) = 1;
    *(undefined8 *)(lVar26 + 0x19c) = 0x646f6f675f6d616e;
    *(undefined8 *)(lVar26 + 0x1a4) = 0x675f706c65685f73;
    *(undefined4 *)(lVar26 + 0x1ac) = 0x646c6f;
    *(undefined4 *)(lVar26 + 0x198) = 0x13;
    uVar25 = 0x6e;
    pbVar28 = (byte *)(lVar26 + 0x19d);
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (uVar25 != 0);
    goto LAB_7101d293a4;
  }
  lVar14 = *(long *)(lVar26 + 0x240);
  uVar29 = *(uint *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8);
  ppppbVar23 = (byte ****)(ulong)uVar29;
  uVar19 = extraout_x1_02;
  if (*(uint *)(lVar14 + 0x94) != uVar29) {
    pppplVar20 = (long ****)0x1;
    *(uint *)(lVar14 + 0x94) = uVar29;
    FUN_710377a280(lVar14,(byte *)(lVar14 + 0x18),1);
    uVar19 = extraout_x1_03;
  }
  FUN_7101d27300(lVar26,uVar19,pppplVar20,ppppbVar23,(long ****)param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_88,lVar27,(byte ****)"set_parts_item",pppplVar20,ppppbVar23,
                 (long ****)param_5,param_6,param_7,param_8);
  ppppppppplVar24 = &local_88;
  ppppppppplVar22 = ppppppppplVar33;
  FUN_7103385ee0(*(undefined8 *)(lVar26 + 0x1e8),*(long **)(lVar26 + 0xf8),(ulong *)ppppppppplVar33,
                 ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar26 + 0x25e) = 1;
  FUN_710338d030((uint *)&local_488,(ulong *)ppppppppplVar33);
  local_d0 = 0x1300000000;
  local_c8 = 0x646f6f675f6d616e;
  local_c0 = 0x6f67657461635f73;
  local_b8 = 0x7972;
  uStack_b6 = 0x5f;
  uVar29 = 0x6e;
  pbVar28 = (byte *)((long)&local_c8 + 1);
  local_d0._0_4_ = uVar39;
  do {
    local_d0._0_4_ = (uint)local_d0 * 0x89 ^ uVar29;
    uVar29 = (uint)*pbVar28;
    pbVar28 = pbVar28 + 1;
  } while (uVar29 != 0);
  local_d0._4_4_ = 0x13;
  uVar29 = uVar39;
  if (bVar7) {
    local_c8 = 0x646f6f675f6d616e;
    local_c0 = 0x7469726970735f73;
    local_b8 = 0x705f;
    uStack_b6 = 0x696f;
    uStack_b4 = 0x746e;
    uVar25 = 0x6e;
    local_b2 = 0;
    local_d0._4_4_ = 0x16;
    pbVar28 = (byte *)((long)&local_c8 + 1);
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (uVar25 != 0);
  }
  else if (bVar8) {
    local_c8 = 0x646f6f675f6d616e;
    uVar25 = 0x6e;
    local_c0 = 0x6f00646c6f675f73;
    local_d0._4_4_ = 0xe;
    pbVar28 = (byte *)((long)&local_c8 + 1);
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (uVar25 != 0);
  }
  else {
    lVar14 = 8;
    do {
      lVar38 = lVar14 + -8;
      if (acStack_480[lVar38] == '\0') break;
      lVar32 = (long)local_d0._4_4_;
      lVar14 = lVar14 + 1;
      local_d0._4_4_ = local_d0._4_4_ + 1;
      *(char *)((long)&local_c8 + lVar32) = acStack_480[lVar38];
    } while ((int)lVar14 + 10U < 0x3e);
    *(undefined1 *)((long)&local_c8 + (long)local_d0._4_4_) = 0;
    uVar25 = (uint)(byte)local_c8;
    uVar29 = 0x811c9dc5;
    if ((byte)local_c8 != 0) {
      pbVar28 = (byte *)((long)&local_c8 + 1);
      uVar29 = uVar39;
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar28;
        pbVar28 = pbVar28 + 1;
      } while (uVar25 != 0);
    }
  }
  local_d0 = CONCAT44(local_d0._4_4_,uVar29);
  FUN_7103776910(&local_e0,lVar27,(long ****)"set_txt_category",ppppppppplVar22,ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_e0,(char *)&local_c8,ppppppppplVar22,ppppppppplVar24,param_5,param_6,
                 param_7,param_8);
  local_170 = 0x2600000000;
  local_120[0] = 0;
  local_168 = &DAT_636570735f756e6d;
  local_160 = 0x6378655f65746174;
  local_158 = 0x6168;
  local_156 = 0x666e6f635f65676e;
  local_14e = 0x5f6d7269;
  local_148 = 0x6e616863;
  local_144 = 0x6567;
  uVar25 = 0x6d;
  local_128 = 0;
  local_14a = 0x7865;
  local_142 = 0;
  pbVar28 = (byte *)((long)&local_168 + 1);
  uVar29 = uVar39;
  do {
    uVar29 = uVar29 * 0x89 ^ uVar25;
    uVar25 = (uint)*pbVar28;
    pbVar28 = pbVar28 + 1;
  } while (uVar25 != 0);
  local_170 = CONCAT44(0x26,uVar29);
  FUN_7103776910(&local_1b8,lVar27,(long ****)"have_counter",ppppppppplVar22,ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  plVar17 = local_1b0;
  lVar14 = *local_1b0;
  if (lVar14 != 0) {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
  }
  local_1b8 = &PTR_FUN_710523d9a8;
  local_1b0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar17);
  }
  if (*(char *)(lVar26 + 0x25d) != '\0') {
    local_1b8 = (undefined **)0x2a00000000;
    local_1b0 = (long *)&DAT_636570735f756e6d;
    local_1a8 = 0x6378655f65746174;
    local_1a0 = 0x6168;
    local_19e = 0x666e6f635f65676e;
    local_196 = 0x5f6d7269;
    local_190 = 0x6f5f65676e616863;
    local_188 = 0x656e;
    uVar25 = 0x6d;
    local_192 = 0x7865;
    local_186 = 0;
    pbVar28 = (byte *)((long)&local_1b0 + 1);
    uVar29 = uVar39;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*pbVar28;
      pbVar28 = pbVar28 + 1;
    } while (uVar25 != 0);
    local_1b8 = (undefined **)CONCAT44(0x2a,uVar29);
    uVar12 = 0;
    cVar31 = 'm';
    do {
      *(char *)((long)&local_168 + uVar12) = cVar31;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar31 = *(char *)((long)&local_1b0 + uVar12 + 1);
      uVar12 = uVar12 + 1;
    } while (cVar31 != '\0');
    *(undefined1 *)((long)&local_168 + (uVar12 & 0xffffffff)) = 0;
    uVar25 = (uint)(byte)local_168;
    local_170 = CONCAT44((int)uVar12,(undefined4)local_170);
    uVar29 = uVar39;
    if ((byte)local_168 != 0) {
      pbVar28 = (byte *)((long)&local_168 + 1);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar28;
        pbVar28 = pbVar28 + 1;
      } while (uVar25 != 0);
    }
    local_170 = CONCAT44((int)uVar12,uVar29);
  }
  cVar31 = *(char *)(param_1 + (long)(int)uVar9 * 0x30 + 0x198);
  if (cVar31 == '\x04') {
    FUN_710062dc20((uint *)&local_128,"category_spirit");
    lVar38 = *(long *)(DAT_710532f730 + 8);
    lVar14 = *(long *)(lVar38 + 0x1d8);
    uVar9 = FUN_71032a7800(lVar14,*(ulong *)(lVar26 + 0x128));
    lVar36 = *(long *)(lVar14 + 0x20);
    uVar12 = (*(long *)(lVar14 + 0x28) - lVar36 >> 6) * -0x3333333333333333;
    if (uVar9 < (uint)uVar12) {
      ppppppppplVar33 = (long *********)0xffff;
      uVar5 = *(ushort *)(lVar36 + (ulong)uVar9 * 0x140);
      if ((long *********)(ulong)uVar5 == (long *********)0xffff) {
        uVar30 = 0xffffffff;
      }
      else {
        uVar30 = (ulong)*(ushort *)(lVar14 + (long)(short)uVar5 * 2 + 0x60);
        ppppppppplVar33 = (long *********)(ulong)uVar5;
      }
    }
    else {
      uVar30 = 0xffffffff;
      ppppppppplVar33 = (long *********)0xffff;
    }
    puVar2 = (undefined2 *)(lVar36 + uVar30 * 0x140);
    if (uVar12 < uVar30 || uVar12 - uVar30 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    FUN_7103776640(&local_1c8,lVar27,(byte ****)"set_parts_param_00",ppppppppplVar22,ppppppppplVar24
                   ,(long ****)param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_1d8,lVar27,(byte ****)"set_parts_param_01",ppppppppplVar22,ppppppppplVar24
                   ,(long ****)param_5,param_6,param_7,param_8);
    uVar12 = *(ulong *)(puVar2 + 0x30);
    if ((uVar12 >> 0x38 == 0x2d) &&
       ((uVar12 & 0xffffffffff) != 0 && (uVar12 & 0xffffffffff) != 0xe89ae81c5)) {
      ppppppppplVar22 = (long *********)&DAT_00000012;
      plVar16 = FUN_710323f600(*(long **)(lVar26 + 0xf8),uVar12,(long ****)&DAT_00000012,
                               (byte ****)ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8
                              );
      FUN_7103776910(&local_1b8,lVar27,(long ****)"set_rep_series",ppppppppplVar22,ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      plVar17 = local_1b0;
      FUN_7103778b80((long)local_1b0,(long)plVar16,ppppppppplVar22,(byte ****)ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar17);
      }
      FUN_7103776910(&local_1b8,lVar27,(long ****)"set_rep_series_sdw",ppppppppplVar22,
                     ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
      uVar12 = (ulong)local_1b0;
      FUN_7103778b80((long)local_1b0,(long)plVar16,ppppppppplVar22,(byte ****)ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = (long *)0x0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_7103776910(&local_1b8,(long)&local_1d8,(long ****)"set_rep_series",ppppppppplVar22,
                     ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
      uVar12 = (ulong)local_1b0;
      FUN_7103778b80((long)local_1b0,(long)plVar16,ppppppppplVar22,(byte ****)ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = (long *)0x0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      bVar35 = 1;
    }
    else {
      bVar35 = 0;
    }
    FUN_7103776910(&local_1b8,lVar27,(long ****)"set_rep_series",ppppppppplVar22,ppppppppplVar24,
                   (long ****)param_5,param_6,param_7,param_8);
    plVar17 = local_1b0;
    lVar36 = *local_1b0;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe | bVar35;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    FUN_7103776910(&local_1b8,lVar27,(long ****)"set_rep_series_sdw",ppppppppplVar22,ppppppppplVar24
                   ,(long ****)param_5,param_6,param_7,param_8);
    plVar17 = local_1b0;
    lVar36 = *local_1b0;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe | bVar35;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    FUN_7103776910(&local_1b8,(long)&local_1d8,(long ****)"set_rep_series",ppppppppplVar22,
                   ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
    plVar17 = local_1b0;
    lVar36 = *local_1b0;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe | bVar35;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    FUN_7103776910(&local_1b8,(long)&local_1d8,(long ****)"circle_series",ppppppppplVar22,
                   ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
    plVar17 = local_1b0;
    lVar36 = *local_1b0;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe | bVar35;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar17);
    }
    cVar31 = *(char *)(puVar2 + 0x2f);
    if (cVar31 == '\x03') {
      FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),0x710438cd2e);
      FUN_7103776910(&local_1b8,lVar27,(long ****)"set_txt_fighter",ppppppppplVar22,ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_1b8,(char *)(lVar26 + 0x19c),ppppppppplVar22,ppppppppplVar24,
                     param_5,param_6,param_7,param_8);
      plVar17 = local_1b0;
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar17);
      }
      FUN_7103776910(&local_1b8,lVar27,(long ****)"have_counter",ppppppppplVar22,ppppppppplVar24,
                     (long ****)param_5,param_6,param_7,param_8);
      plVar17 = local_1b0;
      lVar36 = *local_1b0;
      if (lVar36 != 0) {
        *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe;
      }
      local_1b8 = &PTR_FUN_710523d9a8;
      local_1b0 = (long *)0x0;
      if (plVar17 != (long *)0x0) goto LAB_7101d2a620;
    }
    else {
      if (cVar31 == '\x01') {
        FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),0x710432a69e);
        lVar36 = *(long *)(DAT_710532f730 + 8);
        FUN_71032a0c90((uint *)&local_1b8,lVar36 + 0x210,puVar2[0x35],ppppppppplVar24,param_5,
                       param_6,param_7,param_8);
        ppppppppplVar33 = (long *********)(ulong)(ushort)puVar2[0x35];
        FUN_71032a0e30((uint *)&local_260,lVar36 + 0x210,puVar2[0x35],ppppppppplVar24,param_5,
                       param_6,param_7,param_8);
        FUN_7103776640(&local_1e8,lVar27,(byte ****)"set_parts_skill",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2a8,(long)&local_1e8,(long ****)"set_txt_help",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2a8,(char *)&local_1b0,ppppppppplVar33,ppppppppplVar24,param_5,
                       param_6,param_7,param_8);
        uVar12 = CONCAT44(uStack_29c,local_2a0);
        local_2a8 = &PTR_FUN_710523d9a8;
        local_2a0 = 0;
        uStack_29c = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        plVar17 = local_1e0;
        local_1e8 = &PTR_FUN_710523d988;
        local_1e0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          uVar12 = plVar17[3];
          plVar17[2] = (long)&PTR_FUN_710523d9a8;
          plVar17[3] = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40((ulong)plVar17);
        }
        FUN_7103776640(&local_1e8,lVar27,(byte ****)"set_parts_text_scroll",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2a8,(long)&local_1e8,(long ****)"set_txt_mask",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2a8,(char *)&local_258,ppppppppplVar33,ppppppppplVar24,param_5,
                       param_6,param_7,param_8);
        uVar12 = CONCAT44(uStack_29c,local_2a0);
        local_2a8 = &PTR_FUN_710523d9a8;
        local_2a0 = 0;
        uStack_29c = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_7103776910(&local_2a8,(long)&local_1e8,(long ****)"set_txt_main",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2a8,(char *)&local_258,ppppppppplVar33,ppppppppplVar24,param_5,
                       param_6,param_7,param_8);
        uVar12 = CONCAT44(uStack_29c,local_2a0);
        local_2a8 = &PTR_FUN_710523d9a8;
        local_2a0 = 0;
        uStack_29c = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        if (local_1e0[1] != 0) {
          puVar34 = *(undefined8 **)(local_1e0[1] + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          if (puVar34 != (undefined8 *)0x0) {
            for (puVar15 = (undefined8 *)(**(code **)*puVar34)(puVar34);
                puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
              if ((undefined8 **)puVar15 == &DAT_710593ba58) {
                *(undefined1 *)(puVar34 + 0xc) = 1;
                break;
              }
            }
          }
        }
        plVar17 = local_1e0;
        FUN_7103778950(local_1e0[1]);
        if (plVar17[1] != 0) {
          puVar34 = *(undefined8 **)(plVar17[1] + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          if (puVar34 != (undefined8 *)0x0) {
            for (puVar15 = (undefined8 *)(**(code **)*puVar34)(puVar34);
                puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
              if ((undefined8 **)puVar15 == &DAT_710593ba58) {
                lVar14 = puVar34[3];
                *(undefined4 *)(puVar34 + 0xb) = *(undefined4 *)((long)puVar34 + 0x54);
                if (lVar14 != 0) {
                  *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)((long)puVar34 + 0x54);
                  *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
                }
                lVar14 = puVar34[4];
                if (lVar14 != 0) {
                  *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)(puVar34 + 0xb);
                  *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
                }
                if ((long *)puVar34[5] != (long *)0x0) {
                  (**(code **)(*(long *)puVar34[5] + 0x180))(0);
                }
                plVar17 = (long *)puVar34[6];
                if (plVar17 != (long *)0x0) {
                  if (*(char *)((long)puVar34 + 99) == '\0') {
                    (**(code **)(*plVar17 + 0x180))(0);
                  }
                  else {
                    (**(code **)(*plVar17 + 400))();
                  }
                }
                *(undefined2 *)((long)puVar34 + 100) = 0;
                break;
              }
            }
          }
        }
        *(undefined4 *)(lVar26 + 0x248) = 0x5a;
        uVar12 = FUN_71032a1630(*(long *)(lVar36 + 0x218),puVar2[0x35]);
        plVar17 = FUN_710323f760(*(long **)(lVar26 + 0xf8),uVar12,(long ****)ppppppppplVar33,
                                 (byte ****)ppppppppplVar24,(long ****)param_5,param_6,param_7,
                                 param_8);
        FUN_7103776640(&local_1f8,lVar27,(byte ****)"set_parts_skill",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2a8,(long)&local_1f8,(long ****)"set_pic_icon",ppppppppplVar33,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        uVar12 = CONCAT44(uStack_29c,local_2a0);
        FUN_7103778b80(uVar12,(long)plVar17,ppppppppplVar33,(byte ****)ppppppppplVar24,
                       (long ****)param_5,param_6,param_7,param_8);
        local_2a8 = &PTR_FUN_710523d9a8;
        local_2a0 = 0;
        uStack_29c = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        uVar12 = local_1f0;
        local_1f8 = (long ********)&PTR_FUN_710523d988;
        local_1f0 = 0;
        if (uVar12 != 0) {
          uVar30 = *(ulong *)(uVar12 + 0x18);
          *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar12 + 0x18) = 0;
          if (uVar30 != 0) {
            FUN_710392eb40(uVar30);
          }
          FUN_710392eb40(uVar12);
        }
        local_2a0 = local_2a0 & 0xffffff00;
        local_2a8 = (undefined **)0x0;
        uVar12 = FUN_71032a0fd0(*(long *)(lVar36 + 0x218),puVar2[0x35]);
        ppppppppplVar22 = (long *********)(ulong)((uint)uVar12 & 0xff);
        FUN_710062dc20((uint *)&local_2a8,"slot_count%d");
        FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),(long)&local_2a0);
        plVar17 = local_1e0;
      }
      else {
        if (cVar31 != '\0') goto LAB_7101d2a624;
        FUN_7103776640(&local_1e8,lVar27,(byte ****)"set_parts_power",ppppppppplVar22,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_1f8,lVar27,(byte ****)"set_parts_pre_super",ppppppppplVar22,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_208,lVar27,(byte ****)"set_parts_super",ppppppppplVar22,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_218,lVar27,(byte ****)"set_parts_icon_super",ppppppppplVar22,
                       ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        uVar12 = local_200;
        cVar31 = *(char *)(puVar2 + 0x2f);
        if ((*(long *)(local_200 + 8) != 0) &&
           (lVar36 = *(long *)(*(long *)(local_200 + 8) + 0x18), lVar36 != 0)) {
          *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe | cVar31 == '\x01';
        }
        iVar10 = (int)ppppppppplVar33;
        uVar5 = (ushort)ppppppppplVar33;
        if (cVar31 == '\x01') {
          lVar36 = *(long *)(lVar26 + 0x108);
          pcVar18 = "spirit_none";
        }
        else if (puVar2[0x48] == 0) {
          if ((iVar10 != 0xffff) && ((short)uVar5 < 2000)) {
            lVar36 = *(long *)(lVar38 + 0x1d8);
            uVar4 = *(ushort *)(lVar36 + (((long)ppppppppplVar33 << 0x30) >> 0x2f) + 0x60);
            uVar9 = (int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                    -0x33333333;
            if ((uVar4 < uVar9) &&
               ((uVar4 = *(ushort *)(lVar36 + (ulong)uVar4 * 2 + 0x1000), uVar4 < uVar9 &&
                (*(short *)(*(long *)(lVar36 + 0x20) + (ulong)uVar4 * 0x140) != -1)))) {
              lVar36 = *(long *)(lVar26 + 0x108);
              pcVar18 = "spirit_pre_super";
              goto LAB_7101d29f94;
            }
          }
          lVar36 = *(long *)(lVar26 + 0x108);
          pcVar18 = "spirit_normal";
        }
        else {
          lVar36 = *(long *)(lVar26 + 0x108);
          pcVar18 = "spirit_super";
        }
LAB_7101d29f94:
        FUN_7103778300(0x3f800000,lVar36,(long)pcVar18);
        if ((iVar10 == 0xffff || 1999 < (short)uVar5) ||
           (lVar36 = *(long *)(lVar38 + 0x1d8),
           (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                 -0x33333333) <=
           (uint)*(ushort *)(lVar36 + (((long)ppppppppplVar33 << 0x30) >> 0x2f) + 0x60))) {
          FUN_71025c7300((long)&local_1c8,(long)&local_1d8,ppppppppplVar22,
                         (byte ****)ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
        }
        else {
          ppppppppplVar22 = &local_1d8;
          param_5 = (long *************)0xffff;
          ppppppppplVar24 = ppppppppplVar33;
          FUN_71025c7b60(*(long **)(lVar26 + 0xf8),(long)&local_1c8,(long)ppppppppplVar22,
                         (byte ****)ppppppppplVar33,0xffff,param_6,param_7,param_8);
        }
        FUN_71025c8c30((long)&local_1e8,uVar5,ppppppppplVar22,ppppppppplVar24,(long ****)param_5,
                       param_6,param_7,param_8);
        ppppppppplVar24 = &local_208;
        param_5 = &local_218;
        param_6 = ppppppppplVar33;
        FUN_71025c8e40(*(long **)(lVar26 + 0xf8),lVar27,&local_1f8,(byte ****)ppppppppplVar24,
                       (long ****)param_5,(long)ppppppppplVar33,param_7,param_8);
        uVar30 = 1;
        local_2a8 = (undefined **)0x1;
        local_2a0 = local_2a0 & 0xffffff00;
        uStack_29c = 0;
        uStack_298 = 0;
        local_290 = 0x52ffff0000000000;
        local_288 = 0;
        if (iVar10 != 0xffff && 1999 >= (short)uVar5) {
          lVar36 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar4 = *(ushort *)(lVar36 + (((long)ppppppppplVar33 << 0x30) >> 0x2f) + 0x60);
          uVar30 = (*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20) >> 6) * -0x3333333333333333;
          if ((uint)uVar4 < (uint)uVar30) {
            uVar37 = 0xffffffff;
            if (ppppppppplVar33 != (long *********)0xffff) {
              uVar37 = (ulong)uVar4;
            }
            puVar1 = (undefined2 *)(*(long *)(lVar36 + 0x20) + uVar37 * 0x140);
            if (uVar30 < uVar37 || uVar30 - uVar37 == 0) {
              puVar1 = &DAT_7105182b08;
            }
            uVar9 = FUN_71025c9ac0(*(float *)(puVar1 + 0x3a),0,*(uint *)(puVar1 + 0x38));
            uVar30 = (ulong)uVar9;
          }
          else {
            uVar30 = 1;
          }
        }
        FUN_71025ca840((int *)&local_2a8,uVar5,(int)uVar30);
        uVar9 = FUN_71025cb8d0((long)&local_2a8);
        uVar37 = (ulong)uVar9;
        FUN_7103776910(&local_1b8,lVar27,(long ****)"set_txt_pow_num",uVar30,ppppppppplVar24,
                       (long ****)param_5,param_6,param_7,param_8);
        FUN_710377a310((long)&local_1b8,1);
        plVar17 = local_1b0;
        local_1b8 = &PTR_FUN_710523d9a8;
        local_1b0 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar17);
        }
        FUN_7103776910(&local_1b8,lVar27,(long ****)"set_txt_pow_num_sdw",uVar37,ppppppppplVar24,
                       (long ****)param_5,param_6,param_7,param_8);
        FUN_710377a310((long)&local_1b8,1);
        uVar30 = (ulong)local_1b0;
        local_1b8 = &PTR_FUN_710523d9a8;
        local_1b0 = (long *)0x0;
        if (uVar30 != 0) {
          FUN_710392eb40(uVar30);
        }
        FUN_7103778300(0x3f800000,local_1d0,0x710432a5ee);
        local_1b0 = (long *)((ulong)local_1b0 & 0xffffffffffffff00);
        local_1b8 = (undefined **)0x0;
        ppppppppplVar22 = (long *********)(ulong)*(byte *)((long)puVar2 + 0x69);
        FUN_710062dc20((uint *)&local_1b8,"slot_count%d");
        FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),(long)&local_1b0);
        if ((iVar10 == 0xffff) || (1999 < (short)uVar5)) {
LAB_7101d2a314:
          local_258 = 0x615f746972697073;
          local_248 = 0x6f6e;
          uStack_246 = 0x6e;
          local_260._0_4_ = 0;
          local_260._4_4_ = 0x13;
          local_250 = 0x5f72656b63617474;
          uVar9 = 0x73;
          pbVar28 = (byte *)((long)&local_258 + 1);
          do {
            uVar39 = uVar39 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar28;
            pbVar28 = pbVar28 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar36 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar5 = *(ushort *)(lVar36 + (((long)ppppppppplVar33 << 0x30) >> 0x2f) + 0x60);
          uVar30 = (*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20) >> 6) * -0x3333333333333333;
          if ((uint)uVar30 <= (uint)uVar5) goto LAB_7101d2a314;
          uVar37 = 0xffffffff;
          if (ppppppppplVar33 != (long *********)0xffff) {
            uVar37 = (ulong)uVar5;
          }
          puVar2 = (undefined2 *)(*(long *)(lVar36 + 0x20) + uVar37 * 0x140);
          if (uVar30 < uVar37 || uVar30 - uVar37 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          if ((*(char *)(puVar2 + 0x2f) != '\0') || (2 < *(byte *)(puVar2 + 0x36) - 1))
          goto LAB_7101d2a314;
          uVar9 = 0x20301U >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3) & 0xff;
          if (uVar9 == 1) {
            local_258 = 0x615f746972697073;
            local_248 = 0x666f;
            local_250 = 0x5f72656b63617474;
            uStack_246 = 0x6566;
            uStack_244 = 0x736e;
            local_242 = 0x65;
            uVar9 = 0x73;
            local_260._0_4_ = 0;
            local_260._4_4_ = 0x17;
            pbVar28 = (byte *)((long)&local_258 + 1);
            do {
              uVar39 = uVar39 * 0x89 ^ uVar9;
              uVar9 = (uint)*pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (uVar9 != 0);
          }
          else if (uVar9 == 2) {
            local_258 = 0x615f746972697073;
            local_248 = 0x6564;
            local_250 = 0x5f72656b63617474;
            uStack_246 = 0x6566;
            uStack_244 = 0x736e;
            local_242 = 0x65;
            uVar9 = 0x73;
            local_260._0_4_ = 0;
            local_260._4_4_ = 0x17;
            pbVar28 = (byte *)((long)&local_258 + 1);
            do {
              uVar39 = uVar39 * 0x89 ^ uVar9;
              uVar9 = (uint)*pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (uVar9 != 0);
          }
          else {
            if (uVar9 != 3) goto LAB_7101d2a314;
            local_258 = 0x615f746972697073;
            local_248 = 0x6874;
            local_250 = 0x5f72656b63617474;
            uStack_246 = 0x6f72;
            uStack_244 = 0x77;
            local_260._0_4_ = 0;
            local_260._4_4_ = 0x15;
            uVar9 = 0x73;
            pbVar28 = (byte *)((long)&local_258 + 1);
            do {
              uVar39 = uVar39 * 0x89 ^ uVar9;
              uVar9 = (uint)*pbVar28;
              pbVar28 = pbVar28 + 1;
            } while (uVar9 != 0);
          }
        }
        local_250 = 0x5f72656b63617474;
        local_258 = 0x615f746972697073;
        local_260 = (undefined **)CONCAT44(local_260._4_4_,uVar39);
        FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),(long)&local_258);
        uVar30 = local_210;
        local_218 = (long ************)&PTR_FUN_710523d988;
        local_210 = 0;
        if (uVar30 != 0) {
          uVar37 = *(ulong *)(uVar30 + 0x18);
          *(undefined ***)(uVar30 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar30 + 0x18) = 0;
          if (uVar37 != 0) {
            FUN_710392eb40(uVar37);
          }
          FUN_710392eb40(uVar30);
        }
        local_208 = (long ********)&PTR_FUN_710523d988;
        local_200 = 0;
        if (uVar12 != 0) {
          uVar30 = *(ulong *)(uVar12 + 0x18);
          *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar12 + 0x18) = 0;
          if (uVar30 != 0) {
            FUN_710392eb40(uVar30);
          }
          FUN_710392eb40(uVar12);
        }
        uVar12 = local_1f0;
        local_1f8 = (long ********)&PTR_FUN_710523d988;
        local_1f0 = 0;
        plVar17 = local_1e0;
        if (uVar12 != 0) {
          uVar30 = *(ulong *)(uVar12 + 0x18);
          *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar12 + 0x18) = 0;
          if (uVar30 != 0) {
            FUN_710392eb40(uVar30);
          }
          FUN_710392eb40(uVar12);
          plVar17 = local_1e0;
        }
      }
      local_1e0 = (long *)0x0;
      local_1e8 = &PTR_FUN_710523d988;
      if (plVar17 != (long *)0x0) {
        local_1e0 = (long *)0x0;
        local_1e8 = &PTR_FUN_710523d988;
        uVar12 = plVar17[3];
        plVar17[2] = (long)&PTR_FUN_710523d9a8;
        plVar17[3] = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
LAB_7101d2a620:
        FUN_710392eb40((ulong)plVar17);
      }
    }
LAB_7101d2a624:
    uVar12 = local_1d0;
    local_1d8 = (long ********)&PTR_FUN_710523d988;
    local_1d0 = 0;
    if (uVar12 != 0) {
      uVar30 = *(ulong *)(uVar12 + 0x18);
      *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar12 + 0x18) = 0;
      if (uVar30 != 0) {
        FUN_710392eb40(uVar30);
      }
      FUN_710392eb40(uVar12);
    }
    plVar17 = local_1c0;
    local_1c8 = &PTR_FUN_710523d988;
    local_1c0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      uVar12 = plVar17[3];
      plVar17[2] = (long)&PTR_FUN_710523d9a8;
      plVar17[3] = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
LAB_7101d2a678:
      FUN_710392eb40((ulong)plVar17);
    }
  }
  else if (cVar31 == '\x05') {
    if (bVar7) {
      pcVar18 = "category_sp";
    }
    else if (bVar8) {
      pcVar18 = "category_gold";
    }
    else {
      uVar12 = *(ulong *)(lVar26 + 0x118);
      puVar13 = FUN_71032817a0(*(long *)(*(long *)(lVar36 + 0x2f8) + 8),0x181c99f843);
      if (((((uVar12 & 0xff00000000000000) == 0xc100000000000000) && ((uVar12 & 0xffffffffff) != 0))
          && (((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar13 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar13 ^ uVar12) & 0xffffffffff) == 0) {
LAB_7101d29ea4:
          pcVar18 = "category_ticket";
          goto LAB_7101d29ed0;
        }
      }
      else if ((((ulong)puVar13 & 0xffffffffff) != 0 &&
               ((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar12 & 0xff00000000000000) == 0xc100000000000000 && (uVar12 & 0xffffffffff) != 0)
              ) goto LAB_7101d29ea4;
      uVar12 = FUN_7103390e60(lVar26 + 0x118);
      if ((uVar12 & 1) == 0) {
        pcVar18 = "category_item";
      }
      else {
        pcVar18 = "category_energy";
      }
    }
LAB_7101d29ed0:
    FUN_710062dc20((uint *)&local_128,pcVar18);
    FUN_7103776910(&local_1b8,lVar27,(long ****)"set_txt_other_caption",ppppppppplVar22,
                   ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_1b8,(char *)(lVar26 + 0x19c),ppppppppplVar22,ppppppppplVar24,param_5
                   ,param_6,param_7,param_8);
    plVar17 = local_1b0;
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0 = (long *)0x0;
    if (plVar17 != (long *)0x0) goto LAB_7101d2a678;
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar26 + 0x108),(long)local_120);
  FUN_7103776640(&local_260,lVar27,(byte ****)"set_parts_btn_00",ppppppppplVar22,ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_1b8,(long)&local_260,(long ****)"set_txt_btn",ppppppppplVar22,
                 ppppppppplVar24,(long ****)param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_1b8,(char *)&local_168,ppppppppplVar22,ppppppppplVar24,param_5,param_6
                 ,param_7,param_8);
  plVar17 = local_1b0;
  local_1b8 = &PTR_FUN_710523d9a8;
  local_1b0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar17);
  }
  uVar12 = local_258;
  local_260 = &PTR_FUN_710523d988;
  local_258 = 0;
  if (uVar12 != 0) {
    uVar30 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar12);
  }
  FUN_7103776910(&local_1b8,lVar27,(long ****)"set_txt_name",ppppppppplVar22,ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_1b8,(char *)(lVar26 + 0x154),ppppppppplVar22,ppppppppplVar24,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_2a8,lVar27,(byte ****)"explain",ppppppppplVar22,ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_260,(long)&local_2a8,(long ****)"set_txt_00",ppppppppplVar22,ppppppppplVar24
                 ,(long ****)param_5,param_6,param_7,param_8);
  uVar12 = CONCAT44(uStack_29c,local_2a0);
  local_2a8 = &PTR_FUN_710523d988;
  local_2a0 = 0;
  uStack_29c = 0;
  if (uVar12 != 0) {
    uVar30 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar12);
  }
  FUN_710377a120((long)&local_260,(char *)(lVar26 + 0x19c),ppppppppplVar22,ppppppppplVar24,param_5,
                 param_6,param_7,param_8);
  uVar12 = local_258;
  if ((*(long *)(lVar26 + 0x110) != 0) && (1 < *(int *)(lVar26 + 0xe8) - 1U)) {
    if (0x12 < *(uint *)(lVar26 + 0xe4)) {
LAB_7101d2a9f8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar26 + 0xe4) * 4 + 0x98) = 1;
  }
  local_260 = &PTR_FUN_710523d9a8;
  local_258 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  plVar17 = local_1b0;
  local_1b8 = &PTR_FUN_710523d9a8;
  local_1b0 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar17);
  }
  uVar12 = local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  uVar12 = local_80;
  local_88 = (long ********)&PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar12 != 0) {
    uVar30 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar12);
  }
  FUN_7101d2aaf0(param_1,(ulong)*(uint *)(param_1 + 0x184),0,(byte ****)ppppppppplVar24,
                 (long ****)param_5,param_6,param_7,param_8);
  return;
}

