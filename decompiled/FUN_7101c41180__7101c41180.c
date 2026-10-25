// addr:      7101c41180
// offset:    0x1c41180
// name:      FUN_7101c41180
// mangled:   
// signature: undefined __cdecl FUN_7101c41180(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101c4150c) */

void FUN_7101c41180(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  int local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar17 = **(long **)(param_1 + 0x118);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_7103776910(&local_90,lVar17 + 8,(long ****)"set_txt_help_00",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_90,"mnu_vr_calibration_0",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    ppuVar9 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (undefined **)0x0;
    if (ppuVar9 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar9);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x71044330bf);
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x71043beebf);
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x71044331c3);
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x710437c501);
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x71042f8335);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x118),1);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(*(long **)(param_1 + 0x120),0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13798e0f52,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar10 & 1) == 0) goto LAB_7101c41344;
      FUN_71024076d0((undefined4 *)&local_90,0x13798e0f52);
      *(undefined4 *)(param_1 + 0x128) = local_90._0_4_;
      if (local_80 == 0) goto LAB_7101c4136c;
      if (*(int *)(param_1 + 0x144) == 0x876500) {
        if (*(int *)(param_1 + 0x140) == DAT_7106dd53ac) {
          if ((*(long *)(param_1 + 0x138) != 0) && (DAT_7106dd53a8 == '\x01')) {
            piVar13 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
            do {
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar6) {
                *piVar13 = *piVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          *(undefined8 *)(param_1 + 0x138) = 0;
          *(undefined1 *)(param_1 + 0x148) = 0;
        }
        else {
          *(int *)(param_1 + 0x140) = DAT_7106dd53ac;
        }
        *(long *)(param_1 + 0x138) = local_80;
        piVar13 = (int *)(local_80 + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_7101c413b4;
      }
    }
    else {
LAB_7101c41344:
      local_78 = 0;
      uStack_74 = 0x876500;
      local_80 = 0;
      local_70 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      *(undefined4 *)(param_1 + 0x128) = 0;
LAB_7101c4136c:
      if (((*(long *)(param_1 + 0x138) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)) {
        piVar13 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x138) = 0;
LAB_7101c413b4:
      *(undefined1 *)(param_1 + 0x148) = 0;
    }
    *(undefined8 *)(param_1 + 0x150) = local_68;
    *(undefined8 *)(param_1 + 0x158) = uStack_60;
    *(undefined8 *)(param_1 + 0x160) = local_58;
    local_88 = &PTR_FUN_7104f73d50;
    if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_78 == DAT_7106dd53ac)) {
      piVar13 = (int *)(local_80 + 0x38);
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar6) {
          *piVar13 = *piVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_80 = 0;
  }
  iVar14 = *(int *)(param_1 + 0x1f0);
  cVar4 = *(char *)(*(long *)(DAT_71053398e0 + 8) + 0x81);
  *(int *)(param_1 + 0x1f0) = iVar14 + 1;
  iVar11 = *(int *)(param_1 + 500);
  if (cVar4 == '\0' && iVar14 < *(int *)(param_1 + 0x1ec)) {
    if (0 < iVar11) {
      iVar14 = -1;
      goto LAB_7101c41460;
    }
  }
  else {
    iVar14 = 1;
LAB_7101c41460:
    iVar11 = iVar11 + iVar14;
    *(int *)(param_1 + 500) = iVar11;
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    uVar5 = (iVar11 * 100) / *(int *)(param_1 + 0x1e8);
  }
  if (99 < (int)uVar5) {
    uVar5 = 100;
  }
  fVar20 = (float)(int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
  FUN_7103778630((ulong)(uint)fVar20,*(long *)(lVar17 + 0x10),0x7104347f07);
  if ((((*(int *)(param_1 + 400) != -1) || (*(int *)(param_1 + 0x194) != -1)) &&
      (*(long **)(param_1 + 0x178) != (long *)0x0)) &&
     ((uVar10 = (**(code **)(**(long **)(param_1 + 0x178) + 0x20))(), (uVar10 & 1) == 0 &&
      (*(char *)(*DAT_710593b438 + 1) != '\0')))) {
    fVar19 = (fVar20 * 1200.0) / 100.0;
    fVar20 = -9000.0;
    if (-9000.0 <= fVar19) {
      fVar20 = fVar19;
    }
    if (((*(int *)(param_1 + 0x184) == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
       ((*(int *)(param_1 + 0x180) == DAT_7106dd53ac &&
        (((*(char *)(param_1 + 0x188) == '\0' && (*(long **)(param_1 + 0x178) != (long *)0x0)) &&
         (uVar10 = (**(code **)(**(long **)(param_1 + 0x178) + 0x20))(), (uVar10 & 1) == 0)))))) {
      lVar18 = *(long *)(param_1 + 0x178);
      std::recursive_mutex::lock();
      lVar8 = DAT_7106dd5408;
      uVar5 = *(uint *)(DAT_7106dd5408 + 0x18);
      uVar3 = *(uint *)(DAT_7106dd5408 + 0x14);
      uVar16 = (ulong)uVar3;
      uVar10 = (ulong)(uVar3 + 0x20) + 8;
      if (uVar3 < uVar5) {
        if (uVar10 < uVar5) goto LAB_7101c4201c;
      }
      else {
        if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar10) {
          if (uVar5 < 0x29) goto LAB_7101c42074;
          *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar16) = 0x64716e62;
          uVar16 = 0;
        }
LAB_7101c4201c:
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 8) + uVar16);
        *(float *)(puVar1 + 4) = fVar20;
        *puVar1 = 0x2070716e62;
        puVar1[1] = 0x863746970;
        puVar1[2] = lVar18;
        uVar3 = *(uint *)(lVar8 + 0x10);
        uVar5 = (int)uVar16 + 0x28;
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar5 / uVar3;
        }
        *(uint *)(lVar8 + 0x14) = uVar5 - uVar7 * uVar3;
        if (lVar18 != 0) {
          piVar13 = (int *)(lVar18 + 0x3c);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar6) {
              *piVar13 = *piVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
LAB_7101c42074:
      std::recursive_mutex::unlock();
    }
    *(int *)(param_1 + 0x1a4) = (int)fVar20;
  }
  puVar2 = (undefined4 *)(param_1 + 0x168);
  piVar13 = (int *)(param_1 + 400);
  FUN_71037780e0(&local_a0,lVar17 + 8,(long ****)"gg_loop",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  iVar11 = *(int *)(param_1 + 500);
  if (iVar11 == 6) {
    if ((*(int *)(param_1 + 0x150) != -1) || (*(int *)(param_1 + 0x154) != -1)) {
      FUN_710373b540(param_1 + 0x128,0);
      *(undefined4 *)(param_1 + 0x128) = 0;
      FUN_71039602c0(param_1 + 0x130);
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 0x138) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)))) {
        piVar12 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = *piVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0x876500;
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    if ((*piVar13 == -1) && (*(int *)(param_1 + 0x194) == -1)) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x154ce576ba,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar10 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_90,0x154ce576ba);
        *puVar2 = local_90._0_4_;
        if (local_80 == 0) goto LAB_7101c41824;
        if (*(int *)(param_1 + 0x184) == 0x876500) {
          if (*(int *)(param_1 + 0x180) == DAT_7106dd53ac) {
            if ((*(long *)(param_1 + 0x178) != 0) && (DAT_7106dd53a8 == '\x01')) {
              piVar12 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar6) {
                  *piVar12 = *piVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            *(undefined8 *)(param_1 + 0x178) = 0;
            *(undefined1 *)(param_1 + 0x188) = 0;
          }
          else {
            *(int *)(param_1 + 0x180) = DAT_7106dd53ac;
          }
          *(long *)(param_1 + 0x178) = local_80;
          piVar12 = (int *)(local_80 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_7101c4186c;
        }
        *(undefined8 *)piVar13 = local_68;
        *(undefined8 *)(param_1 + 0x198) = uStack_60;
        *(undefined8 *)(param_1 + 0x1a0) = local_58;
LAB_7101c41894:
        if ((DAT_7106dd53a8 == '\x01') && (local_78 == DAT_7106dd53ac)) {
          piVar12 = (int *)(local_80 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_78 = 0;
        uStack_74 = 0x876500;
        local_80 = 0;
        local_70 = 0;
        local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
        local_58 = 0;
        local_68 = 0xffffffffffffffff;
        uStack_60 = 0;
        *puVar2 = 0;
LAB_7101c41824:
        if (((*(long *)(param_1 + 0x178) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x180) == DAT_7106dd53ac)) {
          piVar12 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined8 *)(param_1 + 0x178) = 0;
LAB_7101c4186c:
        *(undefined1 *)(param_1 + 0x188) = 0;
        *(undefined8 *)piVar13 = local_68;
        *(undefined8 *)(param_1 + 0x198) = uStack_60;
        *(undefined8 *)(param_1 + 0x1a0) = local_58;
        if (local_80 != 0) goto LAB_7101c41894;
      }
      local_88 = &PTR_FUN_7104f73d50;
      local_80 = 0;
      if (((*(long **)(param_1 + 0x178) != (long *)0x0) &&
          (uVar10 = (**(code **)(**(long **)(param_1 + 0x178) + 0x20))(), (uVar10 & 1) == 0)) &&
         (*(char *)(*DAT_710593b438 + 1) != '\0')) {
        if ((((*(int *)(param_1 + 0x184) == 0x876500) && (DAT_7106dd53a8 == '\x01')) &&
            ((*(int *)(param_1 + 0x180) == DAT_7106dd53ac &&
             ((*(char *)(param_1 + 0x188) == '\0' && (*(long **)(param_1 + 0x178) != (long *)0x0))))
            )) && (uVar10 = (**(code **)(**(long **)(param_1 + 0x178) + 0x20))(), (uVar10 & 1) == 0)
           ) {
          lVar18 = *(long *)(param_1 + 0x178);
          std::recursive_mutex::lock();
          lVar8 = DAT_7106dd5408;
          uVar5 = *(uint *)(DAT_7106dd5408 + 0x18);
          uVar3 = *(uint *)(DAT_7106dd5408 + 0x14);
          uVar16 = (ulong)uVar3;
          uVar10 = (ulong)(uVar3 + 0x20) + 8;
          if (uVar3 < uVar5) {
            if (uVar10 < uVar5) goto LAB_7101c42124;
          }
          else {
            if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar10) {
              if (uVar5 < 0x29) goto LAB_7101c4217c;
              *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar16) = 0x64716e62;
              uVar16 = 0;
            }
LAB_7101c42124:
            puVar1 = (undefined8 *)(*(long *)(lVar8 + 8) + uVar16);
            *(undefined4 *)(puVar1 + 4) = 0;
            *puVar1 = 0x2070716e62;
            puVar1[1] = 0x863746970;
            puVar1[2] = lVar18;
            uVar3 = *(uint *)(lVar8 + 0x10);
            uVar5 = (int)uVar16 + 0x28;
            uVar7 = 0;
            if (uVar3 != 0) {
              uVar7 = uVar5 / uVar3;
            }
            *(uint *)(lVar8 + 0x14) = uVar5 - uVar7 * uVar3;
            if (lVar18 != 0) {
              piVar12 = (int *)(lVar18 + 0x3c);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar6) {
                  *piVar12 = *piVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
LAB_7101c4217c:
          std::recursive_mutex::unlock();
        }
        *(undefined4 *)(param_1 + 0x1a4) = 0;
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x71044223a7);
  }
  else if (iVar11 < 6) {
    if ((*(long **)(local_98 + 8) == (long *)0x0) ||
       (uVar10 = (**(code **)(**(long **)(local_98 + 8) + 0x130))(), (uVar10 & 1) == 0)) {
      FUN_710377aee0(0x3f800000,(long)&local_a0);
    }
    if ((*(int *)(param_1 + 0x150) == -1) && (*(int *)(param_1 + 0x154) == -1)) {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13798e0f52,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar10 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_90,0x13798e0f52);
        *(undefined4 *)(param_1 + 0x128) = local_90._0_4_;
        if (local_80 == 0) goto LAB_7101c41964;
        if (*(int *)(param_1 + 0x144) == 0x876500) {
          if (*(int *)(param_1 + 0x140) == DAT_7106dd53ac) {
            if ((*(long *)(param_1 + 0x138) != 0) && (DAT_7106dd53a8 == '\x01')) {
              piVar12 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
              do {
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar6) {
                  *piVar12 = *piVar12 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            *(undefined8 *)(param_1 + 0x138) = 0;
            *(undefined1 *)(param_1 + 0x148) = 0;
          }
          else {
            *(int *)(param_1 + 0x140) = DAT_7106dd53ac;
          }
          *(long *)(param_1 + 0x138) = local_80;
          piVar12 = (int *)(local_80 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_7101c419ac;
        }
        *(undefined8 *)(param_1 + 0x150) = local_68;
        *(undefined8 *)(param_1 + 0x158) = uStack_60;
        *(undefined8 *)(param_1 + 0x160) = local_58;
LAB_7101c419d4:
        if ((DAT_7106dd53a8 == '\x01') && (local_78 == DAT_7106dd53ac)) {
          piVar12 = (int *)(local_80 + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_78 = 0;
        uStack_74 = 0x876500;
        local_80 = 0;
        local_70 = 0;
        local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
        local_58 = 0;
        local_68 = 0xffffffffffffffff;
        uStack_60 = 0;
        *(undefined4 *)(param_1 + 0x128) = 0;
LAB_7101c41964:
        if (((*(long *)(param_1 + 0x138) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)) {
          piVar12 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar6) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined8 *)(param_1 + 0x138) = 0;
LAB_7101c419ac:
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x150) = local_68;
        *(undefined8 *)(param_1 + 0x158) = uStack_60;
        *(undefined8 *)(param_1 + 0x160) = local_58;
        if (local_80 != 0) goto LAB_7101c419d4;
      }
      local_88 = &PTR_FUN_7104f73d50;
      local_80 = 0;
    }
    if ((*piVar13 != -1) || (*(int *)(param_1 + 0x194) != -1)) {
      FUN_710373b540((long)puVar2,0);
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_71039602c0(param_1 + 0x170);
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 0x178) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x180) == DAT_7106dd53ac)))) {
        piVar12 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = *piVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0x876500;
      *(undefined1 *)(param_1 + 0x188) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1e8) < *(int *)(param_1 + 500)) {
    if ((*(int *)(param_1 + 0x150) != -1) || (*(int *)(param_1 + 0x154) != -1)) {
      FUN_710373b540(param_1 + 0x128,0);
      *(undefined4 *)(param_1 + 0x128) = 0;
      FUN_71039602c0(param_1 + 0x130);
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 0x138) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)))) {
        piVar12 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = *piVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0x876500;
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    if ((*piVar13 != -1) || (*(int *)(param_1 + 0x194) != -1)) {
      FUN_710373b540((long)puVar2,0);
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_71039602c0(param_1 + 0x170);
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 0x178) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x180) == DAT_7106dd53ac)))) {
        piVar13 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0x876500;
      *(undefined1 *)(param_1 + 0x188) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x149f9e5609,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8), (uVar10 & 1) != 0)) {
      FUN_71024076d0(local_e0,0x149f9e5609);
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_c8 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_d0 + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else {
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c4 = 0x876500;
      local_e0[0] = 0;
      local_a8 = 0;
    }
    local_d8 = &PTR_FUN_7104f73d50;
    local_d0 = 0;
    local_c0 = 0;
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x7104291c56);
    FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x10),0x710426ffa7);
    *(undefined4 *)(param_1 + 0x1f8) = 1;
    uVar5 = *(uint *)(param_1 + 0x104);
    if (0x12 < uVar5) {
LAB_7101c42188:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar15 = 5;
  }
  else {
    lVar17 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x118) + 0x600);
    if ((*(char *)(lVar17 + 0x4aa) == '\0') || ((*(byte *)(lVar17 + 0x1ac) >> 1 & 1) == 0))
    goto LAB_7101c41ed8;
    if ((*(int *)(param_1 + 0x150) != -1) || (*(int *)(param_1 + 0x154) != -1)) {
      FUN_710373b540(param_1 + 0x128,0);
      *(undefined4 *)(param_1 + 0x128) = 0;
      FUN_71039602c0(param_1 + 0x130);
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d50;
      if (((*(long *)(param_1 + 0x138) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0x140) == DAT_7106dd53ac)) {
        piVar12 = (int *)(*(long *)(param_1 + 0x138) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar6) {
            *piVar12 = *piVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x144) = 0x876500;
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
      *(undefined ***)(param_1 + 0x130) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x158) = 0;
    }
    if ((*piVar13 != -1) || (*(int *)(param_1 + 0x194) != -1)) {
      FUN_710373b540((long)puVar2,0);
      *(undefined4 *)(param_1 + 0x168) = 0;
      FUN_71039602c0(param_1 + 0x170);
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d50;
      if ((*(long *)(param_1 + 0x178) != 0) &&
         ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x180) == DAT_7106dd53ac)))) {
        piVar13 = (int *)(*(long *)(param_1 + 0x178) + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar6) {
            *piVar13 = *piVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined4 *)(param_1 + 0x184) = 0x876500;
      *(undefined1 *)(param_1 + 0x188) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      *(undefined ***)(param_1 + 0x170) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 400) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    *(undefined4 *)(param_1 + 0x1f8) = 2;
    uVar5 = *(uint *)(param_1 + 0x104);
    if (0x12 < uVar5) goto LAB_7101c42188;
    uVar15 = 7;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar5 * 4 + 0xb8) = uVar15;
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x118),0);
LAB_7101c41ed8:
  uVar10 = local_98;
  local_a0 = &PTR_FUN_710523d9e8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  return;
}

