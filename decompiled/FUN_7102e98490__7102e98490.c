// addr:      7102e98490
// offset:    0x2e98490
// name:      FUN_7102e98490
// mangled:   
// signature: undefined __cdecl FUN_7102e98490(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102e98490(long ********param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  long **pplVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *********ppppppppplVar6;
  long *******ppppppplVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 (*pauVar10) [16];
  long *********ppppppppplVar11;
  char *pcVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  uint *puVar16;
  long *******ppppppplVar17;
  long *****ppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  uint uVar22;
  long ***ppplVar23;
  long *********ppppppppplVar24;
  long *******ppppppplVar25;
  long lVar26;
  long *******__src;
  long ******pppppplVar27;
  long ****pppplVar28;
  long ******pppppplVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint local_178 [2];
  long ***local_170 [32];
  ushort local_70;
  undefined4 local_6c [3];
  
  FUN_71025d9250((long *)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (2 < *(uint *)(param_1 + 0x17)) {
LAB_7102e99244:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar9 = "%s.nuanmb";
  lVar26 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  pcVar12 = "camera_stage";
  FUN_7101ea04d0((undefined1 *)local_170,extraout_x1,"%s.nuanmb","camera_stage",param_5,param_6,
                 param_7,param_8);
  puVar13 = *(uint **)(lVar26 + 0x3c0);
  puVar16 = *(uint **)(lVar26 + 0x3c8);
  if (puVar13 != puVar16) {
    uVar20 = (ulong)local_70;
    if (uVar20 == 0) {
      uVar19 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pppplVar28 = local_170;
      do {
        pppplVar21 = (long ****)((long)pppplVar28 + 1);
        bVar2 = *(byte *)pppplVar28;
        uVar22 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar22 = (uint)bVar2;
        }
        uVar5 = (&DAT_7104754084)[(uVar22 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        pppplVar28 = pppplVar21;
      } while (pppplVar21 < (long ****)((long)local_170 + uVar20));
      uVar19 = (ulong)~uVar5;
    }
    uVar19 = uVar19 | (uVar20 & 0xff) << 0x20;
    do {
      uVar5 = *puVar13;
      if ((uVar5 == 0xffffff) ||
         (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar5)) {
        if (uVar19 == 0) goto LAB_7102e990c8;
      }
      else if (*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar5 * 0x20
                         + 0x18) == uVar19) {
LAB_7102e990c8:
        local_178[0] = *puVar13;
        if ((local_178[0] != 0xffffff) &&
           (FUN_7103540a00(DAT_7105332f20,local_178[0]), local_178[0] != 0xffffff)) {
          ppppppplVar7 = (long *******)
                         FUN_710392e290(0x10,0x10,(long ****)pcVar9,(byte ****)pcVar12,
                                        (long ****)param_5,param_6,param_7,param_8);
          if (ppppppplVar7 == (long *******)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              local_170[0] = (long ***)&DAT_00000010;
              pcVar9 = (char *)local_170;
              uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar20 & 1) != 0) &&
                 (ppppppplVar7 = (long *******)
                                 FUN_710392e290(0x10,0x10,(long ****)pcVar9,(byte ****)pcVar12,
                                                (long ****)param_5,param_6,param_7,param_8),
                 ppppppplVar7 != (long *******)0x0)) goto LAB_7102e9914c;
            }
            ppppppplVar7 = (long *******)0x0;
          }
LAB_7102e9914c:
          FUN_710318b040((long *)ppppppplVar7,(long ****)local_178,(long ****)pcVar9,
                         (byte ****)pcVar12,(long ****)param_5,param_6,param_7,param_8);
          ppppppplVar25 = param_1[0x123];
          param_1[0x123] = ppppppplVar7;
          if (ppppppplVar25 != (long *******)0x0) {
            pppppplVar27 = ppppppplVar25[1];
            *ppppppplVar25 = (long ******)0x0;
            ppppppplVar25[1] = (long ******)0x0;
            if (pppppplVar27 != (long ******)0x0) {
              pppppplVar29 = pppppplVar27 + 1;
              do {
                ppppplVar18 = *pppppplVar29;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
                if (bVar4) {
                  *pppppplVar29 = (long *****)((long)ppppplVar18 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppplVar18 == (long *****)0x0) {
                (*(code *)(*pppppplVar27)[2])(pppppplVar27);
                std::__shared_weak_count::__release_weak();
              }
              pppppplVar27 = ppppppplVar25[1];
              if (pppppplVar27 != (long ******)0x0) {
                pppppplVar29 = pppppplVar27 + 1;
                do {
                  ppppplVar18 = *pppppplVar29;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(pppppplVar29,0x10);
                  if (bVar4) {
                    *pppppplVar29 = (long *****)((long)ppppplVar18 + -1);
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (ppppplVar18 == (long *****)0x0) {
                  (*(code *)(*pppppplVar27)[2])(pppppplVar27);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            FUN_710392eb40((ulong)ppppppplVar25);
          }
        }
        goto LAB_7102e985bc;
      }
      puVar13 = puVar13 + 1;
    } while (puVar16 != puVar13);
  }
  local_178[0] = 0xffffff;
LAB_7102e985bc:
  ppppppplVar7 = param_1[0x10f];
  ppppppplVar25 = param_1[0x110];
  if (ppppppplVar7 != ppppppplVar25) {
    do {
      if ((long *****)((ulong)*ppppppplVar7 & 0xffffffffff) != (long *****)0x0) {
        for (pppppplVar27 = param_1[0x62][0x1a]; pppppplVar27 != param_1[0x62][0x1b];
            pppppplVar27 = pppppplVar27 + 2) {
          if ((*(uint *)(pppppplVar27 + 1) < 2) &&
             (pppppplVar29 = (long ******)*pppppplVar27,
             (long *****)((ulong)*ppppppplVar7 & 0xffffffffff) == pppppplVar29[0xd]))
          goto LAB_7102e9861c;
        }
      }
      pppppplVar29 = (long ******)0x0;
LAB_7102e9861c:
      ppppppplVar17 = param_1[0x125];
      if (ppppppplVar17 < param_1[0x126]) {
        *ppppppplVar17 = pppppplVar29;
        param_1[0x125] = param_1[0x125] + 1;
      }
      else {
        __src = param_1[0x124];
        pppplVar28 = (long ****)((long)ppppppplVar17 - (long)__src);
        lVar26 = (long)pppplVar28 >> 3;
        uVar20 = lVar26 + 1;
        if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = (long)param_1[0x126] - (long)__src;
        if ((ulong)(lVar14 >> 3) < 0xfffffffffffffff) {
          uVar19 = lVar14 >> 2;
          if (uVar20 <= uVar19) {
            uVar20 = uVar19;
          }
          if (uVar20 != 0) {
            if (uVar20 >> 0x3d == 0) goto LAB_7102e98690;
            goto LAB_7102e99244;
          }
LAB_7102e986f0:
          ppppppplVar17 = (long *******)0x0;
        }
        else {
          uVar20 = 0x1fffffffffffffff;
LAB_7102e98690:
          ppplVar23 = (long ***)(uVar20 * 8);
          if (ppplVar23 == (long ***)0x0) {
            ppplVar23 = (long ***)0x1;
          }
          ppppppplVar17 =
               (long *******)
               FUN_710392e290(0x10,ppplVar23,(long ****)pcVar9,(byte ****)pcVar12,(long ****)param_5
                              ,param_6,param_7,param_8);
          if (ppppppplVar17 == (long *******)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              pcVar9 = (char *)local_170;
              local_170[0] = ppplVar23;
              uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar19 & 1) != 0) &&
                 (ppppppplVar17 =
                       (long *******)
                       FUN_710392e290(0x10,ppplVar23,(long ****)pcVar9,(byte ****)pcVar12,
                                      (long ****)param_5,param_6,param_7,param_8),
                 ppppppplVar17 != (long *******)0x0)) goto LAB_7102e986f4;
            }
            goto LAB_7102e986f0;
          }
        }
LAB_7102e986f4:
        ppppppplVar17[lVar26] = pppppplVar29;
        if (0 < (long)pppplVar28) {
          memcpy(ppppppplVar17,__src,(size_t)pppplVar28);
          pcVar9 = (char *)pppplVar28;
        }
        param_1[0x124] = ppppppplVar17;
        param_1[0x125] = ppppppplVar17 + lVar26 + 1;
        param_1[0x126] = ppppppplVar17 + uVar20;
        if (__src != (long *******)0x0) {
          FUN_710392eb40((ulong)__src);
        }
      }
      ppppppplVar7 = ppppppplVar7 + 1;
    } while (ppppppplVar7 != ppppppplVar25);
  }
  ppppppplVar7 = (long *******)
                 FUN_710392e290(0x10,0x28,(long ****)pcVar9,(byte ****)pcVar12,(long ****)param_5,
                                param_6,param_7,param_8);
  if (ppppppplVar7 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_170[0] = (long ***)&DAT_00000028;
      pppplVar28 = local_170;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar20 & 1) != 0) &&
         (ppppppplVar7 = (long *******)
                         FUN_710392e290(0x10,0x28,pppplVar28,(byte ****)pcVar12,(long ****)param_5,
                                        param_6,param_7,param_8), ppppppplVar7 != (long *******)0x0)
         ) goto LAB_7102e98798;
    }
    ppppppplVar7 = (long *******)0x0;
  }
LAB_7102e98798:
  pauVar10 = (undefined1 (*) [16])(param_1 + 0xe7);
  FUN_7102e9ee70((long *)ppppppplVar7,(long)param_1,(long *********)pauVar10,(byte ****)pcVar12,
                 (long ****)param_5,param_6,(long ***)param_7,param_8);
  ppppppplVar25 = param_1[0x129];
  param_1[0x129] = ppppppplVar7;
  uVar8 = extraout_x1_00;
  if (ppppppplVar25 != (long *******)0x0) {
    pppppplVar27 = ppppppplVar25[4];
    ppppppplVar25[4] = (long ******)0x0;
    if (pppppplVar27 != (long ******)0x0) {
      (*(code *)(*pppppplVar27)[1])();
    }
    pppppplVar27 = ppppppplVar25[3];
    ppppppplVar25[3] = (long ******)0x0;
    if (pppppplVar27 != (long ******)0x0) {
      (*(code *)(*pppppplVar27)[1])();
    }
    pppppplVar27 = ppppppplVar25[2];
    ppppppplVar25[2] = (long ******)0x0;
    if (pppppplVar27 != (long ******)0x0) {
      (*(code *)(*pppppplVar27)[1])();
    }
    pppppplVar27 = ppppppplVar25[1];
    ppppppplVar25[1] = (long ******)0x0;
    if (pppppplVar27 != (long ******)0x0) {
      (*(code *)(*pppppplVar27)[1])();
    }
    pppppplVar27 = *ppppppplVar25;
    *ppppppplVar25 = (long ******)0x0;
    if (pppppplVar27 != (long ******)0x0) {
      (*(code *)(*pppppplVar27)[1])();
    }
    FUN_710392eb40((ulong)ppppppplVar25);
    uVar8 = extraout_x1_01;
  }
  for (pppppplVar27 = param_1[0x62][0x1a]; pppppplVar27 != param_1[0x62][0x1b];
      pppppplVar27 = pppppplVar27 + 2) {
    if ((*(uint *)(pppppplVar27 + 1) < 2) &&
       (ppppppplVar7 = (long *******)*pppppplVar27, ppppppplVar7[0xd] == (long ******)0xb1476ef73))
    {
      param_1[0x127] = ppppppplVar7;
      if (ppppppplVar7 != (long *******)0x0) {
        *(undefined1 *)(ppppppplVar7 + 0x22) = 0;
        FUN_71025e9d50((long *)(ppppppplVar7 + 0x21),uVar8,(long ****)pauVar10,(byte ****)pcVar12,
                       (long ****)param_5,param_6,param_7,param_8);
        ppppppplVar7 = param_1[0x127];
        if (ppppppplVar7 != (long *******)0x0) {
          if ((*(char *)(ppppppplVar7 + 0x1c) != '\0') && (ppppppplVar7[0x19] != (long ******)0x0))
          {
            *(undefined2 *)(ppppppplVar7[0x19] + 6) = 0x101;
          }
          if (ppppppplVar7[0x1b] != (long ******)0x0) {
            *(undefined1 *)((long)ppppppplVar7[0x1b] + 0x21) = 1;
          }
          if (*(char *)(ppppppplVar7 + 0x1c) != '\0') {
            *(undefined1 *)(ppppppplVar7[0x16] + 2) = 0;
          }
        }
      }
      goto LAB_7102e9887c;
    }
  }
  param_1[0x127] = (long *******)0x0;
LAB_7102e9887c:
  *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  ppppplVar18 = *param_1[0x60][3];
  while (((ulong)(*ppppplVar18)[0x14] & 0xffffffffff) != 0x7b569df99) {
    ppppplVar18 = ppppplVar18 + 1;
  }
  ppplVar23 = (*ppppplVar18)[0x26];
  uVar5 = FUN_7103151710((byte *)"IPP0001");
  for (pplVar1 = *ppplVar23; pplVar1 != ppplVar23[1]; pplVar1 = pplVar1 + 1) {
    ppppppplVar7 = (long *******)*pplVar1;
    if ((ppppppplVar7[3] != (long ******)0x0) && (*(uint *)(ppppppplVar7[3] + 0x20) == uVar5))
    goto LAB_7102e988fc;
  }
  ppppppplVar7 = (long *******)0x0;
LAB_7102e988fc:
  param_1[0x12f] = ppppppplVar7;
  uVar5 = FUN_7103151710((byte *)"IPP0002");
  for (pplVar1 = *ppplVar23; pplVar1 != ppplVar23[1]; pplVar1 = pplVar1 + 1) {
    ppppppplVar7 = (long *******)*pplVar1;
    if ((ppppppplVar7[3] != (long ******)0x0) && (*(uint *)(ppppppplVar7[3] + 0x20) == uVar5))
    goto LAB_7102e98940;
  }
  ppppppplVar7 = (long *******)0x0;
LAB_7102e98940:
  param_1[0x130] = ppppppplVar7;
  uVar5 = FUN_7103151710((byte *)"IPP0003");
  for (pplVar1 = *ppplVar23; pplVar1 != ppplVar23[1]; pplVar1 = pplVar1 + 1) {
    ppppppplVar7 = (long *******)*pplVar1;
    if ((ppppppplVar7[3] != (long ******)0x0) && (*(uint *)(ppppppplVar7[3] + 0x20) == uVar5))
    goto LAB_7102e98984;
  }
  ppppppplVar7 = (long *******)0x0;
LAB_7102e98984:
  param_1[0x131] = ppppppplVar7;
  uVar5 = FUN_7103151710((byte *)"IPP0004");
  for (pplVar1 = *ppplVar23; pplVar1 != ppplVar23[1]; pplVar1 = pplVar1 + 1) {
    ppppppplVar7 = (long *******)*pplVar1;
    if ((ppppppplVar7[3] != (long ******)0x0) && (*(uint *)(ppppppplVar7[3] + 0x20) == uVar5))
    goto LAB_7102e989c8;
  }
  ppppppplVar7 = (long *******)0x0;
LAB_7102e989c8:
  param_1[0x132] = ppppppplVar7;
  uVar5 = FUN_7103151710((byte *)"IPP0005");
  for (pplVar1 = *ppplVar23; pplVar1 != ppplVar23[1]; pplVar1 = pplVar1 + 1) {
    ppppppplVar7 = (long *******)*pplVar1;
    if ((ppppppplVar7[3] != (long ******)0x0) && (*(uint *)(ppppppplVar7[3] + 0x20) == uVar5))
    goto LAB_7102e98a0c;
  }
  ppppppplVar7 = (long *******)0x0;
LAB_7102e98a0c:
  param_1[0x133] = ppppppplVar7;
  if ((long)param_1[0x113] - (long)param_1[0x112] == 0x18) {
    ppppppplVar7 = param_1[0x138];
    ppppppplVar25 = param_1[0x137];
    *(undefined4 *)(ppppppplVar7 + (long)ppppppplVar25) = *(undefined4 *)param_1[0x112];
    *(undefined4 *)((long)(ppppppplVar7 + (long)ppppppplVar25) + 4) = 0;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    if ((ulong)((long)param_1[0x113] - (long)param_1[0x112] >> 2) < 2) {
LAB_7102e99248:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppppplVar25 = param_1[0x138];
    *(undefined4 *)(ppppppplVar25 + (long)ppppppplVar7 + 1) =
         *(undefined4 *)((long)param_1[0x112] + 4);
    *(undefined4 *)((long)(ppppppplVar25 + (long)ppppppplVar7 + 1) + 4) = 1;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    if ((ulong)((long)param_1[0x113] - (long)param_1[0x112] >> 2) < 3) goto LAB_7102e99248;
    ppppppplVar25 = param_1[0x138];
    *(undefined4 *)(ppppppplVar25 + (long)ppppppplVar7 + 1) = *(undefined4 *)(param_1[0x112] + 1);
    *(undefined4 *)((long)(ppppppplVar25 + (long)ppppppplVar7 + 1) + 4) = 2;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    if ((ulong)((long)param_1[0x113] - (long)param_1[0x112] >> 2) < 4) goto LAB_7102e99248;
    ppppppplVar25 = param_1[0x138];
    *(undefined4 *)(ppppppplVar25 + (long)ppppppplVar7 + 1) =
         *(undefined4 *)((long)param_1[0x112] + 0xc);
    *(undefined4 *)((long)(ppppppplVar25 + (long)ppppppplVar7 + 1) + 4) = 3;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    if ((ulong)((long)param_1[0x113] - (long)param_1[0x112] >> 2) < 5) goto LAB_7102e99248;
    ppppppplVar25 = param_1[0x138];
    *(undefined4 *)(ppppppplVar25 + (long)ppppppplVar7 + 1) = *(undefined4 *)(param_1[0x112] + 2);
    *(undefined4 *)((long)(ppppppplVar25 + (long)ppppppplVar7 + 1) + 4) = 4;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    if ((ulong)((long)param_1[0x113] - (long)param_1[0x112] >> 2) < 6) goto LAB_7102e99248;
    uVar30 = *(undefined4 *)((long)param_1[0x112] + 0x14);
    ppppppplVar7 = param_1[0x138] + (long)ppppppplVar7 + 1;
  }
  else {
    param_1[0x138][(long)param_1[0x137]] = (long ******)0x0;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    param_1[0x138][(long)ppppppplVar7 + 1] = (long ******)0x1443b8000;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    param_1[0x138][(long)ppppppplVar7 + 1] = (long ******)0x2451c4000;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    param_1[0x138][(long)ppppppplVar7 + 1] = (long ******)0x34550c000;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    param_1[0x138][(long)ppppppplVar7 + 1] = (long ******)0x445796000;
    ppppppplVar7 = param_1[0x137];
    param_1[0x137] = (long *******)((long)ppppppplVar7 + 1);
    ppppppplVar7 = param_1[0x138] + (long)ppppppplVar7 + 1;
    uVar30 = 0x45992000;
  }
  *(undefined4 *)ppppppplVar7 = uVar30;
  *(undefined4 *)((long)ppppppplVar7 + 4) = 1;
  param_1[0x137] = (long *******)((long)param_1[0x137] + 1);
  *(undefined4 *)(param_1 + 0x13f) = 0;
  ppppplVar18 = *param_1[0x60][9];
  pppppplVar27 = param_1[0x60][0xc];
  if (pppppplVar27 != (long ******)(ppppplVar18 + 1)) {
    pauVar10 = (undefined1 (*) [16])ppppplVar18[2];
    FUN_7102616cf0((ulong *)pppppplVar27,(undefined1 (*) [16])ppppplVar18[1],pauVar10,
                   (byte ****)pcVar12,(long ****)param_5,param_6,param_7,param_8);
    ppppplVar18 = *param_1[0x60][9];
    pppppplVar27 = param_1[0x60][0xc];
  }
  if (pppppplVar27 + 3 != (long ******)(ppppplVar18 + 4)) {
    pauVar10 = (undefined1 (*) [16])ppppplVar18[5];
    FUN_7102616cf0((ulong *)(pppppplVar27 + 3),(undefined1 (*) [16])ppppplVar18[4],pauVar10,
                   (byte ****)pcVar12,(long ****)param_5,param_6,param_7,param_8);
  }
  FUN_7102624870((long)param_1[0x61],0);
  FUN_7102624740((long)param_1[0x61],0);
  FUN_7103177e00(0,0,0,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0),
                 (ulong)param_1[99][1]);
  uVar30 = *(undefined4 *)(param_1[0x61] + 0x23);
  uVar31 = *(undefined4 *)((long)param_1[0x61] + 0x11c);
  ppppppplVar7 = (long *******)
                 FUN_710392e290(0x10,0x50,(long ****)pauVar10,(byte ****)pcVar12,(long ****)param_5,
                                param_6,param_7,param_8);
  if (ppppppplVar7 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_170[0] = (long ***)&DAT_00000050;
      pppplVar28 = local_170;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar20 & 1) != 0) &&
         (ppppppplVar7 = (long *******)
                         FUN_710392e290(0x10,0x50,pppplVar28,(byte ****)pcVar12,(long ****)param_5,
                                        param_6,param_7,param_8), ppppppplVar7 != (long *******)0x0)
         ) goto LAB_7102e98d08;
    }
    ppppppplVar7 = (long *******)0x0;
  }
LAB_7102e98d08:
  uVar32 = *(undefined4 *)((long)param_1 + 0x8cc);
  uVar33 = *(undefined4 *)(param_1 + 0x11a);
  *ppppppplVar7 = (long ******)param_1;
  ppppppplVar7[6] = (long ******)0x0;
  ppppppplVar7[7] = (long ******)0x0;
  *(undefined2 *)(ppppppplVar7 + 1) = 1;
  *(undefined1 *)((long)ppppppplVar7 + 10) = 0;
  *(undefined4 *)((long)ppppppplVar7 + 0xc) = 0xffffffff;
  ppppppplVar7[3] = (long ******)0x0;
  ppppppplVar7[2] = (long ******)CONCAT44(uVar32,uVar30);
  ppppppplVar7[5] = (long ******)0x0;
  ppppppplVar7[4] = (long ******)CONCAT44(uVar33,0xc28c0000);
  *(undefined4 *)(ppppppplVar7 + 8) = 1;
  ppppppplVar25 = ppppppplVar7;
  bVar4 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_1,(long ****)ppppppplVar7,(byte ****)pcVar12,
                         (long ****)param_5,param_6,param_7,param_8);
  *(bool *)(ppppppplVar7 + 1) = bVar4;
  ppppppplVar17 = param_1[0x148];
  param_1[0x148] = ppppppplVar7;
  if (ppppppplVar17 != (long *******)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') &&
       (*(char *)((long)ppppppplVar17 + 10) != '\0')) {
      if (*(char *)((long)ppppppplVar17 + 9) != '\0') {
        uVar5 = *(uint *)((long)ppppppplVar17 + 0xc);
        if ((uVar5 < 0x38) &&
           (piVar15 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar15 + (long)(int)uVar5 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar15 + (long)(int)uVar5 + 0x464) = 0;
          *piVar15 = *piVar15 + -1;
        }
        *(undefined4 *)((long)ppppppplVar17 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)ppppppplVar17 + 9) = 0;
      }
      *(undefined1 *)((long)ppppppplVar17 + 10) = 0;
    }
    ppppppplVar25 = ppppppplVar17;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*ppppppplVar17,(long)ppppppplVar17);
    FUN_710392eb40((ulong)ppppppplVar17);
  }
  ppppppppplVar6 =
       (long *********)
       FUN_710392e290(0x10,0x50,(long ****)ppppppplVar25,(byte ****)pcVar12,(long ****)param_5,
                      param_6,param_7,param_8);
  if (ppppppppplVar6 == (long *********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_170[0] = (long ***)&DAT_00000050;
      pppplVar28 = local_170;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar20 & 1) != 0) &&
         (ppppppppplVar6 =
               (long *********)
               FUN_710392e290(0x10,0x50,pppplVar28,(byte ****)pcVar12,(long ****)param_5,param_6,
                              param_7,param_8), ppppppppplVar6 != (long *********)0x0))
      goto LAB_7102e98e60;
    }
    ppppppppplVar6 = (long *********)0x0;
  }
LAB_7102e98e60:
  uVar30 = *(undefined4 *)((long)param_1 + 0x8cc);
  uVar32 = *(undefined4 *)(param_1 + 0x11a);
  *ppppppppplVar6 = param_1;
  *(undefined2 *)(ppppppppplVar6 + 1) = 1;
  *(undefined1 *)((long)ppppppppplVar6 + 10) = 0;
  ppppppppplVar6[6] = (long ********)0x0;
  ppppppppplVar6[7] = (long ********)0x0;
  *(undefined4 *)((long)ppppppppplVar6 + 0xc) = 0xffffffff;
  ppppppppplVar6[3] = (long ********)0x0;
  ppppppppplVar6[2] = (long ********)CONCAT44(uVar30,0x428c0000);
  ppppppppplVar6[5] = (long ********)0x0;
  ppppppppplVar6[4] = (long ********)CONCAT44(uVar32,uVar31);
  *(undefined4 *)(ppppppppplVar6 + 8) = 1;
  ppppppppplVar11 = ppppppppplVar6;
  bVar4 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_1,(long ****)ppppppppplVar6,(byte ****)pcVar12,
                         (long ****)param_5,param_6,param_7,param_8);
  *(bool *)(ppppppppplVar6 + 1) = bVar4;
  ppppppppplVar24 = (long *********)param_1[0x149];
  param_1[0x149] = (long *******)ppppppppplVar6;
  if (ppppppppplVar24 != (long *********)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') &&
       (*(char *)((long)ppppppppplVar24 + 10) != '\0')) {
      if (*(char *)((long)ppppppppplVar24 + 9) != '\0') {
        uVar5 = *(uint *)((long)ppppppppplVar24 + 0xc);
        if ((uVar5 < 0x38) &&
           (piVar15 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar15 + (long)(int)uVar5 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar15 + (long)(int)uVar5 + 0x464) = 0;
          *piVar15 = *piVar15 + -1;
        }
        *(undefined4 *)((long)ppppppppplVar24 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)ppppppppplVar24 + 9) = 0;
      }
      *(undefined1 *)((long)ppppppppplVar24 + 10) = 0;
    }
    ppppppppplVar11 = ppppppppplVar24;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*ppppppppplVar24,(long)ppppppppplVar24);
    FUN_710392eb40((ulong)ppppppppplVar24);
  }
  ppppppplVar7 = param_1[0x148];
  if (*(char *)((long)ppppppplVar7 + 9) != '\0') {
    uVar5 = *(uint *)((long)ppppppplVar7 + 0xc);
    if ((uVar5 < 0x38) &&
       (piVar15 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar15 + (long)(int)uVar5 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar15 + (long)(int)uVar5 + 0x464) = 0;
      *piVar15 = *piVar15 + -1;
    }
    *(undefined4 *)((long)ppppppplVar7 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)ppppppplVar7 + 9) = 0;
  }
  *(undefined1 *)((long)ppppppplVar7 + 10) = 0;
  ppppppplVar7 = param_1[0x149];
  if (*(char *)((long)ppppppplVar7 + 9) != '\0') {
    uVar5 = *(uint *)((long)ppppppplVar7 + 0xc);
    if ((uVar5 < 0x38) &&
       (piVar15 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar15 + (long)(int)uVar5 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar15 + (long)(int)uVar5 + 0x464) = 0;
      *piVar15 = *piVar15 + -1;
    }
    *(undefined4 *)((long)ppppppplVar7 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)ppppppplVar7 + 9) = 0;
  }
  *(undefined1 *)((long)ppppppplVar7 + 10) = 0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    ppppppplVar25 = param_1[0x125];
    for (ppppppplVar7 = param_1[0x124]; ppppppplVar7 != ppppppplVar25;
        ppppppplVar7 = ppppppplVar7 + 1) {
      pppppplVar27 = *ppppppplVar7;
      if (pppppplVar27 != (long ******)0x0) {
        if ((*(char *)(pppppplVar27 + 0x1c) != '\0') && (pppppplVar27[0x19] != (long *****)0x0)) {
          *(undefined2 *)(pppppplVar27[0x19] + 6) = 0x101;
        }
        if (pppppplVar27[0x1b] != (long *****)0x0) {
          *(undefined1 *)((long)pppppplVar27[0x1b] + 0x21) = 1;
        }
        if (*(char *)(pppppplVar27 + 0x1c) != '\0') {
          *(undefined1 *)(pppppplVar27[0x16] + 2) = 0;
        }
      }
    }
    *(undefined1 *)((long)param_1[99][2] + 0x25) = 1;
    *(undefined1 *)(param_1[99][3] + 5) = 0;
  }
  if (local_178[0] != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_178[0],ppppppppplVar11,(byte ****)pcVar12,(long ****)param_5
                   ,param_6,param_7,param_8);
  }
  return;
}

