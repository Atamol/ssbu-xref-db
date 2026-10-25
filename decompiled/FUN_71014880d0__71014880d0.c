// addr:      71014880d0
// offset:    0x14880d0
// name:      FUN_71014880d0
// mangled:   
// signature: undefined __cdecl FUN_71014880d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71014880d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 *puVar4;
  long **********pppppppppplVar5;
  long **********pppppppppplVar6;
  ulong *puVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long **********pppppppppplVar16;
  long **************pppppppppppppplVar17;
  long ****pppplVar18;
  long ***********ppppppppppplVar19;
  long ***************ppppppppppppppplVar20;
  byte ****ppppbVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  float *pfVar25;
  undefined8 **ppuVar26;
  long **************pppppppppppppplVar27;
  long ***********ppppppppppplVar28;
  ulong uVar29;
  float fVar30;
  ulong uVar31;
  float *pfVar32;
  ushort uVar33;
  long lVar34;
  char cVar35;
  char *pcVar36;
  long lVar37;
  ulong *puVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  byte *pbVar42;
  undefined1 uVar43;
  ushort uVar44;
  long lVar45;
  long ***************__n;
  size_t sVar46;
  long lVar47;
  long ************pppppppppppplVar48;
  undefined8 **ppuVar49;
  long lVar50;
  ulong *puVar51;
  long lVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  long ***********local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  long **********local_f8;
  long **********local_f0;
  undefined8 local_e8;
  undefined8 *local_e0 [2];
  undefined8 local_d0;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ulong local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  long **************local_98;
  long ***********local_90;
  long ***********local_88;
  long **************local_80 [2];
  undefined4 local_64;
  
  lVar50 = *(long *)(param_1 + 0x10);
  if (*(char *)(*(long *)(*DAT_7105329f98 + 0x50) + 0xc) < '\x01') goto LAB_710148a040;
  lVar41 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x28);
  local_90 = (long ***********)0x0;
  local_88 = (long ***********)0x0;
  local_98 = (long **************)0x0;
  lVar23 = *(long *)(*DAT_7105329f98 + 0x50);
  if (*(char *)(lVar23 + 0xc) < '\x01') {
    uVar44 = 0xffff;
  }
  else {
    uVar44 = *(ushort *)(*(long *)(lVar23 + 0x28) + 0x88);
  }
  if (*(char *)(lVar23 + 0xd) == '\x02') {
    lVar52 = *(long *)(DAT_710532f730 + 8);
    bVar10 = uVar44 != 0xffff;
    bVar12 = (short)uVar44 < 2000;
    iVar14 = local_b8;
    if (bVar10 && bVar12) {
      lVar45 = *(long *)(lVar52 + 0x1d8);
      uVar33 = *(ushort *)(lVar45 + ((long)((ulong)uVar44 << 0x30) >> 0x2f) + 0x60);
      lVar34 = *(long *)(lVar45 + 0x20);
      uVar31 = (*(long *)(lVar45 + 0x28) - lVar34 >> 6) * -0x3333333333333333;
      uVar22 = (uint)uVar31;
      if (uVar22 <= uVar33) goto LAB_7101488684;
      uVar13 = (uint)uVar33;
      if (uVar44 == 0xffff) {
        uVar13 = 0xffffffff;
      }
      if ((uVar13 < uVar22) && (*(char *)(lVar34 + (ulong)uVar13 * 0x140 + 0x5e) == '\x03')) {
        local_d0 = (long ***********)&DAT_c1ffff0000000000;
        local_c8 = 0.0;
        uStack_c4 = 0x7fffff00;
        lVar23 = *(long *)(lVar52 + 0x3a8);
        uVar31 = FUN_71032a9470(lVar45,uVar44);
        param_3 = (undefined **)&local_d0;
        uVar31 = FUN_710327b560(lVar23,uVar31,param_3);
        if ((uVar31 & 1) != 0) {
          *(long ************)(lVar50 + 0x268) = local_d0;
        }
LAB_710148831c:
        iVar14 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
        goto LAB_7101488684;
      }
      if (*(char *)(lVar41 + 0x171) == '\0') {
        pppppppppplVar16 =
             (long **********)FUN_71032817a0(*(long *)(*(long *)(lVar52 + 0x2f8) + 8),0x169337cd2e);
        uVar31 = FUN_71032a9470(lVar45,uVar44);
        ppppppppppplVar28 =
             (long ***********)
             FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        if (ppppppppppplVar28 == (long ***********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_108 = (long ***********)((ulong)local_108 & 0xffffffff00000000);
            local_d0 = (long ***********)&SUB_00000020;
            param_3 = (undefined **)&local_d0;
            uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
            if (((uVar29 & 1) != 0) &&
               (ppppppppppplVar28 =
                     (long ***********)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), ppppppppppplVar28 != (long ***********)0x0))
            goto LAB_71014882e4;
          }
          ppppppppppplVar28 = (long ***********)0x0;
        }
LAB_71014882e4:
        *ppppppppppplVar28 = pppppppppplVar16;
        *(undefined1 *)(ppppppppppplVar28 + 1) = 4;
        local_90 = ppppppppppplVar28 + 4;
        *(undefined1 *)((long)ppppppppppplVar28 + 0xf) = local_d0._6_1_;
        ppppppppppplVar28[2] = (long **********)(uVar31 & 0xffffffffff);
        ppppppppppplVar28[3] = (long **********)&DAT_100000001;
        *(undefined2 *)((long)ppppppppppplVar28 + 0xd) = local_d0._4_2_;
        *(undefined4 *)((long)ppppppppppplVar28 + 9) = (undefined4)local_d0;
        local_98 = (long **************)ppppppppppplVar28;
        local_88 = local_90;
        goto LAB_710148831c;
      }
      if (*(char *)(lVar23 + 0xc) < '\x01') {
        uVar33 = 0xffff;
      }
      else {
        uVar33 = *(ushort *)(*(long *)(lVar23 + 0x28) + 0x88);
      }
      lVar47 = *DAT_7105329fa0;
      fVar53 = 0.0;
      lVar37 = lVar52;
      if (((uVar33 != 0xffff) && ((short)uVar33 < 2000)) &&
         (uVar9 = *(ushort *)(lVar45 + ((long)((ulong)uVar33 << 0x30) >> 0x2f) + 0x60),
         uVar9 < uVar22)) {
        lVar23 = *(long *)(lVar23 + 0x28);
        uVar29 = 0xffffffff;
        if (uVar33 != 0xffff) {
          uVar29 = (ulong)uVar9;
        }
        puVar4 = (undefined2 *)(lVar34 + uVar29 * 0x140);
        if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
          puVar4 = &DAT_7105182b08;
        }
        iVar14 = *(int *)(puVar4 + 0x58);
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(&DAT_71053144d8), iVar15 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        fVar53 = DAT_71052c5948 + DAT_71052c5954;
        fVar56 = (float)NEON_ucvtf(*(undefined4 *)(lVar23 + 0x150));
        uVar31 = (ulong)*(byte *)(puVar4 + 0x34);
        lVar23 = *(long *)(lVar47 + 0xc0);
        iVar15 = *(int *)(lVar23 + uVar31 * 0x1c + 8);
        pfVar25 = (float *)(lVar23 + uVar31 * 0x1c + 4);
        if (fVar56 <= fVar53) {
          pfVar25 = (float *)(lVar23 + uVar31 * 0x1c);
        }
        pcVar36 = *(char **)(*DAT_7105329f98 + 0x68);
        fVar54 = (fVar56 - fVar53) * (fVar56 - fVar53);
        if (fVar56 <= fVar53) {
          fVar54 = (fVar53 - fVar56) * (fVar53 - fVar56);
        }
        switch(pcVar36[0x78] + *pcVar36 + pcVar36[0xf0] + pcVar36[0x168]) {
        case '\x01':
          pfVar32 = (float *)(lVar23 + uVar31 * 0x1c + 0xc);
          break;
        case '\x02':
          pfVar32 = (float *)(lVar23 + uVar31 * 0x1c + 0x10);
          break;
        case '\x03':
          pfVar32 = (float *)(lVar23 + uVar31 * 0x1c + 0x14);
          break;
        case '\x04':
          pfVar32 = (float *)(lVar23 + uVar31 * 0x1c + 0x18);
          break;
        default:
          fVar53 = 1.0;
          goto LAB_71014884b8;
        }
        fVar53 = *pfVar32;
LAB_71014884b8:
        iVar14 = (int)(fVar53 * (float)(int)(fVar54 * *pfVar25 + (float)iVar14));
        if (iVar14 <= iVar15) {
          iVar15 = iVar14;
        }
        iVar3 = 0;
        if (-1 < iVar14) {
          iVar3 = iVar15;
        }
        fVar53 = (float)iVar3;
        lVar37 = *(long *)(DAT_710532f730 + 8);
      }
      uVar13 = (uint)(fVar53 * *(float *)(lVar47 + 0x1f0));
      uVar22 = *(uint *)(lVar47 + 500);
      if (*(uint *)(lVar47 + 500) <= uVar13) {
        uVar22 = uVar13;
      }
      iVar14 = ((int)(uVar22 + 9) / 10) * 10;
      param_3 = (undefined **)FUN_71032817a0(*(long *)(*(long *)(lVar37 + 0x2f8) + 8),0x1c9fe93685);
      FUN_71032933e0(&local_d0,lVar37 + 0x2f0,(ulong)param_3);
      pppppppppppppplVar17 = local_98;
      if (local_90 != local_88) {
        local_90[2] = (long **********)CONCAT44(uStack_bc,local_c0);
        local_90[3] = (long **********)CONCAT44(local_b4,iVar14);
        *local_90 = (long **********)local_d0;
        local_90[1] = (long **********)CONCAT44(uStack_c4,local_c8);
        local_90 = local_90 + 4;
        goto LAB_7101488684;
      }
      pppppppppppplVar48 = (long ************)((long)local_90 - (long)local_98);
      uVar31 = ((long)pppppppppppplVar48 >> 5) + 1;
      if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
      local_b8 = iVar14;
      if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
        uVar29 = (long)local_88 - (long)local_98 >> 4;
        if (uVar31 <= uVar29) {
          uVar31 = uVar29;
        }
        if (uVar31 != 0) {
          if (uVar31 >> 0x3b != 0) goto LAB_7101489f20;
          goto LAB_71014885c0;
        }
LAB_7101488620:
        ppppppppppplVar19 = (long ***********)0x0;
      }
      else {
        uVar31 = 0x7ffffffffffffff;
LAB_71014885c0:
        ppppppppppplVar28 = (long ***********)(uVar31 * 0x20);
        if (ppppppppppplVar28 == (long ***********)0x0) {
          ppppppppppplVar28 = (long ***********)0x1;
        }
        ppppppppppplVar19 =
             (long ***********)
             FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,param_6,
                            param_7,param_8);
        if (ppppppppppplVar19 == (long ***********)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8._0_4_ = 0;
            param_3 = (undefined **)&local_108;
            local_108 = ppppppppppplVar28;
            uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
            if ((uVar29 & 1) != 0) {
              ppppppppppplVar19 =
                   (long ***********)
                   FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,param_6,
                                  param_7,param_8);
              if (ppppppppppplVar19 != (long ***********)0x0) goto LAB_7101488624;
            }
          }
          goto LAB_7101488620;
        }
      }
LAB_7101488624:
      ppppppppppplVar28 = ppppppppppplVar19 + ((long)pppppppppppplVar48 >> 5) * 4;
      ppppppppppplVar28[2] = (long **********)CONCAT44(uStack_bc,local_c0);
      ppppppppppplVar28[3] = (long **********)CONCAT44(local_b4,local_b8);
      *ppppppppppplVar28 = (long **********)local_d0;
      ppppppppppplVar28[1] = (long **********)CONCAT44(uStack_c4,local_c8);
      if (0 < (long)pppppppppppplVar48) {
        memcpy(ppppppppppplVar19,pppppppppppppplVar17,(size_t)pppppppppppplVar48);
        param_3 = (undefined **)pppppppppppplVar48;
      }
      local_98 = (long **************)ppppppppppplVar19;
      local_90 = ppppppppppplVar28 + 4;
      local_88 = ppppppppppplVar19 + uVar31 * 4;
      iVar14 = local_b8;
      if (pppppppppppppplVar17 != (long **************)0x0) {
        FUN_710392eb40((ulong)pppppppppppppplVar17);
        iVar14 = local_b8;
      }
    }
LAB_7101488684:
    local_b8 = iVar14;
    if (*(char *)(lVar41 + 0x171) == '\0') {
      if (*(char *)(lVar41 + 0xb8) == '\0') {
LAB_71014889ec:
        lVar23 = *(long *)(lVar52 + 0x1d8);
        local_b8 = iVar14;
        if (!bVar10 || !bVar12) goto LAB_7101488ba0;
LAB_71014889f4:
        uVar33 = *(ushort *)(lVar23 + ((long)((ulong)uVar44 << 0x30) >> 0x2f) + 0x60);
        uVar31 = (*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20) >> 6) * -0x3333333333333333;
        iVar14 = local_b8;
        if ((uint)uVar31 <= (uint)uVar33) goto LAB_7101488ba0;
        uVar29 = 0xffffffff;
        if (uVar44 != 0xffff) {
          uVar29 = (ulong)uVar33;
        }
        puVar4 = (undefined2 *)(*(long *)(lVar23 + 0x20) + uVar29 * 0x140);
        if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
          puVar4 = &DAT_7105182b08;
        }
        fVar53 = *(float *)(puVar4 + 0x58);
        cVar35 = *(char *)(lVar41 + 0xb8);
      }
      else {
        iVar15 = *(int *)(lVar41 + 0xe4);
        if (iVar15 != 0) {
          param_3 = (undefined **)
                    FUN_71032817a0(*(long *)(*(long *)(lVar52 + 0x2f8) + 8),0x1a4c2381f6);
          FUN_71032933e0(&local_d0,*(long *)(DAT_710532f730 + 8) + 0x2f0,(ulong)param_3);
          pppppppppppppplVar17 = local_98;
          iVar14 = local_b8 * iVar15;
          if (local_90 == local_88) {
            pppppppppppplVar48 = (long ************)((long)local_90 - (long)local_98);
            uVar31 = ((long)pppppppppppplVar48 >> 5) + 1;
            if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
            local_b8 = iVar14;
            if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
              uVar29 = (long)local_88 - (long)local_98 >> 4;
              if (uVar31 <= uVar29) {
                uVar31 = uVar29;
              }
              if (uVar31 != 0) {
                if (uVar31 >> 0x3b != 0) goto LAB_7101489f20;
                goto LAB_7101488908;
              }
              ppppppppppplVar19 = (long ***********)0x0;
            }
            else {
              uVar31 = 0x7ffffffffffffff;
LAB_7101488908:
              ppppppppppplVar28 = (long ***********)(uVar31 * 0x20);
              if (ppppppppppplVar28 == (long ***********)0x0) {
                ppppppppppplVar28 = (long ***********)0x1;
              }
              ppppppppppplVar19 =
                   (long ***********)
                   FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,param_6,
                                  param_7,param_8);
              if (ppppppppppplVar19 == (long ***********)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_e8._0_4_ = 0;
                  param_3 = (undefined **)&local_108;
                  local_108 = ppppppppppplVar28;
                  uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
                  if ((uVar29 & 1) != 0) {
                    ppppppppppplVar19 =
                         (long ***********)
                         FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,
                                        param_6,param_7,param_8);
                    if (ppppppppppplVar19 != (long ***********)0x0) goto LAB_7101488970;
                  }
                }
                ppppppppppplVar19 = (long ***********)0x0;
              }
            }
LAB_7101488970:
            ppppppppppplVar28 = ppppppppppplVar19 + ((long)pppppppppppplVar48 >> 5) * 4;
            ppppppppppplVar28[2] = (long **********)CONCAT44(uStack_bc,local_c0);
            ppppppppppplVar28[3] = (long **********)CONCAT44(local_b4,local_b8);
            *ppppppppppplVar28 = (long **********)local_d0;
            ppppppppppplVar28[1] = (long **********)CONCAT44(uStack_c4,local_c8);
            if (0 < (long)pppppppppppplVar48) {
              memcpy(ppppppppppplVar19,pppppppppppppplVar17,(size_t)pppppppppppplVar48);
              param_3 = (undefined **)pppppppppppplVar48;
            }
            local_98 = (long **************)ppppppppppplVar19;
            local_90 = ppppppppppplVar28 + 4;
            local_88 = ppppppppppplVar19 + uVar31 * 4;
            iVar14 = local_b8;
            if (pppppppppppppplVar17 != (long **************)0x0) {
              FUN_710392eb40((ulong)pppppppppppppplVar17);
              iVar14 = local_b8;
            }
          }
          else {
            local_90[2] = (long **********)CONCAT44(uStack_bc,local_c0);
            local_90[3] = (long **********)CONCAT44(local_b4,iVar14);
            *local_90 = (long **********)local_d0;
            local_90[1] = (long **********)CONCAT44(uStack_c4,local_c8);
            local_90 = local_90 + 4;
          }
        }
        pppppppppppppplVar17 = local_98;
        puVar51 = (ulong *)(lVar41 + 0xc0);
        if ((*puVar51 & 0xff00000000000000) != 0xc100000000000000 || (*puVar51 & 0xffffffffff) == 0)
        goto LAB_71014889ec;
        local_b8 = iVar14;
        if (local_90 != local_88) {
          pppppppppplVar16 = (long **********)*puVar51;
          pppppppppplVar5 = *(long ***********)(lVar41 + 200);
          pppppppppplVar6 = *(long ***********)(lVar41 + 0xd8);
          local_90[2] = *(long ***********)(lVar41 + 0xd0);
          local_90[3] = pppppppppplVar6;
          ppppppppppplVar28 = local_90 + 4;
          *local_90 = pppppppppplVar16;
          local_90[1] = pppppppppplVar5;
          lVar23 = *(long *)(lVar52 + 0x1d8);
          local_90 = ppppppppppplVar28;
          if (!bVar10 || !bVar12) goto LAB_7101488ba0;
          goto LAB_71014889f4;
        }
        param_3 = (undefined **)((long)local_90 - (long)local_98);
        uVar31 = ((long)param_3 >> 5) + 1;
        if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
        if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
          uVar29 = (long)local_88 - (long)local_98 >> 4;
          if (uVar31 <= uVar29) {
            uVar31 = uVar29;
          }
          if (uVar31 != 0) {
            if (uVar31 >> 0x3b != 0) goto LAB_7101489f20;
            goto LAB_7101488adc;
          }
          ppppppppppplVar19 = (long ***********)0x0;
        }
        else {
          uVar31 = 0x7ffffffffffffff;
LAB_7101488adc:
          ppppppppppplVar28 = (long ***********)(uVar31 * 0x20);
          if (ppppppppppplVar28 == (long ***********)0x0) {
            ppppppppppplVar28 = (long ***********)0x1;
          }
          ppppppppppplVar19 =
               (long ***********)
               FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,param_6,
                              param_7,param_8);
          if (ppppppppppplVar19 == (long ***********)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_108 = (long ***********)((ulong)local_108 & 0xffffffff00000000);
              pppplVar18 = (long ****)&local_d0;
              local_d0 = ppppppppppplVar28;
              uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_108);
              if ((uVar29 & 1) != 0) {
                ppppppppppplVar19 =
                     (long ***********)
                     FUN_710392e290(0x10,ppppppppppplVar28,pppplVar18,param_4,param_5,param_6,
                                    param_7,param_8);
                if (ppppppppppplVar19 != (long ***********)0x0) goto LAB_7101488b44;
              }
            }
            ppppppppppplVar19 = (long ***********)0x0;
          }
        }
LAB_7101488b44:
        pppppppppplVar16 = (long **********)*puVar51;
        pppppppppplVar5 = *(long ***********)(lVar41 + 200);
        ppppppppppplVar28 = ppppppppppplVar19 + ((long)param_3 >> 5) * 4;
        pppppppppplVar6 = *(long ***********)(lVar41 + 0xd8);
        ppppppppppplVar28[2] = *(long ***********)(lVar41 + 0xd0);
        ppppppppppplVar28[3] = pppppppppplVar6;
        *ppppppppppplVar28 = pppppppppplVar16;
        ppppppppppplVar28[1] = pppppppppplVar5;
        iVar14 = local_b8;
        if (0 < (long)param_3) {
          memcpy(ppppppppppplVar19,pppppppppppppplVar17,(size_t)param_3);
          iVar14 = local_b8;
        }
        local_98 = (long **************)ppppppppppplVar19;
        local_90 = ppppppppppplVar28 + 4;
        local_88 = ppppppppppplVar19 + uVar31 * 4;
        if (pppppppppppppplVar17 == (long **************)0x0) goto LAB_71014889ec;
        local_b8 = iVar14;
        FUN_710392eb40((ulong)pppppppppppppplVar17);
        lVar23 = *(long *)(lVar52 + 0x1d8);
        iVar14 = local_b8;
        if (bVar10 && bVar12) goto LAB_71014889f4;
LAB_7101488ba0:
        fVar53 = 0.0;
        cVar35 = *(char *)(lVar41 + 0xb8);
        local_b8 = iVar14;
      }
      if (cVar35 != '\0') {
        if ((uVar44 == 0xffff) && (DAT_710532a868 != (long *)0x0)) {
          fVar53 = *(float *)(*DAT_710532a868 + 0x4a8);
        }
        fVar53 = (float)(int)(*(float *)(lVar41 + 0xe0) * (float)(int)fVar53);
      }
      if (*(char *)(lVar41 + 0xec) == '\0') {
        if ((*(char *)(lVar41 + 8) == '\0') ||
           (*(long *)(lVar41 + 0x78) == *(long *)(lVar41 + 0x70))) {
LAB_7101488c64:
          if (!bVar10 || !bVar12) goto LAB_7101488e94;
        }
        else {
          uVar31 = (ulong)*(short *)(lVar41 + 0x88);
          lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          if (uVar31 != 0xffffffffffffffff) {
            uVar31 = (ulong)*(ushort *)(lVar34 + uVar31 * 2 + 0x60);
          }
          if ((uint)((int)((ulong)(*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20)) >> 6) *
                    -0x33333333) <= (uint)uVar31) goto LAB_7101488c64;
          if (((*(char *)(*(long *)(lVar34 + 0x20) + (uVar31 & 0xffffffff) * 0x140 + 0x5e) == '\x03'
               ) || (uVar44 == 0xffff)) || (1999 < (short)uVar44)) goto LAB_7101488e94;
        }
        if ((uint)*(ushort *)(lVar23 + ((long)((ulong)uVar44 << 0x30) >> 0x2f) + 0x60) <
            (uint)((int)((ulong)(*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20)) >> 6) *
                  -0x33333333)) {
          if ((DAT_71053144d8 & 1) == 0) {
            iVar14 = __cxa_guard_acquire(&DAT_71053144d8);
            if (iVar14 != 0) {
              FUN_7101764000();
              param_3 = &PTR_LOOP_7104f17000;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
          }
          lVar23 = *(long *)(lVar52 + 0x1d8);
          if (uVar44 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          else {
            uVar31 = (ulong)*(ushort *)(lVar23 + (long)(short)uVar44 * 2 + 0x60);
          }
          fVar56 = (float)NEON_ucvtf(*(undefined4 *)(lVar41 + 0x150));
          fVar54 = DAT_71052c5948 + DAT_71052c5954;
          uVar29 = (*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20) >> 6) * -0x3333333333333333;
          puVar4 = (undefined2 *)(*(long *)(lVar23 + 0x20) + uVar31 * 0x140);
          if (uVar29 < uVar31 || uVar29 - uVar31 == 0) {
            puVar4 = &DAT_7105182b08;
          }
          uVar31 = (ulong)*(byte *)(puVar4 + 0x34);
          lVar23 = *DAT_7105329fa0;
          lVar52 = *(long *)(lVar23 + 0xc0);
          pfVar25 = (float *)(lVar52 + uVar31 * 0x1c);
          fVar30 = pfVar25[2];
          fVar55 = *pfVar25;
          fVar57 = pfVar25[1];
          if ((*(char *)(lVar41 + 0x170) == '\0') || (*(char *)(lVar23 + 0xa30) == '\0')) {
            bVar11 = false;
          }
          else {
            pfVar25 = (float *)(*(long *)(lVar23 + 0xa08) + uVar31 * 0x1c);
            fVar55 = *pfVar25;
            fVar57 = pfVar25[1];
            fVar30 = pfVar25[2];
            bVar11 = true;
          }
          if (fVar56 <= fVar54) {
            fVar57 = fVar55;
          }
          fVar55 = (fVar56 - fVar54) * (fVar56 - fVar54);
          if (fVar56 <= fVar54) {
            fVar55 = (fVar54 - fVar56) * (fVar54 - fVar56);
          }
          cVar35 = *(char *)(lVar41 + 0xb8);
          fVar56 = (float)(int)(fVar55 * fVar57 + (float)(int)fVar53);
          if (cVar35 == '\0') {
            pbVar42 = *(byte **)(*DAT_7105329f98 + 0x68);
            uVar22 = (uint)pbVar42[0x78] + (uint)*pbVar42 + (uint)pbVar42[0xf0] +
                     (uint)pbVar42[0x168];
            if (bVar11) {
              uVar22 = uVar22 & 0xf;
              if (uVar22 - 1 < 4) {
                lVar52 = *(long *)(lVar23 + 0xa08);
                switch(uVar22) {
                case 2:
                  goto switchD_7101488df0_caseD_2;
                case 3:
                  goto switchD_7101488df0_caseD_3;
                case 4:
                  goto switchD_7101488df0_caseD_4;
                }
switchD_7101488df0_caseD_1:
                fVar53 = *(float *)(lVar52 + uVar31 * 0x1c + 0xc);
              }
              else {
switchD_7101488e24_default:
                fVar53 = 1.0;
              }
            }
            else {
              switch(uVar22 & 0xf) {
              case 1:
                goto switchD_7101488df0_caseD_1;
              case 2:
switchD_7101488df0_caseD_2:
                fVar53 = *(float *)(lVar52 + uVar31 * 0x1c + 0x10);
                break;
              case 3:
switchD_7101488df0_caseD_3:
                fVar53 = *(float *)(lVar52 + uVar31 * 0x1c + 0x14);
                break;
              case 4:
switchD_7101488df0_caseD_4:
                fVar53 = *(float *)(lVar52 + uVar31 * 0x1c + 0x18);
                break;
              default:
                goto switchD_7101488e24_default;
              }
            }
            fVar56 = (float)(int)(fVar53 * (float)(int)fVar56);
          }
          if ((int)fVar56 <= (int)fVar30) {
            fVar30 = fVar56;
          }
          fVar53 = *(float *)(lVar23 + 0xb8);
          if ((int)*(float *)(lVar23 + 0xb8) <= (int)fVar56) {
            fVar53 = fVar30;
          }
        }
      }
LAB_7101488e94:
      bVar11 = fVar53 == 0.0;
      if (cVar35 == '\0') {
        lVar23 = *(long *)(*DAT_7105329f98 + 0x10);
        uVar31 = FUN_71024b79a0(*(long *)(lVar23 + 0x378));
        if ((uVar31 & 1) != 0) {
          lVar52 = *(long *)(lVar23 + 0x378);
          uVar31 = *(ulong *)(lVar52 + 0x30);
          if ((uVar31 & 0xffffffffff) != 0) {
            puVar51 = *(ulong **)(lVar52 + 0x18);
            puVar7 = *(ulong **)(lVar52 + 0x20);
            if (puVar51 != puVar7) {
              cVar35 = '\0';
              puVar38 = puVar51;
              do {
                if (((*puVar38 ^ uVar31) & 0xffffffffff) == 0) {
                  if (-1 < cVar35) {
                    uVar39 = (ulong)cVar35;
                    uVar29 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                    if (uVar29 < uVar39 || uVar29 - uVar39 == 0) goto LAB_710148a1f8;
                    if (((puVar51[uVar39 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                       (fVar56 = 1.0, 1.0 < *(float *)((long)puVar51 + uVar39 * 0x2a8 + 0x114))) {
                      cVar35 = '\0';
                      puVar38 = puVar51;
                      goto LAB_7101488f5c;
                    }
                  }
                  break;
                }
                puVar38 = puVar38 + 0x55;
                cVar35 = cVar35 + '\x01';
              } while (puVar7 != puVar38);
              goto LAB_7101488fc8;
            }
            goto LAB_7101488fcc;
          }
        }
      }
      goto LAB_7101489290;
    }
    if ((DAT_71053144d8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_71053144d8);
      if (iVar14 != 0) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
    }
    local_c0 = 0;
    uStack_bc = 0x52ffff00;
    local_c8 = DAT_71052c5954;
    local_d0 = (long ***********)CONCAT44(DAT_71052c5948,(undefined4)local_d0);
    bVar8 = DAT_71052c5958;
    if (2 < DAT_71052c5958 - 1) {
      bVar8 = 0;
    }
    local_d0 = (long ***********)CONCAT71(local_d0._1_7_,bVar8);
    local_b8._0_2_ = (undefined2)DAT_71052c595a;
    local_b8._2_2_ = DAT_71052c5960;
    local_b4 = _DAT_71052c5962;
    local_b0 = CONCAT62(local_b0._2_6_,DAT_71052c5966);
    uVar13 = FUN_71025cb980((long)&local_d0);
    fVar53 = (float)NEON_ucvtf(*(undefined4 *)(lVar41 + 0x150));
    uVar22 = (uint)fVar53;
    fVar53 = (float)uVar22;
    fVar56 = (fVar53 + (float)(uint)(int)(float)uVar13 / -2.5) / (fVar53 / 100.0);
    if (fVar56 <= 1.0) {
      fVar56 = 1.0;
    }
    fVar56 = (fVar56 * fVar56) / 100.0;
    if (fVar56 <= 1.0) {
      fVar56 = 1.0;
    }
    fVar56 = fVar56 * fVar53;
    if (*(char *)(lVar41 + 0x8b) != '\0') {
      fVar56 = fVar56 * (*(float *)(*DAT_7105329fa0 + 0x1ec) + 1.0);
    }
    if (uVar22 <= (uint)(int)fVar56) {
      uVar22 = (int)fVar56;
    }
    puVar24 = *(undefined8 **)(*DAT_7105314510 + 0x268);
    lVar23 = *(long *)*puVar24;
    if (uVar44 < 2000) {
      uVar13 = *(uint *)(lVar23 + ((long)((ulong)uVar44 << 0x30) >> 0x2e) + 0x65a0);
    }
    else {
      uVar13 = 0;
    }
    uVar22 = ((int)uVar22 / 100) * 100;
    piVar2 = (int *)(lVar23 + 0x84e0);
    iVar14 = *piVar2;
    if (iVar14 != -1) {
      *piVar2 = iVar14 + 1;
    }
    if (uVar13 < uVar22) {
      if (uVar44 < 2000) {
        uVar43 = 1;
        bVar11 = false;
        *(uint *)(*(long *)*puVar24 + ((long)((ulong)uVar44 << 0x30) >> 0x2e) + 0x65a0) = uVar22;
      }
      else {
        bVar11 = false;
        uVar43 = 1;
      }
    }
    else {
      uVar43 = 0;
      bVar11 = false;
    }
  }
  else {
    uVar22 = 0;
    uVar43 = 0;
    bVar11 = false;
  }
  goto LAB_7101489930;
  while( true ) {
    puVar38 = puVar38 + 0x55;
    cVar35 = cVar35 + '\x01';
    if (puVar7 == puVar38) break;
LAB_7101488f5c:
    if (((*puVar38 ^ uVar31) & 0xffffffffff) == 0) {
      if (-1 < cVar35) {
        uVar39 = (ulong)cVar35;
        if (uVar29 < uVar39 || uVar29 - uVar39 == 0) goto LAB_710148a1f8;
        if (((puVar51[uVar39 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
           (fVar56 = *(float *)((long)puVar51 + uVar39 * 0x2a8 + 0x114), fVar56 <= 1.0)) {
          fVar56 = 1.0;
        }
      }
      break;
    }
  }
  fVar53 = (float)(int)(fVar56 * (float)(int)fVar53);
LAB_7101488fc8:
  if ((uVar31 & 0xffffffffff) != 0) {
LAB_7101488fcc:
    puVar51 = *(ulong **)(lVar52 + 0x18);
    puVar7 = *(ulong **)(lVar52 + 0x20);
    if (puVar51 != puVar7) {
      cVar35 = '\0';
      puVar38 = puVar51;
      do {
        if (((*puVar38 ^ uVar31) & 0xffffffffff) == 0) {
          if (-1 < cVar35) {
            uVar29 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
            uVar31 = (ulong)cVar35;
            if (uVar29 < uVar31 || uVar29 - uVar31 == 0) {
LAB_710148a1f8:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            if (puVar51[uVar31 * 0x55 + 0x27] != puVar51[uVar31 * 0x55 + 0x26]) {
              uVar31 = FUN_71024b5ce0(lVar52,uVar44);
              if ((uVar31 & 1) != 0) {
                lVar23 = *(long *)(lVar23 + 0x378);
                local_c0 = 0;
                uStack_bc = 0;
                local_b8._0_2_ = 0;
                local_b8._2_2_ = 0;
                local_b4 = 0;
                local_d0 = (long ***********)&DAT_c1ffff0000000000;
                local_c8 = (float)CONCAT31(local_c8._1_3_,0xff);
                uVar31 = FUN_71024b5ce0(lVar23,uVar44);
                if (((uVar31 & 1) == 0) || (!bVar10 || !bVar12)) goto LAB_7101489168;
                lVar52 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
                uVar33 = *(ushort *)(lVar52 + ((long)((ulong)uVar44 << 0x30) >> 0x2f) + 0x60);
                uVar31 = (*(long *)(lVar52 + 0x28) - *(long *)(lVar52 + 0x20) >> 6) *
                         -0x3333333333333333;
                if ((uint)uVar31 <= (uint)uVar33) goto LAB_7101489168;
                uVar29 = 0xffffffff;
                if (uVar44 != 0xffff) {
                  uVar29 = (ulong)uVar33;
                }
                puVar4 = (undefined2 *)(*(long *)(lVar52 + 0x20) + uVar29 * 0x140);
                if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
                  puVar4 = &DAT_7105182b08;
                }
                puVar51 = *(ulong **)(lVar23 + 0x18);
                puVar7 = *(ulong **)(lVar23 + 0x20);
                if (puVar51 == puVar7) goto LAB_7101489168;
                bVar8 = *(byte *)(puVar4 + 0x34);
                cVar35 = '\0';
                puVar38 = puVar51;
                goto LAB_71014890fc;
              }
            }
          }
          break;
        }
        puVar38 = puVar38 + 0x55;
        cVar35 = cVar35 + '\x01';
      } while (puVar7 != puVar38);
    }
  }
  goto LAB_7101489290;
  while( true ) {
    puVar38 = puVar38 + 0x55;
    cVar35 = cVar35 + '\x01';
    if (puVar7 == puVar38) break;
LAB_710148957c:
    if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
      if (-1 < cVar35) {
        uVar31 = (ulong)cVar35;
        if (uVar39 < uVar31 || uVar39 - uVar31 == 0) goto LAB_710148a1e8;
        if ((puVar51[uVar31 * 0x55 + 0x21] & 0xffffffffff) != 0) {
          ppppppppppppppplVar20 = (long ***************)(ulong)(ushort)puVar51[uVar31 * 0x55 + 0x24]
          ;
          FUN_7101784a90((ulong *)&local_108,puVar51[uVar31 * 0x55 + 0x23],
                         (uint)(ushort)puVar51[uVar31 * 0x55 + 0x24]);
        }
      }
      break;
    }
  }
  pppppppppppppplVar17 = local_98;
  iVar14 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
  if (local_90 == local_88) {
    sVar46 = (long)local_90 - (long)local_98;
    uVar31 = ((long)sVar46 >> 5) + 1;
    if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
    if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
      uVar29 = (long)local_88 - (long)local_98 >> 4;
      if (uVar31 <= uVar29) {
        uVar31 = uVar29;
      }
      if (uVar31 != 0) {
        if (uVar31 >> 0x3b != 0) goto LAB_7101489f20;
        goto LAB_7101489650;
      }
LAB_71014896b0:
      ppppppppppplVar28 = (long ***********)0x0;
    }
    else {
      uVar31 = 0x7ffffffffffffff;
LAB_7101489650:
      pppppppppppppplVar27 = (long **************)(uVar31 * 0x20);
      if (pppppppppppppplVar27 == (long **************)0x0) {
        pppppppppppppplVar27 = (long **************)0x1;
      }
      ppppppppppplVar28 =
           (long ***********)
           FUN_710392e290(0x10,pppppppppppppplVar27,(long ****)ppppppppppppppplVar20,ppppbVar21,
                          param_5,param_6,param_7,param_8);
      if (ppppppppppplVar28 == (long ***********)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          ppppppppppppppplVar20 = local_80;
          local_80[0] = pppppppppppppplVar27;
          uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar29 & 1) != 0) &&
             (ppppppppppplVar28 =
                   (long ***********)
                   FUN_710392e290(0x10,pppppppppppppplVar27,(long ****)ppppppppppppppplVar20,
                                  ppppbVar21,param_5,param_6,param_7,param_8),
             ppppppppppplVar28 != (long ***********)0x0)) goto LAB_71014896b4;
        }
        goto LAB_71014896b0;
      }
    }
LAB_71014896b4:
    ppppppppppplVar19 = ppppppppppplVar28 + ((long)sVar46 >> 5) * 4;
    ppppppppppplVar19[2] = local_f8;
    ppppppppppplVar19[3] = local_f0;
    *ppppppppppplVar19 = (long **********)local_108;
    ppppppppppplVar19[1] = (long **********)CONCAT71(uStack_ff,local_100);
    if (0 < (long)sVar46) {
      memcpy(ppppppppppplVar28,pppppppppppppplVar17,sVar46);
    }
    local_98 = (long **************)ppppppppppplVar28;
    local_90 = ppppppppppplVar19 + 4;
    local_88 = ppppppppppplVar28 + uVar31 * 4;
    if (pppppppppppppplVar17 != (long **************)0x0) {
      FUN_710392eb40((ulong)pppppppppppppplVar17);
    }
  }
  else {
    local_90[2] = local_f8;
    local_90[3] = local_f0;
    *local_90 = (long **********)local_108;
    local_90[1] = (long **********)CONCAT71(uStack_ff,local_100);
    local_90 = local_90 + 4;
  }
  lVar52 = *(long *)(lVar23 + 0x378);
  uVar29 = *(ulong *)(lVar52 + 0x30);
  uVar31 = uVar29 & 0xffffffffff;
  goto LAB_7101489708;
  while( true ) {
    puVar38 = puVar38 + 0x55;
    cVar35 = cVar35 + '\x01';
    if (puVar7 == puVar38) break;
LAB_71014897a0:
    if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
      fVar53 = 1.0;
      if (-1 < cVar35) {
        uVar29 = (ulong)cVar35;
        if (uVar31 < uVar29 || uVar31 - uVar29 == 0) goto LAB_710148a1e8;
        if (((puVar51[uVar29 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
           (fVar53 = *(float *)((long)puVar51 + uVar29 * 0x2a8 + 0x124), fVar53 <= 1.0)) {
          fVar53 = 1.0;
        }
      }
      break;
    }
  }
  if (local_98 != (long **************)local_90) {
    lVar52 = *(long *)(DAT_710532f730 + 8);
    ppppppppppplVar19 = (long ***********)local_98;
    do {
      uVar31 = 0x2dff000000000000;
      if (*(char *)(ppppppppppplVar19 + 1) == '\x05') {
        uVar31 = FUN_710327d930(*(long *)(*(long *)(*(long *)(lVar23 + 8) + 0x318) + 8),
                                (ulong)ppppppppppplVar19[2]);
      }
      uVar29 = FUN_710327d930(*(long *)(*(long *)(lVar52 + 0x318) + 8),0x155f9548cb);
      if ((((uVar31 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar31 & 0xffffffffff) != 0))
         && ((uVar29 & 0xff00000000000000) == 0x2d00000000000000 && (uVar29 & 0xffffffffff) != 0)) {
        if (((uVar29 ^ uVar31) & 0xffffffffff) == 0) {
LAB_71014898d4:
          *(int *)(ppppppppppplVar19 + 3) = (int)(fVar53 * (float)*(int *)(ppppppppppplVar19 + 3));
          *(uint *)((long)ppppppppppplVar19 + 0x1c) =
               *(uint *)((long)ppppppppppplVar19 + 0x1c) | 0x4000;
        }
      }
      else if (((uVar29 & 0xffffffffff) != 0 && (uVar29 & 0xff00000000000000) == 0x2d00000000000000)
               == ((uVar31 & 0xff00000000000000) == 0x2d00000000000000 &&
                  (uVar31 & 0xffffffffff) != 0)) goto LAB_71014898d4;
      ppppppppppplVar19 = ppppppppppplVar19 + 4;
    } while (ppppppppppplVar28 != ppppppppppplVar19);
  }
  goto LAB_7101489900;
  while( true ) {
    puVar38 = puVar38 + 0x55;
    cVar35 = cVar35 + '\x01';
    if (puVar7 == puVar38) break;
LAB_71014890fc:
    if (((*puVar38 ^ *(ulong *)(lVar23 + 0x30)) & 0xffffffffff) == 0) {
      if ((bVar8 < 4) && (-1 < cVar35)) {
        uVar31 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
        uVar29 = (ulong)cVar35;
        if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        param_3 = (undefined **)(ulong)(ushort)puVar51[uVar29 * 0x55 + (ulong)bVar8 * 2 + 0x2a];
        FUN_7101784a90(&local_d0,puVar51[uVar29 * 0x55 + (ulong)bVar8 * 2 + 0x29],
                       (uint)(ushort)puVar51[uVar29 * 0x55 + (ulong)bVar8 * 2 + 0x2a]);
      }
      break;
    }
  }
LAB_7101489168:
  pppppppppppppplVar17 = local_98;
  iVar14 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
  if (local_90 == local_88) {
    sVar46 = (long)local_90 - (long)local_98;
    uVar31 = ((long)sVar46 >> 5) + 1;
    if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
    if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
      uVar29 = (long)local_88 - (long)local_98 >> 4;
      if (uVar31 <= uVar29) {
        uVar31 = uVar29;
      }
      if (uVar31 != 0) {
        if (uVar31 >> 0x3b != 0) goto LAB_7101489f20;
        goto LAB_71014891d8;
      }
LAB_7101489238:
      ppppppppppplVar19 = (long ***********)0x0;
    }
    else {
      uVar31 = 0x7ffffffffffffff;
LAB_71014891d8:
      ppppppppppplVar28 = (long ***********)(uVar31 * 0x20);
      if (ppppppppppplVar28 == (long ***********)0x0) {
        ppppppppppplVar28 = (long ***********)0x1;
      }
      ppppppppppplVar19 =
           (long ***********)
           FUN_710392e290(0x10,ppppppppppplVar28,(long ****)param_3,param_4,param_5,param_6,param_7,
                          param_8);
      if (ppppppppppplVar19 == (long ***********)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_e8._0_4_ = 0;
          pppppppppppplVar48 = &local_108;
          local_108 = ppppppppppplVar28;
          uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
          if (((uVar29 & 1) != 0) &&
             (ppppppppppplVar19 =
                   (long ***********)
                   FUN_710392e290(0x10,ppppppppppplVar28,(long ****)pppppppppppplVar48,param_4,
                                  param_5,param_6,param_7,param_8),
             ppppppppppplVar19 != (long ***********)0x0)) goto LAB_710148923c;
        }
        goto LAB_7101489238;
      }
    }
LAB_710148923c:
    ppppppppppplVar28 = ppppppppppplVar19 + ((long)sVar46 >> 5) * 4;
    ppppppppppplVar28[2] = (long **********)CONCAT44(uStack_bc,local_c0);
    ppppppppppplVar28[3] =
         (long **********)CONCAT44(local_b4,CONCAT22(local_b8._2_2_,(undefined2)local_b8));
    *ppppppppppplVar28 = (long **********)local_d0;
    ppppppppppplVar28[1] = (long **********)CONCAT44(uStack_c4,local_c8);
    if (0 < (long)sVar46) {
      memcpy(ppppppppppplVar19,pppppppppppppplVar17,sVar46);
    }
    local_98 = (long **************)ppppppppppplVar19;
    local_90 = ppppppppppplVar28 + 4;
    local_88 = ppppppppppplVar19 + uVar31 * 4;
    if (pppppppppppppplVar17 != (long **************)0x0) {
      FUN_710392eb40((ulong)pppppppppppppplVar17);
    }
  }
  else {
    local_90[2] = (long **********)CONCAT44(uStack_bc,local_c0);
    local_90[3] = (long **********)CONCAT44(local_b4,CONCAT22(local_b8._2_2_,(undefined2)local_b8));
    *local_90 = (long **********)local_d0;
    local_90[1] = (long **********)CONCAT44(uStack_c4,local_c8);
    local_90 = local_90 + 4;
  }
  *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x800;
LAB_7101489290:
  uStack_bc = 0x3f800000;
  local_b8._0_2_ = 0;
  local_b8._2_2_ = 0x3f80;
  uStack_c4 = 0x3f800000;
  local_c0 = 0x3f800000;
  local_b4 = 0x3f800000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  ppppppppppppppplVar20 = (long ***************)&local_d0;
  local_d0 = (long ***********)0x18d9017ad9;
  ppppbVar21 = (byte ****)0x1;
  local_c8 = fVar53;
  FUN_71032f6630(&local_e8,*(long ****************)(DAT_710532f830 + 8),ppppppppppppppplVar20,
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  ppuVar49 = (undefined8 **)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
joined_r0x0071014892f0:
  if (ppuVar49 != local_e0) {
    do {
      ppppppppppppppplVar20 = (long ***************)ppuVar49[4];
      iVar15 = *(int *)(ppuVar49 + 5);
      FUN_71032933e0((ulong *)&local_108,*(long *)(DAT_710532f730 + 8) + 0x2f0,
                     (ulong)ppppppppppppppplVar20);
      pppppppppppppplVar17 = local_98;
      iVar14 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
      local_f0 = (long **********)CONCAT44(local_f0._4_4_,(int)local_f0 * iVar15);
      if (local_90 == local_88) {
        __n = (long ***************)((long)local_90 - (long)local_98);
        uVar31 = ((long)__n >> 5) + 1;
        if (uVar31 >> 0x3b != 0) goto LAB_710148a1e0;
        if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
          uVar29 = (long)local_88 - (long)local_98 >> 4;
          if (uVar31 <= uVar29) {
            uVar31 = uVar29;
          }
          if (uVar31 != 0) {
            if (uVar31 >> 0x3b == 0) goto LAB_7101489394;
            goto LAB_7101489f20;
          }
LAB_71014893f4:
          ppppppppppplVar28 = (long ***********)0x0;
        }
        else {
          uVar31 = 0x7ffffffffffffff;
LAB_7101489394:
          pppppppppppppplVar27 = (long **************)(uVar31 * 0x20);
          if (pppppppppppppplVar27 == (long **************)0x0) {
            pppppppppppppplVar27 = (long **************)0x1;
          }
          ppppppppppplVar28 =
               (long ***********)
               FUN_710392e290(0x10,pppppppppppppplVar27,(long ****)ppppppppppppppplVar20,ppppbVar21,
                              param_5,param_6,param_7,param_8);
          if (ppppppppppplVar28 == (long ***********)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              ppppppppppppppplVar20 = local_80;
              local_80[0] = pppppppppppppplVar27;
              uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar29 & 1) != 0) &&
                 (ppppppppppplVar28 =
                       (long ***********)
                       FUN_710392e290(0x10,pppppppppppppplVar27,(long ****)ppppppppppppppplVar20,
                                      ppppbVar21,param_5,param_6,param_7,param_8),
                 ppppppppppplVar28 != (long ***********)0x0)) goto LAB_71014893f8;
            }
            goto LAB_71014893f4;
          }
        }
LAB_71014893f8:
        ppppppppppplVar19 = ppppppppppplVar28 + ((long)__n >> 5) * 4;
        ppppppppppplVar19[2] = local_f8;
        ppppppppppplVar19[3] = local_f0;
        *ppppppppppplVar19 = (long **********)local_108;
        ppppppppppplVar19[1] = (long **********)CONCAT71(uStack_ff,local_100);
        if (0 < (long)__n) {
          memcpy(ppppppppppplVar28,pppppppppppppplVar17,(size_t)__n);
          ppppppppppppppplVar20 = __n;
        }
        local_98 = (long **************)ppppppppppplVar28;
        local_90 = ppppppppppplVar19 + 4;
        local_88 = ppppppppppplVar28 + uVar31 * 4;
        if (pppppppppppppplVar17 != (long **************)0x0) {
          FUN_710392eb40((ulong)pppppppppppppplVar17);
        }
        ppuVar26 = (undefined8 **)ppuVar49[1];
        if ((undefined8 **)ppuVar49[1] == (undefined8 **)0x0) goto LAB_710148945c;
LAB_710148944c:
        do {
          ppuVar49 = ppuVar26;
          ppuVar26 = (undefined8 **)*ppuVar49;
        } while ((undefined8 **)*ppuVar49 != (undefined8 **)0x0);
      }
      else {
        local_90[2] = local_f8;
        local_90[3] = local_f0;
        ppppppppppplVar28 = local_90 + 4;
        *local_90 = (long **********)local_108;
        local_90[1] = (long **********)CONCAT71(uStack_ff,local_100);
        ppuVar26 = (undefined8 **)ppuVar49[1];
        local_90 = ppppppppppplVar28;
        if ((undefined8 **)ppuVar49[1] != (undefined8 **)0x0) goto LAB_710148944c;
LAB_710148945c:
        ppuVar26 = ppuVar49 + 2;
        bVar12 = (undefined8 **)**ppuVar26 == ppuVar49;
        ppuVar49 = (undefined8 **)*ppuVar26;
        if (bVar12) goto joined_r0x0071014892f0;
        do {
          puVar24 = *ppuVar26;
          ppuVar26 = (undefined8 **)(puVar24 + 2);
          ppuVar49 = (undefined8 **)*ppuVar26;
        } while (*ppuVar49 != puVar24);
      }
      if (ppuVar49 == local_e0) break;
    } while( true );
  }
  if (*(char *)(lVar41 + 0xb8) == '\0') {
    lVar23 = *(long *)(*DAT_7105329f98 + 0x10);
    uVar31 = FUN_71024b79a0(*(long *)(lVar23 + 0x378));
    if ((uVar31 & 1) != 0) {
      lVar52 = *(long *)(lVar23 + 0x378);
      uVar29 = *(ulong *)(lVar52 + 0x30);
      uVar31 = uVar29 & 0xffffffffff;
      if (uVar31 != 0) {
        puVar51 = *(ulong **)(lVar52 + 0x18);
        puVar7 = *(ulong **)(lVar52 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar40 = (ulong)cVar35;
                uVar39 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                if (uVar39 < uVar40 || uVar39 - uVar40 == 0) goto LAB_710148a1e8;
                if (((puVar51[uVar40 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                   ((short)puVar51[uVar40 * 0x55 + 0x24] != 0)) {
                  local_108 = (long ***********)&DAT_c1ffff0000000000;
                  cVar35 = '\0';
                  local_100 = 0xff;
                  local_f8 = (long **********)0x0;
                  local_f0 = (long **********)0x0;
                  puVar38 = puVar51;
                  goto LAB_710148957c;
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
LAB_7101489708:
          if (uVar31 == 0) goto LAB_7101489900;
        }
        ppppppppppplVar28 = local_90;
        lVar23 = DAT_710532f730;
        puVar51 = *(ulong **)(lVar52 + 0x18);
        puVar7 = *(ulong **)(lVar52 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar39 = (ulong)cVar35;
                uVar31 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                if (uVar31 < uVar39 || uVar31 - uVar39 == 0) goto LAB_710148a1e8;
                if ((puVar51[uVar39 * 0x55 + 0x21] & 0xffffffffff) != 0) {
                  fVar53 = 1.0;
                  if (1.0 < *(float *)((long)puVar51 + uVar39 * 0x2a8 + 0x124)) {
                    cVar35 = '\0';
                    puVar38 = puVar51;
                    goto LAB_71014897a0;
                  }
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
        }
      }
    }
  }
LAB_7101489900:
  FUN_71014879e0(local_e0[0]);
  if (local_b0 != 0) {
    local_a8 = local_b0;
    FUN_710392eb40(local_b0);
  }
  uVar22 = 0;
  uVar43 = 0;
LAB_7101489930:
  if (((DAT_71053144d8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), iVar14 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    if (*(char *)(lVar41 + 0x171) != '\0') goto LAB_7101489948;
LAB_71014899a0:
    *(undefined4 *)(lVar50 + 0xf0) = 1;
  }
  else {
    if (*(char *)(lVar41 + 0x171) == '\0') goto LAB_71014899a0;
LAB_7101489948:
    *(undefined4 *)(lVar50 + 0xf0) = 6;
    *(undefined1 *)(lVar50 + 0x240) = uVar43;
    *(uint *)(lVar50 + 0x244) = uVar22;
  }
  for (uVar31 = 0; "mnu_reward_title_result"[uVar31] != '\0'; uVar31 = uVar31 + 2) {
    *(char *)(lVar50 + uVar31 + 0x178) = "mnu_reward_title_result"[uVar31];
    if ("mnu_reward_title_result"[uVar31 + 1] == '\0') {
      uVar31 = uVar31 + 1;
      break;
    }
    *(char *)(lVar50 + uVar31 + 0x179) = "mnu_reward_title_result"[uVar31 + 1];
  }
  *(undefined1 *)(lVar50 + 0x178 + (uVar31 & 0xffffffff)) = 0;
  uVar13 = (uint)*(byte *)(lVar50 + 0x178);
  uVar22 = 0x811c9dc5;
  *(int *)(lVar50 + 0x174) = (int)uVar31;
  if (*(byte *)(lVar50 + 0x178) != 0) {
    pbVar42 = (byte *)(lVar50 + 0x179);
    do {
      uVar22 = uVar22 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar42;
      pbVar42 = pbVar42 + 1;
    } while (uVar13 != 0);
  }
  *(uint *)(lVar50 + 0x170) = uVar22;
  *(undefined8 *)(lVar50 + 0xf8) = DAT_71053087a8;
  bVar8 = DAT_71053087b8;
  ppppbVar21 = (byte ****)0x0;
  *(undefined4 *)(lVar50 + 0x118) = 0;
  *(uint *)(lVar50 + 0x100) = (uint)bVar8;
  FUN_7101b0ebf0((int *)(lVar50 + 0x11c),(int *)(lVar50 + 0x16c),(undefined **)0x1,0,param_5,param_6
                 ,param_7,param_8);
  *(undefined8 *)(lVar50 + 0x230) = *(undefined8 *)(lVar50 + 0x228);
  *(undefined1 *)(lVar50 + 0x200) = 0;
  if (*(char *)(lVar41 + 0xb8) == '\0') {
    lVar23 = *(long *)(*DAT_7105329f98 + 0x10);
    uVar31 = FUN_71024b79a0(*(long *)(lVar23 + 0x378));
    if ((uVar31 & 1) != 0) {
      lVar41 = *(long *)(lVar23 + 0x378);
      if ((*(ulong *)(lVar41 + 0x30) & 0xffffffffff) != 0) {
        puVar51 = *(ulong **)(lVar41 + 0x18);
        puVar7 = *(ulong **)(lVar41 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ *(ulong *)(lVar41 + 0x30)) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar29 = (ulong)cVar35;
                uVar31 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                if (uVar31 < uVar29 || uVar31 - uVar29 == 0) goto LAB_710148a1f0;
                if (((puVar51[uVar29 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                   (1.0 < *(float *)(puVar51 + uVar29 * 0x55 + 0x22))) {
                  *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x400;
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
        }
      }
      if (!bVar11) {
        lVar41 = *(long *)(lVar23 + 0x378);
        if ((*(ulong *)(lVar41 + 0x30) & 0xffffffffff) != 0) {
          puVar51 = *(ulong **)(lVar41 + 0x18);
          puVar7 = *(ulong **)(lVar41 + 0x20);
          if (puVar51 != puVar7) {
            cVar35 = '\0';
            puVar38 = puVar51;
            do {
              if (((*puVar38 ^ *(ulong *)(lVar41 + 0x30)) & 0xffffffffff) == 0) {
                if (-1 < cVar35) {
                  uVar29 = (ulong)cVar35;
                  uVar31 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                  if (uVar31 < uVar29 || uVar31 - uVar29 == 0) {
LAB_710148a1f0:
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  if (((puVar51[uVar29 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                     (1.0 < *(float *)((long)puVar51 + uVar29 * 0x2a8 + 0x114))) {
                    *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x800;
                  }
                }
                break;
              }
              puVar38 = puVar38 + 0x55;
              cVar35 = cVar35 + '\x01';
            } while (puVar7 != puVar38);
          }
        }
      }
      lVar41 = *(long *)(lVar23 + 0x378);
      uVar29 = *(ulong *)(lVar41 + 0x30);
      uVar31 = uVar29 & 0xffffffffff;
      if (uVar31 != 0) {
        puVar51 = *(ulong **)(lVar41 + 0x18);
        puVar7 = *(ulong **)(lVar41 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar39 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                uVar40 = (ulong)cVar35;
                if (uVar39 < uVar40 || uVar39 - uVar40 == 0) goto LAB_710148a1e8;
                if (((puVar51[uVar40 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                   ((short)puVar51[uVar40 * 0x55 + 0x24] != 0)) {
                  *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x800;
                  lVar41 = *(long *)(lVar23 + 0x378);
                  uVar29 = *(ulong *)(lVar41 + 0x30);
                  uVar31 = uVar29 & 0xffffffffff;
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
          if (uVar31 == 0) goto LAB_7101489db8;
        }
        puVar51 = *(ulong **)(lVar41 + 0x18);
        puVar7 = *(ulong **)(lVar41 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar39 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                uVar40 = (ulong)cVar35;
                if (uVar39 < uVar40 || uVar39 - uVar40 == 0) goto LAB_710148a1e8;
                if (((puVar51[uVar40 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                   (1.0 < *(float *)((long)puVar51 + uVar40 * 0x2a8 + 0x124))) {
                  *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x4000;
                  lVar41 = *(long *)(lVar23 + 0x378);
                  uVar29 = *(ulong *)(lVar41 + 0x30);
                  uVar31 = uVar29 & 0xffffffffff;
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
          if (uVar31 == 0) goto LAB_7101489db8;
        }
        puVar51 = *(ulong **)(lVar41 + 0x18);
        puVar7 = *(ulong **)(lVar41 + 0x20);
        if (puVar51 != puVar7) {
          cVar35 = '\0';
          puVar38 = puVar51;
          do {
            if (((*puVar38 ^ uVar29) & 0xffffffffff) == 0) {
              if (-1 < cVar35) {
                uVar31 = (ulong)cVar35;
                uVar29 = ((long)puVar7 - (long)puVar51 >> 3) * -0x303030303030303;
                if (uVar29 < uVar31 || uVar29 - uVar31 == 0) {
LAB_710148a1e8:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_out_of_range();
                }
                if (((puVar51[uVar31 * 0x55 + 0x21] & 0xffffffffff) != 0) &&
                   (*(char *)((long)puVar51 + uVar31 * 0x2a8 + 300) != '\0')) {
                  *(uint *)(lVar50 + 0x220) = *(uint *)(lVar50 + 0x220) | 0x8000;
                }
              }
              break;
            }
            puVar38 = puVar38 + 0x55;
            cVar35 = cVar35 + '\x01';
          } while (puVar7 != puVar38);
        }
      }
    }
  }
LAB_7101489db8:
  ppppppppppplVar28 = (long ***********)local_98;
  if (local_98 != (long **************)local_90) {
    FUN_7101783dc0(&local_d0,&local_98,(long **********)local_98,ppppbVar21,param_5,param_6,param_7,
                   param_8);
    if (local_98 != (long **************)0x0) {
      local_90 = (long ***********)local_98;
      FUN_710392eb40((ulong)local_98);
    }
    local_90 = (long ***********)CONCAT44(uStack_c4,local_c8);
    local_88 = (long ***********)CONCAT44(uStack_bc,local_c0);
    local_98 = (long **************)local_d0;
    ppppppppppplVar28 = local_90;
  }
  ppppppppppppppplVar20 = (long ***************)(lVar50 + 0x248);
  if (ppppppppppppppplVar20 != &local_98) {
    FUN_7101487a20(ppppppppppppppplVar20,local_98,(long ****)ppppppppppplVar28,ppppbVar21,param_5,
                   param_6,param_7,param_8);
  }
  if (*(long ******)(lVar50 + 0x248) != *(long ******)(lVar50 + 0x250)) {
    FUN_7101783330(&local_d0,*(long ******)(lVar50 + 0x248),*(long ******)(lVar50 + 0x250),
                   ppppbVar21,param_5,param_6,param_7,param_8);
    pppppppppppppplVar17 = *ppppppppppppppplVar20;
    if (pppppppppppppplVar17 != (long **************)0x0) {
      *(long ***************)(lVar50 + 0x250) = pppppppppppppplVar17;
      FUN_710392eb40((ulong)pppppppppppppplVar17);
      *(undefined8 *)(lVar50 + 0x250) = 0;
      *(undefined8 *)(lVar50 + 600) = 0;
      *ppppppppppppppplVar20 = (long **************)0x0;
    }
    *(long ************)(lVar50 + 0x248) = local_d0;
    *(ulong *)(lVar50 + 0x250) = CONCAT44(uStack_c4,local_c8);
    *(ulong *)(lVar50 + 600) = CONCAT44(uStack_bc,local_c0);
  }
  local_b8 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
  if (!bVar11) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), iVar14 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    iVar14 = DAT_71052cc5ec;
    local_b8 = CONCAT22(local_b8._2_2_,(undefined2)local_b8);
    if (0 < DAT_71052cc5ec) {
      lVar23 = *(long *)(DAT_710532f730 + 8);
      pppplVar18 = (long ****)FUN_71032817a0(*(long *)(*(long *)(lVar23 + 0x2f8) + 8),0x14a2eb7d34);
      FUN_71032933e0(&local_d0,lVar23 + 0x2f0,(ulong)pppplVar18);
      pppppppppppppplVar17 = local_98;
      local_b8 = iVar14;
      if (local_90 == local_88) {
        sVar46 = (long)local_90 - (long)local_98;
        uVar31 = ((long)sVar46 >> 5) + 1;
        if (uVar31 >> 0x3b != 0) {
LAB_710148a1e0:
          local_b8 = iVar14;
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_88 - (long)local_98 >> 5) < 0x3ffffffffffffff) {
          uVar29 = (long)local_88 - (long)local_98 >> 4;
          if (uVar31 <= uVar29) {
            uVar31 = uVar29;
          }
          if (uVar31 != 0) {
            if (uVar31 >> 0x3b != 0) {
LAB_7101489f20:
              local_b8 = iVar14;
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101489f2c;
          }
LAB_7101489f94:
          ppppppppppplVar19 = (long ***********)0x0;
        }
        else {
          uVar31 = 0x7ffffffffffffff;
LAB_7101489f2c:
          ppppppppppplVar28 = (long ***********)(uVar31 * 0x20);
          if (ppppppppppplVar28 == (long ***********)0x0) {
            ppppppppppplVar28 = (long ***********)0x1;
          }
          ppppppppppplVar19 =
               (long ***********)
               FUN_710392e290(0x10,ppppppppppplVar28,pppplVar18,ppppbVar21,param_5,param_6,param_7,
                              param_8);
          iVar14 = local_b8;
          if (ppppppppppplVar19 == (long ***********)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_e8._0_4_ = 0;
              pppppppppppplVar48 = &local_108;
              local_108 = ppppppppppplVar28;
              uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
              iVar14 = local_b8;
              if ((uVar29 & 1) != 0) {
                ppppppppppplVar19 =
                     (long ***********)
                     FUN_710392e290(0x10,ppppppppppplVar28,(long ****)pppppppppppplVar48,ppppbVar21,
                                    param_5,param_6,param_7,param_8);
                iVar14 = local_b8;
                if (ppppppppppplVar19 != (long ***********)0x0) goto LAB_7101489f98;
              }
            }
            goto LAB_7101489f94;
          }
        }
LAB_7101489f98:
        ppppppppppplVar28 = ppppppppppplVar19 + ((long)sVar46 >> 5) * 4;
        ppppppppppplVar28[2] = (long **********)CONCAT44(uStack_bc,local_c0);
        ppppppppppplVar28[3] = (long **********)CONCAT44(local_b4,iVar14);
        *ppppppppppplVar28 = (long **********)local_d0;
        ppppppppppplVar28[1] = (long **********)CONCAT44(uStack_c4,local_c8);
        local_b8 = iVar14;
        if (0 < (long)sVar46) {
          memcpy(ppppppppppplVar19,pppppppppppppplVar17,sVar46);
        }
        local_98 = (long **************)ppppppppppplVar19;
        local_90 = ppppppppppplVar28 + 4;
        local_88 = ppppppppppplVar19 + uVar31 * 4;
        if (pppppppppppppplVar17 != (long **************)0x0) {
          FUN_710392eb40((ulong)pppppppppppppplVar17);
        }
      }
      else {
        local_90[2] = (long **********)CONCAT44(uStack_bc,local_c0);
        local_90[3] = (long **********)CONCAT44(local_b4,iVar14);
        *local_90 = (long **********)local_d0;
        local_90[1] = (long **********)CONCAT44(uStack_c4,local_c8);
        local_90 = local_90 + 4;
      }
    }
  }
  if (local_98 != (long **************)local_90) {
    FUN_7101783330(&local_d0,(long *****)local_98,(long *****)local_90,ppppbVar21,param_5,param_6,
                   param_7,param_8);
    uVar31 = *(ulong *)(lVar50 + 0x228);
    if (uVar31 != 0) {
      *(ulong *)(lVar50 + 0x230) = uVar31;
      FUN_710392eb40(uVar31);
      *(undefined8 *)(lVar50 + 0x230) = 0;
      *(undefined8 *)(lVar50 + 0x238) = 0;
      *(ulong *)(lVar50 + 0x228) = 0;
    }
    *(long ************)(lVar50 + 0x228) = local_d0;
    *(ulong *)(lVar50 + 0x230) = CONCAT44(uStack_c4,local_c8);
    *(ulong *)(lVar50 + 0x238) = CONCAT44(uStack_bc,local_c0);
  }
  if (local_98 != (long **************)0x0) {
    local_90 = (long ***********)local_98;
    FUN_710392eb40((ulong)local_98);
  }
LAB_710148a040:
  plVar1 = (long *)(lVar50 + 0xd8);
  FUN_71033861b0(plVar1,(int *)(lVar50 + 0xf0));
  uVar31 = *(ulong *)(lVar50 + 0x268);
  if ((uVar31 & 0xff00000000000000) == 0xc100000000000000 && (uVar31 & 0xffffffffff) != 0) {
    lVar23 = *plVar1;
    pppplVar18 = (long ****)0x0;
    FUN_710323beb0(lVar23,(ulong *)&DAT_71045439f8,(long)*(int *)(lVar23 + 0x70),
                   (ulong)*(uint *)(lVar23 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    local_d0 = (long ***********)FUN_7103238a70(uVar31,0,3);
    if (((ulong)local_d0 & 0xffffffffff) != 0) {
      lVar23 = *plVar1;
      FUN_710323c4e0(lVar23,&local_d0,(long *********)(long)*(int *)(lVar23 + 0x70),
                     (byte ****)(ulong)*(uint *)(lVar23 + 0x68),pppplVar18,param_6,param_7,param_8);
    }
  }
  *(undefined1 *)(lVar50 + 0x260) = 1;
  return;
}

