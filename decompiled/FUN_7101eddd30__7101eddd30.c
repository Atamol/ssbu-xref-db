// addr:      7101eddd30
// offset:    0x1eddd30
// name:      FUN_7101eddd30
// mangled:   
// signature: undefined __cdecl FUN_7101eddd30(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eddd30(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long *********ppppppppplVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined **local_b0;
  undefined8 *local_a8;
  undefined **local_a0;
  ulong local_98;
  long ***local_90;
  undefined8 uStack_88;
  undefined4 local_74;
  
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_71050b3a30;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  uVar2 = SUB84(param_3,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x68,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar25 = extraout_x1;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
      local_90 = (long ***)&DAT_00000068;
      param_3 = &local_90;
      auVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar25 = auVar26._8_8_;
      if (((auVar26._0_8_ & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x68,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar25 = extraout_x1_00, puVar5 != (undefined8 *)0x0)) goto LAB_7101eddde8;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101eddde8:
  *(undefined4 *)(puVar5 + 1) = 0x1000;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = 0;
  puVar5[6] = 0;
  puVar5[5] = puVar5 + 6;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *puVar5 = &PTR_FUN_71050b3a68;
  *(undefined4 *)(puVar5 + 9) = uVar2;
  FUN_7101edd860(puVar5 + 10,uVar25,(undefined **)param_3,param_4,param_5,param_6,param_7,param_8);
  ppuVar10 = &PTR_DAT_71050b3a10;
  ppppbVar14 = (byte ****)0x25c6432742;
  pppplVar15 = (long ****)0x1;
  FUN_71032cb040((long)puVar5,param_2,(long ****)&PTR_DAT_71050b3a10,(byte ****)0x25c6432742,
                 (long ****)0x1,param_6,param_7,param_8);
  FUN_71023d4940(*(undefined8 *)(DAT_7105329de8 + 8),(long *)puVar5[8],ppuVar10,ppppbVar14,
                 pppplVar15,param_6,param_7,param_8);
  if (*(long **)puVar5[8] == (long *)0x0) {
    lVar19 = 0;
  }
  else {
    lVar19 = **(long **)puVar5[8];
  }
  FUN_71038f7260(lVar19,"actor");
  puVar17 = *(undefined8 **)(lVar19 + 0x10);
  *puVar17 = puVar17[-2];
  puVar17[1] = puVar17[-1];
  lVar18 = *(long *)(lVar19 + 0x10);
  *(long *)(lVar19 + 0x10) = lVar18 + 0x10;
  FUN_71038f5390(lVar19,(long *)(lVar18 + -0x10),"__index");
  FUN_71038f9510(lVar19,(long *)&DAT_71050b3aa0,0,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  *(long *)(lVar19 + 0x10) = *(long *)(lVar19 + 0x10) + -0x10;
  puVar17 = FUN_71038f6930(lVar19,8);
  *puVar17 = puVar5;
  FUN_71038f4d40(lVar19,(long *)(*(long *)(lVar19 + 0x18) + 0x40),"actor");
  FUN_71038f5c00(lVar19,-2);
  if (lVar19 != 0) {
    lVar18 = *(long *)(*(long *)(lVar19 + 0x18) + 0x40);
    if (*(uint *)(lVar18 + 0xc) < 2) {
      plVar6 = (long *)(*(long *)(lVar18 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar18 + 0xb) & 0x3f)) & 2)
                       * 0x20);
      do {
        if (((int)plVar6[3] == 0x13) && (plVar9 = plVar6, plVar6[2] == 2)) break;
        piVar1 = (int *)((long)plVar6 + 0x1c);
        plVar6 = plVar6 + (long)*piVar1 * 4;
        plVar9 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar9 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
    }
    FUN_71038f5390(lVar19,plVar9,"actor");
  }
  if (*(long **)puVar5[8] != (long *)0x0) {
    ppppbVar14 = (byte ****)0x0;
    FUN_7103375650(*(long **)puVar5[8],"TYPE_WIN",&DAT_71042b2a84);
    if (*(long **)puVar5[8] != (long *)0x0) {
      ppppbVar14 = (byte ****)0x1;
      FUN_7103375650(*(long **)puVar5[8],"TYPE_LOSE",&DAT_71042b2a84);
      if (*(long **)puVar5[8] != (long *)0x0) {
        ppppbVar14 = (byte ****)0x2;
        FUN_7103375650(*(long **)puVar5[8],"TYPE_ABORT",&DAT_71042b2a84);
      }
    }
  }
  lVar19 = puVar5[10];
  iVar16 = (int)(puVar5[0xb] - lVar19 >> 3) * -0x55555555;
  if (iVar16 < 1) {
LAB_7101ede25c:
    param_1[0x10] = puVar5;
    return;
  }
  if (puVar5[0xb] != lVar19) {
    uVar24 = 0;
    uVar25 = 0;
    lVar18 = 0;
    uVar20 = 0;
    do {
      puVar17 = (undefined8 *)FUN_71032cbb00((long)puVar5,(byte *)"standard_result");
      uVar11 = uVar20 & 0xffffffff;
      FUN_7103776640(&local_a0,*(long *)*puVar17 + 8,(byte ****)"set_parts_icon_%02d",uVar11,
                     ppppbVar14,pppplVar15,param_6,param_7,param_8);
      FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_rep_icon",uVar11,ppppbVar14,
                     pppplVar15,param_6,param_7,param_8);
      lVar19 = lVar19 + lVar18;
      ppppppppplVar12 = (long *********)(ulong)*(uint *)(lVar19 + 0x10);
      ppppbVar14 = (byte ****)0x0;
      plVar6 = FUN_710323f330(param_2,*(ulong *)(lVar19 + 8),(ulong)ppppppppplVar12,0,pppplVar15,
                              param_6,param_7,param_8);
      puVar17 = local_a8;
      FUN_7103778b80((long)local_a8,(long)plVar6,ppppppppplVar12,ppppbVar14,pppplVar15,param_6,
                     param_7,param_8);
      lVar21 = *(long *)(DAT_710532f730 + 8);
      uVar4 = FUN_7103280ec0(*(long *)(lVar21 + 0x2a8),*(ulong *)(lVar19 + 8),
                             (ulong)*(uint *)(lVar19 + 0x10),ppppbVar14,pppplVar15,param_6,param_7,
                             param_8);
      lVar19 = *(long *)(*(long *)(lVar21 + 0x2a8) + 8);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar24;
      auVar26 = FUN_710326ad60(auVar26 << 0x40,lVar19,uVar4,0x109ad99b76);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar24;
      auVar22 = FUN_710326ad60(auVar22 << 0x40,lVar19,uVar4,0x10eddeabe0);
      auVar23._8_8_ = uVar25;
      auVar23._0_8_ = 0x3f800000;
      pppplVar13 = (long ****)0xd49344fdd;
      auVar23 = FUN_710326ad60(auVar23,lVar19,uVar4,0xd49344fdd);
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74 = 0;
          local_90 = (long ***)&SUB_00000020;
          pppplVar13 = &local_90;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
          if (((uVar11 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,pppplVar13,ppppbVar14,pppplVar15,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101ede190;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7101ede190:
      puVar3 = local_a8;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *puVar7 = *puVar17;
      puVar7[1] = puVar17[1];
      local_90 = (long ***)CONCAT44(auVar22._0_4_,auVar26._0_4_);
      puVar7[2] = local_a8[2];
      puVar7[3] = local_a8[3];
      uStack_88 = 0;
      FUN_7103779770(auVar23._0_4_,(long)puVar7,&local_90);
      if (puVar7 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar7);
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar3);
      }
      uVar11 = local_98;
      local_a0 = &PTR_FUN_710523d988;
      local_98 = 0;
      if (uVar11 != 0) {
        uVar8 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar11);
      }
      uVar20 = uVar20 + 1;
      if ((long)iVar16 <= (long)uVar20) goto LAB_7101ede25c;
      lVar19 = puVar5[10];
      uVar11 = (puVar5[0xb] - lVar19 >> 3) * -0x5555555555555555;
      lVar18 = lVar18 + 0x18;
    } while (uVar20 <= uVar11 && uVar11 - uVar20 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

