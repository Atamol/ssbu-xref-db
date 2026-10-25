// addr:      7101b025a0
// offset:    0x1b025a0
// name:      FUN_7101b025a0
// mangled:   
// signature: undefined __cdecl FUN_7101b025a0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101b025a0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  short *psVar2;
  long ************pppppppppppplVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long ***********ppppppppppplVar18;
  long *plVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar20;
  undefined8 extraout_x1_09;
  char *pcVar21;
  undefined8 extraout_x1_10;
  long *********ppppppppplVar22;
  byte ****ppppbVar23;
  undefined2 uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  undefined8 *puVar28;
  long **********pppppppppplVar29;
  long ***********ppppppppppplVar30;
  int *piVar31;
  undefined4 uVar32;
  long *plVar33;
  long lVar34;
  undefined8 *puVar35;
  ushort uVar36;
  long ************pppppppppppplVar37;
  long lVar38;
  long ************pppppppppppplVar39;
  long ************pppppppppppplVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 local_150;
  undefined4 local_140;
  undefined4 local_130 [2];
  undefined **local_128;
  long local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long ***********local_f0;
  long ************pppppppppppplStack_e8;
  long ************local_e0;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  byte local_a8;
  undefined4 uStack_a7;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined8 *local_a0;
  undefined **local_98;
  ulong local_90;
  long ***********local_88;
  ulong local_80;
  
  if (*(int *)(param_1 + 0x264) != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 1000) + 8);
    if ((plVar14 != (long *)0x0) && (uVar15 = (**(code **)(*plVar14 + 0x138))(), (uVar15 & 1) == 0))
    {
      return;
    }
    lVar27 = *(long *)(DAT_710532f7c8 + 8);
    if (*(char *)(lVar27 + 0x6a) == '\0') {
      return;
    }
    if (*(char *)(lVar27 + 0x6b) != '\0') {
      return;
    }
    if (*(char *)(lVar27 + 0x69) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x528) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x518) + 0x4aa) = 1;
    if (0x12 < *(uint *)(param_1 + 0x25c)) goto LAB_7101b03b30;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x25c) * 4 + 0x210) = 0x13;
    puVar1 = (uint *)(param_1 + 0x25c);
    if ((*(char *)(param_1 + 0x520) == '\0') && ((int)*puVar1 < 0x12)) {
      uVar12 = *puVar1 + 1;
      *puVar1 = uVar12;
      if (0x12 < uVar12) goto LAB_7101b03b30;
      *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 0x12;
    }
    iVar13 = *(int *)(param_1 + 0x278);
    if (iVar13 == 6) {
      if ((int)*puVar1 < 0x12) {
        uVar12 = *puVar1 + 1;
        *puVar1 = uVar12;
        if (0x12 < uVar12) goto LAB_7101b03b30;
        *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 8;
        iVar13 = *(int *)(param_1 + 0x278);
        goto LAB_7101b026a4;
      }
LAB_7101b02e0c:
      iVar13 = *(int *)(param_1 + 0x278);
LAB_7101b02e10:
      if (iVar13 == 2) {
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          uVar32 = 4;
          goto LAB_7101b02e6c;
        }
      }
      else if ((iVar13 == 3) && ((int)*puVar1 < 0x12)) {
        uVar12 = *puVar1 + 1;
        *puVar1 = uVar12;
        if (0x12 < uVar12) goto LAB_7101b03b30;
        uVar32 = 3;
LAB_7101b02e6c:
        *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = uVar32;
      }
    }
    else {
LAB_7101b026a4:
      if ((iVar13 == 1) && (*(int *)(param_1 + 0x3a8) != 0)) {
        plVar14 = *(long **)(param_1 + 0x418);
        plVar33 = *(long **)(param_1 + 0x420);
        if (plVar14 != plVar33) {
          uVar15 = (long)plVar33 + (-8 - (long)plVar14);
          if (((uint)uVar15 >> 3 & 1) == 0) {
            if ((*(byte *)(*plVar14 + 0x1d) & 0xfc) != 0) {
              *(undefined1 *)(*plVar14 + 0x31) = 1;
            }
            plVar14 = plVar14 + 1;
          }
          if (7 < uVar15) {
            do {
              if ((*(byte *)(*plVar14 + 0x1d) & 0xfc) != 0) {
                *(undefined1 *)(*plVar14 + 0x31) = 1;
              }
              if ((*(byte *)(plVar14[1] + 0x1d) & 0xfc) != 0) {
                *(undefined1 *)(plVar14[1] + 0x31) = 1;
              }
              plVar14 = plVar14 + 2;
            } while (plVar14 != plVar33);
          }
        }
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 0x11;
          goto LAB_7101b02754;
        }
      }
      else {
LAB_7101b02754:
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 0x10;
        }
      }
      iVar13 = *(int *)(param_1 + 0x278);
      if (iVar13 == 6) {
LAB_7101b02d60:
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 9;
        }
LAB_7101b02d88:
        iVar13 = *(int *)(param_1 + 0x278);
        if (iVar13 == 6) {
          if ((int)*puVar1 < 0x12) {
            uVar12 = *puVar1 + 1;
            *puVar1 = uVar12;
            if (0x12 < uVar12) goto LAB_7101b03b30;
            *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 5;
            if (*(int *)(param_1 + 0x25c) < 0x12) {
              uVar12 = *(int *)(param_1 + 0x25c) + 1;
              *puVar1 = uVar12;
              if (0x12 < uVar12) goto LAB_7101b03b30;
              *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 6;
              if (*(int *)(param_1 + 0x25c) < 0x12) {
                uVar12 = *(int *)(param_1 + 0x25c) + 1;
                *puVar1 = uVar12;
                if (0x12 < uVar12) goto LAB_7101b03b30;
                *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 7;
              }
            }
          }
          goto LAB_7101b02e0c;
        }
        goto LAB_7101b02e10;
      }
      if (iVar13 != 3) {
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 0xd;
          iVar13 = *(int *)(param_1 + 0x278);
        }
        if (iVar13 == 2) goto LAB_7101b02d60;
        if ((int)*puVar1 < 0x12) {
          uVar12 = *puVar1 + 1;
          *puVar1 = uVar12;
          if (0x12 < uVar12) goto LAB_7101b03b30;
          uVar32 = 4;
          goto LAB_7101b02d5c;
        }
        goto LAB_7101b02d88;
      }
      if ((int)*puVar1 < 0x12) {
        uVar12 = *puVar1 + 1;
        *puVar1 = uVar12;
        if (0x12 < uVar12) goto LAB_7101b03b30;
        uVar32 = 0xf;
LAB_7101b02d5c:
        *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = uVar32;
        goto LAB_7101b02d60;
      }
    }
    if (*(long *)(param_1 + 0x4e8) == *(long *)(param_1 + 0x4f0)) {
      return;
    }
    if (((*(char *)(param_1 + 0x431) != '\0') &&
        (*(long **)(param_1 + 0x420) != *(long **)(param_1 + 0x418))) &&
       (*(char *)(**(long **)(param_1 + 0x418) + 8) == '\x04')) {
      return;
    }
    if (0x11 < (int)*puVar1) {
      return;
    }
    uVar12 = *puVar1 + 1;
    *puVar1 = uVar12;
    if (uVar12 < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 0x210) = 0xc;
      return;
    }
LAB_7101b03b30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)(param_1 + 0x528) = 1;
  if (((DAT_7105333fc0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_7105333fc0), iVar13 != 0)) {
    DAT_7105333f70 = 0;
    DAT_7105333f78 = 0;
    __cxa_guard_release(&DAT_7105333fc0);
  }
  local_a0 = (undefined8 *)0x0;
  uStack_a2 = 0;
  local_b0._0_1_ = 0x18;
  local_b0._1_7_ = 0x5661726f727541;
  local_a8 = 0x69;
  uStack_a7 = 0x6e6f6973;
  uStack_a3 = 0;
  plVar14 = FUN_710356a030((long *)(DAT_7105338018 + 0x18),(byte *)&local_b0);
  lVar27 = *(long *)(*(long *)(plVar14[5] + 0x10) + 0x28);
  *(undefined8 *)(lVar27 + 0x13e8) = DAT_7105333f78;
  *(undefined8 *)(lVar27 + 0x13e0) = DAT_7105333f70;
  FUN_710377cc80(*(long *)(param_1 + 0x400),1);
  lVar27 = *(long *)(param_1 + 0x400);
  local_a8 = 0;
  uStack_a7 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_a0 = (undefined8 *)0x0;
  local_b0._0_1_ = 0;
  local_b0._1_7_ = 0;
  FUN_71019bb740(&local_b0,*(long *)(lVar27 + 0x170) - *(long *)(lVar27 + 0x168) >> 3,
                 (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar33 = *(long **)(lVar27 + 0x170);
  for (plVar14 = *(long **)(lVar27 + 0x168); plVar14 != plVar33; plVar14 = plVar14 + 1) {
    puVar28 = (undefined8 *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,local_a8)));
    if (puVar28 == local_a0) {
      FUN_71019bb8f0((long *)&local_b0,(undefined8 *)(*plVar14 + 8),(long ****)param_3,param_4,
                     param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(puVar28,(undefined8 *)(*plVar14 + 8),(long ****)param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      lVar27 = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,local_a8))) + 0x10;
      local_a8 = (byte)lVar27;
      uStack_a7 = (undefined4)((ulong)lVar27 >> 8);
      uStack_a3 = (undefined1)((ulong)lVar27 >> 0x28);
      uStack_a2 = (undefined2)((ulong)lVar27 >> 0x30);
    }
  }
  lVar34 = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,local_a8)));
  for (lVar27 = CONCAT71(local_b0._1_7_,(byte)local_b0); lVar27 != lVar34; lVar27 = lVar27 + 0x10) {
    FUN_7103778300(0x3f800000,*(long *)(lVar27 + 8),0x71042d5dfa);
  }
  plVar14 = *(long **)(param_1 + 0x40);
  if (plVar14 != (long *)0x0) {
    lVar38 = *(long *)*plVar14;
    iVar13 = *(int *)(param_1 + 0x494);
    *(undefined4 *)((long *)*plVar14 + 2) = 0;
    plVar33 = *(long **)(lVar38 + 0x10);
    *plVar33 = lVar38;
    *(undefined4 *)(plVar33 + 1) = 0x48;
    lVar27 = *(long *)(lVar38 + 0x10);
    *(long *)(lVar38 + 0x10) = lVar27 + 0x10;
    lVar34 = *(long *)(*(long *)(lVar38 + 0x18) + 200);
    *(long *)(lVar38 + 0x10) = lVar27;
    if (lVar34 == lVar38) {
      lVar27 = *(long *)(*(long *)(lVar38 + 0x18) + 0x40);
      if (*(uint *)(lVar27 + 0xc) < 2) {
        plVar33 = (long *)(*(long *)(lVar27 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar27 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar33[3] == 0x13) && (plVar19 = plVar33, plVar33[2] == 2)) break;
          piVar31 = (int *)((long)plVar33 + 0x1c);
          plVar33 = plVar33 + (long)*piVar31 * 4;
          plVar19 = &DAT_7104862960;
        } while (*piVar31 != 0);
      }
      else {
        plVar19 = (long *)(*(long *)(lVar27 + 0x10) + 0x10);
      }
      param_3 = "initialize";
      FUN_71038f4d40(lVar38,plVar19,"initialize");
    }
    else {
      FUN_71038f4b20(lVar38,"initialize");
      FUN_71038f4fc0(lVar38,-2);
    }
    puVar28 = (undefined8 *)(*(long *)(lVar38 + 0x10) + -0x10);
    if ((puVar28 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar38 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar38 + 0x10) = puVar28;
    }
    else {
      lVar27 = *(long *)*plVar14;
      plVar33 = *(long **)(lVar27 + 0x10);
      *(undefined4 *)(plVar33 + 1) = 0x13;
      *plVar33 = (long)iVar13;
      *(long *)(lVar27 + 0x10) = *(long *)(lVar27 + 0x10) + 0x10;
      *(int *)(*plVar14 + 0x10) = *(int *)(*plVar14 + 0x10) + 1;
      FUN_7103377130(plVar14,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  lVar27 = param_1 + 0x3d0;
  *(undefined2 *)(param_1 + 0x490) = 0xffff;
  FUN_7103776910(&local_c0,lVar27,(long ****)"set_rep_fighter",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_d0,lVar27,(long ****)"set_rep_fighter_sdw",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(int *)(param_1 + 0x278) == 2) {
    FUN_7103776910(&local_f0,lVar27,(long ****)"set_view_search_bg",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar22 = (long *********)(ulong)*(byte *)(param_1 + 0x3a5);
    ppppbVar23 = (byte ****)&DAT_0000001b;
    plVar14 = FUN_710323ff60(*(long **)(param_1 + 0x270),*(byte *)(param_1 + 0x3a4),
                             (long ****)ppppppppplVar22,(byte ****)&DAT_0000001b,param_5,param_6,
                             param_7,param_8);
    pppppppppppplVar39 = pppppppppppplStack_e8;
    FUN_7103778b80((long)pppppppppppplStack_e8,(long)plVar14,ppppppppplVar22,ppppbVar23,param_5,
                   param_6,param_7,param_8);
    bVar11 = FUN_71025c9890(*(ushort *)(param_1 + 0x3a6));
    uVar12 = 2;
    if (!bVar11) {
      uVar12 = 0;
    }
    FUN_71025ae1b0(*(ushort *)(param_1 + 0x3a6),&local_c0,0,(byte ****)(ulong)uVar12,param_5,param_6
                   ,param_7,param_8);
    param_3 = (char *)0x0;
    param_4 = (byte ****)(ulong)uVar12;
    FUN_71025ae1b0(*(ushort *)(param_1 + 0x3a6),&local_d0,0,param_4,param_5,param_6,param_7,param_8)
    ;
    local_f0 = (long ***********)&PTR_FUN_710523d9a8;
    pppppppppppplStack_e8 = (long ************)0x0;
    if (pppppppppppplVar39 != (long ************)0x0) {
      FUN_710392eb40((ulong)pppppppppppplVar39);
    }
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x280);
    if (((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)) {
      lVar34 = **(long **)(param_1 + 0x298);
      if (lVar34 == 0) {
        lVar34 = *(long *)(DAT_710532f730 + 8);
        uVar12 = *(uint *)(param_1 + 0x288);
        bVar11 = FUN_7103265e70(lVar34 + 0x160,uVar15);
        if ((bVar11) && (iVar13 = *(int *)(param_1 + 0x2a0), iVar13 != -1)) {
          lVar34 = *(long *)(lVar34 + 0x168);
          puVar16 = FUN_71032631a0(lVar34,0x15d7061f77);
          if ((((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000) &&
             ((((ulong)puVar16 & 0xffffffffff) != 0 &&
              ((((ulong)puVar16 ^ uVar15) & 0xffffffffff) == 0)))) {
            iVar25 = 6;
          }
          else {
            puVar16 = FUN_71032631a0(lVar34,0x1257ab1d87);
            if ((((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar16 & 0xffffffffff) != 0)) {
              bVar11 = (((ulong)puVar16 ^ uVar15) & 0xffffffffff) == 0;
            }
            else {
              bVar11 = ((ulong)puVar16 & 0xffffffffff) != 0 &&
                       ((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000;
            }
            iVar25 = 4;
            if (bVar11) {
              iVar25 = 5;
            }
          }
          if (DAT_710532f758 == (long *)0x0) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = *(uint *)(*(long *)(*DAT_710532f758 + (ulong)(uint)(iVar25 + iVar13 * 10) * 8 +
                                        0xd8) + 0x198);
          }
          if ((((long *)local_b8[1] != (long *)0x0) && (DAT_710593bc38 != 0)) && (uVar12 < 0x20)) {
            if (0x1f < (ulong)(long)(int)uVar12) goto LAB_7101b03b30;
            lVar34 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar12 * 8);
            if (lVar34 != 0) {
              FUN_710379e9c0((long *)local_b8[1],lVar34,0);
            }
          }
          plVar14 = (long *)local_c8[1];
          if (((plVar14 != (long *)0x0) && (DAT_710593bc38 != 0)) && (uVar12 < 0x20)) {
            if (0x1f < (ulong)(long)(int)uVar12) goto LAB_7101b03b30;
            plVar33 = *(long **)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar12 * 8);
            if (plVar33 != (long *)0x0) goto LAB_7101b02f00;
          }
          goto LAB_7101b02fe4;
        }
        param_4 = (byte ****)0x3;
        ppppppppplVar22 = (long *********)(ulong)uVar12;
        plVar14 = FUN_710323f330(*(long **)(param_1 + 0x270),uVar15,(ulong)ppppppppplVar22,3,param_5
                                 ,param_6,param_7,param_8);
        FUN_7103778b80((long)local_b8,(long)plVar14,ppppppppplVar22,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103778b80((long)local_c8,(long)plVar14,ppppppppplVar22,param_4,param_5,param_6,param_7,
                       param_8);
        lVar34 = 7;
      }
      else {
        if (local_b8[1] != 0) {
          plVar14 = (long *)(*(long **)(param_1 + 0x298))[1];
          if (plVar14 == (long *)0x0) {
            plVar33 = (long *)(*(long *)(lVar34 + 8) + 0x188);
          }
          else {
            plVar19 = plVar14 + 1;
            do {
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *plVar19 = *plVar19 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar33 = (long *)(*(long *)(lVar34 + 8) + 0x188);
            do {
              lVar34 = *plVar19;
              cVar5 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar11) {
                *plVar19 = lVar34 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar34 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
          uVar15 = (**(code **)(*plVar33 + 0x30))(plVar33);
          if ((uVar15 & 1) == 0) {
            FUN_71037790a0((long)local_b8,1,(long *********)param_3,param_4,param_5,param_6,param_7,
                           param_8);
          }
          else {
            param_3 = (char *)0x0;
            FUN_710379e9c0((long *)local_b8[1],plVar33,0);
          }
        }
        if (local_c8[1] == 0) {
LAB_7101b02fe4:
          uVar12 = 7;
          lVar34 = 1;
        }
        else {
          lVar34 = **(long **)(param_1 + 0x298);
          if (lVar34 != 0) {
            plVar14 = (long *)(*(long **)(param_1 + 0x298))[1];
            if (plVar14 == (long *)0x0) {
              plVar33 = (long *)(*(long *)(lVar34 + 8) + 0x188);
            }
            else {
              plVar19 = plVar14 + 1;
              do {
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar11) {
                  *plVar19 = *plVar19 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              plVar33 = (long *)(*(long *)(lVar34 + 8) + 0x188);
              do {
                lVar34 = *plVar19;
                cVar5 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar11) {
                  *plVar19 = lVar34 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar34 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
                std::__shared_weak_count::__release_weak();
              }
            }
            uVar15 = (**(code **)(*plVar33 + 0x30))(plVar33);
            if ((uVar15 & 1) != 0) {
              plVar14 = (long *)local_c8[1];
LAB_7101b02f00:
              FUN_710379e9c0(plVar14,plVar33,0);
              goto LAB_7101b02fe4;
            }
          }
          lVar34 = 1;
          FUN_71037790a0((long)local_c8,1,(long *********)param_3,param_4,param_5,param_6,param_7,
                         param_8);
          uVar12 = 7;
        }
      }
      lVar38 = *(long *)(DAT_710532f730 + 8);
      uVar12 = FUN_7103280ec0(*(long *)(lVar38 + 0x2a8),*(ulong *)(param_1 + 0x280),(ulong)uVar12,
                              param_4,param_5,param_6,param_7,param_8);
      uVar15 = (&DAT_710455d6e8)[lVar34];
      uVar17 = 0;
      param_3 = (char *)(&DAT_710455d728)[lVar34];
      lVar38 = *(long *)(*(long *)(lVar38 + 0x2a8) + 8);
      auVar41 = FUN_710326ad60(ZEXT816(0),lVar38,uVar12,(&DAT_710455d6a8)[lVar34]);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar17;
      auVar42 = FUN_710326ad60(auVar42 << 0x40,lVar38,uVar12,uVar15);
      auVar43 = FUN_710326ad60(ZEXT816(0x3f800000),lVar38,uVar12,(ulong)param_3);
      puVar28 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar28 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_88 = (long ***********)((ulong)local_88 & 0xffffffff00000000);
          local_f0 = (long ***********)&SUB_00000020;
          param_3 = (char *)&local_f0;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
          if (((uVar15 & 1) != 0) &&
             (puVar28 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar28 != (undefined8 *)0x0)) goto LAB_7101b030dc;
        }
        puVar28 = (undefined8 *)0x0;
      }
LAB_7101b030dc:
      puVar28[2] = 0;
      puVar28[3] = 0;
      *puVar28 = 0;
      puVar28[1] = 0;
      local_140 = auVar41._0_4_;
      *puVar28 = *local_b8;
      local_150 = auVar42._0_4_;
      puVar28[1] = local_b8[1];
      puVar28[2] = local_b8[2];
      puVar28[3] = local_b8[3];
      pppppppppppplStack_e8 = (long ************)0x0;
      local_f0 = (long ***********)CONCAT44(local_150,local_140);
      FUN_7103779770(auVar43._0_4_,(long)puVar28,&local_f0);
      if (puVar28 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar28);
      }
      puVar28 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar28 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_88 = (long ***********)((ulong)local_88 & 0xffffffff00000000);
          local_f0 = (long ***********)&SUB_00000020;
          param_3 = (char *)&local_f0;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
          if (((uVar15 & 1) != 0) &&
             (puVar28 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar28 != (undefined8 *)0x0)) goto LAB_7101b031a0;
        }
        puVar28 = (undefined8 *)0x0;
      }
LAB_7101b031a0:
      puVar28[2] = 0;
      puVar28[3] = 0;
      *puVar28 = 0;
      puVar28[1] = 0;
      *puVar28 = *local_c8;
      puVar28[1] = local_c8[1];
      puVar28[2] = local_c8[2];
      puVar28[3] = local_c8[3];
      pppppppppppplStack_e8 = (long ************)0x0;
      local_f0 = (long ***********)CONCAT44(local_150,local_140);
      FUN_7103779770(auVar43._0_4_,(long)puVar28,&local_f0);
      if (puVar28 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar28);
      }
    }
    if (*(uint *)(param_1 + 0x2f4) < 4) {
      uVar24 = *(undefined2 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2f4) * 0x14 + 0x2a8);
    }
    else {
      uVar24 = 0xffff;
    }
    *(undefined2 *)(param_1 + 0x490) = uVar24;
  }
  FUN_7103776640(&local_f0,lVar27,(byte ****)"set_parts_spirit",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar36 = *(ushort *)(param_1 + 0x490);
  if ((pppppppppppplStack_e8[1] != (long ***********)0x0) &&
     (pppppppppplVar29 = pppppppppppplStack_e8[1][3], pppppppppplVar29 != (long **********)0x0)) {
    *(byte *)(pppppppppplVar29 + 0xb) = *(byte *)(pppppppppplVar29 + 0xb) & 0xfe | uVar36 != 0xffff;
    uVar36 = *(ushort *)(param_1 + 0x490);
  }
  uVar20 = extraout_x1;
  if (uVar36 != 0xffff) {
    bVar11 = FUN_71025c9890(uVar36);
    uVar12 = 2;
    if (!bVar11) {
      uVar12 = 0;
    }
    param_3 = (char *)(ulong)uVar12;
    param_5 = (long ****)0x2;
    param_4 = (byte ****)0x0;
    FUN_71025ae6d0((long)&local_f0,uVar36,(byte)uVar12,0,2,param_6,param_7,param_8);
    uVar20 = extraout_x1_00;
  }
  if (*(int *)(param_1 + 0x278) == 2) {
    uVar12 = *(uint *)(*DAT_7105329fa0 + 0x77c);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x470) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_98,(undefined8 *)(*(long *)(param_1 + 0x470) + 0x10),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_part_spirits",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar15 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
      }
      uVar36 = **(ushort **)(param_1 + 0x470);
      bVar11 = FUN_71025c9890(uVar36);
      uVar26 = 2;
      if (!bVar11) {
        uVar26 = 0;
      }
      param_3 = (char *)(ulong)uVar26;
      param_4 = (byte ****)0x0;
      param_5 = (long ****)(ulong)uVar12;
      FUN_71025ae6d0((long)&local_88,uVar36,(byte)uVar26,0,(ulong)param_5,param_6,param_7,param_8);
      uVar15 = local_80;
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = 0;
      uVar20 = extraout_x1_01;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
        uVar20 = extraout_x1_02;
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x478) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_98,(undefined8 *)(*(long *)(param_1 + 0x478) + 0x10),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_part_spirits",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar15 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
      }
      uVar36 = **(ushort **)(param_1 + 0x478);
      bVar11 = FUN_71025c9890(uVar36);
      uVar26 = 2;
      if (!bVar11) {
        uVar26 = 0;
      }
      param_3 = (char *)(ulong)uVar26;
      param_4 = (byte ****)0x0;
      param_5 = (long ****)(ulong)uVar12;
      FUN_71025ae6d0((long)&local_88,uVar36,(byte)uVar26,0,(ulong)param_5,param_6,param_7,param_8);
      uVar15 = local_80;
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = 0;
      uVar20 = extraout_x1_03;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
        uVar20 = extraout_x1_04;
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x480) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_98,(undefined8 *)(*(long *)(param_1 + 0x480) + 0x10),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_part_spirits",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar15 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
      }
      uVar36 = **(ushort **)(param_1 + 0x480);
      bVar11 = FUN_71025c9890(uVar36);
      uVar26 = 2;
      if (!bVar11) {
        uVar26 = 0;
      }
      param_3 = (char *)(ulong)uVar26;
      param_4 = (byte ****)0x0;
      param_5 = (long ****)(ulong)uVar12;
      FUN_71025ae6d0((long)&local_88,uVar36,(byte)uVar26,0,(ulong)param_5,param_6,param_7,param_8);
      uVar15 = local_80;
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = 0;
      uVar20 = extraout_x1_05;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
        uVar20 = extraout_x1_06;
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x488) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_98,(undefined8 *)(*(long *)(param_1 + 0x488) + 0x10),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_part_spirits",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar15 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
      }
      uVar36 = **(ushort **)(param_1 + 0x488);
      bVar11 = FUN_71025c9890(uVar36);
      uVar26 = 2;
      if (!bVar11) {
        uVar26 = 0;
      }
      param_3 = (char *)(ulong)uVar26;
      param_4 = (byte ****)0x0;
      param_5 = (long ****)(ulong)uVar12;
      FUN_71025ae6d0((long)&local_88,uVar36,(byte)uVar26,0,(ulong)param_5,param_6,param_7,param_8);
      uVar15 = local_80;
      local_88 = (long ***********)&PTR_FUN_710523d988;
      local_80 = 0;
      uVar20 = extraout_x1_07;
      if (uVar15 != 0) {
        uVar17 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar15);
        uVar20 = extraout_x1_08;
      }
    }
  }
  pppppppppppplVar39 = pppppppppppplStack_e8;
  local_f0 = (long ***********)&PTR_FUN_710523d988;
  pppppppppppplStack_e8 = (long ************)0x0;
  if (pppppppppppplVar39 != (long ************)0x0) {
    ppppppppppplVar18 = pppppppppppplVar39[3];
    pppppppppppplVar39[2] = (long ***********)&PTR_FUN_710523d9a8;
    pppppppppppplVar39[3] = (long ***********)0x0;
    if (ppppppppppplVar18 != (long ***********)0x0) {
      FUN_710392eb40((ulong)ppppppppppplVar18);
    }
    FUN_710392eb40((ulong)pppppppppppplVar39);
    uVar20 = extraout_x1_09;
  }
  *(undefined4 *)(param_1 + 0x434) = 0;
  if (*(char *)(param_1 + 0x430) == '\0') {
    FUN_7101b0a6a0(param_1,uVar20,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    pppppppppppplStack_e8 = (long ************)0x0;
    local_e0 = (long ************)0x0;
    local_f0 = (long ***********)0x0;
    plVar33 = *(long **)(param_1 + 0x420);
    for (plVar14 = *(long **)(param_1 + 0x418); plVar14 != plVar33; plVar14 = plVar14 + 1) {
      lVar27 = *plVar14;
      if ((*(char *)(lVar27 + 0x20) != '\0') && (*(char *)(lVar27 + 8) == '\x04')) {
        lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar12 = FUN_71032a7800(lVar34,*(ulong *)(lVar27 + 0x10));
        ppppppppppplVar18 = local_f0;
        if ((uVar12 < (uint)((int)((ulong)(*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20)) >> 6
                                  ) * -0x33333333)) &&
           (sVar4 = *(short *)(*(long *)(lVar34 + 0x20) + (ulong)uVar12 * 0x140), sVar4 != -1)) {
          if (pppppppppppplStack_e8 == local_e0) {
            pppppppppppplVar39 = (long ************)((long)pppppppppppplStack_e8 - (long)local_f0);
            if ((long)pppppppppppplVar39 < -2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar15 = ((long)pppppppppppplVar39 >> 1) + 1;
            uVar17 = (long)local_e0 - (long)local_f0;
            if (uVar15 <= uVar17) {
              uVar15 = uVar17;
            }
            if (0x3ffffffffffffffe < (ulong)((long)uVar17 >> 1)) {
              uVar15 = 0x7fffffffffffffff;
            }
            if (uVar15 == 0) {
LAB_7101b03738:
              pppppppppppplVar37 = (long ************)0x0;
            }
            else {
              if ((long)uVar15 < 0) goto LAB_7101b03b30;
              ppppppppppplVar30 = (long ***********)(uVar15 * 2);
              if (ppppppppppplVar30 == (long ***********)0x0) {
                ppppppppppplVar30 = (long ***********)0x1;
              }
              pppppppppppplVar37 =
                   (long ************)
                   FUN_710392e290(0x10,ppppppppppplVar30,(long ****)param_3,param_4,param_5,param_6,
                                  param_7,param_8);
              if (pppppppppppplVar37 == (long ************)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
                  param_3 = (char *)&local_88;
                  local_88 = ppppppppppplVar30;
                  uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar17 & 1) != 0) &&
                     (pppppppppppplVar37 =
                           (long ************)
                           FUN_710392e290(0x10,ppppppppppplVar30,(long ****)param_3,param_4,param_5,
                                          param_6,param_7,param_8),
                     pppppppppppplVar37 != (long ************)0x0)) goto LAB_7101b0373c;
                }
                goto LAB_7101b03738;
              }
            }
LAB_7101b0373c:
            psVar2 = (short *)((long)pppppppppppplVar37 + ((long)pppppppppppplVar39 >> 1) * 2);
            pppppppppppplVar3 = (long ************)((long)pppppppppppplVar37 + uVar15 * 2);
            pppppppppppplVar40 = (long ************)(psVar2 + 1);
            *psVar2 = sVar4;
            if (0 < (long)pppppppppppplVar39) {
              memcpy(pppppppppppplVar37,ppppppppppplVar18,(size_t)pppppppppppplVar39);
              param_3 = (char *)pppppppppppplVar39;
            }
            local_f0 = (long ***********)pppppppppppplVar37;
            pppppppppppplStack_e8 = pppppppppppplVar40;
            local_e0 = pppppppppppplVar3;
            if (ppppppppppplVar18 != (long ***********)0x0) {
              FUN_710392eb40((ulong)ppppppppppplVar18);
            }
          }
          else {
            *(short *)pppppppppppplStack_e8 = sVar4;
            pppppppppppplStack_e8 = (long ************)((long)pppppppppppplStack_e8 + 2);
          }
        }
      }
    }
    lVar27 = *(long *)(DAT_710532f858 + 8);
    if ((*(char *)(lVar27 + 0x114) != '\0') &&
       (param_3 = (char *)pppppppppppplStack_e8, local_f0 != (long ***********)pppppppppppplStack_e8
       )) {
      pppppppppppplVar37 = (long ************)(lVar27 + 0xf8);
      ppppppppppplVar18 = *pppppppppppplVar37;
      lVar34 = (long)*(long ************)(lVar27 + 0x100) - (long)ppppppppppplVar18;
      *(undefined4 *)(lVar27 + 0x110) = 0;
      ppppppppppplVar30 = ppppppppppplVar18;
      pppppppppppplVar39 = (long ************)local_f0;
      if (lVar34 == (long)pppppppppppplStack_e8 - (long)local_f0) {
        for (; ppppppppppplVar30 != *(long ************)(lVar27 + 0x100);
            ppppppppppplVar30 = (long ***********)((long)ppppppppppplVar30 + 2)) {
          if (*(short *)pppppppppppplVar39 != *(short *)ppppppppppplVar30) goto LAB_7101b03818;
          pppppppppppplVar39 = (long ************)((long)pppppppppppplVar39 + 2);
        }
      }
      else {
LAB_7101b03818:
        if (pppppppppppplVar37 == &local_f0) {
          uVar15 = 0;
        }
        else {
          FUN_7101dbd0a0(pppppppppppplVar37,local_f0,(long ****)pppppppppppplStack_e8,param_4,
                         param_5,param_6,param_7,param_8);
          ppppppppppplVar18 = *(long ************)(lVar27 + 0xf8);
          uVar15 = (ulong)*(int *)(lVar27 + 0x110);
          lVar34 = *(long *)(lVar27 + 0x100) - (long)ppppppppppplVar18;
        }
        uVar17 = lVar34 >> 1;
        if (uVar17 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        uVar36 = *(ushort *)((long)ppppppppppplVar18 + uVar15 * 2);
        param_3 = (char *)(ulong)uVar36;
        param_4 = (byte ****)(ulong)(1 < uVar17);
        param_5 = (long ****)0x0;
        param_6 = 0;
        FUN_7101d88b10(*(undefined8 **)(*(long *)(lVar27 + 0xf0) + 0x80),5,uVar36,1 < uVar17,
                       (long ****)0x0,0,param_7,param_8);
      }
    }
    if (local_f0 != (long ***********)0x0) {
      pppppppppppplStack_e8 = (long ************)local_f0;
      FUN_710392eb40((ulong)local_f0);
    }
  }
  if (*(long *)(param_1 + 0x418) == *(long *)(param_1 + 0x420)) {
    pcVar21 = "blank_on";
  }
  else {
    pcVar21 = "blank_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3d8),(long)pcVar21);
  if (((*(char *)(param_1 + 0x431) == '\0') ||
      (*(long **)(param_1 + 0x420) == *(long **)(param_1 + 0x418))) ||
     (*(char *)(**(long **)(param_1 + 0x418) + 8) != '\x04')) {
    lVar27 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
      *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 1;
    }
    FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),extraout_x1_10,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377aee0(0x3f800000,param_1 + 0x3e0);
  }
  else {
    lVar27 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
      *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
    }
    FUN_71032e5b10(*(long *)(DAT_710532f7c8 + 8),extraout_x1_10,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377b140(param_1 + 0x3e0);
  }
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppppppplVar22 = (long *********)0x15000;
  FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10),1,(long ****)0x15000,
                 param_4,param_5,param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x278) != 3) goto LAB_7101b03a58;
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    ppppppppplVar22 = (long *********)&DAT_00000004;
    uVar15 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1936143119,(long ****)&DAT_00000004,
                            param_4,param_5,param_6,param_7,param_8);
    if ((uVar15 & 1) == 0) goto LAB_7101b03a24;
    FUN_71024076d0(local_130,0x1936143119);
    if (((local_120 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_118 == DAT_7106dd53ac)) {
      piVar31 = (int *)(local_120 + 0x38);
      do {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar31,0x10);
        if (bVar11) {
          *piVar31 = *piVar31 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
LAB_7101b03a24:
    local_118 = 0x87650000000000;
    local_108 = 0xffffffffffffffff;
    uStack_100 = 0;
    local_130[0] = 0;
    local_f8 = 0;
  }
  local_128 = &PTR_FUN_7104f73d50;
  local_120 = 0;
  local_110 = 0;
LAB_7101b03a58:
  FUN_7101b0a030(param_1,0,ppppppppplVar22,param_4,param_5,param_6,param_7,param_8);
  puVar28 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (undefined8 *)0x0;
  if (puVar28 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar28);
  }
  puVar28 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (undefined8 *)0x0;
  if (puVar28 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar28);
  }
  uVar24 = uStack_a2;
  uVar8 = uStack_a3;
  uVar32 = uStack_a7;
  bVar6 = (byte)local_b0;
  puVar28 = (undefined8 *)CONCAT71(local_b0._1_7_,(byte)local_b0);
  if (puVar28 != (undefined8 *)0x0) {
    puVar35 = (undefined8 *)CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT41(uStack_a7,local_a8)));
    uStack_a3 = (undefined1)((uint7)local_b0._1_7_ >> 0x20);
    uVar9 = uStack_a3;
    uStack_a2 = (undefined2)((uint7)local_b0._1_7_ >> 0x28);
    uVar10 = uStack_a2;
    uStack_a7 = (undefined4)local_b0._1_7_;
    uVar7 = uStack_a7;
    uStack_a7 = uVar32;
    uStack_a3 = uVar8;
    uStack_a2 = uVar24;
    if (puVar35 != puVar28) {
      do {
        puVar35 = puVar35 + -2;
        (**(code **)*puVar35)(puVar35);
      } while (puVar28 != puVar35);
      puVar28 = (undefined8 *)CONCAT71(local_b0._1_7_,(byte)local_b0);
    }
    if (puVar28 != (undefined8 *)0x0) {
      local_a8 = bVar6;
      uStack_a7 = uVar7;
      uStack_a3 = uVar9;
      uStack_a2 = uVar10;
      FUN_710392eb40((ulong)puVar28);
    }
  }
  return;
}

