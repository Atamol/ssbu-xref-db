// addr:      71019a87e0
// offset:    0x19a87e0
// name:      FUN_71019a87e0
// mangled:   
// signature: undefined __cdecl FUN_71019a87e0(long param_1)


void FUN_71019a87e0(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x2d4) == 0) {
    plVar2 = (long *)(param_1 + 0x2e0);
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 1;
    FUN_7103771a80(plVar2,0,0);
    if (*(int *)(param_1 + 0x2d0) - 0xcU < 3) {
      (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,1);
      (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,1);
    }
  }
  if (*(char *)(*(long *)(param_1 + 0x2e0) + 0x280) == '\0') {
    iVar3 = *(int *)(*(long *)(param_1 + 0x2e0) + 0x25c);
    if (iVar3 == -1) {
      return;
    }
    if (iVar3 == 0) goto LAB_71019a8868;
    if (iVar3 != 1) goto LAB_71019a8920;
    uVar1 = *(uint *)(param_1 + 0x2cc);
    if (0x12 < uVar1) goto LAB_71019a896c;
    uVar4 = 0xf;
  }
  else {
LAB_71019a8868:
    *(char **)(param_1 + 0x308) = "type_03";
    *(undefined2 *)(param_1 + 800) = 0x100;
    *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
    if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019a896c;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
    if (0x11 < *(int *)(param_1 + 0x2cc)) goto LAB_71019a8920;
    uVar1 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar1;
    if (0x12 < uVar1) goto LAB_71019a896c;
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = uVar4;
  if (*(int *)(param_1 + 0x2cc) < 0x12) {
    uVar1 = *(int *)(param_1 + 0x2cc) + 1;
    *(uint *)(param_1 + 0x2cc) = uVar1;
    if (0x12 < uVar1) {
LAB_71019a896c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x280) = 0x20;
  }
LAB_71019a8920:
  if (2 < *(int *)(param_1 + 0x2d0) - 0xcU) {
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x2e0) + 0x60))(*(long **)(param_1 + 0x2e0),0);
                    /* WARNING: Could not recover jumptable at 0x0071019a895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x2e0) + 0x70))(*(long **)(param_1 + 0x2e0),0);
  return;
}

