// addr:      7101bf7d50
// offset:    0x1bf7d50
// name:      FUN_7101bf7d50
// mangled:   
// signature: undefined __cdecl FUN_7101bf7d50(long * * * param_1, long * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bf7d50(long ***param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long ***ppplVar18;
  undefined1 *puVar19;
  long ****pppplVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined2 *puVar25;
  undefined1 *puVar26;
  long ****pppplVar27;
  undefined ***pppuVar28;
  undefined8 extraout_x1;
  long ****pppplVar29;
  byte ****ppppbVar30;
  undefined8 *puVar31;
  long lVar32;
  char *pcVar33;
  long ***ppplVar34;
  long *plVar35;
  code *pcVar36;
  byte *pbVar37;
  long **pplVar38;
  long *plVar39;
  ushort uVar40;
  long lVar41;
  int iVar42;
  long *plVar43;
  ulong uVar44;
  undefined2 *puVar45;
  long lVar46;
  ulong uVar47;
  long **pplVar48;
  long lVar49;
  long lVar50;
  long **pplVar51;
  long **pplVar52;
  long lVar53;
  long ***ppplVar54;
  long ***ppplVar55;
  undefined2 *puVar56;
  uint uVar57;
  long *plVar58;
  byte ****ppppbVar59;
  long lVar60;
  byte ****ppppbVar61;
  long **pplVar62;
  ulong uVar63;
  undefined **local_11c0;
  long ***ppplStack_11b8;
  undefined ***local_11a0;
  undefined **local_1190;
  ulong local_1188;
  undefined **local_1180;
  ulong local_1178;
  long ***local_1170;
  long ***local_1168;
  long ***local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  long ***local_10e8;
  long ***local_10e0;
  undefined **local_10d8;
  long ***local_10d0;
  undefined4 local_e8 [2];
  undefined2 *local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  long ***local_c8 [8];
  undefined1 local_87;
  long ***local_80;
  undefined4 local_74 [5];
  
  ppppbVar30 = (byte ****)0x2;
  FUN_71032cbf30(param_1 + 0x25,*param_2,(ulong *)&DAT_7104545030,(byte ****)0x2,param_5,param_6,
                 param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar12 = (uint)DAT_7105307b68;
  lVar53 = (long)(int)(uint)DAT_7105307b68;
  if (((uint)DAT_7105307b68 == 0xffffffff) ||
     ((((puVar31 = &DAT_7105339830, (uint)DAT_7105307b68 < 10 &&
        (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
       (puVar31 = (undefined8 *)(&DAT_7105339860)[lVar53], puVar31 == (undefined8 *)0x0)) ||
      (uVar16 = *(int *)(puVar31[2] + 0x9c) - 1, 6 < uVar16)))) {
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  else {
    uVar8 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar16 * 4);
    *(undefined4 *)(param_1 + 0x26) = uVar8;
    *(undefined4 *)(*DAT_710593ba90 + 0x3ac) = uVar8;
  }
  pplVar48 = param_1[0x25];
  FUN_71037760f0(**pplVar48,1);
  lVar32 = **pplVar48;
  lVar49 = *(long *)(lVar32 + 0x608);
  if (*(long *)(lVar32 + 0x610) == lVar49) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar32 + 0x600) + 0x10) = 0;
  *(undefined4 *)(*(long *)(lVar32 + 0x600) + 0x18) = 0x100;
  *(undefined4 *)(*(long *)(lVar32 + 0x600) + 0x1c) = 0x200;
  pppplVar29 = (long ****)&DAT_00000198;
  memset(*(void **)(lVar49 + 8),0,0x198);
  **(undefined4 **)(lVar49 + 8) = 0x10;
  *(undefined4 *)(*(long *)(lVar49 + 8) + 4) = 0x80;
  lVar32 = *(long *)(DAT_710532f730 + 8);
  lVar49 = *(long *)(*(long *)(lVar32 + 0x3b8) + 8);
  pcVar33 = *(char **)(lVar49 + 0x20);
  if ((*pcVar33 == '\f') && (iVar17 = *(int *)(pcVar33 + 1) + -1, 0 < *(int *)(pcVar33 + 1))) {
    iVar42 = 0;
    uVar44 = *(ulong *)(lVar49 + 0x48) & 0xffffffffff;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar2 = iVar17 + iVar42;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar49 + 0x18) + 0x28) + (long)*(int *)(pcVar33 + 5) +
                       (long)iVar2 * 8);
      uVar47 = *(ulong *)(*(long *)(*(long *)(lVar49 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar47 == uVar44) {
        uVar16 = puVar1[1];
        if ((int)uVar16 < 0) goto LAB_7101bf7f40;
        pbVar37 = (byte *)(pcVar33 + (int)uVar16);
        break;
      }
      iVar13 = iVar2 + -1;
      if (uVar47 <= uVar44) {
        iVar42 = iVar2 + 1;
        iVar13 = iVar17;
      }
      iVar17 = iVar13;
    } while (iVar42 <= iVar17);
  }
  else {
LAB_7101bf7f40:
    pbVar37 = &DAT_7104742dbb;
  }
  if (*pbVar37 - 0xb < 2) {
    uVar16 = *(uint *)(pbVar37 + 1);
  }
  else {
    uVar16 = 0;
  }
  local_10e8 = (long ***)0x0;
  local_10e0 = (long ***)0x0;
  local_10f0 = (undefined **)0x0;
  if (uVar16 != 0) {
    if ((int)uVar16 < 0) goto LAB_7101bfa2a4;
    ppplVar54 = (long ***)((long)(int)uVar16 << 4);
    ppplVar18 = (long ***)
                FUN_710392e290(0x10,ppplVar54,pppplVar29,ppppbVar30,param_5,param_6,param_7,param_8)
    ;
    if (ppplVar18 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
        pppplVar29 = &local_1170;
        local_1170 = ppplVar54;
        uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
        if (((uVar44 & 1) != 0) &&
           (ppplVar18 = (long ***)
                        FUN_710392e290(0x10,ppplVar54,pppplVar29,ppppbVar30,param_5,param_6,param_7,
                                       param_8), ppplVar18 != (long ***)0x0)) goto LAB_7101bf7fd4;
      }
      ppplVar18 = (long ***)0x0;
    }
LAB_7101bf7fd4:
    local_10e0 = ppplVar18 + (long)(int)uVar16 * 2;
    uVar57 = 0;
    local_10f0 = (undefined **)ppplVar18;
    local_10e8 = ppplVar18;
    do {
      pplVar48 = (long **)FUN_71032b5c50(*(long *)(lVar32 + 0x3b8),uVar57);
      lVar49 = DAT_710532f730;
      lVar50 = *(long *)(DAT_710532f730 + 8);
      puVar19 = FUN_71032b5800(*(long *)(lVar50 + 0x3b8),(ulong)pplVar48);
      if ((((ulong)puVar19 & 0xffffffffff) == 0 ||
           ((ulong)puVar19 & 0xff00000000000000) != 0xc100000000000000) ||
         (bVar14 = FUN_71032b68b0(*(long *)(lVar50 + 0x3b8),(ulong)pplVar48), !bVar14)) {
LAB_7101bf812c:
        uVar44 = FUN_71032b6080(*(long *)(lVar32 + 0x3b8),(ulong)pplVar48);
        ppplVar18 = (long ***)local_10f0;
        if (local_10e8 < local_10e0) {
          *local_10e8 = (long **)(uVar44 & 0xff);
          local_10e8[1] = pplVar48;
          local_10e8 = local_10e8 + 2;
        }
        else {
          pppplVar20 = (long ****)((long)local_10e8 - (long)local_10f0);
          uVar47 = ((long)pppplVar20 >> 4) + 1;
          if (uVar47 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_10e0 - (long)local_10f0 >> 4) < 0x7ffffffffffffff) {
            uVar21 = (long)local_10e0 - (long)local_10f0 >> 3;
            if (uVar47 <= uVar21) {
              uVar47 = uVar21;
            }
            if (uVar47 != 0) {
              if (uVar47 >> 0x3c == 0) goto LAB_7101bf81b0;
              goto LAB_7101bfa2a4;
            }
            ppplVar34 = (long ***)0x0;
          }
          else {
            uVar47 = 0xfffffffffffffff;
LAB_7101bf81b0:
            ppplVar54 = (long ***)(uVar47 * 0x10);
            if (ppplVar54 == (long ***)0x0) {
              ppplVar54 = (long ***)0x1;
            }
            ppplVar34 = (long ***)
                        FUN_710392e290(0x10,ppplVar54,pppplVar29,ppppbVar30,param_5,param_6,param_7,
                                       param_8);
            if (ppplVar34 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
                pppplVar29 = &local_1170;
                local_1170 = ppplVar54;
                uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
                if (((uVar21 & 1) != 0) &&
                   (ppplVar34 = (long ***)
                                FUN_710392e290(0x10,ppplVar54,pppplVar29,ppppbVar30,param_5,param_6,
                                               param_7,param_8), ppplVar34 != (long ***)0x0))
                goto LAB_7101bf8218;
              }
              ppplVar34 = (long ***)0x0;
            }
          }
LAB_7101bf8218:
          ppplVar54 = ppplVar34 + ((long)pppplVar20 >> 4) * 2;
          *ppplVar54 = (long **)(uVar44 & 0xff);
          ppplVar54[1] = pplVar48;
          if (0 < (long)pppplVar20) {
            memcpy(ppplVar34,ppplVar18,(size_t)pppplVar20);
            pppplVar29 = pppplVar20;
          }
          local_10f0 = (undefined **)ppplVar34;
          local_10e8 = ppplVar54 + 2;
          local_10e0 = ppplVar34 + uVar47 * 2;
          if (ppplVar18 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar18);
          }
        }
      }
      else {
        puVar19 = FUN_71032b5800(*(long *)(lVar50 + 0x3b8),(ulong)pplVar48);
        if (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)puVar19 & 0xffffffffff) != 0) {
          lVar60 = *(long *)(lVar49 + 8);
          lVar49 = *(long *)(lVar60 + 0x168);
          uVar15 = FUN_7103264d20(lVar49,(ulong)puVar19);
          if ((uVar15 & 1) == 0) {
            FUN_7103262cc0(lVar49,(ulong)puVar19);
          }
          else {
            pppplVar29 = (long ****)0x0;
            uVar44 = FUN_7101797560(puVar19,0,0);
            FUN_7103262cc0(*(long *)(lVar60 + 0x168),(ulong)puVar19);
            if ((uVar44 & 1) != 0) goto LAB_7101bf812c;
          }
        }
        puVar19 = FUN_71032b6340(*(long *)(lVar50 + 0x3b8),(ulong)pplVar48);
        if (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)puVar19 & 0xffffffffff) != 0) {
          lVar49 = *(long *)(DAT_710532f730 + 8);
          lVar50 = *(long *)(lVar49 + 0x168);
          uVar15 = FUN_7103264d20(lVar50,(ulong)puVar19);
          if ((uVar15 & 1) == 0) {
            FUN_7103262cc0(lVar50,(ulong)puVar19);
          }
          else {
            pppplVar29 = (long ****)0x0;
            uVar44 = FUN_7101797560(puVar19,0,0);
            FUN_7103262cc0(*(long *)(lVar49 + 0x168),(ulong)puVar19);
            if ((uVar44 & 1) != 0) goto LAB_7101bf812c;
          }
        }
      }
      uVar57 = uVar57 + 1;
    } while (uVar16 != uVar57);
  }
  ppplVar54 = local_10e8;
  ppplVar18 = (long ***)local_10f0;
  local_c8[0] = (long ***)FUN_7103279cf0;
  ppppbVar59 = (byte ****)((long)local_10e8 - (long)local_10f0 >> 4);
  if (0 < (long)local_10e8 - (long)local_10f0) {
    ppppbVar61 = ppppbVar59;
    if (0x7fffffffffffffe < (long)ppppbVar59) {
      ppppbVar61 = (byte ****)0x7ffffffffffffff;
    }
    do {
      ppplVar34 = (long ***)((long)ppppbVar61 * 0x10);
      if (ppplVar34 == (long ***)0x0) {
        ppplVar34 = (long ***)0x1;
      }
      pppplVar20 = (long ****)
                   FUN_710392e290(0x10,ppplVar34,pppplVar29,ppppbVar30,param_5,param_6,param_7,
                                  param_8);
      if (pppplVar20 != (long ****)0x0) {
LAB_7101bf831c:
        pppplVar27 = local_c8;
        pppplVar29 = pppplVar20;
        FUN_7103279d10(ppplVar18,ppplVar54,pppplVar27,(ulong)ppppbVar59,pppplVar20,(long)ppppbVar61)
        ;
        FUN_710392eb40((ulong)pppplVar20);
        goto LAB_7101bf8344;
      }
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (undefined2 *)((ulong)local_e0 & 0xffffffff00000000);
        pppplVar29 = &local_1170;
        local_1170 = ppplVar34;
        uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar44 & 1) != 0) &&
           (pppplVar20 = (long ****)
                         FUN_710392e290(0x10,ppplVar34,pppplVar29,ppppbVar30,param_5,param_6,param_7
                                        ,param_8), pppplVar20 != (long ****)0x0))
        goto LAB_7101bf831c;
      }
      ppppbVar61 = (byte ****)((ulong)ppppbVar61 >> 1);
    } while (ppppbVar61 != (byte ****)0x0);
  }
  pppplVar27 = local_c8;
  pppplVar29 = (long ****)0x0;
  ppppbVar61 = (byte ****)0x0;
  FUN_7103279d10(ppplVar18,ppplVar54,pppplVar27,(ulong)ppppbVar59,(undefined8 *)0x0,0);
LAB_7101bf8344:
  ppplVar54 = local_10e8;
  ppplVar18 = (long ***)local_10f0;
  uVar47 = (long)local_10e8 - (long)local_10f0;
  local_1168 = (long ***)0x0;
  local_1160 = (long ***)0x0;
  uVar44 = (long)(uVar47 * 0x10000000) >> 0x20;
  local_1170 = (long ***)0x0;
  if (uVar47 * 0x10000000 != 0) {
    if (uVar44 >> 0x3d != 0) goto LAB_7101bfa2a4;
    ppplVar55 = (long ***)((long)(uVar47 * 0x10000000) >> 0x1d);
    ppplVar34 = (long ***)
                FUN_710392e290(0x10,ppplVar55,pppplVar27,ppppbVar59,pppplVar29,ppppbVar61,param_7,
                               param_8);
    if (ppplVar34 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (undefined2 *)((ulong)local_e0 & 0xffffffff00000000);
        pppplVar27 = local_c8;
        local_c8[0] = ppplVar55;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar21 & 1) != 0) &&
           (ppplVar34 = (long ***)
                        FUN_710392e290(0x10,ppplVar55,pppplVar27,ppppbVar59,pppplVar29,ppppbVar61,
                                       param_7,param_8), ppplVar34 != (long ***)0x0))
        goto LAB_7101bf83bc;
      }
      ppplVar34 = (long ***)0x0;
    }
LAB_7101bf83bc:
    local_1160 = ppplVar34 + uVar44;
    local_1168 = ppplVar34;
  }
  local_1170 = local_1168;
  if (0 < (int)(uVar47 >> 4)) {
    if (ppplVar54 == ppplVar18) {
LAB_7101bfa29c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar47 = 1;
    lVar49 = 8;
    if (local_1168 != local_1160) goto LAB_7101bf8420;
    do {
      ppplVar54 = local_1170;
      pppplVar20 = (long ****)((long)local_1160 - (long)local_1170);
      uVar63 = (long)pppplVar20 >> 3;
      uVar21 = uVar63 + 1;
      if (uVar21 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar63 < 0xfffffffffffffff) {
        if (uVar21 <= (ulong)((long)pppplVar20 >> 2)) {
          uVar21 = (long)pppplVar20 >> 2;
        }
        if (uVar21 != 0) {
          if (uVar21 >> 0x3d == 0) goto LAB_7101bf8484;
          goto LAB_7101bfa2a4;
        }
LAB_7101bf84e4:
        ppplVar55 = (long ***)0x0;
      }
      else {
        uVar21 = 0x1fffffffffffffff;
LAB_7101bf8484:
        ppplVar34 = (long ***)(uVar21 * 8);
        if (ppplVar34 == (long ***)0x0) {
          ppplVar34 = (long ***)0x1;
        }
        ppplVar55 = (long ***)
                    FUN_710392e290(0x10,ppplVar34,pppplVar27,ppppbVar59,pppplVar29,ppppbVar61,
                                   param_7,param_8);
        if (ppplVar55 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e0 = (undefined2 *)((ulong)local_e0 & 0xffffffff00000000);
            pppplVar27 = local_c8;
            local_c8[0] = ppplVar34;
            uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
            if (((uVar22 & 1) != 0) &&
               (ppplVar55 = (long ***)
                            FUN_710392e290(0x10,ppplVar34,pppplVar27,ppppbVar59,pppplVar29,
                                           ppppbVar61,param_7,param_8), ppplVar55 != (long ***)0x0))
            goto LAB_7101bf84e8;
          }
          goto LAB_7101bf84e4;
        }
      }
LAB_7101bf84e8:
      ppplVar34 = ppplVar55 + uVar63;
      *ppplVar34 = *(long ***)((long)ppplVar18 + lVar49);
      if (0 < (long)pppplVar20) {
        memcpy(ppplVar55,ppplVar54,(size_t)pppplVar20);
        pppplVar27 = pppplVar20;
      }
      local_1170 = ppplVar55;
      local_1168 = ppplVar34 + 1;
      local_1160 = ppplVar55 + uVar21;
      ppplVar18 = (long ***)local_10f0;
      if (ppplVar54 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar54);
        ppplVar18 = (long ***)local_10f0;
      }
      while( true ) {
        local_10f0 = (undefined **)ppplVar18;
        if ((long)uVar44 <= (long)uVar47) goto LAB_7101bf8534;
        if ((ulong)((long)local_10e8 - (long)ppplVar18 >> 4) <= uVar47) goto LAB_7101bfa29c;
        uVar47 = uVar47 + 1;
        lVar49 = lVar49 + 0x10;
        if (local_1168 == local_1160) break;
LAB_7101bf8420:
        *local_1168 = *(long ***)((long)ppplVar18 + lVar49);
        local_1168 = local_1168 + 1;
        ppplVar18 = (long ***)local_10f0;
      }
    } while( true );
  }
LAB_7101bf8534:
  if (ppplVar18 != (long ***)0x0) {
    local_10e8 = ppplVar18;
    FUN_710392eb40((ulong)ppplVar18);
  }
  pplVar48 = param_1[0x9e];
  ppplVar18 = param_1 + 0x9e;
  if (pplVar48 != (long **)0x0) {
    param_1[0x9f] = pplVar48;
    FUN_710392eb40((ulong)pplVar48);
    param_1[0x9f] = (long **)0x0;
    param_1[0xa0] = (long **)0x0;
    *ppplVar18 = (long **)0x0;
  }
  param_1[0x9e] = (long **)local_1170;
  ppplVar54 = param_1 + 0x9f;
  *ppplVar54 = (long **)local_1168;
  param_1[0xa0] = (long **)local_1160;
  plVar58 = *param_1[0x25] + 1;
  FUN_7103776640(&local_1180,(long)plVar58,(byte ****)"set_keyhelp",pppplVar27,ppppbVar59,pppplVar29
                 ,ppppbVar61,param_7,param_8);
  FUN_7103776910(&local_10f0,(long)plVar58,(long ****)"set_txt_list",pppplVar27,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x29 != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x2a];
    param_1[0x2a] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)&local_1180,(long ****)"set_txt_icon",pppplVar27,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x2b != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x2c];
    param_1[0x2c] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)&local_1180,(long ****)"set_txt_help",pppplVar27,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x2d != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x2e];
    param_1[0x2e] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)plVar58,(long ****)"set_txt_topic_num_bb",pppplVar27,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  pppplVar20 = (long ****)((long)*ppplVar54 - (long)*ppplVar18 >> 3);
  FUN_710377a4a0((long)&local_10f0,"/%d",pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7,param_8
                );
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)plVar58,(long ****)"set_txt_topic_num",pppplVar20,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x2f != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x30];
    param_1[0x30] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)plVar58,(long ****)"set_txt_topic_title",pppplVar20,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x31 != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x32];
    param_1[0x32] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776910(&local_10f0,(long)plVar58,(long ****)"set_txt_topic_category",pppplVar20,ppppbVar59
                 ,pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x33 != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x34];
    param_1[0x34] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  FUN_7103776640(&local_1170,(long)plVar58,(byte ****)"set_movie_preview",pppplVar20,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  FUN_7103776910(&local_10f0,(long)&local_1170,(long ****)"set_rep_movie",pppplVar20,ppppbVar59,
                 pppplVar29,ppppbVar61,param_7,param_8);
  ppplVar34 = local_10e8;
  if (param_1 + 0x35 != (long ***)&local_10f0) {
    local_10e8 = (long ***)0x0;
    pplVar48 = param_1[0x36];
    param_1[0x36] = (long **)ppplVar34;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
  }
  ppplVar34 = local_10e8;
  local_10f0 = &PTR_FUN_710523d9a8;
  local_10e8 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar34);
  }
  ppplVar34 = local_1168;
  local_1170 = (long ***)&PTR_FUN_710523d988;
  local_1168 = (long ***)0x0;
  if (ppplVar34 != (long ***)0x0) {
    pplVar48 = ppplVar34[3];
    ppplVar34[2] = (long **)&PTR_FUN_710523d9a8;
    ppplVar34[3] = (long **)0x0;
    if (pplVar48 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar48);
    }
    FUN_710392eb40((ulong)ppplVar34);
  }
  plVar35 = *param_1[0x36];
  if (plVar35 != (long *)0x0) {
    *(byte *)(plVar35 + 0xb) = *(byte *)(plVar35 + 0xb) & 0xfe;
  }
  FUN_7103776910(&local_1190,(long)plVar58,(long ****)"set_txt_explanation_00",pppplVar20,ppppbVar59
                 ,pppplVar29,ppppbVar61,param_7,param_8);
  pplVar51 = param_1[0x97];
  pplVar48 = param_1[0x98];
  while (pplVar48 != pplVar51) {
    plVar58 = pplVar48[-1];
    pplVar48[-2] = (long *)&PTR_FUN_710523da08;
    pplVar48[-1] = (long *)0x0;
    if (plVar58 != (long *)0x0) {
      plVar35 = (long *)plVar58[1];
      *plVar58 = 0;
      plVar58[1] = 0;
      if (plVar35 != (long *)0x0) {
        plVar23 = plVar35 + 1;
        do {
          lVar49 = *plVar23;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar14) {
            *plVar23 = lVar49 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar49 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
          std::__shared_weak_count::__release_weak();
          plVar35 = (long *)plVar58[1];
        }
        else {
          plVar35 = (long *)plVar58[1];
        }
        if (plVar35 != (long *)0x0) {
          plVar23 = plVar35 + 1;
          do {
            lVar49 = *plVar23;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar14) {
              *plVar23 = lVar49 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar49 == 0) {
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_710392eb40((ulong)plVar58);
    }
    plVar58 = pplVar48[-3];
    pplVar52 = pplVar48 + -5;
    pplVar48[-4] = (long *)&PTR_FUN_710523da08;
    pplVar48[-3] = (long *)0x0;
    pplVar48 = pplVar52;
    if (plVar58 != (long *)0x0) {
      plVar35 = (long *)plVar58[1];
      *plVar58 = 0;
      plVar58[1] = 0;
      if (plVar35 != (long *)0x0) {
        plVar23 = plVar35 + 1;
        do {
          lVar49 = *plVar23;
          cVar9 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar14) {
            *plVar23 = lVar49 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar49 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
          std::__shared_weak_count::__release_weak();
          plVar35 = (long *)plVar58[1];
        }
        else {
          plVar35 = (long *)plVar58[1];
        }
        if (plVar35 != (long *)0x0) {
          plVar23 = plVar35 + 1;
          do {
            lVar49 = *plVar23;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar14) {
              *plVar23 = lVar49 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar49 == 0) {
            (**(code **)(*plVar35 + 0x10))(plVar35);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_710392eb40((ulong)plVar58);
    }
  }
  param_1[0x98] = pplVar51;
  pplVar52 = param_1[0x94];
  pplVar48 = param_1[0x95];
  pplVar51 = pplVar52;
  if (param_1[0x95] != pplVar52) {
    do {
      pplVar51 = pplVar48 + -3;
      plVar58 = *pplVar51;
      if (plVar58 != (long *)0x0) {
        plVar35 = pplVar48[-2];
        if (pplVar48[-2] == plVar58) {
          pplVar48[-2] = plVar58;
          plVar35 = plVar58;
        }
        else {
          do {
            plVar23 = (long *)plVar35[-2];
            plVar24 = plVar35 + -10;
            if (plVar24 != plVar23 && plVar23 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar23);
            }
            *(undefined2 *)(plVar35 + -10) = 0;
            plVar35[-2] = (long)plVar24;
            *(undefined4 *)(plVar35 + -1) = 0;
            plVar35 = plVar24;
          } while (plVar58 != plVar24);
          plVar35 = *pplVar51;
          pplVar48[-2] = plVar58;
        }
        if (plVar35 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar35);
        }
      }
      pplVar48 = pplVar51;
    } while (pplVar51 != pplVar52);
    pplVar51 = param_1[0x94];
  }
  uVar44 = (long)param_1[0x9f] - (long)param_1[0x9e] >> 3;
  param_1[0x95] = pplVar52;
  if ((ulong)(((long)param_1[0x96] - (long)pplVar51 >> 3) * -0x5555555555555555) < uVar44) {
    if (0xaaaaaaaaaaaaaaa < uVar44) {
LAB_7101bfa2a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar49 = (long)pplVar52 - (long)pplVar51 >> 3;
    ppplVar34 = (long ***)(uVar44 * 0x18);
    if (ppplVar34 == (long ***)0x0) {
      ppplVar34 = (long ***)0x1;
    }
    lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7,
                            param_8);
    if (lVar50 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1170 = (long ***)((ulong)local_1170 & 0xffffffff00000000);
        pppplVar20 = (long ****)&local_10f0;
        local_10f0 = (undefined **)ppplVar34;
        uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1170);
        if (((uVar47 & 1) != 0) &&
           (lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                    param_7,param_8), lVar50 != 0)) goto LAB_7101bf8b1c;
      }
      lVar50 = 0;
    }
LAB_7101bf8b1c:
    pplVar38 = (long **)(lVar50 + lVar49 * 8);
    pplVar48 = (long **)(lVar50 + uVar44 * 0x18);
    if (pplVar52 == pplVar51) {
      param_1[0x94] = pplVar38;
      param_1[0x95] = pplVar38;
      param_1[0x96] = pplVar48;
    }
    else {
      lVar60 = 0;
      do {
        lVar46 = lVar50 + lVar49 * 8 + lVar60;
        *(undefined8 *)(lVar46 + -0x18) = 0;
        *(undefined8 *)(lVar46 + -0x10) = 0;
        *(undefined8 *)(lVar46 + -8) = 0;
        *(undefined8 *)(lVar46 + -0x18) = *(undefined8 *)((long)pplVar52 + lVar60 + -0x18);
        *(undefined8 *)(lVar46 + -0x10) = *(undefined8 *)((long)pplVar52 + lVar60 + -0x10);
        lVar41 = lVar60 + -0x18;
        *(undefined8 *)(lVar46 + -8) = *(undefined8 *)((long)pplVar52 + lVar60 + -8);
        *(undefined8 *)((long)pplVar52 + lVar60 + -0x10) = 0;
        *(undefined8 *)((long)pplVar52 + lVar60 + -8) = 0;
        *(undefined8 *)((long)pplVar52 + lVar60 + -0x18) = 0;
        lVar60 = lVar41;
      } while ((long)pplVar51 - (long)pplVar52 != lVar41);
      pplVar51 = param_1[0x94];
      pplVar52 = param_1[0x95];
      param_1[0x95] = pplVar38;
      param_1[0x94] = (long **)(lVar50 + lVar49 * 8 + lVar41);
      param_1[0x96] = pplVar48;
      while (pplVar48 = pplVar52, pplVar48 != pplVar51) {
        pplVar52 = pplVar48 + -3;
        plVar58 = *pplVar52;
        if (plVar58 != (long *)0x0) {
          plVar35 = pplVar48[-2];
          if (pplVar48[-2] == plVar58) {
            pplVar48[-2] = plVar58;
            plVar35 = plVar58;
          }
          else {
            do {
              plVar23 = (long *)plVar35[-2];
              plVar24 = plVar35 + -10;
              if (plVar24 != plVar23 && plVar23 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar23);
              }
              *(undefined2 *)(plVar35 + -10) = 0;
              plVar35[-2] = (long)plVar24;
              *(undefined4 *)(plVar35 + -1) = 0;
              plVar35 = plVar24;
            } while (plVar58 != plVar24);
            plVar35 = *pplVar52;
            pplVar48[-2] = plVar58;
          }
          if (plVar35 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar35);
          }
        }
      }
    }
    if (pplVar51 != (long **)0x0) {
      FUN_710392eb40((ulong)pplVar51);
    }
  }
  pplVar48 = *ppplVar18;
  if (*ppplVar54 != pplVar48) {
    uVar44 = 0;
    do {
      pplVar51 = param_1[0x95];
      plVar58 = pplVar48[uVar44];
      if (pplVar51 < param_1[0x96]) {
        pplVar51[1] = (long *)0x0;
        pplVar51[2] = (long *)0x0;
        *pplVar51 = (long *)0x0;
        param_1[0x95] = param_1[0x95] + 3;
      }
      else {
        pplVar48 = param_1[0x94];
        lVar49 = (long)pplVar51 - (long)pplVar48 >> 3;
        uVar21 = 0xaaaaaaaaaaaaaaa;
        uVar47 = lVar49 * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar47) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar50 = (long)param_1[0x96] - (long)pplVar48 >> 3;
        if ((ulong)(lVar50 * -0x5555555555555555) < 0x555555555555555) {
          uVar63 = lVar50 * 0x5555555555555556;
          uVar21 = uVar47;
          if (uVar47 <= uVar63) {
            uVar21 = uVar63;
          }
          if (uVar21 != 0) goto LAB_7101bf8d04;
          lVar50 = 0;
        }
        else {
LAB_7101bf8d04:
          ppplVar34 = (long ***)(uVar21 * 0x18);
          if (ppplVar34 == (long ***)0x0) {
            ppplVar34 = (long ***)0x1;
          }
          lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7
                                  ,param_8);
          if (lVar50 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1170 = (long ***)((ulong)local_1170 & 0xffffffff00000000);
              pppplVar20 = (long ****)&local_10f0;
              local_10f0 = (undefined **)ppplVar34;
              uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1170);
              if (((uVar47 & 1) != 0) &&
                 (lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61
                                          ,param_7,param_8), lVar50 != 0)) goto LAB_7101bf8d64;
            }
            lVar50 = 0;
          }
LAB_7101bf8d64:
          pplVar48 = param_1[0x94];
          pplVar51 = param_1[0x95];
        }
        pplVar38 = (long **)(lVar50 + lVar49 * 8);
        pplVar52 = pplVar38 + 3;
        *pplVar38 = (long *)0x0;
        pplVar38[1] = (long *)0x0;
        pplVar38[2] = (long *)0x0;
        pplVar62 = pplVar51;
        if (pplVar51 != pplVar48) {
          lVar49 = 0;
          do {
            *(undefined8 *)((long)pplVar38 + lVar49 + -0x18) = 0;
            *(undefined8 *)((long)pplVar38 + lVar49 + -0x10) = 0;
            *(undefined8 *)((long)pplVar38 + lVar49 + -8) = 0;
            *(undefined8 *)((long)pplVar38 + lVar49 + -0x18) =
                 *(undefined8 *)((long)pplVar51 + lVar49 + -0x18);
            *(undefined8 *)((long)pplVar38 + lVar49 + -0x10) =
                 *(undefined8 *)((long)pplVar51 + lVar49 + -0x10);
            lVar60 = lVar49 + -0x18;
            *(undefined8 *)((long)pplVar38 + lVar49 + -8) =
                 *(undefined8 *)((long)pplVar51 + lVar49 + -8);
            *(undefined8 *)((long)pplVar51 + lVar49 + -0x10) = 0;
            *(undefined8 *)((long)pplVar51 + lVar49 + -8) = 0;
            *(undefined8 *)((long)pplVar51 + lVar49 + -0x18) = 0;
            lVar49 = lVar60;
          } while ((long)pplVar48 - (long)pplVar51 != lVar60);
          pplVar51 = param_1[0x95];
          pplVar38 = (long **)((long)pplVar38 + lVar60);
          pplVar62 = param_1[0x94];
        }
        param_1[0x94] = pplVar38;
        param_1[0x95] = pplVar52;
        param_1[0x96] = (long **)(lVar50 + uVar21 * 0x18);
        while (pplVar48 = pplVar51, pplVar48 != pplVar62) {
          pplVar51 = pplVar48 + -3;
          plVar35 = *pplVar51;
          if (plVar35 != (long *)0x0) {
            plVar23 = pplVar48[-2];
            if (pplVar48[-2] == plVar35) {
              pplVar48[-2] = plVar35;
              plVar23 = plVar35;
            }
            else {
              do {
                plVar24 = (long *)plVar23[-2];
                plVar39 = plVar23 + -10;
                if (plVar39 != plVar24 && plVar24 != (long *)0x0) {
                  FUN_710392eb40((ulong)plVar24);
                }
                *(undefined2 *)(plVar23 + -10) = 0;
                plVar23[-2] = (long)plVar39;
                *(undefined4 *)(plVar23 + -1) = 0;
                plVar23 = plVar39;
              } while (plVar35 != plVar39);
              plVar23 = *pplVar51;
              pplVar48[-2] = plVar35;
            }
            if (plVar23 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar23);
            }
          }
        }
        if (pplVar62 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar62);
        }
      }
      pplVar48 = param_1[0x94];
      local_e0 = (undefined2 *)0x0;
      local_d8 = (undefined2 *)0x0;
      uStack_d0 = 0;
      pplVar51 = pplVar48 + uVar44 * 3;
      local_87 = 0;
      local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffffffffff00);
      FUN_71032b5d50((uint *)&local_10f0,*(long *)(lVar32 + 0x3b8),(ulong)plVar58);
      pppplVar20 = &local_10e8;
      FUN_71014c8900((long)local_c8,"nam_technique_explain_%s",&local_10e8,ppppbVar59,pppplVar29,
                     ppppbVar61,param_7,param_8);
      FUN_71037a7e90((ulong *)&local_e0,(byte *)local_c8,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61
                     ,param_7,param_8);
      local_e8[0] = *(undefined4 *)(param_1 + 0x26);
      local_1100 = 0;
      uStack_10f8 = 0;
      local_1110 = 0;
      uStack_1108 = 0;
      local_1120 = 0;
      uStack_1118 = 0;
      local_1130 = 0;
      uStack_1128 = 0;
      local_1140 = 0;
      uStack_1138 = 0;
      local_1150 = 0;
      uStack_1148 = 0;
      local_1160 = (long ***)0x0;
      uStack_1158 = 0;
      local_1170 = (long ***)0x0;
      local_1168 = (long ***)0x0;
      pplVar52 = pplVar51 + 1;
      plVar35 = *pplVar51;
      plVar23 = *pplVar52;
      plVar24 = plVar35;
      if (*pplVar52 != plVar35) {
        do {
          plVar24 = (long *)plVar23[-2];
          plVar39 = plVar23 + -10;
          if (plVar39 != plVar24 && plVar24 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar24);
          }
          *(undefined2 *)(plVar23 + -10) = 0;
          plVar23[-2] = (long)plVar39;
          *(undefined4 *)(plVar23 + -1) = 0;
          plVar23 = plVar39;
        } while (plVar35 != plVar39);
        plVar24 = *pplVar51;
      }
      *pplVar52 = plVar35;
      ppplVar34 = (long ***)((long)local_d8 - (long)local_e0);
      lVar49 = (long)ppplVar34 >> 4;
      uVar47 = lVar49 * -0x3333333333333333;
      pplVar48 = pplVar48 + uVar44 * 3 + 2;
      puVar45 = local_e0;
      puVar25 = local_e0;
      puVar11 = local_d8;
      if ((ulong)(((long)*pplVar48 - (long)plVar24 >> 4) * -0x3333333333333333) < uVar47) {
        if (0x333333333333333 < uVar47) goto LAB_7101bfa2a4;
        lVar50 = (long)plVar35 - (long)plVar24 >> 4;
        if (ppplVar34 == (long ***)0x0) {
          ppplVar34 = (long ***)0x1;
        }
        lVar60 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7,
                                param_8);
        if (lVar60 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
            pppplVar20 = (long ****)&local_10f0;
            local_10f0 = (undefined **)ppplVar34;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar47 & 1) != 0) &&
               (lVar60 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                        param_7,param_8), lVar60 != 0)) goto LAB_7101bf8ffc;
          }
          lVar60 = 0;
        }
LAB_7101bf8ffc:
        pppplVar20 = (long ****)&DAT_00000050;
        plVar23 = (long *)(lVar60 + lVar50 * 0x10);
        plVar39 = (long *)(lVar60 + lVar49 * 0x10);
        if (plVar35 == plVar24) {
          *pplVar51 = plVar23;
          *pplVar52 = plVar23;
          *pplVar48 = plVar39;
        }
        else {
          plVar43 = (long *)(lVar60 + lVar50 * 0x10);
          lVar49 = 0;
          do {
            puVar45 = (undefined2 *)((long)plVar43 + lVar49 + -0x50);
            *(undefined4 *)((long)plVar43 + lVar49 + -8) = 0;
            *(undefined2 **)((long)plVar43 + lVar49 + -0x10) = puVar45;
            if (plVar35 != plVar43) {
              *puVar45 = 0;
              *(undefined2 **)((long)plVar43 + lVar49 + -0x10) = puVar45;
              *(undefined4 *)((long)plVar43 + lVar49 + -8) = 0;
              lVar41 = *(long *)((long)plVar35 + lVar49 + -0x10);
              lVar46 = (long)plVar35 + lVar49 + -0x50;
              if (lVar46 == lVar41) {
                uVar3 = *(undefined8 *)((long)plVar35 + lVar49 + -0x50);
                uVar5 = *(undefined8 *)((long)plVar35 + lVar49 + -0x48);
                uVar6 = *(undefined8 *)((long)plVar35 + lVar49 + -0x38);
                *(undefined8 *)((long)plVar43 + lVar49 + -0x40) =
                     *(undefined8 *)((long)plVar35 + lVar49 + -0x40);
                *(undefined8 *)((long)plVar43 + lVar49 + -0x38) = uVar6;
                *(undefined8 *)((long)plVar43 + lVar49 + -0x50) = uVar3;
                *(undefined8 *)((long)plVar43 + lVar49 + -0x48) = uVar5;
                uVar3 = *(undefined8 *)((long)plVar35 + lVar49 + -0x30);
                uVar5 = *(undefined8 *)((long)plVar35 + lVar49 + -0x28);
                uVar6 = *(undefined8 *)((long)plVar35 + lVar49 + -0x18);
                *(undefined8 *)((long)plVar43 + lVar49 + -0x20) =
                     *(undefined8 *)((long)plVar35 + lVar49 + -0x20);
                *(undefined8 *)((long)plVar43 + lVar49 + -0x18) = uVar6;
                *(undefined8 *)((long)plVar43 + lVar49 + -0x30) = uVar3;
                *(undefined8 *)((long)plVar43 + lVar49 + -0x28) = uVar5;
              }
              else {
                *(long *)((long)plVar43 + lVar49 + -0x10) = lVar41;
              }
              *(undefined4 *)((long)plVar43 + lVar49 + -8) =
                   *(undefined4 *)((long)plVar35 + lVar49 + -8);
              *(long *)((long)plVar35 + lVar49 + -0x10) = lVar46;
              *(undefined2 *)((long)plVar35 + lVar49 + -0x50) = 0;
              *(undefined4 *)((long)plVar35 + lVar49 + -8) = 0;
            }
            lVar49 = lVar49 + -0x50;
          } while ((long)plVar24 - (long)plVar35 != lVar49);
          plVar35 = *pplVar51;
          plVar24 = *pplVar52;
          *pplVar51 = (long *)(lVar60 + lVar50 * 0x10 + lVar49);
          *pplVar52 = plVar23;
          *pplVar48 = plVar39;
          while (plVar24 != plVar35) {
            plVar23 = (long *)plVar24[-2];
            plVar39 = plVar24 + -10;
            if (plVar39 != plVar23 && plVar23 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar23);
            }
            *(undefined2 *)(plVar24 + -10) = 0;
            plVar24[-2] = (long)plVar39;
            *(undefined4 *)(plVar24 + -1) = 0;
            plVar24 = plVar39;
          }
        }
        puVar45 = local_e0;
        puVar25 = local_e0;
        puVar11 = local_d8;
        if (plVar35 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar35);
          puVar45 = local_e0;
          puVar25 = local_e0;
          puVar11 = local_d8;
        }
      }
      for (; puVar56 = local_d8, local_e0 = puVar25, puVar45 != local_d8; puVar45 = puVar45 + 0x28)
      {
        uVar47 = 0x333333333333333;
        pppplVar20 = *(long *****)(puVar45 + 0x20);
        ppppbVar59 = (byte ****)local_e8;
        pppplVar29 = &local_1170;
        local_d8 = puVar11;
        uVar16 = FUN_71037ab750((long)&local_10f0,0x800,(ushort *)pppplVar20,ppppbVar59,pppplVar29);
        uVar21 = (ulong)uVar16;
        puVar25 = *(undefined2 **)(puVar45 + 0x20);
        if (puVar45 != puVar25 && puVar25 != (undefined2 *)0x0) {
          FUN_710392eb40((ulong)puVar25);
        }
        *puVar45 = 0;
        *(undefined2 **)(puVar45 + 0x20) = puVar45;
        *(undefined4 *)(puVar45 + 0x24) = 0;
        puVar25 = puVar45;
        if ((int)uVar16 < 0) {
          if ((ushort)local_10f0 != 0) {
            uVar63 = 0;
            uVar16 = 0;
            uVar21 = 0;
            uVar40 = (ushort)local_10f0;
            do {
              if ((uVar40 | 1) == 0xf) {
                if (uVar40 == 0xe) {
                  iVar17 = (*(ushort *)((long)&local_10f0 + uVar63 * 2 + 6) >> 1) + 4;
                }
                else {
                  iVar17 = 3;
                  if (uVar40 != 0xf) {
                    iVar17 = 0;
                  }
                }
              }
              else {
                iVar17 = 1;
              }
              uVar16 = iVar17 + uVar16;
              uVar63 = (ulong)uVar16;
              uVar21 = (ulong)(uint)(iVar17 + (int)uVar21);
              uVar40 = *(ushort *)((long)&local_10f0 + (ulong)uVar16 * 2);
            } while (uVar40 != 0);
            goto LAB_7101bf91c4;
          }
          uVar21 = 0;
          *(undefined4 *)(puVar45 + 0x24) = 0;
        }
        else {
LAB_7101bf91c4:
          iVar17 = (int)uVar21;
          *(int *)(puVar45 + 0x24) = iVar17;
          if (0x1f < iVar17) {
            uVar63 = (ulong)(iVar17 + 1);
            ppplVar34 = (long ***)(uVar63 * 2);
            if (CARRY8(uVar63,uVar63)) {
              ppplVar34 = (long ***)0xffffffffffffffff;
            }
            if (ppplVar34 == (long ***)0x0) {
              ppplVar34 = (long ***)0x1;
            }
            puVar25 = (undefined2 *)
                      FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                     param_7,param_8);
            if (puVar25 == (undefined2 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_74[0] = 0;
                pppplVar20 = &local_80;
                local_80 = ppplVar34;
                uVar63 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
                if (((uVar63 & 1) != 0) &&
                   (puVar25 = (undefined2 *)
                              FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,
                                             ppppbVar61,param_7,param_8),
                   puVar25 != (undefined2 *)0x0)) goto LAB_7101bf9238;
              }
              puVar25 = (undefined2 *)0x0;
            }
LAB_7101bf9238:
            *(undefined2 **)(puVar45 + 0x20) = puVar25;
          }
        }
        pppplVar20 = (long ****)(-(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1);
        memcpy(puVar25,&local_10f0,(size_t)pppplVar20);
        *(undefined2 *)(*(long *)(puVar45 + 0x20) + (long)*(int *)(puVar45 + 0x24) * 2) = 0;
        plVar35 = *pplVar52;
        if (plVar35 < *pplVar48) {
          FUN_71037a46b0((undefined2 *)plVar35,(long)puVar45,pppplVar20,ppppbVar59,pppplVar29,
                         ppppbVar61,param_7,param_8);
          *pplVar52 = *pplVar52 + 10;
        }
        else {
          lVar49 = (long)plVar35 - (long)*pplVar51 >> 4;
          uVar21 = lVar49 * -0x3333333333333333 + 1;
          if (0x333333333333333 < uVar21) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar50 = (long)*pplVar48 - (long)*pplVar51 >> 4;
          if ((ulong)(lVar50 * -0x3333333333333333) < 0x199999999999999) {
            uVar63 = lVar50 * -0x6666666666666666;
            uVar47 = uVar21;
            if (uVar21 <= uVar63) {
              uVar47 = uVar63;
            }
            if (uVar47 != 0) goto LAB_7101bf92d8;
LAB_7101bf9334:
            lVar50 = 0;
          }
          else {
LAB_7101bf92d8:
            ppplVar34 = (long ***)(uVar47 * 0x50);
            if (ppplVar34 == (long ***)0x0) {
              ppplVar34 = (long ***)0x1;
            }
            lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                    param_7,param_8);
            if (lVar50 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_74[0] = 0;
                pppplVar20 = &local_80;
                local_80 = ppplVar34;
                uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
                if (((uVar21 & 1) != 0) &&
                   (lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,
                                            ppppbVar61,param_7,param_8), lVar50 != 0))
                goto LAB_7101bf9338;
              }
              goto LAB_7101bf9334;
            }
          }
LAB_7101bf9338:
          plVar23 = (long *)(lVar50 + lVar49 * 0x10);
          FUN_71037a46b0((undefined2 *)plVar23,(long)puVar45,pppplVar20,ppppbVar59,pppplVar29,
                         ppppbVar61,param_7,param_8);
          plVar24 = *pplVar51;
          plVar43 = *pplVar52;
          plVar35 = plVar23 + 10;
          plVar39 = plVar24;
          if (plVar43 != plVar24) {
            lVar49 = 0;
            do {
              puVar25 = (undefined2 *)((long)plVar23 + lVar49 + -0x50);
              *(undefined4 *)((long)plVar23 + lVar49 + -8) = 0;
              *(undefined2 **)((long)plVar23 + lVar49 + -0x10) = puVar25;
              if (plVar43 != plVar23) {
                *puVar25 = 0;
                *(undefined2 **)((long)plVar23 + lVar49 + -0x10) = puVar25;
                *(undefined4 *)((long)plVar23 + lVar49 + -8) = 0;
                lVar46 = *(long *)((long)plVar43 + lVar49 + -0x10);
                lVar60 = (long)plVar43 + lVar49 + -0x50;
                if (lVar60 == lVar46) {
                  uVar3 = *(undefined8 *)((long)plVar43 + lVar49 + -0x50);
                  uVar5 = *(undefined8 *)((long)plVar43 + lVar49 + -0x48);
                  uVar6 = *(undefined8 *)((long)plVar43 + lVar49 + -0x38);
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x40) =
                       *(undefined8 *)((long)plVar43 + lVar49 + -0x40);
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x38) = uVar6;
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x50) = uVar3;
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x48) = uVar5;
                  uVar3 = *(undefined8 *)((long)plVar43 + lVar49 + -0x30);
                  uVar5 = *(undefined8 *)((long)plVar43 + lVar49 + -0x28);
                  uVar6 = *(undefined8 *)((long)plVar43 + lVar49 + -0x18);
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x20) =
                       *(undefined8 *)((long)plVar43 + lVar49 + -0x20);
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x18) = uVar6;
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x30) = uVar3;
                  *(undefined8 *)((long)plVar23 + lVar49 + -0x28) = uVar5;
                }
                else {
                  *(long *)((long)plVar23 + lVar49 + -0x10) = lVar46;
                }
                *(undefined4 *)((long)plVar23 + lVar49 + -8) =
                     *(undefined4 *)((long)plVar43 + lVar49 + -8);
                *(long *)((long)plVar43 + lVar49 + -0x10) = lVar60;
                *(undefined2 *)((long)plVar43 + lVar49 + -0x50) = 0;
                *(undefined4 *)((long)plVar43 + lVar49 + -8) = 0;
              }
              lVar49 = lVar49 + -0x50;
            } while ((long)plVar24 - (long)plVar43 != lVar49);
            plVar24 = *pplVar52;
            plVar23 = (long *)((long)plVar23 + lVar49);
            plVar39 = *pplVar51;
          }
          *pplVar51 = plVar23;
          *pplVar52 = plVar35;
          *pplVar48 = (long *)(lVar50 + uVar47 * 0x50);
          while (plVar24 != plVar39) {
            plVar35 = (long *)plVar24[-2];
            plVar23 = plVar24 + -10;
            if (plVar23 != plVar35 && plVar35 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar35);
            }
            *(undefined2 *)(plVar24 + -10) = 0;
            plVar24[-2] = (long)plVar23;
            *(undefined4 *)(plVar24 + -1) = 0;
            plVar24 = plVar23;
          }
          if (plVar39 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar39);
          }
        }
        puVar25 = local_e0;
        puVar11 = local_d8;
        local_d8 = puVar56;
      }
      local_d8 = puVar11;
      if (puVar25 != (undefined2 *)0x0) {
        while (puVar11 != puVar25) {
          puVar45 = *(undefined2 **)(puVar11 + -8);
          puVar56 = puVar11 + -0x28;
          if (puVar56 != puVar45 && puVar45 != (undefined2 *)0x0) {
            FUN_710392eb40((ulong)puVar45);
          }
          puVar11[-0x28] = 0;
          *(undefined2 **)(puVar11 + -8) = puVar56;
          *(undefined4 *)(puVar11 + -4) = 0;
          puVar11 = puVar56;
        }
        local_d8 = puVar25;
        if (local_e0 != (undefined2 *)0x0) {
          FUN_710392eb40((ulong)local_e0);
        }
      }
      uVar47 = local_1188;
      plVar23 = *pplVar52;
      for (plVar35 = *pplVar51; plVar35 != plVar23; plVar35 = plVar35 + 10) {
        FUN_710377a960(*(long *)(uVar47 + 0x10),(ushort *)plVar35[8],pppplVar20,ppppbVar59,
                       pppplVar29,ppppbVar61,param_7,param_8);
      }
      local_10f0 = (undefined **)((ulong)local_10f0 & 0xffffffff00000000);
      local_10e8 = (long ***)&PTR_FUN_710523da08;
      plVar35 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7
                                       ,param_8);
      if (plVar35 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
          local_1170 = (long ***)&DAT_00000010;
          pppplVar20 = &local_1170;
          uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
          if (((uVar47 & 1) != 0) &&
             (plVar35 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61
                                               ,param_7,param_8), plVar35 != (long *)0x0))
          goto LAB_7101bf9554;
        }
        plVar35 = (long *)0x0;
      }
LAB_7101bf9554:
      *plVar35 = 0;
      plVar35[1] = 0;
      local_10d8 = &PTR_FUN_710523da08;
      local_10e0 = (long ***)plVar35;
      plVar35 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7
                                       ,param_8);
      if (plVar35 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
          local_1170 = (long ***)&DAT_00000010;
          pppplVar20 = &local_1170;
          uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
          if (((uVar47 & 1) != 0) &&
             (plVar35 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61
                                               ,param_7,param_8), plVar35 != (long *)0x0))
          goto LAB_7101bf95b8;
        }
        plVar35 = (long *)0x0;
      }
LAB_7101bf95b8:
      *plVar35 = 0;
      plVar35[1] = 0;
      local_10d0 = (long ***)plVar35;
      puVar19 = FUN_71032b5800(*(long *)(lVar32 + 0x3b8),(ulong)plVar58);
      puVar26 = FUN_71032b6340(*(long *)(lVar32 + 0x3b8),(ulong)plVar58);
      bVar14 = FUN_71032b65e0(*(long *)(lVar32 + 0x3b8),(ulong)plVar58);
      iVar17 = 0;
      local_10f0 = (undefined **)((ulong)local_10f0 & 0xffffffff00000000);
      if ((((ulong)puVar19 & 0xffffffffff) != 0) &&
         (((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000)) {
        ppppbVar59 = (byte ****)0x2;
        pppplVar20 = (long ****)0x0;
        pppplVar27 = (long ****)
                     FUN_710323f330(param_2,(ulong)puVar19,0,2,pppplVar29,ppppbVar61,param_7,param_8
                                   );
        if (&local_10e8 != pppplVar27) {
          pplVar48 = *pppplVar27[1];
          pplVar51 = pppplVar27[1][1];
          if (pplVar51 != (long **)0x0) {
            pplVar52 = pplVar51 + 1;
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(pplVar52,0x10);
              if (bVar10) {
                *pplVar52 = (long *)((long)*pplVar52 + 1);
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar58 = (long *)local_10e0[1];
          *local_10e0 = pplVar48;
          local_10e0[1] = pplVar51;
          if (plVar58 != (long *)0x0) {
            plVar35 = plVar58 + 1;
            do {
              lVar49 = *plVar35;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar10) {
                *plVar35 = lVar49 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar49 == 0) {
              (**(code **)(*plVar58 + 0x10))(plVar58);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        iVar17 = (uint)local_10f0 + 1;
        local_10f0 = (undefined **)CONCAT44(local_10f0._4_4_,iVar17);
        if ((((ulong)puVar26 & 0xffffffffff) != 0) &&
           (((ulong)puVar26 & 0xff00000000000000) == 0xc100000000000000)) {
          ppppbVar59 = (byte ****)0x2;
          pppplVar20 = (long ****)0x0;
          pppuVar28 = (undefined ***)
                      FUN_710323f330(param_2,(ulong)puVar26,0,2,pppplVar29,ppppbVar61,param_7,
                                     param_8);
          if (&local_10d8 != pppuVar28) {
            puVar4 = *pppuVar28[1];
            puVar7 = pppuVar28[1][1];
            if (puVar7 != (undefined *)0x0) {
              plVar58 = (long *)(puVar7 + 8);
              do {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar10) {
                  *plVar58 = *plVar58 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
            }
            plVar58 = (long *)local_10d0[1];
            *local_10d0 = (long **)puVar4;
            local_10d0[1] = (long **)puVar7;
            if (plVar58 != (long *)0x0) {
              plVar35 = plVar58 + 1;
              do {
                lVar49 = *plVar35;
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar10) {
                  *plVar35 = lVar49 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar49 == 0) {
                (**(code **)(*plVar58 + 0x10))(plVar58);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          uVar16 = (uint)local_10f0;
          iVar17 = (uint)local_10f0 + 1;
          local_10f0 = (undefined **)CONCAT44(local_10f0._4_4_,iVar17);
          if (bVar14) {
            iVar17 = uVar16 + 2;
            local_10f0 = (undefined **)CONCAT44(local_10f0._4_4_,iVar17);
          }
        }
      }
      pplVar48 = param_1[0x98];
      if (pplVar48 < param_1[0x99]) {
        *(int *)pplVar48 = iVar17;
        pplVar48[1] = (long *)&PTR_FUN_710523da08;
        plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                         param_7,param_8);
        if (plVar58 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
            local_1170 = (long ***)&DAT_00000010;
            pppplVar20 = &local_1170;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
            if (((uVar47 & 1) != 0) &&
               (plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,
                                                 ppppbVar61,param_7,param_8), plVar58 != (long *)0x0
               )) goto LAB_7101bf97dc;
          }
          plVar58 = (long *)0x0;
        }
LAB_7101bf97dc:
        *plVar58 = 0;
        plVar58[1] = 0;
        pplVar48[2] = plVar58;
        if (pplVar48 != (long **)&local_10f0) {
          lVar49 = (long)*local_10e0;
          lVar50 = (long)local_10e0[1];
          if (lVar50 != 0) {
            plVar35 = (long *)(lVar50 + 8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = *plVar35 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar35 = (long *)plVar58[1];
          *plVar58 = lVar49;
          plVar58[1] = lVar50;
          if (plVar35 != (long *)0x0) {
            plVar58 = plVar35 + 1;
            do {
              lVar49 = *plVar58;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
              if (bVar14) {
                *plVar58 = lVar49 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar49 == 0) {
              (**(code **)(*plVar35 + 0x10))(plVar35);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        pplVar48[3] = (long *)&PTR_FUN_710523da08;
        plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                         param_7,param_8);
        if (plVar58 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
            local_1170 = (long ***)&DAT_00000010;
            pppplVar20 = &local_1170;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
            if (((uVar47 & 1) != 0) &&
               (plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,
                                                 ppppbVar61,param_7,param_8), plVar58 != (long *)0x0
               )) goto LAB_7101bf98a4;
          }
          plVar58 = (long *)0x0;
        }
LAB_7101bf98a4:
        *plVar58 = 0;
        plVar58[1] = 0;
        pplVar48[4] = plVar58;
        if (pplVar48 != (long **)&local_10f0) {
          lVar49 = (long)*local_10d0;
          lVar50 = (long)local_10d0[1];
          if (lVar50 != 0) {
            plVar35 = (long *)(lVar50 + 8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = *plVar35 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
          plVar35 = (long *)plVar58[1];
          *plVar58 = lVar49;
          plVar58[1] = lVar50;
          if (plVar35 != (long *)0x0) {
            plVar58 = plVar35 + 1;
            do {
              lVar49 = *plVar58;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
              if (bVar14) {
                *plVar58 = lVar49 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar49 == 0) {
              (**(code **)(*plVar35 + 0x10))(plVar35);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        param_1[0x98] = param_1[0x98] + 5;
      }
      else {
        lVar49 = (long)pplVar48 - (long)param_1[0x97] >> 3;
        uVar47 = lVar49 * -0x3333333333333333 + 1;
        uVar21 = 0x666666666666666;
        if (0x666666666666666 < uVar47) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar50 = (long)param_1[0x99] - (long)param_1[0x97] >> 3;
        if ((ulong)(lVar50 * -0x3333333333333333) < 0x333333333333333) {
          uVar63 = lVar50 * -0x6666666666666666;
          uVar21 = uVar47;
          if (uVar47 <= uVar63) {
            uVar21 = uVar63;
          }
          if (uVar21 != 0) goto LAB_7101bf996c;
LAB_7101bf99d0:
          lVar50 = 0;
        }
        else {
LAB_7101bf996c:
          ppplVar34 = (long ***)(uVar21 * 0x28);
          if (ppplVar34 == (long ***)0x0) {
            ppplVar34 = (long ***)0x1;
          }
          lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7
                                  ,param_8);
          if (lVar50 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
              pppplVar20 = &local_1170;
              local_1170 = ppplVar34;
              uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
              if (((uVar47 & 1) != 0) &&
                 (lVar50 = FUN_710392e290(0x10,ppplVar34,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61
                                          ,param_7,param_8), lVar50 != 0)) goto LAB_7101bf99d4;
            }
            goto LAB_7101bf99d0;
          }
        }
LAB_7101bf99d4:
        pplVar48 = (long **)(lVar50 + lVar49 * 8);
        *(int *)pplVar48 = iVar17;
        pplVar48[1] = (long *)&PTR_FUN_710523da08;
        plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                         param_7,param_8);
        if (plVar58 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
            local_1170 = (long ***)&DAT_00000010;
            pppplVar20 = &local_1170;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
            if (((uVar47 & 1) != 0) &&
               (plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,
                                                 ppppbVar61,param_7,param_8), plVar58 != (long *)0x0
               )) goto LAB_7101bf9a48;
          }
          plVar58 = (long *)0x0;
        }
LAB_7101bf9a48:
        *plVar58 = 0;
        plVar58[1] = 0;
        pplVar48[2] = plVar58;
        if ((long ****)(pplVar48 + 1) != &local_10e8) {
          lVar60 = (long)*local_10e0;
          lVar46 = (long)local_10e0[1];
          if (lVar46 == 0) {
            *plVar58 = lVar60;
            plVar58[1] = 0;
          }
          else {
            plVar35 = (long *)(lVar46 + 8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = *plVar35 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            plVar35 = (long *)plVar58[1];
            *plVar58 = lVar60;
            plVar58[1] = lVar46;
            if (plVar35 != (long *)0x0) {
              plVar58 = plVar35 + 1;
              do {
                lVar60 = *plVar58;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar14) {
                  *plVar58 = lVar60 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar60 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        lVar49 = lVar50 + lVar49 * 8;
        pppuVar28 = (undefined ***)(lVar49 + 0x18);
        *pppuVar28 = &PTR_FUN_710523da08;
        plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                         param_7,param_8);
        if (plVar58 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c8[0] = (long ***)((ulong)local_c8[0] & 0xffffffff00000000);
            local_1170 = (long ***)&DAT_00000010;
            pppplVar20 = &local_1170;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c8);
            if (((uVar47 & 1) != 0) &&
               (plVar58 = (long *)FUN_710392e290(0x10,0x10,pppplVar20,ppppbVar59,pppplVar29,
                                                 ppppbVar61,param_7,param_8), plVar58 != (long *)0x0
               )) goto LAB_7101bf9b58;
          }
          plVar58 = (long *)0x0;
        }
LAB_7101bf9b58:
        *plVar58 = 0;
        plVar58[1] = 0;
        *(long **)(lVar49 + 0x20) = plVar58;
        if (pppuVar28 != &local_10d8) {
          lVar49 = (long)*local_10d0;
          lVar60 = (long)local_10d0[1];
          if (lVar60 == 0) {
            *plVar58 = lVar49;
            plVar58[1] = 0;
          }
          else {
            plVar35 = (long *)(lVar60 + 8);
            do {
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = *plVar35 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            plVar35 = (long *)plVar58[1];
            *plVar58 = lVar49;
            plVar58[1] = lVar60;
            if (plVar35 != (long *)0x0) {
              plVar58 = plVar35 + 1;
              do {
                lVar49 = *plVar58;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar58,0x10);
                if (bVar14) {
                  *plVar58 = lVar49 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar49 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
        }
        pplVar52 = param_1[0x97];
        pplVar62 = param_1[0x98];
        pplVar51 = pplVar48 + 5;
        pplVar38 = pplVar52;
        if (pplVar62 != pplVar52) {
          lVar49 = 0;
          do {
            *(undefined4 *)((long)pplVar48 + lVar49 + -0x28) =
                 *(undefined4 *)((long)pplVar62 + lVar49 + -0x28);
            FUN_710377b3d0((undefined8 *)((long)pplVar48 + lVar49 + -0x20),
                           (undefined8 *)((long)pplVar62 + lVar49 + -0x20));
            FUN_710377b3d0((undefined8 *)((long)pplVar48 + lVar49 + -0x10),
                           (undefined8 *)((long)pplVar62 + lVar49 + -0x10));
            lVar49 = lVar49 + -0x28;
          } while ((long)pplVar52 - (long)pplVar62 != lVar49);
          pplVar52 = param_1[0x98];
          pplVar48 = (long **)((long)pplVar48 + lVar49);
          pplVar38 = param_1[0x97];
        }
        param_1[0x97] = pplVar48;
        param_1[0x98] = pplVar51;
        param_1[0x99] = (long **)(lVar50 + uVar21 * 0x28);
        while (pplVar52 != pplVar38) {
          plVar58 = pplVar52[-1];
          pplVar52[-2] = (long *)&PTR_FUN_710523da08;
          pplVar52[-1] = (long *)0x0;
          if (plVar58 != (long *)0x0) {
            plVar35 = (long *)plVar58[1];
            *plVar58 = 0;
            plVar58[1] = 0;
            if (plVar35 != (long *)0x0) {
              plVar23 = plVar35 + 1;
              do {
                lVar49 = *plVar23;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar14) {
                  *plVar23 = lVar49 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar49 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
                plVar35 = (long *)plVar58[1];
              }
              else {
                plVar35 = (long *)plVar58[1];
              }
              if (plVar35 != (long *)0x0) {
                plVar23 = plVar35 + 1;
                do {
                  lVar49 = *plVar23;
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar14) {
                    *plVar23 = lVar49 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (lVar49 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            FUN_710392eb40((ulong)plVar58);
          }
          plVar58 = pplVar52[-3];
          pplVar48 = pplVar52 + -5;
          pplVar52[-4] = (long *)&PTR_FUN_710523da08;
          pplVar52[-3] = (long *)0x0;
          pplVar52 = pplVar48;
          if (plVar58 != (long *)0x0) {
            plVar35 = (long *)plVar58[1];
            *plVar58 = 0;
            plVar58[1] = 0;
            if (plVar35 != (long *)0x0) {
              plVar23 = plVar35 + 1;
              do {
                lVar49 = *plVar23;
                cVar9 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar14) {
                  *plVar23 = lVar49 + -1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
              if (lVar49 == 0) {
                (**(code **)(*plVar35 + 0x10))(plVar35);
                std::__shared_weak_count::__release_weak();
                plVar35 = (long *)plVar58[1];
              }
              else {
                plVar35 = (long *)plVar58[1];
              }
              if (plVar35 != (long *)0x0) {
                plVar23 = plVar35 + 1;
                do {
                  lVar49 = *plVar23;
                  cVar9 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar14) {
                    *plVar23 = lVar49 + -1;
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (lVar49 == 0) {
                  (**(code **)(*plVar35 + 0x10))(plVar35);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            FUN_710392eb40((ulong)plVar58);
          }
        }
        if (pplVar38 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar38);
        }
      }
      ppplVar34 = local_10d0;
      local_10d8 = &PTR_FUN_710523da08;
      local_10d0 = (long ***)0x0;
      if (ppplVar34 != (long ***)0x0) {
        plVar58 = (long *)ppplVar34[1];
        *ppplVar34 = (long **)0x0;
        ppplVar34[1] = (long **)0x0;
        if (plVar58 != (long *)0x0) {
          plVar35 = plVar58 + 1;
          do {
            lVar49 = *plVar35;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar14) {
              *plVar35 = lVar49 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar49 == 0) {
            (**(code **)(*plVar58 + 0x10))(plVar58);
            std::__shared_weak_count::__release_weak();
            plVar58 = (long *)ppplVar34[1];
          }
          else {
            plVar58 = (long *)ppplVar34[1];
          }
          if (plVar58 != (long *)0x0) {
            plVar35 = plVar58 + 1;
            do {
              lVar49 = *plVar35;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = lVar49 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar49 == 0) {
              (**(code **)(*plVar58 + 0x10))(plVar58);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)ppplVar34);
      }
      ppplVar34 = local_10e0;
      local_10e8 = (long ***)&PTR_FUN_710523da08;
      local_10e0 = (long ***)0x0;
      if (ppplVar34 != (long ***)0x0) {
        plVar58 = (long *)ppplVar34[1];
        *ppplVar34 = (long **)0x0;
        ppplVar34[1] = (long **)0x0;
        if (plVar58 != (long *)0x0) {
          plVar35 = plVar58 + 1;
          do {
            lVar49 = *plVar35;
            cVar9 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar14) {
              *plVar35 = lVar49 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (lVar49 == 0) {
            (**(code **)(*plVar58 + 0x10))(plVar58);
            std::__shared_weak_count::__release_weak();
            plVar58 = (long *)ppplVar34[1];
          }
          else {
            plVar58 = (long *)ppplVar34[1];
          }
          if (plVar58 != (long *)0x0) {
            plVar35 = plVar58 + 1;
            do {
              lVar49 = *plVar35;
              cVar9 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar14) {
                *plVar35 = lVar49 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar49 == 0) {
              (**(code **)(*plVar58 + 0x10))(plVar58);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        FUN_710392eb40((ulong)ppplVar34);
      }
      pplVar48 = *ppplVar18;
      uVar44 = uVar44 + 1;
    } while (uVar44 < (ulong)((long)*ppplVar54 - (long)pplVar48 >> 3));
  }
  ppplVar18 = param_1 + 0x40;
  local_11a0 = &local_11c0;
  local_11c0 = &PTR_FUN_71050acb20;
  ppplStack_11b8 = param_1;
  local_10d0 = (long ***)&local_10f0;
  local_10f0 = &PTR_FUN_71050acb20;
  local_10e8 = param_1;
  if ((long ***)&local_10f0 == ppplVar18) {
LAB_7101bf9f54:
    pcVar36 = (code *)(*local_10d0)[4];
LAB_7101bf9fac:
    (*pcVar36)(local_10d0);
  }
  else {
    ppplVar54 = (long ***)param_1[0x44];
    if (ppplVar54 == ppplVar18) {
      local_10d0 = (long ***)0x0;
      ppplVar34 = (long ***)&local_10f0;
      (*(code *)(*ppplVar54)[3])(ppplVar54,&local_10f0);
      (*(code *)(*param_1[0x44])[4])();
      local_10d0 = ppplVar34;
      param_1[0x40] = (long **)&PTR_FUN_71050acb20;
      param_1[0x41] = (long **)param_1;
    }
    else {
      param_1[0x40] = (long **)&PTR_FUN_71050acb20;
      param_1[0x41] = (long **)param_1;
      local_10d0 = ppplVar54;
      ppplVar34 = ppplVar54;
    }
    param_1[0x44] = (long **)ppplVar18;
    local_10d0 = ppplVar34;
    if ((long ***)&local_10f0 == ppplVar34) goto LAB_7101bf9f54;
    if (ppplVar34 != (long ***)0x0) {
      pcVar36 = (code *)(*ppplVar34)[5];
      goto LAB_7101bf9fac;
    }
  }
  if (&local_11c0 == local_11a0) {
    pcVar36 = (code *)(*local_11a0)[4];
LAB_7101bf9fdc:
    (*pcVar36)();
  }
  else if (local_11a0 != (undefined ***)0x0) {
    pcVar36 = (code *)(*local_11a0)[5];
    goto LAB_7101bf9fdc;
  }
  pplVar52 = param_1[0x9e];
  pplVar38 = param_1[0x9f];
  pppplVar27 = (long ****)((long)pplVar38 - (long)pplVar52);
  pplVar51 = param_1[0x48];
  pplVar48 = param_1[0x46];
  uVar44 = (long)pppplVar27 >> 3;
  if ((ulong)((long)pplVar51 - (long)pplVar48 >> 3) < uVar44) {
    if (pplVar48 != (long **)0x0) {
      param_1[0x47] = pplVar48;
      FUN_710392eb40((ulong)pplVar48);
      pplVar51 = (long **)0x0;
      param_1[0x47] = (long **)0x0;
      param_1[0x48] = (long **)0x0;
      param_1[0x46] = (long **)0x0;
    }
    if (uVar44 >> 0x3d != 0) {
LAB_7101bfa054:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)pplVar51 >> 3) < 0xfffffffffffffff) {
      uVar47 = (long)pplVar51 >> 2;
      if ((uVar44 <= uVar47) && (uVar44 = uVar47, uVar47 >> 0x3d != 0)) goto LAB_7101bfa054;
    }
    else {
      uVar44 = 0x1fffffffffffffff;
    }
    ppplVar18 = (long ***)(uVar44 * 8);
    if (ppplVar18 == (long ***)0x0) {
      ppplVar18 = (long ***)0x1;
    }
    pplVar48 = (long **)FUN_710392e290(0x10,ppplVar18,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,
                                       param_7,param_8);
    if (pplVar48 == (long **)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1170 = (long ***)((ulong)local_1170 & 0xffffffff00000000);
        pppplVar20 = (long ****)&local_10f0;
        local_10f0 = (undefined **)ppplVar18;
        uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1170);
        if (((uVar47 & 1) != 0) &&
           (pplVar48 = (long **)FUN_710392e290(0x10,ppplVar18,pppplVar20,ppppbVar59,pppplVar29,
                                               ppppbVar61,param_7,param_8), pplVar48 != (long **)0x0
           )) goto LAB_7101bfa130;
      }
      pplVar48 = (long **)0x0;
    }
LAB_7101bfa130:
    param_1[0x47] = pplVar48;
    param_1[0x46] = pplVar48;
    param_1[0x48] = pplVar48 + uVar44;
    if ((long)pppplVar27 < 1) goto LAB_7101bfa160;
    pppplVar20 = pppplVar27;
    memcpy(pplVar48,pplVar52,(size_t)pppplVar27);
    pplVar48 = (long **)((long)pplVar48 + (long)pppplVar27);
  }
  else {
    uVar47 = (long)param_1[0x47] - (long)pplVar48 >> 3;
    pplVar51 = (long **)((long)pplVar52 + ((long)param_1[0x47] - (long)pplVar48));
    if (uVar44 <= uVar47) {
      pplVar51 = pplVar38;
    }
    pppplVar27 = (long ****)((long)pplVar51 - (long)pplVar52);
    if (pppplVar27 != (long ****)0x0) {
      pppplVar20 = pppplVar27;
      memmove(pplVar48,pplVar52,(size_t)pppplVar27);
    }
    if (uVar47 < uVar44) {
      pppplVar27 = (long ****)((long)pplVar38 - (long)pplVar51);
      if ((long)pppplVar27 < 1) goto LAB_7101bfa160;
      pppplVar20 = pppplVar27;
      memcpy(param_1[0x47],pplVar51,(size_t)pppplVar27);
      pplVar48 = (long **)((long)param_1[0x47] + (long)pppplVar27);
    }
    else {
      pplVar48 = pplVar48 + ((long)pppplVar27 >> 3);
    }
  }
  param_1[0x47] = pplVar48;
LAB_7101bfa160:
  pcVar33 = "mnu_technique_scroll_guide";
  if (uVar12 != 0xffffffff) {
    puVar31 = &DAT_7105339830;
    if ((uVar12 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) {
      puVar31 = (undefined8 *)(&DAT_7105339860)[lVar53];
    }
    pcVar33 = "mnu_technique_scroll_joy_guide";
    if (1 < *(int *)(puVar31[2] + 0x9c) - 3U) {
      pcVar33 = "mnu_technique_scroll_guide";
    }
  }
  FUN_710377a120((long)(param_1 + 0x2b),pcVar33,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7,
                 param_8);
  FUN_7101bf69c0((long)param_1,extraout_x1,pppplVar20,ppppbVar59,pppplVar29,ppppbVar61,param_7,
                 param_8);
  (*(code *)(*param_1[0x27])[0xe])(param_1[0x27],1);
  uVar44 = local_1188;
  local_1190 = &PTR_FUN_710523d9a8;
  local_1188 = 0;
  if (uVar44 != 0) {
    FUN_710392eb40(uVar44);
  }
  uVar44 = local_1178;
  local_1180 = &PTR_FUN_710523d988;
  local_1178 = 0;
  if (uVar44 != 0) {
    uVar47 = *(ulong *)(uVar44 + 0x18);
    *(undefined ***)(uVar44 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar44 + 0x18) = 0;
    if (uVar47 != 0) {
      FUN_710392eb40(uVar47);
    }
    FUN_710392eb40(uVar44);
  }
  return;
}

