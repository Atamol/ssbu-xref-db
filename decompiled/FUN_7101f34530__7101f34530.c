// addr:      7101f34530
// offset:    0x1f34530
// name:      FUN_7101f34530
// mangled:   
// signature: undefined __cdecl FUN_7101f34530(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f34530(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x178),1);
    uVar6 = *(uint *)(param_1 + 0x100);
    if ((uVar6 | 4) == 4) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710425fdc8);
      uVar6 = *(uint *)(param_1 + 0x100);
    }
    if (uVar6 != 5) {
      (**(code **)(**(long **)(param_1 + 0x1a0) + 0x70))(*(long **)(param_1 + 0x1a0),0);
      (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),0);
      uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x78))();
      (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),~uVar6 & 1);
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x1b0) + 0x25c) != -1) {
    if (*(int *)(param_1 + 0xf4) < 0x12) {
      uVar6 = *(int *)(param_1 + 0xf4) + 1;
      *(uint *)(param_1 + 0xf4) = uVar6;
      if (0x12 < uVar6) goto LAB_7101f3502c;
      *(undefined4 *)(param_1 + (long)(int)uVar6 * 4 + 0xa8) = 5;
    }
    if ((*(char *)(param_1 + 0x5f9) != '\0') || (0x11 < *(int *)(param_1 + 0xf4))) {
LAB_7101f3465c:
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x178),0);
      return;
    }
    uVar6 = *(int *)(param_1 + 0xf4) + 1;
    *(uint *)(param_1 + 0xf4) = uVar6;
    if (uVar6 < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)uVar6 * 4 + 0xa8) = 6;
      goto LAB_7101f3465c;
    }
    goto LAB_7101f3502c;
  }
  iVar10 = *(int *)(param_1 + 0x600);
  plVar1 = (long *)(param_1 + 0x180);
  uVar7 = (**(code **)(**(long **)(param_1 + 0x180) + 0x78))();
  if ((uVar7 & 1) == 0) {
    plVar8 = *(long **)(param_1 + 0x1b0);
    if ((*(char *)((long)plVar8 + 0x281) != '\0') && (*(float *)((long)plVar8 + 0x274) < 0.0)) {
      (**(code **)(*plVar8 + 0x70))(plVar8,0);
      FUN_710376b960(*(long *)(param_1 + 0x1b0));
      (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),1);
      FUN_7103771a80(plVar1,(int)((ulong)(*(long *)(*(long *)(param_1 + 0x180) + 0x188) -
                                         *(long *)(*(long *)(param_1 + 0x180) + 0x180)) >> 3) + -1,0
                    );
    }
  }
  else {
    lVar9 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600);
    if ((*(char *)(lVar9 + 0x4aa) != '\0') && ((*(byte *)(lVar9 + 0x19c) >> 3 & 1) != 0)) {
      lVar9 = *plVar1;
      if ((*(int *)(lVar9 + 0x254) ==
           (int)((ulong)(*(long *)(lVar9 + 0x188) - *(long *)(lVar9 + 0x180)) >> 3) + -1) &&
         (*(int *)(lVar9 + 0x254) == iVar10)) {
        (**(code **)(**(long **)(param_1 + 0x1b0) + 0x70))(*(long **)(param_1 + 0x1b0),1);
        FUN_7103771a80((long *)(param_1 + 0x1b0),0,0);
        (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),0);
        FUN_710376b960(*(long *)(param_1 + 0x180));
      }
    }
  }
  iVar10 = *(int *)(*(long *)(param_1 + 0x180) + 0x254);
  plVar8 = (long *)(param_1 + 0x188);
  uVar7 = (**(code **)(**(long **)(param_1 + 0x188) + 0x78))();
  if (iVar10 == 2) {
    if ((uVar7 & 1) == 0) {
      (**(code **)(*(long *)*plVar8 + 0x70))((long *)*plVar8,1);
    }
  }
  else if ((uVar7 & 1) != 0) {
    (**(code **)(*(long *)*plVar8 + 0x70))((long *)*plVar8,0);
    FUN_7103771a80(plVar8,*(int *)(*plVar8 + 0x254),1);
  }
  plVar8 = (long *)(param_1 + 400);
  iVar10 = *(int *)(*(long *)(param_1 + 0x180) + 0x254);
  uVar7 = (**(code **)(**(long **)(param_1 + 400) + 0x78))();
  if (iVar10 == 3) {
    if ((uVar7 & 1) == 0) {
      (**(code **)(*(long *)*plVar8 + 0x70))((long *)*plVar8,1);
    }
  }
  else if ((uVar7 & 1) != 0) {
    (**(code **)(*(long *)*plVar8 + 0x70))((long *)*plVar8,0);
    FUN_7103771a80(plVar8,*(int *)(*plVar8 + 0x254),1);
  }
  if (*(int *)(*plVar1 + 0x254) == 1) {
    if (*(int *)(param_1 + 0x600) != 1) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710436cc36);
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x78))();
    if ((uVar7 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),1);
      lVar9 = **(long **)(param_1 + 0x130);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      }
    }
    iVar10 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x25c);
    if (iVar10 == -1) goto LAB_7101f34e0c;
    iVar2 = *(int *)(*(long *)(param_1 + 0x198) + 0x254);
    if (iVar10 == 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),0x710425fdd5);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) != 0)) {
        FUN_71024076d0(local_90,0x151ca6c028);
        if (local_80 == 0) {
          iVar10 = 1;
        }
        else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
          piVar13 = (int *)(local_80 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = *piVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            iVar10 = 1;
          } while (cVar4 != '\0');
        }
        else {
          iVar10 = 1;
        }
      }
      else {
        iVar10 = 1;
LAB_7101f34dc8:
        local_58 = 0;
        uStack_60 = 0;
        local_68 = 0xffffffffffffffff;
        local_78 = 0x87650000000000;
        local_90[0] = 0;
      }
LAB_7101f34dcc:
      local_88 = &PTR_FUN_7104f73d50;
      local_80 = 0;
      local_70 = 0;
    }
    else {
      if (iVar10 == 0) {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x120),0x71043e0a2a);
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') ||
           (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar7 & 1) == 0)) {
          iVar10 = -1;
          goto LAB_7101f34dc8;
        }
        FUN_71024076d0(local_90,0x151ca6c028);
        if (local_80 == 0) {
          iVar10 = -1;
        }
        else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
          piVar13 = (int *)(local_80 + 0x38);
          iVar10 = -1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar5) {
              *piVar13 = *piVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        else {
          iVar10 = -1;
        }
        goto LAB_7101f34dcc;
      }
      iVar10 = 0;
    }
    iVar10 = iVar10 + iVar2;
    lVar9 = *(long *)(*(long *)(param_1 + 0x198) + 0x180);
    lVar3 = *(long *)(*(long *)(param_1 + 0x198) + 0x188);
    *(int *)(param_1 + 0x608) = iVar2;
    iVar11 = (int)((ulong)(lVar3 - lVar9) >> 3);
    iVar2 = iVar10;
    if (iVar11 <= iVar10) {
      iVar2 = 0;
    }
    iVar11 = iVar11 + -1;
    if (-1 < iVar10) {
      iVar11 = iVar2;
    }
    FUN_7103771a80((long *)(param_1 + 0x198),iVar11,0);
LAB_7101f34e0c:
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710436cc40);
  }
  else {
    if (*(int *)(*plVar1 + 0x254) != 0) {
      uVar7 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x78))();
      if ((uVar7 & 1) != 0) {
        (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),0);
      }
      lVar9 = **(long **)(param_1 + 0x130);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
      }
      goto LAB_7101f34e0c;
    }
    if (*(int *)(param_1 + 0x600) != 0) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710433aa5c);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710439dd06);
    }
    uVar7 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x78))();
    if ((uVar7 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),1);
      lVar9 = **(long **)(param_1 + 0x130);
      if (lVar9 != 0) {
        *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
      }
    }
    iVar10 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x25c);
    if (iVar10 != -1) {
      if (iVar10 == 1) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar7 & 1) != 0)) {
          FUN_71024076d0(local_90,0x10c0b65170);
          if (local_80 == 0) {
            iVar10 = 1;
          }
          else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
            piVar13 = (int *)(local_80 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = *piVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              iVar10 = 1;
            } while (cVar4 != '\0');
          }
          else {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = 1;
LAB_7101f34d18:
          local_58 = 0;
          uStack_60 = 0;
          local_68 = 0xffffffffffffffff;
          local_78 = 0x87650000000000;
          local_90[0] = 0;
        }
LAB_7101f34d1c:
        local_88 = &PTR_FUN_7104f73d50;
        local_80 = 0;
        local_70 = 0;
      }
      else {
        if (iVar10 == 0) {
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') ||
             (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                     (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                     param_8), (uVar7 & 1) == 0)) {
            iVar10 = -1;
            goto LAB_7101f34d18;
          }
          FUN_71024076d0(local_90,0x10c0b65170);
          if (local_80 == 0) {
            iVar10 = -1;
          }
          else if ((DAT_7106dd53a8 == '\x01') && ((int)local_78 == DAT_7106dd53ac)) {
            piVar13 = (int *)(local_80 + 0x38);
            iVar10 = -1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar5) {
                *piVar13 = *piVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          else {
            iVar10 = -1;
          }
          goto LAB_7101f34d1c;
        }
        iVar10 = 0;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x180);
      lVar3 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x188);
      iVar10 = *(int *)(param_1 + 0x5fc) + iVar10;
      *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x5fc);
      iVar11 = (int)((ulong)(lVar3 - lVar9) >> 3);
      iVar2 = iVar10;
      if (iVar11 <= iVar10) {
        iVar2 = 0;
      }
      iVar11 = iVar11 + -1;
      if (-1 < iVar10) {
        iVar11 = iVar2;
      }
      *(int *)(param_1 + 0x5fc) = iVar11;
    }
  }
  lVar9 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x178) + 0x600);
  if (*(char *)(lVar9 + 0x4aa) == '\0') {
LAB_7101f34e50:
    if (*(int *)(*plVar1 + 0x25c) == 1) {
      if (0x12 < *(uint *)(param_1 + 0xf4)) {
LAB_7101f3502c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar9 = param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4;
      uVar12 = 4;
    }
    else {
      if (*(int *)(*plVar1 + 0x25c) != 0) goto LAB_7101f34fb4;
      if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_7101f3502c;
      lVar9 = param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4;
      uVar12 = 3;
    }
  }
  else {
    if ((*(byte *)(lVar9 + 0x1b4) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar9 + 0x1ac) >> 1 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x5f8) = 1;
        if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_7101f3502c;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 1;
        goto LAB_7101f34fb4;
      }
      goto LAB_7101f34e50;
    }
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8), (uVar7 & 1) != 0)) {
      FUN_71024076d0(local_d0,0xf57a523f5);
      if (((local_c0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b8 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_c0 + 0x38);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar5) {
            *piVar13 = *piVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      local_b8 = 0x87650000000000;
      local_a8 = 0xffffffffffffffff;
      uStack_a0 = 0;
      local_d0[0] = 0;
      local_98 = 0;
    }
    local_c8 = &PTR_FUN_7104f73d50;
    local_c0 = 0;
    local_b0 = 0;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x178),0);
    if (0x11 < *(int *)(param_1 + 0xf4)) goto LAB_7101f34fb4;
    uVar6 = *(int *)(param_1 + 0xf4) + 1;
    *(uint *)(param_1 + 0xf4) = uVar6;
    if (0x12 < uVar6) goto LAB_7101f3502c;
    lVar9 = param_1 + (long)(int)uVar6 * 4;
    uVar12 = 6;
  }
  *(undefined4 *)(lVar9 + 0xa8) = uVar12;
LAB_7101f34fb4:
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x254);
  return;
}

