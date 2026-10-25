// addr:      7101c298e0
// offset:    0x1c298e0
// name:      FUN_7101c298e0
// mangled:   
// signature: undefined __cdecl FUN_7101c298e0(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c298e0(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  long *********ppppppppplVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint auStack_148 [2];
  char acStack_140 [64];
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  long *local_e8;
  undefined **local_e0;
  long *local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8 [9];
  
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101c29d60:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103776640(&local_d0,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                 (byte ****)"set_preview_st_00",param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_e0,(long)&local_d0,(long ****)"set_rep_st_mark",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar1 = local_c8;
  if (param_2 == 0) {
    FUN_7103778300(0x3f800000,local_c8,0x7104348100);
    FUN_7103778300(0x3f800000,local_c8,0x71043f095a);
    lVar14 = *local_d8;
    plVar6 = local_d8;
    if (lVar14 != 0) {
      *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
    }
    goto LAB_7101c29cfc;
  }
  if ((ulong)(*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3) <= (ulong)(long)param_2)
  goto LAB_7101c29d60;
  uVar13 = *(ulong *)(*(long *)(param_1 + 0x58) + (long)param_2 * 8);
  FUN_7103778300(0x3f800000,local_c8,0x710438b28f);
  FUN_7103778300(0x3f800000,local_c8,0x7104308464);
  FUN_7103776910(&local_c0,(long)&local_d0,(long ****)"set_rep_stage",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar6 = (long *)(param_1 + 0x50);
  ppppppppplVar8 = (long *********)&DAT_0000000e;
  plVar4 = FUN_710323f4a0(plVar6,uVar13,(long ****)&DAT_0000000e,param_4,param_5,param_6,param_7,
                          param_8);
  uVar5 = local_b8[0];
  FUN_7103778b80(local_b8[0],(long)plVar4,ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8[0] = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_f0,(long)&local_d0,(long ****)"set_rep_st_logo",ppppppppplVar8,param_4,
                 param_5,param_6,param_7,param_8);
  lVar14 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8);
  uVar5 = FUN_71032b23e0(lVar14,0xf1f1e484c);
  bVar2 = (uVar13 & 0xffffffffff) != 0;
  bVar3 = (uVar13 & 0xff00000000000000) == 0x6900000000000000;
  if (((bVar3 && bVar2) && ((uVar5 & 0xff00000000000000) == 0x6900000000000000)) &&
     ((uVar5 & 0xffffffffff) != 0)) {
    if (((uVar5 ^ uVar13) & 0xffffffffff) != 0) {
      uVar5 = FUN_71032b23e0(lVar14,0xd56784f97);
      uVar9 = uVar5 & 0xffffffffff;
LAB_7101c29b30:
      uVar12 = uVar5 & 0xff00000000000000;
      if ((uVar12 != 0x6900000000000000) || (uVar9 == 0)) goto LAB_7101c29b84;
      if (((uVar5 ^ uVar13) & 0xffffffffff) != 0) goto LAB_7101c29b4c;
    }
LAB_7101c29ba4:
    lVar14 = *local_e8;
    plVar4 = local_e8;
    if (lVar14 != 0) {
      bVar11 = *(byte *)(lVar14 + 0x58) & 0xfe;
LAB_7101c29bb8:
      *(byte *)(lVar14 + 0x58) = bVar11;
      plVar4 = local_e8;
    }
  }
  else {
    if (((uVar5 & 0xffffffffff) != 0 && (uVar5 & 0xff00000000000000) == 0x6900000000000000) ==
        ((uVar13 & 0xff00000000000000) == 0x6900000000000000 && (uVar13 & 0xffffffffff) != 0))
    goto LAB_7101c29ba4;
    uVar5 = FUN_71032b23e0(lVar14,0xd56784f97);
    uVar9 = uVar5 & 0xffffffffff;
    if (bVar3 && bVar2) goto LAB_7101c29b30;
    uVar12 = uVar5 & 0xff00000000000000;
LAB_7101c29b84:
    if ((uVar9 != 0 && uVar12 == 0x6900000000000000) == (bVar3 && bVar2)) goto LAB_7101c29ba4;
LAB_7101c29b4c:
    ppppppppplVar8 = (long *********)&DAT_0000000c;
    plVar4 = FUN_710323f4a0(plVar6,uVar13,(long ****)&DAT_0000000c,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80((long)local_e8,(long)plVar4,ppppppppplVar8,param_4,param_5,param_6,param_7,
                   param_8);
    lVar14 = *local_e8;
    plVar4 = local_e8;
    if (lVar14 != 0) {
      bVar11 = *(byte *)(lVar14 + 0x58) | 1;
      goto LAB_7101c29bb8;
    }
  }
  lVar14 = DAT_710532f730;
  uVar5 = FUN_71032b2de0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),uVar13);
  ppppppppplVar8 = (long *********)&DAT_00000011;
  plVar6 = FUN_710323f600(plVar6,uVar5,(long ****)&DAT_00000011,param_4,param_5,param_6,param_7,
                          param_8);
  FUN_7103778b80((long)local_d8,(long)plVar6,ppppppppplVar8,param_4,param_5,param_6,param_7,param_8)
  ;
  lVar10 = *local_d8;
  if (lVar10 != 0) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  uVar5 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),0xd56784f97
                        );
  if (((bVar3 && bVar2) && ((uVar5 & 0xff00000000000000) == 0x6900000000000000)) &&
     ((uVar5 & 0xffffffffff) != 0)) {
    bVar2 = ((uVar5 ^ uVar13) & 0xffffffffff) == 0;
  }
  else {
    bVar2 = ((uVar5 & 0xffffffffff) != 0 && (uVar5 & 0xff00000000000000) == 0x6900000000000000) ==
            (bVar3 && bVar2);
  }
  FUN_7103776910(&local_100,(long)&local_d0,(long ****)"set_txt_st_name",ppppppppplVar8,param_4,
                 param_5,param_6,param_7,param_8);
  if (bVar2) {
    FUN_71032b1a60((uint *)&local_c0,*(long *)(*(long *)(lVar14 + 8) + 0x178),uVar13);
    pcVar7 = "nam_stg1_%s_plural";
  }
  else {
    FUN_71032b1a60((uint *)&local_c0,*(long *)(*(long *)(lVar14 + 8) + 0x178),uVar13);
    pcVar7 = "nam_stg1_%s";
  }
  FUN_71003a4ca0(auStack_148,pcVar7,local_b8,uVar13,param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_100,acStack_140,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar5 = local_f8;
  local_100 = &PTR_FUN_710523d9a8;
  local_f8 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  local_f0 = &PTR_FUN_710523d9a8;
  local_e8 = (long *)0x0;
  plVar6 = local_d8;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
LAB_7101c29cfc:
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar1 != 0) {
    uVar5 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

