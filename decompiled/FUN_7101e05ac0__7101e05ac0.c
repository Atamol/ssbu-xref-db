// addr:      7101e05ac0
// offset:    0x1e05ac0
// name:      FUN_7101e05ac0
// mangled:   
// signature: undefined __cdecl FUN_7101e05ac0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e05ac0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined4 local_c0 [2];
  undefined **local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x4c4) != 0) {
    plVar4 = *(long **)(param_1 + 0x520);
    if (*(int *)((long)plVar4 + 0x254) != 2) {
      if (*(int *)((long)plVar4 + 0x25c) != 1) {
        lVar8 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x4d0) + 0x600);
        if (((*(char *)(lVar8 + 0x4aa) == '\0') || ((*(byte *)(lVar8 + 0x1ac) >> 1 & 1) == 0)) &&
           ((char)plVar4[0x50] == '\0')) {
          return;
        }
        *(undefined8 *)(param_1 + 0x584) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x58c) = 0xffffffff;
        FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x4d0),0);
        if (*(uint *)(param_1 + 0x4bc) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x4bc) * 4 + 0x470) = 3;
          *(undefined1 *)(param_1 + 0x59a) = 1;
          return;
        }
        goto LAB_7101e06274;
      }
      *(undefined1 *)(param_1 + 0x59c) = 0;
      if (0x11 < *(int *)(param_1 + 0x4bc)) {
        return;
      }
      uVar1 = *(int *)(param_1 + 0x4bc) + 1;
      *(uint *)(param_1 + 0x4bc) = uVar1;
      if (0x12 < uVar1) goto LAB_7101e06274;
      uVar11 = 5;
      goto LAB_7101e0625c;
    }
    lVar8 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x4d0) + 0x600);
    if (*(char *)(lVar8 + 0x4aa) == '\0') {
      return;
    }
    if ((*(byte *)(lVar8 + 0x198) >> 1 & 1) == 0) {
      if (((*(byte *)(lVar8 + 0x19c) >> 1 & 1) != 0) || ((*(byte *)(lVar8 + 0x19c) >> 3 & 1) != 0))
      {
        if ((0 < *(int *)(param_1 + 0x590)) &&
           (*(char *)(*(long *)(param_1 + 0x528) + 0x315) != '\0')) {
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1336ca7cd7,
                                     (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                     param_8), (uVar6 & 1) != 0)) {
            FUN_71024076d0(local_c0,0x1336ca7cd7);
            if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a8 == DAT_7106dd53ac)
               ) {
              piVar10 = (int *)(local_b0 + 0x38);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar3) {
                  *piVar10 = *piVar10 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          else {
            local_a8 = 0x87650000000000;
            local_98 = 0xffffffffffffffff;
            uStack_90 = 0;
            local_c0[0] = 0;
            local_88 = 0;
          }
          local_b8 = &PTR_FUN_7104f73d50;
          local_b0 = 0;
          local_a0 = 0;
        }
        iVar7 = 0;
        goto LAB_7101e06218;
      }
      if (((*(byte *)(lVar8 + 0x1a4) >> 1 & 1) == 0) && ((*(byte *)(lVar8 + 0x1a0) >> 1 & 1) == 0))
      {
        return;
      }
    }
    else {
      iVar7 = (uint)*(byte *)(param_1 + 0x360) +
              (int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3) + -1;
      if ((iVar7 != 0) && (*(char *)(param_1 + 0x59d) == '\0')) {
        FUN_7103776640(&local_40,param_1 + 0x510,(byte ****)"set_parts_det_key",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar6 = local_38;
        if ((*(long *)(local_38 + 8) != 0) &&
           (lVar8 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar8 != 0)) {
          *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 1;
        }
        local_40 = &PTR_FUN_710523d988;
        local_38 = 0;
        if (uVar6 != 0) {
          uVar5 = *(ulong *)(uVar6 + 0x18);
          *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar6 + 0x18) = 0;
          if (uVar5 != 0) {
            FUN_710392eb40(uVar5);
          }
          FUN_710392eb40(uVar6);
        }
      }
      if ((*(int *)(param_1 + 0x590) == 0) &&
         (*(char *)(*(long *)(param_1 + 0x528) + 0x315) != '\0')) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1336ca7cd7,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar6 & 1) != 0)) {
          FUN_71024076d0(local_80,0x1336ca7cd7);
          if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac))
          {
            piVar10 = (int *)(local_70 + 0x38);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
              if (bVar3) {
                *piVar10 = *piVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          local_68 = 0x87650000000000;
          local_58 = 0xffffffffffffffff;
          uStack_50 = 0;
          local_80[0] = 0;
          local_48 = 0;
        }
        local_78 = &PTR_FUN_7104f73d50;
        local_70 = 0;
        local_60 = 0;
      }
LAB_7101e06218:
      FUN_7103783c10((long *)(param_1 + 0x528),iVar7,0,1,param_5,param_6,param_7,param_8);
      plVar4 = *(long **)(param_1 + 0x520);
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,0);
    (**(code **)(**(long **)(param_1 + 0x520) + 0x70))(*(long **)(param_1 + 0x520),0);
    uVar1 = *(uint *)(param_1 + 0x4bc);
    if (0x12 < uVar1) {
LAB_7101e06274:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = 2;
LAB_7101e0625c:
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x470) = uVar11;
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x528) + 0x60))(*(long **)(param_1 + 0x528),0);
  (**(code **)(**(long **)(param_1 + 0x528) + 0x70))(*(long **)(param_1 + 0x528),0);
  plVar4 = (long *)(param_1 + 0x520);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x520) + 0x68))();
  if ((uVar6 & 1) == 0) {
    (**(code **)(*(long *)*plVar4 + 0x60))((long *)*plVar4,1);
  }
  uVar6 = (**(code **)(*(long *)*plVar4 + 0x78))();
  if ((uVar6 & 1) == 0) {
    (**(code **)(*(long *)*plVar4 + 0x70))((long *)*plVar4,1);
  }
  if (*(char *)(param_1 + 0x5a0) == '\0') {
    param_3 = 0;
    FUN_7103771a80(plVar4,1,0);
    if (*(char *)(param_1 + 0x59d) != '\0') goto LAB_7101e05cbc;
LAB_7101e05ccc:
    lVar8 = *(long *)(*plVar4 + 0x1b8);
    if (lVar8 == 0) goto LAB_7101e06080;
    lVar9 = *plVar4 + 0x1b8;
    lVar12 = lVar9;
    lVar13 = lVar8;
    do {
      if (1 < *(int *)(lVar13 + 0x20)) {
        lVar12 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 2) * 8);
    } while (lVar13 != 0);
    if (((lVar12 != lVar9) && (*(int *)(lVar12 + 0x20) < 3)) &&
       (plVar14 = *(long **)(lVar12 + 0x28), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
      param_3 = 0;
      (**(code **)(*plVar14 + 0x388))(plVar14,0);
      lVar9 = *plVar4 + 0x1b8;
      lVar8 = *(long *)(*plVar4 + 0x1b8);
    }
    lVar12 = lVar9;
    lVar13 = lVar8;
    if (lVar8 == 0) goto LAB_7101e06080;
    do {
      if (0 < *(int *)(lVar13 + 0x20)) {
        lVar12 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
    } while (lVar13 != 0);
    if (((lVar12 != lVar9) && (*(int *)(lVar12 + 0x20) < 2)) &&
       (plVar14 = *(long **)(lVar12 + 0x28), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x1f8))(plVar14,1);
      param_3 = 0;
      (**(code **)(*plVar14 + 0x388))(plVar14,0);
      lVar9 = *plVar4 + 0x1b8;
      lVar8 = *(long *)(*plVar4 + 0x1b8);
    }
    lVar12 = lVar9;
    if (lVar8 == 0) goto LAB_7101e06080;
    do {
      if (2 < *(int *)(lVar8 + 0x20)) {
        lVar12 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 3) * 8);
    } while (lVar8 != 0);
  }
  else {
    *(undefined1 *)(param_1 + 0x5a0) = 0;
    if (*(int *)(*(long *)(param_1 + 0x520) + 0x254) != 3) {
      param_3 = 0;
      FUN_7103771a80(plVar4,3,0);
    }
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x4d0),1);
    if (*(char *)(param_1 + 0x59d) == '\0') goto LAB_7101e05ccc;
LAB_7101e05cbc:
    if ((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18)) >> 3) != 0)
    goto LAB_7101e05ccc;
    lVar8 = *(long *)(*plVar4 + 0x1b8);
    if (lVar8 == 0) goto LAB_7101e06080;
    lVar9 = *plVar4 + 0x1b8;
    lVar12 = lVar9;
    lVar13 = lVar8;
    do {
      if (1 < *(int *)(lVar13 + 0x20)) {
        lVar12 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 2) * 8);
    } while (lVar13 != 0);
    if (((lVar12 != lVar9) && (*(int *)(lVar12 + 0x20) < 3)) &&
       (plVar14 = *(long **)(lVar12 + 0x28), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
      param_3 = 0;
      (**(code **)(*plVar14 + 0x388))(plVar14,1);
      lVar9 = *plVar4 + 0x1b8;
      lVar8 = *(long *)(*plVar4 + 0x1b8);
    }
    lVar12 = lVar9;
    lVar13 = lVar8;
    if (lVar8 == 0) goto LAB_7101e06080;
    do {
      if (0 < *(int *)(lVar13 + 0x20)) {
        lVar12 = lVar13;
      }
      lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
    } while (lVar13 != 0);
    if (((lVar12 != lVar9) && (*(int *)(lVar12 + 0x20) < 2)) &&
       (plVar14 = *(long **)(lVar12 + 0x28), plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x1f8))(plVar14,0);
      param_3 = 0;
      (**(code **)(*plVar14 + 0x388))(plVar14,1);
      lVar9 = *plVar4 + 0x1b8;
      lVar8 = *(long *)(*plVar4 + 0x1b8);
    }
    lVar12 = lVar9;
    if (lVar8 == 0) goto LAB_7101e06080;
    do {
      if (2 < *(int *)(lVar8 + 0x20)) {
        lVar12 = lVar8;
      }
      lVar8 = *(long *)(lVar8 + (ulong)(*(int *)(lVar8 + 0x20) < 3) * 8);
    } while (lVar8 != 0);
  }
  if (((lVar12 != lVar9) && (*(int *)(lVar12 + 0x20) < 4)) &&
     (plVar4 = *(long **)(lVar12 + 0x28), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x1f8))(plVar4,1);
    param_3 = 0;
    (**(code **)(*plVar4 + 0x388))(plVar4,0);
  }
LAB_7101e06080:
  FUN_7103776640(&local_40,param_1 + 0x510,(byte ****)"set_parts_det_key",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_38;
  if ((*(long *)(local_38 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar6 != 0) {
    uVar5 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

