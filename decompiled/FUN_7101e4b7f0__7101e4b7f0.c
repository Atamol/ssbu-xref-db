// addr:      7101e4b7f0
// offset:    0x1e4b7f0
// name:      FUN_7101e4b7f0
// mangled:   
// signature: undefined4 __cdecl FUN_7101e4b7f0(float param_1, long * param_2, byte param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


undefined4
FUN_7101e4b7f0(float param_1,long *param_2,byte param_3,long ****param_4,byte ****param_5,
              long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  long lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  undefined ***pppuVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  ulong uVar15;
  long *plVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  undefined **local_b8;
  long local_b0;
  int local_a8;
  undefined1 local_a0;
  long ***local_80;
  undefined4 local_74;
  
  if (*(byte *)(param_2 + 1) <= param_3) {
    return 0;
  }
  uVar5 = (ushort)param_4;
  bVar9 = (((uint)param_4 ^ 0xffffffff) & 0xffff) == 0;
  bVar1 = 1999 < (short)uVar5;
  pppplVar13 = param_4;
  ppppbVar14 = param_5;
  if (bVar9 || bVar1) {
LAB_7101e4b8c8:
    uVar10 = 1;
  }
  else {
    lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar19 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
    uVar4 = *(ushort *)(lVar18 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
    uVar15 = (ulong)uVar4;
    if ((uint)uVar19 <= (uint)uVar4) goto LAB_7101e4b8c8;
    puVar3 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar15 * 0x140);
    if (uVar19 < uVar15 || uVar19 - uVar15 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    uVar10 = FUN_71025c9ac0(*(float *)(puVar3 + 0x3a),(int)param_1,*(uint *)(puVar3 + 0x38));
  }
  if (((param_3 < 4) && (lVar18 = *(long *)(*param_2 + (ulong)param_3 * 8 + 0x48), lVar18 != 0)) &&
     (*(char *)((long)param_2 + 9) != '\0')) {
    if ((uint)*(ushort *)(lVar18 + 0xb6) < (uVar10 & 0xffff)) {
      lVar2 = lVar18 + 0x20;
      FUN_7103776910(&local_d0,lVar2,(long ****)"set_txt_lvup",pppplVar13,ppppbVar14,param_6,param_7
                     ,param_8,param_9);
      if ((uVar10 & 0xffff) < 99) {
        pppplVar13 = (long ****)0x1;
        ppppbVar14 = (byte ****)(ulong)(uVar10 & 0xffff);
        FUN_710377a280((long)&local_d0,(byte *)"mnu_lvup",1);
      }
      else {
        FUN_710377a120((long)&local_d0,"mnu_spirit_lv_max",pppplVar13,ppppbVar14,param_6,param_7,
                       param_8,param_9);
      }
      uVar15 = local_c8;
      local_d0 = &PTR_FUN_710523d9a8;
      local_c8 = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_7103776910(&local_e0,lVar2,(long ****)"set_txt_lvup_bg",pppplVar13,ppppbVar14,param_6,
                     param_7,param_8,param_9);
      if ((uVar10 & 0xffff) < 99) {
        pppplVar13 = (long ****)0x1;
        ppppbVar14 = (byte ****)(ulong)(uVar10 & 0xffff);
        FUN_710377a280((long)&local_e0,(byte *)"mnu_lvup",1);
      }
      else {
        FUN_710377a120((long)&local_e0,"mnu_spirit_lv_max",pppplVar13,ppppbVar14,param_6,param_7,
                       param_8,param_9);
      }
      uVar15 = local_d8;
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8 = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_71037780e0(&local_c0,lVar2,(long ****)"progress_finish",pppplVar13,ppppbVar14,param_6,
                     param_7,param_8,param_9);
      pppuVar12 = (undefined ***)
                  FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_6,param_7,param_8,param_9);
      if (pppuVar12 == (undefined ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74 = 0;
          local_80 = (long ***)&DAT_00000010;
          pppplVar13 = &local_80;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
          if (((uVar15 & 1) != 0) &&
             (pppuVar12 = (undefined ***)
                          FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_6,param_7,param_8,
                                         param_9), pppuVar12 != (undefined ***)0x0))
          goto LAB_7101e4ba34;
        }
        pppuVar12 = (undefined ***)0x0;
      }
LAB_7101e4ba34:
      ppuVar8 = local_b8;
      *pppuVar12 = &PTR_FUN_710523d9e8;
      pppuVar12[1] = (undefined **)0x0;
      if (&local_c0 != pppuVar12) {
        local_b8 = (undefined **)0x0;
        pppuVar12[1] = ppuVar8;
      }
      plVar16 = *(long **)(lVar18 + 0xa8);
      *(undefined ****)(lVar18 + 0xa8) = pppuVar12;
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      ppuVar8 = local_b8;
      local_c0 = &PTR_FUN_710523d9e8;
      local_b8 = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_710377aee0(0x3f800000,*(long *)(lVar18 + 0xa8));
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x28),0x71042d4c7e);
      if (((ulong)param_5 & 1) == 0) {
        if ((uVar10 & 0xffff) == 99) {
          local_80 = (long ***)0x145bfb20b6;
        }
        else {
          local_80 = *(long ****)(lVar18 + 0x90);
        }
        ppppbVar14 = (byte ****)0xa;
        FUN_7103314db0((undefined4 *)&local_c0,*(long *)(DAT_710532f8d0 + 8),(ulong *)&local_80,
                       (byte ****)0xa,param_6,param_7,param_8,param_9);
        local_b8 = &PTR_FUN_7104f73d50;
        if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_a8 == DAT_7106dd53ac)) {
          piVar17 = (int *)(local_b0 + 0x38);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar7) {
              *piVar17 = *piVar17 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        local_b0 = 0;
        local_a0 = 0;
      }
      if (*(char *)((long)param_2 + 9) == '\0') goto LAB_7101e4bb64;
    }
    ppppbVar14 = (byte ****)(ulong)(uVar10 & 0xffff);
    FUN_710377a280(lVar18 + 0x40,(byte *)"cam_gym_level",1);
    *(short *)(lVar18 + 0xb6) = (short)uVar10;
  }
LAB_7101e4bb64:
  if (0x62 < uVar10) {
    uVar15 = FUN_7101e9c280(1.0,param_2,param_3,1);
    if ((uVar15 & 1) == 0) {
      return 1;
    }
    if (!bVar9 && !bVar1) {
      lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar5 = *(ushort *)(lVar18 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
      uVar10 = (int)((ulong)(*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20)) >> 6) *
               -0x33333333;
      if ((((uVar5 < uVar10) &&
           (uVar5 = *(ushort *)(lVar18 + (ulong)uVar5 * 2 + 0x1000), uVar5 < uVar10)) &&
          (*(short *)(*(long *)(lVar18 + 0x20) + (ulong)uVar5 * 0x140) != -1 && param_3 < 4)) &&
         (lVar18 = *(long *)(*param_2 + (ulong)param_3 * 8 + 0x48), lVar18 != 0)) {
        if (*(char *)(lVar18 + 0xb4) == '\0') {
          FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),0x71042f8a52);
          uVar15 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1d0d1b1eaf,(long ****)0xa,
                                  ppppbVar14,param_6,param_7,param_8,param_9);
          if ((uVar15 & 1) != 0) {
            FUN_7103314c70(*(long *)(DAT_710532f8d0 + 8),0x1d0d1b1eaf,(long ****)&DAT_00000050,
                           ppppbVar14,param_6,param_7,param_8,param_9);
          }
        }
        *(undefined1 *)(lVar18 + 0xb4) = 1;
        return 1;
      }
    }
    return 1;
  }
  if (!bVar9 && !bVar1) {
    lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar19 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
    uVar4 = *(ushort *)(lVar18 + (((long)param_4 << 0x30) >> 0x2f) + 0x60);
    uVar15 = (ulong)uVar4;
    if ((uint)uVar4 < (uint)uVar19) {
      puVar3 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar15 * 0x140);
      if (uVar19 < uVar15 || uVar19 - uVar15 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      uVar10 = FUN_71025c9ac0(*(float *)(puVar3 + 0x3a),(int)param_1,*(uint *)(puVar3 + 0x38));
      if (0x61 < uVar10) {
        uVar10 = 0x62;
      }
      goto LAB_7101e4bce4;
    }
  }
  uVar10 = 1;
LAB_7101e4bce4:
  uVar11 = FUN_71025c9e50(uVar5,uVar10);
  fVar20 = (float)uVar11;
  uVar11 = FUN_71025c9e50(uVar5,uVar10 + 1);
  if ((float)uVar11 <= fVar20) {
    return 0;
  }
  if (param_3 < *(byte *)(param_2 + 1)) {
    FUN_7101e9c280((param_1 - fVar20) / ((float)uVar11 - fVar20),param_2,param_3,
                   (uint)(0x61 < uVar10));
    return 0;
  }
  return 0;
}

