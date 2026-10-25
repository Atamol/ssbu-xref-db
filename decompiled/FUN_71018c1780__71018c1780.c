// addr:      71018c1780
// offset:    0x18c1780
// name:      FUN_71018c1780
// mangled:   
// signature: undefined __cdecl FUN_71018c1780(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71018c1780(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  long **pplVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long ***ppplVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long ****pppplVar15;
  long *plVar16;
  long *plVar17;
  long ****pppplVar18;
  long lVar19;
  int iVar20;
  undefined8 uVar21;
  uint *puVar22;
  long *plVar23;
  long lVar24;
  long *****ppppplVar25;
  undefined4 uVar26;
  long **pplVar27;
  ulong uVar28;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  long ****local_a8;
  undefined8 uStack_a0;
  long ****local_98;
  long ****local_90;
  long ****local_88;
  undefined4 local_7c;
  long ***local_78;
  uint local_70;
  ushort local_6c [5];
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  
  lVar24 = *(long *)(*(long *)(param_1 + 0x178) + 0x80);
  uVar7 = *(int *)(lVar24 + 0xb8) - 3;
  if (*(int *)(param_1 + 0x154) == 0) {
    if (1 < uVar7) {
      return;
    }
    local_b0 = (undefined4 *)0x0;
    local_a8 = (long ****)0x0;
    uStack_a0 = 0;
    FUN_71018c89b0((long *)&local_b0,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pppplVar15 = local_a8;
    puVar10 = local_b0;
    lVar24 = *(long *)(param_1 + 0x178);
    local_c8 = (undefined4 *)0x0;
    local_c0 = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    ppplVar8 = (long ***)((long)local_a8 - (long)local_b0);
    if (ppplVar8 != (long ***)0x0) {
      if (0x666666666666666 < (ulong)(((long)ppplVar8 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      puVar13 = (undefined4 *)
                FUN_710392e290(0x10,ppplVar8,(long ****)param_3,param_4,param_5,param_6,param_7,
                               param_8);
      if (puVar13 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_98 = (long ****)((ulong)local_98 & 0xffffffff00000000);
          pppplVar18 = &local_78;
          local_78 = ppplVar8;
          uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
          if (((uVar14 & 1) != 0) &&
             (puVar13 = (undefined4 *)
                        FUN_710392e290(0x10,ppplVar8,pppplVar18,param_4,param_5,param_6,param_7,
                                       param_8), puVar13 != (undefined4 *)0x0)) goto LAB_71018c18b8;
        }
        puVar13 = (undefined4 *)0x0;
      }
LAB_71018c18b8:
      local_b8 = puVar13 + ((long)ppplVar8 >> 3) * 2;
      local_c8 = puVar13;
      local_c0 = puVar13;
      FUN_71018c8e40((long)&local_c8,puVar10,(undefined4 *)pppplVar15);
      param_3 = (char *)pppplVar15;
    }
    puVar13 = local_c0;
    puVar10 = local_c8;
    uVar7 = *(uint *)(param_1 + 0x1a0);
    lVar24 = *(long *)(lVar24 + 0x80);
    ppplVar8 = (long ***)((long)local_c0 - (long)local_c8);
    local_90 = (long ****)0x0;
    local_88 = (long ****)0x0;
    local_98 = (long ****)0x0;
    if (ppplVar8 == (long ***)0x0) goto LAB_71018c1a40;
    if (0x666666666666666 < (ulong)(((long)ppplVar8 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppplVar15 = (long ****)
                 FUN_710392e290(0x10,ppplVar8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
    if (pppplVar15 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c = 0;
        pppplVar15 = &local_78;
        local_78 = ppplVar8;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_7c);
        if (((uVar14 & 1) != 0) &&
           (pppplVar15 = (long ****)
                         FUN_710392e290(0x10,ppplVar8,pppplVar15,param_4,param_5,param_6,param_7,
                                        param_8), pppplVar15 != (long ****)0x0))
        goto LAB_71018c1a14;
      }
      pppplVar15 = (long ****)0x0;
    }
LAB_71018c1a14:
    local_88 = pppplVar15 + ((long)ppplVar8 >> 3);
    local_98 = pppplVar15;
    local_90 = pppplVar15;
    FUN_71018c8e40((long)&local_98,puVar10,puVar13);
LAB_71018c1a40:
    pppplVar18 = local_90;
    pppplVar15 = local_98;
    ppppplVar25 = (long *****)(lVar24 + 0x58);
    *(undefined8 *)(lVar24 + 0xb8) = 0xffffffff00000000;
    uVar28 = (*(long *)(lVar24 + 0x60) - (long)*ppppplVar25 >> 3) * -0x3333333333333333;
    uVar14 = uVar28;
    if (ppppplVar25 != &local_98) {
      FUN_7101d37fd0((long *)ppppplVar25,local_98,local_90,param_4,param_5,param_6,param_7,param_8);
      uVar14 = (*(long *)(lVar24 + 0x60) - *(long *)(lVar24 + 0x58) >> 3) * -0x3333333333333333;
    }
    plVar23 = (long *)(lVar24 + 0x48);
    FUN_7103783690(plVar23,(int)uVar14);
    if (uVar7 == 0xffffffff) {
      if (*(undefined8 **)(lVar24 + 0x18) == *(undefined8 **)(lVar24 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar19 = (long)pppplVar18 - (long)pppplVar15 >> 3;
      FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(lVar24 + 0x10),1);
      if ((ulong)(lVar19 * -0x3333333333333333) <= uVar28 &&
          uVar28 + lVar19 * 0x3333333333333333 != 0) {
        FUN_7101d36d50(lVar24 + 0x50,*(int *)(*plVar23 + 0x2a4),(long ****)0x1,param_4,param_5,
                       param_6,param_7,param_8);
      }
    }
    else {
      puVar2 = *(uint **)(lVar24 + 0x58);
      puVar3 = *(uint **)(lVar24 + 0x60);
      if (puVar2 == puVar3) {
        iVar20 = 0;
      }
      else {
        iVar20 = 0;
        puVar22 = puVar2;
        do {
          uVar5 = *puVar22;
          local_78 = (long ***)(ulong)uVar5;
          uVar6 = (ushort)puVar22[3];
          local_70 = (uint)uVar6;
          if (uVar6 != 0) {
            local_6c[0] = uVar6;
            if (*(short *)((long)puVar22 + 0xe) == 0) {
              local_70 = 1;
            }
            else {
              local_6c[1] = *(short *)((long)puVar22 + 0xe);
              if ((short)puVar22[4] == 0) {
                local_70 = 2;
              }
              else {
                local_6c[2] = (short)puVar22[4];
                if (*(short *)((long)puVar22 + 0x12) == 0) {
                  local_70 = 3;
                }
                else {
                  local_6c[3] = *(short *)((long)puVar22 + 0x12);
                  if ((short)puVar22[5] == 0) {
                    local_70 = 4;
                  }
                  else {
                    local_6c[4] = (short)puVar22[5];
                    if (*(short *)((long)puVar22 + 0x16) == 0) {
                      local_70 = 5;
                    }
                    else {
                      local_62 = *(short *)((long)puVar22 + 0x16);
                      if ((short)puVar22[6] == 0) {
                        local_70 = 6;
                      }
                      else {
                        local_60 = (short)puVar22[6];
                        if (*(short *)((long)puVar22 + 0x1a) == 0) {
                          local_70 = 7;
                        }
                        else {
                          local_5e = *(short *)((long)puVar22 + 0x1a);
                          if ((short)puVar22[7] == 0) {
                            local_70 = 8;
                          }
                          else {
                            local_5c = (short)puVar22[7];
                            if (*(short *)((long)puVar22 + 0x1e) == 0) {
                              local_70 = 9;
                            }
                            else {
                              local_5a = *(short *)((long)puVar22 + 0x1e);
                              local_70 = 10;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          local_6c[local_70] = 0;
          uVar6 = local_6c[0];
          puVar9 = local_6c;
          while (puVar9 = puVar9 + 1, uVar6 != 0) {
            uVar6 = *puVar9;
          }
          if (uVar5 == uVar7) break;
          iVar20 = iVar20 + 1;
          puVar22 = puVar22 + 10;
        } while (puVar22 != puVar3);
      }
      uVar14 = ((long)puVar3 - (long)puVar2 >> 3) * -0x3333333333333333;
      uVar28 = (ulong)iVar20;
      if (((uVar28 <= uVar14 && uVar14 - uVar28 != 0) &&
          (FUN_7103783c10(plVar23,iVar20,0,1,param_5,param_6,param_7,param_8), -1 < iVar20)) &&
         (uVar14 = (*(long *)(lVar24 + 0x60) - *(long *)(lVar24 + 0x58) >> 3) * -0x3333333333333333,
         uVar28 <= uVar14 && uVar14 - uVar28 != 0)) {
        iVar20 = *(int *)(*(long *)(lVar24 + 0x58) + uVar28 * 0x28);
        if (iVar20 == -1) {
          if (*(undefined8 **)(lVar24 + 0x18) == *(undefined8 **)(lVar24 + 0x10)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_71037760f0(*(long *)**(undefined8 **)**(undefined8 **)(lVar24 + 0x10),0);
          *(undefined8 *)(lVar24 + 0xb8) = 0xffffffff00000003;
        }
        else {
          *(int *)(lVar24 + 0xbc) = iVar20;
          if ((*(undefined8 **)(lVar24 + 0x40) != (undefined8 *)0x0) &&
             (plVar23 = (long *)**(undefined8 **)(lVar24 + 0x40), plVar23 != (long *)0x0)) {
            FUN_7103375650(plVar23,"exit_code",&DAT_71042b2a84);
          }
          *(undefined4 *)(lVar24 + 0xb8) = 1;
        }
      }
    }
    if (local_98 != (long ****)0x0) {
      local_90 = local_98;
      FUN_710392eb40((ulong)local_98);
    }
    if (local_c8 != (undefined4 *)0x0) {
      local_c0 = local_c8;
      FUN_710392eb40((ulong)local_c8);
    }
    if (local_b0 == (undefined4 *)0x0) {
      return;
    }
    local_a8 = (long ****)local_b0;
    FUN_710392eb40((ulong)local_b0);
    return;
  }
  plVar23 = *(long **)(lVar24 + 0x40);
  if (1 < uVar7) {
    if (plVar23 == (long *)0x0) {
      return;
    }
    lVar19 = *plVar23;
    if (lVar19 == 0) {
      uVar26 = 0;
      goto LAB_71018c1948;
    }
    if (*(long *)(lVar19 + 8) != 0) {
      return;
    }
    if (*(long *)(lVar19 + 8) == 0) {
      local_78 = (long ***)0x0;
      FUN_71037aea50((ulong *)&local_78,"i",(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar23 = (long *)*plVar23;
      lVar12 = *plVar23;
      lVar19 = 0;
      if (lVar12 != 0) {
        lVar19 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
        if (*(uint *)(lVar19 + 0xc) < 2) {
          plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar19 + 0xb) & 0x3f))
                            & 2) * 0x20);
          do {
            if (((int)plVar16[3] == 0x13) && (plVar17 = plVar16, plVar16[2] == 2)) break;
            piVar1 = (int *)((long)plVar16 + 0x1c);
            plVar16 = plVar16 + (long)*piVar1 * 4;
            plVar17 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar17 = (long *)(*(long *)(lVar19 + 0x10) + 0x10);
        }
        param_3 = "exit_code";
        FUN_71038f4d40(lVar12,plVar17,"exit_code");
        lVar19 = *plVar23;
      }
      FUN_710372d940(lVar19,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
      ppplVar8 = local_78;
      if (local_78 != (long ***)0x0) {
        pplVar4 = local_78[2];
        uVar26 = *(undefined4 *)local_78[1];
        lVar19 = 0;
        do {
          if (*(char *)((long)pplVar4 + lVar19) == 's') {
            pplVar27 = ppplVar8[1];
            plVar23 = pplVar27[lVar19];
            if (plVar23 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar23);
            }
            pplVar27[lVar19] = (long *)0x0;
          }
          else if (*(char *)((long)pplVar4 + lVar19) == '\0') goto LAB_71018c21d4;
          lVar19 = lVar19 + 1;
        } while( true );
      }
      uVar26 = 0;
      goto LAB_71018c21e8;
    }
    goto LAB_71018c1da0;
  }
  if (plVar23 != (long *)0x0) {
    if (*plVar23 == 0) {
      uVar26 = 0;
      goto LAB_71018c1f28;
    }
    if (*(long *)(*plVar23 + 8) == 0) {
      local_78 = (long ***)0x0;
      FUN_71037aea50((ulong *)&local_78,"i",(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar23 = (long *)*plVar23;
      lVar12 = *plVar23;
      lVar19 = 0;
      if (lVar12 != 0) {
        lVar19 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
        if (*(uint *)(lVar19 + 0xc) < 2) {
          plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar19 + 0xb) & 0x3f))
                            & 2) * 0x20);
          do {
            if (((int)plVar16[3] == 0x13) && (plVar17 = plVar16, plVar16[2] == 2)) break;
            piVar1 = (int *)((long)plVar16 + 0x1c);
            plVar16 = plVar16 + (long)*piVar1 * 4;
            plVar17 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar17 = (long *)(*(long *)(lVar19 + 0x10) + 0x10);
        }
        param_3 = "exit_code";
        FUN_71038f4d40(lVar12,plVar17,"exit_code");
        lVar19 = *plVar23;
      }
      FUN_710372d940(lVar19,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
      ppplVar8 = local_78;
      if (local_78 != (long ***)0x0) {
        pplVar4 = local_78[2];
        uVar26 = *(undefined4 *)local_78[1];
        lVar19 = 0;
        do {
          if (*(char *)((long)pplVar4 + lVar19) == 's') {
            pplVar27 = ppplVar8[1];
            plVar23 = pplVar27[lVar19];
            if (plVar23 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar23);
            }
            pplVar27[lVar19] = (long *)0x0;
          }
          else if (*(char *)((long)pplVar4 + lVar19) == '\0') goto LAB_71018c1f10;
          lVar19 = lVar19 + 1;
        } while( true );
      }
      uVar26 = 0;
      goto LAB_71018c1f24;
    }
  }
  goto LAB_71018c2040;
LAB_71018c21d4:
  FUN_710392eb40((ulong)ppplVar8);
  local_78 = (long ***)0x0;
LAB_71018c21e8:
  plVar23 = *(long **)(lVar24 + 0x40);
LAB_71018c1948:
  *(undefined4 *)(lVar24 + 0xb8) = uVar26;
  if (*plVar23 != 0) {
    local_78 = (long ***)0x0;
    FUN_71037aea50((ulong *)&local_78,"b",(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                  );
    plVar23 = (long *)*plVar23;
    lVar12 = *plVar23;
    lVar19 = 0;
    if (lVar12 != 0) {
      lVar19 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
      if (*(uint *)(lVar19 + 0xc) < 2) {
        plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar19 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar16[3] == 0x13) && (plVar17 = plVar16, plVar16[2] == 2)) break;
          piVar1 = (int *)((long)plVar16 + 0x1c);
          plVar16 = plVar16 + (long)*piVar1 * 4;
          plVar17 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar17 = (long *)(*(long *)(lVar19 + 0x10) + 0x10);
      }
      param_3 = "edited_menu_vibration";
      FUN_71038f4d40(lVar12,plVar17,"edited_menu_vibration");
      lVar19 = *plVar23;
    }
    FUN_710372d940(lVar19,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    ppplVar8 = local_78;
    if (local_78 != (long ***)0x0) {
      pplVar4 = local_78[2];
      bVar11 = *(char *)local_78[1] != '\0';
      lVar19 = 0;
      do {
        if (*(char *)((long)pplVar4 + lVar19) == 's') {
          pplVar27 = ppplVar8[1];
          plVar23 = pplVar27[lVar19];
          if (plVar23 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar23);
          }
          pplVar27[lVar19] = (long *)0x0;
        }
        else if (*(char *)((long)pplVar4 + lVar19) == '\0') goto LAB_71018c1d90;
        lVar19 = lVar19 + 1;
      } while( true );
    }
  }
  bVar11 = false;
  goto LAB_71018c1d9c;
LAB_71018c1d90:
  FUN_710392eb40((ulong)ppplVar8);
  local_78 = (long ***)0x0;
LAB_71018c1d9c:
  *(bool *)(lVar24 + 0xc0) = bVar11;
LAB_71018c1da0:
  uVar21 = *(undefined8 *)(lVar24 + 0xb8);
  uVar7 = *(uint *)(lVar24 + 0xc0);
  iVar20 = (int)uVar21;
  *(int *)(param_1 + 0x198) = iVar20;
  if (iVar20 == 2) {
    *(undefined4 *)(param_1 + 0x194) = 0;
  }
  else if (iVar20 == 1) {
    *(int *)(param_1 + 0x1a0) = (int)((ulong)uVar21 >> 0x20);
    *(undefined4 *)(param_1 + 0xf9b0) = 0;
    *(undefined4 *)(param_1 + 0x194) = 2;
    *(undefined1 *)(*DAT_7105329f50 + 1) = 1;
  }
  if (0x12 < *(uint *)(param_1 + 0x14c)) goto LAB_71018c21f0;
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x14c) * 4 + 0x100) = 0xb;
  uVar7 = uVar7 & 1;
  if ((*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x67) != '\0') == uVar7) {
    return;
  }
  *(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x78) + 0x67) = (char)uVar7;
  if (0x11 < *(int *)(param_1 + 0x14c)) {
    return;
  }
  uVar7 = *(int *)(param_1 + 0x14c) + 1;
  *(uint *)(param_1 + 0x14c) = uVar7;
  if (0x12 < uVar7) goto LAB_71018c21f0;
  lVar24 = param_1 + (long)(int)uVar7 * 4;
  uVar26 = 10;
  goto LAB_71018c20a0;
LAB_71018c1f10:
  FUN_710392eb40((ulong)ppplVar8);
  local_78 = (long ***)0x0;
LAB_71018c1f24:
  plVar23 = *(long **)(lVar24 + 0x40);
LAB_71018c1f28:
  *(undefined4 *)(lVar24 + 0xb8) = uVar26;
  if (*plVar23 != 0) {
    local_78 = (long ***)0x0;
    FUN_71037aea50((ulong *)&local_78,"b",(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                  );
    plVar23 = (long *)*plVar23;
    lVar12 = *plVar23;
    lVar19 = 0;
    if (lVar12 != 0) {
      lVar19 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
      if (*(uint *)(lVar19 + 0xc) < 2) {
        plVar16 = (long *)(*(long *)(lVar19 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar19 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar16[3] == 0x13) && (plVar17 = plVar16, plVar16[2] == 2)) break;
          piVar1 = (int *)((long)plVar16 + 0x1c);
          plVar16 = plVar16 + (long)*piVar1 * 4;
          plVar17 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar17 = (long *)(*(long *)(lVar19 + 0x10) + 0x10);
      }
      param_3 = "edited_menu_vibration";
      FUN_71038f4d40(lVar12,plVar17,"edited_menu_vibration");
      lVar19 = *plVar23;
    }
    FUN_710372d940(lVar19,(long *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
    ppplVar8 = local_78;
    if (local_78 != (long ***)0x0) {
      pplVar4 = local_78[2];
      bVar11 = *(char *)local_78[1] != '\0';
      lVar19 = 0;
      do {
        if (*(char *)((long)pplVar4 + lVar19) == 's') {
          pplVar27 = ppplVar8[1];
          plVar23 = pplVar27[lVar19];
          if (plVar23 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar23);
          }
          pplVar27[lVar19] = (long *)0x0;
        }
        else if (*(char *)((long)pplVar4 + lVar19) == '\0') goto LAB_71018c2030;
        lVar19 = lVar19 + 1;
      } while( true );
    }
  }
  bVar11 = false;
  goto LAB_71018c203c;
LAB_71018c2030:
  FUN_710392eb40((ulong)ppplVar8);
  local_78 = (long ***)0x0;
LAB_71018c203c:
  *(bool *)(lVar24 + 0xc0) = bVar11;
LAB_71018c2040:
  if ((int)*(undefined8 *)(lVar24 + 0xb8) == 3) {
    if (0x11 < *(int *)(param_1 + 0x14c)) {
      return;
    }
    uVar7 = *(int *)(param_1 + 0x14c) + 1;
    *(uint *)(param_1 + 0x14c) = uVar7;
    if (0x12 < uVar7) {
LAB_71018c21f0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar24 = param_1 + (long)(int)uVar7 * 4;
    uVar26 = 2;
  }
  else {
    *(int *)(param_1 + 0x1a0) = (int)((ulong)*(undefined8 *)(lVar24 + 0xb8) >> 0x20);
    if (0x11 < *(int *)(param_1 + 0x14c)) {
      return;
    }
    uVar7 = *(int *)(param_1 + 0x14c) + 1;
    *(uint *)(param_1 + 0x14c) = uVar7;
    if (0x12 < uVar7) goto LAB_71018c21f0;
    lVar24 = param_1 + (long)(int)uVar7 * 4;
    uVar26 = 3;
  }
LAB_71018c20a0:
  *(undefined4 *)(lVar24 + 0x100) = uVar26;
  return;
}

