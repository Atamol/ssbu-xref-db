// addr:      7101ca1830
// offset:    0x1ca1830
// name:      FUN_7101ca1830
// mangled:   
// signature: undefined __cdecl FUN_7101ca1830(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca1830(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  char *pcVar3;
  long ****pppplVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  undefined4 local_b6;
  undefined2 local_b2;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined **local_90;
  ulong local_88;
  uint local_80 [2];
  undefined1 local_78 [68];
  ushort local_34 [2];
  
  if ((int)param_2 < 0) {
    return;
  }
  uVar8 = (ulong)(int)param_2;
  if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar8) {
    return;
  }
  local_78[0] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  FUN_710062dc20(local_80,"itemselect_%02d");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),(long)local_78);
  if ((ulong)(*(long *)(param_1 + 0x230) - *(long *)(param_1 + 0x228) >> 2) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x228) + uVar8 * 4);
  pppplVar4 = (long ****)(ulong)param_2;
  FUN_7103771d60(&local_d8,*(long *)(param_1 + 0x168),pppplVar4,param_4,param_5,param_6,param_7,
                 param_8);
  plVar2 = local_d0;
  if ((long *)*local_d0 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*(long *)*local_d0 + 0x2f8))();
    uVar8 = uVar8 & 0xffffffff;
  }
  local_d8 = &PTR_FUN_710523d9c8;
  local_d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  FUN_7103776910(&local_90,param_1 + 0x118,(long ****)"set_txt_item_help",pppplVar4,param_4,param_5,
                 param_6,param_7,param_8);
  local_d0 = (long *)((ulong)local_d0 & 0xffffffffffffff00);
  local_d8 = (undefined **)0x0;
  if (iVar1 < 0x100) {
    switch(iVar1) {
    case 2:
      local_c8 = 0x5f656c75725f656e;
      local_c0 = 0x6465;
      local_be = 0x5f6d6574695f7469;
      local_b6 = 0x706c6568;
      local_b2 = 27999;
      local_b0 = 0x305f7365;
      local_ac = 0x31;
      uVar5 = 0x811c9dc5;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_d0 + 1);
      do {
        uVar5 = uVar5 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      break;
    default:
switchD_7101ca194c_caseD_3:
      if (*(long **)(local_88 + 0x10) != (long *)0x0) {
        local_34[0] = 0;
        local_34[1] = 0;
        FUN_71037a2270(*(long **)(local_88 + 0x10),local_34,0,0);
      }
      goto LAB_7101ca1d38;
    case 4:
      local_c8 = 0x5f656c75725f656e;
      local_c0 = 0x6465;
      local_be = 0x5f6d6574695f7469;
      local_b6 = 0x706c6568;
      local_b2 = 27999;
      local_b0 = 0x305f7365;
      local_ac = 0x32;
      uVar5 = 0x811c9dc5;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_d0 + 1);
      do {
        uVar5 = uVar5 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      break;
    case 8:
      local_c8 = 0x5f656c75725f656e;
      local_c0 = 0x6465;
      local_be = 0x5f6d6574695f7469;
      local_b6 = 0x706c6568;
      local_b2 = 27999;
      local_b0 = 0x305f7365;
      local_ac = 0x33;
      uVar5 = 0x811c9dc5;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_d0 + 1);
      do {
        uVar5 = uVar5 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
      break;
    case 0x10:
      local_c8 = 0x5f656c75725f656e;
      local_c0 = 0x6465;
      local_be = 0x5f6d6574695f7469;
      local_b6 = 0x706c6568;
      local_b2 = 27999;
      local_b0 = 0x305f7365;
      local_ac = 0x34;
      uVar5 = 0x811c9dc5;
      uVar7 = 0x6d;
      pbVar6 = (byte *)((long)&local_d0 + 1);
      do {
        uVar5 = uVar5 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    if (iVar1 != 0x100) {
      if (iVar1 == 0x200) {
        if ((uVar8 & 1) == 0) {
          pcVar3 = "mnu_anyone_rule_edit_item_help_mes_07";
        }
        else {
          pcVar3 = "mnu_anyone_rule_edit_item_help_mes_06";
        }
      }
      else {
        if (iVar1 != 0x21e) goto switchD_7101ca194c_caseD_3;
        if ((uVar8 & 1) == 0) {
          pcVar3 = "mnu_anyone_rule_edit_item_help_off_all";
        }
        else {
          pcVar3 = "mnu_anyone_rule_edit_item_help_on_all";
        }
      }
      FUN_710377a120((long)&local_90,pcVar3,pppplVar4,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101ca1d38;
    }
    local_c8 = 0x5f656c75725f656e;
    local_c0 = 0x6465;
    local_be = 0x5f6d6574695f7469;
    local_b6 = 0x706c6568;
    local_b2 = 27999;
    local_b0 = 0x305f7365;
    local_ac = 0x35;
    uVar5 = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar6 = (byte *)((long)&local_d0 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
  }
  local_b0 = 0x305f7365;
  local_b2 = 27999;
  local_b6 = 0x706c6568;
  local_be = 0x5f6d6574695f7469;
  local_c0 = 0x6465;
  local_c8 = 0x5f656c75725f656e;
  local_d0 = (long *)0x6f796e615f756e6d;
  local_d8 = (undefined **)CONCAT44(0x25,uVar5);
  if ((uVar8 & 1) == 0) {
    pcVar3 = "mnu_anyone_rule_edit_item_help_off";
  }
  else {
    pcVar3 = "mnu_anyone_rule_edit_item_help_on";
  }
  FUN_710377a280((long)&local_90,(byte *)pcVar3,1);
LAB_7101ca1d38:
  uVar8 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  return;
}

