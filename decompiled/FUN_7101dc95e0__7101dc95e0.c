// addr:      7101dc95e0
// offset:    0x1dc95e0
// name:      FUN_7101dc95e0
// mangled:   
// signature: undefined __cdecl FUN_7101dc95e0(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dc95e0(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long ****pppplVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte ****ppppbVar14;
  undefined **local_60;
  undefined8 *local_58;
  undefined **local_50;
  ulong local_48;
  
  *(byte *)(param_1 + 0x298) = param_2 & 1;
  lVar2 = *(long *)(param_1 + 0x28);
  if ((param_2 & 1) == 0) {
    pcVar5 = "score_off";
  }
  else {
    ppppbVar14 = (byte ****)((ulong)param_3 & 0xffffffff);
    pppplVar7 = param_3;
    ppppbVar8 = param_4;
    FUN_7103778300(0x3f800000,lVar2,0x71042b47e8);
    iVar13 = (int)param_3;
    if ((iVar13 != 0) || (((ulong)param_4 & 1) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x710425f946);
      FUN_7103776640(&local_50,param_1 + 0x20,(byte ****)"set_part_txt_totalscore",pppplVar7,
                     ppppbVar8,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_60,(long)&local_50,(long ****)"set_txt_num",pppplVar7,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      puVar3 = *(undefined1 **)(param_1 + 0x2a0);
      if ((undefined ***)puVar3 != &local_60) {
        **(undefined8 **)(puVar3 + 8) = *local_58;
        *(undefined8 *)(*(long *)(puVar3 + 8) + 8) = local_58[1];
        *(undefined8 *)(*(long *)(puVar3 + 8) + 0x10) = local_58[2];
        *(undefined8 *)(*(long *)(puVar3 + 8) + 0x18) = local_58[3];
      }
      for (uVar9 = 0; "mnu_spirits_directory_battle_high_score_n"[uVar9] != '\0'; uVar9 = uVar9 + 2)
      {
        puVar3[uVar9 + 0x18] = "mnu_spirits_directory_battle_high_score_n"[uVar9];
        if ("mnu_spirits_directory_battle_high_score_n"[uVar9 + 1] == '\0') {
          uVar9 = uVar9 + 1;
          break;
        }
        puVar3[uVar9 + 0x19] = "mnu_spirits_directory_battle_high_score_n"[uVar9 + 1];
      }
      (puVar3 + 0x18)[uVar9 & 0xffffffff] = 0;
      uVar12 = (uint)(byte)puVar3[0x18];
      uVar11 = 0x811c9dc5;
      *(int *)(puVar3 + 0x14) = (int)uVar9;
      if (puVar3[0x18] != 0) {
        pbVar10 = puVar3 + 0x19;
        do {
          uVar11 = uVar11 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (uVar12 != 0);
      }
      param_4 = (byte ****)(ulong)*(uint *)(puVar3 + 0x94);
      param_3 = (long ****)0x1;
      *(uint *)(puVar3 + 0x10) = uVar11;
      FUN_710377a280((long)puVar3,puVar3 + 0x18,1);
      lVar2 = *(long *)(param_1 + 0x2a0);
      uVar6 = extraout_x1_00;
      if (*(int *)(lVar2 + 0x94) != iVar13) {
        param_3 = (long ****)0x1;
        *(int *)(lVar2 + 0x94) = iVar13;
        FUN_710377a280(lVar2,(byte *)(lVar2 + 0x18),1);
        uVar6 = extraout_x1_01;
        param_4 = ppppbVar14;
      }
      puVar1 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar1);
        uVar6 = extraout_x1_02;
      }
      uVar9 = local_48;
      local_50 = &PTR_FUN_710523d988;
      local_48 = 0;
      if (uVar9 != 0) {
        uVar4 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar9);
        uVar6 = extraout_x1_03;
      }
      goto LAB_7101dc968c;
    }
    FUN_7103776910(&local_50,param_1 + 0x20,(long ****)"set_txt_totalscore",pppplVar7,ppppbVar8,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_50,"mnu_spirits_directory_battle_high_score_none",pppplVar7,
                   ppppbVar8,param_5,param_6,param_7,param_8);
    uVar9 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = "score_color0";
    param_3 = pppplVar7;
    param_4 = ppppbVar8;
  }
  FUN_7103778300(0x3f800000,lVar2,(long)pcVar5);
  uVar6 = extraout_x1;
LAB_7101dc968c:
  *(byte *)(param_1 + 0x158) = param_2 & 1;
  FUN_7101dc7bf0(param_1,uVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

