// addr:      7102f3eb80
// offset:    0x2f3eb80
// name:      FUN_7102f3eb80
// mangled:   
// signature: undefined __cdecl FUN_7102f3eb80(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102f3eb80(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long extraout_x1;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  switch(*(undefined4 *)((long)param_1 + 0x1c)) {
  case 1:
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    break;
  case 2:
    FUN_7102610070(param_1[1],(byte *)"s10_island_collapse");
    FUN_710260fdd0(0,param_1[1],1);
    lVar8 = param_1[1];
    if (lVar8 != 0) {
      if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar8 + 200) + 0x32) = 0;
      }
      if (*(long *)(lVar8 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x22) = 0;
      }
      lVar8 = param_1[1];
      if (lVar8 != 0) {
        if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar8 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar8 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1);
    *(undefined4 *)((long)param_1 + 0x1c) = 3;
    break;
  case 3:
    if (((char)param_1[9] == '\0') &&
       (*(float *)((long)param_1 + 0x34) < *(float *)(*(long *)(param_1[10] + 0x308) + 0x124))) {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    bVar2 = FUN_710260ffb0(param_1[1]);
    if (bVar2) {
      lVar8 = param_1[1];
      if (lVar8 != 0) {
        if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar8 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar8 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 0;
        }
      }
      *(undefined4 *)((long)param_1 + 0x1c) = 4;
      *(undefined1 *)(param_1 + 9) = 1;
    }
    break;
  case 4:
    lVar8 = param_1[1];
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar8 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
    param_1[3] = 3;
  case 0:
    *(undefined1 *)(param_1 + 9) = 0;
  }
  uVar10 = 0x3f80000000000000;
  fVar12 = 0.0;
  fVar13 = 0.0;
  lVar8 = param_1[1];
  if (lVar8 == 0) goto LAB_7102f3edcc;
  if (*(long *)(lVar8 + 0xd8) == 0) {
    uVar3 = 0xffffffff;
    lVar6 = *(long *)(lVar8 + 0xd8);
    if (lVar6 == 0) goto LAB_7102f3edb4;
LAB_7102f3ed6c:
    uVar4 = (**(code **)(**(long **)(*(long *)(lVar6 + 8) + 8) + 0x10))();
    if (uVar4 <= uVar3) goto LAB_7102f3edb4;
    plVar5 = *(long **)(*(long *)(*(long *)(lVar8 + 0xd8) + 8) + 0x48);
    (**(code **)(*plVar5 + 0x38))(plVar5,0);
    lVar8 = extraout_x1 + (ulong)uVar3 * 0x40;
  }
  else {
    plVar5 = *(long **)(*(long *)(*(long *)(lVar8 + 0xd8) + 8) + 8);
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"s10_island");
    uVar10 = 0x3f80000000000000;
    fVar12 = 0.0;
    fVar13 = 0.0;
    lVar8 = param_1[1];
    if (lVar8 == 0) goto LAB_7102f3edcc;
    lVar6 = *(long *)(lVar8 + 0xd8);
    if (lVar6 != 0) goto LAB_7102f3ed6c;
LAB_7102f3edb4:
    lVar8 = (**(code **)(**(long **)(lVar8 + 0x90) + 0x158))();
  }
  uVar10 = *(undefined8 *)(lVar8 + 0x38);
  fVar12 = (float)*(undefined8 *)(lVar8 + 0x30);
  fVar13 = (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20);
LAB_7102f3edcc:
  auVar9._4_4_ = fVar13;
  auVar9._0_4_ = fVar12;
  auVar9._8_8_ = uVar10;
  auVar1._4_4_ = fVar13;
  auVar1._0_4_ = fVar12;
  auVar1._8_8_ = uVar10;
  auVar9 = NEON_ext(auVar9,auVar1,8,1);
  plVar5 = (long *)param_1[2];
  param_1[7] = (ulong)auVar9._0_4_;
  param_1[6] = CONCAT44(fVar13,fVar12);
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)*plVar5;
    plVar5 = (long *)plVar5[1];
    if (plVar7 != plVar5) {
      do {
        lVar8 = *plVar7;
        if (*(char *)(lVar8 + 0x128) == '\0' ||
            (*(char *)(*(long *)(lVar8 + 8) + 0xe8) != '\0' ||
            *(char *)(*(long *)(lVar8 + 8) + 0xe7) != '\0')) {
          *(undefined1 *)(lVar8 + 0x129) = 1;
LAB_7102f3ee70:
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(ulong *)(lVar8 + 0x10) = CONCAT44(fVar13,fVar12);
        }
        else if ((1e-05 < ABS((float)*(undefined8 *)(lVar8 + 0x10) - fVar12)) ||
                (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) - fVar13))) {
          *(undefined1 *)(lVar8 + 0x12a) = 1;
          goto LAB_7102f3ee70;
        }
        if (1e-05 <= ABS(*(float *)(lVar8 + 0x30))) {
          *(undefined4 *)(lVar8 + 0x30) = 0;
          *(undefined1 *)(lVar8 + 0x129) = 1;
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x58);
        uVar10 = *(undefined8 *)(lVar8 + 0x50);
        if (1e-05 <= ABS((float)uVar10 + -1.0)) {
          uVar10 = CONCAT44((int)((ulong)uVar10 >> 0x20),0x3f800000);
          *(undefined1 *)(lVar8 + 0x129) = 1;
          *(undefined8 *)(lVar8 + 0x58) = uVar11;
          *(undefined8 *)(lVar8 + 0x50) = uVar10;
        }
        if (1e-05 <= ABS((float)((ulong)uVar10 >> 0x20) + -1.0)) {
          *(undefined1 *)(lVar8 + 0x129) = 1;
          *(undefined8 *)(lVar8 + 0x58) = uVar11;
          *(ulong *)(lVar8 + 0x50) = CONCAT44(0x3f800000,(int)uVar10);
        }
        plVar7 = plVar7 + 1;
      } while (plVar5 != plVar7);
    }
  }
  return;
}

