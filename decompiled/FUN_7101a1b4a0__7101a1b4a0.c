// addr:      7101a1b4a0
// offset:    0x1a1b4a0
// name:      FUN_7101a1b4a0
// mangled:   
// signature: undefined __cdecl FUN_7101a1b4a0(long param_1, int param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1b4a0(long param_1,int param_2,ulong *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  ulong uVar8;
  byte ****ppppbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  ulong local_68;
  
  lVar2 = **(long **)(param_1 + 0x1a8) + 8;
  uVar1 = param_2 + 1;
  ppppppppplVar7 = (long *********)(ulong)uVar1;
  ppppbVar9 = param_4;
  FUN_7103776640(&local_70,lVar2,(byte ****)"set_parts_lct_score_%dp",ppppppppplVar7,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_rep_chara1",ppppppppplVar7,ppppbVar9,
                 param_5,param_6,param_7,param_8);
  uVar15 = *param_3;
  if (((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)) {
    puVar5 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
    if (((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar5 & 0xffffffffff) != 0) {
      if ((((ulong)puVar5 ^ uVar15) & 0xffffffffff) == 0) goto LAB_7101a1b564;
    }
    else if (((ulong)puVar5 & 0xffffffffff) != 0 &&
             ((ulong)puVar5 & 0xff00000000000000) == 0xc100000000000000) goto LAB_7101a1b564;
    FUN_71003a4ca0((uint *)&local_c8,"player_color_%dp",(ulong)uVar1,ppppppppplVar7,ppppbVar9,
                   param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,local_68,(long)&local_c0);
    puVar5 = (undefined1 *)*param_3;
    lVar11 = *(long *)(DAT_710532f730 + 8);
    bVar4 = FUN_71032648e0(lVar11 + 0x160,(ulong)puVar5);
    if (bVar4) {
      puVar5 = FUN_71032631a0(*(long *)(lVar11 + 0x168),0x13b28d453e);
    }
    ppppppppplVar7 = (long *********)0x0;
    uVar15 = FUN_7103238a70((ulong)puVar5,(ulong)(uint)param_3[1],0);
    if ((uVar15 & 0xffffffffff) == 0) {
      uVar12 = 0xffffff;
      local_c8 = (undefined **)CONCAT44(local_c8._4_4_,0xffffff);
    }
    else {
      FUN_710353da30((uint *)&local_c8,uVar15);
      uVar12 = (uint)local_c8;
    }
    FUN_7103778c70((long)local_78,(uint *)&local_c8,ppppppppplVar7,ppppbVar9,param_5,param_6,param_7
                   ,param_8);
    if (uVar12 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar12,ppppppppplVar7,ppppbVar9,param_5,param_6,param_7,param_8)
      ;
      local_c8 = (undefined **)CONCAT44(local_c8._4_4_,0xffffff);
    }
    lVar11 = *local_78;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
    }
    ppppppppplVar7 = (long *********)0x0;
    local_c8 = (undefined **)FUN_7103238a70((ulong)puVar5,(ulong)(uint)param_3[1],0);
    uVar15 = local_68;
    plVar14 = local_78;
    if (((ulong)local_c8 & 0xffffffffff) != 0) {
      lVar11 = *(long *)(param_1 + 0x150);
      ppppppppplVar7 = (long *********)(long)*(int *)(lVar11 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar11 + 0x68);
      FUN_710323c4e0(lVar11,&local_c8,ppppppppplVar7,ppppbVar9,param_5,param_6,param_7,param_8);
    }
  }
  else {
LAB_7101a1b564:
    local_c0 = 0x635f726579616c70;
    local_b8 = 0x66666f5f726f6c6f;
    uVar12 = 0x811c9dc5;
    local_b0 = 0;
    uVar13 = 0x70;
    pbVar10 = (byte *)((long)&local_c0 + 1);
    do {
      uVar12 = uVar12 * 0x89 ^ uVar13;
      uVar13 = (uint)*pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (uVar13 != 0);
    local_c8 = (undefined **)CONCAT44(0x10,uVar12);
    FUN_7103778300(0x3f800000,local_68,(long)&local_c0);
    FUN_71037790a0((long)local_78,1,ppppppppplVar7,ppppbVar9,param_5,param_6,param_7,param_8);
    lVar11 = *local_78;
    uVar15 = local_68;
    plVar14 = local_78;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
    }
  }
  FUN_7103776910(&local_c8,(long)&local_70,(long ****)"set_txt_highscoer",ppppppppplVar7,ppppbVar9,
                 param_5,param_6,param_7,param_8);
  if (*(int *)param_4 == 0) {
    FUN_7103778300(0x3f800000,uVar15,0x7104454f8a);
    FUN_710377a120((long)&local_c8,"mel_chara_select_high_score_none",ppppppppplVar7,ppppbVar9,
                   param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7103778300(0x3f800000,uVar15,0x71042b47e8);
    ppppbVar9 = (byte ****)((ulong)*(uint *)((long)param_4 + 4) / 1000);
    param_5 = (long ****)(ulong)(*(uint *)((long)param_4 + 4) % 1000);
    FUN_710377a280((long)&local_c8,(byte *)"mel_chara_select_homerun_high_score_n",2);
  }
  uVar8 = (ulong)uVar1;
  FUN_7103776640(&local_d8,lVar2,(byte ****)"set_parts_worldscore_%dp",uVar8,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e8,(long)&local_d8,(long ****)"set_txt_worldscore",uVar8,ppppbVar9,param_5,
                 param_6,param_7,param_8);
  if ((*(int *)param_4 == 0) || (*(int *)((long)param_4 + 0xc) == 2)) {
    FUN_7103778300(0x3f800000,local_d0,0x71042c47bc);
    iVar3 = *(int *)param_4;
  }
  else {
    uVar8 = (ulong)(*(int *)((long)param_4 + 0xc) + 2);
    FUN_7103778430((long)&local_d8,"score_color_%d",uVar8,ppppbVar9,param_5,param_6,param_7,param_8)
    ;
    iVar3 = *(int *)param_4;
  }
  if ((iVar3 == 0) || (*(int *)((long)param_4 + 0xc) != 1)) {
    FUN_710377a120((long)&local_e8,"mel_chara_select_high_score_none",uVar8,ppppbVar9,param_5,
                   param_6,param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_e8,(byte *)"mel_chara_select_world_pw_n",1);
  }
  uVar8 = local_e0;
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_d0;
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar14);
  }
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar15 != 0) {
    uVar8 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar15);
  }
  return;
}

