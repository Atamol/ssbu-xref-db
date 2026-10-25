// addr:      7101c3eea0
// offset:    0x1c3eea0
// name:      FUN_7101c3eea0
// mangled:   
// signature: undefined __cdecl FUN_7101c3eea0(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c3eea0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ***ppplVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  long ***local_d0;
  ulong local_c8 [8];
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined **local_70;
  ulong local_68;
  
  pppplVar13 = &local_d0;
  if (*(int *)(param_1 + 0x160) != 5) {
    if (*(int *)(param_1 + 0x160) != 2) {
      return;
    }
    lVar20 = param_1 + 0x30;
    FUN_7103776640(&local_70,lVar20,(byte ****)"set_parts_btn_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_88,(long)&local_70,(long ****)"set_txt_val",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar9 = local_80;
    plVar19 = *(long **)((long)local_80 + 0x10);
    if (plVar19 != (long *)0x0) {
      param_5 = (long ****)0x0;
      param_6 = 0;
      local_c8[5] = 0;
      local_c8[6] = 0;
      local_c8[3] = 0;
      local_c8[4] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_d0 = (long ***)0x0;
      local_c8[0] = 0;
      uVar6 = FUN_71037ad940((long)&local_d0,0x20,0,*(uint *)(param_1 + 0x170),0,0);
      param_3 = (ulong)uVar6;
      param_4 = 0;
      FUN_71037a2270(plVar19,(ushort *)&local_d0,uVar6,0);
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar9);
    }
    uVar17 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar17 != 0) {
      uVar7 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar17);
    }
    FUN_7103776640(&local_70,lVar20,(byte ****)"set_parts_btn_01",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_88,(long)&local_70,(long ****)"set_txt_val",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar9 = local_80;
    plVar19 = *(long **)((long)local_80 + 0x10);
    if (plVar19 != (long *)0x0) {
      param_5 = (long ****)0x0;
      param_6 = 0;
      local_c8[5] = 0;
      local_c8[6] = 0;
      local_c8[3] = 0;
      local_c8[4] = 0;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_d0 = (long ***)0x0;
      local_c8[0] = 0;
      uVar6 = FUN_71037ad940((long)&local_d0,0x20,0,*(uint *)(param_1 + 0x174),0,0);
      param_3 = (ulong)uVar6;
      param_4 = 0;
      FUN_71037a2270(plVar19,(ushort *)&local_d0,uVar6,0);
    }
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar9);
    }
    uVar17 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar17 != 0) {
      uVar7 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar17);
    }
    FUN_7103776910(&local_d0,lVar20,(long ****)"set_txt_sum",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar7 = (ulong)*(uint *)(param_1 + 0x170);
    uVar11 = 1;
    FUN_710377a280((long)&local_d0,(byte *)"mel_tournament_member_sum_n",1);
    uVar17 = local_c8[0];
    local_d0 = (long ***)&PTR_FUN_710523d9a8;
    local_c8[0] = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_7103776910(&local_d0,lVar20,(long ****)"set_txt_sum_pre",uVar11,uVar7,param_5,param_6,
                   param_7,param_8);
    uVar7 = (ulong)*(uint *)(param_1 + 0x170);
    FUN_710377a280((long)&local_d0,(byte *)"mel_tournament_member_sum_n",1);
    uVar17 = local_c8[0];
    local_d0 = (long ***)&PTR_FUN_710523d9a8;
    local_c8[0] = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_7103778430(lVar20,"on_number_%02d",(ulong)*(uint *)(param_1 + 0x170),uVar7,param_5,param_6,
                   param_7,param_8);
    FUN_7103778430(lVar20,"cp_number_%02d",(ulong)*(uint *)(param_1 + 0x174),uVar7,param_5,param_6,
                   param_7,param_8);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x198)) {
  case 0:
    FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_caption",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar10 = "mel_tournament_type_select_a";
    break;
  case 1:
    FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_caption",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar10 = "mel_tournament_type_select_b";
    break;
  case 2:
    FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_caption",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar10 = "mel_tournament_type_select_c";
    break;
  case 3:
    FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_caption",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar10 = "mel_tournament_type_select_d";
    break;
  default:
    FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_caption",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar17 = local_c8[0];
    if (*(long **)(local_c8[0] + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(local_c8[0] + 0x10),&DAT_7104867c2e);
    }
    goto joined_r0x007101c3f418;
  }
  FUN_710377a120((long)&local_d0,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar17 = local_c8[0];
joined_r0x007101c3f418:
  local_c8[0] = 0;
  local_d0 = (long ***)&PTR_FUN_710523d9a8;
  if (uVar17 != 0) {
    local_c8[0] = 0;
    local_d0 = (long ***)&PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar17);
  }
  lVar20 = *(long *)(param_1 + 0x180);
  lVar5 = *(long *)(param_1 + 0x188) - lVar20;
  if (lVar5 != 0) {
    uVar17 = 0;
    lVar22 = 1;
    do {
      bVar3 = *(byte *)(lVar20 + lVar22);
      FUN_7103776640(&local_d0,param_1 + 0x30,(byte ****)"set_parts_btn2_%02d",uVar17 & 0xffffffff,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103778430((long)&local_d0,"finalist_number_%d",
                     (ulong)*(byte *)(*(long *)(param_1 + 0x180) + (ulong)bVar3 + lVar22),param_4,
                     param_5,param_6,param_7,param_8);
      uVar7 = local_c8[0];
      local_d0 = (long ***)&PTR_FUN_710523d988;
      local_c8[0] = 0;
      if (uVar7 != 0) {
        uVar8 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar7);
      }
      lVar20 = *(long *)(param_1 + 0x180);
      uVar17 = uVar17 + 1;
      lVar22 = lVar22 + 8;
    } while (uVar17 < (ulong)(lVar5 >> 3));
  }
  iVar4 = *(int *)(param_1 + 0x198);
  lVar5 = lVar20 + (long)iVar4 * 8;
  pbVar21 = (byte *)(lVar5 + 1);
  pbVar18 = (byte *)(lVar5 + 2);
  uVar17 = (ulong)pbVar18[(ulong)*pbVar21 - 1];
  FUN_7103778430(**(long **)(param_1 + 0x18) + 8,"final_p%d",uVar17,param_4,param_5,param_6,param_7,
                 param_8);
  if ((ulong)*pbVar21 < 2) {
    uVar6 = 1;
  }
  else {
    lVar22 = (ulong)*pbVar21 + 1;
    iVar16 = 1;
    uVar6 = 1;
    do {
      pbVar1 = (byte *)(lVar5 + lVar22);
      lVar22 = lVar22 + -1;
      iVar16 = iVar16 * (uint)*pbVar1;
      uVar6 = iVar16 + uVar6;
    } while (2 < lVar22);
  }
  if (*pbVar18 == 2) {
    uVar6 = (uVar6 - *(byte *)(lVar20 + (long)iVar4 * 8)) + *(int *)(param_1 + 0x170);
  }
  FUN_7103776910(&local_d0,param_1 + 0x30,(long ****)"set_txt_compe",uVar17,param_4,param_5,param_6,
                 param_7,param_8);
  pppplVar12 = (long ****)0x1;
  ppppbVar14 = (byte ****)(ulong)uVar6;
  FUN_710377a280((long)&local_d0,(byte *)"mel_tournament_type_active_txt_04",1);
  uVar17 = local_c8[0];
  local_d0 = (long ***)&PTR_FUN_710523d9a8;
  local_c8[0] = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  bVar3 = *pbVar21;
  local_80 = (undefined **)0x0;
  local_78 = (undefined **)0x0;
  local_88 = (undefined **)0x0;
  pbVar21 = (byte *)(lVar5 + (ulong)bVar3 + 2);
  uVar17 = (long)pbVar21 - (long)pbVar18;
  if (uVar17 == 0) goto LAB_7101c3f474;
  if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  ppplVar15 = (long ***)(uVar17 * 8);
  if (ppplVar15 == (long ***)0x0) {
    ppplVar15 = (long ***)0x1;
  }
  ppuVar9 = (undefined **)
            FUN_710392e290(0x10,ppplVar15,pppplVar12,ppppbVar14,param_5,param_6,param_7,param_8);
  if (ppuVar9 == (undefined **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      local_d0 = ppplVar15;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      pppplVar12 = pppplVar13;
      if (((uVar7 & 1) != 0) &&
         (ppuVar9 = (undefined **)
                    FUN_710392e290(0x10,ppplVar15,pppplVar13,ppppbVar14,param_5,param_6,param_7,
                                   param_8), pppplVar12 = pppplVar13, ppuVar9 != (undefined **)0x0))
      goto LAB_7101c3f394;
    }
    ppuVar9 = (undefined **)0x0;
  }
LAB_7101c3f394:
  local_78 = ppuVar9 + uVar17;
  local_88 = ppuVar9;
  local_80 = ppuVar9;
  if (pbVar18 != pbVar21) {
    if ((bVar3 & 1) != 0) {
      bVar2 = *pbVar18;
      pbVar18 = (byte *)(lVar5 + 3);
      *ppuVar9 = (undefined *)(ulong)bVar2;
      local_80 = ppuVar9 + 1;
    }
    if (bVar3 != 1) {
      do {
        *local_80 = (undefined *)(ulong)*pbVar18;
        local_80[1] = (undefined *)(ulong)pbVar18[1];
        pbVar18 = pbVar18 + 2;
        local_80 = local_80 + 2;
      } while (pbVar18 != pbVar21);
    }
  }
LAB_7101c3f474:
  FUN_71003a4ca0((uint *)&local_d0,"mel_tournament_type_pattern_%d",
                 (long)local_80 - (long)local_88 >> 3,pppplVar12,ppppbVar14,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_70,param_1 + 0x30,(long ****)"set_txt_compe_detail",pppplVar12,ppppbVar14,
                 param_5,param_6,param_7,param_8);
  uVar17 = local_68;
  if (*(long **)(local_68 + 0x10) != (long *)0x0) {
    FUN_71037a2660(*(long **)(local_68 + 0x10),(byte *)local_c8,(long *)&local_88);
  }
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  if (local_88 != (undefined **)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  return;
}

