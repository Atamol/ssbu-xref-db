// addr:      7101dde2f0
// offset:    0x1dde2f0
// name:      FUN_7101dde2f0
// mangled:   
// signature: undefined __cdecl FUN_7101dde2f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101dde8cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101dde2f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long ***ppplVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long *********ppppppppplVar12;
  long **pplVar13;
  int *piVar14;
  code *pcVar15;
  undefined8 uVar16;
  short *psVar17;
  byte bVar18;
  undefined2 *puVar19;
  int iVar20;
  long lVar21;
  byte bVar22;
  int iVar23;
  int iVar24;
  short sVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined **local_168;
  ulong local_160;
  undefined4 local_158 [2];
  undefined **local_150;
  long local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined **local_118;
  long *local_110;
  undefined **local_108;
  long ***local_100 [8];
  long ********local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  lVar26 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar26 + 0xa0) == 2) {
    lVar8 = *(long *)(*(long *)(lVar26 + 0x20) + 8);
    if ((lVar8 != 0) &&
       (plVar9 = (long *)FUN_71037964b0(lVar8,0x710428ff7d), param_2 = extraout_x1,
       plVar9 != (long *)0x0)) {
      auVar34 = (**(code **)(*plVar9 + 0x138))();
      param_2 = auVar34._8_8_;
      if ((auVar34._0_8_ & 1) == 0) goto LAB_7101dde368;
    }
    FUN_7103775fa0((long *)**(undefined8 **)(lVar26 + 8),param_2,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined4 *)(lVar26 + 0xa0) = 0;
    param_2 = extraout_x1_00;
  }
LAB_7101dde368:
  if (*(int *)(lVar26 + 0xa4) == 0) {
    iVar7 = *(int *)(*(long *)(lVar26 + 0x28) + 0x254);
    if (*(int *)(lVar26 + 0xb4) != iVar7) {
      *(int *)(lVar26 + 0xb4) = iVar7;
      FUN_7101ddcea0(lVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else if (*(int *)(lVar26 + 0xa4) == 1) {
    if (*(int *)(lVar26 + 0xa8) - 3U < 2) {
      if (*(int *)(lVar26 + 0xb8) != -1) {
        FUN_7103776910(&local_108,lVar26 + 0x18,(long ****)"set_txt_help",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar6 = local_100[0];
        pplVar13 = *local_100[0];
        if (pplVar13 != (long **)0x0) {
          *(byte *)(pplVar13 + 0xb) = *(byte *)(pplVar13 + 0xb) & 0xfe;
        }
        local_108 = &PTR_FUN_710523d9a8;
        local_100[0] = (long ***)0x0;
        if (ppplVar6 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar6);
        }
        *(undefined4 *)(lVar26 + 0xb8) = 0xffffffff;
      }
    }
    else {
      iVar7 = *(int *)(*(long *)(lVar26 + 0x40) + 0x2a4);
      if (*(int *)(lVar26 + 0xb8) != iVar7) {
        if (*(int *)(lVar26 + 0xb8) != -1) {
          lVar8 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar8 + 0x48) - *(long *)(lVar8 + 0x40) >> 3) < 2) {
            uVar27 = 0;
            if (*(char *)(lVar8 + 0x191) == '\0') goto LAB_7101dde45c;
LAB_7101dde4cc:
            local_140 = 0x87650000000000;
            local_130 = 0xffffffffffffffff;
            uStack_128 = 0;
            local_158[0] = 0;
            local_120 = 0;
          }
          else {
            uVar27 = *(ulong *)(*(long *)(lVar8 + 0x40) + 8);
            if (*(char *)(lVar8 + 0x191) != '\0') goto LAB_7101dde4cc;
LAB_7101dde45c:
            param_3 = (long ****)&DAT_00000004;
            uVar10 = FUN_7103313f20(lVar8,uVar27,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            param_2 = extraout_x1_01;
            if ((uVar10 & 1) == 0) goto LAB_7101dde4cc;
            FUN_71024076d0(local_158,uVar27);
            param_2 = extraout_x1_02;
            if (((local_148 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_140 == DAT_7106dd53ac)) {
              piVar14 = (int *)(local_148 + 0x38);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar14,0x10);
                if (bVar4) {
                  *piVar14 = *piVar14 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
          }
          local_150 = &PTR_FUN_7104f73d50;
          local_148 = 0;
          local_138 = 0;
        }
        *(int *)(lVar26 + 0xb8) = iVar7;
        FUN_7101ddcd20(lVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  if (0 < *(int *)(lVar26 + 0xbc)) {
    *(int *)(lVar26 + 0xbc) = *(int *)(lVar26 + 0xbc) + -1;
  }
  FUN_7103776640(&local_168,lVar26 + 0x18,(byte ****)"set_parts_sp",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar27 = local_160;
  lVar8 = *(long *)(local_160 + 8);
  if (((lVar8 != 0) &&
      ((plVar9 = (long *)FUN_71037964b0(lVar8,0x71043beb1c), plVar9 == (long *)0x0 ||
       ((uVar10 = (**(code **)(*plVar9 + 0x138))(), (uVar10 & 1) != 0 &&
        (lVar8 = *(long *)(local_160 + 8), lVar8 != 0)))))) &&
     (plVar9 = (long *)FUN_71037964b0(lVar8,0x71043beb1c), plVar9 != (long *)0x0)) {
    (**(code **)(*plVar9 + 0x1a0))(0);
  }
  FUN_7103399c10(*(long *)(lVar26 + 0x98));
  iVar7 = *(int *)(lVar26 + 0x101c) + -1;
  if ((0 < *(int *)(lVar26 + 0x101c)) && (*(int *)(lVar26 + 0x101c) = iVar7, iVar7 == 0)) {
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x600) + 0x4aa) = 1;
    lVar8 = *(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x600);
    memset((void *)(lVar8 + 0x198),0,0x264);
    *(undefined8 *)(lVar8 + 0x40c) = 0;
    *(undefined8 *)(lVar8 + 0x424) = 0;
    *(undefined4 *)(lVar8 + 0x480) = 0;
    uVar5 = uRam0000007107459008;
    uVar16 = _ConstantZero;
    *(undefined8 *)(lVar8 + 0x4a0) = 0;
    *(undefined8 *)(lVar8 + 0x468) = uVar5;
    *(undefined8 *)(lVar8 + 0x460) = uVar16;
    *(undefined8 *)(lVar8 + 0x438) = uVar5;
    *(undefined8 *)(lVar8 + 0x430) = uVar16;
    *(undefined8 *)(lVar8 + 0x448) = uVar5;
    *(undefined8 *)(lVar8 + 0x440) = uVar16;
    *(undefined8 *)(lVar8 + 0x458) = uVar5;
    *(undefined8 *)(lVar8 + 0x450) = uVar16;
    *(undefined8 *)(lVar8 + 0x498) = 0;
    lVar8 = *(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x608);
    if (*(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x610) == lVar8) goto LAB_7101ddef44;
    *(undefined1 *)(*(long *)(lVar8 + 8) + 0x4aa) = 1;
    param_4 = (byte ****)0x1;
    param_3 = (long ****)0x0;
    FUN_7103783c10((long *)(lVar26 + 0x40),*(int *)(lVar26 + 0x1020),0,1,param_5,param_6,param_7,
                   param_8);
    FUN_7101ddcd20(lVar26,extraout_x1_03,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  switch(*(undefined4 *)(lVar26 + 0xa8)) {
  case 2:
    iVar7 = *(int *)(*(long *)(lVar26 + 0x40) + 0x2b8);
    if (iVar7 == 2) {
      lVar8 = *(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x600);
      if ((*(char *)(lVar8 + 0x4aa) == '\0') || ((*(byte *)(lVar8 + 0x19c) >> 1 & 1) == 0))
      goto switchD_7101dde67c_default;
    }
    else if (iVar7 != 1) goto switchD_7101dde67c_default;
    plVar9 = *(long **)(lVar26 + 0x30);
    uVar16 = 0x200000003;
    break;
  case 3:
    lVar8 = *(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x600);
    if (*(char *)(lVar8 + 0x4aa) == '\0') {
      bVar18 = 0;
      bVar22 = 0;
    }
    else {
      bVar18 = *(byte *)(lVar8 + 0x1a4) >> 1 & 1;
      bVar22 = *(byte *)(lVar8 + 0x1a0) >> 1 & 1;
    }
    if (*(int *)(*(long *)(lVar26 + 0x30) + 0x254) == 0xb) {
      if (*(char *)(lVar8 + 0x4aa) != '\0') {
        if ((*(byte *)(lVar8 + 0x198) >> 1 & 1) != 0) {
          lVar8 = *(long *)(lVar26 + 0x40);
          iVar7 = *(int *)(lVar8 + 0x2a4);
          if (iVar7 != -1) {
            iVar1 = *(int *)(lVar8 + 0x28c);
            iVar23 = 0;
            if (iVar1 != 0) {
              iVar23 = iVar7 / iVar1;
            }
            iVar7 = iVar7 - iVar23 * iVar1;
          }
          iVar23 = (int)((ulong)(*(long *)(lVar26 + 0x58) - *(long *)(lVar26 + 0x50)) >> 2);
          iVar1 = iVar23 + -1;
          if (iVar23 == 0) {
            iVar20 = -1;
            iVar24 = iVar7 + 1;
            if (iVar24 == 0 || iVar7 < -1) goto LAB_7101ddead0;
LAB_7101dde914:
            if (iVar23 != 0) {
              iVar23 = 0;
              if (*(int *)(lVar8 + 0x28c) != 0) {
                iVar23 = iVar1 / *(int *)(lVar8 + 0x28c);
              }
              if (0 < iVar23) {
                iVar24 = 0;
                if (iVar23 != 0) {
                  iVar24 = (iVar1 - iVar20) / iVar23;
                }
                iVar20 = ((iVar1 - iVar20) + iVar7) - iVar24;
              }
            }
          }
          else {
            iVar20 = *(int *)(lVar8 + 0x28c);
            iVar24 = 0;
            if (iVar20 != 0) {
              iVar24 = iVar1 / iVar20;
            }
            iVar20 = iVar1 - iVar24 * iVar20;
            iVar24 = iVar7 - iVar20;
            if (iVar24 != 0 && iVar20 <= iVar7) goto LAB_7101dde914;
LAB_7101ddead0:
            iVar20 = iVar24 + iVar1;
          }
          *(int *)(lVar26 + 0xe4) = iVar20;
          goto LAB_7101ddead8;
        }
        if (((*(byte *)(lVar8 + 0x19c) >> 1 & 1) != 0) || ((*(byte *)(lVar8 + 0x19c) >> 3 & 1) != 0)
           ) {
          iVar7 = *(int *)(*(long *)(lVar26 + 0x40) + 0x2a4);
          if (iVar7 != -1) {
            iVar1 = *(int *)(*(long *)(lVar26 + 0x40) + 0x28c);
            iVar23 = 0;
            if (iVar1 != 0) {
              iVar23 = iVar7 / iVar1;
            }
            iVar7 = iVar7 - iVar23 * iVar1;
          }
          *(int *)(lVar26 + 0xe4) = iVar7;
          goto LAB_7101ddead8;
        }
      }
      if ((bVar18 | bVar22) == 0) goto switchD_7101dde67c_default;
      *(undefined4 *)(lVar26 + 0xe4) = 0;
LAB_7101ddead8:
      iVar7 = 2;
    }
    else {
      if (*(int *)(*(long *)(lVar26 + 0x30) + 0x25c) == 10) {
        FUN_7101ddc990(lVar26,4,param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(lVar26 + 0xb0) = 0;
        goto switchD_7101dde67c_default;
      }
      if ((*(char *)(lVar26 + 0x1039) == '\0') || ((bVar18 | bVar22) != 1))
      goto switchD_7101dde67c_default;
      iVar7 = 5;
    }
    FUN_7101ddc990(lVar26,iVar7,param_3,param_4,param_5,param_6,param_7,param_8);
    goto switchD_7101dde67c_default;
  case 4:
    plVar9 = *(long **)(lVar26 + 0x90);
    FUN_71032cc6c0(plVar9);
    uVar16 = extraout_x1_04;
    if (*plVar9 != 0) {
      pcVar15 = (code *)plVar9[1];
      uVar10 = plVar9[2] & 1;
      if (uVar10 != 0 || pcVar15 != (code *)0x0) {
        if (uVar10 != 0) {
          pcVar15 = *(code **)(pcVar15 + *(long *)(*plVar9 + (plVar9[2] >> 1)));
        }
        (*pcVar15)();
        uVar16 = extraout_x1_05;
      }
    }
    *(int *)((long)plVar9 + 0xbc) = *(int *)((long)plVar9 + 0xbc) + 1;
    if (*(int *)(*(long *)(lVar26 + 0x90) + 0xb8) != 0) {
      iVar7 = *(int *)(*(long *)(lVar26 + 0x90) + 0x130);
      if (iVar7 != -2) {
        FUN_71032cc9f0(lVar26 + 0x70);
        if (iVar7 < 0) {
          lVar8 = *(long *)(lVar26 + 200);
          uVar10 = *(long *)(lVar26 + 0xd0) - lVar8;
        }
        else {
          lVar8 = *(long *)(lVar26 + 200);
          uVar10 = *(long *)(lVar26 + 0xd0) - lVar8;
          if ((ulong)(long)iVar7 < uVar10) {
            *(int *)(lVar26 + 0xc0) = iVar7;
          }
        }
        if (uVar10 <= (ulong)(long)*(int *)(lVar26 + 0xc0)) {
LAB_7101ddef44:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        bVar18 = *(byte *)(lVar8 + *(int *)(lVar26 + 0xc0));
        if (*(char *)(lVar26 + 0xb0) == '\0') {
          sVar25 = -1;
        }
        else {
          sVar25 = -1;
          if (2 < bVar18) {
            uVar10 = (ulong)*(int *)(*(long *)(lVar26 + 0x40) + 0x2a4);
            if ((ulong)(*(long *)(lVar26 + 0x58) - *(long *)(lVar26 + 0x50) >> 2) <= uVar10)
            goto LAB_7101ddef44;
            sVar25 = *(short *)(*(long *)(lVar26 + 0x50) + uVar10 * 4);
          }
        }
        FUN_7101ddc3a0(lVar26,bVar18,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7102528ea0((undefined8 *)(lVar26 + 0x50),bVar18);
        plVar9 = (long *)(lVar26 + 0x40);
        *(byte *)(lVar26 + 0x68) = bVar18;
        FUN_710377cc80(*plVar9,1);
        if (sVar25 == -1) {
          uVar11 = 0;
          *(undefined4 *)(lVar26 + 0xe4) = 0;
        }
        else {
          psVar17 = *(short **)(lVar26 + 0x50);
          lVar8 = *(long *)(lVar26 + 0x58) - (long)psVar17;
          if (lVar8 != 0) {
            uVar10 = 0;
            do {
              if (*psVar17 == sVar25) {
                uVar11 = (uint)uVar10 & ((int)(uint)uVar10 >> 0x1f ^ 0xffffffffU);
                goto LAB_7101ddee34;
              }
              uVar10 = uVar10 + 1;
              psVar17 = psVar17 + 2;
            } while (uVar10 < (ulong)(lVar8 >> 2));
          }
          uVar11 = 0;
LAB_7101ddee34:
          *(uint *)(lVar26 + 0xe4) = uVar11;
        }
        param_4 = (byte ****)0x1;
        param_3 = (long ****)0x0;
        FUN_7103783c10(plVar9,uVar11,0,1,param_5,param_6,param_7,param_8);
        if (((((*(char *)(lVar26 + 0xb0) == '\0') && (iVar7 = *(int *)(lVar26 + 0xe4), -1 < iVar7))
             && (lVar8 = *plVar9, iVar7 < *(int *)(lVar8 + 0x288))) &&
            ((iVar7 = iVar7 - *(int *)(lVar8 + 0x29c), -1 < iVar7 &&
             (iVar7 < *(int *)(lVar8 + 0x2c4))))) &&
           ((iVar7 < *(int *)(lVar8 + 0x2c0) &&
            (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x168) + (long)iVar7 * 8) + 0x28),
            plVar9 != (long *)0x0)))) {
          (**(code **)(*plVar9 + 0x218))(plVar9,0);
          (**(code **)(*plVar9 + 0x410))(plVar9);
          (**(code **)(*plVar9 + 0x3f0))(plVar9,0);
          iVar7 = (**(code **)(*plVar9 + 0x140))(plVar9);
          if ((iVar7 != 6) && (iVar7 = (**(code **)(*plVar9 + 0x140))(plVar9), iVar7 != 1)) {
            (**(code **)(*plVar9 + 0x400))(plVar9);
          }
          uVar10 = (**(code **)(*plVar9 + 0x158))(plVar9);
          if ((uVar10 & 1) == 0) {
            (**(code **)(*plVar9 + 0x370))(plVar9);
          }
        }
      }
      goto switchD_7101dde67c_default;
    }
    FUN_7103775fa0((long *)**(undefined8 **)(lVar26 + 0x10),uVar16,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(lVar26 + 0x84) & 0x1f) ^ 0xffffffffU);
    if (*(char *)(lVar26 + 0xb0) != '\0') goto LAB_7101ddead8;
    iVar7 = *(int *)(lVar26 + 0xa8);
    if (iVar7 == 3) goto switchD_7101dde67c_default;
    plVar9 = *(long **)(lVar26 + 0x30);
    *(undefined4 *)(lVar26 + 0xa8) = 3;
    *(int *)(lVar26 + 0xac) = iVar7;
    goto LAB_7101dde9c0;
  case 5:
    if ((int)((ulong)(*(long *)(lVar26 + 0x58) - *(long *)(lVar26 + 0x50)) >> 2) == 0)
    goto switchD_7101dde67c_default;
    lVar8 = *(long *)(*(long *)**(undefined8 **)(lVar26 + 8) + 0x600);
    if (*(char *)(lVar8 + 0x4aa) == '\0') {
      bVar18 = 0;
    }
    else {
      bVar18 = *(byte *)(lVar8 + 0x19c) >> 1 & 1;
      if ((*(byte *)(lVar8 + 0x198) >> 1 & 1) != 0) goto LAB_7101ddead8;
    }
    if (bVar18 != 0) goto LAB_7101ddead8;
    if (*(char *)(lVar8 + 0x4aa) == '\0') {
      bVar18 = 0;
LAB_7101dde780:
      if (bVar18 == 0) goto switchD_7101dde67c_default;
    }
    else {
      bVar18 = *(byte *)(lVar8 + 0x1a0) >> 1 & 1;
      if ((*(byte *)(lVar8 + 0x1a4) >> 1 & 1) == 0) goto LAB_7101dde780;
    }
    plVar9 = *(long **)(lVar26 + 0x30);
    uVar16 = 0x500000003;
    break;
  default:
    goto switchD_7101dde67c_default;
  }
  *(undefined8 *)(lVar26 + 0xa8) = uVar16;
LAB_7101dde9c0:
  (**(code **)(*plVar9 + 0x70))(plVar9,1);
  plVar9 = *(long **)(lVar26 + 0x30);
  (**(code **)(*plVar9 + 0x60))(plVar9,1);
  param_3 = (long ****)0x0;
  FUN_7103771a80((long *)(lVar26 + 0x30),10,0);
  (**(code **)(**(long **)(lVar26 + 0x40) + 0x70))(*(long **)(lVar26 + 0x40),0);
  (**(code **)(**(long **)(lVar26 + 0x38) + 0x70))(*(long **)(lVar26 + 0x38),0);
switchD_7101dde67c_default:
  if (((*(int *)(lVar26 + 0xa4) == 1) && (*(int *)(*(long *)(lVar26 + 0x30) + 0x25c) == 10)) &&
     (uVar10 = FUN_7101ddd370(lVar26), (uVar10 & 1) == 0)) {
    FUN_7101ddc990(lVar26,4,param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(lVar26 + 0xa8) == 3) {
      *(undefined1 *)(lVar26 + 0xb0) = 0;
    }
    else {
      *(undefined1 *)(lVar26 + 0xb0) = 1;
    }
  }
  *(undefined1 *)(lVar26 + 0xff0) = 0;
  *(undefined4 *)(lVar26 + 0xff4) = 0;
  uVar2 = *(ushort *)(lVar26 + 0x1018);
  lVar8 = *(long *)(DAT_710532f730 + 8);
  if (uVar2 >> 4 < 0x177) {
    puVar19 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
  }
  else {
    puVar19 = &DAT_710532a878;
    if (((ushort)(uVar2 + 0xe890) < 100) &&
       (lVar21 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
       *(short *)(lVar21 + 0x88cc8) != -1)) {
      puVar19 = (undefined2 *)(lVar21 + 0x88cc0);
    }
  }
  uVar10 = FUN_71032a9470(*(long *)(lVar8 + 0x1d8),puVar19[4]);
  ppppppppplVar12 = &local_c0;
  local_90 = 0x3f80000000000000;
  local_c0 = (long ********)0x0;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_a8 = 0x3f80000000000000;
  local_a0 = 0;
  uStack_98 = 0x3f800000;
  FUN_71032ab730(lVar8 + 0x1e0,uVar10,ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
  fVar28 = (local_b0._4_4_ + -530.0) - (float)local_b8 * 1.4;
  fVar29 = ((float)local_a8 + 10.0) - local_b8._4_4_ * 1.4;
  uVar10 = 0;
  lVar8 = lVar26 + 0x110;
  do {
    if (*(int *)(lVar8 + -0x20) != 0) {
      *(int *)(lVar26 + 0xff4) = *(int *)(lVar26 + 0xff4) + 1;
      FUN_71003a4ca0((uint *)&local_108,"set_parts_anim_icon_%02d",uVar10 & 0xffffffff,
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_118,lVar26 + 0x18,local_100,ppppppppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      iVar7 = *(int *)(lVar8 + -0x20);
      plVar9 = local_110;
      if (iVar7 == 3) {
        *(undefined1 *)(lVar26 + 0xff0) = 1;
        *(undefined4 *)(lVar8 + -0x20) = 0;
      }
      else if (iVar7 == 2) {
        lVar21 = *local_110;
        if (lVar21 != 0) {
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
        }
        *(undefined4 *)(lVar8 + -0x20) = 3;
        FUN_710373b540(lVar8,0);
        plVar9 = local_110;
      }
      else if (iVar7 == 1) {
        iVar7 = *(int *)(lVar8 + -0x1c) + 1;
        uVar16 = *(undefined8 *)(lVar8 + -0x10);
        fVar30 = (float)iVar7 / 12.0;
        *(int *)(lVar8 + -0x1c) = iVar7;
        fVar31 = sinf(fVar30 * 3.1415927);
        if (*(int *)(lVar8 + -0x1c) < 0xd) {
          fVar32 = (float)uVar16;
          fVar33 = (float)((ulong)uVar16 >> 0x20);
          uVar16 = CONCAT44(fVar31 * 100.0 + fVar33 + (fVar29 - fVar33) * fVar30,
                            fVar32 + (fVar28 - fVar32) * fVar30);
        }
        else {
          *(undefined4 *)(lVar8 + -0x20) = 2;
          uVar16 = CONCAT44(fVar29,fVar28);
        }
        lVar21 = *local_110;
        plVar9 = local_110;
        if (lVar21 != 0) {
          *(undefined8 *)(lVar21 + 0x30) = uVar16;
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 0x10;
        }
      }
      local_118 = &PTR_FUN_710523d9a8;
      local_110 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar9);
      }
    }
    uVar10 = uVar10 + 1;
    lVar8 = lVar8 + 0x60;
  } while (uVar10 != 0x28);
  local_168 = &PTR_FUN_710523d988;
  local_160 = 0;
  if (uVar27 != 0) {
    uVar10 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar27);
  }
  if ((*(int *)(*(long *)(param_1 + 0x80) + 0xa0) == 0) && (*(char *)(param_1 + 0x70) != '\x01')) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}

