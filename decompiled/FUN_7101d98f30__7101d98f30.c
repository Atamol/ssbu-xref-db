// addr:      7101d98f30
// offset:    0x1d98f30
// name:      FUN_7101d98f30
// mangled:   
// signature: undefined __cdecl FUN_7101d98f30(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d98f30(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long ***local_88;
  ulong local_80;
  undefined **local_78;
  ulong local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    pcVar7 = "view_change_item";
  }
  else {
    pcVar7 = "view_take_item";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)pcVar7);
  lVar8 = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x48) != lVar8) {
    uVar6 = 0;
    uVar10 = 1;
    do {
      lVar9 = lVar8 + uVar6 * 0xdc;
      FUN_7103776640(&local_78,param_1 + 0x10,(byte ****)(lVar9 + 0xc),param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_88,(long)&local_78,(long ****)"set_txt_count",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      param_4 = (byte ****)(ulong)*(byte *)(lVar9 + 1);
      param_3 = (long ****)0x1;
      FUN_710377a280((long)&local_88,(byte *)"mnu_spirits_challengeboard_item_n",1);
      uVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      plVar3 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (plVar3 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_88 = (long ***)&DAT_00000008;
          param_3 = &local_88;
          uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar4 & 1) != 0) &&
             (plVar3 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8
                                             ), plVar3 != (long *)0x0)) goto LAB_7101d9904c;
        }
        plVar3 = (long *)0x0;
      }
LAB_7101d9904c:
      uVar4 = local_70;
      *plVar3 = 0;
      lVar9 = *(long *)(local_70 + 8);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x60) == 0)) {
        *plVar3 = 0;
      }
      else {
        plVar5 = (long *)FUN_7103796f20(*(long *)(lVar9 + 0x60),*(long *)(lVar9 + 0x18) + 0xb0);
        *plVar3 = (long)plVar5;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined1 *)(lVar8 + uVar6 * 0xdc + 2));
          uVar6 = (**(code **)(*plVar5 + 0x200))(plVar5);
          if ((uVar6 & 1) == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = (**(code **)(*plVar5 + 0x210))(plVar5);
            uVar2 = uVar2 ^ 1;
          }
          param_3 = (long ****)0x0;
          (**(code **)(*plVar5 + 0x388))(plVar5,uVar2 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar3);
      local_78 = &PTR_FUN_710523d988;
      local_70 = 0;
      if (uVar4 != 0) {
        uVar6 = *(ulong *)(uVar4 + 0x18);
        *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar4 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar4);
      }
      lVar8 = *(long *)(param_1 + 0x40);
      uVar6 = (*(long *)(param_1 + 0x48) - lVar8 >> 2) * 0x6fb586fb586fb587;
      bVar1 = uVar10 <= uVar6;
      lVar9 = uVar6 - uVar10;
      uVar6 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar1 && lVar9 != 0);
  }
  return;
}

