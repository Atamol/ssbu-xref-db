// addr:      7101b38390
// offset:    0x1b38390
// name:      FUN_7101b38390
// mangled:   
// signature: undefined __cdecl FUN_7101b38390(long param_1, long param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b38390(long param_1,long param_2,ulong *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  long *********ppppppppplVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  undefined **local_b0;
  long *local_a8;
  undefined **local_a0;
  long *local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  
  lVar11 = DAT_710532f730;
  lVar14 = *(long *)(DAT_710532f730 + 8);
  puVar8 = param_3;
  uVar3 = FUN_71032b23e0(*(long *)(*(long *)(lVar14 + 0x178) + 8),0x14bebd6a0c);
  FUN_7103776910(&local_70,param_2,(long ****)"set_rep_stage",puVar8,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar7 = (long *)(param_1 + 0x50);
  ppppppppplVar9 = (long *********)&DAT_0000000e;
  plVar4 = FUN_710323f4a0(plVar7,*param_3,(long ****)&DAT_0000000e,param_4,param_5,param_6,param_7,
                          param_8);
  plVar1 = local_68;
  FUN_7103778b80((long)local_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  lVar10 = *local_68;
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  FUN_71037799d0((long)local_68);
  FUN_7103776910(&local_80,param_2,(long ****)"set_rep_stage_battle",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar9 = (long *********)&DAT_00000010;
  plVar5 = FUN_710323f4a0(plVar7,*param_3,(long ****)&DAT_00000010,param_4,param_5,param_6,param_7,
                          param_8);
  plVar4 = local_78;
  FUN_7103778b80((long)local_78,(long)plVar5,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  lVar10 = *local_78;
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  FUN_7103776910(&local_90,param_2,(long ****)"set_rep_stage_end",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar9 = (long *********)&DAT_0000000f;
  plVar6 = FUN_710323f4a0(plVar7,*param_3,(long ****)&DAT_0000000f,param_4,param_5,param_6,param_7,
                          param_8);
  plVar5 = local_88;
  FUN_7103778b80((long)local_88,(long)plVar6,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  lVar10 = *local_88;
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  FUN_7103776910(&local_a0,param_2,(long ****)"set_rep_st_logo",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  uVar13 = *param_3;
  bVar2 = FUN_71032b4980(lVar14 + 0x170,uVar13);
  plVar6 = local_98;
  if (bVar2) {
    lVar10 = *local_98;
    if (lVar10 != 0) {
      bVar12 = *(byte *)(lVar10 + 0x58) & 0xfe;
LAB_7101b38578:
      *(byte *)(lVar10 + 0x58) = bVar12;
      plVar6 = local_98;
    }
  }
  else {
    if (((((uVar3 & 0xff00000000000000) == 0x6900000000000000) && ((uVar3 & 0xffffffffff) != 0)) &&
        ((uVar13 & 0xff00000000000000) == 0x6900000000000000)) && ((uVar13 & 0xffffffffff) != 0)) {
      if (((uVar13 ^ uVar3) & 0xffffffffff) != 0) goto LAB_7101b38548;
    }
    else if (((uVar13 & 0xffffffffff) != 0 && (uVar13 & 0xff00000000000000) == 0x6900000000000000)
             != ((uVar3 & 0xff00000000000000) == 0x6900000000000000 && (uVar3 & 0xffffffffff) != 0))
    {
LAB_7101b38548:
      ppppppppplVar9 = (long *********)&DAT_0000000c;
      plVar6 = FUN_710323f4a0(plVar7,uVar13,(long ****)&DAT_0000000c,param_4,param_5,param_6,param_7
                              ,param_8);
      FUN_7103778b80((long)local_98,(long)plVar6,ppppppppplVar9,param_4,param_5,param_6,param_7,
                     param_8);
      lVar10 = *local_98;
      plVar6 = local_98;
      if (lVar10 != 0) {
        bVar12 = *(byte *)(lVar10 + 0x58) | 1;
        goto LAB_7101b38578;
      }
      goto LAB_7101b38580;
    }
    lVar10 = *local_98;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    }
  }
LAB_7101b38580:
  FUN_7103776910(&local_b0,param_2,(long ****)"set_rep_st_mark",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = FUN_71032b2de0(*(long *)(lVar14 + 0x178),*param_3);
  uVar13 = FUN_710329a390(*(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x188) + 8),0xe89ae81c5);
  if ((((uVar13 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar13 & 0xffffffffff) != 0)) &&
     (((uVar3 & 0xff00000000000000) == 0x2d00000000000000 && ((uVar3 & 0xffffffffff) != 0)))) {
    if (((uVar3 ^ uVar13) & 0xffffffffff) != 0) goto LAB_7101b385f8;
LAB_7101b38664:
    FUN_7103779650((long)local_a8);
    lVar11 = *local_a8;
    plVar7 = local_a8;
    if (lVar11 == 0) goto LAB_7101b38684;
    bVar12 = *(byte *)(lVar11 + 0x58) & 0xfe;
  }
  else {
    if (((uVar3 & 0xffffffffff) != 0 && (uVar3 & 0xff00000000000000) == 0x2d00000000000000) ==
        ((uVar13 & 0xff00000000000000) == 0x2d00000000000000 && (uVar13 & 0xffffffffff) != 0))
    goto LAB_7101b38664;
LAB_7101b385f8:
    ppppppppplVar9 = (long *********)&DAT_00000011;
    plVar7 = FUN_710323f600(plVar7,uVar3,(long ****)&DAT_00000011,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80((long)local_a8,(long)plVar7,ppppppppplVar9,param_4,param_5,param_6,param_7,
                   param_8);
    lVar11 = *local_a8;
    plVar7 = local_a8;
    if (lVar11 == 0) goto LAB_7101b38684;
    bVar12 = *(byte *)(lVar11 + 0x58) | 1;
  }
  *(byte *)(lVar11 + 0x58) = bVar12;
  plVar7 = local_a8;
LAB_7101b38684:
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  return;
}

