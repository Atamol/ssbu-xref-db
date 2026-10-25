// addr:      7101ff4d60
// offset:    0x1ff4d60
// name:      FUN_7101ff4d60
// mangled:   
// signature: undefined8 __cdecl FUN_7101ff4d60(long param_1)


undefined8 FUN_7101ff4d60(long param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long local_60;
  ulong uStack_58;
  
  if (*(long *)(param_1 + -8) == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(param_1 + -8) + 0x48);
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  lVar7 = **(long **)(param_1 + 0x20);
  lVar13 = *(long *)(param_1 + 0x10);
  uVar4 = FUN_71038f45b0(param_1,1,(undefined4 *)0x0);
  pfVar9 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if (*(float **)(param_1 + 0x10) <= pfVar9) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  uVar3 = FUN_71038f4d40(param_1,(long *)pfVar9,"new_instance_lua");
  plVar8 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    pcVar10 = (code *)*plVar8;
  }
  else {
    pcVar10 = (code *)0x0;
    if (uVar2 == 7) {
      pcVar10 = (code *)(*plVar8 + 0x28);
    }
  }
  uVar14 = lVar13 - (lVar7 + 0x10);
  *(long **)(param_1 + 0x10) = plVar8;
  pfVar5 = (float *)(*pcVar10)(uVar3);
  FUN_7101ff2160(pfVar5,param_1,2);
  pfVar9 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
  if (*(float **)(param_1 + 0x10) <= pfVar9) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  fVar17 = pfVar9[2];
  if (fVar17 == 4.2039e-45) {
    fVar17 = *pfVar9;
  }
  else if (fVar17 == 2.66247e-44) {
    fVar17 = (float)*(long *)pfVar9;
  }
  else {
    if (((uint)fVar17 & 0xf) == 4) {
      pbVar6 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_60);
      lVar7 = *(long *)pfVar9;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar11 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar11 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar6 == (byte *)(uVar11 + 1)) {
        fVar17 = (float)local_60;
        if ((int)uStack_58 != 0x13) {
          fVar17 = (float)local_60;
        }
        goto LAB_7101ff4ed4;
      }
    }
    fVar17 = 0.0;
  }
LAB_7101ff4ed4:
  pfVar9 = (float *)(**(long **)(param_1 + 0x20) + 0x40);
  if (*(float **)(param_1 + 0x10) <= pfVar9) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  fVar18 = pfVar9[2];
  if (fVar18 == 4.2039e-45) {
    fVar18 = *pfVar9;
  }
  else if (fVar18 == 2.66247e-44) {
    fVar18 = (float)*(long *)pfVar9;
  }
  else {
    if (((uint)fVar18 & 0xf) == 4) {
      pbVar6 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_60);
      lVar7 = *(long *)pfVar9;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar11 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar11 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar6 == (byte *)(uVar11 + 1)) {
        fVar18 = (float)local_60;
        if ((int)uStack_58 != 0x13) {
          fVar18 = (float)local_60;
        }
        goto LAB_7101ff4f84;
      }
    }
    fVar18 = 0.0;
  }
LAB_7101ff4f84:
  pfVar9 = (float *)(**(long **)(param_1 + 0x20) + 0x50);
  if (*(float **)(param_1 + 0x10) <= pfVar9) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  fVar16 = pfVar9[2];
  if (fVar16 == 4.2039e-45) {
    fVar16 = *pfVar9;
  }
  else if (fVar16 == 2.66247e-44) {
    fVar16 = (float)*(long *)pfVar9;
  }
  else {
    if (((uint)fVar16 & 0xf) == 4) {
      pbVar6 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_60);
      lVar7 = *(long *)pfVar9;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar11 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar11 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar6 == (byte *)(uVar11 + 1)) {
        fVar16 = (float)local_60;
        if ((int)uStack_58 != 0x13) {
          fVar16 = (float)local_60;
        }
        goto LAB_7101ff5030;
      }
    }
    fVar16 = 0.0;
  }
LAB_7101ff5030:
  local_60 = CONCAT44(fVar18,fVar17);
  iVar15 = (int)(uVar14 >> 4);
  uStack_58 = (ulong)(uint)fVar16;
  if (iVar15 < 6) {
    if (iVar15 < 0) {
      uVar14 = **(long **)(param_1 + 0x20) +
               ((long)(uVar14 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar11 = *(ulong *)(param_1 + 0x10);
      while (uVar11 < uVar14) {
        *(ulong *)(param_1 + 0x10) = uVar11 + 0x10;
        *(undefined4 *)(uVar11 + 8) = 0;
        uVar11 = *(ulong *)(param_1 + 0x10);
      }
      goto LAB_7101ff50ec;
    }
    pfVar9 = *(float **)(param_1 + 0x10);
  }
  else {
    pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x60);
    pfVar9 = *(float **)(param_1 + 0x10);
    if (pfVar9 <= pfVar1) {
      pfVar1 = (float *)&DAT_7104862960;
    }
    if (((uint)pfVar1[2] & 0xf) == 2) {
      lVar7 = *(long *)pfVar1;
    }
    else if (((uint)pfVar1[2] & 0xf) == 7) {
      lVar7 = *(long *)pfVar1 + 0x28;
    }
    else {
      lVar7 = 0;
    }
    plVar12 = *(long **)(lVar7 + 0x60);
  }
  uVar14 = (long)pfVar9 + ((long)(uVar14 * -0x10000000) >> 0x1c);
LAB_7101ff50ec:
  *(ulong *)(param_1 + 0x10) = uVar14;
  (**(code **)(*plVar12 + 0x220))(plVar12,uVar4 & 0xffffffff,pfVar5,&local_60);
  if (pfVar5 != (float *)0x0) {
    FUN_710392eb40((ulong)pfVar5);
  }
  return 0;
}

