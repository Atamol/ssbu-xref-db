// addr:      7102b16910
// offset:    0x2b16910
// name:      FUN_7102b16910
// mangled:   
// signature: undefined __cdecl FUN_7102b16910(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b16910(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  uint uVar12;
  long ****pppplVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  long *plVar26;
  undefined1 auVar27 [16];
  long ***local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long ***local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long ***local_58;
  undefined4 local_44;
  
  iVar3 = (int)param_4;
  iVar2 = (int)param_3;
  plVar5 = (long *)FUN_710392e290(0x10,0x60,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000060;
      param_3 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x60,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar5 != (long *)0x0)) goto LAB_7102b16998;
    }
    plVar5 = (long *)0x0;
  }
LAB_7102b16998:
  *plVar5 = param_2;
  plVar26 = plVar5 + 1;
  *plVar26 = 0;
  plVar5[9] = 0x138d1b717;
  *(undefined4 *)((long)plVar5 + 0x44) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined2 *)(plVar5 + 8) = 0;
  plVar5[0xb] = 0;
  *(undefined1 *)((long)plVar5 + 0x54) = 0;
  *(undefined4 *)(plVar5 + 10) = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[4] = (long)plVar5;
  plVar5[5] = 0;
  uVar12 = 0;
  if (iVar2 == 0 && iVar3 == 0) {
LAB_7102b16a2c:
    *(uint *)((long)plVar5 + 0x5c) = uVar12;
    pbVar22 = (&PTR_s_red_blockl_set_71051128e0)[(ulong)uVar12 * 6];
    uVar19 = (uint)*pbVar22;
    if (*pbVar22 != 0) {
      plVar7 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar17 = *(long **)(*(long *)(param_2 + 0x310) + 0xd8);
      if (plVar7 != plVar17) {
        uVar6 = 0;
        uVar21 = 0xffffffff;
        do {
          pbVar22 = pbVar22 + 1;
          uVar1 = uVar19 + 0x20;
          if (0x19 < uVar19 - 0x41) {
            uVar1 = uVar19;
          }
          uVar21 = (&DAT_7104754084)[(uVar1 ^ uVar21) & 0xff] ^ uVar21 >> 8;
          uVar19 = (uint)*pbVar22;
          uVar6 = uVar6 + 0x100000000;
        } while (uVar19 != 0);
        do {
          if ((*(uint *)(plVar7 + 1) < 2) &&
             (lVar24 = *plVar7, (uVar6 & 0xff00000000 | (ulong)~uVar21) == *(ulong *)(lVar24 + 0x68)
             )) goto LAB_7102b16adc;
          plVar7 = plVar7 + 2;
        } while (plVar17 != plVar7);
      }
    }
    lVar24 = 0;
LAB_7102b16adc:
    local_b0 = *(undefined8 *)(&DAT_7105112900 + (ulong)uVar12 * 0x30);
    local_a8 = CONCAT44(0x3f800000,(int)*(undefined8 *)(&DAT_7105112908 + (ulong)uVar12 * 0x30));
    *plVar26 = lVar24;
    uStack_d8 = 0;
    local_e0 = (long ***)&DAT_3f800000;
    uStack_c8 = 0;
    local_d0 = 0x3f80000000000000;
    uStack_b8 = 0x3f800000;
    local_c0 = 0;
    if (lVar24 != 0) {
      (**(code **)(**(long **)(lVar24 + 0x90) + 0x148))(*(long **)(lVar24 + 0x90),&local_e0);
      lVar24 = *(long *)(lVar24 + 0xd8);
      if (lVar24 != 0) {
        local_88 = uStack_c8;
        local_90 = local_d0;
        uStack_98 = uStack_d8;
        local_a0 = local_e0;
        local_68 = local_a8;
        local_70 = local_b0;
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        if (*(char *)(*(long *)(lVar24 + 8) + 0xa8) != '\0') {
          plVar7 = *(long **)(*(long *)(lVar24 + 8) + 0x48);
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_a0);
        }
        *(undefined1 *)(lVar24 + 0x20) = 1;
      }
    }
    plVar17 = *(long **)(*(long *)(*plVar5 + 0x300) + 0x18);
    plVar7 = (long *)*plVar17;
    plVar17 = (long *)plVar17[1];
    if (plVar7 != plVar17) {
      pbVar22 = *(byte **)((long)*(int *)((long)plVar5 + 0x5c) * 0x30 + 0x71051128e8);
      do {
        uVar12 = (uint)*pbVar22;
        if (uVar12 == 0) {
          uVar9 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          uVar19 = 0xffffffff;
          pbVar8 = pbVar22;
          do {
            pbVar8 = pbVar8 + 1;
            param_4 = (byte ****)(ulong)(uVar12 - 0x41);
            param_5 = (long ****)(ulong)(uVar12 + 0x20);
            uVar21 = uVar12 + 0x20;
            if (0x19 < uVar12 - 0x41) {
              uVar21 = uVar12;
            }
            uVar19 = (&DAT_7104754084)[(uVar21 ^ uVar19) & 0xff] ^ uVar19 >> 8;
            uVar12 = (uint)*pbVar8;
            uVar6 = uVar6 + 0x100000000;
          } while (*pbVar8 != 0);
          uVar9 = (ulong)~uVar19;
          uVar6 = uVar6 & 0xff00000000;
          param_3 = (long ****)0x0;
        }
        if ((*(ulong *)(*plVar7 + 0xa0) & 0xffffffffff) == (uVar6 | uVar9)) {
          plVar7 = *(long **)(*plVar7 + 0x110);
          if ((plVar7 != (long *)0x0) && (*plVar7 != plVar7[1])) {
            plVar5[2] = (long)plVar7;
          }
          break;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar17);
    }
    lVar15 = *(long *)(*plVar5 + 0x738);
    lVar24 = 0;
    if (lVar15 != 0) {
      lVar24 = lVar15 + 8;
    }
    local_e0 = (long ***)0x0;
    uStack_d8 = 0;
    uStack_98 = 0;
    local_a0 = (long ***)&DAT_3f800000;
    local_88 = 0;
    local_90 = 0x3f80000000000000;
    local_c0 = (ulong)*(uint *)(lVar24 + 0x5c);
    uStack_c8 = _DAT_7107521008;
    local_d0 = _ConstantZero;
    lVar24 = (long)*(int *)((long)plVar5 + 0x5c) * 0x30;
    local_70 = *(undefined8 *)(&DAT_7105112900 + lVar24);
    local_68 = CONCAT44(0x3f800000,(int)*(undefined8 *)(&DAT_7105112908 + lVar24));
    uStack_78 = 0x3f800000;
    local_80 = 0;
    puVar10 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)&DAT_00000008;
        pppplVar13 = &local_58;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar6 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,8,pppplVar13,param_4,param_5,param_6,param_7,param_8),
           puVar10 != (undefined8 *)0x0)) goto LAB_7102b16d2c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_7102b16d2c:
    pppplVar13 = (long ****)0x0;
    FUN_7102b22230(puVar10,*plVar5,(long ****)0x0,param_4,param_5,param_6,param_7,param_8);
    puVar25 = (ulong *)plVar5[3];
    plVar5[3] = (long)puVar10;
    uVar11 = extraout_x1;
    if (puVar25 != (ulong *)0x0) {
      uVar6 = *puVar25;
      *puVar25 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40((ulong)puVar25);
      puVar10 = (undefined8 *)plVar5[3];
      uVar11 = extraout_x1_00;
    }
    plVar7 = (long *)*puVar10;
    if (plVar7 != (long *)0x0) {
      lVar24 = *plVar7;
      if (lVar24 != 0) {
        if ((char)plVar7[2] != '\0') {
          if (*(long *)(lVar24 + 0x38) != 0) {
            auVar27 = (**(code **)(**(long **)(*(long *)(lVar24 + 0x38) + 0x130) + 0x1a0))();
            uVar11 = auVar27._8_8_;
            lVar24 = auVar27._0_8_;
            lVar15 = *(long *)(lVar24 + 8);
            *(uint *)(lVar24 + 0x48) = *(uint *)(lVar24 + 0x48) | 0x1f80;
            if (0 < *(int *)(lVar15 + 0x10)) {
              lVar18 = *(long *)(lVar24 + 0x40);
              lVar14 = 0;
              lVar16 = 0x30;
              do {
                if (0 < *(int *)(lVar18 + lVar14 * 0x20)) {
                  lVar20 = 0;
                  do {
                    lVar23 = *(long *)(*(long *)(lVar15 + 0x18) + lVar16 + lVar20 * 8);
                    if (lVar23 != 0) {
                      *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar24 + 0x48);
                      lVar18 = *(long *)(lVar24 + 0x40);
                      lVar15 = *(long *)(lVar24 + 8);
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < *(int *)(lVar18 + lVar14 * 0x20));
                }
                lVar14 = lVar14 + 1;
                lVar16 = lVar16 + 0x2d0;
              } while (lVar14 < *(int *)(lVar15 + 0x10));
            }
          }
          if (*(long *)(*plVar7 + 0x38) != 0) {
            auVar27 = (**(code **)(**(long **)(*(long *)(*plVar7 + 0x38) + 0x130) + 0x1a0))();
            uVar11 = auVar27._8_8_;
            lVar24 = auVar27._0_8_;
            lVar15 = *(long *)(lVar24 + 8);
            *(uint *)(lVar24 + 0x4c) = *(uint *)(lVar24 + 0x4c) | 0x1f80;
            if (0 < *(int *)(lVar15 + 0x10)) {
              lVar18 = *(long *)(lVar24 + 0x40);
              lVar14 = 0;
              lVar16 = 0x30;
              do {
                if (0 < *(int *)(lVar18 + lVar14 * 0x20)) {
                  lVar20 = 0;
                  do {
                    lVar23 = *(long *)(*(long *)(lVar15 + 0x18) + lVar16 + lVar20 * 8);
                    if (lVar23 != 0) {
                      *(undefined8 *)(lVar23 + 8) = *(undefined8 *)(lVar24 + 0x48);
                      lVar18 = *(long *)(lVar24 + 0x40);
                      lVar15 = *(long *)(lVar24 + 8);
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < *(int *)(lVar18 + lVar14 * 0x20));
                }
                lVar14 = lVar14 + 1;
                lVar16 = lVar16 + 0x2d0;
              } while (lVar14 < *(int *)(lVar15 + 0x10));
            }
          }
          lVar24 = *plVar7;
        }
        if (*(long *)(lVar24 + 0x38) != 0) {
          plVar17 = *(long **)(*(long *)(lVar24 + 0x38) + 0x130);
          pppplVar13 = &local_e0;
          param_4 = (byte ****)0x0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          (**(code **)(*plVar17 + 0x58))(plVar17,0);
          lVar24 = *plVar7;
          uVar11 = extraout_x1_01;
        }
        if (*(long *)(lVar24 + 0x38) != 0) {
          plVar17 = *(long **)(*(long *)(lVar24 + 0x38) + 0x130);
          pppplVar13 = &local_a0;
          param_4 = (byte ****)0x1;
          (**(code **)(*plVar17 + 0x168))(plVar17,&local_a0);
          uVar11 = extraout_x1_02;
        }
      }
      lVar24 = plVar7[1];
      if (lVar24 != 0) {
        if (*(long *)(lVar24 + 0x38) != 0) {
          plVar17 = *(long **)(*(long *)(lVar24 + 0x38) + 0x130);
          pppplVar13 = &local_e0;
          param_4 = (byte ****)0x0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          (**(code **)(*plVar17 + 0x140))(plVar17,0);
          lVar24 = plVar7[1];
          uVar11 = extraout_x1_03;
        }
        if (*(long *)(lVar24 + 0x38) != 0) {
          plVar7 = *(long **)(*(long *)(lVar24 + 0x38) + 0x130);
          pppplVar13 = &local_a0;
          (**(code **)(*plVar7 + 0x188))(plVar7,&local_a0);
          uVar11 = extraout_x1_04;
        }
      }
    }
    lVar24 = *plVar26;
    if (lVar24 == 0) goto LAB_7102b16fdc;
    *(undefined1 *)(lVar24 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar24 + 0x108),uVar11,pppplVar13,param_4,param_5,param_6,param_7,
                   param_8);
    lVar24 = *plVar26;
    if (lVar24 == 0) goto LAB_7102b16fdc;
    if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar24 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar24 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x22) = 0;
    }
  }
  else {
    if ((iVar2 == 0) && (iVar3 == 1)) {
      uVar12 = 1;
      goto LAB_7102b16a2c;
    }
    if ((iVar2 == 1) && (iVar3 == 0)) {
      uVar12 = 2;
      goto LAB_7102b16a2c;
    }
    if ((iVar2 == 1) && (iVar3 == 1)) {
      uVar12 = 3;
      goto LAB_7102b16a2c;
    }
    if ((iVar2 == 2) && (iVar3 == 0)) {
      uVar12 = 4;
      goto LAB_7102b16a2c;
    }
  }
  lVar24 = *plVar26;
  if (lVar24 != 0) {
    if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar24 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar24 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 0;
    }
  }
LAB_7102b16fdc:
  puVar10 = (undefined8 *)plVar5[2];
  if (puVar10 != (undefined8 *)0x0) {
    FUN_71025f4d80((long *)*puVar10,(long *)puVar10[1],1);
  }
  FUN_7102b224a0(*(undefined8 **)plVar5[3]);
  local_a0 = (long ***)0x0;
  lVar24 = *(long *)(**(long **)(param_2 + 0x338) + 8);
  if (lVar24 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = FUN_7102405040(lVar24,&local_a0,0,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined4 *)((long)plVar5 + 0x44) = uVar4;
  *param_1 = plVar5;
  return;
}

