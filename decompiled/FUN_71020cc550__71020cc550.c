// addr:      71020cc550
// offset:    0x20cc550
// name:      FUN_71020cc550
// mangled:   
// signature: undefined8 __cdecl FUN_71020cc550(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71020cc550(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  
  pfVar6 = *(float **)(param_1 + 0x10);
  pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  uVar13 = (long)pfVar6 - (long)pfVar11;
  if (pfVar6 <= pfVar11) {
    pfVar11 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar11[2] & 0xf) == 2) {
    lVar12 = *(long *)pfVar11;
  }
  else if (((uint)pfVar11[2] & 0xf) == 7) {
    lVar12 = *(long *)pfVar11 + 0x28;
  }
  else {
    lVar12 = 0;
  }
  pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if (pfVar6 <= pfVar11) {
    pfVar11 = (float *)&DAT_7104862960;
  }
  uVar2 = FUN_71038f4d40(param_1,(long *)pfVar11,"new_instance_lua");
  plVar7 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar3 == 2) {
    pcVar10 = (code *)*plVar7;
  }
  else if (uVar3 == 7) {
    pcVar10 = (code *)(*plVar7 + 0x28);
  }
  else {
    pcVar10 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar7;
  plVar7 = (long *)(*pcVar10)(uVar2);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_1,2);
  pfVar6 = *(float **)(param_1 + 0x10);
  pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
  if (pfVar6 <= pfVar11) {
    pfVar11 = (float *)&DAT_7104862960;
  }
  fVar1 = pfVar11[2];
  if (fVar1 != 0.0) {
    if (fVar1 != 2.66247e-44) {
      if (fVar1 == 1.4013e-45) {
        uVar5 = (ulong)(*pfVar11 != 0.0);
        goto joined_r0x0071020cc6c0;
      }
      if (((uint)fVar1 & 0xf) == 3) {
        fVar14 = *pfVar11;
        goto joined_r0x0071020cc6b8;
      }
LAB_71020cc78c:
      if (fVar1 == 4.2039e-45) {
        uVar5 = (ulong)(*pfVar11 != 0.0);
      }
      else {
        uVar5 = 1;
      }
      goto joined_r0x0071020cc6c0;
    }
    if (*(long *)pfVar11 != 0) {
      fVar14 = (float)*(long *)pfVar11;
joined_r0x0071020cc6b8:
      if (fVar14 != 0.0) goto LAB_71020cc78c;
    }
  }
  uVar5 = 0;
joined_r0x0071020cc6c0:
  if ((int)(uVar13 >> 4) < 0) {
    pfVar11 = (float *)(**(long **)(param_1 + 0x20) +
                        ((long)(uVar13 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10);
    while (pfVar6 < pfVar11) {
      *(float **)(param_1 + 0x10) = pfVar6 + 4;
      pfVar6[2] = 0.0;
      pfVar6 = *(float **)(param_1 + 0x10);
    }
  }
  else {
    pfVar11 = (float *)((long)pfVar6 + ((long)(uVar13 * -0x10000000) >> 0x1c));
  }
  *(float **)(param_1 + 0x10) = pfVar11;
  uVar3 = FUN_710065d530(lVar12,(long)plVar7,uVar5,param_4,param_5,param_6,param_7,param_8);
  puVar8 = *(uint **)(param_1 + 0x10);
  *puVar8 = uVar3 & 1;
  puVar8[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar4 = FUN_710391e050(param_1);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar9 + 1) = 0x45;
  *puVar9 = uVar4;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  (**(code **)(*plVar7 + 0x18))(plVar7,param_1,1);
  (**(code **)(*plVar7 + 8))(plVar7);
  return 2;
}

