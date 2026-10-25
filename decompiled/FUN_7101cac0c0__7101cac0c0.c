// addr:      7101cac0c0
// offset:    0x1cac0c0
// name:      FUN_7101cac0c0
// mangled:   
// signature: undefined __cdecl FUN_7101cac0c0(long param_1, undefined1 * param_2, uint * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cac0c0(long param_1,undefined1 *param_2,uint *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  ulong uVar6;
  undefined1 *puVar7;
  long *********ppppppppplVar8;
  long *********ppppppppplVar9;
  uint uVar10;
  long *********ppppppppplVar11;
  long ********local_280;
  ulong local_278;
  undefined2 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined8 local_228;
  undefined8 local_220;
  undefined5 uStack_218;
  undefined3 local_213;
  undefined5 uStack_210;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined2 local_c4;
  undefined1 *local_68;
  
  ppppppppplVar9 = &local_280;
  ppppppppplVar8 = &local_280;
  if ((*(ulong *)(param_3 + 2) == 0) ||
     (uVar2 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_3 + 2),*param_3),
     uVar2 == 0xffff)) {
switchD_7101cac198_default:
    ppppppppplVar9 = (long *********)0x0;
    ppppppppplVar8 = (long *********)param_2;
    bVar1 = FUN_7101cf2800(*(long **********)(param_1 + 0x178),(long)param_3,(long)param_2,0,param_5
                           ,param_6,param_7,param_8);
    uVar5 = extraout_x1_00;
    goto joined_r0x007101cac1cc;
  }
  uVar6 = 0;
  local_278 = local_278 & 0xffffffffffffff00;
  local_280 = (long ********)0x0;
  if (uVar2 < 4) {
    uVar6 = (ulong)*(uint *)(&DAT_710446a5c0 + (long)(short)uVar2 * 4);
  }
  FUN_710062dc20((uint *)&local_280,"mode_%02d");
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)&local_278);
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71042e73f1);
  switch(uVar2) {
  case 0:
    ppppppppplVar11 = *(long **********)(param_1 + 0x178);
    FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710433a322);
    FUN_7103776910(&local_280,(long)param_2,(long ****)"set_rep_mfshot",uVar6,param_4,param_5,
                   param_6,param_7,param_8);
    puVar7 = *(undefined1 **)(param_3 + 2);
    uVar4 = FUN_710334fb10(*(long *)(DAT_710532f8f8 + 8),ppppppppplVar11,(ulong)puVar7,&local_280,
                           param_5,param_6,param_7,param_8);
    uVar6 = local_278;
    local_280 = (long ********)&PTR_FUN_710523d9a8;
    local_278 = 0;
    uVar5 = extraout_x1_01;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
      uVar5 = extraout_x1_02;
    }
    if ((int)uVar4 != 3) goto LAB_7101cac1d8;
    local_280 = (long ********)0x0;
    local_278 = 0;
    uStack_210 = 0;
    local_d8 = 0x13ffff0000000000;
    local_d0 = 0x5affff0000000000;
    local_220 = 0;
    uStack_218 = 0;
    local_213 = 0;
    local_26c = 0;
    local_268 = 0;
    local_270 = 0;
    local_228 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_c4 = 0;
    local_c8 = 0;
    local_68 = &DAT_c1ffff0000000000;
    uVar4 = FUN_710334f120(*(long *)(DAT_710532f8f8 + 8),(int *)param_3,&local_280);
    uVar5 = extraout_x1_03;
    if ((int)uVar4 == 3) {
      uVar10 = 0;
      if ((byte)local_c8 < 0xc) {
        uVar10 = local_c8 & 0xff;
      }
      ppppppppplVar8 = (long *********)(ulong)uVar10;
      FUN_7103778430((long)param_2,"mf_clr_%02d",ppppppppplVar8,ppppppppplVar9,param_5,param_6,
                     param_7,param_8);
      uVar5 = extraout_x1_04;
    }
    goto LAB_7101cac1d0;
  case 1:
    ppppppppplVar9 = (long *********)0x0;
    ppppppppplVar8 = (long *********)param_2;
    bVar1 = FUN_7101cf23e0(*(long **********)(param_1 + 0x178),(long)param_3,(long)param_2,0,param_5
                           ,param_6,param_7,param_8);
    uVar5 = extraout_x1_05;
    break;
  case 2:
  case 3:
    ppppppppplVar9 = (long *********)0x0;
    ppppppppplVar8 = (long *********)param_2;
    bVar1 = FUN_7101cf2530(*(long **********)(param_1 + 0x178),param_3,(long)param_2,0,param_5,
                           param_6,param_7,param_8);
    uVar5 = extraout_x1;
    break;
  default:
    goto switchD_7101cac198_default;
  }
joined_r0x007101cac1cc:
  puVar7 = (undefined1 *)ppppppppplVar8;
  if (bVar1) {
LAB_7101cac1d0:
    *(undefined4 *)(param_1 + 0x26b0) = 1;
    puVar7 = (undefined1 *)ppppppppplVar8;
  }
LAB_7101cac1d8:
  if (*(int *)(param_1 + 0x26b0) == 1) {
    FUN_71037780e0(&local_280,(long)param_2,(long ****)"turn_on",puVar7,ppppppppplVar9,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_278;
    if (*(long **)(local_278 + 8) == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(**(long **)(local_278 + 8) + 0x148))();
      uVar3 = uVar3 & 0xffffffff;
    }
    local_280 = (long ********)&PTR_FUN_710523d9e8;
    local_278 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    if ((uVar3 & 1) != 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x7104433949);
    }
  }
  else {
    FUN_7101cf2220((long)param_2,uVar5,puVar7,ppppppppplVar9,param_5,param_6,param_7,param_8);
  }
  return;
}

