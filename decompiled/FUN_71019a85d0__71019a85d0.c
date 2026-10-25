// addr:      71019a85d0
// offset:    0x19a85d0
// name:      FUN_71019a85d0
// mangled:   
// signature: undefined __cdecl FUN_71019a85d0(long param_1)


void FUN_71019a85d0(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x2d4) == 0) {
    plVar3 = (long *)(param_1 + 0x2e0);
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 1;
    FUN_7103771a80(plVar3,0,0);
    if (*(int *)(param_1 + 0x2d0) - 0xcU < 3) {
      (**(code **)(*(long *)*plVar3 + 0x60))((long *)*plVar3,1);
      (**(code **)(*(long *)*plVar3 + 0x70))((long *)*plVar3,1);
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x2e0) + 0x280) == '\0') {
    iVar4 = *(int *)(*(long *)(param_1 + 0x2e0) + 0x25c);
    if (iVar4 == -1) {
      return;
    }
    if (iVar4 == 0) goto LAB_71019a8658;
    if (iVar4 != 1) goto LAB_71019a8784;
    *(char **)(param_1 + 0x308) = "type_01";
    *(undefined2 *)(param_1 + 800) = 0x100;
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_succession_touch";
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019a87d0;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0x10;
    if (0x11 < *(int *)(param_1 + 0x2cc)) goto LAB_71019a8784;
    uVar2 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a87d0;
    *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 1;
    if (0x11 < *(int *)(param_1 + 0x2cc)) goto LAB_71019a8784;
    uVar2 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a87d0;
    lVar1 = (long)(int)uVar2 << 2;
    uVar5 = 2;
  }
  else {
LAB_71019a8658:
    *(char **)(param_1 + 0x308) = "type_03";
    *(undefined2 *)(param_1 + 800) = 0x100;
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019a87d0;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
    if (0x11 < *(int *)(param_1 + 0x2cc)) goto LAB_71019a8784;
    uVar2 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a87d0;
    lVar1 = (long)(int)uVar2 * 4;
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + lVar1 + 0x280) = uVar5;
  if (*(int *)(param_1 + 0x2cc) < 0x12) {
    uVar2 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar2;
    if (0x12 < uVar2) {
LAB_71019a87d0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x280) = 0x20;
  }
LAB_71019a8784:
  if (2 < *(int *)(param_1 + 0x2d0) - 0xcU) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x2e0) + 0x60))(*(long **)(param_1 + 0x2e0),0);
                    /* WARNING: Could not recover jumptable at 0x0071019a87c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e0) + 0x70))(*(long **)(param_1 + 0x2e0),0);
  return;
}

