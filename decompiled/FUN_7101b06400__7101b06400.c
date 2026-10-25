// addr:      7101b06400
// offset:    0x1b06400
// name:      FUN_7101b06400
// mangled:   
// signature: undefined FUN_7101b06400(void)


void FUN_7101b06400(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuStack_50;
  ulong uStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  
  puVar9 = *(undefined8 **)(param_1 + 0x438);
  puVar8 = *(undefined8 **)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x264) == 0) {
    while (puVar8 != puVar9) {
      puVar8 = puVar8 + -2;
      (**(code **)*puVar8)(puVar8);
    }
    *(undefined8 **)(param_1 + 0x440) = puVar9;
    if (*(char *)(param_1 + 0x38d) != '\0') {
      if (*(char *)(param_1 + 0x38c) == '\0') {
        FUN_7103776640(&ppuStack_50,param_1 + 0x3d0,(byte ****)"set_parts_ticket",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pcVar5 = "anim_burn_out";
      }
      else {
        FUN_7103776640(&ppuStack_50,param_1 + 0x3d0,(byte ****)"set_parts_ticket",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pcVar5 = "anim_glow";
      }
      FUN_71037780e0(&ppuStack_40,(long)&ppuStack_50,(long ****)pcVar5,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      ppuVar1 = ppuStack_38;
      pppuVar7 = *(undefined ****)(param_1 + 0x440);
      if (pppuVar7 < *(undefined ****)(param_1 + 0x448)) {
        *pppuVar7 = &PTR_FUN_710523d9e8;
        pppuVar7[1] = (undefined **)0x0;
        if (pppuVar7 != &ppuStack_40) {
          ppuStack_38 = (undefined **)0x0;
          ppuVar3 = pppuVar7[1];
          pppuVar7[1] = ppuVar1;
          if (ppuVar3 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar3);
          }
        }
        *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
      }
      else {
        FUN_7101b09e60((long *)(param_1 + 0x438),&ppuStack_40,param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      ppuVar1 = ppuStack_38;
      ppuStack_40 = &PTR_FUN_710523d9e8;
      ppuStack_38 = (undefined **)0x0;
      if (ppuVar1 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar1);
      }
      uVar2 = uStack_48;
      ppuStack_50 = &PTR_FUN_710523d988;
      uStack_48 = 0;
      if (uVar2 != 0) {
        uVar4 = *(ulong *)(uVar2 + 0x18);
        *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar2 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar2);
      }
    }
    if (*(long *)(param_1 + 0x438) == *(long *)(param_1 + 0x440)) {
      return;
    }
    FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x438));
    return;
  }
  if (puVar9 == puVar8) {
    if (*(int *)(param_1 + 0x25c) < 1) {
      return;
    }
    *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
    return;
  }
  if (*(long **)(puVar9[1] + 8) != (long *)0x0) {
    uVar2 = (**(code **)(**(long **)(puVar9[1] + 8) + 0x138))();
    if ((uVar2 & 1) == 0) {
      return;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x438);
    puVar8 = *(undefined8 **)(param_1 + 0x440);
  }
  if (puVar9 + 2 != puVar8) {
    do {
      uVar6 = puVar9[3];
      uVar2 = puVar9[1];
      puVar9[3] = 0;
      puVar9[1] = uVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      puVar9 = puVar9 + 2;
    } while (puVar8 + -2 != puVar9);
    puVar8 = *(undefined8 **)(param_1 + 0x440);
    if (puVar8 == puVar9) goto LAB_7101b064ac;
  }
  do {
    puVar8 = puVar8 + -2;
    (**(code **)*puVar8)(puVar8);
  } while (puVar9 != puVar8);
LAB_7101b064ac:
  *(undefined8 **)(param_1 + 0x440) = puVar9;
  if (*(undefined8 **)(param_1 + 0x438) == puVar9) {
    return;
  }
  FUN_710377aee0(0x3f800000,(long)*(undefined8 **)(param_1 + 0x438));
  return;
}

