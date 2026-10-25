// addr:      7102ea9120
// offset:    0x2ea9120
// name:      FUN_7102ea9120
// mangled:   
// signature: undefined __cdecl FUN_7102ea9120(float param_1, long * param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102ea9120(float param_1,long *param_2,undefined8 param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  undefined1 uVar9;
  float *pfVar10;
  long lVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  switch(*(undefined4 *)((long)param_2 + 0x2f4)) {
  case 0:
    puVar7 = *(uint **)(*param_2 + 0x340);
    fVar18 = *(float *)param_2[0x10];
    fVar19 = ((float *)param_2[0x10])[1];
    goto LAB_7102ea9334;
  case 1:
    fVar18 = *(float *)(param_2 + 0x5f);
    *(float *)(param_2 + 0x5f) = fVar18 - param_1;
    if (0.0 < fVar18 - param_1) {
      return;
    }
    uVar6 = *(uint *)(param_2 + 0x68);
    if (uVar6 == 0xffffffff) {
      FUN_7102c2f880(param_2 + 0x67);
      uVar6 = *(uint *)(param_2 + 0x68);
    }
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)((long)param_2 + 0x344);
    *(long *)((long)param_2 + 0x344) = param_2[0x69];
    lVar8 = param_2[0x6a];
    *(undefined4 *)(param_2 + 0x6a) = 0xffffffff;
    *(uint *)(param_2 + 0x6b) = uVar6;
    *(int *)((long)param_2 + 0x34c) = (int)lVar8;
    *(undefined1 *)((long)param_2 + 0x354) = 1;
    if (uVar6 == 0) {
      *(undefined1 *)(param_2 + 0x60) = 1;
      uVar6 = 2;
    }
    else {
      uVar6 = ~uVar6 & 1;
      *(undefined1 *)(param_2 + 0x60) = 0;
    }
    if (*(char *)(*param_2 + 0x18) == '\0') {
      uVar6 = 2;
      uVar9 = 1;
LAB_7102ea98f0:
      *(undefined1 *)(param_2 + 0x60) = uVar9;
    }
    else {
      cVar2 = *(char *)(*param_2 + 0x61);
      if (cVar2 == '\x01') {
        uVar9 = 0;
        uVar6 = 0;
        goto LAB_7102ea98f0;
      }
      if (cVar2 == '\x02') {
        uVar9 = 0;
        uVar6 = 1;
        goto LAB_7102ea98f0;
      }
    }
    *(uint *)((long)param_2 + 0x2fc) = uVar6;
    uVar15 = 2;
    break;
  case 2:
    if ((char)param_2[0x60] == '\0') {
      cVar2 = *(char *)(param_2[0x58] + 8);
      iVar4 = *(int *)((long)param_2 + 0x2fc);
      if (iVar4 == 0) {
        (**(code **)(*(long *)param_2[0x5b] + 0x20))((long *)param_2[0x5b],cVar2 != '\0');
        iVar4 = *(int *)((long)param_2 + 0x2fc);
        param_3 = extraout_x1_01;
      }
      if (iVar4 == 1) {
        (**(code **)(*(long *)param_2[0x5a] + 0x20))((long *)param_2[0x5a],cVar2 != '\0');
        param_3 = extraout_x1;
      }
      if (cVar2 != '\0') {
        FUN_7102eafbe0((char *)param_2[0x58],param_3,param_4,param_5,param_6,param_7,param_8,param_9
                      );
      }
    }
    else {
      (**(code **)(*(long *)param_2[0x5c] + 0x20))((long *)param_2[0x5c],1);
    }
    *(undefined4 *)((long)param_2 + 0x2f4) = 3;
    cVar2 = (char)param_2[0x60];
    goto joined_r0x007102ea9210;
  case 3:
    cVar2 = (char)param_2[0x60];
joined_r0x007102ea9210:
    if (cVar2 == '\0') {
      iVar4 = *(int *)((long)param_2 + 0x2fc);
      if (iVar4 == 0) {
        uVar5 = (**(code **)(*(long *)param_2[0x5b] + 0x30))();
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)((long)param_2 + 0x2f4) = 6;
        }
        iVar4 = *(int *)((long)param_2 + 0x2fc);
      }
      if (iVar4 != 1) {
        return;
      }
      uVar5 = (**(code **)(*(long *)param_2[0x5a] + 0x30))();
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar15 = 4;
    }
    else {
      if (*(int *)(param_2[0x5c] + 0x40) != -1) {
        return;
      }
LAB_7102ea9560:
      uVar15 = 10;
    }
    break;
  case 4:
    uVar3 = (int)((ulong)(param_2[0x2c] - param_2[0x2b]) >> 2) * -0x49249249;
    puVar7 = *(uint **)(*param_2 + 0x340);
    uVar6 = *puVar7;
    *puVar7 = puVar7[1];
    uVar1 = puVar7[3];
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar7[1] = puVar7[2];
    puVar7[2] = uVar1;
    puVar7[3] = uVar6;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar6 / uVar3;
    }
    *(uint *)((long)param_2 + 0x304) = uVar6 - uVar1 * uVar3;
    (**(code **)(*(long *)param_2[0x5a] + 0x40))();
    *(undefined4 *)(*(long *)(param_2[0x70] + 8) + 0x10) = 0;
    *(undefined4 *)(*(long *)(param_2[0x71] + 8) + 0x10) = 0;
    fVar18 = *(float *)(param_2[0x2b] + (long)*(int *)((long)param_2 + 0x304) * 0x1c + 8);
    if (fVar18 == 0.0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = fVar18 / 5.0;
    }
    fVar19 = 0.0;
    fVar20 = *(float *)(param_2[0x2b] + (long)*(int *)((long)param_2 + 0x304) * 0x1c + 0xc);
    if (fVar20 != 0.0) {
      fVar19 = fVar20 / 5.0;
    }
    pfVar10 = (float *)param_2[0x19];
    fVar20 = *pfVar10;
    fVar21 = pfVar10[1];
    lVar8 = *(long *)(param_2[0x70] + 8);
    *(ulong *)(lVar8 + 0x38) = (ulong)(uint)pfVar10[2];
    *(ulong *)(lVar8 + 0x30) = CONCAT44(fVar19 + fVar21,fVar18 + fVar20);
    lVar11 = param_2[0x19];
    fVar20 = *(float *)(lVar11 + 0xc);
    fVar21 = *(float *)(lVar11 + 0x10);
    lVar8 = *(long *)(param_2[0x71] + 8);
    *(ulong *)(lVar8 + 0x38) = (ulong)*(uint *)(lVar11 + 0x14);
    *(ulong *)(lVar8 + 0x30) = CONCAT44(fVar19 + fVar21,fVar18 + fVar20);
    *(undefined1 *)(param_2 + 0x73) = 1;
    *(undefined8 *)((long)param_2 + 0x2f4) = 0x4270000000000005;
    goto LAB_7102ea9474;
  case 5:
LAB_7102ea9474:
    auVar22 = (**(code **)(*(long *)param_2[0x5a] + 0x48))();
    if ((auVar22._0_8_ & 1) != 0) {
      lVar8 = param_2[0x59];
      *(undefined4 *)(lVar8 + 0x100) = *(undefined4 *)((long)param_2 + 0x304);
      *(undefined1 *)(lVar8 + 0x15c) = 1;
      *(undefined4 *)(lVar8 + 0x154) = 1;
      FUN_7102eadc80(param_2[0x59],auVar22._8_8_,param_4,param_5,param_6,param_7,param_8,param_9);
      FUN_7102eafaa0(param_2[0x58],extraout_x1_00,param_4,param_5,param_6,param_7,param_8,param_9);
    }
    if (((*(int *)(param_2[0x59] + 0x154) == 3) && ((char)param_2[0x73] != '\0')) &&
       (fVar18 = *(float *)(param_2 + 0x5f), *(float *)(param_2 + 0x5f) = fVar18 - param_1,
       fVar18 - param_1 < 0.0)) {
      *(undefined4 *)(*(long *)(param_2[0x70] + 8) + 0x10) = 1;
      *(undefined4 *)(*(long *)(param_2[0x71] + 8) + 0x10) = 1;
      *(undefined1 *)(param_2 + 0x73) = 0;
    }
    uVar5 = (**(code **)(*(long *)param_2[0x5a] + 0x50))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (1 < *(int *)(param_2[0x59] + 0x154) - 5U) {
      return;
    }
    *(undefined4 *)(*(long *)(param_2[0x70] + 8) + 0x10) = 1;
    *(undefined4 *)(*(long *)(param_2[0x71] + 8) + 0x10) = 1;
    uVar15 = 10;
    break;
  case 6:
    *(undefined4 *)(param_2 + 0x61) = 0;
    iVar4 = *(int *)(param_2[0x59] + 0x20);
    if (iVar4 == 5 || iVar4 == 0) {
      uVar15 = 5;
    }
    else {
      uVar15 = 3;
    }
    iVar4 = *(int *)(param_2[0x59] + 0xa0);
    if (iVar4 == 5 || iVar4 == 0) {
      uVar17 = 4;
    }
    else {
      uVar17 = 2;
    }
    iVar4 = (int)param_2[99];
    if (iVar4 == -1) {
      FUN_7102c2f880(param_2 + 0x62);
      iVar4 = (int)param_2[99];
    }
    *(undefined4 *)(param_2 + 99) = *(undefined4 *)((long)param_2 + 0x31c);
    *(long *)((long)param_2 + 0x31c) = param_2[100];
    lVar8 = param_2[0x65];
    *(int *)(param_2 + 0x66) = iVar4;
    *(undefined4 *)(param_2 + 0x65) = 0xffffffff;
    *(undefined1 *)((long)param_2 + 0x32c) = 1;
    *(int *)((long)param_2 + 0x324) = (int)lVar8;
    uVar14 = uVar15;
    uVar13 = 1;
    switch(iVar4) {
    case 0:
      break;
    case 1:
      uVar13 = 1;
      uVar14 = uVar17;
      break;
    case 2:
      uVar13 = 0;
      break;
    case 3:
      uVar13 = 0;
      uVar14 = uVar17;
      break;
    default:
      uVar14 = uVar17;
      uVar13 = uVar15;
    }
    lVar8 = param_2[0x59];
    if ((*(int *)(lVar8 + 0x20) != 0) && (*(int *)(lVar8 + 0x20) != 5)) {
      FUN_71025f55b0(*(undefined8 **)param_2[0x72],(undefined8 *)((undefined8 *)param_2[0x72])[1],
                     "IPP0002");
      lVar8 = param_2[0x59];
    }
    if ((*(int *)(lVar8 + 0xa0) != 0) && (*(int *)(lVar8 + 0xa0) != 5)) {
      FUN_71025f55b0(*(undefined8 **)param_2[0x72],(undefined8 *)((undefined8 *)param_2[0x72])[1],
                     "IPP0003");
    }
    (**(code **)(*(long *)param_2[0x5b] + 0x60))((long *)param_2[0x5b],uVar13,uVar14);
    *(undefined4 *)((long)param_2 + 0x2f4) = 7;
    goto LAB_7102ea96d8;
  case 7:
LAB_7102ea96d8:
    plVar16 = param_2 + 0x5b;
    uVar5 = (**(code **)(*(long *)*plVar16 + 0x48))();
    if ((uVar5 & 1) != 0) {
      iVar4 = (**(code **)(*(long *)*plVar16 + 0x70))((long *)*plVar16,0);
      if (-1 < iVar4) {
        puVar7 = *(uint **)(*param_2 + 0x340);
        fVar18 = *(float *)(param_2[0x10] + 0x18);
        fVar19 = *(float *)(param_2[0x10] + 0x1c);
        uVar6 = *puVar7;
        *puVar7 = puVar7[1];
        uVar1 = puVar7[3];
        uVar6 = uVar6 ^ uVar6 << 0xb;
        uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
        puVar7[3] = uVar6;
        lVar8 = param_2[0x59] + (long)iVar4 * 0x80;
        piVar12 = (int *)(lVar8 + 0x20);
        if (*piVar12 == 1) {
          *piVar12 = 3;
          *(float *)(lVar8 + 0x24) = fVar18 + (fVar19 - fVar18) * (float)uVar6 * 2.3283064e-10;
        }
        (**(code **)(*(long *)*plVar16 + 0x78))((long *)*plVar16,0);
      }
      iVar4 = (**(code **)(*(long *)*plVar16 + 0x70))((long *)*plVar16,1);
      if (-1 < iVar4) {
        puVar7 = *(uint **)(*param_2 + 0x340);
        fVar18 = *(float *)(param_2[0x10] + 0x18);
        fVar19 = *(float *)(param_2[0x10] + 0x1c);
        uVar6 = *puVar7;
        *puVar7 = puVar7[1];
        uVar1 = puVar7[3];
        uVar6 = uVar6 ^ uVar6 << 0xb;
        uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
        puVar7[1] = puVar7[2];
        puVar7[2] = uVar1;
        puVar7[3] = uVar6;
        lVar8 = param_2[0x59] + (long)iVar4 * 0x80;
        piVar12 = (int *)(lVar8 + 0x20);
        if (*piVar12 == 1) {
          *piVar12 = 3;
          *(float *)(lVar8 + 0x24) = fVar18 + (fVar19 - fVar18) * (float)uVar6 * 2.3283064e-10;
        }
        (**(code **)(*(long *)*plVar16 + 0x78))((long *)*plVar16,1);
      }
    }
    uVar5 = (**(code **)(*(long *)*plVar16 + 0x50))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    *(undefined4 *)((long)param_2 + 0x2f4) = 8;
    *(undefined1 *)((long)param_2 + 0x2f1) = 1;
    return;
  case 8:
    if (*(char *)((long)param_2 + 0x2f1) != '\0') {
      *(undefined1 *)((long)param_2 + 0x2f1) = 0;
      (**(code **)(*(long *)param_2[0x5b] + 0x28))();
    }
    uVar5 = (**(code **)(*(long *)param_2[0x5b] + 0x38))();
    if ((uVar5 & 1) == 0) {
      return;
    }
    goto LAB_7102ea9560;
  case 9:
    puVar7 = *(uint **)(*param_2 + 0x340);
    fVar18 = *(float *)(param_2[0x10] + 0x10);
    fVar19 = *(float *)(param_2[0x10] + 0x14);
LAB_7102ea9334:
    uVar6 = *puVar7;
    *puVar7 = puVar7[1];
    uVar1 = puVar7[3];
    uVar6 = uVar6 ^ uVar6 << 0xb;
    uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar7[1] = puVar7[2];
    puVar7[2] = uVar1;
    puVar7[3] = uVar6;
    *(undefined4 *)((long)param_2 + 0x2fc) = 0xffffffff;
    uVar15 = 1;
    *(float *)(param_2 + 0x5f) =
         (fVar18 + (fVar19 - fVar18) * (float)uVar6 * 2.3283064e-10) - param_1;
    break;
  case 10:
    if ((char)param_2[0x5d] == '\0') {
      uVar15 = 0xb;
    }
    else {
      uVar15 = 9;
    }
    break;
  default:
    goto switchD_7102ea915c_default;
  }
  *(undefined4 *)((long)param_2 + 0x2f4) = uVar15;
switchD_7102ea915c_default:
  return;
}

