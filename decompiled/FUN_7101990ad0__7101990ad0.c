// addr:      7101990ad0
// offset:    0x1990ad0
// name:      FUN_7101990ad0
// mangled:   
// signature: undefined __cdecl FUN_7101990ad0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101990ad0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)((long)param_1 + 0x134) == 0) {
    return;
  }
  FUN_7103776640(&local_60,(long)(param_1 + 1),(byte ****)"set_bg_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_50,(long)&local_60,(long ****)"anim_bg",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_48;
  if ((*(long **)(local_48 + 8) == (long *)0x0) ||
     (uVar4 = (**(code **)(**(long **)(local_48 + 8) + 0x130))(), (uVar4 & 1) == 0)) {
LAB_7101990c3c:
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = 0;
    if (uVar3 != 0) goto LAB_7101990c4c;
  }
  else {
    if (*(long **)(local_48 + 8) == (long *)0x0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (float)(**(code **)(**(long **)(local_48 + 8) + 0x198))();
    }
    if ((uint)(int)fVar10 % 100 == 0) {
      uVar4 = 0;
      do {
        if ((&DAT_7104543940)[uVar4] == (int)fVar10) {
          iVar2 = *(int *)(param_1 + 0x30);
          uVar7 = (long)iVar2 + 1;
          *(int *)(param_1 + 0x30) = (int)uVar7;
          if (iVar2 < -1) {
            lVar5 = param_1[0x2d];
            uVar9 = param_1[0x2e] - lVar5 >> 3;
LAB_7101990c0c:
            uVar7 = 0;
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          else {
            lVar5 = param_1[0x2d];
            uVar9 = param_1[0x2e] - lVar5 >> 3;
            if (uVar9 <= uVar7) goto LAB_7101990c0c;
          }
          if (uVar9 <= (ulong)(long)(int)uVar7) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          FUN_7101990940((long)param_1,*(ulong *)(lVar5 + (long)(int)uVar7 * 8),uVar4 & 0xffffffff,
                         param_4,param_5,param_6,param_7,param_8);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xd);
      goto LAB_7101990c3c;
    }
LAB_7101990c4c:
    local_48 = 0;
    local_50 = &PTR_FUN_710523d9e8;
    FUN_710392eb40(uVar3);
  }
  lVar5 = **(long **)*param_1;
  if ((((*(char *)((long)param_1 + 0x14c) != '\0') &&
       (lVar8 = *(long *)(lVar5 + 0x600), *(char *)(lVar8 + 0x4aa) != '\0')) &&
      ((*(byte *)(lVar8 + 0x1b4) >> 1 & 1) != 0)) && (*(int *)((long)param_1 + 300) < 0x12)) {
    uVar1 = *(int *)((long)param_1 + 300) + 1;
    *(uint *)((long)param_1 + 300) = uVar1;
    if (0x12 < uVar1) goto LAB_7101990d64;
    *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0xe0) = 5;
  }
  if (*(char *)(param_1 + 0x3d) == '\0') {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x600);
  if (*(char *)(lVar5 + 0x4aa) == '\0') {
    return;
  }
  if ((*(byte *)(lVar5 + 0x1b0) >> 1 & 1) == 0) {
    return;
  }
  if (*(uint *)(*DAT_7105328160 + 0x204388) < 3) {
    iVar2 = *(int *)((long)param_1 + 300);
    if (*(uint *)(*DAT_7105328160 + 0x204388) == 0) {
      if (0x11 < iVar2) {
        return;
      }
      uVar1 = iVar2 + 1;
      *(uint *)((long)param_1 + 300) = uVar1;
      if (0x12 < uVar1) goto LAB_7101990d64;
      lVar5 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar6 = 6;
    }
    else {
      if (0x11 < iVar2) {
        return;
      }
      uVar1 = iVar2 + 1;
      *(uint *)((long)param_1 + 300) = uVar1;
      if (0x12 < uVar1) {
LAB_7101990d64:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar6 = 7;
    }
  }
  else {
    if (0x12 < *(uint *)((long)param_1 + 300)) goto LAB_7101990d64;
    lVar5 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 300) * 4;
    uVar6 = 8;
  }
  *(undefined4 *)(lVar5 + 0xe0) = uVar6;
  return;
}

