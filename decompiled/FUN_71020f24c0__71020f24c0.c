// addr:      71020f24c0
// offset:    0x20f24c0
// name:      FUN_71020f24c0
// mangled:   
// signature: undefined8 __cdecl FUN_71020f24c0(long param_1)


undefined8 FUN_71020f24c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  long local_40;
  int local_38;
  
  lVar7 = **(long **)(param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(lVar7 + 0x10);
  if (((int)((ulong)((long)plVar4 - (long)plVar1) >> 4) != 2 || plVar4 <= (long *)(lVar7 + 0x20)) ||
      (long *)(lVar7 + 0x20) == &DAT_7104862960) {
    return 0;
  }
  if ((*(uint *)(lVar7 + 0x28) & 0xf) != 5) {
    return 0;
  }
  if (plVar4 <= plVar1) {
    plVar1 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar1 + 1) & 0xf) == 2) {
    puVar8 = (undefined8 *)*plVar1;
  }
  else if ((*(uint *)(plVar1 + 1) & 0xf) == 7) {
    puVar8 = (undefined8 *)(*plVar1 + 0x28);
  }
  else {
    puVar8 = (undefined8 *)0x0;
  }
  FUN_71038f4d40(param_1,plVar4 + -2,"center");
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"x");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar7 + -8);
  if (uVar2 == 3) {
    fVar9 = *(float *)(lVar7 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar9 = (float)*(long *)(lVar7 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_40);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar5 + 1)) {
        fVar9 = (float)local_40;
        if (local_38 != 0x13) {
          fVar9 = (float)local_40;
        }
        goto LAB_71020f2628;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020f2628:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  puVar8[1] = puVar8[1];
  *puVar8 = CONCAT44((int)((ulong)*puVar8 >> 0x20),fVar9);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"y");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar7 + -8);
  if (uVar2 == 3) {
    fVar9 = *(float *)(lVar7 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar9 = (float)*(long *)(lVar7 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_40);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar5 + 1)) {
        fVar9 = (float)local_40;
        if (local_38 != 0x13) {
          fVar9 = (float)local_40;
        }
        goto LAB_71020f26e8;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020f26e8:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  puVar8[1] = puVar8[1];
  *puVar8 = CONCAT44(fVar9,(int)*puVar8);
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar7 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar7 + -0x20),"radius");
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar7 + -8);
  if (uVar2 == 3) {
    fVar9 = *(float *)(lVar7 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar9 = (float)*(long *)(lVar7 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_40);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar5 + 1)) {
        fVar9 = (float)local_40;
        if (local_38 != 0x13) {
          fVar9 = (float)local_40;
        }
        goto LAB_71020f27b4;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020f27b4:
  *(float *)(puVar8 + 2) = fVar9;
  uVar6 = *(long *)(param_1 + 0x10) - 0x10;
  *(ulong *)(param_1 + 0x10) = uVar6;
  uVar5 = **(long **)(param_1 + 0x20) + 0x10;
  while (uVar6 < uVar5) {
    *(ulong *)(param_1 + 0x10) = uVar6 + 0x10;
    *(undefined4 *)(uVar6 + 8) = 0;
    uVar6 = *(ulong *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x10) = uVar5;
  return 0;
}

