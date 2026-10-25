// addr:      7101cf2f80
// offset:    0x1cf2f80
// name:      FUN_7101cf2f80
// mangled:   
// signature: undefined __cdecl FUN_7101cf2f80(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cf2f80(long *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  int *piVar16;
  long ***ppplVar17;
  long lVar18;
  ulong uVar19;
  char cVar20;
  long lVar21;
  undefined1 *puVar22;
  int *__dest;
  long lVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  long lVar26;
  long ***local_108;
  ulong local_100 [8];
  undefined **local_c0;
  ulong local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  ulong local_70;
  
  bVar2 = *(byte *)(param_3 + 100);
  lVar26 = param_3;
  if ((bVar2 - 9 < 8 || bVar2 == 3) || bVar2 == 0) {
    if (*(char *)(param_3 + 0x67) == '\x01') {
      FUN_7103776910(&local_78,param_2,(long ****)"set_txt_modename",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377a120((long)&local_78,"mnu_share_data_kind_team",lVar26,param_4,param_5,param_6,
                     param_7,param_8);
      uVar11 = local_70;
      local_78 = &PTR_FUN_710523d9a8;
      local_70 = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_7103776910(&local_88,param_2,(long ****)"set_txt_modename_00",lVar26,param_4,param_5,
                     param_6,param_7,param_8);
      pcVar10 = "mnu_share_data_kind_team";
    }
    else {
      cVar5 = *(char *)(param_3 + 0xd8) != '\0';
      cVar20 = '\x02';
      if (!(bool)cVar5) {
        cVar20 = '\x01';
      }
      if (*(char *)(param_3 + 0x88) != '\0') {
        cVar5 = cVar20;
      }
      if (*(char *)(param_3 + 0x128) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      if (*(char *)(param_3 + 0x178) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      if (*(char *)(param_3 + 0x1c8) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      if (*(char *)(param_3 + 0x218) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      if (*(char *)(param_3 + 0x268) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      if (*(char *)(param_3 + 0x2b8) != '\0') {
        cVar5 = cVar5 + '\x01';
      }
      FUN_7103776910(&local_78,param_2,(long ****)"set_txt_modename",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      if (cVar5 == '\x02') {
        FUN_710377a120((long)&local_78,"mnu_share_data_kind_1on1",lVar26,param_4,param_5,param_6,
                       param_7,param_8);
        uVar11 = local_70;
        local_78 = &PTR_FUN_710523d9a8;
        local_70 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_7103776910(&local_88,param_2,(long ****)"set_txt_modename_00",lVar26,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar10 = "mnu_share_data_kind_1on1";
      }
      else {
        FUN_710377a120((long)&local_78,"mnu_share_data_kind_melee",lVar26,param_4,param_5,param_6,
                       param_7,param_8);
        uVar11 = local_70;
        local_78 = &PTR_FUN_710523d9a8;
        local_70 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_7103776910(&local_88,param_2,(long ****)"set_txt_modename_00",lVar26,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar10 = "mnu_share_data_kind_melee";
      }
    }
  }
  else {
    FUN_7103776910(&local_78,param_2,(long ****)"set_txt_modename",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_78,"mnu_share_data_kind_other",lVar26,param_4,param_5,param_6,
                   param_7,param_8);
    uVar11 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_7103776910(&local_88,param_2,(long ****)"set_txt_modename_00",lVar26,param_4,param_5,param_6
                   ,param_7,param_8);
    pcVar10 = "mnu_share_data_kind_other";
  }
  FUN_710377a120((long)&local_88,pcVar10,lVar26,param_4,param_5,param_6,param_7,param_8);
  uVar11 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_98,param_2,(long ****)"set_txt_time",lVar26,param_4,param_5,param_6,param_7,
                 param_8);
  iVar1 = *(int *)(param_3 + 0x60) / 0x3c;
  iVar3 = *(int *)(param_3 + 0x60) % 0x3c;
  if (0x3e6 < iVar1) {
    iVar1 = 999;
  }
  if (0x3e6 < iVar3) {
    iVar3 = 999;
  }
  pppplVar12 = (long ****)(ulong)(uint)(iVar3 + iVar1 * 1000);
  FUN_710377a310((long)&local_98,1);
  uVar11 = local_90;
  local_98 = &PTR_FUN_710523d9a8;
  local_90 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  lVar26 = 0;
  local_b0 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  do {
    lVar18 = param_3 + lVar26;
    if ((*(char *)(lVar18 + 0x88) != '\0') &&
       (puVar22 = *(undefined1 **)(lVar18 + 0x78),
       ((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000 &&
       ((ulong)puVar22 & 0xffffffffff) != 0)) {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      lVar23 = *(long *)(lVar21 + 0x168);
      uVar7 = FUN_71032632a0(lVar23,(ulong)puVar22);
      uVar11 = 0x11b1ccb807;
      if ((uVar7 & 1) == 0) {
        bVar6 = FUN_71032648e0(lVar21 + 0x160,(ulong)puVar22);
        uVar11 = 0x143829f67e;
        if (bVar6) goto LAB_7101cf32c0;
      }
      else {
LAB_7101cf32c0:
        puVar22 = FUN_71032631a0(lVar23,uVar11);
      }
      piVar4 = local_b0;
      bVar2 = *(byte *)(lVar18 + 0x8a);
      iVar1 = *(int *)(lVar18 + 0x90);
      if (local_a8 < local_a0) {
        *local_a8 = iVar1;
        *(undefined1 **)(local_a8 + 2) = puVar22;
        local_a8[4] = (uint)bVar2;
        local_a8 = local_a8 + 6;
      }
      else {
        pppplVar24 = (long ****)((long)local_a8 - (long)local_b0);
        uVar14 = 0xaaaaaaaaaaaaaaa;
        uVar11 = ((long)pppplVar24 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar18 = (long)local_a0 - (long)local_b0 >> 3;
        if ((ulong)(lVar18 * -0x5555555555555555) < 0x555555555555555) {
          uVar19 = lVar18 * 0x5555555555555556;
          uVar14 = uVar11;
          if (uVar11 <= uVar19) {
            uVar14 = uVar19;
          }
          if (uVar14 != 0) goto LAB_7101cf3368;
          lVar18 = 0;
        }
        else {
LAB_7101cf3368:
          ppplVar17 = (long ***)(uVar14 * 0x18);
          if (ppplVar17 == (long ***)0x0) {
            ppplVar17 = (long ***)0x1;
          }
          lVar18 = FUN_710392e290(0x10,ppplVar17,pppplVar12,param_4,param_5,param_6,param_7,param_8)
          ;
          if (lVar18 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
              pppplVar12 = &local_108;
              local_108 = ppplVar17;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
              if (((uVar11 & 1) != 0) &&
                 (lVar18 = FUN_710392e290(0x10,ppplVar17,pppplVar12,param_4,param_5,param_6,param_7,
                                          param_8), lVar18 != 0)) goto LAB_7101cf33cc;
            }
            lVar18 = 0;
          }
        }
LAB_7101cf33cc:
        lVar21 = SUB168(SEXT816((long)pppplVar24) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        piVar16 = (int *)(lVar18 + ((long)pppplVar24 >> 3) * 8);
        piVar8 = (int *)(lVar18 + uVar14 * 0x18);
        *(undefined1 **)(piVar16 + 2) = puVar22;
        *piVar16 = iVar1;
        piVar16[4] = (uint)bVar2;
        __dest = piVar16 + ((lVar21 >> 2) - (lVar21 >> 0x3f)) * 6;
        if (0 < (long)pppplVar24) {
          memcpy(__dest,piVar4,(size_t)pppplVar24);
          pppplVar12 = pppplVar24;
        }
        local_b0 = __dest;
        local_a8 = piVar16 + 6;
        local_a0 = piVar8;
        if (piVar4 != (int *)0x0) {
          FUN_710392eb40((ulong)piVar4);
        }
      }
    }
    piVar16 = local_a8;
    piVar4 = local_b0;
    lVar26 = lVar26 + 0x50;
  } while (lVar26 != 0x280);
  pppplVar24 = (long ****)(((long)local_a8 - (long)local_b0 >> 3) * -0x5555555555555555);
  if (0 < (long)local_a8 - (long)local_b0) {
    pppplVar25 = pppplVar24;
    if (0x555555555555554 < (long)pppplVar24) {
      pppplVar25 = (long ****)0x555555555555555;
    }
    do {
      ppplVar17 = (long ***)((long)pppplVar25 * 0x18);
      if (ppplVar17 == (long ***)0x0) {
        ppplVar17 = (long ***)0x1;
      }
      piVar8 = (int *)FUN_710392e290(0x10,ppplVar17,pppplVar12,param_4,param_5,param_6,param_7,
                                     param_8);
      if (piVar8 != (int *)0x0) {
LAB_7101cf34fc:
        FUN_7101cf3670(piVar4,piVar16,(ulong)pppplVar24,piVar8,(long)pppplVar25);
        FUN_710392eb40((ulong)piVar8);
        goto LAB_7101cf3520;
      }
      if (DAT_7105332f00 != (long *)0x0) {
        local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
        pppplVar12 = &local_108;
        local_108 = ppplVar17;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
        if (((uVar11 & 1) != 0) &&
           (piVar8 = (int *)FUN_710392e290(0x10,ppplVar17,pppplVar12,param_4,param_5,param_6,param_7
                                           ,param_8), piVar8 != (int *)0x0)) goto LAB_7101cf34fc;
      }
      pppplVar25 = (long ****)((ulong)pppplVar25 >> 1);
    } while (pppplVar25 != (long ****)0x0);
  }
  pppplVar25 = (long ****)0x0;
  FUN_7101cf3670(piVar4,piVar16,(ulong)pppplVar24,(int *)0x0,0);
LAB_7101cf3520:
  if (local_a8 != local_b0) {
    lVar26 = 0;
    uVar11 = 0;
    do {
      ppppbVar15 = (byte ****)0x2;
      plVar9 = FUN_710323f330(param_1,*(ulong *)((long)local_b0 + lVar26 + 8),
                              (ulong)*(uint *)((long)local_b0 + lVar26 + 0x10),2,pppplVar25,param_6,
                              param_7,param_8);
      if (*(long *)plVar9[1] != 0) {
        FUN_7103776910(&local_108,param_2,(long ****)"set_rep_stockicon_%02d_",uVar11 & 0xffffffff,
                       ppppbVar15,pppplVar25,param_6,param_7,param_8);
        ppppppppplVar13 = (long *********)(uVar11 & 0xffffffff);
        FUN_7103776910(&local_c0,param_2,(long ****)"set_rep_stockicon_%02d",ppppppppplVar13,
                       ppppbVar15,pppplVar25,param_6,param_7,param_8);
        uVar14 = local_100[0];
        FUN_7103778b80(local_100[0],(long)plVar9,ppppppppplVar13,ppppbVar15,pppplVar25,param_6,
                       param_7,param_8);
        uVar19 = local_b8;
        FUN_7103778b80(local_b8,(long)plVar9,ppppppppplVar13,ppppbVar15,pppplVar25,param_6,param_7,
                       param_8);
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8 = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
        local_108 = (long ***)&PTR_FUN_710523d9a8;
        local_100[0] = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
      }
      uVar14 = ((long)local_a8 - (long)local_b0 >> 3) * -0x5555555555555555;
      uVar11 = uVar11 + 1;
      lVar26 = lVar26 + 0x18;
    } while (uVar11 <= uVar14 && uVar14 - uVar11 != 0);
  }
  local_100[0] = local_100[0] & 0xffffffffffffff00;
  local_108 = (long ***)0x0;
  FUN_710062dc20((uint *)&local_108,"stockicon%02d");
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)local_100);
  if (local_b0 != (int *)0x0) {
    local_a8 = local_b0;
    FUN_710392eb40((ulong)local_b0);
  }
  return;
}

