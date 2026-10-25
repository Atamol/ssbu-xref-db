// addr:      7101d53a00
// offset:    0x1d53a00
// name:      FUN_7101d53a00
// mangled:   
// signature: undefined __cdecl FUN_7101d53a00(long param_1, uint param_2)


void FUN_7101d53a00(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (2 < param_2) {
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar6 = (long)(int)param_2;
  if ((long *)**(undefined8 **)(param_1 + 0x40) == (long *)0x0) {
    pfVar5 = (float *)((long)&DAT_71053082c8 + lVar6 * 0x10 + 4);
LAB_7101d53b38:
    pfVar4 = (float *)(&DAT_71053082d0 + lVar6 * 2);
  }
  else {
    FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"SOUND_TYPE_EDITED",&DAT_71042b2a84);
    pfVar5 = (float *)((long)&DAT_71053082c8 + lVar6 * 0x10 + 4);
    if ((long *)**(undefined8 **)(param_1 + 0x40) == (long *)0x0) goto LAB_7101d53b38;
    FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"VOLUME_BGM_EDITED",&DAT_71042a1c55);
    pfVar4 = (float *)(&DAT_71053082d0 + lVar6 * 2);
    if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
      FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"VOLUME_SE_EDITED",&DAT_71042a1c55);
      pfVar3 = (float *)((long)&DAT_71053082d0 + lVar6 * 0x10 + 4);
      if ((long *)**(undefined8 **)(param_1 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(param_1 + 0x40),"VOLUME_VOICE_EDITED",
                       &DAT_71042a1c55);
      }
      goto LAB_7101d53b58;
    }
  }
  pfVar3 = (float *)((long)&DAT_71053082d0 + lVar6 * 0x10 + 4);
LAB_7101d53b58:
  uVar2 = *(uint *)(&DAT_71053082c8 + (long)(int)param_2 * 2);
  if (param_2 != 2) {
    param_2 = (uint)(param_2 == 1);
  }
  if (uVar2 != 2) {
    uVar2 = (uint)(uVar2 == 1);
  }
  FUN_7103312b00(param_2,uVar2);
  fVar7 = *pfVar5;
  fVar9 = 100.0;
  if (0.0 <= fVar7) {
    if (100.0 < fVar7) {
      fVar7 = fVar9;
    }
    fVar7 = fVar7 / 100.0;
  }
  else {
    fVar7 = 0.0;
  }
  if (1.0 < fVar7) {
    fVar7 = ((fVar7 + -1.0) / 0.0) * 0.12201846 + 1.0;
  }
  FUN_71037375f0(fVar7,4);
  fVar8 = 0.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)(*DAT_710593b438 + 0x178) = fVar7 / 0.7;
  fVar7 = *pfVar4;
  if (0.0 <= fVar7) {
    if (100.0 < fVar7) {
      fVar7 = fVar9;
    }
    fVar8 = fVar7 / 100.0;
  }
  if (1.0 < fVar8) {
    fVar8 = ((fVar8 + -1.0) / 0.0) * 0.12201846 + 1.0;
  }
  FUN_71037375f0(fVar8,2);
  fVar7 = *pfVar3;
  if (0.0 <= fVar7) {
    if (100.0 < fVar7) {
      fVar7 = fVar9;
    }
    fVar7 = fVar7 / 100.0;
    if (1.0 < fVar7) {
      fVar7 = ((fVar7 + -1.0) / 0.0) * 0.12201846 + 1.0;
    }
  }
  else {
    fVar7 = 0.0;
  }
  FUN_71037375f0(fVar7,3);
  return;
}

