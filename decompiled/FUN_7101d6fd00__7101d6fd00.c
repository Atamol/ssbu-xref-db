// addr:      7101d6fd00
// offset:    0x1d6fd00
// name:      FUN_7101d6fd00
// mangled:   
// signature: undefined __cdecl FUN_7101d6fd00(undefined8 * param_1)


void FUN_7101d6fd00(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (1 < iVar1 - 1U) {
    if ((iVar1 != 3) && (iVar1 != 0)) {
      return;
    }
    uVar5 = FUN_7101d88520((long *)*param_1,*(int *)(param_1 + 0x52),*(int *)((long)param_1 + 0x2ac)
                           ,*(int *)(param_1 + 0x56));
    bVar3 = (uVar5 & 0xffffffffff) != 0;
    bVar4 = uVar5 >> 0x38 == 0xd9;
    uVar10 = 0;
    if (*(int *)((long)param_1 + 0x4cc) == 3) {
      if (bVar4 && bVar3) {
        lVar8 = *(long *)(DAT_710532f730 + 8);
        uVar5 = FUN_710325ce30(*(long *)(lVar8 + 0x278),uVar5);
        lVar8 = FUN_710325d640(*(long *)(lVar8 + 0x278),uVar5);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x5c) == 0) {
LAB_7101d6ff90:
            uVar6 = *(uint *)(lVar8 + 0x78);
          }
          else {
            uVar6 = *(int *)(lVar8 + 0x6c) +
                    (*(int *)(lVar8 + 0x6c) - *(int *)(lVar8 + 0x68)) *
                    (*(int *)(lVar8 + 0x5c) + -1);
          }
          if (uVar6 != 0) goto LAB_7101d6ff98;
LAB_7101d6ffb4:
          uVar10 = 0;
        }
      }
    }
    else if (bVar4 && bVar3) {
      lVar8 = *(long *)(DAT_710532f730 + 8);
      uVar5 = FUN_710325ce30(*(long *)(lVar8 + 0x278),uVar5);
      lVar8 = FUN_710325d640(*(long *)(lVar8 + 0x278),uVar5);
      if (lVar8 != 0) {
        uVar6 = *(uint *)(lVar8 + 0x6c);
        uVar7 = uVar6;
        if (*(uint *)(lVar8 + 0x60) <= uVar6) {
          uVar7 = *(uint *)(lVar8 + 0x60);
        }
        if (*(int *)(lVar8 + 0x5c) != 0) {
          uVar2 = *(uint *)(lVar8 + 0x68);
          if (uVar7 <= uVar2) {
            uVar7 = uVar2;
          }
          uVar7 = uVar7 + (uVar6 - uVar2) * *(int *)(lVar8 + 0x5c);
        }
        if (uVar7 == 0) {
          if (uVar6 == 0) goto LAB_7101d6ff90;
        }
        else {
          fVar9 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + 100));
          uVar6 = (uint)(fVar9 * 16.666666 + (float)uVar7);
          if (uVar6 == 0) goto LAB_7101d6ffb4;
        }
LAB_7101d6ff98:
        fVar9 = 0.0 / (float)uVar6;
        if (100.0 < 0.0 / (float)uVar6) {
          fVar9 = 100.0;
        }
        uVar10 = (ulong)(uint)fVar9;
      }
    }
    FUN_7103778630(uVar10,param_1[0x48],0x710439d7ab);
    goto LAB_7101d70050;
  }
  lVar8 = *(long *)(DAT_710532f8d0 + 8);
  if ((*(ulong *)(lVar8 + 200) & 0xff00000000000000) == 0xd900000000000000 &&
      (*(ulong *)(lVar8 + 200) & 0xffffffffff) != 0) {
    uVar7 = *(uint *)(lVar8 + 0xd8);
    uVar6 = FUN_7103315750(lVar8);
    if (uVar7 == 0) goto LAB_7101d6feac;
    fVar9 = ((float)uVar6 * 100.0) / (float)uVar7;
    if (100.0 < fVar9) {
      fVar9 = 100.0;
    }
  }
  else {
    FUN_7103315750(lVar8);
LAB_7101d6feac:
    fVar9 = 0.0;
  }
  FUN_7103778630((ulong)(uint)fVar9,param_1[0x48],0x710439d7ab);
LAB_7101d70050:
  FUN_710377a280((long)(param_1 + 0x4d),(byte *)"mnu_sound_test_seriese_playback_time",2);
  return;
}

