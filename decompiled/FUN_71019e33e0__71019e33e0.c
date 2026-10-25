// addr:      71019e33e0
// offset:    0x19e33e0
// name:      FUN_71019e33e0
// mangled:   
// signature: ulong __cdecl FUN_71019e33e0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_71019e33e0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long **pplVar6;
  ulong uVar7;
  ulong uVar8;
  long ***ppplVar9;
  undefined8 extraout_x1;
  long *plVar10;
  undefined **ppuVar11;
  long ****pppplVar12;
  char *pcVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  long *plVar16;
  char *pcVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  byte *pbVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  ulong local_48;
  long ***local_40;
  undefined4 local_34;
  
  *param_1 = &PTR_FUN_71050a8030;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  pplVar6 = (long **)FUN_710392e290(0x10,0x108,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pplVar6 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
      local_50 = (long ***)&DAT_00000108;
      pppplVar15 = &local_50;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      if (((uVar7 & 1) != 0) &&
         (pplVar6 = (long **)FUN_710392e290(0x10,0x108,pppplVar15,param_4,param_5,param_6,param_7,
                                            param_8), pplVar6 != (long **)0x0)) goto LAB_71019e3484;
    }
    pplVar6 = (long **)0x0;
  }
LAB_71019e3484:
  *(undefined4 *)(pplVar6 + 1) = 0x1000;
  pplVar6[2] = (long *)0x0;
  pplVar6[3] = (long *)0x0;
  pplVar6[4] = (long *)0x0;
  pplVar6[7] = (long *)0x0;
  pplVar6[8] = (long *)0x0;
  pplVar6[6] = (long *)0x0;
  pplVar6[5] = (long *)(pplVar6 + 6);
  *pplVar6 = (long *)&DAT_71050a7f88;
  pplVar6[0x1e] = (long *)&DAT_c1ffff0000000000;
  pplVar6[0xe] = (long *)FUN_71019e2df0;
  pplVar6[0xf] = (long *)0x0;
  *(undefined1 *)(pplVar6 + 0x1f) = 0;
  *(undefined4 *)((long)pplVar6 + 0xfc) = 0;
  *(undefined1 *)(pplVar6 + 0x20) = 0;
  pplVar6[0xb] = (long *)0x0;
  *(undefined4 *)((long)pplVar6 + 0xdc) = 0;
  *(undefined8 *)((long)pplVar6 + 0xd4) = 0;
  *(undefined8 *)((long)pplVar6 + 0xcc) = 0;
  *(undefined8 *)((long)pplVar6 + 0xc4) = 0;
  *(undefined8 *)((long)pplVar6 + 0xbc) = 0;
  *(undefined8 *)((long)pplVar6 + 0xb4) = 0;
  *(undefined8 *)((long)pplVar6 + 0xac) = 0;
  *(undefined8 *)((long)pplVar6 + 0xa4) = 0;
  *(undefined8 *)((long)pplVar6 + 0x9c) = 0;
  *(undefined8 *)((long)pplVar6 + 0x94) = 0;
  *(undefined1 *)((long)pplVar6 + 0xec) = 0;
  *(undefined4 *)(pplVar6 + 0x12) = 0;
  pplVar6[0x10] = (long *)FUN_71019e2e00;
  pplVar6[0x11] = (long *)0x0;
  pplVar6[0x1c] = (long *)&DAT_ffffffff;
  *(undefined4 *)(pplVar6 + 0x1d) = 0xffffffff;
  pplVar6[9] = (long *)pplVar6;
  pplVar6[10] = (long *)0x0;
  pplVar6[0xc] = (long *)0x0;
  pplVar6[0xd] = (long *)0x0;
  FUN_71019e2fc0((long *)(pplVar6 + 9));
  ppuVar11 = &PTR_DAT_71050a7fc0;
  ppppbVar14 = (byte ****)0x31d9bfc44b;
  param_1[0x10] = pplVar6;
  pppplVar15 = (long ****)0x1;
  FUN_71032cb040((long)pplVar6,param_2,(long ****)&PTR_DAT_71050a7fc0,(byte ****)0x31d9bfc44b,
                 (long ****)0x1,param_6,param_7,param_8);
  plVar16 = pplVar6[2];
  if (pplVar6[3] == plVar16) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar20 = **(long **)*plVar16 + 8;
  FUN_7103776640(&local_50,lVar20,(byte ****)"set_parts_stick",ppuVar11,ppppbVar14,pppplVar15,
                 param_6,param_7,param_8);
  FUN_71019e0b00((long)&local_50);
  FUN_7103776640(&local_60,lVar20,(byte ****)"set_btn_decide",ppuVar11,ppppbVar14,pppplVar15,param_6
                 ,param_7,param_8);
  FUN_710337d360(&local_60,extraout_x1,ppuVar11,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar7 != 0) {
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar7);
  }
  plVar16 = pplVar6[8];
  ppplVar9 = (long ***)
             FUN_710392e290(0x10,0x38,(long ****)ppuVar11,ppppbVar14,pppplVar15,param_6,param_7,
                            param_8);
  if (ppplVar9 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = (long ***)((ulong)local_68._4_4_ << 0x20);
      local_40 = (long ***)&DAT_00000038;
      pppplVar12 = &local_40;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar7 & 1) != 0) &&
         (ppplVar9 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), ppplVar9 != (long ***)0x0)) goto LAB_71019e3640;
    }
    ppplVar9 = (long ***)0x0;
  }
LAB_71019e3640:
  ppplVar9[2] = pplVar6;
  *ppplVar9 = (long **)&PTR_FUN_71050a7fe0;
  ppplVar9[5] = (long **)0x0;
  ppplVar9[6] = (long **)0x0;
  ppplVar9[3] = (long **)FUN_71019e3090;
  ppplVar9[4] = (long **)0x0;
  pppplVar12 = (long ****)&local_68;
  *(undefined4 *)(ppplVar9 + 1) = 0;
  local_68 = ppplVar9;
  FUN_7103376af0((long)plVar16,(byte *)"set_reload",pppplVar12,ppppbVar14,pppplVar15,param_6,param_7
                 ,param_8);
  ppplVar9 = local_68;
  local_68 = (long ***)0x0;
  if (ppplVar9 != (long ***)0x0) {
    (*(code *)(*ppplVar9)[1])();
  }
  plVar16 = pplVar6[8];
  local_40 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,param_8);
  if (local_40 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000038;
      pppplVar12 = &local_40;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar7 & 1) != 0) &&
         (local_40 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                    param_8), local_40 != (long ***)0x0)) goto LAB_71019e36ec;
    }
    local_40 = (long ***)0x0;
  }
LAB_71019e36ec:
  *local_40 = (long **)&PTR_FUN_71050a8008;
  local_40[2] = pplVar6;
  local_40[3] = (long **)0x0;
  local_40[6] = (long **)0x0;
  local_40[4] = (long **)0x0;
  local_40[5] = (long **)FUN_71019e30a0;
  pcVar13 = (char *)&local_40;
  *(undefined4 *)(local_40 + 1) = 1;
  FUN_7103376af0((long)plVar16,(byte *)"is_voice_none",(long ****)pcVar13,ppppbVar14,pppplVar15,
                 param_6,param_7,param_8);
  ppplVar9 = local_40;
  local_40 = (long ***)0x0;
  if (ppplVar9 != (long ***)0x0) {
    (*(code *)(*ppplVar9)[1])();
  }
  lVar20 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 600) + 8);
  pcVar17 = *(char **)(lVar20 + 0x20);
  plVar16 = pplVar6[8];
  if ((*pcVar17 == '\f') && (iVar22 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar24 = 0;
    uVar7 = *(ulong *)(lVar20 + 0x48) & 0xffffffffff;
    pbVar21 = &DAT_7104742dbb;
    do {
      iVar3 = iVar22 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar2 = (uint *)(*(long *)(*(long *)(lVar20 + 0x18) + 0x28) + (long)*(int *)(pcVar17 + 5) +
                       (long)iVar3 * 8);
      uVar8 = *(ulong *)(*(long *)(*(long *)(lVar20 + 0x18) + 0x20) + (ulong)*puVar2 * 8);
      if (uVar8 == uVar7) {
        uVar5 = puVar2[1];
        if ((int)uVar5 < 0) goto LAB_71019e37ec;
        pbVar21 = (byte *)(pcVar17 + (int)uVar5);
        break;
      }
      iVar4 = iVar3 + -1;
      if (uVar8 <= uVar7) {
        iVar24 = iVar3 + 1;
        iVar4 = iVar22;
      }
      iVar22 = iVar4;
    } while (iVar24 <= iVar22);
  }
  else {
LAB_71019e37ec:
    pbVar21 = &DAT_7104742dbb;
  }
  if (*pbVar21 - 0xb < 2) {
    ppppbVar14 = (byte ****)(ulong)*(uint *)(pbVar21 + 1);
    plVar18 = (long *)*plVar16;
  }
  else {
    ppppbVar14 = (byte ****)0x0;
    plVar18 = (long *)*plVar16;
  }
  if (plVar18 != (long *)0x0) {
    pcVar13 = &DAT_71042b2a84;
    FUN_7103375650(plVar18,"NUM_VOICE_TYPE",&DAT_71042b2a84);
    plVar16 = pplVar6[8];
    if ((long *)*plVar16 != (long *)0x0) {
      pcVar13 = &DAT_71042b2a84;
      ppppbVar14 = (byte ****)0x3;
      FUN_7103375650((long *)*plVar16,"NUM_VOICE_PITCH",&DAT_71042b2a84);
      plVar16 = pplVar6[8];
    }
  }
  FUN_71019e0910(plVar16);
  plVar18 = pplVar6[8];
  plVar16 = (long *)*plVar18;
  lVar25 = *plVar16;
  *(undefined4 *)(plVar16 + 2) = 0;
  plVar16 = *(long **)(lVar25 + 0x10);
  *plVar16 = lVar25;
  *(undefined4 *)(plVar16 + 1) = 0x48;
  lVar20 = *(long *)(lVar25 + 0x10);
  *(long *)(lVar25 + 0x10) = lVar20 + 0x10;
  lVar23 = *(long *)(*(long *)(lVar25 + 0x18) + 200);
  *(long *)(lVar25 + 0x10) = lVar20;
  if (lVar23 == lVar25) {
    lVar20 = *(long *)(*(long *)(lVar25 + 0x18) + 0x40);
    if (*(uint *)(lVar20 + 0xc) < 2) {
      plVar16 = (long *)(*(long *)(lVar20 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar20 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar16[3] == 0x13) && (plVar10 = plVar16, plVar16[2] == 2)) break;
        piVar1 = (int *)((long)plVar16 + 0x1c);
        plVar16 = plVar16 + (long)*piVar1 * 4;
        plVar10 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar10 = (long *)(*(long *)(lVar20 + 0x10) + 0x10);
    }
    pcVar13 = "initialize";
    uVar5 = FUN_71038f4d40(lVar25,plVar10,"initialize");
  }
  else {
    FUN_71038f4b20(lVar25,"initialize");
    uVar5 = FUN_71038f4fc0(lVar25,-2);
  }
  puVar19 = (undefined8 *)(*(long *)(lVar25 + 0x10) + -0x10);
  if ((puVar19 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar25 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar25 + 0x10) = puVar19;
  }
  else {
    uVar5 = FUN_7103377130(plVar18,0,(long ****)pcVar13,ppppbVar14,pppplVar15,param_6,param_7,
                           param_8);
  }
  uVar7 = local_48;
  uVar8 = (ulong)uVar5;
  local_50 = (long ***)&PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar7 != 0) {
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    uVar8 = FUN_710392eb40(uVar7);
  }
  return uVar8;
}

