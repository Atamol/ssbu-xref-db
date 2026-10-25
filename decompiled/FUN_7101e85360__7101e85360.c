// addr:      7101e85360
// offset:    0x1e85360
// name:      FUN_7101e85360
// mangled:   
// signature: undefined __cdecl FUN_7101e85360(undefined8 * param_1, long param_2, byte param_3)


void FUN_7101e85360(undefined8 *param_1,long param_2,byte param_3)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  
  uVar6 = (ulong)param_3;
  plVar3 = *(long **)param_1[1];
  uVar4 = plVar3[1];
  uVar7 = uVar4 - 1;
  uVar12 = (uint)param_3;
  if ((uVar7 & uVar4) == 0) {
    lVar9 = *plVar3;
    plVar11 = *(long **)(lVar9 + (uVar7 & uVar6) * 8);
    do {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11[1] != uVar6);
      pbVar8 = (byte *)(plVar11 + 2);
    } while (*pbVar8 != uVar12);
  }
  else {
    uVar10 = uVar6;
    if (uVar4 <= uVar6) {
      uVar10 = 0;
      if (uVar4 != 0) {
        uVar10 = uVar6 / uVar4;
      }
      uVar10 = uVar6 - uVar10 * uVar4;
    }
    lVar9 = *plVar3;
    plVar11 = *(long **)(lVar9 + uVar10 * 8);
    do {
      do {
        plVar11 = (long *)*plVar11;
      } while (plVar11[1] != uVar6);
      pbVar8 = (byte *)(plVar11 + 2);
    } while (*pbVar8 != uVar12);
  }
  uVar10 = (ulong)(char)pbVar8[4];
  if (((long)uVar10 < 0) ||
     ((*(ulong *)((long)plVar3 + (uVar10 >> 3 & 0x1ffffffffffffff8) + 0x80) & 1L << (uVar10 & 0x3f))
      == 0)) {
    if ((uVar7 & uVar4) == 0) {
      plVar11 = *(long **)(lVar9 + (uVar7 & uVar6) * 8);
      do {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11[1] != uVar6);
        pbVar8 = (byte *)(plVar11 + 2);
      } while (*pbVar8 != param_3);
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
      plVar11 = *(long **)(lVar9 + uVar7 * 8);
      do {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11[1] != uVar6);
        pbVar8 = (byte *)(plVar11 + 2);
      } while (*pbVar8 != param_3);
    }
    uVar6 = (ulong)(char)pbVar8[4];
    if ((long)uVar6 < 0) {
      plVar11 = (long *)*param_1;
    }
    else {
      plVar11 = (long *)*param_1;
      if ((*(ulong *)((long)plVar3 + (uVar6 >> 3 & 0x1ffffffffffffff8) + 0x70) &
          1L << (uVar6 & 0x3f)) != 0) {
        lVar9 = *(long *)(*plVar11 + 0x1b8);
        if (lVar9 != 0) {
          lVar1 = *plVar11 + 0x1b8;
          lVar5 = lVar1;
          do {
            if ((int)uVar12 <= *(int *)(lVar9 + 0x20)) {
              lVar5 = lVar9;
            }
            lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < (int)uVar12) * 8);
          } while (lVar9 != 0);
          if (((lVar5 != lVar1) && (*(int *)(lVar5 + 0x20) <= (int)uVar12)) &&
             (plVar3 = *(long **)(lVar5 + 0x28), plVar3 != (long *)0x0)) {
            (**(code **)(*plVar3 + 0x208))(plVar3,1);
            (**(code **)(*plVar3 + 0x388))(plVar3,0,0);
          }
        }
        lVar9 = *(long *)(param_2 + 8);
        pcVar2 = "states_enable_open";
        goto LAB_7101e85710;
      }
    }
    uVar12 = (uint)param_3;
    lVar9 = *(long *)(*plVar11 + 0x1b8);
    if (lVar9 != 0) {
      lVar1 = *plVar11 + 0x1b8;
      lVar5 = lVar1;
      do {
        if ((int)uVar12 <= *(int *)(lVar9 + 0x20)) {
          lVar5 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < (int)uVar12) * 8);
      } while (lVar9 != 0);
      if (((lVar5 != lVar1) && (*(int *)(lVar5 + 0x20) <= (int)uVar12)) &&
         (plVar3 = *(long **)(lVar5 + 0x28), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x208))(plVar3,0);
        (**(code **)(*plVar3 + 0x388))(plVar3,1,0);
      }
    }
    lVar9 = *(long *)(param_2 + 8);
    pcVar2 = "states_close";
  }
  else {
    lVar9 = *(long *)(*(long *)*param_1 + 0x1b8);
    if (lVar9 != 0) {
      lVar1 = *(long *)*param_1 + 0x1b8;
      lVar5 = lVar1;
      do {
        if ((int)uVar12 <= *(int *)(lVar9 + 0x20)) {
          lVar5 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < (int)uVar12) * 8);
      } while (lVar9 != 0);
      if (((lVar5 != lVar1) && (*(int *)(lVar5 + 0x20) <= (int)uVar12)) &&
         (plVar11 = *(long **)(lVar5 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x208))(plVar11,1);
        (**(code **)(*plVar11 + 0x388))(plVar11,0,0);
        plVar3 = *(long **)param_1[1];
        uVar4 = plVar3[1];
        uVar7 = uVar4 - 1;
      }
    }
    if ((uVar7 & uVar4) == 0) {
      plVar11 = *(long **)(*plVar3 + (uVar7 & uVar6) * 8);
      do {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11[1] != uVar6);
        pbVar8 = (byte *)(plVar11 + 2);
      } while (*pbVar8 != uVar12);
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
      plVar11 = *(long **)(*plVar3 + uVar7 * 8);
      do {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11[1] != uVar6);
        pbVar8 = (byte *)(plVar11 + 2);
      } while (*pbVar8 != param_3);
    }
    uVar6 = (ulong)(char)pbVar8[4];
    pcVar2 = "states_open_off";
    if ((-1 < (long)uVar6) &&
       ((*(ulong *)((long)plVar3 + (uVar6 >> 3 & 0x1ffffffffffffff8) + 0x90) & 1L << (uVar6 & 0x3f))
        != 0)) {
      pcVar2 = "states_open_on";
    }
    lVar9 = *(long *)(param_2 + 8);
  }
LAB_7101e85710:
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar2);
  return;
}

