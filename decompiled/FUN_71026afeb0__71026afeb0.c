// addr:      71026afeb0
// offset:    0x26afeb0
// name:      FUN_71026afeb0
// mangled:   
// signature: undefined __cdecl FUN_71026afeb0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71026afeb0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long *********ppppppppplVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long ********local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  *param_1 = &PTR_FUN_71050cdb80;
  iVar10 = (int)param_3;
  plVar1 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_58 = (long ********)&DAT_00000010;
      ppppppppplVar3 = &local_58;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar3,param_4,param_5,
                                          param_6,param_7,param_8), plVar1 != (long *)0x0))
      goto LAB_71026aff38;
    }
    plVar1 = (long *)0x0;
  }
LAB_71026aff38:
  *plVar1 = param_2;
  *(int *)(plVar1 + 1) = iVar10;
  if (DAT_710532aca8 != 0) {
    uVar8 = DAT_710532aca8 - 1;
    uVar2 = (ulong)iVar10;
    if ((uVar8 & DAT_710532aca8) == 0) {
      uVar5 = uVar8 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (DAT_710532aca8 <= uVar2) {
        uVar5 = 0;
        if (DAT_710532aca8 != 0) {
          uVar5 = uVar2 / DAT_710532aca8;
        }
        uVar5 = uVar2 - uVar5 * DAT_710532aca8;
      }
    }
    plVar7 = *(long **)(DAT_710532aca0 + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar8 & DAT_710532aca8) == 0) {
        do {
          uVar6 = plVar7[1];
          if (uVar6 != uVar2 && (uVar6 & uVar8) != uVar5) break;
          if ((uVar6 == uVar2) && ((int)plVar7[2] == iVar10)) goto LAB_71026b0008;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar2) {
            if ((int)plVar7[2] == iVar10) goto LAB_71026b0008;
          }
          else {
            if (DAT_710532aca8 <= uVar8) {
              uVar6 = 0;
              if (DAT_710532aca8 != 0) {
                uVar6 = uVar8 / DAT_710532aca8;
              }
              uVar8 = uVar8 - uVar6 * DAT_710532aca8;
            }
            if (uVar8 != uVar5) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  goto LAB_71026b001c;
LAB_71026b0118:
  pcVar4 = (char *)0x1;
  FUN_7102633a10(*(long *)(*plVar1 + 0x318),(long *********)plVar7[3],1,uVar2,param_5,param_6,
                 param_7,param_8);
  iVar10 = (int)plVar1[1];
  uVar8 = (ulong)iVar10;
  goto LAB_71026b0134;
LAB_71026b01f8:
  pcVar4 = (char *)0x1;
  FUN_7102633b90(*(long *)(*plVar1 + 0x318),(long *********)plVar7[3],1,uVar2,param_5,param_6,
                 param_7,param_8);
  iVar10 = (int)plVar1[1];
  uVar8 = (ulong)iVar10;
  goto LAB_71026b0214;
LAB_71026b02d8:
  FUN_7102633800(*(long *)(*plVar1 + 0x318),(long *********)plVar7[3],pcVar4,uVar2,param_5,param_6,
                 param_7,param_8);
  goto LAB_71026b02e8;
LAB_71026b0008:
  FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)plVar7[3]);
  iVar10 = (int)plVar1[1];
LAB_71026b001c:
  uVar2 = (ulong)(iVar10 + 1U);
  pcVar4 = "render_param_0%d";
  local_48 = 0;
  uStack_40 = 0;
  local_58 = (long ********)0x0;
  uStack_50 = 0;
  snprintf((char *)&local_58,0x20,"render_param_0%d",iVar10 + 1U);
  FUN_7102633910(*(long *)(*plVar1 + 0x318),&local_58,pcVar4,uVar2,param_5,param_6,param_7,param_8);
  iVar10 = (int)plVar1[1];
  uVar8 = (ulong)iVar10;
  if (DAT_710532acd0 != 0) {
    uVar5 = DAT_710532acd0 - 1;
    if ((uVar5 & DAT_710532acd0) == 0) {
      uVar6 = uVar5 & uVar8;
    }
    else {
      uVar6 = uVar8;
      if (DAT_710532acd0 <= uVar8) {
        uVar6 = 0;
        if (DAT_710532acd0 != 0) {
          uVar6 = uVar8 / DAT_710532acd0;
        }
        uVar6 = uVar8 - uVar6 * DAT_710532acd0;
      }
    }
    plVar7 = *(long **)(DAT_710532acc8 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar5 & DAT_710532acd0) == 0) {
        do {
          uVar9 = plVar7[1];
          if (uVar9 != uVar8 && (uVar9 & uVar5) != uVar6) break;
          if ((uVar9 == uVar8) && ((int)plVar7[2] == iVar10)) goto LAB_71026b0118;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar8) {
            if ((int)plVar7[2] == iVar10) goto LAB_71026b0118;
          }
          else {
            if (DAT_710532acd0 <= uVar5) {
              uVar9 = 0;
              if (DAT_710532acd0 != 0) {
                uVar9 = uVar5 / DAT_710532acd0;
              }
              uVar5 = uVar5 - uVar9 * DAT_710532acd0;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_71026b0134:
  if (DAT_710532acf8 != 0) {
    uVar5 = DAT_710532acf8 - 1;
    if ((uVar5 & DAT_710532acf8) == 0) {
      uVar6 = uVar5 & uVar8;
    }
    else {
      uVar6 = uVar8;
      if (DAT_710532acf8 <= uVar8) {
        uVar6 = 0;
        if (DAT_710532acf8 != 0) {
          uVar6 = uVar8 / DAT_710532acf8;
        }
        uVar6 = uVar8 - uVar6 * DAT_710532acf8;
      }
    }
    plVar7 = *(long **)(DAT_710532acf0 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar5 & DAT_710532acf8) == 0) {
        do {
          uVar9 = plVar7[1];
          if (uVar9 != uVar8 && (uVar9 & uVar5) != uVar6) break;
          if ((uVar9 == uVar8) && ((int)plVar7[2] == iVar10)) goto LAB_71026b01f8;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar8) {
            if ((int)plVar7[2] == iVar10) goto LAB_71026b01f8;
          }
          else {
            if (DAT_710532acf8 <= uVar5) {
              uVar9 = 0;
              if (DAT_710532acf8 != 0) {
                uVar9 = uVar5 / DAT_710532acf8;
              }
              uVar5 = uVar5 - uVar9 * DAT_710532acf8;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_71026b0214:
  if (DAT_710532ad20 != 0) {
    uVar5 = DAT_710532ad20 - 1;
    if ((uVar5 & DAT_710532ad20) == 0) {
      uVar6 = uVar5 & uVar8;
    }
    else {
      uVar6 = uVar8;
      if (DAT_710532ad20 <= uVar8) {
        uVar6 = 0;
        if (DAT_710532ad20 != 0) {
          uVar6 = uVar8 / DAT_710532ad20;
        }
        uVar6 = uVar8 - uVar6 * DAT_710532ad20;
      }
    }
    plVar7 = *(long **)(DAT_710532ad18 + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar5 & DAT_710532ad20) == 0) {
        do {
          uVar9 = plVar7[1];
          if (uVar9 != uVar8 && (uVar9 & uVar5) != uVar6) break;
          if ((uVar9 == uVar8) && ((int)plVar7[2] == iVar10)) goto LAB_71026b02d8;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar8) {
            if ((int)plVar7[2] == iVar10) goto LAB_71026b02d8;
          }
          else {
            if (DAT_710532ad20 <= uVar5) {
              uVar9 = 0;
              if (DAT_710532ad20 != 0) {
                uVar9 = uVar5 / DAT_710532ad20;
              }
              uVar5 = uVar5 - uVar9 * DAT_710532ad20;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_71026b02e8:
  param_1[1] = plVar1;
  return;
}

