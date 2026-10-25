// addr:      710171ff00
// offset:    0x171ff00
// name:      FUN_710171ff00
// mangled:   
// signature: undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_710171ff00(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  size_t sVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
  long *plVar33;
  long ***ppplVar34;
  long ***ppplVar35;
  ulong uVar36;
  long lVar37;
  long *plVar38;
  long **pplVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  long lVar42;
  ushort uVar43;
  uint uVar44;
  long ***ppplVar45;
  ulong uVar46;
  long ***ppplVar47;
  long lVar48;
  ulong uVar49;
  ulong *puVar50;
  long ***ppplVar51;
  long ****pppplVar52;
  ulong uVar53;
  undefined **local_548 [3];
  long local_530;
  long ***local_520;
  byte local_518 [16];
  long local_508;
  undefined8 local_418;
  undefined8 local_410;
  ulong local_408;
  undefined8 local_310;
  undefined4 local_308;
  long local_300;
  long local_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined2 local_2ea;
  undefined1 local_2e8;
  undefined2 local_2e6;
  undefined8 local_2e4;
  undefined4 local_2dc;
  ushort local_2d8;
  uint3 local_2d6;
  undefined1 uStack_2d3;
  undefined2 local_2d0;
  undefined1 local_2ce;
  undefined1 uStack_2cd;
  undefined4 uStack_2cc;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined1 local_2c6;
  undefined1 local_2c4;
  undefined1 uStack_2c3;
  undefined1 uStack_2c2;
  undefined1 uStack_2c1;
  undefined1 local_2c0;
  undefined1 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  ulong *local_2a8;
  ulong *local_2a0;
  long local_298;
  uint local_290;
  undefined4 local_28c;
  byte local_288 [256];
  uint local_188;
  undefined4 uStack_184;
  byte local_180 [256];
  long ***local_80;
  long ***local_78;
  undefined8 uStack_70;
  
  lVar32 = *(long *)(param_1 + 0x108);
  uVar24 = (*(long *)(param_1 + 0x110) - lVar32 >> 4) * 0x4ec4ec4ec4ec4ec5;
  if ((uint)uVar24 <= param_2) {
    return 0;
  }
  uVar46 = (ulong)param_2;
  if (uVar24 < uVar46 || uVar24 - uVar46 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar25 = lVar32 + uVar46 * 0xd0;
  *(undefined4 *)param_3 = *(undefined4 *)(lVar25 + 0xc);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar25 + 0x10);
  *(undefined2 *)((long)param_3 + 0xc) = *(undefined2 *)(lVar25 + 0x14);
  pbVar26 = *(byte **)(lVar25 + 0x30);
  if (pbVar26 != (byte *)0x0) {
    uVar44 = (uint)*pbVar26;
    if (*pbVar26 == 0) {
      uVar24 = 0;
    }
    else {
      lVar25 = 1;
      do {
        pbVar2 = pbVar26 + lVar25;
        lVar25 = lVar25 + 1;
      } while (*pbVar2 != 0);
      uVar49 = 0;
      do {
        if (uVar44 >> 7 == 0) {
          pbVar26 = pbVar26 + 1;
          uVar43 = (ushort)uVar44 & 0x7f;
        }
        else {
          pbVar2 = pbVar26 + 1;
          if ((uVar44 & 0xe0) == 0xc0) {
            pbVar26 = pbVar26 + 2;
            uVar43 = *pbVar2 & 0x3f | (ushort)((uVar44 & 0x3f) << 6);
          }
          else {
            uVar43 = (ushort)(uVar44 << 0xc) | (*pbVar2 & 0x3f) << 6 | pbVar26[2] & 0x3f;
            pbVar26 = pbVar26 + 3;
          }
        }
        uVar24 = uVar49 + 1;
        *(ushort *)((long)param_3 + uVar49 * 2 + 0x14) = uVar43;
      } while ((((uint)uVar49 < (int)lVar25 - 2U) && (uVar24 < 0x40)) &&
              (uVar44 = (uint)*pbVar26, uVar49 = uVar24, uVar44 != 0));
    }
    *(undefined2 *)((long)param_3 + (uVar24 & 0xffffffff) * 2 + 0x14) = 0;
    *(undefined2 *)((long)param_3 + 0x94) = 0;
  }
  pppplVar19 = param_3;
  FUN_7101721f20((uint *)(param_3 + 2));
  pbVar26 = *(byte **)(lVar32 + uVar46 * 0xd0 + 0x58);
  if (pbVar26 != (byte *)0x0) {
    uVar44 = (uint)*pbVar26;
    if (*pbVar26 == 0) {
      uVar24 = 0;
    }
    else {
      lVar25 = 1;
      do {
        pbVar2 = pbVar26 + lVar25;
        lVar25 = lVar25 + 1;
      } while (*pbVar2 != 0);
      uVar49 = 0;
      do {
        if (uVar44 >> 7 == 0) {
          pbVar26 = pbVar26 + 1;
          uVar43 = (ushort)uVar44 & 0x7f;
        }
        else {
          pbVar2 = pbVar26 + 1;
          if ((uVar44 & 0xe0) == 0xc0) {
            pbVar26 = pbVar26 + 2;
            uVar43 = *pbVar2 & 0x3f | (ushort)((uVar44 & 0x3f) << 6);
          }
          else {
            uVar43 = (ushort)(uVar44 << 0xc) | (*pbVar2 & 0x3f) << 6 | pbVar26[2] & 0x3f;
            pbVar26 = pbVar26 + 3;
          }
        }
        uVar24 = uVar49 + 1;
        *(ushort *)((long)param_3 + uVar49 * 2 + 0x9c) = uVar43;
      } while ((((uint)uVar49 < (int)lVar25 - 2U) && (uVar24 < 0x40)) &&
              (uVar44 = (uint)*pbVar26, uVar49 = uVar24, uVar44 != 0));
    }
    *(undefined2 *)((long)param_3 + (uVar24 & 0xffffffff) * 2 + 0x9c) = 0;
    *(undefined2 *)((long)param_3 + 0x11c) = 0;
  }
  FUN_7101721f20((uint *)(param_3 + 0x13));
  lVar48 = lVar32 + uVar46 * 0xd0;
  ppplVar16 = (long ***)FUN_71001b0960((ulong *)(lVar48 + 0x68));
  param_3[0x24] = ppplVar16;
  ppplVar16 = (long ***)FUN_71001b0960((ulong *)(lVar48 + 0x70));
  param_3[0x25] = ppplVar16;
  ppplVar16 = (long ***)FUN_71001b0960((ulong *)(lVar48 + 0x78));
  param_3[0x26] = ppplVar16;
  ppplVar16 = (long ***)FUN_71001b0960((ulong *)(lVar48 + 0x80));
  lVar25 = lVar48 + 0x88;
  param_3[0x27] = ppplVar16;
  uVar14 = FUN_7101722330(lVar25,"operation_id");
  *(undefined4 *)((long)param_3 + 4) = uVar14;
  iVar15 = FUN_7101722330(lVar25,"amiibo");
  *(bool *)(param_3 + 0x28) = iVar15 != 0;
  iVar15 = FUN_7101722330(lVar25,"team");
  *(bool *)((long)param_3 + 0x141) = iVar15 != 0;
  ppplVar16 = param_3[0x32];
  ppplVar27 = param_3[0x33];
  ppplVar47 = ppplVar16;
  if (param_3[0x33] != ppplVar16) {
    do {
      pplVar17 = ppplVar27[-0x45];
      ppplVar47 = ppplVar27 + -0x52;
      if (pplVar17 != (long **)0x0) {
        ppplVar27[-0x44] = pplVar17;
        FUN_710392eb40((ulong)pplVar17);
      }
      ppplVar27 = ppplVar47;
    } while (ppplVar16 != ppplVar47);
    ppplVar47 = param_3[0x32];
  }
  lVar32 = lVar32 + uVar46 * 0xd0;
  param_3[0x33] = ppplVar16;
  plVar33 = (long *)(lVar32 + 0xb8);
  plVar38 = (long *)(lVar32 + 0xc0);
  lVar32 = *plVar38 - *plVar33 >> 5;
  if ((ulong)(((long)param_3[0x34] - (long)ppplVar47 >> 4) * -0x7063e7063e7063e7) <
      (ulong)(lVar32 * -0x5555555555555555)) {
    if (0x63e7063e7063e7 < (ulong)(lVar32 * -0x5555555555555555)) goto LAB_7101720a10;
    ppplVar27 = (long ***)(lVar32 * 0x5555555555555630);
    if (ppplVar27 == (long ***)0x0) {
      ppplVar27 = (long ***)0x1;
    }
    lVar18 = FUN_710392e290(0x10,ppplVar27,pppplVar19,param_4,param_5,param_6,param_7,param_8);
    if (lVar18 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_418 = (long ***)((ulong)local_418 & 0xffffffff00000000);
        pppplVar19 = (long ****)&local_310;
        local_310 = ppplVar27;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_418);
        if (((uVar24 & 1) != 0) &&
           (lVar18 = FUN_710392e290(0x10,ppplVar27,pppplVar19,param_4,param_5,param_6,param_7,
                                    param_8), lVar18 != 0)) goto LAB_71017202c0;
      }
      lVar18 = 0;
    }
LAB_71017202c0:
    ppplVar51 = (long ***)(lVar18 + ((long)ppplVar16 - (long)ppplVar47 >> 4) * 0x10);
    ppplVar45 = (long ***)(lVar18 + lVar32 * 0x5555555555555630);
    ppplVar27 = ppplVar51;
    if (ppplVar16 == ppplVar47) {
      param_3[0x32] = ppplVar51;
      param_3[0x33] = ppplVar51;
      param_3[0x34] = ppplVar45;
    }
    else {
      do {
        ppplVar27 = ppplVar27 + -0x52;
        ppplVar16 = ppplVar16 + -0x52;
        FUN_7101684800(ppplVar27,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,param_8);
      } while (ppplVar47 != ppplVar16);
      ppplVar16 = param_3[0x32];
      ppplVar47 = param_3[0x33];
      param_3[0x32] = ppplVar27;
      param_3[0x33] = ppplVar51;
      param_3[0x34] = ppplVar45;
      while (ppplVar27 = ppplVar47, ppplVar27 != ppplVar16) {
        pplVar17 = ppplVar27[-0x45];
        ppplVar47 = ppplVar27 + -0x52;
        if (pplVar17 != (long **)0x0) {
          ppplVar27[-0x44] = pplVar17;
          FUN_710392eb40((ulong)pplVar17);
        }
      }
    }
    if (ppplVar16 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar16);
    }
  }
  local_80 = (long ***)0x0;
  local_78 = (long ***)0x0;
  uStack_70 = 0;
  lVar32 = *(long *)(DAT_710532f730 + 8);
  lVar48 = lVar48 + 0xa0;
  pppplVar19 = &local_80;
  FUN_71017224b0(lVar48,"fighter_flags",pppplVar19,param_4,param_5,param_6,param_7,param_8);
  ppplVar27 = local_78;
  ppplVar16 = local_80;
  if (local_80 != local_78) {
    ppplVar47 = param_3[0x29];
    uVar24 = (long)local_78 - (long)local_80 >> 2;
    if ((ulong)((long)param_3[0x2b] - (long)ppplVar47 >> 3) < uVar24) {
      if (uVar24 >> 0x3d != 0) goto LAB_7101720a10;
      ppplVar45 = (long ***)(((long)local_78 - (long)local_80) * 2);
      if (ppplVar45 == (long ***)0x0) {
        ppplVar45 = (long ***)0x1;
      }
      pppplVar52 = (long ****)((long)param_3[0x2a] - (long)ppplVar47);
      lVar18 = (long)pppplVar52 >> 3;
      ppplVar51 = (long ***)
                  FUN_710392e290(0x10,ppplVar45,pppplVar19,param_4,param_5,param_6,param_7,param_8);
      if (ppplVar51 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_418 = (long ***)((ulong)local_418 & 0xffffffff00000000);
          pppplVar19 = (long ****)&local_310;
          local_310 = ppplVar45;
          uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_418);
          if (((uVar46 & 1) != 0) &&
             (ppplVar51 = (long ***)
                          FUN_710392e290(0x10,ppplVar45,pppplVar19,param_4,param_5,param_6,param_7,
                                         param_8), ppplVar51 != (long ***)0x0)) goto LAB_7101720414;
        }
        ppplVar51 = (long ***)0x0;
      }
LAB_7101720414:
      if (0 < (long)pppplVar52) {
        memcpy(ppplVar51,ppplVar47,(size_t)pppplVar52);
        pppplVar19 = pppplVar52;
      }
      param_3[0x29] = ppplVar51;
      param_3[0x2a] = ppplVar51 + lVar18;
      param_3[0x2b] = ppplVar51 + uVar24;
      if (ppplVar47 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar47);
        ppplVar16 = local_80;
        ppplVar27 = local_78;
      }
    }
    for (; ppplVar16 != ppplVar27; ppplVar16 = (long ***)((long)ppplVar16 + 4)) {
      pplVar17 = (long **)FUN_710172a290((byte)*(uint *)ppplVar16);
      lVar18 = *(long *)(lVar32 + 0x168);
      uVar44 = FUN_71032632a0(lVar18,(ulong)pplVar17);
      if ((uVar44 & 1) != 0) {
        pplVar17 = (long **)FUN_71032631a0(lVar18,0x11b1ccb807);
      }
      ppplVar47 = param_3[0x29];
      ppplVar45 = param_3[0x2a];
      ppplVar51 = ppplVar47;
      if (ppplVar47 == ppplVar45) {
LAB_71017205b4:
        ppplVar35 = ppplVar51;
        if (ppplVar45 == ppplVar51) goto LAB_71017205bc;
      }
      else {
        bVar10 = ((ulong)pplVar17 & 0xffffffffff) == 0;
        bVar11 = ((ulong)pplVar17 & 0xff00000000000000) != 0xc100000000000000;
        ppplVar35 = ppplVar45;
        if ((bVar11) || (((ulong)pplVar17 & 0xffffffffff) == 0)) {
          pplVar39 = *ppplVar47;
          bVar12 = ((ulong)pplVar39 & 0xffffffffff) != 0;
          bVar13 = ((ulong)pplVar39 & 0xff00000000000000) == 0xc100000000000000;
          if (bVar11 || bVar10) {
            if (bVar13 && bVar12) {
              do {
                ppplVar51 = ppplVar51 + 1;
                if (ppplVar45 == ppplVar51) goto LAB_71017205bc;
              } while ((((ulong)*ppplVar51 & 0xff00000000000000) == 0xc100000000000000) &&
                      (((ulong)*ppplVar51 & 0xffffffffff) != 0));
            }
          }
          else if (bVar13 && bVar12) {
            while (ppplVar34 = ppplVar51 + 1,
                  (((ulong)pplVar17 ^ (ulong)pplVar39) & 0xffffffffff) != 0) {
              if (ppplVar45 == ppplVar34) goto LAB_71017205bc;
              pplVar39 = *ppplVar34;
              ppplVar51 = ppplVar34;
              if ((((ulong)pplVar39 & 0xff00000000000000) != 0xc100000000000000) ||
                 (((ulong)pplVar39 & 0xffffffffff) == 0)) break;
            }
          }
          goto LAB_71017205b4;
        }
        ppplVar34 = ppplVar47;
        ppplVar51 = ppplVar45;
        if (bVar10) goto LAB_71017205b4;
        do {
          pplVar39 = *ppplVar34;
          ppplVar51 = ppplVar34;
          if ((((ulong)pplVar39 & 0xff00000000000000) == 0xc100000000000000 &&
              ((ulong)pplVar39 & 0xffffffffff) != 0) &&
              (((ulong)pplVar17 ^ (ulong)pplVar39) & 0xffffffffff) == 0) goto LAB_71017205b4;
          ppplVar34 = ppplVar34 + 1;
        } while (ppplVar45 != ppplVar34);
LAB_71017205bc:
        if (param_3[0x2b] == ppplVar45) {
          pppplVar52 = (long ****)((long)ppplVar35 - (long)ppplVar47);
          lVar18 = (long)pppplVar52 >> 3;
          uVar24 = lVar18 + 1;
          if (uVar24 >> 0x3d != 0) goto LAB_7101721f00;
          lVar37 = (long)param_3[0x2b] - (long)ppplVar47;
          if ((ulong)(lVar37 >> 3) < 0xfffffffffffffff) {
            uVar46 = lVar37 >> 2;
            if (uVar24 <= uVar46) {
              uVar24 = uVar46;
            }
            if (uVar24 != 0) {
              if (uVar24 >> 0x3d == 0) goto LAB_7101720634;
              goto LAB_7101720a10;
            }
            ppplVar51 = (long ***)0x0;
          }
          else {
            uVar24 = 0x1fffffffffffffff;
LAB_7101720634:
            ppplVar45 = (long ***)(uVar24 * 8);
            if (ppplVar45 == (long ***)0x0) {
              ppplVar45 = (long ***)0x1;
            }
            ppplVar51 = (long ***)
                        FUN_710392e290(0x10,ppplVar45,pppplVar19,param_4,param_5,param_6,param_7,
                                       param_8);
            if (ppplVar51 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_418 = (long ***)((ulong)local_418 & 0xffffffff00000000);
                pppplVar19 = (long ****)&local_310;
                local_310 = ppplVar45;
                uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_418);
                if (((uVar46 & 1) != 0) &&
                   (ppplVar51 = (long ***)
                                FUN_710392e290(0x10,ppplVar45,pppplVar19,param_4,param_5,param_6,
                                               param_7,param_8), ppplVar51 != (long ***)0x0))
                goto LAB_710172069c;
              }
              ppplVar51 = (long ***)0x0;
            }
          }
LAB_710172069c:
          ppplVar51[lVar18] = pplVar17;
          if (0 < (long)pppplVar52) {
            memcpy(ppplVar51,ppplVar47,(size_t)pppplVar52);
            pppplVar19 = pppplVar52;
          }
          param_3[0x29] = ppplVar51;
          param_3[0x2a] = ppplVar51 + lVar18 + 1;
          param_3[0x2b] = ppplVar51 + uVar24;
          if (ppplVar47 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar47);
          }
        }
        else {
          *ppplVar45 = pplVar17;
          param_3[0x2a] = param_3[0x2a] + 1;
        }
      }
    }
  }
  pppplVar19 = &local_80;
  FUN_71017224b0(lVar48,"competition_stage_flags",pppplVar19,param_4,param_5,param_6,param_7,param_8
                );
  if (local_80 != local_78) {
    ppplVar27 = param_3[0x2c];
    ppplVar16 = param_3[0x2d];
    uVar46 = (long)local_78 - (long)local_80;
    uVar49 = (long)uVar46 >> 2;
    uVar53 = (long)ppplVar16 - (long)ppplVar27 >> 3;
    uVar24 = uVar49 - uVar53;
    if (uVar49 < uVar53 || uVar24 == 0) {
      if (uVar49 < uVar53) {
        ppplVar16 = ppplVar27 + uVar49;
        param_3[0x2d] = ppplVar16;
      }
    }
    else {
      if ((ulong)((long)param_3[0x2e] - (long)ppplVar16 >> 3) < uVar24) {
        if (uVar49 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar32 = (long)param_3[0x2e] - (long)ppplVar27;
        if ((ulong)(lVar32 >> 3) < 0xfffffffffffffff) {
          uVar28 = lVar32 >> 2;
          uVar46 = uVar49;
          if (uVar49 <= uVar28) {
            uVar46 = uVar28;
          }
          if (uVar46 != 0) {
            if (uVar46 >> 0x3d != 0) goto LAB_7101720a10;
            goto LAB_7101720804;
          }
LAB_710172085c:
          lVar32 = 0;
        }
        else {
          uVar46 = 0x1fffffffffffffff;
LAB_7101720804:
          ppplVar16 = (long ***)(uVar46 * 8);
          if (ppplVar16 == (long ***)0x0) {
            ppplVar16 = (long ***)0x1;
          }
          lVar32 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,param_8)
          ;
          if (lVar32 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_418 = (long ***)((ulong)local_418 & 0xffffffff00000000);
              pppplVar19 = (long ****)&local_310;
              local_310 = ppplVar16;
              uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_418);
              if (((uVar28 & 1) != 0) &&
                 (lVar32 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,
                                          param_8), lVar32 != 0)) goto LAB_7101720860;
            }
            goto LAB_710172085c;
          }
        }
LAB_7101720860:
        puVar41 = (undefined8 *)(lVar32 + uVar53 * 8);
        uVar36 = uVar24 - 1;
        uVar28 = uVar24 & 3;
        puVar40 = puVar41;
        if (uVar28 != 0) {
          lVar18 = -uVar28;
          do {
            lVar18 = lVar18 + 1;
            *puVar40 = 0x69ffff0000000000;
            puVar40 = puVar40 + 1;
          } while (lVar18 != 0);
          uVar24 = uVar24 - uVar28;
          puVar40 = (undefined8 *)(lVar32 + (uVar53 + uVar28) * 8);
        }
        if (2 < uVar36) {
          do {
            *puVar40 = 0x69ffff0000000000;
            puVar40[1] = 0x69ffff0000000000;
            uVar24 = uVar24 - 4;
            puVar40[2] = 0x69ffff0000000000;
            puVar40[3] = 0x69ffff0000000000;
            puVar40 = puVar40 + 4;
          } while (uVar24 != 0);
        }
        ppplVar27 = param_3[0x2c];
        ppplVar16 = (long ***)(lVar32 + uVar49 * 8);
        sVar20 = (long)param_3[0x2d] - (long)ppplVar27;
        if (0 < (long)sVar20) {
          memcpy((long ***)((long)puVar41 - sVar20),ppplVar27,sVar20);
        }
        param_3[0x2c] = (long ***)((long)puVar41 - sVar20);
        param_3[0x2d] = ppplVar16;
        param_3[0x2e] = (long ***)(lVar32 + uVar46 * 8);
        if (ppplVar27 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar27);
          ppplVar16 = param_3[0x2d];
        }
      }
      else {
        uVar46 = uVar24;
        if ((uVar24 & 1) != 0) {
          *ppplVar16 = (long **)0x69ffff0000000000;
          ppplVar16 = param_3[0x2d] + 1;
          param_3[0x2d] = ppplVar16;
          uVar46 = uVar24 - 1;
        }
        if (uVar24 != 1) {
          do {
            *ppplVar16 = (long **)0x69ffff0000000000;
            ppplVar16 = param_3[0x2d];
            param_3[0x2d] = ppplVar16 + 1;
            ppplVar16[1] = (long **)0x69ffff0000000000;
            ppplVar16 = param_3[0x2d] + 1;
            uVar46 = uVar46 - 2;
            param_3[0x2d] = ppplVar16;
          } while (uVar46 != 0);
        }
      }
      ppplVar27 = param_3[0x2c];
      uVar46 = (long)local_78 - (long)local_80;
    }
    iVar15 = (int)((ulong)((long)ppplVar16 - (long)ppplVar27) >> 3);
    iVar31 = (int)(uVar46 >> 2);
    if (iVar31 <= iVar15) {
      iVar15 = iVar31;
    }
    if (0 < iVar15) {
      if (local_78 != local_80) {
        uVar24 = 0;
        do {
          uVar44 = (uint)(byte)*(uint *)((long)local_80 + uVar24 * 4);
          pplVar17 = (long **)0x69ffff0000000000;
          if (uVar44 != 0xff) {
            pplVar17 = (long **)FUN_71032b30d0(*(long *)(DAT_710532f730 + 8) + 0x170,uVar44);
          }
          if ((ulong)((long)param_3[0x2d] - (long)param_3[0x2c] >> 3) <= uVar24) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          param_3[0x2c][uVar24] = pplVar17;
          uVar24 = uVar24 + 1;
          if ((long)iVar15 <= (long)uVar24) goto LAB_7101720988;
        } while (uVar24 < (ulong)((long)local_78 - (long)local_80 >> 2));
      }
      goto LAB_7101721ed8;
    }
  }
LAB_7101720988:
  pppplVar19 = &local_80;
  FUN_71017224b0(lVar48,"competition_stage_type",pppplVar19,param_4,param_5,param_6,param_7,param_8)
  ;
  if (local_80 == local_78) goto LAB_7101720be4;
  ppplVar27 = param_3[0x2f];
  ppplVar16 = param_3[0x30];
  uVar46 = (long)local_78 - (long)local_80;
  uVar49 = (long)uVar46 >> 2;
  uVar53 = (long)ppplVar16 - (long)ppplVar27 >> 2;
  uVar24 = uVar49 - uVar53;
  if (uVar49 < uVar53 || uVar24 == 0) {
    if (uVar49 < uVar53) {
      ppplVar16 = (long ***)((long)ppplVar27 + uVar49 * 4);
      param_3[0x30] = ppplVar16;
    }
  }
  else {
    if ((ulong)((long)param_3[0x31] - (long)ppplVar16 >> 2) < uVar24) {
      if (uVar49 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar32 = (long)param_3[0x31] - (long)ppplVar27;
      if ((ulong)(lVar32 >> 2) < 0x1fffffffffffffff) {
        uVar28 = lVar32 >> 1;
        uVar46 = uVar49;
        if (uVar49 <= uVar28) {
          uVar46 = uVar28;
        }
        if (uVar46 != 0) {
          if (uVar46 >> 0x3e != 0) {
LAB_7101720a10:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_7101720a84;
        }
LAB_7101720adc:
        lVar32 = 0;
      }
      else {
        uVar46 = 0x3fffffffffffffff;
LAB_7101720a84:
        ppplVar16 = (long ***)(uVar46 * 4);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar32 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,param_8);
        if (lVar32 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_418 = (long ***)((ulong)local_418 & 0xffffffff00000000);
            pppplVar19 = (long ****)&local_310;
            local_310 = ppplVar16;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_418);
            if (((uVar28 & 1) != 0) &&
               (lVar32 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,
                                        param_8), lVar32 != 0)) goto LAB_7101720ae0;
          }
          goto LAB_7101720adc;
        }
      }
LAB_7101720ae0:
      puVar40 = (undefined8 *)(lVar32 + uVar53 * 4);
      uVar36 = uVar24 - 1;
      uVar28 = uVar24 & 3;
      puVar41 = puVar40;
      if (uVar28 != 0) {
        lVar48 = -uVar28;
        do {
          lVar48 = lVar48 + 1;
          *(undefined4 *)puVar41 = 0;
          puVar41 = (undefined8 *)((long)puVar41 + 4);
        } while (lVar48 != 0);
        uVar24 = uVar24 - uVar28;
        puVar41 = (undefined8 *)(lVar32 + (uVar53 + uVar28) * 4);
      }
      if (2 < uVar36) {
        do {
          *puVar41 = 0;
          puVar41[1] = 0;
          uVar24 = uVar24 - 4;
          puVar41 = puVar41 + 2;
        } while (uVar24 != 0);
      }
      ppplVar27 = param_3[0x2f];
      ppplVar16 = (long ***)(lVar32 + uVar49 * 4);
      sVar20 = (long)param_3[0x30] - (long)ppplVar27;
      if (0 < (long)sVar20) {
        memcpy((long ***)((long)puVar40 - sVar20),ppplVar27,sVar20);
      }
      param_3[0x2f] = (long ***)((long)puVar40 - sVar20);
      param_3[0x30] = ppplVar16;
      param_3[0x31] = (long ***)(lVar32 + uVar46 * 4);
      if (ppplVar27 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar27);
        ppplVar16 = param_3[0x30];
      }
    }
    else {
      uVar46 = uVar24;
      if ((uVar24 & 1) != 0) {
        *(undefined4 *)ppplVar16 = 0;
        ppplVar16 = (long ***)((long)param_3[0x30] + 4);
        param_3[0x30] = ppplVar16;
        uVar46 = uVar24 - 1;
      }
      if (uVar24 != 1) {
        do {
          *(undefined4 *)ppplVar16 = 0;
          ppplVar16 = param_3[0x30];
          param_3[0x30] = (long ***)((long)ppplVar16 + 4);
          *(undefined4 *)((long)ppplVar16 + 4) = 0;
          ppplVar16 = (long ***)((long)param_3[0x30] + 4);
          uVar46 = uVar46 - 2;
          param_3[0x30] = ppplVar16;
        } while (uVar46 != 0);
      }
    }
    ppplVar27 = param_3[0x2f];
    uVar46 = (long)local_78 - (long)local_80;
  }
  iVar31 = (int)(uVar46 >> 2);
  iVar15 = (int)((ulong)((long)ppplVar16 - (long)ppplVar27) >> 2);
  if (iVar31 <= iVar15) {
    iVar15 = iVar31;
  }
  if (0 < iVar15) {
    if (local_78 == local_80) {
LAB_7101721ed8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar24 = 0;
    while( true ) {
      if ((ulong)((long)ppplVar16 - (long)ppplVar27 >> 2) <= uVar24) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar32 = uVar24 * 4;
      uVar24 = uVar24 + 1;
      *(uint *)((long)ppplVar27 + lVar32) = *(uint *)((long)local_80 + lVar32);
      if ((long)iVar15 <= (long)uVar24) break;
      if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
      ppplVar27 = param_3[0x2f];
      ppplVar16 = param_3[0x30];
    }
  }
LAB_7101720be4:
  lVar32 = *plVar33;
  lVar48 = *plVar38;
  if (lVar32 != lVar48) {
    do {
      lVar18 = lVar32 + 0x40;
      local_2e6 = 0x3c;
      local_2ea = 0;
      local_2e8 = 0;
      local_2e4 = 0x200000503;
      local_2dc = 0x100000a;
      local_2d8 = 1;
      lVar37 = lVar32 + 0x28;
      _local_2d6 = 0x1000103;
      local_2d0 = 0x100;
      uStack_2c7 = 0;
      uStack_2c8 = 0;
      uStack_2cc = 0;
      uStack_2cd = 0;
      local_2ce = 0;
      local_2c6 = 0;
      local_2c0 = 0;
      uStack_2c1 = 0;
      uStack_2c2 = 0;
      uStack_2c3 = 0;
      local_2c4 = 0;
      local_2bc = 2;
      local_2b0 = 0xffffffff;
      local_2b8 = 0xffffffffffffffff;
      local_180[0] = 0;
      uStack_184 = 0;
      local_188 = 0;
      local_288[0] = 0;
      local_298 = 0;
      local_28c = 0;
      local_290 = 0;
      local_2a8 = (ulong *)0x0;
      local_2a0 = (ulong *)0x0;
      local_310 = (long ***)CONCAT44(*(undefined4 *)(lVar32 + 0xc),*(undefined4 *)(lVar32 + 0x10));
      local_300 = FUN_71001b0960((ulong *)(lVar32 + 0x18));
      local_2f8 = FUN_71001b0960((ulong *)(lVar32 + 0x20));
      local_308 = *(undefined4 *)(lVar32 + 0x58);
      local_2f0 = FUN_7101722330(lVar37,"melee_kind");
      uVar14 = FUN_7101722330(lVar37,"melee_rule");
      local_2ec = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"time_sec");
      local_2e6 = (undefined2)uVar14;
      uVar14 = FUN_7101722330(lVar37,"stock");
      local_2e4 = CONCAT71(local_2e4._1_7_,(char)uVar14);
      iVar15 = FUN_7101722330(lVar37,"hp");
      uVar21 = 0;
      if (10 < iVar15) {
        if (iVar15 < 0x1f) {
          uVar21 = 1;
        }
        else if (iVar15 < 0x33) {
          uVar21 = 2;
        }
        else if (iVar15 < 0x51) {
          uVar21 = 3;
        }
        else if (iVar15 < 0x65) {
          uVar21 = 4;
        }
        else {
          uVar21 = 5;
          if (0x96 < iVar15) {
            if (iVar15 < 0xc9) {
              uVar21 = 6;
            }
            else if (iVar15 < 0xfb) {
              uVar21 = 7;
            }
            else if (iVar15 < 0x12d) {
              uVar21 = 8;
            }
            else {
              uVar21 = 9;
              if ((500 < iVar15) && (uVar21 = 10, 0x2ee < iVar15)) {
                uVar21 = 0xb;
              }
            }
          }
        }
      }
      local_2e4._0_2_ = CONCAT11(uVar21,(undefined1)local_2e4);
      iVar15 = FUN_7101722330(lVar25,"spirits");
      local_2e4._0_4_ = CONCAT13(iVar15 != 0,(uint3)local_2e4);
      uVar14 = FUN_7101722330(lVar37,"defence_reaction");
      local_2dc = CONCAT31(local_2dc._1_3_,(char)uVar14);
      iVar15 = FUN_7101722330(lVar37,"charge");
      local_2dc._0_2_ = CONCAT11(iVar15 != 0,(undefined1)local_2dc);
      iVar15 = FUN_7101722330(lVar37,"stage_gimmick");
      uVar8 = local_2e4;
      local_2e4._0_6_ = (uint6)(uint5)local_2e4;
      local_2e4._0_2_ = (ushort)uVar8;
      local_2e4._0_3_ = (uint3)(ushort)local_2e4;
      local_2d8 = local_2d8 & 0xff;
      local_2e4 = local_2e4 & 0xffffffffffffff;
      local_2dc = CONCAT13(iVar15 != 0,(undefined3)local_2dc) & 0xff00ffff;
      uVar7 = (uint3)_local_2d6;
      _local_2d6 = CONCAT13(1,uVar7 & 0xff);
      iVar15 = FUN_7101722330(lVar37,"is_suddendeath");
      local_2d0 = CONCAT11(local_2d0._1_1_,iVar15 != 0);
      iVar15 = FUN_7101722330(lVar37,"scaledown_stage");
      local_2d0 = CONCAT11(iVar15 != 0,(undefined1)local_2d0);
      iVar15 = FUN_7101722330(lVar37,"drop_bomb");
      local_2ce = iVar15 != 0;
      uVar14 = FUN_7101722330(lVar37,"speed");
      uStack_2c7 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"camera");
      local_2c6 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"body_size");
      local_2c4 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"head_option");
      uStack_2c3 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"body_option");
      uStack_2c2 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"state_option");
      uStack_2c1 = (undefined1)uVar14;
      uVar14 = FUN_7101722330(lVar37,"weight");
      local_2c0 = (undefined1)uVar14;
      uStack_2cd = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uVar14 = FUN_7101722330(lVar37,"item_appear");
      local_2bc = (undefined1)uVar14;
      local_2b0 = 0;
      local_2b8 = 0;
      FUN_71017224b0(lVar18,"item_flags",&local_80,param_4,param_5,param_6,param_7,param_8);
      ppplVar16 = local_78;
      if (local_80 != local_78) {
        uVar24 = (long)local_78 + (-4 - (long)local_80);
        ppplVar27 = local_80;
        if (((uint)uVar24 >> 2 & 1) == 0) {
          ppplVar27 = (long ***)((long)local_80 + 4);
          uVar46 = (ulong)(*(uint *)local_80 >> 3) & 0x1ffffffc;
          *(uint *)((long)&local_2b8 + uVar46) =
               1 << (ulong)(*(uint *)local_80 & 0x1f) | *(uint *)((long)&local_2b8 + uVar46);
        }
        if (3 < uVar24) {
          do {
            uVar24 = (ulong)(*(uint *)ppplVar27 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_2b8 + uVar24) =
                 1 << (ulong)(*(uint *)ppplVar27 & 0x1f) | *(uint *)((long)&local_2b8 + uVar24);
            puVar1 = (uint *)((long)ppplVar27 + 4);
            ppplVar27 = ppplVar27 + 1;
            uVar24 = (ulong)(*puVar1 >> 3) & 0x1ffffffc;
            *(uint *)((long)&local_2b8 + uVar24) =
                 1 << (ulong)(*puVar1 & 0x1f) | *(uint *)((long)&local_2b8 + uVar24);
          } while (ppplVar27 != ppplVar16);
        }
      }
      pppplVar19 = &local_80;
      FUN_71017224b0(lVar18,"prize_type",pppplVar19,param_4,param_5,param_6,param_7,param_8);
      if (local_80 != local_78) {
        uVar46 = (long)local_78 - (long)local_80;
        local_410 = 0;
        local_408 = 0;
        lVar42 = (long)local_2a0 - (long)local_2a8 >> 3;
        uVar53 = lVar42 * -0x5555555555555555;
        uVar49 = (long)uVar46 >> 2;
        uVar24 = uVar49 + lVar42 * 0x5555555555555555;
        local_418 = (long ***)0x0;
        if (uVar49 < uVar53 || uVar24 == 0) {
          if (uVar49 < uVar53) {
            local_2a0 = local_2a8 + uVar49 * 3;
          }
        }
        else {
          if ((ulong)((local_298 - (long)local_2a0 >> 3) * -0x5555555555555555) < uVar24) {
            uVar46 = 0xaaaaaaaaaaaaaaa;
            if (0xaaaaaaaaaaaaaaa < uVar49) {
LAB_7101721f00:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar29 = local_298 - (long)local_2a8 >> 3;
            if ((ulong)(lVar29 * -0x5555555555555555) < 0x555555555555555) {
              uVar28 = lVar29 * 0x5555555555555556;
              uVar46 = uVar49;
              if (uVar49 <= uVar28) {
                uVar46 = uVar28;
              }
              if (uVar46 != 0) goto LAB_7101721130;
              uVar46 = 0;
              lVar29 = 0;
            }
            else {
LAB_7101721130:
              ppplVar16 = (long ***)(uVar46 * 0x18);
              if (ppplVar16 == (long ***)0x0) {
                ppplVar16 = (long ***)0x1;
              }
              lVar29 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,
                                      param_8);
              if (lVar29 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_548[0] = (undefined **)((ulong)local_548[0] & 0xffffffff00000000);
                  pppplVar19 = &local_520;
                  local_520 = ppplVar16;
                  uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_548);
                  if (((uVar28 & 1) != 0) &&
                     (lVar29 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,
                                              param_7,param_8), lVar29 != 0)) goto LAB_7101721198;
                }
                lVar29 = 0;
              }
            }
LAB_7101721198:
            puVar9 = local_2a8;
            puVar30 = (ulong *)(lVar29 + lVar42 * 8);
            uVar36 = uVar24 - 1;
            uVar28 = uVar24 & 3;
            puVar50 = puVar30;
            if (uVar28 != 0) {
              lVar42 = -uVar28;
              do {
                puVar50[1] = local_410;
                puVar50[2] = local_408;
                lVar42 = lVar42 + 1;
                *puVar50 = (ulong)local_418;
                puVar50 = puVar50 + 3;
              } while (lVar42 != 0);
              uVar24 = uVar24 - uVar28;
              puVar50 = (ulong *)(lVar29 + (uVar53 + uVar28) * 0x18);
            }
            if (2 < uVar36) {
              do {
                puVar50[1] = local_410;
                puVar50[2] = local_408;
                *puVar50 = (ulong)local_418;
                puVar50[4] = local_410;
                puVar50[5] = local_408;
                puVar50[3] = (ulong)local_418;
                puVar50[7] = local_410;
                puVar50[8] = local_408;
                puVar50[6] = (ulong)local_418;
                puVar50[10] = local_410;
                puVar50[0xb] = local_408;
                puVar50[9] = (ulong)local_418;
                uVar24 = uVar24 - 4;
                puVar50 = puVar50 + 0xc;
              } while (uVar24 != 0);
            }
            puVar50 = (ulong *)(lVar29 + uVar49 * 0x18);
            sVar20 = (long)local_2a0 - (long)local_2a8;
            lVar42 = SUB168(SEXT816((long)sVar20) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            lVar29 = lVar29 + uVar46 * 0x18;
            puVar30 = puVar30 + ((lVar42 >> 2) - (lVar42 >> 0x3f)) * 3;
            if (0 < (long)sVar20) {
              memcpy(puVar30,local_2a8,sVar20);
            }
            local_2a8 = puVar30;
            local_2a0 = puVar50;
            local_298 = lVar29;
            if (puVar9 != (ulong *)0x0) {
              FUN_710392eb40((ulong)puVar9);
            }
          }
          else {
            uVar46 = uVar24;
            if ((uVar24 & 1) != 0) {
              local_2a0[1] = 0;
              local_2a0[2] = 0;
              *local_2a0 = 0;
              local_2a0 = local_2a0 + 3;
              uVar46 = uVar24 - 1;
            }
            if (uVar24 != 1) {
              do {
                local_2a0[1] = 0;
                local_2a0[2] = 0;
                *local_2a0 = 0;
                local_2a0[4] = 0;
                local_2a0[5] = 0;
                local_2a0[3] = 0;
                local_2a0 = local_2a0 + 6;
                uVar46 = uVar46 - 2;
              } while (uVar46 != 0);
            }
          }
          uVar46 = (long)local_78 - (long)local_80;
        }
        iVar15 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 3) * -0x55555555;
        iVar31 = (int)(uVar46 >> 2);
        if (iVar31 <= iVar15) {
          iVar15 = iVar31;
        }
        if (0 < iVar15) {
          if (local_2a0 == local_2a8) goto LAB_7101721ee0;
          lVar42 = 0;
          uVar24 = 0;
          while( true ) {
            *(int *)((long)local_2a8 + lVar42) = (int)uVar24;
            if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
            lVar29 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)((long)local_2a8 + lVar42 + 4) = *(uint *)((long)local_80 + lVar29);
            if ((long)iVar15 <= (long)uVar24) break;
            uVar46 = ((long)local_2a0 - (long)local_2a8 >> 3) * -0x5555555555555555;
            lVar42 = lVar42 + 0x18;
            if (uVar46 < uVar24 || uVar46 - uVar24 == 0) goto LAB_7101721ee0;
          }
        }
      }
      uVar44 = 0x811c9dc5;
      FUN_71017224b0(lVar18,"prize_index",&local_80,param_4,param_5,param_6,param_7,param_8);
      if (local_80 != local_78) {
        iVar15 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 3) * -0x55555555;
        iVar31 = (int)((ulong)((long)local_78 - (long)local_80) >> 2);
        if (iVar31 <= iVar15) {
          iVar15 = iVar31;
        }
        if (0 < iVar15) {
          if (local_2a0 == local_2a8) goto LAB_7101721ee0;
          uVar24 = 0;
          lVar42 = 8;
          while( true ) {
            if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
            lVar29 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)((long)local_2a8 + lVar42) = *(uint *)((long)local_80 + lVar29);
            if ((long)iVar15 <= (long)uVar24) break;
            uVar46 = ((long)local_2a0 - (long)local_2a8 >> 3) * -0x5555555555555555;
            if (uVar46 < uVar24 || uVar46 - uVar24 == 0) goto LAB_7101721ee0;
            lVar42 = lVar42 + 0x18;
          }
        }
      }
      FUN_71017224b0(lVar18,"prize_value",&local_80,param_4,param_5,param_6,param_7,param_8);
      if (local_80 != local_78) {
        iVar15 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 3) * -0x55555555;
        iVar31 = (int)((ulong)((long)local_78 - (long)local_80) >> 2);
        if (iVar31 <= iVar15) {
          iVar15 = iVar31;
        }
        if (0 < iVar15) {
          if (local_2a0 == local_2a8) goto LAB_7101721ee0;
          uVar24 = 0;
          lVar42 = 0xc;
          while( true ) {
            if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
            lVar29 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)((long)local_2a8 + lVar42) = *(uint *)((long)local_80 + lVar29);
            if ((long)iVar15 <= (long)uVar24) break;
            uVar46 = ((long)local_2a0 - (long)local_2a8 >> 3) * -0x5555555555555555;
            if (uVar46 < uVar24 || uVar46 - uVar24 == 0) goto LAB_7101721ee0;
            lVar42 = lVar42 + 0x18;
          }
        }
      }
      FUN_71017224b0(lVar18,"prize_param0",&local_80,param_4,param_5,param_6,param_7,param_8);
      if (local_80 != local_78) {
        iVar15 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 3) * -0x55555555;
        iVar31 = (int)((ulong)((long)local_78 - (long)local_80) >> 2);
        if (iVar31 <= iVar15) {
          iVar15 = iVar31;
        }
        if (0 < iVar15) {
          if (local_2a0 == local_2a8) goto LAB_7101721ee0;
          uVar24 = 0;
          lVar42 = 0x10;
          while( true ) {
            if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
            lVar29 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)((long)local_2a8 + lVar42) = *(uint *)((long)local_80 + lVar29);
            if ((long)iVar15 <= (long)uVar24) break;
            uVar46 = ((long)local_2a0 - (long)local_2a8 >> 3) * -0x5555555555555555;
            if (uVar46 < uVar24 || uVar46 - uVar24 == 0) goto LAB_7101721ee0;
            lVar42 = lVar42 + 0x18;
          }
        }
      }
      FUN_71017224b0(lVar18,"prize_param1",&local_80,param_4,param_5,param_6,param_7,param_8);
      if (local_80 != local_78) {
        iVar15 = (int)((ulong)((long)local_2a0 - (long)local_2a8) >> 3) * -0x55555555;
        iVar31 = (int)((ulong)((long)local_78 - (long)local_80) >> 2);
        if (iVar31 <= iVar15) {
          iVar15 = iVar31;
        }
        if (0 < iVar15) {
          if (local_2a0 == local_2a8) {
LAB_7101721ee0:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar24 = 0;
          lVar18 = 0x14;
          while( true ) {
            if ((ulong)((long)local_78 - (long)local_80 >> 2) <= uVar24) goto LAB_7101721ed8;
            lVar42 = uVar24 * 4;
            uVar24 = uVar24 + 1;
            *(uint *)((long)local_2a8 + lVar18) = *(uint *)((long)local_80 + lVar42);
            if ((long)iVar15 <= (long)uVar24) break;
            uVar46 = ((long)local_2a0 - (long)local_2a8 >> 3) * -0x5555555555555555;
            if (uVar46 < uVar24 || uVar46 - uVar24 == 0) goto LAB_7101721ee0;
            lVar18 = lVar18 + 0x18;
          }
        }
      }
      FUN_71017251e0(local_548,lVar37,"url1");
      if (local_530 == 0) {
        uVar24 = 0;
      }
      else {
        uVar46 = 0;
        do {
          pbVar26 = (byte *)(local_530 + uVar46);
          uVar24 = uVar46;
          if (*pbVar26 == 0) break;
          local_518[uVar46] = *pbVar26;
          if (pbVar26[1] == 0) {
            uVar24 = uVar46 + 1;
            break;
          }
          local_518[uVar46 + 1] = pbVar26[1];
          if (pbVar26[2] == 0) {
            uVar24 = uVar46 + 2;
            break;
          }
          uVar24 = uVar46 + 3;
          local_518[uVar46 + 2] = pbVar26[2];
          uVar46 = uVar24;
        } while ((uint)uVar24 < 0xff);
      }
      local_518[uVar24 & 0xffffffff] = 0;
      uVar22 = (uint)local_518[0];
      pbVar26 = local_518 + 1;
      uVar23 = uVar44;
      if (local_518[0] != 0) {
        do {
          uVar23 = uVar23 * 0x89 ^ uVar22;
          uVar22 = (uint)*pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (uVar22 != 0);
      }
      local_520 = (long ***)CONCAT44((int)uVar24,uVar23);
      FUN_7101762560((uint *)&local_418,(long)&local_520);
      uVar24 = 0;
      do {
        uVar46 = uVar24;
        if (*(byte *)((long)&local_410 + uVar24) == 0) break;
        local_288[uVar24] = *(byte *)((long)&local_410 + uVar24);
        bVar4 = *(byte *)((long)&local_410 + uVar24 + 1);
        if (bVar4 == 0) {
          uVar46 = uVar24 + 1;
          break;
        }
        bVar5 = *(byte *)((long)&local_410 + uVar24 + 2);
        local_288[uVar24 + 1] = bVar4;
        if (bVar5 == 0) {
          uVar46 = uVar24 + 2;
          break;
        }
        uVar46 = uVar24 + 3;
        local_288[uVar24 + 2] = bVar5;
        uVar24 = uVar46;
      } while ((uint)uVar46 < 0xff);
      local_288[uVar46 & 0xffffffff] = 0;
      local_28c = (undefined4)uVar46;
      uVar23 = (uint)local_288[0];
      local_290 = uVar44;
      pbVar26 = local_288;
      if (local_288[0] != 0) {
        do {
          local_290 = local_290 * 0x89 ^ uVar23;
          uVar23 = (uint)pbVar26[1];
          pbVar26 = pbVar26 + 1;
        } while (uVar23 != 0);
      }
      local_548[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_548);
      pppplVar19 = (long ****)&DAT_710439caa3;
      FUN_71017251e0(local_548,lVar37,"url2");
      if (local_530 == 0) {
        uVar24 = 0;
      }
      else {
        uVar46 = 0;
        do {
          pbVar26 = (byte *)(local_530 + uVar46);
          uVar24 = uVar46;
          if (*pbVar26 == 0) break;
          local_518[uVar46] = *pbVar26;
          if (pbVar26[1] == 0) {
            uVar24 = uVar46 + 1;
            break;
          }
          local_518[uVar46 + 1] = pbVar26[1];
          if (pbVar26[2] == 0) {
            uVar24 = uVar46 + 2;
            break;
          }
          uVar24 = uVar46 + 3;
          local_518[uVar46 + 2] = pbVar26[2];
          uVar46 = uVar24;
        } while ((uint)uVar24 < 0xff);
      }
      local_518[uVar24 & 0xffffffff] = 0;
      uVar22 = (uint)local_518[0];
      pbVar26 = local_518 + 1;
      uVar23 = uVar44;
      if (local_518[0] != 0) {
        do {
          uVar23 = uVar23 * 0x89 ^ uVar22;
          uVar22 = (uint)*pbVar26;
          pbVar26 = pbVar26 + 1;
        } while (uVar22 != 0);
      }
      local_520 = (long ***)CONCAT44((int)uVar24,uVar23);
      FUN_7101762560((uint *)&local_418,(long)&local_520);
      uVar24 = 0;
      do {
        uVar46 = uVar24;
        if (*(byte *)((long)&local_410 + uVar24) == 0) break;
        local_180[uVar24] = *(byte *)((long)&local_410 + uVar24);
        bVar4 = *(byte *)((long)&local_410 + uVar24 + 1);
        if (bVar4 == 0) {
          uVar46 = uVar24 + 1;
          break;
        }
        bVar5 = *(byte *)((long)&local_410 + uVar24 + 2);
        local_180[uVar24 + 1] = bVar4;
        if (bVar5 == 0) {
          uVar46 = uVar24 + 2;
          break;
        }
        uVar46 = uVar24 + 3;
        local_180[uVar24 + 2] = bVar5;
        uVar24 = uVar46;
      } while ((uint)uVar46 < 0xff);
      local_180[uVar46 & 0xffffffff] = 0;
      uStack_184 = (undefined4)uVar46;
      uVar23 = (uint)local_180[0];
      pbVar26 = local_180;
      if (local_180[0] != 0) {
        do {
          uVar44 = uVar44 * 0x89 ^ uVar23;
          uVar23 = (uint)pbVar26[1];
          pbVar26 = pbVar26 + 1;
        } while (uVar23 != 0);
      }
      local_548[0] = &PTR_FUN_710509cc08;
      local_188 = uVar44;
      FUN_71001b4910((long)local_548);
      ppplVar16 = param_3[0x33];
      if (ppplVar16 == param_3[0x34]) {
        ppplVar27 = param_3[0x32];
        lVar18 = (long)ppplVar16 - (long)ppplVar27 >> 4;
        uVar46 = 0x63e7063e7063e7;
        uVar24 = lVar18 * -0x7063e7063e7063e7 + 1;
        if (0x63e7063e7063e7 < uVar24) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar37 = (long)param_3[0x34] - (long)ppplVar27 >> 4;
        if ((ulong)(lVar37 * -0x7063e7063e7063e7) < 0x31f3831f3831f3) {
          uVar49 = lVar37 * 0x1f3831f3831f3832;
          uVar46 = uVar24;
          if (uVar24 <= uVar49) {
            uVar46 = uVar49;
          }
          if (uVar46 != 0) goto LAB_7101721a14;
LAB_7101721a70:
          lVar37 = 0;
        }
        else {
LAB_7101721a14:
          ppplVar16 = (long ***)(uVar46 * 0x290);
          if (ppplVar16 == (long ***)0x0) {
            ppplVar16 = (long ***)0x1;
          }
          lVar37 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,param_8)
          ;
          if (lVar37 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_520 = (long ***)((ulong)local_520 & 0xffffffff00000000);
              pppplVar19 = (long ****)&local_418;
              local_418 = ppplVar16;
              uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_520);
              if (((uVar24 & 1) != 0) &&
                 (lVar37 = FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,param_7,
                                          param_8), lVar37 != 0)) goto LAB_7101721a74;
            }
            goto LAB_7101721a70;
          }
        }
LAB_7101721a74:
        ppplVar51 = (long ***)(lVar37 + lVar18 * 0x10);
        FUN_7101684800(ppplVar51,&local_310,pppplVar19,param_4,param_5,param_6,param_7,param_8);
        ppplVar27 = param_3[0x32];
        ppplVar47 = param_3[0x33];
        ppplVar16 = ppplVar51 + 0x52;
        ppplVar45 = ppplVar27;
        if (ppplVar47 != ppplVar27) {
          do {
            ppplVar51 = ppplVar51 + -0x52;
            ppplVar47 = ppplVar47 + -0x52;
            FUN_7101684800(ppplVar51,ppplVar47,pppplVar19,param_4,param_5,param_6,param_7,param_8);
          } while (ppplVar27 != ppplVar47);
          ppplVar27 = param_3[0x32];
          ppplVar45 = param_3[0x33];
        }
        param_3[0x32] = ppplVar51;
        param_3[0x33] = ppplVar16;
        param_3[0x34] = (long ***)(lVar37 + uVar46 * 0x290);
        while (ppplVar16 = ppplVar45, ppplVar16 != ppplVar27) {
          pplVar17 = ppplVar16[-0x45];
          ppplVar45 = ppplVar16 + -0x52;
          if (pplVar17 != (long **)0x0) {
            ppplVar16[-0x44] = pplVar17;
            FUN_710392eb40((ulong)pplVar17);
          }
        }
        if (ppplVar27 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar27);
        }
      }
      else {
        FUN_7101684800(ppplVar16,&local_310,pppplVar19,param_4,param_5,param_6,param_7,param_8);
        param_3[0x33] = param_3[0x33] + 0x52;
      }
      if (local_2a8 != (ulong *)0x0) {
        local_2a0 = local_2a8;
        FUN_710392eb40((ulong)local_2a8);
      }
      lVar32 = lVar32 + 0x60;
    } while (lVar32 != lVar48);
  }
  uVar44 = 0x811c9dc5;
  FUN_7101722840(param_3[0x32],param_3[0x33]);
  uVar23 = FUN_7101722330(lVar25,"tournament_entry_max_seconds");
  uVar3 = 0x3c;
  if ((uVar23 & 0xffff) != 0) {
    uVar3 = (short)uVar23;
  }
  *(undefined2 *)(param_3 + 0x35) = uVar3;
  iVar15 = FUN_7101722330(lVar25,"competition_aggregate_at");
  param_3[0x36] = (long ***)(long)iVar15;
  if (iVar15 == 0) {
    param_3[0x36] = param_3[0x27];
  }
  FUN_71017251e0(&local_520,lVar25,"url1");
  if (local_508 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    while( true ) {
      cVar6 = *(char *)(local_508 + uVar24);
      if (cVar6 == '\0') break;
      *(char *)((long)&local_410 + uVar24) = cVar6;
      if (0xfe < (int)uVar24 + 1U) {
        uVar24 = (ulong)((int)uVar24 + 1);
        break;
      }
      cVar6 = ((char *)(local_508 + uVar24))[1];
      if (cVar6 == '\0') {
        uVar24 = uVar24 + 1;
        break;
      }
      *(char *)((long)&local_410 + uVar24 + 1) = cVar6;
      uVar24 = uVar24 + 2;
    }
  }
  *(undefined1 *)((long)&local_410 + (uVar24 & 0xffffffff)) = 0;
  local_418 = (long ***)(uVar24 << 0x20);
  uVar22 = (uint)(byte)local_410;
  uVar23 = uVar44;
  if ((byte)local_410 != 0) {
    pbVar26 = (byte *)((long)&local_410 + 1);
    do {
      uVar23 = uVar23 * 0x89 ^ uVar22;
      uVar22 = (uint)*pbVar26;
      pbVar26 = pbVar26 + 1;
    } while (uVar22 != 0);
  }
  local_418 = (long ***)CONCAT44((int)uVar24,uVar23);
  FUN_7101762560((uint *)&local_310,(long)&local_418);
  if (param_3 + 0x37 != (long ****)&local_310) {
    for (uVar24 = 0; *(char *)((long)&local_308 + uVar24) != '\0'; uVar24 = uVar24 + 2) {
      *(char *)((long)param_3 + uVar24 + 0x1c0) = *(char *)((long)&local_308 + uVar24);
      if (0xfe < (int)uVar24 + 1U) {
        uVar24 = (ulong)((int)uVar24 + 1);
        break;
      }
      cVar6 = *(char *)((long)&local_308 + uVar24 + 1);
      if (cVar6 == '\0') {
        uVar24 = uVar24 + 1;
        break;
      }
      *(char *)((long)param_3 + uVar24 + 0x1c1) = cVar6;
    }
    *(undefined1 *)((long)param_3 + (uVar24 & 0xffffffff) + 0x1c0) = 0;
    *(int *)((long)param_3 + 0x1bc) = (int)uVar24;
    uVar22 = (uint)*(byte *)(param_3 + 0x38);
    uVar23 = uVar44;
    if (*(byte *)(param_3 + 0x38) != 0) {
      pbVar26 = (byte *)((long)param_3 + 0x1c1);
      do {
        uVar23 = uVar23 * 0x89 ^ uVar22;
        uVar22 = (uint)*pbVar26;
        pbVar26 = pbVar26 + 1;
      } while (uVar22 != 0);
    }
    *(uint *)(param_3 + 0x37) = uVar23;
  }
  local_520 = (long ***)&PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_520);
  FUN_71017251e0(&local_520,lVar25,"url2");
  if (local_508 == 0) {
    uVar24 = 0;
  }
  else {
    uVar24 = 0;
    while( true ) {
      cVar6 = *(char *)(local_508 + uVar24);
      if (cVar6 == '\0') break;
      *(char *)((long)&local_410 + uVar24) = cVar6;
      if (0xfe < (int)uVar24 + 1U) {
        uVar24 = (ulong)((int)uVar24 + 1);
        break;
      }
      cVar6 = ((char *)(local_508 + uVar24))[1];
      if (cVar6 == '\0') {
        uVar24 = uVar24 + 1;
        break;
      }
      *(char *)((long)&local_410 + uVar24 + 1) = cVar6;
      uVar24 = uVar24 + 2;
    }
  }
  *(undefined1 *)((long)&local_410 + (uVar24 & 0xffffffff)) = 0;
  local_418 = (long ***)(uVar24 << 0x20);
  uVar22 = (uint)(byte)local_410;
  uVar23 = uVar44;
  if ((byte)local_410 != 0) {
    pbVar26 = (byte *)((long)&local_410 + 1);
    do {
      uVar23 = uVar23 * 0x89 ^ uVar22;
      uVar22 = (uint)*pbVar26;
      pbVar26 = pbVar26 + 1;
    } while (uVar22 != 0);
  }
  local_418 = (long ***)CONCAT44((int)uVar24,uVar23);
  FUN_7101762560((uint *)&local_310,(long)&local_418);
  if (param_3 + 0x58 != (long ****)&local_310) {
    for (uVar24 = 0; *(char *)((long)&local_308 + uVar24) != '\0'; uVar24 = uVar24 + 2) {
      *(char *)((long)param_3 + uVar24 + 0x2c8) = *(char *)((long)&local_308 + uVar24);
      if (0xfe < (int)uVar24 + 1U) {
        uVar24 = (ulong)((int)uVar24 + 1);
        break;
      }
      cVar6 = *(char *)((long)&local_308 + uVar24 + 1);
      if (cVar6 == '\0') {
        uVar24 = uVar24 + 1;
        break;
      }
      *(char *)((long)param_3 + uVar24 + 0x2c9) = cVar6;
    }
    *(undefined1 *)((long)param_3 + (uVar24 & 0xffffffff) + 0x2c8) = 0;
    uVar23 = (uint)*(byte *)(param_3 + 0x59);
    *(int *)((long)param_3 + 0x2c4) = (int)uVar24;
    if (*(byte *)(param_3 + 0x59) != 0) {
      pbVar26 = (byte *)((long)param_3 + 0x2c9);
      do {
        uVar44 = uVar44 * 0x89 ^ uVar23;
        uVar23 = (uint)*pbVar26;
        pbVar26 = pbVar26 + 1;
      } while (uVar23 != 0);
    }
    *(uint *)(param_3 + 0x58) = uVar44;
  }
  local_520 = (long ***)&PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_520);
  iVar15 = FUN_7101722330(lVar25,"birthday_mustbeafter");
  param_3[0x79] = (long ***)(long)iVar15;
  iVar15 = FUN_7101722330(lVar25,"birthday_mustbebefore");
  param_3[0x7a] = (long ***)(long)iVar15;
  if (local_80 != (long ***)0x0) {
    local_78 = local_80;
    FUN_710392eb40((ulong)local_80);
  }
  return 1;
}

