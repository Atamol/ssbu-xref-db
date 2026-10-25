// addr:      7101bf02a0
// offset:    0x1bf02a0
// name:      FUN_7101bf02a0
// mangled:   
// signature: undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  long ***ppplVar36;
  long *plVar37;
  void *__src;
  long *plVar38;
  ulong *puVar39;
  ulong *puVar40;
  long *plVar41;
  long ***ppplVar42;
  ulong *puVar43;
  PosixTime *pPVar44;
  PosixTime *pPVar45;
  long **pplVar46;
  PosixTime *local_2f8;
  byte local_2f0 [256];
  ulong local_1f0;
  long ***local_1e8;
  long ***local_1e0;
  undefined **local_1d8;
  PosixTime *local_1d0;
  PosixTime *local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  PosixTime *local_1b0;
  PosixTime *local_1a8;
  undefined8 local_1a0;
  byte local_198 [256];
  PosixTime *local_98;
  PosixTime *local_90;
  PosixTime *local_88;
  undefined8 uStack_80;
  ushort local_78;
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  PosixTime *local_70 [2];
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_71050ac8a0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x178,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2f8 = (PosixTime *)((ulong)local_2f8 & 0xffffffff00000000);
      local_1e8 = (long ***)&DAT_00000178;
      param_3 = (undefined **)&local_1e8;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2f8);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x178,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7101bf034c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101bf034c:
  *puVar10 = &PTR_FUN_71050ac8d8;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar29 = puVar10 + 3;
  *puVar29 = &PTR_FUN_71050ac5e8;
  *(undefined4 *)(puVar10 + 4) = 0x1000;
  puVar10[5] = 0;
  puVar10[10] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[9] = 0;
  puVar10[8] = puVar10 + 9;
  puVar21 = puVar10 + 0xb;
  *puVar21 = 0;
  puVar10[0x12] = 0;
  *(undefined8 *)((long)puVar10 + 0xee) = 0;
  puVar10[0x18] = 0;
  plVar14 = puVar10 + 0x1b;
  *plVar14 = 0;
  puVar10[0xc] = 0;
  puVar25 = puVar10 + 0xf;
  *puVar25 = 0;
  plVar37 = puVar10 + 0x15;
  *plVar37 = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  plVar41 = DAT_71052c5168;
  local_1e8 = (long ***)0x0;
  local_1e0 = (long ***)0x0;
  local_1d8 = (undefined **)0x0;
  lVar22 = *DAT_71052c5168;
  if ((long ****)(lVar22 + 0xa8) != &local_1e8) {
    param_3 = *(undefined ***)(lVar22 + 0xb0);
    FUN_710075f050(&local_1e8,*(void **)(lVar22 + 0xa8),(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppplVar42 = local_1e0;
    if (local_1e8 != local_1e0) {
      ppplVar36 = local_1e8;
      do {
        uVar7 = FUN_7101761580(*plVar41,(ulong)*ppplVar36);
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar8 = 1;
        }
        pPVar45 = (PosixTime *)(long)(int)uVar8;
        pPVar12 = (PosixTime *)
                  FUN_710392e290(0x10,pPVar45,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
        if (pPVar12 == (PosixTime *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_90 = (PosixTime *)((ulong)local_90 & 0xffffffff00000000);
            ppPVar15 = &local_2f8;
            local_2f8 = pPVar45;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
            if (((uVar11 & 1) != 0) &&
               (pPVar12 = (PosixTime *)
                          FUN_710392e290(0x10,pPVar45,(long ****)ppPVar15,param_4,param_5,param_6,
                                         param_7,param_8), pPVar12 != (PosixTime *)0x0))
            goto LAB_7101bf0508;
          }
          pPVar12 = (PosixTime *)0x0;
        }
LAB_7101bf0508:
        memset(pPVar12,0,(long)(int)uVar7);
        param_4 = (byte ****)(ulong)uVar7;
        param_5 = (long ****)0x0;
        param_3 = (undefined **)pPVar12;
        local_90 = pPVar12;
        FUN_7101761830(*plVar41,(ulong)*ppplVar36,(byte ****)pPVar12,uVar7,0,param_6,param_7,param_8
                      );
        pplVar46 = *ppplVar36;
        lVar22 = *plVar41;
        while (bVar6 = FUN_7101762400(lVar22,(ulong)pplVar46), !bVar6) {
          nn::os::SleepThread(1000000);
        }
        if ((pPVar12 != (PosixTime *)0x0) && ((ulong)*(uint *)pPVar12 == (long)(int)uVar7)) {
          if ((*(uint *)(pPVar12 + (long)DAT_710523d00c * 8 + 0x48) +
              *(uint *)(pPVar12 + (long)DAT_710523d00c * 8 + 0x4c)) - 1 < *(uint *)pPVar12) {
            param_3 = *(undefined ***)(pPVar12 + 0x18);
            uVar8 = FUN_71033798d0(pPVar12 + *(uint *)(pPVar12 + (long)DAT_710523d00c * 8 + 0x48),
                                   (long ***************)
                                   (ulong)*(uint *)(pPVar12 + (long)DAT_710523d00c * 8 + 0x4c),
                                   (long ***************)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
            if ((uVar8 & 1) != 0) {
              puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x78);
              if (((DAT_71052b92e0 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_71052b92e0), iVar9 != 0)) {
                __cxa_guard_release(&DAT_71052b92e0);
              }
              if ((*(uint *)(pPVar12 + 0xc) < 0x20) &&
                 (((*(int *)(pPVar12 + 0x10) != 1 ||
                   (*(char *)(*(long *)*puVar34 + 0x5e05d) != '\0')) &&
                  (local_2f8 = pPVar12, uVar11 = FUN_7101763880((long *)&local_2f8),
                  (uVar11 & 1) != 0)))) {
                uVar11 = (ulong)*(uint *)(pPVar12 + 0x40);
                if (*(uint *)(pPVar12 + 0x40) != 0) {
                  uVar35 = 0;
                  pPVar45 = pPVar12;
                  do {
                    if (uVar35 < uVar11) {
                      pPVar13 = (PosixTime *)0x0;
                      if (*(uint *)(pPVar12 + 0x44) - 1 < *(uint *)pPVar12) {
                        pPVar13 = pPVar45 + *(uint *)(pPVar12 + 0x44);
                      }
                    }
                    else {
                      pPVar13 = (PosixTime *)0x0;
                    }
                    plVar38 = (long *)puVar10[0x10];
                    if (plVar38 < (long *)puVar10[0x11]) {
                      *plVar38 = (long)pPVar13;
                      puVar10[0x10] = puVar10[0x10] + 8;
                    }
                    else {
                      __src = (void *)*puVar25;
                      pPVar44 = (PosixTime *)((long)plVar38 - (long)__src);
                      uVar11 = ((long)pPVar44 >> 3) + 1;
                      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      lVar22 = (long)puVar10[0x11] - (long)__src;
                      if ((ulong)(lVar22 >> 3) < 0xfffffffffffffff) {
                        uVar32 = lVar22 >> 2;
                        if (uVar11 <= uVar32) {
                          uVar11 = uVar32;
                        }
                        if (uVar11 != 0) {
                          if (uVar11 >> 0x3d == 0) goto LAB_7101bf06b8;
                          goto LAB_7101bf2c40;
                        }
                        __dest = (void *)0x0;
                      }
                      else {
                        uVar11 = 0x1fffffffffffffff;
LAB_7101bf06b8:
                        pPVar23 = (PosixTime *)(uVar11 * 8);
                        if (pPVar23 == (PosixTime *)0x0) {
                          pPVar23 = (PosixTime *)0x1;
                        }
                        __dest = (void *)FUN_710392e290(0x10,pPVar23,(long ****)param_3,param_4,
                                                        param_5,param_6,param_7,param_8);
                        if (__dest == (void *)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_70[0] = (PosixTime *)((ulong)local_70[0] & 0xffffffff00000000);
                            param_3 = &local_2f8;
                            local_2f8 = pPVar23;
                            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                            if (((uVar32 & 1) != 0) &&
                               (__dest = (void *)FUN_710392e290(0x10,pPVar23,(long ****)param_3,
                                                                param_4,param_5,param_6,param_7,
                                                                param_8), __dest != (void *)0x0))
                            goto LAB_7101bf0724;
                          }
                          __dest = (void *)0x0;
                        }
                      }
LAB_7101bf0724:
                      plVar38 = (long *)((long)__dest + ((long)pPVar44 >> 3) * 8);
                      *plVar38 = (long)pPVar13;
                      if (0 < (long)pPVar44) {
                        memcpy(__dest,__src,(size_t)pPVar44);
                        param_3 = (undefined **)pPVar44;
                      }
                      puVar10[0xf] = __dest;
                      puVar10[0x10] = plVar38 + 1;
                      puVar10[0x11] = (void *)((long)__dest + uVar11 * 8);
                      if (__src != (void *)0x0) {
                        FUN_710392eb40((ulong)__src);
                      }
                    }
                    uVar11 = (ulong)*(uint *)(pPVar12 + 0x40);
                    uVar35 = uVar35 + 1;
                    pPVar45 = pPVar45 + 0x4c;
                  } while (uVar35 < uVar11);
                }
                pPVar12 = local_90;
                if ((undefined8 *)puVar10[0xd] < (undefined8 *)puVar10[0xe]) {
                  local_90 = (PosixTime *)0x0;
                  *(undefined8 *)puVar10[0xd] = pPVar12;
                  puVar10[0xd] = puVar10[0xd] + 8;
                }
                else {
                  FUN_7101be1cf0(puVar10 + 0xc,(ulong *)&local_90,(long ****)param_3,param_4,param_5
                                 ,param_6,param_7,param_8);
                }
              }
            }
          }
        }
        pPVar12 = local_90;
        local_90 = (PosixTime *)0x0;
        if (pPVar12 != (PosixTime *)0x0) {
          FUN_710392eb40((ulong)pPVar12);
        }
        ppplVar36 = ppplVar36 + 1;
      } while (ppplVar36 != ppplVar42);
    }
  }
  FUN_7101be16e0((long *)*puVar25,(long *)puVar10[0x10]);
  if (local_1e8 != (long ***)0x0) {
    local_1e0 = local_1e8;
    FUN_710392eb40((ulong)local_1e8);
  }
  local_88 = (PosixTime *)0x0;
  uStack_80 = 0;
  local_90 = (PosixTime *)0x0;
  lVar22 = *plVar41;
  if ((PosixTime **)(lVar22 + 0x228) != &local_90) {
    param_3 = *(undefined ***)(lVar22 + 0x230);
    FUN_710075f050(&local_90,*(void **)(lVar22 + 0x228),(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pPVar12 = local_88;
    if (local_90 != local_88) {
      pPVar45 = local_90;
      do {
        uVar7 = FUN_7101761580(*plVar41,*(ulong *)pPVar45);
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar8 = 1;
        }
        ppplVar42 = (long ***)(long)(int)uVar8;
        pPVar13 = (PosixTime *)
                  FUN_710392e290(0x10,ppplVar42,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
        if (pPVar13 == (PosixTime *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_2f8 = (PosixTime *)((ulong)local_2f8 & 0xffffffff00000000);
            pppplVar16 = &local_1e8;
            local_1e8 = ppplVar42;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2f8);
            if (((uVar11 & 1) != 0) &&
               (pPVar13 = (PosixTime *)
                          FUN_710392e290(0x10,ppplVar42,pppplVar16,param_4,param_5,param_6,param_7,
                                         param_8), pPVar13 != (PosixTime *)0x0))
            goto LAB_7101bf0e10;
          }
          pPVar13 = (PosixTime *)0x0;
        }
LAB_7101bf0e10:
        memset(pPVar13,0,(long)(int)uVar7);
        param_4 = (byte ****)(ulong)uVar7;
        param_5 = (long ****)0x0;
        param_3 = (undefined **)pPVar13;
        local_98 = pPVar13;
        FUN_7101761830(*plVar41,*(ulong *)pPVar45,(byte ****)pPVar13,uVar7,0,param_6,param_7,param_8
                      );
        uVar11 = *(ulong *)pPVar45;
        lVar22 = *plVar41;
        while (bVar6 = FUN_7101762400(lVar22,uVar11), !bVar6) {
          nn::os::SleepThread(1000000);
        }
        if (pPVar13 == (PosixTime *)0x0) {
          local_98 = (PosixTime *)0x0;
        }
        else {
          if ((ulong)*(uint *)pPVar13 == (long)(int)uVar7) {
            if ((*(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xcc) +
                *(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xd0)) - 1 < *(uint *)pPVar13) {
              param_3 = *(undefined ***)(pPVar13 + 0x18);
              uVar8 = FUN_71033798d0(pPVar13 + *(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xcc),
                                     (long ***************)
                                     (ulong)*(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xd0),
                                     (long ***************)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
              if ((uVar8 & 1) != 0) {
                local_2f8 = (PosixTime *)
                            ((ulong)*(ushort *)(pPVar13 + 0x80) & 0xfff |
                             ((ulong)(byte)pPVar13[0x82] & 0xf) << 0xc |
                             ((ulong)(byte)pPVar13[0x83] & 0x1f) << 0x10 |
                             ((ulong)(byte)pPVar13[0x84] & 0x1f) << 0x15 |
                             ((ulong)(byte)pPVar13[0x85] & 0x3f) << 0x1a |
                             (ulong)((byte)pPVar13[0x86] & 0x3f) << 0x20 | 0x4000000000000000);
                FUN_71037419c0((uint *)&local_2f8,&local_1e8);
                ppplVar42 = local_1e8;
                local_2f8 = (PosixTime *)
                            ((ulong)*(ushort *)(pPVar13 + 0x28) & 0xfff |
                             ((ulong)(byte)pPVar13[0x2a] & 0xf) << 0xc |
                             ((ulong)(byte)pPVar13[0x2b] & 0x1f) << 0x10 |
                             ((ulong)(byte)pPVar13[0x2c] & 0x1f) << 0x15 |
                             ((ulong)(byte)pPVar13[0x2d] & 0x3f) << 0x1a |
                             (ulong)((byte)pPVar13[0x2e] & 0x3f) << 0x20 | 0x4000000000000000);
                FUN_71037419c0((uint *)&local_2f8,&local_1e8);
                ppplVar36 = local_1e8;
                iVar9 = nn::time::StandardNetworkSystemClock::GetCurrentTime
                                  ((PosixTime *)&local_1e8);
                if (((iVar9 == 0) && ((long)ppplVar42 <= (long)local_1e8)) &&
                   ((long)local_1e8 <= (long)ppplVar36)) {
                  local_1d8 = &PTR_FUN_710523da28;
                  puVar25 = (undefined8 *)
                            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8);
                  if (puVar25 == (undefined8 *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_70[0] = (PosixTime *)((ulong)local_70[0] & 0xffffffff00000000);
                      local_2f8 = (PosixTime *)&DAT_00000010;
                      ppPVar15 = &local_2f8;
                      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                      if (((uVar11 & 1) != 0) &&
                         (puVar25 = (undefined8 *)
                                    FUN_710392e290(0x10,0x10,(long ****)ppPVar15,param_4,param_5,
                                                   param_6,param_7,param_8),
                         puVar25 != (undefined8 *)0x0)) goto LAB_7101bf0924;
                    }
                    puVar25 = (undefined8 *)0x0;
                  }
LAB_7101bf0924:
                  *puVar25 = 0;
                  puVar25[1] = 0;
                  local_198[0] = 0;
                  local_1a0 = 0;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1e8 = (long ***)((ulong)local_1e8 & 0xffffffff00000000);
                  local_2f8 = (PosixTime *)
                              ((ulong)*(ushort *)(pPVar13 + 0x80) & 0xfff |
                               ((ulong)(byte)pPVar13[0x82] & 0xf) << 0xc |
                               ((ulong)(byte)pPVar13[0x83] & 0x1f) << 0x10 |
                               ((ulong)(byte)pPVar13[0x84] & 0x1f) << 0x15 |
                               ((ulong)(byte)pPVar13[0x85] & 0x3f) << 0x1a |
                               (ulong)((byte)pPVar13[0x86] & 0x3f) << 0x20 | 0x4000000000000000);
                  local_1d0 = (PosixTime *)puVar25;
                  FUN_71037419c0((uint *)&local_2f8,&local_1e0);
                  iVar9 = *(int *)(pPVar13 + 0x13c);
                  if (iVar9 == 0) {
                    pPVar44 = (PosixTime *)0x0;
                  }
                  else {
                    pPVar44 = pPVar13 + iVar9;
                    if (*(uint *)pPVar13 <= (iVar9 + *(int *)(pPVar13 + 0x140)) - 1U) {
                      pPVar44 = (PosixTime *)0x0;
                    }
                  }
                  param_3 = (undefined **)(long)*(int *)(pPVar13 + 0x140);
                  param_4 = (byte ****)0x1;
                  FUN_710377b8b0((undefined8 *)local_1d0,(long)pPVar44,(long ****)param_3,
                                 (byte ****)0x1,param_5,param_6,param_7,param_8);
                  local_1c8 = pPVar13 + 0x40;
                  local_1c0 = 0;
                  local_1f0 = (ulong)*(ushort *)(pPVar13 + 0x20) & 0xfff |
                              ((ulong)(byte)pPVar13[0x22] & 0xf) << 0xc |
                              ((ulong)(byte)pPVar13[0x23] & 0x1f) << 0x10 |
                              ((ulong)(byte)pPVar13[0x24] & 0x1f) << 0x15 |
                              ((ulong)(byte)pPVar13[0x25] & 0x3f) << 0x1a |
                              (ulong)((byte)pPVar13[0x26] & 0x3f) << 0x20 | 0x4000000000000000;
                  bVar6 = FUN_71037419c0((uint *)&local_1f0,&local_2f8);
                  if (bVar6) {
                    param_3 = local_70;
                    local_70[0] = local_2f8;
                    iVar9 = nn::time::ToCalendarTime
                                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,
                                       (PosixTime *)param_3);
                    if (iVar9 == 0) {
                      local_1c0 = local_1c0 & 0x3fffffc000000000 |
                                  (ulong)local_78 & 0xfff | ((ulong)local_76 & 0xf) << 0xc |
                                  ((ulong)local_75 & 0x1f) << 0x10 |
                                  ((ulong)local_74 & 0x1f) << 0x15 |
                                  ((ulong)local_73 & 0x3f) << 0x1a |
                                  ((ulong)local_72 & 0x3f) << 0x20 | 0x8000000000000000;
                    }
                  }
                  local_1b8 = 0;
                  local_1f0 = (ulong)*(ushort *)(pPVar13 + 0x28) & 0xfff |
                              ((ulong)(byte)pPVar13[0x2a] & 0xf) << 0xc |
                              ((ulong)(byte)pPVar13[0x2b] & 0x1f) << 0x10 |
                              ((ulong)(byte)pPVar13[0x2c] & 0x1f) << 0x15 |
                              ((ulong)(byte)pPVar13[0x2d] & 0x3f) << 0x1a |
                              (ulong)((byte)pPVar13[0x2e] & 0x3f) << 0x20 | 0x4000000000000000;
                  bVar6 = FUN_71037419c0((uint *)&local_1f0,&local_2f8);
                  if (bVar6) {
                    param_3 = local_70;
                    local_70[0] = local_2f8;
                    iVar9 = nn::time::ToCalendarTime
                                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,
                                       (PosixTime *)param_3);
                    if (iVar9 == 0) {
                      local_1b8 = local_1b8 & 0x3fffffc000000000 |
                                  (ulong)local_78 & 0xfff | ((ulong)local_76 & 0xf) << 0xc |
                                  ((ulong)local_75 & 0x1f) << 0x10 |
                                  ((ulong)local_74 & 0x1f) << 0x15 |
                                  ((ulong)local_73 & 0x3f) << 0x1a |
                                  ((ulong)local_72 & 0x3f) << 0x20 | 0x8000000000000000;
                    }
                  }
                  local_1b0 = pPVar13 + 0x8c;
                  local_1a8 = pPVar13 + 0xac;
                  FUN_7101763970((uint *)&local_2f8,(uint *)pPVar13);
                  uVar11 = 0;
                  do {
                    uVar35 = uVar11;
                    if (local_2f0[uVar11] == 0) break;
                    local_198[uVar11] = local_2f0[uVar11];
                    if (local_2f0[uVar11 + 1] == 0) {
                      uVar35 = uVar11 + 1;
                      break;
                    }
                    bVar4 = local_2f0[uVar11 + 2];
                    local_198[uVar11 + 1] = local_2f0[uVar11 + 1];
                    if (bVar4 == 0) {
                      uVar35 = uVar11 + 2;
                      break;
                    }
                    uVar35 = uVar11 + 3;
                    local_198[uVar11 + 2] = bVar4;
                    uVar11 = uVar35;
                  } while ((uint)uVar35 < 0xff);
                  local_198[uVar35 & 0xffffffff] = 0;
                  uVar7 = (uint)local_198[0];
                  uVar8 = 0x811c9dc5;
                  if (local_198[0] != 0) {
                    uVar8 = 0x811c9dc5;
                    pbVar24 = local_198;
                    do {
                      pbVar24 = pbVar24 + 1;
                      uVar8 = uVar8 * 0x89 ^ uVar7;
                      uVar7 = (uint)*pbVar24;
                    } while (uVar7 != 0);
                  }
                  local_1a0 = CONCAT44((int)uVar35,uVar8);
                  puVar25 = (undefined8 *)puVar10[0x16];
                  if (puVar25 == (undefined8 *)puVar10[0x17]) {
                    FUN_7101be3dc0(plVar37,&local_1e8,(long ****)param_3,param_4,param_5,param_6,
                                   param_7,param_8);
                  }
                  else {
                    *puVar25 = local_1e8;
                    puVar25[1] = local_1e0;
                    FUN_710377b610(puVar25 + 2,&local_1d8,(long ****)param_3,param_4,param_5,param_6
                                   ,param_7,param_8);
                    puVar25[4] = local_1c8;
                    *(undefined4 *)(puVar25 + 9) = 0;
                    puVar25[7] = local_1b0;
                    puVar25[8] = local_1a8;
                    puVar25[5] = local_1c0;
                    puVar25[6] = local_1b8;
                    uVar11 = 0;
                    do {
                      uVar35 = uVar11;
                      if (local_198[uVar11] == 0) break;
                      *(byte *)((long)puVar25 + uVar11 + 0x50) = local_198[uVar11];
                      if (local_198[uVar11 + 1] == 0) {
                        uVar35 = uVar11 + 1;
                        break;
                      }
                      *(byte *)((long)puVar25 + uVar11 + 0x51) = local_198[uVar11 + 1];
                      if (local_198[uVar11 + 2] == 0) {
                        uVar35 = uVar11 + 2;
                        break;
                      }
                      uVar35 = uVar11 + 3;
                      *(byte *)((long)puVar25 + uVar11 + 0x52) = local_198[uVar11 + 2];
                      uVar11 = uVar35;
                    } while ((uint)uVar35 < 0xff);
                    *(undefined1 *)((long)puVar25 + (uVar35 & 0xffffffff) + 0x50) = 0;
                    uVar8 = (uint)*(byte *)(puVar25 + 10);
                    *(int *)((long)puVar25 + 0x4c) = (int)uVar35;
                    if (*(byte *)(puVar25 + 10) == 0) {
                      uVar7 = 0x811c9dc5;
                    }
                    else {
                      uVar7 = 0x811c9dc5;
                      pbVar24 = (byte *)((long)puVar25 + 0x51);
                      do {
                        uVar7 = uVar7 * 0x89 ^ uVar8;
                        uVar8 = (uint)*pbVar24;
                        pbVar24 = pbVar24 + 1;
                      } while (uVar8 != 0);
                    }
                    *(uint *)(puVar25 + 9) = uVar7;
                    puVar10[0x16] = puVar10[0x16] + 0x150;
                  }
                  if ((undefined8 *)puVar10[0x13] < (undefined8 *)puVar10[0x14]) {
                    local_98 = (PosixTime *)0x0;
                    *(undefined8 *)puVar10[0x13] = pPVar13;
                    puVar10[0x13] = puVar10[0x13] + 8;
                  }
                  else {
                    FUN_7101be1cf0(puVar10 + 0x12,(ulong *)&local_98,(long ****)param_3,param_4,
                                   param_5,param_6,param_7,param_8);
                  }
                  pPVar13 = local_1d0;
                  local_1d8 = &PTR_FUN_710523da28;
                  local_1d0 = (PosixTime *)0x0;
                  if (pPVar13 != (PosixTime *)0x0) {
                    plVar38 = *(long **)((long)pPVar13 + 8);
                    *(undefined8 *)pPVar13 = 0;
                    *(undefined8 *)((long)pPVar13 + 8) = 0;
                    if (plVar38 != (long *)0x0) {
                      plVar2 = plVar38 + 1;
                      do {
                        lVar22 = *plVar2;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar6) {
                          *plVar2 = lVar22 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar22 == 0) {
                        (**(code **)(*plVar38 + 0x10))(plVar38);
                        std::__shared_weak_count::__release_weak();
                      }
                      plVar38 = *(long **)((long)pPVar13 + 8);
                      if (plVar38 != (long *)0x0) {
                        plVar2 = plVar38 + 1;
                        do {
                          lVar22 = *plVar2;
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar6) {
                            *plVar2 = lVar22 + -1;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if (lVar22 == 0) {
                          (**(code **)(*plVar38 + 0x10))(plVar38);
                          std::__shared_weak_count::__release_weak();
                        }
                      }
                    }
                    FUN_710392eb40((ulong)pPVar13);
                  }
                  pPVar13 = local_98;
                  local_98 = (PosixTime *)0x0;
                  if (pPVar13 == (PosixTime *)0x0) goto LAB_7101bf0f5c;
                }
              }
            }
          }
          local_98 = (PosixTime *)0x0;
          FUN_710392eb40((ulong)pPVar13);
        }
LAB_7101bf0f5c:
        pPVar45 = pPVar45 + 8;
      } while (pPVar45 != pPVar12);
    }
  }
  FUN_7101be1ef0((undefined8 *)*plVar37,(undefined8 *)puVar10[0x16]);
  if (local_90 != (PosixTime *)0x0) {
    local_88 = local_90;
    FUN_710392eb40((ulong)local_90);
  }
  local_88 = (PosixTime *)0x0;
  uStack_80 = 0;
  local_90 = (PosixTime *)0x0;
  lVar22 = *plVar41;
  if ((PosixTime **)(lVar22 + 0x288) != &local_90) {
    param_3 = *(undefined ***)(lVar22 + 0x290);
    FUN_710075f050(&local_90,*(void **)(lVar22 + 0x288),(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pPVar12 = local_88;
    if (local_90 != local_88) {
      pPVar45 = local_90;
      do {
        uVar7 = FUN_7101761580(*plVar41,(ulong)*(PosixTime **)pPVar45);
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar8 = 1;
        }
        ppplVar42 = (long ***)(long)(int)uVar8;
        pPVar13 = (PosixTime *)
                  FUN_710392e290(0x10,ppplVar42,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
        if (pPVar13 == (PosixTime *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_2f8 = (PosixTime *)((ulong)local_2f8 & 0xffffffff00000000);
            pppplVar16 = &local_1e8;
            local_1e8 = ppplVar42;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2f8);
            if (((uVar11 & 1) != 0) &&
               (pPVar13 = (PosixTime *)
                          FUN_710392e290(0x10,ppplVar42,pppplVar16,param_4,param_5,param_6,param_7,
                                         param_8), pPVar13 != (PosixTime *)0x0))
            goto LAB_7101bf177c;
          }
          pPVar13 = (PosixTime *)0x0;
        }
LAB_7101bf177c:
        memset(pPVar13,0,(long)(int)uVar7);
        param_4 = (byte ****)(ulong)uVar7;
        param_5 = (long ****)0x0;
        param_3 = (undefined **)pPVar13;
        FUN_7101761830(*plVar41,(ulong)*(PosixTime **)pPVar45,(byte ****)pPVar13,uVar7,0,param_6,
                       param_7,param_8);
        pPVar44 = *(PosixTime **)pPVar45;
        lVar22 = *plVar41;
        while (bVar6 = FUN_7101762400(lVar22,(ulong)pPVar44), !bVar6) {
          nn::os::SleepThread(1000000);
        }
        if (pPVar13 != (PosixTime *)0x0) {
          if ((ulong)*(uint *)pPVar13 == (long)(int)uVar7) {
            if ((*(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xdc) +
                *(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xe0)) - 1 < *(uint *)pPVar13) {
              param_3 = *(undefined ***)(pPVar13 + 0x18);
              uVar8 = FUN_71033798d0(pPVar13 + *(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xdc),
                                     (long ***************)
                                     (ulong)*(uint *)(pPVar13 + (long)DAT_710523d00c * 8 + 0xe0),
                                     (long ***************)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
              if ((uVar8 & 1) != 0) {
                local_2f8 = (PosixTime *)
                            ((ulong)*(ushort *)(pPVar13 + 0x80) & 0xfff |
                             ((ulong)(byte)pPVar13[0x82] & 0xf) << 0xc |
                             ((ulong)(byte)pPVar13[0x83] & 0x1f) << 0x10 |
                             ((ulong)(byte)pPVar13[0x84] & 0x1f) << 0x15 |
                             ((ulong)(byte)pPVar13[0x85] & 0x3f) << 0x1a |
                             (ulong)((byte)pPVar13[0x86] & 0x3f) << 0x20 | 0x4000000000000000);
                FUN_71037419c0((uint *)&local_2f8,&local_1e8);
                ppplVar42 = local_1e8;
                local_2f8 = (PosixTime *)
                            ((ulong)*(ushort *)(pPVar13 + 0x28) & 0xfff |
                             ((ulong)(byte)pPVar13[0x2a] & 0xf) << 0xc |
                             ((ulong)(byte)pPVar13[0x2b] & 0x1f) << 0x10 |
                             ((ulong)(byte)pPVar13[0x2c] & 0x1f) << 0x15 |
                             ((ulong)(byte)pPVar13[0x2d] & 0x3f) << 0x1a |
                             (ulong)((byte)pPVar13[0x2e] & 0x3f) << 0x20 | 0x4000000000000000);
                FUN_71037419c0((uint *)&local_2f8,&local_1e8);
                ppplVar36 = local_1e8;
                iVar9 = nn::time::StandardNetworkSystemClock::GetCurrentTime
                                  ((PosixTime *)&local_1e8);
                if (((iVar9 == 0) && ((long)ppplVar42 <= (long)local_1e8)) &&
                   ((long)local_1e8 <= (long)ppplVar36)) {
                  local_1d8 = &PTR_FUN_710523da28;
                  pPVar44 = (PosixTime *)
                            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8);
                  if (pPVar44 == (PosixTime *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_70[0] = (PosixTime *)((ulong)local_70[0] & 0xffffffff00000000);
                      local_2f8 = (PosixTime *)&DAT_00000010;
                      ppPVar15 = &local_2f8;
                      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                      if (((uVar11 & 1) != 0) &&
                         (pPVar44 = (PosixTime *)
                                    FUN_710392e290(0x10,0x10,(long ****)ppPVar15,param_4,param_5,
                                                   param_6,param_7,param_8),
                         pPVar44 != (PosixTime *)0x0)) goto LAB_7101bf10a0;
                    }
                    pPVar44 = (PosixTime *)0x0;
                  }
LAB_7101bf10a0:
                  *(PosixTime **)pPVar44 = (PosixTime *)0x0;
                  *(PosixTime **)(pPVar44 + 8) = (PosixTime *)0x0;
                  local_198[0] = 0;
                  local_1a0 = 0;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1e8 = (long ***)CONCAT44(local_1e8._4_4_,1);
                  local_2f8 = (PosixTime *)
                              ((ulong)*(ushort *)(pPVar13 + 0x80) & 0xfff |
                               ((ulong)(byte)pPVar13[0x82] & 0xf) << 0xc |
                               ((ulong)(byte)pPVar13[0x83] & 0x1f) << 0x10 |
                               ((ulong)(byte)pPVar13[0x84] & 0x1f) << 0x15 |
                               ((ulong)(byte)pPVar13[0x85] & 0x3f) << 0x1a |
                               (ulong)((byte)pPVar13[0x86] & 0x3f) << 0x20 | 0x4000000000000000);
                  local_1d0 = pPVar44;
                  FUN_71037419c0((uint *)&local_2f8,&local_1e0);
                  iVar9 = *(int *)(pPVar13 + 0x14c);
                  if (iVar9 == 0) {
                    pPVar44 = (PosixTime *)0x0;
                  }
                  else {
                    pPVar44 = pPVar13 + iVar9;
                    if (*(uint *)pPVar13 <= (iVar9 + *(int *)(pPVar13 + 0x150)) - 1U) {
                      pPVar44 = (PosixTime *)0x0;
                    }
                  }
                  param_3 = (undefined **)(long)*(int *)(pPVar13 + 0x150);
                  param_4 = (byte ****)0x1;
                  FUN_710377b8b0((undefined8 *)local_1d0,(long)pPVar44,(long ****)param_3,
                                 (byte ****)0x1,param_5,param_6,param_7,param_8);
                  local_1c8 = pPVar13 + 0x40;
                  local_1c0 = 0;
                  local_98 = (PosixTime *)
                             ((ulong)*(ushort *)(pPVar13 + 0x20) & 0xfff |
                              ((ulong)(byte)pPVar13[0x22] & 0xf) << 0xc |
                              ((ulong)(byte)pPVar13[0x23] & 0x1f) << 0x10 |
                              ((ulong)(byte)pPVar13[0x24] & 0x1f) << 0x15 |
                              ((ulong)(byte)pPVar13[0x25] & 0x3f) << 0x1a |
                              (ulong)((byte)pPVar13[0x26] & 0x3f) << 0x20 | 0x4000000000000000);
                  bVar6 = FUN_71037419c0((uint *)&local_98,&local_2f8);
                  if (bVar6) {
                    param_3 = local_70;
                    local_70[0] = local_2f8;
                    iVar9 = nn::time::ToCalendarTime
                                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,
                                       (PosixTime *)param_3);
                    if (iVar9 == 0) {
                      local_1c0 = local_1c0 & 0x3fffffc000000000 |
                                  (ulong)local_78 & 0xfff | ((ulong)local_76 & 0xf) << 0xc |
                                  ((ulong)local_75 & 0x1f) << 0x10 |
                                  ((ulong)local_74 & 0x1f) << 0x15 |
                                  ((ulong)local_73 & 0x3f) << 0x1a |
                                  ((ulong)local_72 & 0x3f) << 0x20 | 0x8000000000000000;
                    }
                  }
                  local_1b8 = 0;
                  local_98 = (PosixTime *)
                             ((ulong)*(ushort *)(pPVar13 + 0x28) & 0xfff |
                              ((ulong)(byte)pPVar13[0x2a] & 0xf) << 0xc |
                              ((ulong)(byte)pPVar13[0x2b] & 0x1f) << 0x10 |
                              ((ulong)(byte)pPVar13[0x2c] & 0x1f) << 0x15 |
                              ((ulong)(byte)pPVar13[0x2d] & 0x3f) << 0x1a |
                              (ulong)((byte)pPVar13[0x2e] & 0x3f) << 0x20 | 0x4000000000000000);
                  bVar6 = FUN_71037419c0((uint *)&local_98,&local_2f8);
                  if (bVar6) {
                    param_3 = local_70;
                    local_70[0] = local_2f8;
                    iVar9 = nn::time::ToCalendarTime
                                      ((CalendarTime *)&local_78,(CalendarAdditionalInfo *)0x0,
                                       (PosixTime *)param_3);
                    if (iVar9 == 0) {
                      local_1b8 = local_1b8 & 0x3fffffc000000000 |
                                  (ulong)local_78 & 0xfff | ((ulong)local_76 & 0xf) << 0xc |
                                  ((ulong)local_75 & 0x1f) << 0x10 |
                                  ((ulong)local_74 & 0x1f) << 0x15 |
                                  ((ulong)local_73 & 0x3f) << 0x1a |
                                  ((ulong)local_72 & 0x3f) << 0x20 | 0x8000000000000000;
                    }
                  }
                  local_1b0 = pPVar13 + 0x90;
                  local_1a8 = pPVar13 + 0xb0;
                  FUN_7101763b40((uint *)&local_2f8,(uint *)pPVar13);
                  uVar11 = 0;
                  do {
                    uVar35 = uVar11;
                    if (local_2f0[uVar11] == 0) break;
                    local_198[uVar11] = local_2f0[uVar11];
                    if (local_2f0[uVar11 + 1] == 0) {
                      uVar35 = uVar11 + 1;
                      break;
                    }
                    bVar4 = local_2f0[uVar11 + 2];
                    local_198[uVar11 + 1] = local_2f0[uVar11 + 1];
                    if (bVar4 == 0) {
                      uVar35 = uVar11 + 2;
                      break;
                    }
                    uVar35 = uVar11 + 3;
                    local_198[uVar11 + 2] = bVar4;
                    uVar11 = uVar35;
                  } while ((uint)uVar35 < 0xff);
                  local_198[uVar35 & 0xffffffff] = 0;
                  uVar19 = (uint)local_198[0];
                  uVar20 = 0x811c9dc5;
                  uVar8 = uVar20;
                  pbVar24 = local_198;
                  if (local_198[0] != 0) {
                    do {
                      uVar8 = uVar8 * 0x89 ^ uVar19;
                      uVar19 = (uint)pbVar24[1];
                      pbVar24 = pbVar24 + 1;
                    } while (uVar19 != 0);
                  }
                  local_1a0 = CONCAT44((int)uVar35,uVar8);
                  puVar25 = (undefined8 *)puVar10[0x1c];
                  if (puVar25 == (undefined8 *)puVar10[0x1d]) {
                    FUN_7101be3dc0(plVar14,&local_1e8,(long ****)param_3,param_4,param_5,param_6,
                                   param_7,param_8);
                  }
                  else {
                    *puVar25 = local_1e8;
                    puVar25[1] = local_1e0;
                    FUN_710377b610(puVar25 + 2,&local_1d8,(long ****)param_3,param_4,param_5,param_6
                                   ,param_7,param_8);
                    puVar25[4] = local_1c8;
                    puVar25[7] = local_1b0;
                    puVar25[8] = local_1a8;
                    *(undefined4 *)(puVar25 + 9) = 0;
                    puVar25[5] = local_1c0;
                    puVar25[6] = local_1b8;
                    uVar11 = 0;
                    do {
                      uVar35 = uVar11;
                      if (local_198[uVar11] == 0) break;
                      *(byte *)((long)puVar25 + uVar11 + 0x50) = local_198[uVar11];
                      if (local_198[uVar11 + 1] == 0) {
                        uVar35 = uVar11 + 1;
                        break;
                      }
                      *(byte *)((long)puVar25 + uVar11 + 0x51) = local_198[uVar11 + 1];
                      if (local_198[uVar11 + 2] == 0) {
                        uVar35 = uVar11 + 2;
                        break;
                      }
                      uVar35 = uVar11 + 3;
                      *(byte *)((long)puVar25 + uVar11 + 0x52) = local_198[uVar11 + 2];
                      uVar11 = uVar35;
                    } while ((uint)uVar35 < 0xff);
                    *(undefined1 *)((long)puVar25 + (uVar35 & 0xffffffff) + 0x50) = 0;
                    uVar8 = (uint)*(byte *)(puVar25 + 10);
                    *(int *)((long)puVar25 + 0x4c) = (int)uVar35;
                    if (*(byte *)(puVar25 + 10) != 0) {
                      pbVar24 = (byte *)((long)puVar25 + 0x51);
                      do {
                        uVar20 = uVar20 * 0x89 ^ uVar8;
                        uVar8 = (uint)*pbVar24;
                        pbVar24 = pbVar24 + 1;
                      } while (uVar8 != 0);
                    }
                    *(uint *)(puVar25 + 9) = uVar20;
                    puVar10[0x1c] = puVar10[0x1c] + 0x150;
                  }
                  puVar40 = (ulong *)puVar10[0x19];
                  if (puVar40 < (ulong *)puVar10[0x1a]) {
                    *puVar40 = (ulong)pPVar13;
                    *(uint *)(puVar40 + 1) = uVar7;
                    puVar10[0x19] = puVar10[0x19] + 0x10;
                  }
                  else {
                    puVar43 = (ulong *)puVar10[0x18];
                    lVar22 = (long)puVar40 - (long)puVar43 >> 4;
                    uVar11 = lVar22 + 1;
                    if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar26 = (long)puVar10[0x1a] - (long)puVar43;
                    if ((ulong)(lVar26 >> 4) < 0x7ffffffffffffff) {
                      uVar35 = lVar26 >> 3;
                      if (uVar11 <= uVar35) {
                        uVar11 = uVar35;
                      }
                      if (uVar11 != 0) {
                        if (uVar11 >> 0x3c != 0) {
LAB_7101bf2c40:
                    /* WARNING: Subroutine does not return */
                          abort();
                        }
                        goto LAB_7101bf14bc;
                      }
                      lVar26 = 0;
                    }
                    else {
                      uVar11 = 0xfffffffffffffff;
LAB_7101bf14bc:
                      pPVar44 = (PosixTime *)(uVar11 * 0x10);
                      if (pPVar44 == (PosixTime *)0x0) {
                        pPVar44 = (PosixTime *)0x1;
                      }
                      lVar26 = FUN_710392e290(0x10,pPVar44,(long ****)param_3,param_4,param_5,
                                              param_6,param_7,param_8);
                      if (lVar26 == 0) {
                        if (DAT_7105332f00 != (long *)0x0) {
                          local_70[0] = (PosixTime *)((ulong)local_70[0] & 0xffffffff00000000);
                          param_3 = &local_2f8;
                          local_2f8 = pPVar44;
                          uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
                          if (((uVar35 & 1) != 0) &&
                             (lVar26 = FUN_710392e290(0x10,pPVar44,(long ****)param_3,param_4,
                                                      param_5,param_6,param_7,param_8), lVar26 != 0)
                             ) goto LAB_7101bf1518;
                        }
                        lVar26 = 0;
                      }
LAB_7101bf1518:
                      puVar43 = (ulong *)puVar10[0x18];
                      puVar40 = (ulong *)puVar10[0x19];
                    }
                    puVar28 = (ulong *)(lVar26 + lVar22 * 0x10);
                    puVar3 = puVar28 + 2;
                    *puVar28 = (ulong)pPVar13;
                    *(uint *)(puVar28 + 1) = uVar7;
                    if (puVar40 != puVar43) {
                      uVar35 = (long)puVar40 + (-0x10 - (long)puVar43);
                      puVar27 = puVar28;
                      puVar39 = puVar40;
                      if (((uint)uVar35 >> 4 & 1) == 0) {
                        puVar39 = puVar40 + -2;
                        uVar32 = *puVar39;
                        *puVar39 = 0;
                        puVar27 = puVar28 + -2;
                        *puVar27 = uVar32;
                        *(int *)(puVar28 + -1) = (int)puVar40[-1];
                      }
                      if (0xf < uVar35) {
                        uVar32 = (long)puVar39 + (-0x20 - (long)puVar43);
                        puVar40 = puVar39;
                        if (((uint)uVar32 >> 5 & 1) == 0) {
                          uVar33 = puVar39[-2];
                          puVar39[-2] = 0;
                          puVar27[-2] = uVar33;
                          *(int *)(puVar27 + -1) = (int)puVar39[-1];
                          puVar40 = puVar39 + -4;
                          uVar33 = *puVar40;
                          *puVar40 = 0;
                          puVar27[-4] = uVar33;
                          *(int *)(puVar27 + -3) = (int)puVar39[-3];
                          puVar27 = puVar27 + -4;
                        }
                        if (0x1f < uVar32) {
                          lVar30 = 0;
                          do {
                            uVar17 = *(undefined8 *)((long)puVar40 + lVar30 + -0x10);
                            *(undefined8 *)((long)puVar40 + lVar30 + -0x10) = 0;
                            *(undefined8 *)((long)puVar27 + lVar30 + -0x10) = uVar17;
                            *(undefined4 *)((long)puVar27 + lVar30 + -8) =
                                 *(undefined4 *)((long)puVar40 + lVar30 + -8);
                            uVar17 = *(undefined8 *)((long)puVar40 + lVar30 + -0x20);
                            *(undefined8 *)((long)puVar40 + lVar30 + -0x20) = 0;
                            *(undefined8 *)((long)puVar27 + lVar30 + -0x20) = uVar17;
                            *(undefined4 *)((long)puVar27 + lVar30 + -0x18) =
                                 *(undefined4 *)((long)puVar40 + lVar30 + -0x18);
                            uVar17 = *(undefined8 *)((long)puVar40 + lVar30 + -0x30);
                            *(undefined8 *)((long)puVar40 + lVar30 + -0x30) = 0;
                            *(undefined8 *)((long)puVar27 + lVar30 + -0x30) = uVar17;
                            *(undefined4 *)((long)puVar27 + lVar30 + -0x28) =
                                 *(undefined4 *)((long)puVar40 + lVar30 + -0x28);
                            uVar17 = *(undefined8 *)((long)puVar40 + lVar30 + -0x40);
                            *(undefined8 *)((long)puVar40 + lVar30 + -0x40) = 0;
                            *(undefined8 *)((long)puVar27 + lVar30 + -0x40) = uVar17;
                            lVar31 = lVar30 + -0x40;
                            *(undefined4 *)((long)puVar27 + lVar30 + -0x38) =
                                 *(undefined4 *)((long)puVar40 + lVar30 + -0x38);
                            lVar30 = lVar31;
                          } while ((long)puVar43 - (long)puVar40 != lVar31);
                        }
                      }
                      puVar43 = (ulong *)puVar10[0x18];
                      puVar40 = (ulong *)puVar10[0x19];
                      puVar28 = (ulong *)(lVar26 + (lVar22 + (uVar35 >> 4 ^ 0xffffffffffffffff)) *
                                                   0x10);
                    }
                    puVar10[0x18] = puVar28;
                    puVar10[0x19] = puVar3;
                    puVar10[0x1a] = lVar26 + uVar11 * 0x10;
                    while (puVar40 != puVar43) {
                      puVar40 = puVar40 + -2;
                      uVar11 = *puVar40;
                      *puVar40 = 0;
                      if (uVar11 != 0) {
                        FUN_710392eb40(uVar11);
                      }
                    }
                    if (puVar43 != (ulong *)0x0) {
                      FUN_710392eb40((ulong)puVar43);
                    }
                  }
                  pPVar13 = local_1d0;
                  local_1d8 = &PTR_FUN_710523da28;
                  local_1d0 = (PosixTime *)0x0;
                  if (pPVar13 == (PosixTime *)0x0) goto LAB_7101bf18b8;
                  pPVar44 = *(PosixTime **)(pPVar13 + 8);
                  *(PosixTime **)pPVar13 = (PosixTime *)0x0;
                  *(PosixTime **)(pPVar13 + 8) = (PosixTime *)0x0;
                  if (pPVar44 != (PosixTime *)0x0) {
                    pPVar23 = pPVar44 + 8;
                    do {
                      lVar22 = *(long *)pPVar23;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(pPVar23,0x10);
                      if (bVar6) {
                        *(long *)pPVar23 = lVar22 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar22 == 0) {
                      (**(code **)(*(long *)pPVar44 + 0x10))(pPVar44);
                      std::__shared_weak_count::__release_weak();
                    }
                    pPVar44 = *(PosixTime **)(pPVar13 + 8);
                    if (pPVar44 != (PosixTime *)0x0) {
                      pPVar23 = pPVar44 + 8;
                      do {
                        lVar22 = *(long *)pPVar23;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(pPVar23,0x10);
                        if (bVar6) {
                          *(long *)pPVar23 = lVar22 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar22 == 0) {
                        (**(code **)(*(long *)pPVar44 + 0x10))(pPVar44);
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_710392eb40((ulong)pPVar13);
        }
LAB_7101bf18b8:
        pPVar45 = pPVar45 + 8;
      } while (pPVar45 != pPVar12);
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((((DAT_7105307790 != 0) &&
       (iVar9 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_1e8),
       iVar9 == 0)) && ((long)local_1e8 <= DAT_71053078c8)) &&
     (((long)DAT_71053078b0 <= (long)local_1e8 &&
      (uVar11 = FUN_710172a350(0x7105307790,extraout_x1,(long ****)param_3,param_4,param_5,param_6,
                               param_7,param_8), (uVar11 & 1) != 0)))) {
    local_1d8 = &PTR_FUN_710523da28;
    puVar25 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar25 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_70[0] = (PosixTime *)((ulong)local_70[0] & 0xffffffff00000000);
        local_2f8 = (PosixTime *)&DAT_00000010;
        param_3 = &local_2f8;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_70);
        if (((uVar11 & 1) != 0) &&
           (puVar25 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar25 != (undefined8 *)0x0)) goto LAB_7101bf28a0;
      }
      puVar25 = (undefined8 *)0x0;
    }
LAB_7101bf28a0:
    *puVar25 = 0;
    puVar25[1] = 0;
    local_1c8 = (PosixTime *)((long)puVar10 + 0xf4);
    local_1e8 = (long ***)CONCAT44(local_1e8._4_4_,2);
    local_1c0 = 0;
    local_1b8 = 0;
    local_198[0] = 0;
    local_1a0 = 0;
    local_1e0 = DAT_71053078b0;
    *puVar25 = 0;
    puVar25[1] = 0;
    if (puVar10 + 0x1e != (undefined8 *)&DAT_71053077a0) {
      uVar11 = 0;
      do {
        uVar35 = uVar11;
        if ((&DAT_71053077a4)[uVar11] == 0) break;
        *(undefined2 *)((long)puVar10 + uVar11 * 2 + 0xf4) = (&DAT_71053077a4)[uVar11];
        if ((&DAT_71053077a6)[uVar11] == 0) {
          uVar35 = uVar11 + 1;
          break;
        }
        uVar35 = uVar11 + 2;
        *(undefined2 *)((long)puVar10 + uVar11 * 2 + 0xf6) = (&DAT_71053077a6)[uVar11];
        uVar11 = uVar35;
      } while ((uint)uVar35 < 0x40);
      *(undefined2 *)((long)puVar29 + (uVar35 & 0xffffffff) * 2 + 0xdc) = 0;
      *(int *)(puVar10 + 0x1e) = (int)uVar35;
    }
    local_1d0 = (PosixTime *)puVar25;
    FUN_7103741810(DAT_71053078b8,&local_1c0);
    FUN_7103741810(DAT_71053078c0,&local_1b8);
    local_1b0 = (PosixTime *)&DAT_7104544e88;
    local_1a8 = (PosixTime *)&DAT_7104544ea8;
    for (uVar11 = 0; (&DAT_7105307950)[uVar11] != 0; uVar11 = uVar11 + 2) {
      local_198[uVar11] = (&DAT_7105307950)[uVar11];
      if (0xfe < (int)uVar11 + 1U) {
        uVar11 = (ulong)((int)uVar11 + 1);
        break;
      }
      if ((&DAT_7105307951)[uVar11] == 0) {
        uVar11 = uVar11 + 1;
        break;
      }
      local_198[uVar11 + 1] = (&DAT_7105307951)[uVar11];
    }
    local_198[uVar11 & 0xffffffff] = 0;
    local_1a0 = CONCAT44((int)uVar11,(undefined4)local_1a0);
    uVar20 = (uint)local_198[0];
    uVar7 = 0x811c9dc5;
    uVar8 = uVar7;
    if (local_198[0] != 0) {
      pbVar24 = local_198;
      do {
        pbVar24 = pbVar24 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar24;
      } while (uVar20 != 0);
    }
    local_1a0 = CONCAT44((int)uVar11,uVar8);
    puVar25 = (undefined8 *)puVar10[0x1c];
    if (puVar25 == (undefined8 *)puVar10[0x1d]) {
      FUN_7101be3dc0(plVar14,&local_1e8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      *puVar25 = local_1e8;
      puVar25[1] = local_1e0;
      FUN_710377b610(puVar25 + 2,&local_1d8,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      puVar25[4] = local_1c8;
      *(undefined4 *)(puVar25 + 9) = 0;
      puVar25[5] = local_1c0;
      puVar25[6] = local_1b8;
      puVar25[7] = local_1b0;
      puVar25[8] = local_1a8;
      for (uVar11 = 0; local_198[uVar11] != 0; uVar11 = uVar11 + 2) {
        *(byte *)((long)puVar25 + uVar11 + 0x50) = local_198[uVar11];
        if (0xfe < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        if (local_198[uVar11 + 1] == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        *(byte *)((long)puVar25 + uVar11 + 0x51) = local_198[uVar11 + 1];
      }
      *(undefined1 *)((long)puVar25 + (uVar11 & 0xffffffff) + 0x50) = 0;
      uVar8 = (uint)*(byte *)(puVar25 + 10);
      *(int *)((long)puVar25 + 0x4c) = (int)uVar11;
      if (*(byte *)(puVar25 + 10) != 0) {
        pbVar24 = (byte *)((long)puVar25 + 0x51);
        do {
          uVar7 = uVar7 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar8 != 0);
      }
      *(uint *)(puVar25 + 9) = uVar7;
      puVar10[0x1c] = puVar10[0x1c] + 0x150;
    }
    pPVar12 = local_1d0;
    local_1d8 = &PTR_FUN_710523da28;
    local_1d0 = (PosixTime *)0x0;
    if (pPVar12 != (PosixTime *)0x0) {
      plVar41 = *(long **)((long)pPVar12 + 8);
      *(undefined8 *)pPVar12 = 0;
      *(undefined8 *)((long)pPVar12 + 8) = 0;
      if (plVar41 != (long *)0x0) {
        plVar14 = plVar41 + 1;
        do {
          lVar22 = *plVar14;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar6) {
            *plVar14 = lVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plVar41 + 0x10))(plVar41);
          std::__shared_weak_count::__release_weak();
        }
        plVar41 = *(long **)((long)pPVar12 + 8);
        if (plVar41 != (long *)0x0) {
          plVar14 = plVar41 + 1;
          do {
            lVar22 = *plVar14;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar6) {
              *plVar14 = lVar22 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plVar41 + 0x10))(plVar41);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_710392eb40((ulong)pPVar12);
    }
  }
  FUN_7101be4200((int *)puVar10[0x1b],(int *)puVar10[0x1c]);
  if (local_90 != (PosixTime *)0x0) {
    local_88 = local_90;
    FUN_710392eb40((ulong)local_90);
  }
  uVar17 = 0x20e09fc3fc;
  uVar18 = 1;
  param_1[0x10] = puVar29;
  param_1[0x11] = puVar10;
  FUN_71032cb040((long)puVar29,param_2,(long ****)&PTR_DAT_71050ac620,(byte ****)0x20e09fc3fc,
                 (long ****)0x1,param_6,param_7,param_8);
  if (*(long **)puVar10[0xb] != (long *)0x0) {
    uVar17 = 0;
    FUN_7103375650(*(long **)puVar10[0xb],"SEQUENCE_NONE",&DAT_71042b2a84);
    if (*(long **)*puVar21 != (long *)0x0) {
      uVar17 = 0x1000000;
      FUN_7103375650(*(long **)*puVar21,"SEQUENCE_TITLE",&DAT_71042b2a84);
      if (*(long **)*puVar21 != (long *)0x0) {
        uVar17 = 0x1010000;
        FUN_7103375650(*(long **)*puVar21,"SEQUENCE_TITLE_DEMO",&DAT_71042b2a84);
        if (*(long **)*puVar21 != (long *)0x0) {
          uVar17 = 0x2000000;
          FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE",&DAT_71042b2a84);
          if (*(long **)*puVar21 != (long *)0x0) {
            uVar17 = 0x2010000;
            FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_NORMAL",&DAT_71042b2a84);
            if (*(long **)*puVar21 != (long *)0x0) {
              uVar17 = 0x2020000;
              FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_TEAM_COMPE",&DAT_71042b2a84);
              if (*(long **)*puVar21 != (long *)0x0) {
                uVar17 = 0x2030000;
                FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_SPECIAL",&DAT_71042b2a84);
                if (*(long **)*puVar21 != (long *)0x0) {
                  uVar17 = 0x2030100;
                  FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_SPECIAL_VARIOUS",&DAT_71042b2a84
                                );
                  if (*(long **)*puVar21 != (long *)0x0) {
                    uVar17 = 0x2030200;
                    FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_SPECIAL_SUDDENDEATH",
                                   &DAT_71042b2a84);
                    if (*(long **)*puVar21 != (long *)0x0) {
                      uVar17 = 0x2030300;
                      FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_SPECIAL_ALL_BATTLE",
                                     &DAT_71042b2a84);
                      if (*(long **)*puVar21 != (long *)0x0) {
                        uVar17 = 0x2040000;
                        FUN_7103375650(*(long **)*puVar21,"SEQUENCE_MELEE_TOURNAMENT",
                                       &DAT_71042b2a84);
                        if (*(long **)*puVar21 != (long *)0x0) {
                          uVar17 = 0x3000000;
                          FUN_7103375650(*(long **)*puVar21,"SEQUENCE_SPIRITS",&DAT_71042b2a84);
                          if (*(long **)*puVar21 != (long *)0x0) {
                            uVar17 = 0x3010000;
                            FUN_7103375650(*(long **)*puVar21,"SEQUENCE_SPIRITS_CHALLENGE",
                                           &DAT_71042b2a84);
                            if (*(long **)*puVar21 != (long *)0x0) {
                              uVar17 = 0x3020000;
                              FUN_7103375650(*(long **)*puVar21,"SEQUENCE_SPIRITS_CANPAIGN",
                                             &DAT_71042b2a84);
                              if (*(long **)*puVar21 != (long *)0x0) {
                                uVar17 = 0x3030000;
                                FUN_7103375650(*(long **)*puVar21,"SEQUENCE_SPIRITS_FORMATION",
                                               &DAT_71042b2a84);
                                if (*(long **)*puVar21 != (long *)0x0) {
                                  uVar17 = 0x3040000;
                                  FUN_7103375650(*(long **)*puVar21,
                                                 "SEQUENCE_SPIRITS_CHALLENGE_SPECIAL",
                                                 &DAT_71042b2a84);
                                  if (*(long **)*puVar21 != (long *)0x0) {
                                    uVar17 = 0x4000000;
                                    FUN_7103375650(*(long **)*puVar21,"SEQUENCE_OTHER",
                                                   &DAT_71042b2a84);
                                    if (*(long **)*puVar21 != (long *)0x0) {
                                      uVar17 = 0x4010000;
                                      FUN_7103375650(*(long **)*puVar21,"SEQUENCE_OTHER_STANDARD",
                                                     &DAT_71042b2a84);
                                      if (*(long **)*puVar21 != (long *)0x0) {
                                        uVar17 = 0x4020000;
                                        FUN_7103375650(*(long **)*puVar21,"SEQUENCE_OTHER_KUMITE",
                                                       &DAT_71042b2a84);
                                        if (*(long **)*puVar21 != (long *)0x0) {
                                          uVar17 = 0x4020100;
                                          FUN_7103375650(*(long **)*puVar21,
                                                         "SEQUENCE_OTHER_KUMITE_100",&DAT_71042b2a84
                                                        );
                                          if (*(long **)*puVar21 == (long *)0x0) {
                                            lVar22 = 0;
                                          }
                                          else {
                                            uVar17 = 0x4020200;
                                            FUN_7103375650(*(long **)*puVar21,
                                                           "SEQUENCE_OTHER_KUMITE_ALLSTAR",
                                                           &DAT_71042b2a84);
                                            if (*(long **)*puVar21 != (long *)0x0) {
                                              uVar17 = 0x4020300;
                                              FUN_7103375650(*(long **)*puVar21,
                                                             "SEQUENCE_OTHER_KUMITE_CRUEL",
                                                             &DAT_71042b2a84);
                                              if (*(long **)*puVar21 != (long *)0x0) {
                                                uVar17 = 0x4030000;
                                                FUN_7103375650(*(long **)*puVar21,
                                                               "SEQUENCE_OTHER_HOMERUN",
                                                               &DAT_71042b2a84);
                                                if (*(long **)*puVar21 != (long *)0x0) {
                                                  uVar17 = 0x4030100;
                                                  FUN_7103375650(*(long **)*puVar21,
                                                                 "SEQUENCE_OTHER_HOMERUN_SINGLE",
                                                                 &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x4030200;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_OTHER_HOMERUN_COOP",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x4030300;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                                                                                          
                                                  "SEQUENCE_OTHER_HOMERUN_EVERYONE",&DAT_71042b2a84)
                                                  ;
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x4040000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_OTHER_TRAINING",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x4050000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_OTHER_CHARA_MAKE",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0x4060000;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                       "SEQUENCE_OTHER_STAGE_MAKE",
                                                                       &DAT_71042b2a84);
                                                        if (*(long **)*puVar21 != (long *)0x0) {
                                                          uVar17 = 0x4070000;
                                                          FUN_7103375650(*(long **)*puVar21,
                                                                         "SEQUENCE_OTHER_AMIIBO",
                                                                         &DAT_71042b2a84);
                                                          if (*(long **)*puVar21 != (long *)0x0) {
                                                            uVar17 = 0x4080000;
                                                            FUN_7103375650(*(long **)*puVar21,
                                                                                                                                                      
                                                  "SEQUENCE_OTHER_CHALLENGER",&DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x4090000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_OTHER_VR",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5000000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_COLLECTION",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0x5010000;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                       "SEQUENCE_COLLECTION_REPLAY",
                                                                       &DAT_71042b2a84);
                                                        if (*(long **)*puVar21 != (long *)0x0) {
                                                          uVar17 = 0x5010100;
                                                          FUN_7103375650(*(long **)*puVar21,
                                                                                                                                                  
                                                  "SEQUENCE_COLLECTION_REPLAY_DATA",&DAT_71042b2a84)
                                                  ;
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5010200;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_COLLECTION_REPLAY_VIDEO",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5010300;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_COLLECTION_REPLAY_EDIT"
                                                                   ,&DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5020000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                                                                                          
                                                  "SEQUENCE_COLLECTION_CLEARGETTER",&DAT_71042b2a84)
                                                  ;
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5030000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_COLLECTION_SOUND",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5040000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                                                                                          
                                                  "SEQUENCE_COLLECTION_SMAKNOWLEDGE",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5050000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_COLLECTION_MOVIE",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5060000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_COLLECTION_RECORD",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0x5060100;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                                                                                              
                                                  "SEQUENCE_COLLECTION_RECORD_COUNT",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5060200;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_COLLECTION_RECORD_MEMORIAL",
                                                  &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5060300;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_COLLECTION_RECORD_FIGHTER",
                                                  &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5060400;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_COLLECTION_RECORD_CARD"
                                                                   ,&DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5060500;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                                                                                          
                                                  "SEQUENCE_COLLECTION_RECORD_PLAYING",
                                                  &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x5070000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_COLLECTION_SHOP",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x5080000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_COLLECTION_PRESENT",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0x6000000;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                       "SEQUENCE_OPTION",
                                                                       &DAT_71042b2a84);
                                                        if (*(long **)*puVar21 != (long *)0x0) {
                                                          uVar17 = 0x6010000;
                                                          FUN_7103375650(*(long **)*puVar21,
                                                                         "SEQUENCE_OPTION_MELEE",
                                                                         &DAT_71042b2a84);
                                                          if (*(long **)*puVar21 != (long *)0x0) {
                                                            uVar17 = 0x6020000;
                                                            FUN_7103375650(*(long **)*puVar21,
                                                                           "SEQUENCE_OPTION_BUTTON",
                                                                           &DAT_71042b2a84);
                                                            if (*(long **)*puVar21 != (long *)0x0) {
                                                              uVar17 = 0x6030000;
                                                              FUN_7103375650(*(long **)*puVar21,
                                                                                                                                                          
                                                  "SEQUENCE_OPTION_PICTURE",&DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x6040000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_OPTION_SOUND",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x6050000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_OPTION_ONLINE",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0x6060000;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                       "SEQUENCE_OPTION_LANGUAGE",
                                                                       &DAT_71042b2a84);
                                                        if (*(long **)*puVar21 != (long *)0x0) {
                                                          uVar17 = 0x7000000;
                                                          FUN_7103375650(*(long **)*puVar21,
                                                                         "SEQUENCE_ONLINE",
                                                                         &DAT_71042b2a84);
                                                          if (*(long **)*puVar21 != (long *)0x0) {
                                                            uVar17 = 0x7010000;
                                                            FUN_7103375650(*(long **)*puVar21,
                                                                           "SEQUENCE_ONLINE_MELEE",
                                                                           &DAT_71042b2a84);
                                                            if (*(long **)*puVar21 != (long *)0x0) {
                                                              uVar17 = 0x7010100;
                                                              FUN_7103375650(*(long **)*puVar21,
                                                                                                                                                          
                                                  "SEQUENCE_ONLINE_MELEE_ANYONE",&DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x7010200;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_ONLINE_MELEE_ROOM",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x7010300;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                                                                                          
                                                  "SEQUENCE_ONLINE_MELEE_TOURNAMENT",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x7010400;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_ONLINE_MELEE_ANYONE_VIP",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x7010600;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_ONLINE_MELEE_WAIT_PARALLEL",
                                                  &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x7010800;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                                                                                      
                                                  "SEQUENCE_ONLINE_MELEE_CONVENTION",&DAT_71042b2a84
                                                  );
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    uVar17 = 0x7020000;
                                                    FUN_7103375650(*(long **)*puVar21,
                                                                   "SEQUENCE_ONLINE_WATCH",
                                                                   &DAT_71042b2a84);
                                                    if (*(long **)*puVar21 != (long *)0x0) {
                                                      uVar17 = 0x7070000;
                                                      FUN_7103375650(*(long **)*puVar21,
                                                                     "SEQUENCE_ONLINE_SHARE",
                                                                     &DAT_71042b2a84);
                                                      if (*(long **)*puVar21 != (long *)0x0) {
                                                        uVar17 = 0;
                                                        FUN_7103375650(*(long **)*puVar21,
                                                                       "CHALLENGER_HIDE",
                                                                       &DAT_71042b2a84);
                                                        if (*(long **)*puVar21 != (long *)0x0) {
                                                          uVar17 = 1;
                                                          FUN_7103375650(*(long **)*puVar21,
                                                                         "CHALLENGER_CLOSE",
                                                                         &DAT_71042b2a84);
                                                          if (*(long **)*puVar21 != (long *)0x0) {
                                                            uVar17 = 2;
                                                            FUN_7103375650(*(long **)*puVar21,
                                                                           "CHALLENGER_OPEN",
                                                                           &DAT_71042b2a84);
                                                            if (*(long **)*puVar21 != (long *)0x0) {
                                                              uVar17 = 0;
                                                              FUN_7103375650(*(long **)*puVar21,
                                                                             "BANNER_SPIRITS",
                                                                             &DAT_71042b2a84);
                                                              if (*(long **)*puVar21 != (long *)0x0)
                                                              {
                                                                uVar17 = 1;
                                                                FUN_7103375650(*(long **)*puVar21,
                                                                               "BANNER_TOURNAMENT",
                                                                               &DAT_71042b2a84);
                                                                if (*(long **)*puVar21 !=
                                                                    (long *)0x0) {
                                                                  uVar17 = 2;
                                                                  FUN_7103375650(*(long **)*puVar21,
                                                                                 "BANNER_CONVENTION"
                                                                                 ,&DAT_71042b2a84);
                                                                  if (*(long **)*puVar21 !=
                                                                      (long *)0x0) {
                                                                    uVar17 = 0x4060000;
                                                                    FUN_7103375650(*(long **)*
                                                  puVar21,"SEQUENCE_OTHER_STAGE_MAKE",
                                                  &DAT_71042b2a84);
                                                  if (*(long **)*puVar21 != (long *)0x0) {
                                                    lVar22 = **(long **)*puVar21;
                                                    goto LAB_7101bf24b4;
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
                                            lVar22 = 0;
                                          }
                                          goto LAB_7101bf24b4;
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
  lVar22 = 0;
LAB_7101bf24b4:
  FUN_71038f7260(lVar22,"prg_func");
  puVar25 = *(undefined8 **)(lVar22 + 0x10);
  *puVar25 = puVar25[-2];
  puVar25[1] = puVar25[-1];
  lVar26 = *(long *)(lVar22 + 0x10);
  *(long *)(lVar22 + 0x10) = lVar26 + 0x10;
  FUN_71038f5390(lVar22,(long *)(lVar26 + -0x10),"__index");
  FUN_71038f9510(lVar22,(long *)&DAT_71050ac630,0,uVar17,uVar18,param_6,param_7,param_8);
  *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + -0x10;
  puVar25 = FUN_71038f6930(lVar22,8);
  *puVar25 = 0;
  FUN_71038f4d40(lVar22,(long *)(*(long *)(lVar22 + 0x18) + 0x40),"prg_func");
  FUN_71038f5c00(lVar22,-2);
  if (lVar22 != 0) {
    lVar26 = *(long *)(*(long *)(lVar22 + 0x18) + 0x40);
    if (*(uint *)(lVar26 + 0xc) < 2) {
      plVar41 = (long *)(*(long *)(lVar26 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar26 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar41[3] == 0x13) && (plVar14 = plVar41, plVar41[2] == 2)) break;
        piVar1 = (int *)((long)plVar41 + 0x1c);
        plVar41 = plVar41 + (long)*piVar1 * 4;
        plVar14 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar14 = (long *)(*(long *)(lVar26 + 0x10) + 0x10);
    }
    FUN_71038f5390(lVar22,plVar14,"prg_func");
  }
  if (*(long **)*puVar21 == (long *)0x0) {
    lVar22 = 0;
  }
  else {
    lVar22 = **(long **)*puVar21;
  }
  FUN_71038f7260(lVar22,"actor");
  puVar25 = *(undefined8 **)(lVar22 + 0x10);
  *puVar25 = puVar25[-2];
  puVar25[1] = puVar25[-1];
  lVar26 = *(long *)(lVar22 + 0x10);
  *(long *)(lVar22 + 0x10) = lVar26 + 0x10;
  FUN_71038f5390(lVar22,(long *)(lVar26 + -0x10),"__index");
  FUN_71038f9510(lVar22,(long *)&DAT_71050ac840,0,uVar17,uVar18,param_6,param_7,param_8);
  *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + -0x10;
  puVar25 = FUN_71038f6930(lVar22,8);
  *puVar25 = puVar29;
  FUN_71038f4d40(lVar22,(long *)(*(long *)(lVar22 + 0x18) + 0x40),"actor");
  FUN_71038f5c00(lVar22,-2);
  if (lVar22 != 0) {
    lVar26 = *(long *)(*(long *)(lVar22 + 0x18) + 0x40);
    if (*(uint *)(lVar26 + 0xc) < 2) {
      plVar41 = (long *)(*(long *)(lVar26 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar26 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar41[3] == 0x13) && (plVar14 = plVar41, plVar41[2] == 2)) break;
        piVar1 = (int *)((long)plVar41 + 0x1c);
        plVar41 = plVar41 + (long)*piVar1 * 4;
        plVar14 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar14 = (long *)(*(long *)(lVar26 + 0x10) + 0x10);
    }
    FUN_71038f5390(lVar22,plVar14,"actor");
  }
  lVar22 = puVar10[5];
  lVar26 = puVar10[6];
  if (0 < (int)((ulong)(lVar26 - lVar22) >> 3)) {
    uVar11 = 0;
    do {
      if ((ulong)(lVar26 - lVar22 >> 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar26 = uVar11 * 8;
      uVar11 = uVar11 + 1;
      lVar22 = **(long **)**(undefined8 **)(lVar22 + lVar26);
      *(undefined4 *)(*(long *)(lVar22 + 0x600) + 0x18) = 0x80;
      *(undefined4 *)(*(long *)(lVar22 + 0x600) + 0x1c) = 0x100;
      *(undefined4 *)(*(long *)(lVar22 + 0x600) + 0x20) = 0x200;
      *(undefined4 *)(*(long *)(lVar22 + 0x600) + 0xdc) = 0xc0000;
      lVar22 = puVar10[5];
      lVar26 = puVar10[6];
    } while ((long)uVar11 < (long)(int)((ulong)(lVar26 - lVar22) >> 3));
  }
  if (*(long **)*puVar21 != (long *)0x0) {
    FUN_7103375650(*(long **)*puVar21,"INPUT_HOWTO",&DAT_71042b2a84);
    if (*(long **)*puVar21 != (long *)0x0) {
      FUN_7103375650(*(long **)*puVar21,"INPUT_PREV",&DAT_71042b2a84);
      if (*(long **)*puVar21 != (long *)0x0) {
        FUN_7103375650(*(long **)*puVar21,"INPUT_NEXT",&DAT_71042b2a84);
      }
    }
  }
  FUN_71025d2a00(0xc1ffff0dbc1ab9a7);
  return;
}

