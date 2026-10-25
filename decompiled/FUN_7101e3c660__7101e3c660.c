// addr:      7101e3c660
// offset:    0x1e3c660
// name:      FUN_7101e3c660
// mangled:   
// signature: undefined __cdecl FUN_7101e3c660(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e3c660(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint auStack_e0 [2];
  undefined1 auStack_d8 [64];
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80 [8];
  
  if (param_2 == 0) {
    FUN_7103776910(&local_88,param_3,(long ****)"set_txt_base",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar6 = "mnu_spirits_recall_rev_pedestal_all";
    uVar7 = 1;
    FUN_710377a280((long)&local_88,(byte *)"mnu_spirits_select_ped_nam",1);
    uVar5 = local_80[0];
    local_88 = &PTR_FUN_710523d9a8;
    local_80[0] = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710427057f);
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      uVar11 = (*(long *)(param_1 + 0x10) + -4) - *(long *)(param_1 + 8);
      uVar10 = uVar11 >> 2;
      uVar1 = (int)uVar10 + 1;
      uVar5 = (ulong)uVar1 & 3;
      if (0xb < uVar11) {
        lVar12 = (uVar5 - 1) - uVar10;
        do {
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if ((uVar1 & 3) != 0) {
        lVar12 = -uVar5;
        do {
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
    }
    FUN_7103776910(&local_88,param_3,(long ****)"set_txt_num_base",uVar7,pcVar6,param_5,param_6,
                   param_7,param_8);
    FUN_710377a280((long)&local_88,(byte *)"mnu_spirits_recall_rev_pedestal_n",1);
    uVar5 = local_80[0];
    local_88 = &PTR_FUN_710523d9a8;
    local_80[0] = 0;
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) <= (long)param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar4 = *(ushort *)(*(long *)(param_1 + 8) + ((long)param_2 - 1U) * 4);
    lVar13 = *(long *)(DAT_710532f730 + 8);
    lVar14 = (long)(short)uVar4;
    FUN_7103776910(&local_98,param_3,(long ****)"set_txt_base",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar12 = *(long *)(lVar13 + 0x1d8);
    uVar5 = FUN_71032a9470(lVar12,uVar4);
    FUN_71032a9540((uint *)&local_88,lVar12,uVar5);
    FUN_71003a4ca0(auStack_e0,"spi_%s",local_80,uVar5,param_4,param_5,param_6,param_7,param_8);
    puVar8 = auStack_d8;
    uVar7 = 1;
    FUN_710377a280((long)&local_98,(byte *)"mnu_spirits_select_ped_nam",1);
    uVar5 = local_90;
    local_98 = &PTR_FUN_710523d9a8;
    local_90 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    lVar12 = *DAT_7105329f98;
    FUN_7103776910(&local_88,param_3,(long ****)"set_txt_num_base",uVar7,puVar8,param_5,param_6,
                   param_7,param_8);
    uVar5 = 0;
    if ((uVar4 != 0xffff) && ((short)uVar4 < 2000)) {
      lVar9 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if ((uint)*(ushort *)(lVar9 + lVar14 * 2 + 0x60) <
          (uint)((int)((ulong)(*(long *)(lVar9 + 0x28) - *(long *)(lVar9 + 0x20)) >> 6) *
                -0x33333333)) {
        uVar5 = (ulong)*(byte *)(*(long *)(lVar12 + 0x30) + lVar14 * 0x24);
      }
      else {
        uVar5 = 0;
      }
    }
    uVar7 = 1;
    FUN_710377a280((long)&local_88,(byte *)"mnu_spirits_recall_rev_pedestal_n",1);
    uVar10 = local_80[0];
    local_88 = &PTR_FUN_710523d9a8;
    local_80[0] = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71042b4910);
    lVar12 = *(long *)(lVar13 + 0x1d8);
    if (uVar4 == 0xffff) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (ulong)*(ushort *)(lVar12 + lVar14 * 2 + 0x60);
    }
    lVar13 = *(long *)(lVar12 + 0x20);
    uVar11 = (*(long *)(lVar12 + 0x28) - lVar13 >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(lVar13 + uVar10 * 0x140);
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    if (((uVar4 == 0xffff) ||
        (uVar4 = *(ushort *)(lVar12 + lVar14 * 2 + 0x60), (uint)uVar11 <= (uint)uVar4)) ||
       (*(char *)(lVar13 + (ulong)uVar4 * 0x140 + 0x5e) != '\x01')) {
      cVar3 = *(char *)(puVar2 + 0x36);
      if (cVar3 == '\x03') {
        FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,
                       param_6,param_7,param_8);
        pcVar6 = "spirit_attacker_defense";
      }
      else if (cVar3 == '\x02') {
        FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,
                       param_6,param_7,param_8);
        pcVar6 = "spirit_attacker_throw";
      }
      else if (cVar3 == '\x01') {
        FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,
                       param_6,param_7,param_8);
        pcVar6 = "spirit_attacker_offense";
      }
      else {
        FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,
                       param_6,param_7,param_8);
        pcVar6 = "spirit_attacker_non";
      }
    }
    else {
      FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,param_6,
                     param_7,param_8);
      pcVar6 = "spirit_supporter";
    }
    uVar10 = local_80[0];
    FUN_7103778300(0x3f800000,local_80[0],(long)pcVar6);
    local_88 = &PTR_FUN_710523d988;
    local_80[0] = 0;
    if (uVar10 != 0) {
      uVar11 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar10);
    }
    switch(*(undefined1 *)(puVar2 + 0x34)) {
    case 0:
      FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,param_6,
                     param_7,param_8);
      pcVar6 = "class_none";
      break;
    case 1:
      FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,param_6,
                     param_7,param_8);
      pcVar6 = "class_hope";
      break;
    case 2:
      FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,param_6,
                     param_7,param_8);
      pcVar6 = "class_ace";
      break;
    case 3:
      FUN_7103776640(&local_88,param_3,(byte ****)"set_parts_icon_base",uVar7,uVar5,param_5,param_6,
                     param_7,param_8);
      pcVar6 = "class_legend";
      break;
    default:
      return;
    }
    uVar5 = local_80[0];
    FUN_7103778300(0x3f800000,local_80[0],(long)pcVar6);
    local_88 = &PTR_FUN_710523d988;
    local_80[0] = 0;
    if (uVar5 == 0) {
      return;
    }
    uVar10 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  FUN_710392eb40(uVar5);
  return;
}

