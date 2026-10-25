// addr:      7101e43ee0
// offset:    0x1e43ee0
// name:      FUN_7101e43ee0
// mangled:   
// signature: undefined __cdecl FUN_7101e43ee0(undefined8 * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e43ee0(undefined8 *param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  ulong *puVar4;
  char *pcVar5;
  bool bVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  char *pcVar11;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar12;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long ****pppplVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  undefined4 uVar16;
  long ***ppplVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  int *piVar25;
  long *plVar26;
  int iVar27;
  undefined4 *puVar28;
  ulong uVar29;
  float fVar30;
  float fVar31;
  long ***local_b0;
  ulong local_a8;
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  char *local_88;
  char *local_80;
  undefined4 local_64;
  
  pppplVar13 = &local_b0;
  FUN_7101e44cd0(&local_88,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar5 = local_80;
  pcVar11 = local_88;
  if (local_88 != (char *)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  if (pcVar11 == pcVar5) {
    *(undefined4 *)((long)param_1 + 0x204) = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (DAT_7105325eb8 != '\0') {
      DAT_7105325eb8 = '\0';
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
    *(undefined8 *)((long)param_1 + 0x1d4) = 0;
    *(undefined8 *)((long)param_1 + 0x1cc) = 0;
    *(undefined8 *)((long)param_1 + 0x1c4) = 0;
    *(undefined8 *)((long)param_1 + 0x1bc) = 0;
    *(undefined8 *)((long)param_1 + 0x1b4) = 0;
    *(undefined8 *)((long)param_1 + 0x1a4) = 0;
    *(undefined4 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1ac) = 0;
    param_1[0x3e] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return;
  }
  *(undefined1 *)(*(long *)(**(long **)*param_1 + 0x600) + 0x4aa) = 1;
  (**(code **)(*(long *)param_1[5] + 0x60))((long *)param_1[5],1);
  (**(code **)(*(long *)param_1[5] + 0x70))((long *)param_1[5],0);
  FUN_710376b960(param_1[5]);
  FUN_7101e44cd0(&local_88,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar5 = local_80;
  pcVar11 = local_88;
  local_a0 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  local_90 = (undefined4 *)0x0;
  puVar7 = local_a0;
  puVar9 = local_98;
  if (1 < (ulong)((long)local_80 - (long)local_88)) {
    puVar7 = (undefined4 *)FUN_710392e290(0x10,4,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_b0 = (long ***)&DAT_00000004;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        param_3 = pppplVar13;
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined4 *)
                     FUN_710392e290(0x10,4,pppplVar13,param_4,param_5,param_6,param_7,param_8),
           param_3 = pppplVar13, puVar7 != (undefined4 *)0x0)) goto LAB_7101e43ff8;
      }
      puVar7 = (undefined4 *)0x0;
    }
LAB_7101e43ff8:
    local_98 = puVar7 + 1;
    *puVar7 = 0;
    puVar9 = local_98;
  }
  for (; local_90 = puVar9, local_a0 = puVar7, pcVar11 != pcVar5; pcVar11 = pcVar11 + 1) {
    cVar2 = *pcVar11;
    if (cVar2 == '\x02') {
      if (local_90 <= local_98) {
        pppplVar13 = (long ****)((long)local_98 - (long)puVar7);
        uVar8 = ((long)pppplVar13 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) {
LAB_7101e44cb8:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_90 - (long)puVar7 >> 2) < 0x1fffffffffffffff) {
          uVar18 = (long)local_90 - (long)puVar7 >> 1;
          if (uVar8 <= uVar18) {
            uVar8 = uVar18;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e == 0) goto LAB_7101e44264;
            goto LAB_7101e44cc0;
          }
LAB_7101e442c4:
          puVar9 = (undefined4 *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e44264:
          ppplVar17 = (long ***)(uVar8 * 4);
          if (ppplVar17 == (long ***)0x0) {
            ppplVar17 = (long ***)0x1;
          }
          puVar9 = (undefined4 *)
                   FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,param_8);
          if (puVar9 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              param_3 = &local_b0;
              local_b0 = ppplVar17;
              uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar18 & 1) != 0) &&
                 (puVar9 = (undefined4 *)
                           FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,
                                          param_8), puVar9 != (undefined4 *)0x0))
              goto LAB_7101e442c8;
            }
            goto LAB_7101e442c4;
          }
        }
LAB_7101e442c8:
        puVar28 = puVar9 + ((long)pppplVar13 >> 2);
        uVar16 = 2;
        goto LAB_7101e44344;
      }
      uVar16 = 2;
LAB_7101e44100:
      *local_98 = uVar16;
      local_98 = local_98 + 1;
    }
    else {
      if (cVar2 == '\x01') {
        if (local_98 < local_90) {
          uVar16 = 3;
          goto LAB_7101e44100;
        }
        pppplVar13 = (long ****)((long)local_98 - (long)puVar7);
        uVar8 = ((long)pppplVar13 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e44cb8;
        if ((ulong)((long)local_90 - (long)puVar7 >> 2) < 0x1fffffffffffffff) {
          uVar18 = (long)local_90 - (long)puVar7 >> 1;
          if (uVar8 <= uVar18) {
            uVar8 = uVar18;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e == 0) goto LAB_7101e441f0;
            goto LAB_7101e44cc0;
          }
LAB_7101e44250:
          puVar9 = (undefined4 *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e441f0:
          ppplVar17 = (long ***)(uVar8 * 4);
          if (ppplVar17 == (long ***)0x0) {
            ppplVar17 = (long ***)0x1;
          }
          puVar9 = (undefined4 *)
                   FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,param_8);
          if (puVar9 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              param_3 = &local_b0;
              local_b0 = ppplVar17;
              uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar18 & 1) != 0) &&
                 (puVar9 = (undefined4 *)
                           FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,
                                          param_8), puVar9 != (undefined4 *)0x0))
              goto LAB_7101e44254;
            }
            goto LAB_7101e44250;
          }
        }
LAB_7101e44254:
        puVar28 = puVar9 + ((long)pppplVar13 >> 2);
        uVar16 = 3;
      }
      else {
        if (cVar2 != '\0') goto LAB_7101e4437c;
        if (local_98 < local_90) {
          uVar16 = 1;
          goto LAB_7101e44100;
        }
        pppplVar13 = (long ****)((long)local_98 - (long)puVar7);
        uVar8 = ((long)pppplVar13 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e44cb8;
        if ((ulong)((long)local_90 - (long)puVar7 >> 2) < 0x1fffffffffffffff) {
          uVar18 = (long)local_90 - (long)puVar7 >> 1;
          if (uVar8 <= uVar18) {
            uVar8 = uVar18;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e == 0) goto LAB_7101e442d8;
            goto LAB_7101e44cc0;
          }
LAB_7101e44338:
          puVar9 = (undefined4 *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e442d8:
          ppplVar17 = (long ***)(uVar8 * 4);
          if (ppplVar17 == (long ***)0x0) {
            ppplVar17 = (long ***)0x1;
          }
          puVar9 = (undefined4 *)
                   FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,param_8);
          if (puVar9 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              param_3 = &local_b0;
              local_b0 = ppplVar17;
              uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar18 & 1) != 0) &&
                 (puVar9 = (undefined4 *)
                           FUN_710392e290(0x10,ppplVar17,param_3,param_4,param_5,param_6,param_7,
                                          param_8), puVar9 != (undefined4 *)0x0))
              goto LAB_7101e4433c;
            }
            goto LAB_7101e44338;
          }
        }
LAB_7101e4433c:
        puVar28 = puVar9 + ((long)pppplVar13 >> 2);
        uVar16 = 1;
      }
LAB_7101e44344:
      *puVar28 = uVar16;
      if (0 < (long)pppplVar13) {
        memcpy(puVar9,puVar7,(size_t)pppplVar13);
        param_3 = pppplVar13;
      }
      local_a0 = puVar9;
      local_98 = puVar28 + 1;
      local_90 = puVar9 + uVar8;
      if (puVar7 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar7);
      }
    }
LAB_7101e4437c:
    puVar7 = local_a0;
    puVar9 = local_90;
  }
  if ((long)local_98 - (long)puVar7 == 4) {
    FUN_7103778300(0x3f800000,param_1[2],0x71042f88fb);
  }
  else {
    param_3 = (long ****)((ulong)((long)local_98 - (long)puVar7) >> 2);
    FUN_7103778430((long)(param_1 + 1),"tab_count_%d",param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  lVar21 = *(long *)(param_1[4] + 0x1b8);
  if (lVar21 != 0) {
    lVar19 = param_1[4] + 0x1b8;
    lVar20 = lVar19;
    lVar24 = lVar21;
    do {
      bVar6 = *(int *)(lVar24 + 0x20) < 0;
      if (!bVar6) {
        lVar20 = lVar24;
      }
      lVar24 = *(long *)(lVar24 + (ulong)bVar6 * 8);
    } while (lVar24 != 0);
    if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
      param_3 = (long ****)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,1);
      lVar19 = param_1[4] + 0x1b8;
      lVar21 = *(long *)(param_1[4] + 0x1b8);
    }
    lVar20 = lVar19;
    lVar24 = lVar21;
    if (lVar21 != 0) {
      do {
        if (0 < *(int *)(lVar24 + 0x20)) {
          lVar20 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 1) * 8);
      } while (lVar24 != 0);
      if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) < 2)) &&
         (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
        param_3 = (long ****)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,1);
        lVar19 = param_1[4] + 0x1b8;
        lVar21 = *(long *)(param_1[4] + 0x1b8);
      }
      lVar20 = lVar19;
      lVar24 = lVar21;
      if (lVar21 != 0) {
        do {
          if (1 < *(int *)(lVar24 + 0x20)) {
            lVar20 = lVar24;
          }
          lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 2) * 8);
        } while (lVar24 != 0);
        if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) < 3)) &&
           (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
          (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
          param_3 = (long ****)0x0;
          (**(code **)(*plVar26 + 0x388))(plVar26,1);
          lVar19 = param_1[4] + 0x1b8;
          lVar21 = *(long *)(param_1[4] + 0x1b8);
        }
        lVar20 = lVar19;
        if (lVar21 != 0) {
          do {
            if (2 < *(int *)(lVar21 + 0x20)) {
              lVar20 = lVar21;
            }
            lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 3) * 8);
          } while (lVar21 != 0);
          if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) < 4)) &&
             (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
            (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
            param_3 = (long ****)0x0;
            (**(code **)(*plVar26 + 0x388))(plVar26,1);
          }
        }
      }
    }
  }
  puVar1 = param_1 + 0x44;
  if (param_1[0x47] != 0) {
    puVar4 = (ulong *)param_1[0x46];
    while (puVar4 != (ulong *)0x0) {
      uVar8 = *puVar4;
      FUN_710392eb40((ulong)puVar4);
      puVar4 = (ulong *)uVar8;
    }
    uVar8 = param_1[0x45];
    param_1[0x46] = 0;
    if (uVar8 != 0) {
      uVar18 = uVar8 & 3;
      if (uVar8 - 1 < 3) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        do {
          lVar19 = lVar21 * 8;
          lVar21 = lVar21 + 4;
          *(undefined8 *)(*puVar1 + lVar19) = 0;
          *(undefined8 *)(*puVar1 + lVar19 + 8) = 0;
          *(undefined8 *)(*puVar1 + lVar19 + 0x10) = 0;
          *(undefined8 *)(*puVar1 + lVar19 + 0x18) = 0;
        } while (uVar8 - uVar18 != lVar21);
      }
      if (uVar18 != 0) {
        lVar21 = lVar21 << 3;
        lVar19 = -uVar18;
        do {
          *(undefined8 *)(*puVar1 + lVar21) = 0;
          lVar21 = lVar21 + 8;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0);
      }
    }
    param_1[0x47] = 0;
  }
  uVar8 = (long)local_98 - (long)local_a0 >> 2;
  if ((int)uVar8 != 0) {
    uVar18 = 0;
    plVar26 = param_1 + 0x46;
    do {
      puVar7 = local_a0;
      if (uVar8 <= uVar18) goto LAB_7101e44cb0;
      plVar10 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
      if (plVar10 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_b0 = (long ***)&SUB_00000018;
          param_3 = &local_b0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar8 & 1) != 0) &&
             (plVar10 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,
                                               param_8), plVar10 != (long *)0x0))
          goto LAB_7101e446f4;
        }
        plVar10 = (long *)0x0;
      }
LAB_7101e446f4:
      iVar27 = (int)uVar18;
      *(int *)(plVar10 + 2) = iVar27;
      *(undefined4 *)((long)plVar10 + 0x14) = puVar7[uVar18];
      uVar8 = uVar18 & 0xffffffff;
      *plVar10 = 0;
      plVar10[1] = uVar8;
      uVar29 = param_1[0x45];
      if (uVar29 == 0) {
LAB_7101e447ac:
        if ((uVar29 == 0) ||
           (*(float *)(param_1 + 0x48) * (float)uVar29 < (float)(param_1[0x47] + 1))) {
          if (uVar29 < 3) {
            uVar8 = 1;
          }
          else {
            uVar8 = (ulong)((uVar29 - 1 & uVar29) != 0);
          }
          uVar8 = uVar8 | uVar29 << 1;
          uVar23 = (ulong)((float)(param_1[0x47] + 1) / *(float *)(param_1 + 0x48));
          if (uVar23 <= uVar8) {
            uVar23 = uVar8;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
            bVar6 = uVar29 < 3;
            uVar8 = uVar23;
            if (uVar29 < 2) goto LAB_7101e44844;
LAB_7101e4484c:
            if (!bVar6) {
              uVar23 = (ulong)((float)(ulong)param_1[0x47] / *(float *)(param_1 + 0x48));
              if (uVar29 < 3 || (uVar29 - 1 & uVar29) != 0) {
                uVar23 = std::__next_prime(uVar23);
              }
              else if (1 < uVar23) {
                uVar23 = 1L << (-LZCOUNT(uVar23 - 1) & 0x3fU);
              }
              if (uVar23 <= uVar8) {
                uVar23 = uVar8;
              }
              if (uVar23 < uVar29) goto LAB_7101e44844;
            }
          }
          else {
            if ((uVar23 - 1 & uVar23) != 0) {
              uVar23 = std::__next_prime(uVar23);
              uVar29 = param_1[0x45];
            }
            bVar6 = uVar29 <= uVar23;
            uVar8 = uVar23;
            if (uVar23 <= uVar29) goto LAB_7101e4484c;
LAB_7101e44844:
            FUN_7101e450a0(puVar1,uVar23,param_3,param_4,param_5,param_6,param_7,param_8);
          }
          uVar29 = param_1[0x45];
          uVar8 = plVar10[1];
          if ((uVar29 - 1 & uVar29) == 0) {
            uVar8 = uVar29 - 1 & uVar8;
          }
          else if (uVar29 <= uVar8) {
            uVar23 = 0;
            if (uVar29 != 0) {
              uVar23 = uVar8 / uVar29;
            }
            uVar8 = uVar8 - uVar23 * uVar29;
          }
        }
        uVar23 = *puVar1;
        plVar22 = *(long **)(uVar23 + uVar8 * 8);
        if (plVar22 == (long *)0x0) {
          *plVar10 = *plVar26;
          *plVar26 = (long)plVar10;
          *(long **)(uVar23 + uVar8 * 8) = plVar26;
          if (*plVar10 != 0) {
            uVar8 = *(ulong *)(*plVar10 + 8);
            if ((uVar29 - 1 & uVar29) == 0) {
              uVar8 = uVar8 & uVar29 - 1;
            }
            else if (uVar29 <= uVar8) {
              uVar23 = 0;
              if (uVar29 != 0) {
                uVar23 = uVar8 / uVar29;
              }
              uVar8 = uVar8 - uVar23 * uVar29;
            }
            plVar22 = (long *)(*puVar1 + uVar8 * 8);
            goto LAB_7101e4494c;
          }
        }
        else {
          *plVar10 = *plVar22;
LAB_7101e4494c:
          *plVar22 = (long)plVar10;
        }
        param_1[0x47] = param_1[0x47] + 1;
      }
      else {
        uVar23 = uVar29 - 1;
        if ((uVar23 & uVar29) == 0) {
          uVar8 = uVar23 & uVar8;
        }
        else if (uVar29 <= uVar8) {
          uVar3 = 0;
          if (uVar29 != 0) {
            uVar3 = uVar8 / uVar29;
          }
          uVar8 = uVar8 - uVar3 * uVar29;
        }
        plVar22 = *(long **)(*puVar1 + uVar8 * 8);
        if (plVar22 == (long *)0x0) goto LAB_7101e447ac;
        if ((uVar23 & uVar29) == 0) {
          do {
            plVar22 = (long *)*plVar22;
            if ((plVar22 == (long *)0x0) || ((plVar22[1] & uVar23) != uVar8)) goto LAB_7101e447ac;
          } while ((int)plVar22[2] != iVar27);
        }
        else {
          do {
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_7101e447ac;
            uVar23 = plVar22[1];
            if (uVar29 <= uVar23) {
              uVar3 = 0;
              if (uVar29 != 0) {
                uVar3 = uVar23 / uVar29;
              }
              uVar23 = uVar23 - uVar3 * uVar29;
            }
            if (uVar23 != uVar8) goto LAB_7101e447ac;
          } while (*(int *)(plVar22 + 2) != iVar27);
        }
        if (plVar10 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar10);
        }
      }
      lVar21 = *(long *)(param_1[4] + 0x1b8);
      if (lVar21 != 0) {
        lVar19 = param_1[4] + 0x1b8;
        lVar20 = lVar19;
        do {
          if (iVar27 <= *(int *)(lVar21 + 0x20)) {
            lVar20 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < iVar27) * 8);
        } while (lVar21 != 0);
        if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) <= iVar27)) &&
           (plVar10 = *(long **)(lVar20 + 0x28), plVar10 != (long *)0x0)) {
          (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
          (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
        }
      }
      param_3 = (long ****)(uVar18 & 0xffffffff);
      FUN_7103776640(&local_b0,(long)(param_1 + 1),(byte ****)"set_btn_tab_%02d",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar8 = local_a8;
      if ((ulong)((long)local_98 - (long)local_a0 >> 2) <= uVar18) {
LAB_7101e44cb0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      switch(local_a0[uVar18]) {
      case 0:
        pcVar11 = "tab_type_all";
        break;
      case 1:
        pcVar11 = "tab_type_gym";
        break;
      case 2:
        pcVar11 = "tab_type_search";
        break;
      case 3:
        pcVar11 = "tab_type_school";
        break;
      default:
        goto switchD_7101e44a14_default;
      }
      FUN_7103778300(0x3f800000,local_a8,(long)pcVar11);
switchD_7101e44a14_default:
      local_b0 = (long ***)&PTR_FUN_710523d988;
      local_a8 = 0;
      if (uVar8 != 0) {
        uVar29 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar29 != 0) {
          FUN_710392eb40(uVar29);
        }
        FUN_710392eb40(uVar8);
      }
      uVar18 = uVar18 + 1;
      uVar8 = (long)local_98 - (long)local_a0 >> 2;
    } while (uVar18 < (uVar8 & 0xffffffff));
  }
  if (local_a0 != (undefined4 *)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (char *)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  if ((DAT_7105325eb8 == '\0') || ((param_2 & 1) == 0)) {
    pppplVar13 = (long ****)0x0;
    FUN_7103771a80(param_1 + 3,0,0);
    if (0x12 < *(uint *)((long)param_1 + 0x1ec)) goto LAB_7101e44cc0;
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1ec) * 4 + 0x1a0) = 1;
    uVar12 = extraout_x1_01;
  }
  else {
    FUN_7103775dc0(*(long **)*param_1,0,(long ****)0x1002,param_4,param_5,param_6,param_7,param_8);
    if (0x12 < *(uint *)((long)param_1 + 0x1ec)) {
LAB_7101e44cc0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1ec) * 4 + 0x1a0) = 2;
    FUN_7103778760(param_1[2],0x7104421055);
    for (plVar26 = (long *)param_1[0x46]; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
      if (*(int *)((long)plVar26 + 0x14) == DAT_7105325ebc) {
        pppplVar13 = (long ****)0x0;
        FUN_7103771a80(param_1 + 3,*(int *)(plVar26 + 2),0);
        FUN_7101e3d9d0((long)param_1,extraout_x1_03,pppplVar13,param_4,param_5,param_6,param_7,
                       param_8);
        lVar21 = param_1[0xb] - param_1[10];
        if (lVar21 == 0) {
          uVar8 = 0xffffffff;
          goto LAB_7101e44c70;
        }
        uVar18 = (lVar21 >> 2) * -0x5555555555555555;
        uVar8 = 0;
        goto LAB_7101e44c3c;
      }
    }
    pppplVar13 = (long ****)0x0;
    FUN_7103771a80(param_1 + 3,0,0);
    uVar12 = extraout_x1_00;
  }
  FUN_7101e3d9d0((long)param_1,uVar12,pppplVar13,param_4,param_5,param_6,param_7,param_8);
  iVar27 = 1;
LAB_7101e44b9c:
  ppppbVar15 = (byte ****)0x1;
  ppppppppplVar14 = (long *********)0x0;
  FUN_7103783c10(param_1 + 6,iVar27,0,1,param_5,param_6,param_7,param_8);
  FUN_7101e3db10((long)param_1,extraout_x1_02,ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (DAT_7105325eb8 != '\0') {
    DAT_7105325eb8 = '\0';
  }
  return;
  while (uVar8 = (ulong)((int)uVar8 + 1), uVar8 <= uVar18 && uVar18 - uVar8 != 0) {
LAB_7101e44c3c:
    piVar25 = (int *)(param_1[10] + uVar8 * 0xc);
    if (((char)piVar25[1] == DAT_7105325ec0._4_1_ && *piVar25 == (int)DAT_7105325ec0) &&
        piVar25[2] == DAT_7105325ec8) goto LAB_7101e44c70;
  }
  uVar8 = 0xffffffff;
LAB_7101e44c70:
  iVar27 = (int)uVar8;
  lVar21 = param_1[6];
  fVar31 = *(float *)(lVar21 + 0x26c);
  if (DAT_7105325ecc <= *(float *)(lVar21 + 0x26c)) {
    fVar31 = DAT_7105325ecc;
  }
  fVar30 = *(float *)(lVar21 + 0x268);
  if (*(float *)(lVar21 + 0x268) <= DAT_7105325ecc) {
    fVar30 = fVar31;
  }
  *(float *)(lVar21 + 0x264) = fVar30;
  *(float *)(lVar21 + 0x260) = fVar30;
  *(undefined8 *)(lVar21 + 0x248) = 0x3f800000;
  goto LAB_7101e44b9c;
}

