// addr:      7101902da0
// offset:    0x1902da0
// name:      FUN_7101902da0
// mangled:   
// signature: undefined __cdecl FUN_7101902da0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101902da0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined **ppuVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined ***pppuVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  ushort uVar15;
  undefined2 uVar16;
  long lVar17;
  char *pcVar18;
  short *psVar19;
  int *piVar20;
  long *plVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  long ***local_60;
  undefined4 local_54;
  
  lVar23 = *(long *)(param_1 + 400);
  lVar17 = *(long *)(lVar23 + 0x80);
  if (*(int *)(param_1 + 0x17c) != 0) {
    if (*(int *)(lVar17 + 0x120) != 9) {
      return;
    }
    if (*(char *)(lVar17 + 0x5f8) != '\x01') {
      if (*(char *)(lVar17 + 0x5f8) != '\x05') {
        return;
      }
      uVar10 = FUN_7101903e70(param_1);
      if ((uVar10 & 1) != 0) {
        *(undefined2 *)(param_1 + 0x1bc) = 1;
        return;
      }
    }
    if (*(uint *)(param_1 + 0x174) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x174) * 4 + 0x128) = 4;
      return;
    }
    goto LAB_710190377c;
  }
  if (*(char *)(lVar17 + 0x5f9) == '\0') {
    if ((*(char *)(param_1 + 0x1a8) != '\0') &&
       (uVar9 = FUN_710327de70(*(long *)(DAT_710532f730 + 8) + 0x310,*(ulong *)(param_1 + 0x1b0)),
       (uVar9 & 0xff) != 0)) {
      uVar8 = uVar9 - 1;
      if ((uVar8 & 0xff) < 0x10) {
        if ((uVar9 & 0xff) < 0xe) {
          if (0xc < (uVar8 & 0xff)) goto LAB_710190377c;
          uVar15 = (ushort)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) +
                                    ((ulong)uVar8 & 0xff));
          if (uVar15 != 2) goto LAB_7101902e58;
LAB_7101902efc:
          uVar16 = 0x201;
LAB_7101902f00:
          *(undefined2 *)(param_1 + 0x1bc) = uVar16;
        }
        else {
          uVar9 = uVar9 - 0xe;
          if ((~uVar9 & 0xff) != 0) {
            if (2 < (uVar9 & 0xff)) goto LAB_710190377c;
            uVar15 = *(ushort *)
                      (*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + (ulong)(byte)uVar9 * 2 +
                      0xe);
            if (uVar15 == 2) goto LAB_7101902efc;
LAB_7101902e58:
            if (uVar15 == 1) {
              uVar16 = 0x301;
              goto LAB_7101902f00;
            }
          }
        }
      }
    }
  }
  else if ((*(char *)(lVar17 + 0x5f9) == '\x01') && (*(char *)(param_1 + 0x1a0) != '\0')) {
    uVar10 = (ulong)*(ushort *)(param_1 + 0x1a2);
    lVar17 = **(long **)(param_1 + 0x1c0);
    if ((lVar17 + uVar10 * 4 != 0) &&
       (uVar10 < (ulong)((*(long **)(param_1 + 0x1c0))[1] - lVar17 >> 2))) {
      bVar4 = *(byte *)(lVar17 + uVar10 * 4 + 2);
      uVar15 = (ushort)bVar4;
      if (bVar4 == 2) goto LAB_7101902efc;
      goto LAB_7101902e58;
    }
  }
  lVar17 = *(long *)(lVar23 + 0x80);
  if (*(char *)(lVar17 + 0x5f9) == '\0') {
    if (*(char *)(param_1 + 0x1a8) != '\0') {
      uVar10 = *(ulong *)(param_1 + 0x1b0);
      lVar23 = *(long *)(DAT_710532f730 + 8) + 0x310;
      uVar9 = FUN_710327de70(lVar23,uVar10);
      if ((uVar9 & 0xff) != 0) {
        uVar8 = uVar9 - 1;
        if ((uVar8 & 0xff) < 0x10) {
          if ((uVar9 & 0xff) < 0xe) {
            if (0xc < (uVar8 & 0xff)) goto LAB_710190377c;
            lVar24 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
            if (*(char *)(lVar24 + ((ulong)uVar8 & 0xff)) != '\0') {
LAB_7101903100:
              uVar8 = FUN_710327de70(lVar23,uVar10);
              uVar9 = uVar8 - 1;
              if ((uVar9 & 0xff) < 0x10) {
                if ((uVar8 & 0xff) < 0xe) {
                  if (0xc < (uVar9 & 0xff)) goto LAB_710190377c;
                  cVar3 = *(char *)(lVar24 + ((ulong)uVar9 & 0xff));
                  if (cVar3 != '\0') {
                    *(char *)(lVar24 + ((ulong)uVar9 & 0xff)) = cVar3 + -1;
                  }
                }
                else {
                  uVar8 = uVar8 - 0xe;
                  if ((~uVar8 & 0xff) != 0) {
                    if (2 < (uVar8 & 0xff)) goto LAB_710190377c;
                    psVar19 = (short *)(lVar24 + (ulong)(byte)uVar8 * 2 + 0xe);
                    sVar5 = *psVar19;
                    if (sVar5 != 0) {
                      *psVar19 = sVar5 + -1;
                    }
                  }
                }
              }
              uVar8 = FUN_710327da30(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),uVar10);
              plVar21 = DAT_7105314510;
              uVar9 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) + uVar8;
              if (0x98967e < uVar9) {
                uVar9 = 9999999;
              }
              *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) = uVar9;
              lVar17 = *(long *)**(undefined8 **)(**(long **)(*plVar21 + 0x188) + 8);
              uVar8 = *(int *)(lVar17 + 0x40) + uVar8;
              if (0x3b9ac9fe < uVar8) {
                uVar8 = 999999999;
              }
              *(uint *)(lVar17 + 0x40) = uVar8;
              goto LAB_71019031f4;
            }
          }
          else {
            uVar9 = uVar9 - 0xe;
            if ((~uVar9 & 0xff) != 0) {
              if (2 < (uVar9 & 0xff)) goto LAB_710190377c;
              lVar24 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
              if (*(short *)(lVar24 + (ulong)(byte)uVar9 * 2 + 0xe) != 0) goto LAB_7101903100;
            }
          }
        }
      }
    }
  }
  else if (*(char *)(lVar17 + 0x5f9) == '\x01') {
    if (*(char *)(param_1 + 0x1a0) != '\0') {
      uVar10 = (ulong)*(ushort *)(param_1 + 0x1a2);
      lVar23 = **(long **)(param_1 + 0x1c0);
      puVar1 = (ushort *)(lVar23 + uVar10 * 4);
      if (((puVar1 != (ushort *)0x0) &&
          (uVar10 < (ulong)((*(long **)(param_1 + 0x1c0))[1] - lVar23 >> 2))) &&
         (*(char *)(lVar23 + uVar10 * 4 + 2) != '\0')) {
        uVar15 = *puVar1;
        FUN_71025289c0(*(long *)(*DAT_7105329f98 + 0x30),uVar15);
        uVar8 = FUN_7101dcf6a0(uVar15);
        plVar21 = DAT_7105314510;
        uVar9 = *(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) + uVar8;
        if (0x98967e < uVar9) {
          uVar9 = 9999999;
        }
        *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) = uVar9;
        lVar17 = *(long *)**(undefined8 **)(**(long **)(*plVar21 + 0x188) + 8);
        uVar8 = *(int *)(lVar17 + 0x40) + uVar8;
        if (0x3b9ac9fe < uVar8) {
          uVar8 = 999999999;
        }
        *(uint *)(lVar17 + 0x40) = uVar8;
        lVar17 = **(long **)(param_1 + 0x1c0);
        uVar15 = *(ushort *)(param_1 + 0x1a2);
        uVar10 = (*(long **)(param_1 + 0x1c0))[1] - lVar17;
        if ((uint)uVar15 < (uint)(uVar10 >> 2)) {
          if ((ulong)((long)uVar10 >> 2) <= (ulong)uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          pcVar18 = (char *)(lVar17 + (ulong)uVar15 * 4 + 2);
          cVar3 = *pcVar18;
          if (cVar3 != '\0') {
            *pcVar18 = cVar3 + -1;
          }
        }
        goto LAB_71019031f4;
      }
    }
  }
  else {
LAB_71019031f4:
    lVar17 = DAT_710532f730;
    plVar21 = DAT_7105314510;
    lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
    puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x248);
    uVar10 = FUN_71032673c0(lVar23,0x149039083a);
    uVar10 = FUN_7103267ce0(lVar23,uVar10);
    uVar9 = (uint)uVar10;
    if (0x94 < (uint)uVar10) {
      uVar9 = 0x95;
    }
    iVar2 = *(int *)(*(long *)*puVar25 + (ulong)uVar9 * 4 + 0x4c);
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x348);
    puVar25 = *(undefined8 **)(*plVar21 + 0x248);
    uVar10 = FUN_71032673c0(lVar17,0x149039083a);
    uVar10 = FUN_7103267ce0(lVar17,uVar10);
    uVar9 = (uint)uVar10;
    if (0x94 < uVar9) {
      uVar9 = 0x95;
    }
    *(int *)(*(long *)*puVar25 + (ulong)uVar9 * 4 + 0x4c) = iVar2 + 1;
    lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
    uVar10 = FUN_71032673c0(lVar17,0x149039083a);
    uVar10 = FUN_7103267960(lVar17,uVar10);
    puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x248);
    lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
    uVar11 = FUN_71032673c0(lVar17,0x149039083a);
    uVar11 = FUN_7103267ce0(lVar17,uVar11);
    uVar9 = (uint)uVar11;
    if (0x94 < uVar9) {
      uVar9 = 0x95;
    }
    if ((uint)uVar10 <= *(uint *)(*(long *)*puVar25 + (ulong)uVar9 * 4 + 0x4c)) {
      FUN_710177a5c0(0x3d);
    }
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x16fad1a516,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8), (uVar10 & 1) != 0)) {
      FUN_71024076d0(local_b0,0x16fad1a516);
      if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)) {
        piVar20 = (int *)(local_a0 + 0x38);
        do {
          cVar3 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar7) {
            *piVar20 = *piVar20 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      local_98 = 0x87650000000000;
      local_88 = 0xffffffffffffffff;
      uStack_80 = 0;
      local_b0[0] = 0;
      local_78 = 0;
    }
    local_a8 = &PTR_FUN_7104f73d50;
    local_a0 = 0;
    local_90 = 0;
    lVar17 = *(long *)(*(long *)(param_1 + 400) + 0x80);
  }
  bVar4 = *(byte *)(param_1 + 0x1bd);
  FUN_7103778300(0x3f800000,*(long *)(lVar17 + 0x4d8),0x71044019da);
  uVar10 = (ulong)*(byte *)(lVar17 + 0x584);
  if (1 < uVar10) goto LAB_710190377c;
  lVar23 = lVar17 + uVar10 * 0x30;
  ppppbVar14 = (byte ****)(ulong)*(uint *)(lVar17 + 0x4c0);
  pppplVar13 = (long ****)0x1;
  FUN_710377a280(lVar23 + 0x530,(byte *)(lVar17 + 0x480),1);
  FUN_71037780e0(&local_70,lVar23 + 0x520,(long ****)"anim_start",pppplVar13,ppppbVar14,param_5,
                 param_6,param_7,param_8);
  pppuVar12 = (undefined ***)
              FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_5,param_6,param_7,param_8);
  if (pppuVar12 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_00000010;
      pppplVar13 = &local_60;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar11 & 1) != 0) &&
         (pppuVar12 = (undefined ***)
                      FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_5,param_6,param_7,param_8
                                    ), pppuVar12 != (undefined ***)0x0)) goto LAB_7101903498;
    }
    pppuVar12 = (undefined ***)0x0;
  }
LAB_7101903498:
  ppuVar6 = local_68;
  *pppuVar12 = &PTR_FUN_710523d9e8;
  pppuVar12[1] = (undefined **)0x0;
  if (&local_70 != pppuVar12) {
    local_68 = (undefined **)0x0;
    pppuVar12[1] = ppuVar6;
  }
  lVar23 = lVar17 + uVar10 * 0x30;
  plVar21 = *(long **)(lVar23 + 0x540);
  *(undefined ****)(lVar23 + 0x540) = pppuVar12;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 8))(plVar21);
  }
  ppuVar6 = local_68;
  local_70 = &PTR_FUN_710523d9e8;
  local_68 = (undefined **)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar6);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar23 + 0x540));
  lVar23 = lVar17 + uVar10 * 0x30;
  *(undefined2 *)(lVar23 + 0x548) = 0;
  *(undefined1 *)(lVar23 + 0x54a) = 1;
  if (*(long *)(lVar17 + 0x4e0) == 0) {
    FUN_71037780e0(&local_70,lVar17 + 0x458,(long ****)"anim_count",pppplVar13,ppppbVar14,param_5,
                   param_6,param_7,param_8);
    pppuVar12 = (undefined ***)
                FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_5,param_6,param_7,param_8);
    if (pppuVar12 == (undefined ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = (long ***)&DAT_00000010;
        pppplVar13 = &local_60;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar10 & 1) != 0) &&
           (pppuVar12 = (undefined ***)
                        FUN_710392e290(0x10,0x10,pppplVar13,ppppbVar14,param_5,param_6,param_7,
                                       param_8), pppuVar12 != (undefined ***)0x0))
        goto LAB_7101903584;
      }
      pppuVar12 = (undefined ***)0x0;
    }
LAB_7101903584:
    ppuVar6 = local_68;
    *pppuVar12 = &PTR_FUN_710523d9e8;
    pppuVar12[1] = (undefined **)0x0;
    if (&local_70 != pppuVar12) {
      local_68 = (undefined **)0x0;
      pppuVar12[1] = ppuVar6;
    }
    plVar21 = *(long **)(lVar17 + 0x4e0);
    *(undefined ****)(lVar17 + 0x4e0) = pppuVar12;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 8))(plVar21);
    }
    ppuVar6 = local_68;
    local_70 = &PTR_FUN_710523d9e8;
    local_68 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar6);
    }
    FUN_710377aee0(0x3f800000,*(long *)(lVar17 + 0x4e0));
  }
  cVar3 = '\0';
  if ((byte)(*(char *)(lVar17 + 0x584) + 1U) < 2) {
    cVar3 = *(char *)(lVar17 + 0x584) + '\x01';
  }
  *(char *)(lVar17 + 0x584) = cVar3;
  if (1 < (ulong)*(byte *)(lVar17 + 0x1d0)) goto LAB_710190377c;
  plVar21 = *(long **)(lVar17 + (ulong)*(byte *)(lVar17 + 0x1d0) * 8 + 0x1c0);
  uVar10 = (**(code **)(*plVar21 + 0x80))(plVar21);
  if ((uVar10 & 0xff) != 0) {
    (**(code **)(*plVar21 + 0x28))(plVar21,uVar10 >> 0x10 & 0xffff,0);
  }
  *(undefined1 *)(lVar17 + 0x5f8) = 0;
  if (bVar4 == 3) {
    if (1 < (ulong)*(byte *)(lVar17 + 0x1d0)) goto LAB_710190377c;
    (**(code **)(**(long **)(lVar17 + (ulong)*(byte *)(lVar17 + 0x1d0) * 8 + 0x1c0) + 0x48))();
  }
  if (*(char *)(lVar17 + 0x5fe) != '\0') {
    *(undefined1 *)(lVar17 + 0x5f8) = 1;
    *(undefined1 *)(lVar17 + 0x5fe) = 0;
    *(undefined8 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined8 *)(lVar17 + 0x114) = 0;
    *(undefined8 *)(lVar17 + 0x10c) = 0;
    *(undefined8 *)(lVar17 + 0x104) = 0;
    *(undefined8 *)(lVar17 + 0x120) = 0xffffffff;
    *(undefined4 *)(lVar17 + 0x128) = 0xffffffff;
    *(undefined4 *)(lVar17 + 0x11c) = 0;
    *(undefined8 *)(lVar17 + 0xfc) = 0;
    *(undefined8 *)(lVar17 + 0xf4) = 0;
    *(undefined8 *)(lVar17 + 0xec) = 0;
    *(undefined8 *)(lVar17 + 0xe4) = 0;
    *(undefined8 *)(lVar17 + 0xdc) = 0;
    *(undefined8 *)(lVar17 + 0xd4) = 0;
    *(undefined1 *)(lVar17 + 300) = 0;
    *(undefined4 *)(lVar17 + 0xd0) = 9;
    goto LAB_710190375c;
  }
  if (bVar4 < 4) {
    lVar23 = *DAT_7105329fa0;
    switch(bVar4) {
    case 0:
      bVar4 = *(byte *)(lVar23 + 0x120);
      break;
    case 1:
      bVar4 = *(byte *)(lVar23 + 0x121);
      break;
    case 2:
      bVar7 = *(char *)(lVar17 + 0x5f9) != '\x01';
      if (bVar7) {
        *(uint *)(lVar17 + 0x600) = (uint)*(byte *)(lVar23 + 0x120);
      }
      *(bool *)(lVar17 + 0x604) = !bVar7;
      goto LAB_7101903744;
    case 3:
      *(uint *)(lVar17 + 0x600) = (uint)*(byte *)(lVar23 + 0x122);
      *(undefined1 *)(lVar17 + 0x604) = 0;
      goto LAB_7101903720;
    }
    *(uint *)(lVar17 + 0x600) = (uint)bVar4;
    *(undefined1 *)(lVar17 + 0x604) = 0;
LAB_7101903744:
    uVar9 = *(uint *)(lVar17 + 0x11c);
    if (0x12 < uVar9) {
LAB_710190377c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar22 = 5;
  }
  else {
LAB_7101903720:
    uVar9 = *(uint *)(lVar17 + 0x11c);
    if (0x12 < uVar9) goto LAB_710190377c;
    uVar22 = 6;
  }
  *(undefined4 *)(lVar17 + (long)(int)uVar9 * 4 + 0xd0) = uVar22;
LAB_710190375c:
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  return;
}

