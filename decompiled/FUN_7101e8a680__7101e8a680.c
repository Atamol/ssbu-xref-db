// addr:      7101e8a680
// offset:    0x1e8a680
// name:      FUN_7101e8a680
// mangled:   
// signature: undefined __cdecl FUN_7101e8a680(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e8a680(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  long *local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_7101e8e840(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71037780e0(&local_90,param_1 + 0x30,(long ****)"hold_on",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037780e0(&local_a0,param_1 + 0x30,(long ****)"hold_off",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar7 = local_88;
  if (*(int *)(param_1 + 0x1e4) == 0) {
    iVar2 = *(int *)(param_1 + 0x1e0);
    if (iVar2 - 4U < 4) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x60))(*(long **)(param_1 + 0x60),1);
      plVar7 = *(long **)(param_1 + 0x60);
    }
    else if (iVar2 == 3) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))(*(long **)(param_1 + 0x58),1);
      plVar7 = *(long **)(param_1 + 0x58);
    }
    else {
      if (iVar2 != 2) goto LAB_7101e8b238;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x60))(*(long **)(param_1 + 0x50),1);
      plVar7 = *(long **)(param_1 + 0x50);
    }
    (**(code **)(*plVar7 + 0x70))(plVar7,1);
    goto LAB_7101e8b238;
  }
  lVar9 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x600);
  if ((*(char *)(lVar9 + 0x4aa) == '\0') || ((*(byte *)(lVar9 + 0x280) >> 4 & 1) == 0)) {
    if (*(char *)(param_1 + 0x1878) != '\0') {
      *(char *)(param_1 + 0x1878) = '\0';
      plVar13 = (long *)local_88[1];
      if (plVar13 != (long *)0x0) {
        if ((char)local_88[2] != '\0') {
          plVar14 = *(long **)(*local_88 + 0x80);
          plVar1 = (long *)(*local_88 + 0x88);
          if (plVar14 != plVar1) {
            do {
              while( true ) {
                uVar6 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = (**(code **)(*plVar13 + 0x120))(plVar13,plVar14[0xd]), (uVar6 & 1) != 0)
                   ) {
                  (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
                }
                plVar10 = (long *)plVar14[1];
                if ((long *)plVar14[1] == (long *)0x0) break;
                do {
                  plVar14 = plVar10;
                  plVar10 = (long *)*plVar14;
                } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e8a7c4:
                if (plVar14 == plVar1) goto LAB_7101e8a7dc;
              }
              plVar10 = plVar14 + 2;
              plVar11 = (long *)*plVar10;
              if ((long *)*plVar11 != plVar14) {
                do {
                  lVar9 = *plVar10;
                  plVar10 = (long *)(lVar9 + 0x10);
                  plVar14 = (long *)*plVar10;
                } while (*plVar14 != lVar9);
                goto LAB_7101e8a7c4;
              }
              plVar14 = plVar11;
            } while (plVar11 != plVar1);
LAB_7101e8a7dc:
            plVar13 = (long *)plVar7[1];
          }
        }
        (**(code **)(*plVar13 + 0x188))(plVar13);
      }
      FUN_710377aee0(0x3f800000,(long)&local_a0);
      if ((((((*(long **)(param_1 + 600) != (long *)0x0) &&
             (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
            (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
           ((*(int *)(param_1 + 0x264) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
          (*(int *)(param_1 + 0x260) == DAT_7106dd53ac)) &&
         (((*(char *)(param_1 + 0x268) == '\0' && (*(long **)(param_1 + 600) != (long *)0x0)) &&
          ((uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0 &&
           (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x68))(), (uVar6 & 1) == 0)))))) {
        FUN_710373b540(param_1 + 0x248,0);
      }
    }
LAB_7101e8acc0:
    plVar7 = local_88;
    plVar13 = *(long **)(param_1 + 0x58);
    if ((char)plVar13[0x50] == '\0') {
      if (*(int *)((long)plVar13 + 0x25c) != 1) {
        if (*(int *)((long)plVar13 + 0x25c) == 0) {
          *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x28) + 0x600) + 0x4aa) = 0
          ;
          *(undefined1 *)(param_1 + 0x1878) = 0;
          plVar13 = (long *)local_88[1];
          if (plVar13 != (long *)0x0) {
            if ((char)local_88[2] != '\0') {
              plVar14 = *(long **)(*local_88 + 0x80);
              plVar1 = (long *)(*local_88 + 0x88);
              if (plVar14 != plVar1) {
                do {
                  while( true ) {
                    uVar6 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
                    if (((uVar6 & 1) != 0) &&
                       (uVar6 = (**(code **)(*plVar13 + 0x120))(plVar13,plVar14[0xd]),
                       (uVar6 & 1) != 0)) {
                      (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                      (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
                    }
                    plVar10 = (long *)plVar14[1];
                    if ((long *)plVar14[1] == (long *)0x0) break;
                    do {
                      plVar14 = plVar10;
                      plVar10 = (long *)*plVar14;
                    } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e8af78:
                    if (plVar14 == plVar1) goto LAB_7101e8af90;
                  }
                  plVar10 = plVar14 + 2;
                  plVar11 = (long *)*plVar10;
                  if ((long *)*plVar11 != plVar14) {
                    do {
                      lVar9 = *plVar10;
                      plVar10 = (long *)(lVar9 + 0x10);
                      plVar14 = (long *)*plVar10;
                    } while (*plVar14 != lVar9);
                    goto LAB_7101e8af78;
                  }
                  plVar14 = plVar11;
                } while (plVar11 != plVar1);
LAB_7101e8af90:
                plVar13 = (long *)plVar7[1];
              }
            }
            (**(code **)(*plVar13 + 0x188))(plVar13);
          }
          FUN_710377aee0(0x3f800000,(long)&local_a0);
          if (((((*(long **)(param_1 + 600) != (long *)0x0) &&
                (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
               (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
              ((*(int *)(param_1 + 0x264) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
             ((((*(int *)(param_1 + 0x260) == DAT_7106dd53ac &&
                ((*(char *)(param_1 + 0x268) == '\0' && (*(long **)(param_1 + 600) != (long *)0x0)))
                ) && (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0))
              && (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x68))(), (uVar6 & 1) == 0)))) {
            FUN_710373b540(param_1 + 0x248,0);
          }
          *(undefined4 *)(param_1 + 0x1f8) = 3;
          if (*(uint *)(param_1 + 0x1dc) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1dc) * 4 + 400) = 0;
            goto LAB_7101e8b238;
          }
          goto LAB_7101e8b434;
        }
        goto LAB_7101e8b238;
      }
      iVar2 = *(int *)(param_1 + 0x1e0);
      if (iVar2 - 4U < 4) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0x60))(*(long **)(param_1 + 0x60),0);
        plVar7 = *(long **)(param_1 + 0x60);
LAB_7101e8b090:
        (**(code **)(*plVar7 + 0x70))(plVar7,0);
      }
      else {
        if (iVar2 == 3) {
          (**(code **)(*plVar13 + 0x60))(plVar13,0);
          plVar7 = *(long **)(param_1 + 0x58);
          goto LAB_7101e8b090;
        }
        if (iVar2 == 2) {
          (**(code **)(**(long **)(param_1 + 0x50) + 0x60))(*(long **)(param_1 + 0x50),0);
          plVar7 = *(long **)(param_1 + 0x50);
          goto LAB_7101e8b090;
        }
      }
      plVar7 = local_88;
      *(undefined1 *)(param_1 + 0x1878) = 0;
      plVar13 = (long *)local_88[1];
      if (plVar13 != (long *)0x0) {
        if ((char)local_88[2] != '\0') {
          plVar14 = *(long **)(*local_88 + 0x80);
          plVar1 = (long *)(*local_88 + 0x88);
          if (plVar14 != plVar1) {
            do {
              while( true ) {
                uVar6 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = (**(code **)(*plVar13 + 0x120))(plVar13,plVar14[0xd]), (uVar6 & 1) != 0)
                   ) {
                  (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
                }
                plVar10 = (long *)plVar14[1];
                if ((long *)plVar14[1] == (long *)0x0) break;
                do {
                  plVar14 = plVar10;
                  plVar10 = (long *)*plVar14;
                } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e8b164:
                if (plVar14 == plVar1) goto LAB_7101e8b17c;
              }
              plVar10 = plVar14 + 2;
              plVar11 = (long *)*plVar10;
              if ((long *)*plVar11 != plVar14) {
                do {
                  lVar9 = *plVar10;
                  plVar10 = (long *)(lVar9 + 0x10);
                  plVar14 = (long *)*plVar10;
                } while (*plVar14 != lVar9);
                goto LAB_7101e8b164;
              }
              plVar14 = plVar11;
            } while (plVar11 != plVar1);
LAB_7101e8b17c:
            plVar13 = (long *)plVar7[1];
          }
        }
        (**(code **)(*plVar13 + 0x188))(plVar13);
      }
      FUN_710377aee0(0x3f800000,(long)&local_a0);
      if (((((((*(long **)(param_1 + 600) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
             (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
            ((*(int *)(param_1 + 0x264) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
           ((*(int *)(param_1 + 0x260) == DAT_7106dd53ac &&
            ((*(char *)(param_1 + 0x268) == '\0' && (*(long **)(param_1 + 600) != (long *)0x0))))))
          && (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
         (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x68))(), (uVar6 & 1) == 0)) {
        FUN_710373b540(param_1 + 0x248,0);
      }
      uVar8 = 5;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1e0);
      if (iVar2 - 4U < 4) {
        (**(code **)(**(long **)(param_1 + 0x60) + 0x60))(*(long **)(param_1 + 0x60),0);
        plVar7 = *(long **)(param_1 + 0x60);
LAB_7101e8acf4:
        (**(code **)(*plVar7 + 0x70))(plVar7,0);
      }
      else {
        if (iVar2 == 3) {
          (**(code **)(*plVar13 + 0x60))(plVar13,0);
          plVar7 = *(long **)(param_1 + 0x58);
          goto LAB_7101e8acf4;
        }
        if (iVar2 == 2) {
          (**(code **)(**(long **)(param_1 + 0x50) + 0x60))(*(long **)(param_1 + 0x50),0);
          plVar7 = *(long **)(param_1 + 0x50);
          goto LAB_7101e8acf4;
        }
      }
      plVar7 = local_88;
      *(undefined1 *)(param_1 + 0x1878) = 0;
      plVar13 = (long *)local_88[1];
      if (plVar13 != (long *)0x0) {
        if ((char)local_88[2] != '\0') {
          plVar14 = *(long **)(*local_88 + 0x80);
          plVar1 = (long *)(*local_88 + 0x88);
          if (plVar14 != plVar1) {
            do {
              while( true ) {
                uVar6 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = (**(code **)(*plVar13 + 0x120))(plVar13,plVar14[0xd]), (uVar6 & 1) != 0)
                   ) {
                  (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
                }
                plVar10 = (long *)plVar14[1];
                if ((long *)plVar14[1] == (long *)0x0) break;
                do {
                  plVar14 = plVar10;
                  plVar10 = (long *)*plVar14;
                } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e8adc8:
                if (plVar14 == plVar1) goto LAB_7101e8ade0;
              }
              plVar10 = plVar14 + 2;
              plVar11 = (long *)*plVar10;
              if ((long *)*plVar11 != plVar14) {
                do {
                  lVar9 = *plVar10;
                  plVar10 = (long *)(lVar9 + 0x10);
                  plVar14 = (long *)*plVar10;
                } while (*plVar14 != lVar9);
                goto LAB_7101e8adc8;
              }
              plVar14 = plVar11;
            } while (plVar11 != plVar1);
LAB_7101e8ade0:
            plVar13 = (long *)plVar7[1];
          }
        }
        (**(code **)(*plVar13 + 0x188))(plVar13);
      }
      FUN_710377aee0(0x3f800000,(long)&local_a0);
      if (((((*(long **)(param_1 + 600) != (long *)0x0) &&
            (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
           (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
          ((((*(int *)(param_1 + 0x264) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
            ((*(int *)(param_1 + 0x260) == DAT_7106dd53ac &&
             ((*(char *)(param_1 + 0x268) == '\0' && (*(long **)(param_1 + 600) != (long *)0x0))))))
           && (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)))) &&
         (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x68))(), (uVar6 & 1) == 0)) {
        FUN_710373b540(param_1 + 0x248,0);
      }
      uVar8 = 1;
    }
    *(undefined4 *)(param_1 + 0x1f8) = uVar8;
    uVar3 = *(uint *)(param_1 + 0x1dc);
    if (0x12 < uVar3) {
LAB_7101e8b434:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = 8;
  }
  else {
    if ((long *)local_88[1] != (long *)0x0) {
      uVar6 = (**(code **)(*(long *)local_88[1] + 0x138))();
      if ((uVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0x1878) != '\0') goto LAB_7101e8acc0;
      }
      else if (*(char *)(param_1 + 0x1878) != '\0') goto LAB_7101e8a93c;
LAB_7101e8ab18:
      *(undefined1 *)(param_1 + 0x1878) = 1;
      FUN_710377aee0(0x3f800000,(long)&local_90);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1c8849dafe,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) {
        FUN_71024076d0(local_80,0x1c8849dafe);
        *(undefined4 *)(param_1 + 0x248) = local_80[0];
        if (local_70 == 0) goto LAB_7101e8ac10;
        if (*(int *)(param_1 + 0x264) == 0x876500) {
          if (*(int *)(param_1 + 0x260) == DAT_7106dd53ac) {
            if ((*(long *)(param_1 + 600) != 0) && (DAT_7106dd53a8 == '\x01')) {
              piVar12 = (int *)(*(long *)(param_1 + 600) + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar5) {
                  *piVar12 = *piVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            *(undefined8 *)(param_1 + 600) = 0;
            *(undefined1 *)(param_1 + 0x268) = 0;
          }
          else {
            *(int *)(param_1 + 0x260) = DAT_7106dd53ac;
          }
          *(long *)(param_1 + 600) = local_70;
          piVar12 = (int *)(local_70 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_7101e8ac58;
        }
      }
      else {
        local_60 = 0;
        local_70 = 0;
        local_68 = 0x87650000000000;
        local_80[0] = 0;
        local_48 = 0;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0;
        *(undefined4 *)(param_1 + 0x248) = 0;
LAB_7101e8ac10:
        if (((*(long *)(param_1 + 600) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x260) == DAT_7106dd53ac)) {
          piVar12 = (int *)(*(long *)(param_1 + 600) + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined8 *)(param_1 + 600) = 0;
LAB_7101e8ac58:
        *(undefined1 *)(param_1 + 0x268) = 0;
      }
      *(undefined8 *)(param_1 + 0x270) = local_58;
      *(undefined8 *)(param_1 + 0x280) = local_48;
      *(undefined8 *)(param_1 + 0x278) = uStack_50;
      local_78 = &PTR_FUN_7104f73d50;
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_70 + 0x38);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar5) {
            *piVar12 = *piVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_70 = 0;
      goto LAB_7101e8acc0;
    }
    if (*(char *)(param_1 + 0x1878) == '\0') goto LAB_7101e8ab18;
LAB_7101e8a93c:
    iVar2 = *(int *)(param_1 + 0x1e0);
    if (iVar2 - 4U < 4) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x60))(*(long **)(param_1 + 0x60),0);
      plVar13 = *(long **)(param_1 + 0x60);
LAB_7101e8a964:
      (**(code **)(*plVar13 + 0x70))(plVar13,0);
    }
    else {
      if (iVar2 == 3) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x60))(*(long **)(param_1 + 0x58),0);
        plVar13 = *(long **)(param_1 + 0x58);
        goto LAB_7101e8a964;
      }
      if (iVar2 == 2) {
        (**(code **)(**(long **)(param_1 + 0x50) + 0x60))(*(long **)(param_1 + 0x50),0);
        plVar13 = *(long **)(param_1 + 0x50);
        goto LAB_7101e8a964;
      }
    }
    *(undefined1 *)(param_1 + 0x1878) = 0;
    plVar13 = (long *)plVar7[1];
    if (plVar13 != (long *)0x0) {
      if ((char)plVar7[2] != '\0') {
        plVar14 = *(long **)(*plVar7 + 0x80);
        plVar1 = (long *)(*plVar7 + 0x88);
        if (plVar14 != plVar1) {
          do {
            while( true ) {
              uVar6 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = (**(code **)(*plVar13 + 0x120))(plVar13,plVar14[0xd]), (uVar6 & 1) != 0))
              {
                (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
              }
              plVar10 = (long *)plVar14[1];
              if ((long *)plVar14[1] == (long *)0x0) break;
              do {
                plVar14 = plVar10;
                plVar10 = (long *)*plVar14;
              } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e8aa30:
              if (plVar14 == plVar1) goto LAB_7101e8aa48;
            }
            plVar10 = plVar14 + 2;
            plVar11 = (long *)*plVar10;
            if ((long *)*plVar11 != plVar14) {
              do {
                lVar9 = *plVar10;
                plVar10 = (long *)(lVar9 + 0x10);
                plVar14 = (long *)*plVar10;
              } while (*plVar14 != lVar9);
              goto LAB_7101e8aa30;
            }
            plVar14 = plVar11;
          } while (plVar11 != plVar1);
LAB_7101e8aa48:
          plVar13 = (long *)plVar7[1];
        }
      }
      (**(code **)(*plVar13 + 0x188))(plVar13);
    }
    FUN_710377aee0(0x3f800000,(long)&local_a0);
    if ((((*(long **)(param_1 + 600) != (long *)0x0) &&
         (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0)) &&
        (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
       ((((*(int *)(param_1 + 0x264) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
         ((*(int *)(param_1 + 0x260) == DAT_7106dd53ac &&
          ((*(char *)(param_1 + 0x268) == '\0' && (*(long **)(param_1 + 600) != (long *)0x0)))))) &&
        ((uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x20))(), (uVar6 & 1) == 0 &&
         (uVar6 = (**(code **)(**(long **)(param_1 + 600) + 0x68))(), (uVar6 & 1) == 0)))))) {
      FUN_710373b540(param_1 + 0x248,0);
    }
    if (0x12 < *(uint *)(param_1 + 0x1dc)) goto LAB_7101e8b434;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1dc) * 4 + 400) = 0xb;
    if (0x11 < *(int *)(param_1 + 0x1dc)) goto LAB_7101e8b238;
    uVar3 = *(int *)(param_1 + 0x1dc) + 1;
    *(uint *)(param_1 + 0x1dc) = uVar3;
    if (0x12 < uVar3) goto LAB_7101e8b434;
    uVar8 = 10;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 400) = uVar8;
LAB_7101e8b238:
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  plVar7 = local_88;
  local_90 = &PTR_FUN_710523d9e8;
  local_88 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar7);
  }
  return;
}

