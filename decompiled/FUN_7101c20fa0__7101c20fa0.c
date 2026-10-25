// addr:      7101c20fa0
// offset:    0x1c20fa0
// name:      FUN_7101c20fa0
// mangled:   
// signature: undefined __cdecl FUN_7101c20fa0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c20fa0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x170) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_40,(long)&local_30,(byte ****)"set_parts_det_key_00",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  if (((*(char *)(param_1 + 0x20c) == '\0') && (*(char *)(param_1 + 0x20d) == '\0')) &&
     (*(char *)(param_1 + 0x20e) == '\0')) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x1b8);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x1b0) + 0x1b8;
      lVar5 = lVar7;
      do {
        bVar2 = *(int *)(lVar6 + 0x20) < 0;
        if (!bVar2) {
          lVar5 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + (ulong)bVar2 * 8);
      } while (lVar6 != 0);
      if (((lVar5 != lVar7) && (*(int *)(lVar5 + 0x20) < 1)) &&
         (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x1f8))(plVar8,0);
        (**(code **)(*plVar8 + 0x388))(plVar8,1,0);
      }
    }
    goto LAB_7101c210b4;
  }
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  if ((*(char *)(param_1 + 0x20d) == '\0') && (*(char *)(param_1 + 0x20e) == '\0')) {
    lVar6 = *(long *)(param_1 + 0x1b0) + 0x1b8;
    lVar7 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x1b8);
    if (*(char *)(param_1 + 0x20c) != '\0') {
      lVar5 = lVar6;
      if (lVar7 != 0) {
        do {
          bVar2 = *(int *)(lVar7 + 0x20) < 0;
          if (!bVar2) {
            lVar5 = lVar7;
          }
          lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
        } while (lVar7 != 0);
        if (((lVar5 != lVar6) && (*(int *)(lVar5 + 0x20) < 1)) &&
           (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x1f8))(plVar8,1);
          param_3 = (long ****)0x0;
          (**(code **)(*plVar8 + 0x388))(plVar8,0);
        }
      }
      pcVar4 = "mel_rule_select_guide1";
      goto LAB_7101c21094;
    }
    lVar5 = lVar6;
    if (lVar7 != 0) {
      do {
        bVar2 = *(int *)(lVar7 + 0x20) < 0;
        if (!bVar2) {
          lVar5 = lVar7;
        }
        lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
      } while (lVar7 != 0);
      if (((lVar5 != lVar6) && (*(int *)(lVar5 + 0x20) < 1)) &&
         (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x1f8))(plVar8,0);
        (**(code **)(*plVar8 + 0x388))(plVar8,1,0);
      }
    }
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x1b8);
    if (lVar6 != 0) {
      lVar7 = *(long *)(param_1 + 0x1b0) + 0x1b8;
      lVar5 = lVar7;
      do {
        bVar2 = *(int *)(lVar6 + 0x20) < 0;
        if (!bVar2) {
          lVar5 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + (ulong)bVar2 * 8);
      } while (lVar6 != 0);
      if (((lVar5 != lVar7) && (*(int *)(lVar5 + 0x20) < 1)) &&
         (plVar8 = *(long **)(lVar5 + 0x28), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x1f8))(plVar8,1);
        param_3 = (long ****)0x0;
        (**(code **)(*plVar8 + 0x388))(plVar8,0);
      }
    }
    pcVar4 = "mel_rule_select_edit";
LAB_7101c21094:
    FUN_710377a120((long)&local_50,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  uVar1 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
LAB_7101c210b4:
  uVar1 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

