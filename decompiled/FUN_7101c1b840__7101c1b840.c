// addr:      7101c1b840
// offset:    0x1c1b840
// name:      FUN_7101c1b840
// mangled:   
// signature: undefined __cdecl FUN_7101c1b840(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101c1b840(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  long ***ppplVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte ***pppbVar11;
  long *plVar12;
  byte ****ppppbVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  byte ***local_d0;
  byte ***local_c8;
  byte ***local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined1 local_9a;
  undefined **local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined4 local_54;
  long ***local_48;
  
  ppppbVar13 = &local_d0;
  if (*(int *)(param_1 + 0x154) != 0) {
    bVar8 = FUN_71037814c0(*(long *)(param_1 + 0x198),*(int *)(param_1 + 0x208));
    if (!bVar8) {
      return;
    }
    lVar17 = **(long **)(param_1 + 0x170);
    uVar14 = 0;
    FUN_7103771d60(&local_b8,*(long *)(param_1 + 0x1b0),(long ****)0x0,param_4,param_5,param_6,
                   param_7,param_8);
    plVar1 = local_b0;
    if (*local_b0 == 0) {
      ppppbVar13 = (byte ****)&DAT_7104867c2e;
    }
    else {
      ppppbVar13 = *(byte *****)(*local_b0 + 0x88);
    }
    FUN_7103776640(&local_70,lVar17 + 8,ppppbVar13,uVar14,param_4,param_5,param_6,param_7,param_8);
    ppuVar23 = local_68;
    FUN_7103778300(0x3f800000,(long)local_68,0x710425f331);
    lVar17 = *(long *)(param_1 + 0x200);
    *(undefined4 *)(lVar17 + 0xf0) = 0xfffffffe;
    if (*(long *)(lVar17 + 0xe8) != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar17 + 0xe8) + 8) + 0x4aa) = 0;
    }
    lVar18 = *(long *)(lVar17 + 0xe0);
    if ((lVar18 != 0) && (1 < *(int *)(lVar17 + 0xb8) - 1U)) {
      plVar2 = *(long **)(lVar18 + 0x188);
      for (plVar12 = *(long **)(lVar18 + 0x180); plVar12 != plVar2; plVar12 = plVar12 + 1) {
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x180))();
        }
      }
      FUN_7103771a80((long *)(lVar17 + 0xe0),0,0);
      if (0x12 < *(uint *)(lVar17 + 0xb4)) goto LAB_7101c1bf78;
      *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar17 + 0xb4) * 4 + 0x68) = 1;
    }
    local_70 = &PTR_FUN_710523d988;
    local_68 = (undefined **)0x0;
    if (ppuVar23 != (undefined **)0x0) {
      uVar10 = *(ulong *)((long)ppuVar23 + 0x18);
      *(undefined ***)((long)ppuVar23 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)ppuVar23 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40((ulong)ppuVar23);
    }
    local_b8 = &PTR_FUN_710523d9c8;
    local_b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    if (*(uint *)(param_1 + 0x14c) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x14c) * 4 + 0x100) = 4;
      return;
    }
LAB_7101c1bf78:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_68 = (undefined **)0x0;
  ppuStack_60 = (undefined **)0x0;
  uVar4 = 0x811c9dc5;
  local_70 = (undefined **)0x0;
  uVar22 = uVar4;
  if (*(char *)(param_1 + 0x20d) == '\0') {
    if (*(char *)(param_1 + 0x20c) != '\0') {
      local_9a = 0;
      local_b0 = (long *)0x656c75725f6c656d;
      local_a8 = 0x5f7463656c65735f;
      local_a0 = 0x7567;
      uVar20 = 0x6d;
      lVar17 = 9;
      local_9e = 0x31656469;
      do {
        uVar22 = uVar22 * 0x89 ^ uVar20;
        uVar20 = (uint)*(byte *)((long)&local_b8 + lVar17);
        lVar17 = lVar17 + 1;
      } while (uVar20 != 0);
      goto LAB_7101c1b9ac;
    }
  }
  else {
    local_9a = 0;
    local_b0 = (long *)0x656c75725f6c656d;
    local_a8 = 0x5f7463656c65735f;
    local_a0 = 0x7567;
    uVar20 = 0x6d;
    lVar17 = 9;
    local_9e = 0x30656469;
    do {
      uVar22 = uVar22 * 0x89 ^ uVar20;
      uVar20 = (uint)*(byte *)((long)&local_b8 + lVar17);
      lVar17 = lVar17 + 1;
    } while (uVar20 != 0);
LAB_7101c1b9ac:
    local_9a = 0;
    local_a0 = 0x7567;
    local_a8 = 0x5f7463656c65735f;
    local_b0 = (long *)0x656c75725f6c656d;
    local_b8 = (undefined **)CONCAT44(0x16,uVar22);
    FUN_71019c1c50((ulong *)&local_70,(long)&local_b8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_9a = 0;
  local_b0 = (long *)0x656c75725f6c656d;
  local_a8 = 0x5f7463656c65735f;
  local_a0 = 0x7567;
  uVar20 = 0x6d;
  lVar17 = 9;
  local_9e = 0x32656469;
  uVar22 = uVar4;
  do {
    uVar22 = uVar22 * 0x89 ^ uVar20;
    uVar20 = (uint)*(byte *)((long)&local_b8 + lVar17);
    lVar17 = lVar17 + 1;
  } while (uVar20 != 0);
  local_b8 = (undefined **)CONCAT44(0x16,uVar22);
  if (local_68 < ppuStack_60) {
    *(uint *)local_68 = 0;
    for (uVar10 = 0; *(char *)((long)&local_b0 + uVar10) != '\0'; uVar10 = uVar10 + 2) {
      *(char *)((long)local_68 + uVar10 + 8) = *(char *)((long)&local_b0 + uVar10);
      if (0x3e < (int)uVar10 + 1U) {
        uVar10 = (ulong)((int)uVar10 + 1);
        break;
      }
      cVar3 = *(char *)((long)&local_b0 + uVar10 + 1);
      if (cVar3 == '\0') {
        uVar10 = uVar10 + 1;
        break;
      }
      *(char *)((long)local_68 + uVar10 + 9) = cVar3;
    }
    *(undefined1 *)((long)local_68 + (uVar10 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_68 + 4) = (uint)uVar10;
    uVar20 = (uint)*(byte *)(local_68 + 1);
    uVar22 = uVar4;
    if (*(byte *)(local_68 + 1) != 0) {
      pbVar21 = (byte *)((long)local_68 + 9);
      do {
        uVar22 = uVar22 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar21;
        pbVar21 = pbVar21 + 1;
      } while (uVar20 != 0);
    }
    *(uint *)local_68 = uVar22;
    local_68 = local_68 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_70,(long)&local_b8,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  ppuVar7 = local_68;
  ppuVar23 = local_70;
  if (local_70 == local_68) {
    if (0 < *(int *)(param_1 + 0x14c)) {
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
    }
    goto joined_r0x007101c1be14;
  }
  ppplVar5 = (long ***)((long)local_68 - (long)local_70);
  local_b0 = (long *)((ulong)local_b0 & 0xffffffffffffff00);
  local_c0 = (byte ***)0x0;
  local_b8 = (undefined **)0x0;
  local_d0 = (byte ***)0x0;
  local_c8 = (byte ***)0x0;
  if (ppplVar5 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar5 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar11 = (byte ***)
                FUN_710392e290(0x10,ppplVar5,param_3,param_4,param_5,param_6,param_7,param_8);
    if (pppbVar11 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        pppplVar15 = &local_48;
        local_48 = ppplVar5;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar10 & 1) != 0) &&
           (pppbVar11 = (byte ***)
                        FUN_710392e290(0x10,ppplVar5,pppplVar15,param_4,param_5,param_6,param_7,
                                       param_8), pppbVar11 != (byte ***)0x0)) goto LAB_7101c1bca0;
      }
      pppbVar11 = (byte ***)0x0;
    }
LAB_7101c1bca0:
    local_c0 = pppbVar11 + ((long)ppplVar5 >> 3);
    local_c8 = pppbVar11;
    do {
      *(uint *)local_c8 = 0;
      uVar10 = 0;
      do {
        cVar3 = *(char *)((long)ppuVar23 + uVar10 + 8);
        uVar19 = uVar10;
        if (cVar3 == '\0') break;
        *(char *)((long)local_c8 + uVar10 + 8) = cVar3;
        cVar3 = *(char *)((long)ppuVar23 + uVar10 + 9);
        if (cVar3 == '\0') {
          uVar19 = uVar10 + 1;
          break;
        }
        *(char *)((long)local_c8 + uVar10 + 9) = cVar3;
        cVar3 = *(char *)((long)ppuVar23 + uVar10 + 10);
        if (cVar3 == '\0') {
          uVar19 = uVar10 + 2;
          break;
        }
        uVar19 = uVar10 + 3;
        *(char *)((long)local_c8 + uVar10 + 10) = cVar3;
        uVar10 = uVar19;
      } while ((uint)uVar19 < 0x3f);
      *(undefined1 *)((long)local_c8 + (uVar19 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_c8 + 4) = (uint)uVar19;
      uVar20 = (uint)*(byte *)(local_c8 + 1);
      uVar22 = uVar4;
      if (*(byte *)(local_c8 + 1) != 0) {
        pbVar21 = (byte *)((long)local_c8 + 9);
        do {
          uVar22 = uVar22 * 0x89 ^ uVar20;
          uVar20 = (uint)*pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (uVar20 != 0);
      }
      *(uint *)local_c8 = uVar22;
      ppuVar23 = ppuVar23 + 9;
      local_c8 = local_c8 + 9;
      local_d0 = pppbVar11;
    } while (ppuVar23 != ppuVar7);
  }
  pppplVar15 = (long ****)0x1;
  uVar14 = 0;
  uVar16 = 0;
  FUN_71032d6470(*(long *)(param_1 + 0x200),(undefined8 *)(param_1 + 0x170),(long ****)&local_b8,
                 &local_d0,(long ****)0x1,0,0,param_8);
  if (local_d0 != (byte ***)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  ppuVar7 = local_68;
  ppuVar23 = local_70;
  if (local_70 != local_68) {
    ppuVar6 = local_70;
    if (*(uint *)local_70 != 0xe9a820b8) goto LAB_7101c1bdc8;
    iVar9 = strcmp((char *)(local_70 + 1),"mel_rule_select_guide2");
    ppuVar24 = ppuVar23;
    while (ppuVar6 = ppuVar24, iVar9 != 0) {
LAB_7101c1bdc8:
      ppuVar24 = ppuVar6 + 9;
      if (ppuVar7 == ppuVar24) goto LAB_7101c1bf0c;
      iVar9 = -1;
      if (*(uint *)ppuVar24 == 0xe9a820b8) {
        iVar9 = strcmp((char *)(ppuVar6 + 10),"mel_rule_select_guide2");
      }
    }
    if (ppuVar24 != ppuVar7) {
      uVar22 = (int)((ulong)((long)ppuVar24 - (long)ppuVar23) >> 3) * 0x38e38e39;
      lVar17 = *(long *)(param_1 + 0x200);
      if (*(char *)(param_1 + 0x20e) == '\0') {
        if (((-1 < (int)uVar22) && ((int)uVar22 < *(int *)(lVar17 + 200))) &&
           (*(long *)(lVar17 + 0xe0) != 0)) {
          FUN_7103771d60(&local_b8,*(long *)(lVar17 + 0xe0),(long ****)(ulong)uVar22,ppppbVar13,
                         pppplVar15,uVar14,uVar16,param_8);
          lVar17 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
          if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar17 >> 3) < 5)
          goto LAB_7101c1bed0;
          local_48 = *(long ****)(lVar17 + 0x20);
          goto LAB_7101c1bed4;
        }
      }
      else if (((-1 < (int)uVar22) && ((int)uVar22 < *(int *)(lVar17 + 200))) &&
              (*(long *)(lVar17 + 0xe0) != 0)) {
        FUN_7103771d60(&local_b8,*(long *)(lVar17 + 0xe0),(long ****)(ulong)uVar22,ppppbVar13,
                       pppplVar15,uVar14,uVar16,param_8);
        plVar1 = *(long **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
        if (*(long **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == plVar1) {
LAB_7101c1bed0:
          local_48 = (long ***)0x0;
        }
        else {
          local_48 = (long ***)*plVar1;
        }
LAB_7101c1bed4:
        plVar1 = local_b0;
        plVar12 = (long *)*local_b0;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x2b0))(plVar12,&local_48);
        }
        local_b8 = &PTR_FUN_710523d9c8;
        local_b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar1);
        }
      }
    }
  }
LAB_7101c1bf0c:
  FUN_7103783c10((long *)(param_1 + 0x198),*(int *)(param_1 + 0x208),0,1,pppplVar15,uVar14,uVar16,
                 param_8);
  (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),0);
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),0);
  local_68 = local_70;
joined_r0x007101c1be14:
  if (local_68 != (undefined **)0x0) {
    FUN_710392eb40((ulong)local_68);
  }
  return;
}

