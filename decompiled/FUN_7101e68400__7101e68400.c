// addr:      7101e68400
// offset:    0x1e68400
// name:      FUN_7101e68400
// mangled:   
// signature: undefined __cdecl FUN_7101e68400(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e68400(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  undefined1 uVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  code *pcVar15;
  ushort *puVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined ***pppuVar21;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ushort *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  float fVar32;
  undefined1 auVar33 [16];
  long ***local_f8;
  undefined **local_f0;
  long local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_64;
  undefined ***pppuVar22;
  
  lVar30 = *(long *)(param_1 + 0x80);
  if (*(byte *)(lVar30 + 0x2c1) < 6) {
    switch(*(byte *)(lVar30 + 0x2c1)) {
    case 0:
      if (*(char *)(lVar30 + 0x270) != '\0') {
        *(undefined1 *)(lVar30 + 0x2c0) = 0;
        FUN_7101e67380(lVar30 + 0x230,1,param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(lVar30 + 0x2c1) = 2;
      }
      break;
    case 1:
      lVar11 = *(long *)(*(long *)(lVar30 + 0x248) + 0x40);
      if (((lVar11 == 0) || (plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8), plVar8 == (long *)0x0))
         || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) {
        if (*(char *)(lVar30 + 0x251) != '\0') {
          FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar30 + 0x248) + 8),0x71042f8a23);
          *(undefined1 *)(lVar30 + 0x251) = 0;
        }
        if (*(int *)(lVar30 + 0x254) != 0) {
          *(int *)(lVar30 + 0x254) = *(int *)(lVar30 + 0x254) + -1;
        }
      }
      break;
    case 2:
      if ((*(long *)(lVar30 + 0x268) != 0) &&
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar30 + 0x268) + 8) + 8), plVar8 != (long *)0x0))
      {
        auVar33 = (**(code **)(*plVar8 + 0x138))();
        param_2 = auVar33._8_8_;
        if ((auVar33._0_8_ & 1) == 0) break;
      }
      FUN_7101e94d80((long *)(lVar30 + 0x248),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      *(undefined1 *)(lVar30 + 0x2c1) = 3;
      break;
    case 3:
      lVar11 = *(long *)(*(long *)(lVar30 + 0x248) + 0x48);
      if ((((lVar11 == 0) || (plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8), plVar8 == (long *)0x0)
           ) || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) &&
         (*(undefined1 *)(lVar30 + 0x2c1) = 1, *(char *)(lVar30 + 0x270) != '\0')) {
        cVar2 = *(char *)(lVar30 + 700);
        FUN_71003a4ca0((uint *)&local_b8,(char *)(lVar30 + 0x27c),(ulong)*(byte *)(lVar30 + 0x230),
                       param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_710377a120(*(long *)(lVar30 + 0x248) + 0x10,(char *)&local_b0,param_3,param_4,param_5,
                       param_6,param_7,param_8);
        lVar11 = *(long *)(*(long *)(*(long *)(lVar30 + 0x248) + 0x18) + 0x10);
        iVar31 = 0;
        if (lVar11 != 0) {
          puVar16 = *(ushort **)(lVar11 + 0xd8);
          if ((puVar16 == (ushort *)0x0) || (uVar23 = *puVar16, uVar23 == 0)) {
            iVar31 = 0;
          }
          else {
            uVar20 = 0;
            iVar31 = 0;
            puVar27 = puVar16;
            do {
              if ((uVar23 | 1) == 0xf) {
                if (uVar23 == 0xe) {
                  iVar24 = 0;
                  iVar26 = (puVar27[3] >> 1) + 4;
                }
                else {
                  iVar24 = 0;
                  iVar26 = 3;
                  if (uVar23 != 0xf) {
                    iVar26 = 0;
                  }
                }
              }
              else {
                iVar24 = 1;
                iVar26 = 1;
              }
              uVar20 = iVar26 + uVar20;
              puVar27 = puVar16 + uVar20;
              iVar31 = iVar24 + iVar31;
              uVar23 = *puVar27;
            } while (uVar23 != 0);
          }
        }
        *(int *)(lVar30 + 600) = iVar31;
        if (cVar2 == '\0') {
          FUN_7101e94ba0((long *)(lVar30 + 0x248),0,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
          cVar2 = *(char *)(lVar30 + 0x270);
        }
        else {
          FUN_7101e949d0((long *)(lVar30 + 0x248),extraout_x1,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          cVar2 = *(char *)(lVar30 + 0x270);
        }
        if (cVar2 != '\0') {
          *(undefined1 *)(lVar30 + 0x270) = 0;
        }
      }
      break;
    case 4:
      lVar11 = *(long *)(*(long *)(lVar30 + 0x248) + 0x48);
      if (((lVar11 == 0) || (plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8), plVar8 == (long *)0x0))
         || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) {
        FUN_7101e67380(lVar30 + 0x230,0,param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(lVar30 + 0x2c1) = 5;
      }
      break;
    case 5:
      if (((*(long *)(lVar30 + 0x268) == 0) ||
          (plVar8 = *(long **)(*(long *)(*(long *)(lVar30 + 0x268) + 8) + 8), plVar8 == (long *)0x0)
          ) || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) {
        *(undefined1 *)(lVar30 + 0x2c1) = 0;
      }
    }
  }
  lVar11 = *(long *)(**(long **)(lVar30 + 0x4d0) + 8);
  if (((*(char *)(lVar11 + 0x388) == '\0') ||
      (uVar17 = (ulong)*(byte *)(*(long **)(lVar30 + 0x4d0) + 1), 2 < uVar17)) ||
     (lVar11 = *(long *)(lVar11 + uVar17 * 8 + 0x78), lVar11 == 0)) {
LAB_7101e68750:
    cVar2 = *(char *)(lVar30 + 0x338);
  }
  else {
    cVar2 = *(char *)(lVar30 + 0x348);
    plVar8 = (long *)(lVar30 + 0x340);
    if (cVar2 == '\x03') {
      plVar8 = *(long **)(*(long *)(*plVar8 + 0x18) + 8);
      if ((plVar8 == (long *)0x0) || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0))
      {
        *(undefined1 *)(lVar30 + 0x348) = 0;
      }
      goto LAB_7101e68750;
    }
    if (cVar2 == '\x02') {
      lVar11 = *plVar8;
      plVar6 = *(long **)(*(long *)(lVar11 + 8) + 8);
      if (plVar6 != (long *)0x0) {
        uVar17 = (**(code **)(*plVar6 + 0x138))();
        if ((uVar17 & 1) == 0) goto LAB_7101e68750;
        lVar11 = *plVar8;
      }
      FUN_710377aee0(0x3f800000,lVar11 + 0x20);
      *(undefined1 *)(lVar30 + 0x348) = 1;
      cVar2 = *(char *)(lVar30 + 0x338);
    }
    else {
      if (cVar2 != '\x01') goto LAB_7101e68750;
      FUN_7101e97fb0(plVar8,lVar11);
      cVar2 = *(char *)(lVar30 + 0x338);
    }
  }
  if (cVar2 != '\0') {
    lVar11 = *(long *)(lVar30 + 0x330);
    plVar8 = *(long **)(*(long *)(lVar11 + 0x18) + 8);
    if (plVar8 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar8 + 0x138))();
      if ((uVar17 & 1) == 0) goto LAB_7101e68788;
      lVar11 = *(long *)(lVar30 + 0x330);
    }
    FUN_710377aee0(0x3f800000,lVar11 + 0x10);
  }
LAB_7101e68788:
  if (7 < *(byte *)(lVar30 + 0x2f0) - 2) goto switchD_7101e687ac_caseD_4;
  plVar8 = (long *)(lVar30 + 0x2e8);
  switch((uint)*(byte *)(lVar30 + 0x2f0)) {
  default:
    if (((*(long *)(*plVar8 + 0x20) == 0) ||
        (plVar8 = *(long **)(*(long *)(*(long *)(*plVar8 + 0x20) + 8) + 8), plVar8 == (long *)0x0))
       || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) {
      uVar10 = 1;
      goto LAB_7101e68b0c;
    }
    break;
  case 3:
    lVar11 = *plVar8;
    if ((*(long *)(lVar11 + 0x20) != 0) &&
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar11 + 0x20) + 8) + 8), plVar6 != (long *)0x0)) {
      uVar17 = (**(code **)(*plVar6 + 0x138))();
      if ((uVar17 & 1) == 0) break;
      lVar11 = *plVar8;
    }
    *(undefined1 *)(lVar30 + 0x2f0) = 0;
    plVar8 = *(long **)(lVar11 + 0x18);
    plVar6 = (long *)plVar8[1];
    if (plVar6 != (long *)0x0) {
      if ((char)plVar8[2] != '\0') {
        plVar14 = *(long **)(*plVar8 + 0x80);
        plVar8 = (long *)(*plVar8 + 0x88);
        if (plVar14 != plVar8) {
          do {
            while( true ) {
              uVar17 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
              if (((uVar17 & 1) != 0) &&
                 (uVar17 = (**(code **)(*plVar6 + 0x120))(plVar6,plVar14[0xd]), (uVar17 & 1) != 0))
              {
                (**(code **)(*(long *)plVar14[0xd] + 0x178))();
                (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
              }
              plVar12 = (long *)plVar14[1];
              if ((long *)plVar14[1] == (long *)0x0) break;
              do {
                plVar14 = plVar12;
                plVar12 = (long *)*plVar14;
              } while ((long *)*plVar14 != (long *)0x0);
LAB_7101e688ec:
              if (plVar14 == plVar8) goto LAB_7101e68904;
            }
            plVar12 = plVar14 + 2;
            plVar18 = (long *)*plVar12;
            if ((long *)*plVar18 != plVar14) {
              do {
                lVar28 = *plVar12;
                plVar12 = (long *)(lVar28 + 0x10);
                plVar14 = (long *)*plVar12;
              } while (*plVar14 != lVar28);
              goto LAB_7101e688ec;
            }
            plVar14 = plVar18;
          } while (plVar18 != plVar8);
LAB_7101e68904:
          plVar6 = *(long **)(*(long *)(lVar11 + 0x18) + 8);
        }
      }
      (**(code **)(*plVar6 + 0x178))(plVar6);
    }
    break;
  case 4:
  case 5:
    break;
  case 6:
    if (((*(long *)(*plVar8 + 0x20) == 0) ||
        (plVar8 = *(long **)(*(long *)(*(long *)(*plVar8 + 0x20) + 8) + 8), plVar8 == (long *)0x0))
       || (uVar17 = (**(code **)(*plVar8 + 0x138))(), (uVar17 & 1) != 0)) {
      uVar10 = 7;
      goto LAB_7101e68b0c;
    }
    break;
  case 7:
    if (*(char *)(lVar30 + 0x2f2) != '\0') {
      FUN_7101e977a0(plVar8,*(byte *)(lVar30 + 0x2f3),param_3,param_4,param_5,param_6,param_7,
                     param_8);
      *(undefined1 *)(lVar30 + 0x2f2) = 0;
    }
    uVar10 = 8;
    goto LAB_7101e68b0c;
  case 8:
    lVar11 = *plVar8;
    if ((*(long *)(lVar11 + 0x20) != 0) &&
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar11 + 0x20) + 8) + 8), plVar6 != (long *)0x0)) {
      uVar17 = (**(code **)(*plVar6 + 0x138))(plVar6);
      if ((uVar17 & 1) == 0) break;
      lVar11 = *plVar8;
    }
    FUN_71037780e0(&local_b8,lVar11,(long ****)"anime_treasure_boxin",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    puVar5 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_f8 = (long ***)&DAT_00000010;
        pppplVar9 = &local_f8;
        uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar17 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x10,pppplVar9,param_4,param_5,param_6,param_7,param_8),
           puVar5 != (undefined8 *)0x0)) goto LAB_7101e689e8;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_7101e689e8:
    ppuVar4 = local_b0;
    *puVar5 = &PTR_FUN_710523d9e8;
    puVar5[1] = 0;
    if (&local_b8 != puVar5) {
      local_b0 = (undefined **)0x0;
      puVar5[1] = ppuVar4;
    }
    plVar6 = *(long **)(*plVar8 + 0x20);
    *(undefined8 **)(*plVar8 + 0x20) = puVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    ppuVar4 = local_b0;
    local_b8 = &PTR_FUN_710523d9e8;
    local_b0 = (undefined **)0x0;
    if (ppuVar4 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar4);
    }
    FUN_710377aee0(0x3f800000,*(long *)(*plVar8 + 0x20));
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar17 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1977b2ae61,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8), (uVar17 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_b8,0x1977b2ae61);
      if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac)) {
        piVar13 = (int *)(local_a8 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar3) {
            *piVar13 = *piVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    else {
      local_98 = 0;
      local_a0 = 0x87650000000000;
      local_90 = 0xffffffffffffffff;
      uStack_88 = 0;
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_80 = 0;
    }
    local_b0 = &PTR_FUN_7104f73d50;
    local_a8 = 0;
    uVar10 = 9;
LAB_7101e68b0c:
    *(undefined1 *)(lVar30 + 0x2f0) = uVar10;
  }
switchD_7101e687ac_caseD_4:
  piVar13 = *(int **)(lVar30 + 800);
  plVar8 = (long *)(lVar30 + 0x310);
  if ((piVar13 != (int *)0x0) && (*(char *)(lVar30 + 0x319) != '\0')) {
    uVar17 = (ulong)*(byte *)(lVar30 + 0x31a);
    lVar11 = *(long *)(piVar13 + 2);
    if ((ulong)(*(long *)(piVar13 + 4) - lVar11) <= uVar17) goto LAB_7101e691cc;
    cVar2 = *(char *)(lVar11 + uVar17);
    if (cVar2 != '\0') {
      *(char *)(lVar11 + uVar17) = cVar2 + -1;
      if (cVar2 != '\x01') goto LAB_7101e68bf8;
      piVar13 = *(int **)(lVar30 + 800);
    }
    if ((ulong)(*(long *)(piVar13 + 10) - *(long *)(piVar13 + 8)) <= uVar17) {
LAB_7101e691cc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7101e98bc0(plVar8,*piVar13,(long ****)(ulong)*(byte *)(*(long *)(piVar13 + 8) + uVar17),
                   param_4,param_5,param_6,param_7,param_8);
    if (*(char *)(lVar30 + 0x319) == '\0') {
      *(undefined2 *)(lVar30 + 0x319) = 1;
    }
    else {
      uVar20 = *(byte *)(lVar30 + 0x31a) + 1;
      if (uVar20 < *(byte *)(lVar30 + 0x318)) {
        *(char *)(lVar30 + 0x31a) = (char)uVar20;
        *(undefined1 *)(lVar30 + 0x319) = 1;
      }
      else {
        uVar17 = *(ulong *)(lVar30 + 800);
        *(undefined1 *)(lVar30 + 0x319) = 0;
        *(undefined8 *)(lVar30 + 800) = 0;
        if (uVar17 != 0) {
          uVar29 = *(ulong *)(uVar17 + 0x20);
          if (uVar29 != 0) {
            *(ulong *)(uVar17 + 0x28) = uVar29;
            FUN_710392eb40(uVar29);
          }
          uVar29 = *(ulong *)(uVar17 + 8);
          if (uVar29 != 0) {
            *(ulong *)(uVar17 + 0x10) = uVar29;
            FUN_710392eb40(uVar29);
          }
          FUN_710392eb40(uVar17);
        }
      }
    }
  }
LAB_7101e68bf8:
  uVar17 = (ulong)*(byte *)(lVar30 + 0x318);
  if (*(char *)(lVar30 + 0x328) != '\0') {
    if (*(byte *)(lVar30 + 0x318) == 0) {
      uVar10 = 0;
    }
    else {
      uVar29 = 0;
      uVar10 = 0;
      do {
        if (3 < uVar29) goto LAB_7101e691c8;
        lVar11 = *(long *)(*plVar8 + uVar29 * 8 + 0x18);
        if ((lVar11 != 0) && (plVar6 = *(long **)(lVar11 + 0x60), plVar6 != (long *)0x0)) {
          plVar14 = *(long **)(plVar6[1] + 8);
          if (plVar14 == (long *)0x0) {
            *(undefined8 *)(lVar11 + 0x60) = 0;
LAB_7101e68c64:
            (**(code **)(*plVar6 + 8))();
          }
          else {
            uVar17 = (**(code **)(*plVar14 + 0x138))(plVar14);
            if ((uVar17 & 1) == 0) {
              uVar10 = 1;
              goto LAB_7101e68c7c;
            }
            plVar6 = *(long **)(lVar11 + 0x60);
            *(undefined8 *)(lVar11 + 0x60) = 0;
            if (plVar6 != (long *)0x0) goto LAB_7101e68c64;
          }
          *(undefined1 *)(lVar11 + 0x54) = 0;
        }
LAB_7101e68c7c:
        uVar17 = (ulong)*(byte *)(lVar30 + 0x318);
        uVar29 = uVar29 + 1;
      } while (uVar29 < uVar17);
    }
    *(undefined1 *)(lVar30 + 0x328) = uVar10;
  }
  if ((int)uVar17 != 0) {
    uVar29 = 0;
    iVar31 = 0;
    do {
      if (3 < uVar29) goto LAB_7101e691c8;
      lVar11 = *(long *)(*plVar8 + uVar29 * 8 + 0x18);
      if ((lVar11 != 0) && (*(long *)(lVar11 + 0x68) != 0)) {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar11 + 0x68) + 8) + 8);
        fVar32 = 0.0;
        if (plVar6 != (long *)0x0) {
          fVar32 = (float)(**(code **)(*plVar6 + 0x198))();
        }
        if (fVar32 < *(float *)(lVar11 + 0x70)) {
          FUN_71003a4ca0((uint *)&local_b8,"se_menu_serch_foot_%d_%d",
                         (ulong)(*(byte *)(lVar30 + 0x32a) + 1),(ulong)(iVar31 + 1),param_4,param_5,
                         param_6,param_7,param_8);
          if (local_b8._4_4_ == 0) {
            uVar17 = 0;
          }
          else {
            uVar20 = 0xffffffff;
            pppuVar22 = &local_b0;
            do {
              pppuVar21 = (undefined ***)((long)pppuVar22 + 1);
              bVar1 = *(byte *)pppuVar22;
              uVar25 = bVar1 + 0x20;
              if (0x19 < bVar1 - 0x41) {
                uVar25 = (uint)bVar1;
              }
              uVar20 = (&DAT_7104754084)[(uVar25 ^ uVar20) & 0xff] ^ uVar20 >> 8;
              pppuVar22 = pppuVar21;
            } while (pppuVar21 < (undefined ***)((long)&local_b0 + (ulong)local_b8._4_4_));
            uVar17 = (ulong)~uVar20;
          }
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
            uVar17 = uVar17 | ((long)(int)local_b8._4_4_ & 0xffU) << 0x20;
            uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar17,(long ****)&DAT_00000004,
                                   param_4,param_5,param_6,param_7,param_8);
            if ((uVar7 & 1) == 0) goto LAB_7101e68e00;
            FUN_71024076d0((undefined4 *)&local_f8,uVar17);
            if (((local_e8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_e0 == DAT_7106dd53ac)) {
              piVar13 = (int *)(local_e8 + 0x38);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar3) {
                  *piVar13 = *piVar13 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          else {
LAB_7101e68e00:
            local_e0 = 0;
            uStack_dc = 0x876500;
            local_f8 = (long ***)((ulong)local_f8 & 0xffffffff00000000);
            local_d0 = 0xffffffffffffffff;
            local_c8 = 0;
            uStack_c0 = 0;
          }
          local_f0 = &PTR_FUN_7104f73d50;
          local_e8 = 0;
          local_d8 = 0;
        }
        plVar6 = *(long **)(*(long *)(*(long *)(lVar11 + 0x68) + 8) + 8);
        fVar32 = 0.0;
        if (plVar6 != (long *)0x0) {
          fVar32 = (float)(**(code **)(*plVar6 + 0x198))();
        }
        *(float *)(lVar11 + 0x70) = fVar32;
        uVar17 = (ulong)*(byte *)(lVar30 + 0x318);
      }
      uVar29 = uVar29 + 1;
      iVar31 = (int)uVar29;
    } while (uVar29 < uVar17);
  }
  lVar28 = *(long *)(lVar30 + 0x2d8);
  lVar11 = *(long *)(lVar28 + 0x20);
  if (lVar11 != 0) {
    if (*(char *)(lVar30 + 0x2e0) == '\x01') {
      plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8);
      if (plVar8 == (long *)0x0) {
        fVar32 = 0.0;
      }
      else {
        fVar32 = (float)(**(code **)(*plVar8 + 0x198))();
      }
      lVar11 = *(long *)(lVar28 + 0x30);
      if ((lVar11 != *(long *)(lVar28 + 0x28)) && (*(float *)(lVar11 + -0x10) <= fVar32)) {
        uVar17 = *(ulong *)(lVar11 + -8);
        *(float **)(lVar28 + 0x30) = (float *)(lVar11 + -0x10);
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar29 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar17,(long ****)&DAT_00000004,
                                    param_4,param_5,param_6,param_7,param_8), (uVar29 & 1) != 0)) {
          FUN_71024076d0((undefined4 *)&local_b8,uVar17);
          if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac))
          {
            piVar13 = (int *)(local_a8 + 0x38);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar3) {
                *piVar13 = *piVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        else {
          local_a0 = 0x87650000000000;
          local_90 = 0xffffffffffffffff;
          uStack_88 = 0;
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          local_80 = 0;
        }
        local_b0 = &PTR_FUN_7104f73d50;
        local_a8 = 0;
        local_98 = 0;
      }
      lVar28 = *(long *)(lVar30 + 0x2d8);
      lVar11 = *(long *)(lVar28 + 0x20);
    }
    plVar8 = *(long **)(*(long *)(lVar11 + 8) + 8);
    if (plVar8 != (long *)0x0) {
      uVar17 = (**(code **)(*plVar8 + 0x138))();
      if ((uVar17 & 1) == 0) goto LAB_7101e68fc4;
      lVar28 = *(long *)(lVar30 + 0x2d8);
    }
    plVar8 = *(long **)(lVar28 + 0x20);
    *(undefined8 *)(lVar28 + 0x20) = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
  }
LAB_7101e68fc4:
  if (*(uint *)(lVar30 + 0x454) < 0x13) {
    uVar20 = *(uint *)(lVar30 + (long)(int)*(uint *)(lVar30 + 0x454) * 4 + 0x408);
    if (*(uint *)(lVar30 + 0x458) != uVar20) {
      *(uint *)(lVar30 + 0x460) = *(uint *)(lVar30 + 0x458);
      *(uint *)(lVar30 + 0x458) = uVar20;
      if (5 < uVar20) goto LAB_7101e691c8;
      pcVar15 = *(code **)(lVar30 + 0x398);
      lVar11 = lVar30 + (long)(int)uVar20 * 0x10;
      uVar19 = *(undefined8 *)(lVar11 + 0x3b0);
      *(undefined8 *)(lVar30 + 0x388) = *(undefined8 *)(lVar11 + 0x3a8);
      *(undefined8 *)(lVar30 + 0x390) = uVar19;
      uVar17 = *(ulong *)(lVar30 + 0x3a0) & 1;
      if (uVar17 != 0 || pcVar15 != (code *)0x0) {
        if (uVar17 != 0) {
          pcVar15 = *(code **)(pcVar15 +
                              *(long *)(*(long *)(lVar30 + 0x380) +
                                       ((long)*(ulong *)(lVar30 + 0x3a0) >> 1)));
        }
        (*pcVar15)();
      }
      *(undefined4 *)(lVar30 + 0x45c) = 0;
    }
    if (*(char *)(lVar30 + 0x464) != '\0') {
      pcVar15 = *(code **)(lVar30 + 0x398);
      uVar17 = *(ulong *)(lVar30 + 0x3a0) & 1;
      if (uVar17 != 0 || pcVar15 != (code *)0x0) {
        if (uVar17 != 0) {
          pcVar15 = *(code **)(pcVar15 +
                              *(long *)(*(long *)(lVar30 + 0x380) +
                                       ((long)*(ulong *)(lVar30 + 0x3a0) >> 1)));
        }
        (*pcVar15)();
      }
      *(undefined4 *)(lVar30 + 0x45c) = 0;
      *(undefined1 *)(lVar30 + 0x464) = 0;
    }
    if (*(long *)(lVar30 + 0x380) != 0) {
      pcVar15 = *(code **)(lVar30 + 0x388);
      uVar17 = *(ulong *)(lVar30 + 0x390) & 1;
      if (uVar17 != 0 || pcVar15 != (code *)0x0) {
        if (uVar17 != 0) {
          pcVar15 = *(code **)(pcVar15 +
                              *(long *)(*(long *)(lVar30 + 0x380) +
                                       ((long)*(ulong *)(lVar30 + 0x390) >> 1)));
        }
        (*pcVar15)();
      }
    }
    *(int *)(lVar30 + 0x45c) = *(int *)(lVar30 + 0x45c) + 1;
    if (*(uint *)(lVar30 + 0x1cc) < 0x13) {
      uVar20 = *(uint *)(lVar30 + (long)(int)*(uint *)(lVar30 + 0x1cc) * 4 + 0x180);
      if (*(uint *)(lVar30 + 0x1d0) != uVar20) {
        *(uint *)(lVar30 + 0x1d8) = *(uint *)(lVar30 + 0x1d0);
        *(uint *)(lVar30 + 0x1d0) = uVar20;
        if (0x14 < uVar20) goto LAB_7101e691c8;
        lVar11 = lVar30 + (long)(int)uVar20 * 0x10;
        uVar19 = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(lVar30 + 0x10) = *(undefined8 *)(lVar11 + 0x30);
        *(undefined8 *)(lVar30 + 0x18) = uVar19;
        pcVar15 = *(code **)(lVar30 + 0x20);
        uVar17 = *(ulong *)(lVar30 + 0x28) & 1;
        if (uVar17 != 0 || pcVar15 != (code *)0x0) {
          if (uVar17 != 0) {
            pcVar15 = *(code **)(pcVar15 +
                                *(long *)(*(long *)(lVar30 + 8) +
                                         ((long)*(ulong *)(lVar30 + 0x28) >> 1)));
          }
          (*pcVar15)();
        }
        *(undefined4 *)(lVar30 + 0x1d4) = 0;
      }
      if (*(char *)(lVar30 + 0x1dc) != '\0') {
        pcVar15 = *(code **)(lVar30 + 0x20);
        uVar17 = *(ulong *)(lVar30 + 0x28) & 1;
        if (uVar17 != 0 || pcVar15 != (code *)0x0) {
          if (uVar17 != 0) {
            pcVar15 = *(code **)(pcVar15 +
                                *(long *)(*(long *)(lVar30 + 8) +
                                         ((long)*(ulong *)(lVar30 + 0x28) >> 1)));
          }
          (*pcVar15)();
        }
        *(undefined4 *)(lVar30 + 0x1d4) = 0;
        *(undefined1 *)(lVar30 + 0x1dc) = 0;
      }
      if (*(long *)(lVar30 + 8) != 0) {
        pcVar15 = *(code **)(lVar30 + 0x10);
        uVar17 = *(ulong *)(lVar30 + 0x18) & 1;
        if (uVar17 != 0 || pcVar15 != (code *)0x0) {
          if (uVar17 != 0) {
            pcVar15 = *(code **)(pcVar15 +
                                *(long *)(*(long *)(lVar30 + 8) +
                                         ((long)*(ulong *)(lVar30 + 0x18) >> 1)));
          }
          (*pcVar15)();
        }
      }
      *(int *)(lVar30 + 0x1d4) = *(int *)(lVar30 + 0x1d4) + 1;
      return;
    }
  }
LAB_7101e691c8:
                    /* WARNING: Subroutine does not return */
  abort();
}

