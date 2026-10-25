// addr:      7101d760a0
// offset:    0x1d760a0
// name:      FUN_7101d760a0
// mangled:   
// signature: undefined __cdecl FUN_7101d760a0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d760a0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined **ppuVar5;
  bool bVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  char *pcVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long ****pppplVar13;
  uint uVar14;
  long lVar15;
  int *piVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined **local_b0;
  ulong local_a8;
  undefined4 local_98 [2];
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long ***local_58;
  undefined4 local_44;
  
  iVar3 = (int)param_1[0x58];
  plVar8 = param_1 + 0x53;
  if (*(int *)((long)param_1 + 0x224) == 0) {
    *(undefined4 *)((long)param_1 + 0x304) = 1;
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
    FUN_71037760f0(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47],1);
    (**(code **)(*(long *)param_1[0x57] + 0x60))((long *)param_1[0x57],1);
    bVar6 = (int)param_1[0x60] == 1;
    bVar7 = (**(code **)(param_1[0x53] + 0x70))(plVar8);
    (**(code **)(*(long *)param_1[0x57] + 0x70))((long *)param_1[0x57],bVar6);
    if (((bVar6 ^ bVar7) & 1) != 0) {
      *(undefined1 *)((long)param_1 + 0x2dc) = 1;
      (**(code **)(param_1[0x53] + 0xe0))(plVar8);
    }
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
    if (*(uint *)(param_1 + 0x5f) < 5) {
      lVar15 = *(long *)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47];
      switch(*(uint *)(param_1 + 0x5f)) {
      default:
        lVar15 = *(long *)(lVar15 + 0x10);
        pcVar12 = "music_list";
        break;
      case 1:
        lVar15 = *(long *)(lVar15 + 0x10);
        pcVar12 = "ser_off";
        break;
      case 2:
        lVar15 = *(long *)(lVar15 + 0x10);
        pcVar12 = "vois_list";
        break;
      case 3:
        goto switchD_7101d76198_caseD_3;
      }
      FUN_7103778300(0x3f800000,lVar15,(long)pcVar12);
    }
switchD_7101d76198_caseD_3:
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
    pcVar12 = "keyhelp_on";
    if (iVar3 < 1) {
      pcVar12 = "keyhelp_off";
    }
    FUN_7103778300(0x3f800000,
                   *(long *)(*(long *)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x10),
                   (long)pcVar12);
    param_3 = (long ****)(ulong)*(uint *)(param_1 + 0x62);
    FUN_7101d79e40(param_1,*(uint *)((long)param_1 + 0x30c),*(uint *)(param_1 + 0x62),param_4,
                   param_5,param_6,param_7,param_8);
    if ((int)param_1[0x5f] == 2) {
      lVar15 = *(long *)(*param_1 + 0x30);
      uVar18 = (ulong)*(int *)((long)param_1 + 0x30c);
      uVar19 = (*(long *)(*param_1 + 0x38) - lVar15 >> 3) * -0x70a3d70a3d70a3d7;
      if ((uVar18 <= uVar19 && uVar19 - uVar18 != 0) &&
         (*(char *)(lVar15 + uVar18 * 200 + 0xc0) != '\0')) {
        *(undefined4 *)(param_1 + 0x66) = 9;
        *(int *)((long)param_1 + 0x334) = *(int *)((long)param_1 + 0x30c);
      }
    }
    *(undefined4 *)((long)param_1 + 0x3cc) = 0;
    param_2 = extraout_x1;
  }
  lVar15 = param_1[0x57];
  iVar1 = *(int *)(lVar15 + 0x2a4);
  uVar2 = *(uint *)(lVar15 + 0x2b4);
  lVar20 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  if (iVar1 != (int)param_1[0x62]) {
    *(int *)(param_1 + 0x62) = iVar1;
    *(undefined1 *)((long)param_1 + 0x2dc) = 1;
    FUN_710377cc80(lVar15,1);
    param_3 = (long ****)(ulong)*(uint *)(param_1 + 0x62);
    FUN_7101d79e40(param_1,*(uint *)((long)param_1 + 0x30c),*(uint *)(param_1 + 0x62),param_4,
                   param_5,param_6,param_7,param_8);
    lVar15 = param_1[0x57];
    param_2 = extraout_x1_00;
  }
  if (*(char *)(lVar15 + 0x316) != '\0') {
    lVar15 = *(long *)(lVar20 + 0x80);
    if (*(char *)(lVar15 + 0xc9) == '\0') {
      iVar11 = 4;
    }
    else {
      iVar11 = 0;
    }
    param_3 = (long ****)0x0;
    FUN_7103771be0((long *)(lVar15 + 0x2260),iVar11,0);
    *(undefined4 *)(lVar15 + 0x2270) = *(undefined4 *)(*(long *)(lVar15 + 0x2260) + 0x25c);
    param_2 = extraout_x1_01;
  }
  if (*(int *)(*(long *)(lVar20 + 0x80) + 0x2270) == 0) {
    lVar15 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 4) {
      uVar18 = 0;
      if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101d763f0;
LAB_7101d76460:
      local_80 = 0x87650000000000;
      local_70 = 0xffffffffffffffff;
      uStack_68 = 0;
      local_98[0] = 0;
      local_60 = 0;
    }
    else {
      uVar18 = *(ulong *)(*(long *)(lVar15 + 0x40) + 0x18);
      if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101d76460;
LAB_7101d763f0:
      param_3 = (long ****)&DAT_00000004;
      uVar19 = FUN_7103313f20(lVar15,uVar18,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar19 & 1) == 0) goto LAB_7101d76460;
      FUN_71024076d0(local_98,uVar18);
      if (((local_88 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_80 == DAT_7106dd53ac)) {
        piVar16 = (int *)(local_88 + 0x38);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar6) {
            *piVar16 = *piVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    local_90 = &PTR_FUN_7104f73d50;
    local_88 = 0;
    local_78 = 0;
    if ((int)param_1[0x5f] != 2) {
      lVar15 = param_1[0x7c];
      lVar20 = param_1[0x7b];
      if (lVar15 != lVar20) {
        uVar18 = param_1[0x74];
        *(undefined4 *)(param_1 + 0x66) = 9;
        if (uVar18 != 0) {
          param_1[0x75] = uVar18;
          FUN_710392eb40(uVar18);
          param_1[0x75] = 0;
          param_1[0x76] = 0;
          param_1[0x74] = 0;
          lVar20 = param_1[0x7b];
          lVar15 = param_1[0x7c];
        }
        param_1[0x75] = lVar15;
        param_1[0x74] = lVar20;
        param_1[0x76] = param_1[0x7d];
        param_1[0x7c] = 0;
        param_1[0x7d] = 0;
        param_1[0x7b] = 0;
      }
    }
    (**(code **)(*(long *)param_1[0x57] + 0x60))((long *)param_1[0x57],0);
    FUN_7101d7a090((long)(param_1 + 0x4b),extraout_x1_02,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d769a8;
    lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
    uVar17 = 3;
    goto LAB_7101d76528;
  }
  uVar14 = *(uint *)(param_1 + 0x5f);
  if (uVar2 != 0xffffffff) {
    if (uVar14 < 2) {
      if ((((int)param_1[0x61] == 1) &&
          (*(int *)((long)param_1 + 0x30c) == *(int *)((long)param_1 + 0x314))) &&
         (uVar2 == *(uint *)(param_1 + 99))) {
        *(undefined4 *)((long)param_1 + 0x324) = 2;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x324) = 1;
        *(int *)((long)param_1 + 0x314) = *(int *)((long)param_1 + 0x30c);
        *(uint *)(param_1 + 99) = uVar2;
      }
    }
    else {
      if (uVar14 == 2) {
        *(undefined4 *)((long)param_1 + 0x324) = 1;
        *(undefined4 *)((long)param_1 + 0x314) = *(undefined4 *)((long)param_1 + 0x30c);
        *(uint *)(param_1 + 99) = uVar2;
        return;
      }
      if (uVar14 == 4) {
        uVar18 = (ulong)uVar2;
        FUN_7101d88390(&local_b0,(long *)*param_1,*(int *)((long)param_1 + 0x30c),uVar2);
        ppuVar5 = local_b0;
        param_1[0x7f] = (long)local_b0;
        if (*(char *)((long)param_1 + 799) != '\0') {
          uVar19 = FUN_71032575c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x278),0xd2288990c);
          if (((((ulong)ppuVar5 & 0xff00000000000000) == 0xd900000000000000) &&
              (((ulong)ppuVar5 & 0xffffffffff) != 0)) &&
             (((uVar19 & 0xff00000000000000) == 0xd900000000000000 && ((uVar19 & 0xffffffffff) != 0)
              ))) {
            if (((uVar19 ^ (ulong)ppuVar5) & 0xffffffffff) != 0) {
LAB_7101d76740:
              FUN_71033145d0(DAT_710532f8d0,(ulong)ppuVar5,1,uVar18,param_5,param_6,param_7,param_8)
              ;
              param_1[0x80] = param_1[0x7f];
            }
          }
          else if (((uVar19 & 0xffffffffff) != 0 &&
                   (uVar19 & 0xff00000000000000) == 0xd900000000000000) !=
                   (((ulong)ppuVar5 & 0xff00000000000000) == 0xd900000000000000 &&
                   ((ulong)ppuVar5 & 0xffffffffff) != 0)) goto LAB_7101d76740;
        }
        if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d769a8;
        lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
        uVar17 = 2;
        goto LAB_7101d76528;
      }
    }
  }
  bVar6 = 0 < iVar3;
  if ((0 < iVar3) && (uVar14 != 2)) {
    bVar6 = true;
    switch(*(undefined4 *)(param_1[0x5c] + 0x25c)) {
    case 0:
      *(undefined4 *)(param_1 + 0x78) = 0;
      return;
    case 1:
      *(undefined4 *)(param_1 + 0x78) = 1;
      return;
    case 2:
      if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
      FUN_71037760f0(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47],0);
      if (*(char *)((long)param_1 + 0x3c5) == '\0') {
        if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d769a8;
        lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
        uVar17 = 0xf;
      }
      else {
        *(undefined1 *)(param_1 + 0x7e) = 1;
        if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d769a8;
        lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
        uVar17 = 0x10;
      }
      goto LAB_7101d76528;
    default:
      goto switchD_7101d765cc_caseD_3;
    case 4:
switchD_7101d765cc_caseD_4:
      bVar6 = FUN_71037814c0(param_1[0x57],iVar1);
      plVar9 = (long *)param_1[0x57];
      if (bVar6) {
        (**(code **)(*plVar9 + 0x60))(plVar9,0);
        uVar18 = (**(code **)(param_1[0x53] + 0x70))(plVar8);
        (**(code **)(*(long *)param_1[0x57] + 0x70))((long *)param_1[0x57],0);
        if ((uVar18 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x2dc) = 1;
          (**(code **)(param_1[0x53] + 0xe0))(plVar8);
        }
        if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d769a8;
        lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
        uVar17 = 8;
        goto LAB_7101d76528;
      }
      if (iVar1 == -1) {
LAB_7101d76794:
        fVar21 = *(float *)(plVar9 + 0x4d);
        fVar22 = *(float *)((long)plVar9 + 0x26c);
        fVar24 = *(float *)(plVar9 + 0x4c);
      }
      else {
        iVar3 = *(int *)((long)plVar9 + 0x28c);
        iVar11 = 0;
        if (iVar3 != 0) {
          iVar11 = iVar1 / iVar3;
        }
        if (iVar11 == -1 || iVar1 - iVar11 * iVar3 == -1) goto LAB_7101d76794;
        iVar3 = *(int *)((long)plVar9 + 0x294);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        fVar23 = *(float *)((long)plVar9 + 0x274) * (float)(iVar11 - (iVar3 >> 1));
        fVar22 = *(float *)((long)plVar9 + 0x26c);
        fVar21 = *(float *)(plVar9 + 0x4d);
        fVar25 = fVar22;
        if (fVar23 <= fVar22) {
          fVar25 = fVar23;
        }
        fVar24 = fVar21;
        if (fVar21 <= fVar23) {
          fVar24 = fVar25;
        }
      }
      if (fVar24 <= fVar22) {
        fVar22 = fVar24;
      }
      if (fVar21 <= fVar24) {
        fVar21 = fVar22;
      }
      plVar9[0x49] = 0x3f000000;
      *(float *)((long)plVar9 + 0x264) = fVar21;
      uVar14 = *(uint *)(param_1 + 0x5f);
      param_2 = extraout_x1_03;
      break;
    case 0xffffffff:
      if ((int)param_1[0x60] == 1) {
        if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
        if ((*(char *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600
                                ) + 0x4aa) != '\0') &&
           ((*(byte *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600
                                ) + 0x1c0) >> 1 & 1) != 0)) goto switchD_7101d765cc_caseD_4;
      }
    }
    bVar6 = true;
  }
switchD_7101d765cc_caseD_3:
  if (!bVar6) {
    return;
  }
  if (uVar14 != 1) {
    return;
  }
  if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d769a8;
  if ((*(char *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600) +
                0x4aa) == '\0') ||
     ((*(byte *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600) +
                0x1c8) >> 1 & 1) == 0)) {
    lVar15 = param_1[0x57];
    iVar3 = *(int *)(lVar15 + 0x2c8);
    if ((iVar3 < 0) || (*(int *)(lVar15 + 0x2c0) <= iVar3)) {
      FUN_7103776290(&local_b0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(&local_b0,
                     (undefined8 *)(*(long *)(*(long *)(lVar15 + 0x168) + (long)iVar3 * 8) + 8),
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    plVar8 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_58 = (long ***)&DAT_00000008;
        pppplVar13 = &local_58;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar18 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar13,param_4,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_7101d768e4;
      }
      plVar8 = (long *)0x0;
    }
LAB_7101d768e4:
    *plVar8 = 0;
    lVar15 = *(long *)(local_a8 + 8);
    if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) == 0)) {
      uVar18 = 0;
      *plVar8 = 0;
    }
    else {
      plVar9 = (long *)FUN_7103796f20(*(long *)(lVar15 + 0x60),*(long *)(lVar15 + 0x18) + 0xb0);
      *plVar8 = (long)plVar9;
      if (plVar9 == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)(*plVar9 + 0x250))();
        uVar18 = uVar18 & 0xffffffff;
      }
    }
    FUN_710392eb40((ulong)plVar8);
    uVar19 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar19 != 0) {
      uVar10 = *(ulong *)(uVar19 + 0x18);
      *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar19 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar19);
    }
    if ((uVar18 & 1) == 0) {
      *(undefined4 *)((long)param_1 + 0x3cc) = 0;
      return;
    }
    iVar3 = *(int *)((long)param_1 + 0x3cc);
    *(int *)((long)param_1 + 0x3cc) = iVar3 + 1;
    if (iVar3 < 0x1d) {
      return;
    }
  }
  if (*(uint *)((long)param_1 + 0x21c) < 0x13) {
    lVar15 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
    uVar17 = 0x14;
LAB_7101d76528:
    *(undefined4 *)(lVar15 + 0x1d0) = uVar17;
    return;
  }
LAB_7101d769a8:
                    /* WARNING: Subroutine does not return */
  abort();
}

