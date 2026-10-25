// addr:      7101e5ede0
// offset:    0x1e5ede0
// name:      FUN_7101e5ede0
// mangled:   
// signature: undefined __cdecl FUN_7101e5ede0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5ede0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float *pfVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  code *pcVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_c0 [2];
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar17 = *(long *)(param_1 + 0x80);
  plVar18 = *(long **)(lVar17 + 0x378);
  plVar6 = (long *)plVar18[8];
  if (plVar6 == (long *)0x0) {
    if ((((char)plVar18[0x10] != '\0') && (plVar18[2] != 0)) &&
       (plVar6 = (long *)*plVar18, (char)plVar6[1] != '\0')) {
      uVar16 = 0;
      do {
        if ((char)plVar18[3] == '\0' || uVar16 != *(byte *)((long)plVar18 + 0x19)) {
          if (3 < uVar16) goto LAB_7101e5f374;
          if (*(short *)(plVar18[2] + uVar16 * 0x1c8) != -1) {
            lVar14 = plVar18[2] + uVar16 * 0x1c8;
            uVar13 = *(ulong *)(lVar14 + 0x18);
            uVar15 = *(ulong *)(lVar14 + 8);
            pfVar1 = (float *)((long)plVar18 + uVar16 * 0x10 + 0xa4);
            fVar22 = 1.0;
            if (uVar13 != uVar15) {
              uVar2 = ((long)uVar15 >> 0x20) * 0xe353f7cf +
                      ((uVar15 & 0xffffffff) * 0xe353f7cf >> 0x20);
              lVar14 = ((long)(((long)uVar15 >> 0x20) * 0x20c49ba5 + ((long)uVar2 >> 0x20) +
                              ((uVar15 & 0xffffffff) * 0x20c49ba5 + (uVar2 & 0xffffffff) >> 0x20))
                       >> 7) - ((long)uVar15 >> 0x3f);
              fVar22 = 0.0;
              if (0 < lVar14) {
                uVar15 = ((long)uVar13 >> 0x20) * 0xe353f7cf +
                         ((uVar13 & 0xffffffff) * 0xe353f7cf >> 0x20);
                fVar20 = (float)(((long)(((long)uVar13 >> 0x20) * 0x20c49ba5 +
                                         ((long)uVar15 >> 0x20) +
                                        ((uVar13 & 0xffffffff) * 0x20c49ba5 + (uVar15 & 0xffffffff)
                                        >> 0x20)) >> 7) - ((long)uVar13 >> 0x3f)) / (float)lVar14;
                fVar21 = fVar20;
                if (1.0 < fVar20) {
                  fVar21 = 1.0;
                }
                fVar22 = 0.0;
                if (0.0 <= fVar20) {
                  fVar22 = fVar21;
                }
              }
            }
            fVar21 = *pfVar1;
            if ((fVar21 < fVar22) && (*(float *)(plVar18 + uVar16 * 2 + 0x15) != fVar22)) {
              *(undefined4 *)(plVar18 + uVar16 * 2 + 0x16) = 0;
              *(float *)((long)plVar18 + uVar16 * 0x10 + 0xac) = fVar21;
              *(float *)(plVar18 + uVar16 * 2 + 0x15) = fVar22;
            }
            uVar12 = *(uint *)(plVar18 + uVar16 * 2 + 0x16);
            if (uVar12 < 0x3b) {
              uVar12 = uVar12 + 1;
              *(uint *)(plVar18 + uVar16 * 2 + 0x16) = uVar12;
            }
            if (1.0 <= (float)uVar12 / 59.0) {
              fVar22 = *(float *)(plVar18 + uVar16 * 2 + 0x15);
              *pfVar1 = fVar22;
            }
            else {
              fVar21 = *(float *)(plVar18 + uVar16 * 2 + 0x15);
              fVar22 = *(float *)((long)plVar18 + uVar16 * 0x10 + 0xac);
              fVar20 = fVar22 + ((float)uVar12 / 59.0) * (fVar21 - fVar22);
              if (fVar20 <= fVar21) {
                fVar21 = fVar20;
              }
              if (fVar22 <= fVar20) {
                fVar22 = fVar21;
              }
              *pfVar1 = fVar22;
            }
            if (((uint)uVar16 & 0xff) < (uint)*(byte *)(plVar6 + 1)) {
              param_3 = (long ****)0x1;
              uVar13 = FUN_7101e9c280(fVar22,plVar6,(byte)uVar16,1);
              if ((uVar13 & 1) != 0) {
                lVar14 = plVar18[1];
                puVar19 = (undefined8 *)(lVar14 + uVar16 * 0x30 + 0x28);
                plVar6 = FUN_710377aae0(*(long **)*puVar19);
                if (plVar6 != (long *)0x0) {
                  *(undefined1 *)((long)plVar6 + 0x13a) = 1;
                }
                FUN_710377aee0(0x3f800000,lVar14 + uVar16 * 0x30 + 0x10);
                FUN_710377abf0(*(long **)*puVar19,1);
                lVar14 = *(long *)(DAT_710532f8d0 + 8);
                plVar8 = (long *)(lVar14 + 0x60);
                plVar11 = (long *)*plVar8;
                plVar6 = plVar8;
                if (plVar11 != (long *)0x0) {
                  do {
                    bVar5 = (plVar11[4] & 0xfffffffffcU) < 0x1c22801114;
                    if (!bVar5) {
                      plVar6 = plVar11;
                    }
                    plVar11 = (long *)plVar11[bVar5];
                  } while (plVar11 != (long *)0x0);
                  if ((plVar6 != plVar8) && ((plVar6[4] & 0xffffffffffU) < 0x1c22801115))
                  goto LAB_7101e5f130;
                }
                if (*(char *)(lVar14 + 0x191) == '\0') {
                  param_3 = (long ****)&DAT_00000004;
                  uVar13 = FUN_7103313f20(lVar14,0x1c22801114,(long ****)&DAT_00000004,param_4,
                                          param_5,param_6,param_7,param_8);
                  if ((uVar13 & 1) == 0) goto LAB_7101e5f0f0;
                  FUN_71024076d0(local_c0,0x1c22801114);
                  if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                     ((int)local_a8 == DAT_7106dd53ac)) {
                    piVar9 = (int *)(local_b0 + 0x38);
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
                      if (bVar5) {
                        *piVar9 = *piVar9 + -1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                }
                else {
LAB_7101e5f0f0:
                  local_a8 = 0x87650000000000;
                  local_98 = 0xffffffffffffffff;
                  local_c0[0] = 0;
                  local_90 = 0;
                  uStack_88 = 0;
                }
                local_b8 = &PTR_FUN_7104f73d50;
                local_b0 = 0;
                local_a0 = 0;
              }
            }
          }
        }
LAB_7101e5f130:
        plVar6 = (long *)*plVar18;
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(byte *)(plVar6 + 1));
    }
    plVar6 = (long *)plVar18[0xe];
    if (plVar6 != (long *)0x0) goto LAB_7101e5f14c;
  }
  else {
LAB_7101e5f14c:
    (**(code **)(*plVar6 + 0x30))();
  }
  FUN_7103399c10(*(long *)(*(long *)(lVar17 + 0x308) + 0x10));
  uVar7 = extraout_x1;
  if ((*(char *)(*(long *)(*(long *)(lVar17 + 0x308) + 0x10) + 0x90) == '\0') &&
     (*(char *)(lVar17 + 0x311) != '\0')) {
    *(undefined1 *)(lVar17 + 0x311) = 0;
    FUN_7101e943a0((long *)(lVar17 + 0x308),*(byte *)(lVar17 + 0x312),param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar7 = extraout_x1_00;
  }
  plVar6 = (long *)(lVar17 + 0x208);
  FUN_7101e9bb40(plVar6,uVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar14 = *(long *)(*(long *)(lVar17 + 0x2e8) + 0x40);
  if (((lVar14 == 0) || (plVar18 = *(long **)(*(long *)(lVar14 + 8) + 8), plVar18 == (long *)0x0))
     || (uVar16 = (**(code **)(*plVar18 + 0x138))(), (uVar16 & 1) != 0)) {
    if (*(char *)(lVar17 + 0x2f1) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar17 + 0x2e8) + 8),0x71042f8a23);
      *(undefined1 *)(lVar17 + 0x2f1) = 0;
    }
    if (*(int *)(lVar17 + 0x2f4) != 0) {
      *(int *)(lVar17 + 0x2f4) = *(int *)(lVar17 + 0x2f4) + -1;
    }
  }
  if (*(long *)(lVar17 + 0x398) != 0) {
    bVar3 = *(byte *)(*(long *)(lVar17 + 0x390) + 0x10);
    uVar16 = FUN_7101e95cc0(plVar6,bVar3,lVar17 + 0x350,param_4,param_5,param_6,param_7,param_8);
    if ((uVar16 & 1) != 0) {
      if ((bVar3 < 4) && (lVar14 = *(long *)(*plVar6 + (ulong)bVar3 * 8 + 0x48), lVar14 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar14 + 8),0x71044551e3);
      }
      plVar6 = *(long **)(lVar17 + 0x390);
      *(long *)(*plVar6 + 8) = plVar6[1];
      *(long *)plVar6[1] = *plVar6;
      *(long *)(lVar17 + 0x398) = *(long *)(lVar17 + 0x398) + -1;
      if (plVar6 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar6);
      }
    }
  }
  if (*(uint *)(lVar17 + 0x1dc) < 0x13) {
    uVar12 = *(uint *)(lVar17 + (long)(int)*(uint *)(lVar17 + 0x1dc) * 4 + 400);
    if (*(uint *)(lVar17 + 0x1e0) != uVar12) {
      *(uint *)(lVar17 + 0x1e8) = *(uint *)(lVar17 + 0x1e0);
      *(uint *)(lVar17 + 0x1e0) = uVar12;
      if (0x15 < uVar12) goto LAB_7101e5f374;
      lVar14 = lVar17 + (long)(int)uVar12 * 0x10;
      uVar7 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar14 + 0x30);
      *(undefined8 *)(lVar17 + 0x18) = uVar7;
      pcVar10 = *(code **)(lVar17 + 0x20);
      uVar16 = *(ulong *)(lVar17 + 0x28) & 1;
      if (uVar16 != 0 || pcVar10 != (code *)0x0) {
        if (uVar16 != 0) {
          pcVar10 = *(code **)(pcVar10 +
                              *(long *)(*(long *)(lVar17 + 8) +
                                       ((long)*(ulong *)(lVar17 + 0x28) >> 1)));
        }
        (*pcVar10)();
      }
      *(undefined4 *)(lVar17 + 0x1e4) = 0;
    }
    if (*(char *)(lVar17 + 0x1ec) != '\0') {
      pcVar10 = *(code **)(lVar17 + 0x20);
      uVar16 = *(ulong *)(lVar17 + 0x28) & 1;
      if (uVar16 != 0 || pcVar10 != (code *)0x0) {
        if (uVar16 != 0) {
          pcVar10 = *(code **)(pcVar10 +
                              *(long *)(*(long *)(lVar17 + 8) +
                                       ((long)*(ulong *)(lVar17 + 0x28) >> 1)));
        }
        (*pcVar10)();
      }
      *(undefined4 *)(lVar17 + 0x1e4) = 0;
      *(undefined1 *)(lVar17 + 0x1ec) = 0;
    }
    if (*(long *)(lVar17 + 8) != 0) {
      pcVar10 = *(code **)(lVar17 + 0x10);
      uVar16 = *(ulong *)(lVar17 + 0x18) & 1;
      if (uVar16 != 0 || pcVar10 != (code *)0x0) {
        if (uVar16 != 0) {
          pcVar10 = *(code **)(pcVar10 +
                              *(long *)(*(long *)(lVar17 + 8) +
                                       ((long)*(ulong *)(lVar17 + 0x18) >> 1)));
        }
        (*pcVar10)();
      }
    }
    *(int *)(lVar17 + 0x1e4) = *(int *)(lVar17 + 0x1e4) + 1;
    return;
  }
LAB_7101e5f374:
                    /* WARNING: Subroutine does not return */
  abort();
}

