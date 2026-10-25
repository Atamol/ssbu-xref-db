// addr:      71038ae0b0
// offset:    0x38ae0b0
// name:      FUN_71038ae0b0
// mangled:   
// signature: undefined __cdecl FUN_71038ae0b0(long * * * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038ae0b0(long ***param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  uint uVar3;
  long ****pppplVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long **pplVar8;
  logic_error *this;
  bad_alloc *this_00;
  long ***ppplVar9;
  long **pplVar10;
  uint *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long ***ppplVar15;
  long ***ppplVar16;
  long **pplVar17;
  long **pplVar18;
  uint *puVar19;
  long ***ppplVar20;
  long lVar21;
  ulong *puVar22;
  long ***ppplVar23;
  ulong uVar24;
  long ***ppplVar25;
  long ***ppplVar26;
  long *plVar27;
  long ****pppplVar28;
  ulong *puVar29;
  long ***ppplVar30;
  ulong uVar31;
  uint *puVar32;
  uint *puVar33;
  long **local_280;
  uint *local_270;
  ulong local_268;
  ulong local_260;
  uint local_258 [90];
  undefined1 auStack_f0 [8];
  long ***local_e8;
  long **local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  long local_d0;
  undefined1 local_93;
  long ***local_90;
  long local_88;
  undefined1 *local_80;
  undefined1 local_78;
  long ****local_70 [2];
  
  FUN_71037c3a70(param_1);
  *param_1 = (long **)&PTR_FUN_7105291ae8;
  ppplVar9 = param_1 + 3;
  *ppplVar9 = (long **)0x0;
  param_1[2] = (long **)&PTR_FUN_7105233b78;
  param_1[4] = (long **)0x0;
  param_1[5] = (long **)0x0;
  ppplVar26 = param_1 + 7;
  *ppplVar26 = (long **)0x0;
  param_1[6] = (long **)&DAT_7105231730;
  param_1[8] = (long **)0x0;
  param_1[9] = (long **)0x0;
  ppplVar23 = param_1 + 0xb;
  *ppplVar23 = (long **)0x0;
  param_1[10] = (long **)&PTR_FUN_7104f62038;
  param_1[0x74] = (long **)0x0;
  param_1[0x73] = (long **)0x0;
  param_1[0x72] = (long **)0x0;
  param_1[0x71] = (long **)0x0;
  param_1[0xe] = (long **)(param_1 + 0x11);
  param_1[0xf] = (long **)0x0;
  param_1[0x10] = (long **)&DAT_00000010;
  *(undefined4 *)(param_1 + 0x75) = 0x3f800000;
  param_1[0xc] = (long **)0x0;
  param_1[0xd] = (long **)0x0;
  if ((*(long **)(param_2 + 0x10) == (long *)0x0) ||
     (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
    *ppplVar9 = (long **)0x0;
LAB_71038ae19c:
    pplVar10 = (long **)0x0;
    pplVar18 = (long **)0x0;
    param_1[4] = (long **)0x0;
  }
  else {
    pplVar10 = *(long ***)(param_2 + 8);
    *ppplVar9 = pplVar10;
    if (pplVar10 == (long **)0x0) goto LAB_71038ae19c;
    pplVar10 = (long **)pplVar10[1];
    param_1[4] = pplVar10;
    pplVar18 = (long **)*pplVar10;
  }
  param_1[5] = pplVar18;
  param_1[0xf] = (long **)0x0;
  if ((pplVar10 != (long **)0x0) && ((long **)*pplVar10 == param_1[5])) {
    pplVar10 = param_1[3];
    uVar31 = 0;
    ppplVar1 = param_1 + 0x71;
    local_260 = 0x40;
    ppplVar2 = param_1 + 0x73;
    local_270 = local_258;
    do {
      local_268 = 0;
      if ((pplVar10[uVar31 * 4 + 10] != (long *)0x0) &&
         ((long *)*pplVar10[uVar31 * 4 + 10] == pplVar10[uVar31 * 4 + 0xb])) {
        plVar27 = pplVar10[uVar31 * 4 + 9];
        puVar29 = (ulong *)(*ppplVar9)[0x22][-1];
        puVar14 = (ulong *)0x0;
        if (puVar29[0x12] != 0) {
          puVar14 = (ulong *)(puVar29[0x12] - 0x88);
        }
        if (puVar29 != puVar14) {
          uVar24 = 0;
          do {
            plVar7 = FUN_71038af000(plVar27 + 0x15,(byte *)(puVar14 + 4));
            if (plVar7 == (long *)0x0) {
LAB_71038ae410:
              uVar12 = puVar14[0x13];
joined_r0x0071038ae414:
              puVar22 = puVar14 + 0x13;
              if (uVar12 != 0) goto LAB_71038ae418;
LAB_71038ae460:
              puVar13 = puVar14 + 0x11;
              puVar14 = (ulong *)(*puVar13 & 0xfffffffffffffffe);
              if ((ulong *)puVar14[2] == puVar13) {
                do {
                  puVar13 = puVar14;
                  puVar14 = (ulong *)(*puVar13 & 0xfffffffffffffffe);
                } while (puVar13 == (ulong *)puVar14[2]);
                puVar22 = (ulong *)puVar13[2];
              }
              else {
                puVar22 = (ulong *)0x0;
              }
              if (puVar22 != puVar14) {
                puVar13 = puVar14;
              }
            }
            else {
              puVar19 = local_270 + uVar24;
              puVar6 = local_270;
              if ((uVar24 != 0) && (*local_270 != *(uint *)((long)plVar7 + 0x44))) {
                lVar21 = uVar24 * 4;
                puVar11 = local_270;
                do {
                  lVar21 = lVar21 + -4;
                  if (lVar21 == 0) goto LAB_71038ae438;
                  puVar6 = puVar11 + 1;
                  puVar33 = puVar11 + 1;
                  puVar11 = puVar6;
                } while (*puVar33 != *(uint *)((long)plVar7 + 0x44));
              }
              if (puVar19 != puVar6) goto LAB_71038ae410;
LAB_71038ae438:
              if (uVar24 < local_260) {
                *puVar19 = *(uint *)((long)plVar7 + 0x44);
                uVar24 = local_268 + 1;
                uVar12 = puVar14[0x13];
                local_268 = uVar24;
                goto joined_r0x0071038ae414;
              }
              if (-local_260 == -0x3fffffffffffffff) {
                this = (logic_error *)__cxa_allocate_exception(0x10);
                std::logic_error::logic_error
                          (this,"get_next_capacity, allocator\'s max_size reached");
                *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
                __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
              }
              uVar24 = local_260;
              if (local_260 == 0) {
                uVar24 = 1;
              }
              uVar12 = 0x3fffffffffffffff;
              if (uVar24 <= -local_260 + 0x3fffffffffffffff) {
                uVar12 = uVar24 + local_260;
              }
              if (uVar12 >> 0x3e != 0) {
                this_00 = (bad_alloc *)__cxa_allocate_exception(8);
                std::bad_alloc::bad_alloc(this_00);
                    /* WARNING: Subroutine does not return */
                __cxa_throw(this_00,&std::bad_alloc::typeinfo,std::bad_alloc::~bad_alloc);
              }
              ppplVar16 = (long ***)(uVar12 * 4);
              if (ppplVar16 == (long ***)0x0) {
                ppplVar16 = (long ***)0x1;
              }
              puVar6 = (uint *)FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,param_7
                                              ,param_8);
              if (puVar6 == (uint *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
                  param_3 = &local_e8;
                  local_e8 = ppplVar16;
                  uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
                  if (((uVar24 & 1) != 0) &&
                     (puVar6 = (uint *)FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6
                                                      ,param_7,param_8), puVar6 != (uint *)0x0))
                  goto LAB_71038ae2f8;
                }
                puVar6 = (uint *)0x0;
              }
LAB_71038ae2f8:
              puVar11 = local_270;
              if (local_270 == (uint *)0x0) {
                puVar33 = puVar6 + 1;
                *puVar6 = *(uint *)((long)plVar7 + 0x44);
              }
              else {
                pppplVar28 = (long ****)((long)puVar19 - (long)local_270);
                puVar32 = puVar6;
                if (pppplVar28 != (long ****)0x0) {
                  param_3 = pppplVar28;
                  memmove(puVar6,local_270,(size_t)pppplVar28);
                  puVar32 = (uint *)((long)puVar6 + (long)pppplVar28);
                }
                puVar33 = puVar32 + 1;
                *puVar32 = *(uint *)((long)plVar7 + 0x44);
                pppplVar28 = (long ****)((long)puVar11 + (local_268 * 4 - (long)puVar19));
                if (pppplVar28 != (long ****)0x0) {
                  param_3 = pppplVar28;
                  memmove(puVar33,puVar19,(size_t)pppplVar28);
                  puVar33 = (uint *)((long)puVar33 + (long)pppplVar28);
                  puVar11 = local_270;
                }
                if ((puVar11 != local_258) && (puVar11 != (uint *)0x0)) {
                  FUN_710392eb40((ulong)puVar11);
                }
              }
              uVar24 = (long)puVar33 - (long)puVar6 >> 2;
              puVar22 = puVar14 + 0x13;
              local_270 = puVar6;
              local_268 = uVar24;
              local_260 = uVar12;
              if (*puVar22 == 0) goto LAB_71038ae460;
LAB_71038ae418:
              do {
                puVar13 = (ulong *)*puVar22;
                puVar22 = puVar13 + 1;
              } while (*puVar22 != 0);
            }
            puVar14 = (ulong *)0x0;
            if (puVar13 != (ulong *)0x0) {
              puVar14 = puVar13 + -0x11;
            }
          } while (puVar29 != puVar14);
        }
        plVar27 = plVar27 + 0x1c;
LAB_71038ae508:
        plVar27 = (long *)*plVar27;
        if (plVar27 != (long *)0x0) {
          uVar3 = *(uint *)(plVar27 + 2);
          puVar6 = local_270;
          if ((local_268 != 0) && (*local_270 != uVar3)) {
            lVar21 = local_268 * 4;
            puVar19 = local_270;
            do {
              lVar21 = lVar21 + -4;
              if (lVar21 == 0) goto LAB_71038ae508;
              puVar6 = puVar19 + 1;
              puVar11 = puVar19 + 1;
              puVar19 = puVar6;
            } while (*puVar11 != uVar3);
          }
          if (local_270 + local_268 != puVar6) {
            iVar5 = FUN_710392e1f0(&local_90,0x10,(long ****)0xf28,param_4,param_5,param_6,param_7,
                                   param_8);
            if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_e8 = (long ***)0xf28;
              uVar24 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_e8);
              if ((uVar24 & 1) != 0) {
                FUN_710392e1f0(&local_90,0x10,(long ****)0xf28,param_4,param_5,param_6,param_7,
                               param_8);
              }
            }
            nu::VirtualAllocHook(0xf28,0x10,local_90);
            ppplVar16 = local_90;
            FUN_71037c3a70(local_90);
            *(undefined4 *)(ppplVar16 + 2) = 3;
            *(undefined1 *)((long)ppplVar16 + 0x14) = 0;
            ppplVar16[0x1e3] = (long **)0x0;
            *ppplVar16 = (long **)&PTR_thunk_FUN_71037d1400_7105243108;
            ppplVar16[0x1e4] = (long **)0x0;
            local_e0 = (long **)(ulong)*(uint *)(plVar27[7] + 0x20);
            local_93 = 0;
            local_e8 = (long ***)0x0;
            local_d8 = 2;
            uStack_d4 = uStack_d4 & 0xffffff00;
            (*(code *)(*ppplVar16)[2])(auStack_f0,ppplVar16,&local_e8);
            iVar5 = FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000070,param_4,param_5,param_6,
                                   param_7,param_8);
            if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_90 = (long ***)&DAT_00000070;
              uVar24 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
              if ((uVar24 & 1) != 0) {
                FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000070,param_4,param_5,param_6,
                               param_7,param_8);
              }
            }
            param_3 = local_70[0];
            nu::VirtualAllocHook(0x70,0x10,local_70[0]);
            pppplVar28 = local_70[0];
            FUN_71037c3a70(local_70[0]);
            *pppplVar28 = (long ***)&PTR_FUN_7105291a78;
            pppplVar28[2] = (long ***)&PTR_FUN_710526ec58;
            pppplVar28[3] = (long ***)0x0;
            pppplVar28[4] = (long ***)0x0;
            pppplVar28[5] = (long ***)0x0;
            pppplVar28[8] = (long ***)0x0;
            pppplVar28[9] = (long ***)0x0;
            pppplVar28[6] = (long ***)&PTR_FUN_71052302a0;
            pppplVar28[7] = (long ***)0x0;
            pppplVar28[0xc] = (long ***)0x0;
            pppplVar28[0xd] = (long ***)0x0;
            pppplVar28[10] = (long ***)0x0;
            pppplVar28[0xb] = (long ***)0x0;
            if (pppplVar28 == (long ****)0x0) {
              ppplVar30 = (long ***)0x0;
              local_280 = (long **)0x0;
            }
            else {
              ppplVar30 = pppplVar28[1];
              local_280 = *ppplVar30;
            }
            ppplVar15 = (long ***)ppplVar16[1];
            pppplVar28[5] = (long ***)*ppplVar15;
            pppplVar28[3] = ppplVar16;
            pppplVar28[4] = ppplVar15;
            (*(code *)(*ppplVar16)[4])(&local_90,ppplVar16);
            ppplVar16 = pppplVar28[0xb];
            uVar24 = *(ulong *)(local_88 + 0x1c8);
            uVar12 = (long)pppplVar28[0xc] - (long)ppplVar16;
            if (uVar24 < uVar12 || uVar24 - uVar12 == 0) {
              if (uVar24 < uVar12) {
                pppplVar28[0xc] = (long ***)((long)ppplVar16 + uVar24);
              }
            }
            else {
              FUN_7103839640((long *)(pppplVar28 + 0xb),uVar24 - uVar12,param_3,param_4,param_5,
                             param_6,param_7,param_8);
            }
            uVar24 = (ulong)uVar3 * -0x395b586ca42e166b;
            ppplVar15 = (long ***)
                        (((uVar24 ^ uVar24 >> 0x2f) * -0x395b586ca42e166b ^
                         (uVar31 * -0x395b586ca42e166b ^ uVar31 * -0x395b586ca42e166b >> 0x2f) *
                         0x35a98f4d286a90b9 + 0xe6546b64) * -0x395b586ca42e166b + 0xe6546b64);
            ppplVar25 = (long ***)param_1[0x72];
            ppplVar16 = param_1;
            if (ppplVar25 != (long ***)0x0) {
              uVar24 = (long)ppplVar25 - 1;
              if ((uVar24 & (ulong)ppplVar25) == 0) {
                ppplVar16 = (long ***)(uVar24 & (ulong)ppplVar15);
              }
              else {
                ppplVar16 = ppplVar15;
                if (ppplVar25 <= ppplVar15) {
                  uVar12 = 0;
                  if (ppplVar25 != (long ***)0x0) {
                    uVar12 = (ulong)ppplVar15 / (ulong)ppplVar25;
                  }
                  ppplVar16 = (long ***)((long)ppplVar15 - uVar12 * (long)ppplVar25);
                }
              }
              if (((*ppplVar1)[(long)ppplVar16] != (long *)0x0) &&
                 (plVar7 = (long *)*(*ppplVar1)[(long)ppplVar16], plVar7 != (long *)0x0)) {
                if ((uVar24 & (ulong)ppplVar25) == 0) {
                  do {
                    if ((long ***)plVar7[1] != ppplVar15 &&
                        (long ***)((ulong)plVar7[1] & uVar24) != ppplVar16) break;
                    if ((uVar31 == *(uint *)(plVar7 + 2)) &&
                       (*(uint *)((long)plVar7 + 0x14) == uVar3)) goto joined_r0x0071038aeb28;
                    plVar7 = (long *)*plVar7;
                  } while (plVar7 != (long *)0x0);
                }
                else {
                  do {
                    ppplVar20 = (long ***)plVar7[1];
                    if (ppplVar20 != ppplVar15) {
                      if (ppplVar25 <= ppplVar20) {
                        uVar24 = 0;
                        if (ppplVar25 != (long ***)0x0) {
                          uVar24 = (ulong)ppplVar20 / (ulong)ppplVar25;
                        }
                        ppplVar20 = (long ***)((long)ppplVar20 - uVar24 * (long)ppplVar25);
                      }
                      if (ppplVar20 != ppplVar16) break;
                    }
                    if ((uVar31 == *(uint *)(plVar7 + 2)) &&
                       (*(uint *)((long)plVar7 + 0x14) == uVar3)) goto joined_r0x0071038aeb28;
                    plVar7 = (long *)*plVar7;
                  } while (plVar7 != (long *)0x0);
                }
              }
            }
            iVar5 = FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000038,param_4,param_5,param_6,
                                   param_7,param_8);
            if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_90 = (long ***)&DAT_00000038;
              uVar24 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
              if ((uVar24 & 1) != 0) {
                FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000038,param_4,param_5,param_6,
                               param_7,param_8);
              }
            }
            param_3 = local_70[0];
            nu::VirtualAllocHook(0x38,0x10,local_70[0]);
            pppplVar4 = local_70[0];
            local_70[0][2] = (long ***)(uVar31 | (ulong)uVar3 << 0x20);
            local_70[0][4] = (long ***)0x0;
            local_70[0][5] = (long ***)0x0;
            local_70[0][6] = (long ***)0x0;
            local_70[0][3] = (long ***)&PTR_FUN_7105291b08;
            if ((ppplVar30 != (long ***)0x0) && (*ppplVar30 == local_280)) {
              local_70[0][4] = (long ***)pppplVar28;
              if (pppplVar28 == (long ****)0x0) {
                ppplVar20 = (long ***)0x0;
                local_70[0][5] = (long ***)0x0;
              }
              else {
                ppplVar20 = pppplVar28[1];
                local_70[0][5] = ppplVar20;
                ppplVar20 = (long ***)*ppplVar20;
              }
              ppplVar30 = (long ***)0x0;
              pppplVar28 = (long ****)0x0;
              local_280 = (long **)0x0;
              local_70[0][6] = ppplVar20;
            }
            *local_70[0] = (long ***)0x0;
            local_70[0][1] = ppplVar15;
            if ((ppplVar25 == (long ***)0x0) ||
               (*(float *)(param_1 + 0x75) * (float)ppplVar25 < (float)((long)param_1[0x74] + 1))) {
              if (ppplVar25 < (long ***)0x3) {
                uVar24 = 1;
              }
              else {
                uVar24 = (ulong)(((long)ppplVar25 - 1U & (ulong)ppplVar25) != 0);
              }
              pplVar17 = (long **)(uVar24 | (long)ppplVar25 << 1);
              pplVar18 = (long **)(long)((float)((long)param_1[0x74] + 1) /
                                        *(float *)(param_1 + 0x75));
              if (pplVar18 <= pplVar17) {
                pplVar18 = pplVar17;
              }
              if ((long)pplVar18 - 1U == 0) {
                pplVar18 = (long **)0x2;
              }
              else if (((long)pplVar18 - 1U & (ulong)pplVar18) != 0) {
                pplVar18 = (long **)std::__next_prime((ulong)pplVar18);
              }
              pplVar17 = param_1[0x72];
              if (pplVar17 < pplVar18) {
                FUN_71038af1f0((long *)ppplVar1,(ulong)pplVar18,param_3,param_4,param_5,param_6,
                               param_7,param_8);
              }
              else if (pplVar18 < pplVar17) {
                pplVar8 = (long **)(long)((float)param_1[0x74] / *(float *)(param_1 + 0x75));
                if (pplVar17 < (long **)0x3 || ((long)pplVar17 - 1U & (ulong)pplVar17) != 0) {
                  pplVar8 = (long **)std::__next_prime((ulong)pplVar8);
                }
                else if ((long **)0x1 < pplVar8) {
                  pplVar8 = (long **)(1L << (-LZCOUNT((long)pplVar8 + -1) & 0x3fU));
                }
                if (pplVar8 <= pplVar18) {
                  pplVar8 = pplVar18;
                }
                if (pplVar8 < pplVar17) {
                  FUN_71038af1f0((long *)ppplVar1,(ulong)pplVar8,param_3,param_4,param_5,param_6,
                                 param_7,param_8);
                }
              }
              ppplVar25 = (long ***)param_1[0x72];
              if (((long)ppplVar25 - 1U & (ulong)ppplVar25) == 0) {
                ppplVar16 = (long ***)((long)ppplVar25 - 1U & (ulong)ppplVar15);
              }
              else {
                ppplVar16 = ppplVar15;
                if (ppplVar25 <= ppplVar15) {
                  uVar24 = 0;
                  if (ppplVar25 != (long ***)0x0) {
                    uVar24 = (ulong)ppplVar15 / (ulong)ppplVar25;
                  }
                  ppplVar16 = (long ***)((long)ppplVar15 - uVar24 * (long)ppplVar25);
                }
              }
            }
            pplVar18 = (long **)(*ppplVar1)[(long)ppplVar16];
            if (pplVar18 == (long **)0x0) {
              *pppplVar4 = (long ***)*ppplVar2;
              *ppplVar2 = (long **)pppplVar4;
              (*ppplVar1)[(long)ppplVar16] = (long *)ppplVar2;
              if (*pppplVar4 != (long ***)0x0) {
                ppplVar16 = (long ***)(*pppplVar4)[1];
                if (((long)ppplVar25 - 1U & (ulong)ppplVar25) == 0) {
                  ppplVar16 = (long ***)((ulong)ppplVar16 & (long)ppplVar25 - 1U);
                }
                else if (ppplVar25 <= ppplVar16) {
                  uVar24 = 0;
                  if (ppplVar25 != (long ***)0x0) {
                    uVar24 = (ulong)ppplVar16 / (ulong)ppplVar25;
                  }
                  ppplVar16 = (long ***)((long)ppplVar16 - uVar24 * (long)ppplVar25);
                }
                pplVar18 = *ppplVar1 + (long)ppplVar16;
                goto LAB_71038aeaf8;
              }
            }
            else {
              *pppplVar4 = (long ***)*pplVar18;
LAB_71038aeaf8:
              *pplVar18 = (long *)pppplVar4;
            }
            param_1[0x74] = (long **)((long)param_1[0x74] + 1);
joined_r0x0071038aeb28:
            if (((ppplVar30 != (long ***)0x0) && (pppplVar28 != (long ****)0x0)) &&
               (*ppplVar30 == local_280)) {
              (*(code *)(*pppplVar28)[1])(pppplVar28);
            }
          }
          goto LAB_71038ae508;
        }
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 < 6);
    if (((local_260 != 0) && (local_270 != local_258)) && (local_270 != (uint *)0x0)) {
      FUN_710392eb40((ulong)local_270);
    }
  }
  FUN_71037ef770(&local_270,0);
  FUN_710359b630(&local_e8,(uint *)&local_270,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((long *)CONCAT44(uStack_d4,local_d8) == (long *)0x0) ||
     (*(long *)CONCAT44(uStack_d4,local_d8) != local_d0)) {
    *ppplVar26 = (long **)0x0;
LAB_71038aebb4:
    pplVar10 = (long **)0x0;
    param_1[8] = (long **)0x0;
  }
  else {
    *ppplVar26 = local_e0;
    if (local_e0 == (long **)0x0) goto LAB_71038aebb4;
    pplVar10 = (long **)local_e0[1];
    param_1[8] = pplVar10;
    pplVar10 = (long **)*pplVar10;
  }
  param_1[9] = pplVar10;
  local_90 = (long ***)0x1;
  local_88 = 0;
  local_78 = 0;
  local_80 = &DAT_100000100000000;
  FUN_7103590cf0(&local_e8,(uint *)&local_90,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((long *)CONCAT44(uStack_d4,local_d8) == (long *)0x0) ||
     (*(long *)CONCAT44(uStack_d4,local_d8) != local_d0)) {
    *ppplVar23 = (long **)0x0;
  }
  else {
    *ppplVar23 = local_e0;
    if (local_e0 != (long **)0x0) {
      pplVar10 = (long **)local_e0[1];
      param_1[0xc] = pplVar10;
      pplVar10 = (long **)*pplVar10;
      goto LAB_71038aec24;
    }
  }
  pplVar10 = (long **)0x0;
  param_1[0xc] = (long **)0x0;
LAB_71038aec24:
  param_1[0xd] = pplVar10;
  return;
}

