// addr:      7101bbcca0
// offset:    0x1bbcca0
// name:      FUN_7101bbcca0
// mangled:   
// signature: undefined FUN_7101bbcca0(void)


void FUN_7101bbcca0(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *********ppppppppplVar5;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  long ****pppplVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long ***ppplStack_68;
  ulong uStack_60;
  undefined4 uStack_54;
  
  uVar1 = *(uint *)(param_1 + 0xb74);
  switch(uVar1) {
  case 0:
    plVar2 = (long *)(param_1 + 0xa58);
    pcVar10 = "type_off";
    break;
  case 1:
    plVar2 = (long *)(param_1 + 0xa70);
    pcVar10 = "type_monster";
    break;
  case 2:
    plVar2 = (long *)(param_1 + 0xa88);
    pcVar10 = "type_assist";
    break;
  case 3:
    plVar2 = (long *)(param_1 + 0xaa0);
    pcVar10 = "type_master";
    break;
  default:
    return;
  }
  uVar13 = (ulong)param_2;
  if ((ulong)(plVar2[1] - *plVar2 >> 3) <= uVar13) {
    return;
  }
  pppplVar9 = *(long *****)(*plVar2 + uVar13 * 8);
  if (uVar1 < 4) {
    lVar7 = *(long *)(DAT_710532f730 + 8);
    switch(uVar1) {
    case 0:
      pcVar12 = "extra_off";
      pcVar11 = "back_items";
      if ((((ulong)pppplVar9 & 0xff00000000000000) == 0x1e00000000000000) &&
         (((ulong)pppplVar9 & 0xffffffffff) != 0)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x268) + 8);
        uVar3 = FUN_710327fb30(lVar7,0x10bd3564e2);
        if (((uVar3 & 0xff00000000000000) == 0x1e00000000000000 && (uVar3 & 0xffffffffff) != 0) &&
           ((((ulong)pppplVar9 ^ uVar3) & 0xffffffffff) == 0)) {
          pcVar12 = "extra_monster";
        }
        else {
          uVar3 = FUN_710327fb30(lVar7,0xe346ef289);
          if ((((uVar3 & 0xff00000000000000) == 0x1e00000000000000) && ((uVar3 & 0xffffffffff) != 0)
              ) && ((((ulong)pppplVar9 ^ uVar3) & 0xffffffffff) == 0)) {
            pcVar12 = "extra_assist";
          }
          else {
            uVar3 = FUN_710327fb30(lVar7,0x124c25c799);
            pcVar12 = "extra_off";
            pcVar11 = "replace";
            if (((uVar3 & 0xff00000000000000) != 0x1e00000000000000) ||
               ((uVar3 & 0xffffffffff) == 0)) break;
            pcVar12 = "extra_master";
            if ((((ulong)pppplVar9 ^ uVar3) & 0xffffffffff) != 0) {
              pcVar12 = "extra_off";
            }
          }
        }
        pcVar11 = "replace";
      }
      break;
    case 1:
      pcVar12 = "extra_off";
      pcVar11 = "back_monster";
      if ((((ulong)pppplVar9 & 0xff00000000000000) == 0x1e00000000000000) &&
         (((ulong)pppplVar9 & 0xffffffffff) != 0)) {
        uVar3 = FUN_710327fb30(*(long *)(*(long *)(lVar7 + 0x268) + 8),0x10bd3564e2);
        pcVar11 = "replace";
        if ((uVar3 & 0xff00000000000000) == 0x1e00000000000000 && (uVar3 & 0xffffffffff) != 0) {
          uVar3 = (ulong)pppplVar9 ^ uVar3;
          pcVar11 = "random_monster";
LAB_7101bbcfb0:
          if ((uVar3 & 0xffffffffff) != 0) {
            pcVar11 = "replace";
          }
        }
        goto LAB_7101bbcfb8;
      }
      break;
    case 2:
      pcVar12 = "extra_off";
      pcVar11 = "back_assist";
      if ((((ulong)pppplVar9 & 0xff00000000000000) == 0x1e00000000000000) &&
         (((ulong)pppplVar9 & 0xffffffffff) != 0)) {
        uVar3 = FUN_710327fb30(*(long *)(*(long *)(lVar7 + 0x268) + 8),0xe346ef289);
        pcVar11 = "replace";
        if ((uVar3 & 0xff00000000000000) == 0x1e00000000000000 && (uVar3 & 0xffffffffff) != 0) {
          uVar3 = (ulong)pppplVar9 ^ uVar3;
          pcVar11 = "random_assist";
          goto LAB_7101bbcfb0;
        }
        goto LAB_7101bbcfb8;
      }
      break;
    case 3:
      pcVar11 = "back_master";
      pcVar12 = "extra_off";
      if ((((ulong)pppplVar9 & 0xff00000000000000) == 0x1e00000000000000) &&
         (pcVar12 = "extra_off", ((ulong)pppplVar9 & 0xffffffffff) != 0)) {
        uVar3 = FUN_710327fb30(*(long *)(*(long *)(lVar7 + 0x268) + 8),0x124c25c799);
        pcVar11 = "replace";
        if ((uVar3 & 0xff00000000000000) == 0x1e00000000000000 && (uVar3 & 0xffffffffff) != 0) {
          uVar3 = (ulong)pppplVar9 ^ uVar3;
          pcVar11 = "random_master";
          goto LAB_7101bbcfb0;
        }
        goto LAB_7101bbcfb8;
      }
    }
  }
  else {
    pcVar11 = (char *)0x0;
LAB_7101bbcfb8:
    pcVar12 = "extra_off";
  }
  lVar7 = *(long *)(param_3 + 8);
  if ((*(long *)(lVar7 + 8) != 0) && (lVar8 = *(long *)(*(long *)(lVar7 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
    lVar7 = *(long *)(param_3 + 8);
  }
  FUN_7103778300(0x3f800000,lVar7,(long)pcVar10);
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar12);
  if (((pcVar11 != (char *)0x0) &&
      (FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar11),
      ((ulong)pppplVar9 & 0xff00000000000000) == 0x1e00000000000000)) &&
     (((ulong)pppplVar9 & 0xffffffffff) != 0)) {
    ppppppppplVar5 = (long *********)&DAT_00000015;
    plVar2 = FUN_710323f8d0(*(long **)(param_1 + 8),pppplVar9,(long ****)&DAT_00000015,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103776910(&ppplStack_68,param_3,(long ****)"set_rep_00",ppppppppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    uVar3 = uStack_60;
    FUN_7103778b80(uStack_60,(long)plVar2,ppppppppplVar5,param_4,param_5,param_6,param_7,param_8);
    ppplStack_68 = (long ***)&PTR_FUN_710523d9a8;
    uStack_60 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_7103776910(&ppplStack_68,param_3,(long ****)"set_rep_01",ppppppppplVar5,param_4,param_5,
                   param_6,param_7,param_8);
    uVar3 = uStack_60;
    FUN_7103778b80(uStack_60,(long)plVar2,ppppppppplVar5,param_4,param_5,param_6,param_7,param_8);
    ppplStack_68 = (long ***)&PTR_FUN_710523d9a8;
    uStack_60 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  pppplVar6 = (long ****)(ulong)*(uint *)(param_1 + 0xad0);
  uVar1 = FUN_7101bbd2b0(param_1,(ulong)pppplVar9,*(uint *)(param_1 + 0xad0));
  plVar2 = (long *)FUN_710392e290(0x10,8,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      uStack_54 = 0;
      ppplStack_68 = (long ***)&DAT_00000008;
      pppplVar9 = &ppplStack_68;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         plVar2 != (long *)0x0)) goto LAB_7101bbd124;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101bbd124:
  *plVar2 = 0;
  lVar7 = *(long *)(*(long *)(param_3 + 8) + 8);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x60) == 0)) {
    *plVar2 = 0;
  }
  else {
    plVar4 = (long *)FUN_7103796f20(*(long *)(lVar7 + 0x60),*(long *)(lVar7 + 0x18) + 0xb0);
    *plVar2 = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x208))(plVar4,uVar1 & 1);
      uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4);
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)(*plVar4 + 0x210))(plVar4);
        uVar1 = uVar1 ^ 1;
      }
      (**(code **)(*plVar4 + 0x388))(plVar4,uVar1 & 1,0);
    }
  }
  FUN_710392eb40((ulong)plVar2);
  if ((uVar13 < (ulong)(*(long *)(param_1 + 0xac0) - *(long *)(param_1 + 0xab8) >> 4)) &&
     (lVar7 = *(long *)(param_1 + 0xab8) + uVar13 * 0x10, lVar7 != param_3)) {
    **(undefined8 **)(lVar7 + 8) = **(undefined8 **)(param_3 + 8);
    *(undefined8 *)(*(long *)(lVar7 + 8) + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 8);
    lVar8 = *(long *)(param_3 + 8);
    lVar7 = *(long *)(lVar7 + 8);
    if (lVar7 != lVar8) {
      **(undefined8 **)(lVar7 + 0x18) = **(undefined8 **)(lVar8 + 0x18);
      *(undefined8 *)(*(long *)(lVar7 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18);
    }
  }
  return;
}

