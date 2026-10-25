// addr:      7101ba3e40
// offset:    0x1ba3e40
// name:      FUN_7101ba3e40
// mangled:   
// signature: undefined __cdecl FUN_7101ba3e40(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ba3e40(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *********ppppppppplVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  
  iVar7 = (int)((ulong)(param_2[1] - *param_2) >> 3);
  lVar12 = *(long *)param_1[1];
  plVar15 = *(long **)(*param_1 + 0x78);
  *(int *)(param_1 + 0x2a8) = iVar7;
  uVar8 = (uint)((double)(long)(double)(iVar7 / 0x25) + 1.0);
  if (2 < (int)uVar8) {
    uVar8 = 3;
  }
  ppppbVar6 = (byte ****)(ulong)uVar8;
  lVar12 = lVar12 + 8;
  *(uint *)((long)param_1 + 0x153c) = uVar8;
  FUN_710377a280((long)(param_1 + 0x2a5),(byte *)"mel_wazalist_open_guide_04",1);
  iVar7 = (int)param_1[0x2a8] % 0x24;
  *(int *)((long)param_1 + 0x1544) = iVar7;
  if (*(int *)((long)param_1 + 0x153c) == 1) {
    if (iVar7 - 0xcU < 0xc) {
      plVar18 = param_1 + 0xd1;
    }
    else {
      if (0xb < iVar7 - 0x18U) goto LAB_7101ba3f40;
      plVar18 = param_1 + 0xd3;
    }
    FUN_710377aee0(0x3f800000,(long)plVar18);
  }
LAB_7101ba3f40:
  uVar16 = 0;
  do {
    iVar7 = (int)uVar16;
    if (uVar16 < (ulong)(param_2[1] - *param_2 >> 3)) {
      uVar2 = uVar16 & 0xffffffff;
      FUN_7103776640(&local_90,lVar12,(byte ****)"set_parts_item_%02d",uVar2,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar16) goto LAB_7101ba49ac;
      uVar17 = *(ulong *)(*param_2 + uVar16 * 8);
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_fighter",uVar2,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar17,(long)&local_70,0,ppppbVar6,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_txt_fighter_entried",uVar3,ppppbVar6,
                     param_5,param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar17,(long)&local_80,0,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      plVar18 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_rep_fighter",uVar3,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      ppppbVar6 = (byte ****)0x2;
      ppppppppplVar4 = (long *********)0x0;
      plVar1 = FUN_710323f330(plVar15,uVar17,0,2,param_5,param_6,param_7,param_8);
      plVar18 = local_68;
      FUN_7103778b80((long)local_68,(long)plVar1,ppppppppplVar4,ppppbVar6,param_5,param_6,param_7,
                     param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      lVar9 = *(long *)(param_1[0x2a0] + 0x1b8);
      if (lVar9 != 0) {
        lVar11 = param_1[0x2a0] + 0x1b8;
        lVar10 = lVar11;
        lVar13 = lVar9;
        do {
          if (iVar7 <= *(int *)(lVar13 + 0x20)) {
            lVar10 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < iVar7) * 8);
        } while (lVar13 != 0);
        if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          lVar11 = param_1[0x2a0] + 0x1b8;
          lVar9 = *(long *)(param_1[0x2a0] + 0x1b8);
        }
        lVar10 = lVar11;
        if (lVar9 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar9 + 0x20)) {
              lVar10 = lVar9;
            }
            lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < iVar7) * 8);
          } while (lVar9 != 0);
          if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,1);
            (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          }
        }
      }
      plVar18 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        uVar2 = plVar18[3];
        plVar18[2] = (long)&PTR_FUN_710523d9a8;
        plVar18[3] = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
LAB_7101ba42a0:
        FUN_710392eb40((ulong)plVar18);
      }
    }
    else {
      lVar9 = param_1[0x2a0];
      lVar11 = *(long *)(lVar9 + 0x1b8);
      if (lVar11 != 0) {
        lVar10 = lVar9 + 0x1b8;
        lVar13 = lVar10;
        lVar14 = lVar11;
        do {
          if (iVar7 <= *(int *)(lVar14 + 0x20)) {
            lVar13 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar7) * 8);
        } while (lVar14 != 0);
        if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,0);
          (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
          lVar9 = param_1[0x2a0];
          lVar11 = *(long *)(lVar9 + 0x1b8);
          lVar10 = lVar9 + 0x1b8;
        }
        lVar13 = lVar10;
        if (lVar11 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar11 + 0x20)) {
              lVar13 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < iVar7) * 8);
          } while (lVar11 != 0);
          if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,0);
            (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
            lVar9 = param_1[0x2a0];
          }
        }
      }
      pppplVar5 = (long ****)(uVar16 & 0xffffffff);
      FUN_7103771d60(&local_80,lVar9,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      FUN_710377ad90(&local_70,*local_78,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar1 = local_68;
      lVar9 = *local_68;
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      local_80 = &PTR_FUN_710523d9c8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) goto LAB_7101ba42a0;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x24);
  uVar16 = 0;
  do {
    uVar2 = uVar16 + 0x24;
    iVar7 = (int)uVar2;
    if (uVar2 < (ulong)(param_2[1] - *param_2 >> 3)) {
      uVar17 = uVar2 & 0xffffffff;
      FUN_7103776640(&local_90,lVar12,(byte ****)"set_parts_item_%02d",uVar17,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar2) goto LAB_7101ba49ac;
      uVar2 = *(ulong *)(*param_2 + uVar2 * 8);
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_fighter",uVar17,ppppbVar6,param_5
                     ,param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar2,(long)&local_70,0,ppppbVar6,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_txt_fighter_entried",uVar3,ppppbVar6,
                     param_5,param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar2,(long)&local_80,0,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      plVar18 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_rep_fighter",uVar3,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      ppppbVar6 = (byte ****)0x2;
      ppppppppplVar4 = (long *********)0x0;
      plVar1 = FUN_710323f330(plVar15,uVar2,0,2,param_5,param_6,param_7,param_8);
      plVar18 = local_68;
      FUN_7103778b80((long)local_68,(long)plVar1,ppppppppplVar4,ppppbVar6,param_5,param_6,param_7,
                     param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      lVar9 = *(long *)(param_1[0x2a1] + 0x1b8);
      if (lVar9 != 0) {
        lVar11 = param_1[0x2a1] + 0x1b8;
        lVar10 = lVar11;
        lVar13 = lVar9;
        do {
          if (iVar7 <= *(int *)(lVar13 + 0x20)) {
            lVar10 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < iVar7) * 8);
        } while (lVar13 != 0);
        if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          lVar11 = param_1[0x2a1] + 0x1b8;
          lVar9 = *(long *)(param_1[0x2a1] + 0x1b8);
        }
        lVar10 = lVar11;
        if (lVar9 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar9 + 0x20)) {
              lVar10 = lVar9;
            }
            lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < iVar7) * 8);
          } while (lVar9 != 0);
          if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,1);
            (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          }
        }
      }
      plVar18 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        uVar2 = plVar18[3];
        plVar18[2] = (long)&PTR_FUN_710523d9a8;
        plVar18[3] = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
LAB_7101ba460c:
        FUN_710392eb40((ulong)plVar18);
      }
    }
    else {
      lVar9 = param_1[0x2a1];
      lVar11 = *(long *)(lVar9 + 0x1b8);
      if (lVar11 != 0) {
        lVar10 = lVar9 + 0x1b8;
        lVar13 = lVar10;
        lVar14 = lVar11;
        do {
          if (iVar7 <= *(int *)(lVar14 + 0x20)) {
            lVar13 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar7) * 8);
        } while (lVar14 != 0);
        if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,0);
          (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
          lVar9 = param_1[0x2a1];
          lVar11 = *(long *)(lVar9 + 0x1b8);
          lVar10 = lVar9 + 0x1b8;
        }
        lVar13 = lVar10;
        if (lVar11 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar11 + 0x20)) {
              lVar13 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < iVar7) * 8);
          } while (lVar11 != 0);
          if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,0);
            (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
            lVar9 = param_1[0x2a1];
          }
        }
      }
      pppplVar5 = (long ****)(uVar2 & 0xffffffff);
      FUN_7103771d60(&local_80,lVar9,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      FUN_710377ad90(&local_70,*local_78,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar1 = local_68;
      lVar9 = *local_68;
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      local_80 = &PTR_FUN_710523d9c8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) goto LAB_7101ba460c;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 0x24);
  uVar16 = 0;
  do {
    uVar2 = uVar16 + 0x48;
    iVar7 = (int)uVar2;
    if (uVar2 < (ulong)(param_2[1] - *param_2 >> 3)) {
      uVar17 = uVar2 & 0xffffffff;
      FUN_7103776640(&local_90,lVar12,(byte ****)"set_parts_item_%02d",uVar17,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      if ((ulong)(param_2[1] - *param_2 >> 3) <= uVar2) {
LAB_7101ba49ac:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar2 = *(ulong *)(*param_2 + uVar2 * 8);
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_txt_fighter",uVar17,ppppbVar6,param_5
                     ,param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar2,(long)&local_70,0,ppppbVar6,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_txt_fighter_entried",uVar3,ppppbVar6,
                     param_5,param_6,param_7,param_8);
      uVar3 = 0;
      FUN_7101ba34c0(uVar2,(long)&local_80,0,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      plVar18 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      FUN_7103776910(&local_70,(long)&local_90,(long ****)"set_rep_fighter",uVar3,ppppbVar6,param_5,
                     param_6,param_7,param_8);
      ppppbVar6 = (byte ****)0x2;
      ppppppppplVar4 = (long *********)0x0;
      plVar1 = FUN_710323f330(plVar15,uVar2,0,2,param_5,param_6,param_7,param_8);
      plVar18 = local_68;
      FUN_7103778b80((long)local_68,(long)plVar1,ppppppppplVar4,ppppbVar6,param_5,param_6,param_7,
                     param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar18);
      }
      lVar9 = *(long *)(param_1[0x2a2] + 0x1b8);
      if (lVar9 != 0) {
        lVar11 = param_1[0x2a2] + 0x1b8;
        lVar10 = lVar11;
        lVar13 = lVar9;
        do {
          if (iVar7 <= *(int *)(lVar13 + 0x20)) {
            lVar10 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < iVar7) * 8);
        } while (lVar13 != 0);
        if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          lVar11 = param_1[0x2a2] + 0x1b8;
          lVar9 = *(long *)(param_1[0x2a2] + 0x1b8);
        }
        lVar10 = lVar11;
        if (lVar9 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar9 + 0x20)) {
              lVar10 = lVar9;
            }
            lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < iVar7) * 8);
          } while (lVar9 != 0);
          if (((lVar10 != lVar11) && (*(int *)(lVar10 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar10 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,1);
            (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          }
        }
      }
      plVar18 = local_88;
      local_90 = &PTR_FUN_710523d988;
      local_88 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        uVar2 = plVar18[3];
        plVar18[2] = (long)&PTR_FUN_710523d9a8;
        plVar18[3] = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
LAB_7101ba4978:
        FUN_710392eb40((ulong)plVar18);
      }
    }
    else {
      lVar9 = param_1[0x2a2];
      lVar11 = *(long *)(lVar9 + 0x1b8);
      if (lVar11 != 0) {
        lVar10 = lVar9 + 0x1b8;
        lVar13 = lVar10;
        lVar14 = lVar11;
        do {
          if (iVar7 <= *(int *)(lVar14 + 0x20)) {
            lVar13 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar7) * 8);
        } while (lVar14 != 0);
        if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
           (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,0);
          (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
          lVar9 = param_1[0x2a2];
          lVar11 = *(long *)(lVar9 + 0x1b8);
          lVar10 = lVar9 + 0x1b8;
        }
        lVar13 = lVar10;
        if (lVar11 != 0) {
          do {
            if (iVar7 <= *(int *)(lVar11 + 0x20)) {
              lVar13 = lVar11;
            }
            lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < iVar7) * 8);
          } while (lVar11 != 0);
          if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar7)) &&
             (plVar18 = *(long **)(lVar13 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x208))(plVar18,0);
            (**(code **)(*plVar18 + 0x388))(plVar18,1,0);
            lVar9 = param_1[0x2a2];
          }
        }
      }
      pppplVar5 = (long ****)(uVar2 & 0xffffffff);
      FUN_7103771d60(&local_80,lVar9,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar18 = local_78;
      FUN_710377ad90(&local_70,*local_78,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
      plVar1 = local_68;
      lVar9 = *local_68;
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      local_80 = &PTR_FUN_710523d9c8;
      local_78 = (long *)0x0;
      if (plVar18 != (long *)0x0) goto LAB_7101ba4978;
    }
    uVar16 = uVar16 + 1;
    if (0x23 < uVar16) {
      return;
    }
  } while( true );
}

