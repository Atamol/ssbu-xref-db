// addr:      71032d0830
// offset:    0x32d0830
// name:      FUN_71032d0830
// mangled:   
// signature: undefined __cdecl FUN_71032d0830(long param_1, uint param_2, ulong param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032d0830(long param_1,uint param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined **local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  if (9 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar13 = *(long *)(param_1 + 8);
  lVar6 = lVar13 + (long)(int)param_2 * 0x130;
  uVar5 = (uint)param_4;
  *(bool *)(lVar6 + 0x11a) = uVar5 < 2;
  uVar12 = param_6 & 0xffffffff;
  iVar2 = (int)param_3;
  lVar14 = (long)(int)param_2;
  *(uint *)(lVar6 + 0x10) = uVar5;
  bVar9 = 0;
  if (*(char *)(lVar6 + 0x118) != '\0') {
    if (*(char *)(lVar13 + lVar14 * 0x130 + 0x119) == '\0' || 1 < uVar5) {
      bVar9 = 0;
    }
    else {
      bVar9 = 0;
      if (*(char *)(lVar13 + lVar14 * 0x130 + 0x11b) != '\0') {
        bVar9 = *(byte *)(lVar13 + lVar14 * 0x130 + 0x11c);
      }
    }
  }
  lVar6 = lVar6 + 0x20;
  plVar15 = (long *)(lVar13 + lVar14 * 0x130 + 0x28);
  lVar7 = *(long *)(*plVar15 + 8);
  if ((lVar7 != 0) && (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | bVar9;
  }
  if ((int)param_5 == -1) {
    if (1 < uVar5 - 2) {
      if (uVar5 != 1) {
        pcVar3 = "player_color_%dp";
        iVar1 = iVar2;
        goto LAB_71032d0908;
      }
      if (*(int *)(lVar13 + lVar14 * 0x130 + 0x14) == 1) {
        param_3 = (ulong)(iVar2 + 1);
        FUN_7103778430(lVar6,"compe_cp_color_%dp",param_3,param_4,param_5,param_6,param_7,param_8);
        goto LAB_71032d0924;
      }
      local_90 = 0x635f726579616c70;
      local_88 = 0x70635f726f6c6f;
      uVar10 = 0x811c9dc5;
      uVar11 = 0x70;
      pbVar8 = (byte *)((long)&local_90 + 1);
      do {
        uVar10 = uVar10 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar11 != 0);
      local_98 = (undefined **)CONCAT44(0xf,uVar10);
      goto LAB_71032d0918;
    }
  }
  else {
    pcVar3 = "team_color_%d";
    iVar1 = (int)param_5;
LAB_71032d0908:
    FUN_71003a4ca0((uint *)&local_98,pcVar3,(ulong)(iVar1 + 1),param_3,param_4,param_5,param_6,
                   param_7,param_8);
LAB_71032d0918:
    FUN_7103778300(0x3f800000,*plVar15,(long)&local_90);
  }
LAB_71032d0924:
  FUN_7103776910(&local_a8,lVar6,(long ****)"set_txt_number",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  iVar1 = *(int *)(lVar13 + lVar14 * 0x130 + 0x14);
  if (iVar1 == 3) {
    pcVar3 = "mel_chara_select_campaign_medal_n";
  }
  else {
    if (iVar1 == 2) {
      uVar4 = 1;
      FUN_710377a280((long)&local_a8,(byte *)"mel_chara_select_tournament_medal_n",1);
      FUN_7103776910(&local_98,lVar6,(long ****)"set_txt_tournament",uVar4,uVar12,param_5,param_6,
                     param_7,param_8);
      FUN_710377a310((long)&local_98,1);
      uVar12 = local_90;
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      goto LAB_71032d0a9c;
    }
    if (iVar1 != 1) {
      if (uVar5 == 1) {
        uVar5 = 0x811c9dc5;
        uVar10 = 99;
        local_90 = CONCAT17(local_90._7_1_,0x70635f6e6d63);
        pbVar8 = (byte *)((long)&local_90 + 1);
        do {
          uVar5 = uVar5 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar10 != 0);
        local_98 = (undefined **)CONCAT44(6,uVar5);
      }
      else {
        FUN_71003a4ca0((uint *)&local_98,"cmn_%dp",(ulong)(iVar2 + 1),param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      FUN_710377a120((long)&local_a8,(char *)&local_90,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      goto LAB_71032d0a9c;
    }
    pcVar3 = "mel_team_chara_select_medal_n";
  }
  FUN_710377a280((long)&local_a8,(byte *)pcVar3,1);
LAB_71032d0a9c:
  uVar12 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar12 != 0) {
    FUN_710392eb40(uVar12);
  }
  return;
}

