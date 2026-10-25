// addr:      7101b8cad0
// offset:    0x1b8cad0
// name:      FUN_7101b8cad0
// mangled:   
// signature: undefined __cdecl FUN_7101b8cad0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101b8cad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined **local_30;
  long *local_28;
  
  plVar7 = *(long **)(param_1 + 0x80);
  FUN_7101b8c4e0(plVar7);
  if (*plVar7 != 0) {
    pcVar4 = (code *)plVar7[1];
    uVar6 = plVar7[2] & 1;
    if (uVar6 != 0 || pcVar4 != (code *)0x0) {
      if (uVar6 != 0) {
        pcVar4 = *(code **)(pcVar4 + *(long *)(*plVar7 + (plVar7[2] >> 1)));
      }
      (*pcVar4)();
    }
  }
  *(int *)((long)plVar7 + 0xbc) = *(int *)((long)plVar7 + 0xbc) + 1;
  FUN_7103776910(&local_30,*(long *)plVar7[0x1a] + 8,(long ****)"set_parts_timebar_rec",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  plVar2 = local_28;
  uVar3 = 0;
  if (*local_28 != 0) {
    uVar3 = *(undefined1 *)(*local_28 + 0x59);
  }
  *(undefined1 *)((long)plVar7 + 0x17b) = uVar3;
  lVar5 = *local_28;
  if (lVar5 == 0) {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar11 = (float)(_ConstantZero >> 0x20);
    uVar6 = _ConstantZero;
    goto LAB_7101b8cc58;
  }
  fVar11 = *(float *)(lVar5 + 0x30);
  fVar8 = ABS(*(float *)(lVar5 + 0x50) * *(float *)(lVar5 + 0x48));
  uVar10 = *(ulong *)(lVar5 + 0x30);
  fVar9 = ABS(*(float *)(lVar5 + 0x54) * *(float *)(lVar5 + 0x4c));
  bVar1 = *(byte *)(lVar5 + 0x5b) & 3;
  if (bVar1 == 2) {
    fVar11 = fVar11 - fVar8 * 0.5;
LAB_7101b8cbdc:
    uVar10 = CONCAT44((int)(uVar10 >> 0x20),fVar11);
  }
  else if (bVar1 == 1) {
    fVar11 = fVar11 + fVar8 * 0.5;
    goto LAB_7101b8cbdc;
  }
  bVar1 = *(byte *)(lVar5 + 0x5b) >> 2 & 3;
  fVar11 = (float)(uVar10 >> 0x20);
  if (bVar1 == 2) {
    fVar11 = fVar9 * 0.5 + fVar11;
LAB_7101b8cc0c:
    uVar10 = CONCAT44(fVar11,(int)uVar10);
  }
  else if (bVar1 == 1) {
    fVar11 = fVar11 - fVar9 * 0.5;
    goto LAB_7101b8cc0c;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 == 0) {
    fVar11 = (float)(uVar10 >> 0x20);
    uVar6 = uVar10;
  }
  else {
    do {
      fVar12 = (float)uVar10 + *(float *)(lVar5 + 0x30);
      uVar6 = (ulong)(uint)fVar12;
      fVar11 = (float)(uVar10 >> 0x20) + *(float *)(lVar5 + 0x34);
      uVar10 = CONCAT44(fVar11,fVar12);
      lVar5 = *(long *)(lVar5 + 0x18);
    } while (lVar5 != 0);
  }
LAB_7101b8cc58:
  plVar7[0x2d] = 0;
  plVar7[0x2c] = CONCAT44(((540.0 - fVar11) - fVar9 * 0.5) + *(float *)((long)plVar7 + 0x174) * 0.5,
                          ((float)uVar6 + 960.0) - fVar8 * 0.5);
  if (0 < (int)plVar7[0x38]) {
    *(int *)(plVar7 + 0x38) = (int)plVar7[0x38] + -1;
  }
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  return;
}

