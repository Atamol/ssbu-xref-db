// addr:      710002c1f0
// offset:    0x2c1f0
// name:      FUN_710002c1f0
// mangled:   
// signature: ulong __cdecl FUN_710002c1f0(long * param_1, uint param_2)


ulong FUN_710002c1f0(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  void *pvVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong __n;
  ulong uVar25;
  ulong uVar26;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((plVar22 = (long *)param_1[7], plVar22 == (long *)0x0 || ((long *)*plVar22 != param_1)))) {
    return 0xfffffffe;
  }
  iVar19 = (int)plVar22[1];
  if (((0x38 < iVar19 - 0x39U) ||
      ((1L << ((ulong)(iVar19 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
     ((iVar19 != 0x29a && (iVar19 != 0x2a)))) {
    return 0xfffffffe;
  }
  if (5 < param_2) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || (((int)param_1[1] != 0 && (*param_1 == 0)))) ||
     ((param_2 != 4 && (iVar19 == 0x29a)))) {
    param_1[6] = (long)PTR_s_stream_error_7104f17490;
    return 0xfffffffe;
  }
  if ((int)param_1[4] == 0) {
LAB_710002c7b8:
    param_1[6] = (long)PTR_s_buffer_error_7104f174a8;
    return 0xfffffffb;
  }
  iVar7 = *(int *)((long)plVar22 + 0x4c);
  *(uint *)((long)plVar22 + 0x4c) = param_2;
  if (plVar22[5] == 0) {
    if ((int)param_1[1] == 0) {
      iVar18 = 9;
      iVar6 = iVar18;
      if ((int)param_2 < 5) {
        iVar6 = 0;
      }
      if (iVar7 < 5) {
        iVar18 = 0;
      }
      if ((param_2 != 4) && ((int)(param_2 * 2 - iVar6) <= iVar7 * 2 - iVar18)) goto LAB_710002c7b8;
    }
  }
  else {
    lVar23 = param_1[7];
    FUN_710002f370(lVar23);
    uVar14 = *(uint *)(param_1 + 4);
    uVar11 = uVar14;
    if (*(uint *)(lVar23 + 0x28) <= uVar14) {
      uVar11 = *(uint *)(lVar23 + 0x28);
    }
    if (uVar11 != 0) {
      uVar24 = (ulong)uVar11;
      memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
      param_1[3] = param_1[3] + uVar24;
      *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
      param_1[5] = param_1[5] + uVar24;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
      lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
      *(long *)(lVar23 + 0x28) = lVar20;
      if (lVar20 == 0) {
        *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
      }
      uVar14 = *(uint *)(param_1 + 4);
    }
    if (uVar14 == 0) goto LAB_710002d564;
    iVar19 = (int)plVar22[1];
  }
  if (iVar19 == 0x2a) {
    if (((int)plVar22[0x19] < 2) && (iVar19 = *(int *)((long)plVar22 + 0xc4), 1 < iVar19)) {
      if (iVar19 < 6) {
        uVar11 = 0x40;
      }
      else {
        uVar11 = 0x80;
        if (iVar19 != 6) {
          uVar11 = 0xc0;
        }
      }
    }
    else {
      uVar11 = 0;
    }
    uVar11 = uVar11 | *(int *)((long)plVar22 + 0x54) * 0x1000 - 0x7800U;
    if (*(int *)((long)plVar22 + 0xac) != 0) {
      uVar11 = uVar11 | 0x20;
    }
    lVar23 = plVar22[5];
    plVar22[5] = lVar23 + 1;
    *(char *)(plVar22[2] + lVar23) = (char)(uVar11 >> 8);
    lVar23 = plVar22[5];
    plVar22[5] = lVar23 + 1;
    *(byte *)(plVar22[2] + lVar23) =
         ((byte)uVar11 + (char)(uVar11 / 0x1f) * -0x1f | (byte)uVar11) ^ 0x1f;
    if (*(int *)((long)plVar22 + 0xac) != 0) {
      lVar23 = param_1[0xc];
      lVar20 = plVar22[5];
      plVar22[5] = lVar20 + 1;
      *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x18);
      lVar20 = plVar22[5];
      plVar22[5] = lVar20 + 1;
      *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x10);
      lVar23 = param_1[0xc];
      lVar20 = plVar22[5];
      plVar22[5] = lVar20 + 1;
      *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 8);
      lVar20 = plVar22[5];
      plVar22[5] = lVar20 + 1;
      *(char *)(plVar22[2] + lVar20) = (char)lVar23;
    }
    lVar23 = FUN_710002a6c0(0,(byte *)0x0,0);
    param_1[0xc] = lVar23;
    *(undefined4 *)(plVar22 + 1) = 0x71;
    lVar23 = param_1[7];
    FUN_710002f370(lVar23);
    uVar11 = *(uint *)(param_1 + 4);
    if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
      uVar11 = *(uint *)(lVar23 + 0x28);
    }
    if (uVar11 != 0) {
      uVar24 = (ulong)uVar11;
      memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
      param_1[3] = param_1[3] + uVar24;
      *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
      param_1[5] = param_1[5] + uVar24;
      *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
      lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
      *(long *)(lVar23 + 0x28) = lVar20;
      if (lVar20 == 0) {
        *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
      }
    }
    if (plVar22[5] != 0) goto LAB_710002d564;
    iVar19 = (int)plVar22[1];
LAB_710002c560:
    if (iVar19 == 0x39) {
      uVar11 = FUN_710002a9c0(0,0,0);
      param_1[0xc] = (ulong)uVar11;
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(undefined1 *)(plVar22[2] + lVar23) = 0x1f;
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(undefined1 *)(plVar22[2] + lVar23) = 0x8b;
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(undefined1 *)(plVar22[2] + lVar23) = 8;
      piVar21 = (int *)plVar22[7];
      if (piVar21 == (int *)0x0) {
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 0;
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 0;
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 0;
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 0;
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 0;
        if (*(int *)((long)plVar22 + 0xc4) == 9) {
          uVar13 = 2;
        }
        else {
          uVar13 = 4;
          if ((int)plVar22[0x19] < 2 && 1 < *(int *)((long)plVar22 + 0xc4)) {
            uVar13 = 0;
          }
        }
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = uVar13;
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(undefined1 *)(plVar22[2] + lVar23) = 3;
        *(undefined4 *)(plVar22 + 1) = 0x71;
        lVar23 = param_1[7];
        FUN_710002f370(lVar23);
        uVar11 = *(uint *)(param_1 + 4);
        if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
          uVar11 = *(uint *)(lVar23 + 0x28);
        }
        if (uVar11 != 0) {
          uVar24 = (ulong)uVar11;
          memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
          param_1[3] = param_1[3] + uVar24;
          *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
          param_1[5] = param_1[5] + uVar24;
          *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
          lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
          *(long *)(lVar23 + 0x28) = lVar20;
          if (lVar20 == 0) {
            *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
          }
        }
        if (plVar22[5] != 0) goto LAB_710002d564;
        iVar19 = (int)plVar22[1];
        goto LAB_710002c928;
      }
      iVar19 = *piVar21;
      bVar9 = 0;
      if (piVar21[0x11] != 0) {
        bVar9 = 2;
      }
      bVar3 = 0;
      if (*(long *)(piVar21 + 6) != 0) {
        bVar3 = 4;
      }
      bVar4 = 0;
      if (*(long *)(piVar21 + 10) != 0) {
        bVar4 = 8;
      }
      bVar5 = 0;
      if (*(long *)(piVar21 + 0xe) != 0) {
        bVar5 = 0x10;
      }
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(byte *)(plVar22[2] + lVar23) = bVar9 | iVar19 != 0 | bVar3 | bVar4 | bVar5;
      lVar23 = plVar22[5];
      uVar17 = *(undefined8 *)(plVar22[7] + 8);
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)uVar17;
      uVar17 = *(undefined8 *)(plVar22[7] + 8);
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)((ulong)uVar17 >> 8);
      uVar17 = *(undefined8 *)(plVar22[7] + 8);
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)((ulong)uVar17 >> 0x10);
      uVar17 = *(undefined8 *)(plVar22[7] + 8);
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)((ulong)uVar17 >> 0x18);
      uVar13 = 2;
      if (*(int *)((long)plVar22 + 0xc4) != 9) {
        uVar13 = 4;
        if ((int)plVar22[0x19] < 2 && 1 < *(int *)((long)plVar22 + 0xc4)) {
          uVar13 = 0;
        }
      }
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(undefined1 *)(plVar22[2] + lVar23) = uVar13;
      lVar23 = plVar22[5];
      uVar8 = *(undefined4 *)(plVar22[7] + 0x14);
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)uVar8;
      lVar23 = plVar22[7];
      if (*(long *)(lVar23 + 0x18) != 0) {
        lVar20 = plVar22[5];
        uVar8 = *(undefined4 *)(lVar23 + 0x20);
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)uVar8;
        uVar8 = *(undefined4 *)(plVar22[7] + 0x20);
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(char *)(plVar22[2] + lVar23) = (char)((uint)uVar8 >> 8);
        lVar23 = plVar22[7];
      }
      if (*(int *)(lVar23 + 0x44) != 0) {
        uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2],(ulong)*(uint *)(plVar22 + 5));
        param_1[0xc] = (ulong)uVar11;
      }
      plVar22[8] = 0;
      *(undefined4 *)(plVar22 + 1) = 0x45;
      lVar23 = plVar22[7];
      lVar20 = *(long *)(lVar23 + 0x18);
joined_r0x00710002c954:
      if (lVar20 != 0) {
        lVar15 = plVar22[8];
        uVar24 = (ulong)((uint)*(ushort *)(lVar23 + 0x20) - (int)lVar15);
        uVar25 = plVar22[5];
        uVar16 = plVar22[3];
        if (uVar16 < uVar25 + uVar24) {
          while( true ) {
            uVar26 = uVar16 - uVar25;
            __n = uVar26 & 0xffffffff;
            memcpy((void *)(plVar22[2] + uVar25),(void *)(lVar20 + lVar15),__n);
            uVar16 = plVar22[3];
            plVar22[5] = uVar16;
            if (uVar25 < uVar16 && *(int *)(plVar22[7] + 0x44) != 0) {
              uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar25,
                                      (ulong)(uint)((int)uVar16 - (int)uVar25));
              param_1[0xc] = (ulong)uVar11;
            }
            plVar22[8] = plVar22[8] + __n;
            lVar23 = param_1[7];
            FUN_710002f370(lVar23);
            uVar11 = *(uint *)(param_1 + 4);
            if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
              uVar11 = *(uint *)(lVar23 + 0x28);
            }
            if (uVar11 != 0) {
              uVar16 = (ulong)uVar11;
              memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar16);
              param_1[3] = param_1[3] + uVar16;
              *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar16;
              param_1[5] = param_1[5] + uVar16;
              *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
              lVar20 = *(long *)(lVar23 + 0x28) - uVar16;
              *(long *)(lVar23 + 0x28) = lVar20;
              if (lVar20 == 0) {
                *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
              }
            }
            if (plVar22[5] != 0) goto LAB_710002d564;
            uVar16 = plVar22[3];
            uVar24 = (ulong)(uint)((int)uVar24 - (int)uVar26);
            if (uVar24 <= uVar16) break;
            lVar15 = plVar22[8];
            lVar20 = *(long *)(plVar22[7] + 0x18);
            uVar25 = 0;
          }
          lVar15 = plVar22[8];
          lVar20 = *(long *)(plVar22[7] + 0x18);
          uVar25 = 0;
        }
        memcpy((void *)(plVar22[2] + uVar25),(void *)(lVar20 + lVar15),uVar24);
        uVar24 = plVar22[5] + uVar24;
        plVar22[5] = uVar24;
        if ((uVar25 < uVar24) && (*(int *)(plVar22[7] + 0x44) != 0)) {
          uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar25,
                                  (ulong)(uint)((int)uVar24 - (int)uVar25));
          param_1[0xc] = (ulong)uVar11;
        }
        plVar22[8] = 0;
      }
      *(undefined4 *)(plVar22 + 1) = 0x49;
      lVar23 = *(long *)(plVar22[7] + 0x28);
joined_r0x00710002cafc:
      if (lVar23 != 0) {
        uVar24 = plVar22[5];
        uVar16 = uVar24;
        if (uVar24 != plVar22[3]) goto LAB_710002cbdc;
        while( true ) {
          if ((uVar24 < uVar16) && (*(int *)(plVar22[7] + 0x44) != 0)) {
            uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar24,
                                    (ulong)(uint)((int)uVar16 - (int)uVar24));
            param_1[0xc] = (ulong)uVar11;
          }
          lVar23 = param_1[7];
          FUN_710002f370(lVar23);
          uVar11 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar11 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar11 != 0) {
            uVar24 = (ulong)uVar11;
            memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
            param_1[3] = param_1[3] + uVar24;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
            param_1[5] = param_1[5] + uVar24;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
            lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
            *(long *)(lVar23 + 0x28) = lVar20;
            if (lVar20 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
          }
          if (plVar22[5] != 0) break;
          uVar16 = 0;
          uVar24 = 0;
LAB_710002cbdc:
          do {
            lVar23 = plVar22[8];
            lVar20 = *(long *)(plVar22[7] + 0x28);
            plVar22[8] = lVar23 + 1;
            cVar10 = *(char *)(lVar20 + lVar23);
            plVar22[5] = uVar16 + 1;
            *(char *)(plVar22[2] + uVar16) = cVar10;
            if (cVar10 == '\0') {
              if ((*(int *)(plVar22[7] + 0x44) != 0) && (uVar24 < (ulong)plVar22[5])) {
                uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar24,
                                        (ulong)(uint)((int)plVar22[5] - (int)uVar24));
                param_1[0xc] = (ulong)uVar11;
              }
              plVar22[8] = 0;
              goto LAB_710002cc38;
            }
            uVar16 = plVar22[5];
          } while (uVar16 != plVar22[3]);
        }
        goto LAB_710002d564;
      }
LAB_710002cc38:
      *(undefined4 *)(plVar22 + 1) = 0x5b;
      lVar23 = *(long *)(plVar22[7] + 0x38);
joined_r0x00710002cc5c:
      if (lVar23 != 0) {
        uVar24 = plVar22[5];
        uVar16 = uVar24;
        if (uVar24 != plVar22[3]) goto LAB_710002cd3c;
        while( true ) {
          if ((uVar24 < uVar16) && (*(int *)(plVar22[7] + 0x44) != 0)) {
            uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar24,
                                    (ulong)(uint)((int)uVar16 - (int)uVar24));
            param_1[0xc] = (ulong)uVar11;
          }
          lVar23 = param_1[7];
          FUN_710002f370(lVar23);
          uVar11 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar11 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar11 != 0) {
            uVar24 = (ulong)uVar11;
            memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
            param_1[3] = param_1[3] + uVar24;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
            param_1[5] = param_1[5] + uVar24;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
            lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
            *(long *)(lVar23 + 0x28) = lVar20;
            if (lVar20 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
          }
          if (plVar22[5] != 0) break;
          uVar16 = 0;
          uVar24 = 0;
LAB_710002cd3c:
          do {
            lVar23 = plVar22[8];
            lVar20 = *(long *)(plVar22[7] + 0x38);
            plVar22[8] = lVar23 + 1;
            cVar10 = *(char *)(lVar20 + lVar23);
            plVar22[5] = uVar16 + 1;
            *(char *)(plVar22[2] + uVar16) = cVar10;
            if (cVar10 == '\0') {
              if ((*(int *)(plVar22[7] + 0x44) != 0) && (uVar24 < (ulong)plVar22[5])) {
                uVar11 = FUN_710002a9c0((uint)param_1[0xc],plVar22[2] + uVar24,
                                        (ulong)(uint)((int)plVar22[5] - (int)uVar24));
                param_1[0xc] = (ulong)uVar11;
              }
              goto LAB_710002cd94;
            }
            uVar16 = plVar22[5];
          } while (uVar16 != plVar22[3]);
        }
        goto LAB_710002d564;
      }
LAB_710002cd94:
      *(undefined4 *)(plVar22 + 1) = 0x67;
      iVar19 = *(int *)(plVar22[7] + 0x44);
joined_r0x00710002cdb8:
      if (iVar19 != 0) {
        lVar23 = plVar22[5];
        if ((ulong)plVar22[3] < lVar23 + 2U) {
          lVar23 = param_1[7];
          FUN_710002f370(lVar23);
          uVar11 = *(uint *)(param_1 + 4);
          if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
            uVar11 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar11 != 0) {
            uVar24 = (ulong)uVar11;
            memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
            param_1[3] = param_1[3] + uVar24;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
            param_1[5] = param_1[5] + uVar24;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
            lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
            *(long *)(lVar23 + 0x28) = lVar20;
            if (lVar20 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
          }
          lVar23 = 0;
          if (plVar22[5] != 0) goto LAB_710002d564;
        }
        lVar20 = param_1[0xc];
        plVar22[5] = lVar23 + 1;
        *(char *)(plVar22[2] + lVar23) = (char)lVar20;
        lVar23 = param_1[0xc];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 8);
        uVar11 = FUN_710002a9c0(0,0,0);
        param_1[0xc] = (ulong)uVar11;
      }
      *(undefined4 *)(plVar22 + 1) = 0x71;
      lVar23 = param_1[7];
      FUN_710002f370(lVar23);
      uVar11 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar11 = *(uint *)(lVar23 + 0x28);
      }
      if (uVar11 != 0) {
        uVar24 = (ulong)uVar11;
        memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
        param_1[3] = param_1[3] + uVar24;
        *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
        param_1[5] = param_1[5] + uVar24;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
        lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
        *(long *)(lVar23 + 0x28) = lVar20;
        if (lVar20 == 0) {
          *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
        }
      }
      if (plVar22[5] != 0) goto LAB_710002d564;
    }
    else {
LAB_710002c928:
      switch(iVar19) {
      case 0x45:
        lVar23 = plVar22[7];
        lVar20 = *(long *)(lVar23 + 0x18);
        goto joined_r0x00710002c954;
      case 0x49:
        lVar23 = *(long *)(plVar22[7] + 0x28);
        goto joined_r0x00710002cafc;
      case 0x5b:
        lVar23 = *(long *)(plVar22[7] + 0x38);
        goto joined_r0x00710002cc5c;
      case 0x67:
        iVar19 = *(int *)(plVar22[7] + 0x44);
        goto joined_r0x00710002cdb8;
      }
    }
    if ((int)param_1[1] == 0) goto LAB_710002cf2c;
LAB_710002cf34:
    if (*(int *)((long)plVar22 + 0xc4) == 0) {
      uVar17 = FUN_710002dac0(plVar22,param_2);
      uVar11 = (uint)uVar17;
joined_r0x00710002d444:
      if ((uVar11 | 1) == 3) {
        *(undefined4 *)(plVar22 + 1) = 0x29a;
      }
      if ((uVar11 | 2) != 2) {
        if (uVar11 == 1) {
LAB_710002d0d8:
          if (param_2 != 5) {
            if (param_2 == 1) {
              FUN_710002f400((long)plVar22);
            }
            else {
              FUN_710002f200((long)plVar22,(void *)0x0,0,0);
              if (param_2 == 3) {
                *(undefined2 *)(plVar22[0xf] + (ulong)(*(int *)((long)plVar22 + 0x84) - 1) * 2) = 0;
                memset((void *)plVar22[0xf],0,(ulong)(*(int *)((long)plVar22 + 0x84) - 1) << 1);
                if (*(int *)((long)plVar22 + 0xb4) == 0) {
                  *(undefined4 *)((long)plVar22 + 0xac) = 0;
                  plVar22[0x13] = 0;
                  *(undefined4 *)((long)plVar22 + 0x172c) = 0;
                }
              }
            }
          }
          lVar23 = param_1[7];
          FUN_710002f370(lVar23);
          uVar14 = *(uint *)(param_1 + 4);
          uVar11 = uVar14;
          if (*(uint *)(lVar23 + 0x28) <= uVar14) {
            uVar11 = *(uint *)(lVar23 + 0x28);
          }
          if (uVar11 != 0) {
            uVar24 = (ulong)uVar11;
            memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
            param_1[3] = param_1[3] + uVar24;
            *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
            param_1[5] = param_1[5] + uVar24;
            *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
            lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
            *(long *)(lVar23 + 0x28) = lVar20;
            if (lVar20 == 0) {
              *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
            }
            uVar14 = *(uint *)(param_1 + 4);
          }
          if (uVar14 == 0) goto LAB_710002d564;
        }
        goto LAB_710002d554;
      }
    }
    else if ((int)plVar22[0x19] == 3) {
LAB_710002d11c:
      do {
        uVar11 = *(uint *)((long)plVar22 + 0xb4);
        if (uVar11 < 0x103) {
          FUN_710002bca0(plVar22);
          uVar11 = *(uint *)((long)plVar22 + 0xb4);
          if ((param_2 != 0) || (0x102 < uVar11)) {
            if (uVar11 != 0) {
              *(undefined4 *)(plVar22 + 0x14) = 0;
              if (2 < uVar11) goto LAB_710002d15c;
              uVar24 = (ulong)*(uint *)((long)plVar22 + 0xac);
              goto LAB_710002d2f8;
            }
            *(undefined4 *)((long)plVar22 + 0x172c) = 0;
            if (param_2 == 4) {
              uVar24 = plVar22[0x13];
joined_r0x00710002d470:
              if ((long)uVar24 < 0) {
                pvVar12 = (void *)0x0;
              }
              else {
                pvVar12 = (void *)(plVar22[0xc] + (uVar24 & 0xffffffff));
              }
              FUN_710002f560(plVar22,pvVar12,*(uint *)((long)plVar22 + 0xac) - uVar24,1);
              lVar20 = *plVar22;
              plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
              lVar23 = *(long *)(lVar20 + 0x38);
              FUN_710002f370(lVar23);
              uVar11 = *(uint *)(lVar20 + 0x20);
              if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
                uVar11 = *(uint *)(lVar23 + 0x28);
              }
              if (uVar11 != 0) {
                uVar24 = (ulong)uVar11;
                memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar23 + 0x20),uVar24);
                *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar24;
                *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
                *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar24;
                *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar11;
                lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
                *(long *)(lVar23 + 0x28) = lVar20;
                if (lVar20 == 0) {
                  *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
                }
              }
              uVar11 = 2;
              if (*(int *)(*plVar22 + 0x20) != 0) {
                uVar11 = 3;
              }
              goto joined_r0x00710002d444;
            }
            if (*(int *)((long)plVar22 + 0x170c) != 0) {
              uVar24 = plVar22[0x13];
joined_r0x00710002d844:
              if ((long)uVar24 < 0) {
                pvVar12 = (void *)0x0;
              }
              else {
                pvVar12 = (void *)(plVar22[0xc] + (uVar24 & 0xffffffff));
              }
              FUN_710002f560(plVar22,pvVar12,*(uint *)((long)plVar22 + 0xac) - uVar24,0);
              lVar20 = *plVar22;
              plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
              lVar23 = *(long *)(lVar20 + 0x38);
              FUN_710002f370(lVar23);
              uVar11 = *(uint *)(lVar20 + 0x20);
              if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
                uVar11 = *(uint *)(lVar23 + 0x28);
              }
              if (uVar11 != 0) {
                uVar24 = (ulong)uVar11;
                memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar23 + 0x20),uVar24);
                *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar24;
                *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
                *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar24;
                *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar11;
                lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
                *(long *)(lVar23 + 0x28) = lVar20;
                if (lVar20 == 0) {
                  *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
                }
              }
              if (*(int *)(*plVar22 + 0x20) != 0) goto LAB_710002d0d8;
              break;
            }
            goto LAB_710002d0d8;
          }
          break;
        }
        *(undefined4 *)(plVar22 + 0x14) = 0;
LAB_710002d15c:
        uVar24 = (ulong)*(uint *)((long)plVar22 + 0xac);
        if (*(uint *)((long)plVar22 + 0xac) != 0) {
          pcVar1 = (char *)(plVar22[0xc] + uVar24);
          cVar10 = pcVar1[-1];
          if (((cVar10 != *pcVar1) || (cVar10 != pcVar1[1])) || (cVar10 != pcVar1[2]))
          goto LAB_710002d2f8;
          lVar23 = 0;
          do {
            pcVar2 = pcVar1 + lVar23;
            iVar19 = (int)pcVar2;
            if (cVar10 != pcVar2[3]) {
              iVar19 = iVar19 + 3;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[4]) {
              iVar19 = iVar19 + 4;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[5]) {
              iVar19 = iVar19 + 5;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[6]) {
              iVar19 = iVar19 + 6;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[7]) {
              iVar19 = iVar19 + 7;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[8]) {
              iVar19 = iVar19 + 8;
              goto LAB_710002d250;
            }
            if (cVar10 != pcVar2[9]) {
              iVar19 = iVar19 + 9;
              goto LAB_710002d250;
            }
            uVar16 = lVar23 + 10;
            lVar23 = lVar23 + 8;
          } while ((uVar16 < 0x102) && (cVar10 == pcVar2[10]));
          iVar19 = (int)pcVar1 + (int)lVar23 + 2;
LAB_710002d250:
          uVar14 = (iVar19 - ((int)pcVar1 + 0x102)) + 0x102;
          if (uVar14 <= uVar11) {
            uVar11 = uVar14;
          }
          *(uint *)(plVar22 + 0x14) = uVar11;
          if (uVar11 < 3) goto LAB_710002d2f8;
          *(undefined2 *)(plVar22[0x2e2] + (ulong)*(uint *)((long)plVar22 + 0x170c) * 2) = 1;
          uVar24 = (ulong)(byte)(&DAT_710446f858)[(ulong)(uVar11 - 3) & 0xff] << 2 | 0x400;
          uVar14 = *(uint *)((long)plVar22 + 0x170c);
          *(uint *)((long)plVar22 + 0x170c) = uVar14 + 1;
          *(char *)(plVar22[0x2e0] + (ulong)uVar14) = (char)(uVar11 - 3);
          *(short *)((long)plVar22 + uVar24 + 0xd8) = *(short *)((long)plVar22 + uVar24 + 0xd8) + 1;
          *(short *)(plVar22 + 0x139) = (short)plVar22[0x139] + 1;
          *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) - (int)plVar22[0x14];
          uVar11 = *(int *)((long)plVar22 + 0xac) + (int)plVar22[0x14];
          *(uint *)((long)plVar22 + 0xac) = uVar11;
          *(undefined4 *)(plVar22 + 0x14) = 0;
          if (*(int *)((long)plVar22 + 0x170c) == (int)plVar22[0x2e1] + -1) goto LAB_710002d35c;
          goto LAB_710002d11c;
        }
LAB_710002d2f8:
        bVar9 = *(byte *)(plVar22[0xc] + uVar24);
        *(undefined2 *)(plVar22[0x2e2] + (ulong)*(uint *)((long)plVar22 + 0x170c) * 2) = 0;
        uVar11 = *(uint *)((long)plVar22 + 0x170c);
        *(uint *)((long)plVar22 + 0x170c) = uVar11 + 1;
        *(byte *)(plVar22[0x2e0] + (ulong)uVar11) = bVar9;
        *(short *)((long)plVar22 + (ulong)bVar9 * 4 + 0xd4) =
             *(short *)((long)plVar22 + (ulong)bVar9 * 4 + 0xd4) + 1;
        *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) + -1;
        uVar11 = *(int *)((long)plVar22 + 0xac) + 1;
        *(uint *)((long)plVar22 + 0xac) = uVar11;
        if (*(int *)((long)plVar22 + 0x170c) != (int)plVar22[0x2e1] + -1) goto LAB_710002d11c;
LAB_710002d35c:
        uVar24 = plVar22[0x13];
        if ((long)uVar24 < 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)(plVar22[0xc] + (uVar24 & 0xffffffff));
        }
        FUN_710002f560(plVar22,pvVar12,uVar11 - uVar24,0);
        lVar20 = *plVar22;
        plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
        lVar23 = *(long *)(lVar20 + 0x38);
        FUN_710002f370(lVar23);
        uVar11 = *(uint *)(lVar20 + 0x20);
        if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
          uVar11 = *(uint *)(lVar23 + 0x28);
        }
        if (uVar11 != 0) {
          uVar24 = (ulong)uVar11;
          memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar23 + 0x20),uVar24);
          *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar24;
          *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
          *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar24;
          *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar11;
          lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
          *(long *)(lVar23 + 0x28) = lVar20;
          if (lVar20 == 0) {
            *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
          }
        }
      } while (*(int *)(*plVar22 + 0x20) != 0);
    }
    else {
      if ((int)plVar22[0x19] != 2) {
        uVar11 = (*(code *)(&PTR_FUN_7104f174c8)[(long)*(int *)((long)plVar22 + 0xc4) * 2])
                           (plVar22,param_2);
        goto joined_r0x00710002d444;
      }
      do {
        do {
          if ((*(int *)((long)plVar22 + 0xb4) == 0) &&
             (FUN_710002bca0(plVar22), *(int *)((long)plVar22 + 0xb4) == 0)) {
            if (param_2 != 0) {
              *(undefined4 *)((long)plVar22 + 0x172c) = 0;
              if (param_2 == 4) {
                uVar24 = plVar22[0x13];
                goto joined_r0x00710002d470;
              }
              if (*(int *)((long)plVar22 + 0x170c) == 0) goto LAB_710002d0d8;
              uVar24 = plVar22[0x13];
              goto joined_r0x00710002d844;
            }
            goto LAB_710002d0c4;
          }
          *(undefined4 *)(plVar22 + 0x14) = 0;
          bVar9 = *(byte *)(plVar22[0xc] + (ulong)*(uint *)((long)plVar22 + 0xac));
          *(undefined2 *)(plVar22[0x2e2] + (ulong)*(uint *)((long)plVar22 + 0x170c) * 2) = 0;
          uVar11 = *(uint *)((long)plVar22 + 0x170c);
          *(uint *)((long)plVar22 + 0x170c) = uVar11 + 1;
          *(byte *)(plVar22[0x2e0] + (ulong)uVar11) = bVar9;
          *(short *)((long)plVar22 + (ulong)bVar9 * 4 + 0xd4) =
               *(short *)((long)plVar22 + (ulong)bVar9 * 4 + 0xd4) + 1;
          *(int *)((long)plVar22 + 0xb4) = *(int *)((long)plVar22 + 0xb4) + -1;
          uVar11 = *(int *)((long)plVar22 + 0xac) + 1;
          *(uint *)((long)plVar22 + 0xac) = uVar11;
        } while (*(int *)((long)plVar22 + 0x170c) != (int)plVar22[0x2e1] + -1);
        uVar24 = plVar22[0x13];
        if ((long)uVar24 < 0) {
          pvVar12 = (void *)0x0;
        }
        else {
          pvVar12 = (void *)(plVar22[0xc] + (uVar24 & 0xffffffff));
        }
        FUN_710002f560(plVar22,pvVar12,uVar11 - uVar24,0);
        lVar20 = *plVar22;
        plVar22[0x13] = (ulong)*(uint *)((long)plVar22 + 0xac);
        lVar23 = *(long *)(lVar20 + 0x38);
        FUN_710002f370(lVar23);
        uVar11 = *(uint *)(lVar20 + 0x20);
        if (*(uint *)(lVar23 + 0x28) <= *(uint *)(lVar20 + 0x20)) {
          uVar11 = *(uint *)(lVar23 + 0x28);
        }
        if (uVar11 != 0) {
          uVar24 = (ulong)uVar11;
          memcpy(*(void **)(lVar20 + 0x18),*(void **)(lVar23 + 0x20),uVar24);
          *(ulong *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + uVar24;
          *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
          *(ulong *)(lVar20 + 0x28) = *(long *)(lVar20 + 0x28) + uVar24;
          *(uint *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) - uVar11;
          lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
          *(long *)(lVar23 + 0x28) = lVar20;
          if (lVar20 == 0) {
            *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
          }
        }
      } while (*(int *)(*plVar22 + 0x20) != 0);
    }
LAB_710002d0c4:
    if ((int)param_1[4] == 0) {
LAB_710002d564:
      *(undefined4 *)((long)plVar22 + 0x4c) = 0xffffffff;
      return 0;
    }
  }
  else {
    if (iVar19 != 0x29a) goto LAB_710002c560;
    if ((int)param_1[1] != 0) goto LAB_710002c7b8;
LAB_710002cf2c:
    if ((*(int *)((long)plVar22 + 0xb4) != 0) || ((param_2 != 0 && ((int)plVar22[1] != 0x29a))))
    goto LAB_710002cf34;
LAB_710002d554:
    if (param_2 == 4) {
      if ((int)plVar22[6] < 1) {
        return 1;
      }
      lVar23 = param_1[0xc];
      if ((int)plVar22[6] == 2) {
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)lVar23;
        lVar23 = param_1[0xc];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 8);
        lVar23 = param_1[0xc];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x10);
        lVar23 = param_1[0xc];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x18);
        lVar20 = plVar22[5];
        lVar23 = param_1[2];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)lVar23;
        lVar23 = param_1[2];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 8);
        lVar23 = param_1[2];
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x10);
        uVar24 = (ulong)param_1[2] >> 0x18;
      }
      else {
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x18);
        lVar20 = plVar22[5];
        plVar22[5] = lVar20 + 1;
        *(char *)(plVar22[2] + lVar20) = (char)((ulong)lVar23 >> 0x10);
        uVar24 = param_1[0xc];
        lVar23 = plVar22[5];
        plVar22[5] = lVar23 + 1;
        *(char *)(plVar22[2] + lVar23) = (char)(uVar24 >> 8);
      }
      lVar23 = plVar22[5];
      plVar22[5] = lVar23 + 1;
      *(char *)(plVar22[2] + lVar23) = (char)uVar24;
      lVar23 = param_1[7];
      FUN_710002f370(lVar23);
      uVar11 = *(uint *)(param_1 + 4);
      if (*(uint *)(lVar23 + 0x28) <= *(uint *)(param_1 + 4)) {
        uVar11 = *(uint *)(lVar23 + 0x28);
      }
      if (uVar11 != 0) {
        uVar24 = (ulong)uVar11;
        memcpy((void *)param_1[3],*(void **)(lVar23 + 0x20),uVar24);
        param_1[3] = param_1[3] + uVar24;
        *(ulong *)(lVar23 + 0x20) = *(long *)(lVar23 + 0x20) + uVar24;
        param_1[5] = param_1[5] + uVar24;
        *(uint *)(param_1 + 4) = (int)param_1[4] - uVar11;
        lVar20 = *(long *)(lVar23 + 0x28) - uVar24;
        *(long *)(lVar23 + 0x28) = lVar20;
        if (lVar20 == 0) {
          *(undefined8 *)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x10);
        }
      }
      if (0 < (int)plVar22[6]) {
        *(int *)(plVar22 + 6) = -(int)plVar22[6];
      }
      return (ulong)(plVar22[5] == 0);
    }
  }
  return 0;
}

