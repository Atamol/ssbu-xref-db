// addr:      7101b350f0
// offset:    0x1b350f0
// name:      FUN_7101b350f0
// mangled:   
// signature: undefined __cdecl FUN_7101b350f0(long param_1, uint param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b350f0(long param_1,uint param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1e0) == 4) {
    return;
  }
  if (*(int *)(param_1 + 0x1d8) < (int)param_2) {
    return;
  }
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + (long)(int)param_2 * 0x28 + 0xf0) != 1) {
    return;
  }
  lVar10 = *(long *)(DAT_710532f730 + 8);
  puVar11 = (ulong *)(param_1 + (long)(int)param_2 * 0x28 + 0xf8);
  uVar12 = *puVar11;
  uVar2 = FUN_71032b23e0(*(long *)(*(long *)(lVar10 + 0x178) + 8),0x116b904091);
  if ((((uVar12 & 0xff00000000000000) == 0x6900000000000000) && ((uVar12 & 0xffffffffff) != 0)) &&
     ((uVar2 & 0xff00000000000000) == 0x6900000000000000 && (uVar2 & 0xffffffffff) != 0)) {
    if (((uVar2 ^ uVar12) & 0xffffffffff) == 0) {
      return;
    }
  }
  else if (((uVar2 & 0xffffffffff) != 0 && (uVar2 & 0xff00000000000000) == 0x6900000000000000) ==
           ((uVar12 & 0xff00000000000000) == 0x6900000000000000 && (uVar12 & 0xffffffffff) != 0)) {
    return;
  }
  if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar2 = (ulong)param_2;
  FUN_7103776640(&local_60,**(long **)**(undefined8 **)(param_1 + 0x10) + 8,
                 (byte ****)"set_preview_st_0%d",uVar2,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_btn_stage",uVar2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_80,(long)&local_60,(byte ****)"set_parts_btn_music",uVar2,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_68;
  lVar3 = *(long *)(local_68 + 8);
  if ((param_3 & 1) == 0) {
    if (lVar3 != 0) {
      plVar4 = (long *)FUN_71037964b0(lVar3,0x71042a2b6c);
      if (plVar4 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar4 + 0x148))();
        (**(code **)(*plVar4 + 0x140))(plVar4,1);
        lVar3 = *(long *)(local_68 + 8);
        if (lVar3 != 0) {
          plVar13 = *(long **)(lVar3 + 0x80);
          while (plVar13 != (long *)(lVar3 + 0x88)) {
            uVar5 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar5 & 1) != 0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar5 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar7 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar7 = plVar13 + 2;
              bVar1 = *(long **)*plVar7 != plVar13;
              plVar13 = (long *)*plVar7;
              if (bVar1) {
                do {
                  lVar9 = *plVar7;
                  plVar7 = (long *)(lVar9 + 0x10);
                  plVar13 = (long *)*plVar7;
                } while (*plVar13 != lVar9);
              }
            }
            else {
              do {
                plVar13 = plVar7;
                plVar7 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        if ((uVar12 & 1) == 0) {
          pcVar8 = *(code **)(*plVar4 + 0x158);
        }
        else {
          pcVar8 = *(code **)(*plVar4 + 0x168);
        }
        (*pcVar8)(0x3f800000,plVar4);
      }
      if ((*(long *)(local_68 + 8) != 0) &&
         (plVar4 = (long *)FUN_71037964b0(*(long *)(local_68 + 8),0x7104432c6c),
         plVar4 != (long *)0x0)) {
        uVar12 = (**(code **)(*plVar4 + 0x148))();
        (**(code **)(*plVar4 + 0x140))(plVar4,1);
        lVar3 = *(long *)(local_68 + 8);
        if (lVar3 != 0) {
          plVar13 = *(long **)(lVar3 + 0x80);
          while (plVar13 != (long *)(lVar3 + 0x88)) {
            uVar5 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar5 & 1) != 0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar5 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar7 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar7 = plVar13 + 2;
              bVar1 = *(long **)*plVar7 != plVar13;
              plVar13 = (long *)*plVar7;
              if (bVar1) {
                do {
                  lVar9 = *plVar7;
                  plVar7 = (long *)(lVar9 + 0x10);
                  plVar13 = (long *)*plVar7;
                } while (*plVar13 != lVar9);
              }
            }
            else {
              do {
                plVar13 = plVar7;
                plVar7 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        if ((uVar12 & 1) == 0) {
          pcVar8 = *(code **)(*plVar4 + 0x158);
        }
        else {
          pcVar8 = *(code **)(*plVar4 + 0x168);
        }
        (*pcVar8)(0x3f800000,plVar4);
      }
    }
    lVar3 = *(long *)(local_78 + 8);
    uVar12 = local_78;
    if (lVar3 == 0) goto LAB_7101b35b14;
    plVar4 = (long *)FUN_71037964b0(lVar3,0x71042a2b6c);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x148))();
      (**(code **)(*plVar4 + 0x140))(plVar4,1);
      lVar3 = *(long *)(local_78 + 8);
      if (lVar3 != 0) {
        plVar13 = *(long **)(lVar3 + 0x80);
        while (plVar13 != (long *)(lVar3 + 0x88)) {
          uVar6 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
          if (((uVar6 & 1) != 0) &&
             (uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar6 & 1) != 0)) {
            (**(code **)(*(long *)plVar13[0xd] + 0x178))();
            (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
          }
          plVar7 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar7 = plVar13 + 2;
            bVar1 = *(long **)*plVar7 != plVar13;
            plVar13 = (long *)*plVar7;
            if (bVar1) {
              do {
                lVar9 = *plVar7;
                plVar7 = (long *)(lVar9 + 0x10);
                plVar13 = (long *)*plVar7;
              } while (*plVar13 != lVar9);
            }
          }
          else {
            do {
              plVar13 = plVar7;
              plVar7 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        }
      }
      if ((uVar5 & 1) == 0) {
        pcVar8 = *(code **)(*plVar4 + 0x158);
      }
      else {
        pcVar8 = *(code **)(*plVar4 + 0x168);
      }
      (*pcVar8)(0x3f800000,plVar4);
      lVar3 = *(long *)(local_78 + 8);
      if (lVar3 == 0) goto LAB_7101b35b14;
    }
    plVar4 = (long *)FUN_71037964b0(lVar3,0x7104432c6c);
    if (plVar4 == (long *)0x0) goto LAB_7101b35b14;
    uVar5 = (**(code **)(*plVar4 + 0x148))();
    uVar5 = uVar5 & 0xffffffff;
    (**(code **)(*plVar4 + 0x140))(plVar4,1);
    lVar3 = *(long *)(local_78 + 8);
    if (lVar3 != 0) {
      plVar13 = *(long **)(lVar3 + 0x80);
      while (plVar13 != (long *)(lVar3 + 0x88)) {
        uVar6 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
        if (((uVar6 & 1) != 0) &&
           (uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar6 & 1) != 0)) {
          (**(code **)(*(long *)plVar13[0xd] + 0x178))();
          (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
        }
        plVar7 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar7 = plVar13 + 2;
          bVar1 = *(long **)*plVar7 != plVar13;
          plVar13 = (long *)*plVar7;
          if (bVar1) {
            do {
              lVar9 = *plVar7;
              plVar7 = (long *)(lVar9 + 0x10);
              plVar13 = (long *)*plVar7;
            } while (*plVar13 != lVar9);
          }
        }
        else {
          do {
            plVar13 = plVar7;
            plVar7 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      }
    }
  }
  else {
    if (lVar3 != 0) {
      plVar4 = (long *)FUN_71037964b0(lVar3,0x71043cf06c);
      if (plVar4 != (long *)0x0) {
        uVar12 = (**(code **)(*plVar4 + 0x148))();
        (**(code **)(*plVar4 + 0x140))(plVar4,1);
        lVar3 = *(long *)(local_68 + 8);
        if (lVar3 != 0) {
          plVar13 = *(long **)(lVar3 + 0x80);
          while (plVar13 != (long *)(lVar3 + 0x88)) {
            uVar5 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar5 & 1) != 0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar5 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar7 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar7 = plVar13 + 2;
              bVar1 = *(long **)*plVar7 != plVar13;
              plVar13 = (long *)*plVar7;
              if (bVar1) {
                do {
                  lVar9 = *plVar7;
                  plVar7 = (long *)(lVar9 + 0x10);
                  plVar13 = (long *)*plVar7;
                } while (*plVar13 != lVar9);
              }
            }
            else {
              do {
                plVar13 = plVar7;
                plVar7 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        if ((uVar12 & 1) == 0) {
          pcVar8 = *(code **)(*plVar4 + 0x158);
        }
        else {
          pcVar8 = *(code **)(*plVar4 + 0x168);
        }
        (*pcVar8)(0x3f800000,plVar4);
      }
      if ((*(long *)(local_68 + 8) != 0) &&
         (plVar4 = (long *)FUN_71037964b0(*(long *)(local_68 + 8),0x71043cf01b),
         plVar4 != (long *)0x0)) {
        uVar12 = (**(code **)(*plVar4 + 0x148))();
        (**(code **)(*plVar4 + 0x140))(plVar4,1);
        lVar3 = *(long *)(local_68 + 8);
        if (lVar3 != 0) {
          plVar13 = *(long **)(lVar3 + 0x80);
          while (plVar13 != (long *)(lVar3 + 0x88)) {
            uVar5 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
            if (((uVar5 & 1) != 0) &&
               (uVar5 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar5 & 1) != 0)) {
              (**(code **)(*(long *)plVar13[0xd] + 0x178))();
              (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
            }
            plVar7 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar7 = plVar13 + 2;
              bVar1 = *(long **)*plVar7 != plVar13;
              plVar13 = (long *)*plVar7;
              if (bVar1) {
                do {
                  lVar9 = *plVar7;
                  plVar7 = (long *)(lVar9 + 0x10);
                  plVar13 = (long *)*plVar7;
                } while (*plVar13 != lVar9);
              }
            }
            else {
              do {
                plVar13 = plVar7;
                plVar7 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
        }
        if ((uVar12 & 1) == 0) {
          pcVar8 = *(code **)(*plVar4 + 0x158);
        }
        else {
          pcVar8 = *(code **)(*plVar4 + 0x168);
        }
        (*pcVar8)(0x3f800000,plVar4);
      }
    }
    lVar3 = *(long *)(local_78 + 8);
    uVar12 = local_78;
    if (lVar3 == 0) goto LAB_7101b35b14;
    plVar4 = (long *)FUN_71037964b0(lVar3,0x71043cf06c);
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x148))();
      (**(code **)(*plVar4 + 0x140))(plVar4,1);
      lVar3 = *(long *)(local_78 + 8);
      if (lVar3 != 0) {
        plVar13 = *(long **)(lVar3 + 0x80);
        while (plVar13 != (long *)(lVar3 + 0x88)) {
          uVar6 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
          if (((uVar6 & 1) != 0) &&
             (uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar6 & 1) != 0)) {
            (**(code **)(*(long *)plVar13[0xd] + 0x178))();
            (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
          }
          plVar7 = (long *)plVar13[1];
          if ((long *)plVar13[1] == (long *)0x0) {
            plVar7 = plVar13 + 2;
            bVar1 = *(long **)*plVar7 != plVar13;
            plVar13 = (long *)*plVar7;
            if (bVar1) {
              do {
                lVar9 = *plVar7;
                plVar7 = (long *)(lVar9 + 0x10);
                plVar13 = (long *)*plVar7;
              } while (*plVar13 != lVar9);
            }
          }
          else {
            do {
              plVar13 = plVar7;
              plVar7 = (long *)*plVar13;
            } while ((long *)*plVar13 != (long *)0x0);
          }
        }
      }
      if ((uVar5 & 1) == 0) {
        pcVar8 = *(code **)(*plVar4 + 0x158);
      }
      else {
        pcVar8 = *(code **)(*plVar4 + 0x168);
      }
      (*pcVar8)(0x3f800000,plVar4);
      lVar3 = *(long *)(local_78 + 8);
      if (lVar3 == 0) goto LAB_7101b35b14;
    }
    plVar4 = (long *)FUN_71037964b0(lVar3,0x71043cf01b);
    if (plVar4 == (long *)0x0) goto LAB_7101b35b14;
    uVar5 = (**(code **)(*plVar4 + 0x148))();
    uVar5 = uVar5 & 0xffffffff;
    (**(code **)(*plVar4 + 0x140))(plVar4,1);
    lVar3 = *(long *)(local_78 + 8);
    if (lVar3 != 0) {
      plVar13 = *(long **)(lVar3 + 0x80);
      while (plVar13 != (long *)(lVar3 + 0x88)) {
        uVar6 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
        if (((uVar6 & 1) != 0) &&
           (uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar6 & 1) != 0)) {
          (**(code **)(*(long *)plVar13[0xd] + 0x178))();
          (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
        }
        plVar7 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar7 = plVar13 + 2;
          bVar1 = *(long **)*plVar7 != plVar13;
          plVar13 = (long *)*plVar7;
          if (bVar1) {
            do {
              lVar9 = *plVar7;
              plVar7 = (long *)(lVar9 + 0x10);
              plVar13 = (long *)*plVar7;
            } while (*plVar13 != lVar9);
          }
        }
        else {
          do {
            plVar13 = plVar7;
            plVar7 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      }
    }
  }
  if ((uVar5 & 1) == 0) {
    pcVar8 = *(code **)(*plVar4 + 0x158);
  }
  else {
    pcVar8 = *(code **)(*plVar4 + 0x168);
  }
  (*pcVar8)(0x3f800000,plVar4);
LAB_7101b35b14:
  bVar1 = FUN_71032b4980(lVar10 + 0x170,*puVar11);
  if (((bVar1) && (*(long *)(local_68 + 8) != 0)) &&
     (plVar4 = (long *)FUN_71037964b0(*(long *)(local_68 + 8),0x71042a2b6c), plVar4 != (long *)0x0))
  {
    uVar5 = (**(code **)(*plVar4 + 0x148))();
    (**(code **)(*plVar4 + 0x140))(plVar4,1);
    lVar10 = *(long *)(local_68 + 8);
    if (lVar10 != 0) {
      plVar13 = *(long **)(lVar10 + 0x80);
      while (plVar13 != (long *)(lVar10 + 0x88)) {
        uVar6 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
        if (((uVar6 & 1) != 0) &&
           (uVar6 = (**(code **)(*plVar4 + 0x120))(plVar4,plVar13[0xd]), (uVar6 & 1) != 0)) {
          (**(code **)(*(long *)plVar13[0xd] + 0x178))();
          (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
        }
        plVar7 = (long *)plVar13[1];
        if ((long *)plVar13[1] == (long *)0x0) {
          plVar7 = plVar13 + 2;
          bVar1 = *(long **)*plVar7 != plVar13;
          plVar13 = (long *)*plVar7;
          if (bVar1) {
            do {
              lVar3 = *plVar7;
              plVar7 = (long *)(lVar3 + 0x10);
              plVar13 = (long *)*plVar7;
            } while (*plVar13 != lVar3);
          }
        }
        else {
          do {
            plVar13 = plVar7;
            plVar7 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
      }
    }
    if ((uVar5 & 1) == 0) {
      pcVar8 = *(code **)(*plVar4 + 0x158);
    }
    else {
      pcVar8 = *(code **)(*plVar4 + 0x168);
    }
    (*pcVar8)(0x3f800000,plVar4);
  }
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar12 != 0) {
    uVar5 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar12);
  }
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar2 != 0) {
    uVar12 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar2 != 0) {
    uVar12 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

