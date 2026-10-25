// addr:      7101bcdd20
// offset:    0x1bcdd20
// name:      FUN_7101bcdd20
// mangled:   
// signature: undefined __cdecl FUN_7101bcdd20(undefined4 * param_1, undefined8 * param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcdd20(undefined4 *param_1,undefined8 *param_2,long *****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long ***ppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  undefined **local_160;
  ulong local_158;
  long *****local_150;
  long ****local_148;
  long ****local_140;
  char *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  long *****local_90;
  long ****local_88;
  long *****local_80;
  long ****local_78;
  undefined4 local_6c [3];
  
  uVar2 = SUB84(param_3,0);
  FUN_7103776390(&local_160,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *param_1 = uVar2;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long *****)((ulong)local_80 & 0xffffffff00000000);
      local_150 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_150;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7101bcddb0;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101bcddb0:
  *puVar5 = "progress_gauge";
  puVar5[1] = "linear";
  local_150 = (long *****)((ulong)local_150 & 0xffffffff00000000);
  local_148 = (long ****)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_148 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_148 = (long ****)
                      FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), local_148 != (long ****)0x0)) goto LAB_7101bcde1c;
    }
    local_148 = (long ****)0x0;
  }
LAB_7101bcde1c:
  local_140 = (long ****)((long)local_148 + 0x10);
  uVar1 = puVar5[1];
  *local_148 = (long ***)*puVar5;
  *(undefined8 *)((long)local_148 + 8) = uVar1;
  local_138 = (char *)local_140;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101bcde8c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101bcde8c:
  *puVar7 = "progress_gauge";
  puVar7[1] = "color_default";
  local_130 = 1;
  local_128 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_128 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_128 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), local_128 != (undefined8 *)0x0)) goto LAB_7101bcdef4;
    }
    local_128 = (undefined8 *)0x0;
  }
LAB_7101bcdef4:
  local_120 = local_128 + 2;
  uVar1 = puVar7[1];
  *local_128 = *puVar7;
  local_128[1] = uVar1;
  local_118 = local_120;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7101bcdf64;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101bcdf64:
  *puVar8 = "progress_gauge";
  puVar8[1] = "color_battlestart";
  local_110 = 2;
  local_108 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_108 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_108 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), local_108 != (undefined8 *)0x0)) goto LAB_7101bcdfcc;
    }
    local_108 = (undefined8 *)0x0;
  }
LAB_7101bcdfcc:
  local_100 = local_108 + 2;
  uVar1 = puVar8[1];
  *local_108 = *puVar8;
  local_108[1] = uVar1;
  local_f8 = local_100;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7101bce03c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101bce03c:
  *puVar9 = "progress_gauge";
  puVar9[1] = "loop_light";
  local_f0 = 3;
  local_e8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_e8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_e8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), local_e8 != (undefined8 *)0x0)) goto LAB_7101bce0a4;
    }
    local_e8 = (undefined8 *)0x0;
  }
LAB_7101bce0a4:
  local_e0 = local_e8 + 2;
  uVar1 = puVar9[1];
  *local_e8 = *puVar9;
  local_e8[1] = uVar1;
  local_d8 = local_e0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7101bce114;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101bce114:
  *puVar10 = "progress_gauge";
  puVar10[1] = "in_allready";
  local_d0 = 4;
  local_c8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_c8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_c8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), local_c8 != (undefined8 *)0x0)) goto LAB_7101bce17c;
    }
    local_c8 = (undefined8 *)0x0;
  }
LAB_7101bce17c:
  local_c0 = local_c8 + 2;
  uVar1 = puVar10[1];
  *local_c8 = *puVar10;
  local_c8[1] = uVar1;
  local_b8 = local_c0;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101bce1ec;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101bce1ec:
  *puVar11 = "progress_gauge";
  puVar11[1] = "loop_allready";
  local_b0 = 5;
  local_a8 = (undefined8 *)
             FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_a8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long *****)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long *****)&DAT_00000010;
      param_3 = (long *****)&local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar6 & 1) != 0) &&
         (local_a8 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), local_a8 != (undefined8 *)0x0)) goto LAB_7101bce258;
    }
    local_a8 = (undefined8 *)0x0;
  }
LAB_7101bce258:
  local_a0 = local_a8 + 2;
  uVar1 = puVar11[1];
  *local_a8 = *puVar11;
  local_a8[1] = uVar1;
  local_80 = (long *****)&PTR_FUN_710523d9e8;
  local_98 = local_a0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_90 = (long *****)&SUB_00000018;
      param_3 = (long *****)&local_90;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar6 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar12 != (undefined8 *)0x0)) goto LAB_7101bce2d4;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101bce2d4:
  *(undefined1 *)(puVar12 + 2) = 1;
  *puVar12 = 0;
  puVar12[1] = 0;
  if ((long ******)(param_1 + 4) != &local_80) {
    **(undefined8 **)(param_1 + 6) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 6) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 6) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  if ((long ******)(param_1 + 8) != &local_80) {
    **(undefined8 **)(param_1 + 10) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 10) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 10) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  if ((long ******)(param_1 + 0xc) != &local_80) {
    **(undefined8 **)(param_1 + 0xe) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 0xe) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 0xe) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  if ((long ******)(param_1 + 0x10) != &local_80) {
    **(undefined8 **)(param_1 + 0x12) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 0x12) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  if ((long ******)(param_1 + 0x14) != &local_80) {
    **(undefined8 **)(param_1 + 0x16) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 0x16) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 0x16) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  if ((long ******)(param_1 + 0x18) != &local_80) {
    **(undefined8 **)(param_1 + 0x1a) = *puVar12;
    *(undefined8 *)(*(long *)(param_1 + 0x1a) + 8) = puVar12[1];
    *(undefined1 *)(*(long *)(param_1 + 0x1a) + 0x10) = *(undefined1 *)(puVar12 + 2);
  }
  local_80 = (long *****)&PTR_FUN_710523d9e8;
  local_78 = (long ****)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar12);
  }
  pppppplVar14 = &local_150;
  do {
    if (5 < *(uint *)pppppplVar14) goto LAB_7101bce80c;
    FUN_7103776390(&local_80,&local_160,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    ppppplVar15 = pppppplVar14[1];
    ppppplVar16 = pppppplVar14[2];
    if ((long)ppppplVar16 - (long)ppppplVar15 != 0) {
      uVar6 = 0;
      uVar18 = (long)ppppplVar16 - (long)ppppplVar15 >> 3;
      do {
        uVar17 = (long)ppppplVar16 - (long)ppppplVar15 >> 3;
        if (uVar6 == uVar18 - 1) {
          if (uVar17 <= uVar6) {
LAB_7101bce804:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_71037780e0(&local_90,(long)&local_80,ppppplVar15[uVar6],param_3,param_4,param_5,
                         param_6,param_7,param_8);
          pppplVar4 = local_88;
          uVar3 = *(uint *)pppppplVar14;
          if (5 < uVar3) goto LAB_7101bce80c;
          if ((long ******)(param_1 + (long)(int)uVar3 * 4 + 4) != &local_90) {
            local_88 = (long ****)0x0;
            uVar18 = *(ulong *)(param_1 + (long)(int)uVar3 * 4 + 6);
            *(long *****)(param_1 + (long)(int)uVar3 * 4 + 6) = pppplVar4;
            if (uVar18 != 0) {
              FUN_710392eb40(uVar18);
            }
          }
          pppplVar4 = local_88;
          local_90 = (long *****)&PTR_FUN_710523d9e8;
          local_88 = (long ****)0x0;
          if (pppplVar4 != (long ****)0x0) {
            FUN_710392eb40((ulong)pppplVar4);
          }
        }
        else {
          if (uVar17 <= uVar6) goto LAB_7101bce804;
          FUN_7103776640(&local_90,(long)&local_80,(byte ****)ppppplVar15[uVar6],param_3,param_4,
                         param_5,param_6,param_7,param_8);
          pppplVar4 = local_78;
          local_78 = local_88;
          local_88 = (long ****)0x0;
          if (pppplVar4 != (long ****)0x0) {
            ppplVar13 = pppplVar4[3];
            pppplVar4[2] = (long ***)&PTR_FUN_710523d9a8;
            pppplVar4[3] = (long ***)0x0;
            if (ppplVar13 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar13);
            }
            FUN_710392eb40((ulong)pppplVar4);
          }
          local_90 = (long *****)&PTR_FUN_710523d988;
          local_88 = (long ****)0x0;
        }
        ppppplVar15 = pppppplVar14[1];
        ppppplVar16 = pppppplVar14[2];
        uVar6 = uVar6 + 1;
        uVar18 = (long)ppppplVar16 - (long)ppppplVar15 >> 3;
      } while (uVar6 < uVar18);
    }
    pppplVar4 = local_78;
    local_80 = (long *****)&PTR_FUN_710523d988;
    local_78 = (long ****)0x0;
    if (pppplVar4 != (long ****)0x0) {
      ppplVar13 = pppplVar4[3];
      pppplVar4[2] = (long ***)&PTR_FUN_710523d9a8;
      pppplVar4[3] = (long ***)0x0;
      if (ppplVar13 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar13);
      }
      FUN_710392eb40((ulong)pppplVar4);
    }
    pppppplVar14 = pppppplVar14 + 4;
  } while (pppppplVar14 != &local_90);
  if (local_a8 != (undefined8 *)0x0) {
    local_a0 = local_a8;
    FUN_710392eb40((ulong)local_a8);
  }
  if (local_c8 != (undefined8 *)0x0) {
    local_c0 = local_c8;
    FUN_710392eb40((ulong)local_c8);
  }
  if (local_e8 != (undefined8 *)0x0) {
    local_e0 = local_e8;
    FUN_710392eb40((ulong)local_e8);
  }
  if (local_108 != (undefined8 *)0x0) {
    local_100 = local_108;
    FUN_710392eb40((ulong)local_108);
  }
  if (local_128 != (undefined8 *)0x0) {
    local_120 = local_128;
    FUN_710392eb40((ulong)local_128);
  }
  if (local_148 != (long ****)0x0) {
    local_140 = local_148;
    FUN_710392eb40((ulong)local_148);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar11);
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar9);
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar5);
  }
  FUN_7103776390(&local_90,&local_160,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = *param_1;
  local_148 = (long ****)0x71043cf439;
  local_138 = "set_txt_status_next";
  local_80 = (long *****)&local_150;
  pppppplVar14 = &local_80;
  local_150 = (long *****)((ulong)local_150 & 0xffffffff00000000);
  local_140 = (long ****)CONCAT44(local_140._4_4_,1);
  local_78 = (long ****)0x2;
  FUN_7101bc9fe0((long)(param_1 + 0x50),(long)&local_90,(long ****)pppppplVar14,param_4,param_5,
                 param_6,param_7,param_8);
  local_80 = (long *****)((ulong)local_80 & 0xffffffff00000000);
  local_78 = (long ****)0x71043f07f4;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x18,(long ****)pppppplVar14,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_150 = (long *****)&SUB_00000018;
      pppppplVar14 = &local_150;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,(long ****)pppppplVar14,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7101bce710;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101bce710:
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 1;
  **(undefined8 **)(param_1 + 0x5e) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x5e) + 8) = puVar5[1];
  *(undefined1 *)(*(long *)(param_1 + 0x5e) + 0x10) = *(undefined1 *)(puVar5 + 2);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar5);
  }
  if ((int)local_80 == 0) {
    FUN_71037780e0(&local_150,(long)&local_90,local_78,pppppplVar14,param_4,param_5,param_6,param_7,
                   param_8);
    pppplVar4 = local_148;
    if ((int)local_80 == 0) {
      if ((long ******)(param_1 + 0x5c) != &local_150) {
        local_148 = (long ****)0x0;
        uVar6 = *(ulong *)(param_1 + 0x5e);
        *(long *****)(param_1 + 0x5e) = pppplVar4;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
      }
      pppplVar4 = local_148;
      local_150 = (long *****)&PTR_FUN_710523d9e8;
      local_148 = (long ****)0x0;
      if (pppplVar4 != (long ****)0x0) {
        FUN_710392eb40((ulong)pppplVar4);
      }
      pppplVar4 = local_88;
      param_1[0x1c] = uVar2;
      local_90 = (long *****)&PTR_FUN_710523d988;
      local_88 = (long ****)0x0;
      if (pppplVar4 != (long ****)0x0) {
        ppplVar13 = pppplVar4[3];
        pppplVar4[2] = (long ***)&PTR_FUN_710523d9a8;
        pppplVar4[3] = (long ***)0x0;
        if (ppplVar13 != (long ***)0x0) {
          FUN_710392eb40((ulong)ppplVar13);
        }
        FUN_710392eb40((ulong)pppplVar4);
      }
      uVar6 = local_158;
      local_160 = &PTR_FUN_710523d988;
      local_158 = 0;
      if (uVar6 != 0) {
        uVar18 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40(uVar6);
      }
      return;
    }
  }
LAB_7101bce80c:
                    /* WARNING: Subroutine does not return */
  abort();
}

