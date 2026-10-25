// addr:      7101df0960
// offset:    0x1df0960
// name:      FUN_7101df0960
// mangled:   
// signature: undefined __cdecl FUN_7101df0960(undefined8 * param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df0960(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *********ppppppppplVar4;
  byte ****ppppbVar5;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  FUN_7103776640(&local_50,(long)(param_1 + 2),(byte ****)"set_parts_rule",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_48;
  if ((((param_2 == 0) || (*(char *)(param_2 + 8) == '\0')) || (*(char *)(param_2 + 0xec) != '\0'))
     || (*(long *)(param_2 + 0x78) == *(long *)(param_2 + 0x70))) {
    if ((*(long *)(local_48 + 8) != 0) &&
       (lVar7 = *(long *)(*(long *)(local_48 + 8) + 0x18), lVar7 != 0)) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
    }
    goto LAB_7101df09d4;
  }
  if ((*(long *)(local_48 + 8) != 0) &&
     (lVar7 = *(long *)(*(long *)(local_48 + 8) + 0x18), lVar7 != 0)) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
  }
  puVar10 = &DAT_c1ffff0000000000;
  FUN_7103776640(&local_60,(long)&local_50,(byte ****)"set_parts_atr",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)(param_2 + 8) != '\0') {
    if (*(char *)(param_2 + 0xec) == '\0') {
      lVar7 = *(long *)(param_2 + 0x70);
      lVar8 = *(long *)(param_2 + 0x78);
      if (lVar8 == lVar7) goto LAB_7101df0ae0;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x70);
      lVar8 = *(long *)(param_2 + 0x78);
    }
    uVar3 = lVar8 - lVar7;
    if (0 < (int)(uVar3 >> 3)) {
      uVar9 = 0;
      do {
        if (*(char *)(*(long *)(lVar7 + uVar9 * 8) + 0x10) == '\x01') {
          if ((-1 < (int)uVar9) && (uVar9 < (ulong)((long)uVar3 >> 3))) {
            lVar7 = *(long *)(lVar7 + uVar9 * 8);
            puVar10 = *(undefined1 **)(lVar7 + 0x18);
            uVar11 = (uint)*(byte *)(lVar7 + 0x20);
            uVar12 = *(byte *)(lVar7 + 0x48) - 1;
            goto LAB_7101df0ae8;
          }
          break;
        }
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(uVar3 * 0x20000000) >> 0x20);
    }
  }
LAB_7101df0ae0:
  uVar11 = 0;
  uVar12 = 0xff;
LAB_7101df0ae8:
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_power",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a280((long)&local_70,(byte *)"mnu_spirits_challengeboard_organize_power_n",1);
  uVar3 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar1 = (undefined1)(0x20301 >> (ulong)((uVar12 & 3) << 3));
  if (2 < (uVar12 & 0xff)) {
    uVar1 = 0;
  }
  pppplVar6 = (long ****)0x0;
  FUN_71025b12c0((long)&local_60,uVar1,-1,0,0,param_6,param_7,param_8);
  plVar13 = (long *)*param_1;
  local_70 = (undefined **)FUN_7103238a70((ulong)puVar10,(ulong)uVar11,2);
  if (((ulong)local_70 & 0xffffffffff) != 0) {
    lVar7 = *plVar13;
    FUN_710323c4e0(lVar7,(ulong *)&local_70,(long *********)(long)*(int *)(lVar7 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar7 + 0x68),pppplVar6,param_6,param_7,param_8);
  }
  ppppbVar5 = (byte ****)0x2;
  ppppppppplVar4 = (long *********)(ulong)uVar11;
  plVar13 = FUN_710323f330((long *)*param_1,(ulong)puVar10,(ulong)ppppppppplVar4,2,pppplVar6,param_6
                           ,param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_rep_fighter",ppppppppplVar4,ppppbVar5,
                 pppplVar6,param_6,param_7,param_8);
  uVar3 = local_68;
  FUN_7103778b80(local_68,(long)plVar13,ppppppppplVar4,ppppbVar5,pppplVar6,param_6,param_7,param_8);
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar3 != 0) {
    uVar9 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar3);
  }
LAB_7101df09d4:
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

