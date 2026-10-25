// addr:      71020be9f0
// offset:    0x20be9f0
// name:      FUN_71020be9f0
// mangled:   
// signature: undefined8 __cdecl FUN_71020be9f0(long param_1)


undefined8 FUN_71020be9f0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  float *pfVar8;
  long *plVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  long local_60;
  undefined8 uStack_58;
  
  pfVar8 = *(float **)(param_1 + 0x10);
  pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar2 = pfVar1;
  if (pfVar8 <= pfVar1) {
    pfVar2 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar2[2] & 0xf) == 2) {
    lVar14 = *(long *)pfVar2;
  }
  else if (((uint)pfVar2[2] & 0xf) == 7) {
    lVar14 = *(long *)pfVar2 + 0x28;
  }
  else {
    lVar14 = 0;
  }
  pfVar2 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if (pfVar8 <= pfVar2) {
    pfVar2 = (float *)&DAT_7104862960;
  }
  uVar17 = (long)pfVar8 - (long)pfVar1;
  uVar4 = FUN_71038f4d40(param_1,(long *)pfVar2,"new_instance_lua");
  plVar9 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar3 == 2) {
    pcVar15 = (code *)*plVar9;
  }
  else if (uVar3 == 7) {
    pcVar15 = (code *)(*plVar9 + 0x28);
  }
  else {
    pcVar15 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar9;
  puVar5 = (ushort *)(*pcVar15)(uVar4);
  FUN_71020bed60(puVar5,param_1,2);
  pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
  if (*(float **)(param_1 + 0x10) <= pfVar1) {
    pfVar1 = (float *)&DAT_7104862960;
  }
  fVar19 = pfVar1[2];
  if (fVar19 == 4.2039e-45) {
    fVar19 = *pfVar1;
  }
  else if (fVar19 == 2.66247e-44) {
    fVar19 = (float)*(long *)pfVar1;
  }
  else {
    if (((uint)fVar19 & 0xf) == 4) {
      pbVar6 = FUN_7103907f00((byte *)(*(long *)pfVar1 + 0x18),(float *)&local_60);
      lVar10 = *(long *)pfVar1;
      if (*(char *)(lVar10 + 8) == '\x04') {
        uVar16 = (ulong)*(byte *)(lVar10 + 0xb);
      }
      else {
        uVar16 = *(ulong *)(lVar10 + 0x10);
      }
      if (pbVar6 == (byte *)(uVar16 + 1)) {
        fVar19 = (float)local_60;
        if ((int)uStack_58 != 0x13) {
          fVar19 = (float)local_60;
        }
        goto LAB_71020beb78;
      }
    }
    fVar19 = 0.0;
  }
LAB_71020beb78:
  pfVar1 = (float *)(**(long **)(param_1 + 0x20) + 0x40);
  if (*(float **)(param_1 + 0x10) <= pfVar1) {
    pfVar1 = (float *)&DAT_7104862960;
  }
  fVar18 = pfVar1[2];
  if (fVar18 == 4.2039e-45) {
    fVar18 = *pfVar1;
  }
  else if (fVar18 == 2.66247e-44) {
    fVar18 = (float)*(long *)pfVar1;
  }
  else {
    if (((uint)fVar18 & 0xf) == 4) {
      pbVar6 = FUN_7103907f00((byte *)(*(long *)pfVar1 + 0x18),(float *)&local_60);
      lVar10 = *(long *)pfVar1;
      if (*(char *)(lVar10 + 8) == '\x04') {
        uVar16 = (ulong)*(byte *)(lVar10 + 0xb);
      }
      else {
        uVar16 = *(ulong *)(lVar10 + 0x10);
      }
      if (pbVar6 == (byte *)(uVar16 + 1)) {
        fVar18 = (float)local_60;
        if ((int)uStack_58 != 0x13) {
          fVar18 = (float)local_60;
        }
        goto LAB_71020bec24;
      }
    }
    fVar18 = 0.0;
  }
LAB_71020bec24:
  local_60 = CONCAT44(fVar18,fVar19);
  uStack_58 = 0;
  if ((int)(uVar17 >> 4) < 0) {
    uVar17 = **(long **)(param_1 + 0x20) +
             ((long)(uVar17 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
    uVar16 = *(ulong *)(param_1 + 0x10);
    while (uVar16 < uVar17) {
      *(ulong *)(param_1 + 0x10) = uVar16 + 0x10;
      *(undefined4 *)(uVar16 + 8) = 0;
      uVar16 = *(ulong *)(param_1 + 0x10);
    }
  }
  else {
    uVar17 = *(long *)(param_1 + 0x10) + ((long)(uVar17 * -0x10000000) >> 0x1c);
  }
  *(ulong *)(param_1 + 0x10) = uVar17;
  uVar7 = app::FighterUtil::calc_water_surface_pos(lVar14,(long)puVar5,&local_60);
  puVar11 = *(uint **)(param_1 + 0x10);
  *puVar11 = (uint)uVar7 & 1;
  puVar11[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar7 = FUN_710391e050(param_1);
  puVar12 = *(undefined8 **)(param_1 + 0x10);
  *puVar12 = uVar7;
  *(undefined4 *)(puVar12 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71020bf290(puVar5,param_1);
  puVar13 = *(undefined4 **)(param_1 + 0x10);
  puVar13[2] = 3;
  *puVar13 = (int)local_60;
  lVar14 = *(long *)(param_1 + 0x10);
  puVar13 = (undefined4 *)(lVar14 + 0x10);
  *(undefined4 **)(param_1 + 0x10) = puVar13;
  *puVar13 = (int)((ulong)local_60 >> 0x20);
  *(undefined4 *)(lVar14 + 0x18) = 3;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710392eb40((ulong)puVar5);
  return 4;
}

