// addr:      7102cd8ae0
// offset:    0x2cd8ae0
// name:      FUN_7102cd8ae0
// mangled:   
// signature: undefined __cdecl FUN_7102cd8ae0(long * param_1, char * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102cd8ae0(long *param_1,char *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  byte ****ppppbVar3;
  byte ***pppbVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  byte ***pppbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  long ****pppplVar22;
  void *pvVar23;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar24;
  char *pcVar25;
  long ****pppplVar26;
  byte bVar27;
  byte ***pppbVar28;
  long ***ppplVar29;
  long ***ppplVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long *plVar36;
  undefined8 *puVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  long *plVar41;
  ulong uVar42;
  uint uVar43;
  byte *pbVar44;
  undefined8 *puVar45;
  byte ****ppppbVar46;
  long *plVar47;
  byte ****ppppbVar48;
  byte *pbVar49;
  long ***ppplVar50;
  long lVar51;
  ulong uVar52;
  int iVar53;
  size_t __n;
  long ****pppplVar54;
  long lVar55;
  undefined4 uVar56;
  byte ****ppppbVar57;
  undefined4 uVar58;
  void *pvVar59;
  undefined1 auVar60 [16];
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 local_170;
  undefined8 local_160;
  ulong uStack_158;
  long ***local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined2 local_118;
  undefined2 local_114;
  undefined2 local_110;
  ushort local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined2 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined2 local_f4;
  undefined1 local_f2;
  ulong local_f0 [2];
  byte *local_e0;
  ulong local_d8;
  long ****local_d0;
  byte ****local_c8;
  long ***local_c0;
  undefined8 local_b8;
  byte *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  local_d8 = 0;
  local_d0 = (long ****)0x0;
  local_c8 = (byte ****)0x0;
  pcVar25 = (char *)param_3;
  ppppbVar48 = param_4;
  pppplVar26 = param_5;
  pppplVar22 = (long ****)strlen(param_2);
  if ((long ****)0xffffffffffffffef < pppplVar22) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (pppplVar22 < (long ****)0x17) {
    local_d8 = CONCAT71(local_d8._1_7_,(char)((int)pppplVar22 << 1));
    ppppbVar57 = (byte ****)((ulong)&local_d8 | 1);
    if (pppplVar22 != (long ****)0x0) goto LAB_7102cd8bd0;
  }
  else {
    ppplVar50 = (long ***)((ulong)(pppplVar22 + 2) & 0xfffffffffffffff0);
    ppplVar29 = ppplVar50;
    if (((ulong)(pppplVar22 + 2) & 0xfffffffffffffff0) == 0) {
      ppplVar29 = (long ***)0x1;
    }
    ppppbVar57 = (byte ****)
                 FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,pppplVar26,param_6,
                                param_7,param_8);
    if (ppppbVar57 == (byte ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0[0]._0_4_ = 0;
        pppplVar24 = &local_c0;
        local_c0 = ppplVar29;
        uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_f0);
        if (((uVar39 & 1) != 0) &&
           (ppppbVar57 = (byte ****)
                         FUN_710392e290(0x10,ppplVar29,pppplVar24,ppppbVar48,pppplVar26,param_6,
                                        param_7,param_8), ppppbVar57 != (byte ****)0x0))
        goto LAB_7102cd8bc4;
      }
      ppppbVar57 = (byte ****)0x0;
    }
LAB_7102cd8bc4:
    local_d8 = (ulong)ppplVar50 | 1;
    local_d0 = pppplVar22;
    local_c8 = ppppbVar57;
LAB_7102cd8bd0:
    pcVar25 = (char *)pppplVar22;
    memcpy(ppppbVar57,param_2,(size_t)pppplVar22);
  }
  *(byte *)((long)ppppbVar57 + (long)pppplVar22) = 0;
  std::operator+(local_f0,(byte *)&local_d8,"01",(long ****)pcVar25,ppppbVar48,pppplVar26,param_6,
                 param_7,param_8);
  param_1[2] = 0;
  plVar41 = param_1 + 3;
  param_1[4] = *plVar41;
  pppbVar4 = *param_4;
  pppbVar7 = param_4[1];
  lVar32 = *(long *)(*param_1 + 0x310);
  pbVar44 = (byte *)((ulong)local_f0 | 1);
  if (((uint)local_f0[0] & 1) != 0) {
    pbVar44 = local_e0;
  }
  iVar53 = (int)((ulong)((long)pppbVar7 - (long)pppbVar4) >> 5);
  if (iVar53 == 1) {
    if ((pbVar44 != (byte *)0x0) && (uVar40 = (uint)*pbVar44, *pbVar44 != 0)) {
      plVar36 = *(long **)(lVar32 + 0xd0);
      if (plVar36 != *(long **)(lVar32 + 0xd8)) {
        uVar39 = 0;
        uVar38 = 0xffffffff;
        do {
          pbVar44 = pbVar44 + 1;
          uVar43 = uVar40 + 0x20;
          if (0x19 < uVar40 - 0x41) {
            uVar43 = uVar40;
          }
          uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
          uVar40 = (uint)*pbVar44;
          uVar39 = uVar39 + 0x100000000;
        } while (uVar40 != 0);
        do {
          if ((*(uint *)(plVar36 + 1) < 2) &&
             (lVar51 = *plVar36,
             (uVar39 & 0xff00000000 | (ulong)~uVar38) == *(ulong *)(lVar51 + 0x68))) {
            if (lVar51 != 0) {
              if ((*(char *)(lVar51 + 0xe0) != '\0') && (*(long *)(lVar51 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar51 + 200) + 0x32) = 0;
              }
              if (*(long *)(lVar51 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar51 + 0xd8) + 0x22) = 0;
              }
              if ((*(char *)(lVar51 + 0xe0) != '\0') && (*(long *)(lVar51 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar51 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar51 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar51 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar51 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar51 + 0xb0) + 0x10) = 0;
              }
              *(undefined1 *)(lVar51 + 0x110) = 0;
              FUN_71025e9d50((long *)(lVar51 + 0x108),extraout_x1,(long ****)pcVar25,ppppbVar48,
                             pppplVar26,param_6,param_7,param_8);
              *(byte *)(lVar51 + 0x118) = *(byte *)(lVar51 + 0x118) & 0xfe;
              plVar36 = (long *)param_1[4];
              if (plVar36 < (long *)param_1[5]) {
                *plVar36 = lVar51;
                param_1[4] = param_1[4] + 8;
              }
              else {
                pvVar59 = (void *)*plVar41;
                pppplVar22 = (long ****)((long)plVar36 - (long)pvVar59);
                uVar39 = ((long)pppplVar22 >> 3) + 1;
                if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar32 = param_1[5] - (long)pvVar59;
                if ((ulong)(lVar32 >> 3) < 0xfffffffffffffff) {
                  uVar42 = lVar32 >> 2;
                  if (uVar39 <= uVar42) {
                    uVar39 = uVar42;
                  }
                  if (uVar39 != 0) {
                    if (uVar39 >> 0x3d == 0) goto LAB_7102cda8bc;
                    goto LAB_7102cda8b0;
                  }
                  pvVar23 = (void *)0x0;
                }
                else {
                  uVar39 = 0x1fffffffffffffff;
LAB_7102cda8bc:
                  ppplVar29 = (long ***)(uVar39 * 8);
                  if (ppplVar29 == (long ***)0x0) {
                    ppplVar29 = (long ***)0x1;
                  }
                  pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,
                                                   pppplVar26,param_6,param_7,param_8);
                  if (pvVar23 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_130 = (long ***)((ulong)local_130 & 0xffffffff00000000);
                      pcVar25 = (char *)&local_c0;
                      local_c0 = ppplVar29;
                      uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                      if (((uVar42 & 1) != 0) &&
                         (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,
                                                           ppppbVar48,pppplVar26,param_6,param_7,
                                                           param_8), pvVar23 != (void *)0x0))
                      goto LAB_7102cda924;
                    }
                    pvVar23 = (void *)0x0;
                  }
                }
LAB_7102cda924:
                plVar41 = (long *)((long)pvVar23 + ((long)pppplVar22 >> 3) * 8);
                *plVar41 = lVar51;
                if (0 < (long)pppplVar22) {
                  memcpy(pvVar23,pvVar59,(size_t)pppplVar22);
                  pcVar25 = (char *)pppplVar22;
                }
                param_1[3] = (long)pvVar23;
                param_1[4] = (long)(plVar41 + 1);
                param_1[5] = (long)((long)pvVar23 + uVar39 * 8);
                if (pvVar59 != (void *)0x0) {
                  FUN_710392eb40((ulong)pvVar59);
                }
              }
            }
            break;
          }
          plVar36 = plVar36 + 2;
        } while (*(long **)(lVar32 + 0xd8) != plVar36);
      }
    }
  }
  else {
    if ((pbVar44 != (byte *)0x0) && (uVar40 = (uint)*pbVar44, *pbVar44 != 0)) {
      plVar36 = *(long **)(lVar32 + 0xd0);
      if (plVar36 != *(long **)(lVar32 + 0xd8)) {
        uVar39 = 0;
        uVar38 = 0xffffffff;
        do {
          pbVar44 = pbVar44 + 1;
          uVar43 = uVar40 + 0x20;
          if (0x19 < uVar40 - 0x41) {
            uVar43 = uVar40;
          }
          uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
          uVar40 = (uint)*pbVar44;
          uVar39 = uVar39 + 0x100000000;
        } while (uVar40 != 0);
        do {
          if ((*(uint *)(plVar36 + 1) < 2) &&
             (lVar51 = *plVar36,
             (uVar39 & 0xff00000000 | (ulong)~uVar38) == *(ulong *)(lVar51 + 0x68))) {
            param_1[2] = lVar51;
            if (lVar51 != 0) {
              if ((*(char *)(lVar51 + 0xe0) != '\0') && (*(long *)(lVar51 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar51 + 200) + 0x32) = 0;
              }
              if (*(long *)(lVar51 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar51 + 0xd8) + 0x22) = 0;
              }
              lVar32 = param_1[2];
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
                lVar32 = param_1[2];
                if (lVar32 != 0) {
                  *(undefined1 *)(lVar32 + 0x110) = 0;
                  FUN_71025e9d50((long *)(lVar32 + 0x108),extraout_x1,(long ****)pcVar25,ppppbVar48,
                                 pppplVar26,param_6,param_7,param_8);
                  lVar32 = param_1[2];
                  if (lVar32 != 0) {
                    *(byte *)(lVar32 + 0x118) = *(byte *)(lVar32 + 0x118) | 1;
                  }
                }
              }
            }
            goto joined_r0x007102cda860;
          }
          plVar36 = plVar36 + 2;
        } while (*(long **)(lVar32 + 0xd8) != plVar36);
      }
    }
    param_1[2] = 0;
joined_r0x007102cda860:
    if (0 < iVar53) {
      uVar40 = 0;
      do {
        uVar40 = uVar40 + 1;
        pppplVar26 = (long ****)(ulong)uVar40;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = (byte *)0x0;
        uStack_a8 = 0;
        local_c0 = (long ***)0x0;
        local_b8 = 0;
        ppppbVar48 = (byte ****)((ulong)&local_d8 | 1);
        if ((local_d8 & 1) != 0) {
          ppppbVar48 = local_c8;
        }
        pcVar25 = "%s02_%d";
        local_90 = 0;
        snprintf((char *)&local_c0,0x31,"%s02_%d",(char *)ppppbVar48,uVar40);
        uVar38 = (uint)(byte)local_c0;
        if ((byte)local_c0 != 0) {
          plVar36 = *(long **)(*(long *)(*param_1 + 0x310) + 0xd0);
          plVar47 = *(long **)(*(long *)(*param_1 + 0x310) + 0xd8);
          if (plVar36 != plVar47) {
            uVar39 = 0;
            uVar43 = 0xffffffff;
            pbVar44 = (byte *)((ulong)&local_c0 | 1);
            do {
              uVar2 = uVar38 + 0x20;
              if (0x19 < uVar38 - 0x41) {
                uVar2 = uVar38;
              }
              uVar43 = (&DAT_7104754084)[(uVar2 ^ uVar43) & 0xff] ^ uVar43 >> 8;
              uVar38 = (uint)*pbVar44;
              uVar39 = uVar39 + 0x100000000;
              pbVar44 = pbVar44 + 1;
            } while (uVar38 != 0);
            do {
              if ((*(uint *)(plVar36 + 1) < 2) &&
                 (lVar32 = *plVar36,
                 (uVar39 & 0xff00000000 | (ulong)~uVar43) == *(ulong *)(lVar32 + 0x68))) {
                if (lVar32 != 0) {
                  *(undefined1 *)(lVar32 + 0x110) = 0;
                  FUN_71025e9d50((long *)(lVar32 + 0x108),extraout_x1_00,(long ****)pcVar25,
                                 ppppbVar48,pppplVar26,param_6,param_7,param_8);
                  *(byte *)(lVar32 + 0x118) = *(byte *)(lVar32 + 0x118) & 0xfe;
                  if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
                    *(undefined2 *)(*(long *)(lVar32 + 200) + 0x32) = 0;
                  }
                  if (*(long *)(lVar32 + 0xd8) != 0) {
                    *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x22) = 0;
                  }
                  if ((*(char *)(lVar32 + 0xe0) != '\0') && (*(long *)(lVar32 + 200) != 0)) {
                    *(undefined2 *)(*(long *)(lVar32 + 200) + 0x30) = 0x101;
                  }
                  if (*(long *)(lVar32 + 0xd8) != 0) {
                    *(undefined1 *)(*(long *)(lVar32 + 0xd8) + 0x21) = 1;
                  }
                  if (*(char *)(lVar32 + 0xe0) != '\0') {
                    *(undefined1 *)(*(long *)(lVar32 + 0xb0) + 0x10) = 0;
                  }
                  plVar36 = (long *)param_1[4];
                  if (plVar36 < (long *)param_1[5]) {
                    *plVar36 = lVar32;
                    param_1[4] = param_1[4] + 8;
                  }
                  else {
                    pvVar59 = (void *)*plVar41;
                    pppplVar22 = (long ****)((long)plVar36 - (long)pvVar59);
                    uVar39 = ((long)pppplVar22 >> 3) + 1;
                    if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar51 = param_1[5] - (long)pvVar59;
                    if ((ulong)(lVar51 >> 3) < 0xfffffffffffffff) {
                      uVar42 = lVar51 >> 2;
                      if (uVar39 <= uVar42) {
                        uVar39 = uVar42;
                      }
                      if (uVar39 != 0) {
                        if (uVar39 >> 0x3d == 0) goto LAB_7102cd8e98;
                        goto LAB_7102cda8b0;
                      }
                      uVar39 = 0;
                      pvVar23 = (void *)0x0;
                    }
                    else {
                      uVar39 = 0x1fffffffffffffff;
LAB_7102cd8e98:
                      ppplVar29 = (long ***)(uVar39 * 8);
                      if (ppplVar29 == (long ***)0x0) {
                        ppplVar29 = (long ***)0x1;
                      }
                      pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,
                                                       pppplVar26,param_6,param_7,param_8);
                      if (pvVar23 == (void *)0x0) {
                        if (DAT_7105332f00 != (long *)0x0) {
                          local_100 = 0;
                          pcVar25 = (char *)&local_130;
                          local_130 = ppplVar29;
                          uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                          if (((uVar42 & 1) != 0) &&
                             (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,
                                                               ppppbVar48,pppplVar26,param_6,param_7
                                                               ,param_8), pvVar23 != (void *)0x0))
                          goto LAB_7102cd8f08;
                        }
                        pvVar23 = (void *)0x0;
                      }
                    }
LAB_7102cd8f08:
                    plVar36 = (long *)((long)pvVar23 + ((long)pppplVar22 >> 3) * 8);
                    *plVar36 = lVar32;
                    if (0 < (long)pppplVar22) {
                      memcpy(pvVar23,pvVar59,(size_t)pppplVar22);
                      pcVar25 = (char *)pppplVar22;
                    }
                    param_1[3] = (long)pvVar23;
                    param_1[4] = (long)(plVar36 + 1);
                    param_1[5] = (long)((long)pvVar23 + uVar39 * 8);
                    if (pvVar59 != (void *)0x0) {
                      FUN_710392eb40((ulong)pvVar59);
                    }
                  }
                }
                break;
              }
              plVar36 = plVar36 + 2;
            } while (plVar47 != plVar36);
          }
        }
      } while ((int)uVar40 < iVar53);
    }
  }
  param_1[0xc] = param_1[0xb];
  param_1[9] = param_1[8];
  if (0 < iVar53) {
    lVar51 = 0;
    lVar32 = 0;
    lVar55 = 0x1e;
    do {
      uVar21 = _ConstantZero;
      uVar62 = uRam0000007107459008;
      uVar61 = _ConstantZero;
      local_10c = local_10c & 0xff00;
      puVar1 = (undefined1 *)((long)*param_3 + lVar55);
      local_f6 = 0;
      local_f8 = 0;
      local_fc = 0;
      local_100 = 0;
      local_c0 = (long ***)0x0;
      local_b8 = 0;
      local_b0 = (byte *)0x0;
      uVar18 = puVar1[-2];
      uVar19 = puVar1[-1];
      local_170 = _ConstantZero;
      auVar20._8_8_ = _DAT_7107521008;
      auVar20._0_8_ = _ConstantZero;
      auVar60._8_8_ = _DAT_7107521008;
      auVar60._0_8_ = _ConstantZero;
      uVar11 = *(undefined4 *)(puVar1 + -0x1e);
      uVar12 = *(undefined4 *)(puVar1 + -0x1a);
      auVar60 = NEON_ext(auVar60,auVar20,8,1);
      uVar13 = *(undefined4 *)(puVar1 + -0x16);
      uVar39 = (ulong)auVar60._0_4_;
      puVar37 = (undefined8 *)((long)*param_4 + lVar51);
      uVar14 = *(undefined4 *)(puVar1 + -0x12);
      uVar15 = *(undefined4 *)(puVar1 + -0xe);
      uVar16 = *(undefined4 *)(puVar1 + -6);
      uVar17 = *puVar1;
      if (*(int *)(puVar37 + 1) == 0) {
        uVar56 = 0;
        uVar58 = 0;
        pppbVar28 = (byte ***)((long)puVar37 + 0xc);
        local_160 = local_170;
        uStack_158 = uVar39;
      }
      else {
        fVar63 = *(float *)((long)puVar37 + 0x14);
        local_170 = *(undefined8 *)((long)puVar37 + 0x14);
        fVar65 = -1.0;
        if (fVar63 == 0.0) {
          fVar65 = 1.0;
        }
        pppbVar28 = *param_4 + lVar32 * 4 + 2;
        uVar58 = 2;
        uVar56 = 1;
        uStack_158 = 0;
        local_160 = CONCAT44(*(float *)(puVar37 + 3) * fVar65,fVar63);
      }
      uVar10 = *(undefined4 *)pppbVar28;
      puVar31 = (undefined8 *)param_1[0xc];
      if (puVar31 < (undefined8 *)param_1[0xd]) {
        uVar5 = *puVar37;
        uVar8 = puVar37[1];
        uVar9 = puVar37[3];
        puVar31[2] = puVar37[2];
        puVar31[3] = uVar9;
        *puVar31 = uVar5;
        puVar31[1] = uVar8;
        param_1[0xc] = param_1[0xc] + 0x20;
      }
      else {
        pvVar59 = (void *)param_1[0xb];
        pppplVar22 = (long ****)((long)puVar31 - (long)pvVar59);
        uVar42 = ((long)pppplVar22 >> 5) + 1;
        if (uVar42 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar33 = param_1[0xd] - (long)pvVar59;
        if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
          uVar52 = lVar33 >> 4;
          if (uVar42 <= uVar52) {
            uVar42 = uVar52;
          }
          if (uVar42 != 0) {
            if (uVar42 >> 0x3b == 0) goto LAB_7102cd922c;
            goto LAB_7102cda8b0;
          }
          pvVar23 = (void *)0x0;
        }
        else {
          uVar42 = 0x7ffffffffffffff;
LAB_7102cd922c:
          ppplVar29 = (long ***)(uVar42 * 0x20);
          if (ppplVar29 == (long ***)0x0) {
            ppplVar29 = (long ***)0x1;
          }
          pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,pppplVar26,
                                           param_6,param_7,param_8);
          if (pvVar23 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_108 = 0;
              pcVar25 = (char *)&local_130;
              local_130 = ppplVar29;
              uVar52 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
              if (((uVar52 & 1) != 0) &&
                 (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,
                                                   pppplVar26,param_6,param_7,param_8),
                 pvVar23 != (void *)0x0)) goto LAB_7102cd9298;
            }
            pvVar23 = (void *)0x0;
          }
        }
LAB_7102cd9298:
        uVar5 = *puVar37;
        uVar8 = puVar37[1];
        puVar31 = (undefined8 *)((long)pvVar23 + ((long)pppplVar22 >> 5) * 0x20);
        uVar9 = puVar37[3];
        puVar31[2] = puVar37[2];
        puVar31[3] = uVar9;
        *puVar31 = uVar5;
        puVar31[1] = uVar8;
        if (0 < (long)pppplVar22) {
          memcpy(pvVar23,pvVar59,(size_t)pppplVar22);
          pcVar25 = (char *)pppplVar22;
        }
        param_1[0xb] = (long)pvVar23;
        param_1[0xc] = (long)(puVar31 + 4);
        param_1[0xd] = (long)((long)pvVar23 + uVar42 * 0x20);
        if (pvVar59 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar59);
        }
      }
      puVar37 = (undefined8 *)param_1[9];
      if (puVar37 < (undefined8 *)param_1[10]) {
        puVar37[1] = uVar39;
        *puVar37 = uVar21;
        puVar37[3] = uVar39;
        puVar37[2] = uVar21;
        *(undefined4 *)(puVar37 + 4) = uVar11;
        *(undefined4 *)((long)puVar37 + 0x24) = 0x41200000;
        *(undefined4 *)(puVar37 + 5) = uVar12;
        *(undefined4 *)((long)puVar37 + 0x2c) = uVar13;
        *(undefined4 *)(puVar37 + 6) = uVar14;
        *(undefined4 *)((long)puVar37 + 0x34) = uVar15;
        *(undefined4 *)(puVar37 + 7) = 0x3f800000;
        *(undefined4 *)((long)puVar37 + 0x3c) = uVar16;
        *(undefined4 *)(puVar37 + 8) = 0x3f800000;
        puVar37[9] = 0x31ed91fca;
        *(undefined4 *)(puVar37 + 10) = 0x7003f;
        *(undefined1 *)((long)puVar37 + 0x54) = 0x1f;
        puVar37[0xb] = 0x15a2c502b3;
        puVar37[0xc] = 0x100000800;
        *(undefined1 *)((long)puVar37 + 0x57) = local_f2;
        *(undefined1 *)(puVar37 + 0xd) = uVar19;
        *(undefined1 *)((long)puVar37 + 0x69) = uVar17;
        *(undefined2 *)((long)puVar37 + 0x55) = local_f4;
        *(undefined1 *)((long)puVar37 + 0x6d) = uVar18;
        *(undefined1 *)((long)puVar37 + 0x6c) = local_f6;
        *(undefined2 *)((long)puVar37 + 0x6a) = local_f8;
        *(undefined1 *)((long)puVar37 + 0x76) = 0xe;
        *(undefined2 *)((long)puVar37 + 0x74) = 0;
        puVar37[0xf] = 0x100000000;
        *(undefined2 *)(puVar37 + 0x10) = 0;
        *(undefined2 *)((long)puVar37 + 0x72) = local_fc;
        *(undefined4 *)((long)puVar37 + 0x6e) = local_100;
        puVar37[0x11] = 0x31ed91fca;
        *(undefined4 *)(puVar37 + 0x14) = 0;
        puVar37[0x13] = uVar62;
        puVar37[0x12] = uVar61;
        *(undefined2 *)((long)puVar37 + 0xa4) = 0;
        *(undefined2 *)((long)puVar37 + 0x86) = local_104;
        *(undefined4 *)((long)puVar37 + 0x82) = local_108;
        puVar37[0x15] = &DAT_3f8000003f800000;
        puVar37[0x17] = 0x425cbfc4f;
        *(undefined4 *)(puVar37 + 0x16) = 0;
        puVar37[0x18] = 0x7fb997a80;
        *(undefined2 *)(puVar37 + 0x19) = 0;
        *(ushort *)((long)puVar37 + 0xa6) = local_10c;
        *(undefined2 *)((long)puVar37 + 0xcc) = 0;
        *(undefined2 *)((long)puVar37 + 0xca) = local_110;
        *(undefined4 *)(puVar37 + 0x1a) = 0xbf800000;
        *(undefined2 *)((long)puVar37 + 0xce) = local_114;
        *(long ****)((long)puVar37 + 0xd4) = local_c0;
        *(undefined4 *)((long)puVar37 + 0xec) = 0xffffffff;
        *(byte **)((long)puVar37 + 0xe4) = local_b0;
        *(undefined8 *)((long)puVar37 + 0xdc) = local_b8;
        *(undefined2 *)(puVar37 + 0x1e) = 3;
        *(undefined2 *)((long)puVar37 + 0xf2) = local_118;
        *(undefined4 *)((long)puVar37 + 0xf4) = 0x3f800000;
        *(undefined2 *)(puVar37 + 0x1f) = 0;
        *(undefined1 *)((long)puVar37 + 0xfa) = 0;
        *(undefined1 *)((long)puVar37 + 0xff) = local_11c;
        *(undefined4 *)((long)puVar37 + 0xfb) = local_120;
        *(undefined4 *)(puVar37 + 0x20) = uVar56;
        *(long ****)((long)puVar37 + 0x104) = local_130;
        *(undefined4 *)((long)puVar37 + 0x10c) = local_128;
        puVar37[0x23] = 0;
        puVar37[0x22] = 0;
        puVar37[0x25] = uStack_158;
        puVar37[0x24] = local_170;
        *(undefined4 *)(puVar37 + 0x26) = uVar10;
        puVar37[0x29] = 0;
        puVar37[0x28] = 0;
        *(undefined4 *)((long)puVar37 + 0x134) = uVar58;
        *(undefined4 *)(puVar37 + 0x2c) = uVar10;
        puVar37[0x2b] = uStack_158;
        puVar37[0x2a] = local_160;
        *(undefined4 *)((long)puVar37 + 0x164) = uVar58;
        param_1[9] = param_1[9] + 0x170;
      }
      else {
        pvVar59 = (void *)param_1[8];
        pppplVar22 = (long ****)((long)puVar37 - (long)pvVar59);
        uVar52 = 0xb21642c8590b21;
        uVar42 = ((long)pppplVar22 >> 4) * -0x2c8590b21642c859 + 1;
        if (0xb21642c8590b21 < uVar42) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar33 = param_1[10] - (long)pvVar59 >> 4;
        if ((ulong)(lVar33 * -0x2c8590b21642c859) < 0x590b21642c8590) {
          uVar34 = lVar33 * -0x590b21642c8590b2;
          uVar52 = uVar42;
          if (uVar42 <= uVar34) {
            uVar52 = uVar34;
          }
          if (uVar52 != 0) goto LAB_7102cd9584;
          lVar33 = 0;
        }
        else {
LAB_7102cd9584:
          ppplVar29 = (long ***)(uVar52 * 0x170);
          if (ppplVar29 == (long ***)0x0) {
            ppplVar29 = (long ***)0x1;
          }
          lVar33 = FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,pppplVar26,param_6,
                                  param_7,param_8);
          if (lVar33 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_108 = 0;
              pcVar25 = (char *)&local_130;
              local_130 = ppplVar29;
              uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
              if (((uVar42 & 1) != 0) &&
                 (lVar33 = FUN_710392e290(0x10,ppplVar29,(long ****)pcVar25,ppppbVar48,pppplVar26,
                                          param_6,param_7,param_8), lVar33 != 0))
              goto LAB_7102cd95f0;
            }
            lVar33 = 0;
          }
        }
LAB_7102cd95f0:
        puVar37 = (undefined8 *)(lVar33 + ((long)pppplVar22 >> 4) * 0x10);
        *(undefined4 *)(puVar37 + 5) = uVar12;
        *(undefined4 *)((long)puVar37 + 0x2c) = uVar13;
        puVar37[1] = uVar39;
        *puVar37 = uVar21;
        puVar37[3] = uVar39;
        puVar37[2] = uVar21;
        *(undefined4 *)(puVar37 + 6) = uVar14;
        *(undefined4 *)(puVar37 + 4) = uVar11;
        *(undefined4 *)((long)puVar37 + 0x24) = 0x41200000;
        *(undefined4 *)((long)puVar37 + 0x34) = uVar15;
        *(undefined4 *)(puVar37 + 7) = 0x3f800000;
        *(undefined4 *)((long)puVar37 + 0x3c) = uVar16;
        *(undefined4 *)(puVar37 + 8) = 0x3f800000;
        puVar37[9] = 0x31ed91fca;
        *(undefined4 *)(puVar37 + 10) = 0x7003f;
        *(undefined1 *)((long)puVar37 + 0x54) = 0x1f;
        *(undefined1 *)(puVar37 + 0xd) = uVar19;
        *(undefined1 *)((long)puVar37 + 0x69) = uVar17;
        puVar37[0xb] = 0x15a2c502b3;
        puVar37[0xc] = 0x100000800;
        *(undefined1 *)((long)puVar37 + 0x57) = local_f2;
        *(undefined2 *)((long)puVar37 + 0x55) = local_f4;
        *(undefined1 *)((long)puVar37 + 0x6d) = uVar18;
        *(undefined1 *)((long)puVar37 + 0x6c) = local_f6;
        *(undefined2 *)((long)puVar37 + 0x6a) = local_f8;
        *(undefined1 *)((long)puVar37 + 0x76) = 0xe;
        *(undefined2 *)((long)puVar37 + 0x74) = 0;
        puVar37[0xf] = 0x100000000;
        *(undefined2 *)(puVar37 + 0x10) = 0;
        *(undefined2 *)((long)puVar37 + 0x72) = local_fc;
        *(undefined4 *)((long)puVar37 + 0x6e) = local_100;
        puVar37[0x13] = uVar62;
        puVar37[0x12] = uVar61;
        puVar37[0x11] = 0x31ed91fca;
        *(undefined4 *)(puVar37 + 0x14) = 0;
        *(undefined2 *)((long)puVar37 + 0xa4) = 0;
        *(undefined2 *)((long)puVar37 + 0x86) = local_104;
        *(undefined4 *)((long)puVar37 + 0x82) = local_108;
        puVar37[0x15] = &DAT_3f8000003f800000;
        puVar37[0x17] = 0x425cbfc4f;
        *(undefined4 *)(puVar37 + 0x16) = 0;
        puVar37[0x18] = 0x7fb997a80;
        *(undefined2 *)(puVar37 + 0x19) = 0;
        *(ushort *)((long)puVar37 + 0xa6) = local_10c;
        *(undefined2 *)((long)puVar37 + 0xcc) = 0;
        *(undefined2 *)((long)puVar37 + 0xca) = local_110;
        *(undefined4 *)(puVar37 + 0x1a) = 0xbf800000;
        *(undefined2 *)((long)puVar37 + 0xce) = local_114;
        *(byte **)((long)puVar37 + 0xe4) = local_b0;
        *(undefined4 *)((long)puVar37 + 0xec) = 0xffffffff;
        *(undefined2 *)(puVar37 + 0x1e) = 3;
        *(undefined8 *)((long)puVar37 + 0xdc) = local_b8;
        *(long ****)((long)puVar37 + 0xd4) = local_c0;
        *(undefined4 *)((long)puVar37 + 0xf4) = 0x3f800000;
        *(undefined2 *)(puVar37 + 0x1f) = 0;
        *(undefined1 *)((long)puVar37 + 0xfa) = 0;
        *(undefined2 *)((long)puVar37 + 0xf2) = local_118;
        *(undefined4 *)(puVar37 + 0x20) = uVar56;
        *(undefined1 *)((long)puVar37 + 0xff) = local_11c;
        *(undefined4 *)((long)puVar37 + 0xfb) = local_120;
        *(long ****)((long)puVar37 + 0x104) = local_130;
        puVar37[0x29] = 0;
        puVar37[0x28] = 0;
        *(undefined4 *)((long)puVar37 + 0x10c) = local_128;
        *(undefined4 *)((long)puVar37 + 0x134) = uVar58;
        puVar37[0x23] = 0;
        puVar37[0x22] = 0;
        puVar37[0x25] = uStack_158;
        puVar37[0x24] = local_170;
        *(undefined4 *)((long)puVar37 + 0x164) = uVar58;
        *(undefined4 *)(puVar37 + 0x26) = uVar10;
        *(undefined4 *)(puVar37 + 0x2c) = uVar10;
        puVar37[0x2b] = uStack_158;
        puVar37[0x2a] = local_160;
        lVar35 = SUB168(SEXT816((long)pppplVar22) * SEXT816(0x4de9bd37a6f4de9b),8) -
                 (long)pppplVar22;
        if (0 < (long)pppplVar22) {
          memcpy(puVar37 + ((lVar35 >> 8) - (lVar35 >> 0x3f)) * 0x2e,pvVar59,(size_t)pppplVar22);
          pcVar25 = (char *)pppplVar22;
        }
        param_1[8] = (long)(puVar37 + ((lVar35 >> 8) - (lVar35 >> 0x3f)) * 0x2e);
        param_1[9] = (long)(puVar37 + 0x2e);
        param_1[10] = lVar33 + uVar52 * 0x170;
        if (pvVar59 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar59);
        }
      }
      lVar32 = lVar32 + 1;
      lVar51 = lVar51 + 0x20;
      lVar55 = lVar55 + 0x2c;
    } while (lVar32 < ((long)pppbVar7 - (long)pppbVar4) * 0x8000000 >> 0x20);
  }
  param_1[0xf] = param_1[0xe];
  param_1[0x12] = param_1[0x11];
  param_1[0x15] = param_1[0x14];
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  ppplVar29 = *param_5;
  ppplVar50 = param_5[1];
  if (0 < (int)((ulong)((long)ppplVar50 - (long)ppplVar29) >> 3)) {
    ppppbVar57 = (byte ****)((ulong)&local_d8 | 1);
    pppplVar22 = (long ****)0x0;
LAB_7102cd98f4:
    pppplVar24 = (long ****)((long)pppplVar22 + 1);
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = (byte *)0x0;
    uStack_a8 = 0;
    local_c0 = (long ***)0x0;
    local_b8 = 0;
    ppppbVar48 = ppppbVar57;
    if ((local_d8 & 1) != 0) {
      ppppbVar48 = local_c8;
    }
    local_90 = 0;
    pppplVar26 = pppplVar24;
    snprintf((char *)&local_c0,0x31,"%s02_%d",(char *)ppppbVar48,(int)pppplVar24);
    plVar36 = *(long **)(*(long *)(*param_1 + 0x300) + 0x18);
    plVar41 = (long *)*plVar36;
    plVar36 = (long *)plVar36[1];
    if (plVar41 != plVar36) {
      do {
        lVar32 = *plVar41;
        uVar40 = (uint)(byte)local_c0;
        if (uVar40 == 0) {
          uVar42 = 0;
          uVar39 = 0;
        }
        else {
          uVar39 = 0;
          uVar38 = 0xffffffff;
          pbVar44 = (byte *)((ulong)&local_c0 | 1);
          do {
            uVar43 = uVar40 + 0x20;
            if (0x19 < uVar40 - 0x41) {
              uVar43 = uVar40;
            }
            uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
            uVar40 = (uint)*pbVar44;
            uVar39 = uVar39 + 0x100000000;
            pbVar44 = pbVar44 + 1;
          } while (uVar40 != 0);
          uVar42 = (ulong)~uVar38;
          uVar39 = uVar39 & 0xff00000000;
        }
        if ((*(ulong *)(lVar32 + 0xa0) & 0xffffffffff) == (uVar39 | uVar42)) {
          fVar63 = *(float *)(param_1[1] + 0x98);
          fVar66 = *(float *)(*param_5 + (long)pppplVar22);
          fVar65 = *(float *)((long)(*param_5 + (long)pppplVar22) + 4);
          pppplVar54 = (long ****)0x1;
          FUN_71025f4d80((long *)**(undefined8 **)(lVar32 + 0x110),
                         (long *)(*(undefined8 **)(lVar32 + 0x110))[1],1);
          plVar41 = (long *)**(long **)(lVar32 + 0x110);
          plVar36 = (long *)(*(long **)(lVar32 + 0x110))[1];
          if (plVar41 == plVar36) goto LAB_7102cd9adc;
          fVar63 = fVar63 + fVar66;
          goto LAB_7102cd9a20;
        }
        plVar41 = plVar41 + 1;
      } while (plVar41 != plVar36);
    }
    goto LAB_7102cd9c00;
  }
  ppppbVar57 = (byte ****)((ulong)&local_d8 | 1);
LAB_7102cda070:
  ppppbVar3 = ppppbVar57;
  if ((local_d8 & 1) != 0) {
    ppppbVar3 = local_c8;
  }
  plVar36 = *(long **)(*(long *)(*param_1 + 0x300) + 0x18);
  plVar41 = (long *)*plVar36;
  plVar36 = (long *)plVar36[1];
  if (plVar41 != plVar36) {
    do {
      lVar32 = *plVar41;
      uVar40 = (uint)*(byte *)ppppbVar3;
      if (uVar40 == 0) {
        uVar42 = 0;
        uVar39 = 0;
      }
      else {
        uVar39 = 0;
        uVar38 = 0xffffffff;
        ppppbVar46 = ppppbVar3;
        do {
          ppppbVar46 = (byte ****)((long)ppppbVar46 + 1);
          uVar43 = uVar40 + 0x20;
          if (0x19 < uVar40 - 0x41) {
            uVar43 = uVar40;
          }
          uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
          uVar40 = (uint)*(byte *)ppppbVar46;
          uVar39 = uVar39 + 0x100000000;
        } while (uVar40 != 0);
        uVar42 = (ulong)~uVar38;
        uVar39 = uVar39 & 0xff00000000;
      }
      if ((*(ulong *)(lVar32 + 0xa0) & 0xffffffffff) == (uVar39 | uVar42)) {
        fVar65 = *(float *)(param_1[1] + 0x98);
        pcVar25 = (char *)0x1;
        FUN_71025f4d80((long *)**(undefined8 **)(lVar32 + 0x110),
                       (long *)(*(undefined8 **)(lVar32 + 0x110))[1],1);
        plVar41 = (long *)**(long **)(lVar32 + 0x110);
        plVar36 = (long *)(*(long **)(lVar32 + 0x110))[1];
        goto joined_r0x007102cda15c;
      }
      plVar41 = plVar41 + 1;
    } while (plVar41 != plVar36);
  }
LAB_7102cda33c:
  std::operator+((ulong *)&local_c0,(byte *)&local_d8,"_Flip",(long ****)pcVar25,ppppbVar48,
                 pppplVar26,param_6,param_7,param_8);
  bVar27 = (byte)local_c0 & 1;
  plVar36 = *(long **)(*(long *)(*param_1 + 0x300) + 0x18);
  plVar41 = (long *)*plVar36;
  plVar36 = (long *)plVar36[1];
  pbVar44 = (byte *)((ulong)&local_c0 | 1);
  if (((ulong)local_c0 & 1) != 0) {
    pbVar44 = local_b0;
  }
  if (plVar41 != plVar36) {
    plVar47 = plVar41;
    do {
      lVar32 = *plVar47;
      uVar40 = (uint)*pbVar44;
      if (uVar40 == 0) {
        uVar42 = 0;
        uVar39 = 0;
      }
      else {
        uVar39 = 0;
        uVar38 = 0xffffffff;
        pbVar49 = pbVar44;
        do {
          pbVar49 = pbVar49 + 1;
          uVar43 = uVar40 + 0x20;
          if (0x19 < uVar40 - 0x41) {
            uVar43 = uVar40;
          }
          uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
          uVar40 = (uint)*pbVar49;
          uVar39 = uVar39 + 0x100000000;
        } while (uVar40 != 0);
        uVar42 = (ulong)~uVar38;
        uVar39 = uVar39 & 0xff00000000;
      }
      if ((*(ulong *)(lVar32 + 0xa0) & 0xffffffffff) == (uVar39 | uVar42)) goto LAB_7102cda4bc;
      plVar47 = plVar47 + 1;
    } while (plVar47 != plVar36);
    if ((local_d8 & 1) != 0) {
      ppppbVar57 = local_c8;
    }
    if (plVar41 != plVar36) {
      do {
        lVar32 = *plVar41;
        uVar40 = (uint)*(byte *)ppppbVar57;
        if (uVar40 == 0) {
          uVar42 = 0;
          uVar39 = 0;
        }
        else {
          uVar39 = 0;
          uVar38 = 0xffffffff;
          ppppbVar48 = ppppbVar57;
          do {
            ppppbVar48 = (byte ****)((long)ppppbVar48 + 1);
            uVar43 = uVar40 + 0x20;
            if (0x19 < uVar40 - 0x41) {
              uVar43 = uVar40;
            }
            uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
            uVar40 = (uint)*(byte *)ppppbVar48;
            uVar39 = uVar39 + 0x100000000;
          } while (uVar40 != 0);
          uVar42 = (ulong)~uVar38;
          uVar39 = uVar39 & 0xff00000000;
        }
        if ((*(ulong *)(lVar32 + 0xa0) & 0xffffffffff) == (uVar39 | uVar42)) goto LAB_7102cda4bc;
        plVar41 = plVar41 + 1;
      } while (plVar41 != plVar36);
    }
  }
LAB_7102cda6d4:
  if ((bVar27 != 0) && (local_b0 != (byte *)0x0)) {
    FUN_710392eb40((ulong)local_b0);
  }
  if ((((uint)local_f0[0] & 1) != 0) && (local_e0 != (byte *)0x0)) {
    FUN_710392eb40((ulong)local_e0);
  }
  if (((local_d8 & 1) != 0) && (local_c8 != (byte ****)0x0)) {
    FUN_710392eb40((ulong)local_c8);
  }
  return;
  while( true ) {
    if (1e-05 <= ABS(*(float *)(lVar51 + 0x30))) {
      *(undefined4 *)(lVar51 + 0x30) = 0;
      *(undefined1 *)(lVar51 + 0x129) = 1;
    }
    uVar62 = *(undefined8 *)(lVar51 + 0x58);
    uVar61 = *(undefined8 *)(lVar51 + 0x50);
    if (1e-05 <= ABS((float)uVar61 + -1.0)) {
      uVar61 = CONCAT44((int)((ulong)uVar61 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(undefined8 *)(lVar51 + 0x50) = uVar61;
    }
    if (1e-05 <= ABS((float)((ulong)uVar61 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(ulong *)(lVar51 + 0x50) = CONCAT44(0x3f800000,(int)uVar61);
    }
    plVar41 = plVar41 + 1;
    if (plVar36 == plVar41) break;
LAB_7102cd9a20:
    lVar51 = *plVar41;
    if (*(char *)(lVar51 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar51 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar51 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
LAB_7102cd9a74:
      *(undefined8 *)(lVar51 + 0x18) = 0;
      *(ulong *)(lVar51 + 0x10) = CONCAT44(fVar65,fVar63);
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar51 + 0x10) - fVar63)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20) - fVar65))) {
      *(undefined1 *)(lVar51 + 0x12a) = 1;
      goto LAB_7102cd9a74;
    }
  }
LAB_7102cd9adc:
  plVar41 = (long *)param_1[0x12];
  if (plVar41 < (long *)param_1[0x13]) {
    *plVar41 = lVar32;
    param_1[0x12] = param_1[0x12] + 8;
  }
  else {
    pvVar59 = (void *)param_1[0x11];
    __n = (long)plVar41 - (long)pvVar59;
    uVar39 = ((long)__n >> 3) + 1;
    if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar51 = param_1[0x13] - (long)pvVar59;
    if ((ulong)(lVar51 >> 3) < 0xfffffffffffffff) {
      uVar42 = lVar51 >> 2;
      if (uVar39 <= uVar42) {
        uVar39 = uVar42;
      }
      if (uVar39 != 0) {
        if (uVar39 >> 0x3d != 0) {
LAB_7102cda8b0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7102cd9b4c;
      }
LAB_7102cd9bb0:
      pvVar23 = (void *)0x0;
    }
    else {
      uVar39 = 0x1fffffffffffffff;
LAB_7102cd9b4c:
      ppplVar30 = (long ***)(uVar39 * 8);
      if (ppplVar30 == (long ***)0x0) {
        ppplVar30 = (long ***)0x1;
      }
      pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,pppplVar54,ppppbVar48,pppplVar26,param_6,
                                       param_7,param_8);
      if (pvVar23 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_100 = 0;
          pppplVar54 = &local_130;
          local_130 = ppplVar30;
          uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
          if (((uVar42 & 1) != 0) &&
             (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,pppplVar54,ppppbVar48,pppplVar26,
                                               param_6,param_7,param_8), pvVar23 != (void *)0x0))
          goto LAB_7102cd9bb4;
        }
        goto LAB_7102cd9bb0;
      }
    }
LAB_7102cd9bb4:
    plVar41 = (long *)((long)pvVar23 + ((long)__n >> 3) * 8);
    *plVar41 = lVar32;
    if (0 < (long)__n) {
      memcpy(pvVar23,pvVar59,__n);
    }
    param_1[0x11] = (long)pvVar23;
    param_1[0x12] = (long)(plVar41 + 1);
    param_1[0x13] = (long)((long)pvVar23 + uVar39 * 8);
    if (pvVar59 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar59);
    }
  }
LAB_7102cd9c00:
  local_a0 = 0;
  uStack_98 = 0;
  local_c0 = (long ***)0x0;
  local_b8 = 0;
  ppppbVar48 = ppppbVar57;
  if ((local_d8 & 1) != 0) {
    ppppbVar48 = local_c8;
  }
  pcVar25 = "%s02_%d_Flip";
  local_90 = 0;
  local_b0 = (byte *)0x0;
  uStack_a8 = 0;
  pppplVar26 = pppplVar24;
  snprintf((char *)&local_c0,0x31,"%s02_%d_Flip",(char *)ppppbVar48,(int)pppplVar24);
  plVar36 = *(long **)(*(long *)(*param_1 + 0x300) + 0x18);
  plVar41 = (long *)*plVar36;
  plVar36 = (long *)plVar36[1];
  if (plVar41 != plVar36) {
    do {
      lVar32 = *plVar41;
      uVar40 = (uint)(byte)local_c0;
      if (uVar40 == 0) {
        uVar42 = 0;
        uVar39 = 0;
      }
      else {
        uVar39 = 0;
        uVar38 = 0xffffffff;
        pbVar44 = (byte *)((ulong)&local_c0 | 1);
        do {
          uVar43 = uVar40 + 0x20;
          if (0x19 < uVar40 - 0x41) {
            uVar43 = uVar40;
          }
          uVar38 = (&DAT_7104754084)[(uVar43 ^ uVar38) & 0xff] ^ uVar38 >> 8;
          uVar40 = (uint)*pbVar44;
          uVar39 = uVar39 + 0x100000000;
          pbVar44 = pbVar44 + 1;
        } while (uVar40 != 0);
        uVar42 = (ulong)~uVar38;
        uVar39 = uVar39 & 0xff00000000;
      }
      if ((*(ulong *)(lVar32 + 0xa0) & 0xffffffffff) == (uVar39 | uVar42)) {
        fVar63 = *(float *)(param_1[1] + 0x9c);
        fVar66 = *(float *)(*param_5 + (long)pppplVar22);
        fVar65 = *(float *)((long)(*param_5 + (long)pppplVar22) + 4);
        pcVar25 = (char *)0x1;
        FUN_71025f4d80((long *)**(undefined8 **)(lVar32 + 0x110),
                       (long *)(*(undefined8 **)(lVar32 + 0x110))[1],1);
        plVar41 = (long *)**(long **)(lVar32 + 0x110);
        plVar36 = (long *)(*(long **)(lVar32 + 0x110))[1];
        if (plVar41 == plVar36) goto LAB_7102cd9de4;
        fVar63 = fVar63 - fVar66;
        goto LAB_7102cd9d28;
      }
      plVar41 = plVar41 + 1;
    } while (plVar41 != plVar36);
  }
  goto LAB_7102cd9f08;
  while( true ) {
    if (1e-05 <= ABS(*(float *)(lVar51 + 0x30))) {
      *(undefined4 *)(lVar51 + 0x30) = 0;
      *(undefined1 *)(lVar51 + 0x129) = 1;
    }
    uVar62 = *(undefined8 *)(lVar51 + 0x58);
    uVar61 = *(undefined8 *)(lVar51 + 0x50);
    if (1e-05 <= ABS((float)uVar61 + -1.0)) {
      uVar61 = CONCAT44((int)((ulong)uVar61 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(undefined8 *)(lVar51 + 0x50) = uVar61;
    }
    if (1e-05 <= ABS((float)((ulong)uVar61 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(ulong *)(lVar51 + 0x50) = CONCAT44(0x3f800000,(int)uVar61);
    }
    plVar41 = plVar41 + 1;
    if (plVar36 == plVar41) break;
LAB_7102cd9d28:
    lVar51 = *plVar41;
    if (*(char *)(lVar51 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar51 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar51 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
LAB_7102cd9d7c:
      *(undefined8 *)(lVar51 + 0x18) = 0;
      *(ulong *)(lVar51 + 0x10) = CONCAT44(fVar65,fVar63);
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar51 + 0x10) - fVar63)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20) - fVar65))) {
      *(undefined1 *)(lVar51 + 0x12a) = 1;
      goto LAB_7102cd9d7c;
    }
  }
LAB_7102cd9de4:
  plVar41 = (long *)param_1[0x15];
  if (plVar41 < (long *)param_1[0x16]) {
    *plVar41 = lVar32;
    param_1[0x15] = param_1[0x15] + 8;
  }
  else {
    pvVar59 = (void *)param_1[0x14];
    pppplVar54 = (long ****)((long)plVar41 - (long)pvVar59);
    uVar39 = ((long)pppplVar54 >> 3) + 1;
    if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar51 = param_1[0x16] - (long)pvVar59;
    if ((ulong)(lVar51 >> 3) < 0xfffffffffffffff) {
      uVar42 = lVar51 >> 2;
      if (uVar39 <= uVar42) {
        uVar39 = uVar42;
      }
      if (uVar39 != 0) {
        if (uVar39 >> 0x3d != 0) goto LAB_7102cda8b0;
        goto LAB_7102cd9e54;
      }
LAB_7102cd9eb8:
      pvVar23 = (void *)0x0;
    }
    else {
      uVar39 = 0x1fffffffffffffff;
LAB_7102cd9e54:
      ppplVar30 = (long ***)(uVar39 * 8);
      if (ppplVar30 == (long ***)0x0) {
        ppplVar30 = (long ***)0x1;
      }
      pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,(long ****)pcVar25,ppppbVar48,pppplVar26,
                                       param_6,param_7,param_8);
      if (pvVar23 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_100 = 0;
          pcVar25 = (char *)&local_130;
          local_130 = ppplVar30;
          uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
          if (((uVar42 & 1) != 0) &&
             (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,(long ****)pcVar25,ppppbVar48,
                                               pppplVar26,param_6,param_7,param_8),
             pvVar23 != (void *)0x0)) goto LAB_7102cd9ebc;
        }
        goto LAB_7102cd9eb8;
      }
    }
LAB_7102cd9ebc:
    plVar41 = (long *)((long)pvVar23 + ((long)pppplVar54 >> 3) * 8);
    *plVar41 = lVar32;
    if (0 < (long)pppplVar54) {
      memcpy(pvVar23,pvVar59,(size_t)pppplVar54);
      pcVar25 = (char *)pppplVar54;
    }
    param_1[0x14] = (long)pvVar23;
    param_1[0x15] = (long)(plVar41 + 1);
    param_1[0x16] = (long)((long)pvVar23 + uVar39 * 8);
    if (pvVar59 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar59);
    }
  }
LAB_7102cd9f08:
  uVar11 = *(undefined4 *)(*param_5 + (long)pppplVar22);
  puVar6 = (undefined4 *)param_1[0xf];
  fVar65 = *(float *)((long)(*param_5 + (long)pppplVar22) + 4) + *(float *)(param_1[1] + 0x6cc);
  if (puVar6 < (undefined4 *)param_1[0x10]) {
    *puVar6 = uVar11;
    puVar6[1] = fVar65;
    param_1[0xf] = param_1[0xf] + 8;
    goto LAB_7102cda050;
  }
  pvVar59 = (void *)param_1[0xe];
  pppplVar22 = (long ****)((long)puVar6 - (long)pvVar59);
  uVar39 = ((long)pppplVar22 >> 3) + 1;
  if (uVar39 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar32 = param_1[0x10] - (long)pvVar59;
  if ((ulong)(lVar32 >> 3) < 0xfffffffffffffff) {
    uVar42 = lVar32 >> 2;
    if (uVar39 <= uVar42) {
      uVar39 = uVar42;
    }
    if (uVar39 != 0) {
      if (uVar39 >> 0x3d != 0) goto LAB_7102cda8b0;
      goto LAB_7102cd9f98;
    }
LAB_7102cd9ff8:
    pvVar23 = (void *)0x0;
  }
  else {
    uVar39 = 0x1fffffffffffffff;
LAB_7102cd9f98:
    ppplVar30 = (long ***)(uVar39 * 8);
    if (ppplVar30 == (long ***)0x0) {
      ppplVar30 = (long ***)0x1;
    }
    pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,(long ****)pcVar25,ppppbVar48,pppplVar26,param_6
                                     ,param_7,param_8);
    if (pvVar23 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_100 = 0;
        pcVar25 = (char *)&local_130;
        local_130 = ppplVar30;
        uVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
        if (((uVar42 & 1) != 0) &&
           (pvVar23 = (void *)FUN_710392e290(0x10,ppplVar30,(long ****)pcVar25,ppppbVar48,pppplVar26
                                             ,param_6,param_7,param_8), pvVar23 != (void *)0x0))
        goto LAB_7102cd9ffc;
      }
      goto LAB_7102cd9ff8;
    }
  }
LAB_7102cd9ffc:
  puVar6 = (undefined4 *)((long)pvVar23 + ((long)pppplVar22 >> 3) * 8);
  *puVar6 = uVar11;
  puVar6[1] = fVar65;
  if (0 < (long)pppplVar22) {
    memcpy(pvVar23,pvVar59,(size_t)pppplVar22);
    pcVar25 = (char *)pppplVar22;
  }
  param_1[0xe] = (long)pvVar23;
  param_1[0xf] = (long)(puVar6 + 2);
  param_1[0x10] = (long)((long)pvVar23 + uVar39 * 8);
  if (pvVar59 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar59);
  }
LAB_7102cda050:
  pppplVar22 = pppplVar24;
  if (((long)ppplVar50 - (long)ppplVar29) * 0x20000000 >> 0x20 <= (long)pppplVar24)
  goto LAB_7102cda070;
  goto LAB_7102cd98f4;
joined_r0x007102cda15c:
  if (plVar41 == plVar36) goto LAB_7102cda234;
  lVar51 = *plVar41;
  if (*(char *)(lVar51 + 0x128) == '\0' ||
      (*(char *)(*(long *)(lVar51 + 8) + 0xe8) != '\0' ||
      *(char *)(*(long *)(lVar51 + 8) + 0xe7) != '\0')) {
    *(undefined1 *)(lVar51 + 0x129) = 1;
LAB_7102cda1cc:
    *(undefined8 *)(lVar51 + 0x18) = 0;
    *(ulong *)(lVar51 + 0x10) = (ulong)(uint)fVar65;
  }
  else if ((1e-05 < ABS((float)*(undefined8 *)(lVar51 + 0x10) - fVar65)) ||
          (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20)))) {
    *(undefined1 *)(lVar51 + 0x12a) = 1;
    goto LAB_7102cda1cc;
  }
  if (1e-05 <= ABS(*(float *)(lVar51 + 0x30))) {
    *(undefined4 *)(lVar51 + 0x30) = 0;
    *(undefined1 *)(lVar51 + 0x129) = 1;
  }
  uVar62 = *(undefined8 *)(lVar51 + 0x58);
  uVar61 = *(undefined8 *)(lVar51 + 0x50);
  if (1e-05 <= ABS((float)uVar61 + -1.0)) {
    uVar61 = CONCAT44((int)((ulong)uVar61 >> 0x20),0x3f800000);
    *(undefined1 *)(lVar51 + 0x129) = 1;
    *(undefined8 *)(lVar51 + 0x58) = uVar62;
    *(undefined8 *)(lVar51 + 0x50) = uVar61;
  }
  if (1e-05 <= ABS((float)((ulong)uVar61 >> 0x20) + -1.0)) {
    *(undefined1 *)(lVar51 + 0x129) = 1;
    *(undefined8 *)(lVar51 + 0x58) = uVar62;
    *(ulong *)(lVar51 + 0x50) = CONCAT44(0x3f800000,(int)uVar61);
  }
  plVar41 = plVar41 + 1;
  goto joined_r0x007102cda15c;
LAB_7102cda234:
  param_1[0x17] = lVar32;
  puVar37 = *(undefined8 **)(lVar32 + 0x130);
  if (puVar37 != (undefined8 *)0x0) {
    param_1[6] = (long)puVar37;
    puVar31 = (undefined8 *)*puVar37;
    puVar37 = (undefined8 *)puVar37[1];
    if (puVar31 != puVar37) {
      do {
        plVar41 = (long *)*puVar31;
        if ((char)plVar41[4] != '\0') {
          plVar36 = (long *)plVar41[1];
          lVar32 = plVar41[2];
          lVar51 = *plVar41;
          *(undefined1 *)(plVar41 + 4) = 0;
          *plVar36 = lVar51;
          *(long **)(lVar51 + 8) = plVar36;
          *(long *)(lVar32 + 0x18) = *(long *)(lVar32 + 0x18) + -1;
          *plVar41 = 0;
          plVar41[1] = 0;
          puVar45 = *(undefined8 **)(lVar32 + 0x40);
          *plVar41 = lVar32 + 0x38;
          plVar41[1] = (long)puVar45;
          *(long **)(lVar32 + 0x40) = plVar41;
          *puVar45 = plVar41;
          *(long *)(lVar32 + 0x30) = *(long *)(lVar32 + 0x30) + 1;
          iVar53 = 0;
          if (plVar41[3] != 0) {
            iVar53 = *(int *)(plVar41[3] + 0x110);
          }
          *(int *)(lVar32 + 0x48) = *(int *)(lVar32 + 0x48) - iVar53;
        }
        puVar31 = puVar31 + 1;
      } while (puVar37 != puVar31);
      plVar36 = (long *)((long *)param_1[6])[1];
      for (plVar41 = *(long **)param_1[6]; plVar41 != plVar36; plVar41 = plVar41 + 1) {
        lVar32 = *plVar41;
        fVar66 = (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20);
        fVar63 = (float)*(undefined8 *)(lVar32 + 0x30);
        fVar64 = (fVar66 * 0.0 - fVar63) + 0.0;
        fVar63 = (fVar63 * -0.0 - fVar66) + 0.0;
        *(undefined8 *)(lVar32 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar32 + 0x4c) = 0x3f80000000000000;
        *(float *)(lVar32 + 0x54) = fVar64 * 0.0 + fVar63 + 0.0;
        *(float *)(lVar32 + 0x48) = fVar65 + fVar64 + fVar63 * 0.0;
      }
    }
  }
  goto LAB_7102cda33c;
LAB_7102cda4bc:
  fVar65 = *(float *)(param_1[1] + 0x9c);
  FUN_71025f4d80((long *)**(undefined8 **)(lVar32 + 0x110),
                 (long *)(*(undefined8 **)(lVar32 + 0x110))[1],1);
  plVar36 = (long *)(*(long **)(lVar32 + 0x110))[1];
  for (plVar41 = (long *)**(long **)(lVar32 + 0x110); plVar41 != plVar36; plVar41 = plVar41 + 1) {
    lVar51 = *plVar41;
    if (*(char *)(lVar51 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar51 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar51 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
LAB_7102cda55c:
      *(undefined8 *)(lVar51 + 0x18) = 0;
      *(ulong *)(lVar51 + 0x10) = (ulong)(uint)fVar65;
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar51 + 0x10) - fVar65)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar51 + 0x10) >> 0x20)))) {
      *(undefined1 *)(lVar51 + 0x12a) = 1;
      goto LAB_7102cda55c;
    }
    if (1e-05 <= ABS(*(float *)(lVar51 + 0x30))) {
      *(undefined4 *)(lVar51 + 0x30) = 0;
      *(undefined1 *)(lVar51 + 0x129) = 1;
    }
    uVar62 = *(undefined8 *)(lVar51 + 0x58);
    uVar61 = *(undefined8 *)(lVar51 + 0x50);
    if (1e-05 <= ABS((float)uVar61 + -1.0)) {
      uVar61 = CONCAT44((int)((ulong)uVar61 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(undefined8 *)(lVar51 + 0x50) = uVar61;
    }
    if (1e-05 <= ABS((float)((ulong)uVar61 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar51 + 0x129) = 1;
      *(undefined8 *)(lVar51 + 0x58) = uVar62;
      *(ulong *)(lVar51 + 0x50) = CONCAT44(0x3f800000,(int)uVar61);
    }
  }
  param_1[0x18] = lVar32;
  puVar37 = *(undefined8 **)(lVar32 + 0x130);
  if (puVar37 != (undefined8 *)0x0) {
    param_1[7] = (long)puVar37;
    puVar31 = (undefined8 *)*puVar37;
    puVar37 = (undefined8 *)puVar37[1];
    if (puVar31 != puVar37) {
      do {
        plVar41 = (long *)*puVar31;
        if ((char)plVar41[4] != '\0') {
          plVar36 = (long *)plVar41[1];
          lVar32 = plVar41[2];
          lVar51 = *plVar41;
          *(undefined1 *)(plVar41 + 4) = 0;
          *plVar36 = lVar51;
          *(long **)(lVar51 + 8) = plVar36;
          *(long *)(lVar32 + 0x18) = *(long *)(lVar32 + 0x18) + -1;
          *plVar41 = 0;
          plVar41[1] = 0;
          puVar45 = *(undefined8 **)(lVar32 + 0x40);
          *plVar41 = lVar32 + 0x38;
          plVar41[1] = (long)puVar45;
          *(long **)(lVar32 + 0x40) = plVar41;
          *puVar45 = plVar41;
          *(long *)(lVar32 + 0x30) = *(long *)(lVar32 + 0x30) + 1;
          iVar53 = 0;
          if (plVar41[3] != 0) {
            iVar53 = *(int *)(plVar41[3] + 0x110);
          }
          *(int *)(lVar32 + 0x48) = *(int *)(lVar32 + 0x48) - iVar53;
        }
        puVar31 = puVar31 + 1;
      } while (puVar37 != puVar31);
      plVar36 = (long *)((long *)param_1[7])[1];
      for (plVar41 = *(long **)param_1[7]; plVar41 != plVar36; plVar41 = plVar41 + 1) {
        lVar32 = *plVar41;
        fVar66 = (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20);
        fVar63 = (float)*(undefined8 *)(lVar32 + 0x30);
        fVar64 = (fVar66 * 0.0 - fVar63) + 0.0;
        fVar63 = (fVar63 * -0.0 - fVar66) + 0.0;
        *(undefined8 *)(lVar32 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar32 + 0x4c) = 0x3f80000000000000;
        *(float *)(lVar32 + 0x54) = fVar64 * 0.0 + fVar63 + 0.0;
        *(float *)(lVar32 + 0x48) = fVar65 + fVar64 + fVar63 * 0.0;
      }
    }
  }
  bVar27 = (byte)local_c0 & 1;
  goto LAB_7102cda6d4;
}

