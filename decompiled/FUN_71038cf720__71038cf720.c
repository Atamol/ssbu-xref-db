// addr:      71038cf720
// offset:    0x38cf720
// name:      FUN_71038cf720
// mangled:   
// signature: undefined __cdecl FUN_71038cf720(undefined8 * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, byte * param_8)


void FUN_71038cf720(undefined8 *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,byte *param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  byte ****ppppbVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long ****pppplVar18;
  logic_error *this;
  uint uVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong *puVar22;
  byte *pbVar23;
  long ****pppplVar24;
  char *pcVar25;
  ulong *puVar26;
  undefined8 uVar27;
  long **pplVar28;
  long *plVar29;
  long *plVar30;
  long ***ppplVar31;
  long ***ppplVar32;
  ulong uVar33;
  undefined8 *puVar34;
  long ***ppplVar35;
  long *plVar36;
  long ****pppplVar37;
  void *pvVar38;
  long ****pppplVar39;
  long ***ppplVar40;
  long ***ppplVar41;
  long lVar42;
  undefined8 *puVar43;
  long *plVar44;
  long **pplVar45;
  ulong *puVar46;
  long local_168;
  long *local_150;
  undefined **ppuStack_108;
  long ***ppplStack_100;
  long **pplStack_f8;
  long *plStack_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined **local_e0;
  long ***local_d8;
  long **local_d0;
  long *local_c8;
  undefined8 local_c0;
  long ***local_b8;
  long ***local_b0;
  long **local_a8;
  long *local_a0;
  long ****pppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  int iStack_80;
  long ***ppplStack_78;
  long ****apppplStack_70 [2];
  
  iVar15 = FUN_710392e1f0(&local_e8,0x10,(long ****)0x9a0,param_4,param_5,param_6,param_7,param_8);
  if ((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_c0 = (long ****)0x9a0;
    uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
    if ((uVar16 & 1) != 0) {
      FUN_710392e1f0(&local_e8,0x10,(long ****)0x9a0,param_4,param_5,param_6,param_7,param_8);
    }
  }
  nu::VirtualAllocHook(0x9a0,0x10,(void *)CONCAT44(uStack_e4,local_e8));
  plVar36 = (long *)CONCAT44(uStack_e4,local_e8);
  FUN_71037c3a70(plVar36);
  *plVar36 = (long)&PTR_FUN_7105291de8;
  plVar4 = plVar36 + 0xb;
  plVar29 = plVar36 + 3;
  *plVar29 = (long)&PTR_FUN_7105291e68;
  plVar30 = plVar36 + 4;
  *plVar30 = 0;
  plVar36[5] = 0;
  plVar36[6] = 0;
  *(undefined4 *)(plVar36 + 2) = 0;
  plVar36[7] = 0;
  plVar36[8] = (long)plVar4;
  plVar36[0x10d] = 0x40;
  plVar36[0x10b] = (long)(plVar36 + 0x10e);
  plVar36[0x10c] = 0;
  plVar36[0x131] = 0;
  plVar36[0x130] = 0;
  plVar36[0x12f] = 0;
  plVar36[0x12e] = 0;
  *(undefined2 *)(plVar36 + 0x133) = 0;
  plVar36[9] = 0;
  plVar36[10] = 0x40;
  *(undefined4 *)(plVar36 + 0x132) = 0x3f800000;
  if (plVar36 == (long *)0x0) {
    local_150 = (long *)0x0;
    local_168 = 0;
  }
  else {
    local_150 = (long *)plVar36[1];
    local_168 = *local_150;
  }
  local_d0 = (long **)0x0;
  local_c8 = (long *)0x0;
  local_e0 = &PTR_FUN_7105291e68;
  local_d8 = (long ***)0x0;
  local_e8 = 0;
  if ((*(long **)(param_3 + 0x10) == (long *)0x0) ||
     (**(long **)(param_3 + 0x10) != *(long *)(param_3 + 0x18))) {
    plVar44 = (long *)0x0;
    pplVar45 = (long **)0x0;
    ppplVar40 = (long ***)0x0;
  }
  else {
    ppplVar40 = *(long ****)(param_3 + 8);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    if (ppplVar40 == (long ***)0x0) {
      plVar44 = (long *)0x0;
      pplVar45 = (long **)0x0;
    }
    else {
      pplVar45 = ppplVar40[1];
      plVar44 = *pplVar45;
    }
  }
  local_a8 = (long **)0x0;
  local_a0 = (long *)0x0;
  local_b8 = (long ***)&PTR_FUN_7105239490;
  local_b0 = (long ***)0x0;
  ppplVar41 = ppplVar40;
  if ((pplVar45 != (long **)0x0) && (*pplVar45 == plVar44)) {
    if (ppplVar40 == (long ***)0x0) {
      local_a0 = (long *)0x0;
      local_a8 = (long **)0x0;
    }
    else {
      local_a8 = ppplVar40[1];
      local_a0 = *local_a8;
    }
    plVar44 = (long *)0x0;
    pplVar45 = (long **)0x0;
    ppplVar41 = (long ***)0x0;
    local_b0 = ppplVar40;
  }
  local_c0 = (long ****)CONCAT44(local_c0._4_4_,1);
  FUN_71038cf180(0,&local_e0);
  ppplVar40 = local_b0;
  local_d0 = (long **)0x0;
  local_c8 = (long *)0x0;
  local_e0 = &PTR_FUN_7105239490;
  local_d8 = (long ***)0x0;
  if ((local_a8 != (long **)0x0) && (*local_a8 == local_a0)) {
    local_b0 = (long ***)0x0;
    local_a8 = (long **)0x0;
    local_a0 = (long *)0x0;
    local_d8 = ppplVar40;
    if (ppplVar40 == (long ***)0x0) {
      local_d0 = (long **)0x0;
      local_c8 = (long *)0x0;
    }
    else {
      local_d0 = ppplVar40[1];
      local_c8 = *local_d0;
    }
  }
  local_e8 = 1;
  FUN_71038cf180((uint)local_c0 ^ (int)(uint)local_c0 >> 0x1f,&local_b8);
  if (((pplVar45 != (long **)0x0) && (*pplVar45 == plVar44)) && (ppplVar41 != (long ***)0x0)) {
    (*(code *)(*ppplVar41)[1])(ppplVar41);
  }
  ppplVar40 = local_d8;
  uVar6 = local_e8 ^ (int)local_e8 >> 0x1f;
  if (0x13 < uVar6) goto override_jmp_71038cf9cc_case_2;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_71045355fc + (ulong)uVar6 * 4)) {
  case 0xff39a3d4:
    ppuStack_108 = &PTR_FUN_7105291e68;
    ppplStack_100 = local_d8;
    pplStack_f8 = local_d0;
    plStack_f0 = local_c8;
    break;
  case 0xff39a3ec:
    pplStack_f8 = (long **)0x0;
    plStack_f0 = (long *)0x0;
    ppuStack_108 = &PTR_FUN_7105239490;
    ppplStack_100 = (long ***)0x0;
    if ((local_d0 != (long **)0x0) && (*local_d0 == local_c8)) {
      local_d0 = (long **)0x0;
      local_c8 = (long *)0x0;
      local_d8 = (long ***)0x0;
      ppplStack_100 = ppplVar40;
      if (ppplVar40 == (long ***)0x0) {
        pplStack_f8 = (long **)0x0;
        plStack_f0 = (long *)0x0;
      }
      else {
        pplStack_f8 = ppplVar40[1];
        plStack_f0 = *pplStack_f8;
      }
    }
    break;
  case 0xff39b76c:
    goto override_jmp_71038cf9cc_case_2;
  }
  uVar1 = (int)uVar6 >> 0x1f;
  FUN_71038cf200(&local_c0,uVar6 ^ uVar1,(long)&ppuStack_108);
  if (((local_b0 == (long ***)0x0) || (*local_b0 != local_a8)) ||
     (FUN_71038cf200(&local_c0,uVar6 ^ uVar1,(long)&ppuStack_108), ppplVar40 = ppplStack_100,
     *(char *)(local_b8 + 0x991) == '\0')) {
    bVar14 = false;
    goto LAB_71038cfb04;
  }
  uVar9 = *(uint *)(plVar36 + 2);
  uVar19 = (int)uVar9 >> 0x1f;
  if (uVar9 == uVar6) {
    if (0x13 < (uVar9 ^ uVar19)) {
override_jmp_71038cf9cc_case_2:
                    /* WARNING: Subroutine does not return */
      FUN_710356c0d0();
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&DAT_710453569c + (ulong)(uVar9 ^ uVar19) * 4)) {
    case 0xff39a42c:
      if ((pplStack_f8 == (long **)0x0) || (*pplStack_f8 != plStack_f0)) {
        *plVar30 = 0;
      }
      else {
        *plVar30 = (long)ppplStack_100;
        if (ppplStack_100 != (long ***)0x0) {
          pplVar45 = ppplStack_100[1];
          plVar36[5] = (long)pplVar45;
          plVar36[6] = (long)*pplVar45;
          break;
        }
      }
      plVar36[5] = 0;
      plVar36[6] = 0;
      break;
    case 0xff39a5a0:
      pplStack_f8 = (long **)0x0;
      plStack_f0 = (long *)0x0;
      ppplStack_100 = (long ***)0x0;
      if (ppplVar40 == (long ***)0x0) {
        pplVar45 = (long **)0x0;
        plVar30 = (long *)0x0;
      }
      else {
        pplVar45 = ppplVar40[1];
        plVar30 = *pplVar45;
      }
      plVar44 = (long *)plVar36[4];
      plVar8 = (long *)plVar36[5];
      plVar36[4] = (long)ppplVar40;
      plVar36[5] = (long)pplVar45;
      lVar21 = plVar36[6];
      plVar36[6] = (long)plVar30;
      if (((plVar8 != (long *)0x0) && (plVar44 != (long *)0x0)) && (*plVar8 == lVar21)) {
        (**(code **)(*plVar44 + 8))();
      }
      break;
    case 0xff39b6cc:
      goto override_jmp_71038cf9cc_case_2;
    }
  }
  else {
    uVar7 = uVar6 ^ uVar1;
    if (0x13 < uVar7) goto override_jmp_71038cf9cc_case_2;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&DAT_710453564c + (ulong)uVar7 * 4)) {
    case 0xff39a548:
      FUN_71038cf180(uVar9 ^ uVar19,plVar36 + 3);
      plVar36[3] = (long)&PTR_FUN_7105291e48;
      plVar36[4] = (long)ppplStack_100;
      plVar36[5] = (long)pplStack_f8;
      plVar36[3] = (long)&PTR_FUN_7105291e68;
      plVar36[6] = (long)plStack_f0;
      break;
    case 0xff39a60c:
      FUN_71038cf180(uVar9 ^ uVar19,plVar36 + 3);
      ppplVar40 = ppplStack_100;
      plVar36[4] = 0;
      plVar36[5] = 0;
      plVar36[6] = 0;
      plVar36[3] = (long)&PTR_FUN_7105239490;
      if ((pplStack_f8 != (long **)0x0) && (*pplStack_f8 == plStack_f0)) {
        pplStack_f8 = (long **)0x0;
        plStack_f0 = (long *)0x0;
        ppplStack_100 = (long ***)0x0;
        plVar36[4] = (long)ppplVar40;
        if (ppplVar40 == (long ***)0x0) {
          plVar36[5] = 0;
          plVar36[6] = 0;
        }
        else {
          pplVar45 = ppplVar40[1];
          plVar36[5] = (long)pplVar45;
          plVar36[6] = (long)*pplVar45;
        }
      }
      break;
    case 0xff39b71c:
      goto override_jmp_71038cf9cc_case_2;
    }
    *(uint *)(plVar36 + 2) = uVar7;
  }
  plVar36[7] = *(long *)(param_2 + 0x638);
  uVar16 = *(ulong *)(param_2 + 0x28);
  if ((ulong)plVar36[10] < uVar16) {
    pppplVar37 = (long ****)(uVar16 << 5);
    iVar15 = FUN_710392e1f0(&pppplStack_98,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
    if (((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_c0 = pppplVar37,
       uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0), (uVar17 & 1) != 0))
    {
      FUN_710392e1f0(&pppplStack_98,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar37,0x10,pppplStack_98);
    pppplVar18 = pppplStack_98;
    puVar43 = (undefined8 *)plVar36[8];
    lVar21 = plVar36[9];
    puVar20 = puVar43 + lVar21 * 4;
    pppplVar37 = pppplStack_98;
    if ((lVar21 != 0) && (puVar43 != (undefined8 *)0x0)) {
      uVar17 = (long)puVar20 + (-0x20 - (long)puVar43);
      puVar34 = puVar43;
      if (((uint)uVar17 >> 5 & 1) == 0) {
        ppplVar40 = (long ***)*puVar43;
        ppplVar41 = (long ***)puVar43[2];
        pppplStack_98[1] = (long ***)puVar43[1];
        pppplStack_98[2] = ppplVar41;
        *pppplStack_98 = ppplVar40;
        puVar43[1] = 0;
        puVar43[2] = 0;
        *puVar43 = 0;
        *(undefined4 *)(pppplStack_98 + 3) = *(undefined4 *)(puVar43 + 3);
        puVar34 = puVar43 + 4;
        pppplVar37 = pppplStack_98 + 4;
      }
      if (0x1f < uVar17) {
        do {
          ppplVar40 = (long ***)*puVar34;
          ppplVar41 = (long ***)puVar34[2];
          pppplVar37[1] = (long ***)puVar34[1];
          pppplVar37[2] = ppplVar41;
          *pppplVar37 = ppplVar40;
          puVar34[1] = 0;
          puVar34[2] = 0;
          *puVar34 = 0;
          *(undefined4 *)(pppplVar37 + 3) = *(undefined4 *)(puVar34 + 3);
          ppplVar41 = (long ***)puVar34[6];
          ppplVar40 = (long ***)puVar34[5];
          pppplVar37[4] = (long ***)puVar34[4];
          pppplVar37[5] = ppplVar40;
          pppplVar37[6] = ppplVar41;
          puVar2 = puVar34 + 7;
          puVar34[5] = 0;
          puVar34[6] = 0;
          puVar34[4] = 0;
          puVar34 = puVar34 + 8;
          *(undefined4 *)(pppplVar37 + 7) = *(undefined4 *)puVar2;
          pppplVar37 = pppplVar37 + 8;
        } while (puVar34 != puVar20);
      }
      pppplVar37 = (long ****)((long)pppplStack_98 + (uVar17 & 0xffffffffffffffe0) + 0x20);
    }
    if (puVar43 != (undefined8 *)0x0) {
      lVar42 = plVar36[9];
      if (lVar42 != lVar21) {
        uVar17 = (long)(puVar43 + lVar42 * 4) + (-0x20 - (long)puVar20);
        pppplVar39 = pppplVar37;
        if (((uint)uVar17 >> 5 & 1) == 0) {
          ppplVar40 = (long ***)*puVar20;
          ppplVar41 = (long ***)puVar20[2];
          pppplVar37[1] = (long ***)puVar20[1];
          pppplVar37[2] = ppplVar41;
          *pppplVar37 = ppplVar40;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          *(undefined4 *)(pppplVar37 + 3) = *(undefined4 *)(puVar20 + 3);
          puVar20 = puVar20 + 4;
          pppplVar39 = pppplVar37 + 4;
        }
        if (0x1f < uVar17) {
          do {
            ppplVar40 = (long ***)*puVar20;
            ppplVar41 = (long ***)puVar20[2];
            pppplVar39[1] = (long ***)puVar20[1];
            pppplVar39[2] = ppplVar41;
            *pppplVar39 = ppplVar40;
            puVar20[1] = 0;
            puVar20[2] = 0;
            *puVar20 = 0;
            *(undefined4 *)(pppplVar39 + 3) = *(undefined4 *)(puVar20 + 3);
            ppplVar41 = (long ***)puVar20[6];
            ppplVar40 = (long ***)puVar20[5];
            pppplVar39[4] = (long ***)puVar20[4];
            pppplVar39[5] = ppplVar40;
            pppplVar39[6] = ppplVar41;
            puVar34 = puVar20 + 7;
            puVar20[5] = 0;
            puVar20[6] = 0;
            puVar20[4] = 0;
            puVar20 = puVar20 + 8;
            *(undefined4 *)(pppplVar39 + 7) = *(undefined4 *)puVar34;
            pppplVar39 = pppplVar39 + 8;
          } while (puVar20 != puVar43 + lVar42 * 4);
        }
        lVar42 = plVar36[9];
        pppplVar37 = (long ****)((long)pppplVar37 + (uVar17 & 0xffffffffffffffe0) + 0x20);
      }
      if (lVar42 != 0) {
        puVar43 = puVar43 + 2;
        do {
          if ((*(byte *)(puVar43 + -2) & 1) != 0) {
            pvVar38 = (void *)*puVar43;
            nu::VirtualFreeHook(pvVar38);
            FUN_710392eb40((ulong)pvVar38);
          }
          lVar42 = lVar42 + -1;
          puVar43 = puVar43 + 4;
        } while (lVar42 != 0);
      }
      plVar30 = (long *)plVar36[8];
      if (plVar30 != plVar4) {
        nu::VirtualFreeHook(plVar30);
        FUN_710392eb40((ulong)plVar30);
      }
    }
    plVar36[10] = uVar16;
    plVar36[8] = (long)pppplVar18;
    plVar36[9] = (long)pppplVar37 - (long)pppplVar18 >> 5;
    uVar16 = *(ulong *)(param_2 + 0x28);
  }
  if (uVar16 != 0) {
    plVar30 = plVar36 + 0x12e;
    ppplVar40 = (long ***)((ulong)&pppplStack_98 | 1);
    uVar16 = 0;
    puVar5 = (ulong *)(plVar36 + 0x130);
    do {
      pppplVar37 = (long ****)&SUB_00000018;
      local_b8 = (long ***)0x0;
      local_b0 = (long ***)0x0;
      local_c0 = (long ****)0x0;
      pbVar23 = (byte *)(*(long *)(param_2 + 0x20) + uVar16 * 0x18);
      if ((byte *)&local_c0 == pbVar23) {
        uVar19 = 0;
        ppplVar41 = local_b8;
      }
      else {
        lVar21 = *(long *)(param_2 + 0x20) + uVar16 * 0x18;
        param_8 = pbVar23 + 1;
        ppplVar41 = (long ***)(ulong)(*pbVar23 >> 1);
        if ((*pbVar23 & 1) != 0) {
          param_8 = *(byte **)(lVar21 + 0x10);
          ppplVar41 = *(long ****)(lVar21 + 8);
        }
        if (ppplVar41 < (long ***)0x16 || (long)ppplVar41 - 0x16U == 0) {
          if (ppplVar41 != (long ***)0x0) {
            memmove((long ***)((ulong)&local_c0 | 1),param_8,(size_t)ppplVar41);
          }
          *(undefined1 *)((long)&local_c0 + 1 + (long)ppplVar41) = 0;
          uVar19 = (uint)(byte)local_c0;
          if (((ulong)local_c0 & 1) == 0) {
            uVar19 = (int)ppplVar41 << 1;
            local_c0 = (long ****)CONCAT71(local_c0._1_7_,(char)uVar19);
            ppplVar41 = local_b8;
          }
        }
        else {
          param_4 = (byte ****)0x0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          FUN_71037cfe00(&local_c0,0x16,(long)ppplVar41 - 0x16U,(byte ****)0x0,(long ****)0x0,0,
                         (size_t)ppplVar41,param_8);
          uVar19 = (uint)(byte)local_c0;
          param_7 = ppplVar41;
          ppplVar41 = local_b8;
        }
      }
      local_b8 = ppplVar41;
      ppplVar31 = local_b0;
      ppplVar32 = local_b8;
      ppplVar35 = (long ***)(ulong)(uVar19 >> 1 & 0x7f);
      ppplVar41 = (long ***)((ulong)&local_c0 | 1);
      if ((uVar19 & 1) != 0) {
        ppplVar35 = local_b8;
        ppplVar41 = local_b0;
      }
      if (ppplVar35 == (long ***)0x0) {
        uVar19 = 0;
      }
      else {
        if (ppplVar35 == (long ***)0x1) {
          uVar19 = 0;
        }
        else {
          uVar17 = 0;
          lVar21 = ((ulong)ppplVar35 & 1) - (long)ppplVar35;
          do {
            bVar11 = *(byte *)ppplVar41;
            pbVar23 = (byte *)((long)ppplVar41 + 1);
            ppplVar41 = (long ***)((long)ppplVar41 + 2);
            uVar33 = (ulong)*pbVar23 * -0x395b586ca42e166b;
            uVar17 = ((uVar33 ^ uVar33 >> 0x2f) * -0x395b586ca42e166b ^
                     (((ulong)bVar11 * -0x395b586ca42e166b ^
                      (ulong)bVar11 * -0x395b586ca42e166b >> 0x2f) * -0x395b586ca42e166b ^ uVar17) *
                     -0x395b586ca42e166b + 0xe6546b64) * -0x395b586ca42e166b + 0xe6546b64;
            uVar19 = (uint)uVar17;
            lVar21 = lVar21 + 2;
          } while (lVar21 != 0);
          if (((ulong)ppplVar35 & 1) == 0) goto LAB_71038d0650;
        }
        uVar19 = (((uint)((ulong)*(byte *)ppplVar41 * -0x395b586ca42e166b) ^
                  (uint)((ulong)*(byte *)ppplVar41 * -0x395b586ca42e166b >> 0x2f)) * 0x5bd1e995 ^
                 uVar19) * 0x5bd1e995 + 0xe6546b64;
      }
LAB_71038d0650:
      local_a8 = (long **)CONCAT44(local_a8._4_4_,uVar19);
      uVar17 = plVar36[10];
      puVar26 = (ulong *)(plVar36[8] + plVar36[9] * 0x20);
      if ((ulong)plVar36[9] < uVar17) {
        puVar26[1] = 0;
        puVar26[2] = 0;
        *puVar26 = 0;
        if (((ulong)local_c0 & 1) == 0) {
          puVar26[1] = (ulong)local_b8;
          puVar26[2] = (ulong)local_b0;
          *puVar26 = (ulong)local_c0;
        }
        else {
          if ((long ***)0xffffffffffffffef < local_b8) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_b8 < (long ***)0x17) {
            pppplVar18 = (long ****)((long)puVar26 + 1);
            *(char *)puVar26 = (char)((int)local_b8 << 1);
            if (local_b8 != (long ***)0x0) goto LAB_71038d073c;
          }
          else {
            pppplVar37 = (long ****)((ulong)(local_b8 + 2) & 0xfffffffffffffff0);
            iVar15 = FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                    param_8);
            if (((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (pppplStack_98 = pppplVar37,
               uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&pppplStack_98),
               (uVar17 & 1) != 0)) {
              FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8)
              ;
            }
            nu::VirtualAllocHook((ulong)pppplVar37,0x10,apppplStack_70[0]);
            *puVar26 = (ulong)pppplVar37 | 1;
            puVar26[1] = (ulong)ppplVar32;
            puVar26[2] = (ulong)apppplStack_70[0];
            pppplVar18 = apppplStack_70[0];
LAB_71038d073c:
            memcpy(pppplVar18,ppplVar31,(size_t)ppplVar32);
          }
          *(undefined1 *)((long)pppplVar18 + (long)ppplVar32) = 0;
        }
        *(undefined4 *)(puVar26 + 3) = local_a8._0_4_;
        plVar36[9] = plVar36[9] + 1;
      }
      else {
        if (-uVar17 == -0x7ffffffffffffff) {
          this = (logic_error *)__cxa_allocate_exception(0x10);
          std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
          *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
        }
        uVar33 = uVar17;
        if (uVar17 == 0) {
          uVar33 = 1;
        }
        lVar21 = 0x7ffffffffffffff;
        if (uVar33 <= -uVar17 + 0x7ffffffffffffff) {
          lVar21 = uVar33 + uVar17;
        }
        pppplVar37 = (long ****)(lVar21 << 5);
        iVar15 = FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                param_8);
        if (((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (pppplStack_98 = pppplVar37,
           uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&pppplStack_98),
           (uVar17 & 1) != 0)) {
          FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar37,0x10,apppplStack_70[0]);
        pppplVar18 = apppplStack_70[0];
        ppplVar35 = local_b0;
        ppplVar41 = local_b8;
        puVar46 = (ulong *)plVar36[8];
        pppplVar39 = apppplStack_70[0];
        if ((puVar46 != (ulong *)0x0) && (puVar46 != puVar26)) {
          uVar17 = (long)puVar26 + (-0x20 - (long)puVar46);
          puVar22 = puVar46;
          pppplVar37 = apppplStack_70[0];
          if (((uint)uVar17 >> 5 & 1) == 0) {
            ppplVar32 = (long ***)*puVar46;
            ppplVar31 = (long ***)puVar46[2];
            apppplStack_70[0][1] = (long ***)puVar46[1];
            apppplStack_70[0][2] = ppplVar31;
            *apppplStack_70[0] = ppplVar32;
            puVar46[1] = 0;
            puVar46[2] = 0;
            *puVar46 = 0;
            *(int *)(apppplStack_70[0] + 3) = (int)puVar46[3];
            puVar22 = puVar46 + 4;
            pppplVar37 = apppplStack_70[0] + 4;
          }
          if (0x1f < uVar17) {
            uVar33 = (long)puVar26 + (-0x40 - (long)puVar22);
            if (((uint)uVar33 >> 6 & 1) == 0) {
              ppplVar32 = (long ***)*puVar22;
              ppplVar31 = (long ***)puVar22[2];
              pppplVar37[1] = (long ***)puVar22[1];
              pppplVar37[2] = ppplVar31;
              *pppplVar37 = ppplVar32;
              puVar22[1] = 0;
              puVar22[2] = 0;
              *puVar22 = 0;
              *(int *)(pppplVar37 + 3) = (int)puVar22[3];
              ppplVar31 = (long ***)puVar22[6];
              ppplVar32 = (long ***)puVar22[5];
              pppplVar37[4] = (long ***)puVar22[4];
              pppplVar37[5] = ppplVar32;
              pppplVar37[6] = ppplVar31;
              puVar22[5] = 0;
              puVar22[6] = 0;
              puVar22[4] = 0;
              *(int *)(pppplVar37 + 7) = (int)puVar22[7];
              puVar22 = puVar22 + 8;
              pppplVar37 = pppplVar37 + 8;
            }
            if (0x3f < uVar33) {
              do {
                ppplVar32 = (long ***)*puVar22;
                ppplVar31 = (long ***)puVar22[2];
                pppplVar37[1] = (long ***)puVar22[1];
                pppplVar37[2] = ppplVar31;
                *pppplVar37 = ppplVar32;
                puVar22[1] = 0;
                puVar22[2] = 0;
                *puVar22 = 0;
                *(int *)(pppplVar37 + 3) = (int)puVar22[3];
                ppplVar31 = (long ***)puVar22[6];
                ppplVar32 = (long ***)puVar22[5];
                pppplVar37[4] = (long ***)puVar22[4];
                pppplVar37[5] = ppplVar32;
                pppplVar37[6] = ppplVar31;
                puVar22[5] = 0;
                puVar22[6] = 0;
                puVar22[4] = 0;
                *(int *)(pppplVar37 + 7) = (int)puVar22[7];
                ppplVar32 = (long ***)puVar22[8];
                ppplVar31 = (long ***)puVar22[10];
                pppplVar37[9] = (long ***)puVar22[9];
                pppplVar37[10] = ppplVar31;
                pppplVar37[8] = ppplVar32;
                puVar22[8] = 0;
                puVar22[9] = 0;
                puVar22[10] = 0;
                *(int *)(pppplVar37 + 0xb) = (int)puVar22[0xb];
                ppplVar32 = (long ***)puVar22[0xc];
                ppplVar31 = (long ***)puVar22[0xe];
                pppplVar37[0xd] = (long ***)puVar22[0xd];
                pppplVar37[0xe] = ppplVar31;
                pppplVar37[0xc] = ppplVar32;
                puVar3 = puVar22 + 0xf;
                puVar22[0xd] = 0;
                puVar22[0xe] = 0;
                puVar22[0xc] = 0;
                puVar22 = puVar22 + 0x10;
                *(int *)(pppplVar37 + 0xf) = (int)*puVar3;
                pppplVar37 = pppplVar37 + 0x10;
              } while (puVar22 != puVar26);
            }
          }
          pppplVar39 = (long ****)((long)apppplStack_70[0] + (uVar17 & 0xffffffffffffffe0) + 0x20);
        }
        pppplVar39[1] = (long ***)0x0;
        pppplVar39[2] = (long ***)0x0;
        *pppplVar39 = (long ***)0x0;
        if (((ulong)local_c0 & 1) == 0) {
          pppplVar39[1] = local_b8;
          pppplVar39[2] = local_b0;
          *pppplVar39 = (long ***)local_c0;
        }
        else {
          if ((long ***)0xffffffffffffffef < local_b8) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_b8 < (long ***)0x17) {
            pppplVar37 = (long ****)((long)pppplVar39 + 1);
            *(char *)pppplVar39 = (char)((int)local_b8 << 1);
            if (local_b8 != (long ***)0x0) goto LAB_71038d0308;
          }
          else {
            pppplVar37 = (long ****)((ulong)(local_b8 + 2) & 0xfffffffffffffff0);
            iVar15 = FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                    param_8);
            if (((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (pppplStack_98 = pppplVar37,
               uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&pppplStack_98),
               (uVar17 & 1) != 0)) {
              FUN_710392e1f0(apppplStack_70,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8)
              ;
            }
            nu::VirtualAllocHook((ulong)pppplVar37,0x10,apppplStack_70[0]);
            pppplVar39[1] = ppplVar41;
            pppplVar39[2] = (long ***)apppplStack_70[0];
            *pppplVar39 = (long ***)((ulong)pppplVar37 | 1);
            pppplVar37 = apppplStack_70[0];
LAB_71038d0308:
            memcpy(pppplVar37,ppplVar35,(size_t)ppplVar41);
          }
          *(undefined1 *)((long)pppplVar37 + (long)ppplVar41) = 0;
        }
        pppplVar37 = pppplVar39 + 4;
        *(undefined4 *)(pppplVar39 + 3) = local_a8._0_4_;
        if (puVar46 != (ulong *)0x0) {
          lVar42 = plVar36[9];
          puVar22 = puVar46 + lVar42 * 4;
          if (puVar22 != puVar26) {
            uVar17 = (long)puVar22 + (-0x20 - (long)puVar26);
            pppplVar24 = pppplVar37;
            if (((uint)uVar17 >> 5 & 1) == 0) {
              ppplVar41 = (long ***)*puVar26;
              ppplVar35 = (long ***)puVar26[2];
              pppplVar39[5] = (long ***)puVar26[1];
              pppplVar39[6] = ppplVar35;
              *pppplVar37 = ppplVar41;
              puVar26[1] = 0;
              puVar26[2] = 0;
              *puVar26 = 0;
              *(int *)(pppplVar39 + 7) = (int)puVar26[3];
              puVar26 = puVar26 + 4;
              pppplVar24 = pppplVar39 + 8;
            }
            if (0x1f < uVar17) {
              uVar33 = (long)puVar22 + (-0x40 - (long)puVar26);
              if (((uint)uVar33 >> 6 & 1) == 0) {
                ppplVar41 = (long ***)*puVar26;
                ppplVar35 = (long ***)puVar26[2];
                pppplVar24[1] = (long ***)puVar26[1];
                pppplVar24[2] = ppplVar35;
                *pppplVar24 = ppplVar41;
                puVar26[1] = 0;
                puVar26[2] = 0;
                *puVar26 = 0;
                *(int *)(pppplVar24 + 3) = (int)puVar26[3];
                ppplVar35 = (long ***)puVar26[6];
                ppplVar41 = (long ***)puVar26[5];
                pppplVar24[4] = (long ***)puVar26[4];
                pppplVar24[5] = ppplVar41;
                pppplVar24[6] = ppplVar35;
                puVar26[5] = 0;
                puVar26[6] = 0;
                puVar26[4] = 0;
                *(int *)(pppplVar24 + 7) = (int)puVar26[7];
                puVar26 = puVar26 + 8;
                pppplVar24 = pppplVar24 + 8;
              }
              if (0x3f < uVar33) {
                do {
                  ppplVar41 = (long ***)*puVar26;
                  ppplVar35 = (long ***)puVar26[2];
                  pppplVar24[1] = (long ***)puVar26[1];
                  pppplVar24[2] = ppplVar35;
                  *pppplVar24 = ppplVar41;
                  puVar26[1] = 0;
                  puVar26[2] = 0;
                  *puVar26 = 0;
                  *(int *)(pppplVar24 + 3) = (int)puVar26[3];
                  ppplVar35 = (long ***)puVar26[6];
                  ppplVar41 = (long ***)puVar26[5];
                  pppplVar24[4] = (long ***)puVar26[4];
                  pppplVar24[5] = ppplVar41;
                  pppplVar24[6] = ppplVar35;
                  puVar26[5] = 0;
                  puVar26[6] = 0;
                  puVar26[4] = 0;
                  *(int *)(pppplVar24 + 7) = (int)puVar26[7];
                  ppplVar41 = (long ***)puVar26[8];
                  ppplVar35 = (long ***)puVar26[10];
                  pppplVar24[9] = (long ***)puVar26[9];
                  pppplVar24[10] = ppplVar35;
                  pppplVar24[8] = ppplVar41;
                  puVar26[8] = 0;
                  puVar26[9] = 0;
                  puVar26[10] = 0;
                  *(int *)(pppplVar24 + 0xb) = (int)puVar26[0xb];
                  ppplVar41 = (long ***)puVar26[0xc];
                  ppplVar35 = (long ***)puVar26[0xe];
                  pppplVar24[0xd] = (long ***)puVar26[0xd];
                  pppplVar24[0xe] = ppplVar35;
                  pppplVar24[0xc] = ppplVar41;
                  puVar3 = puVar26 + 0xf;
                  puVar26[0xd] = 0;
                  puVar26[0xe] = 0;
                  puVar26[0xc] = 0;
                  puVar26 = puVar26 + 0x10;
                  *(int *)(pppplVar24 + 0xf) = (int)*puVar3;
                  pppplVar24 = pppplVar24 + 0x10;
                } while (puVar26 != puVar22);
              }
            }
            lVar42 = plVar36[9];
            pppplVar37 = (long ****)((long)pppplVar37 + (uVar17 & 0xffffffffffffffe0) + 0x20);
          }
          if (lVar42 != 0) {
            puVar46 = puVar46 + 2;
            do {
              if ((puVar46[-2] & 1) != 0) {
                pvVar38 = (void *)*puVar46;
                nu::VirtualFreeHook(pvVar38);
                FUN_710392eb40((ulong)pvVar38);
              }
              lVar42 = lVar42 + -1;
              puVar46 = puVar46 + 4;
            } while (lVar42 != 0);
          }
          plVar44 = (long *)plVar36[8];
          if (plVar44 != plVar4) {
            nu::VirtualFreeHook(plVar44);
            FUN_710392eb40((ulong)plVar44);
          }
        }
        plVar36[8] = (long)pppplVar18;
        plVar36[9] = (long)pppplVar37 - (long)pppplVar18 >> 5;
        plVar36[10] = lVar21;
      }
      ppplVar35 = local_b0;
      ppplVar41 = local_b8;
      ppplStack_90 = (long ***)0x0;
      ppplStack_88 = (long ***)0x0;
      pppplStack_98 = (long ****)0x0;
      if (((ulong)local_c0 & 1) == 0) {
        ppplStack_90 = local_b8;
        ppplStack_88 = local_b0;
        pppplStack_98 = local_c0;
      }
      else {
        if ((long ***)0xffffffffffffffef < local_b8) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (local_b8 < (long ***)0x17) {
          pppplStack_98 = (long ****)(ulong)(byte)((int)local_b8 << 1);
          ppplVar32 = ppplVar40;
          if (local_b8 != (long ***)0x0) goto LAB_71038d0834;
        }
        else {
          pppplVar18 = (long ****)((ulong)(local_b8 + 2) & 0xfffffffffffffff0);
          iVar15 = FUN_710392e1f0(&ppplStack_78,0x10,pppplVar18,param_4,param_5,param_6,param_7,
                                  param_8);
          if (((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (apppplStack_70[0] = pppplVar18,
             uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,apppplStack_70),
             (uVar17 & 1) != 0)) {
            FUN_710392e1f0(&ppplStack_78,0x10,pppplVar18,param_4,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar18,0x10,ppplStack_78);
          pppplStack_98 = (long ****)((ulong)pppplVar18 | 1);
          ppplStack_90 = ppplVar41;
          ppplStack_88 = ppplStack_78;
          ppplVar32 = ppplStack_78;
LAB_71038d0834:
          memcpy(ppplVar32,ppplVar35,(size_t)ppplVar41);
        }
        *(byte *)((long)ppplVar32 + (long)ppplVar41) = 0;
      }
      bVar11 = (byte)pppplStack_98;
      ppplVar41 = (long ***)(ulong)((byte)pppplStack_98 >> 1);
      ppplVar35 = ppplVar40;
      if (((ulong)pppplStack_98 & 1) != 0) {
        ppplVar41 = ppplStack_90;
        ppplVar35 = ppplStack_88;
      }
      iStack_80 = (int)uVar16;
      pppplVar18 = (long ****)FUN_7102677830((ulong *)ppplVar35,(ulong)ppplVar41);
      pppplVar39 = (long ****)plVar36[0x12f];
      if (pppplVar39 != (long ****)0x0) {
        uVar17 = (long)pppplVar39 - 1;
        if ((uVar17 & (ulong)pppplVar39) == 0) {
          pppplVar37 = (long ****)(uVar17 & (ulong)pppplVar18);
        }
        else {
          pppplVar37 = pppplVar18;
          if (pppplVar39 <= pppplVar18) {
            uVar33 = 0;
            if (pppplVar39 != (long ****)0x0) {
              uVar33 = (ulong)pppplVar18 / (ulong)pppplVar39;
            }
            pppplVar37 = (long ****)((long)pppplVar18 - uVar33 * (long)pppplVar39);
          }
        }
        puVar20 = *(undefined8 **)(*plVar30 + (long)pppplVar37 * 8);
        if ((puVar20 != (undefined8 *)0x0) && (plVar44 = (long *)*puVar20, plVar44 != (long *)0x0))
        {
          if ((uVar17 & (ulong)pppplVar39) == 0) {
            if (ppplVar41 == (long ***)0x0) {
              do {
                if ((long ****)plVar44[1] != pppplVar18 &&
                    (long ****)((ulong)plVar44[1] & uVar17) != pppplVar37) break;
                uVar33 = (ulong)(*(byte *)(plVar44 + 2) >> 1);
                if ((*(byte *)(plVar44 + 2) & 1) != 0) {
                  uVar33 = plVar44[3];
                }
                if (uVar33 == 0) goto LAB_71038d0bec;
                plVar44 = (long *)*plVar44;
              } while (plVar44 != (long *)0x0);
            }
            else {
              do {
                if ((long ****)plVar44[1] != pppplVar18 &&
                    (long ****)((ulong)plVar44[1] & uVar17) != pppplVar37) break;
                bVar10 = *(byte *)(plVar44 + 2);
                ppplVar32 = (long ***)(ulong)(bVar10 >> 1);
                if ((bVar10 & 1) != 0) {
                  ppplVar32 = (long ***)plVar44[3];
                }
                if (ppplVar32 == ppplVar41) {
                  if ((bVar10 & 1) == 0) {
                    pcVar25 = (char *)((long)plVar44 + 0x11);
                    lVar21 = -(long)(ulong)(bVar10 >> 1);
                    ppplVar32 = ppplVar35;
                    while (*pcVar25 == *(char *)ppplVar32) {
                      pcVar25 = pcVar25 + 1;
                      ppplVar32 = (long ***)((long)ppplVar32 + 1);
                      lVar21 = lVar21 + 1;
                      if (lVar21 == 0) goto LAB_71038d0bec;
                    }
                  }
                  else {
                    iVar15 = memcmp((void *)plVar44[4],ppplVar35,(size_t)ppplVar41);
                    if (iVar15 == 0) goto LAB_71038d0bec;
                  }
                }
                plVar44 = (long *)*plVar44;
              } while (plVar44 != (long *)0x0);
            }
          }
          else if (ppplVar41 == (long ***)0x0) {
            do {
              pppplVar24 = (long ****)plVar44[1];
              if (pppplVar24 != pppplVar18) {
                if (pppplVar39 <= pppplVar24) {
                  uVar17 = 0;
                  if (pppplVar39 != (long ****)0x0) {
                    uVar17 = (ulong)pppplVar24 / (ulong)pppplVar39;
                  }
                  pppplVar24 = (long ****)((long)pppplVar24 - uVar17 * (long)pppplVar39);
                }
                if (pppplVar24 != pppplVar37) break;
              }
              uVar17 = (ulong)(*(byte *)(plVar44 + 2) >> 1);
              if ((*(byte *)(plVar44 + 2) & 1) != 0) {
                uVar17 = plVar44[3];
              }
              if (uVar17 == 0) goto LAB_71038d0bec;
              plVar44 = (long *)*plVar44;
            } while (plVar44 != (long *)0x0);
          }
          else {
            do {
              pppplVar24 = (long ****)plVar44[1];
              if (pppplVar24 != pppplVar18) {
                if (pppplVar39 <= pppplVar24) {
                  uVar17 = 0;
                  if (pppplVar39 != (long ****)0x0) {
                    uVar17 = (ulong)pppplVar24 / (ulong)pppplVar39;
                  }
                  pppplVar24 = (long ****)((long)pppplVar24 - uVar17 * (long)pppplVar39);
                }
                if (pppplVar24 != pppplVar37) break;
              }
              bVar10 = *(byte *)(plVar44 + 2);
              ppplVar32 = (long ***)(ulong)(bVar10 >> 1);
              if ((bVar10 & 1) != 0) {
                ppplVar32 = (long ***)plVar44[3];
              }
              if (ppplVar32 == ppplVar41) {
                if ((bVar10 & 1) == 0) {
                  pcVar25 = (char *)((long)plVar44 + 0x11);
                  lVar21 = -(long)(ulong)(bVar10 >> 1);
                  ppplVar32 = ppplVar35;
                  while (*pcVar25 == *(char *)ppplVar32) {
                    pcVar25 = pcVar25 + 1;
                    ppplVar32 = (long ***)((long)ppplVar32 + 1);
                    lVar21 = lVar21 + 1;
                    if (lVar21 == 0) goto LAB_71038d0bec;
                  }
                }
                else {
                  iVar15 = memcmp((void *)plVar44[4],ppplVar35,(size_t)ppplVar41);
                  if (iVar15 == 0) goto LAB_71038d0bec;
                }
              }
              plVar44 = (long *)*plVar44;
            } while (plVar44 != (long *)0x0);
          }
        }
      }
      iVar15 = FUN_710392e1f0(&ppplStack_78,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,
                              param_7,param_8);
      if ((iVar15 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        apppplStack_70[0] = (long ****)&DAT_00000030;
        uVar17 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,apppplStack_70);
        if ((uVar17 & 1) != 0) {
          FUN_710392e1f0(&ppplStack_78,0x10,(long ****)&DAT_00000030,param_4,param_5,param_6,param_7
                         ,param_8);
        }
      }
      ppplVar35 = ppplStack_78;
      nu::VirtualAllocHook(0x30,0x10,ppplStack_78);
      ppplVar41 = ppplStack_78;
      ppplStack_78[3] = (long **)ppplStack_90;
      ppplStack_78[4] = (long **)ppplStack_88;
      ppplStack_78[2] = (long **)pppplStack_98;
      pppplStack_98 = (long ****)0x0;
      ppplStack_90 = (long ***)0x0;
      ppplStack_88 = (long ***)0x0;
      *(int *)(ppplStack_78 + 5) = iStack_80;
      *ppplStack_78 = (long **)0x0;
      ppplStack_78[1] = (long **)pppplVar18;
      if ((pppplVar39 == (long ****)0x0) ||
         (*(float *)(plVar36 + 0x132) * (float)pppplVar39 < (float)(plVar36[0x131] + 1))) {
        if (pppplVar39 < (long ****)0x3) {
          uVar17 = 1;
        }
        else {
          uVar17 = (ulong)(((long)pppplVar39 - 1U & (ulong)pppplVar39) != 0);
        }
        uVar33 = (ulong)((float)(plVar36[0x131] + 1) / *(float *)(plVar36 + 0x132));
        uVar17 = uVar17 | (long)pppplVar39 << 1;
        if (uVar33 <= uVar17) {
          uVar33 = uVar17;
        }
        FUN_71038866e0(plVar30,uVar33,ppplVar35,param_4,param_5,param_6,param_7,param_8);
        pppplVar39 = (long ****)plVar36[0x12f];
        if (((long)pppplVar39 - 1U & (ulong)pppplVar39) == 0) {
          pppplVar37 = (long ****)((long)pppplVar39 - 1U & (ulong)pppplVar18);
        }
        else {
          pppplVar37 = pppplVar18;
          if (pppplVar39 <= pppplVar18) {
            uVar17 = 0;
            if (pppplVar39 != (long ****)0x0) {
              uVar17 = (ulong)pppplVar18 / (ulong)pppplVar39;
            }
            pppplVar37 = (long ****)((long)pppplVar18 - uVar17 * (long)pppplVar39);
          }
        }
      }
      puVar26 = *(ulong **)(*plVar30 + (long)pppplVar37 * 8);
      if (puVar26 == (ulong *)0x0) {
        *ppplVar41 = (long **)*puVar5;
        *puVar5 = (ulong)ppplVar41;
        *(ulong **)(*plVar30 + (long)pppplVar37 * 8) = puVar5;
        if (*ppplVar41 != (long **)0x0) {
          pppplVar37 = (long ****)(*ppplVar41)[1];
          if (((long)pppplVar39 - 1U & (ulong)pppplVar39) == 0) {
            pppplVar37 = (long ****)((ulong)pppplVar37 & (long)pppplVar39 - 1U);
          }
          else if (pppplVar39 <= pppplVar37) {
            uVar17 = 0;
            if (pppplVar39 != (long ****)0x0) {
              uVar17 = (ulong)pppplVar37 / (ulong)pppplVar39;
            }
            pppplVar37 = (long ****)((long)pppplVar37 - uVar17 * (long)pppplVar39);
          }
          puVar26 = (ulong *)(*plVar30 + (long)pppplVar37 * 8);
          goto LAB_71038d0bd4;
        }
      }
      else {
        *ppplVar41 = (long **)*puVar26;
LAB_71038d0bd4:
        *puVar26 = (ulong)ppplVar41;
      }
      plVar36[0x131] = plVar36[0x131] + 1;
      bVar11 = (byte)pppplStack_98;
LAB_71038d0bec:
      ppplVar41 = ppplStack_88;
      if ((bVar11 & 1) != 0) {
        nu::VirtualFreeHook(ppplStack_88);
        FUN_710392eb40((ulong)ppplVar41);
      }
      ppplVar41 = local_b0;
      if (((ulong)local_c0 & 1) != 0) {
        nu::VirtualFreeHook(local_b0);
        FUN_710392eb40((ulong)ppplVar41);
      }
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < *(ulong *)(param_2 + 0x28));
  }
  FUN_71038cf200(&local_c0,*(uint *)(plVar36 + 2) ^ (int)*(uint *)(plVar36 + 2) >> 0x1f,
                 (long)plVar29);
  pplVar45 = local_b8[4];
  pplVar28 = (long **)plVar36[0x10c];
  ppppbVar13 = (byte ****)((long)pplVar45 - (long)pplVar28);
  if (pplVar45 < pplVar28) {
    plVar36[0x10c] = (long)pplVar45;
  }
  else {
    lVar21 = plVar36[0x10b];
    local_c0 = (long ****)(lVar21 + (long)pplVar28 * 4);
    if ((byte ****)(plVar36[0x10d] - (long)pplVar28) < ppppbVar13) {
      FUN_71038cf2c0((long *)&pppplStack_98,plVar36 + 0x10b,&local_c0,ppppbVar13,param_5,param_6,
                     param_7,param_8);
    }
    else {
      if (ppppbVar13 != (byte ****)0x0) {
        memset(local_c0,0,(long)ppppbVar13 * 4);
        plVar36[0x10c] = plVar36[0x10c] + (long)ppppbVar13;
        lVar21 = plVar36[0x10b];
      }
      pppplStack_98 = (long ****)(lVar21 + (((long)pplVar28 << 2) >> 2) * 4);
    }
  }
  lVar21 = 0;
  uVar19 = 0;
  while( true ) {
    pplVar45 = (long **)(ulong)uVar19;
    FUN_71038cf200(&local_c0,*(uint *)(plVar36 + 2) ^ (int)*(uint *)(plVar36 + 2) >> 0x1f,
                   (long)plVar29);
    if (local_b8[4] <= pplVar45) break;
    FUN_71038cf200(&local_c0,*(uint *)(plVar36 + 2) ^ (int)*(uint *)(plVar36 + 2) >> 0x1f,
                   (long)plVar29);
    pplVar28 = local_b8[3];
    *(int *)(plVar36[0x10b] + (long)pplVar45 * 4) = (int)lVar21;
    lVar21 = lVar21 + plVar36[9] * (ulong)*(uint *)((long)pplVar28 + (long)pplVar45 * 0x130 + 0x34);
    uVar19 = uVar19 + 1;
  }
  uVar12 = *(undefined1 *)(param_2 + 0x640);
  bVar14 = true;
  *(undefined1 *)(plVar36 + 0x133) = 1;
  *(undefined1 *)((long)plVar36 + 0x999) = uVar12;
LAB_71038cfb04:
  FUN_71038cf180(uVar6 ^ uVar1,&ppuStack_108);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_7105239450;
  if (((bVar14) && (local_150 != (long *)0x0)) && (*local_150 == local_168)) {
    param_1[1] = plVar36;
    if (plVar36 == (long *)0x0) {
      puVar20 = (undefined8 *)0x0;
      uVar27 = 0;
    }
    else {
      puVar20 = (undefined8 *)plVar36[1];
      uVar27 = *puVar20;
    }
    local_150 = (long *)0x0;
    plVar36 = (long *)0x0;
    local_168 = 0;
    param_1[2] = puVar20;
    param_1[3] = uVar27;
  }
  FUN_71038cf180(local_e8 ^ (int)local_e8 >> 0x1f,&local_e0);
  if (((local_150 != (long *)0x0) && (plVar36 != (long *)0x0)) && (*local_150 == local_168)) {
    (**(code **)(*plVar36 + 8))(plVar36);
  }
  return;
}

