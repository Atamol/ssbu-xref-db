// addr:      7101e0de70
// offset:    0x1e0de70
// name:      FUN_7101e0de70
// mangled:   
// signature: undefined __cdecl FUN_7101e0de70(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e0de70(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  ulong uVar2;
  long *********ppppppppplVar3;
  byte ****ppppbVar4;
  long ****pppplVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  long lVar8;
  
  FUN_7103776640(&local_50,param_1 + 0x510,(byte ****)"set_parts_rule",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (((*(char *)(param_2 + 8) == '\0') || (*(char *)(param_2 + 0xec) != '\0')) ||
     (*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70))) {
    uVar7 = local_48;
    if ((*(long *)(local_48 + 8) != 0) &&
       (lVar6 = *(long *)(*(long *)(local_48 + 8) + 0x18), lVar6 != 0)) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    goto LAB_7101e0e0b8;
  }
  puVar9 = &DAT_c1ffff0000000000;
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_atr",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)(param_2 + 8) != '\0') {
    if (*(char *)(param_2 + 0xec) == '\0') {
      lVar6 = *(long *)(param_2 + 0x70);
      lVar8 = *(long *)(param_2 + 0x78);
      if (lVar8 == lVar6) goto LAB_7101e0df88;
    }
    else {
      lVar6 = *(long *)(param_2 + 0x70);
      lVar8 = *(long *)(param_2 + 0x78);
    }
    uVar7 = lVar8 - lVar6;
    if (0 < (int)(uVar7 >> 3)) {
      uVar2 = 0;
      do {
        if (*(char *)(*(long *)(lVar6 + uVar2 * 8) + 0x10) == '\x01') {
          if ((-1 < (int)uVar2) && (uVar2 < (ulong)((long)uVar7 >> 3))) {
            lVar6 = *(long *)(lVar6 + uVar2 * 8);
            puVar9 = *(undefined1 **)(lVar6 + 0x18);
            uVar10 = (uint)*(byte *)(lVar6 + 0x20);
            uVar11 = *(byte *)(lVar6 + 0x48) - 1;
            goto LAB_7101e0df90;
          }
          break;
        }
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(uVar7 * 0x20000000) >> 0x20);
    }
  }
LAB_7101e0df88:
  uVar10 = 0;
  uVar11 = 0xff;
LAB_7101e0df90:
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_power",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a280((long)&local_70,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
  uVar7 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar1 = (undefined1)(0x20301 >> (ulong)((uVar11 & 3) << 3));
  if (2 < (uVar11 & 0xff)) {
    uVar1 = 0;
  }
  pppplVar5 = (long ****)0x0;
  FUN_71025b12c0((long)&local_60,uVar1,-1,0,0,param_6,param_7,param_8);
  plVar12 = *(long **)(param_1 + 8);
  local_70 = (undefined **)FUN_7103238a70((ulong)puVar9,(ulong)uVar10,2);
  if (((ulong)local_70 & 0xffffffffff) != 0) {
    lVar6 = *plVar12;
    FUN_710323c4e0(lVar6,(ulong *)&local_70,(long *********)(long)*(int *)(lVar6 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar6 + 0x68),pppplVar5,param_6,param_7,param_8);
  }
  ppppbVar4 = (byte ****)0x2;
  ppppppppplVar3 = (long *********)(ulong)uVar10;
  plVar12 = FUN_710323f330(*(long **)(param_1 + 8),(ulong)puVar9,(ulong)ppppppppplVar3,2,pppplVar5,
                           param_6,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_fighter",ppppppppplVar3,ppppbVar4,
                 pppplVar5,param_6,param_7,param_8);
  uVar7 = local_68;
  FUN_7103778b80(local_68,(long)plVar12,ppppppppplVar3,ppppbVar4,pppplVar5,param_6,param_7,param_8);
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar2 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  uVar7 = local_48;
  if (uVar2 != 0) {
    uVar7 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar2);
    uVar7 = local_48;
  }
LAB_7101e0e0b8:
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar7 != 0) {
    uVar2 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

