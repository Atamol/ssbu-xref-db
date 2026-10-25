// addr:      71038db690
// offset:    0x38db690
// name:      FUN_71038db690
// mangled:   
// signature: long * * * * * * * * * * __cdecl FUN_71038db690(uint * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

long **********
FUN_71038db690(uint *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,long ****param_5
              ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  short sVar6;
  ulong uVar7;
  long **********pppppppppplVar8;
  long ****pppplVar9;
  byte bVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  long ***ppplVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long ***ppplVar20;
  ulong *puVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 uVar22;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  long **********pppppppppplVar23;
  long ***********ppppppppppplVar24;
  long **********pppppppppplVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long ****pppplVar34;
  long **********pppppppppplVar35;
  ushort *puVar36;
  ulong *puVar37;
  ulong uVar38;
  long **********pppppppppplVar39;
  long **********pppppppppplVar40;
  byte *pbVar41;
  long lVar42;
  ulong uVar43;
  ulong *puVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  long *********ppppppppplVar48;
  long ****pppplVar49;
  ulong *puVar50;
  long ****pppplVar51;
  undefined1 uVar52;
  undefined1 auVar53 [16];
  long **********local_160;
  long **********local_f0;
  long **********local_e8;
  long **********local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined4 local_bc;
  long *********local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  int iStack_a0;
  long ***local_98;
  undefined8 local_90;
  long **********local_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  pppppppppplVar23 = (long **********)&DAT_00000004;
  iVar11 = strncmp((char *)(param_1 + 1),"NANM",4);
  if (iVar11 == 0) {
    piVar2 = (int *)((long)param_1 + (ulong)*param_1);
    puVar36 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (((4 < *puVar36) && ((ulong)puVar36[2] != 0)) &&
       (*(char *)((long)piVar2 + (ulong)puVar36[2]) == '\x01')) {
      if ((*puVar36 < 7) || ((ulong)puVar36[3] == 0)) {
        ppppppppplVar48 = (long *********)0x0;
      }
      else {
        puVar3 = (uint *)((long)piVar2 + (ulong)puVar36[3]);
        ppppppppplVar48 = (long *********)((long)puVar3 + (ulong)*puVar3);
      }
      iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,
                              param_7,param_8);
      if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_b8 = (long *********)&DAT_00000028;
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      nu::VirtualAllocHook(0x28,0x10,local_88);
      FUN_71037c3a70(local_88);
      *(undefined4 *)(local_88 + 2) = 0;
      *local_88 = (long *********)&PTR_FUN_71052922f8;
      local_88[3] = ppppppppplVar48;
      local_88[4] = (long *********)0x0;
      return local_88;
    }
    return (long **********)0x0;
  }
  if (param_1[4] != 0x414e494d) {
    return (long **********)0x0;
  }
  if ((short)param_1[5] == 2) {
    if (*(short *)((long)param_1 + 0x16) == 1) {
      iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,
                              param_7,param_8);
      if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_b8 = (long *********)&DAT_00000028;
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      pppppppppplVar23 = local_88;
      nu::VirtualAllocHook(0x28,0x10,local_88);
      FUN_71037c3a70(local_88);
    }
    else {
      if (*(short *)((long)param_1 + 0x16) != 0) {
        return (long **********)0x0;
      }
      iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,
                              param_7,param_8);
      if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_b8 = (long *********)&DAT_00000028;
        uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
        if ((uVar19 & 1) != 0) {
          FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                         param_8);
        }
      }
      pppppppppplVar23 = local_88;
      nu::VirtualAllocHook(0x28,0x10,local_88);
      FUN_71037c3a70(local_88);
    }
    *local_88 = (long *********)&PTR_FUN_71052922f8;
    *(undefined4 *)(local_88 + 2) = 0;
    local_88[3] = (long *********)0x0;
    local_88[4] = (long *********)0x0;
    FUN_71038e0a70((long)local_88,param_1 + 4,pppppppppplVar23,param_4,param_5,param_6,param_7,
                   param_8);
    return local_88;
  }
  if ((short)param_1[5] != 1) {
    return (long **********)0x0;
  }
  sVar6 = *(short *)((long)param_1 + 0x16);
  if (sVar6 == 2) {
    iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_b8 = (long *********)&DAT_00000028;
      uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
      if ((uVar19 & 1) != 0) {
        FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    pppppppppplVar23 = local_88;
    nu::VirtualAllocHook(0x28,0x10,local_88);
    local_160 = local_88;
    FUN_71037c3a70(local_88);
    *local_160 = (long *********)&PTR_FUN_71052922f8;
    *(undefined4 *)(local_160 + 2) = 0;
    local_160[3] = (long *********)0x0;
    local_160[4] = (long *********)0x0;
    puVar12 = (undefined4 *)
              FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,
                             param_8);
    uVar22 = extraout_x1_17;
    if (puVar12 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long **********)((ulong)local_88 & 0xffffffff00000000);
        local_b8 = (long *********)&DAT_00000038;
        pppppppppplVar23 = &local_b8;
        auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        uVar22 = auVar53._8_8_;
        if (((auVar53._0_8_ & 1) != 0) &&
           (puVar12 = (undefined4 *)
                      FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                                     param_7,param_8), uVar22 = extraout_x1_18,
           puVar12 != (undefined4 *)0x0)) goto LAB_71038dc9e4;
      }
      puVar12 = (undefined4 *)0x0;
    }
LAB_71038dc9e4:
    *(undefined8 *)(puVar12 + 2) = 0;
    *(long *)(puVar12 + 4) = (long)&DAT_710455dba0 - (long)(puVar12 + 4);
    *(long *)(puVar12 + 6) = -0x18 - (long)puVar12;
    *(undefined8 *)(puVar12 + 8) = 0;
    pppplVar49 = (long ****)(puVar12 + 10);
    *pppplVar49 = (long ***)0x1;
    *(undefined8 *)(puVar12 + 0xc) = 0;
    *puVar12 = 0x414e494d;
    puVar12[1] = 0x20001;
    puVar13 = FUN_7103828690((ulong *)(puVar12 + 4),uVar22,(long ****)pppppppppplVar23,param_4,
                             param_5,param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    puVar12[2] = param_1[8];
    puVar12[3] = 0x30002;
    local_d8 = (long)&DAT_710455dba0 - (long)&local_d8;
    puVar13 = FUN_7103828690(&local_d8,extraout_x1_33,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    local_70[0] = (long)&DAT_710455dba0 - (long)local_70;
    puVar13 = FUN_7103828690(local_70,extraout_x1_34,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    uVar19 = *(ulong *)(param_1 + 0xc);
    if ((uVar19 & 1) == 0) {
      uVar26 = (long)(param_1 + 0xc) + uVar19;
      uVar19 = uVar26 + *(long *)(param_1 + 0xe) * 0x20;
      if (uVar26 != uVar19) {
LAB_71038dd55c:
        puVar13 = (ulong *)(puVar12 + 6);
        ppplVar14 = (long ***)-(long)&local_98;
        uVar38 = -(long)&local_88 - 8;
        uVar32 = -(long)&local_b8 - 8;
        puVar44 = (ulong *)(param_1 + 0x10);
        do {
          puVar16 = (ulong *)(uVar26 & 0xfffffffffffffffe);
          local_90 = 0;
          local_88 = (long **********)
                     CONCAT44(local_88._4_4_,
                              *(undefined4 *)(&DAT_710485f19c + (long)(int)puVar16[1] * 4));
          local_78 = 0;
          local_98 = ppplVar14;
          local_80 = uVar38;
          FUN_71038dee10(&local_80,(ulong *)&local_98,(long ****)pppppppppplVar23,param_4,param_5,
                         param_6,param_7,param_8);
          local_b8 = (long *********)CONCAT44(local_b8._4_4_,local_88._0_4_);
          local_a8 = 0;
          local_b0 = uVar32;
          FUN_71038dee10(&local_b0,&local_80,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                         param_7,param_8);
          uVar46 = *puVar13;
          if ((uVar46 & 1) == 0) {
            ppplVar20 = (long ***)
                        FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,param_6
                                       ,param_7,param_8);
            if (ppplVar20 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_c8 = local_c8 & 0xffffffff00000000;
                local_f0 = (long **********)&SUB_00000020;
                ppppppppppplVar24 = &local_f0;
                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
                if (((uVar27 & 1) != 0) &&
                   (ppplVar20 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                               param_5,param_6,param_7,param_8),
                   ppplVar20 != (long ***)0x0)) goto LAB_71038dd668;
              }
              ppplVar20 = (long ***)0x0;
            }
LAB_71038dd668:
            ppplVar20[2] = (long **)ppplVar20;
            ppplVar20[3] = (long **)0x0;
            *(undefined4 *)(ppplVar20 + 3) = 0;
            *ppplVar20 = (long **)0x0;
            ppplVar20[1] = (long **)ppplVar20;
            if (*(long *)(puVar12 + 8) * 0x18 != 0) {
              uVar46 = (long)puVar13 + uVar46;
              uVar27 = uVar46 + *(long *)(puVar12 + 8) * 0x18;
              do {
                while( true ) {
                  pppplVar51 = (long ****)(uVar46 & 0xfffffffffffffffe);
                  FUN_71038df040((long *)&local_f0,ppplVar20,pppplVar51,param_4,param_5,param_6,
                                 param_7,param_8);
                  if ((uVar46 & 1) != 0) break;
                  uVar46 = uVar46 + 0x18;
                  if (uVar46 == uVar27) goto LAB_71038dd704;
                }
                pppplVar9 = (long ****)pppplVar51[5];
                if ((long ****)pppplVar51[5] == (long ****)0x0) {
                  pppplVar51 = pppplVar51 + 3;
                  do {
                    pppplVar34 = pppplVar51;
                    pppplVar51 = (long ****)*pppplVar34;
                  } while (pppplVar34 == (long ****)pppplVar51[2]);
                  if ((long ****)pppplVar34[2] != pppplVar51) {
                    pppplVar34 = pppplVar51;
                  }
                }
                else {
                  do {
                    pppplVar34 = pppplVar9;
                    pppplVar9 = (long ****)pppplVar34[1];
                  } while ((long ****)pppplVar34[1] != (long ****)0x0);
                }
                uVar46 = (ulong)(pppplVar34 + -3) | 1;
              } while (uVar46 != uVar27);
            }
LAB_71038dd704:
            uVar46 = (ulong)ppplVar20 | 1;
            *puVar13 = uVar46;
          }
          pppppppppplVar25 = &local_b8;
          FUN_71038df040((long *)&local_f0,(long ***)(uVar46 & 0xfffffffffffffffe),
                         (long ****)pppppppppplVar25,param_4,param_5,param_6,param_7,param_8);
          pppppppppplVar23 = local_f0;
          if ((char)local_e8 != '\0') {
            *(long *)(puVar12 + 8) = *(long *)(puVar12 + 8) + 1;
          }
          uVar22 = extraout_x1_35;
          uVar46 = local_b0;
          if ((local_b0 & 1) != 0) {
            FUN_71038df350(&local_b0,extraout_x1_35,(long ****)pppppppppplVar25,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)(local_b0 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_36;
            uVar46 = uVar32;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dd794;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dd794:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_37;
            }
          }
          local_b0 = uVar46;
          local_a8 = 0;
          uVar46 = local_80;
          if ((local_80 & 1) != 0) {
            FUN_71038df350(&local_80,uVar22,(long ****)pppppppppplVar25,param_4,param_5,param_6,
                           param_7,param_8);
            puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_38;
            uVar46 = uVar38;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dd804;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dd804:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_39;
            }
          }
          local_80 = uVar46;
          local_78 = 0;
          if (((ulong)local_98 & 1) != 0) {
            FUN_71038df350((ulong *)&local_98,uVar22,(long ****)pppppppppplVar25,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)((ulong)local_98 & 0xfffffffffffffffe);
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dd870;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dd870:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
            }
          }
          uVar46 = *puVar16;
          if ((uVar46 & 1) == 0) {
            local_88 = (long **********)((long)puVar16 + uVar46);
          }
          else {
            pbVar41 = (byte *)(uVar46 & 0xfffffffffffffffe);
            if ((*pbVar41 & 1) == 0) {
              local_88 = (long **********)(pbVar41 + 1);
            }
            else {
              local_88 = *(long ***********)(pbVar41 + 0x10);
            }
          }
          local_90 = 0;
          local_78 = 0;
          local_98 = ppplVar14;
          local_80 = uVar38;
          FUN_71038df550(&local_80,(ulong *)&local_98,(long ****)pppppppppplVar25,param_4,param_5,
                         param_6,param_7,param_8);
          local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
          puVar50 = FUN_7103828690((ulong *)&local_b8,extraout_x1_40,(long ****)pppppppppplVar25,
                                   param_4,param_5,param_6,param_7,param_8);
          std::string::assign((char *)puVar50);
          local_a8 = 0;
          local_b0 = uVar32;
          FUN_71038df550(&local_b0,&local_80,(long ****)pppppppppplVar25,param_4,param_5,param_6,
                         param_7,param_8);
          uVar27 = (ulong)(pppppppppplVar23 + -3) & 0xfffffffffffffffe;
          puVar50 = (ulong *)(uVar27 + 8);
          uVar46 = *puVar50;
          if ((uVar46 & 1) == 0) {
            ppplVar20 = (long ***)
                        FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar25,param_4,param_5,param_6
                                       ,param_7,param_8);
            if (ppplVar20 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_c8 = local_c8 & 0xffffffff00000000;
                local_f0 = (long **********)&SUB_00000020;
                ppppppppppplVar24 = &local_f0;
                uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
                if (((uVar31 & 1) != 0) &&
                   (ppplVar20 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                               param_5,param_6,param_7,param_8),
                   ppplVar20 != (long ***)0x0)) goto LAB_71038dd960;
              }
              ppplVar20 = (long ***)0x0;
            }
LAB_71038dd960:
            ppplVar20[2] = (long **)ppplVar20;
            ppplVar20[3] = (long **)0x0;
            *(undefined4 *)(ppplVar20 + 3) = 0;
            *ppplVar20 = (long **)0x0;
            ppplVar20[1] = (long **)ppplVar20;
            lVar29 = *(long *)(uVar27 + 0x10) * 0x18;
            if (lVar29 != 0) {
              uVar46 = (long)puVar50 + uVar46;
              uVar31 = uVar46 + lVar29;
              do {
                while( true ) {
                  pppplVar51 = (long ****)(uVar46 & 0xfffffffffffffffe);
                  FUN_71038df770(&local_f0,ppplVar20,pppplVar51,param_4,param_5,param_6,param_7,
                                 param_8);
                  if ((uVar46 & 1) != 0) break;
                  uVar46 = uVar46 + 0x18;
                  if (uVar46 == uVar31) goto LAB_71038dd9f8;
                }
                pppplVar9 = (long ****)pppplVar51[5];
                if ((long ****)pppplVar51[5] == (long ****)0x0) {
                  pppplVar51 = pppplVar51 + 3;
                  do {
                    pppplVar34 = pppplVar51;
                    pppplVar51 = (long ****)*pppplVar34;
                  } while (pppplVar34 == (long ****)pppplVar51[2]);
                  if ((long ****)pppplVar34[2] != pppplVar51) {
                    pppplVar34 = pppplVar51;
                  }
                }
                else {
                  do {
                    pppplVar34 = pppplVar9;
                    pppplVar9 = (long ****)pppplVar34[1];
                  } while ((long ****)pppplVar34[1] != (long ****)0x0);
                }
                uVar46 = (ulong)(pppplVar34 + -3) | 1;
              } while (uVar46 != uVar31);
            }
LAB_71038dd9f8:
            uVar46 = (ulong)ppplVar20 | 1;
            *puVar50 = uVar46;
          }
          pppppppppplVar23 = &local_b8;
          FUN_71038df770(&local_f0,(long ***)(uVar46 & 0xfffffffffffffffe),
                         (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
          pppppppppplVar25 = local_f0;
          if ((char)local_e8 != '\0') {
            *(long *)(uVar27 + 0x10) = *(long *)(uVar27 + 0x10) + 1;
          }
          FUN_71038dfca0((ulong *)&local_b8,extraout_x1_41,(long ****)pppppppppplVar23,param_4,
                         param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_42;
          uVar46 = local_80;
          if ((local_80 & 1) != 0) {
            FUN_71038dfd80(&local_80,extraout_x1_42,(long ****)pppppppppplVar23,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_43;
            uVar46 = uVar38;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dda90;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dda90:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_44;
            }
          }
          local_80 = uVar46;
          local_78 = 0;
          ppplVar20 = local_98;
          if (((ulong)local_98 & 1) != 0) {
            FUN_71038dfd80((ulong *)&local_98,uVar22,(long ****)pppppppppplVar23,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)((ulong)local_98 & 0xfffffffffffffffe);
            ppplVar20 = ppplVar14;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038ddafc;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038ddafc:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
            }
          }
          local_98 = ppplVar20;
          uVar46 = puVar16[2];
          if ((uVar46 & 1) == 0) {
            uVar27 = (long)(puVar16 + 2) + uVar46;
            uVar46 = uVar27 + puVar16[3] * 0x10;
            if (uVar27 != uVar46) {
LAB_71038ddb50:
              uVar31 = (ulong)(pppppppppplVar25 + -3) & 0xfffffffffffffffe;
              puVar50 = (ulong *)(uVar31 + 8);
LAB_71038ddb64:
              do {
                uVar15 = *puVar44;
                puVar18 = (ulong *)(uVar27 & 0xfffffffffffffffe);
                uVar43 = (long)puVar44 + uVar15;
                if ((uVar15 & 1) != 0) {
                  uVar43 = uVar15 & 0xfffffffffffffffe;
                }
                puVar21 = (ulong *)(uVar43 + (ulong)(uint)puVar18[1] * 0x10);
                uVar43 = *puVar21;
                puVar3 = (uint *)((long)puVar21 + uVar43);
                if ((uVar43 & 1) != 0) {
                  puVar3 = (uint *)(uVar43 & 0xfffffffffffffffe);
                }
                uVar1 = *puVar3;
                bVar10 = FUN_710383b5d0(puVar18,&local_d8);
                if (((bVar10 & 1) == 0) &&
                   (bVar10 = FUN_710383b5d0(puVar18,local_70), (bVar10 & 1) == 0)) {
                  uVar52 = 3;
                  if ((uVar1 & 0xe000) != 0) {
                    uVar52 = 9;
                  }
                }
                else {
                  uVar52 = 8;
                }
                local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
                pppppppppplVar23 = &local_b8;
                FUN_71038deb20(pppplVar49,
                               (long ****)(*(long *)(puVar12 + 0xc) + 3U & 0xfffffffffffffffc),
                               (undefined1 *)pppppppppplVar23,param_4,param_5,param_6,param_7,
                               param_8);
                uVar15 = *puVar44;
                uVar43 = (long)puVar44 + uVar15;
                if ((uVar15 & 1) != 0) {
                  uVar43 = uVar15 & 0xfffffffffffffffe;
                }
                puVar21 = (ulong *)(uVar43 + (ulong)(uint)puVar18[1] * 0x10);
                uVar17 = *(ulong *)(puVar12 + 0xc);
                uVar43 = *puVar21;
                uVar15 = puVar21[1];
                pppppppppplVar25 = (long **********)((long)puVar21 + uVar43);
                if ((uVar43 & 1) != 0) {
                  pppppppppplVar25 = (long **********)(uVar43 & 0xfffffffffffffffe);
                }
                uVar43 = uVar17;
                uVar47 = uVar17 & 0xffffffff;
                uVar22 = extraout_x1_45;
                for (; uVar15 != 0; uVar15 = uVar15 - 1) {
                  pppppppppplVar23 = pppppppppplVar25;
                  FUN_71038deb20(pppplVar49,(long ****)(uVar43 + 1),(undefined1 *)pppppppppplVar25,
                                 param_4,param_5,param_6,param_7,param_8);
                  uVar43 = *(ulong *)(puVar12 + 0xc);
                  pppppppppplVar25 = (long **********)((long)pppppppppplVar25 + 1);
                  uVar47 = uVar43;
                  uVar22 = extraout_x1_46;
                }
                local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
                puVar21 = FUN_7103828690((ulong *)&local_b8,uVar22,(long ****)pppppppppplVar23,
                                         param_4,param_5,param_6,param_7,param_8);
                std::string::assign((char *)puVar21);
                iStack_a0 = (int)uVar47 - (int)uVar17;
                local_b0._0_2_ = CONCAT11(3,uVar52);
                local_b0 = local_b0 & 0xffffffff;
                local_a8 = CONCAT44((int)uVar17,(undefined4)local_a8);
                uVar43 = *puVar50;
                if ((uVar43 & 1) == 0) {
                  ppplVar20 = (long ***)
                              FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,
                                             param_6,param_7,param_8);
                  if (ppplVar20 == (long ***)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
                      local_88 = (long **********)&SUB_00000020;
                      ppppppppppplVar24 = &local_88;
                      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
                      if (((uVar15 & 1) != 0) &&
                         (ppplVar20 = (long ***)
                                      FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                                     param_5,param_6,param_7,param_8),
                         ppplVar20 != (long ***)0x0)) goto LAB_71038ddd14;
                    }
                    ppplVar20 = (long ***)0x0;
                  }
LAB_71038ddd14:
                  ppplVar20[2] = (long **)ppplVar20;
                  ppplVar20[3] = (long **)0x0;
                  *(undefined4 *)(ppplVar20 + 3) = 0;
                  *ppplVar20 = (long **)0x0;
                  ppplVar20[1] = (long **)ppplVar20;
                  lVar29 = *(long *)(uVar31 + 0x10) * 0x20;
                  if (lVar29 != 0) {
                    uVar43 = (long)puVar50 + uVar43;
                    uVar15 = uVar43 + lVar29;
                    do {
                      while( true ) {
                        pppplVar51 = (long ****)(uVar43 & 0xfffffffffffffffe);
                        FUN_71038dffc0(&local_88,ppplVar20,pppplVar51,param_4,param_5,param_6,
                                       param_7,param_8);
                        if ((uVar43 & 1) != 0) break;
                        uVar43 = uVar43 + 0x20;
                        if (uVar43 == uVar15) goto LAB_71038dddac;
                      }
                      pppplVar9 = (long ****)pppplVar51[6];
                      if ((long ****)pppplVar51[6] == (long ****)0x0) {
                        pppplVar51 = pppplVar51 + 4;
                        do {
                          pppplVar34 = pppplVar51;
                          pppplVar51 = (long ****)*pppplVar34;
                        } while (pppplVar34 == (long ****)pppplVar51[2]);
                        if ((long ****)pppplVar34[2] != pppplVar51) {
                          pppplVar34 = pppplVar51;
                        }
                      }
                      else {
                        do {
                          pppplVar34 = pppplVar9;
                          pppplVar9 = (long ****)pppplVar34[1];
                        } while ((long ****)pppplVar34[1] != (long ****)0x0);
                      }
                      uVar43 = (ulong)(pppplVar34 + -4) | 1;
                    } while (uVar43 != uVar15);
                  }
LAB_71038dddac:
                  uVar43 = (ulong)ppplVar20 | 1;
                  *puVar50 = uVar43;
                }
                pppppppppplVar23 = &local_b8;
                FUN_71038dffc0(&local_88,(long ***)(uVar43 & 0xfffffffffffffffe),
                               (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
                if ((char)local_80 != '\0') {
                  *(long *)(uVar31 + 0x10) = *(long *)(uVar31 + 0x10) + 1;
                }
                if ((((ulong)local_b8 & 1) != 0) &&
                   (pbVar41 = (byte *)((ulong)local_b8 & 0xfffffffffffffffe), pbVar41 != (byte *)0x0
                   )) {
                  if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
                    FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
                  }
                  FUN_710392eb40((ulong)pbVar41);
                }
                if ((uVar27 & 1) != 0) {
                  puVar21 = (ulong *)puVar18[4];
                  if ((ulong *)puVar18[4] == (ulong *)0x0) {
                    puVar18 = puVar18 + 2;
                    do {
                      puVar37 = puVar18;
                      puVar18 = (ulong *)*puVar37;
                    } while (puVar37 == (ulong *)puVar18[2]);
                    if ((ulong *)puVar37[2] != puVar18) {
                      puVar37 = puVar18;
                    }
                  }
                  else {
                    do {
                      puVar37 = puVar21;
                      puVar21 = (ulong *)puVar37[1];
                    } while ((ulong *)puVar37[1] != (ulong *)0x0);
                  }
                  uVar27 = (ulong)(puVar37 + -2) | 1;
                  if (uVar27 == uVar46) break;
                  goto LAB_71038ddb64;
                }
                uVar27 = uVar27 + 0x10;
              } while (uVar27 != uVar46);
            }
          }
          else {
            uVar27 = *(long *)((uVar46 & 0xfffffffffffffffe) + 8) - 0x10U | 1;
            uVar46 = uVar46 - 0x10 | 1;
            if (uVar27 != uVar46) goto LAB_71038ddb50;
          }
          if ((uVar26 & 1) == 0) {
            uVar26 = uVar26 + 0x20;
          }
          else {
            puVar50 = (ulong *)puVar16[6];
            if ((ulong *)puVar16[6] == (ulong *)0x0) {
              puVar16 = puVar16 + 4;
              do {
                puVar18 = puVar16;
                puVar16 = (ulong *)*puVar18;
              } while (puVar18 == (ulong *)puVar16[2]);
              if ((ulong *)puVar18[2] != puVar16) {
                puVar18 = puVar16;
              }
            }
            else {
              do {
                puVar18 = puVar50;
                puVar50 = (ulong *)puVar18[1];
              } while ((ulong *)puVar18[1] != (ulong *)0x0);
            }
            uVar26 = (ulong)(puVar18 + -4) | 1;
          }
        } while (uVar26 != uVar19);
      }
    }
    else {
      uVar26 = *(long *)((uVar19 & 0xfffffffffffffffe) + 8) - 0x20U | 1;
      uVar19 = uVar19 - 0x20 | 1;
      if (uVar26 != uVar19) goto LAB_71038dd55c;
    }
    local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
    pppppppppplVar23 = &local_b8;
    FUN_71038deb20(pppplVar49,(long ****)(*(long *)(puVar12 + 0xc) + 0x10),
                   (undefined1 *)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    if (sVar6 != 1) {
      if (sVar6 != 0) {
        return (long **********)0x0;
      }
      local_e8 = (long **********)0x0;
      local_e0 = (long **********)0x0;
      local_f0 = (long **********)0x0;
      uVar26 = *(ulong *)(param_1 + 6);
      uVar19 = (long)(param_1 + 6) + uVar26;
      if ((uVar26 & 1) != 0) {
        uVar19 = uVar26 & 0xfffffffffffffffe;
      }
      if (*(long *)(param_1 + 8) == 0) {
        return (long **********)0x0;
      }
      uVar26 = uVar19 + *(long *)(param_1 + 8) * 0x38;
      uVar46 = -(long)&local_d8;
      uVar32 = -(long)&local_88 - 8;
      uVar38 = -(long)&local_b8 - 8;
      do {
        puVar12 = (undefined4 *)
                  FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                                 param_7,param_8);
        uVar22 = extraout_x1;
        if (puVar12 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long **********)((ulong)local_88 & 0xffffffff00000000);
            local_b8 = (long *********)&DAT_00000038;
            pppppppppplVar23 = &local_b8;
            auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            uVar22 = auVar53._8_8_;
            if (((auVar53._0_8_ & 1) != 0) &&
               (puVar12 = (undefined4 *)
                          FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,
                                         param_6,param_7,param_8), uVar22 = extraout_x1_00,
               puVar12 != (undefined4 *)0x0)) goto LAB_71038db7fc;
          }
          puVar12 = (undefined4 *)0x0;
        }
LAB_71038db7fc:
        *(undefined8 *)(puVar12 + 2) = 0;
        *(long *)(puVar12 + 4) = (long)&DAT_710455dba0 - (long)(puVar12 + 4);
        *(long *)(puVar12 + 6) = -0x18 - (long)puVar12;
        *(undefined8 *)(puVar12 + 8) = 0;
        pppplVar49 = (long ****)(puVar12 + 10);
        *pppplVar49 = (long ***)0x1;
        *puVar12 = 0x414e494d;
        puVar12[1] = 1;
        *(undefined8 *)(puVar12 + 0xc) = 0;
        puVar13 = FUN_7103828690((ulong *)(puVar12 + 4),uVar22,(long ****)pppppppppplVar23,param_4,
                                 param_5,param_6,param_7,param_8);
        std::string::assign((char *)puVar13);
        puVar12[2] = *(undefined4 *)(uVar19 + 8);
        puVar12[3] = 0x30002;
        local_70[0] = (long)&DAT_710455dba0 - (long)local_70;
        puVar13 = FUN_7103828690(local_70,extraout_x1_01,(long ****)pppppppppplVar23,param_4,param_5
                                 ,param_6,param_7,param_8);
        std::string::assign((char *)puVar13);
        local_c8 = (long)&DAT_710455dba0 - (long)&local_c8;
        puVar13 = FUN_7103828690(&local_c8,extraout_x1_02,(long ****)pppppppppplVar23,param_4,
                                 param_5,param_6,param_7,param_8);
        std::string::assign((char *)puVar13);
        uVar27 = *(ulong *)(uVar19 + 0x18);
        if ((uVar27 & 1) == 0) {
          uVar31 = (long)(uVar19 + 0x18) + uVar27;
          uVar27 = uVar31 + *(long *)(uVar19 + 0x20) * 0x20;
        }
        else {
          uVar31 = *(long *)((uVar27 & 0xfffffffffffffffe) + 8) - 0x20U | 1;
          uVar27 = uVar27 - 0x20 | 1;
        }
        if (uVar31 != uVar27) {
          puVar13 = (ulong *)(puVar12 + 6);
LAB_71038db928:
          do {
            puVar44 = (ulong *)(uVar31 & 0xfffffffffffffffe);
            uStack_d0 = 0;
            local_88 = (long **********)
                       CONCAT44(local_88._4_4_,
                                *(undefined4 *)(&DAT_710485f19c + (long)(int)puVar44[1] * 4));
            local_78 = 0;
            local_d8 = uVar46;
            local_80 = uVar32;
            FUN_71038dee10(&local_80,&local_d8,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                           param_7,param_8);
            local_b8 = (long *********)CONCAT44(local_b8._4_4_,local_88._0_4_);
            local_a8 = 0;
            local_b0 = uVar38;
            FUN_71038dee10(&local_b0,&local_80,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                           param_7,param_8);
            uVar43 = *puVar13;
            if ((uVar43 & 1) == 0) {
              ppplVar14 = (long ***)
                          FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,
                                         param_6,param_7,param_8);
              if (ppplVar14 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_bc = 0;
                  local_98 = (long ***)&SUB_00000020;
                  pppplVar51 = &local_98;
                  uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_bc);
                  if (((uVar15 & 1) != 0) &&
                     (ppplVar14 = (long ***)
                                  FUN_710392e290(0x10,0x20,pppplVar51,param_4,param_5,param_6,
                                                 param_7,param_8), ppplVar14 != (long ***)0x0))
                  goto LAB_71038db9e0;
                }
                ppplVar14 = (long ***)0x0;
              }
LAB_71038db9e0:
              ppplVar14[2] = (long **)ppplVar14;
              ppplVar14[3] = (long **)0x0;
              *(undefined4 *)(ppplVar14 + 3) = 0;
              *ppplVar14 = (long **)0x0;
              ppplVar14[1] = (long **)ppplVar14;
              if (*(long *)(puVar12 + 8) * 0x18 != 0) {
                uVar43 = (long)puVar13 + uVar43;
                uVar15 = uVar43 + *(long *)(puVar12 + 8) * 0x18;
                do {
                  while( true ) {
                    pppplVar51 = (long ****)(uVar43 & 0xfffffffffffffffe);
                    FUN_71038df040((long *)&local_98,ppplVar14,pppplVar51,param_4,param_5,param_6,
                                   param_7,param_8);
                    if ((uVar43 & 1) != 0) break;
                    uVar43 = uVar43 + 0x18;
                    if (uVar43 == uVar15) goto LAB_71038dba7c;
                  }
                  pppplVar9 = (long ****)pppplVar51[5];
                  if ((long ****)pppplVar51[5] == (long ****)0x0) {
                    pppplVar51 = pppplVar51 + 3;
                    do {
                      pppplVar34 = pppplVar51;
                      pppplVar51 = (long ****)*pppplVar34;
                    } while (pppplVar34 == (long ****)pppplVar51[2]);
                    if ((long ****)pppplVar34[2] != pppplVar51) {
                      pppplVar34 = pppplVar51;
                    }
                  }
                  else {
                    do {
                      pppplVar34 = pppplVar9;
                      pppplVar9 = (long ****)pppplVar34[1];
                    } while ((long ****)pppplVar34[1] != (long ****)0x0);
                  }
                  uVar43 = (ulong)(pppplVar34 + -3) | 1;
                } while (uVar43 != uVar15);
              }
LAB_71038dba7c:
              uVar43 = (ulong)ppplVar14 | 1;
              *puVar13 = uVar43;
            }
            pppppppppplVar23 = &local_b8;
            FUN_71038df040((long *)&local_98,(long ***)(uVar43 & 0xfffffffffffffffe),
                           (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
            ppplVar14 = local_98;
            if ((char)local_90 != '\0') {
              *(long *)(puVar12 + 8) = *(long *)(puVar12 + 8) + 1;
            }
            uVar22 = extraout_x1_03;
            uVar43 = local_b0;
            if ((local_b0 & 1) != 0) {
              FUN_71038df350(&local_b0,extraout_x1_03,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
              puVar4 = (undefined8 *)(local_b0 & 0xfffffffffffffffe);
              uVar22 = extraout_x1_04;
              uVar43 = uVar38;
              if (puVar4 != (undefined8 *)0x0) {
                puVar28 = (undefined8 *)*puVar4;
                while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                  while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                    puVar30[1] = puVar28[2];
                    puVar28[2] = puVar30;
                    puVar30 = puVar28;
                    if (puVar28 == (undefined8 *)0x0) goto LAB_71038dbb0c;
                  }
                  puVar28 = (undefined8 *)puVar30[2];
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                }
LAB_71038dbb0c:
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                FUN_710392eb40((ulong)puVar4);
                uVar22 = extraout_x1_05;
              }
            }
            local_b0 = uVar43;
            local_a8 = 0;
            uVar43 = local_80;
            if ((local_80 & 1) != 0) {
              FUN_71038df350(&local_80,uVar22,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                             param_7,param_8);
              puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
              uVar22 = extraout_x1_06;
              uVar43 = uVar32;
              if (puVar4 != (undefined8 *)0x0) {
                puVar28 = (undefined8 *)*puVar4;
                while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                  while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                    puVar30[1] = puVar28[2];
                    puVar28[2] = puVar30;
                    puVar30 = puVar28;
                    if (puVar28 == (undefined8 *)0x0) goto LAB_71038dbb7c;
                  }
                  puVar28 = (undefined8 *)puVar30[2];
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                }
LAB_71038dbb7c:
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                FUN_710392eb40((ulong)puVar4);
                uVar22 = extraout_x1_07;
              }
            }
            local_80 = uVar43;
            local_78 = 0;
            if ((local_d8 & 1) != 0) {
              FUN_71038df350(&local_d8,uVar22,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                             param_7,param_8);
              puVar4 = (undefined8 *)(local_d8 & 0xfffffffffffffffe);
              if (puVar4 != (undefined8 *)0x0) {
                puVar28 = (undefined8 *)*puVar4;
                while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                  while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                    puVar30[1] = puVar28[2];
                    puVar28[2] = puVar30;
                    puVar30 = puVar28;
                    if (puVar28 == (undefined8 *)0x0) goto LAB_71038dbbec;
                  }
                  puVar28 = (undefined8 *)puVar30[2];
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                }
LAB_71038dbbec:
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                FUN_710392eb40((ulong)puVar4);
              }
            }
            uVar43 = *puVar44;
            if ((uVar43 & 1) == 0) {
              local_88 = (long **********)((long)puVar44 + uVar43);
            }
            else {
              pbVar41 = (byte *)(uVar43 & 0xfffffffffffffffe);
              if ((*pbVar41 & 1) == 0) {
                local_88 = (long **********)(pbVar41 + 1);
              }
              else {
                local_88 = *(long ***********)(pbVar41 + 0x10);
              }
            }
            uStack_d0 = 0;
            local_78 = 0;
            local_d8 = uVar46;
            local_80 = uVar32;
            FUN_71038df550(&local_80,&local_d8,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                           param_7,param_8);
            local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
            puVar16 = FUN_7103828690((ulong *)&local_b8,extraout_x1_08,(long ****)pppppppppplVar23,
                                     param_4,param_5,param_6,param_7,param_8);
            std::string::assign((char *)puVar16);
            local_a8 = 0;
            local_b0 = uVar38;
            FUN_71038df550(&local_b0,&local_80,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                           param_7,param_8);
            uVar15 = (ulong)(ppplVar14 + -3) & 0xfffffffffffffffe;
            puVar16 = (ulong *)(uVar15 + 8);
            uVar43 = *puVar16;
            if ((uVar43 & 1) == 0) {
              ppplVar14 = (long ***)
                          FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,
                                         param_6,param_7,param_8);
              if (ppplVar14 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_bc = 0;
                  local_98 = (long ***)&SUB_00000020;
                  pppplVar51 = &local_98;
                  uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_bc);
                  if (((uVar17 & 1) != 0) &&
                     (ppplVar14 = (long ***)
                                  FUN_710392e290(0x10,0x20,pppplVar51,param_4,param_5,param_6,
                                                 param_7,param_8), ppplVar14 != (long ***)0x0))
                  goto LAB_71038dbcdc;
                }
                ppplVar14 = (long ***)0x0;
              }
LAB_71038dbcdc:
              ppplVar14[2] = (long **)ppplVar14;
              ppplVar14[3] = (long **)0x0;
              *(undefined4 *)(ppplVar14 + 3) = 0;
              *ppplVar14 = (long **)0x0;
              ppplVar14[1] = (long **)ppplVar14;
              lVar29 = *(long *)(uVar15 + 0x10) * 0x18;
              if (lVar29 != 0) {
                uVar43 = (long)puVar16 + uVar43;
                uVar17 = uVar43 + lVar29;
                do {
                  while( true ) {
                    pppplVar51 = (long ****)(uVar43 & 0xfffffffffffffffe);
                    FUN_71038df770(&local_98,ppplVar14,pppplVar51,param_4,param_5,param_6,param_7,
                                   param_8);
                    if ((uVar43 & 1) != 0) break;
                    uVar43 = uVar43 + 0x18;
                    if (uVar43 == uVar17) goto LAB_71038dbd74;
                  }
                  pppplVar9 = (long ****)pppplVar51[5];
                  if ((long ****)pppplVar51[5] == (long ****)0x0) {
                    pppplVar51 = pppplVar51 + 3;
                    do {
                      pppplVar34 = pppplVar51;
                      pppplVar51 = (long ****)*pppplVar34;
                    } while (pppplVar34 == (long ****)pppplVar51[2]);
                    if ((long ****)pppplVar34[2] != pppplVar51) {
                      pppplVar34 = pppplVar51;
                    }
                  }
                  else {
                    do {
                      pppplVar34 = pppplVar9;
                      pppplVar9 = (long ****)pppplVar34[1];
                    } while ((long ****)pppplVar34[1] != (long ****)0x0);
                  }
                  uVar43 = (ulong)(pppplVar34 + -3) | 1;
                } while (uVar43 != uVar17);
              }
LAB_71038dbd74:
              uVar43 = (ulong)ppplVar14 | 1;
              *puVar16 = uVar43;
            }
            pppppppppplVar23 = &local_b8;
            FUN_71038df770(&local_98,(long ***)(uVar43 & 0xfffffffffffffffe),
                           (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
            ppplVar14 = local_98;
            if ((char)local_90 != '\0') {
              *(long *)(uVar15 + 0x10) = *(long *)(uVar15 + 0x10) + 1;
            }
            FUN_71038dfca0((ulong *)&local_b8,extraout_x1_09,(long ****)pppppppppplVar23,param_4,
                           param_5,param_6,param_7,param_8);
            uVar22 = extraout_x1_10;
            uVar43 = local_80;
            if ((local_80 & 1) != 0) {
              FUN_71038dfd80(&local_80,extraout_x1_10,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
              puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
              uVar22 = extraout_x1_11;
              uVar43 = uVar32;
              if (puVar4 != (undefined8 *)0x0) {
                puVar28 = (undefined8 *)*puVar4;
                while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                  while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                    puVar30[1] = puVar28[2];
                    puVar28[2] = puVar30;
                    puVar30 = puVar28;
                    if (puVar28 == (undefined8 *)0x0) goto LAB_71038dbe10;
                  }
                  puVar28 = (undefined8 *)puVar30[2];
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                }
LAB_71038dbe10:
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                FUN_710392eb40((ulong)puVar4);
                uVar22 = extraout_x1_12;
              }
            }
            local_80 = uVar43;
            local_78 = 0;
            uVar43 = local_d8;
            if ((local_d8 & 1) != 0) {
              FUN_71038dfd80(&local_d8,uVar22,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                             param_7,param_8);
              puVar4 = (undefined8 *)(local_d8 & 0xfffffffffffffffe);
              uVar43 = uVar46;
              if (puVar4 != (undefined8 *)0x0) {
                puVar28 = (undefined8 *)*puVar4;
                while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                  while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                    puVar30[1] = puVar28[2];
                    puVar28[2] = puVar30;
                    puVar30 = puVar28;
                    if (puVar28 == (undefined8 *)0x0) goto LAB_71038dbe80;
                  }
                  puVar28 = (undefined8 *)puVar30[2];
                  *puVar30 = 0;
                  puVar30[1] = 0;
                  puVar30[2] = 0;
                }
LAB_71038dbe80:
                puVar4[1] = 0;
                puVar4[2] = 0;
                *puVar4 = 0;
                FUN_710392eb40((ulong)puVar4);
              }
            }
            local_d8 = uVar43;
            uVar43 = puVar44[2];
            if ((uVar43 & 1) == 0) {
              uVar15 = (long)(puVar44 + 2) + uVar43;
              uVar43 = uVar15 + puVar44[3] * 0x10;
              if (uVar15 != uVar43) {
LAB_71038dbed4:
                uVar17 = (ulong)(ppplVar14 + -3) & 0xfffffffffffffffe;
                puVar16 = (ulong *)(uVar17 + 8);
LAB_71038dbee8:
                do {
                  puVar50 = (ulong *)(uVar15 & 0xfffffffffffffffe);
                  bVar10 = FUN_710383b5d0(puVar50,local_70);
                  if ((bVar10 & 1) == 0) {
                    bVar10 = FUN_710383b5d0(puVar50,&local_c8);
                    uVar52 = 8;
                    if ((bVar10 & 1) == 0) {
                      uVar52 = 3;
                    }
                  }
                  else {
                    uVar52 = 8;
                  }
                  local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
                  pppppppppplVar23 = &local_b8;
                  FUN_71038deb20(pppplVar49,
                                 (long ****)(*(long *)(puVar12 + 0xc) + 3U & 0xfffffffffffffffc),
                                 (undefined1 *)pppppppppplVar23,param_4,param_5,param_6,param_7,
                                 param_8);
                  uVar33 = *(ulong *)(uVar19 + 0x28);
                  uVar47 = (long)(uVar19 + 0x28) + uVar33;
                  if ((uVar33 & 1) != 0) {
                    uVar47 = uVar33 & 0xfffffffffffffffe;
                  }
                  puVar18 = (ulong *)(uVar47 + (ulong)(uint)puVar50[1] * 0x10);
                  uVar45 = *(ulong *)(puVar12 + 0xc);
                  uVar47 = *puVar18;
                  uVar33 = puVar18[1];
                  pppppppppplVar25 = (long **********)((long)puVar18 + uVar47);
                  if ((uVar47 & 1) != 0) {
                    pppppppppplVar25 = (long **********)(uVar47 & 0xfffffffffffffffe);
                  }
                  uVar47 = uVar45;
                  uVar7 = uVar45 & 0xffffffff;
                  uVar22 = extraout_x1_13;
                  for (; uVar33 != 0; uVar33 = uVar33 - 1) {
                    pppppppppplVar23 = pppppppppplVar25;
                    FUN_71038deb20(pppplVar49,(long ****)(uVar47 + 1),(undefined1 *)pppppppppplVar25
                                   ,param_4,param_5,param_6,param_7,param_8);
                    uVar47 = *(ulong *)(puVar12 + 0xc);
                    pppppppppplVar25 = (long **********)((long)pppppppppplVar25 + 1);
                    uVar7 = uVar47;
                    uVar22 = extraout_x1_14;
                  }
                  local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
                  puVar18 = FUN_7103828690((ulong *)&local_b8,uVar22,(long ****)pppppppppplVar23,
                                           param_4,param_5,param_6,param_7,param_8);
                  std::string::assign((char *)puVar18);
                  iStack_a0 = (int)uVar7 - (int)uVar45;
                  local_a8 = CONCAT44((int)uVar45,(undefined4)local_a8);
                  local_b0._0_2_ = CONCAT11(3,uVar52);
                  local_b0 = local_b0 & 0xffffffff;
                  uVar47 = *puVar16;
                  if ((uVar47 & 1) == 0) {
                    ppplVar14 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5
                                               ,param_6,param_7,param_8);
                    if (ppplVar14 == (long ***)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_98 = (long ***)((ulong)local_98 & 0xffffffff00000000);
                        local_88 = (long **********)&SUB_00000020;
                        ppppppppppplVar24 = &local_88;
                        uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                        if (((uVar33 & 1) != 0) &&
                           (ppplVar14 = (long ***)
                                        FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,
                                                       param_4,param_5,param_6,param_7,param_8),
                           ppplVar14 != (long ***)0x0)) goto LAB_71038dc060;
                      }
                      ppplVar14 = (long ***)0x0;
                    }
LAB_71038dc060:
                    ppplVar14[2] = (long **)ppplVar14;
                    ppplVar14[3] = (long **)0x0;
                    *(undefined4 *)(ppplVar14 + 3) = 0;
                    *ppplVar14 = (long **)0x0;
                    ppplVar14[1] = (long **)ppplVar14;
                    lVar29 = *(long *)(uVar17 + 0x10) * 0x20;
                    if (lVar29 != 0) {
                      uVar47 = (long)puVar16 + uVar47;
                      uVar33 = uVar47 + lVar29;
                      do {
                        while( true ) {
                          pppplVar51 = (long ****)(uVar47 & 0xfffffffffffffffe);
                          FUN_71038dffc0(&local_88,ppplVar14,pppplVar51,param_4,param_5,param_6,
                                         param_7,param_8);
                          if ((uVar47 & 1) != 0) break;
                          uVar47 = uVar47 + 0x20;
                          if (uVar47 == uVar33) goto LAB_71038dc0fc;
                        }
                        pppplVar9 = (long ****)pppplVar51[6];
                        if ((long ****)pppplVar51[6] == (long ****)0x0) {
                          pppplVar51 = pppplVar51 + 4;
                          do {
                            pppplVar34 = pppplVar51;
                            pppplVar51 = (long ****)*pppplVar34;
                          } while (pppplVar34 == (long ****)pppplVar51[2]);
                          if ((long ****)pppplVar34[2] != pppplVar51) {
                            pppplVar34 = pppplVar51;
                          }
                        }
                        else {
                          do {
                            pppplVar34 = pppplVar9;
                            pppplVar9 = (long ****)pppplVar34[1];
                          } while ((long ****)pppplVar34[1] != (long ****)0x0);
                        }
                        uVar47 = (ulong)(pppplVar34 + -4) | 1;
                      } while (uVar47 != uVar33);
                    }
LAB_71038dc0fc:
                    uVar47 = (ulong)ppplVar14 | 1;
                    *puVar16 = uVar47;
                  }
                  pppppppppplVar23 = &local_b8;
                  FUN_71038dffc0(&local_88,(long ***)(uVar47 & 0xfffffffffffffffe),
                                 (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8
                                );
                  if ((char)local_80 != '\0') {
                    *(long *)(uVar17 + 0x10) = *(long *)(uVar17 + 0x10) + 1;
                  }
                  if ((((ulong)local_b8 & 1) != 0) &&
                     (pbVar41 = (byte *)((ulong)local_b8 & 0xfffffffffffffffe),
                     pbVar41 != (byte *)0x0)) {
                    if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
                      FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
                    }
                    FUN_710392eb40((ulong)pbVar41);
                  }
                  if ((uVar15 & 1) != 0) {
                    puVar18 = (ulong *)puVar50[4];
                    if ((ulong *)puVar50[4] == (ulong *)0x0) {
                      puVar50 = puVar50 + 2;
                      do {
                        puVar21 = puVar50;
                        puVar50 = (ulong *)*puVar21;
                      } while (puVar21 == (ulong *)puVar50[2]);
                      if ((ulong *)puVar21[2] != puVar50) {
                        puVar21 = puVar50;
                      }
                    }
                    else {
                      do {
                        puVar21 = puVar18;
                        puVar18 = (ulong *)puVar21[1];
                      } while ((ulong *)puVar21[1] != (ulong *)0x0);
                    }
                    uVar15 = (ulong)(puVar21 + -2) | 1;
                    if (uVar15 == uVar43) break;
                    goto LAB_71038dbee8;
                  }
                  uVar15 = uVar15 + 0x10;
                } while (uVar15 != uVar43);
              }
            }
            else {
              uVar15 = *(long *)((uVar43 & 0xfffffffffffffffe) + 8) - 0x10U | 1;
              uVar43 = uVar43 - 0x10 | 1;
              if (uVar15 != uVar43) goto LAB_71038dbed4;
            }
            if ((uVar31 & 1) != 0) {
              puVar16 = (ulong *)puVar44[6];
              if ((ulong *)puVar44[6] == (ulong *)0x0) {
                puVar44 = puVar44 + 4;
                do {
                  puVar50 = puVar44;
                  puVar44 = (ulong *)*puVar50;
                } while (puVar50 == (ulong *)puVar44[2]);
                if ((ulong *)puVar50[2] != puVar44) {
                  puVar50 = puVar44;
                }
              }
              else {
                do {
                  puVar50 = puVar16;
                  puVar16 = (ulong *)puVar50[1];
                } while ((ulong *)puVar50[1] != (ulong *)0x0);
              }
              uVar31 = (ulong)(puVar50 + -4) | 1;
              if (uVar31 == uVar27) break;
              goto LAB_71038db928;
            }
            uVar31 = uVar31 + 0x20;
          } while (uVar31 != uVar27);
        }
        local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
        FUN_71038deb20(pppplVar49,(long ****)(*(long *)(puVar12 + 0xc) + 0x10),
                       (undefined1 *)&local_b8,param_4,param_5,param_6,param_7,param_8);
        iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,
                                param_7,param_8);
        if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_b8 = (long *********)&DAT_00000028;
          uVar27 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
          if ((uVar27 & 1) != 0) {
            FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                           param_8);
          }
        }
        pppppppppplVar23 = local_88;
        nu::VirtualAllocHook(0x28,0x10,local_88);
        pppppppppplVar25 = local_88;
        FUN_71037c3a70(local_88);
        *pppppppppplVar25 = (long *********)&PTR_FUN_71052922f8;
        *(undefined4 *)(pppppppppplVar25 + 2) = 0;
        pppppppppplVar25[3] = (long *********)0x0;
        pppppppppplVar25[4] = (long *********)0x0;
        FUN_71038e0b10((long)pppppppppplVar25,puVar12,pppppppppplVar23,param_4,param_5,param_6,
                       param_7,param_8);
        if (local_e8 == local_e0) {
          lVar29 = (long)local_e8 - (long)local_f0 >> 3;
          uVar27 = lVar29 + 1;
          if (uVar27 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_e0 - (long)local_f0 >> 3) < 0xfffffffffffffff) {
            uVar31 = (long)local_e0 - (long)local_f0 >> 2;
            if (uVar27 <= uVar31) {
              uVar27 = uVar31;
            }
            if (uVar27 != 0) goto LAB_71038dc384;
            pppppppppplVar39 = (long **********)0x0;
          }
          else {
            uVar27 = 0x1fffffffffffffff;
LAB_71038dc384:
            ppppppppplVar48 = (long *********)(uVar27 << 3);
            iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)ppppppppplVar48,param_4,param_5,
                                    param_6,param_7,param_8);
            if (((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_b8 = ppppppppplVar48,
               uVar31 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8),
               (uVar31 & 1) != 0)) {
              FUN_710392e1f0(&local_88,0x10,(long ****)ppppppppplVar48,param_4,param_5,param_6,
                             param_7,param_8);
            }
            pppppppppplVar23 = local_88;
            nu::VirtualAllocHook((ulong)ppppppppplVar48,0x10,local_88);
            pppppppppplVar39 = local_88;
          }
          pppppppppplVar8 = local_f0;
          pppppppppplVar40 = pppppppppplVar39 + lVar29;
          local_e0 = pppppppppplVar39 + uVar27;
          pppppppppplVar35 = pppppppppplVar40 + 1;
          *pppppppppplVar40 = (long *********)pppppppppplVar25;
          if (local_e8 != local_f0) {
            uVar31 = (long)(local_e8 + -1) - (long)local_f0;
            uVar43 = uVar31 >> 3;
            uVar1 = (int)uVar43 + 1;
            uVar27 = (ulong)uVar1 & 3;
            if ((uVar1 & 3) != 0) {
              lVar42 = -uVar27;
              pppppppppplVar25 = local_e8 + -1;
              do {
                pppppppppplVar40 = pppppppppplVar40 + -1;
                lVar42 = lVar42 + 1;
                *pppppppppplVar40 = *pppppppppplVar25;
                pppppppppplVar25 = pppppppppplVar25 + -1;
              } while (lVar42 != 0);
              pppppppppplVar40 = pppppppppplVar39 + (lVar29 - uVar27);
              local_e8 = local_e8 + -uVar27;
            }
            if (0x17 < uVar31) {
              pbVar41 = (byte *)((long)local_e8 + (-0x20 - (long)local_f0));
              if (((uint)pbVar41 >> 5 & 1) == 0) {
                pppppppppplVar40[-1] = local_e8[-1];
                pppppppppplVar40[-2] = local_e8[-2];
                pppppppppplVar40[-3] = local_e8[-3];
                local_e8 = local_e8 + -4;
                pppppppppplVar40[-4] = *local_e8;
                pppppppppplVar40 = pppppppppplVar40 + -4;
              }
              if ((byte *)0x1f < pbVar41) {
                pppppppppplVar40 = pppppppppplVar40 + -4;
                do {
                  pppppppppplVar40[3] = local_e8[-1];
                  pppppppppplVar40[2] = local_e8[-2];
                  pppppppppplVar40[1] = local_e8[-3];
                  *pppppppppplVar40 = local_e8[-4];
                  pppppppppplVar40[-1] = local_e8[-5];
                  pppppppppplVar40[-2] = local_e8[-6];
                  pppppppppplVar40[-3] = local_e8[-7];
                  local_e8 = local_e8 + -8;
                  pppppppppplVar40[-4] = *local_e8;
                  pppppppppplVar40 = pppppppppplVar40 + -8;
                } while (local_f0 != local_e8);
              }
            }
            pppppppppplVar40 = pppppppppplVar39 + lVar29 + ~uVar43;
          }
          bVar5 = local_f0 != (long **********)0x0;
          local_f0 = pppppppppplVar40;
          local_e8 = pppppppppplVar35;
          if (bVar5) {
            nu::VirtualFreeHook(pppppppppplVar8);
            FUN_710392eb40((ulong)pppppppppplVar8);
          }
        }
        else {
          *local_e8 = (long *********)pppppppppplVar25;
          local_e8 = local_e8 + 1;
        }
        if (((local_c8 & 1) != 0) &&
           (pbVar41 = (byte *)(local_c8 & 0xfffffffffffffffe), pbVar41 != (byte *)0x0)) {
          if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
          }
          FUN_710392eb40((ulong)pbVar41);
        }
        if (((local_70[0] & 1) != 0) &&
           (pbVar41 = (byte *)(local_70[0] & 0xfffffffffffffffe), pbVar41 != (byte *)0x0)) {
          if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
          }
          FUN_710392eb40((ulong)pbVar41);
        }
        pppppppppplVar25 = local_f0;
        uVar19 = uVar19 + 0x38;
      } while (uVar19 != uVar26);
      if (local_f0 == local_e8) {
        local_160 = (long **********)0x0;
        if (local_e8 == (long **********)0x0) {
          return (long **********)0x0;
        }
      }
      else {
        local_160 = (long **********)*local_f0;
      }
      local_e8 = local_f0;
      nu::VirtualFreeHook(local_f0);
      goto LAB_71038ddf78;
    }
    iVar11 = FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_b8 = (long *********)&DAT_00000028;
      uVar19 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_b8);
      if ((uVar19 & 1) != 0) {
        FUN_710392e1f0(&local_88,0x10,(long ****)&DAT_00000028,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    pppppppppplVar23 = local_88;
    nu::VirtualAllocHook(0x28,0x10,local_88);
    local_160 = local_88;
    FUN_71037c3a70(local_88);
    *local_160 = (long *********)&PTR_FUN_71052922f8;
    *(undefined4 *)(local_160 + 2) = 0;
    local_160[3] = (long *********)0x0;
    local_160[4] = (long *********)0x0;
    puVar12 = (undefined4 *)
              FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,
                             param_8);
    uVar22 = extraout_x1_15;
    if (puVar12 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long **********)((ulong)local_88 & 0xffffffff00000000);
        local_b8 = (long *********)&DAT_00000038;
        pppppppppplVar23 = &local_b8;
        auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        uVar22 = auVar53._8_8_;
        if (((auVar53._0_8_ & 1) != 0) &&
           (puVar12 = (undefined4 *)
                      FUN_710392e290(0x10,0x38,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                                     param_7,param_8), uVar22 = extraout_x1_16,
           puVar12 != (undefined4 *)0x0)) goto LAB_71038dc8a0;
      }
      puVar12 = (undefined4 *)0x0;
    }
LAB_71038dc8a0:
    *(undefined8 *)(puVar12 + 2) = 0;
    *(long *)(puVar12 + 4) = (long)&DAT_710455dba0 - (long)(puVar12 + 4);
    *(long *)(puVar12 + 6) = -0x18 - (long)puVar12;
    *(undefined8 *)(puVar12 + 8) = 0;
    pppplVar49 = (long ****)(puVar12 + 10);
    *pppplVar49 = (long ***)0x1;
    *(undefined8 *)(puVar12 + 0xc) = 0;
    *puVar12 = 0x414e494d;
    puVar12[1] = 0x10001;
    puVar13 = FUN_7103828690((ulong *)(puVar12 + 4),uVar22,(long ****)pppppppppplVar23,param_4,
                             param_5,param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    puVar12[2] = param_1[8];
    puVar12[3] = 0x30002;
    local_d8 = (long)&DAT_710455dba0 - (long)&local_d8;
    puVar13 = FUN_7103828690(&local_d8,extraout_x1_19,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    local_70[0] = (long)&DAT_710455dba0 - (long)local_70;
    puVar13 = FUN_7103828690(local_70,extraout_x1_20,(long ****)pppppppppplVar23,param_4,param_5,
                             param_6,param_7,param_8);
    std::string::assign((char *)puVar13);
    uVar19 = *(ulong *)(param_1 + 0xc);
    if ((uVar19 & 1) == 0) {
      uVar26 = (long)(param_1 + 0xc) + uVar19;
      uVar19 = uVar26 + *(long *)(param_1 + 0xe) * 0x20;
      if (uVar26 != uVar19) {
LAB_71038dcb10:
        puVar13 = (ulong *)(puVar12 + 6);
        ppplVar14 = (long ***)-(long)&local_98;
        uVar38 = -(long)&local_88 - 8;
        uVar32 = -(long)&local_b8 - 8;
        puVar44 = (ulong *)(param_1 + 0x10);
        do {
          puVar16 = (ulong *)(uVar26 & 0xfffffffffffffffe);
          local_90 = 0;
          local_88 = (long **********)
                     CONCAT44(local_88._4_4_,
                              *(undefined4 *)(&DAT_710485f19c + (long)(int)puVar16[1] * 4));
          local_78 = 0;
          local_98 = ppplVar14;
          local_80 = uVar38;
          FUN_71038dee10(&local_80,(ulong *)&local_98,(long ****)pppppppppplVar23,param_4,param_5,
                         param_6,param_7,param_8);
          local_b8 = (long *********)CONCAT44(local_b8._4_4_,local_88._0_4_);
          local_a8 = 0;
          local_b0 = uVar32;
          FUN_71038dee10(&local_b0,&local_80,(long ****)pppppppppplVar23,param_4,param_5,param_6,
                         param_7,param_8);
          uVar46 = *puVar13;
          if ((uVar46 & 1) == 0) {
            ppplVar20 = (long ***)
                        FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,param_6
                                       ,param_7,param_8);
            if (ppplVar20 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_c8 = local_c8 & 0xffffffff00000000;
                local_f0 = (long **********)&SUB_00000020;
                ppppppppppplVar24 = &local_f0;
                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
                if (((uVar27 & 1) != 0) &&
                   (ppplVar20 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                               param_5,param_6,param_7,param_8),
                   ppplVar20 != (long ***)0x0)) goto LAB_71038dcc18;
              }
              ppplVar20 = (long ***)0x0;
            }
LAB_71038dcc18:
            ppplVar20[2] = (long **)ppplVar20;
            ppplVar20[3] = (long **)0x0;
            *(undefined4 *)(ppplVar20 + 3) = 0;
            *ppplVar20 = (long **)0x0;
            ppplVar20[1] = (long **)ppplVar20;
            if (*(long *)(puVar12 + 8) * 0x18 != 0) {
              uVar46 = (long)puVar13 + uVar46;
              uVar27 = uVar46 + *(long *)(puVar12 + 8) * 0x18;
              do {
                while( true ) {
                  pppplVar51 = (long ****)(uVar46 & 0xfffffffffffffffe);
                  FUN_71038df040((long *)&local_f0,ppplVar20,pppplVar51,param_4,param_5,param_6,
                                 param_7,param_8);
                  if ((uVar46 & 1) != 0) break;
                  uVar46 = uVar46 + 0x18;
                  if (uVar46 == uVar27) goto LAB_71038dccb4;
                }
                pppplVar9 = (long ****)pppplVar51[5];
                if ((long ****)pppplVar51[5] == (long ****)0x0) {
                  pppplVar51 = pppplVar51 + 3;
                  do {
                    pppplVar34 = pppplVar51;
                    pppplVar51 = (long ****)*pppplVar34;
                  } while (pppplVar34 == (long ****)pppplVar51[2]);
                  if ((long ****)pppplVar34[2] != pppplVar51) {
                    pppplVar34 = pppplVar51;
                  }
                }
                else {
                  do {
                    pppplVar34 = pppplVar9;
                    pppplVar9 = (long ****)pppplVar34[1];
                  } while ((long ****)pppplVar34[1] != (long ****)0x0);
                }
                uVar46 = (ulong)(pppplVar34 + -3) | 1;
              } while (uVar46 != uVar27);
            }
LAB_71038dccb4:
            uVar46 = (ulong)ppplVar20 | 1;
            *puVar13 = uVar46;
          }
          pppppppppplVar25 = &local_b8;
          FUN_71038df040((long *)&local_f0,(long ***)(uVar46 & 0xfffffffffffffffe),
                         (long ****)pppppppppplVar25,param_4,param_5,param_6,param_7,param_8);
          pppppppppplVar23 = local_f0;
          if ((char)local_e8 != '\0') {
            *(long *)(puVar12 + 8) = *(long *)(puVar12 + 8) + 1;
          }
          uVar22 = extraout_x1_21;
          uVar46 = local_b0;
          if ((local_b0 & 1) != 0) {
            FUN_71038df350(&local_b0,extraout_x1_21,(long ****)pppppppppplVar25,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)(local_b0 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_22;
            uVar46 = uVar32;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dcd44;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dcd44:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_23;
            }
          }
          local_b0 = uVar46;
          local_a8 = 0;
          uVar46 = local_80;
          if ((local_80 & 1) != 0) {
            FUN_71038df350(&local_80,uVar22,(long ****)pppppppppplVar25,param_4,param_5,param_6,
                           param_7,param_8);
            puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_24;
            uVar46 = uVar38;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dcdb4;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dcdb4:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_25;
            }
          }
          local_80 = uVar46;
          local_78 = 0;
          if (((ulong)local_98 & 1) != 0) {
            FUN_71038df350((ulong *)&local_98,uVar22,(long ****)pppppppppplVar25,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)((ulong)local_98 & 0xfffffffffffffffe);
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dce20;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dce20:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
            }
          }
          uVar46 = *puVar16;
          if ((uVar46 & 1) == 0) {
            local_88 = (long **********)((long)puVar16 + uVar46);
          }
          else {
            pbVar41 = (byte *)(uVar46 & 0xfffffffffffffffe);
            if ((*pbVar41 & 1) == 0) {
              local_88 = (long **********)(pbVar41 + 1);
            }
            else {
              local_88 = *(long ***********)(pbVar41 + 0x10);
            }
          }
          local_90 = 0;
          local_78 = 0;
          local_98 = ppplVar14;
          local_80 = uVar38;
          FUN_71038df550(&local_80,(ulong *)&local_98,(long ****)pppppppppplVar25,param_4,param_5,
                         param_6,param_7,param_8);
          local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
          puVar50 = FUN_7103828690((ulong *)&local_b8,extraout_x1_26,(long ****)pppppppppplVar25,
                                   param_4,param_5,param_6,param_7,param_8);
          std::string::assign((char *)puVar50);
          local_a8 = 0;
          local_b0 = uVar32;
          FUN_71038df550(&local_b0,&local_80,(long ****)pppppppppplVar25,param_4,param_5,param_6,
                         param_7,param_8);
          uVar27 = (ulong)(pppppppppplVar23 + -3) & 0xfffffffffffffffe;
          puVar50 = (ulong *)(uVar27 + 8);
          uVar46 = *puVar50;
          if ((uVar46 & 1) == 0) {
            ppplVar20 = (long ***)
                        FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar25,param_4,param_5,param_6
                                       ,param_7,param_8);
            if (ppplVar20 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_c8 = local_c8 & 0xffffffff00000000;
                local_f0 = (long **********)&SUB_00000020;
                ppppppppppplVar24 = &local_f0;
                uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
                if (((uVar31 & 1) != 0) &&
                   (ppplVar20 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                               param_5,param_6,param_7,param_8),
                   ppplVar20 != (long ***)0x0)) goto LAB_71038dcf10;
              }
              ppplVar20 = (long ***)0x0;
            }
LAB_71038dcf10:
            ppplVar20[2] = (long **)ppplVar20;
            ppplVar20[3] = (long **)0x0;
            *(undefined4 *)(ppplVar20 + 3) = 0;
            *ppplVar20 = (long **)0x0;
            ppplVar20[1] = (long **)ppplVar20;
            lVar29 = *(long *)(uVar27 + 0x10) * 0x18;
            if (lVar29 != 0) {
              uVar46 = (long)puVar50 + uVar46;
              uVar31 = uVar46 + lVar29;
              do {
                while( true ) {
                  pppplVar51 = (long ****)(uVar46 & 0xfffffffffffffffe);
                  FUN_71038df770(&local_f0,ppplVar20,pppplVar51,param_4,param_5,param_6,param_7,
                                 param_8);
                  if ((uVar46 & 1) != 0) break;
                  uVar46 = uVar46 + 0x18;
                  if (uVar46 == uVar31) goto LAB_71038dcfa8;
                }
                pppplVar9 = (long ****)pppplVar51[5];
                if ((long ****)pppplVar51[5] == (long ****)0x0) {
                  pppplVar51 = pppplVar51 + 3;
                  do {
                    pppplVar34 = pppplVar51;
                    pppplVar51 = (long ****)*pppplVar34;
                  } while (pppplVar34 == (long ****)pppplVar51[2]);
                  if ((long ****)pppplVar34[2] != pppplVar51) {
                    pppplVar34 = pppplVar51;
                  }
                }
                else {
                  do {
                    pppplVar34 = pppplVar9;
                    pppplVar9 = (long ****)pppplVar34[1];
                  } while ((long ****)pppplVar34[1] != (long ****)0x0);
                }
                uVar46 = (ulong)(pppplVar34 + -3) | 1;
              } while (uVar46 != uVar31);
            }
LAB_71038dcfa8:
            uVar46 = (ulong)ppplVar20 | 1;
            *puVar50 = uVar46;
          }
          pppppppppplVar23 = &local_b8;
          FUN_71038df770(&local_f0,(long ***)(uVar46 & 0xfffffffffffffffe),
                         (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
          pppppppppplVar25 = local_f0;
          if ((char)local_e8 != '\0') {
            *(long *)(uVar27 + 0x10) = *(long *)(uVar27 + 0x10) + 1;
          }
          FUN_71038dfca0((ulong *)&local_b8,extraout_x1_27,(long ****)pppppppppplVar23,param_4,
                         param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_28;
          uVar46 = local_80;
          if ((local_80 & 1) != 0) {
            FUN_71038dfd80(&local_80,extraout_x1_28,(long ****)pppppppppplVar23,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)(local_80 & 0xfffffffffffffffe);
            uVar22 = extraout_x1_29;
            uVar46 = uVar38;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dd040;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dd040:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
              uVar22 = extraout_x1_30;
            }
          }
          local_80 = uVar46;
          local_78 = 0;
          ppplVar20 = local_98;
          if (((ulong)local_98 & 1) != 0) {
            FUN_71038dfd80((ulong *)&local_98,uVar22,(long ****)pppppppppplVar23,param_4,param_5,
                           param_6,param_7,param_8);
            puVar4 = (undefined8 *)((ulong)local_98 & 0xfffffffffffffffe);
            ppplVar20 = ppplVar14;
            if (puVar4 != (undefined8 *)0x0) {
              puVar28 = (undefined8 *)*puVar4;
              while (puVar30 = puVar28, puVar28 != (undefined8 *)0x0) {
                while (puVar28 = (undefined8 *)puVar30[1], puVar28 != (undefined8 *)0x0) {
                  puVar30[1] = puVar28[2];
                  puVar28[2] = puVar30;
                  puVar30 = puVar28;
                  if (puVar28 == (undefined8 *)0x0) goto LAB_71038dd0ac;
                }
                puVar28 = (undefined8 *)puVar30[2];
                *puVar30 = 0;
                puVar30[1] = 0;
                puVar30[2] = 0;
              }
LAB_71038dd0ac:
              puVar4[1] = 0;
              puVar4[2] = 0;
              *puVar4 = 0;
              FUN_710392eb40((ulong)puVar4);
            }
          }
          local_98 = ppplVar20;
          uVar46 = puVar16[2];
          if ((uVar46 & 1) == 0) {
            uVar27 = (long)(puVar16 + 2) + uVar46;
            uVar46 = uVar27 + puVar16[3] * 0x10;
            if (uVar27 != uVar46) {
LAB_71038dd100:
              uVar31 = (ulong)(pppppppppplVar25 + -3) & 0xfffffffffffffffe;
              puVar50 = (ulong *)(uVar31 + 8);
              do {
                uVar15 = *puVar44;
                puVar18 = (ulong *)(uVar27 & 0xfffffffffffffffe);
                uVar43 = (long)puVar44 + uVar15;
                if ((uVar15 & 1) != 0) {
                  uVar43 = uVar15 & 0xfffffffffffffffe;
                }
                puVar21 = (ulong *)(uVar43 + (ulong)(uint)puVar18[1] * 0x10);
                uVar43 = *puVar21;
                puVar3 = (uint *)((long)puVar21 + uVar43);
                if ((uVar43 & 1) != 0) {
                  puVar3 = (uint *)(uVar43 & 0xfffffffffffffffe);
                }
                uVar1 = *puVar3;
                bVar10 = FUN_710383b5d0(puVar18,&local_d8);
                if (((bVar10 & 1) == 0) &&
                   (bVar10 = FUN_710383b5d0(puVar18,local_70), (bVar10 & 1) == 0)) {
                  uVar52 = 3;
                  if ((uVar1 & 0xe000) != 0) {
                    uVar52 = 9;
                  }
                }
                else {
                  uVar52 = 8;
                }
                local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
                pppppppppplVar23 = &local_b8;
                FUN_71038deb20(pppplVar49,
                               (long ****)(*(long *)(puVar12 + 0xc) + 3U & 0xfffffffffffffffc),
                               (undefined1 *)pppppppppplVar23,param_4,param_5,param_6,param_7,
                               param_8);
                uVar15 = *puVar44;
                uVar43 = (long)puVar44 + uVar15;
                if ((uVar15 & 1) != 0) {
                  uVar43 = uVar15 & 0xfffffffffffffffe;
                }
                puVar21 = (ulong *)(uVar43 + (ulong)(uint)puVar18[1] * 0x10);
                uVar17 = *(ulong *)(puVar12 + 0xc);
                uVar43 = *puVar21;
                uVar15 = puVar21[1];
                pppppppppplVar25 = (long **********)((long)puVar21 + uVar43);
                if ((uVar43 & 1) != 0) {
                  pppppppppplVar25 = (long **********)(uVar43 & 0xfffffffffffffffe);
                }
                uVar43 = uVar17;
                uVar47 = uVar17 & 0xffffffff;
                uVar22 = extraout_x1_31;
                for (; uVar15 != 0; uVar15 = uVar15 - 1) {
                  pppppppppplVar23 = pppppppppplVar25;
                  FUN_71038deb20(pppplVar49,(long ****)(uVar43 + 1),(undefined1 *)pppppppppplVar25,
                                 param_4,param_5,param_6,param_7,param_8);
                  uVar43 = *(ulong *)(puVar12 + 0xc);
                  pppppppppplVar25 = (long **********)((long)pppppppppplVar25 + 1);
                  uVar47 = uVar43;
                  uVar22 = extraout_x1_32;
                }
                local_b8 = (long *********)(&DAT_710455dba0 + -(long)&local_b8);
                puVar21 = FUN_7103828690((ulong *)&local_b8,uVar22,(long ****)pppppppppplVar23,
                                         param_4,param_5,param_6,param_7,param_8);
                std::string::assign((char *)puVar21);
                iStack_a0 = (int)uVar47 - (int)uVar17;
                local_a8 = CONCAT44((int)uVar17,(undefined4)local_a8);
                local_b0._0_2_ = CONCAT11(3,uVar52);
                local_b0 = local_b0 & 0xffffffff;
                uVar43 = *puVar50;
                if ((uVar43 & 1) == 0) {
                  ppplVar20 = (long ***)
                              FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar23,param_4,param_5,
                                             param_6,param_7,param_8);
                  if (ppplVar20 == (long ***)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
                      local_88 = (long **********)&SUB_00000020;
                      ppppppppppplVar24 = &local_88;
                      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
                      if (((uVar15 & 1) != 0) &&
                         (ppplVar20 = (long ***)
                                      FUN_710392e290(0x10,0x20,(long ****)ppppppppppplVar24,param_4,
                                                     param_5,param_6,param_7,param_8),
                         ppplVar20 != (long ***)0x0)) goto LAB_71038dd2cc;
                    }
                    ppplVar20 = (long ***)0x0;
                  }
LAB_71038dd2cc:
                  ppplVar20[2] = (long **)ppplVar20;
                  ppplVar20[3] = (long **)0x0;
                  *(undefined4 *)(ppplVar20 + 3) = 0;
                  *ppplVar20 = (long **)0x0;
                  ppplVar20[1] = (long **)ppplVar20;
                  lVar29 = *(long *)(uVar31 + 0x10) * 0x20;
                  if (lVar29 != 0) {
                    uVar43 = (long)puVar50 + uVar43;
                    uVar15 = uVar43 + lVar29;
                    do {
                      while( true ) {
                        pppplVar51 = (long ****)(uVar43 & 0xfffffffffffffffe);
                        FUN_71038dffc0(&local_88,ppplVar20,pppplVar51,param_4,param_5,param_6,
                                       param_7,param_8);
                        if ((uVar43 & 1) != 0) break;
                        uVar43 = uVar43 + 0x20;
                        if (uVar43 == uVar15) goto LAB_71038dd368;
                      }
                      pppplVar9 = (long ****)pppplVar51[6];
                      if ((long ****)pppplVar51[6] == (long ****)0x0) {
                        pppplVar51 = pppplVar51 + 4;
                        do {
                          pppplVar34 = pppplVar51;
                          pppplVar51 = (long ****)*pppplVar34;
                        } while (pppplVar34 == (long ****)pppplVar51[2]);
                        if ((long ****)pppplVar34[2] != pppplVar51) {
                          pppplVar34 = pppplVar51;
                        }
                      }
                      else {
                        do {
                          pppplVar34 = pppplVar9;
                          pppplVar9 = (long ****)pppplVar34[1];
                        } while ((long ****)pppplVar34[1] != (long ****)0x0);
                      }
                      uVar43 = (ulong)(pppplVar34 + -4) | 1;
                    } while (uVar43 != uVar15);
                  }
LAB_71038dd368:
                  uVar43 = (ulong)ppplVar20 | 1;
                  *puVar50 = uVar43;
                }
                pppppppppplVar23 = &local_b8;
                FUN_71038dffc0(&local_88,(long ***)(uVar43 & 0xfffffffffffffffe),
                               (long ****)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
                if ((char)local_80 != '\0') {
                  *(long *)(uVar31 + 0x10) = *(long *)(uVar31 + 0x10) + 1;
                }
                if ((((ulong)local_b8 & 1) != 0) &&
                   (pbVar41 = (byte *)((ulong)local_b8 & 0xfffffffffffffffe), pbVar41 != (byte *)0x0
                   )) {
                  if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
                    FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
                  }
                  FUN_710392eb40((ulong)pbVar41);
                }
                if ((uVar27 & 1) == 0) {
                  uVar27 = uVar27 + 0x10;
                }
                else {
                  puVar21 = (ulong *)puVar18[4];
                  if ((ulong *)puVar18[4] == (ulong *)0x0) {
                    puVar18 = puVar18 + 2;
                    do {
                      puVar37 = puVar18;
                      puVar18 = (ulong *)*puVar37;
                    } while (puVar37 == (ulong *)puVar18[2]);
                    if ((ulong *)puVar37[2] != puVar18) {
                      puVar37 = puVar18;
                    }
                  }
                  else {
                    do {
                      puVar37 = puVar21;
                      puVar21 = (ulong *)puVar37[1];
                    } while ((ulong *)puVar37[1] != (ulong *)0x0);
                  }
                  uVar27 = (ulong)(puVar37 + -2) | 1;
                }
              } while (uVar27 != uVar46);
            }
          }
          else {
            uVar27 = *(long *)((uVar46 & 0xfffffffffffffffe) + 8) - 0x10U | 1;
            uVar46 = uVar46 - 0x10 | 1;
            if (uVar27 != uVar46) goto LAB_71038dd100;
          }
          if ((uVar26 & 1) == 0) {
            uVar26 = uVar26 + 0x20;
          }
          else {
            puVar50 = (ulong *)puVar16[6];
            if ((ulong *)puVar16[6] == (ulong *)0x0) {
              puVar16 = puVar16 + 4;
              do {
                puVar18 = puVar16;
                puVar16 = (ulong *)*puVar18;
              } while (puVar18 == (ulong *)puVar16[2]);
              if ((ulong *)puVar18[2] != puVar16) {
                puVar18 = puVar16;
              }
            }
            else {
              do {
                puVar18 = puVar50;
                puVar50 = (ulong *)puVar18[1];
              } while ((ulong *)puVar18[1] != (ulong *)0x0);
            }
            uVar26 = (ulong)(puVar18 + -4) | 1;
          }
        } while (uVar26 != uVar19);
      }
    }
    else {
      uVar26 = *(long *)((uVar19 & 0xfffffffffffffffe) + 8) - 0x20U | 1;
      uVar19 = uVar19 - 0x20 | 1;
      if (uVar26 != uVar19) goto LAB_71038dcb10;
    }
    local_b8 = (long *********)((ulong)local_b8 & 0xffffffffffffff00);
    pppppppppplVar23 = &local_b8;
    FUN_71038deb20(pppplVar49,(long ****)(*(long *)(puVar12 + 0xc) + 0x10),
                   (undefined1 *)pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_71038e0b10((long)local_160,puVar12,pppppppppplVar23,param_4,param_5,param_6,param_7,param_8);
  if (((local_70[0] & 1) != 0) &&
     (pbVar41 = (byte *)(local_70[0] & 0xfffffffffffffffe), pbVar41 != (byte *)0x0)) {
    if (((*pbVar41 & 1) != 0) && (*(ulong *)(pbVar41 + 0x10) != 0)) {
      FUN_710392eb40(*(ulong *)(pbVar41 + 0x10));
    }
    FUN_710392eb40((ulong)pbVar41);
  }
  if ((local_d8 & 1) == 0) {
    return local_160;
  }
  pppppppppplVar25 = (long **********)(local_d8 & 0xfffffffffffffffe);
  if (pppppppppplVar25 == (long **********)0x0) {
    return local_160;
  }
  if ((((ulong)*pppppppppplVar25 & 1) != 0) && (pppppppppplVar25[2] != (long *********)0x0)) {
    FUN_710392eb40((ulong)pppppppppplVar25[2]);
  }
LAB_71038ddf78:
  FUN_710392eb40((ulong)pppppppppplVar25);
  return local_160;
}

