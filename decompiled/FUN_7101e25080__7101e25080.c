// addr:      7101e25080
// offset:    0x1e25080
// name:      FUN_7101e25080
// mangled:   
// signature: undefined __cdecl FUN_7101e25080(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e25080(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  long ***ppplVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  long ***ppplVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  long **pplVar21;
  long *plVar22;
  undefined4 *puVar23;
  void *pvVar24;
  long ****pppplVar25;
  undefined4 *puVar26;
  uint *puVar27;
  long ***local_148;
  ulong local_140;
  uint *local_138;
  uint *local_130;
  uint *puStack_128;
  byte ***local_120;
  undefined8 *local_118;
  long *local_110;
  undefined8 uStack_108;
  undefined **local_100;
  undefined8 *local_f8;
  long ***local_e8;
  undefined8 local_e0;
  long ***local_d8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  undefined8 *local_88;
  long ***local_80 [2];
  undefined4 local_64;
  
  *(int *)(param_1 + 0xbdc) = param_2;
  if (param_2 != 2) {
    if (param_2 != 1) {
      return;
    }
    if (*(char *)(param_1 + 0xbec) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71042c53a7);
      (**(code **)(**(long **)(param_1 + 0x530) + 0x70))(*(long **)(param_1 + 0x530),1);
      (**(code **)(**(long **)(param_1 + 0x530) + 0x60))(*(long **)(param_1 + 0x530),1);
      (**(code **)(**(long **)(param_1 + 0x538) + 0x70))(*(long **)(param_1 + 0x538),1);
      FUN_7101e2b890(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710436c948);
    }
    (**(code **)(**(long **)(param_1 + 0x568) + 0x70))(*(long **)(param_1 + 0x568),0);
    (**(code **)(**(long **)(param_1 + 0x568) + 0x60))(*(long **)(param_1 + 0x568),0);
    if (*(char *)(param_1 + 0xbed) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x570) + 0x70))(*(long **)(param_1 + 0x570),0);
    }
    FUN_7103776ad0(&local_e8,param_1 + 0xba0,(long ****)"set_btn_tab_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pplVar21 = *local_e0;
    if (pplVar21 != (long **)0x0) {
      (*(code *)(*pplVar21)[0x43])(pplVar21,1);
      (*(code *)(*pplVar21)[0x81])(pplVar21);
      (*(code *)(*pplVar21)[0x7d])(pplVar21,0);
      iVar7 = (*(code *)(*pplVar21)[0x28])(pplVar21);
      if ((iVar7 != 6) && (iVar7 = (*(code *)(*pplVar21)[0x28])(pplVar21), iVar7 != 1)) {
        (*(code *)(*pplVar21)[0x7f])(pplVar21);
      }
      uVar8 = (*(code *)(*pplVar21)[0x2b])(pplVar21);
      if ((uVar8 & 1) == 0) {
        (*(code *)(*pplVar21)[0x6c])(pplVar21);
      }
    }
    FUN_7103776ad0(&local_120,param_1 + 0xba0,(long ****)"set_btn_tab_01",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    puVar5 = local_118;
    plVar22 = (long *)*local_118;
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x218))(plVar22,0);
      (**(code **)(*plVar22 + 0x410))(plVar22);
      (**(code **)(*plVar22 + 0x3f0))(plVar22,0);
      iVar7 = (**(code **)(*plVar22 + 0x140))(plVar22);
      if ((iVar7 != 6) && (iVar7 = (**(code **)(*plVar22 + 0x140))(plVar22), iVar7 != 1)) {
        (**(code **)(*plVar22 + 0x400))(plVar22);
      }
      uVar8 = (**(code **)(*plVar22 + 0x158))(plVar22);
      if ((uVar8 & 1) == 0) {
        (**(code **)(*plVar22 + 0x370))(plVar22);
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043f0e27);
    local_120 = (byte ***)&PTR_FUN_710523d9c8;
    local_118 = (undefined8 *)0x0;
    ppplVar15 = local_e0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    goto joined_r0x007101e26408;
  }
  lVar1 = param_1 + 0xba0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043e06d4);
  if (*(char *)(param_1 + 0xbed) == '\0') {
    (**(code **)(**(long **)(param_1 + 0x568) + 0x70))(*(long **)(param_1 + 0x568),1);
    (**(code **)(**(long **)(param_1 + 0x568) + 0x60))(*(long **)(param_1 + 0x568),1);
    (**(code **)(**(long **)(param_1 + 0x570) + 0x70))(*(long **)(param_1 + 0x570),1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043e06d4);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710433a697);
    FUN_71037717d0((undefined8 *)(param_1 + 0x568),100,"scr_sort_01",param_4,param_5,param_6,param_7
                   ,param_8);
    local_e8 = (long ***)0x7fc420ce8;
    FUN_7103772070(*(long *)(param_1 + 0x568),100,&local_e8,param_4,param_5,param_6,param_7,param_8)
    ;
    pcVar12 = "scr_ctrl_00";
    FUN_71037717d0((undefined8 *)(param_1 + 0x568),0x68,"scr_ctrl_00",param_4,param_5,param_6,
                   param_7,param_8);
    puVar23 = *(undefined4 **)(param_1 + 0xb40);
    plVar22 = (long *)(param_1 + 0xb40);
    plVar2 = (long *)(param_1 + 0xb48);
    *(undefined4 **)(param_1 + 0xb48) = puVar23;
    if (*(int *)(param_1 + 0x82c) == 7) {
      lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)puVar23;
      if (*(undefined4 **)(param_1 + 0xb50) < puVar23 || lVar16 == 0) {
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar8 = lVar16 >> 1;
          if (lVar16 == 0) {
            uVar8 = 1;
          }
          if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
        }
        ppplVar15 = (long ***)(uVar8 * 4);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        puVar26 = (undefined4 *)
                  FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,param_7,
                                 param_8);
        if (puVar26 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
            pcVar12 = (char *)&local_e8;
            local_e8 = ppplVar15;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
            if (((uVar11 & 1) != 0) &&
               (puVar26 = (undefined4 *)
                          FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                         param_7,param_8), puVar26 != (undefined4 *)0x0))
            goto LAB_7101e25648;
          }
          puVar26 = (undefined4 *)0x0;
        }
LAB_7101e25648:
        puVar14 = puVar26 + 1;
        *puVar26 = 4;
        *(undefined4 **)(param_1 + 0xb40) = puVar26;
        *(undefined4 **)(param_1 + 0xb48) = puVar14;
        *(undefined4 **)(param_1 + 0xb50) = puVar26 + uVar8;
        if (puVar23 != (undefined4 *)0x0) {
          FUN_710392eb40((ulong)puVar23);
          puVar14 = (undefined4 *)*plVar2;
        }
      }
      else {
        *puVar23 = 4;
        puVar14 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar14;
      }
      if (puVar14 < *(undefined4 **)(param_1 + 0xb50)) {
        *puVar14 = 6;
        puVar23 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar23;
      }
      else {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar14 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
            goto LAB_7101e257fc;
          }
LAB_7101e2585c:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e257fc:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25860;
            }
            goto LAB_7101e2585c;
          }
        }
LAB_7101e25860:
        puVar26 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        puVar23 = puVar26 + 1;
        *puVar26 = 6;
        if (0 < (long)pppplVar25) {
          memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
          pcVar12 = (char *)pppplVar25;
        }
        *(void **)(param_1 + 0xb40) = pvVar9;
        *(undefined4 **)(param_1 + 0xb48) = puVar23;
        *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar23 = (undefined4 *)*plVar2;
        }
      }
      if (*(undefined4 **)(param_1 + 0xb50) <= puVar23) {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar23 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
            goto LAB_7101e25a1c;
          }
LAB_7101e25a7c:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e25a1c:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25a80;
            }
            goto LAB_7101e25a7c;
          }
        }
LAB_7101e25a80:
        puVar23 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        uVar13 = 1;
        goto LAB_7101e25c14;
      }
      uVar13 = 1;
LAB_7101e25b48:
      *puVar23 = uVar13;
      puVar26 = (undefined4 *)(*plVar2 + 4);
      *plVar2 = (long)puVar26;
LAB_7101e25c50:
      if (puVar26 < *(undefined4 **)(param_1 + 0xb50)) {
        *puVar26 = 0x14;
        *plVar2 = *plVar2 + 4;
      }
      else {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar26 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) {
LAB_7101e26438:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) {
LAB_7101e25cb8:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101e25cc0;
          }
LAB_7101e25d20:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e25cc0:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25d24;
            }
            goto LAB_7101e25d20;
          }
        }
LAB_7101e25d24:
        puVar23 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        *puVar23 = 0x14;
        if (0 < (long)pppplVar25) {
          memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
          pcVar12 = (char *)pppplVar25;
        }
        *(void **)(param_1 + 0xb40) = pvVar9;
        *(undefined4 **)(param_1 + 0xb48) = puVar23 + 1;
        *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
        }
      }
    }
    else if (*(int *)(param_1 + 0x82c) == 6) {
      lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)puVar23;
      if (*(undefined4 **)(param_1 + 0xb50) < puVar23 || lVar16 == 0) {
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar8 = lVar16 >> 1;
          if (lVar16 == 0) {
            uVar8 = 1;
          }
          if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
        }
        ppplVar15 = (long ***)(uVar8 * 4);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        puVar26 = (undefined4 *)
                  FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,param_7,
                                 param_8);
        if (puVar26 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
            pcVar12 = (char *)&local_e8;
            local_e8 = ppplVar15;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
            if (((uVar11 & 1) != 0) &&
               (puVar26 = (undefined4 *)
                          FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                         param_7,param_8), puVar26 != (undefined4 *)0x0))
            goto LAB_7101e25550;
          }
          puVar26 = (undefined4 *)0x0;
        }
LAB_7101e25550:
        puVar14 = puVar26 + 1;
        *puVar26 = 4;
        *(undefined4 **)(param_1 + 0xb40) = puVar26;
        *(undefined4 **)(param_1 + 0xb48) = puVar14;
        *(undefined4 **)(param_1 + 0xb50) = puVar26 + uVar8;
        if (puVar23 != (undefined4 *)0x0) {
          FUN_710392eb40((ulong)puVar23);
          puVar14 = (undefined4 *)*plVar2;
        }
      }
      else {
        *puVar23 = 4;
        puVar14 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar14;
      }
      if (puVar14 < *(undefined4 **)(param_1 + 0xb50)) {
        *puVar14 = 6;
        puVar23 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar23;
      }
      else {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar14 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
            goto LAB_7101e256e4;
          }
LAB_7101e25744:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e256e4:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25748;
            }
            goto LAB_7101e25744;
          }
        }
LAB_7101e25748:
        puVar26 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        puVar23 = puVar26 + 1;
        *puVar26 = 6;
        if (0 < (long)pppplVar25) {
          memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
          pcVar12 = (char *)pppplVar25;
        }
        *(void **)(param_1 + 0xb40) = pvVar9;
        *(undefined4 **)(param_1 + 0xb48) = puVar23;
        *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar23 = (undefined4 *)*plVar2;
        }
      }
      if (puVar23 < *(undefined4 **)(param_1 + 0xb50)) {
        *puVar23 = 1;
        puVar23 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar23;
      }
      else {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar23 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
            goto LAB_7101e25904;
          }
LAB_7101e25964:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e25904:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25968;
            }
            goto LAB_7101e25964;
          }
        }
LAB_7101e25968:
        puVar26 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        puVar23 = puVar26 + 1;
        *puVar26 = 1;
        if (0 < (long)pppplVar25) {
          memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
          pcVar12 = (char *)pppplVar25;
        }
        *(void **)(param_1 + 0xb40) = pvVar9;
        *(undefined4 **)(param_1 + 0xb48) = puVar23;
        *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar23 = (undefined4 *)*plVar2;
        }
      }
      if (puVar23 < *(undefined4 **)(param_1 + 0xb50)) {
        *puVar23 = 8;
        puVar23 = (undefined4 *)(*plVar2 + 4);
        *plVar2 = (long)puVar23;
      }
      else {
        pvVar24 = (void *)*plVar22;
        pppplVar25 = (long ****)((long)puVar23 - (long)pvVar24);
        uVar8 = ((long)pppplVar25 >> 2) + 1;
        if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
        lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
        if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
          uVar11 = lVar16 >> 1;
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          if (uVar8 != 0) {
            if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
            goto LAB_7101e25a90;
          }
LAB_7101e25af0:
          pvVar9 = (void *)0x0;
        }
        else {
          uVar8 = 0x3fffffffffffffff;
LAB_7101e25a90:
          ppplVar15 = (long ***)(uVar8 * 4);
          if (ppplVar15 == (long ***)0x0) {
            ppplVar15 = (long ***)0x1;
          }
          pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar9 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
              pcVar12 = (char *)&local_e8;
              local_e8 = ppplVar15;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
              if (((uVar11 & 1) != 0) &&
                 (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar9 != (void *)0x0))
              goto LAB_7101e25af4;
            }
            goto LAB_7101e25af0;
          }
        }
LAB_7101e25af4:
        puVar26 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
        puVar23 = puVar26 + 1;
        *puVar26 = 8;
        if (0 < (long)pppplVar25) {
          memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
          pcVar12 = (char *)pppplVar25;
        }
        *(void **)(param_1 + 0xb40) = pvVar9;
        *(undefined4 **)(param_1 + 0xb48) = puVar23;
        *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
        if (pvVar24 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar24);
          puVar23 = (undefined4 *)*plVar2;
        }
      }
      if (puVar23 < *(undefined4 **)(param_1 + 0xb50)) {
        uVar13 = 0x15;
        goto LAB_7101e25b48;
      }
      pvVar24 = (void *)*plVar22;
      pppplVar25 = (long ****)((long)puVar23 - (long)pvVar24);
      uVar8 = ((long)pppplVar25 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_7101e26438;
      lVar16 = (long)*(undefined4 **)(param_1 + 0xb50) - (long)pvVar24;
      if ((ulong)(lVar16 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar16 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_7101e25cb8;
          goto LAB_7101e25ba8;
        }
LAB_7101e25c08:
        pvVar9 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_7101e25ba8:
        ppplVar15 = (long ***)(uVar8 * 4);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,
                                        param_7,param_8);
        if (pvVar9 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_120 = (byte ***)((ulong)local_120 & 0xffffffff00000000);
            pcVar12 = (char *)&local_e8;
            local_e8 = ppplVar15;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
            if (((uVar11 & 1) != 0) &&
               (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,
                                                param_6,param_7,param_8), pvVar9 != (void *)0x0))
            goto LAB_7101e25c0c;
          }
          goto LAB_7101e25c08;
        }
      }
LAB_7101e25c0c:
      puVar23 = (undefined4 *)((long)pvVar9 + ((long)pppplVar25 >> 2) * 4);
      uVar13 = 0x15;
LAB_7101e25c14:
      puVar26 = puVar23 + 1;
      *puVar23 = uVar13;
      if (0 < (long)pppplVar25) {
        memcpy(pvVar9,pvVar24,(size_t)pppplVar25);
        pcVar12 = (char *)pppplVar25;
      }
      *(void **)(param_1 + 0xb40) = pvVar9;
      *(undefined4 **)(param_1 + 0xb48) = puVar26;
      *(void **)(param_1 + 0xb50) = (void *)((long)pvVar9 + uVar8 * 4);
      if (pvVar24 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar24);
        puVar26 = (undefined4 *)*plVar2;
      }
      goto LAB_7101e25c50;
    }
    FUN_7103776640(&local_90,lVar1,(byte ****)"scr_sort_01",pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_a0,(long)&local_90,(long ****)"set_txt_key",pcVar12,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_120,(long)&local_90,(long ****)"set_txt_list",pcVar12,param_4,param_5,
                   param_6,param_7,param_8);
    if ((ulong)(*(long *)(param_1 + 0xb48) - *(long *)(param_1 + 0xb40) >> 2) <=
        (ulong)*(uint *)(param_1 + 0xb84)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_71025c6970((uint *)&local_e8,
                   *(undefined4 *)
                    (*(long *)(param_1 + 0xb40) + (ulong)*(uint *)(param_1 + 0xb84) * 4));
    FUN_710377a120((long)&local_120,(char *)&local_e0,pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    puVar5 = local_118;
    local_120 = (byte ***)&PTR_FUN_710523d9a8;
    local_118 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    FUN_710377a120((long)&local_a0,"mnu_spirits_sort_guide",pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    local_110 = (long *)0x0;
    uStack_108 = 0;
    FUN_7103776290(&local_100,extraout_x1_00,(long ****)pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    puVar5 = local_88;
    local_118 = (undefined8 *)((ulong)local_118 & 0xffffffff00000000);
    uStack_108 = uRam0000007107459008;
    local_110 = _ConstantZero;
    local_f8[1] = 0;
    local_120 = (byte ***)0x100000004;
    *local_f8 = *local_88;
    local_f8[1] = local_88[1];
    if (local_f8 != local_88) {
      *(undefined8 *)local_f8[3] = *(undefined8 *)local_88[3];
      *(undefined8 *)(local_f8[3] + 8) = *(undefined8 *)(local_88[3] + 8);
      *(undefined8 *)(local_f8[3] + 0x10) = *(undefined8 *)(local_88[3] + 0x10);
      *(undefined8 *)(local_f8[3] + 0x18) = *(undefined8 *)(local_88[3] + 0x18);
    }
    FUN_7103776910(&local_e8,lVar1,(long ****)"scr_sort_00",pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    ppplVar15 = local_e0;
    local_110 = _ConstantZero;
    uStack_108 = uRam0000007107459008;
    if (*local_e0 != (long **)0x0) {
      uStack_108 = 0;
      local_110 = (*local_e0)[6];
    }
    local_e8 = (long ***)&PTR_FUN_710523d9a8;
    local_e0 = (long ***)0x0;
    if (ppplVar15 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar15);
    }
    local_130 = (uint *)0x0;
    puStack_128 = (uint *)0x0;
    local_138 = (uint *)0x0;
    local_110 = (long *)CONCAT44((int)((ulong)local_110 >> 0x20),SUB84(local_110,0) + -140.0);
    lVar16 = *plVar22;
    if (*plVar2 != lVar16) {
      uVar8 = 0;
      do {
        FUN_71025c6970((uint *)&local_e8,*(undefined4 *)(lVar16 + uVar8 * 4));
        if (local_130 < puStack_128) {
          *local_130 = 0;
          uVar11 = 0;
          do {
            uVar18 = uVar11;
            if (*(char *)((long)&local_e0 + uVar11) == '\0') break;
            *(char *)((long)local_130 + uVar11 + 8) = *(char *)((long)&local_e0 + uVar11);
            cVar3 = *(char *)((long)&local_e0 + uVar11 + 1);
            if (cVar3 == '\0') {
              uVar18 = uVar11 + 1;
              break;
            }
            *(char *)((long)local_130 + uVar11 + 9) = cVar3;
            cVar3 = *(char *)((long)&local_e0 + uVar11 + 2);
            if (cVar3 == '\0') {
              uVar18 = uVar11 + 2;
              break;
            }
            uVar18 = uVar11 + 3;
            *(char *)((long)local_130 + uVar11 + 10) = cVar3;
            uVar11 = uVar18;
          } while ((uint)uVar18 < 0x3f);
          *(undefined1 *)((long)local_130 + (uVar18 & 0xffffffff) + 8) = 0;
          local_130[1] = (uint)uVar18;
          uVar17 = (uint)(byte)local_130[2];
          uVar20 = 0x811c9dc5;
          if ((byte)local_130[2] != 0) {
            pbVar19 = (byte *)((long)local_130 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar17;
              uVar17 = (uint)*pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (uVar17 != 0);
          }
          *local_130 = uVar20;
          local_130 = local_130 + 0x12;
        }
        else {
          FUN_71019c1c50((ulong *)&local_138,(long)&local_e8,(long ****)pcVar12,param_4,param_5,
                         param_6,param_7,param_8);
        }
        lVar16 = *plVar22;
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(*plVar2 - lVar16 >> 2));
    }
    FUN_7103776640(&local_148,lVar1,(byte ****)"blinder",pcVar12,param_4,param_5,param_6,param_7,
                   param_8);
    puVar4 = local_130;
    puVar27 = local_138;
    local_e8 = (long ***)0x0;
    local_e0 = (long ***)0x0;
    local_d8 = (long ***)0x0;
    ppplVar15 = (long ***)((long)local_130 - (long)local_138);
    if (ppplVar15 != (long ***)0x0) {
      if (0x38e38e38e38e38e < (ulong)(((long)ppplVar15 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      ppplVar10 = (long ***)
                  FUN_710392e290(0x10,ppplVar15,(long ****)pcVar12,param_4,param_5,param_6,param_7,
                                 param_8);
      if (ppplVar10 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          pppplVar25 = local_80;
          local_80[0] = ppplVar15;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar8 & 1) != 0) &&
             (ppplVar10 = (long ***)
                          FUN_710392e290(0x10,ppplVar15,pppplVar25,param_4,param_5,param_6,param_7,
                                         param_8), ppplVar10 != (long ***)0x0)) goto LAB_7101e260b4;
        }
        ppplVar10 = (long ***)0x0;
      }
LAB_7101e260b4:
      local_d8 = ppplVar10 + ((long)ppplVar15 >> 3);
      local_e8 = ppplVar10;
      local_e0 = ppplVar10;
      if (puVar27 != puVar4) {
        do {
          *(uint *)local_e0 = 0;
          uVar8 = 0;
          do {
            cVar3 = *(char *)((long)puVar27 + uVar8 + 8);
            uVar11 = uVar8;
            if (cVar3 == '\0') break;
            *(char *)((long)local_e0 + uVar8 + 8) = cVar3;
            cVar3 = *(char *)((long)puVar27 + uVar8 + 9);
            if (cVar3 == '\0') {
              uVar11 = uVar8 + 1;
              break;
            }
            *(char *)((long)local_e0 + uVar8 + 9) = cVar3;
            cVar3 = *(char *)((long)puVar27 + uVar8 + 10);
            if (cVar3 == '\0') {
              uVar11 = uVar8 + 2;
              break;
            }
            uVar11 = uVar8 + 3;
            *(char *)((long)local_e0 + uVar8 + 10) = cVar3;
            uVar8 = uVar11;
          } while ((uint)uVar11 < 0x3f);
          *(undefined1 *)((long)local_e0 + (uVar11 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_e0 + 4) = (uint)uVar11;
          uVar17 = (uint)*(byte *)(local_e0 + 1);
          uVar20 = 0x811c9dc5;
          if (*(byte *)(local_e0 + 1) != 0) {
            pbVar19 = (byte *)((long)local_e0 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar17;
              uVar17 = (uint)*pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (uVar17 != 0);
          }
          *(uint *)local_e0 = uVar20;
          puVar27 = puVar27 + 0x12;
          local_e0 = local_e0 + 9;
        } while (puVar27 != puVar4);
      }
    }
    param_3 = &local_e8;
    param_4 = &local_120;
    param_5 = &local_148;
    FUN_71032ccb70(param_1 + 0x4d0,(undefined8 *)(param_1 + 0x158),param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if (local_e8 != (long ***)0x0) {
      local_e0 = local_e8;
      FUN_710392eb40((ulong)local_e8);
    }
    uVar8 = local_140;
    local_148 = (long ***)&PTR_FUN_710523d988;
    local_140 = 0;
    if (uVar8 != 0) {
      uVar11 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar8);
    }
    if (local_138 != (uint *)0x0) {
      local_130 = local_138;
      FUN_710392eb40((ulong)local_138);
    }
    puVar6 = local_f8;
    local_100 = &PTR_FUN_710523d988;
    local_f8 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      uVar8 = puVar6[3];
      puVar6[2] = &PTR_FUN_710523d9a8;
      puVar6[3] = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)puVar6);
    }
    uVar8 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    local_90 = &PTR_FUN_710523d988;
    local_88 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      uVar8 = puVar5[3];
      puVar5[2] = &PTR_FUN_710523d9a8;
      puVar5[3] = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)puVar5);
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710436c959);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043f0e27);
  }
  (**(code **)(**(long **)(param_1 + 0x530) + 0x70))(*(long **)(param_1 + 0x530),0);
  (**(code **)(**(long **)(param_1 + 0x530) + 0x60))(*(long **)(param_1 + 0x530),0);
  if (*(char *)(param_1 + 0xbec) == '\0') {
    (**(code **)(**(long **)(param_1 + 0x538) + 0x70))(*(long **)(param_1 + 0x538),0);
  }
  FUN_7103776ad0(&local_e8,lVar1,(long ****)"set_btn_tab_00",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  ppplVar15 = local_e0;
  pplVar21 = *local_e0;
  if (pplVar21 != (long **)0x0) {
    (*(code *)(*pplVar21)[0x43])(pplVar21,0);
    (*(code *)(*pplVar21)[0x82])(pplVar21);
    (*(code *)(*pplVar21)[0x7e])(pplVar21,0);
    iVar7 = (*(code *)(*pplVar21)[0x28])(pplVar21);
    if ((iVar7 != 6) && (iVar7 = (*(code *)(*pplVar21)[0x28])(pplVar21), iVar7 != 1)) {
      (*(code *)(*pplVar21)[0x80])(pplVar21);
    }
    uVar8 = (*(code *)(*pplVar21)[0x2b])(pplVar21);
    if ((uVar8 & 1) == 0) {
      (*(code *)(*pplVar21)[0x6e])(pplVar21);
    }
  }
  FUN_7103776ad0(&local_120,lVar1,(long ****)"set_btn_tab_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar5 = local_118;
  plVar22 = (long *)*local_118;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x218))(plVar22,1);
    (**(code **)(*plVar22 + 0x408))(plVar22);
    (**(code **)(*plVar22 + 1000))(plVar22,0);
    iVar7 = (**(code **)(*plVar22 + 0x140))(plVar22);
    if ((iVar7 != 6) && (iVar7 = (**(code **)(*plVar22 + 0x140))(plVar22), iVar7 != 1)) {
      (**(code **)(*plVar22 + 0x3f8))(plVar22);
    }
    uVar8 = (**(code **)(*plVar22 + 0x158))(plVar22);
    if ((uVar8 & 1) == 0) {
      (**(code **)(*plVar22 + 0x360))(plVar22);
    }
  }
  local_120 = (byte ***)&PTR_FUN_710523d9c8;
  local_118 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar5);
  }
joined_r0x007101e26408:
  if (ppplVar15 != (long ***)0x0) {
    local_e0 = (long ***)0x0;
    local_e8 = (long ***)&PTR_FUN_710523d9c8;
    FUN_710392eb40((ulong)ppplVar15);
  }
  return;
}

