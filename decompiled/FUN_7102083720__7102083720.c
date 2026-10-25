// addr:      7102083720
// offset:    0x2083720
// name:      FUN_7102083720
// mangled:   
// signature: undefined8 __cdecl FUN_7102083720(long param_1)


undefined8 FUN_7102083720(long param_1)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  long local_60;
  int local_58;
  
  if (*(long *)(param_1 + -8) == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(param_1 + -8) + 0x130);
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar3 = pfVar1;
  if (*(float **)(param_1 + 0x10) <= pfVar1) {
    pfVar3 = (float *)&DAT_7104862960;
  }
  uVar13 = (long)*(float **)(param_1 + 0x10) - (long)pfVar1;
  fVar15 = pfVar3[2];
  if (fVar15 == 4.2039e-45) {
    fVar15 = *pfVar3;
  }
  else if (fVar15 == 2.66247e-44) {
    fVar15 = (float)*(long *)pfVar3;
  }
  else {
    if (((uint)fVar15 & 0xf) == 4) {
      pbVar5 = FUN_7103907f00((byte *)(*(long *)pfVar3 + 0x18),(float *)&local_60);
      lVar7 = *(long *)pfVar3;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar11 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar11 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar5 == (byte *)(uVar11 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7102083804;
      }
    }
    fVar15 = 0.0;
  }
LAB_7102083804:
  pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if (*(float **)(param_1 + 0x10) <= pfVar1) {
    pfVar1 = (float *)&DAT_7104862960;
  }
  uVar4 = FUN_71038f4d40(param_1,(long *)pfVar1,"new_instance_lua");
  plVar8 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    pcVar10 = (code *)*plVar8;
  }
  else if (uVar2 == 7) {
    pcVar10 = (code *)(*plVar8 + 0x28);
  }
  else {
    pcVar10 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar8;
  puVar6 = (undefined8 *)(*pcVar10)(uVar4);
  FUN_7101fd17f0(puVar6,param_1,2);
  iVar14 = (int)(uVar13 >> 4);
  if (iVar14 < 3) {
    if (iVar14 < 0) {
      uVar13 = **(long **)(param_1 + 0x20) +
               ((long)(uVar13 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar11 = *(ulong *)(param_1 + 0x10);
      while (uVar11 < uVar13) {
        *(ulong *)(param_1 + 0x10) = uVar11 + 0x10;
        *(undefined4 *)(uVar11 + 8) = 0;
        uVar11 = *(ulong *)(param_1 + 0x10);
      }
      lVar7 = 0;
      goto LAB_7102083948;
    }
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_71038f45b0(param_1,3,(undefined4 *)0x0);
    if (iVar14 != 3) {
      pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x40);
      if (*(float **)(param_1 + 0x10) <= pfVar1) {
        pfVar1 = (float *)&DAT_7104862960;
      }
      if (((uint)pfVar1[2] & 0xf) == 2) {
        lVar9 = *(long *)pfVar1;
      }
      else if (((uint)pfVar1[2] & 0xf) == 7) {
        lVar9 = *(long *)pfVar1 + 0x28;
      }
      else {
        lVar9 = 0;
      }
      plVar12 = *(long **)(lVar9 + 0x148);
    }
  }
  uVar13 = *(long *)(param_1 + 0x10) + ((long)(uVar13 * -0x10000000) >> 0x1c);
LAB_7102083948:
  *(ulong *)(param_1 + 0x10) = uVar13;
  (**(code **)(*plVar12 + 0xf8))(fVar15,plVar12,puVar6,lVar7);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  return 0;
}

