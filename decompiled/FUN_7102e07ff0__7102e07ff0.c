// addr:      7102e07ff0
// offset:    0x2e07ff0
// name:      FUN_7102e07ff0
// mangled:   
// signature: undefined __cdecl FUN_7102e07ff0(long * param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102e07ff0(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *********ppppppppplVar2;
  byte *pbVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_38;
  ulong local_30;
  long *********local_28;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  *(uint *)(param_1 + 2) = param_2;
  pcVar4 = "reflection_cubemap";
  local_30 = 0;
  local_28 = (long *********)0x0;
  local_38 = 0;
  FUN_7102e08380(param_2,(char *)&local_38,"reflection_cubemap");
  uVar5 = (ulong)((byte)local_38 >> 1);
  if ((local_38 & 1) != 0) {
    uVar5 = local_30;
  }
  if (uVar5 != 0) {
    ppppppppplVar2 = (long *********)((ulong)&local_38 | 1);
    if ((local_38 & 1) != 0) {
      ppppppppplVar2 = local_28;
    }
    FUN_7102633800(*(long *)(*param_1 + 0x318),ppppppppplVar2,pcVar4,param_4,param_5,param_6,param_7
                   ,param_8);
  }
  if ((((byte)local_38 & 1) != 0) && (local_28 != (long *********)0x0)) {
    FUN_710392eb40((ulong)local_28);
  }
  local_30 = 0;
  local_28 = (long *********)0x0;
  local_38 = 0;
  FUN_7102e08380(*(uint *)(param_1 + 2),(char *)&local_38,"chara");
  uVar5 = (ulong)((byte)local_38 >> 1);
  if ((local_38 & 1) != 0) {
    uVar5 = local_30;
  }
  if (uVar5 != 0) {
    ppppppppplVar2 = (long *********)((ulong)&local_38 | 1);
    if ((local_38 & 1) != 0) {
      ppppppppplVar2 = local_28;
    }
    FUN_7102633a10(*(long *)(*param_1 + 0x318),ppppppppplVar2,1,param_4,param_5,param_6,param_7,
                   param_8);
  }
  if ((((byte)local_38 & 1) != 0) && (local_28 != (long *********)0x0)) {
    FUN_710392eb40((ulong)local_28);
  }
  local_30 = 0;
  local_28 = (long *********)0x0;
  pcVar4 = "stage";
  local_38 = 0;
  FUN_7102e08380(*(uint *)(param_1 + 2),(char *)&local_38,"stage");
  uVar5 = (ulong)((byte)local_38 >> 1);
  if ((local_38 & 1) != 0) {
    uVar5 = local_30;
  }
  if (uVar5 != 0) {
    ppppppppplVar2 = (long *********)((ulong)&local_38 | 1);
    if ((local_38 & 1) != 0) {
      ppppppppplVar2 = local_28;
    }
    pcVar4 = (char *)0x1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),ppppppppplVar2,1,param_4,param_5,param_6,param_7,
                   param_8);
  }
  if ((((byte)local_38 & 1) != 0) && (local_28 != (long *********)0x0)) {
    FUN_710392eb40((ulong)local_28);
  }
  uVar1 = *(uint *)(param_1 + 2);
  uVar5 = (ulong)uVar1;
  if (DAT_710532e500 != 0) {
    uVar10 = DAT_710532e500 - 1;
    if ((uVar10 & DAT_710532e500) == 0) {
      uVar6 = uVar10 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_710532e500 <= uVar5) {
        uVar6 = 0;
        if (DAT_710532e500 != 0) {
          uVar6 = uVar5 / DAT_710532e500;
        }
        uVar6 = uVar5 - uVar6 * DAT_710532e500;
      }
    }
    plVar7 = *(long **)(DAT_710532e4f8 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar10 & DAT_710532e500) == 0) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar5 && (uVar8 & uVar10) != uVar6) break;
          if ((uVar8 == uVar5) && (*(uint *)(plVar7 + 2) == uVar1)) goto LAB_7102e08230;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar7[1];
          if (uVar10 == uVar5) {
            if (*(uint *)(plVar7 + 2) == uVar1) goto LAB_7102e08230;
          }
          else {
            if (DAT_710532e500 <= uVar10) {
              uVar8 = 0;
              if (DAT_710532e500 != 0) {
                uVar8 = uVar10 / DAT_710532e500;
              }
              uVar10 = uVar10 - uVar8 * DAT_710532e500;
            }
            if (uVar10 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_7102e08258:
  if (DAT_710532e528 != 0) {
    uVar10 = DAT_710532e528 - 1;
    if ((uVar10 & DAT_710532e528) == 0) {
      uVar6 = uVar10 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_710532e528 <= uVar5) {
        uVar6 = 0;
        if (DAT_710532e528 != 0) {
          uVar6 = uVar5 / DAT_710532e528;
        }
        uVar6 = uVar5 - uVar6 * DAT_710532e528;
      }
    }
    plVar7 = *(long **)(DAT_710532e520 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar10 & DAT_710532e528) == 0) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar5 && (uVar8 & uVar10) != uVar6) {
            return;
          }
          if ((uVar8 == uVar5) && ((int)plVar7[2] == (int)uVar5)) goto LAB_7102e0831c;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar7[1];
          if (uVar10 == uVar5) {
            if ((int)plVar7[2] == (int)uVar5) {
LAB_7102e0831c:
              lVar9 = *(long *)(param_1[1] + 0xb20);
              if (uVar5 < (ulong)(*(long *)(param_1[1] + 0xb28) - lVar9 >> 2)) {
                if ((*(byte *)(plVar7 + 3) & 1) == 0) {
                  pbVar3 = (byte *)((long)plVar7 + 0x19);
                }
                else {
                  pbVar3 = (byte *)plVar7[5];
                }
                FUN_71025f74f0(*(float *)(lVar9 + uVar5 * 4),
                               *(long *)(*(long *)(*param_1 + 0x318) + 0x10),pbVar3);
                return;
              }
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
          }
          else {
            if (DAT_710532e528 <= uVar10) {
              uVar8 = 0;
              if (DAT_710532e528 != 0) {
                uVar8 = uVar10 / DAT_710532e528;
              }
              uVar10 = uVar10 - uVar8 * DAT_710532e528;
            }
            if (uVar10 != uVar6) {
              return;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
LAB_7102e08230:
  if ((*(byte *)(plVar7 + 3) & 1) == 0) {
    ppppppppplVar2 = (long *********)((long)plVar7 + 0x19);
  }
  else {
    ppppppppplVar2 = (long *********)plVar7[5];
  }
  FUN_7102633910(*(long *)(*param_1 + 0x318),ppppppppplVar2,pcVar4,param_4,param_5,param_6,param_7,
                 param_8);
  uVar5 = (ulong)*(uint *)(param_1 + 2);
  goto LAB_7102e08258;
}

