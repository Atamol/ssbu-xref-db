// addr:      71026ab040
// offset:    0x26ab040
// name:      FUN_71026ab040
// mangled:   
// signature: undefined __cdecl FUN_71026ab040(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71026ab040(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte *pbVar4;
  long *********ppppppppplVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined4 local_54;
  long ********local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_71050cd028;
  iVar13 = (int)param_3;
  plVar2 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_50 = (long ********)&DAT_00000010;
      ppppppppplVar5 = &local_50;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar5,param_4,param_5,
                                          param_6,param_7,param_8), plVar2 != (long *)0x0))
      goto LAB_71026ab0c8;
    }
    plVar2 = (long *)0x0;
  }
LAB_71026ab0c8:
  *plVar2 = param_2;
  *(int *)(plVar2 + 1) = iVar13;
  if (DAT_710532ab68 != 0) {
    uVar11 = DAT_710532ab68 - 1;
    uVar3 = (ulong)iVar13;
    if ((uVar11 & DAT_710532ab68) == 0) {
      uVar7 = uVar11 & uVar3;
    }
    else {
      uVar7 = uVar3;
      if (DAT_710532ab68 <= uVar3) {
        uVar7 = 0;
        if (DAT_710532ab68 != 0) {
          uVar7 = uVar3 / DAT_710532ab68;
        }
        uVar7 = uVar3 - uVar7 * DAT_710532ab68;
      }
    }
    plVar8 = *(long **)(DAT_710532ab60 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar11 & DAT_710532ab68) == 0) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 != uVar3 && (uVar9 & uVar11) != uVar7) break;
          if ((uVar9 == uVar3) && ((int)plVar8[2] == iVar13)) goto LAB_71026ab198;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar8[1];
          if (uVar11 == uVar3) {
            if ((int)plVar8[2] == iVar13) goto LAB_71026ab198;
          }
          else {
            if (DAT_710532ab68 <= uVar11) {
              uVar9 = 0;
              if (DAT_710532ab68 != 0) {
                uVar9 = uVar11 / DAT_710532ab68;
              }
              uVar11 = uVar11 - uVar9 * DAT_710532ab68;
            }
            if (uVar11 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_71026ab1c0;
LAB_71026ab3b4:
  if ((*(byte *)(plVar8 + 3) & 1) == 0) {
    ppppppppplVar5 = (long *********)((long)plVar8 + 0x19);
  }
  else {
    ppppppppplVar5 = (long *********)plVar8[5];
  }
  pcVar6 = (char *)0x1;
  FUN_7102633a10(*(long *)(*plVar2 + 0x318),ppppppppplVar5,1,uVar3,param_5,param_6,param_7,param_8);
  goto LAB_71026ab3d8;
LAB_71026ab4a4:
  if ((*(byte *)(plVar8 + 3) & 1) == 0) {
    ppppppppplVar5 = (long *********)((long)plVar8 + 0x19);
  }
  else {
    ppppppppplVar5 = (long *********)plVar8[5];
  }
  pcVar6 = (char *)0x1;
  FUN_7102633b90(*(long *)(*plVar2 + 0x318),ppppppppplVar5,1,uVar3,param_5,param_6,param_7,param_8);
  iVar13 = (int)plVar2[1];
  uVar11 = (ulong)iVar13;
  goto LAB_71026ab4d4;
LAB_71026ab598:
  if ((*(byte *)(plVar8 + 3) & 1) == 0) {
    ppppppppplVar5 = (long *********)((long)plVar8 + 0x19);
  }
  else {
    ppppppppplVar5 = (long *********)plVar8[5];
  }
  FUN_7102633800(*(long *)(*plVar2 + 0x318),ppppppppplVar5,pcVar6,uVar3,param_5,param_6,param_7,
                 param_8);
  goto LAB_71026ab5bc;
LAB_71026ab198:
  if ((*(byte *)(plVar8 + 3) & 1) == 0) {
    pbVar4 = (byte *)((long)plVar8 + 0x19);
  }
  else {
    pbVar4 = (byte *)plVar8[5];
  }
  FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),pbVar4);
  iVar13 = (int)plVar2[1];
LAB_71026ab1c0:
  uVar3 = (ulong)(iVar13 + 1U);
  pcVar6 = "render_param_0%d";
  local_40 = 0;
  uStack_38 = 0;
  local_50 = (long ********)0x0;
  uStack_48 = 0;
  snprintf((char *)&local_50,0x20,"render_param_0%d",iVar13 + 1U);
  FUN_7102633910(*(long *)(*plVar2 + 0x318),&local_50,pcVar6,uVar3,param_5,param_6,param_7,param_8);
  uVar1 = *(uint *)(*plVar2 + 8);
  if (uVar1 < 0x16c) {
    if ((&DAT_710454a7f0)[(long)(int)uVar1 * 0x12] == 1) {
      if (DAT_710532abb8 != 0) {
        iVar13 = (int)plVar2[1];
        uVar11 = (ulong)iVar13;
        uVar7 = DAT_710532abb8 - 1;
        if ((uVar7 & DAT_710532abb8) == 0) {
          uVar9 = uVar7 & uVar11;
        }
        else {
          uVar9 = uVar11;
          if (DAT_710532abb8 <= uVar11) {
            uVar9 = 0;
            if (DAT_710532abb8 != 0) {
              uVar9 = uVar11 / DAT_710532abb8;
            }
            uVar9 = uVar11 - uVar9 * DAT_710532abb8;
          }
        }
        puVar10 = *(undefined8 **)(DAT_710532abb0 + uVar9 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar8 = (long *)*puVar10, plVar8 != (long *)0x0)) {
          if ((uVar7 & DAT_710532abb8) == 0) {
            do {
              uVar12 = plVar8[1];
              if (uVar12 != uVar11 && (uVar12 & uVar7) != uVar9) break;
              if ((uVar12 == uVar11) && ((int)plVar8[2] == iVar13)) goto LAB_71026ab3b4;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              uVar7 = plVar8[1];
              if (uVar7 == uVar11) {
                if ((int)plVar8[2] == iVar13) goto LAB_71026ab3b4;
              }
              else {
                if (DAT_710532abb8 <= uVar7) {
                  uVar12 = 0;
                  if (DAT_710532abb8 != 0) {
                    uVar12 = uVar7 / DAT_710532abb8;
                  }
                  uVar7 = uVar7 - uVar12 * DAT_710532abb8;
                }
                if (uVar7 != uVar9) break;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
      }
    }
    else if (((&DAT_710454a7f0)[(long)(int)uVar1 * 0x12] == 2) && (DAT_710532ab90 != 0)) {
      iVar13 = (int)plVar2[1];
      uVar11 = (ulong)iVar13;
      uVar7 = DAT_710532ab90 - 1;
      if ((uVar7 & DAT_710532ab90) == 0) {
        uVar9 = uVar7 & uVar11;
      }
      else {
        uVar9 = uVar11;
        if (DAT_710532ab90 <= uVar11) {
          uVar9 = 0;
          if (DAT_710532ab90 != 0) {
            uVar9 = uVar11 / DAT_710532ab90;
          }
          uVar9 = uVar11 - uVar9 * DAT_710532ab90;
        }
      }
      plVar8 = *(long **)(DAT_710532ab88 + uVar9 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        if ((uVar7 & DAT_710532ab90) == 0) {
          do {
            uVar12 = plVar8[1];
            if (uVar12 != uVar11 && (uVar12 & uVar7) != uVar9) break;
            if ((uVar12 == uVar11) && ((int)plVar8[2] == iVar13)) goto LAB_71026ab3b4;
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar7 = plVar8[1];
            if (uVar7 == uVar11) {
              if ((int)plVar8[2] == iVar13) goto LAB_71026ab3b4;
            }
            else {
              if (DAT_710532ab90 <= uVar7) {
                uVar12 = 0;
                if (DAT_710532ab90 != 0) {
                  uVar12 = uVar7 / DAT_710532ab90;
                }
                uVar7 = uVar7 - uVar12 * DAT_710532ab90;
              }
              if (uVar7 != uVar9) break;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
  }
LAB_71026ab3d8:
  iVar13 = (int)plVar2[1];
  uVar11 = (ulong)iVar13;
  if (DAT_710532abe0 != 0) {
    uVar7 = DAT_710532abe0 - 1;
    if ((uVar7 & DAT_710532abe0) == 0) {
      uVar9 = uVar7 & uVar11;
    }
    else {
      uVar9 = uVar11;
      if (DAT_710532abe0 <= uVar11) {
        uVar9 = 0;
        if (DAT_710532abe0 != 0) {
          uVar9 = uVar11 / DAT_710532abe0;
        }
        uVar9 = uVar11 - uVar9 * DAT_710532abe0;
      }
    }
    plVar8 = *(long **)(DAT_710532abd8 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & DAT_710532abe0) == 0) {
        do {
          uVar12 = plVar8[1];
          if (uVar12 != uVar11 && (uVar12 & uVar7) != uVar9) break;
          if ((uVar12 == uVar11) && ((int)plVar8[2] == iVar13)) goto LAB_71026ab4a4;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar11) {
            if ((int)plVar8[2] == iVar13) goto LAB_71026ab4a4;
          }
          else {
            if (DAT_710532abe0 <= uVar7) {
              uVar12 = 0;
              if (DAT_710532abe0 != 0) {
                uVar12 = uVar7 / DAT_710532abe0;
              }
              uVar7 = uVar7 - uVar12 * DAT_710532abe0;
            }
            if (uVar7 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_71026ab4d4:
  if (DAT_710532ac08 != 0) {
    uVar7 = DAT_710532ac08 - 1;
    if ((uVar7 & DAT_710532ac08) == 0) {
      uVar9 = uVar7 & uVar11;
    }
    else {
      uVar9 = uVar11;
      if (DAT_710532ac08 <= uVar11) {
        uVar9 = 0;
        if (DAT_710532ac08 != 0) {
          uVar9 = uVar11 / DAT_710532ac08;
        }
        uVar9 = uVar11 - uVar9 * DAT_710532ac08;
      }
    }
    plVar8 = *(long **)(DAT_710532ac00 + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((uVar7 & DAT_710532ac08) == 0) {
        do {
          uVar12 = plVar8[1];
          if (uVar12 != uVar11 && (uVar12 & uVar7) != uVar9) break;
          if ((uVar12 == uVar11) && ((int)plVar8[2] == iVar13)) goto LAB_71026ab598;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar11) {
            if ((int)plVar8[2] == iVar13) goto LAB_71026ab598;
          }
          else {
            if (DAT_710532ac08 <= uVar7) {
              uVar12 = 0;
              if (DAT_710532ac08 != 0) {
                uVar12 = uVar7 / DAT_710532ac08;
              }
              uVar7 = uVar7 - uVar12 * DAT_710532ac08;
            }
            if (uVar7 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_71026ab5bc:
  param_1[1] = plVar2;
  return;
}

