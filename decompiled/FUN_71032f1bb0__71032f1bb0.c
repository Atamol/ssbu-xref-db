// addr:      71032f1bb0
// offset:    0x32f1bb0
// name:      FUN_71032f1bb0
// mangled:   
// signature: undefined __cdecl FUN_71032f1bb0(long param_1, uint * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71032f1bb0(long param_1,uint *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  long *********ppppppppplVar11;
  long lVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  long ********local_d0;
  long *local_c8;
  undefined **local_c0;
  undefined8 *local_b8 [9];
  uint local_68;
  undefined4 local_64;
  
  uVar8 = FUN_7101eefe30(*(long *)(*(long *)(param_1 + 0x110) + 0x80));
  if (((*(int *)(param_1 + 0xf8) != 0 || (((uint)uVar8 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(param_1 + 0x142) != '\0') || *(int *)(param_1 + 0xf8) != 0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x110);
  lVar15 = *(long *)(lVar14 + 0x80);
  uVar2 = param_2[0x58];
  *(uint *)(lVar15 + 0x110) = param_2[0x57];
  uVar20 = *param_2;
  *(uint *)(lVar15 + 0x118) = uVar20;
  *(uint *)(lVar15 + 0x11c) = param_2[1];
  *(uint *)(lVar15 + 0x128) = param_2[3];
  *(char *)(lVar15 + 0x14c) = (char)param_2[4];
  uVar3 = param_2[5];
  *(uint *)(lVar15 + 300) = uVar3;
  *(uint *)(lVar15 + 0x130) = param_2[6];
  if ((int)uVar20 < 4) {
    if (uVar3 == 3) {
      bVar7 = false;
      *(undefined4 *)(lVar15 + 300) = 0;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    bVar7 = true;
    if ((uVar3 != 0) && (uVar3 != 3)) {
      *(undefined4 *)(lVar15 + 300) = 0;
      bVar7 = true;
    }
  }
  *(undefined4 *)(lVar15 + 0x134) = 0;
  *(undefined8 *)(lVar15 + 0x13c) = 0xffffffff00000000;
  *(undefined1 *)(lVar15 + 0x148) = 1;
  *(undefined1 *)(lVar15 + 0x14d) = 0;
  lVar17 = **(long **)(lVar15 + 0xd0);
  FUN_7101eef640(lVar15,(byte *)(param_2 + 9),(long *)(param_2 + 0x50),param_4,param_5,param_6,
                 param_7,param_8);
  uVar20 = *(uint *)(lVar15 + 0x118);
  *(undefined4 *)(lVar15 + 0x144) = 0;
  if (uVar20 < 8) {
    if ((1 << (ulong)(uVar20 & 0x1f) & 0x22U) == 0) {
      uVar20 = 1 << (ulong)(uVar20 & 0x1f);
      if ((uVar20 & 0x44) == 0) {
        if ((uVar20 & 0x88) == 0) goto LAB_71032f1d68;
        FUN_7101eef8a0(lVar15,2,(long ****)(param_2 + 0x3f),(byte ****)0x0,param_5,param_6,param_7,
                       param_8);
        *(int *)(lVar15 + 0x144) = *(int *)(lVar15 + 0x144) + 1;
      }
      FUN_7101eef8a0(lVar15,1,(long ****)(param_2 + 0x2d),(byte ****)0x0,param_5,param_6,param_7,
                     param_8);
      *(int *)(lVar15 + 0x144) = *(int *)(lVar15 + 0x144) + 1;
    }
    param_4 = (byte ****)0x0;
    FUN_7101eef8a0(lVar15,0,(long ****)(param_2 + 0x1b),(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
    *(int *)(lVar15 + 0x144) = *(int *)(lVar15 + 0x144) + 1;
  }
LAB_71032f1d68:
  lVar1 = lVar17 + 8;
  if (*(int *)(lVar15 + 0x130) == 1) {
    pcVar9 = "image_color_black";
  }
  else {
    pcVar9 = "image_color_default";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),(long)pcVar9);
  iVar4 = *(int *)(lVar15 + 300);
  if (iVar4 == 1) {
    lVar12 = *(long *)(lVar17 + 0x10);
    pcVar9 = "image_view_00";
LAB_71032f1de8:
    FUN_7103778300(0x3f800000,lVar12,(long)pcVar9);
  }
  else {
    if (iVar4 == 2) {
      lVar12 = *(long *)(lVar17 + 0x10);
      pcVar9 = "image_view_01";
      goto LAB_71032f1de8;
    }
    if (iVar4 == 3) {
      if (*(int *)(lVar15 + 0x128) == 0) {
        pcVar9 = "mini_view_01";
      }
      else {
        pcVar9 = "mini_view_00";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),(long)pcVar9);
      lVar12 = **(long **)(lVar15 + 0x108);
      if (lVar12 != 0) {
        bVar13 = *(byte *)(lVar12 + 0x58) | 1;
LAB_71032f1e84:
        *(byte *)(lVar12 + 0x58) = bVar13;
      }
    }
    else if (bVar7) {
      if (*(int *)(lVar15 + 0x128) == 0) {
        uVar20 = 2;
        if (0 < *(int *)(lVar15 + 0x144)) {
          uVar20 = 3;
        }
        uVar10 = (ulong)uVar20;
      }
      else {
        uVar10 = (ulong)(0 < *(int *)(lVar15 + 0x144));
      }
      FUN_7103778430(lVar1,"mini_view_%02d",uVar10,param_4,param_5,param_6,param_7,param_8);
      lVar12 = **(long **)(lVar15 + 0x108);
      if (lVar12 != 0) {
        bVar13 = *(byte *)(lVar12 + 0x58) & 0xfe;
        goto LAB_71032f1e84;
      }
    }
    else {
      FUN_7103778430(lVar1,"normal_view_%02d",(ulong)(0 < *(int *)(lVar15 + 0x144)),param_4,param_5,
                     param_6,param_7,param_8);
    }
  }
  if (param_2[2] == 1) {
    pcVar9 = "bg_black";
  }
  else {
    pcVar9 = "bg_white";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),(long)pcVar9);
  ppppppppplVar11 = (long *********)(ulong)*(uint *)(lVar15 + 0x144);
  FUN_7103778430(lVar1,"btn_num_%02d",ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
  uVar20 = *(int *)(lVar15 + 0x144) - 1;
  if (*(int *)(lVar15 + 0x144) < 1) {
    uVar10 = 0;
  }
  else {
    if (1 < (int)uVar20) {
      uVar20 = 2;
    }
    uVar10 = (ulong)(uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU));
  }
  FUN_71003a4ca0((uint *)&local_c0,"size_%02d",uVar10,ppppppppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  if (0 < *(int *)(lVar15 + 4)) {
    uVar20 = 0;
    do {
      ppppppppplVar11 = (long *********)(ulong)uVar20;
      FUN_7103776640(&local_d0,lVar1,(byte ****)"set_parts_btn_%02d",ppppppppplVar11,param_4,param_5
                     ,param_6,param_7,param_8);
      plVar18 = local_c8;
      FUN_7103778300(0x3f800000,(long)local_c8,(long)local_b8);
      local_d0 = (long ********)&PTR_FUN_710523d988;
      local_c8 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        uVar10 = plVar18[3];
        plVar18[2] = (long)&PTR_FUN_710523d9a8;
        plVar18[3] = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40((ulong)plVar18);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < *(int *)(lVar15 + 4));
  }
  uVar20 = param_2[0x56];
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_mini_view_position",ppppppppplVar11,param_4,param_5
                 ,param_6,param_7,param_8);
  plVar18 = local_c8;
  lVar17 = *local_c8;
  if (lVar17 != 0) {
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(uint *)(lVar17 + 0x34) = uVar20;
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  }
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  uVar10 = _ConstantZero;
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_button_translate",ppppppppplVar11,param_4,param_5,
                 param_6,param_7,param_8);
  plVar18 = local_c8;
  lVar17 = *local_c8;
  if (lVar17 != 0) {
    *(ulong *)(lVar17 + 0x30) =
         uVar10 ^ (uVar10 ^ (ulong)uVar20 << 0x20) & CONCAT44(-(uint)bVar7,-(uint)bVar7);
    *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 0x10;
  }
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  lVar17 = *(long *)**(undefined8 **)(lVar15 + 0xd0);
  (**(code **)(**(long **)(lVar17 + 0x458) + 0x58))(*(float *)(lVar17 + 0x640) * 0.0,0);
  puVar19 = *(undefined8 **)(lVar17 + 0x468);
  for (puVar16 = *(undefined8 **)(lVar17 + 0x460); puVar16 != puVar19; puVar16 = puVar16 + 1) {
    plVar18 = (long *)*puVar16;
    uVar10 = (**(code **)(*plVar18 + 0x40))(plVar18);
    if ((uVar10 & 1) != 0) {
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  plVar18 = (long *)(lVar15 + 0xd8);
  if (*(int *)(lVar15 + 0x144) < 1) {
    (**(code **)(*(long *)*plVar18 + 0x60))((long *)*plVar18,0);
    (**(code **)(*(long *)*plVar18 + 0x70))((long *)*plVar18,0);
  }
  else {
    ppppppppplVar11 = (long *********)0x0;
    FUN_7103771a80(plVar18,uVar2,0);
  }
  FUN_7103779650(*(long *)(lVar15 + 0xe8));
  FUN_7103779650(*(long *)(lVar15 + 0xf8));
  FUN_7103779650(*(long *)(lVar15 + 0x108));
  cVar5 = *(char *)(lVar15 + 0x14b);
  cVar6 = *(char *)(DAT_7105337ce8 + 0x58d);
  FUN_7103776910(&local_d0,lVar1,(long ****)"set_bg_00",ppppppppplVar11,param_4,param_5,param_6,
                 param_7,param_8);
  plVar18 = local_c8;
  lVar15 = *local_c8;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | (cVar5 != '\0' && cVar6 == '\0');
  }
  local_d0 = (long ********)&PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  lVar14 = *(long *)(lVar14 + 0x80);
  if (*(int *)(lVar14 + 0xc0) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar14 + 0xd0) + 0x10),0x7104421055);
    if (0x12 < *(uint *)(lVar14 + 0xbc)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar14 + 0xbc) * 4 + 0x70) = 1;
  }
  *(undefined1 *)(param_1 + 0x146) = 0;
  if ((*(ulong *)(param_2 + 0x5e) & 0xffffffffff) == 0) goto LAB_71032f22c4;
  lVar14 = *(long *)(param_1 + 0x110);
  FUN_710353da30(&local_68,*(ulong *)(param_2 + 0x5e));
  lVar14 = *(long *)(lVar14 + 0x80);
  iVar4 = *(int *)(lVar14 + 300);
  if (iVar4 == 3) {
    puVar16 = (undefined8 *)(lVar14 + 0x100);
LAB_71032f2218:
    FUN_7103778ab0(&local_c0,puVar16,(long ****)ppppppppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
    if (iVar4 == 2) {
      puVar16 = (undefined8 *)(lVar14 + 0xf0);
      goto LAB_71032f2218;
    }
    if (iVar4 == 1) {
      puVar16 = (undefined8 *)(lVar14 + 0xe0);
      goto LAB_71032f2218;
    }
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,param_6,
                                 param_7,param_8);
    if (local_b8[0] == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_d0 = (long ********)&SUB_00000020;
        ppppppppplVar11 = &local_d0;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar10 & 1) != 0) &&
           (local_b8[0] = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar11,param_4,param_5,
                                         param_6,param_7,param_8), local_b8[0] != (undefined8 *)0x0)
           ) goto LAB_71032f227c;
      }
      local_b8[0] = (undefined8 *)0x0;
    }
LAB_71032f227c:
    local_b8[0][2] = 0;
    local_b8[0][3] = 0;
    *local_b8[0] = 0;
    local_b8[0][1] = 0;
  }
  FUN_7103778c70((long)local_b8[0],&local_68,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8
                );
  puVar16 = local_b8[0];
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8[0] = (undefined8 *)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar16);
  }
  if (local_68 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_68,ppppppppplVar11,param_4,param_5,param_6,param_7,param_8);
  }
LAB_71032f22c4:
  *(uint *)(param_1 + 0x120) = param_2[0x5c];
  *(uint *)(param_1 + 0x13c) = param_2[0x58];
  uVar2 = param_2[0x5b];
  *(uint *)(param_1 + 0x11c) = uVar2;
  *(uint *)(param_1 + 0x118) = uVar2;
  cVar5 = *(char *)((long)param_2 + 0x175);
  *(char *)(param_1 + 0x144) = cVar5;
  if ((*param_2 | 4) == 4) {
    *(undefined4 *)(param_1 + 0x124) = 1;
    uVar2 = param_2[0x59];
    *(uint *)(param_1 + 0x134) = uVar2;
    *(bool *)(param_1 + 0x141) = uVar2 == 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(uint *)(param_1 + 0x138) = param_2[0x5a];
  }
  if (cVar5 == '\0') {
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) | 1 << (ulong)(*(uint *)(param_1 + 0x128) & 0x1f);
  }
  *(undefined1 *)(param_1 + 0x142) = 1;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  return;
}

