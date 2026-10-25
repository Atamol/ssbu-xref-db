// addr:      7101f35210
// offset:    0x1f35210
// name:      FUN_7101f35210
// mangled:   
// signature: undefined __cdecl FUN_7101f35210(long param_1)


void FUN_7101f35210(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x178),1);
    (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),0);
    (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),0);
    lVar3 = **(long **)(param_1 + 0x130);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    }
    (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),1);
    if ((*(int *)(param_1 + 0x100) != 5) &&
       (*(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x254),
       *(int *)(param_1 + 0x100) == 2)) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710429251f);
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x25c) == -1) {
    plVar2 = *(long **)(param_1 + 0x198);
    if (*(int *)((long)plVar2 + 0x25c) == -1) {
      if ((char)plVar2[0x50] == '\0') {
        return;
      }
      FUN_7103771a80((long *)(param_1 + 0x198),*(int *)(param_1 + 0x608),1);
      plVar2 = *(long **)(param_1 + 0x198);
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,0);
    if (*(uint *)(param_1 + 0xf4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 2;
      return;
    }
LAB_7101f353b0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + 0xf4) < 0x12) {
    uVar1 = *(int *)(param_1 + 0xf4) + 1;
    *(uint *)(param_1 + 0xf4) = uVar1;
    if (0x12 < uVar1) goto LAB_7101f353b0;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0xa8) = 5;
  }
  if ((*(char *)(param_1 + 0x5f9) == '\0') && (*(int *)(param_1 + 0xf4) < 0x12)) {
    uVar1 = *(int *)(param_1 + 0xf4) + 1;
    *(uint *)(param_1 + 0xf4) = uVar1;
    if (0x12 < uVar1) goto LAB_7101f353b0;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0xa8) = 6;
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x178),0);
  return;
}

