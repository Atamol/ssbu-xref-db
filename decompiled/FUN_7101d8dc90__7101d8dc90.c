// addr:      7101d8dc90
// offset:    0x1d8dc90
// name:      FUN_7101d8dc90
// mangled:   
// signature: undefined __cdecl FUN_7101d8dc90(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8dc90(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  ushort uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined ***pppuVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  lVar1 = param_1 + 0x120;
  FUN_7103776640(&local_60,lVar1,(byte ****)"set_parts_aw",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar5 = *(ushort *)(param_1 + 0x15c);
  if ((long)(short)uVar5 == -1) {
    FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_spirit_aw",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar14 = local_68;
    FUN_71037790a0(local_68,1,param_3,param_4,param_5,param_6,param_7,param_8);
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_aura_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar14 = local_68;
    FUN_71037790a0(local_68,1,param_3,param_4,param_5,param_6,param_7,param_8);
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = 0;
    uVar11 = extraout_x1;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
      uVar11 = extraout_x1_00;
    }
    FUN_71025ae390((long)&local_60,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101d8e06c;
  }
  lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar15 = (ulong)*(ushort *)(lVar13 + (long)(short)uVar5 * 2 + 0x60);
  uVar14 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
  puVar3 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar15 * 0x140);
  if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
    puVar3 = &DAT_7105182b08;
  }
  if (*(char *)(puVar3 + 0x2f) == '\x03') {
    bVar4 = FUN_71025c9890(uVar5);
    if (!bVar4) {
      uVar5 = *(ushort *)(param_1 + 0x15c);
      if (*(char *)(param_1 + 0x338) != '\0') goto LAB_7101d8de44;
LAB_7101d8de74:
      uVar16 = 0;
      goto LAB_7101d8deac;
    }
    FUN_7103776390(&local_80,&local_60,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101d8e0c0((undefined8 *)(param_1 + 0x198),(ulong *)(param_1 + 0x10),&local_80,
                   (byte ****)(ulong)*(ushort *)(param_1 + 0x15c),(long ****)0x1,
                   (ulong)(*(int *)(param_1 + 0x158) == 1),1,1,0,*(uint *)(param_1 + 0x160));
    uVar14 = local_78;
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar14 != 0) {
      uVar15 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_710392eb40(uVar14);
    }
LAB_7101d8e038:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x7104270277);
  }
  else {
    if (*(char *)(param_1 + 0x338) == '\0') goto LAB_7101d8de74;
LAB_7101d8de44:
    lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar5 == 0xffff) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = (ulong)*(ushort *)(lVar13 + (long)(short)uVar5 * 2 + 0x60);
    }
    uVar15 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
    puVar3 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar14 * 0x140);
    if (uVar15 < uVar14 || uVar15 - uVar14 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    uVar16 = (uint)(*(char *)(puVar3 + 0x2f) == '\x03');
LAB_7101d8deac:
    bVar4 = FUN_71025c9890(uVar5);
    puVar2 = (ulong *)(param_1 + 0x10);
    FUN_7103776390(&local_90,&local_60,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    ppppbVar8 = (byte ****)(ulong)*(ushort *)(param_1 + 0x15c);
    uVar10 = (ulong)(uVar16 | bVar4);
    pppuVar7 = &local_90;
    pppplVar9 = (long ****)0x1;
    uVar11 = 1;
    uVar15 = (ulong)(*(int *)(param_1 + 0x158) == 1);
    FUN_7101d8e0c0((undefined8 *)(param_1 + 0x198),puVar2,pppuVar7,ppppbVar8,(long ****)0x1,uVar15,
                   uVar10,1,0,*(uint *)(param_1 + 0x160));
    uVar14 = local_88;
    local_90 = &PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar14 != 0) {
      uVar6 = *(ulong *)(uVar14 + 0x18);
      *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar14 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar14);
    }
    uVar14 = (ulong)*(short *)(param_1 + 0x15c);
    lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar14 != 0xffffffffffffffff) {
      uVar14 = (ulong)*(ushort *)(lVar13 + uVar14 * 2 + 0x60);
    }
    uVar6 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
    puVar3 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar14 * 0x140);
    if (uVar6 < uVar14 || uVar6 - uVar14 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar3 + 0x2f) != '\x03') || (*(int *)(param_1 + 0x158) != 1))
    goto LAB_7101d8e038;
    uVar12 = 0;
    if ((uVar16 | bVar4) == 0) {
      uVar12 = 2;
    }
    FUN_7103776910(&local_a0,lVar1,(long ****)"set_rep_fighter_front",pppuVar7,ppppbVar8,pppplVar9,
                   uVar15,uVar10,uVar11);
    ppppbVar8 = (byte ****)(ulong)*(ushort *)(param_1 + 0x15c);
    pppuVar7 = &local_a0;
    pppplVar9 = (long ****)(ulong)uVar12;
    FUN_7101d8e310((undefined8 *)(param_1 + 0x1d0),puVar2,pppuVar7,ppppbVar8,pppplVar9,uVar15,uVar10
                   ,uVar11);
    uVar14 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_7103776910(&local_b0,lVar1,(long ****)"set_rep_fighter_back",pppuVar7,ppppbVar8,pppplVar9,
                   uVar15,uVar10,uVar11);
    FUN_7101d8e310((undefined8 *)(param_1 + 0x1e8),puVar2,&local_b0,
                   (byte ****)(ulong)*(ushort *)(param_1 + 0x15c),(long ****)(ulong)uVar12,uVar15,
                   uVar10,uVar11);
    uVar14 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_7103778760(*(long *)(param_1 + 0x128),0x710436c7dc);
  }
  if (*(int *)(param_1 + 0x158) == 8) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710436c7e9);
  }
LAB_7101d8e06c:
  uVar14 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar14 != 0) {
    uVar15 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar14);
  }
  return;
}

