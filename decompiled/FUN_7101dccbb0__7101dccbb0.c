// addr:      7101dccbb0
// offset:    0x1dccbb0
// name:      FUN_7101dccbb0
// mangled:   
// signature: undefined __cdecl FUN_7101dccbb0(undefined8 * param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, uint * param_6, undefined * * param_7, byte * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101dccbb0(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,uint *param_6,undefined **param_7,byte *param_8)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long ***ppplVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long ***ppplVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar12;
  char *pcVar13;
  byte ****ppppbVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  uint uVar17;
  long lVar18;
  undefined **ppuVar19;
  long *plVar20;
  code *pcVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  byte *pbVar27;
  long lVar28;
  long *plVar29;
  byte *pbVar30;
  long ****pppplVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  ulong uVar35;
  ulong uVar36;
  char cVar37;
  uint uVar38;
  byte ***pppbVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 *puStack_258;
  undefined **local_250;
  long ***local_240;
  long ***local_238;
  long ***local_230;
  undefined **local_228;
  undefined **local_220;
  undefined **local_218;
  long ***local_210;
  long *local_208;
  undefined8 local_200;
  char acStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
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
  undefined4 local_74 [5];
  
  puVar11 = param_1 + 0x26;
  FUN_71032cbf30(puVar11,*(long *)*param_1,(ulong *)&DAT_7104545918,(byte ****)0x3,param_5,param_6,
                 param_7,param_8);
  pppplVar12 = (long ****)&DAT_7104545920;
  ppppbVar14 = (byte ****)0x1;
  FUN_71032cbf30(param_1 + 0x27,*(long *)*param_1,(ulong *)&DAT_7104545920,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar18 = *(long *)param_1[0x26];
  puVar1 = param_1 + 0x28;
  if (puVar1 != (undefined8 *)(lVar18 + 8)) {
    *(undefined8 *)param_1[0x29] = **(undefined8 **)(lVar18 + 0x10);
    *(undefined8 *)(param_1[0x29] + 8) = *(undefined8 *)(*(long *)(lVar18 + 0x10) + 8);
    lVar25 = *(long *)(lVar18 + 0x10);
    lVar18 = param_1[0x29];
    if (lVar18 != lVar25) {
      **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar25 + 0x18);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x18);
    }
  }
  plVar32 = param_1 + 0x29;
  pcVar13 = "on_plt_menu_lyt_00";
  if ((param_2 & 1) == 0) {
    pcVar13 = "off_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,*plVar32,(long)pcVar13);
  local_1f0 = 0;
  uStack_1e8 = 0;
  FUN_7103776290(&local_1e0,extraout_x1,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  local_200._4_4_ = 0;
  acStack_1f8[0] = '\0';
  acStack_1f8[1] = '\0';
  acStack_1f8[2] = '\0';
  acStack_1f8[3] = '\0';
  uStack_1e8 = uRam0000007107459008;
  local_1f0 = _ConstantZero;
  *(undefined8 *)(local_1d8 + 8) = 0;
  local_200._0_4_ = 7;
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"plt_menu_lyt_00",pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  plVar20 = (long *)local_1a8;
  uVar15 = _ConstantZero;
  uVar42 = uRam0000007107459008;
  if (*(long *)local_1a8 != 0) {
    uVar15 = *(undefined8 *)(*(long *)local_1a8 + 0x30);
    uVar42 = 0;
  }
  FUN_7103776910(&local_228,(long)puVar1,(long ****)"right_pos",pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  ppuVar8 = local_220;
  uVar40 = _ConstantZero;
  uVar43 = uRam0000007107459008;
  if (*local_220 != (undefined *)0x0) {
    uVar40 = *(undefined8 *)((long)*local_220 + 0x30);
    uVar43 = 0;
  }
  FUN_7103776910(&local_210,(long)puVar1,(long ****)"set_scr_sort",pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  plVar34 = local_208;
  uVar41 = _ConstantZero;
  uVar44 = uRam0000007107459008;
  if (*local_208 != 0) {
    uVar41 = *(undefined8 *)(*local_208 + 0x30);
    uVar44 = 0;
  }
  local_210 = (long ***)&PTR_FUN_710523d9a8;
  local_208 = (long *)0x0;
  uStack_1e8 = CONCAT44((float)((ulong)uVar42 >> 0x20) + (float)((ulong)uVar43 >> 0x20) +
                        (float)((ulong)uVar44 >> 0x20),(float)uVar42 + (float)uVar43 + (float)uVar44
                       );
  local_1f0 = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar40 >> 0x20) +
                       (float)((ulong)uVar41 >> 0x20),(float)uVar15 + (float)uVar40 + (float)uVar41)
  ;
  if (plVar34 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar34);
  }
  local_228 = &PTR_FUN_710523d9a8;
  local_220 = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (plVar20 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar20);
  }
  if ((param_2 & 1) == 0) {
    local_1f0 = CONCAT44((int)((ulong)local_1f0 >> 0x20),(float)local_1f0 + 110.0);
  }
  uVar35 = param_1[0xc5];
  local_220 = (undefined **)0x0;
  local_218 = (undefined **)0x0;
  local_228 = (undefined **)0x0;
  if (uVar35 != 0) {
    if (0x38e38e38e38e38e < uVar35) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar39 = (byte ***)(uVar35 * 0x48);
    if (pppbVar39 == (byte ***)0x0) {
      pppbVar39 = (byte ***)0x1;
    }
    ppuVar8 = (undefined **)
              FUN_710392e290(0x10,pppbVar39,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
    if (ppuVar8 == (undefined **)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_210 = (long ***)((ulong)local_210 & 0xffffffff00000000);
        pppplVar12 = (long ****)&local_1b0;
        local_1b0 = (undefined **)pppbVar39;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_210);
        if (((uVar9 & 1) != 0) &&
           (ppuVar8 = (undefined **)
                      FUN_710392e290(0x10,pppbVar39,pppplVar12,ppppbVar14,param_5,param_6,param_7,
                                     param_8), ppuVar8 != (undefined **)0x0)) goto LAB_7101dcceb0;
      }
      ppuVar8 = (undefined **)0x0;
    }
LAB_7101dcceb0:
    uVar9 = uVar35 & 3;
    local_228 = ppuVar8;
    local_218 = ppuVar8 + uVar35 * 9;
    uVar36 = uVar35;
    ppuVar19 = ppuVar8;
    if (uVar9 != 0) {
      lVar18 = -uVar9;
      do {
        *(undefined1 *)(ppuVar19 + 1) = 0;
        lVar18 = lVar18 + 1;
        *ppuVar19 = (undefined *)0x0;
        ppuVar19 = ppuVar19 + 9;
      } while (lVar18 != 0);
      uVar36 = uVar35 - uVar9;
      ppuVar19 = ppuVar8 + uVar9 * 9;
    }
    if (2 < uVar35 - 1) {
      do {
        *(undefined1 *)(ppuVar19 + 1) = 0;
        *ppuVar19 = (undefined *)0x0;
        uVar36 = uVar36 - 4;
        *(undefined1 *)(ppuVar19 + 10) = 0;
        ppuVar19[9] = (undefined *)0x0;
        *(undefined1 *)(ppuVar19 + 0x13) = 0;
        ppuVar19[0x12] = (undefined *)0x0;
        *(undefined1 *)(ppuVar19 + 0x1c) = 0;
        ppuVar19[0x1b] = (undefined *)0x0;
        ppuVar19 = ppuVar19 + 0x24;
      } while (uVar36 != 0);
    }
    local_220 = ppuVar8 + uVar35 * 9;
  }
  plVar20 = (long *)param_1[0xc4];
  uVar4 = 0x811c9dc5;
  if (plVar20 != (long *)0x0) {
    pbVar27 = (byte *)((long)&local_1a8 + 1);
    pppplVar12 = (long ****)0x8e38e38e38e38e39;
    ppppbVar14 = (byte ****)&DAT_00000048;
    param_5 = (long ****)0x35325f;
    param_6 = &switchD_7101dcd0a8::switchdataD_71044fb5b8;
    do {
      bVar3 = *(byte *)(plVar20 + 2);
      uVar17 = uVar4;
      if (bVar3 < 4) {
        if (bVar3 < 5) {
                    /* WARNING: Switch is manually overridden */
          switch(bVar3) {
          case 0:
            uVar38 = 0x6d;
            local_1a0 = 0x74726f735f737469;
            local_1b0 = (undefined **)0x1300000000;
            local_1a8 = (code *)0x726970735f756e6d;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x38315f);
            pbVar30 = pbVar27;
            do {
              uVar17 = uVar17 * 0x89 ^ uVar38;
              uVar38 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar38 != 0);
            break;
          case 1:
            uVar38 = 0x6d;
            local_1b0 = (undefined **)0x1300000000;
            local_1a8 = (code *)0x726970735f756e6d;
            local_1a0 = 0x74726f735f737469;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x33305f);
            pbVar30 = pbVar27;
            do {
              uVar17 = uVar17 * 0x89 ^ uVar38;
              uVar38 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar38 != 0);
            break;
          case 2:
            uVar38 = 0x6d;
            local_1b0 = (undefined **)0x1300000000;
            local_1a8 = (code *)0x726970735f756e6d;
            local_1a0 = 0x74726f735f737469;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x34305f);
            pbVar30 = pbVar27;
            do {
              uVar17 = uVar17 * 0x89 ^ uVar38;
              uVar38 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar38 != 0);
            break;
          case 3:
            uVar38 = 0x6d;
            local_1b0 = (undefined **)0x1300000000;
            local_1a8 = (code *)0x726970735f756e6d;
            local_1a0 = 0x74726f735f737469;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x32305f);
            pbVar30 = pbVar27;
            do {
              uVar17 = uVar17 * 0x89 ^ uVar38;
              uVar38 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar38 != 0);
            break;
          case 4:
            uVar38 = 0x6d;
            local_1b0 = (undefined **)0x1300000000;
            local_1a8 = (code *)0x726970735f756e6d;
            local_1a0 = 0x74726f735f737469;
            local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x32325f);
            pbVar30 = pbVar27;
            do {
              uVar17 = uVar17 * 0x89 ^ uVar38;
              uVar38 = (uint)*pbVar30;
              pbVar30 = pbVar30 + 1;
            } while (uVar38 != 0);
          }
          goto LAB_7101dcd110;
        }
        cVar37 = '\0';
        local_1a8 = (code *)((ulong)local_1a8 & 0xffffffffffffff00);
        local_1b0 = (undefined **)0x0;
      }
      else {
        uVar38 = 0x6d;
        local_1b0 = (undefined **)0x1300000000;
        local_1a8 = (code *)0x726970735f756e6d;
        local_1a0 = 0x74726f735f737469;
        local_198 = (undefined8 *)CONCAT44(local_198._4_4_,0x35325f);
        pbVar30 = pbVar27;
        do {
          uVar17 = uVar17 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar30;
          pbVar30 = pbVar30 + 1;
        } while (uVar38 != 0);
LAB_7101dcd110:
        local_1a0 = 0x74726f735f737469;
        local_1a8 = (code *)0x726970735f756e6d;
        cVar37 = 'm';
        local_1b0 = (undefined **)CONCAT44(0x13,uVar17);
      }
      pbVar30 = (byte *)(((long)local_220 - (long)local_228 >> 3) * -0x71c71c71c71c71c7);
      param_8 = (byte *)(long)*(int *)((long)plVar20 + 0x14);
      if (pbVar30 < param_8 || (long)pbVar30 - (long)param_8 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      param_7 = local_228 + (long)param_8 * 9;
      if (param_7 != (undefined **)&local_1b0) {
        uVar35 = 0;
        lVar18 = (long)param_8 * 0x48 + 8;
        while (cVar37 != '\0') {
          *(char *)((long)local_228 + uVar35 + lVar18) = cVar37;
          if (pbVar27[uVar35] == 0) {
            uVar35 = uVar35 + 1;
            break;
          }
          lVar25 = uVar35 + lVar18;
          *(byte *)((long)local_228 + lVar25 + 1) = pbVar27[uVar35];
          cVar37 = *(char *)((long)&local_1a8 + uVar35 + 2);
          if (cVar37 == '\0') {
            uVar35 = uVar35 + 2;
            break;
          }
          *(char *)((long)local_228 + lVar25 + 2) = cVar37;
          if (0x3e < (int)uVar35 + 3U) {
            uVar35 = (ulong)((int)uVar35 + 3);
            break;
          }
          lVar25 = uVar35 + 3;
          uVar35 = uVar35 + 3;
          cVar37 = *(char *)((long)&local_1a8 + lVar25);
        }
        *(undefined1 *)((long)local_228 + (uVar35 & 0xffffffff) + (long)param_8 * 0x48 + 8) = 0;
        bVar3 = *(byte *)(local_228 + (long)param_8 * 9 + 1);
        uVar38 = (uint)bVar3;
        *(int *)((long)local_228 + (long)param_8 * 0x48 + 4) = (int)uVar35;
        uVar17 = uVar4;
        if (bVar3 != 0) {
          pbVar30 = (byte *)((long)local_228 + (long)param_8 * 0x48 + 9);
          do {
            uVar17 = uVar17 * 0x89 ^ uVar38;
            param_8 = pbVar30 + 1;
            uVar38 = (uint)*pbVar30;
            pbVar30 = param_8;
          } while (uVar38 != 0);
        }
        *(uint *)param_7 = uVar17;
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_blinder",pppplVar12,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  ppuVar19 = local_220;
  ppuVar8 = local_228;
  local_240 = (long ***)0x0;
  local_238 = (long ***)0x0;
  local_230 = (long ***)0x0;
  ppplVar5 = (long ***)((long)local_220 - (long)local_228);
  if (ppplVar5 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar5 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppplVar10 = (long ***)
                FUN_710392e290(0x10,ppplVar5,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
    if (ppplVar10 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        pppplVar12 = &local_210;
        local_210 = ppplVar5;
        uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar35 & 1) != 0) &&
           (ppplVar10 = (long ***)
                        FUN_710392e290(0x10,ppplVar5,pppplVar12,ppppbVar14,param_5,param_6,param_7,
                                       param_8), ppplVar10 != (long ***)0x0)) goto LAB_7101dcd29c;
      }
      ppplVar10 = (long ***)0x0;
    }
LAB_7101dcd29c:
    local_230 = ppplVar10 + ((long)ppplVar5 >> 3);
    local_238 = ppplVar10;
    for (; local_240 = ppplVar10, ppuVar8 != ppuVar19; ppuVar8 = ppuVar8 + 9) {
      *(uint *)local_238 = 0;
      uVar35 = 0;
      do {
        cVar37 = *(char *)((long)ppuVar8 + uVar35 + 8);
        uVar9 = uVar35;
        if (cVar37 == '\0') break;
        *(char *)((long)local_238 + uVar35 + 8) = cVar37;
        cVar37 = *(char *)((long)ppuVar8 + uVar35 + 9);
        if (cVar37 == '\0') {
          uVar9 = uVar35 + 1;
          break;
        }
        *(char *)((long)local_238 + uVar35 + 9) = cVar37;
        cVar37 = *(char *)((long)ppuVar8 + uVar35 + 10);
        if (cVar37 == '\0') {
          uVar9 = uVar35 + 2;
          break;
        }
        uVar9 = uVar35 + 3;
        *(char *)((long)local_238 + uVar35 + 10) = cVar37;
        uVar35 = uVar9;
      } while ((uint)uVar9 < 0x3f);
      *(undefined1 *)((long)local_238 + (uVar9 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_238 + 4) = (uint)uVar9;
      uVar38 = (uint)*(byte *)(local_238 + 1);
      uVar17 = uVar4;
      if (*(byte *)(local_238 + 1) != 0) {
        pbVar27 = (byte *)((long)local_238 + 9);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar38;
          uVar38 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar38 != 0);
      }
      *(uint *)local_238 = uVar17;
      local_238 = local_238 + 9;
    }
  }
  pppplVar12 = &local_240;
  ppppbVar14 = (byte ****)&local_200;
  pppplVar16 = (long ****)&local_1b0;
  FUN_71032ccb70((long)(param_1 + 0x2a),param_1 + 0x27,pppplVar12,ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  uVar15 = extraout_x1_00;
  if (local_240 != (long ***)0x0) {
    local_238 = local_240;
    FUN_710392eb40((ulong)local_240);
    uVar15 = extraout_x1_01;
  }
  FUN_7103775fa0(*(long **)param_1[0x27],uVar15,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  uVar35 = (ulong)local_1a8;
  **(uint **)(DAT_710593b988 + 8) =
       **(uint **)(DAT_710593b988 + 8) &
       (1 << (ulong)(*(uint *)((long)param_1 + 0x164) & 0x1f) ^ 0xffffffffU);
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  if (local_228 != (undefined **)0x0) {
    local_220 = local_228;
    FUN_710392eb40((ulong)local_228);
  }
  uVar35 = local_1d8;
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  lVar18 = **(long **)*puVar11;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x10) = 0;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x1c) = 0x10;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x18) = 0x80;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x24) = 0x200;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x20) = 0x100;
  lVar18 = *(long *)(**(long **)*puVar11 + 0x608);
  if (*(long *)(**(long **)*puVar11 + 0x610) == lVar18) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar18 + 8) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar18 + 8) + 0x14) = 0x40;
  lVar18 = *(long *)(**(long **)*puVar11 + 0x608);
  if ((ulong)(*(long *)(**(long **)*puVar11 + 0x610) - lVar18 >> 4) < 2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x1c) = 0x10;
  plVar20 = param_1 + 0x2f;
  pcVar13 = "selector_0";
  *(undefined1 *)(*(long *)(lVar18 + 0x18) + 0x4ab) = 0;
  ppppbVar14 = (byte ****)&local_1b0;
  local_1b0 = (undefined **)0x0;
  local_1a0 = CONCAT17(local_1a0._7_1_,0x1000100000001);
  local_198 = (undefined8 *)&DAT_41f0000000000000;
  local_190 = (long *)((ulong)local_190._4_4_ << 0x20);
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = (code *)&DAT_01000101;
  FUN_7103770b30(plVar20,puVar1,(long ****)"selector_0",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71003a4ca0((uint *)&local_200,"set_btn_tab_%02d",0,pcVar13,ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  pcVar13 = acStack_1f8;
  FUN_71037717d0(plVar20,0,acStack_1f8,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar18 = *(long *)(param_1[0x2f] + 0x1b8);
  if (lVar18 != 0) {
    lVar25 = param_1[0x2f] + 0x1b8;
    lVar22 = lVar25;
    lVar28 = lVar18;
    do {
      bVar7 = *(int *)(lVar28 + 0x20) < 0;
      if (!bVar7) {
        lVar22 = lVar28;
      }
      lVar28 = *(long *)(lVar28 + (ulong)bVar7 * 8);
    } while (lVar28 != 0);
    if (((lVar22 != lVar25) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar34 = *(long **)(lVar22 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x208))(plVar34,0);
      pcVar13 = (char *)0x0;
      (**(code **)(*plVar34 + 0x388))(plVar34,1);
      lVar25 = *plVar20 + 0x1b8;
      lVar18 = *(long *)(*plVar20 + 0x1b8);
    }
    lVar22 = lVar25;
    if (lVar18 != 0) {
      do {
        bVar7 = *(int *)(lVar18 + 0x20) < 0;
        if (!bVar7) {
          lVar22 = lVar18;
        }
        lVar18 = *(long *)(lVar18 + (ulong)bVar7 * 8);
      } while (lVar18 != 0);
      if (((lVar22 != lVar25) && (*(int *)(lVar22 + 0x20) < 1)) &&
         (plVar34 = *(long **)(lVar22 + 0x28), plVar34 != (long *)0x0)) {
        (**(code **)(*plVar34 + 0x1f8))(plVar34,1);
        pcVar13 = (char *)0x0;
        (**(code **)(*plVar34 + 0x388))(plVar34,0);
      }
    }
  }
  FUN_71003a4ca0((uint *)&local_200,"set_btn_tab_%02d",1,pcVar13,ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar20,1,acStack_1f8,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  plVar34 = (long *)*plVar20;
  plVar26 = (long *)plVar34[0x37];
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar34 + 0x37;
    plVar33 = plVar23;
    plVar29 = plVar26;
    do {
      if (0 < (int)plVar29[4]) {
        plVar33 = plVar29;
      }
      plVar29 = (long *)plVar29[(int)plVar29[4] < 1];
    } while (plVar29 != (long *)0x0);
    if (((plVar33 != plVar23) && ((int)plVar33[4] < 2)) &&
       (plVar33 = (long *)plVar33[5], plVar33 != (long *)0x0)) {
      (**(code **)(*plVar33 + 0x208))(plVar33,0);
      (**(code **)(*plVar33 + 0x388))(plVar33,1,0);
      plVar34 = (long *)*plVar20;
      plVar26 = (long *)plVar34[0x37];
      plVar23 = plVar34 + 0x37;
    }
    plVar33 = plVar23;
    if (plVar26 != (long *)0x0) {
      do {
        if (0 < (int)plVar26[4]) {
          plVar33 = plVar26;
        }
        plVar26 = (long *)plVar26[(int)plVar26[4] < 1];
      } while (plVar26 != (long *)0x0);
      if (((plVar33 != plVar23) && ((int)plVar33[4] < 2)) &&
         (plVar26 = (long *)plVar33[5], plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
        (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
        plVar34 = (long *)*plVar20;
      }
    }
  }
  (**(code **)(*plVar34 + 0x60))(plVar34,1);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101dcd7a0:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101dcd7a0;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101dcd7d0:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101dcd7d0;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101dcd800:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101dcd800;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101dcd830:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dcd830;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101dcd860:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101dcd860;
  }
  plVar20 = param_1 + 0x30;
  ppppbVar14 = (byte ****)&local_1b0;
  local_1b0 = (undefined **)0x0;
  local_1a0 = CONCAT17(local_1a0._7_1_,0x1000100000001);
  local_198 = (undefined8 *)&DAT_41f0000000000000;
  local_190 = (long *)((ulong)local_190 & 0xffffffff00000000);
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_1a8 = (code *)&DAT_00010101;
  FUN_7103770b30(plVar20,puVar1,(long ****)"selector_1",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar20,0,"set_btn_key_l",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  uVar15 = 0;
  FUN_7103771930(param_1[0x30],0,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar16,param_6,param_7,
                 param_8);
  lVar18 = *(long *)(param_1[0x30] + 0x1b8);
  if (lVar18 != 0) {
    lVar25 = param_1[0x30] + 0x1b8;
    lVar22 = lVar25;
    do {
      bVar7 = *(int *)(lVar18 + 0x20) < 0;
      if (!bVar7) {
        lVar22 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)bVar7 * 8);
    } while (lVar18 != 0);
    if (((lVar22 != lVar25) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar34 = *(long **)(lVar22 + 0x28), plVar34 != (long *)0x0)) {
      (**(code **)(*plVar34 + 0x208))(plVar34,1);
      (**(code **)(*plVar34 + 0x388))(plVar34,0,0);
    }
  }
  FUN_71037717d0(plVar20,1,"set_btn_key_r",uVar15,pppplVar16,param_6,param_7,param_8);
  pppplVar12 = (long ****)&DAT_00000009;
  ppppbVar14 = (byte ****)0x0;
  FUN_7103771930(*plVar20,1,(long ****)&DAT_00000009,(byte ****)0x0,pppplVar16,param_6,param_7,
                 param_8);
  plVar34 = (long *)*plVar20;
  plVar26 = (long *)plVar34[0x37];
  if (plVar26 != (long *)0x0) {
    plVar23 = plVar34 + 0x37;
    do {
      if (0 < (int)plVar26[4]) {
        plVar23 = plVar26;
      }
      plVar26 = (long *)plVar26[(int)plVar26[4] < 1];
    } while (plVar26 != (long *)0x0);
    if (((plVar23 != plVar34 + 0x37) && ((int)plVar23[4] < 2)) &&
       (plVar26 = (long *)plVar23[5], plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x208))(plVar26,1);
      pppplVar12 = (long ****)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      plVar34 = (long *)*plVar20;
    }
  }
  (**(code **)(*plVar34 + 0x60))(plVar34,0);
  if (alStack_c0 == local_a0) {
    pcVar21 = *(code **)(*local_a0 + 0x20);
LAB_7101dcda40:
    (*pcVar21)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101dcda40;
  }
  if (alStack_f0 == local_d0) {
    pcVar21 = *(code **)(*local_d0 + 0x20);
LAB_7101dcda70:
    (*pcVar21)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar21 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101dcda70;
  }
  if (alStack_120 == local_100) {
    pcVar21 = *(code **)(*local_100 + 0x20);
LAB_7101dcdaa0:
    (*pcVar21)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar21 = *(code **)(*local_100 + 0x28);
    goto LAB_7101dcdaa0;
  }
  if (alStack_150 == local_130) {
    pcVar21 = *(code **)(*local_130 + 0x20);
LAB_7101dcdad0:
    (*pcVar21)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar21 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dcdad0;
  }
  if (alStack_180 == local_160) {
    pcVar21 = *(code **)(*local_160 + 0x20);
LAB_7101dcdb00:
    (*pcVar21)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar21 = *(code **)(*local_160 + 0x28);
    goto LAB_7101dcdb00;
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"view_supportitem",pppplVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  puVar6 = local_1a8;
  if (param_1 + 0x31 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar35 = param_1[0x32];
    param_1[0x32] = puVar6;
    if (uVar35 != 0) {
      FUN_710392eb40(uVar35);
    }
  }
  puVar6 = local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"view_base",pppplVar12,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x33 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x34];
    param_1[0x34] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  (**(code **)(*(long *)param_1[0x30] + 0x60))((long *)param_1[0x30],0);
  uVar35 = (ulong)*(byte *)((long)param_1 + 0x5f9);
  if (uVar35 < 2) {
    local_1b0 = &PTR_FUN_710523d9e8;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x18,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_228 = (undefined **)((ulong)local_228 & 0xffffffff00000000);
        local_200._0_4_ = 0x18;
        local_200._4_4_ = 0;
        pppplVar12 = (long ****)&local_200;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_228);
        if (((uVar9 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,
                                     param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101dcdc24;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101dcdc24:
    *(undefined1 *)(puVar11 + 2) = 1;
    *puVar11 = 0;
    puVar11[1] = 0;
    local_1a8 = (code *)puVar11;
    if (&local_1b0 != param_1 + uVar35 * 2 + 0x31) {
      puVar24 = (undefined8 *)param_1[uVar35 * 2 + 0x32];
      *puVar11 = *puVar24;
      puVar11[1] = puVar24[1];
      *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(param_1[uVar35 * 2 + 0x32] + 0x10);
    }
  }
  else {
    local_1b0 = &PTR_FUN_710523d9e8;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x18,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_228 = (undefined **)((ulong)local_228 & 0xffffffff00000000);
        local_200._0_4_ = 0x18;
        local_200._4_4_ = 0;
        pppplVar12 = (long ****)&local_200;
        uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_228);
        if (((uVar35 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,
                                     param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101dcdcc0;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101dcdcc0:
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 1;
    local_1a8 = (code *)puVar11;
  }
  FUN_710377aee0(0x3f800000,(long)&local_1b0);
  puVar11 = (undefined8 *)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar11);
  }
  pppplVar31 = (long ****)param_1[0xc1];
  *(undefined8 *)param_1[0x37] = *(undefined8 *)*plVar32;
  *(undefined8 *)(param_1[0x37] + 8) = *(undefined8 *)(param_1[0x29] + 8);
  lVar25 = param_1[0x29];
  lVar18 = param_1[0x37];
  if (lVar18 != lVar25) {
    **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar25 + 0x18);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x18);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1b0 = (undefined **)&DAT_00000028;
      pppplVar12 = (long ****)&local_1b0;
      uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar35 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101dcddbc;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101dcddbc:
  FUN_7101dcfac0(puVar11,6,pppplVar31,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  plVar20 = (long *)param_1[0x39];
  param_1[0x39] = puVar11;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  plVar20 = (long *)FUN_710392e290(0x10,0x10,pppplVar31,ppppbVar14,pppplVar16,param_6,param_7,
                                   param_8);
  if (plVar20 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1b0 = (undefined **)&DAT_00000010;
      pppplVar31 = (long ****)&local_1b0;
      uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar35 & 1) != 0) &&
         (plVar20 = (long *)FUN_710392e290(0x10,0x10,pppplVar31,ppppbVar14,pppplVar16,param_6,
                                           param_7,param_8), plVar20 != (long *)0x0))
      goto LAB_7101dcde40;
    }
    plVar20 = (long *)0x0;
  }
LAB_7101dcde40:
  *plVar20 = (long)&PTR_FUN_71050b0960;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,pppplVar31,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1b0 = (undefined **)&DAT_000000b8;
      pppplVar12 = (long ****)&local_1b0;
      uVar35 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      if (((uVar35 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,pppplVar12,ppppbVar14,pppplVar16,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101dcdea0;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101dcdea0:
  *puVar11 = 0;
  puVar11[0x15] = 0;
  puVar11[0x16] = 0;
  *puVar11 = &PTR_FUN_71050b0a30;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  *(undefined8 *)((long)puVar11 + 0xa5) = 0;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[0x13] = 0;
  puVar11[0x14] = 0;
  puVar11[0x11] = 0;
  puVar11[0x12] = 0;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  plVar20[1] = (long)puVar11;
  plVar34 = (long *)param_1[0x38];
  param_1[0x38] = plVar20;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 8))();
    plVar20 = (long *)param_1[0x38];
  }
  (**(code **)(*plVar20 + 0x10))(plVar20,puVar1);
  (**(code **)(*(long *)param_1[0x38] + 0x20))();
  (**(code **)(*(long *)param_1[0x39] + 0x10))((long *)param_1[0x39],puVar1);
  (**(code **)(*(long *)param_1[0x39] + 0x20))();
  *(undefined8 *)param_1[0x74] = *(undefined8 *)*plVar32;
  *(undefined8 *)(param_1[0x74] + 8) = *(undefined8 *)(param_1[0x29] + 8);
  lVar25 = param_1[0x29];
  lVar18 = param_1[0x74];
  if (lVar18 != lVar25) {
    **(undefined8 **)(lVar18 + 0x18) = **(undefined8 **)(lVar25 + 0x18);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar18 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar25 + 0x18) + 0x18);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",0,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x65 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x66];
    param_1[0x66] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 0;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",0,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x3c;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x3d];
    param_1[0x3d] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x3e != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x3f];
    param_1[0x3f] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x40 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x41];
    param_1[0x41] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",1,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x67 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x68];
    param_1[0x68] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 1;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",1,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x43;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x44];
    param_1[0x44] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x45 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x46];
    param_1[0x46] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x47 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x48];
    param_1[0x48] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",2,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x69 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x6a];
    param_1[0x6a] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 2;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",2,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x4a;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x4b];
    param_1[0x4b] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x4c != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x4d];
    param_1[0x4d] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x4e != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x4f];
    param_1[0x4f] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",3,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x6b != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x6c];
    param_1[0x6c] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 3;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",3,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x51;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x52];
    param_1[0x52] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x53 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x54];
    param_1[0x54] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x55 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x56];
    param_1[0x56] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",4,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x6d != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x6e];
    param_1[0x6e] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 4;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",4,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x58;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x59];
    param_1[0x59] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x5a != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x5b];
    param_1[0x5b] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x5c != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x5d];
    param_1[0x5d] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",5,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x6f != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x70];
    param_1[0x70] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 5;
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_spirits_%02d",5,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  puVar11 = param_1 + 0x5f;
  if (puVar11 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x60];
    param_1[0x60] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x61 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x62];
    param_1[0x62] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar11,(long ****)"set_rep_spirits_shadow",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 99 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[100];
    param_1[100] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  uVar15 = 6;
  FUN_71037780e0(&local_1b0,(long)puVar1,(long ****)"summon_spirits_%02d",6,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x71 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x72];
    param_1[0x72] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9e8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_class_star",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x75 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x76];
    param_1[0x76] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_icon_base",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x77 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x78];
    param_1[0x78] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_icon_support",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x79 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x7a];
    param_1[0x7a] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_icon_energy",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x7b != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x7c];
    param_1[0x7c] = uVar35;
    if (uVar9 != 0) {
      uVar35 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"set_txt_name",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x7d != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x7e];
    param_1[0x7e] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"set_txt_attribute",uVar15,ppppbVar14,pppplVar16
                 ,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x7f != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x80];
    param_1[0x80] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"set_txt_support_type",uVar15,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x81 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x82];
    param_1[0x82] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"set_txt_support",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x83 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x84];
    param_1[0x84] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776910(&local_1b0,(long)puVar1,(long ****)"set_txt_energy",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar35 = (ulong)local_1a8;
  if (param_1 + 0x85 != &local_1b0) {
    local_1a8 = (code *)0x0;
    uVar9 = param_1[0x86];
    param_1[0x86] = uVar35;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    FUN_710392eb40(uVar35);
  }
  FUN_7103776640(&local_1b0,(long)puVar1,(byte ****)"set_parts_sp",uVar15,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  FUN_7103399950((undefined1 *)param_1[0x89],(long)&local_1b0,(long ****)"set_txt_num_sp",
                 0x71043cf8dc,pppplVar16,param_6,param_7,param_8);
  FUN_7103399a70(param_1[0x89],(long)&local_1b0,(long ****)"anim_count",(byte ****)"anim_stop",
                 pppplVar16,param_6,param_7,param_8);
  lVar18 = param_1[0x89];
  *(undefined8 *)(lVar18 + 0x58) = 0x205bf6fc80;
  *(undefined8 *)(lVar18 + 0x60) = 0x257123f4dd;
  lVar18 = param_1[0x89];
  *(undefined8 *)(lVar18 + 0x68) = 0x21fc221a56;
  *(undefined8 *)(lVar18 + 0x70) = 0x26ef44d702;
  lVar18 = param_1[0x89];
  iVar2 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  if (*(int *)(lVar18 + 0x94) != iVar2) {
    *(int *)(lVar18 + 0x94) = iVar2;
    FUN_710377a280(lVar18,(byte *)(lVar18 + 0x18),1);
  }
  uVar35 = (ulong)local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = (code *)0x0;
  if (uVar35 != 0) {
    uVar9 = *(ulong *)(uVar35 + 0x18);
    *(undefined ***)(uVar35 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar35 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar35);
  }
  FUN_7101dcac70(param_1 + 0x8a,(long)puVar1,(byte ****)"set_parts_sp_sell",
                 (long ****)"set_txt_num_sell_sp",pppplVar16,param_6,param_7,param_8);
  local_270 = &DAT_71050b07a8;
  local_268 = FUN_7101dcee20;
  local_250 = &local_270;
  local_190 = &local_1b0;
  local_1b0 = (undefined **)&DAT_71050b07a8;
  plVar32 = param_1 + 0x9e;
  local_1a0 = 0;
  local_1a8 = FUN_7101dcee20;
  local_260 = 0;
  plVar20 = (long *)param_1[0xa2];
  param_1[0xa2] = 0;
  puStack_258 = param_1;
  local_198 = param_1;
  if (plVar32 == plVar20) {
    pcVar21 = *(code **)(*plVar20 + 0x20);
LAB_7101dced30:
    (*pcVar21)();
  }
  else if (plVar20 != (long *)0x0) {
    pcVar21 = *(code **)(*plVar20 + 0x28);
    goto LAB_7101dced30;
  }
  if (local_190 == (long *)0x0) {
    param_1[0xa2] = 0;
  }
  else if (&local_1b0 == local_190) {
    param_1[0xa2] = plVar32;
    (**(code **)(*local_190 + 0x18))(local_190,plVar32);
    if (&local_1b0 == local_190) {
      pcVar21 = *(code **)(*local_190 + 0x20);
    }
    else {
      if (local_190 == (long *)0x0) goto LAB_7101dceda8;
      pcVar21 = *(code **)(*local_190 + 0x28);
    }
    (*pcVar21)();
  }
  else {
    param_1[0xa2] = local_190;
    local_190 = (long *)0x0;
  }
LAB_7101dceda8:
  if (&local_270 == local_250) {
    pcVar21 = *(code **)(*local_250 + 0x20);
  }
  else {
    if (local_250 == (undefined **)0x0) {
      return;
    }
    pcVar21 = *(code **)(*local_250 + 0x28);
  }
  (*pcVar21)();
  return;
}

