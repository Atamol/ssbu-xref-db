// addr:      71035fbde0
// offset:    0x35fbde0
// name:      FUN_71035fbde0
// mangled:   
// signature: undefined __cdecl FUN_71035fbde0(long param_1, long param_2, int param_3, byte * * * * param_4, undefined * * param_5, long param_6, undefined * * * param_7, ulong param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035fbde0(long param_1,long param_2,int param_3,byte ****param_4,undefined **param_5,
                   long param_6,undefined ***param_7,ulong param_8)

{
  long *plVar1;
  int *piVar2;
  byte ****ppppbVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  bool bVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  void *pvVar17;
  long *plVar18;
  undefined **ppuVar19;
  long *****ppppplVar20;
  uint uVar21;
  long lVar22;
  long ****pppplVar23;
  long lVar24;
  ulong uVar25;
  long ****pppplVar26;
  long *****ppppplVar27;
  long lVar28;
  long lVar29;
  undefined8 *puVar30;
  char *__s2;
  void *pvVar31;
  ulong *puVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined **ppuVar37;
  long lVar38;
  undefined8 *puVar39;
  long lVar40;
  undefined8 uVar41;
  long lVar42;
  ulong uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  long local_178;
  ulong local_e0;
  long *****local_d8;
  undefined **local_d0;
  undefined **local_c8;
  long local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  long ****local_a8;
  long *local_a0;
  long *local_98;
  long local_90;
  undefined **local_88;
  long local_80;
  long *local_78;
  long local_70;
  
  if (*(long **)(param_2 + 0x10) == (long *)0x0) {
    return;
  }
  if (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18)) {
    return;
  }
  lVar38 = *(long *)(param_2 + 8);
  if (*(char *)(lVar38 + 0x10) == '\0') {
    return;
  }
  lVar40 = *(long *)(param_1 + 0x28);
  if (*(long **)(lVar40 + 0x70) == (long *)0x0) {
    return;
  }
  if (**(long **)(lVar40 + 0x70) != *(long *)(lVar40 + 0x78)) {
    return;
  }
  lVar22 = *(long *)(lVar40 + 0x68);
  if (lVar22 == 0) {
    DAT_7105231ee8 = (long *)0x0;
    DAT_7105231ef0 = (undefined8 *)0x0;
    DAT_7105231ef8 = 0;
    DAT_7105335ec8 = (byte ****)0x0;
  }
  else {
    FUN_7103662550(&local_a8,*(uint *)(lVar22 + 0x18) ^ (int)*(uint *)(lVar22 + 0x18) >> 0x1f,
                   lVar22 + 0x20);
    plVar18 = local_a0;
    FUN_71035fd030(&local_a8,*(uint *)(local_a0 + 0xbe) ^ (int)*(uint *)(local_a0 + 0xbe) >> 0x1f,
                   (long)(local_a0 + 0xbf));
    (**(code **)(*local_a0 + 0x20))(&local_a8);
    if ((((local_98 == (long *)0x0) || (*local_98 != local_90)) || (local_a0 == (long *)0x0)) ||
       (local_a0[1] == 0)) {
      DAT_7105231ef8 = 0;
      DAT_7105231ee8 = (long *)0x0;
      DAT_7105231ef0 = (undefined8 *)0x0;
    }
    else {
      DAT_7105231ee8 = local_a0;
      DAT_7105231ef0 = (undefined8 *)local_a0[1];
      DAT_7105231ef8 = *DAT_7105231ef0;
    }
    lVar40 = *(long *)(param_1 + 0x28);
    DAT_7105335ec8 = (byte ****)(plVar18 + 0x6b);
  }
  if (((DAT_71053373c0 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053373c0), iVar14 != 0)) {
    DAT_7105337398 = (long *****)0x0;
    DAT_71053373a0 = (undefined **)0x0;
    DAT_7105337390 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053373c0);
  }
  ppuVar19 = DAT_71053373a0;
  ppppplVar27 = DAT_7105337398;
  local_e0 = 0;
  local_d8 = (long *****)0x0;
  local_d0 = (undefined **)0x0;
  if ((DAT_7105337390 & 1) == 0) {
    local_d0 = DAT_71053373a0;
    local_e0 = DAT_7105337390;
    local_d8 = DAT_7105337398;
    goto LAB_71035fc01c;
  }
  if ((long *****)0xffffffffffffffef < DAT_7105337398) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (DAT_7105337398 < (long *****)0x17) {
    local_e0 = (ulong)(byte)((int)DAT_7105337398 << 1);
    ppuVar37 = (undefined **)((ulong)&local_e0 | 1);
    if (DAT_7105337398 != (long *****)0x0) goto LAB_71035fc008;
  }
  else {
    pppplVar26 = (long ****)((ulong)(DAT_7105337398 + 2) & 0xfffffffffffffff0);
    iVar14 = FUN_710392e1f0(&local_c8,0x10,pppplVar26,param_4,(long ****)param_5,param_6,param_7,
                            param_8);
    if (((iVar14 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_a8 = pppplVar26,
       uVar43 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_a8), (uVar43 & 1) != 0))
    {
      FUN_710392e1f0(&local_c8,0x10,pppplVar26,param_4,(long ****)param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar26,0x10,local_c8);
    local_e0 = (ulong)pppplVar26 | 1;
    local_d8 = ppppplVar27;
    local_d0 = local_c8;
    ppuVar37 = local_c8;
LAB_71035fc008:
    memcpy(ppuVar37,ppuVar19,(size_t)ppppplVar27);
  }
  *(char *)((long)ppuVar37 + (long)ppppplVar27) = '\0';
LAB_71035fc01c:
  cVar9 = *(char *)(param_1 + 0x18);
  bVar13 = cVar9 != '\0';
  lVar22 = *(long *)(param_1 + 0x80);
  lVar6 = *(long *)(param_1 + 0x88);
  if (lVar22 != lVar6) {
    bVar11 = false;
    local_178 = 0;
    do {
      if (*(long *)(lVar22 + 0x90) == 0) {
        if (*(long **)(lVar22 + 0x80) == *(long **)(lVar22 + 0x78)) {
          puVar32 = (ulong *)&DAT_7105337508;
          if ((DAT_7105337520 & 1) == 0) {
            iVar14 = __cxa_guard_acquire(&DAT_7105337520);
            puVar32 = (ulong *)&DAT_7105337508;
            if (iVar14 != 0) {
              DAT_7105337510 = 0;
              DAT_7105337518 = 0;
              _DAT_7105337508 = 0x4c4c554e08;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_7105337520);
            }
          }
        }
        else {
          puVar32 = (ulong *)(**(long **)(lVar22 + 0x78) + 0x18);
        }
      }
      else {
        puVar32 = (ulong *)(*(long *)(lVar22 + 0x90) + 0x98);
      }
      ppppplVar27 = (long *****)(local_e0 >> 1 & 0x7f);
      bVar8 = (byte)*puVar32;
      ppuVar19 = (undefined **)ppppplVar27;
      if ((local_e0 & 1) != 0) {
        ppuVar19 = (undefined **)local_d8;
      }
      ppppplVar20 = (long *****)(ulong)(bVar8 >> 1);
      if ((bVar8 & 1) != 0) {
        ppppplVar20 = (long *****)puVar32[1];
      }
      if ((long *****)ppuVar19 == ppppplVar20) {
        ppuVar37 = (undefined **)((ulong)&local_e0 | 1);
        if ((local_e0 & 1) != 0) {
          ppuVar37 = local_d0;
        }
        __s2 = (char *)puVar32[2];
        if ((bVar8 & 1) == 0) {
          __s2 = (char *)((long)puVar32 + 1);
        }
        if ((local_e0 & 1) == 0) {
          if ((long *****)ppuVar19 != (long *****)0x0) {
            lVar28 = -(long)ppppplVar27;
            ppuVar37 = (undefined **)((ulong)&local_e0 | 1);
            do {
              if (*(char *)ppuVar37 != *__s2) goto LAB_71035fcec4;
              ppuVar37 = (undefined **)((long)ppuVar37 + 1);
              __s2 = __s2 + 1;
              lVar28 = lVar28 + 1;
            } while (lVar28 != 0);
          }
        }
        else if (((long *****)ppuVar19 != (long *****)0x0) &&
                (iVar14 = memcmp(ppuVar37,__s2,(size_t)ppuVar19), iVar14 != 0)) goto LAB_71035fcec4;
        if (!bVar11) goto LAB_71035fcf58;
        cVar10 = *(char *)(lVar22 + 99);
joined_r0x0071035fc098:
        if (cVar10 != '\0') {
          bVar11 = true;
          goto LAB_71035fcf5c;
        }
        *(undefined1 *)(lVar22 + 0x62) = 0;
        *(undefined8 *)(lVar22 + 0xa0) = *(undefined8 *)(lVar22 + 0x98);
        plVar18 = *(long **)(lVar22 + 0x78);
        plVar7 = *(long **)(lVar22 + 0x80);
        if ((plVar7 != plVar18) && (*(long *)(lVar22 + 0x90) = local_178, plVar18 != plVar7)) {
          do {
            lVar28 = *plVar18;
            if ((*(char *)(lVar28 + 0xb0) == '\0') || (DAT_7105231f00 != *(long *)(lVar28 + 0xc0)))
            {
              if (((DAT_71053373c8 & 1) == 0) &&
                 (iVar14 = __cxa_guard_acquire(&DAT_71053373c8), iVar14 != 0)) {
                ppuVar19 = &PTR_LOOP_7104f17000;
                DAT_71053373b0 = 0;
                DAT_71053373b8 = 0;
                DAT_71053373a8 = 0;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053373c8);
              }
              if (*(char *)(DAT_7105337ce8 + 0x58d) == '\0') {
                uVar21 = 0xffffffff;
              }
              else {
                bVar8 = *(byte *)(lVar28 + 0x18);
                uVar43 = (ulong)(bVar8 >> 1);
                if ((bVar8 & 1) != 0) {
                  uVar43 = *(ulong *)(lVar28 + 0x20);
                }
                if (uVar43 == 9) {
                  pvVar31 = *(void **)(lVar28 + 0x28);
                  if ((bVar8 & 1) == 0) {
                    pvVar31 = (void *)(lVar28 + 0x19);
                  }
                  ppuVar19 = (undefined **)&DAT_00000009;
                  iVar14 = memcmp(pvVar31,"nu::Final",9);
                  uVar21 = 2;
                  if (iVar14 == 0) {
                    uVar21 = 0xffffffff;
                  }
                }
                else {
                  uVar21 = 2;
                }
              }
              puVar39 = (undefined8 *)(lVar28 + 200);
              *(long *)(lVar28 + 0xc0) = DAT_7105231f00;
              plVar1 = (long *)(lVar28 + 0xd0);
              *(undefined1 *)(lVar28 + 0xb0) = 0;
              *(undefined8 *)(lVar28 + 0xd0) = *puVar39;
              lVar12 = DAT_7105335eb0;
              if (*(short *)(lVar28 + 0x3a) != 0) {
                lVar42 = *(long *)(lVar28 + 0x40);
                uVar35 = 0;
                do {
                  lVar34 = *(long *)(lVar42 + 8);
                  if ((lVar34 == 0) || (*(char *)(lVar34 + 0x14) == '\0')) goto LAB_71035fcb54;
                  ppppbVar3 = (byte ****)(lVar42 + 0x40);
                  if ((*(long **)(lVar42 + 0x50) == (long *)0x0) ||
                     (**(long **)(lVar42 + 0x50) != *(long *)(lVar42 + 0x58))) {
                    plVar15 = FUN_71038adc30(*(long *)(lVar42 + 0x88),(byte *)(lVar28 + 0x18));
                    if (((((long *)plVar15[2] == (long *)0x0) || (*(long *)plVar15[2] != plVar15[3])
                         ) || (lVar33 = plVar15[1], lVar33 == 0)) || (*(long *)(lVar33 + 8) == 0)) {
                      *(undefined8 *)(lVar42 + 0x50) = 0;
                      *(undefined8 *)(lVar42 + 0x58) = 0;
                      *(undefined8 *)(lVar42 + 0x48) = 0;
                    }
                    else {
                      *(long *)(lVar42 + 0x48) = lVar33;
                      plVar15 = *(long **)(lVar33 + 8);
                      *(long **)(lVar42 + 0x50) = plVar15;
                      lVar33 = *plVar15;
                      *(long *)(lVar42 + 0x58) = lVar33;
                      if ((plVar15 != (long *)0x0) && (*plVar15 == lVar33)) {
                        local_a0 = (long *)0x0;
                        local_98 = (long *)0x0;
                        local_90 = 0;
                        local_a8 = (long ****)&PTR_FUN_71052319d0;
                        local_78 = (long *)0x0;
                        local_70 = 0;
                        local_80 = 0;
                        local_88 = &PTR_FUN_7105231a30;
                        lVar33 = *(long *)(lVar34 + 0x360);
                        local_b8 = (undefined8 *)0x0;
                        local_b0 = 0;
                        local_c0 = 0;
                        local_c8 = &PTR_FUN_71052319f0;
                        if ((*(long **)(lVar33 + 0x30) != (long *)0x0) &&
                           (**(long **)(lVar33 + 0x30) == *(long *)(lVar33 + 0x38))) {
                          local_c0 = *(long *)(lVar33 + 0x28);
                          if (local_c0 == 0) {
                            local_b8 = (undefined8 *)0x0;
                            local_b0 = 0;
                          }
                          else {
                            local_b8 = *(undefined8 **)(local_c0 + 8);
                            local_b0 = *local_b8;
                          }
                        }
                        param_4 = ppppbVar3;
                        FUN_7103871960(DAT_7105335ec0,(long)&local_a8,(long)&local_c8,
                                       (long)ppppbVar3,param_5,param_6,param_7,param_8);
                        if ((local_98 == (long *)0x0) || (*local_98 != local_90)) {
                          *(undefined8 *)(lVar42 + 0x48) = 0;
LAB_71035fc9b0:
                          uVar41 = 0;
                          *(undefined8 *)(lVar42 + 0x50) = 0;
                        }
                        else {
                          *(long **)(lVar42 + 0x48) = local_a0;
                          if (local_a0 == (long *)0x0) goto LAB_71035fc9b0;
                          puVar36 = (undefined8 *)local_a0[1];
                          *(undefined8 **)(lVar42 + 0x50) = puVar36;
                          uVar41 = *puVar36;
                        }
                        *(undefined8 *)(lVar42 + 0x58) = uVar41;
                        if ((local_78 == (long *)0x0) || (*local_78 != local_70)) {
                          *(undefined8 *)(lVar42 + 0x68) = 0;
LAB_71035fc9f4:
                          uVar41 = 0;
                          *(undefined8 *)(lVar42 + 0x70) = 0;
                        }
                        else {
                          *(long *)(lVar42 + 0x68) = local_80;
                          if (local_80 == 0) goto LAB_71035fc9f4;
                          puVar36 = *(undefined8 **)(local_80 + 8);
                          *(undefined8 **)(lVar42 + 0x70) = puVar36;
                          uVar41 = *puVar36;
                        }
                        *(undefined8 *)(lVar42 + 0x78) = uVar41;
                        goto LAB_71035fca30;
                      }
                    }
                  }
                  else {
LAB_71035fca30:
                    lVar33 = *(long *)(lVar34 + 0x388);
                    if (lVar33 == 0) {
                      lVar33 = *(long *)(lVar34 + 0x360);
                      local_a0 = (long *)0x0;
                      local_98 = (long *)0x0;
                      local_90 = 0;
                      local_a8 = (long ****)&PTR_FUN_71052319f0;
                      if ((*(long **)(lVar33 + 0x30) != (long *)0x0) &&
                         (**(long **)(lVar33 + 0x30) == *(long *)(lVar33 + 0x38))) {
                        local_a0 = *(long **)(lVar33 + 0x28);
                        if (local_a0 == (long *)0x0) {
                          local_90 = 0;
                          local_98 = (long *)0x0;
                        }
                        else {
                          local_98 = (long *)local_a0[1];
                          local_90 = *local_98;
                        }
                      }
                      local_b8 = (undefined8 *)0x0;
                      local_b0 = 0;
                      local_c0 = 0;
                      local_c8 = &PTR_FUN_7105231a50;
                      param_8 = (ulong)uVar21;
                      ppuVar19 = (undefined **)(lVar34 + 0x48);
                      param_6 = lVar42 + 0x60;
                      param_7 = &local_c8;
                      param_5 = &PTR_PTR_7105231ee0;
                      param_4 = DAT_7105335ec8;
                      puVar36 = FUN_710381a6a0(lVar12,(long)&local_a8,ppuVar19,DAT_7105335ec8,
                                               0x7105231ee0,param_6,(long)param_7,uVar21,
                                               *(undefined4 *)(*(long *)(lVar33 + 0x28) + 0x8c),
                                               lVar42 + (long)param_3 * 0x20 + 0xa8,
                                               (int)local_a0[0x11]);
                    }
                    else {
                      puVar36 = FUN_710381b250(lVar12,1,1);
                      lVar29 = puVar36[0xf];
                      lVar24 = *(long *)(lVar33 + 8);
                      *(long *)(lVar29 + 8) = lVar24;
                      if (lVar24 == 0) {
                        uVar41 = 0;
                        *(undefined8 *)(lVar29 + 0x10) = 0;
                      }
                      else {
                        puVar30 = *(undefined8 **)(lVar24 + 8);
                        *(undefined8 **)(lVar29 + 0x10) = puVar30;
                        uVar41 = *puVar30;
                      }
                      *(undefined8 *)(lVar29 + 0x18) = uVar41;
                      if ((*(long **)(lVar33 + 0x10) != (long *)0x0) &&
                         (**(long **)(lVar33 + 0x10) == *(long *)(lVar33 + 0x18))) {
                        piVar2 = (int *)(*(long *)(lVar24 + 8) + 8);
                        do {
                          cVar10 = '\x01';
                          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                          if (bVar11) {
                            *piVar2 = *piVar2 + 1;
                            cVar10 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar10 != '\0');
                      }
                      lVar24 = puVar36[0xf];
                      *(undefined8 *)
                       (*(long *)(lVar24 + 0x20) + (ulong)*(uint *)(lVar24 + 0x28) * 8) =
                           0x800000000;
                      *(int *)(lVar24 + 0x28) = *(int *)(lVar24 + 0x28) + 1;
                      puVar30 = *(undefined8 **)(lVar28 + 0xd0);
                      if (puVar30 < *(undefined8 **)(lVar28 + 0xd8)) {
                        *puVar30 = puVar36;
                        *plVar1 = *plVar1 + 8;
                      }
                      else {
                        pvVar31 = (void *)*puVar39;
                        pppplVar26 = (long ****)((long)puVar30 - (long)pvVar31);
                        uVar43 = ((long)pppplVar26 >> 3) + 1;
                        if (uVar43 >> 0x3d != 0) goto LAB_71035fd014;
                        lVar24 = (long)*(undefined8 **)(lVar28 + 0xd8) - (long)pvVar31;
                        if ((ulong)(lVar24 >> 3) < 0xfffffffffffffff) {
                          uVar25 = lVar24 >> 2;
                          if (uVar43 <= uVar25) {
                            uVar43 = uVar25;
                          }
                          if (uVar43 != 0) {
                            if (uVar43 >> 0x3d == 0) goto LAB_71035fc338;
                            goto LAB_71035fd010;
                          }
                          uVar43 = 0;
                          pvVar17 = (void *)0x0;
                        }
                        else {
                          uVar43 = 0x1fffffffffffffff;
LAB_71035fc338:
                          pppplVar23 = (long ****)(uVar43 * 8);
                          if (pppplVar23 == (long ****)0x0) {
                            pppplVar23 = (long ****)0x1;
                          }
                          pvVar17 = (void *)FUN_710392e290(0x10,pppplVar23,pppplVar26,param_4,
                                                           (long ****)param_5,param_6,param_7,
                                                           param_8);
                          if (pvVar17 == (void *)0x0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
                              ppppplVar27 = &local_a8;
                              local_a8 = pppplVar23;
                              uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_c8);
                              if (((uVar25 & 1) != 0) &&
                                 (pvVar17 = (void *)FUN_710392e290(0x10,pppplVar23,
                                                                   (long ****)ppppplVar27,param_4,
                                                                   (long ****)param_5,param_6,
                                                                   param_7,param_8),
                                 pvVar17 != (void *)0x0)) goto LAB_71035fc3a8;
                            }
                            pvVar17 = (void *)0x0;
                          }
                        }
LAB_71035fc3a8:
                        puVar30 = (undefined8 *)((long)pvVar17 + ((long)pppplVar26 >> 3) * 8);
                        *puVar30 = puVar36;
                        if (0 < (long)pppplVar26) {
                          memcpy(pvVar17,pvVar31,(size_t)pppplVar26);
                        }
                        *(void **)(lVar28 + 200) = pvVar17;
                        *(undefined8 **)(lVar28 + 0xd0) = puVar30 + 1;
                        *(void **)(lVar28 + 0xd8) = (void *)((long)pvVar17 + uVar43 * 8);
                        if (pvVar31 != (void *)0x0) {
                          FUN_710392eb40((ulong)pvVar31);
                        }
                      }
                      lVar24 = *(long *)(lVar34 + 0x360);
                      local_a0 = (long *)0x0;
                      local_98 = (long *)0x0;
                      local_90 = 0;
                      local_a8 = (long ****)&PTR_FUN_71052319f0;
                      if ((*(long **)(lVar24 + 0x30) != (long *)0x0) &&
                         (**(long **)(lVar24 + 0x30) == *(long *)(lVar24 + 0x38))) {
                        local_a0 = *(long **)(lVar24 + 0x28);
                        if (local_a0 == (long *)0x0) {
                          local_90 = 0;
                          local_98 = (long *)0x0;
                        }
                        else {
                          local_98 = (long *)local_a0[1];
                          local_90 = *local_98;
                        }
                      }
                      local_b8 = (undefined8 *)0x0;
                      local_b0 = 0;
                      local_c0 = 0;
                      local_c8 = &PTR_FUN_7105231a50;
                      param_8 = (ulong)*(uint *)(lVar33 + 0x20);
                      ppuVar19 = (undefined **)(lVar34 + 0x48);
                      param_6 = lVar42 + 0x60;
                      param_7 = &local_c8;
                      param_5 = &PTR_PTR_7105231ee0;
                      param_4 = DAT_7105335ec8;
                      puVar36 = FUN_710381a6a0(lVar12,(long)&local_a8,ppuVar19,DAT_7105335ec8,
                                               0x7105231ee0,param_6,(long)param_7,
                                               *(uint *)(lVar33 + 0x20),
                                               *(undefined4 *)(*(long *)(lVar24 + 0x28) + 0x8c),
                                               lVar42 + (long)param_3 * 0x20 + 0xa8,
                                               (int)local_a0[0x11]);
                    }
                    if ((*(long **)(lVar42 + 0x50) == (long *)0x0) ||
                       (**(long **)(lVar42 + 0x50) != *(long *)(lVar42 + 0x58))) {
                      plVar15 = FUN_71038adc30(*(long *)(lVar42 + 0x88),(byte *)(lVar28 + 0x18));
                      if (((long *)plVar15[2] == (long *)0x0) ||
                         (((*(long *)plVar15[2] != plVar15[3] || (lVar34 = plVar15[1], lVar34 == 0))
                          || (*(long *)(lVar34 + 8) == 0)))) {
                        uVar41 = 0;
                        *(undefined8 *)(lVar42 + 0x48) = 0;
                        *(undefined8 *)(lVar42 + 0x50) = 0;
                      }
                      else {
                        *(long *)(lVar42 + 0x48) = lVar34;
                        puVar30 = *(undefined8 **)(lVar34 + 8);
                        *(undefined8 **)(lVar42 + 0x50) = puVar30;
                        uVar41 = *puVar30;
                      }
                      *(undefined8 *)(lVar42 + 0x58) = uVar41;
                      if (((long *)plVar15[2] == (long *)0x0) || (*(long *)plVar15[2] != plVar15[3])
                         ) goto LAB_71035fcb54;
                      local_a0 = (long *)0x0;
                      local_98 = (long *)0x0;
                      local_90 = 0;
                      local_a8 = (long ****)&PTR_FUN_71052319d0;
                      local_78 = (long *)0x0;
                      local_70 = 0;
                      local_80 = 0;
                      local_88 = &PTR_FUN_7105231a30;
                      lVar34 = *(long *)(*(long *)(lVar42 + 8) + 0x360);
                      local_b8 = (undefined8 *)0x0;
                      local_b0 = 0;
                      local_c0 = 0;
                      local_c8 = &PTR_FUN_71052319f0;
                      if ((*(long **)(lVar34 + 0x30) != (long *)0x0) &&
                         (**(long **)(lVar34 + 0x30) == *(long *)(lVar34 + 0x38))) {
                        local_c0 = *(long *)(lVar34 + 0x28);
                        if (local_c0 == 0) {
                          local_b8 = (undefined8 *)0x0;
                          local_b0 = 0;
                        }
                        else {
                          local_b8 = *(undefined8 **)(local_c0 + 8);
                          local_b0 = *local_b8;
                        }
                      }
                      param_4 = ppppbVar3;
                      FUN_7103871960(DAT_7105335ec0,(long)&local_a8,(long)&local_c8,(long)ppppbVar3,
                                     param_5,param_6,param_7,param_8);
                      if ((local_98 == (long *)0x0) || (*local_98 != local_90)) {
                        *(undefined8 *)(lVar42 + 0x48) = 0;
LAB_71035fc6b4:
                        uVar41 = 0;
                        *(undefined8 *)(lVar42 + 0x50) = 0;
                      }
                      else {
                        *(long **)(lVar42 + 0x48) = local_a0;
                        if (local_a0 == (long *)0x0) goto LAB_71035fc6b4;
                        puVar30 = (undefined8 *)local_a0[1];
                        *(undefined8 **)(lVar42 + 0x50) = puVar30;
                        uVar41 = *puVar30;
                      }
                      *(undefined8 *)(lVar42 + 0x58) = uVar41;
                      if ((local_78 == (long *)0x0) || (*local_78 != local_70)) {
                        *(undefined8 *)(lVar42 + 0x68) = 0;
LAB_71035fc6f8:
                        uVar41 = 0;
                        *(undefined8 *)(lVar42 + 0x70) = 0;
                      }
                      else {
                        *(long *)(lVar42 + 0x68) = local_80;
                        if (local_80 == 0) goto LAB_71035fc6f8;
                        puVar30 = *(undefined8 **)(local_80 + 8);
                        *(undefined8 **)(lVar42 + 0x70) = puVar30;
                        uVar41 = *puVar30;
                      }
                      *(undefined8 *)(lVar42 + 0x78) = uVar41;
                    }
                    ppuVar19 = (undefined **)&DAT_71053373a8;
                    puVar16 = FUN_710381a2e0(lVar12,(long)ppppbVar3,&DAT_71053373a8);
                    puVar30 = *(undefined8 **)(lVar28 + 0xd0);
                    if (puVar30 < *(undefined8 **)(lVar28 + 0xd8)) {
                      *puVar30 = puVar16;
                      puVar30 = (undefined8 *)(*plVar1 + 8);
                      *plVar1 = (long)puVar30;
                    }
                    else {
                      pvVar31 = (void *)*puVar39;
                      ppppplVar27 = (long *****)((long)puVar30 - (long)pvVar31);
                      uVar43 = ((long)ppppplVar27 >> 3) + 1;
                      if (uVar43 >> 0x3d != 0) goto LAB_71035fd014;
                      lVar34 = (long)*(undefined8 **)(lVar28 + 0xd8) - (long)pvVar31;
                      if ((ulong)(lVar34 >> 3) < 0xfffffffffffffff) {
                        uVar25 = lVar34 >> 2;
                        if (uVar43 <= uVar25) {
                          uVar43 = uVar25;
                        }
                        if (uVar43 != 0) {
                          if (uVar43 >> 0x3d == 0) goto LAB_71035fc790;
                          goto LAB_71035fd010;
                        }
                        pvVar17 = (void *)0x0;
                      }
                      else {
                        uVar43 = 0x1fffffffffffffff;
LAB_71035fc790:
                        pppplVar26 = (long ****)(uVar43 * 8);
                        if (pppplVar26 == (long ****)0x0) {
                          pppplVar26 = (long ****)0x1;
                        }
                        pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19,param_4
                                                         ,(long ****)param_5,param_6,param_7,param_8
                                                        );
                        if (pvVar17 == (void *)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
                            ppuVar19 = (undefined **)&local_a8;
                            local_a8 = pppplVar26;
                            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8)
                            ;
                            if (((uVar25 & 1) != 0) &&
                               (pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19
                                                                 ,param_4,(long ****)param_5,param_6
                                                                 ,param_7,param_8),
                               pvVar17 != (void *)0x0)) goto LAB_71035fc7f8;
                          }
                          pvVar17 = (void *)0x0;
                        }
                      }
LAB_71035fc7f8:
                      puVar4 = (undefined8 *)((long)pvVar17 + ((long)ppppplVar27 >> 3) * 8);
                      puVar30 = puVar4 + 1;
                      *puVar4 = puVar16;
                      if (0 < (long)ppppplVar27) {
                        memcpy(pvVar17,pvVar31,(size_t)ppppplVar27);
                        ppuVar19 = (undefined **)ppppplVar27;
                      }
                      *(void **)(lVar28 + 200) = pvVar17;
                      *(undefined8 **)(lVar28 + 0xd0) = puVar30;
                      *(void **)(lVar28 + 0xd8) = (void *)((long)pvVar17 + uVar43 * 8);
                      if (pvVar31 != (void *)0x0) {
                        FUN_710392eb40((ulong)pvVar31);
                        puVar30 = (undefined8 *)*plVar1;
                      }
                    }
                    if (puVar30 < *(undefined8 **)(lVar28 + 0xd8)) {
                      *puVar30 = puVar36;
                      *plVar1 = *plVar1 + 8;
                    }
                    else {
                      pvVar31 = (void *)*puVar39;
                      ppppplVar27 = (long *****)((long)puVar30 - (long)pvVar31);
                      uVar43 = ((long)ppppplVar27 >> 3) + 1;
                      if (uVar43 >> 0x3d != 0) {
LAB_71035fd014:
                    /* WARNING: Subroutine does not return */
                        std::__vector_base_common<true>::__throw_length_error();
                      }
                      lVar34 = (long)*(undefined8 **)(lVar28 + 0xd8) - (long)pvVar31;
                      if ((ulong)(lVar34 >> 3) < 0xfffffffffffffff) {
                        uVar25 = lVar34 >> 2;
                        if (uVar43 <= uVar25) {
                          uVar43 = uVar25;
                        }
                        if (uVar43 != 0) {
                          if (uVar43 >> 0x3d == 0) goto LAB_71035fc8ac;
                          goto LAB_71035fd010;
                        }
LAB_71035fc90c:
                        pvVar17 = (void *)0x0;
                      }
                      else {
                        uVar43 = 0x1fffffffffffffff;
LAB_71035fc8ac:
                        pppplVar26 = (long ****)(uVar43 * 8);
                        if (pppplVar26 == (long ****)0x0) {
                          pppplVar26 = (long ****)0x1;
                        }
                        pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19,param_4
                                                         ,(long ****)param_5,param_6,param_7,param_8
                                                        );
                        if (pvVar17 == (void *)0x0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
                            ppuVar19 = (undefined **)&local_a8;
                            local_a8 = pppplVar26;
                            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8)
                            ;
                            if (((uVar25 & 1) != 0) &&
                               (pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19
                                                                 ,param_4,(long ****)param_5,param_6
                                                                 ,param_7,param_8),
                               pvVar17 != (void *)0x0)) goto LAB_71035fc910;
                          }
                          goto LAB_71035fc90c;
                        }
                      }
LAB_71035fc910:
                      puVar30 = (undefined8 *)((long)pvVar17 + ((long)ppppplVar27 >> 3) * 8);
                      *puVar30 = puVar36;
                      if (0 < (long)ppppplVar27) {
                        memcpy(pvVar17,pvVar31,(size_t)ppppplVar27);
                        ppuVar19 = (undefined **)ppppplVar27;
                      }
                      *(void **)(lVar28 + 200) = pvVar17;
                      *(undefined8 **)(lVar28 + 0xd0) = puVar30 + 1;
                      *(void **)(lVar28 + 0xd8) = (void *)((long)pvVar17 + uVar43 * 8);
                      if (pvVar31 != (void *)0x0) {
                        FUN_710392eb40((ulong)pvVar31);
                      }
                    }
                  }
LAB_71035fcb54:
                  uVar35 = uVar35 + 1;
                  lVar42 = lVar42 + 0xe8;
                } while (uVar35 < *(ushort *)(lVar28 + 0x3a));
              }
              *(undefined1 *)(lVar28 + 0xb0) = 1;
            }
            puVar36 = *(undefined8 **)(lVar28 + 0xd0);
            puVar39 = *(undefined8 **)(lVar28 + 200);
            if (puVar36 != puVar39) {
              for (; puVar39 != puVar36; puVar39 = puVar39 + 1) {
                puVar30 = *(undefined8 **)(lVar22 + 0xa0);
                uVar41 = *puVar39;
                if (puVar30 < *(undefined8 **)(lVar22 + 0xa8)) {
                  *puVar30 = uVar41;
                  *(long *)(lVar22 + 0xa0) = *(long *)(lVar22 + 0xa0) + 8;
                }
                else {
                  pvVar31 = *(void **)(lVar22 + 0x98);
                  ppppplVar27 = (long *****)((long)puVar30 - (long)pvVar31);
                  uVar43 = ((long)ppppplVar27 >> 3) + 1;
                  if (uVar43 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar28 = (long)*(undefined8 **)(lVar22 + 0xa8) - (long)pvVar31;
                  if ((ulong)(lVar28 >> 3) < 0xfffffffffffffff) {
                    uVar25 = lVar28 >> 2;
                    if (uVar43 <= uVar25) {
                      uVar43 = uVar25;
                    }
                    if (uVar43 != 0) {
                      if (uVar43 >> 0x3d != 0) {
LAB_71035fd010:
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      goto LAB_71035fcbfc;
                    }
LAB_71035fcc5c:
                    pvVar17 = (void *)0x0;
                  }
                  else {
                    uVar43 = 0x1fffffffffffffff;
LAB_71035fcbfc:
                    pppplVar26 = (long ****)(uVar43 * 8);
                    if (pppplVar26 == (long ****)0x0) {
                      pppplVar26 = (long ****)0x1;
                    }
                    pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19,param_4,
                                                     (long ****)param_5,param_6,param_7,param_8);
                    if (pvVar17 == (void *)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
                        ppuVar19 = (undefined **)&local_a8;
                        local_a8 = pppplVar26;
                        uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
                        if (((uVar25 & 1) != 0) &&
                           (pvVar17 = (void *)FUN_710392e290(0x10,pppplVar26,(long ****)ppuVar19,
                                                             param_4,(long ****)param_5,param_6,
                                                             param_7,param_8),
                           pvVar17 != (void *)0x0)) goto LAB_71035fcc60;
                      }
                      goto LAB_71035fcc5c;
                    }
                  }
LAB_71035fcc60:
                  puVar30 = (undefined8 *)((long)pvVar17 + ((long)ppppplVar27 >> 3) * 8);
                  *puVar30 = uVar41;
                  if (0 < (long)ppppplVar27) {
                    memcpy(pvVar17,pvVar31,(size_t)ppppplVar27);
                    ppuVar19 = (undefined **)ppppplVar27;
                  }
                  *(void **)(lVar22 + 0x98) = pvVar17;
                  *(undefined8 **)(lVar22 + 0xa0) = puVar30 + 1;
                  *(void **)(lVar22 + 0xa8) = (void *)((long)pvVar17 + uVar43 * 8);
                  if (pvVar31 != (void *)0x0) {
                    FUN_710392eb40((ulong)pvVar31);
                  }
                }
              }
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar7);
          if (*(long *)(lVar22 + 0xa0) == *(long *)(lVar22 + 0x98)) {
            if (*(char *)(lVar22 + 0x62) == '\0') goto LAB_71035fcd90;
          }
          else {
            *(undefined1 *)(lVar22 + 0x62) = 1;
          }
          if (bVar13) {
            puVar39 = *(undefined8 **)(lVar22 + 0x68);
            fVar49 = (float)puVar39[1];
            uVar44 = *(undefined8 *)(lVar40 + 0x28);
            uVar41 = *(undefined8 *)(lVar40 + 0x20);
            uVar46 = *(undefined8 *)(lVar40 + 0x38);
            uVar45 = *(undefined8 *)(lVar40 + 0x30);
            uVar51 = *(undefined8 *)(lVar40 + 0x48);
            uVar50 = *(undefined8 *)(lVar40 + 0x40);
            uVar53 = *(undefined8 *)(lVar40 + 0x58);
            uVar52 = *(undefined8 *)(lVar40 + 0x50);
            fVar47 = (float)*puVar39;
            fVar48 = (float)((ulong)*puVar39 >> 0x20);
            uVar5 = *(undefined4 *)((long)puVar39 + 0x14);
            *(undefined4 *)(lVar22 + 0x20) = *(undefined4 *)(puVar39 + 2);
            *(undefined4 *)(lVar22 + 0x24) = uVar5;
            *(ulong *)(lVar22 + 0x18) =
                 CONCAT44(0x3f800000,
                          (float)uVar53 +
                          fVar47 * (float)uVar44 + fVar48 * (float)uVar46 + fVar49 * (float)uVar51);
            *(ulong *)(lVar22 + 0x10) =
                 CONCAT44((float)((ulong)uVar52 >> 0x20) +
                          fVar47 * (float)((ulong)uVar41 >> 0x20) +
                          fVar48 * (float)((ulong)uVar45 >> 0x20) +
                          fVar49 * (float)((ulong)uVar50 >> 0x20),
                          (float)uVar52 +
                          fVar47 * (float)uVar41 + fVar48 * (float)uVar45 + fVar49 * (float)uVar50);
          }
          FUN_7103555dc0(*(long *)(lVar22 + 0x90),lVar22,(long ****)ppuVar19,param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          *(undefined1 *)(lVar22 + 0x62) = 0;
        }
LAB_71035fcd90:
        bVar11 = true;
      }
      else {
LAB_71035fcec4:
        if (&local_e0 != puVar32) {
          pvVar31 = (void *)puVar32[2];
          if ((bVar8 & 1) == 0) {
            pvVar31 = (void *)((long)puVar32 + 1);
          }
          FUN_71002c51f0(&local_e0,pvVar31,(ulong)ppppplVar20,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          ppuVar19 = (undefined **)ppppplVar20;
        }
        plVar18 = FUN_7103556f50(*(long **)(lVar38 + 0x40),(byte *)puVar32);
        if (plVar18 != (long *)0x0) {
          local_178 = 0;
          if ((long *)plVar18[7] != (long *)0x0) {
            if (*(long *)plVar18[7] == plVar18[8]) {
              local_178 = plVar18[6];
            }
            else {
              local_178 = 0;
            }
          }
          if ((*(char *)(local_178 + 0x14) != '\0') && (*(char *)(local_178 + 0x15) != '\0')) {
            if (cVar9 == '\0') {
              bVar13 = *(int *)(local_178 + 0x18) != 0;
            }
            else {
              bVar13 = true;
            }
            cVar10 = *(char *)(lVar22 + 99);
            goto joined_r0x0071035fc098;
          }
        }
LAB_71035fcf58:
        bVar11 = false;
LAB_71035fcf5c:
        *(undefined1 *)(lVar22 + 0x62) = 0;
        *(undefined8 *)(lVar22 + 0x90) = 0;
        *(undefined8 *)(lVar22 + 0xa0) = *(undefined8 *)(lVar22 + 0x98);
      }
      lVar22 = lVar22 + 0xb0;
    } while (lVar22 != lVar6);
  }
  ppuVar19 = local_d0;
  if ((local_e0 & 1) != 0) {
    nu::VirtualFreeHook(local_d0);
    FUN_710392eb40((ulong)ppuVar19);
  }
  return;
}

