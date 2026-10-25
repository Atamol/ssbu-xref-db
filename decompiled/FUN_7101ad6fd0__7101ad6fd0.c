// addr:      7101ad6fd0
// offset:    0x1ad6fd0
// name:      FUN_7101ad6fd0
// mangled:   
// signature: undefined __cdecl FUN_7101ad6fd0(long param_1, undefined8 param_2, long * * * * param_3, long * * * * * * * * * * * * * param_4, long * * * * * * * * * * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101ad6fd0(long param_1,undefined8 param_2,long ****param_3,long *************param_4,
                   long *************param_5,long param_6,ulong param_7,ulong param_8)

{
  int *piVar1;
  uint uVar2;
  void *__src;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar6;
  undefined8 uVar7;
  char *pcVar8;
  byte ****ppppbVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined1 *local_400;
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  long ***local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  
  lVar11 = DAT_710532f7e8;
  cVar3 = *(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161);
  if (*(int *)(param_1 + 0x164) == 0) {
    if (cVar3 == '\0') {
      return;
    }
    FUN_71032933e0((ulong *)&local_220,*(long *)(DAT_710532f730 + 8) + 0x2f0,0xc1ffff18295f2988);
    *(undefined4 *)(*(long *)(lVar11 + 8) + 0xf8) = 1;
    lVar13 = *(long *)(lVar11 + 8);
    *(undefined8 *)(lVar13 + 0x110) = local_210;
    *(undefined8 *)(lVar13 + 0x118) = uStack_208;
    *(long ****)(lVar13 + 0x100) = local_220;
    *(undefined8 *)(lVar13 + 0x108) = uStack_218;
    lVar13 = *(long *)(lVar11 + 8);
    *(undefined2 *)(lVar13 + 0x120) = 1;
    *(undefined1 *)(lVar13 + 0x122) = 0;
    *(undefined4 *)(lVar13 + 0x124) = 0;
    *(undefined1 *)(lVar13 + 0x128) = 0;
    lVar11 = *(long *)(lVar11 + 8);
    if (*(char *)(lVar11 + 0x161) == '\0') {
      return;
    }
    if (*(uint *)(lVar11 + 0xe4) < 0x13) {
      *(undefined4 *)(lVar11 + (long)(int)*(uint *)(lVar11 + 0xe4) * 4 + 0x98) = 5;
      if (0x11 < *(int *)(lVar11 + 0xe4)) {
        return;
      }
      uVar2 = *(int *)(lVar11 + 0xe4) + 1;
      *(uint *)(lVar11 + 0xe4) = uVar2;
      if (uVar2 < 0x13) {
        *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x98) = 3;
        return;
      }
    }
    goto LAB_7101ad7504;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)(*(long *)(DAT_710532f7e8 + 8) + 0xe8) != 2) {
    return;
  }
  plVar10 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar14 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar14 == 0) {
    plVar4 = (long *)FUN_710392e290(0x10,0x18,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                                    param_7,param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_400 = (undefined1 *)((ulong)local_400 & 0xffffffff00000000);
        local_220 = (long ***)&SUB_00000018;
        pppplVar6 = &local_220;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_400);
        if (((uVar5 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,0x18,pppplVar6,(byte ****)param_4,
                                            (long ****)param_5,param_6,param_7,param_8),
           plVar4 != (long *)0x0)) goto LAB_7101ad7158;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101ad7158:
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = (long)plVar10;
    lVar11 = *plVar10;
    *plVar4 = lVar11;
    *(long **)(lVar11 + 8) = plVar4;
    *plVar10 = (long)plVar4;
    *plVar14 = *plVar14 + 1;
  }
  else {
    *(byte *)(*plVar10 + 0x10) = *(byte *)(*plVar10 + 0x10) & 1;
  }
  if (*(uint *)(param_1 + 0x15c) < 0x13) {
    __src = (void *)(param_1 + 0x1a0);
    pppplVar6 = (long ****)&DAT_000001e0;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x15c) * 4 + 0x110) = 5;
    memcpy(&local_220,__src,0x1e0);
    FUN_710338e8d0(&local_400,extraout_x1,pppplVar6,param_4,param_5,param_6,param_7,param_8);
    uVar7 = 0x1e0;
    memcpy(__src,&local_400,0x1e0);
    FUN_710338ef40(5,extraout_x1_00,uVar7,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    FUN_7101ad7730(param_1,(long)&local_220,(long)__src);
    if ((((*(ulong *)(param_1 + 0x1a0) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x1a0) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x1c8) != '\0')
       ) {
      ppppbVar9 = (byte ****)0x1;
    }
    else {
      ppppbVar9 = (byte ****)0x0;
    }
    if ((((*(ulong *)(param_1 + 0x1d0) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x1d0) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x1f8) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x200) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x200) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x228) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x230) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x230) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 600) != '\0'))
    {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x260) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x260) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x288) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x290) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x290) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x2b8) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x2c0) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x2c0) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x2e8) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x2f0) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x2f0) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x318) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 800) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 800) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x348) != '\0'))
    {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    if ((((*(ulong *)(param_1 + 0x350) & 0xff00000000000000) == 0xc100000000000000) &&
        ((*(ulong *)(param_1 + 0x350) & 0xffffffffff) != 0)) || (*(char *)(param_1 + 0x378) != '\0')
       ) {
      ppppbVar9 = (byte ****)(ulong)((int)ppppbVar9 + 1);
    }
    pcVar8 = &DAT_71042b2a84;
    FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"g_item_num",&DAT_71042b2a84);
    plVar14 = *(long **)(param_1 + 0x40);
    plVar10 = (long *)*plVar14;
    lVar15 = *plVar10;
    *(undefined4 *)(plVar10 + 2) = 0;
    plVar10 = *(long **)(lVar15 + 0x10);
    *plVar10 = lVar15;
    *(undefined4 *)(plVar10 + 1) = 0x48;
    lVar11 = *(long *)(lVar15 + 0x10);
    *(long *)(lVar15 + 0x10) = lVar11 + 0x10;
    lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 200);
    *(long *)(lVar15 + 0x10) = lVar11;
    if (lVar13 == lVar15) {
      lVar11 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
      if (*(uint *)(lVar11 + 0xc) < 2) {
        plVar10 = (long *)(*(long *)(lVar11 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar11 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar10[3] == 0x13) && (plVar4 = plVar10, plVar10[2] == 2)) break;
          piVar1 = (int *)((long)plVar10 + 0x1c);
          plVar10 = plVar10 + (long)*piVar1 * 4;
          plVar4 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar4 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
      }
      pcVar8 = "reset_selector";
      FUN_71038f4d40(lVar15,plVar4,"reset_selector");
    }
    else {
      FUN_71038f4b20(lVar15,"reset_selector");
      FUN_71038f4fc0(lVar15,-2);
    }
    puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x10) + -0x10);
    if ((puVar12 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar15 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar15 + 0x10) = puVar12;
    }
    else {
      FUN_7103377130(plVar14,0,(long ****)pcVar8,ppppbVar9,(long ****)param_5,param_6,param_7,
                     param_8);
    }
    local_3f0 = 0;
    uStack_3e8 = 0;
    local_400 = &DAT_c1ffff0000000000;
    local_3f8 = 0xff;
    FUN_710338fa90(*(long **)(param_1 + 0x170),&local_400,pcVar8,ppppbVar9,(long ****)param_5,
                   param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x15c) < 0x12) {
      uVar2 = *(int *)(param_1 + 0x15c) + 1;
      *(uint *)(param_1 + 0x15c) = uVar2;
      if (0x12 < uVar2) goto LAB_7101ad7504;
      *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x110) = 4;
      if (*(int *)(param_1 + 0x15c) < 0x12) {
        uVar2 = *(int *)(param_1 + 0x15c) + 1;
        *(uint *)(param_1 + 0x15c) = uVar2;
        if (0x12 < uVar2) goto LAB_7101ad7504;
        *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x110) = 2;
      }
    }
    return;
  }
LAB_7101ad7504:
                    /* WARNING: Subroutine does not return */
  abort();
}

