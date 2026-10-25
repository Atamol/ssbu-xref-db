// addr:      7101e9aa40
// offset:    0x1e9aa40
// name:      FUN_7101e9aa40
// mangled:   
// signature: undefined __cdecl FUN_7101e9aa40(long * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e9aa40(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  long ********pppppppplVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  long lVar16;
  long *plVar17;
  long *******ppppppplVar18;
  undefined ***pppuVar19;
  code *pcVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined **local_210;
  undefined **local_208;
  long ********local_200;
  long ********local_1f8 [3];
  long *********local_1e0;
  byte ***local_1b0;
  ulong local_1a8;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 *local_198;
  undefined4 local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_3 + 0x1a);
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_3 + 0x1b);
  bVar21 = *(byte *)(param_3 + 3);
  if (3 < bVar21) {
    bVar21 = 4;
  }
  *(byte *)(param_1 + 1) = bVar21;
  puVar9 = param_3;
  FUN_7103776640(&local_1b0,(long)param_2,(byte ****)param_3[1],param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037780e0(&local_200,(long)&local_1b0,(long ****)"slot_exist",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  pppppppplVar6 = local_1f8[0];
  lVar16 = *param_1;
  if ((long *********)(lVar16 + 8) != &local_200) {
    local_1f8[0] = (long ********)0x0;
    uVar7 = *(ulong *)(lVar16 + 0x10);
    *(long *********)(lVar16 + 0x10) = pppppppplVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  pppppppplVar6 = local_1f8[0];
  local_200 = (long ********)&PTR_FUN_710523d9e8;
  local_1f8[0] = (long ********)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar6);
  }
  FUN_71037780e0(&local_200,(long)&local_1b0,(long ****)"slot_empty",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  pppppppplVar6 = local_1f8[0];
  lVar16 = *param_1;
  if ((long *********)(lVar16 + 0x18) != &local_200) {
    local_1f8[0] = (long ********)0x0;
    uVar7 = *(ulong *)(lVar16 + 0x20);
    *(long *********)(lVar16 + 0x20) = pppppppplVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  pppppppplVar6 = local_1f8[0];
  local_200 = (long ********)&PTR_FUN_710523d9e8;
  local_1f8[0] = (long ********)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar6);
  }
  FUN_71037780e0(&local_200,(long)&local_1b0,(long ****)"offset_normal",puVar9,param_4,param_5,
                 param_6,param_7,param_8);
  pppppppplVar6 = local_1f8[0];
  lVar16 = *param_1;
  if ((long *********)(lVar16 + 0x28) != &local_200) {
    local_1f8[0] = (long ********)0x0;
    uVar7 = *(ulong *)(lVar16 + 0x30);
    *(long *********)(lVar16 + 0x30) = pppppppplVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  pppppppplVar6 = local_1f8[0];
  local_200 = (long ********)&PTR_FUN_710523d9e8;
  local_1f8[0] = (long ********)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar6);
  }
  FUN_71037780e0(&local_200,(long)&local_1b0,(long ****)"offset_first",puVar9,param_4,param_5,
                 param_6,param_7,param_8);
  pppppppplVar6 = local_1f8[0];
  lVar16 = *param_1;
  if ((long *********)(lVar16 + 0x38) != &local_200) {
    local_1f8[0] = (long ********)0x0;
    uVar7 = *(ulong *)(lVar16 + 0x40);
    *(long *********)(lVar16 + 0x40) = pppppppplVar6;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  pppppppplVar6 = local_1f8[0];
  local_200 = (long ********)&PTR_FUN_710523d9e8;
  local_1f8[0] = (long ********)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar6);
  }
  FUN_7103776910(&local_200,(long)&local_1b0,(long ****)"set_txt_00",puVar9,param_4,param_5,param_6,
                 param_7,param_8);
  pcVar3 = "cam_school_leave";
  if (*(char *)((long)param_3 + 0x19) != '\x01') {
    pcVar3 = "";
  }
  pcVar2 = "cam_gym_leave";
  if (*(char *)((long)param_3 + 0x19) != '\0') {
    pcVar2 = pcVar3;
  }
  FUN_710377a120((long)&local_200,pcVar2,puVar9,param_4,param_5,param_6,param_7,param_8);
  pppppppplVar6 = local_1f8[0];
  local_200 = (long ********)&PTR_FUN_710523d9a8;
  local_1f8[0] = (long ********)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar6);
  }
  uVar7 = local_1a8;
  local_1b0 = (byte ***)&PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar7 != 0) {
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar7);
  }
  plVar17 = (long *)*param_1;
  local_1b0 = (byte ***)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = 0x101;
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_198 = &DAT_41f0000000000000;
  local_190 = 0;
  local_200 = (long ********)&DAT_7105186040;
  local_1e0 = &local_200;
  FUN_7101989a30((long *)&local_200,alStack_150);
  if (&local_200 == local_1e0) {
    ppppppplVar18 = (*local_1e0)[4];
LAB_7101e9ad14:
    (*(code *)ppppppplVar18)();
  }
  else if (local_1e0 != (long *********)0x0) {
    ppppppplVar18 = (*local_1e0)[5];
    goto LAB_7101e9ad14;
  }
  local_200 = (long ********)&DAT_71051860d0;
  local_1e0 = &local_200;
  FUN_7101989a30((long *)&local_200,alStack_f0);
  if (&local_200 == local_1e0) {
    ppppppplVar18 = (*local_1e0)[4];
LAB_7101e9ad60:
    (*(code *)ppppppplVar18)();
  }
  else if (local_1e0 != (long *********)0x0) {
    ppppppplVar18 = (*local_1e0)[5];
    goto LAB_7101e9ad60;
  }
  ppppppppplVar14 = (long *********)*param_3;
  ppppbVar15 = &local_1b0;
  FUN_7103770b30(plVar17,param_2,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                 param_8);
  uVar7 = 0;
  do {
    plVar1 = (long *)(*param_1 + uVar7 * 8 + 0x48);
    if (uVar7 < *(byte *)(param_1 + 1)) {
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                              param_7,param_8);
      uVar13 = extraout_x1;
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&DAT_000000b8;
          ppppppppplVar14 = &local_200;
          auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          uVar13 = auVar27._8_8_;
          if (((auVar27._0_8_ & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                      param_6,param_7,param_8), uVar13 = extraout_x1_00,
             puVar9 != (undefined8 *)0x0)) goto LAB_7101e9ae0c;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7101e9ae0c:
      puVar9[0x15] = 0;
      puVar9[0x16] = 0;
      puVar9[0x13] = 0;
      puVar9[0x14] = 0;
      puVar9[5] = 0;
      puVar9[3] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xb] = 0;
      puVar9[0xc] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[6] = 0;
      puVar9[4] = 0;
      puVar9[2] = 0;
      FUN_7103776290(puVar9,uVar13,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,
                     param_8);
      FUN_7103776290(puVar9 + 2,extraout_x1_01,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6
                     ,param_7,param_8);
      FUN_7103776290(puVar9 + 4,extraout_x1_02,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6
                     ,param_7,param_8);
      FUN_7103776290(puVar9 + 6,extraout_x1_03,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6
                     ,param_7,param_8);
      puVar9[8] = &PTR_FUN_710523d9a8;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                               param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&SUB_00000020;
          ppppppppplVar14 = &local_200;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          if (((uVar8 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                       param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7101e9aec8;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7101e9aec8:
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar9[9] = puVar10;
      puVar9[10] = &PTR_FUN_710523d9a8;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                               param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&SUB_00000020;
          ppppppppplVar14 = &local_200;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          if (((uVar8 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                       param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7101e9af28;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7101e9af28:
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar9[0xb] = puVar10;
      puVar9[0xc] = &PTR_FUN_710523d9a8;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                               param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&SUB_00000020;
          ppppppppplVar14 = &local_200;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          if (((uVar8 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                       param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7101e9af8c;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7101e9af8c:
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar9[0xd] = puVar10;
      puVar9[0xe] = &PTR_FUN_710523d9a8;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                               param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&SUB_00000020;
          ppppppppplVar14 = &local_200;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          if (((uVar8 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                       param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7101e9aff0;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7101e9aff0:
      puVar10[2] = 0;
      puVar10[3] = 0;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar9[0xf] = puVar10;
      puVar9[0x10] = &PTR_FUN_710523d9e8;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,ppppbVar15,param_5,param_6,
                               param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          local_200 = (long ********)&SUB_00000018;
          ppppppppplVar14 = &local_200;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
          if (((uVar8 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,ppppbVar15,param_5,
                                       param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7101e9b050;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7101e9b050:
      *puVar10 = 0;
      puVar10[1] = 0;
      *(undefined1 *)(puVar10 + 2) = 1;
      *(undefined1 *)(puVar9 + 0x13) = 0;
      *(undefined8 *)((long)puVar9 + 0xae) = 0;
      *(undefined2 *)((long)puVar9 + 0xb6) = 1;
      puVar9[0x11] = puVar10;
      puVar9[0x12] = 0;
      puVar9[0x14] = 0;
      puVar9[0x15] = 0;
      puVar10 = (undefined8 *)*plVar1;
      *plVar1 = (long)puVar9;
      if (puVar10 != (undefined8 *)0x0) {
        FUN_7101e9a8e0(puVar10);
        FUN_710392eb40((ulong)puVar10);
      }
      FUN_71003a4ca0((uint *)&local_200,(char *)param_3[2],uVar7 & 0xffffffff,ppppppppplVar14,
                     ppppbVar15,param_5,param_6,param_7,param_8);
      iVar4 = (int)uVar7;
      ppppppppplVar14 = local_1f8;
      FUN_71037717d0(plVar17,iVar4,(char *)local_1f8,ppppbVar15,param_5,param_6,param_7,param_8);
      lVar16 = *(long *)(*plVar17 + 0x1b8);
      if (lVar16 != 0) {
        lVar26 = *plVar17 + 0x1b8;
        lVar22 = lVar26;
        lVar23 = lVar16;
        do {
          if (iVar4 <= *(int *)(lVar23 + 0x20)) {
            lVar22 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < iVar4) * 8);
        } while (lVar23 != 0);
        if (((lVar22 != lVar26) && (*(int *)(lVar22 + 0x20) <= iVar4)) &&
           (plVar24 = *(long **)(lVar22 + 0x28), plVar24 != (long *)0x0)) {
          (**(code **)(*plVar24 + 0x1f8))(plVar24,1);
          ppppppppplVar14 = (long *********)0x0;
          (**(code **)(*plVar24 + 0x388))(plVar24,0);
          lVar26 = *plVar17 + 0x1b8;
          lVar16 = *(long *)(*plVar17 + 0x1b8);
        }
        lVar22 = lVar26;
        if (lVar16 != 0) {
          do {
            if (iVar4 <= *(int *)(lVar16 + 0x20)) {
              lVar22 = lVar16;
            }
            lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < iVar4) * 8);
          } while (lVar16 != 0);
          if (((lVar22 != lVar26) && (*(int *)(lVar22 + 0x20) <= iVar4)) &&
             (plVar24 = *(long **)(lVar22 + 0x28), plVar24 != (long *)0x0)) {
            (**(code **)(*plVar24 + 0x208))(plVar24,1);
            ppppppppplVar14 = (long *********)0x0;
            (**(code **)(*plVar24 + 0x388))(plVar24,0);
          }
        }
      }
      FUN_7103776640(&local_210,(long)param_2,(byte ****)local_1f8,ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      pppuVar19 = (undefined ***)*plVar1;
      if (pppuVar19 != &local_210) {
        local_208 = (undefined **)0x0;
        ppuVar25 = pppuVar19[1];
        pppuVar19[1] = ppuVar5;
        if (ppuVar25 != (undefined **)0x0) {
          puVar11 = ppuVar25[3];
          ppuVar25[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar25[3] = (undefined *)0x0;
          if (puVar11 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar11);
          }
          FUN_710392eb40((ulong)ppuVar25);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d988;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        puVar11 = ppuVar5[3];
        ppuVar5[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar5[3] = (undefined *)0x0;
        if (puVar11 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar11);
        }
        FUN_710392eb40((ulong)ppuVar5);
      }
      lVar26 = *plVar1;
      FUN_7103776640(&local_210,lVar26,(byte ****)"set_parts_condition",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x30) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x38);
        *(undefined ***)(lVar16 + 0x38) = ppuVar5;
        if (uVar8 != 0) {
          uVar12 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d988;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        uVar8 = *(ulong *)((long)ppuVar5 + 0x18);
        *(undefined ***)((long)ppuVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppuVar5 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776640(&local_210,lVar26,(byte ****)"set_parts_lvup",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x20) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x28);
        *(undefined ***)(lVar16 + 0x28) = ppuVar5;
        if (uVar8 != 0) {
          uVar12 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d988;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        uVar8 = *(ulong *)((long)ppuVar5 + 0x18);
        *(undefined ***)((long)ppuVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppuVar5 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103778300(0x3f800000,*(long *)(*plVar1 + 0x28),0x710433a8b3);
      FUN_7103776640(&local_210,lVar26,(byte ****)"set_parts_spirit",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x10) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x18);
        *(undefined ***)(lVar16 + 0x18) = ppuVar5;
        if (uVar8 != 0) {
          uVar12 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar12 != 0) {
            FUN_710392eb40(uVar12);
          }
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d988;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        uVar8 = *(ulong *)((long)ppuVar5 + 0x18);
        *(undefined ***)((long)ppuVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)ppuVar5 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776910(&local_210,lVar26,(long ****)"set_txt_lv",ppppppppplVar14,ppppbVar15,param_5,
                     param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x40) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x48);
        *(undefined ***)(lVar16 + 0x48) = ppuVar5;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d9a8;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776910(&local_210,*plVar1 + 0x10,(long ****)"set_rep_spirit_aw",ppppppppplVar14,
                     ppppbVar15,param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x50) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x58);
        *(undefined ***)(lVar16 + 0x58) = ppuVar5;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d9a8;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776910(&local_210,lVar26,(long ****)"set_rep_spirit",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x60) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x68);
        *(undefined ***)(lVar16 + 0x68) = ppuVar5;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d9a8;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776910(&local_210,lVar26,(long ****)"set_rep_shadow",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x70) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x78);
        *(undefined ***)(lVar16 + 0x78) = ppuVar5;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d9a8;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_71037780e0(&local_210,lVar26,(long ****)"gauge_progress",ppppppppplVar14,ppppbVar15,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_208;
      lVar16 = *plVar1;
      if ((undefined ***)(lVar16 + 0x80) != &local_210) {
        local_208 = (undefined **)0x0;
        uVar8 = *(ulong *)(lVar16 + 0x88);
        *(undefined ***)(lVar16 + 0x88) = ppuVar5;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
      }
      ppuVar5 = local_208;
      local_210 = &PTR_FUN_710523d9e8;
      local_208 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      *(undefined8 *)(*plVar1 + 0x90) = (&DAT_7104470ee0)[uVar7];
      pcVar3 = "gauge_parts_off";
      if (*(char *)((long)param_3 + 0x19) != '\x02') {
        pcVar3 = "gauge_parts_on";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar26 + 8),(long)pcVar3);
      FUN_7103778300(0x3f800000,*(long *)(lVar26 + 8),0x71043f0fcb);
      pcVar3 = "level_off";
      if (*(char *)((long)param_1 + 9) != '\0') {
        pcVar3 = "level_on";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar26 + 8),(long)pcVar3);
      FUN_7103778300(0x3f800000,*(long *)(lVar26 + 8),0x710438d258);
      FUN_7101e9b720(param_1,(byte)uVar7,ppppppppplVar14,ppppbVar15,param_5,param_6,param_7,param_8)
      ;
    }
    else {
      puVar9 = (undefined8 *)*plVar1;
      *plVar1 = 0;
      if (puVar9 != (undefined8 *)0x0) {
        FUN_7101e9a8e0(puVar9);
        FUN_710392eb40((ulong)puVar9);
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  puVar9 = (undefined8 *)*param_1;
  plVar17 = (long *)*puVar9;
  (**(code **)(*plVar17 + 0x60))(plVar17,0);
  plVar17 = (long *)*puVar9;
  (**(code **)(*plVar17 + 0x70))(plVar17,0);
  if (alStack_c0 == local_a0) {
    pcVar20 = *(code **)(*local_a0 + 0x20);
LAB_7101e9b62c:
    (*pcVar20)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101e9b62c;
  }
  if (alStack_f0 == local_d0) {
    pcVar20 = *(code **)(*local_d0 + 0x20);
LAB_7101e9b65c:
    (*pcVar20)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101e9b65c;
  }
  if (alStack_120 == local_100) {
    pcVar20 = *(code **)(*local_100 + 0x20);
LAB_7101e9b68c:
    (*pcVar20)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar20 = *(code **)(*local_100 + 0x28);
    goto LAB_7101e9b68c;
  }
  if (alStack_150 == local_130) {
    pcVar20 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101e9b6c0;
    pcVar20 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar20)();
LAB_7101e9b6c0:
  if (alStack_180 == local_160) {
    pcVar20 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) {
      return;
    }
    pcVar20 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar20)();
  return;
}

