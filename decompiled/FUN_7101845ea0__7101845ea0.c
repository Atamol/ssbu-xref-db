// addr:      7101845ea0
// offset:    0x1845ea0
// name:      FUN_7101845ea0
// mangled:   
// signature: undefined __cdecl FUN_7101845ea0(long * param_1)


void FUN_7101845ea0(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong *puVar6;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_x7;
  ulong *puVar13;
  ulong *local_88;
  ulong *local_80;
  ulong *local_70;
  ulong *local_68;
  ulong *local_58;
  ulong *local_50;
  ulong local_38;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar4 = FUN_7101a0ffd0();
  uVar11 = 1;
  uVar12 = 0;
  FUN_710326f6a0(&local_88,0,(long ****)0x1,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,0,in_x7);
  if (iVar4 == 2) {
    lVar5 = *param_1;
    FUN_710323beb0(lVar5,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar5 + 0x70),
                   (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x1,uVar11,uVar12,in_x7);
    lVar5 = *param_1;
    FUN_710323beb0(lVar5,(ulong *)&DAT_71045443e0,(long)*(int *)(lVar5 + 0x70),
                   (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
    lVar5 = *param_1;
    FUN_710323beb0(lVar5,(ulong *)&DAT_71045443d8,(long)*(int *)(lVar5 + 0x70),
                   (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
    lVar5 = *param_1;
    ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
    ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
    pppplVar10 = (long ****)0x0;
    FUN_710323beb0(lVar5,(ulong *)&DAT_71045443d0,(long)ppppppppplVar8,(ulong)ppppbVar9,
                   (long ****)0x0,uVar11,uVar12,in_x7);
    FUN_71032d1fd0(param_1,extraout_x1_00,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,in_x7);
    local_58 = (ulong *)FUN_710323af70(0x7104308504,0);
    if (((ulong)local_58 & 0xffffffffff) != 0) {
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      FUN_710323c4e0(lVar5,(ulong *)&local_58,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                     in_x7);
    }
    FUN_7101a11d30((long *)&local_58,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,
                   pppplVar10,uVar11,uVar12,in_x7);
    puVar3 = local_50;
    puVar13 = local_88;
    puVar1 = local_80;
    for (puVar6 = local_58; puVar2 = puVar13, puVar6 != puVar3; puVar6 = puVar6 + 1) {
      ppppppppplVar8 = (long *********)0x1;
      local_88 = puVar13;
      local_80 = puVar1;
      local_70 = (ulong *)FUN_7103238a70(*puVar6,0,1);
      if (((ulong)local_70 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
        ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
        FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                       in_x7);
      }
      puVar13 = local_88;
      puVar1 = local_80;
    }
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      ppppppppplVar8 = (long *********)&DAT_00000007;
      local_70 = (ulong *)FUN_7103238a70(*puVar2,0,7);
      if (((ulong)local_70 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
        ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
        FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                       in_x7);
      }
    }
    FUN_710327b090(&local_70,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,pppplVar10,uVar11
                   ,uVar12,in_x7);
    puVar1 = local_68;
    for (puVar6 = local_70; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      local_38 = FUN_7103238d60(*puVar6,0x11);
      if ((local_38 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        FUN_710323c4e0(lVar5,&local_38,(long *********)(long)*(int *)(lVar5 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar5 + 0x68),pppplVar10,uVar11,uVar12,in_x7);
      }
    }
  }
  else {
    if (iVar4 == 1) {
      lVar5 = *param_1;
      FUN_710323beb0(lVar5,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar5 + 0x70),
                     (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x1,uVar11,uVar12,in_x7);
      lVar5 = *param_1;
      FUN_710323beb0(lVar5,(ulong *)&DAT_71045443b8,(long)*(int *)(lVar5 + 0x70),
                     (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
      lVar5 = *param_1;
      FUN_710323beb0(lVar5,(ulong *)&DAT_71045443c0,(long)*(int *)(lVar5 + 0x70),
                     (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      pppplVar10 = (long ****)0x0;
      FUN_710323beb0(lVar5,(ulong *)&DAT_71045443c8,(long)ppppppppplVar8,(ulong)ppppbVar9,
                     (long ****)0x0,uVar11,uVar12,in_x7);
      FUN_71032d1fd0(param_1,extraout_x1,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,in_x7);
      FUN_7101a11d30((long *)&local_58,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,
                     pppplVar10,uVar11,uVar12,in_x7);
      puVar3 = local_50;
      puVar13 = local_88;
      puVar1 = local_80;
      for (puVar6 = local_58; puVar2 = puVar13, puVar6 != puVar3; puVar6 = puVar6 + 1) {
        ppppppppplVar8 = (long *********)0x1;
        local_88 = puVar13;
        local_80 = puVar1;
        local_70 = (ulong *)FUN_7103238a70(*puVar6,0,1);
        if (((ulong)local_70 & 0xffffffffff) != 0) {
          lVar5 = *param_1;
          ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
          ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
          FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                         in_x7);
        }
        puVar13 = local_88;
        puVar1 = local_80;
      }
      for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        ppppppppplVar8 = (long *********)&DAT_00000007;
        local_70 = (ulong *)FUN_7103238a70(*puVar2,0,7);
        if (((ulong)local_70 & 0xffffffffff) != 0) {
          lVar5 = *param_1;
          ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
          ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
          FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                         in_x7);
        }
      }
      FUN_710327b090(&local_70,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,pppplVar10,
                     uVar11,uVar12,in_x7);
      puVar1 = local_68;
      for (puVar6 = local_70; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        local_38 = FUN_7103238d60(*puVar6,0x11);
        if ((local_38 & 0xffffffffff) != 0) {
          lVar5 = *param_1;
          FUN_710323c4e0(lVar5,&local_38,(long *********)(long)*(int *)(lVar5 + 0x70),
                         (byte ****)(ulong)*(uint *)(lVar5 + 0x68),pppplVar10,uVar11,uVar12,in_x7);
        }
      }
      if (local_70 != (ulong *)0x0) {
        local_68 = local_70;
        FUN_710392eb40((ulong)local_70);
      }
      if (local_58 != (ulong *)0x0) {
        local_50 = local_58;
        FUN_710392eb40((ulong)local_58);
      }
      goto joined_r0x007101846480;
    }
    lVar5 = *param_1;
    FUN_710323beb0(lVar5,(ulong *)&DAT_7104543b28,(long)*(int *)(lVar5 + 0x70),
                   (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x1,uVar11,uVar12,in_x7);
    lVar5 = *param_1;
    FUN_710323beb0(lVar5,(ulong *)&DAT_7104544388,(long)*(int *)(lVar5 + 0x70),
                   (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
    lVar5 = *param_1;
    ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
    ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
    pppplVar10 = (long ****)0x0;
    FUN_710323beb0(lVar5,(ulong *)&DAT_7104544390,(long)ppppppppplVar8,(ulong)ppppbVar9,
                   (long ****)0x0,uVar11,uVar12,in_x7);
    uVar7 = extraout_x1_01;
    switch(iVar4) {
    case 9:
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      puVar6 = (ulong *)&DAT_7104544398;
      break;
    default:
      goto switchD_71018462ac_caseD_a;
    case 0xf:
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      puVar6 = (ulong *)&DAT_71045443b0;
      break;
    case 0x16:
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      puVar6 = (ulong *)&DAT_71045443a0;
      break;
    case 0x18:
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      puVar6 = (ulong *)&DAT_71045443a8;
    }
    pppplVar10 = (long ****)0x0;
    FUN_710323beb0(lVar5,puVar6,(long)ppppppppplVar8,(ulong)ppppbVar9,(long ****)0x0,uVar11,uVar12,
                   in_x7);
    uVar7 = extraout_x1_02;
switchD_71018462ac_caseD_a:
    FUN_71032d1fd0(param_1,uVar7,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,in_x7);
    local_58 = (ulong *)FUN_710323af70(0x7104308504,0);
    if (((ulong)local_58 & 0xffffffffff) != 0) {
      lVar5 = *param_1;
      ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
      FUN_710323c4e0(lVar5,(ulong *)&local_58,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                     in_x7);
    }
    FUN_7101a11d30((long *)&local_58,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,
                   pppplVar10,uVar11,uVar12,in_x7);
    puVar3 = local_50;
    puVar13 = local_88;
    puVar1 = local_80;
    for (puVar6 = local_58; puVar2 = puVar13, puVar6 != puVar3; puVar6 = puVar6 + 1) {
      ppppppppplVar8 = (long *********)0x1;
      local_88 = puVar13;
      local_80 = puVar1;
      local_70 = (ulong *)FUN_7103238a70(*puVar6,0,1);
      if (((ulong)local_70 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
        ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
        FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                       in_x7);
      }
      puVar13 = local_88;
      puVar1 = local_80;
    }
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      ppppppppplVar8 = (long *********)&DAT_00000007;
      local_70 = (ulong *)FUN_7103238a70(*puVar2,0,7);
      if (((ulong)local_70 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        ppppppppplVar8 = (long *********)(long)*(int *)(lVar5 + 0x70);
        ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
        FUN_710323c4e0(lVar5,(ulong *)&local_70,ppppppppplVar8,ppppbVar9,pppplVar10,uVar11,uVar12,
                       in_x7);
      }
    }
    FUN_710327b090(&local_70,(long *)&local_88,(long ****)ppppppppplVar8,ppppbVar9,pppplVar10,uVar11
                   ,uVar12,in_x7);
    puVar1 = local_68;
    for (puVar6 = local_70; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      local_38 = FUN_7103238d60(*puVar6,0x11);
      if ((local_38 & 0xffffffffff) != 0) {
        lVar5 = *param_1;
        FUN_710323c4e0(lVar5,&local_38,(long *********)(long)*(int *)(lVar5 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar5 + 0x68),pppplVar10,uVar11,uVar12,in_x7);
      }
    }
  }
  if (local_70 != (ulong *)0x0) {
    local_68 = local_70;
    FUN_710392eb40((ulong)local_70);
  }
  if (local_58 != (ulong *)0x0) {
    local_50 = local_58;
    FUN_710392eb40((ulong)local_58);
  }
  lVar5 = *param_1;
  FUN_710323beb0(lVar5,(ulong *)&DAT_71045447d0,(long)*(int *)(lVar5 + 0x70),
                 (ulong)*(uint *)(lVar5 + 0x68),(long ****)0x0,uVar11,uVar12,in_x7);
joined_r0x007101846480:
  if (puVar13 != (ulong *)0x0) {
    FUN_710392eb40((ulong)puVar13);
  }
  return;
}

