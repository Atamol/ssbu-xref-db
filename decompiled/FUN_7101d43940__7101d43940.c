// addr:      7101d43940
// offset:    0x1d43940
// name:      FUN_7101d43940
// mangled:   
// signature: undefined __cdecl FUN_7101d43940(long * * * * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d43940(long ****param_1)

{
  uint *puVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long **pplVar8;
  byte ****ppppbVar9;
  undefined3 *puVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  undefined8 *puVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****in_x4;
  long ****pppplVar19;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined3 uVar20;
  uint uVar21;
  long lVar22;
  long **pplVar23;
  char *pcVar24;
  long ********pppppppplVar25;
  long *plVar26;
  byte **ppbVar27;
  code *pcVar28;
  long *plVar29;
  long lVar30;
  byte *pbVar31;
  long *plVar32;
  int iVar33;
  ulong uVar34;
  byte *pbVar35;
  int iVar36;
  long lVar37;
  ushort uVar38;
  uint uVar39;
  long ***ppplVar40;
  long ***ppplVar41;
  long ***ppplVar42;
  long *********ppppppppplVar43;
  long ****__n;
  long *********ppppppppplVar44;
  undefined **local_470;
  ulong local_468;
  byte ***local_460;
  long ****local_458;
  byte ****local_440;
  long alStack_430 [4];
  long *local_410;
  long alStack_400 [4];
  long *local_3e0;
  long alStack_3d0 [4];
  long *local_3b0;
  long alStack_3a0 [4];
  long *local_380;
  long alStack_370 [4];
  long *local_350;
  byte ***local_330;
  ulong local_328;
  undefined4 local_314;
  byte ****local_310;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  undefined8 local_200;
  long *local_1f8;
  uint6 local_1f0;
  undefined2 uStack_1ea;
  undefined8 local_1e8;
  uint local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  undefined4 local_e0;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  long ***local_b0;
  long ***local_a8;
  long ****local_90;
  long ****local_68;
  
  pppplVar2 = param_1 + 0x2c;
  FUN_71032cbf30(pppplVar2,(long)*param_1[0x2b],(ulong *)&DAT_7104545640,(byte ****)0x1,in_x4,in_x5,
                 in_x6,in_x7);
  pppplVar19 = param_1 + 0x2d;
  FUN_71032cbf30(pppplVar19,(long)*param_1[0x2b],(ulong *)&DAT_7104545648,(byte ****)0x1,in_x4,in_x5
                 ,in_x6,in_x7);
  pppplVar15 = param_1 + 0x2e;
  FUN_71032cbf30(pppplVar15,(long)*param_1[0x2b],(ulong *)&DAT_7104545650,(byte ****)0x1,in_x4,in_x5
                 ,in_x6,in_x7);
  pppplVar3 = param_1 + 0x2f;
  pppplVar14 = (long ****)&DAT_7104545658;
  ppppbVar17 = (byte ****)0x1;
  FUN_71032cbf30(pppplVar3,(long)*param_1[0x2b],(ulong *)&DAT_7104545658,(byte ****)0x1,in_x4,in_x5,
                 in_x6,in_x7);
  plVar29 = **param_1[0x2c];
  *(undefined4 *)(plVar29[0xc0] + 0x494) = 0;
  lVar22 = plVar29[0xc1];
  lVar30 = plVar29[0xc2];
  if (lVar22 != lVar30) {
    uVar34 = (lVar30 + -0x10) - lVar22;
    uVar39 = ((uint)(uVar34 >> 4) & 0xfffffff) + 1;
    if ((uVar39 & 3) != 0) {
      lVar37 = -((ulong)uVar39 & 3);
      do {
        plVar29 = (long *)(lVar22 + 8);
        lVar22 = lVar22 + 0x10;
        lVar37 = lVar37 + 1;
        *(undefined4 *)(*plVar29 + 0x494) = 0;
      } while (lVar37 != 0);
    }
    if (0x2f < uVar34) {
      do {
        *(undefined4 *)(*(long *)(lVar22 + 8) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar22 + 0x28) + 0x494) = 0;
        plVar29 = (long *)(lVar22 + 0x38);
        lVar22 = lVar22 + 0x40;
        *(undefined4 *)(*plVar29 + 0x494) = 0;
      } while (lVar30 != lVar22);
    }
  }
  plVar29 = ***pppplVar19;
  *(undefined4 *)(plVar29[0xc0] + 0x494) = 1;
  lVar22 = plVar29[0xc1];
  lVar30 = plVar29[0xc2];
  if (lVar22 != lVar30) {
    uVar34 = (lVar30 + -0x10) - lVar22;
    uVar39 = ((uint)(uVar34 >> 4) & 0xfffffff) + 1;
    if ((uVar39 & 3) != 0) {
      lVar37 = -((ulong)uVar39 & 3);
      do {
        plVar29 = (long *)(lVar22 + 8);
        lVar22 = lVar22 + 0x10;
        lVar37 = lVar37 + 1;
        *(undefined4 *)(*plVar29 + 0x494) = 1;
      } while (lVar37 != 0);
    }
    if (0x2f < uVar34) {
      do {
        *(undefined4 *)(*(long *)(lVar22 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar22 + 0x28) + 0x494) = 1;
        plVar29 = (long *)(lVar22 + 0x38);
        lVar22 = lVar22 + 0x40;
        *(undefined4 *)(*plVar29 + 0x494) = 1;
      } while (lVar30 != lVar22);
    }
  }
  plVar29 = ***pppplVar15;
  *(undefined4 *)(plVar29[0xc0] + 0x494) = 1;
  lVar22 = plVar29[0xc1];
  lVar30 = plVar29[0xc2];
  if (lVar22 != lVar30) {
    uVar34 = (lVar30 + -0x10) - lVar22;
    uVar39 = ((uint)(uVar34 >> 4) & 0xfffffff) + 1;
    if ((uVar39 & 3) != 0) {
      lVar37 = -((ulong)uVar39 & 3);
      do {
        plVar29 = (long *)(lVar22 + 8);
        lVar22 = lVar22 + 0x10;
        lVar37 = lVar37 + 1;
        *(undefined4 *)(*plVar29 + 0x494) = 1;
      } while (lVar37 != 0);
    }
    if (0x2f < uVar34) {
      do {
        *(undefined4 *)(*(long *)(lVar22 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar22 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar22 + 0x28) + 0x494) = 1;
        plVar29 = (long *)(lVar22 + 0x38);
        lVar22 = lVar22 + 0x40;
        *(undefined4 *)(*plVar29 + 0x494) = 1;
      } while (lVar30 != lVar22);
    }
  }
  FUN_71037760f0((long)***pppplVar3,0);
  pplVar23 = **pppplVar2;
  FUN_7103776640(&local_c0,(long)(**pppplVar3 + 1),(byte ****)"set_parts_oppo_tag",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  uVar34 = local_b8;
  FUN_7103778300(0x3f800000,local_b8,0x71043ad2ed);
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar34 != 0) {
    uVar7 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar34);
  }
  FUN_7103776640(&local_200,(long)(**pppplVar2 + 1),(byte ****)"set_parts_btn_00",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  FUN_7103778300(0x3f800000,(long)local_1f8,0x7104280d22);
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    uVar34 = *(ulong *)((long)plVar29 + 0x18);
    *(undefined ***)((long)plVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar29 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103776640(&local_200,(long)(**pppplVar2 + 1),(byte ****)"set_parts_btn_01",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  FUN_7103778300(0x3f800000,(long)local_1f8,0x710443344e);
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    uVar34 = *(ulong *)((long)plVar29 + 0x18);
    *(undefined ***)((long)plVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar29 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103776640(&local_200,(long)(**pppplVar2 + 1),(byte ****)"set_parts_btn_02",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  FUN_7103778300(0x3f800000,(long)local_1f8,0x71042c50c0);
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    uVar34 = *(ulong *)((long)plVar29 + 0x18);
    *(undefined ***)((long)plVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar29 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103776640(&local_200,(long)(**pppplVar2 + 1),(byte ****)"set_parts_btn_03",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  FUN_7103778300(0x3f800000,(long)local_1f8,0x71042c50c0);
  local_200 = &PTR_FUN_710523d988;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    uVar34 = *(ulong *)((long)plVar29 + 0x18);
    *(undefined ***)((long)plVar29 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar29 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103776910(&local_200,(long)(**pppplVar2 + 1),(long ****)"lct_oppo_tag_pos",pppplVar14,
                 ppppbVar17,in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  uVar18 = _ConstantZero;
  if (*local_1f8 != 0) {
    uVar18 = *(undefined8 *)(*local_1f8 + 0x30);
  }
  local_200 = &PTR_FUN_710523d9a8;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar29);
  }
  FUN_7103776910(&local_200,(long)(**pppplVar3 + 1),(long ****)"RootPane",pppplVar14,ppppbVar17,
                 in_x4,in_x5,in_x6,in_x7);
  plVar29 = local_1f8;
  lVar22 = *local_1f8;
  if (lVar22 != 0) {
    *(undefined8 *)(lVar22 + 0x30) = uVar18;
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
  }
  local_200 = &PTR_FUN_710523d9a8;
  local_1f8 = (long *)0x0;
  if (plVar29 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar29);
  }
  lVar30 = *(long *)(DAT_710532f730 + 8);
  lVar37 = *(long *)(lVar30 + 0x2e8);
  lVar22 = *(long *)(lVar37 + 8);
  pcVar24 = *(char **)(lVar22 + 0x20);
  if ((*pcVar24 == '\f') && (iVar33 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    uVar34 = *(ulong *)(lVar22 + 0x48) & 0xffffffffff;
    iVar36 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar4 = iVar33 + iVar36;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x28) + (long)*(int *)(pcVar24 + 5) +
                       (long)iVar4 * 8);
      uVar7 = *(ulong *)(*(long *)(*(long *)(lVar22 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar7 == uVar34) {
        uVar39 = puVar1[1];
        if ((int)uVar39 < 0) goto LAB_7101d43ef8;
        pbVar31 = (byte *)(pcVar24 + (int)uVar39);
        break;
      }
      iVar5 = iVar4 + -1;
      if (uVar7 <= uVar34) {
        iVar36 = iVar4 + 1;
        iVar5 = iVar33;
      }
      iVar33 = iVar5;
    } while (iVar36 <= iVar33);
  }
  else {
LAB_7101d43ef8:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar33 = *(int *)(pbVar31 + 1);
    if (0 < iVar33) {
      uVar39 = 0;
      do {
        pplVar8 = (long **)FUN_7103293b70(lVar22,uVar39);
        uVar34 = FUN_7103295040(lVar37,(ulong)pplVar8);
        if ((-1 < (int)uVar34) &&
           ((bVar6 = FUN_7103295270(*(long *)(lVar30 + 0x2e8),(ulong)pplVar8), !bVar6 ||
            (uVar34 = FUN_71017980f0((ulong)pplVar8), (uVar34 & 1) != 0)))) {
          ppplVar41 = param_1[0x3e];
          if (ppplVar41 == param_1[0x3f]) {
            ppplVar42 = param_1[0x3d];
            __n = (long ****)((long)ppplVar41 - (long)ppplVar42);
            lVar22 = (long)__n >> 3;
            uVar34 = lVar22 + 1;
            if (uVar34 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar37 = (long)param_1[0x3f] - (long)ppplVar42;
            if ((ulong)(lVar37 >> 3) < 0xfffffffffffffff) {
              uVar7 = lVar37 >> 2;
              if (uVar34 <= uVar7) {
                uVar34 = uVar7;
              }
              if (uVar34 != 0) {
                if (uVar34 >> 0x3d == 0) goto LAB_7101d43ff0;
                goto LAB_7101d45a1c;
              }
LAB_7101d44050:
              ppplVar41 = (long ***)0x0;
            }
            else {
              uVar34 = 0x1fffffffffffffff;
LAB_7101d43ff0:
              pppppppplVar25 = (long ********)(uVar34 * 8);
              if (pppppppplVar25 == (long ********)0x0) {
                pppppppplVar25 = (long ********)0x1;
              }
              ppplVar41 = (long ***)
                          FUN_710392e290(0x10,pppppppplVar25,pppplVar14,ppppbVar17,in_x4,in_x5,in_x6
                                         ,in_x7);
              if (ppplVar41 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_330 = (byte ***)((ulong)local_330 & 0xffffffff00000000);
                  pppplVar14 = (long ****)&local_200;
                  local_200 = (undefined **)pppppppplVar25;
                  uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
                  if (((uVar7 & 1) != 0) &&
                     (ppplVar41 = (long ***)
                                  FUN_710392e290(0x10,pppppppplVar25,pppplVar14,ppppbVar17,in_x4,
                                                 in_x5,in_x6,in_x7), ppplVar41 != (long ***)0x0))
                  goto LAB_7101d44054;
                }
                goto LAB_7101d44050;
              }
            }
LAB_7101d44054:
            ppplVar41[lVar22] = pplVar8;
            if (0 < (long)__n) {
              memcpy(ppplVar41,ppplVar42,(size_t)__n);
              pppplVar14 = __n;
            }
            param_1[0x3d] = ppplVar41;
            param_1[0x3e] = ppplVar41 + lVar22 + 1;
            param_1[0x3f] = ppplVar41 + uVar34;
            if (ppplVar42 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar42);
            }
          }
          else {
            *ppplVar41 = pplVar8;
            param_1[0x3e] = param_1[0x3e] + 1;
          }
        }
        uVar39 = uVar39 + 1;
        if (iVar33 <= (int)uVar39) break;
        lVar37 = *(long *)(lVar30 + 0x2e8);
        lVar22 = *(long *)(lVar37 + 8);
      } while( true );
    }
  }
  local_68 = param_1 + 0x3d;
  ppplVar41 = *local_68;
  ppplVar42 = param_1[0x3e];
  ppppppppplVar43 = (long *********)((long)ppplVar42 - (long)ppplVar41 >> 3);
  if (0x400 < (long)ppplVar42 - (long)ppplVar41) {
    ppppppppplVar44 = ppppppppplVar43;
    if (0xffffffffffffffe < (long)ppppppppplVar43) {
      ppppppppplVar44 = (long *********)0xfffffffffffffff;
    }
    do {
      pppppppplVar25 = (long ********)((long)ppppppppplVar44 * 8);
      if (pppppppplVar25 == (long ********)0x0) {
        pppppppplVar25 = (long ********)0x1;
      }
      ppppbVar9 = (byte ****)
                  FUN_710392e290(0x10,pppppppplVar25,pppplVar14,ppppbVar17,in_x4,in_x5,in_x6,in_x7);
      if (ppppbVar9 != (byte ****)0x0) {
LAB_7101d4416c:
        ppppbVar17 = ppppbVar9;
        FUN_7101d45a30((ulong *)ppplVar41,(ulong *)ppplVar42,(ulong)ppppppppplVar43,
                       (ulong *)ppppbVar9,(long)ppppppppplVar44);
        FUN_710392eb40((ulong)ppppbVar9);
        goto LAB_7101d44190;
      }
      if (DAT_7105332f00 != (long *)0x0) {
        local_330 = (byte ***)((ulong)local_330 & 0xffffffff00000000);
        pppplVar14 = (long ****)&local_200;
        local_200 = (undefined **)pppppppplVar25;
        uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_330);
        if (((uVar34 & 1) != 0) &&
           (ppppbVar9 = (byte ****)
                        FUN_710392e290(0x10,pppppppplVar25,pppplVar14,ppppbVar17,in_x4,in_x5,in_x6,
                                       in_x7), ppppbVar9 != (byte ****)0x0)) goto LAB_7101d4416c;
      }
      ppppppppplVar44 = (long *********)((ulong)ppppppppplVar44 >> 1);
    } while (ppppppppplVar44 != (long *********)0x0);
  }
  ppppbVar17 = (byte ****)0x0;
  ppppppppplVar44 = (long *********)0x0;
  FUN_7101d45a30((ulong *)ppplVar41,(ulong *)ppplVar42,(ulong)ppppppppplVar43,(ulong *)0x0,0);
LAB_7101d44190:
  ppplVar41 = *local_68;
  ppplVar42 = param_1[0x3e];
  if (ppplVar41 != ppplVar42) {
    ppplVar40 = param_1[0x2b];
    do {
      local_200 = (undefined **)FUN_7103239360((ulong)*ppplVar41);
      if (((ulong)local_200 & 0xffffffffff) != 0) {
        pplVar8 = *ppplVar40;
        ppppppppplVar43 = (long *********)(long)*(int *)(pplVar8 + 0xe);
        ppppbVar17 = (byte ****)(ulong)*(uint *)(pplVar8 + 0xd);
        FUN_710323c4e0((long)pplVar8,&local_200,ppppppppplVar43,ppppbVar17,
                       (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
      }
      ppplVar41 = ppplVar41 + 1;
    } while (ppplVar42 != ppplVar41);
  }
  ppplVar41 = param_1[0x2b];
  if (DAT_710593b580 == (undefined8 *)0x0) {
    uVar20 = 0;
  }
  else {
    plVar29 = (long *)*DAT_710593b580;
    iVar33 = (int)plVar29[0xe60];
    if (iVar33 == -1) {
      plVar12 = plVar29 + 0x198;
      plVar26 = plVar12 + plVar29[0xe58] * 0x198;
      plVar13 = plVar29;
      if (plVar29[0xe58] != 0) goto LAB_7101d44250;
LAB_7101d4427c:
      if ((plVar12 != plVar26) &&
         (((*(char *)((long)plVar12 + 0xc53) != '\0' ||
           (uVar34 = FUN_7103756000((long)plVar29,plVar13,(long ****)ppppppppplVar43,ppppbVar17,
                                    (long ****)ppppppppplVar44,in_x5,in_x6,in_x7), (uVar34 & 1) != 0
           )) && (puVar10 = (undefined3 *)
                            nn::account::CachedNintendoAccountInfo::GetCountry
                                      ((ulong *)((long)plVar12 + 0xc54)),
                 puVar10 != (undefined3 *)0x0)))) {
        uVar20 = *puVar10;
        goto LAB_7101d442c0;
      }
    }
    else {
      if ((ulong)plVar29[0xe58] <= (ulong)(long)iVar33) goto LAB_7101d45a1c;
      plVar26 = plVar29 + plVar29[0xe58] * 0x198 + 0x198;
      plVar13 = plVar29 + (long)iVar33 * 0x198 + 0x198;
LAB_7101d44250:
      plVar12 = plVar29 + 0x198;
      do {
        if ((*plVar12 == *plVar13) && (plVar12[1] == plVar13[1])) goto LAB_7101d4427c;
        plVar12 = plVar12 + 0x198;
      } while (plVar26 != plVar12);
    }
    uVar20 = 0;
  }
LAB_7101d442c0:
  local_330 = (byte ***)CONCAT53(local_330._3_5_,uVar20);
  local_200 = (undefined **)FUN_710323ac20((byte *)&local_330,0x2a);
  if (((ulong)local_200 & 0xffffffffff) != 0) {
    pplVar8 = *ppplVar41;
    ppppppppplVar43 = (long *********)(long)*(int *)(pplVar8 + 0xe);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(pplVar8 + 0xd);
    FUN_710323c4e0((long)pplVar8,&local_200,ppppppppplVar43,ppppbVar17,(long ****)ppppppppplVar44,
                   in_x5,in_x6,in_x7);
  }
  ppplVar41 = param_1[0x2b];
  FUN_7103776640(&local_d0,(long)(*param_1[0x2f] + 1),(byte ****)"set_parts_oppo_tag",
                 ppppppppplVar43,ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  uVar20 = 0;
  if (DAT_710593b580 != (undefined8 *)0x0) {
    plVar29 = (long *)*DAT_710593b580;
    iVar33 = (int)plVar29[0xe60];
    if (iVar33 == -1) {
      plVar12 = plVar29 + 0x198;
      plVar26 = plVar12 + plVar29[0xe58] * 0x198;
      plVar13 = plVar29;
      if (plVar29[0xe58] != 0) goto LAB_7101d4436c;
LAB_7101d44398:
      if (((plVar12 != plVar26) &&
          ((*(char *)((long)plVar12 + 0xc53) != '\0' ||
           (uVar34 = FUN_7103756000((long)plVar29,plVar13,(long ****)ppppppppplVar43,ppppbVar17,
                                    (long ****)ppppppppplVar44,in_x5,in_x6,in_x7), (uVar34 & 1) != 0
           )))) && (puVar10 = (undefined3 *)
                              nn::account::CachedNintendoAccountInfo::GetCountry
                                        ((ulong *)((long)plVar12 + 0xc54)),
                   puVar10 != (undefined3 *)0x0)) {
        uVar20 = *puVar10;
        goto LAB_7101d443dc;
      }
    }
    else {
      if ((ulong)plVar29[0xe58] <= (ulong)(long)iVar33) goto LAB_7101d45a1c;
      plVar26 = plVar29 + plVar29[0xe58] * 0x198 + 0x198;
      plVar13 = plVar29 + (long)iVar33 * 0x198 + 0x198;
LAB_7101d4436c:
      plVar12 = plVar29 + 0x198;
      do {
        if ((*plVar12 == *plVar13) && (plVar12[1] == plVar13[1])) goto LAB_7101d44398;
        plVar12 = plVar12 + 0x198;
      } while (plVar26 != plVar12);
    }
    uVar20 = 0;
  }
LAB_7101d443dc:
  local_200 = (undefined **)CONCAT53(local_200._3_5_,uVar20);
  FUN_7101aeec40((long *)ppplVar41,(long)&local_d0,(long *********)&local_200,ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  uVar34 = local_c8;
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar34 != 0) {
    uVar7 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar34);
  }
  local_200 = (undefined **)0x0;
  _local_1f0 = CONCAT17(uStack_1ea._1_1_,0x1000100000001);
  local_1e8 = &DAT_41f0000000000000;
  local_1e0 = 0;
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_e0 = 0;
  local_1f8 = (long *)0x100;
  FUN_710337df20((long)&local_200);
  local_330 = (byte ***)&PTR_FUN_71050af290;
  local_310 = &local_330;
  FUN_7101989a30((long *)&local_330,alStack_170);
  if (&local_330 == local_310) {
    ppbVar27 = (*local_310)[4];
LAB_7101d444bc:
    (*(code *)ppbVar27)();
  }
  else if (local_310 != (byte ****)0x0) {
    ppbVar27 = (*local_310)[5];
    goto LAB_7101d444bc;
  }
  FUN_7101989b70(&local_330,&local_200);
  local_460 = (byte ***)&PTR_FUN_71050af2d8;
  local_458 = param_1;
  local_440 = &local_460;
  FUN_7101a7ed70((long *)&local_460,alStack_300);
  if (&local_460 == local_440) {
    ppbVar27 = (*local_440)[4];
LAB_7101d44514:
    (*(code *)ppbVar27)();
  }
  else if (local_440 != (byte ****)0x0) {
    ppbVar27 = (*local_440)[5];
    goto LAB_7101d44514;
  }
  pplVar8 = pplVar23 + 1;
  FUN_710337df20((long)&local_330);
  plVar29 = local_280;
  bVar6 = alStack_2a0 == local_280;
  local_280 = (long *)0x0;
  if (bVar6) {
    pcVar28 = *(code **)(*plVar29 + 0x20);
LAB_7101d44558:
    (*pcVar28)();
  }
  else if (plVar29 != (long *)0x0) {
    pcVar28 = *(code **)(*plVar29 + 0x28);
    goto LAB_7101d44558;
  }
  local_314 = 0x40a00000;
  local_460 = (byte ***)&PTR_FUN_71050af320;
  local_458 = param_1;
  local_440 = &local_460;
  FUN_7101989a30((long *)&local_460,alStack_2d0);
  if (&local_460 == local_440) {
    ppbVar27 = (*local_440)[4];
LAB_7101d445ac:
    (*(code *)ppbVar27)();
  }
  else if (local_440 != (byte ****)0x0) {
    ppbVar27 = (*local_440)[5];
    goto LAB_7101d445ac;
  }
  pppplVar14 = param_1 + 0x30;
  ppppbVar17 = &local_330;
  FUN_7103770b30((long *)pppplVar14,pplVar8,(long ****)"selector",ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_71037717d0(pppplVar14,0,"set_parts_btn_00",ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_71037717d0(pppplVar14,1,"set_parts_btn_01",ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_71037717d0(pppplVar14,2,"set_parts_btn_02",ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_71037717d0(pppplVar14,3,"set_parts_btn_03",ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_71037717d0(pppplVar14,4,"set_footer_area",ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  (*(code *)(*param_1[0x30])[0xe])(param_1[0x30],0);
  (*(code *)(*param_1[0x30])[0xc])(param_1[0x30],0);
  FUN_7101989b70(&local_460,&local_200);
  local_b0 = (long ***)&DAT_7105186088;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_3d0);
  if (&local_b0 == local_90) {
    (*(code *)(*local_90)[4])();
  }
  else if (local_90 != (long ****)0x0) {
    (*(code *)(*local_90)[5])();
  }
  pppplVar14 = param_1 + 0x31;
  FUN_7103770b30((long *)pppplVar14,*param_1[0x2e] + 1,(long ****)"selector_01",&local_460,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  uVar18 = 0;
  FUN_71037717d0(pppplVar14,0,"set_parts_colorplt_%02d",0,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(*param_1[0x2e] + 1),(byte ****)"set_parts_colorplt_%02d",0,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",0,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 1;
  FUN_71037717d0(pppplVar14,1,"set_parts_colorplt_%02d",1,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",1,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",1,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 2;
  FUN_71037717d0(pppplVar14,2,"set_parts_colorplt_%02d",2,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",2,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",2,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 3;
  FUN_71037717d0(pppplVar14,3,"set_parts_colorplt_%02d",3,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",3,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",3,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 4;
  FUN_71037717d0(pppplVar14,4,"set_parts_colorplt_%02d",4,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",4,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",4,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 5;
  FUN_71037717d0(pppplVar14,5,"set_parts_colorplt_%02d",5,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",5,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",5,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 6;
  FUN_71037717d0(pppplVar14,6,"set_parts_colorplt_%02d",6,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",6,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",6,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 7;
  FUN_71037717d0(pppplVar14,7,"set_parts_colorplt_%02d",7,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",7,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",7,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 8;
  FUN_71037717d0(pppplVar14,8,"set_parts_colorplt_%02d",8,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",8,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",8,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 9;
  FUN_71037717d0(pppplVar14,9,"set_parts_colorplt_%02d",9,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",9,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",9,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 10;
  FUN_71037717d0(pppplVar14,10,"set_parts_colorplt_%02d",10,(long ****)ppppppppplVar44,in_x5,in_x6,
                 in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",10,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",10,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar18 = 0xb;
  FUN_71037717d0(pppplVar14,0xb,"set_parts_colorplt_%02d",0xb,(long ****)ppppppppplVar44,in_x5,in_x6
                 ,in_x7);
  FUN_7103776640(&local_b0,(long)(**pppplVar15 + 1),(byte ****)"set_parts_colorplt_%02d",0xb,uVar18,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103778430((long)&local_b0,"btn01_color_%02d",0xb,uVar18,ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  (*(code *)(*param_1[0x31])[0xc])(param_1[0x31],0);
  (*(code *)(*param_1[0x31])[0xe])(param_1[0x31],0);
  pcVar24 = "selector_00";
  ppppbVar17 = (byte ****)&local_200;
  FUN_7103770b30((long *)(param_1 + 0x32),*param_1[0x2d] + 1,(long ****)"selector_00",ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  (*(code *)(*param_1[0x32])[0xc])(param_1[0x32],0);
  (*(code *)(*param_1[0x32])[0xe])(param_1[0x32],0);
  FUN_7103776640(&local_b0,(long)pplVar8,(byte ****)"set_parts_btn_00",pcVar24,ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  if (param_1 + 0x35 != &local_b0) {
    local_a8 = (long ***)0x0;
    ppplVar42 = param_1[0x36];
    param_1[0x36] = ppplVar41;
    if (ppplVar42 != (long ***)0x0) {
      pplVar11 = ppplVar42[3];
      ppplVar42[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar42[3] = (long **)0x0;
      if (pplVar11 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar11);
      }
      FUN_710392eb40((ulong)ppplVar42);
    }
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    pplVar11 = ppplVar41[3];
    ppplVar41[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar41[3] = (long **)0x0;
    if (pplVar11 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar11);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_b0,(long)pplVar8,(byte ****)"set_parts_btn_01",pcVar24,ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  if (param_1 + 0x37 != &local_b0) {
    local_a8 = (long ***)0x0;
    ppplVar42 = param_1[0x38];
    param_1[0x38] = ppplVar41;
    if (ppplVar42 != (long ***)0x0) {
      pplVar8 = ppplVar42[3];
      ppplVar42[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar42[3] = (long **)0x0;
      if (pplVar8 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar8);
      }
      FUN_710392eb40((ulong)ppplVar42);
    }
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    pplVar8 = ppplVar41[3];
    ppplVar41[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar41[3] = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar8);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_470,(long)(*param_1[0x2f] + 1),(byte ****)"set_parts_oppo_tag",pcVar24,
                 ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  FUN_7103776640(&local_b0,(long)&local_470,(byte ****)"set_rep_icn_fighter",pcVar24,ppppbVar17,
                 (long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  if (param_1 + 0x39 != &local_b0) {
    local_a8 = (long ***)0x0;
    ppplVar42 = param_1[0x3a];
    param_1[0x3a] = ppplVar41;
    if (ppplVar42 != (long ***)0x0) {
      pplVar8 = ppplVar42[3];
      ppplVar42[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar42[3] = (long **)0x0;
      if (pplVar8 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar8);
      }
      FUN_710392eb40((ulong)ppplVar42);
    }
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    pplVar8 = ppplVar41[3];
    ppplVar41[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar41[3] = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar8);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar34 = local_468;
  local_470 = &PTR_FUN_710523d988;
  local_468 = 0;
  if (uVar34 != 0) {
    uVar7 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar34);
  }
  FUN_7103776640(&local_b0,(long)(*param_1[0x2f] + 1),(byte ****)"set_parts_oppo_tag",pcVar24,
                 ppppbVar17,(long ****)ppppppppplVar44,in_x5,in_x6,in_x7);
  ppplVar41 = local_a8;
  if (param_1 + 0x3b != &local_b0) {
    local_a8 = (long ***)0x0;
    ppplVar42 = param_1[0x3c];
    param_1[0x3c] = ppplVar41;
    if (ppplVar42 != (long ***)0x0) {
      pplVar8 = ppplVar42[3];
      ppplVar42[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar42[3] = (long **)0x0;
      if (pplVar8 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar8);
      }
      FUN_710392eb40((ulong)ppplVar42);
    }
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    pplVar8 = ppplVar41[3];
    ppplVar41[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar41[3] = (long **)0x0;
    if (pplVar8 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar8);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  pcVar24 = "off_plt_menu_lyt_00";
  if (*(char *)(*(long *)(DAT_710532f7f0 + 8) + 0x35) != '\0') {
    pcVar24 = "on_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,(long)pplVar23[2],(long)pcVar24);
  FUN_7103778300(0x3f800000,(long)(**pppplVar3)[2],(long)pcVar24);
  FUN_7103778300(0x3f800000,(long)(**pppplVar19)[2],(long)pcVar24);
  FUN_7103778300(0x3f800000,(long)(**pppplVar15)[2],(long)pcVar24);
  if (alStack_370 == local_350) {
    pcVar28 = *(code **)(*local_350 + 0x20);
LAB_7101d44f8c:
    (*pcVar28)();
  }
  else if (local_350 != (long *)0x0) {
    pcVar28 = *(code **)(*local_350 + 0x28);
    goto LAB_7101d44f8c;
  }
  if (alStack_3a0 == local_380) {
    pcVar28 = *(code **)(*local_380 + 0x20);
LAB_7101d44fbc:
    (*pcVar28)();
  }
  else if (local_380 != (long *)0x0) {
    pcVar28 = *(code **)(*local_380 + 0x28);
    goto LAB_7101d44fbc;
  }
  if (alStack_3d0 == local_3b0) {
    pcVar28 = *(code **)(*local_3b0 + 0x20);
LAB_7101d44fec:
    (*pcVar28)();
  }
  else if (local_3b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_3b0 + 0x28);
    goto LAB_7101d44fec;
  }
  if (alStack_400 == local_3e0) {
    pcVar28 = *(code **)(*local_3e0 + 0x20);
LAB_7101d4501c:
    (*pcVar28)();
  }
  else if (local_3e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_3e0 + 0x28);
    goto LAB_7101d4501c;
  }
  if (alStack_430 == local_410) {
    pcVar28 = *(code **)(*local_410 + 0x20);
LAB_7101d4504c:
    (*pcVar28)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar28 = *(code **)(*local_410 + 0x28);
    goto LAB_7101d4504c;
  }
  if (alStack_240 == local_220) {
    pcVar28 = *(code **)(*local_220 + 0x20);
LAB_7101d4507c:
    (*pcVar28)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar28 = *(code **)(*local_220 + 0x28);
    goto LAB_7101d4507c;
  }
  if (alStack_270 == local_250) {
    pcVar28 = *(code **)(*local_250 + 0x20);
LAB_7101d450ac:
    (*pcVar28)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar28 = *(code **)(*local_250 + 0x28);
    goto LAB_7101d450ac;
  }
  if (alStack_2a0 == local_280) {
    pcVar28 = *(code **)(*local_280 + 0x20);
LAB_7101d450d4:
    (*pcVar28)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar28 = *(code **)(*local_280 + 0x28);
    goto LAB_7101d450d4;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar28 = *(code **)(*local_2b0 + 0x20);
LAB_7101d45104:
    (*pcVar28)();
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101d45104;
  }
  if (alStack_300 == local_2e0) {
    pcVar28 = *(code **)(*local_2e0 + 0x20);
LAB_7101d45134:
    (*pcVar28)();
  }
  else if (local_2e0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_2e0 + 0x28);
    goto LAB_7101d45134;
  }
  if (alStack_110 == local_f0) {
    pcVar28 = *(code **)(*local_f0 + 0x20);
LAB_7101d45164:
    (*pcVar28)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101d45164;
  }
  if (alStack_140 == local_120) {
    pcVar28 = *(code **)(*local_120 + 0x20);
LAB_7101d45194:
    (*pcVar28)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar28 = *(code **)(*local_120 + 0x28);
    goto LAB_7101d45194;
  }
  if (alStack_170 == local_150) {
    pcVar28 = *(code **)(*local_150 + 0x20);
LAB_7101d451c4:
    (*pcVar28)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar28 = *(code **)(*local_150 + 0x28);
    goto LAB_7101d451c4;
  }
  if (alStack_1a0 == local_180) {
    pcVar28 = *(code **)(*local_180 + 0x20);
LAB_7101d451f4:
    (*pcVar28)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar28 = *(code **)(*local_180 + 0x28);
    goto LAB_7101d451f4;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar28 = *(code **)(*local_1b0 + 0x20);
LAB_7101d45224:
    (*pcVar28)();
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_1b0 + 0x28);
    goto LAB_7101d45224;
  }
  _local_1f0 = 0x101013f800000;
  local_1f8 = (long *)0x4248000041800000;
  local_1e8 = (undefined1 *)0x1010000;
  local_200 = (undefined **)0x0;
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_1e0 = local_1e0 & 0xffff0000;
  FUN_710337e790((long)&local_200);
  local_200 = (undefined **)
              CONCAT44((int)((ulong)((long)param_1[0x3e] - (long)*local_68) >> 3),
                       (undefined4)local_200);
  local_1e8._0_6_ = CONCAT24(0x101,(undefined4)local_1e8);
  pppplVar19 = param_1;
  FUN_7103781a20((long *)(param_1 + 0x33),*param_1[0x2d] + 1,(byte ****)"scroll",
                 (byte ****)&local_200,param_1,in_x5,in_x6,in_x7);
  ppppbVar17 = (byte ****)0x1;
  pppplVar15 = (long ****)0x0;
  FUN_7103783c10((long *)(param_1 + 0x33),0,0,1,pppplVar19,in_x5,in_x6,in_x7);
  (*(code *)(*param_1[0x33])[0xe])(param_1[0x33],0);
  (*(code *)(*param_1[0x33])[0xc])(param_1[0x33],0);
  if (alStack_110 == local_f0) {
    pcVar28 = *(code **)(*local_f0 + 0x20);
LAB_7101d45324:
    (*pcVar28)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101d45324;
  }
  if (alStack_140 == local_120) {
    pcVar28 = *(code **)(*local_120 + 0x20);
LAB_7101d45354:
    (*pcVar28)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar28 = *(code **)(*local_120 + 0x28);
    goto LAB_7101d45354;
  }
  if (alStack_170 == local_150) {
    pcVar28 = *(code **)(*local_150 + 0x20);
LAB_7101d45384:
    (*pcVar28)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar28 = *(code **)(*local_150 + 0x28);
    goto LAB_7101d45384;
  }
  if (alStack_1a0 == local_180) {
    pcVar28 = *(code **)(*local_180 + 0x20);
LAB_7101d453b4:
    (*pcVar28)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar28 = *(code **)(*local_180 + 0x28);
    goto LAB_7101d453b4;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar28 = *(code **)(*local_1b0 + 0x20);
LAB_7101d453e4:
    (*pcVar28)();
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar28 = *(code **)(*local_1b0 + 0x28);
    goto LAB_7101d453e4;
  }
  FUN_7103776390(&local_330,**pppplVar3 + 1,pppplVar15,ppppbVar17,pppplVar19,in_x5,in_x6,in_x7);
  plVar29 = (long *)*DAT_710593b580;
  iVar33 = (int)plVar29[0xe60];
  if (iVar33 == -1) {
    plVar26 = plVar29 + 0x198 + plVar29[0xe58] * 0x198;
    plVar12 = plVar29 + 0x198;
    plVar13 = plVar29;
    if (plVar29[0xe58] != 0) goto LAB_7101d4544c;
  }
  else {
    if ((ulong)plVar29[0xe58] <= (ulong)(long)iVar33) {
LAB_7101d45a1c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar26 = plVar29 + plVar29[0xe58] * 0x198 + 0x198;
    plVar13 = plVar29 + (long)iVar33 * 0x198 + 0x198;
LAB_7101d4544c:
    plVar32 = plVar29 + 0x198;
    do {
      if ((*plVar32 == *plVar13) && (plVar12 = plVar32, plVar32[1] == plVar13[1])) break;
      plVar32 = plVar32 + 0x198;
      plVar12 = plVar26;
    } while (plVar26 != plVar32);
  }
  if (plVar12 != plVar26) {
    plVar29 = plVar12;
  }
  pbVar31 = (byte *)(plVar29 + 6);
  uVar39 = (uint)*pbVar31;
  if (*pbVar31 == 0) {
    uVar34 = 0;
  }
  else {
    uVar21 = 0xffffffff;
    pbVar35 = pbVar31;
    do {
      pbVar35 = pbVar35 + 1;
      uVar21 = uVar21 + 1;
    } while (*pbVar35 != 0);
    uVar7 = 0;
    do {
      if (uVar39 >> 7 == 0) {
        pbVar31 = pbVar31 + 1;
        uVar38 = (ushort)uVar39 & 0x7f;
      }
      else {
        pbVar35 = pbVar31 + 1;
        if ((uVar39 & 0xe0) == 0xc0) {
          pbVar31 = pbVar31 + 2;
          uVar38 = *pbVar35 & 0x3f | (ushort)((uVar39 & 0x3f) << 6);
        }
        else {
          uVar38 = (ushort)(uVar39 << 0xc) | (*pbVar35 & 0x3f) << 6 | pbVar31[2] & 0x3f;
          pbVar31 = pbVar31 + 3;
        }
      }
      uVar34 = uVar7 + 1;
      *(ushort *)((long)&local_200 + uVar7 * 2) = uVar38;
    } while ((((uint)uVar7 < uVar21) && (uVar34 < 10)) &&
            (uVar39 = (uint)*pbVar31, uVar7 = uVar34, uVar39 != 0));
  }
  *(undefined2 *)((long)&local_200 + (uVar34 & 0xffffffff) * 2) = 0;
  local_1f0 = (uint6)(uint)local_1f0;
  FUN_7103776640(&local_460,(long)&local_330,(byte ****)"set_parts_oppo_tag",pppplVar15,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  plVar29 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar17,pppplVar19,in_x5,in_x6,in_x7);
  if (plVar29 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_470 = (undefined **)((ulong)local_470 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000008;
      pppplVar15 = &local_b0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_470);
      if (((uVar34 & 1) != 0) &&
         (plVar29 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar17,pppplVar19,in_x5,in_x6,in_x7
                                          ), plVar29 != (long *)0x0)) goto LAB_7101d455a0;
    }
    plVar29 = (long *)0x0;
  }
LAB_7101d455a0:
  pppplVar3 = local_458;
  *plVar29 = 0;
  ppplVar41 = local_458[1];
  if ((ppplVar41 == (long ***)0x0) || (ppplVar41[0xc] == (long **)0x0)) {
    *plVar29 = 0;
  }
  else {
    plVar12 = (long *)FUN_7103796f20((long)ppplVar41[0xc],(long)(ppplVar41[3] + 0x16));
    *plVar29 = (long)plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
      uVar34 = (**(code **)(*plVar12 + 0x200))(plVar12);
      if ((uVar34 & 1) == 0) {
        uVar39 = 1;
      }
      else {
        uVar39 = (**(code **)(*plVar12 + 0x210))(plVar12);
        uVar39 = uVar39 ^ 1;
      }
      pppplVar15 = (long ****)0x0;
      (**(code **)(*plVar12 + 0x388))(plVar12,uVar39 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar29);
  local_460 = (byte ***)&PTR_FUN_710523d988;
  local_458 = (long ****)0x0;
  if (pppplVar3 != (long ****)0x0) {
    ppplVar41 = pppplVar3[3];
    pppplVar3[2] = (long ***)&PTR_FUN_710523d9a8;
    pppplVar3[3] = (long ***)0x0;
    if (ppplVar41 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar41);
    }
    FUN_710392eb40((ulong)pppplVar3);
  }
  FUN_7103776640(&local_460,(long)&local_330,(byte ****)"set_parts_oppo_tag",pppplVar15,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  plVar29 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar17,pppplVar19,in_x5,in_x6,in_x7);
  if (plVar29 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_470 = (undefined **)((ulong)local_470 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000008;
      pppplVar15 = &local_b0;
      uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_470);
      if (((uVar34 & 1) != 0) &&
         (plVar29 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar17,pppplVar19,in_x5,in_x6,in_x7
                                          ), plVar29 != (long *)0x0)) goto LAB_7101d456d0;
    }
    plVar29 = (long *)0x0;
  }
LAB_7101d456d0:
  pppplVar3 = local_458;
  *plVar29 = 0;
  lVar22 = *(long *)((long)local_458 + 8);
  if ((lVar22 == 0) || (*(long *)(lVar22 + 0x60) == 0)) {
    *plVar29 = 0;
  }
  else {
    plVar12 = (long *)FUN_7103796f20(*(long *)(lVar22 + 0x60),*(long *)(lVar22 + 0x18) + 0xb0);
    *plVar29 = (long)plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x208))(plVar12,0);
      uVar34 = (**(code **)(*plVar12 + 0x200))(plVar12);
      if ((uVar34 & 1) == 0) {
        uVar39 = 1;
      }
      else {
        uVar39 = (**(code **)(*plVar12 + 0x210))(plVar12);
        uVar39 = uVar39 ^ 1;
      }
      pppplVar15 = (long ****)0x0;
      (**(code **)(*plVar12 + 0x388))(plVar12,uVar39 & 1);
    }
  }
  FUN_710392eb40((ulong)plVar29);
  local_460 = (byte ***)&PTR_FUN_710523d988;
  local_458 = (long ****)0x0;
  if (pppplVar3 != (long ****)0x0) {
    uVar34 = *(ulong *)((long)pppplVar3 + 0x18);
    *(undefined ***)((long)pppplVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pppplVar3 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)pppplVar3);
  }
  FUN_7103776640(&local_b0,(long)&local_330,(byte ****)"set_parts_oppo_tag",pppplVar15,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_460,(long)&local_b0,(long ****)"set_txt_name",pppplVar15,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  puVar16 = &local_200;
  FUN_710377a310((long)&local_460,1);
  pppplVar15 = local_458;
  local_460 = (byte ***)&PTR_FUN_710523d9a8;
  local_458 = (long ****)0x0;
  if (pppplVar15 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar15);
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_b0,(long)&local_330,(byte ****)"set_parts_oppo_tag",puVar16,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_460,(long)&local_b0,(long ****)"pic_count_bg",puVar16,ppppbVar17,pppplVar19,
                 in_x5,in_x6,in_x7);
  pppplVar15 = local_458;
  lVar22 = (long)*local_458;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  local_460 = (byte ***)&PTR_FUN_710523d9a8;
  local_458 = (long ****)0x0;
  if (pppplVar15 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar15);
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_b0,(long)&local_330,(byte ****)"set_parts_oppo_tag",puVar16,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_460,(long)&local_b0,(long ****)"pic_friend",puVar16,ppppbVar17,pppplVar19,
                 in_x5,in_x6,in_x7);
  pppplVar15 = local_458;
  lVar22 = (long)*local_458;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  local_460 = (byte ***)&PTR_FUN_710523d9a8;
  local_458 = (long ****)0x0;
  if (pppplVar15 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar15);
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_b0,(long)&local_330,(byte ****)"set_parts_oppo_tag",puVar16,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_460,(long)&local_b0,(long ****)"pic_favorite",puVar16,ppppbVar17,pppplVar19,
                 in_x5,in_x6,in_x7);
  pppplVar15 = local_458;
  lVar22 = (long)*local_458;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  local_460 = (byte ***)&PTR_FUN_710523d9a8;
  local_458 = (long ****)0x0;
  if (pppplVar15 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar15);
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  FUN_7103776640(&local_b0,(long)&local_330,(byte ****)"set_parts_oppo_tag",puVar16,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_460,(long)&local_b0,(long ****)"set_parts_newitem",puVar16,ppppbVar17,
                 pppplVar19,in_x5,in_x6,in_x7);
  pppplVar19 = local_458;
  lVar22 = (long)*local_458;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
  }
  local_460 = (byte ***)&PTR_FUN_710523d9a8;
  local_458 = (long ****)0x0;
  if (pppplVar19 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar19);
  }
  ppplVar41 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long ***)0x0;
  if (ppplVar41 != (long ***)0x0) {
    uVar34 = *(ulong *)((long)ppplVar41 + 0x18);
    *(undefined ***)((long)ppplVar41 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppplVar41 + 0x18) = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)ppplVar41);
  }
  uVar34 = local_328;
  local_330 = (byte ***)&PTR_FUN_710523d988;
  local_328 = 0;
  if (uVar34 != 0) {
    uVar7 = *(ulong *)(uVar34 + 0x18);
    *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar34 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar34);
  }
  *(undefined4 *)((***pppplVar2)[0xc0] + 0x10) = 0x20;
  return;
}

