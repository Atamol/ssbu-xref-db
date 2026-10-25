// addr:      7101a36120
// offset:    0x1a36120
// name:      FUN_7101a36120
// mangled:   
// signature: undefined __cdecl FUN_7101a36120(long param_1, undefined8 param_2, long * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a36120(long param_1,undefined8 param_2,long ****param_3,long *********param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long ****pppplVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long ***ppplVar7;
  long *********ppppppppplVar8;
  undefined1 *puVar9;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  int iVar12;
  long **pplVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long **pplVar17;
  long ***ppplVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long ****pppplVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long **pplVar30;
  long ****pppplVar31;
  void *__src;
  uint uVar32;
  long ****pppplVar33;
  long *********ppppppppplVar34;
  long ****pppplVar35;
  float fVar36;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long ***local_d0;
  ulong local_c8 [9];
  undefined4 local_74;
  
  pppplVar35 = *(long *****)(param_1 + 0x1b0);
  pppplVar2 = *(long *****)(param_1 + 0x1b8);
  if (pppplVar35 != pppplVar2) {
    do {
      pppplVar33 = pppplVar35 + 1;
      ppplVar7 = *pppplVar33;
      if (9 < *(int *)(ppplVar7 + 0x4d) - 1U) goto switchD_7101a361f4_caseD_4;
      uVar25 = *(uint *)(ppplVar7 + 0x7a);
      pppplVar31 = (long ****)(ulong)uVar25;
      uVar29 = (ulong)(int)uVar25;
      switch(*(int *)(ppplVar7 + 0x4d)) {
      case 1:
        uVar32 = *(uint *)((long)ppplVar7 + 0x3e4);
        if ((uVar32 | 1) == 3) {
          uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37fa8;
          if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          param_5 = (long ****)(ulong)*(byte *)((long)ppplVar7[0x4a] + uVar29 * 0x3f8 + 0x3f7);
          param_6 = 1;
          param_4 = (long *********)0x0;
          FUN_7101a42ba0(ppplVar7[0x76][uVar29 * 2 + 1],&DAT_c1ffff0000000000,
                         (long *********)&DAT_c1ffff0000000000,(byte ****)0x0,param_5,1,param_7,
                         param_8);
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          FUN_7103778630(0,pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          plVar28 = pplVar13[uVar29 * 2 + 1];
          FUN_7103778630(0,plVar28[4],0x710433a9c5);
          FUN_7103778630(0,plVar28[0x16],0x710433a9c5);
          FUN_7103778630(0,plVar28[0x18],0x710433a9c5);
          ppplVar7 = *pppplVar33;
        }
        uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) {
LAB_7101a37fa8:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar6 = *(uint *)(ppplVar7[0x4a] + uVar29 * 0x7f + 2);
        if (*(int *)((long)ppplVar7 + 0x26c) == 0) {
          if (uVar32 == 0) {
            uVar32 = 1;
          }
          if (uVar32 == 2) {
            FUN_7101a4a800((long)ppplVar7,uVar25,(long ****)0x2,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
            ppplVar7 = *pppplVar33;
            uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
            *(undefined1 *)((long)ppplVar7[0x4a] + uVar29 * 0x3f8 + 0x29) = 0;
            if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29)
            goto LAB_7101a37fa0;
            plVar28 = ppplVar7[0x76][uVar29 * 2 + 1];
            *(undefined4 *)((long)plVar28 + 0xfc) = 0;
            if ((int)plVar28[0x1b] == 1) {
              param_4 = (long *********)0x0;
              FUN_710377a280((long)(plVar28 + 0xf),(byte *)"mel_chara_select_lv_n",1);
              FUN_7103778430((long)(plVar28 + 0xb),"cp_level_%d",
                             (ulong)*(uint *)((long)plVar28 + 0xfc),param_4,param_5,param_6,param_7,
                             param_8);
            }
            pplVar13 = (*pppplVar33)[0x4a];
            uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
            *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 1;
            pplVar13 = (*pppplVar33)[0x76];
            if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
            goto LAB_7101a37fa0;
            FUN_7103778760(pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
            pplVar13 = (*pppplVar33)[0x76];
            if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
            goto LAB_7101a37fa0;
            plVar28 = pplVar13[uVar29 * 2 + 1];
            FUN_7103778760(plVar28[4],0x710433a9c5);
            FUN_7103778760(plVar28[0x16],0x710433a9c5);
            FUN_7103778760(plVar28[0x18],0x710433a9c5);
            FUN_7101a38d80(param_1,(long)pppplVar35,pppplVar31,param_4,param_5,param_6,param_7,
                           param_8);
            lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
            puVar9 = FUN_71032631a0(lVar14,0x11b1ccb807);
            param_4 = (long *********)&DAT_c1ffff0000000000;
            if ((((ulong)puVar9 & 0xff00000000000000) != 0xc100000000000000) ||
               (((ulong)puVar9 & 0xffffffffff) == 0)) {
              param_4 = (long *********)FUN_7103263030(lVar14,0xc1ffff0000000000);
            }
            param_5 = (long ****)0x0;
            FUN_7101a48700((long)*pppplVar33,uVar25,&DAT_c1ffff0000000000,param_4,0,param_6,param_7,
                           param_8);
            ppplVar7 = *pppplVar33;
            uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
            *(undefined1 *)(ppplVar7[0x4a] + uVar29 * 0x7f + 0x1f) = 0;
            if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29)
            goto LAB_7101a37fa0;
            plVar28 = ppplVar7[0x76][uVar29 * 2 + 1];
            *(undefined4 *)(plVar28 + 0x20) = 0;
            plVar28 = *(long **)(plVar28[0x12] + 0x10);
            if (plVar28 != (long *)0x0) {
              param_4 = (long *********)0x0;
              local_d0 = (long ***)((ulong)local_d0 & 0xffffffff00000000);
              FUN_71037a2270(plVar28,(ushort *)&local_d0,0,0);
            }
            ppplVar7 = *pppplVar33;
            if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29)
            goto LAB_7101a37fa0;
            plVar28 = *(long **)(ppplVar7[0x76][uVar29 * 2 + 1][0xe] + 0x10);
            if (plVar28 != (long *)0x0) {
              param_4 = (long *********)0x1;
              FUN_71037a2270(plVar28,(ushort *)&DAT_7104753ea0,0xffffffff,1);
              ppplVar7 = *pppplVar33;
            }
            uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
            *(undefined1 *)((long)ppplVar7[0x4a] + uVar29 * 0x3f8 + 0x3f4) = 1;
            FUN_7101a35900(param_1,(long)pppplVar35,uVar25,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
            uVar32 = 2;
          }
          else if (uVar32 == 1) {
            FUN_7101a39930(param_1,(long)pppplVar35,uVar25,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
            FUN_7101a35900(param_1,(long)pppplVar35,uVar25,(byte ****)param_4,param_5,param_6,
                           param_7,param_8);
          }
        }
        if (uVar6 == 2) {
          ppplVar7 = *pppplVar33;
          pplVar13 = ppplVar7[0x4a];
          uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          *(undefined4 *)(pplVar13 + uVar29 * 0x7f + 0x37) = 0xffffffff;
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 0;
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f7) = 0;
          if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f4) = 1;
          lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
          puVar9 = FUN_71032631a0(lVar14,0x11b1ccb807);
          param_4 = (long *********)&DAT_c1ffff0000000000;
          if ((((ulong)puVar9 & 0xff00000000000000) != 0xc100000000000000) ||
             (((ulong)puVar9 & 0xffffffffff) == 0)) {
            param_4 = (long *********)FUN_7103263030(lVar14,0xc1ffff0000000000);
          }
          param_5 = (long ****)0x0;
          FUN_7101a48700((long)*pppplVar33,uVar25,&DAT_c1ffff0000000000,param_4,0,param_6,param_7,
                         param_8);
          pplVar13 = (*pppplVar33)[0x4a];
          uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 0;
        }
        FUN_7101a4a800((long)*pppplVar33,uVar25,(long ****)(ulong)uVar32,(byte ****)param_4,param_5,
                       param_6,param_7,param_8);
        if ((uVar32 | 1) == 3) {
          ppplVar7 = *pppplVar33;
          pplVar13 = ppplVar7[0x7d];
          if (pplVar13 != (long **)0x0) {
            plVar28 = pplVar13[1];
            iVar12 = (int)plVar28[6];
            if ((iVar12 != -1) && (iVar12 % 5 == uVar25 && iVar12 / 5 == *(int *)(ppplVar7 + 0x2a)))
            {
              *(undefined1 *)(plVar28[4] + 0x167) = 0;
              *(undefined4 *)(pplVar13[1] + 6) = 0xffffffff;
              plVar28 = pplVar13[1];
            }
            *(undefined1 *)(plVar28[4] + 0x166) = 0;
            *(undefined4 *)((long)pplVar13[1] + 0x2c) = 0xffffffff;
            ppplVar7 = *pppplVar33;
          }
          pplVar13 = ppplVar7[0x7e];
          if (pplVar13 != (long **)0x0) {
            plVar28 = pplVar13[1];
            iVar12 = (int)plVar28[6];
            if ((iVar12 != -1) && (iVar12 % 5 == uVar25 && iVar12 / 5 == *(int *)(ppplVar7 + 0x2a)))
            {
              *(undefined1 *)(plVar28[4] + 0x167) = 0;
              *(undefined4 *)(pplVar13[1] + 6) = 0xffffffff;
              plVar28 = pplVar13[1];
            }
            *(undefined1 *)(plVar28[4] + 0x166) = 0;
            *(undefined4 *)((long)pplVar13[1] + 0x2c) = 0xffffffff;
          }
          FUN_7101a39c20(param_1,(long)pppplVar35,pppplVar31,(byte ****)param_4,param_5,param_6,
                         param_7,param_8);
          lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
          puVar9 = FUN_71032631a0(lVar14,0x11b1ccb807);
          param_4 = (long *********)&DAT_c1ffff0000000000;
          if ((((ulong)puVar9 & 0xff00000000000000) != 0xc100000000000000) ||
             (((ulong)puVar9 & 0xffffffffff) == 0)) {
            param_4 = (long *********)FUN_7103263030(lVar14,0xc1ffff0000000000);
          }
          param_5 = (long ****)0x0;
          FUN_7101a48700((long)*pppplVar33,uVar25,&DAT_c1ffff0000000000,param_4,0,param_6,param_7,
                         param_8);
          pplVar13 = (*pppplVar33)[0x4a];
          uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 0;
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          FUN_7103778630(0,pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          plVar28 = pplVar13[uVar29 * 2 + 1];
          FUN_7103778630(0,plVar28[4],0x710433a9c5);
          FUN_7103778630(0,plVar28[0x16],0x710433a9c5);
          FUN_7103778630(0,plVar28[0x18],0x710433a9c5);
        }
        else if ((uVar6 | 1) == 3) {
          ppplVar7 = *pppplVar33;
          pplVar13 = ppplVar7[0x4a];
          uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          if ((((ulong)pplVar13[uVar29 * 0x7f + 3] & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)pplVar13[uVar29 * 0x7f + 3] & 0xffffffffff) != 0)) {
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          }
          else {
            lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
            ppppppppplVar8 = *(long **********)(param_1 + 0x1c8);
            puVar9 = FUN_71032631a0(lVar14,0x11b1ccb807);
            param_4 = ppppppppplVar8;
            if ((((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000) &&
               (((((ulong)ppppppppplVar8 & 0xffffffffff) != 0 &&
                 (((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000)) &&
                (((ulong)puVar9 & 0xffffffffff) != 0)))) {
              if ((((ulong)puVar9 ^ (ulong)ppppppppplVar8) & 0xffffffffff) == 0) {
LAB_7101a37890:
                param_4 = (long *********)FUN_7103263030(lVar14,(ulong)ppppppppplVar8);
              }
            }
            else if ((((ulong)puVar9 & 0xffffffffff) != 0 &&
                     ((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) ==
                     (((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000 &&
                     ((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) goto LAB_7101a37890;
            param_5 = (long ****)0x0;
            FUN_7101a48700((long)ppplVar7,uVar25,(undefined1 *)ppppppppplVar8,param_4,0,param_6,
                           param_7,param_8);
            pplVar13 = (*pppplVar33)[0x4a];
            uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          }
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 1;
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29) {
LAB_7101a37fa0:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_7103778760(pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
          pplVar13 = (*pppplVar33)[0x76];
          if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
          goto LAB_7101a37fa0;
          plVar28 = pplVar13[uVar29 * 2 + 1];
          FUN_7103778760(plVar28[4],0x710433a9c5);
          FUN_7103778760(plVar28[0x16],0x710433a9c5);
          FUN_7103778760(plVar28[0x18],0x710433a9c5);
          pplVar13 = (*pppplVar33)[0x4a];
          uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          *(undefined4 *)(pplVar13 + uVar29 * 0x7f + 0x7d) = 2;
          FUN_7101a35900(param_1,(long)pppplVar35,uVar25,(byte ****)param_4,param_5,param_6,param_7,
                         param_8);
          if (*(uint *)((long)pppplVar35[1] + 0x3cc) == uVar25) {
            FUN_7101a4e410((long)pppplVar35[1],-1);
          }
        }
        FUN_7101a38d80(param_1,(long)pppplVar35,pppplVar31,param_4,param_5,param_6,param_7,param_8);
        ppplVar7 = pppplVar35[1];
        pplVar13 = ppplVar7[0x4a];
        uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
        param_3 = (long ****)(ulong)*(byte *)(pplVar13 + uVar29 * 0x7f + 5);
        param_4 = (long *********)(ulong)*(uint *)(ppplVar7 + 0x2a);
        uVar15 = FUN_7101a38310(param_1,(ulong)pplVar13[uVar29 * 0x7f + 3],
                                (uint)*(byte *)(pplVar13 + uVar29 * 0x7f + 5),
                                *(uint *)(ppplVar7 + 0x2a),uVar25);
        if ((uVar15 & 1) == 0) {
          ppplVar7 = *pppplVar33;
          pplVar13 = ppplVar7[0x4a];
          uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
          param_4 = (long *********)(ulong)*(uint *)(ppplVar7 + 0x2a);
          param_6 = 0;
          uVar6 = FUN_7101a38000(param_1,(ulong)pplVar13[uVar29 * 0x7f + 3],
                                 (uint)*(byte *)(pplVar13 + uVar29 * 0x7f + 5),
                                 *(uint *)(ppplVar7 + 0x2a),pppplVar31,0);
          param_3 = (long ****)(ulong)uVar6;
          FUN_7101a48ba0((long)*pppplVar33,uVar25,uVar6);
        }
        ppplVar7 = *pppplVar33;
        pplVar13 = ppplVar7[0x4a];
        uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
        uVar6 = *(uint *)((long)pplVar13 + uVar29 * 0x3f8 + 0x1ac);
        if (uVar6 != 0) {
          lVar14 = *(long *)(param_1 + 0x1b0);
          if (lVar14 != *(long *)(param_1 + 0x1b8)) {
            do {
              lVar19 = *(long *)(lVar14 + 8);
              if (((*(int *)(lVar19 + 0x26c) != 0) &&
                  (*(int *)(lVar19 + 0x150) != *(int *)(ppplVar7 + 0x2a))) &&
                 (0 < *(int *)(param_1 + 0x13c))) {
                lVar27 = *(long *)(lVar19 + 0x250);
                param_3 = (long ****)((*(long *)(lVar19 + 600) - lVar27 >> 3) * 0x7efdfbf7efdfbf7f);
                pppplVar24 = (long ****)0x0;
                do {
                  if (param_3 < pppplVar24 || (long)param_3 - (long)pppplVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_out_of_range();
                  }
                  param_4 = (long *********)(ulong)*(uint *)(lVar27 + 0x10);
                  if ((*(uint *)(lVar27 + 0x10) == 0) &&
                     (param_4 = (long *********)(ulong)*(uint *)(lVar27 + 0x1ac),
                     *(uint *)(lVar27 + 0x1ac) == uVar6)) {
                    *(undefined4 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x1ac) = 0;
                    if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= uVar29) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_out_of_range();
                    }
                    plVar28 = ppplVar7[0x76][uVar29 * 2 + 1];
                    *(undefined4 *)(plVar28 + 0x1f) = 0;
                    if ((int)plVar28[0x1b] == 0) {
                      FUN_7103778ab0(&local_d0,plVar28 + 0xd,param_3,(byte ****)param_4,pppplVar31,
                                     param_6,param_7,param_8);
                      param_4 = (long *********)(ulong)((int)plVar28[1] + 1);
                      param_3 = (long ****)0x1;
                      FUN_710377a280((long)&local_d0,(byte *)"mel_player_n",1);
                      uVar15 = local_c8[0];
                      local_d0 = (long ***)&PTR_FUN_710523d9a8;
                      local_c8[0] = 0;
                      if (uVar15 != 0) {
                        FUN_710392eb40(uVar15);
                      }
                    }
                    pplVar13 = (*pppplVar33)[0x4a];
                    uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
                    goto LAB_7101a37bb8;
                  }
                  pppplVar24 = (long ****)((long)pppplVar24 + 1);
                  lVar27 = lVar27 + 0x3f8;
                } while ((long)pppplVar24 < (long)*(int *)(param_1 + 0x13c));
              }
              lVar14 = lVar14 + 0x10;
            } while (lVar14 != *(long *)(param_1 + 0x1b8));
          }
        }
LAB_7101a37bb8:
        if (uVar15 <= uVar29) goto LAB_7101a37f9c;
        *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f4) = 1;
        param_5 = pppplVar31;
        if (uVar32 != 2) goto joined_r0x007101a36c84;
        ppplVar7 = *pppplVar33;
        pplVar13 = ppplVar7[0x4a];
        uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pplVar17 = ppplVar7[0x76];
        if ((ulong)((long)ppplVar7[0x77] - (long)pplVar17 >> 4) <= uVar29) {
LAB_7101a37ff4:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (*(int *)(pplVar13 + uVar29 * 0x7f + 2) == 2) {
          param_6 = 1;
          param_4 = (long *********)0x0;
          pppplVar31 = (long ****)0x0;
          FUN_7101a42ba0(pplVar17[uVar29 * 2 + 1],&DAT_c1ffff0000000000,
                         (long *********)&DAT_c1ffff0000000000,(byte ****)0x0,0,1,param_7,param_8);
          plVar28 = pplVar17[uVar29 * 2 + 1];
          *(undefined4 *)(plVar28 + 0x20) = 0;
          plVar28 = *(long **)(plVar28[0x12] + 0x10);
          if (plVar28 != (long *)0x0) {
            param_4 = (long *********)0x0;
            local_d0 = (long ***)((ulong)local_d0 & 0xffffffff00000000);
            FUN_71037a2270(plVar28,(ushort *)&local_d0,0,0);
          }
          uVar15 = (ulong)(*(int *)(ppplVar7 + 0x2a) + 1);
          FUN_7103778430((long)(ppplVar7 + 0x4f),"subwindow_%dp_on",uVar15,param_4,pppplVar31,
                         param_6,param_7,param_8);
          *(undefined1 *)((long)ppplVar7 + 0x41d) = 1;
          iVar12 = *(int *)((long)ppplVar7 + 0x3cc);
          uVar10 = extraout_x1;
          if (iVar12 != -1) {
            if ((ulong)((long)ppplVar7[0x77] - (long)ppplVar7[0x76] >> 4) <= (ulong)(long)iVar12)
            goto LAB_7101a37ff4;
            plVar28 = ppplVar7[0x76][(long)iVar12 * 2 + 1];
            FUN_7103778300(0x3f800000,plVar28[4],0x710435be3c);
            *(undefined1 *)((long)plVar28 + 0x10a) = 0;
            uVar10 = extraout_x1_00;
          }
          pplVar30 = ppplVar7[0x77];
          for (pplVar17 = ppplVar7[0x76]; pplVar17 != pplVar30; pplVar17 = pplVar17 + 2) {
            FUN_7103778300(0x3f800000,pplVar17[1][4],0x710426fa7c);
            uVar10 = extraout_x1_01;
          }
          FUN_71019e6570((long)ppplVar7[0x75],uVar10,uVar15,param_4,pppplVar31,param_6,param_7,
                         param_8);
          pplVar17 = ppplVar7[0x7d];
          if (pplVar17 == (long **)0x0) {
            pplVar17 = ppplVar7[0x7e];
            ppplVar7[0x7f] = pplVar17;
            if (pplVar17 != (long **)0x0) goto LAB_7101a37d64;
            param_3 = (long ****)0x0;
            ppplVar18 = ppplVar7 + 0x2a;
          }
          else {
            ppplVar7[0x7f] = pplVar17;
LAB_7101a37d64:
            plVar26 = pplVar17[1];
            lVar14 = plVar26[4];
            *(undefined1 *)((long)plVar26 + 0x36) = 0;
            plVar28 = *(long **)(lVar14 + 0x100);
            (**(code **)(*plVar28 + 0x60))(plVar28,0);
            *(undefined1 *)(lVar14 + 0x162) = 0;
            bVar5 = false;
            if ((*(char *)((long)plVar26 + 0x35) != '\0') &&
               (bVar5 = false, *(char *)((long)plVar26 + 0x36) != '\0')) {
              bVar5 = *(char *)((long)plVar26 + 0x37) == '\0';
            }
            lVar14 = plVar26[4];
            lVar19 = *(long *)(*(long *)(lVar14 + 0x100) + 0x38);
            if (lVar19 != 0) {
              *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | bVar5;
            }
            *(bool *)(lVar14 + 0x163) = bVar5;
            param_3 = (long ****)(ulong)*(uint *)(ppplVar7[0x7f][1] + 1);
            ppplVar18 = (long ***)(ppplVar7[0x7f][1] + 5);
          }
          FUN_7101a48cd0((long)ppplVar7,*(int *)ppplVar18,(uint)param_3,(byte ****)param_4,
                         pppplVar31,param_6,param_7,param_8);
          *(undefined1 *)((long)ppplVar7 + 0x41a) = 0;
          fVar36 = (float)FUN_71033112b0(0x41f00000,*(long *)(DAT_710532f8c0 + 8),0x10ddf6935a);
          *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 0;
          *(int *)(pplVar13 + uVar29 * 0x7f + 0x7e) = (int)fVar36;
          *(uint *)(ppplVar7 + 0x7c) = uVar25;
        }
        else {
          *(undefined4 *)(pplVar13 + uVar29 * 0x7f + 0x7e) = 0;
        }
        pplVar13 = (*pppplVar33)[0x4a];
        uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
        *(undefined4 *)(pplVar13 + uVar29 * 0x7f + 0x7d) = 0;
        param_5 = pppplVar31;
        goto joined_r0x007101a36c84;
      case 2:
        lVar14 = *(long *)(param_1 + 0x198);
        iVar12 = *(int *)(ppplVar7 + 0x2a);
        if ((ulong)(*(long *)(param_1 + 0x1a0) - lVar14 >> 4) <= (ulong)(long)iVar12) {
LAB_7101a37fb8:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (ppplVar7[0x7d] != (long **)0x0) {
          uVar32 = *(uint *)(*(long *)(ppplVar7[0x7d][1][2] + 8) + 0x488);
          if (9 < uVar32) goto LAB_7101a37fc0;
          *(undefined4 *)(*(long *)(param_1 + 0x148) + (long)(int)uVar32 * 4 + 0x188) = 6;
        }
        FUN_7101a38fd0(param_1,*(uint *)(*(long *)(*(long *)(*(long *)(lVar14 + (long)iVar12 * 0x10
                                                                      + 8) + 0x10) + 8) + 0x488),
                       param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
joined_r0x007101a36c84:
        if (uVar25 != 0xffffffff) {
          ppplVar7 = *pppplVar33;
          uVar15 = ((long)ppplVar7[0x4b] - (long)ppplVar7[0x4a] >> 3) * 0x7efdfbf7efdfbf7f;
          if (uVar15 < uVar29 || uVar15 - uVar29 == 0) {
LAB_7101a37f9c:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar32 = *(uint *)(ppplVar7 + 0x2a);
          if (7 < uVar32) {
LAB_7101a37fc0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          plVar28 = *(long **)(param_1 + 0x1f0);
          uVar6 = *(uint *)(ppplVar7[0x4a] + uVar29 * 0x7f + 2);
          uVar3 = *(uint *)(plVar28 + (long)(int)uVar32 * 3 + 0x1c);
          *(undefined4 *)(plVar28 + (long)(int)uVar32 * 3 + 0x1d) =
               *(undefined4 *)((long)ppplVar7 + 0x154);
          *(uint *)((long)plVar28 + (long)(int)uVar32 * 0x18 + 0xec) = uVar6;
          *(undefined4 *)(plVar28 + (long)(int)uVar32 * 3 + 0x1e) = 0xffffffff;
          if (uVar3 != 0xffffffff) {
            FUN_71019f08a0((uint *)&local_d0,(long)plVar28,(ulong)uVar3,param_4,0xffffffff,param_6,
                           param_7,param_8);
            uVar15 = (plVar28[1] - *plVar28 >> 4) * 0x2e8ba2e8ba2e8ba3;
            uVar29 = (ulong)(int)*(uint *)(plVar28 + (long)(int)uVar32 * 3 + 0x1c);
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            FUN_7103778300(0x3f800000,*(long *)(*plVar28 + uVar29 * 0xb0 + 0x20),(long)local_c8);
          }
          param_5 = (long ****)&DAT_ffffffff;
          param_3 = (long ****)(ulong)*(uint *)(*pppplVar33 + 0x2a);
          param_6 = (ulong)(uVar25 + 1);
          param_4 = (long *********)(ulong)uVar6;
          FUN_71032d0830(param_1 + 0x1f8,*(uint *)(*pppplVar33 + 0x2a) * 5 + uVar25,(ulong)param_3,
                         param_4,0xffffffff,param_6,param_7,param_8);
          pplVar13 = (*pppplVar33)[0x7d];
          if (pplVar13 != (long **)0x0) {
            plVar28 = pplVar13[1];
            iVar12 = (int)plVar28[5];
            if (iVar12 == *(int *)(*pppplVar33 + 0x2a)) {
              param_3 = (long ****)(ulong)uVar6;
              param_4 = (long *********)&DAT_ffffffff;
              FUN_71032d2e70(plVar28[4],iVar12,param_3,0xffffffff,param_5,param_6,param_7,param_8);
            }
          }
        }
        break;
      case 3:
        iVar12 = *(int *)(ppplVar7 + 0x2a);
        if (0 < iVar12) {
          if ((ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 4) <=
              (ulong)(long)iVar12) goto LAB_7101a37fb8;
          lVar14 = *(long *)(param_1 + 0x198) + (long)iVar12 * 0x10;
          plVar28 = (long *)(lVar14 + 8);
          if (*(char *)(*plVar28 + 0x34) != '\0') goto joined_r0x007101a36c84;
          uVar32 = *(uint *)(*(long *)(*(long *)(*plVar28 + 0x10) + 8) + 0x488);
          FUN_7101a395f0(param_1,lVar14,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar6 = *(uint *)(*plVar28 + 0x28);
          if (uVar6 != 0xffffffff) {
            if (7 < uVar6) goto LAB_7101a37fc0;
            *(undefined4 *)(*(long *)(DAT_710593b990 + 8) + (long)(int)uVar6 * 4) = 0xffffffff;
          }
          if (uVar32 != 0xffffffff) {
            if (9 < uVar32) goto LAB_7101a37fc0;
            lVar14 = *(long *)(param_1 + 0x148);
            puVar20 = (undefined4 *)(lVar14 + (long)(int)uVar32 * 4);
            *puVar20 = 0;
            puVar20[10] = 0;
            *(undefined1 *)(lVar14 + (int)uVar32 + 0x50) = 0;
          }
          if ((ulong)(*(long *)(param_1 + 0x1b8) - *(long *)(param_1 + 0x1b0) >> 4) <=
              (ulong)(long)*(int *)(*plVar28 + 0x28)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar19 = *(long *)(param_1 + 0x1b0) + (long)*(int *)(*plVar28 + 0x28) * 0x10;
          plVar28 = (long *)(lVar19 + 8);
          FUN_7101a4da60(*plVar28,0,param_3,(byte ****)param_4,param_5,param_6,param_7,param_8);
          lVar27 = *plVar28;
          lVar14 = *(long *)(lVar27 + 0x250);
          lVar21 = *(long *)(lVar27 + 600);
          if (lVar14 != lVar21) {
            do {
              *(undefined4 *)(lVar14 + 0xc) = 3;
              lVar14 = lVar14 + 0x3f8;
            } while (lVar21 != lVar14);
            lVar27 = *plVar28;
          }
          **(undefined8 **)(lVar27 + 0x310) = 0;
          *(undefined8 *)(*(long *)(lVar27 + 0x310) + 8) = 0;
          **(undefined8 **)(lVar27 + 800) = 0;
          *(undefined8 *)(*(long *)(lVar27 + 800) + 8) = 0;
          if (*(int *)(lVar27 + 0x26c) != 1) {
            *(undefined4 *)(lVar27 + 0x26c) = 1;
            *(undefined1 *)(lVar27 + 0x41b) = 0;
            if (0 < *(int *)(lVar27 + 0x150)) {
              lVar14 = *(long *)(*(long *)(lVar27 + 0x328) + 0x1b8);
              if (lVar14 != 0) {
                lVar27 = *(long *)(lVar27 + 0x328) + 0x1b8;
                lVar21 = lVar27;
                do {
                  bVar5 = *(int *)(lVar14 + 0x20) < 0;
                  if (!bVar5) {
                    lVar21 = lVar14;
                  }
                  lVar14 = *(long *)(lVar14 + (ulong)bVar5 * 8);
                } while (lVar14 != 0);
                if (((lVar21 != lVar27) && (*(int *)(lVar21 + 0x20) < 1)) &&
                   (plVar26 = *(long **)(lVar21 + 0x28), plVar26 != (long *)0x0)) {
                  (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
                  param_3 = (long ****)0x0;
                  (**(code **)(*plVar26 + 0x388))(plVar26,1);
                }
              }
            }
          }
          uVar15 = 0;
          lVar27 = 8;
          lVar14 = 0x3f5;
          do {
            lVar21 = *plVar28;
            uVar22 = (*(long *)(lVar21 + 600) - *(long *)(lVar21 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f
            ;
            if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
            *(undefined4 *)(*(long *)(lVar21 + 0x250) + lVar14 + -0x249) = 0;
            if ((ulong)(*(long *)(lVar21 + 0x3b8) - *(long *)(lVar21 + 0x3b0) >> 4) <= uVar15)
            goto LAB_7101a37fa0;
            lVar21 = *(long *)(*(long *)(lVar21 + 0x3b0) + lVar27);
            *(undefined4 *)(lVar21 + 0xf8) = 0;
            if (*(int *)(lVar21 + 0xd8) == 0) {
              FUN_7103778ab0(&local_d0,(undefined8 *)(lVar21 + 0x68),param_3,(byte ****)param_4,
                             param_5,param_6,param_7,param_8);
              param_4 = (long *********)(ulong)(*(int *)(lVar21 + 8) + 1);
              FUN_710377a280((long)&local_d0,(byte *)"mel_player_n",1);
              uVar22 = local_c8[0];
              local_d0 = (long ***)&PTR_FUN_710523d9a8;
              local_c8[0] = 0;
              if (uVar22 != 0) {
                FUN_710392eb40(uVar22);
              }
            }
            lVar21 = *(long *)(*plVar28 + 0x250);
            uVar22 = (*(long *)(*plVar28 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
            uVar32 = (uint)uVar15;
            if ((long)uVar15 < (long)*(int *)(param_1 + 0x13c)) {
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              *(undefined4 *)(lVar21 + lVar14 + -0xd) = 2;
              FUN_7101a4a800(*plVar28,uVar32,(long ****)0x1,(byte ****)param_4,param_5,param_6,
                             param_7,param_8);
              lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
              ppppppppplVar8 = *(long **********)(param_1 + 0x1c8);
              puVar9 = FUN_71032631a0(lVar21,0x11b1ccb807);
              param_4 = ppppppppplVar8;
              if ((((((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000) &&
                   (((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) &&
                  (((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000)) &&
                 (((ulong)puVar9 & 0xffffffffff) != 0)) {
                if ((((ulong)puVar9 ^ (ulong)ppppppppplVar8) & 0xffffffffff) == 0) {
LAB_7101a36aa8:
                  param_4 = (long *********)FUN_7103263030(lVar21,(ulong)ppppppppplVar8);
                }
              }
              else if ((((ulong)puVar9 & 0xffffffffff) != 0 &&
                       ((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) ==
                       (((ulong)ppppppppplVar8 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)ppppppppplVar8 & 0xffffffffff) != 0)) goto LAB_7101a36aa8;
              param_5 = (long ****)0x0;
              FUN_7101a48700(*plVar28,uVar32,(undefined1 *)ppppppppplVar8,param_4,0,param_6,param_7,
                             param_8);
              lVar21 = *(long *)(*plVar28 + 0x250);
              uVar22 = (*(long *)(*plVar28 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              *(undefined1 *)(lVar21 + lVar14) = 1;
              lVar21 = *(long *)(*plVar28 + 0x250);
              uVar22 = (*(long *)(*plVar28 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              *(undefined1 *)(lVar21 + lVar14 + -1) = 1;
              FUN_7101a39930(param_1,lVar19,uVar32,(byte ****)param_4,param_5,param_6,param_7,
                             param_8);
              param_3 = (long ****)(uVar15 & 0xffffffff);
              FUN_7101a35900(param_1,lVar19,uVar32,(byte ****)param_4,param_5,param_6,param_7,
                             param_8);
            }
            else {
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              *(undefined4 *)(lVar21 + lVar14 + -0xd) = 0;
              FUN_7101a4a800(*plVar28,uVar32,(long ****)0x3,(byte ****)param_4,param_5,param_6,
                             param_7,param_8);
              lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
              puVar9 = FUN_71032631a0(lVar21,0x11b1ccb807);
              param_4 = (long *********)&DAT_c1ffff0000000000;
              if ((((ulong)puVar9 & 0xff00000000000000) != 0xc100000000000000) ||
                 (((ulong)puVar9 & 0xffffffffff) == 0)) {
                param_4 = (long *********)FUN_7103263030(lVar21,0xc1ffff0000000000);
              }
              param_5 = (long ****)0x0;
              FUN_7101a48700(*plVar28,uVar32,&DAT_c1ffff0000000000,param_4,0,param_6,param_7,param_8
                            );
              lVar21 = *(long *)(*plVar28 + 0x250);
              uVar22 = (*(long *)(*plVar28 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              *(undefined1 *)(lVar21 + lVar14) = 0;
              lVar21 = *(long *)(*plVar28 + 0x250);
              uVar22 = (*(long *)(*plVar28 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar22 < uVar15 || uVar22 - uVar15 == 0) goto LAB_7101a37f9c;
              param_3 = (long ****)(uVar15 & 0xffffffff);
              *(undefined1 *)(lVar21 + lVar14 + -1) = 1;
              FUN_7101a39c20(param_1,lVar19,param_3,(byte ****)param_4,param_5,param_6,param_7,
                             param_8);
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x3f8;
            lVar27 = lVar27 + 0x10;
          } while (uVar15 != 5);
          FUN_7101a4e410(*plVar28,-1);
          lVar14 = *plVar28;
          lVar19 = *(long *)(lVar14 + 0x250);
          if (*(long *)(lVar14 + 600) == lVar19) goto LAB_7101a37f9c;
          plVar28 = *(long **)(param_1 + 0x1f0) + 4;
          plVar26 = (long *)*plVar28;
          if (plVar26 == (long *)0x0) {
LAB_7101a374e8:
            uVar32 = 0xffffffff;
          }
          else {
            uVar15 = *(ulong *)(lVar19 + 0x18) & 0xff0000ffffffffff;
            plVar23 = plVar28;
            do {
              bVar5 = (plVar26[4] & 0xff0000ffffffffffU) < uVar15;
              if (!bVar5) {
                plVar23 = plVar26;
              }
              plVar26 = (long *)plVar26[bVar5];
            } while (plVar26 != (long *)0x0);
            if (plVar23 == plVar28) goto LAB_7101a374e8;
            uVar32 = 0xffffffff;
            if ((plVar23[4] & 0xff0000ffffffffffU) <= uVar15) {
              uVar32 = *(uint *)(plVar23 + 5);
            }
          }
          param_6 = 0xffffffff;
          param_4 = (long *********)(ulong)*(uint *)(lVar14 + 0x154);
          param_3 = (long ****)(ulong)*(uint *)(lVar14 + 0x150);
          param_5 = (long ****)(ulong)*(uint *)(lVar19 + 0x10);
          FUN_71019f11d0(*(long **)(param_1 + 0x1f0),uVar32,param_3,(byte ****)param_4,param_5,
                         0xffffffff,param_7,param_8);
          FUN_7101a397a0(param_1);
          goto joined_r0x007101a36c84;
        }
        break;
      case 8:
        iVar12 = *(int *)(param_1 + 0x13c);
        if (0 < iVar12) {
          uVar29 = 0;
          do {
            pplVar13 = ppplVar7[0x4a];
            uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37fa8;
            uVar25 = (uint)uVar29;
            if (*(int *)(pplVar13 + uVar29 * 0x7f + 0x7d) == 2) {
              if (*(char *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) == '\0') {
                lVar19 = *(long *)(param_1 + 0x1a0);
                for (lVar14 = *(long *)(param_1 + 0x198); lVar14 != lVar19; lVar14 = lVar14 + 0x10)
                {
                  iVar12 = *(int *)(*(long *)(lVar14 + 8) + 0x30);
                  if ((iVar12 != -1) &&
                     (ppplVar7 = *pppplVar33, iVar12 / 5 == *(int *)(ppplVar7 + 0x2a))) {
                    lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
                    ppppppppplVar34 = *(long **********)(param_1 + 0x1c8);
                    puVar9 = FUN_71032631a0(lVar27,0x11b1ccb807);
                    ppppppppplVar8 = ppppppppplVar34;
                    if ((((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000) &&
                       ((((ulong)ppppppppplVar34 & 0xffffffffff) != 0 &&
                        (((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000 &&
                         ((ulong)puVar9 & 0xffffffffff) != 0)))) {
                      if ((((ulong)puVar9 ^ (ulong)ppppppppplVar34) & 0xffffffffff) == 0) {
LAB_7101a36e94:
                        ppppppppplVar8 =
                             (long *********)FUN_7103263030(lVar27,(ulong)ppppppppplVar34);
                      }
                    }
                    else if ((((ulong)puVar9 & 0xffffffffff) != 0 &&
                             ((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) ==
                             (((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000 &&
                             ((ulong)ppppppppplVar34 & 0xffffffffff) != 0)) goto LAB_7101a36e94;
                    FUN_7101a48700((long)ppplVar7,uVar25,(undefined1 *)ppppppppplVar34,
                                   ppppppppplVar8,0,param_6,param_7,param_8);
                    pplVar13 = (*pppplVar33)[0x4a];
                    uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
                    if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
                    *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 1;
                    pplVar13 = (*pppplVar33)[0x4a];
                    uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
                    if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
                    *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f4) = 1;
                    pplVar13 = (*pppplVar33)[0x76];
                    if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
                    goto LAB_7101a37fa0;
                    FUN_7103778760(pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
                    pplVar13 = (*pppplVar33)[0x76];
                    if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
                    goto LAB_7101a37fa0;
                    plVar28 = pplVar13[uVar29 * 2 + 1];
                    FUN_7103778760(plVar28[4],0x710433a9c5);
                    FUN_7103778760(plVar28[0x16],0x710433a9c5);
                    FUN_7103778760(plVar28[0x18],0x710433a9c5);
                    param_5 = (long ****)0x1;
                    param_4 = (long *********)(uVar29 & 0xffffffff);
                    param_3 = pppplVar35;
                    FUN_7101a35300(param_1,lVar14,pppplVar35,(byte ****)param_4,(long ****)0x1,
                                   param_6,param_7,param_8);
                  }
                }
              }
            }
            else if (*(int *)(pplVar13 + uVar29 * 0x7f + 0x7d) == 1) {
              if ((ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 4) <=
                  (ulong)(long)*(int *)(ppplVar7 + 0x2a)) goto LAB_7101a37fb8;
              ppppbVar1 = (byte ****)
                          (*(long *)(param_1 + 0x198) + (long)*(int *)(ppplVar7 + 0x2a) * 0x10);
              if (*(int *)(pplVar13 + uVar29 * 0x7f + 2) == 3) {
                pppplVar31 = (long ****)0x1;
                ppppbVar11 = ppppbVar1;
                FUN_7101a386c0(param_1,(long)pppplVar35,uVar25,ppppbVar1,(long ****)0x1,param_6,
                               param_7,param_8);
                FUN_7101a35900(param_1,(long)pppplVar35,uVar25,ppppbVar11,pppplVar31,param_6,param_7
                               ,param_8);
              }
              lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
              ppppppppplVar34 = *(long **********)(param_1 + 0x1c8);
              puVar9 = FUN_71032631a0(lVar14,0x11b1ccb807);
              ppppppppplVar8 = ppppppppplVar34;
              if ((((((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000) &&
                   (((ulong)ppppppppplVar34 & 0xffffffffff) != 0)) &&
                  (((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000)) &&
                 (((ulong)puVar9 & 0xffffffffff) != 0)) {
                if ((((ulong)puVar9 ^ (ulong)ppppppppplVar34) & 0xffffffffff) == 0) {
LAB_7101a37008:
                  ppppppppplVar8 = (long *********)FUN_7103263030(lVar14,(ulong)ppppppppplVar34);
                }
              }
              else if ((((ulong)puVar9 & 0xffffffffff) != 0 &&
                       ((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) ==
                       (((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)ppppppppplVar34 & 0xffffffffff) != 0)) goto LAB_7101a37008;
              FUN_7101a48700((long)*pppplVar33,uVar25,(undefined1 *)ppppppppplVar34,ppppppppplVar8,0
                             ,param_6,param_7,param_8);
              pplVar13 = (*pppplVar33)[0x4a];
              uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
              *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f5) = 1;
              pplVar13 = (*pppplVar33)[0x4a];
              uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
              *(undefined1 *)((long)pplVar13 + uVar29 * 0x3f8 + 0x3f4) = 1;
              pplVar13 = (*pppplVar33)[0x76];
              if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
              goto LAB_7101a37fa0;
              FUN_7103778760(pplVar13[uVar29 * 2 + 1][4],0x710425ed91);
              pplVar13 = (*pppplVar33)[0x76];
              if ((ulong)((long)(*pppplVar33)[0x77] - (long)pplVar13 >> 4) <= uVar29)
              goto LAB_7101a37fa0;
              plVar28 = pplVar13[uVar29 * 2 + 1];
              FUN_7103778760(plVar28[4],0x710433a9c5);
              FUN_7103778760(plVar28[0x16],0x710433a9c5);
              FUN_7103778760(plVar28[0x18],0x710433a9c5);
              pplVar13 = (*pppplVar33)[0x4a];
              uVar15 = ((long)(*pppplVar33)[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37f9c;
              param_5 = (long ****)0x1;
              param_4 = (long *********)(uVar29 & 0xffffffff);
              *(undefined4 *)(pplVar13 + uVar29 * 0x7f + 0x7d) = 2;
              param_3 = pppplVar35;
              FUN_7101a35300(param_1,(long)ppppbVar1,pppplVar35,(byte ****)param_4,(long ****)0x1,
                             param_6,param_7,param_8);
            }
            iVar12 = *(int *)(param_1 + 0x13c);
            ppplVar7 = *pppplVar33;
            uVar29 = uVar29 + 1;
          } while ((long)uVar29 < (long)iVar12);
        }
        FUN_7101a4e410((long)ppplVar7,iVar12 + -1);
        break;
      case 9:
        pplVar13 = ppplVar7[0x4a];
        uVar15 = ((long)ppplVar7[0x4b] - (long)pplVar13 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar15 < uVar29 || uVar15 - uVar29 == 0) goto LAB_7101a37fa8;
        lVar14 = *(long *)(DAT_710532f730 + 8);
        param_3 = (long ****)pplVar13[uVar29 * 0x7f + 3];
        uVar25 = (uint)*(byte *)(pplVar13 + uVar29 * 0x7f + 5);
        bVar5 = FUN_7103265e70(lVar14 + 0x160,(ulong)param_3);
        if (bVar5) {
          puVar9 = FUN_71032631a0(*(long *)(lVar14 + 0x168),0x1257ab1d87);
          if (((((ulong)param_3 & 0xff00000000000000) == 0xc100000000000000 &&
                ((ulong)param_3 & 0xffffffffff) != 0) &&
              (((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000)) &&
             (((ulong)puVar9 & 0xffffffffff) != 0)) {
            uVar25 = (uint)((((ulong)puVar9 ^ (ulong)param_3) & 0xffffffffff) == 0);
          }
          else {
            uVar25 = (((ulong)puVar9 & 0xffffffffff) != 0 &&
                     ((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) !=
                     (((ulong)param_3 & 0xff00000000000000) == 0xc100000000000000 &&
                     ((ulong)param_3 & 0xffffffffff) != 0) ^ 1;
          }
        }
        param_4 = (long *********)(ulong)uVar25;
        uVar29 = FUN_7103266830(*(long *)(lVar14 + 0x168),0,(ulong)param_3,(ulong)param_4,param_5,
                                param_6,param_7,param_8);
        if (((uVar29 & 0xffffffffff) == 0) ||
           (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0')) {
LAB_7101a374a0:
          local_f8 = 0;
          uStack_f4 = 0x876500;
          local_e8 = 0xffffffffffffffff;
          local_110[0] = 0;
          local_e0 = 0;
          uStack_d8 = 0;
        }
        else {
          param_3 = (long ****)&DAT_00000004;
          uVar15 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar29,(long ****)&DAT_00000004,
                                  (byte ****)param_4,param_5,param_6,param_7,param_8);
          if ((uVar15 & 1) == 0) goto LAB_7101a374a0;
          FUN_71024076d0(local_110,uVar29);
          if (((local_100 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_f8 == DAT_7106dd53ac)) {
            piVar16 = (int *)(local_100 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
              if (bVar5) {
                *piVar16 = *piVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        local_108 = &PTR_FUN_7104f73d50;
        local_100 = 0;
        local_f0 = 0;
        break;
      case 10:
        puVar20 = *(undefined4 **)(param_1 + 0x268);
        if (puVar20 < *(undefined4 **)(param_1 + 0x270)) {
          *puVar20 = 2;
          *(long *)(param_1 + 0x268) = *(long *)(param_1 + 0x268) + 4;
        }
        else {
          __src = *(void **)(param_1 + 0x260);
          pppplVar33 = (long ****)((long)puVar20 - (long)__src);
          uVar29 = ((long)pppplVar33 >> 2) + 1;
          if (uVar29 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = (long)*(undefined4 **)(param_1 + 0x270) - (long)__src;
          if ((ulong)(lVar14 >> 2) < 0x1fffffffffffffff) {
            uVar15 = lVar14 >> 1;
            if (uVar29 <= uVar15) {
              uVar29 = uVar15;
            }
            if (uVar29 != 0) {
              if (uVar29 >> 0x3e != 0) goto LAB_7101a37fc0;
              goto LAB_7101a37324;
            }
            __dest = (void *)0x0;
          }
          else {
            uVar29 = 0x3fffffffffffffff;
LAB_7101a37324:
            ppplVar7 = (long ***)(uVar29 * 4);
            if (ppplVar7 == (long ***)0x0) {
              ppplVar7 = (long ***)0x1;
            }
            __dest = (void *)FUN_710392e290(0x10,ppplVar7,param_3,(byte ****)param_4,param_5,param_6
                                            ,param_7,param_8);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_74 = 0;
                param_3 = &local_d0;
                local_d0 = ppplVar7;
                uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
                if (((uVar15 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppplVar7,param_3,(byte ****)param_4,param_5
                                                    ,param_6,param_7,param_8), __dest != (void *)0x0
                   )) goto LAB_7101a37398;
              }
              __dest = (void *)0x0;
            }
          }
LAB_7101a37398:
          puVar20 = (undefined4 *)((long)__dest + ((long)pppplVar33 >> 2) * 4);
          *puVar20 = 2;
          if (0 < (long)pppplVar33) {
            memcpy(__dest,__src,(size_t)pppplVar33);
            param_3 = pppplVar33;
          }
          *(void **)(param_1 + 0x260) = __dest;
          *(undefined4 **)(param_1 + 0x268) = puVar20 + 1;
          *(void **)(param_1 + 0x270) = (void *)((long)__dest + uVar29 * 4);
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
      }
switchD_7101a361f4_caseD_4:
      pppplVar35 = pppplVar35 + 2;
    } while (pppplVar35 != pppplVar2);
  }
  return;
}

