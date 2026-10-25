// addr:      7101e7ec90
// offset:    0x1e7ec90
// name:      FUN_7101e7ec90
// mangled:   
// signature: undefined __cdecl FUN_7101e7ec90(undefined8 * param_1)


void FUN_7101e7ec90(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  bool bVar11;
  ushort uVar12;
  char *pcVar13;
  undefined ***pppuVar14;
  string sVar15;
  int iVar16;
  int iVar17;
  long *plVar18;
  undefined8 *puVar19;
  byte **ppbVar20;
  void *pvVar21;
  undefined8 *puVar22;
  long *plVar23;
  byte bVar24;
  long ****pppplVar25;
  byte ****ppppbVar26;
  undefined8 uVar27;
  byte ****ppppbVar28;
  undefined8 uVar29;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar30;
  long lVar31;
  code *pcVar32;
  ulong uVar33;
  byte ***pppbVar34;
  long *plVar35;
  char *pcVar36;
  int *piVar37;
  uint uVar38;
  long lVar39;
  long *plVar40;
  byte *pbVar41;
  undefined **ppuVar42;
  undefined ***pppuVar43;
  int iVar44;
  long lVar45;
  long *plVar46;
  byte *pbVar47;
  uint uVar48;
  ulong uVar49;
  undefined *puVar50;
  long lVar51;
  long lVar52;
  ulong uVar53;
  long *plVar54;
  long *plVar55;
  undefined **ppuVar56;
  undefined ***pppuVar57;
  undefined1 *puVar58;
  undefined **ppuVar59;
  undefined ***pppuVar60;
  undefined ***pppuVar61;
  undefined1 *puVar62;
  undefined8 *puVar63;
  undefined8 *puVar64;
  undefined ***pppuVar65;
  undefined8 *puVar66;
  ulong uVar67;
  void *pvVar68;
  uint uVar69;
  byte ****ppppbVar70;
  undefined **ppuVar71;
  size_t __n;
  float fVar72;
  undefined8 local_15a0;
  undefined8 local_1598;
  ulong local_1590;
  long *local_1588;
  long *local_1580;
  undefined8 local_be0;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  long *local_bb8;
  long *local_bb0;
  long alStack_ba0 [4];
  long *local_b80;
  long alStack_b70 [4];
  long *local_b50;
  long alStack_b40 [4];
  long *local_b20;
  long alStack_b10 [4];
  long *local_af0;
  long alStack_ae0 [4];
  long *local_ac0;
  undefined4 local_ab0;
  undefined ***local_208;
  undefined ***local_200;
  undefined ***local_1f8;
  byte ***local_1f0;
  undefined2 local_1e8;
  undefined4 local_1e6;
  undefined2 local_1e2;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined1 local_1da;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  undefined4 local_d0;
  undefined **local_b8;
  ulong local_b0;
  byte ***local_a8;
  byte ***local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined4 local_84 [5];
  ulong local_68;
  
  puVar50 = &DAT_7104545c08;
  uVar27 = 1;
  FUN_71032cbf30(param_1 + 0x2a,*(long *)*param_1,(ulong *)&DAT_7104545c08,(byte ****)0x1,in_x4,
                 in_x5,in_x6,in_x7);
  lVar31 = **(long **)param_1[0x2a];
  *(undefined1 *)(lVar31 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar31 + 0x600) + 0x4ab) = 0;
  lVar39 = *(long *)(lVar31 + 0x608);
  lVar45 = *(long *)(lVar31 + 0x610);
  if (lVar39 != lVar45) {
    uVar49 = (lVar45 + -0x10) - lVar39;
    uVar48 = ((uint)(uVar49 >> 4) & 0xfffffff) + 1;
    if ((uVar48 & 3) != 0) {
      lVar52 = -((ulong)uVar48 & 3);
      do {
        plVar23 = (long *)(lVar39 + 8);
        lVar39 = lVar39 + 0x10;
        lVar52 = lVar52 + 1;
        *(undefined1 *)(*plVar23 + 0x4ab) = *(undefined1 *)(lVar31 + 0x656);
      } while (lVar52 != 0);
    }
    if (0x2f < uVar49) {
      do {
        *(undefined1 *)(*(long *)(lVar39 + 8) + 0x4ab) = *(undefined1 *)(lVar31 + 0x656);
        *(undefined1 *)(*(long *)(lVar39 + 0x18) + 0x4ab) = *(undefined1 *)(lVar31 + 0x656);
        *(undefined1 *)(*(long *)(lVar39 + 0x28) + 0x4ab) = *(undefined1 *)(lVar31 + 0x656);
        plVar23 = (long *)(lVar39 + 0x38);
        lVar39 = lVar39 + 0x40;
        *(undefined1 *)(*plVar23 + 0x4ab) = *(undefined1 *)(lVar31 + 0x656);
      } while (lVar45 != lVar39);
    }
  }
  FUN_71037760f0(**(long **)param_1[0x2a],0);
  lVar39 = *(long *)param_1[0x2a];
  puVar2 = param_1 + 0x2b;
  if (puVar2 != (undefined8 *)(lVar39 + 8)) {
    *(undefined8 *)param_1[0x2c] = **(undefined8 **)(lVar39 + 0x10);
    *(undefined8 *)(param_1[0x2c] + 8) = *(undefined8 *)(*(long *)(lVar39 + 0x10) + 8);
    lVar31 = *(long *)(lVar39 + 0x10);
    lVar39 = param_1[0x2c];
    if (lVar39 != lVar31) {
      **(undefined8 **)(lVar39 + 0x18) = **(undefined8 **)(lVar31 + 0x18);
      *(undefined8 *)(*(long *)(lVar39 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar31 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar31 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar39 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar31 + 0x18) + 0x18);
    }
  }
  lVar39 = **(long **)param_1[0x2a];
  *(undefined4 *)(*(long *)(lVar39 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar39 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar39 + 0x600) + 0x18) = 0x200;
  FUN_7101e831e0((long)(param_1 + 0x35),(long)puVar2,puVar50,uVar27,in_x4,in_x5,in_x6,in_x7);
  local_1f0 = (byte ***)&DAT_300000000;
  local_1e8 = 1;
  local_1e6 = 0;
  local_1e2 = 0;
  plVar23 = param_1 + 0x2d;
  local_1e0 = 1;
  local_1dc = 1;
  local_1da = 1;
  local_1d8 = &DAT_41f0000000000000;
  local_1d0 = 0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d0 = 0;
  local_bd0 = (undefined **)&DAT_71051860d0;
  local_bb0 = &local_bd0;
  FUN_7101989a30(&local_bd0,alStack_130);
  if (&local_bd0 == local_bb0) {
    pcVar32 = *(code **)(*local_bb0 + 0x20);
LAB_7101e7eef4:
    (*pcVar32)();
  }
  else if (local_bb0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_bb0 + 0x28);
    goto LAB_7101e7eef4;
  }
  local_bd0 = &PTR_FUN_71050b20a0;
  local_bc8 = FUN_7101e84900;
  local_bc0 = 0;
  local_bb8 = plVar23;
  local_bb0 = &local_bd0;
  FUN_7101989a30(&local_bd0,alStack_100);
  if (&local_bd0 == local_bb0) {
    pcVar32 = *(code **)(*local_bb0 + 0x20);
LAB_7101e7ef58:
    (*pcVar32)();
  }
  else if (local_bb0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_bb0 + 0x28);
    goto LAB_7101e7ef58;
  }
  plVar18 = (long *)param_1[0x2d];
  pcVar36 = "selector_00";
  ppppbVar28 = &local_1f0;
  FUN_7103770b30(plVar18,puVar2,(long ****)"selector_00",ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  lVar31 = param_1[0x2d];
  lVar45 = *(long *)(lVar31 + 0x58);
  bVar24 = *(byte *)(*(long *)param_1[0x2e] + 0x18);
  lVar39 = *(long *)(lVar31 + 0x60);
  uVar49 = (ulong)bVar24 - 1;
  uVar53 = lVar39 - lVar45 >> 4;
  if (uVar49 < uVar53 || uVar49 - uVar53 == 0) {
    if (uVar49 < uVar53) {
      lVar52 = lVar45 + uVar49 * 0x10;
      if (lVar52 != lVar39) {
        lVar39 = lVar39 + 0x10;
        do {
          (*(code *)**(undefined8 **)(lVar39 + -0x20))((undefined8 *)(lVar39 + -0x20));
          lVar39 = lVar39 + -0x10;
        } while (lVar45 + (ulong)bVar24 * 0x10 != lVar39);
      }
      *(long *)(lVar31 + 0x60) = lVar52;
    }
  }
  else {
    FUN_7101bb9cd0((long *)(lVar31 + 0x58),uVar49 - uVar53,(long ****)pcVar36,ppppbVar28,in_x4,in_x5
                   ,in_x6,in_x7);
  }
  lVar39 = param_1[0x2d];
  lVar45 = *(long *)(lVar39 + 0x70);
  puVar63 = *(undefined8 **)(lVar39 + 0x78);
  uVar67 = (ulong)*(byte *)(*(long *)param_1[0x2e] + 0x18);
  uVar53 = (long)puVar63 - lVar45 >> 4;
  uVar49 = uVar67 - 1;
  if (uVar53 < uVar49) {
    if ((ulong)(*(long *)(lVar39 + 0x80) - (long)puVar63 >> 4) < uVar49 - uVar53) {
      if (uVar49 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar45 = *(long *)(lVar39 + 0x80) - lVar45;
      if ((ulong)(lVar45 >> 4) < 0x7ffffffffffffff) {
        uVar33 = lVar45 >> 3;
        local_68 = uVar49;
        if (uVar49 <= uVar33) {
          local_68 = uVar33;
        }
        if (local_68 != 0) {
          if (local_68 >> 0x3c != 0) goto LAB_7101e81b08;
          goto LAB_7101e7f13c;
        }
        local_68 = 0;
LAB_7101e7f1a8:
        lVar45 = 0;
      }
      else {
        local_68 = 0xfffffffffffffff;
LAB_7101e7f13c:
        pppbVar34 = (byte ***)(local_68 * 0x10);
        if (pppbVar34 == (byte ***)0x0) {
          pppbVar34 = (byte ***)0x1;
        }
        lVar45 = FUN_710392e290(0x10,pppbVar34,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7
                               );
        if (lVar45 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_15a0._0_4_ = 0;
            pcVar36 = (char *)&local_bd0;
            local_bd0 = (undefined **)pppbVar34;
            uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_15a0);
            if (((uVar33 & 1) != 0) &&
               (lVar45 = FUN_710392e290(0x10,pppbVar34,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                        in_x6,in_x7), lVar45 != 0)) goto LAB_7101e7f1ac;
          }
          goto LAB_7101e7f1a8;
        }
      }
LAB_7101e7f1ac:
      puVar22 = (undefined8 *)(lVar45 + uVar53 * 0x10);
      lVar52 = (uVar53 + 1) - uVar67;
      puVar63 = puVar22;
      do {
        *puVar63 = &PTR_FUN_710523d9e8;
        puVar19 = (undefined8 *)
                  FUN_710392e290(0x10,0x18,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
        if (puVar19 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_15a0._0_4_ = 0;
            local_bd0 = (undefined **)&SUB_00000018;
            pcVar36 = (char *)&local_bd0;
            uVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_15a0);
            if (((uVar53 & 1) != 0) &&
               (puVar19 = (undefined8 *)
                          FUN_710392e290(0x10,0x18,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,
                                         in_x7), puVar19 != (undefined8 *)0x0)) goto LAB_7101e7f220;
          }
          puVar19 = (undefined8 *)0x0;
        }
LAB_7101e7f220:
        *puVar19 = 0;
        puVar19[1] = 0;
        lVar52 = lVar52 + 1;
        *(undefined1 *)(puVar19 + 2) = 1;
        puVar63[1] = puVar19;
        puVar63 = puVar63 + 2;
      } while (lVar52 != 0);
      puVar63 = *(undefined8 **)(lVar39 + 0x70);
      puVar19 = *(undefined8 **)(lVar39 + 0x78);
      puVar64 = puVar63;
      puVar66 = puVar22;
      if (*(undefined8 **)(lVar39 + 0x78) != puVar63) {
        do {
          puVar64 = puVar19 + -2;
          puVar22 = puVar66 + -2;
          *puVar22 = &PTR_FUN_710523d9e8;
          puVar66[-1] = 0;
          if (puVar19 != puVar66) {
            uVar27 = puVar19[-1];
            puVar19[-1] = 0;
            uVar53 = puVar66[-1];
            puVar66[-1] = uVar27;
            if (uVar53 != 0) {
              FUN_710392eb40(uVar53);
            }
          }
          puVar19 = puVar64;
          puVar66 = puVar22;
        } while (puVar63 != puVar64);
        puVar63 = *(undefined8 **)(lVar39 + 0x78);
        puVar64 = *(undefined8 **)(lVar39 + 0x70);
      }
      *(undefined8 **)(lVar39 + 0x70) = puVar22;
      *(ulong *)(lVar39 + 0x78) = lVar45 + uVar49 * 0x10;
      *(ulong *)(lVar39 + 0x80) = lVar45 + local_68 * 0x10;
      while (puVar63 != puVar64) {
        puVar63 = puVar63 + -2;
        (**(code **)*puVar63)(puVar63);
      }
      if (puVar64 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar64);
      }
    }
    else {
      lVar45 = (uVar53 + 1) - uVar67;
      do {
        *puVar63 = &PTR_FUN_710523d9e8;
        puVar22 = (undefined8 *)
                  FUN_710392e290(0x10,0x18,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
        if (puVar22 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_15a0._0_4_ = 0;
            local_bd0 = (undefined **)&SUB_00000018;
            pcVar36 = (char *)&local_bd0;
            uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_15a0);
            if (((uVar49 & 1) != 0) &&
               (puVar22 = (undefined8 *)
                          FUN_710392e290(0x10,0x18,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,
                                         in_x7), puVar22 != (undefined8 *)0x0)) goto LAB_7101e7f114;
          }
          puVar22 = (undefined8 *)0x0;
        }
LAB_7101e7f114:
        *puVar22 = 0;
        puVar22[1] = 0;
        lVar45 = lVar45 + 1;
        *(undefined1 *)(puVar22 + 2) = 1;
        puVar63[1] = puVar22;
        puVar63 = (undefined8 *)(*(long *)(lVar39 + 0x78) + 0x10);
        *(undefined8 **)(lVar39 + 0x78) = puVar63;
      } while (lVar45 != 0);
    }
  }
  else if (uVar49 < uVar53) {
    puVar22 = (undefined8 *)(lVar45 + uVar49 * 0x10);
    if (puVar22 != puVar63) {
      puVar63 = puVar63 + 2;
      do {
        (**(code **)puVar63[-4])(puVar63 + -4);
        puVar63 = puVar63 + -2;
      } while ((undefined8 *)(lVar45 + uVar67 * 0x10) != puVar63);
    }
    *(undefined8 **)(lVar39 + 0x78) = puVar22;
  }
  local_1f8 = (undefined ***)0x0;
  local_200 = (undefined ***)0x0;
  local_208 = (undefined ***)0x0;
  *(undefined8 *)(*plVar23 + 0x48) = *(undefined8 *)(*plVar23 + 0x40);
  if (*(long *)(lVar31 + 0x60) != *(long *)(lVar31 + 0x58)) {
    ppppbVar70 = (byte ****)0x0;
LAB_7101e7f358:
    uVar69 = (uint)ppppbVar70;
    uVar48 = uVar69 & 0xff;
    FUN_71003a4ca0((uint *)&local_bd0,"set_parts_btn_skill_%02d",(ulong)uVar48,pcVar36,ppppbVar28,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_71037717d0((undefined8 *)*plVar23,uVar48,(char *)&local_bc8,ppppbVar28,in_x4,in_x5,in_x6,
                   in_x7);
    lVar39 = *(long *)*plVar23;
    lVar45 = *(long *)(lVar39 + 0x1b8);
    if (lVar45 != 0) {
      lVar52 = lVar39 + 0x1b8;
      do {
        if ((int)uVar48 <= *(int *)(lVar45 + 0x20)) {
          lVar52 = lVar45;
        }
        lVar45 = *(long *)(lVar45 + (ulong)(*(int *)(lVar45 + 0x20) < (int)uVar48) * 8);
      } while (lVar45 != 0);
      if (((lVar52 != lVar39 + 0x1b8) && (*(int *)(lVar52 + 0x20) <= (int)uVar48)) &&
         (plVar55 = *(long **)(lVar52 + 0x28), plVar55 != (long *)0x0)) {
        (**(code **)(*plVar55 + 0x1f8))(plVar55,1);
        (**(code **)(*plVar55 + 0x388))(plVar55,0,0);
        lVar39 = *(long *)*plVar23;
      }
    }
    pppplVar25 = (long ****)(ulong)uVar48;
    FUN_7103771d60(&local_98,lVar39,pppplVar25,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
    ppuVar71 = local_90;
    plVar55 = (long *)*local_90;
    if (plVar55 != (long *)0x0) {
      (**(code **)(*plVar55 + 0x280))(plVar55,0);
      plVar55 = (long *)*ppuVar71;
      if (plVar55 != (long *)0x0) {
        (**(code **)(*plVar55 + 0x1e8))(plVar55,1);
      }
    }
    FUN_7103776640(&local_a8,(long)puVar2,(byte ****)&local_bc8,pppplVar25,ppppbVar28,in_x4,in_x5,
                   in_x6,in_x7);
    lVar39 = *(long *)(*plVar23 + 0x58);
    plVar55 = (long *)((ulong)ppppbVar70 & 0xff);
    if ((long *)(*(long *)(*plVar23 + 0x60) - lVar39 >> 4) <= plVar55) {
LAB_7101e81b20:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar26 = (byte ****)(lVar39 + (long)plVar55 * 0x10);
    if (ppppbVar26 != &local_a8) {
      *ppppbVar26[1] = *local_a0;
      ppppbVar26[1][1] = local_a0[1];
      pppbVar34 = ppppbVar26[1];
      if (pppbVar34 != local_a0) {
        *pppbVar34[3] = *local_a0[3];
        pppbVar34[3][1] = local_a0[3][1];
        pppbVar34[3][2] = local_a0[3][2];
        pppbVar34[3][3] = local_a0[3][3];
      }
    }
    FUN_71037780e0(&local_15a0,(long)&local_a8,(long ****)"hold_on",pppplVar25,ppppbVar28,in_x4,
                   in_x5,in_x6,in_x7);
    lVar39 = *(long *)(*plVar23 + 0x70);
    if ((long *)(*(long *)(*plVar23 + 0x78) - lVar39 >> 4) <= plVar55) goto LAB_7101e81b20;
    puVar63 = (undefined8 *)(lVar39 + (long)plVar55 * 0x10);
    if (puVar63 != &local_15a0) {
      uVar27 = CONCAT26(local_1598._6_2_,
                        CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598))
                       );
      local_1598._0_1_ = 0;
      local_1598._1_4_ = 0;
      local_1598._5_1_ = 0;
      local_1598._6_2_ = 0;
      uVar49 = puVar63[1];
      puVar63[1] = uVar27;
      if (uVar49 != 0) {
        FUN_710392eb40(uVar49);
      }
    }
    uVar49 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_15a0._0_4_ = 0x523d9e8;
    local_15a0._4_4_ = 0x71;
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
    FUN_7103776910(&local_b8,(long)&local_a8,(long ****)"set_txt_num_skill_piece",pppplVar25,
                   ppppbVar28,in_x4,in_x5,in_x6,in_x7);
    plVar35 = *(long **)param_1[0x2e];
    plVar40 = (long *)plVar35[1];
    if (((long)plVar40 - 1U & (ulong)plVar40) == 0) {
      plVar35 = *(long **)(*plVar35 + ((long)plVar40 - 1U & (ulong)plVar55) * 8);
      do {
        do {
          plVar35 = (long *)*plVar35;
        } while ((long *)plVar35[1] != plVar55);
      } while ((uint)*(byte *)(plVar35 + 2) != (uVar69 & 0xff));
    }
    else {
      plVar46 = plVar55;
      if (plVar40 <= plVar55) {
        uVar49 = 0;
        if (plVar40 != (long *)0x0) {
          uVar49 = (ulong)plVar55 / (ulong)plVar40;
        }
        plVar46 = (long *)((long)plVar55 - uVar49 * (long)plVar40);
      }
      plVar35 = *(long **)(*plVar35 + (long)plVar46 * 8);
      do {
        do {
          plVar35 = (long *)*plVar35;
        } while ((long *)plVar35[1] != plVar55);
      } while ((uint)*(byte *)(plVar35 + 2) != (uVar69 & 0xff));
    }
    lVar39 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228) + 8);
    pcVar36 = *(char **)(lVar39 + 0x20);
    pbVar41 = &DAT_7104742dbb;
    if (*pcVar36 == '\f') {
      iVar17 = *(int *)(pcVar36 + 1) + -1;
      if (0 < *(int *)(pcVar36 + 1)) {
        iVar44 = 0;
        uVar49 = *(ulong *)(lVar39 + 0x48) & 0xffffffffff;
        do {
          iVar4 = iVar17 + iVar44;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar1 = (uint *)(*(long *)(*(long *)(lVar39 + 0x18) + 0x28) + (long)*(int *)(pcVar36 + 5)
                           + (long)iVar4 * 8);
          uVar53 = *(ulong *)(*(long *)(*(long *)(lVar39 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
          if (uVar53 == uVar49) {
            uVar38 = puVar1[1];
            if (-1 < (int)uVar38) {
              pbVar41 = (byte *)(pcVar36 + (int)uVar38);
              goto LAB_7101e7f6a4;
            }
            break;
          }
          iVar16 = iVar4 + -1;
          if (uVar53 <= uVar49) {
            iVar44 = iVar4 + 1;
            iVar16 = iVar17;
          }
          iVar17 = iVar16;
        } while (iVar44 <= iVar17);
      }
      pbVar41 = &DAT_7104742dbb;
    }
LAB_7101e7f6a4:
    if ((*pbVar41 - 0xb < 2) && (*(uint *)((long)plVar35 + 0x18) < *(uint *)(pbVar41 + 1))) {
      FUN_710326a3e0(&local_15a0,lVar39,*(uint *)((long)plVar35 + 0x18));
      pcVar13 = (char *)CONCAT26(local_1598._6_2_,
                                 CONCAT15(local_1598._5_1_,
                                          CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
      pcVar36 = "";
      if (*pcVar13 == '\f') {
        iVar17 = *(int *)(pcVar13 + 1) + -1;
        if (0 < *(int *)(pcVar13 + 1)) {
          iVar44 = 0;
          do {
            iVar4 = iVar17 + iVar44;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 1;
            }
            iVar4 = iVar4 >> 1;
            puVar1 = (uint *)(*(long *)(CONCAT44(local_15a0._4_4_,(uint)local_15a0) + 0x28) +
                              (long)*(int *)(pcVar13 + 5) + (long)iVar4 * 8);
            uVar49 = *(ulong *)(*(long *)(CONCAT44(local_15a0._4_4_,(uint)local_15a0) + 0x20) +
                               (ulong)*puVar1 * 8);
            if (uVar49 == 0x4182694fc) {
              uVar38 = puVar1[1];
              if (-1 < (int)uVar38) {
                pcVar36 = pcVar13 + (int)uVar38;
                goto LAB_7101e7f758;
              }
              break;
            }
            iVar16 = iVar4 + -1;
            if (uVar49 < 0x4182694fd) {
              iVar44 = iVar4 + 1;
              iVar16 = iVar17;
            }
            iVar17 = iVar16;
          } while (iVar44 <= iVar17);
        }
        pcVar36 = "";
      }
LAB_7101e7f758:
      switch(*pcVar36) {
      case '\x01':
      case '\x03':
        ppppbVar28 = (byte ****)(ulong)(byte)pcVar36[1];
        break;
      case '\x02':
        ppppbVar28 = (byte ****)(long)pcVar36[1];
        break;
      case '\x04':
        ppppbVar28 = (byte ****)(long)*(short *)(pcVar36 + 1);
        break;
      case '\x05':
        ppppbVar28 = (byte ****)(ulong)*(ushort *)(pcVar36 + 1);
        break;
      case '\x06':
      case '\a':
        ppppbVar28 = (byte ****)(ulong)*(uint *)(pcVar36 + 1);
        break;
      default:
        goto switchD_7101e7f778_default;
      }
    }
    else {
switchD_7101e7f778_default:
      ppppbVar28 = (byte ****)0x0;
    }
    FUN_710377a280((long)&local_b8,(byte *)"cam_skill_tree_necessary_fragment_n",1);
    bVar24 = (byte)ppppbVar70;
    FUN_71024dae20((uint *)&local_15a0,*(long *)param_1[0x2e],bVar24);
    FUN_7103778300(0x3f800000,(long)local_a0,(long)&local_1598);
    FUN_7103778300(0x3f800000,(long)local_a0,0x710435be2b);
    pcVar36 = (char *)ppppbVar70;
    FUN_7101e85360(plVar23,(long)&local_a8,bVar24);
    plVar35 = *(long **)param_1[0x2e];
    plVar40 = (long *)plVar35[1];
    if (((long)plVar40 - 1U & (ulong)plVar40) == 0) {
      plVar40 = *(long **)(*plVar35 + ((long)plVar40 - 1U & (ulong)plVar55) * 8);
      do {
        do {
          plVar40 = (long *)*plVar40;
        } while ((long *)plVar40[1] != plVar55);
        pbVar41 = (byte *)(plVar40 + 2);
      } while ((uint)*pbVar41 != (uVar69 & 0xff));
    }
    else {
      plVar46 = plVar55;
      if (plVar40 <= plVar55) {
        uVar49 = 0;
        if (plVar40 != (long *)0x0) {
          uVar49 = (ulong)plVar55 / (ulong)plVar40;
        }
        plVar46 = (long *)((long)plVar55 - uVar49 * (long)plVar40);
      }
      plVar40 = *(long **)(*plVar35 + (long)plVar46 * 8);
      do {
        do {
          plVar40 = (long *)*plVar40;
        } while ((long *)plVar40[1] != plVar55);
        pbVar41 = (byte *)(plVar40 + 2);
      } while ((uint)*pbVar41 != (uVar69 & 0xff));
    }
    uVar49 = (ulong)(char)pbVar41[4];
    if ((-1 < (long)uVar49) &&
       ((*(ulong *)((long)plVar35 + (uVar49 >> 3 & 0x1ffffffffffffff8) + 0x90) &
        1L << (uVar49 & 0x3f)) != 0)) {
      pbVar41 = (byte *)param_1[0x32];
      if (pbVar41 == (byte *)param_1[0x33]) {
        pvVar68 = (void *)param_1[0x31];
        ppppbVar26 = (byte ****)(pbVar41 + -(long)pvVar68);
        uVar49 = (long)ppppbVar26 + 1;
        if ((long)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar53 = (long)param_1[0x33] - (long)pvVar68;
        if (uVar53 < 0x3fffffffffffffff) {
          uVar53 = uVar53 * 2;
          if (uVar49 <= uVar53) {
            uVar49 = uVar53;
          }
          if (uVar49 != 0) goto LAB_7101e7f8f0;
LAB_7101e7f94c:
          pvVar21 = (void *)0x0;
        }
        else {
          uVar49 = 0x7fffffffffffffff;
LAB_7101e7f8f0:
          pvVar21 = (void *)FUN_710392e290(0x10,uVar49,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                           in_x6,in_x7);
          if (pvVar21 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_84[0] = 0;
              local_15a0._0_4_ = (uint)uVar49;
              local_15a0._4_4_ = (undefined4)(uVar49 >> 0x20);
              pcVar36 = (char *)&local_15a0;
              uVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
              if (((uVar53 & 1) != 0) &&
                 (pvVar21 = (void *)FUN_710392e290(0x10,uVar49,(long ****)pcVar36,ppppbVar28,in_x4,
                                                   in_x5,in_x6,in_x7), pvVar21 != (void *)0x0))
              goto LAB_7101e7f950;
            }
            goto LAB_7101e7f94c;
          }
        }
LAB_7101e7f950:
        pbVar41 = (byte *)((long)pvVar21 + (long)ppppbVar26);
        *pbVar41 = bVar24;
        if (0 < (long)ppppbVar26) {
          memcpy(pvVar21,pvVar68,(size_t)ppppbVar26);
          pcVar36 = (char *)ppppbVar26;
        }
        param_1[0x31] = pvVar21;
        param_1[0x32] = pbVar41 + 1;
        param_1[0x33] = (long)pvVar21 + uVar49;
        if (pvVar68 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar68);
        }
      }
      else {
        *pbVar41 = bVar24;
        param_1[0x32] = param_1[0x32] + 1;
      }
    }
    uVar49 = local_b0;
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
    pppbVar34 = local_a0;
    local_a8 = (byte ***)&PTR_FUN_710523d988;
    local_a0 = (byte ***)0x0;
    if (pppbVar34 != (byte ***)0x0) {
      ppbVar20 = pppbVar34[3];
      pppbVar34[2] = &PTR_FUN_710523d9a8;
      pppbVar34[3] = (byte **)0x0;
      if (ppbVar20 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar20);
      }
      FUN_710392eb40((ulong)pppbVar34);
    }
    ppuVar71 = local_90;
    local_98 = &PTR_FUN_710523d9c8;
    local_90 = (undefined **)0x0;
    if (ppuVar71 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar71);
    }
    lVar39 = *plVar23;
    plVar40 = *(long **)(lVar39 + 0x20);
    puVar3 = (ulong *)(lVar39 + 0x18);
    plVar35 = plVar23;
    if (plVar40 == (long *)0x0) {
LAB_7101e7fb58:
      plVar46 = (long *)FUN_710392e290(0x10,0x40,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,
                                       in_x7);
      if (plVar46 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_15a0._0_4_ = 0;
          local_bd0 = (undefined **)&DAT_00000040;
          pcVar36 = (char *)&local_bd0;
          uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_15a0);
          if (((uVar49 & 1) != 0) &&
             (plVar46 = (long *)FUN_710392e290(0x10,0x40,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                               in_x6,in_x7), plVar46 != (long *)0x0))
          goto LAB_7101e7fbb4;
        }
        plVar46 = (long *)0x0;
      }
LAB_7101e7fbb4:
      plVar46[5] = 0;
      plVar46[6] = 0;
      plVar46[3] = 0;
      plVar46[4] = 0;
      *(byte *)(plVar46 + 2) = bVar24;
      *(undefined4 *)(plVar46 + 7) = 0x3f800000;
      *plVar46 = 0;
      plVar46[1] = (long)plVar55;
      fVar72 = (float)(*(long *)(lVar39 + 0x30) + 1);
      if ((plVar40 == (long *)0x0) || (*(float *)(lVar39 + 0x38) * (float)plVar40 < fVar72)) {
        if (plVar40 < (long *)0x3) {
          uVar49 = 1;
        }
        else {
          uVar49 = (ulong)(((long)plVar40 - 1U & (ulong)plVar40) != 0);
        }
        uVar49 = uVar49 | (long)plVar40 << 1;
        uVar53 = (ulong)(fVar72 / *(float *)(lVar39 + 0x38));
        if (uVar53 <= uVar49) {
          uVar53 = uVar49;
        }
        if (uVar53 - 1 == 0) {
          uVar53 = 2;
        }
        else if ((uVar53 - 1 & uVar53) != 0) {
          uVar53 = std::__next_prime(uVar53);
        }
        uVar49 = *(ulong *)(lVar39 + 0x20);
        if (uVar49 < uVar53) {
LAB_7101e7fc64:
          FUN_7101e850c0(puVar3,uVar53,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
        }
        else if (uVar53 < uVar49) {
          uVar67 = (ulong)((float)*(ulong *)(lVar39 + 0x30) / *(float *)(lVar39 + 0x38));
          if (uVar49 < 3 || (uVar49 - 1 & uVar49) != 0) {
            uVar67 = std::__next_prime(uVar67);
          }
          else if (1 < uVar67) {
            uVar67 = 1L << (-LZCOUNT(uVar67 - 1) & 0x3fU);
          }
          if (uVar67 <= uVar53) {
            uVar67 = uVar53;
          }
          uVar53 = uVar67;
          if (uVar67 < uVar49) goto LAB_7101e7fc64;
        }
        plVar40 = *(long **)(lVar39 + 0x20);
        if (((long)plVar40 - 1U & (ulong)plVar40) == 0) {
          plVar35 = (long *)((long)plVar40 - 1U & (ulong)plVar55);
        }
        else {
          plVar35 = plVar55;
          if (plVar40 <= plVar55) {
            uVar49 = 0;
            if (plVar40 != (long *)0x0) {
              uVar49 = (ulong)plVar55 / (ulong)plVar40;
            }
            plVar35 = (long *)((long)plVar55 - uVar49 * (long)plVar40);
          }
        }
      }
      uVar49 = *puVar3;
      plVar54 = *(long **)(uVar49 + (long)plVar35 * 8);
      if (plVar54 == (long *)0x0) {
        plVar54 = (long *)(lVar39 + 0x28);
        *plVar46 = *plVar54;
        *plVar54 = (long)plVar46;
        *(long **)(uVar49 + (long)plVar35 * 8) = plVar54;
        if (*plVar46 != 0) {
          plVar35 = *(long **)(*plVar46 + 8);
          if (((long)plVar40 - 1U & (ulong)plVar40) == 0) {
            plVar35 = (long *)((ulong)plVar35 & (long)plVar40 - 1U);
          }
          else if (plVar40 <= plVar35) {
            uVar49 = 0;
            if (plVar40 != (long *)0x0) {
              uVar49 = (ulong)plVar35 / (ulong)plVar40;
            }
            plVar35 = (long *)((long)plVar35 - uVar49 * (long)plVar40);
          }
          plVar54 = (long *)(*puVar3 + (long)plVar35 * 8);
          goto LAB_7101e7fd7c;
        }
      }
      else {
        *plVar46 = *plVar54;
LAB_7101e7fd7c:
        *plVar54 = (long)plVar46;
      }
      plVar40 = *(long **)(lVar39 + 0x20);
      *(long *)(lVar39 + 0x30) = *(long *)(lVar39 + 0x30) + 1;
    }
    else {
      uVar53 = (long)plVar40 - 1;
      uVar49 = uVar53 & (ulong)plVar40;
      if (uVar49 == 0) {
        plVar35 = (long *)(uVar53 & (ulong)plVar55);
      }
      else {
        plVar35 = plVar55;
        if (plVar40 <= plVar55) {
          uVar67 = 0;
          if (plVar40 != (long *)0x0) {
            uVar67 = (ulong)plVar55 / (ulong)plVar40;
          }
          plVar35 = (long *)((long)plVar55 - uVar67 * (long)plVar40);
        }
      }
      uVar67 = *puVar3;
      plVar46 = *(long **)(uVar67 + (long)plVar35 * 8);
      if ((plVar46 != (long *)0x0) && (plVar46 = (long *)*plVar46, plVar46 != (long *)0x0)) {
        if (uVar49 == 0) {
          do {
            plVar54 = (long *)plVar46[1];
            if (plVar54 != plVar55 && (long *)((ulong)plVar54 & uVar53) != plVar35) break;
            if ((plVar54 == plVar55) && ((uint)*(byte *)(plVar46 + 2) == (uVar69 & 0xff)))
            goto LAB_7101e7fd94;
            plVar46 = (long *)*plVar46;
          } while (plVar46 != (long *)0x0);
        }
        else {
          do {
            plVar54 = (long *)plVar46[1];
            if (plVar54 == plVar55) {
              if ((uint)*(byte *)(plVar46 + 2) == (uVar69 & 0xff)) goto LAB_7101e7fd94;
            }
            else {
              if (plVar40 <= plVar54) {
                uVar33 = 0;
                if (plVar40 != (long *)0x0) {
                  uVar33 = (ulong)plVar54 / (ulong)plVar40;
                }
                plVar54 = (long *)((long)plVar54 - uVar33 * (long)plVar40);
              }
              if (plVar54 != plVar35) break;
            }
            plVar46 = (long *)*plVar46;
          } while (plVar46 != (long *)0x0);
        }
      }
      if (uVar49 == 0) {
        plVar35 = (long *)(uVar53 & (ulong)plVar55);
        plVar46 = *(long **)(uVar67 + (long)plVar35 * 8);
        if (plVar46 != (long *)0x0) goto LAB_7101e7fae0;
        goto LAB_7101e7fb58;
      }
      plVar35 = plVar55;
      if (plVar40 <= plVar55) {
        uVar33 = 0;
        if (plVar40 != (long *)0x0) {
          uVar33 = (ulong)plVar55 / (ulong)plVar40;
        }
        plVar35 = (long *)((long)plVar55 - uVar33 * (long)plVar40);
      }
      plVar46 = *(long **)(uVar67 + (long)plVar35 * 8);
      if (plVar46 == (long *)0x0) goto LAB_7101e7fb58;
LAB_7101e7fae0:
      if (uVar49 == 0) {
        do {
          plVar46 = (long *)*plVar46;
          if ((plVar46 == (long *)0x0) ||
             ((long *)plVar46[1] != plVar55 && (long *)((ulong)plVar46[1] & uVar53) != plVar35))
          goto LAB_7101e7fb58;
        } while ((uint)*(byte *)(plVar46 + 2) != (uVar69 & 0xff));
      }
      else {
        do {
          plVar46 = (long *)*plVar46;
          if (plVar46 == (long *)0x0) goto LAB_7101e7fb58;
          plVar54 = (long *)plVar46[1];
          if (plVar54 != plVar55) {
            if (plVar40 <= plVar54) {
              uVar49 = 0;
              if (plVar40 != (long *)0x0) {
                uVar49 = (ulong)plVar54 / (ulong)plVar40;
              }
              plVar54 = (long *)((long)plVar54 - uVar49 * (long)plVar40);
            }
            if (plVar54 != plVar35) goto LAB_7101e7fb58;
          }
        } while ((uint)*(byte *)(plVar46 + 2) != (uVar69 & 0xff));
      }
    }
LAB_7101e7fd94:
    if (plVar40 == (long *)0x0) {
LAB_7101e7fe50:
      plVar46 = (long *)0x0;
    }
    else {
      uVar49 = (long)plVar40 - 1;
      if ((uVar49 & (ulong)plVar40) == 0) {
        plVar35 = (long *)(uVar49 & (ulong)plVar55);
      }
      else {
        plVar35 = plVar55;
        if (plVar40 <= plVar55) {
          uVar53 = 0;
          if (plVar40 != (long *)0x0) {
            uVar53 = (ulong)plVar55 / (ulong)plVar40;
          }
          plVar35 = (long *)((long)plVar55 - uVar53 * (long)plVar40);
        }
      }
      plVar46 = *(long **)(*puVar3 + (long)plVar35 * 8);
      if (plVar46 == (long *)0x0) goto LAB_7101e7fe50;
      plVar46 = (long *)*plVar46;
      if (plVar46 != (long *)0x0) {
        if ((uVar49 & (ulong)plVar40) == 0) {
          do {
            plVar40 = (long *)plVar46[1];
            if (plVar40 != plVar55 && (long *)((ulong)plVar40 & uVar49) != plVar35)
            goto LAB_7101e7f338;
          } while (((plVar40 != plVar55) || ((uint)*(byte *)(plVar46 + 2) != (uVar69 & 0xff))) &&
                  (plVar46 = (long *)*plVar46, plVar46 != (long *)0x0));
        }
        else {
          do {
            plVar54 = (long *)plVar46[1];
            if (plVar54 == plVar55) {
              if ((uint)*(byte *)(plVar46 + 2) == (uVar69 & 0xff)) break;
            }
            else {
              if (plVar40 <= plVar54) {
                uVar49 = 0;
                if (plVar40 != (long *)0x0) {
                  uVar49 = (ulong)plVar54 / (ulong)plVar40;
                }
                plVar54 = (long *)((long)plVar54 - uVar49 * (long)plVar40);
              }
              if (plVar54 != plVar35) goto LAB_7101e7f338;
            }
            plVar46 = (long *)*plVar46;
          } while (plVar46 != (long *)0x0);
        }
      }
    }
    goto LAB_7101e7fe58;
  }
LAB_7101e809b8:
  local_1598._6_2_ = 0;
  local_15a0._0_4_ = 0x65642f18;
  local_15a0._4_4_ = 0x72752f76;
  local_1598._0_1_ = 0x61;
  local_1590 = 0;
  local_1598._1_4_ = 0x6d6f646e;
  local_1598._5_1_ = 0;
  std::random_device::random_device((random_device *)&local_bd0,(string *)&local_15a0);
  if ((((uint)local_15a0 & 1) != 0) && (local_1590 != 0)) {
    FUN_710392eb40(local_1590);
  }
  local_15a0._0_4_ = std::random_device::operator()((random_device *)&local_bd0);
  lVar39 = -0x26e;
  iVar17 = 1;
  piVar37 = (int *)&local_15a0;
  uVar48 = (uint)local_15a0;
  while( true ) {
    iVar44 = (int)lVar39;
    uVar48 = iVar44 + (uVar48 ^ uVar48 >> 0x1e) * 0x6c078965 + 0x26f;
    piVar37[1] = uVar48;
    if (lVar39 == 0) break;
    iVar4 = (uVar48 ^ uVar48 >> 0x1e) * 0x6c078965;
    uVar48 = iVar4 + iVar17 + 1;
    iVar17 = iVar17 + 2;
    lVar39 = lVar39 + 2;
    piVar37[2] = iVar44 + iVar4 + 0x270;
    piVar37 = piVar37 + 2;
  }
  local_be0 = 0;
  puVar58 = (undefined1 *)param_1[0x31];
  if (1 < param_1[0x32] - (long)puVar58) {
    puVar62 = (undefined1 *)(param_1[0x32] + -1);
    ppuVar71 = (undefined **)(puVar62 + -(long)puVar58);
    if (puVar58 <= puVar62 && ppuVar71 != (undefined **)0x0) {
      do {
        local_98 = (undefined **)0x0;
        local_90 = ppuVar71;
        lVar39 = FUN_7101d71a30((long)&local_15a0,(long *)&local_98);
        if (lVar39 != 0) {
          uVar10 = *puVar58;
          *puVar58 = puVar58[lVar39];
          puVar58[lVar39] = uVar10;
        }
        puVar58 = puVar58 + 1;
        ppuVar71 = (undefined **)((long)ppuVar71 + -1);
      } while (puVar62 != puVar58);
    }
  }
  std::random_device::~random_device((random_device *)&local_bd0);
  FUN_71037717d0(plVar18,200,"set_btn_return",ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  lVar39 = *(long *)(*plVar18 + 0x1b8);
  if (lVar39 != 0) {
    lVar31 = *plVar18 + 0x1b8;
    lVar45 = lVar31;
    lVar52 = lVar39;
    do {
      if (199 < *(int *)(lVar52 + 0x20)) {
        lVar45 = lVar52;
      }
      lVar52 = *(long *)(lVar52 + (ulong)(*(int *)(lVar52 + 0x20) < 200) * 8);
    } while (lVar52 != 0);
    if (((lVar45 != lVar31) && (*(int *)(lVar45 + 0x20) < 0xc9)) &&
       (plVar55 = *(long **)(lVar45 + 0x28), plVar55 != (long *)0x0)) {
      (**(code **)(*plVar55 + 0x1f8))(plVar55,1);
      (**(code **)(*plVar55 + 0x388))(plVar55,0,0);
      lVar31 = *plVar18 + 0x1b8;
      lVar39 = *(long *)(*plVar18 + 0x1b8);
    }
    lVar45 = lVar31;
    if (lVar39 != 0) {
      do {
        if (199 < *(int *)(lVar39 + 0x20)) {
          lVar45 = lVar39;
        }
        lVar39 = *(long *)(lVar39 + (ulong)(*(int *)(lVar39 + 0x20) < 200) * 8);
      } while (lVar39 != 0);
      if (((lVar45 != lVar31) && (*(int *)(lVar45 + 0x20) < 0xc9)) &&
         (plVar55 = *(long **)(lVar45 + 0x28), plVar55 != (long *)0x0)) {
        (**(code **)(*plVar55 + 0x208))(plVar55,1);
        (**(code **)(*plVar55 + 0x388))(plVar55,0,0);
      }
    }
  }
  local_bd0 = (undefined **)0x1053dffe8c;
  FUN_7103772070(*plVar18,200,(long ****)&local_bd0,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  pppplVar25 = (long ****)&DAT_000000c8;
  FUN_7103771d60(&local_15a0,*plVar18,(long ****)&DAT_000000c8,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  plVar18 = (long *)CONCAT26(local_1598._6_2_,
                             CONCAT15(local_1598._5_1_,
                                      CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  FUN_710377ad90(&local_bd0,*plVar18,pppplVar25,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  lVar39 = *plVar23;
  if ((undefined8 *)(lVar39 + 8) != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = *(ulong *)(lVar39 + 0x10);
    *(byte ****)(lVar39 + 0x10) = pppbVar34;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  local_15a0._0_4_ = 0x523d9c8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_btn_return",pppplVar25,ppppbVar28,in_x4,
                 in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  FUN_7103778300(0x3f800000,(long)local_bc8,0x71043f0f4e);
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (*(char *)((long)param_1 + 0x17e) != '\0') {
    lVar31 = param_1[0x2d];
    uVar49 = (ulong)*(byte *)((long)param_1 + 0x17f);
    lVar39 = *(long *)(lVar31 + 0x58);
    if ((lVar39 + uVar49 * 0x10 != 0) && (uVar49 < (ulong)(*(long *)(lVar31 + 0x60) - lVar39 >> 4)))
    {
      FUN_7103778300(0x3f800000,*(long *)(lVar39 + uVar49 * 0x10 + 8),0x71042b4a6a);
      lVar31 = *plVar23;
    }
    if (*(long *)(lVar31 + 0xa0) != 0) {
      FUN_710373b7f0(*(long *)(lVar31 + 0xa0));
      uVar49 = *(ulong *)(lVar31 + 0xa0);
      *(undefined8 *)(lVar31 + 0xa0) = 0;
      if (uVar49 != 0) {
        *(undefined ***)(uVar49 + 8) = &PTR_FUN_7104f73d50;
        if (((*(long *)(uVar49 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(uVar49 + 0x18) == DAT_7106dd53ac)) {
          piVar37 = (int *)(*(long *)(uVar49 + 0x10) + 0x38);
          do {
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(piVar37,0x10);
            if (bVar11) {
              *piVar37 = *piVar37 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        *(undefined8 *)(uVar49 + 0x10) = 0;
        *(undefined1 *)(uVar49 + 0x20) = 0;
        FUN_710392eb40(uVar49);
      }
    }
    *(undefined1 *)((long)param_1 + 0x17e) = 0;
  }
  pppuVar61 = local_208;
  pppuVar57 = local_200;
  if (local_208 != (undefined ***)0x0) {
    while (pppuVar57 != pppuVar61) {
      pppuVar57 = pppuVar57 + -2;
      (*(code *)**pppuVar57)(pppuVar57);
    }
    local_200 = pppuVar61;
    if (local_208 != (undefined ***)0x0) {
      FUN_710392eb40((ulong)local_208);
    }
  }
  if (alStack_100 == local_e0) {
    pcVar32 = *(code **)(*local_e0 + 0x20);
LAB_7101e80dfc:
    (*pcVar32)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101e80dfc;
  }
  if (alStack_130 == local_110) {
    pcVar32 = *(code **)(*local_110 + 0x20);
LAB_7101e80e30:
    (*pcVar32)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar32 = *(code **)(*local_110 + 0x28);
    goto LAB_7101e80e30;
  }
  if (alStack_160 == local_140) {
    pcVar32 = *(code **)(*local_140 + 0x20);
LAB_7101e80e64:
    (*pcVar32)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar32 = *(code **)(*local_140 + 0x28);
    goto LAB_7101e80e64;
  }
  if (alStack_190 == local_170) {
    pcVar32 = *(code **)(*local_170 + 0x20);
LAB_7101e80e98:
    (*pcVar32)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar32 = *(code **)(*local_170 + 0x28);
    goto LAB_7101e80e98;
  }
  if (alStack_1c0 == local_1a0) {
    pcVar32 = *(code **)(*local_1a0 + 0x20);
LAB_7101e80ecc:
    (*pcVar32)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_1a0 + 0x28);
    goto LAB_7101e80ecc;
  }
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_parts_help",pppplVar25,ppppbVar28,in_x4,
                 in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  puVar63 = param_1 + 0x3a;
  if (puVar63 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = param_1[0x3b];
    param_1[0x3b] = pppbVar34;
    if (uVar49 != 0) {
      uVar53 = *(ulong *)(uVar49 + 0x18);
      *(undefined ***)(uVar49 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar49 + 0x18) = 0;
      if (uVar53 != 0) {
        FUN_710392eb40(uVar53);
      }
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776640(&local_bd0,(long)puVar63,(byte ****)"set_parts_text_scroll",pppplVar25,ppppbVar28,
                 in_x4,in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x3c != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = param_1[0x3d];
    param_1[0x3d] = pppbVar34;
    if (uVar49 != 0) {
      uVar53 = *(ulong *)(uVar49 + 0x18);
      *(undefined ***)(uVar49 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar49 + 0x18) = 0;
      if (uVar53 != 0) {
        FUN_710392eb40(uVar53);
      }
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776910(&local_bd0,(long)puVar63,(long ****)"set_txt_skill",pppplVar25,ppppbVar28,in_x4,
                 in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x3e != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = param_1[0x3f];
    param_1[0x3f] = pppbVar34;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776910(&local_bd0,(long)puVar63,(long ****)"set_txt_num_skill_piece",pppplVar25,ppppbVar28
                 ,in_x4,in_x5,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x40 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = param_1[0x41];
    param_1[0x41] = pppbVar34;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  if (*(long **)(param_1[0x3f] + 0x10) != (long *)0x0) {
    local_bd0 = (undefined **)((ulong)local_bd0 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(param_1[0x3f] + 0x10),(ushort *)&local_bd0,0,0);
  }
  if (*(long **)(param_1[0x41] + 0x10) != (long *)0x0) {
    local_bd0 = (undefined **)((ulong)local_bd0 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(param_1[0x41] + 0x10),(ushort *)&local_bd0,0,0);
  }
  FUN_7103778300(0x3f800000,param_1[0x3b],0x71043e0854);
  if (*(long *)(param_1[0x3d] + 8) != 0) {
    puVar63 = *(undefined8 **)(*(long *)(param_1[0x3d] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_710593ba40), iVar17 != 0))
    {
      if (((DAT_710593ba48 & 1) == 0) &&
         (iVar17 = __cxa_guard_acquire(&DAT_710593ba48), iVar17 != 0)) {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar63 != (undefined8 *)0x0) {
      for (puVar22 = (undefined8 *)(**(code **)*puVar63)(puVar63); puVar22 != (undefined8 *)0x0;
          puVar22 = (undefined8 *)*puVar22) {
        if ((undefined8 **)puVar22 == &DAT_710593ba58) {
          lVar39 = puVar63[3];
          *(undefined4 *)(puVar63 + 0xb) = *(undefined4 *)((long)puVar63 + 0x54);
          if (lVar39 != 0) {
            *(undefined4 *)(lVar39 + 0x30) = *(undefined4 *)((long)puVar63 + 0x54);
            *(byte *)(lVar39 + 0x58) = *(byte *)(lVar39 + 0x58) | 0x10;
          }
          lVar39 = puVar63[4];
          if (lVar39 != 0) {
            *(undefined4 *)(lVar39 + 0x30) = *(undefined4 *)(puVar63 + 0xb);
            *(byte *)(lVar39 + 0x58) = *(byte *)(lVar39 + 0x58) | 0x10;
          }
          if ((long *)puVar63[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar63[5] + 0x180))(0);
          }
          plVar23 = (long *)puVar63[6];
          if (plVar23 != (long *)0x0) {
            if (*(char *)((long)puVar63 + 99) == '\0') {
              (**(code **)(*plVar23 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar23 + 400))();
            }
          }
          *(undefined2 *)((long)puVar63 + 100) = 0;
          break;
        }
      }
    }
  }
  FUN_7103778950(*(long *)(param_1[0x3d] + 8));
  *(undefined1 *)((long)param_1 + 0x212) = 0;
  local_bd0 = (undefined **)0x0;
  plVar23 = param_1 + 0x44;
  local_bc0 = CONCAT17(local_bc0._7_1_,0x1000100000001);
  local_bb8 = (long *)&DAT_41f0000000000000;
  local_15a0._0_4_ = 0x50b2020;
  local_15a0._4_4_ = 0x71;
  local_bc8 = (code *)&DAT_00010101;
  local_bb0 = (long *)((ulong)local_bb0 & 0xffffffff00000000);
  local_b80 = (long *)0x0;
  local_b50 = (long *)0x0;
  local_b20 = (long *)0x0;
  local_af0 = (long *)0x0;
  local_ac0 = (long *)0x0;
  local_ab0 = 0;
  local_1598._0_1_ = 0x30;
  local_1598._1_4_ = 0x7101e81d;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  local_1590 = 0;
  local_1588 = plVar23;
  local_1580 = &local_15a0;
  FUN_7101989a30(&local_15a0,alStack_b40);
  if (&local_15a0 == local_1580) {
    pcVar32 = *(code **)(*local_1580 + 0x20);
LAB_7101e8125c:
    (*pcVar32)();
  }
  else if (local_1580 != (long *)0x0) {
    pcVar32 = *(code **)(*local_1580 + 0x28);
    goto LAB_7101e8125c;
  }
  ppppbVar28 = (byte ****)&local_bd0;
  FUN_7103770b30(plVar23,puVar2,(long ****)"selector_01",ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  FUN_71037717d0(plVar23,200,"set_parts_det_key",ppppbVar28,in_x4,in_x5,in_x6,in_x7);
  lVar39 = *plVar23;
  lVar31 = *(long *)(lVar39 + 0x1b8);
  if (lVar31 != 0) {
    lVar45 = lVar39 + 0x1b8;
    lVar52 = lVar45;
    lVar51 = lVar31;
    do {
      if (199 < *(int *)(lVar51 + 0x20)) {
        lVar52 = lVar51;
      }
      lVar51 = *(long *)(lVar51 + (ulong)(*(int *)(lVar51 + 0x20) < 200) * 8);
    } while (lVar51 != 0);
    if (((lVar52 != lVar45) && (*(int *)(lVar52 + 0x20) < 0xc9)) &&
       (plVar18 = *(long **)(lVar52 + 0x28), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x208))(plVar18,1);
      (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
      lVar39 = *plVar23;
      lVar31 = *(long *)(lVar39 + 0x1b8);
      lVar45 = lVar39 + 0x1b8;
    }
    lVar52 = lVar45;
    if (lVar31 != 0) {
      do {
        if (199 < *(int *)(lVar31 + 0x20)) {
          lVar52 = lVar31;
        }
        lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 200) * 8);
      } while (lVar31 != 0);
      if (((lVar52 != lVar45) && (*(int *)(lVar52 + 0x20) < 0xc9)) &&
         (plVar18 = *(long **)(lVar52 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
        lVar39 = *plVar23;
      }
    }
  }
  uVar27 = 6;
  uVar29 = 0;
  FUN_7103771930(lVar39,200,(long ****)0x6,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7);
  if (alStack_ae0 == local_ac0) {
    (**(code **)(*local_ac0 + 0x20))();
  }
  else if (local_ac0 != (long *)0x0) {
    (**(code **)(*local_ac0 + 0x28))();
  }
  if (alStack_b10 == local_af0) {
    pcVar32 = *(code **)(*local_af0 + 0x20);
LAB_7101e813f4:
    (*pcVar32)();
  }
  else if (local_af0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_af0 + 0x28);
    goto LAB_7101e813f4;
  }
  if (alStack_b40 == local_b20) {
    pcVar32 = *(code **)(*local_b20 + 0x20);
LAB_7101e81424:
    (*pcVar32)();
  }
  else if (local_b20 != (long *)0x0) {
    pcVar32 = *(code **)(*local_b20 + 0x28);
    goto LAB_7101e81424;
  }
  if (alStack_b70 == local_b50) {
    pcVar32 = *(code **)(*local_b50 + 0x20);
LAB_7101e81454:
    (*pcVar32)();
  }
  else if (local_b50 != (long *)0x0) {
    pcVar32 = *(code **)(*local_b50 + 0x28);
    goto LAB_7101e81454;
  }
  if (alStack_ba0 == local_b80) {
    pcVar32 = *(code **)(*local_b80 + 0x20);
LAB_7101e81484:
    (*pcVar32)();
  }
  else if (local_b80 != (long *)0x0) {
    pcVar32 = *(code **)(*local_b80 + 0x28);
    goto LAB_7101e81484;
  }
  FUN_7103776910(&local_bd0,(long)puVar2,(long ****)"set_txt_num_forget",uVar27,uVar29,in_x4,in_x5,
                 in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x45 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar49 = param_1[0x46];
    param_1[0x46] = pppbVar34;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7101e81b60((long)(param_1 + 0x47),(long)puVar2,(byte ****)"set_parts_sp",uVar29,in_x4,in_x5,
                 in_x6,in_x7);
  lVar39 = param_1[0x58];
  if (*(int *)(lVar39 + 0x94) != 0) {
    *(undefined4 *)(lVar39 + 0x94) = 0;
    FUN_710377a280(lVar39,(byte *)(lVar39 + 0x18),1);
    lVar39 = param_1[0x58];
  }
  *(undefined8 *)(lVar39 + 0x58) = 0x205bf6fc80;
  *(undefined8 *)(lVar39 + 0x60) = 0x257123f4dd;
  lVar39 = param_1[0x58];
  *(undefined8 *)(lVar39 + 0x68) = 0x21fc221a56;
  *(undefined8 *)(lVar39 + 0x70) = 0x26ef44d702;
  FUN_710377a280((long)(param_1 + 0x4c),(byte *)"cam_skill_use_sp_minus_n",1);
  *(undefined4 *)(param_1 + 0x57) = 0;
  lVar39 = param_1[0x58];
  uVar48 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  uVar49 = (ulong)uVar48;
  if (*(uint *)(lVar39 + 0x94) != uVar48) {
    *(uint *)(lVar39 + 0x94) = uVar48;
    FUN_710377a280(lVar39,(byte *)(lVar39 + 0x18),1);
  }
  FUN_7101e81b60((long)(param_1 + 0x5a),(long)puVar2,(byte ****)"set_parts_skill_piece",uVar49,in_x4
                 ,in_x5,in_x6,in_x7);
  lVar39 = param_1[0x6b];
  if (*(int *)(lVar39 + 0x94) != 0) {
    *(undefined4 *)(lVar39 + 0x94) = 0;
    FUN_710377a280(lVar39,(byte *)(lVar39 + 0x18),1);
    lVar39 = param_1[0x6b];
  }
  *(undefined8 *)(lVar39 + 0x58) = 0x1dd8a53314;
  *(undefined8 *)(lVar39 + 0x60) = 0x278ebdab8e;
  lVar39 = param_1[0x6b];
  uVar27 = 1;
  *(undefined8 *)(lVar39 + 0x68) = 0x1dd8a53314;
  *(undefined8 *)(lVar39 + 0x70) = 0x2866eea793;
  FUN_710377a280((long)(param_1 + 0x5f),(byte *)"cam_skill_return_fragment_minus_n",1);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  uVar69 = *(uint *)(*(long *)param_1[0x85] + 0xa0);
  uVar38 = *(uint *)(*(long *)param_1[0x85] + 0xa4);
  lVar39 = param_1[0x6b];
  uVar48 = uVar38;
  if (uVar38 <= uVar69) {
    uVar48 = uVar69;
  }
  uVar48 = uVar48 - uVar38;
  uVar49 = (ulong)uVar48;
  if (*(uint *)(lVar39 + 0x94) != uVar48) {
    uVar27 = 1;
    *(uint *)(lVar39 + 0x94) = uVar48;
    FUN_710377a280(lVar39,(byte *)(lVar39 + 0x18),1);
  }
  FUN_7103776910(&local_bd0,(long)puVar2,(long ****)"set_parts_eff_open",uVar27,uVar49,in_x4,in_x5,
                 in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x6d != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar53 = param_1[0x6e];
    param_1[0x6e] = pppbVar34;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_parts_eff_open",uVar27,uVar49,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_open",uVar27,uVar49,in_x4,in_x5,in_x6
                 ,in_x7);
  if (param_1 + 0x6f != &local_15a0) {
    uVar29 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar53 = param_1[0x70];
    param_1[0x70] = uVar29;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  uVar53 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar53 != 0) {
    FUN_710392eb40(uVar53);
  }
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_open_text",uVar27,uVar49,in_x4,in_x5,
                 in_x6,in_x7);
  if (param_1 + 0x71 != &local_15a0) {
    uVar29 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar53 = param_1[0x72];
    param_1[0x72] = uVar29;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  uVar53 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar53 != 0) {
    FUN_710392eb40(uVar53);
  }
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_fotget",uVar27,uVar49,in_x4,in_x5,
                 in_x6,in_x7);
  if (param_1 + 0x73 != &local_15a0) {
    uVar27 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar53 = param_1[0x74];
    param_1[0x74] = uVar27;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  uVar53 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar53 != 0) {
    FUN_710392eb40(uVar53);
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776910(&local_bd0,(long)puVar2,(long ****)"set_parts_eff_enable_%02d",0,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x75 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar53 = param_1[0x76];
    param_1[0x76] = pppbVar34;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  uVar27 = 0;
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_parts_eff_enable_%02d",0,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_enable_open",uVar27,uVar49,in_x4,
                 in_x5,in_x6,in_x7);
  if (param_1 + 0x7b != &local_15a0) {
    uVar27 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar53 = param_1[0x7c];
    param_1[0x7c] = uVar27;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  uVar53 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar53 != 0) {
    FUN_710392eb40(uVar53);
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776910(&local_bd0,(long)puVar2,(long ****)"set_parts_eff_enable_%02d",1,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x77 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar53 = param_1[0x78];
    param_1[0x78] = pppbVar34;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  uVar27 = 1;
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_parts_eff_enable_%02d",1,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_enable_open",uVar27,uVar49,in_x4,
                 in_x5,in_x6,in_x7);
  if (param_1 + 0x7d != &local_15a0) {
    uVar27 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar53 = param_1[0x7e];
    param_1[0x7e] = uVar27;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  uVar53 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar53 != 0) {
    FUN_710392eb40(uVar53);
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  FUN_7103776910(&local_bd0,(long)puVar2,(long ****)"set_parts_eff_enable_%02d",2,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  pppbVar34 = (byte ***)local_bc8;
  if (param_1 + 0x79 != &local_bd0) {
    local_bc8 = (code *)0x0;
    uVar53 = param_1[0x7a];
    param_1[0x7a] = pppbVar34;
    if (uVar53 != 0) {
      FUN_710392eb40(uVar53);
    }
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d9a8;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar34);
  }
  uVar27 = 2;
  FUN_7103776640(&local_bd0,(long)puVar2,(byte ****)"set_parts_eff_enable_%02d",2,uVar49,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037780e0(&local_15a0,(long)&local_bd0,(long ****)"anim_enable_open",uVar27,uVar49,in_x4,
                 in_x5,in_x6,in_x7);
  if (param_1 + 0x7f != &local_15a0) {
    uVar27 = CONCAT26(local_1598._6_2_,
                      CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
    local_1598._0_1_ = 0;
    local_1598._1_4_ = 0;
    local_1598._5_1_ = 0;
    local_1598._6_2_ = 0;
    uVar49 = param_1[0x80];
    param_1[0x80] = uVar27;
    if (uVar49 != 0) {
      FUN_710392eb40(uVar49);
    }
  }
  uVar49 = CONCAT26(local_1598._6_2_,
                    CONCAT15(local_1598._5_1_,CONCAT41(local_1598._1_4_,(undefined1)local_1598)));
  local_15a0._0_4_ = 0x523d9e8;
  local_15a0._4_4_ = 0x71;
  local_1598._0_1_ = 0;
  local_1598._1_4_ = 0;
  local_1598._5_1_ = 0;
  local_1598._6_2_ = 0;
  if (uVar49 != 0) {
    FUN_710392eb40(uVar49);
  }
  pppbVar34 = (byte ***)local_bc8;
  local_bd0 = &PTR_FUN_710523d988;
  local_bc8 = (code *)0x0;
  if (pppbVar34 != (byte ***)0x0) {
    ppbVar20 = pppbVar34[3];
    pppbVar34[2] = &PTR_FUN_710523d9a8;
    pppbVar34[3] = (byte **)0x0;
    if (ppbVar20 != (byte **)0x0) {
      FUN_710392eb40((ulong)ppbVar20);
    }
    FUN_710392eb40((ulong)pppbVar34);
  }
  if (*(uint *)((long)param_1 + 0x13c) < 0x13) {
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x13c) * 4 + 0xf0) = 1;
    return;
  }
LAB_7101e81b08:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_7101e7f338:
  plVar46 = (long *)0x0;
LAB_7101e7fe58:
  plVar35 = *(long **)(*(long *)param_1[0x2e] + 0x30);
  uVar49 = (long)plVar35 - 1U & (ulong)plVar35;
  if (uVar49 == 0) {
    plVar40 = (long *)((long)plVar35 - 1U & (ulong)plVar55);
  }
  else {
    plVar40 = plVar55;
    if (plVar35 <= plVar55) {
      uVar53 = 0;
      if (plVar35 != (long *)0x0) {
        uVar53 = (ulong)plVar55 / (ulong)plVar35;
      }
      plVar40 = (long *)((long)plVar55 - uVar53 * (long)plVar35);
    }
  }
  puVar63 = (undefined8 *)
            **(undefined8 **)(*(long *)(*(long *)param_1[0x2e] + 0x28) + (long)plVar40 * 8);
  if (uVar49 == 0) {
    for (; ((long *)puVar63[1] != plVar55 || ((uint)*(byte *)(puVar63 + 2) != (uVar69 & 0xff)));
        puVar63 = (undefined8 *)*puVar63) {
    }
  }
  else {
    for (; ((long *)puVar63[1] != plVar55 || ((uint)*(byte *)(puVar63 + 2) != (uVar69 & 0xff)));
        puVar63 = (undefined8 *)*puVar63) {
    }
  }
  pbVar41 = (byte *)puVar63[4];
  pbVar6 = (byte *)puVar63[5];
  if (pbVar41 != pbVar6) {
    puVar3 = (ulong *)(plVar46 + 3);
    plVar35 = plVar46 + 5;
    do {
      local_bc8 = (code *)((ulong)local_bc8 & 0xffffffffffffff00);
      local_bd0 = (undefined **)0x0;
      bVar7 = *pbVar41;
      pcVar36 = (char *)(ulong)bVar7;
      if ((uint)bVar7 < (uVar69 & 0xff)) {
        ppppbVar26 = (byte ****)(ulong)uVar48;
        FUN_71003a4ca0((uint *)&local_15a0,"set_parts_line_%02d_to_%02d",pcVar36,ppppbVar26,
                       ppppbVar28,in_x4,in_x5,in_x6,in_x7);
        uVar49 = 0;
        do {
          cVar8 = *(char *)((long)&local_1598 + uVar49);
          uVar53 = uVar49;
          if (cVar8 == '\0') break;
          *(char *)((long)&local_bc8 + uVar49) = cVar8;
          cVar8 = *(char *)((long)&local_1598 + uVar49 + 1);
          if (cVar8 == '\0') {
            uVar53 = uVar49 + 1;
            break;
          }
          cVar9 = *(char *)((long)&local_1598 + uVar49 + 2);
          *(char *)((long)&local_bc8 + uVar49 + 1) = cVar8;
          if (cVar9 == '\0') {
            uVar53 = uVar49 + 2;
            break;
          }
          uVar53 = uVar49 + 3;
          *(char *)((long)&local_bc8 + uVar49 + 2) = cVar9;
          uVar49 = uVar53;
        } while ((uint)uVar53 < 0x3f);
        *(undefined1 *)((long)&local_bc8 + (uVar53 & 0xffffffff)) = 0;
        local_bd0._4_4_ = (undefined4)uVar53;
        uVar30 = (uint)(byte)local_bc8;
        uVar38 = 0x811c9dc5;
        pcVar36 = (char *)ppppbVar26;
        if ((byte)local_bc8 != 0) {
          uVar38 = 0x811c9dc5;
          pbVar47 = (byte *)((long)&local_bc8 + 1);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar30;
            uVar30 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar30 != 0);
        }
LAB_7101e80080:
        ppuVar71 = &PTR_FUN_710523d988;
        local_bd0 = (undefined **)CONCAT44(local_bd0._4_4_,uVar38);
        FUN_7103776640(&local_98,(long)puVar2,(byte ****)&local_bc8,pcVar36,ppppbVar28,in_x4,in_x5,
                       in_x6,in_x7);
        ppuVar56 = local_90;
        pppuVar57 = local_208;
        if (local_208 == local_200) {
          if (local_200 == local_208) goto LAB_7101e80138;
LAB_7101e800ec:
          local_15a0._0_4_ = CONCAT31(local_15a0._1_3_,*pbVar41);
          FUN_7103776390(&local_1598,pppuVar57,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7
                        );
          sVar15 = local_15a0._0_1_;
          ppuVar59 = (undefined **)(ulong)(byte)local_15a0._0_1_;
          ppuVar56 = (undefined **)plVar46[4];
          if (ppuVar56 == (undefined **)0x0) {
LAB_7101e80364:
            plVar40 = (long *)FUN_710392e290(0x10,0x28,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                             in_x6,in_x7);
            if (plVar40 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                local_a8 = (byte ***)&DAT_00000028;
                pcVar36 = (char *)&local_a8;
                uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                if (((uVar49 & 1) != 0) &&
                   (plVar40 = (long *)FUN_710392e290(0x10,0x28,(long ****)pcVar36,ppppbVar28,in_x4,
                                                     in_x5,in_x6,in_x7), plVar40 != (long *)0x0))
                goto LAB_7101e803c0;
              }
              plVar40 = (long *)0x0;
            }
LAB_7101e803c0:
            uVar49 = local_1590;
            plVar40[3] = (long)&PTR_FUN_710523d988;
            *(string *)(plVar40 + 2) = sVar15;
            plVar40[4] = 0;
            if (&local_1598 != plVar40 + 3) {
              local_1590 = 0;
              plVar40[4] = uVar49;
            }
            *plVar40 = 0;
            plVar40[1] = (long)ppuVar59;
            if ((ppuVar56 == (undefined **)0x0) ||
               (*(float *)(plVar46 + 7) * (float)ppuVar56 < (float)(plVar46[6] + 1))) {
              if (ppuVar56 < (undefined **)0x3) {
                uVar49 = 1;
              }
              else {
                uVar49 = (ulong)(((long)ppuVar56 - 1U & (ulong)ppuVar56) != 0);
              }
              uVar53 = (ulong)((float)(plVar46[6] + 1) / *(float *)(plVar46 + 7));
              uVar49 = uVar49 | (long)ppuVar56 << 1;
              if (uVar53 <= uVar49) {
                uVar53 = uVar49;
              }
              FUN_7101e84a10(puVar3,uVar53,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
              ppuVar56 = (undefined **)plVar46[4];
              if (((long)ppuVar56 - 1U & (ulong)ppuVar56) == 0) {
                ppuVar71 = (undefined **)((long)ppuVar56 - 1U & (ulong)ppuVar59);
              }
              else {
                ppuVar71 = ppuVar59;
                if (ppuVar56 <= ppuVar59) {
                  uVar49 = 0;
                  if (ppuVar56 != (undefined **)0x0) {
                    uVar49 = (ulong)ppuVar59 / (ulong)ppuVar56;
                  }
                  ppuVar71 = (undefined **)((long)ppuVar59 - uVar49 * (long)ppuVar56);
                }
              }
            }
            uVar49 = *puVar3;
            plVar54 = *(long **)(uVar49 + (long)ppuVar71 * 8);
            if (plVar54 == (long *)0x0) {
              *plVar40 = *plVar35;
              *plVar35 = (long)plVar40;
              *(long **)(uVar49 + (long)ppuVar71 * 8) = plVar35;
              if (*plVar40 != 0) {
                ppuVar71 = *(undefined ***)(*plVar40 + 8);
                if (((long)ppuVar56 - 1U & (ulong)ppuVar56) == 0) {
                  ppuVar71 = (undefined **)((ulong)ppuVar71 & (long)ppuVar56 - 1U);
                }
                else if (ppuVar56 <= ppuVar71) {
                  uVar49 = 0;
                  if (ppuVar56 != (undefined **)0x0) {
                    uVar49 = (ulong)ppuVar71 / (ulong)ppuVar56;
                  }
                  ppuVar71 = (undefined **)((long)ppuVar71 - uVar49 * (long)ppuVar56);
                }
                plVar54 = (long *)(*puVar3 + (long)ppuVar71 * 8);
                goto LAB_7101e8076c;
              }
            }
            else {
              *plVar40 = *plVar54;
LAB_7101e8076c:
              *plVar54 = (long)plVar40;
            }
            plVar46[6] = plVar46[6] + 1;
          }
          else {
            uVar49 = (long)ppuVar56 - 1;
            if ((uVar49 & (ulong)ppuVar56) == 0) {
              ppuVar71 = (undefined **)(uVar49 & (ulong)ppuVar59);
            }
            else {
              ppuVar71 = ppuVar59;
              if (ppuVar56 <= ppuVar59) {
                uVar53 = 0;
                if (ppuVar56 != (undefined **)0x0) {
                  uVar53 = (ulong)ppuVar59 / (ulong)ppuVar56;
                }
                ppuVar71 = (undefined **)((long)ppuVar59 - uVar53 * (long)ppuVar56);
              }
            }
            plVar40 = *(long **)(*puVar3 + (long)ppuVar71 * 8);
            if (plVar40 == (long *)0x0) goto LAB_7101e80364;
            if ((uVar49 & (ulong)ppuVar56) == 0) {
              do {
                plVar40 = (long *)*plVar40;
                if ((plVar40 == (long *)0x0) ||
                   ((undefined **)plVar40[1] != ppuVar59 &&
                    (undefined **)((ulong)plVar40[1] & uVar49) != ppuVar71)) goto LAB_7101e80364;
              } while ((uint)*(byte *)(plVar40 + 2) != ((uint)local_15a0 & 0xff));
            }
            else {
              do {
                plVar40 = (long *)*plVar40;
                if (plVar40 == (long *)0x0) goto LAB_7101e80364;
                ppuVar42 = (undefined **)plVar40[1];
                if (ppuVar42 != ppuVar59) {
                  if (ppuVar56 <= ppuVar42) {
                    uVar49 = 0;
                    if (ppuVar56 != (undefined **)0x0) {
                      uVar49 = (ulong)ppuVar42 / (ulong)ppuVar56;
                    }
                    ppuVar42 = (undefined **)((long)ppuVar42 - uVar49 * (long)ppuVar56);
                  }
                  if (ppuVar42 != ppuVar71) goto LAB_7101e80364;
                }
              } while ((uint)*(byte *)(plVar40 + 2) != ((uint)local_15a0 & 0xff));
            }
          }
          uVar49 = local_1590;
          local_1598._0_1_ = 0x88;
          local_1598._1_4_ = 0x710523d9;
          local_1598._5_1_ = 0;
          local_1598._6_2_ = 0;
          local_1590 = 0;
          if (uVar49 != 0) {
            uVar53 = *(ulong *)(uVar49 + 0x18);
            *(undefined ***)(uVar49 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar49 + 0x18) = 0;
            if (uVar53 != 0) {
              FUN_710392eb40(uVar53);
            }
            FUN_710392eb40(uVar49);
          }
        }
        else {
          puVar50 = local_208[1][1];
          while (puVar50 != local_90[1]) {
            if (local_200 == pppuVar57 + 2) goto LAB_7101e80138;
            puVar50 = pppuVar57[3][1];
            pppuVar57 = pppuVar57 + 2;
          }
          if (local_200 != pppuVar57) goto LAB_7101e800ec;
LAB_7101e80138:
          if (local_200 < local_1f8) {
            *local_200 = &PTR_FUN_710523d988;
            local_200[1] = (undefined **)0x0;
            if (local_200 != &local_98) {
              local_90 = (undefined **)0x0;
              ppuVar59 = local_200[1];
              local_200[1] = ppuVar56;
              if (ppuVar59 != (undefined **)0x0) {
                puVar50 = ppuVar59[3];
                ppuVar59[2] = (undefined *)&PTR_FUN_710523d9a8;
                ppuVar59[3] = (undefined *)0x0;
                if (puVar50 != (undefined *)0x0) {
                  FUN_710392eb40((ulong)puVar50);
                }
                FUN_710392eb40((ulong)ppuVar59);
              }
            }
            local_200 = local_200 + 2;
          }
          else {
            lVar45 = (long)local_200 - (long)local_208 >> 4;
            uVar49 = lVar45 + 1;
            if (uVar49 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_1f8 - (long)local_208 >> 4) < 0x7ffffffffffffff) {
              uVar53 = (long)local_1f8 - (long)local_208 >> 3;
              if (uVar49 <= uVar53) {
                uVar49 = uVar53;
              }
              if (uVar49 != 0) {
                if (uVar49 >> 0x3c == 0) goto LAB_7101e801e0;
                goto LAB_7101e81b08;
              }
LAB_7101e80238:
              lVar51 = 0;
            }
            else {
              uVar49 = 0xfffffffffffffff;
LAB_7101e801e0:
              lVar52 = uVar49 * 0x10;
              if (lVar52 == 0) {
                lVar52 = 1;
              }
              lVar51 = FUN_710392e290(0x10,lVar52,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,
                                      in_x7);
              if (lVar51 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_a8 = (byte ***)((ulong)local_a8 & 0xffffffff00000000);
                  local_15a0._0_4_ = (uint)lVar52;
                  local_15a0._4_4_ = (undefined4)((ulong)lVar52 >> 0x20);
                  pcVar36 = (char *)&local_15a0;
                  uVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
                  if (((uVar53 & 1) != 0) &&
                     (lVar51 = FUN_710392e290(0x10,lVar52,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                              in_x6,in_x7), lVar51 != 0)) goto LAB_7101e8023c;
                }
                goto LAB_7101e80238;
              }
            }
LAB_7101e8023c:
            ppuVar71 = local_90;
            pppuVar61 = local_208;
            pppuVar57 = (undefined ***)(lVar51 + lVar45 * 0x10);
            *pppuVar57 = &PTR_FUN_710523d988;
            pppuVar57[1] = (undefined **)0x0;
            if (pppuVar57 != &local_98) {
              local_90 = (undefined **)0x0;
              pppuVar57[1] = ppuVar71;
            }
            pppuVar60 = pppuVar57;
            ppuVar71 = (undefined **)local_208;
            pppuVar43 = local_208;
            pppuVar65 = local_200;
            while (pppuVar14 = pppuVar65, local_208 = pppuVar60,
                  pppuVar60 = (undefined ***)(lVar51 + uVar49 * 0x10), pppuVar65 = pppuVar57 + 2,
                  pppuVar14 != pppuVar61) {
              pppuVar65 = pppuVar14 + -2;
              pppuVar60 = local_208 + -2;
              *pppuVar60 = &PTR_FUN_710523d988;
              local_208[-1] = (undefined **)0x0;
              pppuVar43 = local_200;
              if (pppuVar14 != local_208) {
                ppuVar56 = pppuVar14[-1];
                pppuVar14[-1] = (undefined **)0x0;
                ppuVar59 = local_208[-1];
                local_208[-1] = ppuVar56;
                if (ppuVar59 != (undefined **)0x0) {
                  puVar50 = ppuVar59[3];
                  ppuVar59[2] = (undefined *)&PTR_FUN_710523d9a8;
                  ppuVar59[3] = (undefined *)0x0;
                  local_208 = (undefined ***)ppuVar71;
                  if (puVar50 != (undefined *)0x0) {
                    FUN_710392eb40((ulong)puVar50);
                  }
                  FUN_710392eb40((ulong)ppuVar59);
                  ppuVar71 = (undefined **)local_208;
                  pppuVar43 = local_200;
                }
              }
            }
            while (local_200 = pppuVar65, local_1f8 = pppuVar60,
                  pppuVar43 != (undefined ***)ppuVar71) {
              pppuVar43 = pppuVar43 + -2;
              (*(code *)**pppuVar43)(pppuVar43);
              pppuVar60 = local_1f8;
              pppuVar65 = local_200;
            }
            if ((undefined ***)ppuVar71 != (undefined ***)0x0) {
              FUN_710392eb40((ulong)ppuVar71);
            }
          }
          local_15a0._0_4_ = CONCAT31(local_15a0._1_3_,*pbVar41);
          FUN_7103776390(&local_1598,local_200 + -2,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,
                         in_x7);
          sVar15 = local_15a0._0_1_;
          pppuVar61 = (undefined ***)(ulong)(byte)local_15a0._0_1_;
          pppuVar57 = (undefined ***)plVar46[4];
          if (pppuVar57 == (undefined ***)0x0) {
LAB_7101e80578:
            plVar40 = (long *)FUN_710392e290(0x10,0x28,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,
                                             in_x6,in_x7);
            if (plVar40 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                local_a8 = (byte ***)&DAT_00000028;
                pcVar36 = (char *)&local_a8;
                uVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                if (((uVar49 & 1) != 0) &&
                   (plVar40 = (long *)FUN_710392e290(0x10,0x28,(long ****)pcVar36,ppppbVar28,in_x4,
                                                     in_x5,in_x6,in_x7), plVar40 != (long *)0x0))
                goto LAB_7101e805d4;
              }
              plVar40 = (long *)0x0;
            }
LAB_7101e805d4:
            uVar49 = local_1590;
            plVar40[3] = (long)&PTR_FUN_710523d988;
            *(string *)(plVar40 + 2) = sVar15;
            plVar40[4] = 0;
            if (&local_1598 != plVar40 + 3) {
              local_1590 = 0;
              plVar40[4] = uVar49;
            }
            *plVar40 = 0;
            plVar40[1] = (long)pppuVar61;
            if ((pppuVar57 == (undefined ***)0x0) ||
               (*(float *)(plVar46 + 7) * (float)pppuVar57 < (float)(plVar46[6] + 1))) {
              if (pppuVar57 < (undefined ***)0x3) {
                uVar49 = 1;
              }
              else {
                uVar49 = (ulong)(((long)pppuVar57 - 1U & (ulong)pppuVar57) != 0);
              }
              uVar53 = (ulong)((float)(plVar46[6] + 1) / *(float *)(plVar46 + 7));
              uVar49 = uVar49 | (long)pppuVar57 << 1;
              if (uVar53 <= uVar49) {
                uVar53 = uVar49;
              }
              FUN_7101e84a10(puVar3,uVar53,(long ****)pcVar36,ppppbVar28,in_x4,in_x5,in_x6,in_x7);
              pppuVar57 = (undefined ***)plVar46[4];
              if (((long)pppuVar57 - 1U & (ulong)pppuVar57) == 0) {
                ppuVar71 = (undefined **)((long)pppuVar57 - 1U & (ulong)pppuVar61);
              }
              else {
                ppuVar71 = (undefined **)pppuVar61;
                if (pppuVar57 <= pppuVar61) {
                  uVar49 = 0;
                  if (pppuVar57 != (undefined ***)0x0) {
                    uVar49 = (ulong)pppuVar61 / (ulong)pppuVar57;
                  }
                  ppuVar71 = (undefined **)((long)pppuVar61 - uVar49 * (long)pppuVar57);
                }
              }
            }
            uVar49 = *puVar3;
            plVar54 = *(long **)(uVar49 + (long)ppuVar71 * 8);
            if (plVar54 == (long *)0x0) {
              *plVar40 = *plVar35;
              *plVar35 = (long)plVar40;
              *(long **)(uVar49 + (long)ppuVar71 * 8) = plVar35;
              if (*plVar40 != 0) {
                pppuVar61 = *(undefined ****)(*plVar40 + 8);
                if (((long)pppuVar57 - 1U & (ulong)pppuVar57) == 0) {
                  pppuVar61 = (undefined ***)((ulong)pppuVar61 & (long)pppuVar57 - 1U);
                }
                else if (pppuVar57 <= pppuVar61) {
                  uVar49 = 0;
                  if (pppuVar57 != (undefined ***)0x0) {
                    uVar49 = (ulong)pppuVar61 / (ulong)pppuVar57;
                  }
                  pppuVar61 = (undefined ***)((long)pppuVar61 - uVar49 * (long)pppuVar57);
                }
                plVar54 = (long *)(*puVar3 + (long)pppuVar61 * 8);
                goto LAB_7101e807c8;
              }
            }
            else {
              *plVar40 = *plVar54;
LAB_7101e807c8:
              *plVar54 = (long)plVar40;
            }
            plVar46[6] = plVar46[6] + 1;
          }
          else {
            uVar49 = (long)pppuVar57 - 1;
            if ((uVar49 & (ulong)pppuVar57) == 0) {
              ppuVar71 = (undefined **)(uVar49 & (ulong)pppuVar61);
            }
            else {
              ppuVar71 = (undefined **)pppuVar61;
              if (pppuVar57 <= pppuVar61) {
                uVar53 = 0;
                if (pppuVar57 != (undefined ***)0x0) {
                  uVar53 = (ulong)pppuVar61 / (ulong)pppuVar57;
                }
                ppuVar71 = (undefined **)((long)pppuVar61 - uVar53 * (long)pppuVar57);
              }
            }
            plVar40 = *(long **)(*puVar3 + (long)ppuVar71 * 8);
            if (plVar40 == (long *)0x0) goto LAB_7101e80578;
            if ((uVar49 & (ulong)pppuVar57) == 0) {
              do {
                plVar40 = (long *)*plVar40;
                if ((plVar40 == (long *)0x0) ||
                   ((undefined ***)plVar40[1] != pppuVar61 &&
                    (undefined ***)((ulong)plVar40[1] & uVar49) != (undefined ***)ppuVar71))
                goto LAB_7101e80578;
              } while ((uint)*(byte *)(plVar40 + 2) != ((uint)local_15a0 & 0xff));
            }
            else {
              do {
                plVar40 = (long *)*plVar40;
                if (plVar40 == (long *)0x0) goto LAB_7101e80578;
                pppuVar43 = (undefined ***)plVar40[1];
                if (pppuVar43 != pppuVar61) {
                  if (pppuVar57 <= pppuVar43) {
                    uVar49 = 0;
                    if (pppuVar57 != (undefined ***)0x0) {
                      uVar49 = (ulong)pppuVar43 / (ulong)pppuVar57;
                    }
                    pppuVar43 = (undefined ***)((long)pppuVar43 - uVar49 * (long)pppuVar57);
                  }
                  if (pppuVar43 != (undefined ***)ppuVar71) goto LAB_7101e80578;
                }
              } while ((uint)*(byte *)(plVar40 + 2) != ((uint)local_15a0 & 0xff));
            }
          }
          uVar49 = local_1590;
          local_1598._0_1_ = 0x88;
          local_1598._1_4_ = 0x710523d9;
          local_1598._5_1_ = 0;
          local_1598._6_2_ = 0;
          local_1590 = 0;
          if (uVar49 != 0) {
            uVar53 = *(ulong *)(uVar49 + 0x18);
            *(undefined ***)(uVar49 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar49 + 0x18) = 0;
            if (uVar53 != 0) {
              FUN_710392eb40(uVar53);
            }
            FUN_710392eb40(uVar49);
          }
          uVar12 = (ushort)((long)plVar55 << 8) | (ushort)*pbVar41;
          puVar5 = *(ushort **)(lVar39 + 0x48);
          if (puVar5 < *(ushort **)(lVar39 + 0x50)) {
            *puVar5 = uVar12;
            *(long *)(lVar39 + 0x48) = *(long *)(lVar39 + 0x48) + 2;
          }
          else {
            pvVar68 = *(void **)(lVar39 + 0x40);
            __n = (long)puVar5 - (long)pvVar68;
            if ((long)__n < -2) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar49 = ((long)__n >> 1) + 1;
            uVar53 = (long)*(ushort **)(lVar39 + 0x50) - (long)pvVar68;
            if (uVar49 <= uVar53) {
              uVar49 = uVar53;
            }
            if (0x3ffffffffffffffe < (ulong)((long)uVar53 >> 1)) {
              uVar49 = 0x7fffffffffffffff;
            }
            if (uVar49 == 0) {
LAB_7101e808e4:
              pvVar21 = (void *)0x0;
            }
            else {
              if ((long)uVar49 < 0) goto LAB_7101e81b08;
              lVar45 = uVar49 * 2;
              if (lVar45 == 0) {
                lVar45 = 1;
              }
              pvVar21 = (void *)FUN_710392e290(0x10,lVar45,(long ****)pcVar36,ppppbVar28,in_x4,in_x5
                                               ,in_x6,in_x7);
              if (pvVar21 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_a8 = (byte ***)((ulong)local_a8 & 0xffffffff00000000);
                  local_15a0._0_4_ = (uint)lVar45;
                  local_15a0._4_4_ = (undefined4)((ulong)lVar45 >> 0x20);
                  pppplVar25 = (long ****)&local_15a0;
                  uVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
                  if (((uVar53 & 1) != 0) &&
                     (pvVar21 = (void *)FUN_710392e290(0x10,lVar45,pppplVar25,ppppbVar28,in_x4,in_x5
                                                       ,in_x6,in_x7), pvVar21 != (void *)0x0))
                  goto LAB_7101e808e8;
                }
                goto LAB_7101e808e4;
              }
            }
LAB_7101e808e8:
            puVar5 = (ushort *)((long)pvVar21 + ((long)__n >> 1) * 2);
            *puVar5 = uVar12;
            if (0 < (long)__n) {
              memcpy(pvVar21,pvVar68,__n);
            }
            *(void **)(lVar39 + 0x40) = pvVar21;
            *(ushort **)(lVar39 + 0x48) = puVar5 + 1;
            *(void **)(lVar39 + 0x50) = (void *)((long)pvVar21 + uVar49 * 2);
            if (pvVar68 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar68);
            }
          }
          pcVar36 = (char *)(ulong)*pbVar41;
          ppppbVar28 = ppppbVar70;
          FUN_7101e84b00(*(long **)param_1[0x2e],(long)(local_200 + -2),*pbVar41,bVar24);
        }
        ppuVar71 = local_90;
        local_98 = &PTR_FUN_710523d988;
        local_90 = (undefined **)0x0;
        if (ppuVar71 != (undefined **)0x0) {
          puVar50 = ppuVar71[3];
          ppuVar71[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar71[3] = (undefined *)0x0;
          if (puVar50 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar50);
          }
          FUN_710392eb40((ulong)ppuVar71);
        }
      }
      else if ((uint)bVar7 != (uVar69 & 0xff)) {
        FUN_71003a4ca0((uint *)&local_15a0,"set_parts_line_%02d_to_%02d",(ulong)uVar48,pcVar36,
                       ppppbVar28,in_x4,in_x5,in_x6,in_x7);
        uVar49 = 0;
        do {
          cVar8 = *(char *)((long)&local_1598 + uVar49);
          uVar53 = uVar49;
          if (cVar8 == '\0') break;
          *(char *)((long)&local_bc8 + uVar49) = cVar8;
          cVar8 = *(char *)((long)&local_1598 + uVar49 + 1);
          if (cVar8 == '\0') {
            uVar53 = uVar49 + 1;
            break;
          }
          cVar9 = *(char *)((long)&local_1598 + uVar49 + 2);
          *(char *)((long)&local_bc8 + uVar49 + 1) = cVar8;
          if (cVar9 == '\0') {
            uVar53 = uVar49 + 2;
            break;
          }
          uVar53 = uVar49 + 3;
          *(char *)((long)&local_bc8 + uVar49 + 2) = cVar9;
          uVar49 = uVar53;
        } while ((uint)uVar53 < 0x3f);
        *(undefined1 *)((long)&local_bc8 + (uVar53 & 0xffffffff)) = 0;
        local_bd0._4_4_ = (undefined4)uVar53;
        uVar30 = (uint)(byte)local_bc8;
        uVar38 = 0x811c9dc5;
        if ((byte)local_bc8 != 0) {
          uVar38 = 0x811c9dc5;
          pbVar47 = (byte *)((long)&local_bc8 + 1);
          do {
            uVar38 = uVar38 * 0x89 ^ uVar30;
            uVar30 = (uint)*pbVar47;
            pbVar47 = pbVar47 + 1;
          } while (uVar30 != 0);
        }
        goto LAB_7101e80080;
      }
      pbVar41 = pbVar41 + 1;
    } while (pbVar41 != pbVar6);
  }
  ppppbVar70 = (byte ****)(ulong)(uVar69 + 1);
  if ((ulong)(*(long *)(lVar31 + 0x60) - *(long *)(lVar31 + 0x58) >> 4) <= (ulong)(byte)(uVar69 + 1)
     ) goto LAB_7101e809b8;
  goto LAB_7101e7f358;
}

