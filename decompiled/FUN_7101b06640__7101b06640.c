// addr:      7101b06640
// offset:    0x1b06640
// name:      FUN_7101b06640
// mangled:   
// signature: undefined __cdecl FUN_7101b06640(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b06640(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar19 = (long *)(param_1 + 0x438);
  if (*(int *)(param_1 + 0x264) == 0) {
    lVar14 = param_1 + 0x3d0;
    FUN_71037780e0(&local_80,lVar14,(long ****)"in_standard_score",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar5 = local_78;
    puVar18 = *(undefined8 **)(param_1 + 0x440);
    if (puVar18 < *(undefined8 **)(param_1 + 0x448)) {
      *puVar18 = &PTR_FUN_710523d9e8;
      puVar18[1] = 0;
      if ((undefined ***)puVar18 != &local_80) {
        local_78 = (undefined **)0x0;
        uVar6 = puVar18[1];
        puVar18[1] = ppuVar5;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
      }
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar19,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_71037780e0(&local_80,lVar14,(long ****)"countup_score",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar5 = local_78;
    puVar18 = *(undefined8 **)(param_1 + 0x440);
    if (puVar18 < *(undefined8 **)(param_1 + 0x448)) {
      *puVar18 = &PTR_FUN_710523d9e8;
      puVar18[1] = 0;
      if ((undefined ***)puVar18 != &local_80) {
        local_78 = (undefined **)0x0;
        uVar6 = puVar18[1];
        puVar18[1] = ppuVar5;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
      }
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar19,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_71037780e0(&local_80,lVar14,(long ****)"countfinish_score",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar5 = local_78;
    puVar18 = *(undefined8 **)(param_1 + 0x440);
    if (puVar18 < *(undefined8 **)(param_1 + 0x448)) {
      *puVar18 = &PTR_FUN_710523d9e8;
      puVar18[1] = 0;
      if ((undefined ***)puVar18 != &local_80) {
        local_78 = (undefined **)0x0;
        uVar6 = puVar18[1];
        puVar18[1] = ppuVar5;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
      }
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar19,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    ppuVar5 = local_78;
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar5);
    }
    FUN_710377aee0(0x3f800000,*plVar19);
  }
  else {
    puVar16 = *(undefined8 **)(param_1 + 0x440);
    puVar18 = *(undefined8 **)(param_1 + 0x438);
    if ((long)puVar16 - (long)puVar18 == 0x20) {
      uVar8 = *(uint *)(param_1 + 0x3a0);
      uVar3 = uVar8 - *(int *)(param_1 + 0x39c);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (*(uint *)(param_1 + 0x498) != 0) {
          uVar4 = uVar3 / *(uint *)(param_1 + 0x498);
        }
        uVar4 = *(int *)(param_1 + 0x49c) + uVar4;
        *(uint *)(param_1 + 0x49c) = uVar4;
        lVar14 = 0x3a0;
        if (uVar4 <= uVar8) {
          lVar14 = 0x49c;
        }
        *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + lVar14);
        FUN_7103776910(&local_80,param_1 + 0x3d0,(long ****)"set_txt_score",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        param_3 = (long ****)(ulong)*(uint *)(param_1 + 0x49c);
        FUN_710377a310((long)&local_80,1);
        ppuVar5 = local_78;
        local_80 = &PTR_FUN_710523d9a8;
        local_78 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar5);
        }
        uVar8 = *(uint *)(param_1 + 0x3a0);
      }
      if (*(uint *)(param_1 + 0x49c) != uVar8) goto LAB_7101b06d28;
      puVar18 = (undefined8 *)*plVar19;
      plVar9 = (long *)puVar18[1];
      plVar17 = (long *)plVar9[1];
      if (plVar17 != (long *)0x0) {
        if ((char)plVar9[2] != '\0') {
          plVar20 = *(long **)(*plVar9 + 0x80);
          plVar9 = (long *)(*plVar9 + 0x88);
          if (plVar20 != plVar9) {
            do {
              while( true ) {
                uVar6 = (**(code **)(*(long *)plVar20[0xd] + 0x148))();
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = (**(code **)(*plVar17 + 0x120))(plVar17,plVar20[0xd]), (uVar6 & 1) != 0)
                   ) {
                  (**(code **)(*(long *)plVar20[0xd] + 0x178))();
                  (**(code **)(*(long *)plVar20[0xd] + 0x140))((long *)plVar20[0xd],0);
                }
                plVar13 = (long *)plVar20[1];
                if ((long *)plVar20[1] == (long *)0x0) break;
                do {
                  plVar20 = plVar13;
                  plVar13 = (long *)*plVar20;
                } while ((long *)*plVar20 != (long *)0x0);
LAB_7101b06aa4:
                if (plVar20 == plVar9) goto LAB_7101b06abc;
              }
              plVar13 = plVar20 + 2;
              plVar12 = (long *)*plVar13;
              if ((long *)*plVar12 != plVar20) {
                do {
                  lVar14 = *plVar13;
                  plVar13 = (long *)(lVar14 + 0x10);
                  plVar20 = (long *)*plVar13;
                } while (*plVar20 != lVar14);
                goto LAB_7101b06aa4;
              }
              plVar20 = plVar12;
            } while (plVar12 != plVar9);
LAB_7101b06abc:
            plVar17 = *(long **)(puVar18[1] + 8);
          }
        }
        (**(code **)(*plVar17 + 0x188))(plVar17);
        puVar18 = (undefined8 *)*plVar19;
      }
      puVar10 = *(undefined8 **)(param_1 + 0x440);
      puVar16 = puVar18 + 2;
      if (puVar16 == puVar10) {
LAB_7101b06b1c:
        do {
          puVar16 = puVar16 + -2;
          (**(code **)*puVar16)(puVar16);
        } while (puVar18 != puVar16);
      }
      else {
        do {
          uVar11 = puVar18[3];
          uVar6 = puVar18[1];
          puVar18[3] = 0;
          puVar18[1] = uVar11;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          puVar18 = puVar18 + 2;
        } while (puVar10 + -2 != puVar18);
        puVar16 = *(undefined8 **)(param_1 + 0x440);
        if (puVar16 != puVar18) goto LAB_7101b06b1c;
      }
      *(undefined8 **)(param_1 + 0x440) = puVar18;
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x438));
      puVar16 = *(undefined8 **)(param_1 + 0x438);
      puVar18 = *(undefined8 **)(param_1 + 0x440);
      while (puVar18 != puVar16) {
        puVar18 = puVar18 + -2;
        (**(code **)*puVar18)(puVar18);
      }
      *(undefined8 **)(param_1 + 0x440) = puVar16;
    }
    else {
      if (puVar18 == puVar16) {
        FUN_710373b7f0(param_1 + 0x4a0);
        FUN_7103776640(&local_80,param_1 + 0x3d0,(byte ****)"set_parts_num_value",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        ppuVar5 = local_78;
        FUN_7103778300(0x3f800000,(long)local_78,0x7104432d6a);
        local_80 = &PTR_FUN_710523d988;
        local_78 = (undefined **)0x0;
        if (ppuVar5 != (undefined **)0x0) {
          uVar6 = (ulong)ppuVar5[3];
          ppuVar5[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar5[3] = (undefined *)0x0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          FUN_710392eb40((ulong)ppuVar5);
        }
        if (0 < *(int *)(param_1 + 0x25c)) {
          *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + -1;
        }
        goto LAB_7101b06d28;
      }
      if (*(long **)(puVar18[1] + 8) != (long *)0x0) {
        uVar6 = (**(code **)(**(long **)(puVar18[1] + 8) + 0x138))();
        if ((uVar6 & 1) == 0) goto LAB_7101b06d28;
        puVar18 = *(undefined8 **)(param_1 + 0x438);
        puVar16 = *(undefined8 **)(param_1 + 0x440);
      }
      if (puVar18 + 2 == puVar16) {
LAB_7101b067d4:
        do {
          puVar16 = puVar16 + -2;
          (**(code **)*puVar16)(puVar16);
        } while (puVar18 != puVar16);
      }
      else {
        do {
          uVar11 = puVar18[3];
          uVar6 = puVar18[1];
          puVar18[3] = 0;
          puVar18[1] = uVar11;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          puVar18 = puVar18 + 2;
        } while (puVar16 + -2 != puVar18);
        puVar16 = *(undefined8 **)(param_1 + 0x440);
        if (puVar16 != puVar18) goto LAB_7101b067d4;
      }
      *(undefined8 **)(param_1 + 0x440) = puVar18;
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x438));
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (long ****)&DAT_00000004;
        uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x150fb240fc,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        if ((uVar6 & 1) == 0) goto LAB_7101b06bec;
        FUN_71024076d0((undefined4 *)&local_80,0x150fb240fc);
        *(undefined4 *)(param_1 + 0x4a0) = local_80._0_4_;
        if (local_70 == 0) goto LAB_7101b06c1c;
        if (*(int *)(param_1 + 0x4bc) == 0x876500) {
          if (*(int *)(param_1 + 0x4b8) == DAT_7106dd53ac) {
            if ((*(long *)(param_1 + 0x4b0) != 0) && (DAT_7106dd53a8 == '\x01')) {
              piVar15 = (int *)(*(long *)(param_1 + 0x4b0) + 0x38);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar2) {
                  *piVar15 = *piVar15 + -1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            *(undefined8 *)(param_1 + 0x4b0) = 0;
            *(undefined1 *)(param_1 + 0x4c0) = 0;
          }
          else {
            *(int *)(param_1 + 0x4b8) = DAT_7106dd53ac;
          }
          *(long *)(param_1 + 0x4b0) = local_70;
          piVar15 = (int *)(local_70 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar2) {
              *piVar15 = *piVar15 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          goto LAB_7101b06c64;
        }
      }
      else {
LAB_7101b06bec:
        local_60 = 0;
        local_70 = 0;
        local_68 = 0x87650000000000;
        local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
        local_48 = 0;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0;
        *(undefined4 *)(param_1 + 0x4a0) = 0;
LAB_7101b06c1c:
        if (((*(long *)(param_1 + 0x4b0) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x4b8) == DAT_7106dd53ac)) {
          piVar15 = (int *)(*(long *)(param_1 + 0x4b0) + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar2) {
              *piVar15 = *piVar15 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(undefined8 *)(param_1 + 0x4b0) = 0;
LAB_7101b06c64:
        *(undefined1 *)(param_1 + 0x4c0) = 0;
      }
      *(undefined8 *)(param_1 + 0x4c8) = local_58;
      *(undefined8 *)(param_1 + 0x4d8) = local_48;
      *(undefined8 *)(param_1 + 0x4d0) = uStack_50;
      local_78 = &PTR_FUN_7104f73d50;
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_68 == DAT_7106dd53ac)) {
        piVar15 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar2) {
            *piVar15 = *piVar15 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      local_70 = 0;
      FUN_7103776640(&local_80,param_1 + 0x3d0,(byte ****)"set_parts_num_value",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      ppuVar5 = local_78;
      FUN_7103778300(0x3f800000,(long)local_78,0x71042b4078);
      local_80 = &PTR_FUN_710523d988;
      local_78 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        puVar7 = ppuVar5[3];
        ppuVar5[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar5[3] = (undefined *)0x0;
        if (puVar7 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar7);
        }
        FUN_710392eb40((ulong)ppuVar5);
      }
    }
  }
LAB_7101b06d28:
  if (*(char *)(*(long *)(param_1 + 0x518) + 0x4aa) == '\0') {
    return;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x518) + 0x1b0) >> 1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x438) == *(long *)(param_1 + 0x440)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x3a0);
  FUN_71037780e0(&local_80,param_1 + 0x3d0,(long ****)"countup_score",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppuVar5 = local_78;
  plVar19 = (long *)local_78[1];
  if (plVar19 == (long *)0x0) {
    local_80 = &PTR_FUN_710523d9e8;
    local_78 = (undefined **)0x0;
    if (ppuVar5 == (undefined **)0x0) goto LAB_7101b06e7c;
  }
  else {
    if ((char)local_78[2] != '\0') {
      plVar17 = *(long **)((long)*local_78 + 0x80);
      plVar9 = (long *)((long)*local_78 + 0x88);
      if (plVar17 != plVar9) {
        do {
          while( true ) {
            uVar6 = (**(code **)(*(long *)plVar17[0xd] + 0x148))();
            if (((uVar6 & 1) != 0) &&
               (uVar6 = (**(code **)(*plVar19 + 0x120))(plVar19,plVar17[0xd]), (uVar6 & 1) != 0)) {
              (**(code **)(*(long *)plVar17[0xd] + 0x178))();
              (**(code **)(*(long *)plVar17[0xd] + 0x140))((long *)plVar17[0xd],0);
            }
            plVar20 = (long *)plVar17[1];
            if ((long *)plVar17[1] == (long *)0x0) break;
            do {
              plVar17 = plVar20;
              plVar20 = (long *)*plVar17;
            } while ((long *)*plVar17 != (long *)0x0);
LAB_7101b06e28:
            if (plVar17 == plVar9) goto LAB_7101b06e40;
          }
          plVar20 = plVar17 + 2;
          plVar13 = (long *)*plVar20;
          if ((long *)*plVar13 != plVar17) {
            do {
              lVar14 = *plVar20;
              plVar20 = (long *)(lVar14 + 0x10);
              plVar17 = (long *)*plVar20;
            } while (*plVar17 != lVar14);
            goto LAB_7101b06e28;
          }
          plVar17 = plVar13;
        } while (plVar13 != plVar9);
LAB_7101b06e40:
        plVar19 = (long *)ppuVar5[1];
      }
    }
    (**(code **)(*plVar19 + 0x188))(plVar19);
  }
  local_78 = (undefined **)0x0;
  local_80 = &PTR_FUN_710523d9e8;
  FUN_710392eb40((ulong)ppuVar5);
LAB_7101b06e7c:
  FUN_7103776910(&local_80,param_1 + 0x3d0,(long ****)"set_txt_score",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a310((long)&local_80,1);
  ppuVar5 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x440) + -0x10);
  puVar16 = *(undefined8 **)(param_1 + 0x438);
  puVar18 = *(undefined8 **)(param_1 + 0x440);
  while (puVar18 != puVar16) {
    puVar18 = puVar18 + -2;
    (**(code **)*puVar18)(puVar18);
  }
  *(undefined8 **)(param_1 + 0x440) = puVar16;
  FUN_710373b7f0(param_1 + 0x4a0);
  return;
}

