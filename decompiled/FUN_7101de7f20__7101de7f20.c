// addr:      7101de7f20
// offset:    0x1de7f20
// name:      FUN_7101de7f20
// mangled:   
// signature: undefined8 __cdecl FUN_7101de7f20(long param_1, long * param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * * param_7, ulong param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_7101de7f20(long param_1,long *param_2,ulong param_3,byte ****param_4,long ****param_5,
              ulong param_6,long ****param_7,ulong param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  long ****pppplVar4;
  undefined2 *puVar5;
  long lVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined6 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 uVar21;
  bool bVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  char *pcVar28;
  undefined *puVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  char *pcVar33;
  byte ****ppppbVar34;
  long lVar35;
  long lVar36;
  ushort *puVar37;
  byte *pbVar38;
  code *pcVar39;
  byte bVar40;
  uint uVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  int iVar45;
  int iVar46;
  long lVar47;
  int iVar48;
  int iVar49;
  undefined1 uVar50;
  long *plVar51;
  long lVar52;
  short *psVar53;
  float fVar54;
  undefined8 local_5d0;
  undefined8 local_5c8;
  ulong local_5c0;
  char local_5b8 [3];
  undefined4 local_5b5;
  undefined1 local_5b1;
  char acStack_5b0 [6];
  undefined8 uStack_5aa;
  long alStack_5a0 [4];
  long *local_580;
  long alStack_570 [4];
  long *local_550;
  long local_540 [4];
  long *local_520;
  long alStack_510 [4];
  long *local_4f0;
  long alStack_4e0 [4];
  long *local_4c0;
  undefined **local_248;
  ulong local_240;
  uint auStack_238 [2];
  undefined1 auStack_230 [64];
  undefined **local_1f0;
  ulong local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  ulong local_1b8;
  undefined **local_1b0;
  ulong local_1a8;
  undefined **local_1a0;
  ulong local_198;
  undefined **local_180;
  long *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  
  lVar36 = param_1 + 0x10;
  lVar6 = *param_2;
  lVar47 = param_2[1];
  if (*(int *)(param_1 + 0x5e4) == 2) {
    uVar31 = param_3;
    FUN_7103776640(&local_c0,lVar36,(byte ****)"set_parts_sl0_btn_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_5d0,(long)&local_c0,(long ****)"set_txt_00",uVar31,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_5d0,"pop_btn_back",uVar31,param_4,param_5,param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    uVar25 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar25 != 0) {
      uVar24 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar25);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_00",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    plVar51 = local_5c8;
    uVar32 = _ConstantZero;
    if (*local_5c8 != 0) {
      uVar32 = *(undefined8 *)(*local_5c8 + 0x30);
    }
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (plVar51 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar51);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_00",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    plVar51 = local_5c8;
    lVar35 = *local_5c8;
    if (lVar35 != 0) {
      *(undefined4 *)(lVar35 + 0x30) = 0x40000000;
      *(int *)(lVar35 + 0x34) = (int)((ulong)uVar32 >> 0x20);
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 0x10;
    }
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (undefined8 *)0x0;
    if (plVar51 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar51);
    }
    FUN_7103776ad0(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    puVar1 = local_5c8;
    plVar51 = (long *)*local_5c8;
    if (plVar51 != (long *)0x0) {
      (**(code **)(*plVar51 + 0x208))(plVar51,0);
      uVar25 = (**(code **)(*plVar51 + 0x200))(plVar51);
      if ((uVar25 & 1) == 0) {
        uVar23 = 1;
      }
      else {
        uVar23 = (**(code **)(*plVar51 + 0x210))(plVar51);
        uVar23 = uVar23 ^ 1;
      }
      uVar31 = 0;
      (**(code **)(*plVar51 + 0x388))(plVar51,uVar23 & 1);
    }
    local_5d0 = &PTR_FUN_710523d9c8;
    local_5c8 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_7103776ad0(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    puVar1 = local_5c8;
    plVar51 = (long *)*local_5c8;
    if (plVar51 != (long *)0x0) {
      (**(code **)(*plVar51 + 0x1f8))(plVar51,0);
      uVar25 = (**(code **)(*plVar51 + 0x200))(plVar51);
      if ((uVar25 & 1) == 0) {
        uVar23 = 1;
      }
      else {
        uVar23 = (**(code **)(*plVar51 + 0x210))(plVar51);
        uVar23 = uVar23 ^ 1;
      }
      uVar31 = 0;
      (**(code **)(*plVar51 + 0x388))(plVar51,uVar23 & 1);
    }
    local_5d0 = &PTR_FUN_710523d9c8;
    local_5c8 = (long *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_7103776640(&local_5d0,lVar36,(byte ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    if ((*(long *)((long)local_5c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)((long)local_5c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
    local_5d0 = &PTR_FUN_710523d988;
    local_5c8 = (long *)0x0;
    if (uVar25 != 0) {
      uVar24 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar25);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    plVar51 = local_5c8;
    uVar32 = _ConstantZero;
    if (*local_5c8 != 0) {
      uVar32 = *(undefined8 *)(*local_5c8 + 0x30);
    }
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (plVar51 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar51);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    lVar36 = *local_5c8;
    plVar51 = local_5c8;
    if (lVar36 != 0) {
      *(undefined4 *)(lVar36 + 0x30) = 0x44fa0000;
      *(int *)(lVar36 + 0x34) = (int)((ulong)uVar32 >> 0x20);
LAB_7101de8534:
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 0x10;
      plVar51 = local_5c8;
    }
  }
  else {
    uVar31 = param_3;
    FUN_7103776640(&local_c0,lVar36,(byte ****)"set_parts_sl0_btn_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_5d0,(long)&local_c0,(long ****)"set_txt_00",uVar31,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_5d0,"pop_btn_no",uVar31,param_4,param_5,param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    uVar25 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar25 != 0) {
      uVar24 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar25);
    }
    FUN_7103776640(&local_c0,lVar36,(byte ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_7103776910(&local_5d0,(long)&local_c0,(long ****)"set_txt_00",uVar31,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_5d0,"pop_btn_yes",uVar31,param_4,param_5,param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (undefined8 *)0x0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    uVar25 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar25 != 0) {
      uVar24 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar25);
    }
    FUN_7103776ad0(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    puVar1 = local_5c8;
    plVar51 = (long *)*local_5c8;
    if (plVar51 != (long *)0x0) {
      uVar23 = 1;
      (**(code **)(*plVar51 + 0x208))(plVar51,1);
      uVar25 = (**(code **)(*plVar51 + 0x200))(plVar51);
      if ((uVar25 & 1) != 0) {
        uVar23 = (**(code **)(*plVar51 + 0x210))(plVar51);
        uVar23 = uVar23 ^ 1;
      }
      uVar31 = 0;
      (**(code **)(*plVar51 + 0x388))(plVar51,uVar23 & 1);
    }
    local_5d0 = &PTR_FUN_710523d9c8;
    local_5c8 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_7103776ad0(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    puVar1 = local_5c8;
    plVar51 = (long *)*local_5c8;
    if (plVar51 != (long *)0x0) {
      uVar23 = 1;
      (**(code **)(*plVar51 + 0x1f8))(plVar51,1);
      uVar25 = (**(code **)(*plVar51 + 0x200))(plVar51);
      if ((uVar25 & 1) != 0) {
        uVar23 = (**(code **)(*plVar51 + 0x210))(plVar51);
        uVar23 = uVar23 ^ 1;
      }
      uVar31 = 0;
      (**(code **)(*plVar51 + 0x388))(plVar51,uVar23 & 1);
    }
    local_5d0 = &PTR_FUN_710523d9c8;
    local_5c8 = (long *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    FUN_7103776640(&local_5d0,lVar36,(byte ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    if ((*(long *)((long)local_5c8 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)((long)local_5c8 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    local_5d0 = &PTR_FUN_710523d988;
    local_5c8 = (long *)0x0;
    if (uVar25 != 0) {
      uVar24 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      FUN_710392eb40(uVar25);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_00",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    plVar51 = local_5c8;
    lVar35 = *local_5c8;
    if (lVar35 != 0) {
      *(undefined8 *)(lVar35 + 0x30) = *(undefined8 *)(param_1 + 0x5f0);
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 0x10;
    }
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (plVar51 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar51);
    }
    FUN_7103776910(&local_5d0,lVar36,(long ****)"set_parts_sl0_btn_01",uVar31,param_4,param_5,
                   param_6,param_7,param_8);
    lVar36 = *local_5c8;
    plVar51 = local_5c8;
    if (lVar36 != 0) {
      *(undefined8 *)(lVar36 + 0x30) = *(undefined8 *)(param_1 + 0x600);
      goto LAB_7101de8534;
    }
  }
  local_5d0 = &PTR_FUN_710523d9a8;
  local_5c8 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_5d0 = (undefined **)0x1053dffe8c;
  FUN_7103772070(*(long *)(param_1 + 0x20),0,(long ****)&local_5d0,param_4,param_5,param_6,param_7,
                 param_8);
  lVar36 = *param_2;
  local_b0 = 0;
  local_c0 = (undefined **)0x0;
  local_b8 = 0;
  uVar25 = param_2[1] - lVar36;
  uVar23 = (uint)(uVar25 >> 3);
  if (uVar23 != 0) {
    if (param_2[1] != lVar36) {
      uVar31 = 0;
      uVar41 = 0;
      iVar45 = 0;
      iVar46 = 0;
      iVar48 = 0;
      iVar49 = 0;
      param_4 = (byte ****)&DAT_71044fb758;
      do {
        sVar10 = *(short *)(*(long *)(lVar36 + uVar31 * 8) + 8);
        param_5 = (long ****)(long)sVar10;
        if ((sVar10 == -1) || (1999 < sVar10)) {
override_jmp_7101de866c_case_0:
          iVar49 = iVar49 + 1;
          local_c0 = (undefined **)CONCAT44(local_c0._4_4_,iVar49);
        }
        else {
          lVar35 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          param_6 = *(ulong *)(lVar35 + 0x20);
          uVar8 = *(ushort *)(lVar35 + (long)(int)sVar10 * 2 + 0x60);
          param_5 = (long ****)(ulong)uVar8;
          param_7 = (long ****)
                    (((long)(*(long *)(lVar35 + 0x28) - param_6) >> 6) * -0x3333333333333333);
          if ((uint)param_7 <= (uint)uVar8) goto override_jmp_7101de866c_case_0;
          bVar22 = param_7 < param_5;
          lVar35 = (long)param_7 - (long)param_5;
          param_5 = (long ****)(param_6 + (long)param_5 * 0x140);
          if (bVar22 || lVar35 == 0) {
            param_5 = (long ****)&DAT_7105182b08;
          }
          param_6 = (ulong)*(byte *)((long)param_5 + 0x5e);
          if (*(byte *)((long)param_5 + 0x5e) == 0) {
            uVar11 = *(byte *)((long)param_5 + 0x6c) - 1;
            param_5 = (long ****)(ulong)uVar11;
            if (2 < uVar11) goto override_jmp_7101de866c_case_0;
            uVar11 = 0x20301 >> (ulong)((uint)(((ulong)param_5 & 0xff) << 3) & 0x1f);
            param_5 = (long ****)(ulong)uVar11;
            uVar11 = uVar11 & 0xff;
            param_6 = (ulong)uVar11;
            if (uVar11 < 5) {
              uVar24 = (ulong)param_5 & 0xff;
              param_5 = (long ****)(&DAT_71044fb758 + *(int *)(&DAT_71044fb758 + uVar24 * 4));
                    /* WARNING: Switch is manually overridden */
              switch(uVar24) {
              case 0:
                goto override_jmp_7101de866c_case_0;
              case 1:
                iVar48 = iVar48 + 1;
                local_c0 = (undefined **)CONCAT44(iVar48,(uint)local_c0);
                break;
              case 2:
                iVar46 = iVar46 + 1;
                local_b8 = CONCAT44(local_b8._4_4_,iVar46);
                break;
              case 3:
                iVar45 = iVar45 + 1;
                local_b8 = CONCAT44(iVar45,(uint)local_b8);
                break;
              case 4:
                goto override_jmp_7101de866c_case_4;
              }
            }
          }
          else {
override_jmp_7101de866c_case_4:
            uVar41 = uVar41 + 1;
            local_b0 = uVar41;
          }
        }
        uVar31 = uVar31 + 1;
        if (uVar23 <= (uint)uVar31) goto LAB_7101de86b4;
      } while ((uVar31 & 0xffffffff) < (ulong)((long)uVar25 >> 3));
    }
LAB_7101deaeb8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_7101de86b4:
  puVar1 = (undefined8 *)(param_1 + 0x10);
  FUN_7103776640(&local_128,(long)puVar1,(byte ****)"set_parts_icon_base_%02d",0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)puVar1,(long ****)"set_txt_%02d",0,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar25 = local_120;
  plVar51 = local_168;
  if ((int)local_c0._4_4_ < 1) {
    if (0 < (int)(uint)local_b8) {
      uVar50 = 2;
      lVar36 = 2;
      uVar23 = (uint)local_b8;
      goto LAB_7101de8760;
    }
    if (0 < (int)local_b8._4_4_) {
      uVar50 = 3;
      lVar36 = 3;
      uVar23 = local_b8._4_4_;
      goto LAB_7101de8760;
    }
    if (0 < (int)(uint)local_c0) {
      uVar50 = 0;
      lVar36 = 4;
      uVar23 = (uint)local_c0;
      goto LAB_7101de8760;
    }
    if (0 < (int)local_b0) {
      uVar50 = 4;
      lVar36 = 5;
      uVar23 = local_b0;
      goto LAB_7101de8760;
    }
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar36 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar36 != 0)) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe;
    }
    lVar35 = *local_168;
    if (lVar35 == 0) {
      lVar36 = 0;
    }
    else {
      lVar36 = 0;
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
  }
  else {
    uVar50 = 1;
    lVar36 = 1;
    uVar23 = local_c0._4_4_;
LAB_7101de8760:
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    snprintf((char *)&local_5d0,0x40,"mnu_spirits_return_confirm_n_%02d",0);
    param_5 = (long ****)0x0;
    FUN_71025b12c0((long)&local_128,uVar50,-1,0,0,param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar23;
    FUN_710377a280((long)&local_170,(byte *)&local_5d0,1);
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  FUN_7103776640(&local_128,(long)puVar1,(byte ****)"set_parts_icon_base_%02d",1,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)puVar1,(long ****)"set_txt_%02d",1,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar25 = local_120;
  plVar51 = local_168;
  if ((uint)lVar36 < 5) {
    bVar40 = (&DAT_71045459b8)[lVar36];
    uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
    lVar35 = lVar36 + 1;
    if ((int)uVar23 < 1) {
      if (4 < (uint)(lVar36 + 1)) goto LAB_7101de89a0;
      bVar40 = (&DAT_71045459b9)[lVar36];
      uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
      lVar35 = lVar36 + 2;
      if ((int)uVar23 < 1) {
        if (4 < (uint)(lVar36 + 2)) goto LAB_7101de89a0;
        bVar40 = (&DAT_71045459ba)[lVar36];
        uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
        lVar35 = lVar36 + 3;
        if ((int)uVar23 < 1) {
          if (4 < (uint)(lVar36 + 3)) goto LAB_7101de89a0;
          bVar40 = (&DAT_71045459bb)[lVar36];
          uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
          lVar35 = lVar36 + 4;
          if ((int)uVar23 < 1) {
            if (4 < (uint)(lVar36 + 4)) goto LAB_7101de89a0;
            bVar40 = (&DAT_71045459bc)[lVar36];
            uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
            lVar35 = lVar36 + 5;
            if ((int)uVar23 < 1) {
              if (4 < (uint)(lVar36 + 5)) goto LAB_7101de89a0;
              bVar40 = (&DAT_71045459bd)[lVar36];
              uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
              lVar35 = lVar36 + 6;
            }
          }
        }
      }
    }
    lVar36 = lVar35;
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    snprintf((char *)&local_5d0,0x40,"mnu_spirits_return_confirm_n_%02d",1);
    param_5 = (long ****)0x0;
    FUN_71025b12c0((long)&local_128,bVar40,-1,0,0,param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar23;
    FUN_710377a280((long)&local_170,(byte *)&local_5d0,1);
  }
  else {
LAB_7101de89a0:
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  FUN_7103776640(&local_128,(long)puVar1,(byte ****)"set_parts_icon_base_%02d",2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)puVar1,(long ****)"set_txt_%02d",2,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar25 = local_120;
  plVar51 = local_168;
  if ((uint)lVar36 < 5) {
    bVar40 = (&DAT_71045459b8)[lVar36];
    uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
    lVar35 = lVar36 + 1;
    if ((int)uVar23 < 1) {
      if (4 < (uint)(lVar36 + 1)) goto LAB_7101de8ba4;
      bVar40 = (&DAT_71045459b9)[lVar36];
      uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
      lVar35 = lVar36 + 2;
      if ((int)uVar23 < 1) {
        if (4 < (uint)(lVar36 + 2)) goto LAB_7101de8ba4;
        bVar40 = (&DAT_71045459ba)[lVar36];
        uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
        lVar35 = lVar36 + 3;
        if ((int)uVar23 < 1) {
          if (4 < (uint)(lVar36 + 3)) goto LAB_7101de8ba4;
          bVar40 = (&DAT_71045459bb)[lVar36];
          uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
          lVar35 = lVar36 + 4;
          if ((int)uVar23 < 1) {
            if (4 < (uint)(lVar36 + 4)) goto LAB_7101de8ba4;
            bVar40 = (&DAT_71045459bc)[lVar36];
            uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
            lVar35 = lVar36 + 5;
            if ((int)uVar23 < 1) {
              if (4 < (uint)(lVar36 + 5)) goto LAB_7101de8ba4;
              bVar40 = (&DAT_71045459bd)[lVar36];
              uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
              lVar35 = lVar36 + 6;
            }
          }
        }
      }
    }
    lVar36 = lVar35;
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    snprintf((char *)&local_5d0,0x40,"mnu_spirits_return_confirm_n_%02d",2);
    param_5 = (long ****)0x0;
    FUN_71025b12c0((long)&local_128,bVar40,-1,0,0,param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar23;
    FUN_710377a280((long)&local_170,(byte *)&local_5d0,1);
  }
  else {
LAB_7101de8ba4:
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  FUN_7103776640(&local_128,(long)puVar1,(byte ****)"set_parts_icon_base_%02d",3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_170,(long)puVar1,(long ****)"set_txt_%02d",3,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar25 = local_120;
  plVar51 = local_168;
  if ((uint)lVar36 < 5) {
    bVar40 = (&DAT_71045459b8)[lVar36];
    uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
    lVar35 = lVar36 + 1;
    if ((int)uVar23 < 1) {
      if (4 < (uint)(lVar36 + 1)) goto LAB_7101de8da8;
      bVar40 = (&DAT_71045459b9)[lVar36];
      uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
      lVar35 = lVar36 + 2;
      if ((int)uVar23 < 1) {
        if (4 < (uint)(lVar36 + 2)) goto LAB_7101de8da8;
        bVar40 = (&DAT_71045459ba)[lVar36];
        uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
        lVar35 = lVar36 + 3;
        if ((int)uVar23 < 1) {
          if (4 < (uint)(lVar36 + 3)) goto LAB_7101de8da8;
          bVar40 = (&DAT_71045459bb)[lVar36];
          uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
          lVar35 = lVar36 + 4;
          if ((int)uVar23 < 1) {
            if (4 < (uint)(lVar36 + 4)) goto LAB_7101de8da8;
            bVar40 = (&DAT_71045459bc)[lVar36];
            uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
            lVar35 = lVar36 + 5;
            if ((int)uVar23 < 1) {
              if (4 < (uint)(lVar36 + 5)) goto LAB_7101de8da8;
              bVar40 = (&DAT_71045459bd)[lVar36];
              uVar23 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
              lVar35 = lVar36 + 6;
            }
          }
        }
      }
    }
    lVar36 = lVar35;
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) | 1;
    }
    snprintf((char *)&local_5d0,0x40,"mnu_spirits_return_confirm_n_%02d",3);
    param_5 = (long ****)0x0;
    FUN_71025b12c0((long)&local_128,bVar40,-1,0,0,param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)uVar23;
    FUN_710377a280((long)&local_170,(byte *)&local_5d0,1);
  }
  else {
LAB_7101de8da8:
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar35 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar35 != 0)) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
    lVar35 = *local_168;
    if (lVar35 != 0) {
      *(byte *)(lVar35 + 0x58) = *(byte *)(lVar35 + 0x58) & 0xfe;
    }
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  FUN_7103776640(&local_128,(long)puVar1,(byte ****)"set_parts_icon_base_%02d",4,param_4,param_5,
                 param_6,param_7,param_8);
  uVar32 = 4;
  FUN_7103776910(&local_170,(long)puVar1,(long ****)"set_txt_%02d",4,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar25 = local_120;
  plVar51 = local_168;
  uVar23 = (uint)lVar36;
  if (uVar23 < 5) {
    bVar40 = (&DAT_71045459b8)[lVar36];
    uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
    if ((int)uVar41 < 1) {
      if (4 < uVar23 + 1) goto LAB_7101de8fb0;
      bVar40 = (&DAT_71045459b9)[lVar36];
      uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
      if ((int)uVar41 < 1) {
        if (4 < uVar23 + 2) goto LAB_7101de8fb0;
        bVar40 = (&DAT_71045459ba)[lVar36];
        uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
        if ((int)uVar41 < 1) {
          if (4 < uVar23 + 3) goto LAB_7101de8fb0;
          bVar40 = (&DAT_71045459bb)[lVar36];
          uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
          if ((int)uVar41 < 1) {
            if (4 < uVar23 + 4) goto LAB_7101de8fb0;
            bVar40 = (&DAT_71045459bc)[lVar36];
            uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
            if ((int)uVar41 < 1) {
              if (4 < uVar23 + 5) goto LAB_7101de8fb0;
              bVar40 = (&DAT_71045459bd)[lVar36];
              uVar41 = *(uint *)((long)&local_c0 + (ulong)bVar40 * 4);
            }
          }
        }
      }
    }
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar36 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar36 != 0)) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
    }
    lVar36 = *local_168;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
    }
    snprintf((char *)&local_5d0,0x40,"mnu_spirits_return_confirm_n_%02d",4);
    param_5 = (long ****)0x0;
    FUN_71025b12c0((long)&local_128,bVar40,-1,0,0,param_6,param_7,param_8);
    uVar32 = 1;
    param_4 = (byte ****)(ulong)uVar41;
    FUN_710377a280((long)&local_170,(byte *)&local_5d0,1);
  }
  else {
LAB_7101de8fb0:
    if ((*(long *)(local_120 + 8) != 0) &&
       (lVar36 = *(long *)(*(long *)(local_120 + 8) + 0x18), lVar36 != 0)) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe;
    }
    lVar36 = *local_168;
    if (lVar36 != 0) {
      *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe;
    }
  }
  local_170 = &PTR_FUN_710523d9a8;
  local_168 = (long *)0x0;
  if (plVar51 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar51);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  lVar36 = *param_2;
  lVar35 = param_2[1];
  if (lVar35 == lVar36) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    uVar25 = 0;
    uVar31 = 1;
    do {
      uVar8 = **(ushort **)(lVar36 + uVar25 * 8);
      if (uVar8 != 0xffff) {
        uVar41 = FUN_71025ca5d0((ulong)uVar8);
        lVar36 = *param_2;
        lVar35 = param_2[1];
        uVar23 = uVar41 + uVar23;
      }
      bVar22 = uVar31 < (ulong)(lVar35 - lVar36 >> 3);
      uVar25 = uVar31;
      uVar31 = (ulong)((int)uVar31 + 1);
    } while (bVar22);
  }
  FUN_7103776640(&local_c0,(long)puVar1,(byte ****)"set_parts_sp_icon_txt",uVar32,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_5d0,(long)&local_c0,(long ****)"set_txt_help",uVar32,param_4,param_5,param_6
                 ,param_7,param_8);
  pcVar33 = (char *)0x1;
  ppppbVar34 = (byte ****)(ulong)uVar23;
  FUN_710377a280((long)&local_5d0,(byte *)"mnu_spirits_return_confirm_sp",1);
  uVar25 = (ulong)local_5c8;
  local_5d0 = &PTR_FUN_710523d9a8;
  local_5c8 = (long *)0x0;
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
  uVar25 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = 0;
  if (uVar25 != 0) {
    uVar31 = *(ulong *)(uVar25 + 0x18);
    *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar25 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar25);
  }
  if ((ulong)(param_2[1] - *param_2 >> 3) < 10) {
    uVar25 = (ulong)(lVar47 - lVar6) >> 3;
    FUN_71003a4ca0(auStack_238,"view_num_%02d",uVar25 & 0xffffffff,pcVar33,ppppbVar34,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)auStack_230);
    if ((int)uVar25 != 0) {
      pbVar2 = (byte *)((long)&local_5c8 + 1);
      pbVar3 = (byte *)((long)&local_120 + 1);
      uVar25 = 0;
      do {
        uVar31 = uVar25 & 0xffffffff;
        FUN_7103776640(&local_5d0,(long)puVar1,(byte ****)"set_parts_%02d",uVar31,ppppbVar34,param_5
                       ,param_6,param_7,param_8);
        FUN_7103776640(&local_248,(long)&local_5d0,(byte ****)"set_parts_spirit",uVar31,ppppbVar34,
                       param_5,param_6,param_7,param_8);
        uVar31 = (ulong)local_5c8;
        local_5d0 = &PTR_FUN_710523d988;
        local_5c8 = (long *)0x0;
        if (uVar31 != 0) {
          uVar24 = *(ulong *)(uVar31 + 0x18);
          *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar31 + 0x18) = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_710392eb40(uVar31);
        }
        if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar25) goto LAB_7101deaeb8;
        lVar35 = *DAT_7105329f98;
        uVar8 = **(ushort **)(*param_2 + uVar25 * 8);
        lVar36 = *(long *)(lVar35 + 0x30);
        if (uVar8 >> 4 < 0x177) {
          psVar53 = (short *)(lVar36 + (ulong)uVar8 * 0x50 + 72000);
        }
        else {
          psVar53 = &DAT_710532a878;
          if ((ushort)(uVar8 + 0xe890) < 100) {
            lVar36 = lVar36 + (ulong)(ushort)(uVar8 + 0xe890) * 0x50;
            psVar53 = &DAT_710532a878;
            if (*(short *)(lVar36 + 0x88cc8) != -1) {
              psVar53 = (short *)(lVar36 + 0x88cc0);
            }
          }
        }
        lVar36 = *(long *)(DAT_710532f730 + 8);
        FUN_7103778300(0x3f800000,local_240,0x7104292287);
        if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar25) goto LAB_7101deaeb8;
        uVar8 = *(ushort *)(*(long *)(*param_2 + uVar25 * 8) + 8);
        lVar52 = (long)(short)uVar8;
        pcVar33 = (char *)(ulong)uVar8;
        if (lVar52 == -1 || 1999 < lVar52) {
LAB_7101de9394:
          uVar50 = 0;
        }
        else {
          lVar42 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar24 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
          uVar9 = *(ushort *)(lVar42 + (long)(short)uVar8 * 2 + 0x60);
          uVar31 = (ulong)uVar9;
          if ((uint)uVar24 <= (uint)uVar9) goto LAB_7101de9394;
          puVar5 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar31 * 0x140);
          if (uVar24 < uVar31 || uVar24 - uVar31 == 0) {
            puVar5 = &DAT_7105182b08;
          }
          if (*(char *)(puVar5 + 0x2f) == '\0') {
            if (2 < *(byte *)(puVar5 + 0x36) - 1) goto LAB_7101de9394;
            uVar50 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar5 + 0x36) - 1 & 3) << 3));
          }
          else {
            uVar50 = 4;
          }
        }
        lVar42 = *(long *)(lVar36 + 0x1d8);
        if (uVar8 == 0xffff) {
          uVar31 = 0xffffffff;
        }
        else {
          uVar31 = (ulong)*(ushort *)(lVar42 + lVar52 * 2 + 0x60);
        }
        uVar24 = (*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20) >> 6) * -0x3333333333333333;
        puVar5 = (undefined2 *)(*(long *)(lVar42 + 0x20) + uVar31 * 0x140);
        if (uVar24 < uVar31 || uVar24 - uVar31 == 0) {
          puVar5 = &DAT_7105182b08;
        }
        uVar16 = local_5c0._2_6_;
        switch(*(undefined1 *)(puVar5 + 0x34)) {
        case 0:
          local_5d0._4_4_ = 10;
          uVar41 = 99;
          local_5c8 = (long *)0x6f6e5f7373616c63;
          uVar23 = 0x811c9dc5;
          local_5c0 = CONCAT53(local_5c0._3_5_,0x656e);
          pbVar38 = pbVar2;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 1:
          local_5d0._4_4_ = 10;
          uVar41 = 99;
          local_5c8 = (long *)0x6f685f7373616c63;
          uVar23 = 0x811c9dc5;
          local_5c0 = CONCAT53(local_5c0._3_5_,0x6570);
          pbVar38 = pbVar2;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 2:
          uVar41 = 99;
          local_5d0._4_4_ = 9;
          local_5c8 = (long *)0x63615f7373616c63;
          uVar23 = 0x811c9dc5;
          local_5c0 = CONCAT62(uVar16,0x65);
          pbVar38 = pbVar2;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 3:
          local_5d0._4_4_ = 0xc;
          uVar41 = 99;
          local_5c8 = (long *)0x656c5f7373616c63;
          uVar23 = 0x811c9dc5;
          local_5c0 = CONCAT35(local_5c0._5_3_,0x646e6567);
          pbVar38 = pbVar2;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        default:
          local_5d0._4_4_ = 10;
          uVar41 = 99;
          local_5c8 = (long *)0x6f6e5f7373616c63;
          uVar23 = 0x811c9dc5;
          local_5c0 = CONCAT53(local_5c0._3_5_,0x656e);
          pbVar38 = pbVar2;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
        }
        uVar32 = 0;
        local_5d0 = (undefined **)CONCAT44(local_5d0._4_4_,uVar23);
        FUN_710339dde0((uint *)&local_c0,uVar50,'\0');
        FUN_7103778300(0x3f800000,local_240,(long)&local_b8);
        FUN_7103778300(0x3f800000,local_240,(long)&local_5c8);
        FUN_7103776640(&local_128,(long)&local_248,(byte ****)"set_parts_atr_icon",uVar32,ppppbVar34
                       ,param_5,param_6,param_7,param_8);
        uVar31 = local_120;
        FUN_7103778300(0x3f800000,local_120,(long)&local_b8);
        local_128 = &PTR_FUN_710523d988;
        local_120 = 0;
        if (uVar31 != 0) {
          uVar24 = *(ulong *)(uVar31 + 0x18);
          *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar31 + 0x18) = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_710392eb40(uVar31);
        }
        FUN_7103776910(&local_128,(long)&local_248,(long ****)"set_txt_level",uVar32,ppppbVar34,
                       param_5,param_6,param_7,param_8);
        uVar24 = (ulong)(ushort)psVar53[8];
        uVar32 = 1;
        FUN_710377a280((long)&local_128,(byte *)"mnu_spirits_select_lv",1);
        uVar31 = local_120;
        local_128 = &PTR_FUN_710523d9a8;
        local_120 = 0;
        if (uVar31 != 0) {
          FUN_710392eb40(uVar31);
        }
        FUN_7103776910(&local_128,(long)&local_248,(long ****)"set_txt_level_max",uVar32,uVar24,
                       param_5,param_6,param_7,param_8);
        uVar24 = (ulong)(ushort)psVar53[8];
        uVar32 = 1;
        FUN_710377a280((long)&local_128,(byte *)"mnu_spirits_select_lv",1);
        uVar31 = local_120;
        local_128 = &PTR_FUN_710523d9a8;
        local_120 = 0;
        if (uVar31 != 0) {
          FUN_710392eb40(uVar31);
        }
        cVar7 = *(char *)(puVar5 + 0x2f);
        FUN_7103776640(&local_d0,(long)&local_248,(byte ****)"set_parts_icon_super",uVar32,uVar24,
                       param_5,param_6,param_7,param_8);
        uVar31 = local_c8;
        if (((cVar7 == '\0') && (sVar10 = psVar53[4], sVar10 != -1)) && (sVar10 < 2000)) {
          lVar42 = *(long *)(lVar36 + 0x1d8);
          uVar9 = *(ushort *)(lVar42 + (long)(int)sVar10 * 2 + 0x60);
          uVar23 = (int)((ulong)(*(long *)(lVar42 + 0x28) - *(long *)(lVar42 + 0x20)) >> 6) *
                   -0x33333333;
          if (((uVar23 <= uVar9) ||
              (uVar9 = *(ushort *)(lVar42 + (ulong)uVar9 * 2 + 0x1000), uVar23 <= uVar9)) ||
             (*(short *)(*(long *)(lVar42 + 0x20) + (ulong)uVar9 * 0x140) == -1))
          goto LAB_7101de96c0;
          if (0x62 < (ushort)psVar53[8]) {
            FUN_7103778300(0x3f800000,local_c8,0x7104455010);
            goto LAB_7101de9780;
          }
          FUN_7103778300(0x3f800000,local_c8,0x710437a53a);
LAB_7101de97c0:
          pcVar28 = "lv_normal";
        }
        else {
LAB_7101de96c0:
          if (puVar5[0x48] == 0) {
            pcVar28 = "off";
          }
          else {
            pcVar28 = "super";
          }
          FUN_7103778300(0x3f800000,local_c8,(long)pcVar28);
          if (cVar7 == '\0') {
            if ((ushort)psVar53[8] < 99) goto LAB_7101de97c0;
            pcVar28 = "lv_max";
          }
          else {
LAB_7101de9780:
            pcVar28 = "lv_hide";
          }
        }
        FUN_7103778300(0x3f800000,local_240,(long)pcVar28);
        lVar42 = *DAT_7105329f98;
        ppppbVar34 = (byte ****)0x1;
        FUN_710259c150(*(long *)(lVar42 + 0x20),1,uVar8,(byte ****)0x1,param_5,param_6,param_7,
                       param_8);
        lVar42 = *(long *)(lVar42 + 0x20);
        if (uVar8 != 0xffff) {
          puVar37 = *(ushort **)(lVar42 + 0x28);
          lVar44 = *(long *)(lVar42 + 0x30) - (long)puVar37;
          uVar24 = lVar44 >> 3;
          if (0 < (int)uVar24) {
            uVar43 = 0;
            do {
              if (uVar24 <= uVar43) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
              if (*puVar37 == uVar8) {
                if (-1 < (int)uVar43) {
                  uVar24 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar8);
                  pcVar33 = &SUB_00000018;
                  plVar51 = FUN_710323faf0((long *)(lVar42 + 8),uVar24,(undefined **)&SUB_00000018,
                                           ppppbVar34,param_5,param_6,param_7,param_8);
                  goto LAB_7101de9880;
                }
                break;
              }
              uVar43 = uVar43 + 1;
              puVar37 = puVar37 + 4;
            } while ((long)uVar43 < lVar44 * 0x20000000 >> 0x20);
          }
        }
        plVar51 = (long *)(lVar42 + 0x70);
LAB_7101de9880:
        FUN_7103776910(&local_e0,(long)&local_248,(long ****)"set_rep_spirit",pcVar33,ppppbVar34,
                       param_5,param_6,param_7,param_8);
        uVar24 = local_d8;
        FUN_7103778b80(local_d8,(long)plVar51,(long *********)pcVar33,ppppbVar34,param_5,param_6,
                       param_7,param_8);
        uVar21 = local_118._2_2_;
        switch(*(undefined1 *)(puVar5 + 0x34)) {
        case 0:
          local_128._4_4_ = 10;
          uVar41 = 99;
          local_120 = 0x6f6e5f7373616c63;
          uVar23 = 0x811c9dc5;
          local_118 = CONCAT13(local_118._3_1_,0x656e);
          pbVar38 = pbVar3;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 1:
          local_128._4_4_ = 10;
          uVar41 = 99;
          local_120 = 0x6f685f7373616c63;
          uVar23 = 0x811c9dc5;
          local_118 = CONCAT13(local_118._3_1_,0x6570);
          pbVar38 = pbVar3;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 2:
          uVar41 = 99;
          local_128._4_4_ = 9;
          local_120 = 0x63615f7373616c63;
          uVar23 = 0x811c9dc5;
          local_118 = CONCAT22(uVar21,0x65);
          pbVar38 = pbVar3;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        case 3:
          local_128._4_4_ = 0xc;
          uVar41 = 99;
          local_120 = 0x656c5f7373616c63;
          local_118 = 0x646e6567;
          uVar23 = 0x811c9dc5;
          local_114 = 0;
          pbVar38 = pbVar3;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
          break;
        default:
          local_128._4_4_ = 10;
          uVar41 = 99;
          local_120 = 0x6f6e5f7373616c63;
          uVar23 = 0x811c9dc5;
          local_118 = CONCAT13(local_118._3_1_,0x656e);
          pbVar38 = pbVar3;
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
        }
        local_128 = (undefined **)CONCAT44(local_128._4_4_,uVar23);
        FUN_7103778300(0x3f800000,local_240,(long)&local_120);
        uVar23 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
        DAT_71052391c0 = DAT_71052391c4;
        uVar23 = uVar23 ^ uVar23 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
        DAT_71052391c4 = DAT_71052391c8;
        DAT_71052391c8 = DAT_71052391cc;
        DAT_71052391cc = uVar23;
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_legend",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        plVar51 = local_168;
        FUN_7103778300(0x3f800000,(long)local_168,(long)&local_120);
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (plVar51 != (long *)0x0) {
          uVar43 = plVar51[3];
          plVar51[2] = (long)&PTR_FUN_710523d9a8;
          plVar51[3] = 0;
          if (uVar43 != 0) {
            FUN_710392eb40(uVar43);
          }
          FUN_710392eb40((ulong)plVar51);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_legend",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        fVar54 = (float)(uVar23 % 100);
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (plVar51 = (long *)FUN_71037964b0(*(long *)((long)local_168 + 8),0x710436ac3e),
           plVar51 != (long *)0x0)) {
          (**(code **)(*plVar51 + 0x1a0))(fVar54);
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_ace",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        FUN_7103778300(0x3f800000,(long)local_168,(long)&local_120);
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_ace",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (plVar51 = (long *)FUN_71037964b0(*(long *)((long)local_168 + 8),0x71044530ac),
           plVar51 != (long *)0x0)) {
          (**(code **)(*plVar51 + 0x1a0))(fVar54);
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_hope",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        FUN_7103778300(0x3f800000,(long)local_168,(long)&local_120);
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_hope",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (plVar51 = (long *)FUN_71037964b0(*(long *)((long)local_168 + 8),0x7104442147),
           plVar51 != (long *)0x0)) {
          (**(code **)(*plVar51 + 0x1a0))(fVar54);
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_none",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        FUN_7103778300(0x3f800000,(long)local_168,(long)&local_120);
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_none",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (plVar51 = (long *)FUN_71037964b0(*(long *)((long)local_168 + 8),0x7104464374),
           plVar51 != (long *)0x0)) {
          (**(code **)(*plVar51 + 0x1a0))(fVar54);
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_legend",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)((long)local_168 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) =
               *(byte *)(lVar42 + 0x58) & 0xfe | *(char *)(puVar5 + 0x34) == '\x03';
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_ace",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)((long)local_168 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) =
               *(byte *)(lVar42 + 0x58) & 0xfe | *(char *)(puVar5 + 0x34) == '\x02';
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_hope",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)((long)local_168 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) =
               *(byte *)(lVar42 + 0x58) & 0xfe | *(char *)(puVar5 + 0x34) == '\x01';
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        FUN_7103776640(&local_170,(long)&local_248,(byte ****)"set_parts_class_none",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = (ulong)local_168;
        if ((*(long *)((long)local_168 + 8) != 0) &&
           (lVar42 = *(long *)(*(long *)((long)local_168 + 8) + 0x18), lVar42 != 0)) {
          *(byte *)(lVar42 + 0x58) =
               *(byte *)(lVar42 + 0x58) & 0xfe | *(char *)(puVar5 + 0x34) == '\0';
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (long *)0x0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        uVar23 = 0x61;
        local_170._0_4_ = 0x811c9dc5;
        local_168 = (long *)CONCAT26(local_168._6_2_,0x5f6d696e61);
        pbVar38 = (byte *)((long)&local_168 + 1);
        do {
          local_170._0_4_ = (uint)local_170 * 0x89 ^ uVar23;
          uVar23 = (uint)*pbVar38;
          pbVar38 = pbVar38 + 1;
        } while (uVar23 != 0);
        lVar42 = 8;
        local_170._4_4_ = 5;
        do {
          iVar49 = local_170._4_4_;
          if (*(char *)((long)&local_128 + lVar42) == '\0') break;
          cVar7 = *(char *)((long)&local_128 + lVar42 + 1);
          iVar49 = local_170._4_4_ + 1;
          *(char *)((long)&local_168 + (long)local_170._4_4_) = *(char *)((long)&local_128 + lVar42)
          ;
          if (cVar7 == '\0') break;
          lVar42 = lVar42 + 2;
          local_170._4_4_ = local_170._4_4_ + 2;
          *(char *)((long)&local_168 + (long)iVar49) = cVar7;
          iVar49 = local_170._4_4_;
        } while ((int)lVar42 - 4U < 0x3e);
        local_170._4_4_ = iVar49;
        *(undefined1 *)((long)&local_168 + (long)local_170._4_4_) = 0;
        uVar41 = (uint)(byte)local_168;
        uVar23 = 0x811c9dc5;
        if ((byte)local_168 != 0) {
          uVar23 = 0x811c9dc5;
          pbVar38 = (byte *)((long)&local_168 + 1);
          do {
            uVar23 = uVar23 * 0x89 ^ uVar41;
            uVar41 = (uint)*pbVar38;
            pbVar38 = pbVar38 + 1;
          } while (uVar41 != 0);
        }
        local_170 = (undefined **)CONCAT44(local_170._4_4_,uVar23);
        FUN_7103776640(&local_1a0,(long)&local_248,(byte ****)"set_parts_spirit",pcVar33,ppppbVar34,
                       param_5,param_6,param_7,param_8);
        uVar43 = local_198;
        FUN_7103778300(0x3f800000,local_198,(long)&local_168);
        local_1a0 = &PTR_FUN_710523d988;
        local_198 = 0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        if ((*(long *)(local_240 + 8) != 0) &&
           (plVar51 = (long *)FUN_71037964b0(*(long *)(local_240 + 8),(long)&local_168),
           plVar51 != (long *)0x0)) {
          (**(code **)(*plVar51 + 0x1a0))(fVar54);
        }
        uVar43 = (ulong)psVar53[4];
        lVar36 = *(long *)(lVar36 + 0x1d8);
        if (uVar43 != 0xffffffffffffffff) {
          uVar43 = (ulong)*(ushort *)(lVar36 + uVar43 * 2 + 0x60);
        }
        if (((uint)uVar43 <
             (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar36 + 0x20) + (uVar43 & 0xffffffff) * 0x140 + 0x5e) == '\x01')) {
          uVar43 = FUN_71032a0fd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar5[0x35]);
          FUN_7103776910(&local_180,(long)&local_248,(long ****)"set_txt_num_slot",pcVar33,
                         ppppbVar34,param_5,param_6,param_7,param_8);
          uVar23 = (uint)uVar43 & 0xff;
          if (uVar23 - 1 < 3) {
            snprintf((char *)&local_1a0,0x20,"cost_%02d",uVar23);
            FUN_7103778300(0x3f800000,local_240,(long)&local_1a0);
            pcVar33 = (char *)0x1;
            ppppbVar34 = (byte ****)(ulong)uVar23;
            FUN_710377a280((long)&local_180,(byte *)"mnu_spirits_select_sort_n",1);
            lVar36 = *local_178;
            plVar51 = local_178;
            if (lVar36 == 0) goto LAB_7101dea294;
            bVar40 = *(byte *)(lVar36 + 0x58) | 1;
          }
          else {
            pcVar28 = "cost_00";
LAB_7101dea26c:
            FUN_7103778300(0x3f800000,local_240,(long)pcVar28);
            lVar36 = *local_178;
            plVar51 = local_178;
            if (lVar36 == 0) goto LAB_7101dea294;
            bVar40 = *(byte *)(lVar36 + 0x58) & 0xfe;
          }
          *(byte *)(lVar36 + 0x58) = bVar40;
          plVar51 = local_178;
        }
        else {
          FUN_7103776910(&local_180,(long)&local_248,(long ****)"set_txt_num_slot",pcVar33,
                         ppppbVar34,param_5,param_6,param_7,param_8);
          bVar40 = *(byte *)((long)puVar5 + 0x69);
          ppppbVar34 = (byte ****)(ulong)bVar40;
          if (2 < bVar40 - 1) {
            pcVar28 = "slot_00";
            goto LAB_7101dea26c;
          }
          snprintf((char *)&local_1a0,0x20,"slot_%02d",(uint)bVar40);
          FUN_7103778300(0x3f800000,local_240,(long)&local_1a0);
          ppppbVar34 = (byte ****)(ulong)*(byte *)((long)puVar5 + 0x69);
          pcVar33 = (char *)0x1;
          FUN_710377a280((long)&local_180,(byte *)"mnu_spirits_select_sort_n",1);
          lVar36 = *local_178;
          plVar51 = local_178;
          if (lVar36 != 0) {
            *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
          }
        }
LAB_7101dea294:
        puVar30 = &DAT_71043cd335;
        local_180 = &PTR_FUN_710523d9a8;
        local_178 = (long *)0x0;
        if (plVar51 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar51);
        }
        if (*(int *)(param_1 + 0x5e4) == 1) {
          FUN_7103776640(&local_1a0,(long)&local_248,(byte ****)"set_parts_have",pcVar33,ppppbVar34,
                         param_5,param_6,param_7,param_8);
          uVar43 = local_198;
          FUN_7103778300(0x3f800000,local_198,0x710429257e);
          local_1a0 = &PTR_FUN_710523d988;
          local_198 = 0;
          if (uVar43 != 0) {
            uVar26 = *(ulong *)(uVar43 + 0x18);
            *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar43 + 0x18) = 0;
            if (uVar26 != 0) {
              FUN_710392eb40(uVar26);
            }
            FUN_710392eb40(uVar43);
          }
          FUN_7103776640(&local_180,(long)&local_248,(byte ****)"set_parts_have",pcVar33,ppppbVar34,
                         param_5,param_6,param_7,param_8);
          FUN_7103776910(&local_1a0,(long)&local_180,(long ****)"set_txt_numl_have_dtl",pcVar33,
                         ppppbVar34,param_5,param_6,param_7,param_8);
          if ((lVar52 == -1 || 1999 < lVar52) ||
             (lVar36 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
             (uint)((int)((ulong)(*(long *)(lVar36 + 0x28) - *(long *)(lVar36 + 0x20)) >> 6) *
                   -0x33333333) <= (uint)*(ushort *)(lVar36 + lVar52 * 2 + 0x60))) {
            ppppbVar34 = (byte ****)0x0;
          }
          else {
            ppppbVar34 = (byte ****)
                         (ulong)*(ushort *)(*(long *)(lVar35 + 0x30) + lVar52 * 0x24 + 0x20);
          }
          pcVar33 = (char *)0x1;
          FUN_710377a280((long)&local_1a0,(byte *)"mnu_spirits_recall_spirit_n",1);
          uVar43 = local_198;
          local_1a0 = &PTR_FUN_710523d9a8;
          local_198 = 0;
          if (uVar43 != 0) {
            FUN_710392eb40(uVar43);
          }
          plVar51 = local_178;
          local_180 = &PTR_FUN_710523d988;
          local_178 = (long *)0x0;
        }
        else {
          FUN_7103776640(&local_1a0,(long)&local_248,(byte ****)"set_parts_have",pcVar33,ppppbVar34,
                         param_5,param_6,param_7,param_8);
          plVar51 = (long *)local_198;
          FUN_7103778300(0x3f800000,local_198,0x71043cd335);
          local_1a0 = &PTR_FUN_710523d988;
          local_198 = 0;
        }
        if (plVar51 != (long *)0x0) {
          uVar43 = *(ulong *)((long)plVar51 + 0x18);
          *(undefined ***)((long)plVar51 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)((long)plVar51 + 0x18) = 0;
          if (uVar43 != 0) {
            FUN_710392eb40(uVar43);
          }
          FUN_710392eb40((ulong)plVar51);
        }
        FUN_7103776640(&local_1a0,(long)&local_248,(byte ****)"set_parts_icon_new",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar43 = local_198;
        FUN_7103778300(0x3f800000,local_198,0x71043cd335);
        lVar36 = *DAT_7105329f98;
        FUN_7103776640(&local_180,(long)&local_248,(byte ****)"set_parts_icon_using",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar26 = FUN_710251a7e0(lVar36 + 0x38,*psVar53);
        plVar51 = local_178;
        puVar29 = puVar30;
        if ((uVar26 & 1) != 0) {
          puVar29 = &DAT_710429257e;
        }
        FUN_7103778300(0x3f800000,(long)local_178,(long)puVar29);
        FUN_7103776640(&local_1b0,(long)&local_248,(byte ****)"set_parts_icon_pre_super",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar20 = local_1a8;
        FUN_7103778300(0x3f800000,local_1a8,0x71043cd335);
        FUN_7103776640(&local_1c0,(long)&local_248,(byte ****)"set_parts_icon_indvi",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar19 = local_1b8;
        FUN_7103778300(0x3f800000,local_1b8,0x71043cd335);
        FUN_7103776640(&local_1d0,(long)&local_248,(byte ****)"set_parts_icon_skill",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar18 = local_1c8;
        FUN_7103778300(0x3f800000,local_1c8,0x71043cd335);
        FUN_7103776640(&local_1e0,(long)&local_248,(byte ****)"set_parts_icon_counter",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar17 = local_1d8;
        FUN_7103778300(0x3f800000,local_1d8,0x71043cd335);
        FUN_7103776640(&local_1f0,(long)&local_248,(byte ****)"set_parts_icon_favorite",pcVar33,
                       ppppbVar34,param_5,param_6,param_7,param_8);
        uVar26 = local_1e8;
        if ((*(byte *)(psVar53 + 0x1f) & 1) != 0) {
          puVar30 = &DAT_710429257e;
        }
        FUN_7103778300(0x3f800000,local_1e8,(long)puVar30);
        local_1f0 = &PTR_FUN_710523d988;
        local_1e8 = 0;
        if (uVar26 != 0) {
          uVar27 = *(ulong *)(uVar26 + 0x18);
          *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar26 + 0x18) = 0;
          if (uVar27 != 0) {
            FUN_710392eb40(uVar27);
          }
          FUN_710392eb40(uVar26);
        }
        local_1e0 = &PTR_FUN_710523d988;
        local_1d8 = 0;
        if (uVar17 != 0) {
          uVar26 = *(ulong *)(uVar17 + 0x18);
          *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar17 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar17);
        }
        local_1d0 = &PTR_FUN_710523d988;
        local_1c8 = 0;
        if (uVar18 != 0) {
          uVar26 = *(ulong *)(uVar18 + 0x18);
          *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar18 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar18);
        }
        local_1c0 = &PTR_FUN_710523d988;
        local_1b8 = 0;
        if (uVar19 != 0) {
          uVar26 = *(ulong *)(uVar19 + 0x18);
          *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar19 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar19);
        }
        local_1b0 = &PTR_FUN_710523d988;
        local_1a8 = 0;
        if (uVar20 != 0) {
          uVar26 = *(ulong *)(uVar20 + 0x18);
          *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar20 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar20);
        }
        local_180 = &PTR_FUN_710523d988;
        local_178 = (long *)0x0;
        if (plVar51 != (long *)0x0) {
          uVar26 = *(ulong *)((long)plVar51 + 0x18);
          *(undefined ***)((long)plVar51 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)((long)plVar51 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40((ulong)plVar51);
        }
        local_1a0 = &PTR_FUN_710523d988;
        local_198 = 0;
        if (uVar43 != 0) {
          uVar26 = *(ulong *)(uVar43 + 0x18);
          *(undefined ***)(uVar43 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar43 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar43);
        }
        local_e0 = &PTR_FUN_710523d9a8;
        local_d8 = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        local_d0 = &PTR_FUN_710523d988;
        local_c8 = 0;
        if (uVar31 != 0) {
          uVar24 = *(ulong *)(uVar31 + 0x18);
          *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar31 + 0x18) = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_710392eb40(uVar31);
        }
        uVar31 = local_240;
        local_248 = &PTR_FUN_710523d988;
        local_240 = 0;
        if (uVar31 != 0) {
          uVar24 = *(ulong *)(uVar31 + 0x18);
          *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar31 + 0x18) = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_710392eb40(uVar31);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != ((ulong)(lVar47 - lVar6) >> 3 & 0xffffffff));
    }
    *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x210);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71043adce0);
    pppplVar4 = (long ****)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x2dc) = 0xe;
    if ((long *)(param_1 + 0x210) != param_2) {
      FUN_7101958040((long *)(param_1 + 0x210),(void *)*param_2,(long ****)param_2[1],ppppbVar34,
                     param_5,param_6,param_7,param_8);
    }
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x218);
    FUN_7101dfe6f0((long)pppplVar4,0);
    *(undefined4 *)(param_1 + 0x2d4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x2d0) = 0;
    memset((void *)(param_1 + 0x2e0),0,0x2fc);
    local_5d0 = (undefined **)0x0;
    local_5c8 = (long *)0x4248000041800000;
    local_5c0 = 0x101013f800000;
    local_5b8[2] = 1;
    local_5b8[0] = 0;
    local_5b8[1] = 0;
    local_580 = (long *)0x0;
    local_550 = (long *)0x0;
    local_520 = (long *)0x0;
    local_4f0 = (long *)0x0;
    local_4c0 = (long *)0x0;
    acStack_5b0[1] = 0;
    local_5b1 = 0;
    acStack_5b0[0] = '\0';
    local_5b5 = 0;
    FUN_710337e790((long)&local_5d0);
    local_5c0 = local_5c0 & 0xffffffff;
    local_5b8[1] = 1;
    local_5b8[2] = 1;
    local_5b5 = CONCAT31(0x101,(undefined1)local_5b5);
    local_5b1 = 0;
    pcVar33 = "scroll_grp";
    ppppbVar34 = (byte ****)&local_5d0;
    local_5d0 = (undefined **)
                CONCAT44((int)((ulong)(param_2[1] - *param_2) >> 3),(undefined4)local_5d0);
    param_5 = pppplVar4;
    FUN_7103781a20((long *)(param_1 + 0x28),puVar1,(byte ****)"scroll_grp",ppppbVar34,pppplVar4,
                   param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),1);
    FUN_7101e02dc0((long)pppplVar4,0,pcVar33,ppppbVar34,param_5,param_6,param_7,param_8);
    if (alStack_4e0 == local_4c0) {
      pcVar39 = *(code **)(*local_4c0 + 0x20);
LAB_7101dea8cc:
      (*pcVar39)();
    }
    else if (local_4c0 != (long *)0x0) {
      pcVar39 = *(code **)(*local_4c0 + 0x28);
      goto LAB_7101dea8cc;
    }
    if (alStack_510 == local_4f0) {
      pcVar39 = *(code **)(*local_4f0 + 0x20);
LAB_7101dea8fc:
      (*pcVar39)();
    }
    else if (local_4f0 != (long *)0x0) {
      pcVar39 = *(code **)(*local_4f0 + 0x28);
      goto LAB_7101dea8fc;
    }
    if (local_540 == local_520) {
      pcVar39 = *(code **)(*local_520 + 0x20);
LAB_7101dea92c:
      (*pcVar39)();
    }
    else if (local_520 != (long *)0x0) {
      pcVar39 = *(code **)(*local_520 + 0x28);
      goto LAB_7101dea92c;
    }
    if (alStack_570 == local_550) {
      pcVar39 = *(code **)(*local_550 + 0x20);
LAB_7101dea95c:
      (*pcVar39)();
    }
    else if (local_550 != (long *)0x0) {
      pcVar39 = *(code **)(*local_550 + 0x28);
      goto LAB_7101dea95c;
    }
    if (alStack_5a0 == local_580) {
      pcVar39 = *(code **)(*local_580 + 0x20);
    }
    else {
      if (local_580 == (long *)0x0) goto LAB_7101dea990;
      pcVar39 = *(code **)(*local_580 + 0x28);
    }
    (*pcVar39)();
  }
LAB_7101dea990:
  lVar36 = param_2[1] - *param_2;
  if (lVar36 == 0) {
    bVar22 = false;
    bVar14 = false;
    uVar23 = 0;
    bVar15 = false;
    bVar12 = false;
    bVar13 = false;
  }
  else {
    lVar47 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    lVar6 = *(long *)(lVar47 + 0x20);
    uVar31 = lVar36 >> 3;
    pcVar33 = (char *)0xcccccccd;
    uVar24 = (*(long *)(lVar47 + 0x28) - lVar6 >> 6) * -0x3333333333333333;
    uVar25 = 0;
    bVar13 = false;
    bVar12 = false;
    bVar15 = false;
    uVar23 = 0;
    bVar14 = false;
    bVar22 = false;
    do {
      puVar37 = *(ushort **)(*param_2 + uVar25 * 8);
      uVar8 = puVar37[4];
      ppppbVar34 = (byte ****)(long)(short)uVar8;
      if (ppppbVar34 == (byte ****)0xffffffffffffffff) {
        uVar43 = 0xffffffff;
      }
      else {
        uVar43 = (ulong)*(ushort *)(lVar47 + (long)ppppbVar34 * 2 + 0x60);
      }
      puVar5 = (undefined2 *)(lVar6 + uVar43 * 0x140);
      if (uVar24 < uVar43 || uVar24 - uVar43 == 0) {
        puVar5 = &DAT_7105182b08;
      }
      if (uVar31 <= uVar25) goto LAB_7101deaeb8;
      bVar13 = (bool)(bVar13 | *(char *)(puVar5 + 0x34) == '\x03');
      bVar22 = (bool)(bVar22 | puVar5[0x48] != 0);
      uVar9 = *puVar37;
      param_6 = (ulong)uVar9;
      param_5 = (long ****)0x0;
      bVar12 = (bool)(bVar12 | 0x45 < puVar37[8]);
      param_7 = (long ****)(*(long *)(*DAT_7105329f98 + 0x30) + 0x86c46);
      do {
        param_8 = (ulong)*(ushort *)((long)param_7 + -4);
        if ((((*(ushort *)((long)param_7 + -4) == uVar9) ||
             (param_8 = (ulong)*(ushort *)((long)param_7 + -2),
             *(ushort *)((long)param_7 + -2) == uVar9)) ||
            (param_8 = (ulong)*(ushort *)param_7, *(ushort *)param_7 == uVar9)) ||
           (param_8 = (ulong)*(ushort *)((long)param_7 + 2), *(ushort *)((long)param_7 + 2) == uVar9
           )) {
          if (uVar8 == 0xffff) {
            param_5 = (long ****)&DAT_ffffffff;
          }
          else {
            param_5 = (long ****)(ulong)*(ushort *)(lVar47 + (long)ppppbVar34 * 2 + 0x60);
          }
          param_6 = *(ulong *)(lVar47 + 0x20);
          uVar41 = (int)(*(long *)(lVar47 + 0x28) - param_6 >> 6) * -0x33333333;
          param_7 = (long ****)(ulong)uVar41;
          if (((uint)param_5 < uVar41) &&
             (bVar40 = *(byte *)(param_6 + (long)param_5 * 0x140 + 0x5e),
             param_5 = (long ****)(ulong)bVar40, bVar40 == 1)) {
            bVar14 = true;
            bVar15 = true;
          }
          else {
            if ((uVar8 == 0xffff) ||
               (uVar8 = *(ushort *)(lVar47 + (long)ppppbVar34 * 2 + 0x60),
               (uint)uVar24 <= (uint)uVar8)) {
              ppppbVar34 = (byte ****)0x0;
            }
            else {
              ppppbVar34 = (byte ****)
                           (ulong)(*(char *)(lVar6 + (ulong)uVar8 * 0x140 + 0x5e) == '\0');
            }
            uVar23 = uVar23 | (uint)ppppbVar34;
            bVar14 = true;
          }
          break;
        }
        param_5 = (long ****)((long)param_5 + 1);
        param_7 = (long ****)((long)param_7 + 0x54);
      } while (param_5 < (long ****)0x63);
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar31);
  }
  if ((param_3 & 1) != 0) {
    FUN_7103776910(&local_5d0,(long)puVar1,(long ****)"set_txt_help",pcVar33,ppppbVar34,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_5d0,"mnu_spirits_return_confirm_txt_00",pcVar33,ppppbVar34,param_5,
                   param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    if (!bVar14 && (!bVar22 && (!bVar12 && !bVar13))) {
      return 0;
    }
    return 1;
  }
  if (!bVar14 && (!bVar22 && (!bVar12 && !bVar13))) {
    return 0;
  }
  if (!(bool)(bVar22 | bVar12 | bVar13 | bVar14 ^ 1U)) {
    if (uVar23 == 0) {
      if (!bVar15) {
        return 0;
      }
      FUN_7103776910(&local_5d0,(long)puVar1,(long ****)"set_txt_help",pcVar33,ppppbVar34,param_5,
                     param_6,param_7,param_8);
      pcVar28 = "mnu_spirits_return_confirm_txt_03";
    }
    else {
      FUN_7103776910(&local_5d0,(long)puVar1,(long ****)"set_txt_help",pcVar33,ppppbVar34,param_5,
                     param_6,param_7,param_8);
      pcVar28 = "mnu_spirits_return_confirm_txt_02";
    }
    FUN_710377a120((long)&local_5d0,pcVar28,pcVar33,ppppbVar34,param_5,param_6,param_7,param_8);
    uVar25 = (ulong)local_5c8;
    local_5d0 = &PTR_FUN_710523d9a8;
    local_5c8 = (long *)0x0;
    goto joined_r0x007101deae3c;
  }
  if (bVar13) {
    acStack_5b0[0] = 'd';
    acStack_5b0[1] = 0;
    local_5c0._0_1_ = 'r';
    local_5c0._1_1_ = 'n';
    local_5c0._2_1_ = '_';
    local_5c0._3_1_ = 'c';
    local_5c0._4_1_ = 'o';
    local_5c0._5_1_ = 'n';
    local_5c0._6_1_ = 'f';
    local_5c0._7_1_ = 'i';
    local_5b8[0] = 0x72;
    local_5b8[1] = 0x6d;
    local_5b8[2] = 0x5f;
    local_5b5 = 0x6567656c;
    local_5b1 = 0x6e;
    uVar25 = 1;
    local_5d0 = (undefined **)0x726970735f756e6d;
    local_5c8._0_1_ = 'i';
    local_5c8._1_1_ = 't';
    local_5c8._2_1_ = 's';
    local_5c8._3_1_ = '_';
    local_5c8._4_1_ = 'r';
    local_5c8._5_1_ = 'e';
    local_5c8._6_1_ = 't';
    local_5c8._7_1_ = 'u';
    if (!bVar12) goto LAB_7101deaa08;
LAB_7101deacc8:
    uVar31 = uVar25;
    if (bVar13) {
      uVar31 = (ulong)((int)uVar25 + 1);
      builtin_strncpy((char *)(&local_5d0 + uVar25 * 0x10),"mnu_spir",8);
      builtin_strncpy((char *)(&local_5c8 + uVar25 * 0x10),"its_retu",8);
      builtin_strncpy((char *)(&uStack_5aa + uVar25 * 0x10),"tuation",8);
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80,"1_punctu",8);
      (&local_5c0)[uVar25 * 0x10] = 0x69666e6f635f6e72;
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80 + -8,"rm_txt_0",8);
    }
    lVar36 = uVar31 * 0x80;
    uVar25 = (ulong)((int)uVar31 + 1);
    acStack_5b0[lVar36 + 2] = '\0';
    (&local_5c0)[uVar31 * 0x10] = 0x69666e6f635f6e72;
    pcVar28 = acStack_5b0 + lVar36 + -8;
    pcVar28[0] = 'r';
    pcVar28[1] = 'm';
    pcVar28[2] = '_';
    pcVar28[3] = 'l';
    pcVar28[4] = 'e';
    pcVar28[5] = 'v';
    pcVar28[6] = 'e';
    pcVar28[7] = 'l';
    builtin_strncpy((char *)(&local_5d0 + uVar31 * 0x10),"mnu_spir",8);
    builtin_strncpy((char *)(&local_5c8 + uVar31 * 0x10),"its_retu",8);
    (acStack_5b0 + lVar36)[0] = '9';
    (acStack_5b0 + lVar36)[1] = '9';
    if (!bVar22) goto LAB_7101dead34;
LAB_7101deaa0c:
    uVar31 = uVar25;
    if (bVar12 || bVar13) {
      uVar31 = (ulong)((int)uVar25 + 1);
      builtin_strncpy((char *)(&local_5d0 + uVar25 * 0x10),"mnu_spir",8);
      builtin_strncpy((char *)(&local_5c8 + uVar25 * 0x10),"its_retu",8);
      builtin_strncpy((char *)(&uStack_5aa + uVar25 * 0x10),"tuation",8);
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80,"1_punctu",8);
      (&local_5c0)[uVar25 * 0x10] = 0x69666e6f635f6e72;
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80 + -8,"rm_txt_0",8);
    }
    uVar25 = (ulong)((int)uVar31 + 1);
    (&local_5c0)[uVar31 * 0x10] = 0x69666e6f635f6e72;
    pcVar28 = acStack_5b0 + uVar31 * 0x80 + -8;
    pcVar28[0] = 'r';
    pcVar28[1] = 'm';
    pcVar28[2] = '_';
    pcVar28[3] = 'g';
    pcVar28[4] = 'r';
    pcVar28[5] = 'a';
    pcVar28[6] = 'd';
    pcVar28[7] = 'e';
    builtin_strncpy((char *)(&local_5d0 + uVar31 * 0x10),"mnu_spir",8);
    builtin_strncpy((char *)(&local_5c8 + uVar31 * 0x10),"its_retu",8);
    pcVar28 = acStack_5b0 + uVar31 * 0x80;
    pcVar28[0] = '_';
    pcVar28[1] = 'u';
    pcVar28[2] = 'p';
    pcVar28[3] = '\0';
    if (!bVar14) goto LAB_7101deaa78;
LAB_7101dead38:
    uVar31 = uVar25;
    if (bVar22 || (bVar12 || bVar13)) {
      uVar31 = (ulong)((int)uVar25 + 1);
      builtin_strncpy((char *)(&local_5d0 + uVar25 * 0x10),"mnu_spir",8);
      builtin_strncpy((char *)(&local_5c8 + uVar25 * 0x10),"its_retu",8);
      builtin_strncpy((char *)(&uStack_5aa + uVar25 * 0x10),"tuation",8);
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80,"1_punctu",8);
      (&local_5c0)[uVar25 * 0x10] = 0x69666e6f635f6e72;
      builtin_strncpy(acStack_5b0 + uVar25 * 0x80 + -8,"rm_txt_0",8);
    }
    lVar36 = uVar31 * 0x80;
    iVar49 = (int)uVar31 + 1;
    acStack_5b0[lVar36 + 2] = '\0';
    (&local_5c0)[uVar31 * 0x10] = 0x69666e6f635f6e72;
    pcVar28 = acStack_5b0 + lVar36 + -8;
    pcVar28[0] = 'r';
    pcVar28[1] = 'm';
    pcVar28[2] = '_';
    pcVar28[3] = 's';
    pcVar28[4] = 'e';
    pcVar28[5] = 't';
    pcVar28[6] = 't';
    pcVar28[7] = 'i';
    builtin_strncpy((char *)(&local_5d0 + uVar31 * 0x10),"mnu_spir",8);
    builtin_strncpy((char *)(&local_5c8 + uVar31 * 0x10),"its_retu",8);
    (acStack_5b0 + lVar36)[0] = 'n';
    (acStack_5b0 + lVar36)[1] = 'g';
  }
  else {
    uVar25 = 0;
    if (bVar12) goto LAB_7101deacc8;
LAB_7101deaa08:
    if (bVar22) goto LAB_7101deaa0c;
LAB_7101dead34:
    if (bVar14) goto LAB_7101dead38;
LAB_7101deaa78:
    iVar49 = (int)uVar25;
  }
  FUN_7103776910(&local_c0,(long)puVar1,(long ****)"set_txt_help",pcVar33,ppppbVar34,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a280((long)&local_c0,(byte *)"mnu_spirits_return_confirm_txt_01",iVar49);
  uVar25 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = 0;
joined_r0x007101deae3c:
  if (uVar25 != 0) {
    FUN_710392eb40(uVar25);
  }
  return 0;
}

