// addr:      7101a34890
// offset:    0x1a34890
// name:      FUN_7101a34890
// mangled:   
// signature: undefined __cdecl FUN_7101a34890(undefined1[16] param_1, float param_2, undefined8 param_3, float param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


void FUN_7101a34890(undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long ****pppplVar1;
  int iVar2;
  bool bVar3;
  undefined1 *puVar4;
  long *********ppppppppplVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long ****pppplVar6;
  undefined4 uVar7;
  long **pplVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *********ppppppppplVar16;
  ulong uVar17;
  long ***ppplVar18;
  long lVar19;
  long ****pppplVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  
  lVar11 = **(long **)(param_5 + 0x150);
  if (*(int *)(param_5 + 0x10c) == 0) {
    lVar12 = *(long *)(param_5 + 0x198);
    lVar15 = *(long *)(param_5 + 0x1a0);
    *(undefined4 *)(param_5 + 0x314) = 0;
    for (; lVar12 != lVar15; lVar12 = lVar12 + 0x10) {
      iVar2 = *(int *)(*(long *)(lVar12 + 8) + 0x30);
      if (iVar2 != -1) {
        if ((ulong)(*(long *)(param_5 + 0x1b8) - *(long *)(param_5 + 0x1b0) >> 4) <=
            (ulong)(long)(iVar2 / 5)) {
LAB_7101a3521c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar9 = iVar2 % 5;
        lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
        ppppppppplVar16 = *(long **********)(param_5 + 0x1c8);
        param_7 = (long ****)(*(long *)(param_5 + 0x1b0) + (long)(iVar2 / 5) * 0x10);
        puVar4 = FUN_71032631a0(lVar19,0x11b1ccb807);
        ppppppppplVar5 = ppppppppplVar16;
        if (((((ulong)ppppppppplVar16 & 0xff00000000000000) == 0xc100000000000000) &&
            (((ulong)ppppppppplVar16 & 0xffffffffff) != 0)) &&
           (((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)puVar4 & 0xffffffffff) != 0)) {
          if ((((ulong)puVar4 ^ (ulong)ppppppppplVar16) & 0xffffffffff) == 0) {
LAB_7101a349f4:
            ppppppppplVar5 = (long *********)FUN_7103263030(lVar19,(ulong)ppppppppplVar16);
          }
        }
        else if ((((ulong)puVar4 & 0xffffffffff) != 0 &&
                 ((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000) ==
                 (((ulong)ppppppppplVar16 & 0xff00000000000000) == 0xc100000000000000 &&
                 ((ulong)ppppppppplVar16 & 0xffffffffff) != 0)) goto LAB_7101a349f4;
        pppplVar20 = param_7 + 1;
        FUN_7101a48700((long)*pppplVar20,uVar9,(undefined1 *)ppppppppplVar16,ppppppppplVar5,0,
                       param_10,param_11,param_12);
        pplVar8 = (*pppplVar20)[0x4a];
        uVar10 = ((long)(*pppplVar20)[0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
        uVar17 = (ulong)(int)uVar9;
        if (uVar10 < uVar17 || uVar10 - uVar17 == 0) {
LAB_7101a3520c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined1 *)((long)pplVar8 + uVar17 * 0x3f8 + 0x3f5) = 1;
        pplVar8 = (*pppplVar20)[0x4a];
        uVar10 = ((long)(*pppplVar20)[0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar10 < uVar17 || uVar10 - uVar17 == 0) goto LAB_7101a3520c;
        *(undefined1 *)((long)pplVar8 + uVar17 * 0x3f8 + 0x3f4) = 1;
        pplVar8 = (*pppplVar20)[0x76];
        if ((ulong)((long)(*pppplVar20)[0x77] - (long)pplVar8 >> 4) <= uVar17) {
LAB_7101a35214:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103778760(pplVar8[uVar17 * 2 + 1][4],0x710425ed91);
        pplVar8 = (*pppplVar20)[0x76];
        if ((ulong)((long)(*pppplVar20)[0x77] - (long)pplVar8 >> 4) <= uVar17) goto LAB_7101a35214;
        plVar13 = pplVar8[uVar17 * 2 + 1];
        FUN_7103778760(plVar13[4],0x710433a9c5);
        FUN_7103778760(plVar13[0x16],0x710433a9c5);
        FUN_7103778760(plVar13[0x18],0x710433a9c5);
        pplVar8 = (*pppplVar20)[0x4a];
        uVar10 = ((long)(*pppplVar20)[0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar10 < uVar17 || uVar10 - uVar17 == 0) goto LAB_7101a3520c;
        param_9 = (long ****)0x1;
        param_8 = (byte ****)(ulong)uVar9;
        *(undefined4 *)(pplVar8 + uVar17 * 0x7f + 0x7d) = 2;
        FUN_7101a35300(param_5,lVar12,param_7,param_8,(long ****)0x1,param_10,param_11,param_12);
        *(undefined1 *)(*(long *)(*(long *)(lVar12 + 8) + 0x20) + 0x166) = 0;
        *(undefined4 *)(*(long *)(lVar12 + 8) + 0x2c) = 0xffffffff;
        *(undefined1 *)(*(long *)(*(long *)(lVar12 + 8) + 0x20) + 0x167) = 0;
        *(undefined4 *)(*(long *)(lVar12 + 8) + 0x30) = 0xffffffff;
        lVar19 = *(long *)(lVar12 + 8);
        *(undefined1 *)(lVar19 + 0x36) = 1;
        if (*(char *)(lVar19 + 0x35) == '\0') {
          bVar3 = false;
        }
        else {
          bVar3 = *(char *)(lVar19 + 0x37) == '\0';
        }
        lVar14 = *(long *)(lVar19 + 0x20);
        plVar13 = *(long **)(lVar14 + 0x100);
        (**(code **)(*plVar13 + 0x60))(plVar13,bVar3);
        *(bool *)(lVar14 + 0x162) = bVar3;
        bVar3 = false;
        if ((*(char *)(lVar19 + 0x35) != '\0') && (bVar3 = false, *(char *)(lVar19 + 0x36) != '\0'))
        {
          bVar3 = *(char *)(lVar19 + 0x37) == '\0';
        }
        lVar19 = *(long *)(lVar19 + 0x20);
        lVar14 = *(long *)(*(long *)(lVar19 + 0x100) + 0x38);
        if (lVar14 != 0) {
          *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe | bVar3;
        }
        *(bool *)(lVar19 + 0x163) = bVar3;
        param_6 = extraout_x1;
      }
    }
    pppplVar1 = *(long *****)(param_5 + 0x1b8);
    for (pppplVar20 = *(long *****)(param_5 + 0x1b0); pppplVar20 != pppplVar1;
        pppplVar20 = pppplVar20 + 2) {
      if (0 < *(int *)(param_5 + 0x13c)) {
        uVar10 = 0;
        lVar15 = 8;
        lVar12 = 0x3f5;
        do {
          ppplVar18 = pppplVar20[1];
          if (*(char *)((long)ppplVar18 + 0x419) != '\0') {
            if (*(char *)((long)ppplVar18 + 0x41a) == '\0') {
              FUN_7101a4d950((long)ppplVar18,param_6,param_7,param_8,param_9,param_10,param_11,
                             param_12);
              ppplVar18 = pppplVar20[1];
              param_6 = extraout_x1_00;
              if (*(char *)((long)ppplVar18 + 0x419) == '\0') goto LAB_7101a34f48;
            }
            pplVar8 = ppplVar18[0x4a];
            uVar17 = ((long)ppplVar18[0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
            if (uVar17 < uVar10 || uVar17 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            if ((*(int *)((long)pplVar8 + lVar12 + -0x3e5) == 2) &&
               (*(char *)((long)pplVar8 + lVar12) == '\0')) {
              if (*(int *)(ppplVar18 + 0x27) == 0xb) {
                FUN_71019e69d0((long *)ppplVar18[0x75]);
                FUN_71019e66d0((long)ppplVar18[0x75],extraout_x1_01,param_7,param_8,param_9,param_10
                               ,param_11,param_12);
                FUN_7101a48570((long)ppplVar18,extraout_x1_02,param_7,param_8,param_9,param_10,
                               param_11,param_12);
                *(undefined4 *)(ppplVar18 + 0x7c) = 0xffffffff;
                DAT_71050a8078 = 0xffffffff;
                if (0x12 < *(uint *)((long)ppplVar18 + 0x134)) goto LAB_7101a35224;
                *(undefined4 *)
                 ((long)ppplVar18 + (long)(int)*(uint *)((long)ppplVar18 + 0x134) * 4 + 0xe8) = 3;
                ppplVar18 = pppplVar20[1];
              }
              if ((ppplVar18[0x7d] == (long **)0x0) ||
                 ((int)ppplVar18[0x7d][1][5] != *(int *)(ppplVar18 + 0x2a))) {
                pppplVar6 = (long ****)0x1;
              }
              else {
                pppplVar6 = (long ****)0x0;
              }
              iVar2 = (int)uVar10;
              FUN_7101a4a800((long)ppplVar18,iVar2,pppplVar6,param_8,param_9,param_10,param_11,
                             param_12);
              lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
              ppppppppplVar16 = *(long **********)(param_5 + 0x1c8);
              puVar4 = FUN_71032631a0(lVar19,0x11b1ccb807);
              ppppppppplVar5 = ppppppppplVar16;
              if ((((((ulong)ppppppppplVar16 & 0xff00000000000000) == 0xc100000000000000) &&
                   (((ulong)ppppppppplVar16 & 0xffffffffff) != 0)) &&
                  (((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000)) &&
                 (((ulong)puVar4 & 0xffffffffff) != 0)) {
                if ((((ulong)puVar4 ^ (ulong)ppppppppplVar16) & 0xffffffffff) == 0) {
LAB_7101a34df0:
                  ppppppppplVar5 = (long *********)FUN_7103263030(lVar19,(ulong)ppppppppplVar16);
                }
              }
              else if ((((ulong)puVar4 & 0xffffffffff) != 0 &&
                       ((ulong)puVar4 & 0xff00000000000000) == 0xc100000000000000) ==
                       (((ulong)ppppppppplVar16 & 0xff00000000000000) == 0xc100000000000000 &&
                       ((ulong)ppppppppplVar16 & 0xffffffffff) != 0)) goto LAB_7101a34df0;
              FUN_7101a48700((long)pppplVar20[1],iVar2,(undefined1 *)ppppppppplVar16,ppppppppplVar5,
                             0,param_10,param_11,param_12);
              pplVar8 = pppplVar20[1][0x4a];
              uVar17 = ((long)pppplVar20[1][0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar17 < uVar10 || uVar17 - uVar10 == 0) goto LAB_7101a3520c;
              *(undefined1 *)((long)pplVar8 + lVar12) = 1;
              pplVar8 = pppplVar20[1][0x4a];
              uVar17 = ((long)pppplVar20[1][0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar17 < uVar10 || uVar17 - uVar10 == 0) goto LAB_7101a3520c;
              *(undefined1 *)((long)pplVar8 + lVar12 + -1) = 1;
              pplVar8 = pppplVar20[1][0x76];
              if ((ulong)((long)pppplVar20[1][0x77] - (long)pplVar8 >> 4) <= uVar10)
              goto LAB_7101a35214;
              FUN_7103778760(*(long *)(*(long *)((long)pplVar8 + lVar15) + 0x20),0x710425ed91);
              pplVar8 = pppplVar20[1][0x76];
              if ((ulong)((long)pppplVar20[1][0x77] - (long)pplVar8 >> 4) <= uVar10)
              goto LAB_7101a35214;
              lVar19 = *(long *)((long)pplVar8 + lVar15);
              FUN_7103778760(*(long *)(lVar19 + 0x20),0x710433a9c5);
              FUN_7103778760(*(long *)(lVar19 + 0xb0),0x710433a9c5);
              FUN_7103778760(*(long *)(lVar19 + 0xc0),0x710433a9c5);
              pplVar8 = pppplVar20[1][0x4a];
              uVar17 = ((long)pppplVar20[1][0x4b] - (long)pplVar8 >> 3) * 0x7efdfbf7efdfbf7f;
              if (uVar17 < uVar10 || uVar17 - uVar10 == 0) goto LAB_7101a3520c;
              *(undefined4 *)((long)pplVar8 + lVar12 + -0xd) = 2;
              if ((ulong)(*(long *)(param_5 + 0x1a0) - *(long *)(param_5 + 0x198) >> 4) <=
                  (ulong)(long)*(int *)(pppplVar20[1] + 0x2a)) goto LAB_7101a3521c;
              param_9 = (long ****)0x1;
              param_8 = (byte ****)(uVar10 & 0xffffffff);
              FUN_7101a35300(param_5,*(long *)(param_5 + 0x198) +
                                     (long)*(int *)(pppplVar20[1] + 0x2a) * 0x10,pppplVar20,param_8,
                             (long ****)0x1,param_10,param_11,param_12);
              param_7 = (long ****)(uVar10 & 0xffffffff);
              FUN_7101a35900(param_5,(long)pppplVar20,iVar2,param_8,param_9,param_10,param_11,
                             param_12);
              param_6 = extraout_x1_03;
            }
          }
LAB_7101a34f48:
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x3f8;
          lVar15 = lVar15 + 0x10;
        } while ((long)uVar10 < (long)*(int *)(param_5 + 0x13c));
      }
      FUN_7101a4e410((long)pppplVar20[1],-1);
      param_6 = extraout_x1_04;
    }
    uVar9 = *(uint *)(param_5 + 0x134);
    if (uVar9 < 2) {
      lVar12 = *(long *)(param_5 + 0x198);
      lVar15 = *(long *)(param_5 + 0x1a0);
      if (lVar12 != lVar15) {
        do {
          lVar19 = *(long *)(*(long *)(lVar12 + 8) + 0x20);
          lVar14 = *(long *)(*(long *)(lVar19 + 0x100) + 0x38);
          if (lVar14 != 0) {
            *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
          }
          lVar12 = lVar12 + 0x10;
          *(undefined1 *)(lVar19 + 0x163) = 0;
        } while (lVar15 != lVar12);
        uVar9 = *(uint *)(param_5 + 0x134);
      }
      if (uVar9 == 0) {
        FUN_71032d00d0(*(long *)(param_5 + 0x200));
        param_6 = extraout_x1_05;
      }
    }
  }
  if ((long *)**(long **)(param_5 + 600) != (long *)0x0) {
    auVar26 = (**(code **)(*(long *)**(long **)(param_5 + 600) + 0x3b8))();
    param_6 = auVar26._8_8_;
    if ((auVar26._0_8_ & 1) == 0) {
      return;
    }
  }
  iVar2 = *(int *)(param_5 + 0x314);
  if (iVar2 < 0) {
    if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
       (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
      lVar12 = *(long *)(param_5 + 0x1a0);
      for (lVar11 = *(long *)(param_5 + 0x198); lVar11 != lVar12; lVar11 = lVar11 + 0x10) {
        fVar23 = (float)param_3;
        uVar10 = (ulong)*(int *)(*(long *)(lVar11 + 8) + 0x28);
        if ((ulong)(*(long *)(param_5 + 0x1b8) - *(long *)(param_5 + 0x1b0) >> 4) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        fVar21 = FUN_7101a4e2a0(*(long *)(*(long *)(param_5 + 0x1b0) + uVar10 * 0x10 + 8));
        lVar15 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x20) + 0x100);
        fVar22 = fVar21 + -960.0 + ((param_2 + -960.0) - (fVar21 + -960.0)) * 0.5;
        fVar25 = *(float *)(lVar15 + 0x90);
        fVar21 = *(float *)(lVar15 + 0x94);
        fVar24 = fVar25;
        if (fVar25 <= fVar22) {
          fVar24 = fVar22;
        }
        fVar22 = (540.0 - param_4) + ((540.0 - fVar23) - (540.0 - param_4)) * 0.5;
        param_4 = *(float *)(lVar15 + 0x98);
        param_2 = *(float *)(lVar15 + 0x9c);
        fVar23 = fVar21;
        if (fVar24 <= fVar21) {
          fVar23 = fVar24;
        }
        fVar24 = param_4;
        if (param_4 <= fVar22) {
          fVar24 = fVar22;
        }
        fVar22 = param_2;
        if (fVar24 <= param_2) {
          fVar22 = fVar24;
        }
        *(undefined8 *)(lVar15 + 0x78) = 0;
        *(ulong *)(lVar15 + 0x70) = CONCAT44(fVar22,fVar23);
        *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(lVar15 + 0x70);
        *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar15 + 0x78);
        fVar23 = (float)*(undefined8 *)(lVar15 + 0x60);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar15 + 0x60) >> 0x20);
        if (fVar25 <= fVar23) {
          fVar25 = fVar23;
        }
        if (fVar25 <= fVar21) {
          fVar21 = fVar25;
        }
        fVar23 = param_4;
        if (param_4 <= fVar24) {
          fVar23 = fVar24;
        }
        if (fVar23 <= param_2) {
          param_2 = fVar23;
        }
        param_3 = CONCAT44(param_2,fVar21);
        *(undefined8 *)(lVar15 + 0x68) = 0;
        *(undefined8 *)(lVar15 + 0x60) = param_3;
        lVar15 = *(long *)(lVar15 + 0x38);
        if (lVar15 != 0) {
          *(float *)(lVar15 + 0x30) = fVar21;
          *(float *)(lVar15 + 0x34) = param_2;
          *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
        }
        param_6 = extraout_x1_06;
      }
      FUN_7103775fa0((long *)**(undefined8 **)(param_5 + 0x150),param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12);
      FUN_7103775fa0((long *)**(undefined8 **)(param_5 + 0x158),extraout_x1_07,param_7,param_8,
                     param_9,param_10,param_11,param_12);
      uVar9 = *(uint *)(param_5 + 0x104);
      if (*(int *)(param_5 + 0x134) == 0) {
        if (0x12 < uVar9) goto LAB_7101a35224;
        uVar7 = 3;
      }
      else {
        if (0x12 < uVar9) {
LAB_7101a35224:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar7 = 1;
      }
      *(undefined4 *)(param_5 + (long)(int)uVar9 * 4 + 0xb8) = uVar7;
    }
  }
  else {
    *(int *)(param_5 + 0x314) = iVar2 + -1;
    if (iVar2 == 0) {
      if (*(int *)(param_5 + 0x134) != 0) {
        FUN_71032e5d80(*(long *)(DAT_710532f7c8 + 8),param_6,param_7,param_8,param_9,param_10,
                       param_11,param_12);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),0x710428ff7d);
      return;
    }
  }
  return;
}

