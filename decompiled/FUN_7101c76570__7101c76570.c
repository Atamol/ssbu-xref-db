// addr:      7101c76570
// offset:    0x1c76570
// name:      FUN_7101c76570
// mangled:   
// signature: undefined __cdecl FUN_7101c76570(undefined8 * param_1, byte param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c76570(undefined8 *param_1,byte param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  long ********pppppppplVar10;
  long *plVar11;
  undefined **local_a0;
  undefined8 *local_98;
  undefined **local_90;
  undefined8 *local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  long ********local_60;
  undefined4 local_54;
  
  uVar7 = (ulong)param_2;
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pppppppplVar10 = param_3[5];
  plVar11 = (long *)*param_1;
  puVar1 = param_1 + uVar7 * 0x3c + 5;
  ppppppppplVar9 = param_3;
  FUN_7103776640(&local_70,(long)puVar1,(byte ****)"set_rep_icn_fighter",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_icn_profile",ppppppppplVar9,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_70,(long ****)"set_icn_profile_bg",ppppppppplVar9,param_4,
                 param_5,param_6,param_7,param_8);
  plVar11 = FUN_7103240430(plVar11,(ulong)pppppppplVar10,(long ****)ppppppppplVar9,param_4,param_5,
                           param_6,param_7,param_8);
  FUN_7103778b80(local_78,(long)plVar11,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
  local_a0 = &PTR_FUN_710523d9a8;
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,param_4,param_5,param_6,param_7,
                          param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ********)&SUB_00000020;
      ppppppppplVar9 = &local_60;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar5 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar9,param_4,param_5,param_6,
                                  param_7,param_8), puVar4 != (undefined8 *)0x0))
      goto LAB_7101c7666c;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101c7666c:
  puVar3 = local_88;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *puVar4 = *local_88;
  puVar4[1] = local_88[1];
  puVar4[2] = local_88[2];
  puVar4[3] = local_88[3];
  local_98 = puVar4;
  FUN_710337d450((long)&local_a0,(ulong)pppppppplVar10);
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar4);
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  uVar5 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  uVar5 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar5 != 0) {
    uVar6 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_70,(long)puVar1,(long ****)"set_txt_name",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  uVar5 = local_68;
  if (*(int *)(param_3 + 1) < 1) {
    if (*(long **)(local_68 + 0x10) != (long *)0x0) {
      ppppppppplVar9 = (long *********)0x0;
      param_4 = (byte ****)0x0;
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_68 + 0x10),(ushort *)&local_80,0,0);
    }
    FUN_7103778300(0x3f800000,param_1[uVar7 * 0x3c + 6],0x710438d2e3);
  }
  else {
    param_4 = (byte ****)((long)param_3 + 0xc);
    ppppppppplVar9 = (long *********)0x1;
    FUN_710377a280((long)&local_70,(byte *)"mnu_online_room_inside_account_nam",1);
    FUN_7103778300(0x3f800000,param_1[uVar7 * 0x3c + 6],0x710425fcde);
    uVar5 = local_68;
  }
  local_68 = 0;
  local_70 = &PTR_FUN_710523d9a8;
  if (uVar5 != 0) {
    local_68 = 0;
    local_70 = &PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar5);
  }
  cVar2 = *(char *)((long)param_3 + 0x1e2);
  pcVar8 = "medal_type_other";
  if (cVar2 != '\0') {
    pcVar8 = "medal_type_player";
  }
  FUN_7103778300(0x3f800000,param_1[uVar7 * 0x3c + 6],(long)pcVar8);
  *(char *)((long)param_1 + uVar7 * 0x1e0 + 0x19c) = cVar2;
  FUN_71037780e0(&local_70,(long)puVar1,(long ****)"balloon_off",ppppppppplVar9,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377b140((long)&local_70);
  uVar5 = local_68;
  *(undefined4 *)(param_1 + uVar7 * 0x3c + 0x34) = 0;
  local_70 = &PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  pcVar8 = "medal_fp_off";
  if ((*(int *)(param_3 + 8) == 2) && (*(char *)(param_1 + 0x1e5) != '\0')) {
    pcVar8 = "medal_fp_on";
  }
  FUN_7103778300(0x3f800000,param_1[uVar7 * 0x3c + 6],(long)pcVar8);
  return;
}

