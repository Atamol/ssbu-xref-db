// addr:      7101e629c0
// offset:    0x1e629c0
// name:      FUN_7101e629c0
// mangled:   
// signature: undefined __cdecl FUN_7101e629c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e629c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x80);
  plVar6 = (long *)(lVar9 + 0x1c8);
  FUN_7101e9bb40(plVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar7 = *(long *)(*(long *)(lVar9 + 0x210) + 0x40);
  if (((lVar7 == 0) || (plVar4 = *(long **)(*(long *)(lVar7 + 8) + 8), plVar4 == (long *)0x0)) ||
     (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) != 0)) {
    if (*(char *)(lVar9 + 0x219) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar9 + 0x210) + 8),0x71042f8a23);
      *(undefined1 *)(lVar9 + 0x219) = 0;
    }
    if (*(int *)(lVar9 + 0x21c) != 0) {
      *(int *)(lVar9 + 0x21c) = *(int *)(lVar9 + 0x21c) + -1;
    }
  }
  if (*(long *)(lVar9 + 0x288) != 0) {
    bVar3 = *(byte *)(*(long *)(lVar9 + 0x280) + 0x10);
    uVar5 = FUN_7101e95cc0(plVar6,bVar3,lVar9 + 0x250,param_4,param_5,param_6,param_7,param_8);
    if ((uVar5 & 1) != 0) {
      if ((bVar3 < 4) && (lVar7 = *(long *)(*plVar6 + (ulong)bVar3 * 8 + 0x48), lVar7 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar7 + 8),0x71044551e3);
      }
      plVar6 = *(long **)(lVar9 + 0x280);
      *(long *)(*plVar6 + 8) = plVar6[1];
      *(long *)plVar6[1] = *plVar6;
      *(long *)(lVar9 + 0x288) = *(long *)(lVar9 + 0x288) + -1;
      if (plVar6 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar6);
      }
    }
  }
  if (*(uint *)(lVar9 + 0x19c) < 0x13) {
    uVar2 = *(uint *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0x19c) * 4 + 0x150);
    if (*(uint *)(lVar9 + 0x1a0) != uVar2) {
      *(uint *)(lVar9 + 0x1a8) = *(uint *)(lVar9 + 0x1a0);
      *(uint *)(lVar9 + 0x1a0) = uVar2;
      if (0x11 < uVar2) goto LAB_7101e62ba4;
      lVar7 = lVar9 + (long)(int)uVar2 * 0x10;
      uVar1 = *(undefined8 *)(lVar7 + 0x38);
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar7 + 0x30);
      *(undefined8 *)(lVar9 + 0x18) = uVar1;
      pcVar8 = *(code **)(lVar9 + 0x20);
      uVar5 = *(ulong *)(lVar9 + 0x28) & 1;
      if (uVar5 != 0 || pcVar8 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar8 = *(code **)(pcVar8 + *(long *)(*(long *)(lVar9 + 8) +
                                                ((long)*(ulong *)(lVar9 + 0x28) >> 1)));
        }
        (*pcVar8)();
      }
      *(undefined4 *)(lVar9 + 0x1a4) = 0;
    }
    if (*(char *)(lVar9 + 0x1ac) != '\0') {
      pcVar8 = *(code **)(lVar9 + 0x20);
      uVar5 = *(ulong *)(lVar9 + 0x28) & 1;
      if (uVar5 != 0 || pcVar8 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar8 = *(code **)(pcVar8 + *(long *)(*(long *)(lVar9 + 8) +
                                                ((long)*(ulong *)(lVar9 + 0x28) >> 1)));
        }
        (*pcVar8)();
      }
      *(undefined4 *)(lVar9 + 0x1a4) = 0;
      *(undefined1 *)(lVar9 + 0x1ac) = 0;
    }
    if (*(long *)(lVar9 + 8) != 0) {
      pcVar8 = *(code **)(lVar9 + 0x10);
      uVar5 = *(ulong *)(lVar9 + 0x18) & 1;
      if (uVar5 != 0 || pcVar8 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar8 = *(code **)(pcVar8 + *(long *)(*(long *)(lVar9 + 8) +
                                                ((long)*(ulong *)(lVar9 + 0x18) >> 1)));
        }
        (*pcVar8)();
      }
    }
    *(int *)(lVar9 + 0x1a4) = *(int *)(lVar9 + 0x1a4) + 1;
    return;
  }
LAB_7101e62ba4:
                    /* WARNING: Subroutine does not return */
  abort();
}

