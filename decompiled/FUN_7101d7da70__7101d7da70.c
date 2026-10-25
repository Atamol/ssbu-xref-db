// addr:      7101d7da70
// offset:    0x1d7da70
// name:      FUN_7101d7da70
// mangled:   
// signature: undefined __cdecl FUN_7101d7da70(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d7da70(long param_1,undefined4 param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *extraout_x1_04;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  undefined4 uVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  byte ***local_1a0;
  undefined2 local_198;
  undefined4 local_196;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  ppppbVar8 = &local_1a0;
  ppppbVar9 = &local_1a0;
  ppppbVar10 = &local_1a0;
  plVar22 = *(long **)(param_1 + 0x80);
  *(undefined4 *)(plVar22 + 0x5f) = param_2;
  lVar23 = *param_3;
  plVar22[0x61] = param_3[1];
  plVar22[0x60] = lVar23;
  lVar23 = param_3[2];
  lVar16 = param_3[3];
  lVar21 = param_3[4];
  *(char *)(plVar22 + 0x65) = (char)param_3[5];
  plVar22[100] = lVar21;
  plVar22[99] = lVar16;
  plVar22[0x62] = lVar23;
  lVar23 = param_3[6];
  lVar16 = param_3[7];
  *(int *)(plVar22 + 0x68) = (int)param_3[8];
  plVar22[0x67] = lVar16;
  plVar22[0x66] = lVar23;
  if (plVar22 + 0x60 != param_3) {
    FUN_7101d71ea0(plVar22 + 0x69,(void *)param_3[9],(long ****)param_3[10],param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101796d70((uint *)(plVar22 + 0x6c),(ushort *)(param_3 + 0xd));
    plVar22[0x73] = param_3[0x13];
    FUN_710184cdd0(plVar22 + 0x74,(void *)param_3[0x14],(long ****)param_3[0x15],param_4,param_5,
                   param_6,param_7,param_8);
    param_2 = (undefined4)plVar22[0x5f];
  }
  lVar23 = param_3[0x17];
  *(undefined1 *)(plVar22 + 0x7e) = 0;
  *(undefined4 *)(plVar22 + 0x78) = 0xffffffff;
  plVar22[0x7c] = plVar22[0x7b];
  *(char *)(plVar22 + 0x77) = (char)lVar23;
  plVar22[0x7f] = -0x2600010000000000;
  plVar22[0x80] = -0x2600010000000000;
  switch(param_2) {
  default:
    *(undefined4 *)(plVar22 + 0x4a) = 0;
    goto LAB_7101d7db84;
  case 1:
    uVar12 = 1;
    break;
  case 2:
    uVar12 = 2;
  }
  *(undefined4 *)(plVar22 + 0x4a) = uVar12;
LAB_7101d7db84:
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar3 = DAT_71053050f0;
  uVar2 = *(uint *)(plVar22 + 0x4a);
  if (2 < uVar2) goto LAB_7101d7e3a8;
  plVar19 = *(long **)plVar22[(ulong)uVar2 + 0x47] + 1;
  FUN_71037760f0(**(long **)plVar22[(ulong)uVar2 + 0x47],0);
  uVar1 = 0x500015;
  if (iVar3 != 0x4090000) {
    uVar1 = 0x1015;
  }
  iVar17 = 9;
  if (iVar3 != 0x4090000) {
    iVar17 = 0;
  }
  FUN_7103775dc0(*(long **)plVar22[(ulong)uVar2 + 0x47],iVar17,(long ****)(ulong)uVar1,param_4,
                 param_5,param_6,param_7,param_8);
  pppplVar11 = (long ****)(ulong)*(byte *)((long)plVar22 + 0x31d);
  *(char *)((long)plVar22 + 0x296) = (char)plVar22[100];
  FUN_7101d7c1b0((long ****)(plVar22 + 0x4b),plVar19,(byte ****)"scroll",(int)plVar22[0x5f],
                 *(byte *)((long)plVar22 + 0x31d),param_6,param_7,param_8);
  iVar3 = 0;
  *(undefined1 *)((long)plVar22 + 0x295) = 0;
  switch((int)plVar22[0x4e]) {
  case 0:
  case 4:
    plVar13 = (long *)plVar22[0x4d];
    plVar18 = plVar13 + 1;
    lVar23 = 0x30;
    break;
  case 1:
    plVar13 = (long *)(plVar22[0x4d] + 0x18);
    plVar18 = (long *)(plVar22[0x4d] + 0x20);
    lVar23 = 0x58;
    break;
  case 2:
    plVar13 = (long *)(plVar22[0x4d] + 0x30);
    plVar18 = (long *)(plVar22[0x4d] + 0x38);
    lVar23 = 200;
    break;
  default:
    goto switchD_7101d7dc34_caseD_3;
  }
  iVar3 = 0;
  if (lVar23 != 0) {
    iVar3 = (int)((*plVar18 - *plVar13) / lVar23);
  }
switchD_7101d7dc34_caseD_3:
  *(int *)(plVar22 + 0x50) = iVar3;
  plVar18 = plVar22 + 0x4f;
  uVar2 = (**(code **)(*(long *)plVar22[0x4f] + 0x78))();
  FUN_7103783690(plVar18,iVar3);
  FUN_7103783c10(plVar18,0,0,1,pppplVar11,param_6,param_7,param_8);
  (**(code **)(*(long *)plVar22[0x4f] + 0x70))((long *)plVar22[0x4f],uVar2 & 1);
  pcVar6 = "scroll_00";
  ppppbVar7 = (byte ****)(ulong)*(uint *)(plVar22 + 0x5f);
  pppplVar11 = (long ****)(ulong)*(byte *)((long)plVar22 + 0x31d);
  *(int *)((long)plVar22 + 0x284) = (int)plVar22[0x61];
  *(undefined4 *)(plVar22 + 0x51) = *(undefined4 *)((long)plVar22 + 0x314);
  *(int *)((long)plVar22 + 0x28c) = (int)plVar22[99];
  FUN_7101d7c1b0((long ****)(plVar22 + 0x53),plVar19,(byte ****)"scroll_00",
                 *(uint *)(plVar22 + 0x5f),*(byte *)((long)plVar22 + 0x31d),param_6,param_7,param_8)
  ;
  *(int *)((long)plVar22 + 0x2c4) = (int)plVar22[0x61];
  iVar3 = (int)plVar22[0x5f];
  *(int *)((long)plVar22 + 0x2cc) = (int)plVar22[99];
  *(undefined4 *)(plVar22 + 0x5b) = 0;
  *(undefined2 *)((long)plVar22 + 0x2dc) = 0;
  *(undefined4 *)(plVar22 + 0x59) = *(undefined4 *)((long)plVar22 + 0x314);
  if (iVar3 == 2) {
    *(undefined1 *)(plVar22 + 0x5a) = 1;
  }
  if (2 < *(uint *)(plVar22 + 0x4a)) goto LAB_7101d7e3a8;
  lVar23 = *(long *)plVar22[(ulong)*(uint *)(plVar22 + 0x4a) + 0x47];
  local_198 = 0x101;
  local_1a0 = (byte ***)0x0;
  local_192 = 0;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  puVar4 = (undefined8 *)(lVar23 + 8);
  local_190 = 1;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_196 = 1;
  if (iVar3 == 4) {
    FUN_7103770b30(plVar22 + 0x5c,puVar4,(long ****)"selector_0",&local_1a0,pppplVar11,param_6,
                   param_7,param_8);
    FUN_71037717d0(plVar22 + 0x5c,0,"set_parts_keyhelp_00",ppppbVar10,pppplVar11,param_6,param_7,
                   param_8);
    pcVar6 = (char *)0x6;
    ppppbVar7 = (byte ****)0x0;
    FUN_7103771930(plVar22[0x5c],0,(long ****)0x6,(byte ****)0x0,pppplVar11,param_6,param_7,param_8)
    ;
    (**(code **)(*(long *)plVar22[0x5c] + 0x60))((long *)plVar22[0x5c],1);
    (**(code **)(*(long *)plVar22[0x5c] + 0x70))((long *)plVar22[0x5c],1);
    lVar23 = *(long *)(lVar23 + 0x10);
    pcVar5 = "key_01_off";
LAB_7101d7dfb0:
    FUN_7103778300(0x3f800000,lVar23,(long)pcVar5);
    puVar4 = extraout_x1;
  }
  else {
    if (iVar3 == 1) {
      plVar19 = plVar22 + 0x5c;
      FUN_7103770b30(plVar19,puVar4,(long ****)"selector_0",&local_1a0,pppplVar11,param_6,param_7,
                     param_8);
      FUN_71037717d0(plVar19,3,"set_parts_keyhelp_02",ppppbVar9,pppplVar11,param_6,param_7,param_8);
      FUN_71037717d0(plVar19,4,"set_parts_keyhelp_00",ppppbVar9,pppplVar11,param_6,param_7,param_8);
      FUN_71037717d0(plVar19,2,"set_parts_keyhelp_01",ppppbVar9,pppplVar11,param_6,param_7,param_8);
      FUN_7103771930(plVar22[0x5c],3,(long ****)&DAT_00000009,(byte ****)0x0,pppplVar11,param_6,
                     param_7,param_8);
      FUN_7103771930(plVar22[0x5c],4,(long ****)&DAT_00000009,(byte ****)0x0,pppplVar11,param_6,
                     param_7,param_8);
      pcVar6 = &DAT_00000008;
      ppppbVar7 = (byte ****)0x0;
      FUN_7103771930(plVar22[0x5c],2,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar11,param_6,
                     param_7,param_8);
      (**(code **)(*(long *)plVar22[0x5c] + 0x60))((long *)plVar22[0x5c],1);
      (**(code **)(*(long *)plVar22[0x5c] + 0x70))((long *)plVar22[0x5c],1);
      lVar23 = *(long *)(lVar23 + 0x10);
      pcVar5 = "keyhelp_off";
      if (*(long *)(*plVar22 + 0x20) != *(long *)(*plVar22 + 0x18)) {
        pcVar5 = "keyhelp_on";
      }
      goto LAB_7101d7dfb0;
    }
    if (iVar3 == 0) {
      plVar19 = plVar22 + 0x5c;
      FUN_7103770b30(plVar19,puVar4,(long ****)"selector_0",&local_1a0,pppplVar11,param_6,param_7,
                     param_8);
      FUN_71037717d0(plVar19,0,"set_parts_keyhelp_00",ppppbVar8,pppplVar11,param_6,param_7,param_8);
      FUN_71037717d0(plVar19,1,"set_parts_keyhelp_01",ppppbVar8,pppplVar11,param_6,param_7,param_8);
      FUN_7103771930(plVar22[0x5c],0,(long ****)0x6,(byte ****)0x0,pppplVar11,param_6,param_7,
                     param_8);
      pcVar6 = &DAT_00000007;
      ppppbVar7 = (byte ****)0x0;
      FUN_7103771930(plVar22[0x5c],1,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar11,param_6,
                     param_7,param_8);
      (**(code **)(*(long *)plVar22[0x5c] + 0x60))((long *)plVar22[0x5c],1);
      (**(code **)(*(long *)plVar22[0x5c] + 0x70))((long *)plVar22[0x5c],1);
      lVar23 = *(long *)(lVar23 + 0x10);
      pcVar5 = "key_01_on";
      goto LAB_7101d7dfb0;
    }
  }
  if (alStack_b0 == local_90) {
    pcVar14 = *(code **)(*local_90 + 0x20);
LAB_7101d7dfe4:
    (*pcVar14)();
    puVar4 = extraout_x1_00;
  }
  else if (local_90 != (long *)0x0) {
    pcVar14 = *(code **)(*local_90 + 0x28);
    goto LAB_7101d7dfe4;
  }
  if (alStack_e0 == local_c0) {
    pcVar14 = *(code **)(*local_c0 + 0x20);
LAB_7101d7e014:
    (*pcVar14)();
    puVar4 = extraout_x1_01;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101d7e014;
  }
  if (alStack_110 == local_f0) {
    pcVar14 = *(code **)(*local_f0 + 0x20);
LAB_7101d7e044:
    (*pcVar14)();
    puVar4 = extraout_x1_02;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101d7e044;
  }
  if (alStack_140 == local_120) {
    pcVar14 = *(code **)(*local_120 + 0x20);
LAB_7101d7e074:
    (*pcVar14)();
    puVar4 = extraout_x1_03;
  }
  else if (local_120 != (long *)0x0) {
    pcVar14 = *(code **)(*local_120 + 0x28);
    goto LAB_7101d7e074;
  }
  if (alStack_170 == local_150) {
    pcVar14 = *(code **)(*local_150 + 0x20);
LAB_7101d7e0a4:
    (*pcVar14)();
    puVar4 = extraout_x1_04;
  }
  else if (local_150 != (long *)0x0) {
    pcVar14 = *(code **)(*local_150 + 0x28);
    goto LAB_7101d7e0a4;
  }
  FUN_7101d7a1f0(plVar22,puVar4,(long *********)pcVar6,ppppbVar7,pppplVar11,param_6,param_7,param_8)
  ;
  if (2 < *(uint *)(plVar22 + 0x4a)) {
LAB_7101d7e3a8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(uint *)(plVar22 + 0x5f) < 5) {
    lVar23 = *(long *)plVar22[(ulong)*(uint *)(plVar22 + 0x4a) + 0x47];
    switch(*(uint *)(plVar22 + 0x5f)) {
    default:
      lVar23 = *(long *)(lVar23 + 0x10);
      pcVar5 = "ser_list";
      break;
    case 1:
      lVar23 = *(long *)(lVar23 + 0x10);
      pcVar5 = "ser_on";
      break;
    case 2:
      lVar23 = *(long *)(lVar23 + 0x10);
      pcVar5 = "chara_list";
      break;
    case 3:
      goto switchD_7101d7e0e4_caseD_3;
    }
    FUN_7103778300(0x3f800000,lVar23,(long)pcVar5);
  }
switchD_7101d7e0e4_caseD_3:
  FUN_7101d79600((long)plVar22,0,(long ****)pcVar6,ppppbVar7,pppplVar11,param_6,param_7,param_8);
  FUN_7101d79600((long)plVar22,1,(long ****)pcVar6,ppppbVar7,pppplVar11,param_6,param_7,param_8);
  if (*(char *)((long)plVar22 + 0x31c) == '\0') goto LAB_7101d7e2dc;
  (**(code **)(*(long *)plVar22[0x4f] + 0x60))((long *)plVar22[0x4f],0);
  FUN_7103783c10(plVar18,*(int *)((long)plVar22 + 0x30c),0,0,pppplVar11,param_6,param_7,param_8);
  uVar15 = (ulong)*(int *)((long)plVar22 + 0x30c);
  iVar3 = 0;
  lVar23 = plVar22[0x62];
  *(undefined2 *)((long)plVar22 + 0x2dc) = 0;
  *(int *)(plVar22 + 0x5b) = *(int *)((long)plVar22 + 0x30c);
  if (*(uint *)(plVar22 + 0x56) < 5) {
    plVar19 = (long *)plVar22[0x55];
    switch(*(uint *)(plVar22 + 0x56)) {
    default:
      uVar20 = (plVar19[1] - *plVar19 >> 4) * -0x5555555555555555;
      if (uVar15 <= uVar20 && uVar20 - uVar15 != 0) {
        lVar21 = *plVar19 + uVar15 * 0x30;
        lVar16 = *(long *)(lVar21 + 8);
        lVar21 = *(long *)(lVar21 + 0x10);
        goto LAB_7101d7e244;
      }
LAB_7101d7e25c:
      iVar3 = 0;
      break;
    case 1:
      uVar20 = (plVar19[4] - plVar19[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
      if (uVar20 < uVar15 || uVar20 - uVar15 == 0) goto LAB_7101d7e25c;
      lVar21 = plVar19[3] + uVar15 * 0x58;
      lVar16 = *(long *)(lVar21 + 0x38);
      lVar21 = *(long *)(lVar21 + 0x40);
LAB_7101d7e244:
      iVar3 = (int)((ulong)(lVar21 - lVar16) >> 3) * -0x55555555;
      break;
    case 2:
      uVar20 = (plVar19[7] - plVar19[6] >> 3) * -0x70a3d70a3d70a3d7;
      if (uVar20 < uVar15 || uVar20 - uVar15 == 0) goto LAB_7101d7e25c;
      lVar16 = plVar19[6] + uVar15 * 200;
      iVar3 = (int)((ulong)(*(long *)(lVar16 + 0xb0) - *(long *)(lVar16 + 0xa8)) >> 4);
      break;
    case 3:
      break;
    }
  }
  *(int *)(plVar22 + 0x58) = iVar3;
  plVar19 = plVar22 + 0x57;
  uVar2 = (**(code **)(*(long *)plVar22[0x57] + 0x78))();
  FUN_7103783690(plVar19,iVar3);
  FUN_7103783c10(plVar19,(int)lVar23,0,1,pppplVar11,param_6,param_7,param_8);
  (**(code **)(*(long *)plVar22[0x57] + 0x70))((long *)plVar22[0x57],uVar2 & 1);
  *(undefined1 *)((long)plVar22 + 0x2dc) = 1;
  (**(code **)(plVar22[0x53] + 0xe0))(plVar22 + 0x53);
  FUN_7103783c10(plVar19,(int)plVar22[0x62],0,0,pppplVar11,param_6,param_7,param_8);
LAB_7101d7e2dc:
  plVar22[2] = 0;
  plVar22[3] = 0;
  *(undefined8 *)((long)plVar22 + 0x214) = 0;
  *(undefined8 *)((long)plVar22 + 0x20c) = 0;
  *(undefined8 *)((long)plVar22 + 0x204) = 0;
  *(undefined8 *)((long)plVar22 + 0x1fc) = 0;
  *(undefined8 *)((long)plVar22 + 500) = 0;
  *(undefined8 *)((long)plVar22 + 0x1ec) = 0;
  *(undefined8 *)((long)plVar22 + 0x1e4) = 0;
  *(undefined4 *)((long)plVar22 + 0x21c) = 0;
  *(undefined8 *)((long)plVar22 + 0x1dc) = 0;
  *(undefined8 *)((long)plVar22 + 0x1d4) = 0;
  plVar22[0x44] = 0xffffffff;
  *(undefined4 *)(plVar22 + 0x45) = 0xffffffff;
  *(undefined1 *)((long)plVar22 + 0x22c) = 0;
  *(undefined4 *)(plVar22 + 0x3a) = 1;
  FUN_7101d7d9a0(plVar22 + 1);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

