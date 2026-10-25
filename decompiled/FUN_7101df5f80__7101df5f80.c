// addr:      7101df5f80
// offset:    0x1df5f80
// name:      FUN_7101df5f80
// mangled:   
// signature: undefined __cdecl FUN_7101df5f80(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df5f80(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x6cd) == '\0') {
    FUN_7103776910(&local_40,param_1 + 0x18,(long ****)"set_sp_visible",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar4 = local_38;
    lVar7 = *local_38;
    if (lVar7 != 0) {
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    goto LAB_7101df6228;
  }
  lVar7 = param_1 + 0x18;
  FUN_7103776910(&local_40,lVar7,(long ****)"set_sp_visible",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar4 = local_38;
  lVar6 = *local_38;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  }
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  FUN_7103776640(&local_40,lVar7,(byte ****)"set_parts_sp",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_num_sp",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if ((*(int *)(param_1 + 0x638) == 0xd) || (*(int *)(param_1 + 0x638) == 4)) {
    iVar1 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    if (*(int *)(param_1 + 0x6d0) != iVar1) {
      *(int *)(param_1 + 0x6d0) = iVar1;
      FUN_7103776640(&local_60,lVar7,(byte ****)"set_parts_sp",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103399f50(*(long *)(param_1 + 0x6e0),*(int *)(param_1 + 0x6d0),param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar4 = local_58;
      local_60 = &PTR_FUN_710523d988;
      local_58 = (long *)0x0;
      if (plVar4 != (long *)0x0) {
        uVar2 = plVar4[3];
        plVar4[2] = (long)&PTR_FUN_710523d9a8;
        plVar4[3] = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        goto LAB_7101df6130;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x6d0) =
         *(undefined4 *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    FUN_7103776910(&local_60,(long)&local_50,(long ****)"set_txt_num",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)*(uint *)(param_1 + 0x6d0);
    param_3 = (long ****)0x1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_spirits_return_sp",1);
    plVar4 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
LAB_7101df6130:
      FUN_710392eb40((ulong)plVar4);
    }
  }
  if (*(int *)(param_1 + 0x6d4) == 0) {
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar7 = *local_58;
    plVar4 = local_58;
    if (lVar7 != 0) {
      bVar8 = *(byte *)(lVar7 + 0x58) & 0xfe;
      goto LAB_7101df61cc;
    }
  }
  else {
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = (ulong)*(uint *)(param_1 + 0x6d4);
    uVar5 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_spirits_return_confirm_sp",1);
    plVar4 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",uVar5,uVar2,param_5,
                   param_6,param_7,param_8);
    lVar7 = *local_58;
    plVar4 = local_58;
    if (lVar7 != 0) {
      bVar8 = *(byte *)(lVar7 + 0x58) | 1;
LAB_7101df61cc:
      *(byte *)(lVar7 + 0x58) = bVar8;
      plVar4 = local_58;
    }
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  uVar2 = local_48;
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
  plVar4 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = (long *)0x0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar2 = plVar4[3];
  plVar4[2] = (long)&PTR_FUN_710523d9a8;
  plVar4[3] = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
LAB_7101df6228:
  FUN_710392eb40((ulong)plVar4);
  return;
}

