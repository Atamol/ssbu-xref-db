// addr:      7101ddae90
// offset:    0x1ddae90
// name:      FUN_7101ddae90
// mangled:   
// signature: undefined __cdecl FUN_7101ddae90(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ddae90(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  undefined2 *puVar2;
  char *pcVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  byte *pbVar20;
  long lVar21;
  long ***local_f0;
  ulong local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  uint auStack_98 [2];
  undefined1 auStack_90 [64];
  undefined **local_50;
  ulong local_48;
  undefined4 local_34;
  
  pppplVar12 = &local_f0;
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) <= (ulong)(long)param_2) {
    return;
  }
  psVar1 = (short *)(*(long *)(param_1 + 8) + (long)param_2 * 4);
  pbVar20 = (byte *)(psVar1 + 1);
  sVar5 = *psVar1;
  if (sVar5 == -1) {
    return;
  }
  if (1999 < sVar5) {
    return;
  }
  lVar21 = *(long *)(DAT_710532f730 + 8);
  lVar15 = *(long *)(lVar21 + 0x1d8);
  if ((uint)((int)((ulong)(*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20)) >> 6) * -0x33333333)
      <= (uint)*(ushort *)(lVar15 + (long)(int)sVar5 * 2 + 0x60)) {
    return;
  }
  FUN_7103776640(&local_50,param_3,(byte ****)"set_parts_icon_base",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  sVar5 = *psVar1;
  uVar9 = 0;
  if ((sVar5 != -1) && (sVar5 < 2000)) {
    lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar17 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
    uVar4 = *(ushort *)(lVar15 + (long)(int)sVar5 * 2 + 0x60);
    uVar14 = (ulong)uVar4;
    if ((uint)uVar4 < (uint)uVar17) {
      puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar14 * 0x140);
      if (uVar17 < uVar14 || uVar17 - uVar14 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      if (*(char *)(puVar2 + 0x2f) == '\0') {
        if (2 < *(byte *)(puVar2 + 0x36) - 1) goto LAB_7101ddafd0;
        uVar9 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
      }
      else {
        uVar9 = 4;
      }
    }
    else {
LAB_7101ddafd0:
      uVar9 = 0;
    }
  }
  uVar10 = 0;
  FUN_710339dde0(auStack_98,uVar9,'\0');
  uVar14 = local_48;
  FUN_7103778300(0x3f800000,local_48,(long)auStack_90);
  lVar15 = *(long *)(lVar21 + 0x1d8);
  if ((long)*psVar1 == -1) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = (ulong)*(ushort *)(lVar15 + (long)*psVar1 * 2 + 0x60);
  }
  uVar18 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
  puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar17 * 0x140);
  if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
    puVar2 = &DAT_7105182b08;
  }
  uVar6 = 0x811c9dc5;
  switch(*(undefined1 *)(puVar2 + 0x34)) {
  case 0:
    uStack_dc = 10;
    uStack_d8 = 0x6f6e5f7373616c63;
    uVar19 = 99;
    local_d0 = CONCAT13(local_d0._3_1_,0x656e);
    pbVar16 = (byte *)((long)&uStack_d8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar19 != 0);
    break;
  case 1:
    uStack_dc = 10;
    uStack_d8 = 0x6f685f7373616c63;
    uVar19 = 99;
    local_d0 = CONCAT13(local_d0._3_1_,0x6570);
    pbVar16 = (byte *)((long)&uStack_d8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar19 != 0);
    break;
  case 2:
    uStack_dc = 9;
    uStack_d8 = 0x63615f7373616c63;
    local_d0 = CONCAT22(local_d0._2_2_,0x65);
    uVar19 = 99;
    pbVar16 = (byte *)((long)&uStack_d8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar19 != 0);
    break;
  case 3:
    uStack_dc = 0xc;
    uStack_d8 = 0x656c5f7373616c63;
    local_d0 = 0x646e6567;
    uVar19 = 99;
    local_cc = 0;
    pbVar16 = (byte *)((long)&uStack_d8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar19 != 0);
    break;
  default:
    uStack_dc = 10;
    uStack_d8 = 0x6f6e5f7373616c63;
    uVar19 = 99;
    local_d0 = CONCAT13(local_d0._3_1_,0x656e);
    pbVar16 = (byte *)((long)&uStack_d8 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar19;
      uVar19 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar19 != 0);
  }
  _local_e0 = CONCAT44(uStack_dc,uVar6);
  FUN_7103778300(0x3f800000,local_48,(long)&uStack_d8);
  FUN_7103776910(&local_f0,param_3,(long ****)"set_txt_num_base",uVar10,param_4,param_5,param_6,
                 param_7,param_8);
  ppppbVar13 = (byte ****)(ulong)*pbVar20;
  pppplVar11 = (long ****)0x1;
  FUN_710377a280((long)&local_f0,(byte *)"mnu_spirits_select_pedestal_n",1);
  uVar17 = local_e8;
  local_f0 = (long ***)&PTR_FUN_710523d9a8;
  local_e8 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  pcVar3 = "on_empty";
  if (*pbVar20 != 0) {
    pcVar3 = "off_empty";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar3);
  plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar11,ppppbVar13,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_f0 = (long ***)&DAT_00000008;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar17 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar12,ppppbVar13,param_5,param_6,param_7,
                                          param_8), plVar7 != (long *)0x0)) goto LAB_7101ddb2d4;
    }
    plVar7 = (long *)0x0;
  }
LAB_7101ddb2d4:
  *plVar7 = 0;
  lVar15 = *(long *)(*(long *)(param_3 + 8) + 8);
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) == 0)) {
    *plVar7 = 0;
  }
  else {
    plVar8 = (long *)FUN_7103796f20(*(long *)(lVar15 + 0x60),*(long *)(lVar15 + 0x18) + 0xb0);
    *plVar7 = (long)plVar8;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x1f8))(plVar8,*pbVar20 != 0);
      uVar17 = (**(code **)(*plVar8 + 0x200))(plVar8);
      if ((uVar17 & 1) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8);
        uVar6 = uVar6 ^ 1;
      }
      (**(code **)(*plVar8 + 0x388))(plVar8,uVar6 & 1,0);
    }
  }
  FUN_710392eb40((ulong)plVar7);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar14 != 0) {
    uVar17 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar14);
  }
  return;
}

