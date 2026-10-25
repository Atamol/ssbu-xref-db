// addr:      7101a06380
// offset:    0x1a06380
// name:      FUN_7101a06380
// mangled:   
// signature: undefined __cdecl FUN_7101a06380(long param_1, byte param_2)


void FUN_7101a06380(long param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *(long *)(param_1 + 0x5e8);
  *(byte *)(param_1 + 0x6b9) = param_2 & 1;
  *(byte *)(lVar6 + 0x260) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
      lVar3 = lVar2;
      lVar5 = lVar4;
      do {
        bVar1 = *(int *)(lVar5 + 0x20) < 0;
        if (!bVar1) {
          lVar3 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)bVar1 * 8);
      } while (lVar5 != 0);
      if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 1)) &&
         (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
        (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
        lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
        lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
      }
      lVar3 = lVar2;
      lVar5 = lVar4;
      if (lVar4 != 0) {
        do {
          if (0 < *(int *)(lVar5 + 0x20)) {
            lVar3 = lVar5;
          }
          lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 1) * 8);
        } while (lVar5 != 0);
        if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 2)) &&
           (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
          (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
          (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
          lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
          lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
        }
        lVar3 = lVar2;
        lVar5 = lVar4;
        if (lVar4 != 0) {
          do {
            if (1 < *(int *)(lVar5 + 0x20)) {
              lVar3 = lVar5;
            }
            lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 2) * 8);
          } while (lVar5 != 0);
          if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 3)) &&
             (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
            (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
            lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
            lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
          }
          lVar3 = lVar2;
          lVar5 = lVar4;
          if (lVar4 != 0) {
            do {
              if (2 < *(int *)(lVar5 + 0x20)) {
                lVar3 = lVar5;
              }
              lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 3) * 8);
            } while (lVar5 != 0);
            if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 4)) &&
               (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
              (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
              (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
              lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
              lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
            }
            lVar3 = lVar2;
            lVar5 = lVar4;
            if (lVar4 != 0) {
              do {
                if (3 < *(int *)(lVar5 + 0x20)) {
                  lVar3 = lVar5;
                }
                lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 4) * 8);
              } while (lVar5 != 0);
              if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 5)) &&
                 (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
                (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
                lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
              }
              lVar3 = lVar2;
              lVar5 = lVar4;
              if (lVar4 != 0) {
                do {
                  if (4 < *(int *)(lVar5 + 0x20)) {
                    lVar3 = lVar5;
                  }
                  lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 5) * 8);
                } while (lVar5 != 0);
                if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 6)) &&
                   (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
                  (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                  (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                  lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
                  lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
                }
                lVar3 = lVar2;
                lVar5 = lVar4;
                if (lVar4 != 0) {
                  do {
                    if (5 < *(int *)(lVar5 + 0x20)) {
                      lVar3 = lVar5;
                    }
                    lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 6) * 8);
                  } while (lVar5 != 0);
                  if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 7)) &&
                     (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
                    (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                    (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                    lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
                    lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
                  }
                  lVar3 = lVar2;
                  lVar5 = lVar4;
                  if (lVar4 != 0) {
                    do {
                      if (6 < *(int *)(lVar5 + 0x20)) {
                        lVar3 = lVar5;
                      }
                      lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 7) * 8);
                    } while (lVar5 != 0);
                    if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 8)) &&
                       (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
                      (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                      (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                      lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
                      lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
                    }
                    lVar3 = lVar2;
                    lVar5 = lVar4;
                    if (lVar4 != 0) {
                      do {
                        if (7 < *(int *)(lVar5 + 0x20)) {
                          lVar3 = lVar5;
                        }
                        lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 8) * 8);
                      } while (lVar5 != 0);
                      if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 9)) &&
                         (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
                        (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                        (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                        lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
                        lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
                      }
                      lVar6 = lVar2;
                      if (lVar4 != 0) {
                        do {
                          if (8 < *(int *)(lVar4 + 0x20)) {
                            lVar6 = lVar4;
                          }
                          lVar4 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x20) < 9) * 8);
                        } while (lVar4 != 0);
                        if (((lVar6 != lVar2) && (*(int *)(lVar6 + 0x20) < 10)) &&
                           (plVar7 = *(long **)(lVar6 + 0x28), plVar7 != (long *)0x0)) {
                          (**(code **)(*plVar7 + 0x1f8))(plVar7,0);
                    /* WARNING: Could not recover jumptable at 0x007101a06900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(*plVar7 + 0x388))(plVar7,1,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar6 + 0x1c0) + 0x1b8);
    if (lVar4 != 0) {
      lVar2 = *(long *)(lVar6 + 0x1c0) + 0x1b8;
      lVar3 = lVar2;
      do {
        bVar1 = *(int *)(lVar4 + 0x20) < 0;
        if (!bVar1) {
          lVar3 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
      } while (lVar4 != 0);
      if (((lVar3 != lVar2) && (*(int *)(lVar3 + 0x20) < 1)) &&
         (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
        bVar1 = *(char *)(lVar6 + 0x264) == '\0';
        (**(code **)(*plVar7 + 0x1f8))(plVar7,bVar1);
        (**(code **)(*plVar7 + 0x388))(plVar7,!bVar1,0);
      }
    }
    FUN_71019fc7a0(lVar6);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71043ad13e);
    *(undefined4 *)(lVar6 + 0x218) = 0;
    *(undefined1 *)(lVar6 + 0x268) = 0;
  }
  return;
}

