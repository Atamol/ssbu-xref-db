// addr:      71037eacd0
// offset:    0x37eacd0
// name:      FUN_71037eacd0
// mangled:   
// signature: undefined __cdecl FUN_71037eacd0(undefined4 * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * * param_7, char * param_8)


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffef0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71037eacd0(undefined4 *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ****param_7,char *param_8)

{
  ulong *puVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  ulong uVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  uint uVar11;
  undefined4 uVar12;
  long ***ppplVar13;
  undefined **ppuVar14;
  long ***ppplVar15;
  ulong *puVar16;
  ulong *puVar17;
  long ****pppplVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  uint uVar23;
  uint *puVar24;
  long ***unaff_x21;
  long ***unaff_x22;
  char *pcVar25;
  long ***ppplVar26;
  undefined1 *puVar27;
  ulong uVar28;
  long ****pppplVar29;
  float fVar30;
  long ****local_118;
  undefined8 local_110;
  long ****local_108;
  long ****local_100;
  uint local_f8;
  long ****local_f0;
  long ****local_e8;
  long ****local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  long ****local_c8;
  long ****local_c0;
  long ***local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  long ****local_a0;
  long ****local_98;
  undefined4 local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  long ****local_78;
  long ****local_70 [2];
  
  ppppbVar9 = param_4;
  pppplVar10 = param_5;
  if (*(int *)((long)param_4 + 0x34) != 0) {
    puVar24 = (uint *)((ulong)*(uint *)(param_4 + 7) + param_3);
    pppplVar18 = (long ****)((ulong)&local_f0 | 1);
    unaff_x22 = (long ***)local_d8;
    puVar1 = (ulong *)(param_2 + 0x58);
    uVar23 = 0;
    plVar2 = (long *)(param_2 + 0x48);
    plVar21 = (long *)(param_2 + 0x70);
    puVar17 = (ulong *)(param_2 + 0x80);
    do {
      if ((char)puVar24[0x19] == '\0') {
        local_80 = 0;
        local_90 = 0;
        uStack_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_a8 = (long ****)0x0;
        local_a0 = (long ****)0x0;
        local_98 = (long ****)0x0;
        pcVar25 = (char *)((long)param_5 + (ulong)*puVar24);
        pppplVar5 = (long ****)strlen(pcVar25);
        if (pppplVar5 < (long ****)0x16 || (long)pppplVar5 - 0x16U == 0) {
          if (pppplVar5 != (long ****)0x0) {
            memcpy((long ****)((ulong)&local_a8 | 1),pcVar25,(size_t)pppplVar5);
          }
          *(undefined1 *)((long)&local_a8 + 1 + (long)pppplVar5) = 0;
          if (((ulong)local_a8 & 1) == 0) {
            local_a8 = (long ****)CONCAT71(local_a8._1_7_,(char)((int)pppplVar5 << 1));
            pppplVar5 = local_a0;
          }
        }
        else {
          ppppbVar9 = (byte ****)0x0;
          pppplVar10 = (long ****)0x0;
          param_6 = 0;
          FUN_71037cfe00(&local_a8,0x16,(long)pppplVar5 - 0x16U,(byte ****)0x0,(long ****)0x0,0,
                         (size_t)pppplVar5,pcVar25);
          param_7 = pppplVar5;
          param_8 = pcVar25;
          pppplVar5 = local_a0;
        }
        local_a0 = pppplVar5;
        pppplVar8 = local_98;
        pppplVar5 = local_a0;
        local_84 = 1;
        uStack_8c = 0xffffffff;
        local_88 = 0;
        uVar11 = puVar24[0x12];
        if (((((uVar11 == 0xffffffff) && (uVar11 = puVar24[0x13], uVar11 == 0xffffffff)) &&
             (uVar11 = puVar24[0x14], uVar11 == 0xffffffff)) &&
            ((uVar11 = puVar24[0x15], uVar11 == 0xffffffff &&
             (uVar11 = puVar24[0x16], uVar11 == 0xffffffff)))) &&
           (uVar11 = puVar24[0x17], uVar11 == 0xffffffff)) {
          unaff_x21 = (long ***)0x0;
          puVar24 = puVar24 + 0x29;
          pppplVar5 = local_98;
        }
        else {
          if (puVar24[0x18] == 2) {
            local_90 = 3;
          }
          else if (puVar24[0x18] == 1) {
            local_90 = 2;
          }
          uVar12 = 1;
          switch(puVar24[10]) {
          case 0x42:
          case 0x48:
          case 0x52:
          case 0x56:
          case 0x5c:
          case 0x60:
          case 0x66:
          case 0x6c:
          case 0x71:
          case 0x77:
          case 0x7c:
          case 0x82:
            break;
          case 0x43:
          case 0x47:
          case 0x49:
          case 0x53:
          case 0x57:
          case 0x5d:
          case 0x61:
          case 0x67:
          case 0x6d:
          case 0x72:
          case 0x78:
          case 0x7d:
          case 0x83:
            uVar12 = 2;
            break;
          case 0x44:
          case 0x54:
          case 0x5e:
          case 0x68:
          case 0x73:
          case 0x7e:
            uVar12 = 3;
            break;
          case 0x45:
          case 0x4e:
            uVar12 = 4;
            break;
          default:
            goto switchD_71037eaec4_caseD_46;
          }
          local_80 = uVar12;
switchD_71037eaec4_caseD_46:
          local_e8 = (long ****)0x0;
          local_e0 = (long ****)0x0;
          local_f0 = (long ****)0x0;
          uStack_8c = uVar11;
          if (((ulong)local_a8 & 1) == 0) {
            local_e8 = local_a0;
            local_e0 = local_98;
            local_f0 = local_a8;
          }
          else {
            if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (local_a0 < (long ****)0x17) {
              local_f0 = (long ****)(ulong)(byte)((int)local_a0 << 1);
              pppplVar29 = pppplVar18;
              if (local_a0 != (long ****)0x0) goto LAB_71037eafb0;
            }
            else {
              pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
              iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                     param_8);
              if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                 (local_118 = pppplVar29,
                 uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
                 (uVar28 & 1) != 0)) {
                FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8
                              );
              }
              nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
              local_f0 = (long ****)((ulong)pppplVar29 | 1);
              local_e8 = pppplVar5;
              local_e0 = local_70[0];
              pppplVar29 = local_70[0];
LAB_71037eafb0:
              memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
            }
            *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
          }
          pppplVar8 = local_98;
          pppplVar5 = local_a0;
          local_d0 = (undefined1  [8])0x0;
          local_c8 = (long ****)0x0;
          local_d8 = (undefined1  [8])0x0;
          if (((byte)local_a8 & 1) == 0) {
            local_c8 = local_98;
            local_d8 = (undefined1  [8])local_a8;
            local_d0 = (undefined1  [8])local_a0;
          }
          else {
            if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (local_a0 < (long ****)0x17) {
              local_d8._1_7_ = 0;
              local_d8[0] = (byte)((int)local_a0 << 1);
              pppplVar29 = (long ****)(local_d8 + 1);
              if (local_a0 != (long ****)0x0) goto LAB_71037eb094;
            }
            else {
              pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
              iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                     param_8);
              if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                 (local_118 = pppplVar29,
                 uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
                 (uVar28 & 1) != 0)) {
                FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8
                              );
              }
              nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
              local_d8 = (undefined1  [8])((ulong)pppplVar29 | 1);
              local_d0 = (undefined1  [8])pppplVar5;
              local_c8 = local_70[0];
              pppplVar29 = local_70[0];
LAB_71037eb094:
              memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
            }
            *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
          }
          local_c0 = (long ****)CONCAT44(uStack_8c,local_90);
          local_b8 = (long ***)CONCAT44(local_84,local_88);
          local_b0 = local_80;
          pppplVar5 = pppplVar18;
          pppplVar8 = (long ****)((ulong)local_f0 >> 1 & 0x7f);
          if (((ulong)local_f0 & 1) != 0) {
            pppplVar5 = local_e0;
            pppplVar8 = local_e8;
          }
          ppplVar6 = (long ***)FUN_7102677830((ulong *)pppplVar5,(ulong)pppplVar8);
          ppplVar26 = *(long ****)(param_2 + 0x50);
          if (ppplVar26 != (long ***)0x0) {
            uVar28 = (long)ppplVar26 - 1;
            if ((uVar28 & (ulong)ppplVar26) == 0) {
              unaff_x21 = (long ***)(uVar28 & (ulong)ppplVar6);
            }
            else {
              unaff_x21 = ppplVar6;
              if (ppplVar26 <= ppplVar6) {
                uVar22 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar22 = (ulong)ppplVar6 / (ulong)ppplVar26;
                }
                unaff_x21 = (long ***)((long)ppplVar6 - uVar22 * (long)ppplVar26);
              }
            }
            plVar19 = *(long **)(*plVar2 + (long)unaff_x21 * 8);
            if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
              if ((uVar28 & (ulong)ppplVar26) == 0) {
                if (pppplVar8 == (long ****)0x0) {
                  do {
                    if ((long ***)plVar19[1] != ppplVar6 &&
                        (long ***)((ulong)plVar19[1] & uVar28) != unaff_x21) break;
                    uVar22 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
                    if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                      uVar22 = plVar19[3];
                    }
                    if (uVar22 == 0) goto LAB_71037eb4bc;
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
                else {
                  do {
                    if ((long ***)plVar19[1] != ppplVar6 &&
                        (long ***)((ulong)plVar19[1] & uVar28) != unaff_x21) break;
                    bVar3 = *(byte *)(plVar19 + 2);
                    pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                    if ((bVar3 & 1) != 0) {
                      pppplVar29 = (long ****)plVar19[3];
                    }
                    if (pppplVar29 == pppplVar8) {
                      if ((bVar3 & 1) == 0) {
                        pcVar25 = (char *)((long)plVar19 + 0x11);
                        lVar20 = -(long)(ulong)(bVar3 >> 1);
                        pppplVar29 = pppplVar5;
                        while (*pcVar25 == *(char *)pppplVar29) {
                          pcVar25 = pcVar25 + 1;
                          pppplVar29 = (long ****)((long)pppplVar29 + 1);
                          lVar20 = lVar20 + 1;
                          if (lVar20 == 0) goto LAB_71037eb4bc;
                        }
                      }
                      else {
                        iVar4 = memcmp((void *)plVar19[4],pppplVar5,(size_t)pppplVar8);
                        if (iVar4 == 0) goto LAB_71037eb4bc;
                      }
                    }
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
              }
              else if (pppplVar8 == (long ****)0x0) {
                do {
                  ppplVar13 = (long ***)plVar19[1];
                  if (ppplVar13 != ppplVar6) {
                    if (ppplVar26 <= ppplVar13) {
                      uVar28 = 0;
                      if (ppplVar26 != (long ***)0x0) {
                        uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                      }
                      ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                    }
                    if (ppplVar13 != unaff_x21) break;
                  }
                  uVar28 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
                  if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                    uVar28 = plVar19[3];
                  }
                  if (uVar28 == 0) goto LAB_71037eb4bc;
                  plVar19 = (long *)*plVar19;
                } while (plVar19 != (long *)0x0);
              }
              else {
                do {
                  ppplVar13 = (long ***)plVar19[1];
                  if (ppplVar13 != ppplVar6) {
                    if (ppplVar26 <= ppplVar13) {
                      uVar28 = 0;
                      if (ppplVar26 != (long ***)0x0) {
                        uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                      }
                      ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                    }
                    if (ppplVar13 != unaff_x21) break;
                  }
                  bVar3 = *(byte *)(plVar19 + 2);
                  pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                  if ((bVar3 & 1) != 0) {
                    pppplVar29 = (long ****)plVar19[3];
                  }
                  if (pppplVar29 == pppplVar8) {
                    if ((bVar3 & 1) == 0) {
                      pcVar25 = (char *)((long)plVar19 + 0x11);
                      lVar20 = -(long)(ulong)(bVar3 >> 1);
                      pppplVar29 = pppplVar5;
                      while (*pcVar25 == *(char *)pppplVar29) {
                        pcVar25 = pcVar25 + 1;
                        pppplVar29 = (long ****)((long)pppplVar29 + 1);
                        lVar20 = lVar20 + 1;
                        if (lVar20 == 0) goto LAB_71037eb4bc;
                      }
                    }
                    else {
                      iVar4 = memcmp((void *)plVar19[4],pppplVar5,(size_t)pppplVar8);
                      if (iVar4 == 0) goto LAB_71037eb4bc;
                    }
                  }
                  plVar19 = (long *)*plVar19;
                } while (plVar19 != (long *)0x0);
              }
            }
          }
          iVar4 = FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6
                                 ,param_7,param_8);
          if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_118 = (long ****)&DAT_00000058;
            uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118);
            if ((uVar28 & 1) != 0) {
              FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6,
                             param_7,param_8);
            }
          }
          pppplVar8 = local_70[0];
          nu::VirtualAllocHook(0x58,0x10,local_70[0]);
          pppplVar5 = local_70[0];
          local_70[0][3] = (long ***)local_e8;
          local_70[0][4] = (long ***)local_e0;
          local_70[0][2] = (long ***)local_f0;
          local_e8 = (long ****)0x0;
          local_e0 = (long ****)0x0;
          local_f0 = (long ****)0x0;
          local_70[0][6] = (long ***)local_d0;
          local_70[0][7] = (long ***)local_c8;
          local_70[0][5] = (long ***)local_d8;
          local_d8 = (undefined1  [8])0x0;
          local_d0 = (undefined1  [8])0x0;
          local_c8 = (long ****)0x0;
          local_70[0][8] = (long ***)local_c0;
          local_70[0][9] = local_b8;
          *(undefined4 *)(local_70[0] + 10) = local_b0;
          *local_70[0] = (long ***)0x0;
          local_70[0][1] = ppplVar6;
          fVar30 = (float)(*(long *)(param_2 + 0x60) + 1);
          if ((ppplVar26 == (long ***)0x0) ||
             (*(float *)(param_2 + 0x68) * (float)ppplVar26 < fVar30)) {
            if (ppplVar26 < (long ***)0x3) {
              uVar28 = 1;
            }
            else {
              uVar28 = (ulong)(((long)ppplVar26 - 1U & (ulong)ppplVar26) != 0);
            }
            uVar22 = (ulong)(fVar30 / *(float *)(param_2 + 0x68));
            uVar28 = uVar28 | (long)ppplVar26 << 1;
            if (uVar22 <= uVar28) {
              uVar22 = uVar28;
            }
            FUN_71037ee200(plVar2,uVar22,pppplVar8,ppppbVar9,pppplVar10,param_6,param_7,param_8);
            ppplVar26 = *(long ****)(param_2 + 0x50);
            if (((long)ppplVar26 - 1U & (ulong)ppplVar26) == 0) {
              unaff_x21 = (long ***)((long)ppplVar26 - 1U & (ulong)ppplVar6);
            }
            else {
              unaff_x21 = ppplVar6;
              if (ppplVar26 <= ppplVar6) {
                uVar28 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
                }
                unaff_x21 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
              }
            }
          }
          puVar16 = *(ulong **)(*plVar2 + (long)unaff_x21 * 8);
          if (puVar16 == (ulong *)0x0) {
            *pppplVar5 = (long ***)*puVar1;
            *puVar1 = (ulong)pppplVar5;
            *(ulong **)(*plVar2 + (long)unaff_x21 * 8) = puVar1;
            if (*pppplVar5 != (long ***)0x0) {
              ppplVar6 = (long ***)(*pppplVar5)[1];
              if (((long)ppplVar26 - 1U & (ulong)ppplVar26) == 0) {
                ppplVar6 = (long ***)((ulong)ppplVar6 & (long)ppplVar26 - 1U);
              }
              else if (ppplVar26 <= ppplVar6) {
                uVar28 = 0;
                if (ppplVar26 != (long ***)0x0) {
                  uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
                }
                ppplVar6 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
              }
              puVar16 = (ulong *)(*plVar2 + (long)ppplVar6 * 8);
              goto LAB_71037eb4a8;
            }
          }
          else {
            *pppplVar5 = (long ***)*puVar16;
LAB_71037eb4a8:
            *puVar16 = (ulong)pppplVar5;
          }
          *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_71037eb4bc:
          pppplVar5 = local_c8;
          if (((ulong)local_d8 & 1) != 0) {
            nu::VirtualFreeHook(local_c8);
            FUN_710392eb40((ulong)pppplVar5);
          }
          pppplVar5 = local_e0;
          if (((ulong)local_f0 & 1) != 0) {
            nu::VirtualFreeHook(local_e0);
            FUN_710392eb40((ulong)pppplVar5);
          }
          pppplVar5 = (long ****)((ulong)&local_a8 | 1);
          if (((ulong)local_a8 & 1) != 0) {
            pppplVar5 = local_98;
          }
          iVar4 = strcmp((char *)pppplVar5,"DiffuseMap");
          if (iVar4 == 0) {
            ppuVar14 = &PTR_s_DiffuseMap_7105265428;
LAB_71037eba2c:
            pcVar25 = ppuVar14[1];
            local_118 = (long ****)((ulong)local_118 & 0xffffffff00000000);
            local_110 = (long ****)0x0;
            pppplVar5 = (long ****)strlen(pcVar25);
            if (pppplVar5 < (long ****)0x16 || (long)pppplVar5 - 0x16U == 0) {
              if (pppplVar5 != (long ****)0x0) {
                memmove((void *)((long)&local_110 + 1),pcVar25,(size_t)pppplVar5);
              }
              *(undefined1 *)((long)&local_110 + 1 + (long)pppplVar5) = 0;
              uVar28 = (ulong)local_110 & 0xff;
              if (((ulong)local_110 & 1) == 0) {
                uVar28 = 0;
                local_110 = (long ****)CONCAT71(local_110._1_7_,(char)((int)pppplVar5 << 1));
                pppplVar5 = local_108;
              }
            }
            else {
              ppppbVar9 = (byte ****)0x0;
              pppplVar10 = (long ****)0x0;
              param_6 = 0;
              FUN_71037cfe00(&local_110,0x16,(long)pppplVar5 - 0x16U,(byte ****)0x0,(long ****)0x0,0
                             ,(size_t)pppplVar5,pcVar25);
              uVar28 = (ulong)local_110 & 0xff;
              param_7 = pppplVar5;
              param_8 = pcVar25;
              pppplVar5 = local_108;
            }
            local_108 = pppplVar5;
            pppplVar8 = local_100;
            pppplVar5 = local_108;
            local_f8 = uStack_8c;
            local_e8 = (long ****)0x0;
            local_e0 = (long ****)0x0;
            local_118 = (long ****)CONCAT44(local_118._4_4_,1);
            local_f0 = (long ****)0x0;
            if ((uVar28 & 1) == 0) {
              local_f0 = local_110;
              local_e8 = local_108;
              local_e0 = local_100;
              uVar12 = 1;
            }
            else {
              if ((long ****)0xffffffffffffffef < local_108) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (local_108 < (long ****)0x17) {
                local_f0 = (long ****)(ulong)(byte)((int)local_108 << 1);
                pppplVar29 = pppplVar18;
                if (local_108 != (long ****)0x0) goto LAB_71037ebb90;
              }
              else {
                pppplVar29 = (long ****)((ulong)(local_108 + 2) & 0xfffffffffffffff0);
                iVar4 = FUN_710392e1f0(&local_78,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,
                                       param_7,param_8);
                if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                   (local_70[0] = pppplVar29,
                   uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
                   (uVar28 & 1) != 0)) {
                  FUN_710392e1f0(&local_78,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                 param_8);
                }
                nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_78);
                local_f0 = (long ****)((ulong)pppplVar29 | 1);
                local_e8 = pppplVar5;
                local_e0 = local_78;
                pppplVar29 = local_78;
LAB_71037ebb90:
                memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
              }
              *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
              uVar28 = (ulong)local_110 & 0xff;
              uVar12 = local_118._0_4_;
            }
            pppplVar8 = local_100;
            pppplVar5 = local_108;
            local_d8._0_4_ = uVar12;
            local_c8 = (long ****)0x0;
            local_c0 = (long ****)0x0;
            local_d0 = (undefined1  [8])0x0;
            if ((uVar28 & 1) == 0) {
              local_d0 = (undefined1  [8])local_110;
              local_c8 = local_108;
              local_c0 = local_100;
            }
            else {
              if ((long ****)0xffffffffffffffef < local_108) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (local_108 < (long ****)0x17) {
                local_d0._1_7_ = 0;
                local_d0[0] = (byte)((int)local_108 << 1);
                pppplVar29 = (long ****)(local_d0 + 1);
                if (local_108 != (long ****)0x0) goto LAB_71037ebc7c;
              }
              else {
                pppplVar29 = (long ****)((ulong)(local_108 + 2) & 0xfffffffffffffff0);
                iVar4 = FUN_710392e1f0(&local_78,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,
                                       param_7,param_8);
                if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                   (local_70[0] = pppplVar29,
                   uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
                   (uVar28 & 1) != 0)) {
                  FUN_710392e1f0(&local_78,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                 param_8);
                }
                nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_78);
                local_d0 = (undefined1  [8])((ulong)pppplVar29 | 1);
                local_c8 = pppplVar5;
                local_c0 = local_78;
                pppplVar29 = local_78;
LAB_71037ebc7c:
                memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
              }
              *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
            }
            local_b8 = (long ***)CONCAT44(local_b8._4_4_,local_f8);
            pppplVar5 = pppplVar18;
            pppplVar8 = (long ****)((ulong)local_f0 >> 1 & 0x7f);
            if (((ulong)local_f0 & 1) != 0) {
              pppplVar5 = local_e0;
              pppplVar8 = local_e8;
            }
            ppplVar26 = (long ***)FUN_7102677830((ulong *)pppplVar5,(ulong)pppplVar8);
            ppplVar13 = *(long ****)(param_2 + 0x78);
            ppplVar6 = (long ***)&local_110;
            if (ppplVar13 != (long ***)0x0) {
              uVar28 = (long)ppplVar13 - 1;
              if ((uVar28 & (ulong)ppplVar13) == 0) {
                ppplVar6 = (long ***)(uVar28 & (ulong)ppplVar26);
              }
              else {
                ppplVar6 = ppplVar26;
                if (ppplVar13 <= ppplVar26) {
                  uVar22 = 0;
                  if (ppplVar13 != (long ***)0x0) {
                    uVar22 = (ulong)ppplVar26 / (ulong)ppplVar13;
                  }
                  ppplVar6 = (long ***)((long)ppplVar26 - uVar22 * (long)ppplVar13);
                }
              }
              plVar19 = *(long **)(*plVar21 + (long)ppplVar6 * 8);
              if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0))
              {
                if ((uVar28 & (ulong)ppplVar13) == 0) {
                  if (pppplVar8 == (long ****)0x0) {
                    do {
                      if ((long ***)plVar19[1] != ppplVar26 &&
                          (long ***)((ulong)plVar19[1] & uVar28) != ppplVar6) break;
                      uVar22 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
                      if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                        uVar22 = plVar19[3];
                      }
                      if (uVar22 == 0) goto LAB_71037ec144;
                      plVar19 = (long *)*plVar19;
                    } while (plVar19 != (long *)0x0);
                  }
                  else {
                    do {
                      if ((long ***)plVar19[1] != ppplVar26 &&
                          (long ***)((ulong)plVar19[1] & uVar28) != ppplVar6) break;
                      bVar3 = *(byte *)(plVar19 + 2);
                      pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                      if ((bVar3 & 1) != 0) {
                        pppplVar29 = (long ****)plVar19[3];
                      }
                      if (pppplVar29 == pppplVar8) {
                        if ((bVar3 & 1) == 0) {
                          pcVar25 = (char *)((long)plVar19 + 0x11);
                          lVar20 = -(long)(ulong)(bVar3 >> 1);
                          pppplVar29 = pppplVar5;
                          while (*pcVar25 == *(char *)pppplVar29) {
                            pcVar25 = pcVar25 + 1;
                            pppplVar29 = (long ****)((long)pppplVar29 + 1);
                            lVar20 = lVar20 + 1;
                            if (lVar20 == 0) goto LAB_71037ec144;
                          }
                        }
                        else {
                          iVar4 = memcmp((void *)plVar19[4],pppplVar5,(size_t)pppplVar8);
                          if (iVar4 == 0) goto LAB_71037ec144;
                        }
                      }
                      plVar19 = (long *)*plVar19;
                    } while (plVar19 != (long *)0x0);
                  }
                }
                else if (pppplVar8 == (long ****)0x0) {
                  do {
                    ppplVar15 = (long ***)plVar19[1];
                    if (ppplVar15 != ppplVar26) {
                      if (ppplVar13 <= ppplVar15) {
                        uVar28 = 0;
                        if (ppplVar13 != (long ***)0x0) {
                          uVar28 = (ulong)ppplVar15 / (ulong)ppplVar13;
                        }
                        ppplVar15 = (long ***)((long)ppplVar15 - uVar28 * (long)ppplVar13);
                      }
                      if (ppplVar15 != ppplVar6) break;
                    }
                    uVar28 = (ulong)(*(byte *)(plVar19 + 2) >> 1);
                    if ((*(byte *)(plVar19 + 2) & 1) != 0) {
                      uVar28 = plVar19[3];
                    }
                    if (uVar28 == 0) goto LAB_71037ec144;
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
                else {
                  do {
                    ppplVar15 = (long ***)plVar19[1];
                    if (ppplVar15 != ppplVar26) {
                      if (ppplVar13 <= ppplVar15) {
                        uVar28 = 0;
                        if (ppplVar13 != (long ***)0x0) {
                          uVar28 = (ulong)ppplVar15 / (ulong)ppplVar13;
                        }
                        ppplVar15 = (long ***)((long)ppplVar15 - uVar28 * (long)ppplVar13);
                      }
                      if (ppplVar15 != ppplVar6) break;
                    }
                    bVar3 = *(byte *)(plVar19 + 2);
                    pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                    if ((bVar3 & 1) != 0) {
                      pppplVar29 = (long ****)plVar19[3];
                    }
                    if (pppplVar29 == pppplVar8) {
                      if ((bVar3 & 1) == 0) {
                        pcVar25 = (char *)((long)plVar19 + 0x11);
                        lVar20 = -(long)(ulong)(bVar3 >> 1);
                        pppplVar29 = pppplVar5;
                        while (*pcVar25 == *(char *)pppplVar29) {
                          pcVar25 = pcVar25 + 1;
                          pppplVar29 = (long ****)((long)pppplVar29 + 1);
                          lVar20 = lVar20 + 1;
                          if (lVar20 == 0) goto LAB_71037ec144;
                        }
                      }
                      else {
                        iVar4 = memcmp((void *)plVar19[4],pppplVar5,(size_t)pppplVar8);
                        if (iVar4 == 0) goto LAB_71037ec144;
                      }
                    }
                    plVar19 = (long *)*plVar19;
                  } while (plVar19 != (long *)0x0);
                }
              }
            }
            iVar4 = FUN_710392e1f0(&local_78,0x10,(long ****)&DAT_00000050,ppppbVar9,pppplVar10,
                                   param_6,param_7,param_8);
            if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_70[0] = (long ****)&DAT_00000050;
              uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70);
              if ((uVar28 & 1) != 0) {
                FUN_710392e1f0(&local_78,0x10,(long ****)&DAT_00000050,ppppbVar9,pppplVar10,param_6,
                               param_7,param_8);
              }
            }
            pppplVar8 = local_78;
            nu::VirtualAllocHook(0x50,0x10,local_78);
            pppplVar5 = local_78;
            local_78[3] = (long ***)local_e8;
            local_78[4] = (long ***)local_e0;
            local_78[2] = (long ***)local_f0;
            local_f0 = (long ****)0x0;
            local_e8 = (long ****)0x0;
            local_e0 = (long ****)0x0;
            *(undefined4 *)(local_78 + 5) = local_d8._0_4_;
            local_78[7] = (long ***)local_c8;
            local_78[8] = (long ***)local_c0;
            local_78[6] = (long ***)local_d0;
            local_c8 = (long ****)0x0;
            local_c0 = (long ****)0x0;
            local_d0 = (undefined1  [8])0x0;
            *local_78 = (long ***)0x0;
            local_78[1] = ppplVar26;
            *(undefined4 *)(local_78 + 9) = local_b8._0_4_;
            fVar30 = (float)(*(long *)(param_2 + 0x88) + 1);
            if ((ppplVar13 == (long ***)0x0) ||
               (*(float *)(param_2 + 0x90) * (float)ppplVar13 < fVar30)) {
              if (ppplVar13 < (long ***)0x3) {
                uVar28 = 1;
              }
              else {
                uVar28 = (ulong)(((long)ppplVar13 - 1U & (ulong)ppplVar13) != 0);
              }
              uVar28 = uVar28 | (long)ppplVar13 << 1;
              uVar22 = (ulong)(fVar30 / *(float *)(param_2 + 0x90));
              if (uVar22 <= uVar28) {
                uVar22 = uVar28;
              }
              if (uVar22 - 1 == 0) {
                uVar22 = 2;
              }
              else if ((uVar22 - 1 & uVar22) != 0) {
                uVar22 = std::__next_prime(uVar22);
              }
              uVar28 = *(ulong *)(param_2 + 0x78);
              if (uVar28 < uVar22) {
                FUN_71037ee2f0(plVar21,uVar22,pppplVar8,ppppbVar9,pppplVar10,param_6,param_7,param_8
                              );
              }
              else if (uVar22 < uVar28) {
                uVar7 = (ulong)((float)*(ulong *)(param_2 + 0x88) / *(float *)(param_2 + 0x90));
                if (uVar28 < 3 || (uVar28 - 1 & uVar28) != 0) {
                  uVar7 = std::__next_prime(uVar7);
                }
                else if (1 < uVar7) {
                  uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
                }
                if (uVar7 <= uVar22) {
                  uVar7 = uVar22;
                }
                if (uVar7 < uVar28) {
                  FUN_71037ee2f0(plVar21,uVar7,pppplVar8,ppppbVar9,pppplVar10,param_6,param_7,
                                 param_8);
                }
              }
              ppplVar13 = *(long ****)(param_2 + 0x78);
              if (((long)ppplVar13 - 1U & (ulong)ppplVar13) == 0) {
                ppplVar6 = (long ***)((long)ppplVar13 - 1U & (ulong)ppplVar26);
              }
              else {
                ppplVar6 = ppplVar26;
                if (ppplVar13 <= ppplVar26) {
                  uVar28 = 0;
                  if (ppplVar13 != (long ***)0x0) {
                    uVar28 = (ulong)ppplVar26 / (ulong)ppplVar13;
                  }
                  ppplVar6 = (long ***)((long)ppplVar26 - uVar28 * (long)ppplVar13);
                }
              }
            }
            puVar16 = *(ulong **)(*plVar21 + (long)ppplVar6 * 8);
            if (puVar16 == (ulong *)0x0) {
              *pppplVar5 = (long ***)*puVar17;
              *puVar17 = (ulong)pppplVar5;
              *(ulong **)(*plVar21 + (long)ppplVar6 * 8) = puVar17;
              if (*pppplVar5 != (long ***)0x0) {
                ppplVar6 = (long ***)(*pppplVar5)[1];
                if (((long)ppplVar13 - 1U & (ulong)ppplVar13) == 0) {
                  ppplVar6 = (long ***)((ulong)ppplVar6 & (long)ppplVar13 - 1U);
                }
                else if (ppplVar13 <= ppplVar6) {
                  uVar28 = 0;
                  if (ppplVar13 != (long ***)0x0) {
                    uVar28 = (ulong)ppplVar6 / (ulong)ppplVar13;
                  }
                  ppplVar6 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar13);
                }
                puVar16 = (ulong *)(*plVar21 + (long)ppplVar6 * 8);
                goto LAB_71037ec130;
              }
            }
            else {
              *pppplVar5 = (long ***)*puVar16;
LAB_71037ec130:
              *puVar16 = (ulong)pppplVar5;
            }
            *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x88) + 1;
LAB_71037ec144:
            pppplVar5 = local_c0;
            if (((ulong)local_d0 & 1) != 0) {
              nu::VirtualFreeHook(local_c0);
              FUN_710392eb40((ulong)pppplVar5);
            }
            pppplVar5 = local_e0;
            if (((ulong)local_f0 & 1) != 0) {
              nu::VirtualFreeHook(local_e0);
              FUN_710392eb40((ulong)pppplVar5);
            }
            pppplVar5 = local_100;
            if (((ulong)local_110 & 1) != 0) {
              nu::VirtualFreeHook(local_100);
              FUN_710392eb40((ulong)pppplVar5);
            }
          }
          else {
            iVar4 = strcmp((char *)pppplVar5,"DiffuseMapLayer1");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_DiffuseMapLayer1_7105265438;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"DiffuseMapLayer2");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_DiffuseMapLayer2_7105265448;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"SpecularMap");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_SpecularMap_7105265458;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"SpecularMapLayer1");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_SpecularMapLayer1_7105265468;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"SpecularMapLayer2");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_SpecularMapLayer2_7105265478;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"NormalMap");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_NormalMap_7105265488;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"NormalMapLayer1");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_NormalMapLayer1_7105265498;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"NormalMapLayer2");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_NormalMapLayer2_71052654a8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ReflectionMap");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ReflectionMap_71052654b8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ReflectionCubeMap");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ReflectionCubeMap_71052654c8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap0");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap0_71052654d8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap1");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap1_71052654e8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap2");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap2_71052654f8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap3");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap3_7105265508;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap4");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap4_7105265518;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap5");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap5_7105265528;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap6");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap6_7105265538;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"ShadowMap7");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_ShadowMap7_7105265548;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture0");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture0_7105265558;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture1");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture1_7105265568;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture2");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture2_7105265578;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture3");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture3_7105265588;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture4");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture4_7105265598;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture5");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture5_71052655a8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture6");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture6_71052655b8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture7");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture7_71052655c8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture8");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture8_71052655d8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture9");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture9_71052655e8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture10");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture10_71052655f8;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture11");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture11_7105265608;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture12");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture12_7105265618;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture13");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture13_7105265628;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture14");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture14_7105265638;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture15");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture15_7105265648;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture16");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture16_7105265658;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture17");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture17_7105265668;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture18");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture18_7105265678;
              goto LAB_71037eba2c;
            }
            iVar4 = strcmp((char *)pppplVar5,"Texture19");
            if (iVar4 == 0) {
              ppuVar14 = &PTR_s_Texture19_7105265688;
              goto LAB_71037eba2c;
            }
          }
          unaff_x21 = (long ***)0x1;
          pppplVar5 = local_98;
        }
        if (((ulong)local_a8 & 1) != 0) {
          local_98 = pppplVar5;
          nu::VirtualFreeHook(pppplVar5);
          FUN_710392eb40((ulong)pppplVar5);
        }
        if ((int)unaff_x21 != 0) goto LAB_71037ec1f4;
      }
      else {
LAB_71037ec1f4:
        puVar24 = puVar24 + 0x29;
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(uint *)((long)param_4 + 0x34));
  }
  if (*(int *)((long)param_4 + 0x2c) != 0) {
    plVar2 = (long *)(param_2 + 0x48);
    pppplVar18 = (long ****)((ulong)&local_f0 | 1);
    uVar23 = 0;
    puVar24 = (uint *)((ulong)*(uint *)(param_4 + 6) + param_3);
    puVar1 = (ulong *)(param_2 + 0x58);
    do {
      local_80 = 0;
      local_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_a8 = (long ****)0x0;
      local_a0 = (long ****)0x0;
      local_98 = (long ****)0x0;
      pcVar25 = (char *)((long)param_5 + (ulong)*puVar24);
      pppplVar5 = (long ****)strlen(pcVar25);
      if (pppplVar5 < (long ****)0x16 || (long)pppplVar5 - 0x16U == 0) {
        if (pppplVar5 != (long ****)0x0) {
          memcpy((void *)((ulong)&local_a8 | 1),pcVar25,(size_t)pppplVar5);
        }
        *(undefined1 *)((long)&local_a8 + 1 + (long)pppplVar5) = 0;
        if (((ulong)local_a8 & 1) == 0) {
          local_a8 = (long ****)CONCAT71(local_a8._1_7_,(char)((int)pppplVar5 << 1));
          pppplVar5 = local_a0;
        }
      }
      else {
        ppppbVar9 = (byte ****)0x0;
        pppplVar10 = (long ****)0x0;
        param_6 = 0;
        FUN_71037cfe00(&local_a8,0x16,(long)pppplVar5 - 0x16U,(byte ****)0x0,(long ****)0x0,0,
                       (size_t)pppplVar5,pcVar25);
        param_7 = pppplVar5;
        param_8 = pcVar25;
        pppplVar5 = local_a0;
      }
      local_a0 = pppplVar5;
      pppplVar8 = local_98;
      pppplVar5 = local_a0;
      local_88 = puVar24[10];
      local_84 = puVar24[0xb];
      local_80 = 0;
      local_90 = 1;
      uStack_8c = 0xffffffff;
      uVar11 = puVar24[0xd];
      if (((((uVar11 != 0xffffffff) || (uVar11 = puVar24[0xe], uVar11 != 0xffffffff)) ||
           (uVar11 = puVar24[0xf], uVar11 != 0xffffffff)) ||
          ((uVar11 = puVar24[0x10], uVar11 != 0xffffffff ||
           (uVar11 = puVar24[0x11], uVar11 != 0xffffffff)))) ||
         (uVar11 = puVar24[0x12], uVar11 != 0xffffffff)) {
        local_f0 = (long ****)0x0;
        local_e8 = (long ****)0x0;
        local_e0 = (long ****)0x0;
        uStack_8c = uVar11;
        if (((ulong)local_a8 & 1) == 0) {
          local_e8 = local_a0;
          local_e0 = local_98;
          local_f0 = local_a8;
        }
        else {
          if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_a0 < (long ****)0x17) {
            local_f0 = (long ****)(ulong)(byte)((int)local_a0 << 1);
            pppplVar29 = pppplVar18;
            if (local_a0 != (long ****)0x0) goto LAB_71037ec42c;
          }
          else {
            pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
            iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                   param_8);
            if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_118 = pppplVar29,
               uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
               (uVar28 & 1) != 0)) {
              FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
            local_f0 = (long ****)((ulong)pppplVar29 | 1);
            local_e8 = pppplVar5;
            local_e0 = local_70[0];
            pppplVar29 = local_70[0];
LAB_71037ec42c:
            memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
          }
          *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
        }
        pppplVar8 = local_98;
        pppplVar5 = local_a0;
        local_d0 = (undefined1  [8])0x0;
        local_c8 = (long ****)0x0;
        local_d8 = (undefined1  [8])0x0;
        if (((byte)local_a8 & 1) == 0) {
          local_c8 = local_98;
          local_d8 = (undefined1  [8])local_a8;
          local_d0 = (undefined1  [8])local_a0;
        }
        else {
          if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_a0 < (long ****)0x17) {
            local_d8._1_7_ = 0;
            local_d8[0] = (byte)((int)local_a0 << 1);
            pppplVar29 = (long ****)(local_d8 + 1);
            if (local_a0 != (long ****)0x0) goto LAB_71037ec510;
          }
          else {
            pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
            iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                   param_8);
            if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_118 = pppplVar29,
               uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
               (uVar28 & 1) != 0)) {
              FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
            local_d8 = (undefined1  [8])((ulong)pppplVar29 | 1);
            local_d0 = (undefined1  [8])pppplVar5;
            local_c8 = local_70[0];
            pppplVar29 = local_70[0];
LAB_71037ec510:
            memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
          }
          *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
        }
        local_c0 = (long ****)CONCAT44(uStack_8c,local_90);
        local_b8 = (long ***)CONCAT44(local_84,local_88);
        local_b0 = local_80;
        pppplVar5 = pppplVar18;
        pppplVar8 = (long ****)((ulong)local_f0 >> 1 & 0x7f);
        if (((ulong)local_f0 & 1) != 0) {
          pppplVar5 = local_e0;
          pppplVar8 = local_e8;
        }
        ppplVar6 = (long ***)FUN_7102677830((ulong *)pppplVar5,(ulong)pppplVar8);
        ppplVar26 = *(long ****)(param_2 + 0x50);
        if (ppplVar26 != (long ***)0x0) {
          puVar27 = (undefined1 *)((long)ppplVar26 + -1);
          if (((ulong)puVar27 & (ulong)ppplVar26) == 0) {
            unaff_x22 = (long ***)((ulong)puVar27 & (ulong)ppplVar6);
          }
          else {
            unaff_x22 = ppplVar6;
            if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              unaff_x22 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
          }
          plVar21 = *(long **)(*plVar2 + (long)unaff_x22 * 8);
          if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
            if (((ulong)puVar27 & (ulong)ppplVar26) == 0) {
              if (pppplVar8 == (long ****)0x0) {
                do {
                  if ((long ***)plVar21[1] != ppplVar6 &&
                      (long ***)((ulong)plVar21[1] & (ulong)puVar27) != unaff_x22) break;
                  uVar28 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
                  if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                    uVar28 = plVar21[3];
                  }
                  if (uVar28 == 0) goto LAB_71037ec934;
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
              else {
                do {
                  if ((long ***)plVar21[1] != ppplVar6 &&
                      (long ***)((ulong)plVar21[1] & (ulong)puVar27) != unaff_x22) break;
                  bVar3 = *(byte *)(plVar21 + 2);
                  pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                  if ((bVar3 & 1) != 0) {
                    pppplVar29 = (long ****)plVar21[3];
                  }
                  if (pppplVar29 == pppplVar8) {
                    if ((bVar3 & 1) == 0) {
                      pcVar25 = (char *)((long)plVar21 + 0x11);
                      lVar20 = -(long)(ulong)(bVar3 >> 1);
                      pppplVar29 = pppplVar5;
                      while (*pcVar25 == *(char *)pppplVar29) {
                        pcVar25 = pcVar25 + 1;
                        pppplVar29 = (long ****)((long)pppplVar29 + 1);
                        lVar20 = lVar20 + 1;
                        if (lVar20 == 0) goto LAB_71037ec934;
                      }
                    }
                    else {
                      iVar4 = memcmp((void *)plVar21[4],pppplVar5,(size_t)pppplVar8);
                      if (iVar4 == 0) goto LAB_71037ec934;
                    }
                  }
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
            }
            else if (pppplVar8 == (long ****)0x0) {
              do {
                ppplVar13 = (long ***)plVar21[1];
                if (ppplVar13 != ppplVar6) {
                  if (ppplVar26 <= ppplVar13) {
                    uVar28 = 0;
                    if (ppplVar26 != (long ***)0x0) {
                      uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                    }
                    ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                  }
                  if (ppplVar13 != unaff_x22) break;
                }
                uVar28 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
                if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                  uVar28 = plVar21[3];
                }
                if (uVar28 == 0) goto LAB_71037ec934;
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
            else {
              do {
                ppplVar13 = (long ***)plVar21[1];
                if (ppplVar13 != ppplVar6) {
                  if (ppplVar26 <= ppplVar13) {
                    uVar28 = 0;
                    if (ppplVar26 != (long ***)0x0) {
                      uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                    }
                    ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                  }
                  if (ppplVar13 != unaff_x22) break;
                }
                bVar3 = *(byte *)(plVar21 + 2);
                pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  pppplVar29 = (long ****)plVar21[3];
                }
                if (pppplVar29 == pppplVar8) {
                  if ((bVar3 & 1) == 0) {
                    pcVar25 = (char *)((long)plVar21 + 0x11);
                    lVar20 = -(long)(ulong)(bVar3 >> 1);
                    pppplVar29 = pppplVar5;
                    while (*pcVar25 == *(char *)pppplVar29) {
                      pcVar25 = pcVar25 + 1;
                      pppplVar29 = (long ****)((long)pppplVar29 + 1);
                      lVar20 = lVar20 + 1;
                      if (lVar20 == 0) goto LAB_71037ec934;
                    }
                  }
                  else {
                    iVar4 = memcmp((void *)plVar21[4],pppplVar5,(size_t)pppplVar8);
                    if (iVar4 == 0) goto LAB_71037ec934;
                  }
                }
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
          }
        }
        iVar4 = FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6,
                               param_7,param_8);
        if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_118 = (long ****)&DAT_00000058;
          uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118);
          if ((uVar28 & 1) != 0) {
            FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6,
                           param_7,param_8);
          }
        }
        pppplVar8 = local_70[0];
        nu::VirtualAllocHook(0x58,0x10,local_70[0]);
        pppplVar5 = local_70[0];
        local_70[0][3] = (long ***)local_e8;
        local_70[0][4] = (long ***)local_e0;
        local_70[0][2] = (long ***)local_f0;
        local_e8 = (long ****)0x0;
        local_e0 = (long ****)0x0;
        local_f0 = (long ****)0x0;
        local_70[0][6] = (long ***)local_d0;
        local_70[0][7] = (long ***)local_c8;
        local_70[0][5] = (long ***)local_d8;
        local_d0 = (undefined1  [8])0x0;
        local_c8 = (long ****)0x0;
        local_d8 = (undefined1  [8])0x0;
        local_70[0][8] = (long ***)local_c0;
        local_70[0][9] = local_b8;
        *(undefined4 *)(local_70[0] + 10) = local_b0;
        *local_70[0] = (long ***)0x0;
        local_70[0][1] = ppplVar6;
        fVar30 = (float)(*(long *)(param_2 + 0x60) + 1);
        if ((ppplVar26 == (long ***)0x0) || (*(float *)(param_2 + 0x68) * (float)ppplVar26 < fVar30)
           ) {
          if (ppplVar26 < (long ***)0x3) {
            uVar28 = 1;
          }
          else {
            uVar28 = (ulong)(((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) != 0);
          }
          uVar22 = (ulong)(fVar30 / *(float *)(param_2 + 0x68));
          uVar28 = uVar28 | (long)ppplVar26 << 1;
          if (uVar22 <= uVar28) {
            uVar22 = uVar28;
          }
          FUN_71037ee200(plVar2,uVar22,pppplVar8,ppppbVar9,pppplVar10,param_6,param_7,param_8);
          ppplVar26 = *(long ****)(param_2 + 0x50);
          if (((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) == 0) {
            unaff_x22 = (long ***)((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar6);
          }
          else {
            unaff_x22 = ppplVar6;
            if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              unaff_x22 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
          }
        }
        puVar17 = *(ulong **)(*plVar2 + (long)unaff_x22 * 8);
        if (puVar17 == (ulong *)0x0) {
          *pppplVar5 = (long ***)*puVar1;
          *puVar1 = (ulong)pppplVar5;
          *(ulong **)(*plVar2 + (long)unaff_x22 * 8) = puVar1;
          if (*pppplVar5 != (long ***)0x0) {
            ppplVar6 = (long ***)(*pppplVar5)[1];
            if (((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) == 0) {
              ppplVar6 = (long ***)((ulong)ppplVar6 & (ulong)((long)ppplVar26 + -1));
            }
            else if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              ppplVar6 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
            puVar17 = (ulong *)(*plVar2 + (long)ppplVar6 * 8);
            goto LAB_71037ec920;
          }
        }
        else {
          *pppplVar5 = (long ***)*puVar17;
LAB_71037ec920:
          *puVar17 = (ulong)pppplVar5;
        }
        *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_71037ec934:
        pppplVar5 = local_c8;
        if (((ulong)local_d8 & 1) != 0) {
          nu::VirtualFreeHook(local_c8);
          FUN_710392eb40((ulong)pppplVar5);
        }
        pppplVar5 = local_e0;
        if (((ulong)local_f0 & 1) != 0) {
          nu::VirtualFreeHook(local_e0);
          FUN_710392eb40((ulong)pppplVar5);
        }
      }
      pppplVar5 = local_98;
      if (((ulong)local_a8 & 1) != 0) {
        nu::VirtualFreeHook(local_98);
        FUN_710392eb40((ulong)pppplVar5);
      }
      uVar23 = uVar23 + 1;
      puVar24 = puVar24 + 0x1b;
    } while (uVar23 < *(uint *)((long)param_4 + 0x2c));
  }
  if (*(int *)((long)param_4 + 0x4c) != 0) {
    plVar2 = (long *)(param_2 + 0x48);
    pppplVar18 = (long ****)((ulong)&local_f0 | 1);
    uVar23 = 0;
    puVar24 = (uint *)((ulong)*(uint *)(param_4 + 10) + param_3);
    puVar1 = (ulong *)(param_2 + 0x58);
    do {
      local_80 = 0;
      local_90 = 0;
      uStack_8c = 0;
      local_88 = 0;
      local_84 = 0;
      local_a8 = (long ****)0x0;
      local_a0 = (long ****)0x0;
      local_98 = (long ****)0x0;
      pcVar25 = (char *)((long)param_5 + (ulong)*puVar24);
      pppplVar5 = (long ****)strlen(pcVar25);
      if (pppplVar5 < (long ****)0x16 || (long)pppplVar5 - 0x16U == 0) {
        if (pppplVar5 != (long ****)0x0) {
          memcpy((void *)((ulong)&local_a8 | 1),pcVar25,(size_t)pppplVar5);
        }
        *(undefined1 *)((long)&local_a8 + 1 + (long)pppplVar5) = 0;
        if (((ulong)local_a8 & 1) == 0) {
          local_a8 = (long ****)CONCAT71(local_a8._1_7_,(char)((int)pppplVar5 << 1));
          pppplVar5 = local_a0;
        }
      }
      else {
        ppppbVar9 = (byte ****)0x0;
        pppplVar10 = (long ****)0x0;
        param_6 = 0;
        FUN_71037cfe00(&local_a8,0x16,(long)pppplVar5 - 0x16U,(byte ****)0x0,(long ****)0x0,0,
                       (size_t)pppplVar5,pcVar25);
        param_7 = pppplVar5;
        param_8 = pcVar25;
        pppplVar5 = local_a0;
      }
      local_a0 = pppplVar5;
      pppplVar8 = local_98;
      pppplVar5 = local_a0;
      local_88 = puVar24[10];
      local_84 = puVar24[0xb];
      local_80 = 0;
      local_90 = 6;
      uStack_8c = 0xffffffff;
      uVar11 = puVar24[0xc];
      if ((((uVar11 != 0xffffffff) || (uVar11 = puVar24[0xd], uVar11 != 0xffffffff)) ||
          (uVar11 = puVar24[0xe], uVar11 != 0xffffffff)) ||
         (((uVar11 = puVar24[0xf], uVar11 != 0xffffffff ||
           (uVar11 = puVar24[0x10], uVar11 != 0xffffffff)) ||
          (uVar11 = puVar24[0x11], uVar11 != 0xffffffff)))) {
        local_f0 = (long ****)0x0;
        local_e8 = (long ****)0x0;
        local_e0 = (long ****)0x0;
        uStack_8c = uVar11;
        if (((ulong)local_a8 & 1) == 0) {
          local_e8 = local_a0;
          local_e0 = local_98;
          local_f0 = local_a8;
        }
        else {
          if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_a0 < (long ****)0x17) {
            local_f0 = (long ****)(ulong)(byte)((int)local_a0 << 1);
            pppplVar29 = pppplVar18;
            if (local_a0 != (long ****)0x0) goto LAB_71037ecbe8;
          }
          else {
            pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
            iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                   param_8);
            if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_118 = pppplVar29,
               uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
               (uVar28 & 1) != 0)) {
              FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
            local_f0 = (long ****)((ulong)pppplVar29 | 1);
            local_e8 = pppplVar5;
            local_e0 = local_70[0];
            pppplVar29 = local_70[0];
LAB_71037ecbe8:
            memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
          }
          *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
        }
        pppplVar8 = local_98;
        pppplVar5 = local_a0;
        local_d0 = (undefined1  [8])0x0;
        local_c8 = (long ****)0x0;
        local_d8 = (undefined1  [8])0x0;
        if (((byte)local_a8 & 1) == 0) {
          local_c8 = local_98;
          local_d8 = (undefined1  [8])local_a8;
          local_d0 = (undefined1  [8])local_a0;
        }
        else {
          if ((long ****)0xffffffffffffffef < local_a0) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (local_a0 < (long ****)0x17) {
            local_d8._1_7_ = 0;
            local_d8[0] = (byte)((int)local_a0 << 1);
            pppplVar29 = (long ****)(local_d8 + 1);
            if (local_a0 != (long ****)0x0) goto LAB_71037ecccc;
          }
          else {
            pppplVar29 = (long ****)((ulong)(local_a0 + 2) & 0xfffffffffffffff0);
            iVar4 = FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,
                                   param_8);
            if (((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_118 = pppplVar29,
               uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118),
               (uVar28 & 1) != 0)) {
              FUN_710392e1f0(local_70,0x10,pppplVar29,ppppbVar9,pppplVar10,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar29,0x10,local_70[0]);
            local_d8 = (undefined1  [8])((ulong)pppplVar29 | 1);
            local_d0 = (undefined1  [8])pppplVar5;
            local_c8 = local_70[0];
            pppplVar29 = local_70[0];
LAB_71037ecccc:
            memcpy(pppplVar29,pppplVar8,(size_t)pppplVar5);
          }
          *(undefined1 *)((long)pppplVar29 + (long)pppplVar5) = 0;
        }
        local_c0 = (long ****)CONCAT44(uStack_8c,local_90);
        local_b8 = (long ***)CONCAT44(local_84,local_88);
        local_b0 = local_80;
        pppplVar5 = pppplVar18;
        pppplVar8 = (long ****)((ulong)local_f0 >> 1 & 0x7f);
        if (((ulong)local_f0 & 1) != 0) {
          pppplVar5 = local_e0;
          pppplVar8 = local_e8;
        }
        ppplVar6 = (long ***)FUN_7102677830((ulong *)pppplVar5,(ulong)pppplVar8);
        ppplVar26 = *(long ****)(param_2 + 0x50);
        if (ppplVar26 != (long ***)0x0) {
          puVar27 = (undefined1 *)((long)ppplVar26 + -1);
          if (((ulong)puVar27 & (ulong)ppplVar26) == 0) {
            unaff_x22 = (long ***)((ulong)puVar27 & (ulong)ppplVar6);
          }
          else {
            unaff_x22 = ppplVar6;
            if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              unaff_x22 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
          }
          plVar21 = *(long **)(*plVar2 + (long)unaff_x22 * 8);
          if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
            if (((ulong)puVar27 & (ulong)ppplVar26) == 0) {
              if (pppplVar8 == (long ****)0x0) {
                do {
                  if ((long ***)plVar21[1] != ppplVar6 &&
                      (long ***)((ulong)plVar21[1] & (ulong)puVar27) != unaff_x22) break;
                  uVar28 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
                  if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                    uVar28 = plVar21[3];
                  }
                  if (uVar28 == 0) goto LAB_71037ed0f0;
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
              else {
                do {
                  if ((long ***)plVar21[1] != ppplVar6 &&
                      (long ***)((ulong)plVar21[1] & (ulong)puVar27) != unaff_x22) break;
                  bVar3 = *(byte *)(plVar21 + 2);
                  pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                  if ((bVar3 & 1) != 0) {
                    pppplVar29 = (long ****)plVar21[3];
                  }
                  if (pppplVar29 == pppplVar8) {
                    if ((bVar3 & 1) == 0) {
                      pcVar25 = (char *)((long)plVar21 + 0x11);
                      lVar20 = -(long)(ulong)(bVar3 >> 1);
                      pppplVar29 = pppplVar5;
                      while (*pcVar25 == *(char *)pppplVar29) {
                        pcVar25 = pcVar25 + 1;
                        pppplVar29 = (long ****)((long)pppplVar29 + 1);
                        lVar20 = lVar20 + 1;
                        if (lVar20 == 0) goto LAB_71037ed0f0;
                      }
                    }
                    else {
                      iVar4 = memcmp((void *)plVar21[4],pppplVar5,(size_t)pppplVar8);
                      if (iVar4 == 0) goto LAB_71037ed0f0;
                    }
                  }
                  plVar21 = (long *)*plVar21;
                } while (plVar21 != (long *)0x0);
              }
            }
            else if (pppplVar8 == (long ****)0x0) {
              do {
                ppplVar13 = (long ***)plVar21[1];
                if (ppplVar13 != ppplVar6) {
                  if (ppplVar26 <= ppplVar13) {
                    uVar28 = 0;
                    if (ppplVar26 != (long ***)0x0) {
                      uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                    }
                    ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                  }
                  if (ppplVar13 != unaff_x22) break;
                }
                uVar28 = (ulong)(*(byte *)(plVar21 + 2) >> 1);
                if ((*(byte *)(plVar21 + 2) & 1) != 0) {
                  uVar28 = plVar21[3];
                }
                if (uVar28 == 0) goto LAB_71037ed0f0;
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
            else {
              do {
                ppplVar13 = (long ***)plVar21[1];
                if (ppplVar13 != ppplVar6) {
                  if (ppplVar26 <= ppplVar13) {
                    uVar28 = 0;
                    if (ppplVar26 != (long ***)0x0) {
                      uVar28 = (ulong)ppplVar13 / (ulong)ppplVar26;
                    }
                    ppplVar13 = (long ***)((long)ppplVar13 - uVar28 * (long)ppplVar26);
                  }
                  if (ppplVar13 != unaff_x22) break;
                }
                bVar3 = *(byte *)(plVar21 + 2);
                pppplVar29 = (long ****)(ulong)(bVar3 >> 1);
                if ((bVar3 & 1) != 0) {
                  pppplVar29 = (long ****)plVar21[3];
                }
                if (pppplVar29 == pppplVar8) {
                  if ((bVar3 & 1) == 0) {
                    pcVar25 = (char *)((long)plVar21 + 0x11);
                    lVar20 = -(long)(ulong)(bVar3 >> 1);
                    pppplVar29 = pppplVar5;
                    while (*pcVar25 == *(char *)pppplVar29) {
                      pcVar25 = pcVar25 + 1;
                      pppplVar29 = (long ****)((long)pppplVar29 + 1);
                      lVar20 = lVar20 + 1;
                      if (lVar20 == 0) goto LAB_71037ed0f0;
                    }
                  }
                  else {
                    iVar4 = memcmp((void *)plVar21[4],pppplVar5,(size_t)pppplVar8);
                    if (iVar4 == 0) goto LAB_71037ed0f0;
                  }
                }
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
          }
        }
        iVar4 = FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6,
                               param_7,param_8);
        if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_118 = (long ****)&DAT_00000058;
          uVar28 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_118);
          if ((uVar28 & 1) != 0) {
            FUN_710392e1f0(local_70,0x10,(long ****)&DAT_00000058,ppppbVar9,pppplVar10,param_6,
                           param_7,param_8);
          }
        }
        pppplVar8 = local_70[0];
        nu::VirtualAllocHook(0x58,0x10,local_70[0]);
        pppplVar5 = local_70[0];
        local_70[0][3] = (long ***)local_e8;
        local_70[0][4] = (long ***)local_e0;
        local_70[0][2] = (long ***)local_f0;
        local_e8 = (long ****)0x0;
        local_e0 = (long ****)0x0;
        local_f0 = (long ****)0x0;
        local_70[0][6] = (long ***)local_d0;
        local_70[0][7] = (long ***)local_c8;
        local_70[0][5] = (long ***)local_d8;
        local_d0 = (undefined1  [8])0x0;
        local_c8 = (long ****)0x0;
        local_d8 = (undefined1  [8])0x0;
        local_70[0][8] = (long ***)local_c0;
        local_70[0][9] = local_b8;
        *(undefined4 *)(local_70[0] + 10) = local_b0;
        *local_70[0] = (long ***)0x0;
        local_70[0][1] = ppplVar6;
        fVar30 = (float)(*(long *)(param_2 + 0x60) + 1);
        if ((ppplVar26 == (long ***)0x0) || (*(float *)(param_2 + 0x68) * (float)ppplVar26 < fVar30)
           ) {
          if (ppplVar26 < (long ***)0x3) {
            uVar28 = 1;
          }
          else {
            uVar28 = (ulong)(((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) != 0);
          }
          uVar22 = (ulong)(fVar30 / *(float *)(param_2 + 0x68));
          uVar28 = uVar28 | (long)ppplVar26 << 1;
          if (uVar22 <= uVar28) {
            uVar22 = uVar28;
          }
          FUN_71037ee200(plVar2,uVar22,pppplVar8,ppppbVar9,pppplVar10,param_6,param_7,param_8);
          ppplVar26 = *(long ****)(param_2 + 0x50);
          if (((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) == 0) {
            unaff_x22 = (long ***)((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar6);
          }
          else {
            unaff_x22 = ppplVar6;
            if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              unaff_x22 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
          }
        }
        puVar17 = *(ulong **)(*plVar2 + (long)unaff_x22 * 8);
        if (puVar17 == (ulong *)0x0) {
          *pppplVar5 = (long ***)*puVar1;
          *puVar1 = (ulong)pppplVar5;
          *(ulong **)(*plVar2 + (long)unaff_x22 * 8) = puVar1;
          if (*pppplVar5 != (long ***)0x0) {
            ppplVar6 = (long ***)(*pppplVar5)[1];
            if (((ulong)((long)ppplVar26 + -1) & (ulong)ppplVar26) == 0) {
              ppplVar6 = (long ***)((ulong)ppplVar6 & (ulong)((long)ppplVar26 + -1));
            }
            else if (ppplVar26 <= ppplVar6) {
              uVar28 = 0;
              if (ppplVar26 != (long ***)0x0) {
                uVar28 = (ulong)ppplVar6 / (ulong)ppplVar26;
              }
              ppplVar6 = (long ***)((long)ppplVar6 - uVar28 * (long)ppplVar26);
            }
            puVar17 = (ulong *)(*plVar2 + (long)ppplVar6 * 8);
            goto LAB_71037ed0dc;
          }
        }
        else {
          *pppplVar5 = (long ***)*puVar17;
LAB_71037ed0dc:
          *puVar17 = (ulong)pppplVar5;
        }
        *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 1;
LAB_71037ed0f0:
        pppplVar5 = local_c8;
        if (((ulong)local_d8 & 1) != 0) {
          nu::VirtualFreeHook(local_c8);
          FUN_710392eb40((ulong)pppplVar5);
        }
        pppplVar5 = local_e0;
        if (((ulong)local_f0 & 1) != 0) {
          nu::VirtualFreeHook(local_e0);
          FUN_710392eb40((ulong)pppplVar5);
        }
      }
      pppplVar5 = local_98;
      if (((ulong)local_a8 & 1) != 0) {
        nu::VirtualFreeHook(local_98);
        FUN_710392eb40((ulong)pppplVar5);
      }
      uVar23 = uVar23 + 1;
      puVar24 = puVar24 + 0x1b;
    } while (uVar23 < *(uint *)((long)param_4 + 0x4c));
  }
  *param_1 = 0;
  return;
}

