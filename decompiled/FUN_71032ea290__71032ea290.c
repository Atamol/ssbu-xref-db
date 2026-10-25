// addr:      71032ea290
// offset:    0x32ea290
// name:      FUN_71032ea290
// mangled:   
// signature: undefined __cdecl FUN_71032ea290(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032ea290(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  long ****pppplVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  long *plVar14;
  byte ****ppppbVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  uint auStack_150 [2];
  byte ***apppbStack_148 [8];
  undefined **local_108;
  undefined8 local_100;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined1 local_80;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),param_2,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    iVar10 = *(int *)(param_1 + 0xf8);
    if (iVar10 != 6) {
      if ((1 < iVar10 - 2U) &&
         (iVar10 = (uint)(*(char *)(param_1 + 0x108) == '\x06') << 2,
         *(char *)(param_1 + 0x108) == '\x04')) {
        iVar10 = 1;
      }
      local_a8 = *(long **)(param_1 + 0x100);
      local_a0 = *(undefined8 *)(param_1 + 0x108);
      local_98 = *(undefined8 *)(param_1 + 0x110);
      uStack_90 = *(undefined8 *)(param_1 + 0x118);
      local_b0._0_5_ = CONCAT14(*(undefined1 *)(param_1 + 0x120),iVar10);
      local_88 = *(undefined2 *)(param_1 + 0x121);
      local_84 = *(undefined4 *)(param_1 + 0x124);
      local_80 = *(undefined1 *)(param_1 + 0x128);
      if (*(char *)(param_1 + 0x163) == '\0') {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0xc);
        param_3 = (long *********)(ulong)uVar1;
        if ((int)uVar1 < 0x500000) {
          if ((int)uVar1 < 0x250000) {
            if ((int)uVar1 < 0x200000) {
              if ((int)uVar1 < 0x150000) {
                if ((int)uVar1 < 0x100000) {
                  if ((int)uVar1 < 0xfe000) {
                    if ((int)uVar1 < 0x50000) {
                      if ((int)uVar1 < 0x10000) {
                        iVar10 = 3;
                        if (0 < (int)uVar1) {
                          iVar10 = 0;
                        }
                      }
                      else {
                        iVar10 = 1;
                      }
                    }
                    else {
                      iVar10 = 2;
                    }
                  }
                  else {
                    iVar10 = 8;
                  }
                }
                else {
                  iVar10 = 4;
                }
              }
              else {
                iVar10 = 6;
              }
            }
            else {
              iVar10 = 5;
            }
          }
          else {
            iVar10 = 7;
          }
        }
        else {
          iVar10 = 9;
        }
        FUN_7103775dc0(*(long **)**(undefined8 **)(param_1 + 0x140),iVar10,(long ****)param_3,
                       param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(param_1 + 0x163) = 1;
      }
      plVar14 = *(long **)(param_1 + 0x148);
      uVar6 = (**(code **)(*plVar14 + 0x28))(plVar14);
      if ((uVar6 & 1) == 0) {
        FUN_7101b16690(plVar14[4],(int *)&local_b0,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      plVar14 = *(long **)(param_1 + 0x148);
LAB_71032eaa88:
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
      FUN_71032eb9f0(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8),1,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      return;
    }
    if (*(char *)(param_1 + 0x160) == '\0') {
      if (*(char *)(param_1 + 0x164) == '\0') {
        uVar1 = *(uint *)(*(long *)(param_1 + 0x158) + 0xc);
        param_3 = (long *********)(ulong)uVar1;
        if ((int)uVar1 < 0x500000) {
          if ((int)uVar1 < 0x250000) {
            if ((int)uVar1 < 0x200000) {
              if ((int)uVar1 < 0x150000) {
                if ((int)uVar1 < 0x100000) {
                  if ((int)uVar1 < 0xfe000) {
                    if ((int)uVar1 < 0x50000) {
                      if ((int)uVar1 < 0x10000) {
                        iVar10 = 3;
                        if (0 < (int)uVar1) {
                          iVar10 = 0;
                        }
                      }
                      else {
                        iVar10 = 1;
                      }
                    }
                    else {
                      iVar10 = 2;
                    }
                  }
                  else {
                    iVar10 = 8;
                  }
                }
                else {
                  iVar10 = 4;
                }
              }
              else {
                iVar10 = 6;
              }
            }
            else {
              iVar10 = 5;
            }
          }
          else {
            iVar10 = 7;
          }
        }
        else {
          iVar10 = 9;
        }
        FUN_7103775dc0(*(long **)**(undefined8 **)(param_1 + 0x150),iVar10,(long ****)param_3,
                       param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(param_1 + 0x164) = 1;
      }
      plVar14 = *(long **)(param_1 + 0x158);
      uVar17 = *(ulong *)(param_1 + 0x130);
      uVar1 = *(uint *)(param_1 + 0x124);
      uVar6 = (**(code **)(*plVar14 + 0x28))(plVar14);
      if ((uVar6 & 1) == 0) {
        lVar11 = plVar14[4];
        *(undefined4 *)(lVar11 + 0xec) = 0;
        *(ulong *)(lVar11 + 0xe0) = uVar17;
        FUN_7103776910(&local_c0,lVar11 + 200,(long ****)"set_txt_string",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
        local_108 = (undefined **)0x0;
        uVar6 = FUN_710324f870(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x338),uVar17);
        ppppbVar15 = (byte ****)(uVar6 & 0xffffffff);
        puVar7 = FUN_710176a460(uVar17);
        FUN_710176b890((uint *)&local_b0,uVar17,param_3,param_4,param_5,param_6,param_7,param_8);
        for (uVar6 = 0; *(char *)((long)&local_a8 + uVar6) != '\0'; uVar6 = uVar6 + 2) {
          *(char *)((long)&local_100 + uVar6) = *(char *)((long)&local_a8 + uVar6);
          if (0x3e < (int)uVar6 + 1U) {
            uVar6 = (ulong)((int)uVar6 + 1);
            break;
          }
          cVar2 = *(char *)((long)&local_a8 + uVar6 + 1);
          if (cVar2 == '\0') {
            uVar6 = uVar6 + 1;
            break;
          }
          *(char *)((long)&local_100 + uVar6 + 1) = cVar2;
        }
        uVar5 = 0x811c9dc5;
        *(byte *)((long)&local_100 + (uVar6 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_100;
        if ((byte)local_100 != 0) {
          pbVar12 = (byte *)((long)&local_100 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
        local_108 = (undefined **)CONCAT44((int)uVar6,uVar5);
        if ((int)uVar6 == 0) {
          if (*(long **)(local_b8 + 0x10) != (long *)0x0) {
            param_4 = (byte ****)0x0;
            local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
            FUN_71037a2270(*(long **)(local_b8 + 0x10),(ushort *)&local_b0,0,0);
          }
        }
        else if ((((ulong)puVar7 & 0xff00000000000000) == 0xc100000000000000) &&
                (((ulong)puVar7 & 0xffffffffff) != 0)) {
          lVar18 = *(long *)(DAT_710532f730 + 8);
          uVar5 = FUN_7103263540(*(long *)(lVar18 + 0x168),(ulong)puVar7,0,param_4,param_5,param_6,
                                 param_7,param_8);
          FUN_7103262310((uint *)&local_b0,*(long *)(lVar18 + 0x168),(ulong)puVar7);
          FUN_71003a4ca0(auStack_150,"nam_chr1_%02d_%s",(ulong)uVar5,&local_a8,param_4,param_5,
                         param_6,param_7,param_8);
          param_4 = apppbStack_148;
          FUN_710377a280((long)&local_c0,(byte *)&local_100,1);
        }
        else {
          FUN_710377a280((long)&local_c0,(byte *)&local_100,1);
          param_4 = ppppbVar15;
        }
        uVar6 = local_b8;
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8 = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_7103771d60(&local_b0,*(long *)(lVar11 + 0xd8),(long ****)0x1,param_4,param_5,param_6,
                       param_7,param_8);
        plVar14 = local_a8;
        plVar16 = (long *)*local_a8;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,0 < (int)uVar1);
          uVar6 = (**(code **)(*plVar16 + 0x200))(plVar16);
          if ((uVar6 & 1) == 0) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)(*plVar16 + 0x210))(plVar16);
            uVar5 = uVar5 ^ 1;
          }
          (**(code **)(*plVar16 + 0x388))(plVar16,uVar5 & 1,0);
        }
        local_b0 = &PTR_FUN_710523d9c8;
        local_a8 = (undefined8 *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar14);
        }
        FUN_7103771d60(&local_b0,*(long *)(lVar11 + 0xd8),(long ****)0x1,param_4,param_5,param_6,
                       param_7,param_8);
        puVar3 = local_a8;
        plVar14 = (long *)*local_a8;
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x208))(plVar14,0 < (int)uVar1);
          uVar6 = (**(code **)(*plVar14 + 0x200))(plVar14);
          if ((uVar6 & 1) == 0) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)(*plVar14 + 0x210))(plVar14);
            uVar5 = uVar5 ^ 1;
          }
          (**(code **)(*plVar14 + 0x388))(plVar14,uVar5 & 1,0);
        }
        local_b0 = &PTR_FUN_710523d9c8;
        local_a8 = (long *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar3);
        }
        pppplVar9 = (long ****)0x1;
        FUN_7103771d60(&local_108,*(long *)(lVar11 + 0xd8),(long ****)0x1,param_4,param_5,param_6,
                       param_7,param_8);
        plVar14 = local_100;
        FUN_710377ad90(&local_b0,*local_100,pppplVar9,param_4,param_5,param_6,param_7,param_8);
        plVar16 = local_a8;
        lVar18 = *local_a8;
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe | 0 < (int)uVar1;
        }
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar16);
        }
        local_108 = &PTR_FUN_710523d9c8;
        local_100 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar14);
        }
        FUN_7103776640(&local_108,lVar11 + 200,(byte ****)"set_parts_btn_skip",pppplVar9,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_b0,(long)&local_108,(long ****)"set_txt_help",pppplVar9,param_4,
                       param_5,param_6,param_7,param_8);
        param_3 = (long *********)0x1;
        param_4 = (byte ****)(ulong)uVar1;
        FUN_710377a280((long)&local_b0,(byte *)"mnu_insert_popup_skip",1);
        uVar6 = (ulong)local_a8;
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8 = (long *)0x0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        uVar6 = (ulong)local_100;
        local_108 = &PTR_FUN_710523d988;
        local_100 = (long *)0x0;
        if (uVar6 != 0) {
          uVar17 = *(ulong *)(uVar6 + 0x18);
          *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar6 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar6);
        }
      }
      plVar14 = *(long **)(param_1 + 0x158);
      goto LAB_71032eaa88;
    }
    lVar11 = (long)(int)*(uint *)(param_1 + 0xe4);
    bVar4 = 0x12 < *(uint *)(param_1 + 0xe4);
    if (*(char *)(param_1 + 0x161) == '\0') {
      if (!bVar4) {
        *(undefined4 *)(param_1 + lVar11 * 4 + 0x98) = 0;
        return;
      }
      goto LAB_71032eaad0;
    }
  }
  else {
    if (*(int *)(param_1 + 0xf8) == 6) {
      auVar19 = (**(code **)(**(long **)(param_1 + 0x158) + 0x28))();
      if ((auVar19._0_8_ & 1) != 0) {
        return;
      }
      lVar11 = *(long *)(param_1 + 0x158);
      FUN_7103775fa0(*(long **)**(undefined8 **)(param_1 + 0x150),auVar19._8_8_,(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      **(uint **)(DAT_710593b988 + 8) =
           **(uint **)(DAT_710593b988 + 8) &
           (1 << (ulong)(*(uint *)(lVar11 + 0x14) & 0x1f) ^ 0xffffffffU);
      *(undefined1 *)(param_1 + 0x164) = 0;
LAB_71032ea420:
      FUN_71032eb9f0(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8),0,param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x148) + 0x28))();
      if ((uVar6 & 1) != 0) {
        return;
      }
      plVar14 = *(long **)(param_1 + 0x148);
      auVar19 = (**(code **)(*plVar14 + 0x28))(plVar14);
      uVar8 = auVar19._8_8_;
      if ((auVar19._0_8_ & 1) == 0) {
        lVar11 = plVar14[4];
        if ((*(char *)(lVar11 + 0x11c) == '\0') && (1 < *(int *)(lVar11 + 0x13c) - 3U)) {
          param_3 = (long *********)0x1;
          uVar6 = 1;
          FUN_7103771d60(&local_b0,*(long *)(lVar11 + 0x140),(long ****)0x1,param_4,param_5,param_6,
                         param_7,param_8);
          plVar14 = local_a8;
          uVar8 = extraout_x1;
          if ((long *)*local_a8 != (long *)0x0) {
            auVar19 = (**(code **)(*(long *)*local_a8 + 0x210))();
            uVar8 = auVar19._8_8_;
            uVar6 = auVar19._0_8_ & 0xffffffff;
          }
          local_b0 = &PTR_FUN_710523d9c8;
          local_a8 = (long *)0x0;
          if (plVar14 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar14);
            uVar8 = extraout_x1_00;
          }
          if ((uVar6 & 1) != 0) goto LAB_71032ea438;
        }
        lVar11 = *(long *)(param_1 + 0x148);
        FUN_7103775fa0(*(long **)**(undefined8 **)(param_1 + 0x140),uVar8,(long ****)param_3,param_4
                       ,param_5,param_6,param_7,param_8);
        **(uint **)(DAT_710593b988 + 8) =
             **(uint **)(DAT_710593b988 + 8) &
             (1 << (ulong)(*(uint *)(lVar11 + 0x14) & 0x1f) ^ 0xffffffffU);
        *(undefined1 *)(param_1 + 0x163) = 0;
        goto LAB_71032ea420;
      }
    }
LAB_71032ea438:
    lVar11 = (long)(int)*(uint *)(param_1 + 0xe4);
    bVar4 = 0x12 < *(uint *)(param_1 + 0xe4);
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + lVar11 * 4 + 0x98) = 2;
    return;
  }
LAB_71032eaad0:
                    /* WARNING: Subroutine does not return */
  abort();
}

