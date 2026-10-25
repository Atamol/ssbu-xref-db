// addr:      7102df2e30
// offset:    0x2df2e30
// name:      FUN_7102df2e30
// mangled:   
// signature: undefined __cdecl FUN_7102df2e30(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102df2e30(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *(undefined2 *)(param_1 + 5) = 0x6400;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = 0;
  uStack_68 = 0x3f80000000000000;
  uVar8 = 0;
  uVar19 = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  for (plVar9 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar9 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar14 = *plVar9, *(long *)(lVar14 + 0x68) == 0x655d74795))
    {
      uStack_68 = 0x3f80000000000000;
      if (lVar14 == 0) {
        uVar8 = 0;
        uVar19 = 0;
        break;
      }
      if ((*(long *)(lVar14 + 0xd8) == 0) && (*(long *)(lVar14 + 0xd8) == 0)) {
        plVar9 = FUN_71026533a0((undefined8 *)(lVar14 + 0x90),0,param_3,param_4,param_5,param_6,
                                param_7,param_8);
        plVar10 = *(long **)(lVar14 + 0xd8);
        *(long **)(lVar14 + 0xd8) = plVar9;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      plVar9 = *(long **)(lVar14 + 0xd8);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      param_2 = extraout_x1;
      if (*(char *)(plVar9[1] + 0xa8) != '\0') {
        plVar10 = *(long **)(plVar9[1] + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
        param_2 = extraout_x1_00;
        if (*(char *)(plVar9[1] + 0xa8) != '\0') {
          plVar10 = *(long **)(plVar9[1] + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10,1);
          (**(code **)(*plVar10 + 0x10))(plVar10,2);
          param_2 = extraout_x1_01;
        }
      }
      *(undefined1 *)(plVar9 + 4) = 0;
      uStack_68 = 0x3f80000000000000;
      uVar8 = 0;
      uVar19 = 0;
      if (*(long *)(lVar14 + 0xd8) == 0) {
        if (lVar14 == 0) break;
        uVar6 = 0xffffffff;
        lVar11 = *(long *)(lVar14 + 0xd8);
        if (lVar11 != 0) goto LAB_7102df2fec;
LAB_7102df3034:
        auVar17 = (**(code **)(**(long **)(lVar14 + 0x90) + 0x158))();
      }
      else {
        plVar9 = *(long **)(*(long *)(*(long *)(lVar14 + 0xd8) + 8) + 8);
        uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,"StgPlanktonAshibaLeft_Loc");
        lVar11 = *(long *)(lVar14 + 0xd8);
        if (lVar11 == 0) goto LAB_7102df3034;
LAB_7102df2fec:
        uVar7 = (**(code **)(**(long **)(*(long *)(lVar11 + 8) + 8) + 0x10))();
        if (uVar7 <= uVar6) goto LAB_7102df3034;
        plVar9 = *(long **)(*(long *)(*(long *)(lVar14 + 0xd8) + 8) + 0x48);
        (**(code **)(*plVar9 + 0x38))(plVar9,0);
        auVar17._8_8_ = extraout_x1_02;
        auVar17._0_8_ = extraout_x1_02 + (ulong)uVar6 * 0x40;
      }
      param_2 = auVar17._8_8_;
      uStack_68 = *(undefined8 *)(auVar17._0_8_ + 0x38);
      uVar20 = *(undefined8 *)(auVar17._0_8_ + 0x30);
      uVar8 = (undefined4)uVar20;
      uVar19 = (undefined4)((ulong)uVar20 >> 0x20);
      break;
    }
  }
  auVar2._4_4_ = uVar19;
  auVar2._0_4_ = uVar8;
  auVar2._8_8_ = uStack_68;
  auVar3._4_4_ = uVar19;
  auVar3._0_4_ = uVar8;
  auVar3._8_8_ = uStack_68;
  auVar17 = NEON_ext(auVar2,auVar3,8,1);
  param_1[0xd] = (ulong)auVar17._0_4_;
  param_1[0xc] = CONCAT44(uVar19,uVar8);
  for (plVar9 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
      plVar9 != *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar14 = *plVar9, *(long *)(lVar14 + 0x68) == 0xe5a946bf7))
    {
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0xd8) == 0) {
          plVar9 = FUN_71026533a0((undefined8 *)(lVar14 + 0x90),0,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
          plVar10 = *(long **)(lVar14 + 0xd8);
          *(long **)(lVar14 + 0xd8) = plVar9;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
                    /* WARNING: Read-only address (ram,0x007104468ba0) is written */
        plVar9 = *(long **)(lVar14 + 0xd8);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        param_2 = extraout_x1_03;
        if (*(char *)(plVar9[1] + 0xa8) != '\0') {
          plVar10 = *(long **)(plVar9[1] + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
          param_2 = extraout_x1_04;
          if (*(char *)(plVar9[1] + 0xa8) != '\0') {
            plVar10 = *(long **)(plVar9[1] + 0x48);
            (**(code **)(*plVar10 + 0x10))(plVar10,1);
            (**(code **)(*plVar10 + 0x10))(plVar10,2);
            param_2 = extraout_x1_05;
          }
        }
        *(undefined1 *)(plVar9 + 4) = 0;
        if (lVar14 != 0) {
          if (*(long *)(lVar14 + 0xd8) == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            plVar9 = *(long **)(*(long *)(*(long *)(lVar14 + 0xd8) + 8) + 8);
            uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,"AshibaLeft_Loc");
            param_2 = extraout_x1_06;
          }
          *(undefined4 *)(param_1 + 10) = uVar8;
          if (*(long *)(lVar14 + 0xd8) == 0) {
            uVar8 = 0xffffffff;
          }
          else {
            plVar9 = *(long **)(*(long *)(*(long *)(lVar14 + 0xd8) + 8) + 8);
            uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,"StgPlanktonAshibaLeft");
            param_2 = extraout_x1_07;
          }
          *(undefined4 *)((long)param_1 + 0x54) = uVar8;
          if (*(long *)(lVar14 + 0xd8) == 0) goto LAB_7102df30ac;
          plVar9 = *(long **)(*(long *)(*(long *)(lVar14 + 0xd8) + 8) + 8);
          uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,"ejectionPoint");
          param_2 = extraout_x1_08;
          goto LAB_7102df30b0;
        }
      }
      break;
    }
  }
  param_1[10] = 0xffffffffffffffff;
LAB_7102df30ac:
  uVar8 = 0xffffffff;
LAB_7102df30b0:
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0xb) = uVar8;
  for (plVar9 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
      plVar9 != *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar14 = *plVar9, *(long *)(lVar14 + 0x68) == 0xe5a946bf7))
    {
      param_1[3] = lVar14;
      lVar11 = 0;
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar14 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar14 = param_1[3];
        if (lVar14 == 0) goto LAB_7102df30fc;
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
        lVar11 = param_1[3];
      }
      if (lVar11 != 0) {
        if ((*(char *)(lVar11 + 0xe0) != '\0') && (*(long *)(lVar11 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar11 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar11 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar11 + 0xd8) + 0x22) = 0;
        }
        lVar14 = param_1[3];
        if (lVar14 != 0) {
          if ((*(char *)(lVar14 + 0xe0) != '\0') && (lVar11 = *(long *)(lVar14 + 200), lVar11 != 0))
          {
            puVar16 = *(undefined8 **)(lVar11 + 0x18);
            puVar1 = *(undefined8 **)(lVar11 + 0x20);
            *(undefined4 *)(lVar11 + 0x3c) = 0x41200000;
            if (puVar16 == puVar1) {
              *(undefined4 *)(lVar11 + 0x40) = 0x41200000;
            }
            else {
              do {
                puVar15 = puVar16 + 1;
                (**(code **)(*(long *)*puVar16 + 0x20))((long *)*puVar16,10,0);
                puVar16 = puVar15;
              } while (puVar1 != puVar15);
              puVar16 = *(undefined8 **)(lVar11 + 0x18);
              puVar1 = *(undefined8 **)(lVar11 + 0x20);
              *(undefined4 *)(lVar11 + 0x40) = 0x41200000;
              if (puVar16 != puVar1) {
                do {
                  puVar15 = puVar16 + 1;
                  (**(code **)(*(long *)*puVar16 + 0x20))((long *)*puVar16,10,1);
                  puVar16 = puVar15;
                } while (puVar1 != puVar15);
                puVar1 = *(undefined8 **)(lVar11 + 0x20);
                for (puVar16 = *(undefined8 **)(lVar11 + 0x18); puVar16 != puVar1;
                    puVar16 = puVar16 + 1) {
                  (**(code **)(*(long *)*puVar16 + 0x38))();
                }
              }
            }
          }
          if (*(long **)(lVar14 + 0xd8) != (long *)0x0) {
            FUN_71025ee580(*(long **)(lVar14 + 0xd8),10,1);
          }
        }
      }
      goto LAB_7102df30fc;
    }
  }
  param_1[3] = 0;
LAB_7102df30fc:
  plVar9 = (long *)**(long **)(*(long *)(param_1[2] + 0x300) + 0x18);
  while ((*(ulong *)(*plVar9 + 0xa0) & 0xffffffffff) != 0xab3ec82c8) {
    plVar9 = plVar9 + 1;
  }
  plVar10 = *(long **)(*plVar9 + 0x110);
  param_1[8] = plVar10;
  plVar12 = plVar10 + 1;
  plVar9 = (long *)*plVar10;
  plVar13 = (long *)*plVar12;
  if (plVar9 != plVar13) {
    do {
      lVar14 = *plVar9;
      *(undefined1 *)(lVar14 + 0x128) = 1;
      if (*(long *)(lVar14 + 8) != 0) {
        *(undefined8 *)(*(long *)(lVar14 + 8) + 0xd8) = 0xffffffffffffffff;
        FUN_7100532bc0(*(long *)(lVar14 + 8),0);
      }
      plVar9 = plVar9 + 1;
    } while (plVar13 != plVar9);
    plVar10 = (long *)param_1[8];
    plVar12 = plVar10 + 1;
    if ((long *)*plVar10 != (long *)*plVar12) {
      lVar14 = *(long *)*plVar10;
      goto LAB_7102df31a4;
    }
  }
  lVar14 = 0;
LAB_7102df31a4:
  param_1[9] = lVar14;
  plVar10 = (long *)*plVar10;
  plVar12 = (long *)*plVar12;
  if (plVar10 != plVar12) {
    fVar4 = *(float *)(param_1 + 0xc);
    fVar5 = *(float *)((long)param_1 + 100);
    fVar18 = *(float *)(param_1 + 0xf) * 0.017453292;
    do {
      lVar14 = *plVar10;
      if (*(char *)(lVar14 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar14 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar14 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar14 + 0x129) = 1;
LAB_7102df324c:
        *(undefined8 *)(lVar14 + 0x18) = 0;
        *(float *)(lVar14 + 0x10) = fVar4;
        *(float *)(lVar14 + 0x14) = fVar5;
      }
      else if ((1e-05 < ABS((float)*(undefined8 *)(lVar14 + 0x10) - fVar4)) ||
              (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x20) - fVar5))) {
        *(undefined1 *)(lVar14 + 0x12a) = 1;
        goto LAB_7102df324c;
      }
      if ((1e-05 <= ABS(0.0 - fVar18)) || (1e-05 <= ABS(*(float *)(lVar14 + 0x30) - fVar18))) {
        *(float *)(lVar14 + 0x30) = fVar18;
        *(undefined1 *)(lVar14 + 0x129) = 1;
      }
      uVar21 = *(undefined8 *)(lVar14 + 0x58);
      uVar20 = *(undefined8 *)(lVar14 + 0x50);
      if (1e-05 <= ABS((float)uVar20 + -1.0)) {
        uVar20 = CONCAT44((int)((ulong)uVar20 >> 0x20),0x3f800000);
        *(undefined1 *)(lVar14 + 0x129) = 1;
        *(undefined8 *)(lVar14 + 0x58) = uVar21;
        *(undefined8 *)(lVar14 + 0x50) = uVar20;
      }
      if (1e-05 <= ABS((float)((ulong)uVar20 >> 0x20) + -1.0)) {
        *(undefined1 *)(lVar14 + 0x129) = 1;
        *(undefined8 *)(lVar14 + 0x58) = uVar21;
        *(ulong *)(lVar14 + 0x50) = CONCAT44(0x3f800000,(int)uVar20);
      }
      plVar10 = plVar10 + 1;
    } while (plVar12 != plVar10);
    lVar14 = param_1[9];
  }
  *(undefined4 *)(*(long *)(lVar14 + 8) + 0xc4) = 0x3edf66f3;
  lVar14 = param_1[3];
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe0) != '\0')) {
    uStack_58 = DAT_7104468ba0._8_8_;
    local_60 = (undefined8)DAT_7104468ba0;
    (**(code **)(**(long **)(lVar14 + 0x90) + 0x268))
              (*(long **)(lVar14 + 0x90),"leaf_centerber",3,&local_60);
  }
  return;
}

