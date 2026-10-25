// addr:      7101d88b10
// offset:    0x1d88b10
// name:      FUN_7101d88b10
// mangled:   
// signature: undefined __cdecl FUN_7101d88b10(undefined8 * param_1, int param_2, undefined2 param_3, byte param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d88b10(undefined8 *param_1,int param_2,undefined2 param_3,byte param_4,long ****param_5
                   ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  byte bVar3;
  bool bVar4;
  undefined8 extraout_x1;
  ulong *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  long ****pppplVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  code *pcVar17;
  long lVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long ********pppppppplStack_2b0;
  undefined1 local_2a6;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long alStack_1f0 [4];
  long *local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  undefined8 local_180;
  byte local_178 [16];
  undefined1 *local_168;
  undefined4 local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined4 local_60;
  
  ppppppppplVar8 = &pppppppplStack_2b0;
  ppppppppplVar10 = &pppppppplStack_2b0;
  ppppppppplVar11 = &pppppppplStack_2b0;
  *(byte *)((long)param_1 + 0x355) = param_4 & 1;
  param_1[0x69] = 0x52ffff0000000000;
  *(undefined2 *)((long)param_1 + 0x15c) = param_3;
  *(byte *)((long)param_1 + 0x354) = (byte)param_5 & 1;
  if (*(char *)(param_1[1] + 0x78) == '\0') {
    *(undefined4 *)(param_1[1] + 0x68) = 3;
  }
  pppplVar12 = param_5;
  uVar13 = param_6;
  FUN_71032cbf30(param_1 + 0x1f,*(long *)*param_1,(ulong *)&DAT_7104545850,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  FUN_71032cbf30(param_1 + 0x20,*(long *)*param_1,(ulong *)&DAT_7104545858,(byte ****)0x1,pppplVar12
                 ,uVar13,param_7,param_8);
  if ((param_6 & 1) == 0) {
    puVar5 = (ulong *)&DAT_7104545868;
  }
  else {
    puVar5 = (ulong *)&DAT_7104545860;
  }
  FUN_71032cbf30(param_1 + 0x21,*(long *)*param_1,puVar5,(byte ****)0x1,pppplVar12,uVar13,param_7,
                 param_8);
  lVar14 = *(long *)param_1[0x1f];
  if (param_1 + 0x22 != (undefined8 *)(lVar14 + 8)) {
    *(undefined8 *)param_1[0x23] = **(undefined8 **)(lVar14 + 0x10);
    *(undefined8 *)(param_1[0x23] + 8) = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 8);
    lVar21 = *(long *)(lVar14 + 0x10);
    lVar14 = param_1[0x23];
    if (lVar14 != lVar21) {
      **(undefined8 **)(lVar14 + 0x18) = **(undefined8 **)(lVar21 + 0x18);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18);
    }
  }
  lVar14 = *(long *)param_1[0x20];
  if (param_1 + 0x24 != (undefined8 *)(lVar14 + 8)) {
    *(undefined8 *)param_1[0x25] = **(undefined8 **)(lVar14 + 0x10);
    *(undefined8 *)(param_1[0x25] + 8) = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 8);
    lVar21 = *(long *)(lVar14 + 0x10);
    lVar14 = param_1[0x25];
    if (lVar14 != lVar21) {
      **(undefined8 **)(lVar14 + 0x18) = **(undefined8 **)(lVar21 + 0x18);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18);
    }
  }
  lVar14 = *(long *)param_1[0x21];
  puVar1 = param_1 + 0x26;
  if (puVar1 != (undefined8 *)(lVar14 + 8)) {
    *(undefined8 *)param_1[0x27] = **(undefined8 **)(lVar14 + 0x10);
    *(undefined8 *)(param_1[0x27] + 8) = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 8);
    lVar21 = *(long *)(lVar14 + 0x10);
    lVar14 = param_1[0x27];
    if (lVar14 != lVar21) {
      **(undefined8 **)(lVar14 + 0x18) = **(undefined8 **)(lVar21 + 0x18);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18);
    }
  }
  uVar15 = 0;
  pcVar7 = "on_plt_seach_lyt_00";
  if (((ulong)param_5 & 1) == 0) {
    pcVar7 = "off_plt_seach_lyt_00";
  }
  while( true ) {
    bVar3 = pcVar7[uVar15];
    if (bVar3 == 0) break;
    local_178[uVar15] = bVar3;
    if (0x3e < (int)uVar15 + 1U) {
      uVar15 = (ulong)((int)uVar15 + 1);
      break;
    }
    bVar3 = (pcVar7 + uVar15)[1];
    if (bVar3 == 0) {
      uVar15 = uVar15 + 1;
      break;
    }
    local_178[uVar15 + 1] = bVar3;
    uVar15 = uVar15 + 2;
  }
  uVar20 = 0x811c9dc5;
  local_178[uVar15 & 0xffffffff] = 0;
  uVar23 = (uint)local_178[0];
  if (local_178[0] != 0) {
    pbVar16 = local_178;
    do {
      pbVar16 = pbVar16 + 1;
      uVar20 = uVar20 * 0x89 ^ uVar23;
      uVar23 = (uint)*pbVar16;
    } while (uVar23 != 0);
  }
  local_180 = CONCAT44((int)uVar15,uVar20);
  FUN_7103778300(0x3f800000,param_1[0x23],(long)local_178);
  FUN_7103778300(0x3f800000,param_1[0x25],(long)local_178);
  FUN_7103778300(0x3f800000,param_1[0x27],(long)local_178);
  lVar14 = **(long **)param_1[0x21];
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x18) = 0x8800108;
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x1c) = 0x2200202;
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x20) = 0x90;
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0xe0) = 0xaa0039a;
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0xdc) = 0xaa0039a;
  if (((param_2 == 1) && (*(char *)((long)param_1 + 0x355) != '\0')) &&
     (*(char *)((long)param_1 + 0x354) != '\0')) {
    *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x24) = 0x40010;
  }
  local_178[0] = 1;
  local_178[1] = 1;
  local_180 = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[4] = 0;
  local_178[5] = 0;
  local_178[6] = 0;
  local_178[7] = 0;
  local_178[8] = 1;
  local_178[9] = 0;
  local_178[10] = 0;
  local_178[0xb] = 0;
  local_178[0xc] = 1;
  local_178[0xd] = 0;
  local_178[0xe] = 1;
  local_168 = &DAT_41f0000000000000;
  local_160 = 0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_70 = (long *)0x0;
  local_60 = 0;
  FUN_7101989b70(&pppppppplStack_2b0,&local_180);
  local_2a6 = 1;
  plVar2 = param_1 + 0x28;
  FUN_7103770b30(plVar2,puVar1,(long ****)"selector_0",(byte ****)&pppppppplStack_2b0,pppplVar12,
                 uVar13,param_7,param_8);
  FUN_71037717d0(plVar2,0,"set_parts_btn_arrow_l",ppppppppplVar8,pppplVar12,uVar13,param_7,param_8);
  lVar14 = *(long *)(param_1[0x28] + 0x1b8);
  if (lVar14 != 0) {
    lVar21 = param_1[0x28] + 0x1b8;
    lVar18 = lVar21;
    lVar24 = lVar14;
    do {
      bVar4 = *(int *)(lVar24 + 0x20) < 0;
      if (!bVar4) {
        lVar18 = lVar24;
      }
      lVar24 = *(long *)(lVar24 + (ulong)bVar4 * 8);
    } while (lVar24 != 0);
    if (((lVar18 != lVar21) && (*(int *)(lVar18 + 0x20) < 1)) &&
       (plVar28 = *(long **)(lVar18 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar21 = *plVar2 + 0x1b8;
      lVar14 = *(long *)(*plVar2 + 0x1b8);
    }
    lVar18 = lVar21;
    if (lVar14 != 0) {
      do {
        bVar4 = *(int *)(lVar14 + 0x20) < 0;
        if (!bVar4) {
          lVar18 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)bVar4 * 8);
      } while (lVar14 != 0);
      if (((lVar18 != lVar21) && (*(int *)(lVar18 + 0x20) < 1)) &&
         (plVar28 = *(long **)(lVar18 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_71037717d0(plVar2,1,"set_parts_btn_arrow_r",ppppppppplVar8,pppplVar12,uVar13,param_7,param_8);
  lVar14 = *plVar2;
  lVar21 = *(long *)(lVar14 + 0x1b8);
  if (lVar21 != 0) {
    lVar18 = lVar14 + 0x1b8;
    lVar24 = lVar18;
    lVar25 = lVar21;
    do {
      if (0 < *(int *)(lVar25 + 0x20)) {
        lVar24 = lVar25;
      }
      lVar25 = *(long *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x20) < 1) * 8);
    } while (lVar25 != 0);
    if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 2)) &&
       (plVar28 = *(long **)(lVar24 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar14 = *plVar2;
      lVar21 = *(long *)(lVar14 + 0x1b8);
      lVar18 = lVar14 + 0x1b8;
    }
    lVar24 = lVar18;
    if (lVar21 != 0) {
      do {
        if (0 < *(int *)(lVar21 + 0x20)) {
          lVar24 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 1) * 8);
      } while (lVar21 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 2)) &&
         (plVar28 = *(long **)(lVar24 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
        lVar14 = *plVar2;
      }
    }
  }
  FUN_7103771930(lVar14,0,(long ****)0x6,(byte ****)0x0,pppplVar12,uVar13,param_7,param_8);
  uVar6 = 7;
  ppppbVar9 = (byte ****)0x0;
  FUN_7103771930(param_1[0x28],1,(long ****)&DAT_00000007,(byte ****)0x0,pppplVar12,uVar13,param_7,
                 param_8);
  (**(code **)(*(long *)param_1[0x28] + 0x70))((long *)param_1[0x28],1);
  FUN_7101d89830((long)param_1,param_4 & 1,uVar6,ppppbVar9,pppplVar12,uVar13,param_7,param_8);
  if (alStack_1c0 == local_1a0) {
    pcVar17 = *(code **)(*local_1a0 + 0x20);
LAB_7101d891b0:
    (*pcVar17)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101d891b0;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar17 = *(code **)(*local_1d0 + 0x20);
LAB_7101d891e0:
    (*pcVar17)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1d0 + 0x28);
    goto LAB_7101d891e0;
  }
  if (alStack_220 == local_200) {
    pcVar17 = *(code **)(*local_200 + 0x20);
LAB_7101d89210:
    (*pcVar17)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar17 = *(code **)(*local_200 + 0x28);
    goto LAB_7101d89210;
  }
  if (alStack_250 == local_230) {
    pcVar17 = *(code **)(*local_230 + 0x20);
LAB_7101d89240:
    (*pcVar17)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar17 = *(code **)(*local_230 + 0x28);
    goto LAB_7101d89240;
  }
  if (alStack_280 == local_260) {
    pcVar17 = *(code **)(*local_260 + 0x20);
LAB_7101d89270:
    (*pcVar17)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar17 = *(code **)(*local_260 + 0x28);
    goto LAB_7101d89270;
  }
  FUN_7101989b70(&pppppppplStack_2b0,&local_180);
  plVar2 = param_1 + 0x29;
  local_2a6 = 1;
  FUN_7103770b30(plVar2,puVar1,(long ****)"selector_1",(byte ****)&pppppppplStack_2b0,pppplVar12,
                 uVar13,param_7,param_8);
  FUN_71037717d0(plVar2,0,"set_parts_btn_help_00",ppppppppplVar10,pppplVar12,uVar13,param_7,param_8)
  ;
  lVar14 = param_1[0x29];
  lVar21 = *(long *)(lVar14 + 0x1b8);
  if (lVar21 != 0) {
    lVar18 = lVar14 + 0x1b8;
    lVar24 = lVar18;
    lVar25 = lVar21;
    do {
      bVar4 = *(int *)(lVar25 + 0x20) < 0;
      if (!bVar4) {
        lVar24 = lVar25;
      }
      lVar25 = *(long *)(lVar25 + (ulong)bVar4 * 8);
    } while (lVar25 != 0);
    if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 1)) &&
       (plVar28 = *(long **)(lVar24 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar14 = *plVar2;
      lVar21 = *(long *)(lVar14 + 0x1b8);
      lVar18 = lVar14 + 0x1b8;
    }
    lVar24 = lVar18;
    if (lVar21 != 0) {
      do {
        bVar4 = *(int *)(lVar21 + 0x20) < 0;
        if (!bVar4) {
          lVar24 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)bVar4 * 8);
      } while (lVar21 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 1)) &&
         (plVar28 = *(long **)(lVar24 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
        lVar14 = *plVar2;
      }
    }
  }
  FUN_7103771930(lVar14,0,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar12,uVar13,param_7,param_8)
  ;
  (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,1);
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  if (alStack_1c0 == local_1a0) {
    pcVar17 = *(code **)(*local_1a0 + 0x20);
LAB_7101d8940c:
    (*pcVar17)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101d8940c;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar17 = *(code **)(*local_1d0 + 0x20);
LAB_7101d8943c:
    (*pcVar17)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1d0 + 0x28);
    goto LAB_7101d8943c;
  }
  if (alStack_220 == local_200) {
    pcVar17 = *(code **)(*local_200 + 0x20);
LAB_7101d8946c:
    (*pcVar17)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar17 = *(code **)(*local_200 + 0x28);
    goto LAB_7101d8946c;
  }
  if (alStack_250 == local_230) {
    pcVar17 = *(code **)(*local_230 + 0x20);
LAB_7101d8949c:
    (*pcVar17)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar17 = *(code **)(*local_230 + 0x28);
    goto LAB_7101d8949c;
  }
  if (alStack_280 == local_260) {
    pcVar17 = *(code **)(*local_260 + 0x20);
LAB_7101d894cc:
    (*pcVar17)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar17 = *(code **)(*local_260 + 0x28);
    goto LAB_7101d894cc;
  }
  FUN_7101989b70(&pppppppplStack_2b0,&local_180);
  plVar2 = param_1 + 0x2a;
  local_2a6 = 1;
  FUN_7103770b30(plVar2,puVar1,(long ****)"selector_2",(byte ****)&pppppppplStack_2b0,pppplVar12,
                 uVar13,param_7,param_8);
  pcVar7 = "set_parts_det_key_00";
  FUN_71037717d0(plVar2,0,"set_parts_det_key_00",ppppppppplVar11,pppplVar12,uVar13,param_7,param_8);
  plVar28 = (long *)param_1[0x2a];
  plVar19 = (long *)plVar28[0x37];
  if (plVar19 != (long *)0x0) {
    plVar22 = plVar28 + 0x37;
    plVar27 = plVar22;
    plVar26 = plVar19;
    do {
      bVar4 = (int)plVar26[4] < 0;
      if (!bVar4) {
        plVar27 = plVar26;
      }
      plVar26 = (long *)plVar26[bVar4];
    } while (plVar26 != (long *)0x0);
    if (((plVar27 != plVar22) && ((int)plVar27[4] < 1)) &&
       (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      pcVar7 = (char *)0x0;
      (**(code **)(*plVar27 + 0x388))(plVar27,0);
      plVar28 = (long *)*plVar2;
      plVar19 = (long *)plVar28[0x37];
      plVar22 = plVar28 + 0x37;
    }
    plVar27 = plVar22;
    if (plVar19 != (long *)0x0) {
      do {
        bVar4 = (int)plVar19[4] < 0;
        if (!bVar4) {
          plVar27 = plVar19;
        }
        plVar19 = (long *)plVar19[bVar4];
      } while (plVar19 != (long *)0x0);
      if (((plVar27 != plVar22) && ((int)plVar27[4] < 1)) &&
         (plVar19 = (long *)plVar27[5], plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x208))(plVar19,1);
        pcVar7 = (char *)0x0;
        (**(code **)(*plVar19 + 0x388))(plVar19,0);
        plVar28 = (long *)*plVar2;
      }
    }
  }
  (**(code **)(*plVar28 + 0x60))(plVar28,0);
  if (alStack_1c0 == local_1a0) {
    pcVar17 = *(code **)(*local_1a0 + 0x20);
LAB_7101d89640:
    (*pcVar17)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101d89640;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar17 = *(code **)(*local_1d0 + 0x20);
LAB_7101d89670:
    (*pcVar17)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_1d0 + 0x28);
    goto LAB_7101d89670;
  }
  if (alStack_220 == local_200) {
    pcVar17 = *(code **)(*local_200 + 0x20);
LAB_7101d896a0:
    (*pcVar17)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar17 = *(code **)(*local_200 + 0x28);
    goto LAB_7101d896a0;
  }
  if (alStack_250 == local_230) {
    pcVar17 = *(code **)(*local_230 + 0x20);
LAB_7101d896d0:
    (*pcVar17)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar17 = *(code **)(*local_230 + 0x28);
    goto LAB_7101d896d0;
  }
  if (alStack_280 == local_260) {
    pcVar17 = *(code **)(*local_260 + 0x20);
LAB_7101d89700:
    (*pcVar17)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar17 = *(code **)(*local_260 + 0x28);
    goto LAB_7101d89700;
  }
  FUN_7101d89940((long)param_1,param_2);
  FUN_7101d89d00(param_1,extraout_x1,pcVar7,ppppppppplVar11,pppplVar12,uVar13,param_7,param_8);
  if (alStack_90 == local_70) {
    pcVar17 = *(code **)(*local_70 + 0x20);
LAB_7101d89744:
    (*pcVar17)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar17 = *(code **)(*local_70 + 0x28);
    goto LAB_7101d89744;
  }
  if (alStack_c0 == local_a0) {
    pcVar17 = *(code **)(*local_a0 + 0x20);
LAB_7101d89774:
    (*pcVar17)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101d89774;
  }
  if (alStack_f0 == local_d0) {
    pcVar17 = *(code **)(*local_d0 + 0x20);
LAB_7101d897a4:
    (*pcVar17)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar17 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101d897a4;
  }
  if (alStack_120 == local_100) {
    pcVar17 = *(code **)(*local_100 + 0x20);
  }
  else {
    if (local_100 == (long *)0x0) goto LAB_7101d897d8;
    pcVar17 = *(code **)(*local_100 + 0x28);
  }
  (*pcVar17)();
LAB_7101d897d8:
  if (alStack_150 == local_130) {
    pcVar17 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) {
      return;
    }
    pcVar17 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar17)();
  return;
}

