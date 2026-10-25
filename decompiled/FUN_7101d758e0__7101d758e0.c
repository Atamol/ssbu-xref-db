// addr:      7101d758e0
// offset:    0x1d758e0
// name:      FUN_7101d758e0
// mangled:   
// signature: undefined __cdecl FUN_7101d758e0(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d758e0(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined4 uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_a0 [2];
  undefined **local_98;
  long local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  undefined4 local_44;
  
  iVar17 = (int)param_1[0x50];
  if (*(int *)((long)param_1 + 0x224) == 0) {
    *(undefined4 *)((long)param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x62) = 0;
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d7608c;
    FUN_71037760f0(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47],1);
    (**(code **)(*(long *)param_1[0x4f] + 0x60))((long *)param_1[0x4f],1);
    (**(code **)(*(long *)param_1[0x4f] + 0x70))((long *)param_1[0x4f],(int)param_1[0x60] == 1);
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d7608c;
    if (*(uint *)(param_1 + 0x5f) < 5) {
      lVar11 = *(long *)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47];
      switch(*(uint *)(param_1 + 0x5f)) {
      default:
        lVar11 = *(long *)(lVar11 + 0x10);
        pcVar8 = "ser_list";
        break;
      case 1:
        lVar11 = *(long *)(lVar11 + 0x10);
        pcVar8 = "ser_on";
        break;
      case 2:
        lVar11 = *(long *)(lVar11 + 0x10);
        pcVar8 = "chara_list";
        break;
      case 3:
        goto switchD_7101d75998_caseD_3;
      }
      FUN_7103778300(0x3f800000,lVar11,(long)pcVar8);
    }
switchD_7101d75998_caseD_3:
    if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d7608c;
    pcVar8 = "keyhelp_on";
    if (iVar17 < 1) {
      pcVar8 = "keyhelp_off";
    }
    FUN_7103778300(0x3f800000,
                   *(long *)(*(long *)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x10),
                   (long)pcVar8);
    *(undefined4 *)((long)param_1 + 0x3cc) = 0;
    param_2 = extraout_x1;
    if (iVar17 < 1) {
      if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d7608c;
      lVar11 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
      uVar15 = 0x17;
      goto LAB_7101d75e00;
    }
  }
  lVar11 = param_1[0x4f];
  iVar1 = *(int *)(lVar11 + 0x2a4);
  iVar10 = *(int *)(lVar11 + 0x2b4);
  lVar18 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  if (iVar1 != *(int *)((long)param_1 + 0x30c)) {
    *(int *)((long)param_1 + 0x30c) = iVar1;
    FUN_7101d7a1f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar11 = param_1[0x4f];
    param_2 = extraout_x1_00;
  }
  if (*(char *)(lVar11 + 0x316) != '\0') {
    lVar11 = *(long *)(lVar18 + 0x80);
    if (*(char *)(lVar11 + 0xc9) == '\0') {
      iVar7 = 4;
    }
    else {
      iVar7 = 0;
    }
    param_3 = (long *********)0x0;
    FUN_7103771be0((long *)(lVar11 + 0x2260),iVar7,0);
    *(undefined4 *)(lVar11 + 0x2270) = *(undefined4 *)(*(long *)(lVar11 + 0x2260) + 0x25c);
    param_2 = extraout_x1_01;
  }
  if (*(int *)(*(long *)(lVar18 + 0x80) + 0x2270) == 0) {
    lVar11 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40) >> 3) < 4) {
      uVar19 = 0;
      if (*(char *)(lVar11 + 0x191) == '\0') goto LAB_7101d75c20;
LAB_7101d75c90:
      local_88 = 0x87650000000000;
      local_78 = 0xffffffffffffffff;
      uStack_70 = 0;
      local_a0[0] = 0;
      local_68 = 0;
    }
    else {
      uVar19 = *(ulong *)(*(long *)(lVar11 + 0x40) + 0x18);
      if (*(char *)(lVar11 + 0x191) != '\0') goto LAB_7101d75c90;
LAB_7101d75c20:
      uVar16 = FUN_7103313f20(lVar11,uVar19,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar16 & 1) == 0) goto LAB_7101d75c90;
      FUN_71024076d0(local_a0,uVar19);
      if (((local_90 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_88 == DAT_7106dd53ac)) {
        piVar14 = (int *)(local_90 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar3) {
            *piVar14 = *piVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    local_98 = &PTR_FUN_7104f73d50;
    local_90 = 0;
    local_80 = 0;
  }
  else {
    if (iVar10 == -1) {
      iVar10 = (int)param_1[0x5f];
      if ((0 < iVar17) && (iVar10 != 2)) {
        if (*(int *)(param_1[0x5c] + 0x25c) == 3) {
LAB_7101d75bc0:
          bVar3 = FUN_71037814c0(param_1[0x4f],iVar1);
          plVar12 = (long *)param_1[0x4f];
          if (bVar3) {
            (**(code **)(*plVar12 + 0x60))(plVar12,0);
            (**(code **)(*(long *)param_1[0x4f] + 0x70))((long *)param_1[0x4f],0);
            if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d7608c;
            lVar11 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
            uVar15 = 5;
            goto LAB_7101d75e00;
          }
          if (iVar1 == -1) {
LAB_7101d75e90:
            fVar20 = *(float *)(plVar12 + 0x4d);
            fVar21 = *(float *)((long)plVar12 + 0x26c);
            fVar23 = *(float *)(plVar12 + 0x4c);
          }
          else {
            iVar10 = *(int *)((long)plVar12 + 0x28c);
            iVar7 = 0;
            if (iVar10 != 0) {
              iVar7 = iVar1 / iVar10;
            }
            if (iVar7 == -1 || iVar1 - iVar7 * iVar10 == -1) goto LAB_7101d75e90;
            iVar1 = *(int *)((long)plVar12 + 0x294);
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            fVar22 = *(float *)((long)plVar12 + 0x274) * (float)(iVar7 - (iVar1 >> 1));
            fVar21 = *(float *)((long)plVar12 + 0x26c);
            fVar20 = *(float *)(plVar12 + 0x4d);
            fVar24 = fVar21;
            if (fVar22 <= fVar21) {
              fVar24 = fVar22;
            }
            fVar23 = fVar20;
            if (fVar20 <= fVar22) {
              fVar23 = fVar24;
            }
          }
          if (fVar23 <= fVar21) {
            fVar21 = fVar23;
          }
          if (fVar20 <= fVar23) {
            fVar20 = fVar21;
          }
          plVar12[0x49] = 0x3f000000;
          *(float *)((long)plVar12 + 0x264) = fVar20;
          iVar10 = (int)param_1[0x5f];
          param_2 = extraout_x1_02;
        }
        else if ((int)param_1[0x60] == 1) {
          if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d7608c;
          if ((*(char *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] +
                                  0x600) + 0x4aa) != '\0') &&
             ((*(byte *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] +
                                  0x600) + 0x1c0) >> 1 & 1) != 0)) goto LAB_7101d75bc0;
        }
      }
      if (iVar17 < 1) {
        return;
      }
      if (iVar10 != 1) {
        return;
      }
      if (2 < *(uint *)(param_1 + 0x4a)) goto LAB_7101d7608c;
      if ((*(char *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600)
                    + 0x4aa) == '\0') ||
         ((*(byte *)(*(long *)(**(long **)param_1[(ulong)*(uint *)(param_1 + 0x4a) + 0x47] + 0x600)
                    + 0x1c8) >> 1 & 1) == 0)) {
        lVar11 = param_1[0x4f];
        iVar17 = *(int *)(lVar11 + 0x2c8);
        if ((iVar17 < 0) || (*(int *)(lVar11 + 0x2c0) <= iVar17)) {
          FUN_7103776290(&local_60,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,
                         param_8);
        }
        else {
          FUN_7103776390(&local_60,
                         (undefined8 *)(*(long *)(*(long *)(lVar11 + 0x168) + (long)iVar17 * 8) + 8)
                         ,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        }
        plVar12 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                         param_8);
        if (plVar12 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_44 = 0;
            local_50 = (long ***)&DAT_00000008;
            pppplVar9 = &local_50;
            uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
            if (((uVar19 & 1) != 0) &&
               (plVar12 = (long *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,
                                                 param_8), plVar12 != (long *)0x0))
            goto LAB_7101d75fc8;
          }
          plVar12 = (long *)0x0;
        }
LAB_7101d75fc8:
        *plVar12 = 0;
        lVar11 = *(long *)(local_58 + 8);
        if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
          uVar19 = 0;
          *plVar12 = 0;
        }
        else {
          plVar5 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
          *plVar12 = (long)plVar5;
          if (plVar5 == (long *)0x0) {
            uVar19 = 0;
          }
          else {
            uVar19 = (**(code **)(*plVar5 + 0x250))();
            uVar19 = uVar19 & 0xffffffff;
          }
        }
        FUN_710392eb40((ulong)plVar12);
        uVar16 = local_58;
        local_60 = &PTR_FUN_710523d988;
        local_58 = 0;
        if (uVar16 != 0) {
          uVar6 = *(ulong *)(uVar16 + 0x18);
          *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar16 + 0x18) = 0;
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          FUN_710392eb40(uVar16);
        }
        if ((uVar19 & 1) == 0) {
          *(undefined4 *)((long)param_1 + 0x3cc) = 0;
          return;
        }
        iVar17 = *(int *)((long)param_1 + 0x3cc);
        *(int *)((long)param_1 + 0x3cc) = iVar17 + 1;
        if (iVar17 < 0x1d) {
          return;
        }
      }
      if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d7608c;
      lVar11 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
      uVar15 = 0x11;
      goto LAB_7101d75e00;
    }
    uVar19 = (ulong)iVar10;
    (**(code **)(*(long *)param_1[0x4f] + 0x60))((long *)param_1[0x4f],0);
    if ((int)param_1[0x5f] != 4) {
LAB_7101d75b04:
      lVar11 = param_1[0x62];
      iVar17 = 0;
      *(int *)(param_1 + 0x5b) = iVar10;
      *(undefined2 *)((long)param_1 + 0x2dc) = 0;
      if (*(uint *)(param_1 + 0x56) < 5) {
        plVar12 = (long *)param_1[0x55];
        switch(*(uint *)(param_1 + 0x56)) {
        default:
          uVar16 = (plVar12[1] - *plVar12 >> 4) * -0x5555555555555555;
          if (uVar16 < uVar19 || uVar16 - uVar19 == 0) goto LAB_7101d75d80;
          lVar13 = *plVar12 + uVar19 * 0x30;
          lVar18 = *(long *)(lVar13 + 8);
          lVar13 = *(long *)(lVar13 + 0x10);
LAB_7101d75d68:
          iVar17 = (int)((ulong)(lVar13 - lVar18) >> 3) * -0x55555555;
          break;
        case 1:
          uVar16 = (plVar12[4] - plVar12[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar19 <= uVar16 && uVar16 - uVar19 != 0) {
            lVar13 = plVar12[3] + uVar19 * 0x58;
            lVar18 = *(long *)(lVar13 + 0x38);
            lVar13 = *(long *)(lVar13 + 0x40);
            goto LAB_7101d75d68;
          }
LAB_7101d75d80:
          iVar17 = 0;
          break;
        case 2:
          uVar16 = (plVar12[7] - plVar12[6] >> 3) * -0x70a3d70a3d70a3d7;
          if (uVar16 < uVar19 || uVar16 - uVar19 == 0) goto LAB_7101d75d80;
          lVar18 = plVar12[6] + uVar19 * 200;
          iVar17 = (int)((ulong)(*(long *)(lVar18 + 0xb0) - *(long *)(lVar18 + 0xa8)) >> 4);
          break;
        case 3:
          break;
        }
      }
      *(int *)(param_1 + 0x58) = iVar17;
      uVar4 = (**(code **)(*(long *)param_1[0x57] + 0x78))();
      FUN_7103783690(param_1 + 0x57,iVar17);
      FUN_7103783c10(param_1 + 0x57,(int)lVar11,0,1,param_5,param_6,param_7,param_8);
      (**(code **)(*(long *)param_1[0x57] + 0x70))((long *)param_1[0x57],uVar4 & 1);
      *(undefined1 *)((long)param_1 + 0x2dc) = 1;
      (**(code **)(param_1[0x53] + 0xe0))(param_1 + 0x53);
      if (0x12 < *(uint *)((long)param_1 + 0x21c)) goto LAB_7101d7608c;
      lVar11 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
      uVar15 = 4;
      goto LAB_7101d75e00;
    }
    lVar11 = *(long *)*param_1;
    lVar18 = ((long *)*param_1)[1];
    if (lVar11 == lVar18) goto LAB_7101d75b04;
    uVar16 = (lVar18 - lVar11 >> 4) * -0x5555555555555555;
    if (uVar16 < uVar19 || uVar16 - uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar18 = lVar11 + uVar19 * 0x30;
    if (*(long *)(lVar18 + 8) != *(long *)(lVar18 + 0x10)) goto LAB_7101d75b04;
    param_1[0x7f] = *(long *)(lVar11 + uVar19 * 0x30 + 0x28);
  }
  if (0x12 < *(uint *)((long)param_1 + 0x21c)) {
LAB_7101d7608c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar11 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x21c) * 4;
  uVar15 = 2;
LAB_7101d75e00:
  *(undefined4 *)(lVar11 + 0x1d0) = uVar15;
  return;
}

