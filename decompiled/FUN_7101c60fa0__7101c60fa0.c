// addr:      7101c60fa0
// offset:    0x1c60fa0
// name:      FUN_7101c60fa0
// mangled:   
// signature: bool __cdecl FUN_7101c60fa0(long param_1, byte param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


bool FUN_7101c60fa0(long param_1,byte param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  char *pcVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  byte bVar17;
  ulong uVar18;
  char *pcVar19;
  ulong uVar20;
  bool bVar21;
  long *plVar22;
  long *plVar23;
  
  uVar11 = (ulong)param_2;
  lVar10 = param_1 + uVar11 * 0x1e8 + 0x918;
  if (7 < param_2) {
    lVar10 = 0;
  }
  uVar12 = (uint)*(byte *)(lVar10 + 0x1e0);
  if ((param_3 & 0xff) == 0) {
    bVar7 = false;
    bVar8 = false;
    bVar21 = true;
    if (uVar12 != 2) goto LAB_7101c61020;
LAB_7101c61050:
    cVar6 = *(char *)(param_1 + 0x1b22);
    pcVar13 = *(char **)(param_1 + 0x548);
    pcVar15 = *(char **)(param_1 + 0x550);
    if (pcVar13 == pcVar15) {
LAB_7101c610f4:
      uVar18 = (long)pcVar15 - (long)pcVar13 >> 1;
      if ((3 < uVar18) &&
         ((pcVar13[6] != '\0' ||
          ((4 < uVar18 && ((pcVar13[8] != '\0' || ((5 < uVar18 && (pcVar13[10] != '\0'))))))))))
      goto LAB_7101c6110c;
      if (*(char *)(param_1 + 0x650) == '\0') goto LAB_7101c61268;
      plVar9 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
      if ((plVar9 == (long *)0x0) || (uVar18 = (**(code **)(*plVar9 + 0x138))(), (uVar18 & 1) != 0))
      {
        if (cVar6 == '\0') {
          FUN_710377aee0(0xbf800000,param_1 + 0x4b0);
        }
        else {
          plVar9 = *(long **)(param_1 + 0x4b8);
          plVar22 = (long *)plVar9[1];
          if (plVar22 != (long *)0x0) {
            if ((char)plVar9[2] != '\0') {
              plVar23 = *(long **)(*plVar9 + 0x80);
              plVar9 = (long *)(*plVar9 + 0x88);
              if (plVar23 != plVar9) {
                do {
                  while( true ) {
                    uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                    if (((uVar18 & 1) != 0) &&
                       (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                       (uVar18 & 1) != 0)) {
                      (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                    }
                    plVar14 = (long *)plVar23[1];
                    if ((long *)plVar23[1] == (long *)0x0) break;
                    do {
                      plVar23 = plVar14;
                      plVar14 = (long *)*plVar23;
                    } while ((long *)*plVar23 != (long *)0x0);
LAB_7101c6124c:
                    if (plVar23 == plVar9) goto LAB_7101c61510;
                  }
                  plVar14 = plVar23 + 2;
                  plVar16 = (long *)*plVar14;
                  if ((long *)*plVar16 != plVar23) {
                    do {
                      lVar10 = *plVar14;
                      plVar14 = (long *)(lVar10 + 0x10);
                      plVar23 = (long *)*plVar14;
                    } while (*plVar23 != lVar10);
                    goto LAB_7101c6124c;
                  }
                  plVar23 = plVar16;
                } while (plVar16 != plVar9);
                goto LAB_7101c61510;
              }
            }
            goto LAB_7101c61518;
          }
        }
      }
      else {
        plVar9 = *(long **)(param_1 + 0x4b8);
        plVar22 = (long *)plVar9[1];
        if (plVar22 != (long *)0x0) {
          if ((char)plVar9[2] != '\0') {
            plVar23 = *(long **)(*plVar9 + 0x80);
            plVar9 = (long *)(*plVar9 + 0x88);
            if (plVar23 != plVar9) {
              do {
                while( true ) {
                  uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                  if (((uVar18 & 1) != 0) &&
                     (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                     (uVar18 & 1) != 0)) {
                    (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                    (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                  }
                  plVar14 = (long *)plVar23[1];
                  if ((long *)plVar23[1] == (long *)0x0) break;
                  do {
                    plVar23 = plVar14;
                    plVar14 = (long *)*plVar23;
                  } while ((long *)*plVar23 != (long *)0x0);
LAB_7101c61410:
                  if (plVar23 == plVar9) goto LAB_7101c61428;
                }
                plVar14 = plVar23 + 2;
                plVar16 = (long *)*plVar14;
                if ((long *)*plVar16 != plVar23) {
                  do {
                    lVar10 = *plVar14;
                    plVar14 = (long *)(lVar10 + 0x10);
                    plVar23 = (long *)*plVar14;
                  } while (*plVar23 != lVar10);
                  goto LAB_7101c61410;
                }
                plVar23 = plVar16;
              } while (plVar16 != plVar9);
LAB_7101c61428:
              plVar22 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
            }
          }
          (**(code **)(*plVar22 + 0x178))(plVar22);
        }
        plVar9 = *(long **)(param_1 + 0x4b8);
        plVar22 = (long *)plVar9[1];
        if (cVar6 == '\0') {
          if (plVar22 != (long *)0x0) {
            if ((char)plVar9[2] != '\0') {
              plVar23 = *(long **)(*plVar9 + 0x80);
              plVar9 = (long *)(*plVar9 + 0x88);
              if (plVar23 != plVar9) {
                do {
                  while( true ) {
                    uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                    if (((uVar18 & 1) != 0) &&
                       (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                       (uVar18 & 1) != 0)) {
                      (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                    }
                    plVar14 = (long *)plVar23[1];
                    if ((long *)plVar23[1] == (long *)0x0) break;
                    do {
                      plVar23 = plVar14;
                      plVar14 = (long *)*plVar23;
                    } while ((long *)*plVar23 != (long *)0x0);
LAB_7101c616f8:
                    if (plVar23 == plVar9) goto LAB_7101c61710;
                  }
                  plVar14 = plVar23 + 2;
                  plVar16 = (long *)*plVar14;
                  if ((long *)*plVar16 != plVar23) {
                    do {
                      lVar10 = *plVar14;
                      plVar14 = (long *)(lVar10 + 0x10);
                      plVar23 = (long *)*plVar14;
                    } while (*plVar23 != lVar10);
                    goto LAB_7101c616f8;
                  }
                  plVar23 = plVar16;
                } while (plVar16 != plVar9);
LAB_7101c61710:
                plVar22 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
              }
            }
            (**(code **)(*plVar22 + 0x168))(0xbf800000,plVar22);
          }
        }
        else if (plVar22 != (long *)0x0) {
          if ((char)plVar9[2] != '\0') {
            plVar23 = *(long **)(*plVar9 + 0x80);
            plVar9 = (long *)(*plVar9 + 0x88);
            if (plVar23 != plVar9) {
              do {
                uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                if (((uVar18 & 1) != 0) &&
                   (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                   (uVar18 & 1) != 0)) {
                  (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                }
                plVar14 = (long *)plVar23[1];
                if ((long *)plVar23[1] == (long *)0x0) {
                  plVar14 = plVar23 + 2;
                  plVar16 = (long *)*plVar14;
                  if ((long *)*plVar16 != plVar23) {
                    do {
                      lVar10 = *plVar14;
                      plVar14 = (long *)(lVar10 + 0x10);
                      plVar16 = (long *)*plVar14;
                    } while (*plVar16 != lVar10);
                  }
                }
                else {
                  do {
                    plVar16 = plVar14;
                    plVar14 = (long *)*plVar16;
                  } while ((long *)*plVar16 != (long *)0x0);
                }
                plVar23 = plVar16;
              } while (plVar16 != plVar9);
LAB_7101c61510:
              plVar22 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
            }
          }
LAB_7101c61518:
          (**(code **)(*plVar22 + 0x188))(plVar22);
        }
      }
      *(undefined1 *)(param_1 + 0x650) = 0;
joined_r0x007101c61730:
      if (bVar8) goto LAB_7101c6126c;
    }
    else {
      uVar18 = (ulong)(pcVar15 + (-2 - (long)pcVar13)) >> 1;
      uVar12 = (int)uVar18 + 1;
      uVar20 = (ulong)uVar12 & 3;
      pcVar19 = pcVar13;
      if (pcVar15 + (-2 - (long)pcVar13) < (char *)0x6) {
        bVar17 = 0;
      }
      else {
        bVar17 = 0;
        lVar10 = (uVar20 - 1) - uVar18;
        do {
          cVar5 = *pcVar19;
          pcVar1 = pcVar19 + 2;
          pcVar2 = pcVar19 + 4;
          pcVar3 = pcVar19 + 6;
          pcVar19 = pcVar19 + 8;
          bVar17 = *pcVar3 + *pcVar2 + *pcVar1 + cVar5 + bVar17;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0);
      }
      if ((uVar12 & 3) != 0) {
        lVar10 = -uVar20;
        do {
          bVar17 = *pcVar19 + bVar17;
          lVar10 = lVar10 + 1;
          pcVar19 = pcVar19 + 2;
        } while (lVar10 != 0);
      }
      if (bVar17 < 4) goto LAB_7101c610f4;
LAB_7101c6110c:
      if (*(char *)(param_1 + 0x650) == '\0') {
        plVar9 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
        if ((plVar9 == (long *)0x0) ||
           (uVar18 = (**(code **)(*plVar9 + 0x138))(), (uVar18 & 1) != 0)) {
          if (cVar6 != '\0') goto LAB_7101c6162c;
          FUN_710377aee0(0x3f800000,param_1 + 0x4b0);
        }
        else {
          plVar9 = *(long **)(param_1 + 0x4b8);
          plVar22 = (long *)plVar9[1];
          if (plVar22 != (long *)0x0) {
            if ((char)plVar9[2] != '\0') {
              plVar23 = *(long **)(*plVar9 + 0x80);
              plVar9 = (long *)(*plVar9 + 0x88);
              if (plVar23 != plVar9) {
                do {
                  while( true ) {
                    uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                    if (((uVar18 & 1) != 0) &&
                       (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                       (uVar18 & 1) != 0)) {
                      (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                    }
                    plVar14 = (long *)plVar23[1];
                    if ((long *)plVar23[1] == (long *)0x0) break;
                    do {
                      plVar23 = plVar14;
                      plVar14 = (long *)*plVar23;
                    } while ((long *)*plVar23 != (long *)0x0);
LAB_7101c615f8:
                    if (plVar23 == plVar9) goto LAB_7101c61610;
                  }
                  plVar14 = plVar23 + 2;
                  plVar16 = (long *)*plVar14;
                  if ((long *)*plVar16 != plVar23) {
                    do {
                      lVar10 = *plVar14;
                      plVar14 = (long *)(lVar10 + 0x10);
                      plVar23 = (long *)*plVar14;
                    } while (*plVar23 != lVar10);
                    goto LAB_7101c615f8;
                  }
                  plVar23 = plVar16;
                } while (plVar16 != plVar9);
LAB_7101c61610:
                plVar22 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
              }
            }
            (**(code **)(*plVar22 + 0x178))(plVar22);
          }
          if (cVar6 == '\0') {
            plVar9 = *(long **)(param_1 + 0x4b8);
            plVar22 = (long *)plVar9[1];
            if (plVar22 != (long *)0x0) {
              if ((char)plVar9[2] != '\0') {
                plVar23 = *(long **)(*plVar9 + 0x80);
                plVar9 = (long *)(*plVar9 + 0x88);
                if (plVar23 != plVar9) {
                  do {
                    while( true ) {
                      uVar18 = (**(code **)(*(long *)plVar23[0xd] + 0x148))();
                      if (((uVar18 & 1) != 0) &&
                         (uVar18 = (**(code **)(*plVar22 + 0x120))(plVar22,plVar23[0xd]),
                         (uVar18 & 1) != 0)) {
                        (**(code **)(*(long *)plVar23[0xd] + 0x178))();
                        (**(code **)(*(long *)plVar23[0xd] + 0x140))((long *)plVar23[0xd],0);
                      }
                      plVar14 = (long *)plVar23[1];
                      if ((long *)plVar23[1] == (long *)0x0) break;
                      do {
                        plVar23 = plVar14;
                        plVar14 = (long *)*plVar23;
                      } while ((long *)*plVar23 != (long *)0x0);
LAB_7101c617f4:
                      if (plVar23 == plVar9) goto LAB_7101c6180c;
                    }
                    plVar14 = plVar23 + 2;
                    plVar16 = (long *)*plVar14;
                    if ((long *)*plVar16 != plVar23) {
                      do {
                        lVar10 = *plVar14;
                        plVar14 = (long *)(lVar10 + 0x10);
                        plVar23 = (long *)*plVar14;
                      } while (*plVar23 != lVar10);
                      goto LAB_7101c617f4;
                    }
                    plVar23 = plVar16;
                  } while (plVar16 != plVar9);
LAB_7101c6180c:
                  plVar22 = *(long **)(*(long *)(param_1 + 0x4b8) + 8);
                }
              }
              (**(code **)(*plVar22 + 0x168))(0x3f800000,plVar22);
            }
          }
          else {
LAB_7101c6162c:
            FUN_710377b140(param_1 + 0x4b0);
          }
        }
        *(undefined1 *)(param_1 + 0x650) = 1;
        goto joined_r0x007101c61730;
      }
LAB_7101c61268:
      if (bVar8) goto LAB_7101c6126c;
    }
  }
  else {
    uVar4 = (uint)param_4 & 0xff;
    bVar7 = uVar4 == 2;
    bVar21 = (uint)*(byte *)(lVar10 + 0x1e1) != ((uint)param_5 & 0xff) || uVar12 != uVar4;
    bVar8 = uVar4 == 1;
    if (uVar12 == 2) goto LAB_7101c61050;
LAB_7101c61020:
    if (uVar12 != 1) {
      if (bVar7) goto LAB_7101c61050;
      goto LAB_7101c61268;
    }
    if (bVar7) {
      bVar8 = true;
      goto LAB_7101c61050;
    }
LAB_7101c6126c:
    *(undefined1 *)(param_1 + 0x1b28) = 1;
  }
  if (7 < param_2) goto LAB_7101c61328;
  if ((*(char *)(param_1 + 0x18e6) == '\x04') ||
     (*(char *)(param_1 + uVar11 * 0x1e8 + 0xaf8) != '\x02')) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x450) + uVar11 * 0x1e0 + 0x30);
    pcVar13 = "next_off";
  }
  else {
    if (*(char *)(param_1 + 0x18e6) == '\x03') {
LAB_7101c612d8:
      bVar17 = 1;
    }
    else {
      bVar17 = 2;
      if ((*(char *)(param_1 + 0x18e7) != '\x01') && (*(char *)(param_1 + 0x18e7) != '\x04'))
      goto LAB_7101c612d8;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x450) + uVar11 * 0x1e0 + 0x30);
    pcVar13 = "next_on";
    if (bVar17 <= *(byte *)(param_1 + uVar11 * 0x1e8 + 0xaf9)) {
      pcVar13 = "next_off";
    }
  }
  FUN_7103778300(0x3f800000,lVar10,(long)pcVar13);
LAB_7101c61328:
  FUN_7101c61830(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return bVar21;
}

