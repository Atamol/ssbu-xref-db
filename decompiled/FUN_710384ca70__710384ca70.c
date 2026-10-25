// addr:      710384ca70
// offset:    0x384ca70
// name:      FUN_710384ca70
// mangled:   
// signature: undefined __cdecl FUN_710384ca70(undefined4 * param_1, long param_2, ulong * param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, byte * * * * param_7, ulong param_8, void * param_9)


void FUN_710384ca70(undefined4 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,byte ****param_7,ulong param_8,void *param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  long ***ppplVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long ****pppplVar21;
  void *__dest;
  void *pvVar22;
  long *local_a0;
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined5 uStack_7f;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  plVar16 = (long *)(param_2 + 0x48);
  iVar7 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x60;
    local_88._1_5_ = 0;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,param_9
                    );
    }
  }
  nu::VirtualAllocHook(0x60,0x10,local_a0);
  plVar4 = local_a0;
  *(undefined4 *)(local_a0 + 4) = 0x15;
  local_a0[6] = (long)&DAT_7105269cf8;
  local_a0[7] = (long)plVar16;
  local_a0[10] = (long)(local_a0 + 6);
  plVar19 = (long *)(param_2 + 0x50);
  plVar15 = plVar19;
  plVar20 = plVar19;
  if ((long *)*plVar19 != (long *)0x0) {
    plVar15 = (long *)(param_2 + 0x50);
    plVar5 = (long *)*plVar19;
    do {
      while (plVar20 = plVar5, 0x15 < *(uint *)(plVar20 + 4)) {
        plVar15 = plVar20;
        plVar5 = (long *)*plVar20;
        if ((long *)*plVar20 == (long *)0x0) {
          lVar17 = *plVar20;
          goto joined_r0x00710384cbbc;
        }
      }
      if (*(uint *)(plVar20 + 4) == 0x15) break;
      plVar15 = plVar20 + 1;
      plVar5 = (long *)*plVar15;
    } while ((long *)*plVar15 != (long *)0x0);
  }
  lVar17 = *plVar15;
joined_r0x00710384cbbc:
  if (lVar17 == 0) {
    *local_a0 = 0;
    local_a0[1] = 0;
    local_a0[2] = (long)plVar20;
    *plVar15 = (long)local_a0;
    plVar20 = local_a0;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      plVar20 = (long *)*plVar15;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_2 + 0x50),plVar20);
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
  }
  else if (local_a0 != (long *)0x0) {
    nu::VirtualFreeHook(local_a0);
    FUN_710392eb40((ulong)plVar4);
  }
  iVar7 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x60;
    local_88._1_5_ = 0;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,param_9
                    );
    }
  }
  nu::VirtualAllocHook(0x60,0x10,local_a0);
  plVar4 = local_a0;
  *(undefined4 *)(local_a0 + 4) = 0x16;
  local_a0[6] = (long)&DAT_7105269d50;
  local_a0[7] = (long)plVar16;
  local_a0[10] = (long)(local_a0 + 6);
  plVar15 = plVar19;
  plVar20 = plVar19;
  if ((long *)*plVar19 != (long *)0x0) {
    plVar15 = (long *)(param_2 + 0x50);
    plVar5 = (long *)*plVar19;
    do {
      while (plVar20 = plVar5, 0x16 < *(uint *)(plVar20 + 4)) {
        plVar15 = plVar20;
        plVar5 = (long *)*plVar20;
        if ((long *)*plVar20 == (long *)0x0) {
          lVar17 = *plVar20;
          goto joined_r0x00710384cd08;
        }
      }
      if (*(uint *)(plVar20 + 4) == 0x16) break;
      plVar15 = plVar20 + 1;
      plVar5 = (long *)*plVar15;
    } while ((long *)*plVar15 != (long *)0x0);
  }
  lVar17 = *plVar15;
joined_r0x00710384cd08:
  if (lVar17 == 0) {
    *local_a0 = 0;
    local_a0[1] = 0;
    local_a0[2] = (long)plVar20;
    *plVar15 = (long)local_a0;
    plVar20 = local_a0;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      plVar20 = (long *)*plVar15;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_2 + 0x50),plVar20);
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
  }
  else if (local_a0 != (long *)0x0) {
    nu::VirtualFreeHook(local_a0);
    FUN_710392eb40((ulong)plVar4);
  }
  iVar7 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x60;
    local_88._1_5_ = 0;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,param_9
                    );
    }
  }
  nu::VirtualAllocHook(0x60,0x10,local_a0);
  plVar4 = local_a0;
  *(undefined4 *)(local_a0 + 4) = 0x1a;
  local_a0[6] = (long)&DAT_7105269da8;
  local_a0[7] = (long)plVar16;
  local_a0[10] = (long)(local_a0 + 6);
  plVar15 = plVar19;
  plVar20 = plVar19;
  if ((long *)*plVar19 != (long *)0x0) {
    plVar15 = (long *)(param_2 + 0x50);
    plVar5 = (long *)*plVar19;
    do {
      while (plVar20 = plVar5, 0x1a < *(uint *)(plVar20 + 4)) {
        plVar15 = plVar20;
        plVar5 = (long *)*plVar20;
        if ((long *)*plVar20 == (long *)0x0) {
          lVar17 = *plVar20;
          goto joined_r0x00710384ce54;
        }
      }
      if (*(uint *)(plVar20 + 4) == 0x1a) break;
      plVar15 = plVar20 + 1;
      plVar5 = (long *)*plVar15;
    } while ((long *)*plVar15 != (long *)0x0);
  }
  lVar17 = *plVar15;
joined_r0x00710384ce54:
  if (lVar17 == 0) {
    *local_a0 = 0;
    local_a0[1] = 0;
    local_a0[2] = (long)plVar20;
    *plVar15 = (long)local_a0;
    plVar20 = local_a0;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      plVar20 = (long *)*plVar15;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_2 + 0x50),plVar20);
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
  }
  else if (local_a0 != (long *)0x0) {
    nu::VirtualFreeHook(local_a0);
    FUN_710392eb40((ulong)plVar4);
  }
  iVar7 = FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x60;
    local_88._1_5_ = 0;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_a0,0x10,(long ****)&DAT_00000060,param_5,param_6,param_7,param_8,param_9
                    );
    }
  }
  nu::VirtualAllocHook(0x60,0x10,local_a0);
  *(undefined4 *)(local_a0 + 4) = 0x2a;
  local_a0[6] = (long)&DAT_7105269e00;
  local_a0[7] = (long)plVar16;
  local_a0[10] = (long)(local_a0 + 6);
  plVar15 = (long *)*plVar19;
  if (plVar15 == (long *)0x0) {
    plVar20 = plVar19;
    if (*plVar19 == 0) goto LAB_710384cf98;
LAB_710384cf68:
    if (local_a0 != (long *)0x0) {
      nu::VirtualFreeHook(local_a0);
      FUN_710392eb40((ulong)local_a0);
    }
  }
  else {
    plVar19 = (long *)(param_2 + 0x50);
    do {
      while (plVar20 = plVar15, 0x2a < *(uint *)(plVar20 + 4)) {
        plVar19 = plVar20;
        plVar15 = (long *)*plVar20;
        if ((long *)*plVar20 == (long *)0x0) {
          lVar17 = *plVar20;
          goto joined_r0x00710384d3bc;
        }
      }
      if (*(uint *)(plVar20 + 4) == 0x2a) break;
      plVar19 = plVar20 + 1;
      plVar15 = (long *)*plVar19;
    } while ((long *)*plVar19 != (long *)0x0);
    lVar17 = *plVar19;
joined_r0x00710384d3bc:
    if (lVar17 != 0) goto LAB_710384cf68;
LAB_710384cf98:
    *local_a0 = 0;
    local_a0[1] = 0;
    local_a0[2] = (long)plVar20;
    *plVar19 = (long)local_a0;
    if (*(long *)*plVar16 != 0) {
      *plVar16 = *(long *)*plVar16;
      local_a0 = (long *)*plVar19;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(long **)(param_2 + 0x50),local_a0);
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
  }
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = (long *)0x0;
  if ((*param_3 & 1) == 0) {
    local_a0 = (long *)*param_3;
    local_98 = param_3[1];
    local_90 = (void *)param_3[2];
  }
  else {
    uVar8 = param_3[1];
    if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar22 = (void *)param_3[2];
    if (uVar8 < 0x17) {
      local_a0 = (long *)(ulong)(byte)((int)uVar8 << 1);
      __dest = (void *)((ulong)&local_a0 | 1);
      if (uVar8 != 0) goto LAB_710384d09c;
    }
    else {
      pppplVar21 = (long ****)(uVar8 + 0x10 & 0xfffffffffffffff0);
      iVar7 = FUN_710392e1f0(&local_68,0x10,pppplVar21,param_5,param_6,param_7,param_8,param_9);
      if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_88._0_1_ = (byte)pppplVar21;
        local_88._1_5_ = (undefined5)((ulong)pppplVar21 >> 8);
        local_88._6_2_ = (undefined2)((ulong)pppplVar21 >> 0x30);
        uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
        if ((uVar10 & 1) != 0) {
          FUN_710392e1f0(&local_68,0x10,pppplVar21,param_5,param_6,param_7,param_8,param_9);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar21,0x10,(void *)CONCAT44(uStack_64,local_68));
      __dest = (void *)CONCAT44(uStack_64,local_68);
      local_a0 = (long *)((ulong)pppplVar21 | 1);
      local_98 = uVar8;
      local_90 = __dest;
LAB_710384d09c:
      memcpy(__dest,pvVar22,uVar8);
    }
    *(undefined1 *)((long)__dest + uVar8) = 0;
  }
  iVar7 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000168,param_5,param_6,param_7,param_8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x68;
    local_88._1_5_ = 1;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000168,param_5,param_6,param_7,param_8,param_9
                    );
    }
  }
  pppplVar21 = (long ****)CONCAT44(uStack_64,local_68);
  nu::VirtualAllocHook(0x168,0x10,pppplVar21);
  puVar13 = (undefined8 *)CONCAT44(uStack_64,local_68);
  FUN_71037c3a70(puVar13);
  *puVar13 = &PTR_FUN_7105291c38;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[8] = &PTR_FUN_7105230c18;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0xc] = &PTR_FUN_7105230c18;
  puVar13[0x11] = 0;
  puVar13[0x10] = &PTR_FUN_7105230c18;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x15] = 0;
  puVar13[0x14] = &PTR_FUN_7105230c18;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  puVar13[0x18] = &PTR_FUN_7105230c18;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1c] = &PTR_FUN_7105230c18;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x28,pppplVar21,param_5,param_6,param_7,param_8,param_9);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = 0;
      local_88._0_1_ = 0x28;
      local_88._1_5_ = 0;
      local_88._6_2_ = 0;
      pppplVar21 = (long ****)&local_88;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x28,pppplVar21,param_5,param_6,param_7,param_8,param_9),
         puVar9 != (undefined8 *)0x0)) goto LAB_710384d1f4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710384d1f4:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar1 = puVar13 + 0x25;
  *(undefined4 *)(puVar9 + 4) = 0x3f800000;
  puVar13[0x20] = puVar9;
  puVar13[0x22] = puVar1;
  lVar17 = FUN_710392e290(0x10,0xb8,pppplVar21,param_5,param_6,param_7,param_8,param_9);
  if (lVar17 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = 0;
      local_88._0_1_ = 0xb8;
      local_88._1_5_ = 0;
      local_88._6_2_ = 0;
      pppplVar21 = (long ****)&local_88;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar8 & 1) != 0) &&
         (lVar17 = FUN_710392e290(0x10,0xb8,pppplVar21,param_5,param_6,param_7,param_8,param_9),
         lVar17 != 0)) goto LAB_710384d264;
    }
    lVar17 = 0;
  }
LAB_710384d264:
  puVar13[0x24] = lVar17;
  puVar9 = (undefined8 *)(lVar17 + 0x88);
  *puVar9 = 0;
  *(undefined8 **)(lVar17 + 0x90) = puVar9;
  *(undefined8 **)(lVar17 + 0x98) = puVar9;
  puVar9 = (undefined8 *)(lVar17 + 0xa0);
  *puVar9 = 0;
  *(undefined8 **)(lVar17 + 0xa8) = puVar9;
  *(undefined8 **)(lVar17 + 0xb0) = puVar9;
  puVar13[0x28] = puVar1;
  puVar13[0x29] = puVar13 + 0x2a;
  *(undefined4 *)(puVar13 + 0x2c) = 5;
  puVar13[0x26] = 0;
  puVar13[0x27] = puVar1;
  puVar13[0x2a] = 0;
  puVar13[0x2b] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x15] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_79 = 0;
  local_88._0_1_ = 0x1a;
  uStack_7f = 0x5356726f72;
  local_88._1_5_ = 0x6574737953;
  local_88._6_2_ = 0x456d;
  local_80 = 0x72;
  uStack_7a = 0;
  FUN_71038b69b0((long *)puVar13[0x20],0,(byte *)&local_88,param_5,param_6,param_7,param_8,param_9);
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_79 = 0;
  local_88._0_1_ = 0x1a;
  uStack_7f = 0x5350726f72;
  local_88._1_5_ = 0x6574737953;
  local_88._6_2_ = 0x456d;
  local_80 = 0x72;
  uStack_7a = 0;
  FUN_71038b69b0((long *)puVar13[0x20],4,(byte *)&local_88,param_5,param_6,param_7,param_8,param_9);
  pplVar14 = (long **)(puVar13 + 5);
  uVar8 = param_8;
  if (&local_a0 != pplVar14) {
    bVar6 = ((ulong)local_a0 & 1) != 0;
    param_9 = (void *)((ulong)&local_a0 | 1);
    if (bVar6) {
      param_9 = local_90;
    }
    bVar2 = *(byte *)pplVar14;
    uVar8 = (ulong)local_a0 >> 1 & 0x7f;
    if (bVar6) {
      uVar8 = local_98;
    }
    if ((bVar2 & 1) == 0) {
      uVar11 = 0x16;
      uVar10 = uVar8 - 0x16;
      if (0x15 < uVar8 && uVar10 != 0) {
LAB_710384d3a4:
        if ((bVar2 & 1) == 0) {
          param_5 = (byte ****)(ulong)(bVar2 >> 1);
        }
        else {
          param_5 = (byte ****)puVar13[6];
        }
        param_6 = (long ****)0x0;
        param_7 = param_5;
        FUN_71037cfe00((ulong *)pplVar14,uVar11,uVar10,param_5,(long ****)0x0,(long)param_5,uVar8,
                       param_9);
        goto LAB_710384d414;
      }
    }
    else {
      uVar11 = ((ulong)*pplVar14 & 0xfffffffffffffffe) - 1;
      uVar10 = uVar8 - uVar11;
      if (uVar11 <= uVar8 && uVar10 != 0) goto LAB_710384d3a4;
    }
    if ((bVar2 & 1) == 0) {
      pvVar22 = (void *)((long)puVar13 + 0x29);
    }
    else {
      pvVar22 = (void *)puVar13[7];
    }
    if (uVar8 != 0) {
      memmove(pvVar22,param_9,uVar8);
    }
    *(undefined1 *)((long)pvVar22 + uVar8) = 0;
    if (((ulong)*pplVar14 & 1) == 0) {
      *(char *)pplVar14 = (char)((int)uVar8 << 1);
      uVar8 = param_8;
    }
    else {
      puVar13[6] = uVar8;
      uVar8 = param_8;
    }
  }
LAB_710384d414:
  FUN_71038b64a0((long)puVar13);
  puVar9 = (undefined8 *)puVar13[1];
  uVar18 = *puVar9;
  plVar16 = *(long **)(param_2 + 0xc0);
  plVar15 = *(long **)(param_2 + 200);
  *(undefined8 **)(param_2 + 0xc0) = puVar13;
  *(undefined8 **)(param_2 + 200) = puVar9;
  lVar17 = *(long *)(param_2 + 0xd0);
  *(undefined8 *)(param_2 + 0xd0) = uVar18;
  if (((plVar15 != (long *)0x0) && (plVar16 != (long *)0x0)) && (*plVar15 == lVar17)) {
    (**(code **)(*plVar16 + 8))();
  }
  iVar7 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_5,param_6,param_7,uVar8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0xb0;
    local_88._1_5_ = 3;
    local_88._6_2_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_5,param_6,param_7,uVar8,param_9);
    }
  }
  pppplVar21 = (long ****)CONCAT44(uStack_64,local_68);
  nu::VirtualAllocHook(0x3b0,0x10,pppplVar21);
  ppplVar3 = (long ***)CONCAT44(uStack_64,local_68);
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_88._0_1_ = 0x78;
  local_88._1_5_ = 0x7105233b;
  local_88._6_2_ = 0;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7a = 0;
  uStack_79 = 0;
  if ((*(long **)(param_2 + 200) != (long *)0x0) &&
     (**(long **)(param_2 + 200) == *(long *)(param_2 + 0xd0))) {
    lVar17 = *(long *)(param_2 + 0xc0);
    local_80 = (undefined1)lVar17;
    uStack_7f = (undefined5)((ulong)lVar17 >> 8);
    uStack_7a = (undefined1)((ulong)lVar17 >> 0x30);
    uStack_79 = (undefined1)((ulong)lVar17 >> 0x38);
    if (lVar17 == 0) {
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      local_70 = 0;
    }
    else {
      puVar13 = *(undefined8 **)(lVar17 + 8);
      local_78 = SUB81(puVar13,0);
      uStack_77 = (undefined2)((ulong)puVar13 >> 8);
      uStack_75 = (undefined1)((ulong)puVar13 >> 0x18);
      uStack_74 = (undefined4)((ulong)puVar13 >> 0x20);
      local_70 = *puVar13;
    }
  }
  FUN_71038ae0b0(ppplVar3,(long)&local_88,pppplVar21,param_5,param_6,param_7,uVar8,param_9);
  if (ppplVar3 == (long ***)0x0) {
    pplVar14 = (long **)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    pplVar14 = ppplVar3[1];
    plVar16 = *pplVar14;
  }
  plVar15 = *(long **)(param_2 + 0xa0);
  plVar20 = *(long **)(param_2 + 0xa8);
  *(long ****)(param_2 + 0xa0) = ppplVar3;
  *(long ***)(param_2 + 0xa8) = pplVar14;
  lVar17 = *(long *)(param_2 + 0xb0);
  *(long **)(param_2 + 0xb0) = plVar16;
  if (((plVar20 != (long *)0x0) && (plVar15 != (long *)0x0)) && (*plVar20 == lVar17)) {
    (**(code **)(*plVar15 + 8))();
  }
  iVar7 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000168,param_5,param_6,param_7,uVar8,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0x68;
    local_88._1_5_ = 1;
    local_88._6_2_ = 0;
    uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar10 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000168,param_5,param_6,param_7,uVar8,param_9);
    }
  }
  pppplVar21 = (long ****)CONCAT44(uStack_64,local_68);
  nu::VirtualAllocHook(0x168,0x10,pppplVar21);
  puVar13 = (undefined8 *)CONCAT44(uStack_64,local_68);
  FUN_71037c3a70(puVar13);
  *puVar13 = &PTR_FUN_7105291c38;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[8] = &PTR_FUN_7105230c18;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  puVar13[0xd] = 0;
  puVar13[0xc] = &PTR_FUN_7105230c18;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  puVar13[0x10] = &PTR_FUN_7105230c18;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x15] = 0;
  puVar13[0x14] = &PTR_FUN_7105230c18;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  puVar13[0x18] = &PTR_FUN_7105230c18;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1c] = &PTR_FUN_7105230c18;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x28,pppplVar21,param_5,param_6,param_7,uVar8,param_9);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = 0;
      local_88._0_1_ = 0x28;
      local_88._1_5_ = 0;
      local_88._6_2_ = 0;
      pppplVar21 = (long ****)&local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x28,pppplVar21,param_5,param_6,param_7,uVar8,param_9),
         puVar9 != (undefined8 *)0x0)) goto LAB_710384d69c;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_710384d69c:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar1 = puVar13 + 0x25;
  *(undefined4 *)(puVar9 + 4) = 0x3f800000;
  puVar13[0x20] = puVar9;
  puVar13[0x22] = puVar1;
  lVar17 = FUN_710392e290(0x10,0xb8,pppplVar21,param_5,param_6,param_7,uVar8,param_9);
  if (lVar17 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_68 = 0;
      local_88._0_1_ = 0xb8;
      local_88._1_5_ = 0;
      local_88._6_2_ = 0;
      pppplVar21 = (long ****)&local_88;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_68);
      if (((uVar10 & 1) != 0) &&
         (lVar17 = FUN_710392e290(0x10,0xb8,pppplVar21,param_5,param_6,param_7,uVar8,param_9),
         lVar17 != 0)) goto LAB_710384d70c;
    }
    lVar17 = 0;
  }
LAB_710384d70c:
  puVar13[0x24] = lVar17;
  puVar9 = (undefined8 *)(lVar17 + 0x88);
  *puVar9 = 0;
  *(undefined8 **)(lVar17 + 0x90) = puVar9;
  *(undefined8 **)(lVar17 + 0x98) = puVar9;
  puVar9 = (undefined8 *)(lVar17 + 0xa0);
  *puVar9 = 0;
  *(undefined8 **)(lVar17 + 0xa8) = puVar9;
  *(undefined8 **)(lVar17 + 0xb0) = puVar9;
  puVar13[0x28] = puVar1;
  puVar13[0x29] = puVar13 + 0x2a;
  *(undefined4 *)(puVar13 + 0x2c) = 5;
  puVar13[0x26] = 0;
  puVar13[0x27] = puVar1;
  puVar13[0x2a] = 0;
  puVar13[0x2b] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  puVar13[0x11] = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x15] = 0;
  puVar13[0x16] = 0;
  puVar13[0x17] = 0;
  puVar13[0x19] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  puVar13[0x1d] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_79 = 0;
  local_88._0_1_ = 0x1a;
  uStack_7f = 0x5356726f72;
  local_88._1_5_ = 0x6574737953;
  local_88._6_2_ = 0x456d;
  local_80 = 0x72;
  uStack_7a = 0;
  FUN_71038b69b0((long *)puVar13[0x20],0,(byte *)&local_88,param_5,param_6,param_7,uVar8,param_9);
  uStack_74 = 0;
  local_88._0_1_ = 0x24;
  local_88._1_5_ = 0x6574737953;
  local_88._6_2_ = 0x456d;
  local_80 = 0x6d;
  uStack_7f = 0x7245797470;
  uStack_7a = 0x72;
  uStack_79 = 0x6f;
  local_78 = 0x72;
  uStack_77 = 0x5350;
  uStack_75 = 0;
  FUN_71038b69b0((long *)puVar13[0x20],4,(byte *)&local_88,param_5,param_6,param_7,uVar8,param_9);
  pplVar14 = (long **)(puVar13 + 5);
  uVar10 = uVar8;
  if (&local_a0 == pplVar14) goto LAB_710384d8a4;
  bVar6 = ((ulong)local_a0 & 1) != 0;
  param_9 = (void *)((ulong)&local_a0 | 1);
  if (bVar6) {
    param_9 = local_90;
  }
  bVar2 = *(byte *)pplVar14;
  uVar10 = (ulong)local_a0 >> 1 & 0x7f;
  if (bVar6) {
    uVar10 = local_98;
  }
  if ((bVar2 & 1) == 0) {
    uVar12 = 0x16;
    uVar11 = uVar10 - 0x16;
    if (0x15 < uVar10 && uVar11 != 0) {
LAB_710384d848:
      if ((bVar2 & 1) == 0) {
        param_5 = (byte ****)(ulong)(bVar2 >> 1);
      }
      else {
        param_5 = (byte ****)puVar13[6];
      }
      param_6 = (long ****)0x0;
      param_7 = param_5;
      FUN_71037cfe00((ulong *)pplVar14,uVar12,uVar11,param_5,(long ****)0x0,(long)param_5,uVar10,
                     param_9);
      goto LAB_710384d8a4;
    }
  }
  else {
    uVar12 = ((ulong)*pplVar14 & 0xfffffffffffffffe) - 1;
    uVar11 = uVar10 - uVar12;
    if (uVar12 <= uVar10 && uVar11 != 0) goto LAB_710384d848;
  }
  if ((bVar2 & 1) == 0) {
    pvVar22 = (void *)((long)puVar13 + 0x29);
  }
  else {
    pvVar22 = (void *)puVar13[7];
  }
  if (uVar10 != 0) {
    memmove(pvVar22,param_9,uVar10);
  }
  *(undefined1 *)((long)pvVar22 + uVar10) = 0;
  if (((ulong)*pplVar14 & 1) == 0) {
    *(char *)pplVar14 = (char)((int)uVar10 << 1);
    uVar10 = uVar8;
  }
  else {
    puVar13[6] = uVar10;
    uVar10 = uVar8;
  }
LAB_710384d8a4:
  FUN_71038b64a0((long)puVar13);
  puVar9 = (undefined8 *)puVar13[1];
  uVar18 = *puVar9;
  plVar16 = *(long **)(param_2 + 0x100);
  plVar15 = *(long **)(param_2 + 0x108);
  *(undefined8 **)(param_2 + 0x100) = puVar13;
  *(undefined8 **)(param_2 + 0x108) = puVar9;
  lVar17 = *(long *)(param_2 + 0x110);
  *(undefined8 *)(param_2 + 0x110) = uVar18;
  if (((plVar15 != (long *)0x0) && (plVar16 != (long *)0x0)) && (*plVar15 == lVar17)) {
    (**(code **)(*plVar16 + 8))();
  }
  iVar7 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_5,param_6,param_7,uVar10,
                         param_9);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88._0_1_ = 0xb0;
    local_88._1_5_ = 3;
    local_88._6_2_ = 0;
    uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar8 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_000003b0,param_5,param_6,param_7,uVar10,param_9)
      ;
    }
  }
  pppplVar21 = (long ****)CONCAT44(uStack_64,local_68);
  nu::VirtualAllocHook(0x3b0,0x10,pppplVar21);
  ppplVar3 = (long ***)CONCAT44(uStack_64,local_68);
  local_78 = 0;
  uStack_77 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  local_70 = 0;
  local_88._0_1_ = 0x78;
  local_88._1_5_ = 0x7105233b;
  local_88._6_2_ = 0;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7a = 0;
  uStack_79 = 0;
  if ((*(long **)(param_2 + 0x108) != (long *)0x0) &&
     (**(long **)(param_2 + 0x108) == *(long *)(param_2 + 0x110))) {
    lVar17 = *(long *)(param_2 + 0x100);
    local_80 = (undefined1)lVar17;
    uStack_7f = (undefined5)((ulong)lVar17 >> 8);
    uStack_7a = (undefined1)((ulong)lVar17 >> 0x30);
    uStack_79 = (undefined1)((ulong)lVar17 >> 0x38);
    if (lVar17 == 0) {
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      local_70 = 0;
    }
    else {
      puVar13 = *(undefined8 **)(lVar17 + 8);
      local_78 = SUB81(puVar13,0);
      uStack_77 = (undefined2)((ulong)puVar13 >> 8);
      uStack_75 = (undefined1)((ulong)puVar13 >> 0x18);
      uStack_74 = (undefined4)((ulong)puVar13 >> 0x20);
      local_70 = *puVar13;
    }
  }
  FUN_71038ae0b0(ppplVar3,(long)&local_88,pppplVar21,param_5,param_6,param_7,uVar10,param_9);
  if (ppplVar3 == (long ***)0x0) {
    pplVar14 = (long **)0x0;
    plVar16 = (long *)0x0;
  }
  else {
    pplVar14 = ppplVar3[1];
    plVar16 = *pplVar14;
  }
  plVar15 = *(long **)(param_2 + 0xe0);
  plVar20 = *(long **)(param_2 + 0xe8);
  *(long ****)(param_2 + 0xe0) = ppplVar3;
  *(long ***)(param_2 + 0xe8) = pplVar14;
  lVar17 = *(long *)(param_2 + 0xf0);
  *(long **)(param_2 + 0xf0) = plVar16;
  if (((plVar20 != (long *)0x0) && (plVar15 != (long *)0x0)) && (*plVar20 == lVar17)) {
    (**(code **)(*plVar15 + 8))();
  }
  pvVar22 = local_90;
  if (((ulong)local_a0 & 1) != 0) {
    nu::VirtualFreeHook(local_90);
    FUN_710392eb40((ulong)pvVar22);
  }
  *param_1 = 0;
  return;
}

