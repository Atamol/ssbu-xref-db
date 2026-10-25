// addr:      710377ce60
// offset:    0x377ce60
// name:      FUN_710377ce60
// mangled:   
// signature: undefined __cdecl FUN_710377ce60(long param_1)


void FUN_710377ce60(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_1 + 0x26c);
  cVar1 = 0.0 < fVar8;
  *(char *)(param_1 + 0x315) = cVar1;
  if (*(long *)(param_1 + 400) != 0) {
    plVar2 = (long *)FUN_71037964b0(*(long *)(param_1 + 400),0x7104453b4c);
    if (plVar2 != (long *)0x0) {
      if (fVar8 <= 0.0) {
        (**(code **)(*plVar2 + 400))();
      }
      else {
        (**(code **)(*plVar2 + 0x180))(0);
      }
    }
    cVar1 = *(char *)(param_1 + 0x315);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x2e0);
  fVar8 = (float)uVar4;
  if (cVar1 == '\0') {
    fVar6 = *(float *)(param_1 + 0x224) - *(float *)(param_1 + 0x220);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x224) - *(float *)(param_1 + 0x220);
    fVar5 = fVar6 / ((*(float *)(param_1 + 0x26c) - *(float *)(param_1 + 0x268)) /
                     *(float *)(param_1 + 0x270) + 1.0);
    fVar7 = fVar6;
    if (fVar5 <= fVar6) {
      fVar7 = fVar5;
    }
    if (fVar8 < fVar7) {
      uVar4 = CONCAT44((int)((ulong)uVar4 >> 0x20),fVar7);
      fVar7 = -(fVar7 - fVar8);
      goto LAB_710377cf34;
    }
  }
  fVar7 = 0.0;
LAB_710377cf34:
  fVar7 = fVar7 + *(float *)(param_1 + 0x2d4) + ((float)uVar4 - fVar8) * 0.5;
  lVar3 = *(long *)(param_1 + 0x198);
  *(float *)(param_1 + 0x300) = fVar7;
  *(float *)(param_1 + 0x304) = fVar6 - (float)uVar4;
  if (lVar3 != 0) {
    *(float *)(lVar3 + 0x34) = fVar7;
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  }
  lVar3 = *(long *)(param_1 + 0x1a0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x50) = uVar4;
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  }
  lVar3 = *(long *)(param_1 + 0x198);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe | *(byte *)(param_1 + 0x315);
  }
  return;
}

