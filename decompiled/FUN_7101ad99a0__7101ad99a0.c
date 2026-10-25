// addr:      7101ad99a0
// offset:    0x1ad99a0
// name:      FUN_7101ad99a0
// mangled:   
// signature: undefined __cdecl FUN_7101ad99a0(long param_1, int param_2, long * * * * * * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad99a0(long param_1,int param_2,long *********param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  long ********pppppppplVar6;
  long ****pppplVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  uint uVar13;
  ulong uVar14;
  ushort uVar15;
  int iVar16;
  ushort *puVar17;
  ulong *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  uint local_110 [2];
  byte local_108 [64];
  undefined **local_c8;
  ulong local_c0;
  uint local_b8 [2];
  byte local_b0 [64];
  undefined **local_70;
  ulong local_68;
  int local_54;
  
  if (param_2 < 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    return;
  }
  uVar14 = (*(long *)(param_1 + 0x18) - lVar1 >> 4) * -0x5555555555555555;
  uVar20 = (ulong)param_2;
  if (uVar14 < uVar20 || uVar14 - uVar20 == 0) {
    return;
  }
  puVar18 = (ulong *)(lVar1 + uVar20 * 0x30);
  uVar13 = *(uint *)(param_1 + 0x28);
  plVar19 = *(long **)(param_1 + 8);
  ppppppppplVar11 = param_3;
  FUN_7101adddd0(puVar18,(long)param_3);
  lVar21 = *(long *)(DAT_710532f730 + 8);
  uVar14 = FUN_71032b6c10(*(long *)(lVar21 + 0x1b8),*puVar18);
  if ((int)uVar14 == -1) {
    local_b0[0] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
  }
  else {
    FUN_71003a4ca0(local_b8,"tip_title_%04d",uVar14 & 0xffffffff,ppppppppplVar11,param_4,param_5,
                   param_6,param_7,param_8);
  }
  FUN_7103776910(&local_c8,(long)param_3,(long ****)"set_txt_title",ppppppppplVar11,param_4,param_5,
                 param_6,param_7,param_8);
  uVar10 = 1;
  ppppbVar12 = (byte ****)(ulong)uVar13;
  FUN_710377a280((long)&local_c8,local_b0,1);
  uVar14 = FUN_71032b6c10(*(long *)(lVar21 + 0x1b8),*puVar18);
  if ((int)uVar14 == -1) {
    local_108[0] = 0;
    local_110[0] = 0;
    local_110[1] = 0;
  }
  else {
    FUN_71003a4ca0(local_110,"tip_text_%04d",uVar14 & 0xffffffff,uVar10,ppppbVar12,param_5,param_6,
                   param_7,param_8);
  }
  FUN_7103776910(&local_120,(long)param_3,(long ****)"set_txt_honbun_3lines",uVar10,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_130,(long)param_3,(long ****)"set_txt_honbun",uVar10,ppppbVar12,param_5,
                 param_6,param_7,param_8);
  bVar2 = FUN_71037a4570((long *)*DAT_710593bc60,local_108);
  if (((bVar2) &&
      (puVar5 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,local_108), puVar5 != (ushort *)0x0
      )) && (uVar15 = *puVar5, uVar15 != 0)) {
    uVar13 = 0;
    iVar4 = 1;
    puVar17 = puVar5;
    do {
      if ((uVar15 | 1) == 0xf) {
        if (uVar15 == 0xe) {
          iVar16 = (puVar17[3] >> 1) + 4;
        }
        else {
          iVar16 = 3;
          if (uVar15 != 0xf) {
            iVar16 = 0;
          }
        }
      }
      else {
        iVar16 = 1;
        if (uVar15 == 10) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar13 = iVar16 + uVar13;
      puVar17 = puVar5 + uVar13;
      uVar15 = *puVar17;
    } while (uVar15 != 0);
    if (iVar4 < 3) goto LAB_7101ad9bbc;
    if (*(long **)(local_128 + 0x10) != (long *)0x0) {
      uVar10 = 0;
      ppppbVar12 = (byte ****)0x0;
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_128 + 0x10),(ushort *)&local_70,0,0);
    }
    FUN_710377a120((long)&local_120,(char *)local_108,uVar10,ppppbVar12,param_5,param_6,param_7,
                   param_8);
    pppppppplVar6 = param_3[1];
    pcVar9 = "txt_line_3";
  }
  else {
LAB_7101ad9bbc:
    FUN_710377a120((long)&local_130,(char *)local_108,uVar10,ppppbVar12,param_5,param_6,param_7,
                   param_8);
    if (*(long **)(local_118 + 0x10) != (long *)0x0) {
      ppppbVar12 = (byte ****)0x0;
      local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_118 + 0x10),(ushort *)&local_70,0,0);
    }
    pppppppplVar6 = param_3[1];
    pcVar9 = "txt_line_2";
  }
  FUN_7103778300(0x3f800000,(long)pppppppplVar6,(long)pcVar9);
  lVar21 = *(long *)(DAT_710532f730 + 8);
  uVar3 = FUN_7101addb00(puVar18);
  ppppppppplVar11 = param_3;
  FUN_7101addcc0(&local_70,uVar3,(long ****)param_3,ppppbVar12,param_5,param_6,param_7,param_8);
  switch(uVar3) {
  case 0:
  case 1:
  case 2:
    pppplVar7 = (long ****)
                FUN_710327fb30(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268) + 8),
                               *(ulong *)(lVar1 + uVar20 * 0x30 + 0x20));
    ppppppppplVar11 = (long *********)&DAT_00000015;
    plVar19 = FUN_710323f8d0(plVar19,pppplVar7,(long ****)&DAT_00000015,ppppbVar12,param_5,param_6,
                             param_7,param_8);
    break;
  case 3:
    uVar14 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                            *(ulong *)(lVar1 + uVar20 * 0x30 + 0x20));
    ppppppppplVar11 = (long *********)&DAT_0000000e;
    plVar19 = FUN_710323f4a0(plVar19,uVar14,(long ****)&DAT_0000000e,ppppbVar12,param_5,param_6,
                             param_7,param_8);
    break;
  default:
    FUN_71037790a0(local_68,1,ppppppppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
    uVar14 = local_68;
    goto LAB_7101ad9d80;
  case 5:
    puVar8 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                            *(ulong *)(lVar1 + uVar20 * 0x30 + 0x20));
    uVar14 = FUN_71032b9580(*(long *)(lVar21 + 0x1b8),*puVar18);
    if ((~(uint)uVar14 & 0xff) == 0) {
      ppppppppplVar11 = (long *********)0x0;
    }
    else {
      ppppppppplVar11 = (long *********)(ulong)(uint)(int)(char)uVar14;
    }
    ppppbVar12 = (byte ****)0x1;
    plVar19 = FUN_710323f330(plVar19,(ulong)puVar8,(ulong)ppppppppplVar11,1,param_5,param_6,param_7,
                             param_8);
    break;
  case 6:
    puVar8 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                            *(ulong *)(lVar1 + uVar20 * 0x30 + 0x20));
    local_54 = 0;
    uVar14 = FUN_71032b8880(*(long *)(lVar21 + 0x1b8),*puVar18,&local_54);
    ppppppppplVar11 = (long *********)(uVar14 & 0xffffffff);
    ppppbVar12 = (byte ****)&DAT_00000024;
    param_5 = (long ****)(ulong)(local_54 - 1);
    plVar19 = FUN_71032407a0(plVar19,(ulong)puVar8,(int)uVar14,0x24,(ulong)param_5,param_6,param_7,
                             param_8);
  }
  FUN_7103778b80(local_68,(long)plVar19,ppppppppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  uVar14 = local_68;
LAB_7101ad9d80:
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  iVar4 = FUN_7101addb00(puVar18);
  FUN_7101addf20(iVar4,(long)param_3,ppppppppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_70,(long)param_3,(byte ****)"set_parts_new",ppppppppplVar11,ppppbVar12,
                 param_5,param_6,param_7,param_8);
  uVar14 = local_68;
  FUN_7103778300(0x3f800000,local_68,0x71043cd335);
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar14 != 0) {
    uVar20 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar20 != 0) {
      FUN_710392eb40(uVar20);
    }
    FUN_710392eb40(uVar14);
  }
  uVar14 = local_128;
  local_130 = &PTR_FUN_710523d9a8;
  local_128 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar14 = local_118;
  local_120 = &PTR_FUN_710523d9a8;
  local_118 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  uVar14 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  return;
}

