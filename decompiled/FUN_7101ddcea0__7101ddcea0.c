// addr:      7101ddcea0
// offset:    0x1ddcea0
// name:      FUN_7101ddcea0
// mangled:   
// signature: undefined __cdecl FUN_7101ddcea0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ddcea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  ulong local_48;
  
  lVar8 = param_1 + 0x18;
  FUN_7103776640(&local_50,lVar8,(byte ****)"set_parts_btn_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_60,lVar8,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar3 = local_58;
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 2) {
    lVar7 = *local_58;
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    pcVar5 = "nam_goods_spirit_energy_l";
  }
  else if (iVar1 == 1) {
    lVar7 = *local_58;
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    pcVar5 = "nam_goods_spirit_energy_m";
  }
  else {
    if (iVar1 != 0) {
      lVar7 = *local_58;
      if (lVar7 != 0) {
        *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
      }
      goto LAB_7101ddcf70;
    }
    lVar7 = *local_58;
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    }
    pcVar5 = "nam_goods_spirit_energy_s";
  }
  FUN_710377a120((long)&local_60,pcVar5,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101ddcf70:
  uVar9 = (ulong)*(ushort *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xe);
  FUN_7103776640(&local_70,lVar8,(byte ****)"set_parts_btn_energy_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num_base",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar6 = 1;
  FUN_710377a280((long)&local_80,(byte *)"mnu_spirits_raise_energy_s_n",1);
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_energy",uVar6,uVar9,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  FUN_7103778300(0x3f800000,local_78,0x710437ca5d);
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_base",uVar6,uVar9,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  if ((*(long *)(local_78 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_78 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  uVar4 = (ulong)*(ushort *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x10);
  FUN_7103776640(&local_70,lVar8,(byte ****)"set_parts_btn_energy_01",uVar6,uVar9,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num_base",uVar6,uVar9,param_5,param_6
                 ,param_7,param_8);
  uVar6 = 1;
  FUN_710377a280((long)&local_80,(byte *)"mnu_spirits_raise_energy_m_n",1);
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_energy",uVar6,uVar4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  FUN_7103778300(0x3f800000,local_78,0x710434a86d);
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_base",uVar6,uVar4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  if ((*(long *)(local_78 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_78 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  uVar9 = (ulong)*(ushort *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x12);
  FUN_7103776640(&local_70,lVar8,(byte ****)"set_parts_btn_energy_02",uVar6,uVar4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_txt_num_base",uVar6,uVar4,param_5,param_6
                 ,param_7,param_8);
  uVar6 = 1;
  FUN_710377a280((long)&local_80,(byte *)"mnu_spirits_raise_energy_l_n",1);
  uVar2 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_energy",uVar6,uVar9,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  FUN_7103778300(0x3f800000,local_78,0x71042920c0);
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_80,(long)&local_70,(byte ****)"set_parts_icon_base",uVar6,uVar9,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_78;
  if ((*(long *)(local_78 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_78 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar9 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

