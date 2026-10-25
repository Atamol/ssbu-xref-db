// addr:      7101e97fb0
// offset:    0x1e97fb0
// name:      FUN_7101e97fb0
// mangled:   
// signature: undefined __cdecl FUN_7101e97fb0(long * param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x007101e97ff0) */

void FUN_7101e97fb0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar5 = 0.0;
  if ((*(char *)(param_2 + 0x80) != '\0') && (0 < *(long *)(param_2 + 8))) {
    fVar3 = (float)*(long *)(param_2 + 0x10) / (float)*(long *)(param_2 + 8);
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar3;
    }
  }
  if (*(float *)((long)param_1 + 0xc) != fVar5) {
    lVar2 = *param_1;
    *(float *)((long)param_1 + 0xc) = fVar5;
    plVar1 = *(long **)(*(long *)(lVar2 + 0x38) + 8);
    if (plVar1 == (long *)0x0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = (float)(**(code **)(*plVar1 + 0x1a8))();
      fVar5 = *(float *)((long)param_1 + 0xc);
      lVar2 = *param_1;
    }
    fVar4 = fVar3 * fVar5;
    if (fVar3 <= fVar3 * fVar5) {
      fVar4 = fVar3;
    }
    FUN_710377b010((ulong)(uint)fVar4,lVar2 + 0x30);
  }
  auVar6 = FUN_7102512c50(param_2);
  if ((param_1[2] == auVar6._0_8_) && (param_1[3] == auVar6._8_8_)) {
    return;
  }
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  FUN_710377a280(*param_1 + 0x40,(byte *)"cam_searchfield_time",2);
  return;
}

