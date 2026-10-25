// addr:      7101e607f0
// offset:    0x1e607f0
// name:      FUN_7101e607f0
// mangled:   
// signature: undefined __cdecl FUN_7101e607f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e607f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  byte bVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar8;
  byte ****ppppbVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  undefined1 uVar14;
  long lVar15;
  ushort *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  ushort *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 auVar27 [16];
  long ***local_a8;
  undefined **local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if (*(int *)(param_1 + 0x1a4) == 0) {
    uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x298) + 1);
    if ((uVar4 < 3) &&
       (lVar15 = *(long *)(*(long *)(**(long **)(param_1 + 0x298) + 8) + uVar4 * 8 + 0x78),
       lVar15 != 0)) {
      if (((*(short *)(lVar15 + 0x20) == -1) && (*(short *)(lVar15 + 0x38) == -1)) &&
         (*(short *)(lVar15 + 0x50) == -1)) {
        bVar2 = *(short *)(lVar15 + 0x68) != -1;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = false;
    }
    FUN_71003a4ca0((uint *)&local_a8,"cam_searchfield%d_dialog_member",uVar4,param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_710377a120(*(long *)(param_1 + 0x210) + 0x10,(char *)&local_a0,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x18) + 0x10);
    iVar11 = 0;
    if (lVar15 != 0) {
      puVar16 = *(ushort **)(lVar15 + 0xd8);
      if ((puVar16 == (ushort *)0x0) || (uVar21 = *puVar16, uVar21 == 0)) {
        iVar11 = 0;
      }
      else {
        uVar10 = 0;
        iVar11 = 0;
        puVar24 = puVar16;
        do {
          if ((uVar21 | 1) == 0xf) {
            if (uVar21 == 0xe) {
              iVar22 = 0;
              iVar23 = (puVar24[3] >> 1) + 4;
            }
            else {
              iVar22 = 0;
              iVar23 = 3;
              if (uVar21 != 0xf) {
                iVar23 = 0;
              }
            }
          }
          else {
            iVar22 = 1;
            iVar23 = 1;
          }
          uVar10 = iVar23 + uVar10;
          puVar24 = puVar16 + uVar10;
          iVar11 = iVar22 + iVar11;
          uVar21 = *puVar24;
        } while (uVar21 != 0);
      }
    }
    *(int *)(param_1 + 0x220) = iVar11;
    FUN_7101e94ba0((long *)(param_1 + 0x210),0,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar26 = *(undefined8 **)(param_1 + 0x1c8);
    plVar5 = (long *)*puVar26;
    (**(code **)(*plVar5 + 0x60))(plVar5,1);
    plVar5 = (long *)*puVar26;
    (**(code **)(*plVar5 + 0x70))(plVar5,1);
    if (*(char *)(param_1 + 0x271) == '\0') {
      bVar7 = 0;
    }
    else {
      bVar7 = *(byte *)(param_1 + 0x272);
    }
    uVar8 = 0;
    FUN_7101e9ba80((long *)(param_1 + 0x1c8),bVar7,0);
    bVar7 = bVar2 ^ 1;
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x230) + 0x60))
              ((long *)**(undefined8 **)(param_1 + 0x230),bVar7);
    if (*(char *)(param_1 + 0x1f8) != '\0') {
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1f0),0x71043e07cf);
      pcVar13 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
      bVar3 = *pcVar13 != '\x01';
      FUN_710377a120((long)(pcVar13 + (ulong)bVar3 * 0x48 + 0x18),"cam_searchfield_go",uVar8,param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)(pcVar13 + (ulong)bVar3 * 0x48 + 0x28),"cam_searchfield_go",uVar8,param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)(pcVar13 + (ulong)bVar3 * 0x48 + 0x38),"cam_searchfield_go",uVar8,param_4
                     ,param_5,param_6,param_7,param_8);
      pcVar13 = (char *)(*(long *)(param_1 + 0x1e0) + 8);
      cVar1 = *pcVar13;
      FUN_7103778300(0x3f800000,*(long *)(pcVar13 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                     0x710433a880);
      FUN_7103778300(0x3f800000,*(long *)(pcVar13 + (ulong)(cVar1 != '\x01') * 0x48 + 0x10),
                     0x7104433776);
      FUN_7101e96fc0(param_1 + 0x1d8,'\x01',uVar8,param_4,param_5,param_6,param_7,param_8);
      ppppbVar9 = (byte ****)0x0;
      FUN_7103771930(**(long **)(param_1 + 0x1e0),
                     (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),
                     (long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,param_8);
      local_a8 = (long ***)0xf57a523f5;
      FUN_7103772070(**(long **)(param_1 + 0x1e0),
                     (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),&local_a8,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      plVar5 = *(long **)(param_1 + 0x1e0);
      bVar3 = (char)plVar5[1] != '\0';
      lVar15 = *(long *)(*plVar5 + 0x1b8);
      if (lVar15 != 0) {
        lVar18 = *plVar5 + 0x1b8;
        lVar25 = lVar18;
        lVar20 = lVar15;
        do {
          uVar10 = (uint)bVar3;
          if ((int)uVar10 <= *(int *)(lVar20 + 0x20)) {
            lVar25 = lVar20;
          }
          lVar20 = *(long *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x20) < (int)uVar10) * 8);
        } while (lVar20 != 0);
        uVar10 = (uint)bVar3;
        if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) <= (int)uVar10)) &&
           (plVar19 = *(long **)(lVar25 + 0x28), plVar19 != (long *)0x0)) {
          (**(code **)(*plVar19 + 0x208))(plVar19,0);
          (**(code **)(*plVar19 + 0x388))(plVar19,1,0);
          lVar18 = *plVar5 + 0x1b8;
          lVar15 = *(long *)(*plVar5 + 0x1b8);
        }
        lVar25 = lVar18;
        if (lVar15 != 0) {
          do {
            if ((int)uVar10 <= *(int *)(lVar15 + 0x20)) {
              lVar25 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x20) < (int)uVar10) * 8);
          } while (lVar15 != 0);
          if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) <= (int)uVar10)) &&
             (plVar5 = *(long **)(lVar25 + 0x28), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x1f8))(plVar5,0);
            (**(code **)(*plVar5 + 0x388))(plVar5,1,0);
          }
        }
      }
      *(undefined1 *)(*(long *)(param_1 + 0x1e0) + 0x98) = 0;
    }
    plVar5 = *(long **)(param_1 + 0x1e0);
    bVar3 = (char)plVar5[1] != '\x01';
    lVar15 = *(long *)(*plVar5 + 0x1b8);
    if (lVar15 != 0) {
      lVar18 = *plVar5 + 0x1b8;
      lVar25 = lVar18;
      lVar20 = lVar15;
      do {
        uVar10 = (uint)bVar3;
        if ((int)uVar10 <= *(int *)(lVar20 + 0x20)) {
          lVar25 = lVar20;
        }
        lVar20 = *(long *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x20) < (int)uVar10) * 8);
      } while (lVar20 != 0);
      uVar10 = (uint)bVar3;
      if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) <= (int)uVar10)) &&
         (plVar19 = *(long **)(lVar25 + 0x28), plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x208))(plVar19,bVar2);
        (**(code **)(*plVar19 + 0x388))(plVar19,bVar7,0);
        lVar18 = *plVar5 + 0x1b8;
        lVar15 = *(long *)(*plVar5 + 0x1b8);
      }
      lVar25 = lVar18;
      if (lVar15 != 0) {
        do {
          if ((int)uVar10 <= *(int *)(lVar15 + 0x20)) {
            lVar25 = lVar15;
          }
          lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x20) < (int)uVar10) * 8);
        } while (lVar15 != 0);
        if (((lVar25 != lVar18) && (*(int *)(lVar25 + 0x20) <= (int)uVar10)) &&
           (plVar5 = *(long **)(lVar25 + 0x28), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x1f8))(plVar5,bVar2);
          (**(code **)(*plVar5 + 0x388))(plVar5,bVar7,0);
        }
      }
    }
    puVar26 = *(undefined8 **)(param_1 + 0x1e0);
    plVar5 = (long *)*puVar26;
    (**(code **)(*plVar5 + 0x60))(plVar5,0);
    plVar5 = (long *)*puVar26;
    (**(code **)(*plVar5 + 0x70))(plVar5,0);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1b0),1);
    return;
  }
  lVar25 = *(long *)**(undefined8 **)(param_1 + 0x1b0);
  lVar15 = **(long **)(param_1 + 0x1e0);
  lVar18 = *(long *)(lVar15 + 0x1b8);
  bVar2 = (char)(*(long **)(param_1 + 0x1e0))[1] != '\x01';
  if (lVar18 == 0) {
LAB_7101e60950:
    if ((*(char *)(*(long *)(lVar25 + 0x600) + 0x4aa) != '\0') &&
       ((*(byte *)(*(long *)(lVar25 + 0x600) + 0x1b4) >> 1 & 1) != 0)) {
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (long ****)&DAT_00000004;
        uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xed63546f2,(long ****)&DAT_00000004,
                               param_4,param_5,param_6,param_7,param_8);
        param_2 = extraout_x1;
        if ((uVar4 & 1) == 0) goto LAB_7101e60b00;
        FUN_71024076d0((undefined4 *)&local_a8,0xed63546f2);
        param_2 = extraout_x1_00;
        if (((local_98 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_90 == DAT_7106dd53ac)) {
          piVar12 = (int *)(local_98 + 0x38);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar2) {
              *piVar12 = *piVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
      }
      else {
LAB_7101e60b00:
        local_90 = 0x87650000000000;
        local_80 = 0xffffffffffffffff;
        uStack_78 = 0;
        local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
        local_70 = 0;
      }
      local_a0 = &PTR_FUN_7104f73d50;
      local_98 = 0;
      local_88 = 0;
    }
  }
  else {
    lVar15 = lVar15 + 0x1b8;
    lVar20 = lVar15;
    do {
      uVar10 = (uint)bVar2;
      if ((int)uVar10 <= *(int *)(lVar18 + 0x20)) {
        lVar20 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < (int)uVar10) * 8);
    } while (lVar18 != 0);
    if (((lVar20 == lVar15) || ((int)(uint)bVar2 < *(int *)(lVar20 + 0x20))) ||
       (*(long **)(lVar20 + 0x28) == (long *)0x0)) goto LAB_7101e60950;
    auVar27 = (**(code **)(**(long **)(lVar20 + 0x28) + 0x210))();
    param_2 = auVar27._8_8_;
    if ((auVar27._0_8_ & 1) == 0) goto LAB_7101e60950;
    if (*(int *)(**(long **)(param_1 + 0x1c8) + 0x254) == -1) {
      if (((*(int *)(**(long **)(param_1 + 0x1e0) + 0x254) != -1) &&
          (*(char *)(*(long *)(lVar25 + 0x600) + 0x4aa) != '\0')) &&
         ((*(byte *)(*(long *)(lVar25 + 0x600) + 0x198) >> 1 & 1) != 0)) {
        FUN_710376b960(**(long **)(param_1 + 0x1e0));
        puVar26 = *(undefined8 **)(param_1 + 0x1e0);
        plVar5 = (long *)*puVar26;
        (**(code **)(*plVar5 + 0x60))(plVar5,0);
        plVar5 = (long *)*puVar26;
        (**(code **)(*plVar5 + 0x70))(plVar5,0);
        puVar26 = *(undefined8 **)(param_1 + 0x1c8);
        plVar5 = (long *)*puVar26;
        (**(code **)(*plVar5 + 0x60))(plVar5,1);
        plVar5 = (long *)*puVar26;
        (**(code **)(*plVar5 + 0x70))(plVar5,1);
        param_3 = (long ****)0x1;
        FUN_7101e9ba80((long *)(param_1 + 0x1c8),*(char *)(param_1 + 0x1d0) - 1,1);
        param_2 = extraout_x1_01;
      }
    }
    else {
      lVar15 = *(long *)(lVar25 + 0x600);
      if (*(char *)(lVar15 + 0x4aa) != '\0') {
        if ((*(byte *)(lVar15 + 0x19c) >> 1 & 1) == 0) {
          if ((*(byte *)(lVar15 + 0x1b4) >> 1 & 1) != 0) {
            if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
               (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                       (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                       param_8), (uVar4 & 1) != 0)) {
              FUN_71024076d0((undefined4 *)&local_a8,0xf57a523f5);
              if (((local_98 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                 ((int)local_90 == DAT_7106dd53ac)) {
                piVar12 = (int *)(local_98 + 0x38);
                do {
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                  if (bVar2) {
                    *piVar12 = *piVar12 + -1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
            }
            else {
              local_90 = 0x87650000000000;
              local_80 = 0xffffffffffffffff;
              uStack_78 = 0;
              local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
              local_70 = 0;
            }
            local_a0 = &PTR_FUN_7104f73d50;
            local_98 = 0;
            local_88 = 0;
            param_3 = (long ****)0x0;
            FUN_7103771be0(*(long **)(param_1 + 0x1e0),
                           (uint)((char)(*(long **)(param_1 + 0x1e0))[1] != '\x01'),0);
            param_2 = extraout_x1_02;
          }
        }
        else {
          FUN_710376b960(**(long **)(param_1 + 0x1c8));
          puVar26 = *(undefined8 **)(param_1 + 0x1c8);
          plVar5 = (long *)*puVar26;
          (**(code **)(*plVar5 + 0x60))(plVar5,0);
          plVar5 = (long *)*puVar26;
          (**(code **)(*plVar5 + 0x70))(plVar5,0);
          puVar26 = *(undefined8 **)(param_1 + 0x1e0);
          plVar5 = (long *)*puVar26;
          (**(code **)(*plVar5 + 0x60))(plVar5,1);
          plVar5 = (long *)*puVar26;
          (**(code **)(*plVar5 + 0x70))(plVar5,1);
          cVar1 = (char)(*(long **)(param_1 + 0x1e0))[1];
          if (*(char *)(param_1 + 0x1f8) == '\0') {
            bVar2 = cVar1 == '\x01';
          }
          else {
            bVar2 = cVar1 == '\0';
          }
          param_3 = (long ****)0x0;
          FUN_7103771a80(*(long **)(param_1 + 0x1e0),(uint)!bVar2,0);
          param_2 = extraout_x1_03;
        }
      }
    }
  }
  uVar10 = *(uint *)(**(long **)(param_1 + 0x1c8) + 0x254);
  if (uVar10 == 0xffffffff) {
    plVar5 = *(long **)(param_1 + 0x240);
    plVar19 = (long *)plVar5[0x37];
    if (plVar19 != (long *)0x0) {
      iVar11 = *(int *)(param_1 + 0x248);
      plVar17 = plVar5 + 0x37;
      do {
        if (iVar11 <= (int)plVar19[4]) {
          plVar17 = plVar19;
        }
        plVar19 = (long *)plVar19[(int)plVar19[4] < iVar11];
      } while (plVar19 != (long *)0x0);
      if (((plVar17 != plVar5 + 0x37) && ((int)plVar17[4] <= iVar11)) &&
         (plVar19 = (long *)plVar17[5], plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x208))(plVar19,0);
        (**(code **)(*plVar19 + 0x388))(plVar19,1,0);
        plVar5 = *(long **)(param_1 + 0x240);
      }
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,0);
    *(undefined1 *)(param_1 + 0x24c) = 0;
  }
  else {
    FUN_7101e9bb40((long *)(param_1 + 0x1c8),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                  );
    lVar15 = *(long *)(**(long **)(param_1 + 0x298) + 8);
    if (((*(char *)(lVar15 + 0x388) == '\0') ||
        (uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 0x298) + 1), 2 < uVar4)) ||
       ((3 < (uVar10 & 0xff) || (lVar15 = *(long *)(lVar15 + uVar4 * 8 + 0x78), lVar15 == 0)))) {
      if (*(char *)(param_1 + 0x24c) != '\0') {
        bVar2 = false;
        goto LAB_7101e60b7c;
      }
    }
    else {
      bVar2 = *(short *)(lVar15 + ((ulong)uVar10 & 0xff) * 0x18 + 0x20) != -1;
      if (bVar2 != (*(char *)(param_1 + 0x24c) != '\0')) {
LAB_7101e60b7c:
        plVar5 = *(long **)(param_1 + 0x240);
        plVar19 = (long *)plVar5[0x37];
        if (plVar19 != (long *)0x0) {
          iVar11 = *(int *)(param_1 + 0x248);
          plVar17 = plVar5 + 0x37;
          do {
            if (iVar11 <= (int)plVar19[4]) {
              plVar17 = plVar19;
            }
            plVar19 = (long *)plVar19[(int)plVar19[4] < iVar11];
          } while (plVar19 != (long *)0x0);
          if (((plVar17 != plVar5 + 0x37) && ((int)plVar17[4] <= iVar11)) &&
             (plVar19 = (long *)plVar17[5], plVar19 != (long *)0x0)) {
            (**(code **)(*plVar19 + 0x208))(plVar19,bVar2);
            (**(code **)(*plVar19 + 0x388))(plVar19,bVar2 ^ 1,0);
            plVar5 = *(long **)(param_1 + 0x240);
          }
        }
        (**(code **)(*plVar5 + 0x60))(plVar5,bVar2);
        *(bool *)(param_1 + 0x24c) = bVar2;
      }
    }
  }
  plVar5 = *(long **)(param_1 + 0x230);
  lVar15 = *(long *)**(undefined8 **)(param_1 + 0x1b0);
  uVar4 = (**(code **)(*(long *)*plVar5 + 0x68))();
  if ((((uVar4 & 1) != 0) && (lVar15 = *(long *)(lVar15 + 0x600), *(char *)(lVar15 + 0x4aa) != '\0')
      ) && ((*(byte *)(lVar15 + 0x1ac) >> 1 & 1) != 0)) {
    lVar15 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 4) {
      uVar4 = 0;
      if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101e61130;
LAB_7101e611a0:
      local_88 = 0;
      local_90 = 0x87650000000000;
      local_80 = 0xffffffffffffffff;
      uStack_78 = 0;
      local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
      local_70 = 0;
    }
    else {
      uVar4 = *(ulong *)(*(long *)(lVar15 + 0x40) + 0x18);
      if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101e611a0;
LAB_7101e61130:
      uVar6 = FUN_7103313f20(lVar15,uVar4,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101e611a0;
      FUN_71024076d0((undefined4 *)&local_a8,uVar4);
      if (((local_98 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_90 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_98 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar2) {
            *piVar12 = *piVar12 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    local_a0 = &PTR_FUN_7104f73d50;
    local_98 = 0;
    FUN_7103771be0(plVar5,*(int *)(param_1 + 0x238),0);
  }
  if ((*(int *)(**(long **)(param_1 + 0x230) + 0x25c) == *(int *)(param_1 + 0x238)) ||
     ((lVar15 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x1b0) + 0x600),
      *(char *)(lVar15 + 0x4aa) != '\0' && ((*(byte *)(lVar15 + 0x1ac) >> 1 & 1) != 0)))) {
    uVar14 = 1;
  }
  else if (*(int *)(*(long *)(param_1 + 0x240) + 0x25c) == -1) {
    iVar11 = *(int *)(**(long **)(param_1 + 0x1c8) + 0x25c);
    if (iVar11 == -1) {
      if (*(int *)(**(long **)(param_1 + 0x1e0) + 0x25c) == -1) {
        if (*(char *)(param_1 + 0x270) == '\0') {
          return;
        }
        goto LAB_7101e61260;
      }
      uVar14 = 5;
    }
    else {
      *(ushort *)(param_1 + 0x271) = (ushort)(iVar11 << 8) | 1;
      uVar14 = 3;
    }
  }
  else {
    iVar11 = *(int *)(**(long **)(param_1 + 0x1c8) + 0x254);
    uVar21 = 0;
    if (iVar11 != -1) {
      uVar21 = (ushort)(iVar11 << 8);
    }
    *(ushort *)(param_1 + 0x271) = uVar21 | iVar11 != -1;
    uVar14 = 4;
  }
  *(undefined1 *)(param_1 + 0x270) = uVar14;
LAB_7101e61260:
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1b0),0);
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x230) + 0x60))
            ((long *)**(undefined8 **)(param_1 + 0x230),0);
  plVar5 = *(long **)(param_1 + 0x240);
  plVar19 = (long *)plVar5[0x37];
  if (plVar19 != (long *)0x0) {
    iVar11 = *(int *)(param_1 + 0x248);
    plVar17 = plVar5 + 0x37;
    do {
      if (iVar11 <= (int)plVar19[4]) {
        plVar17 = plVar19;
      }
      plVar19 = (long *)plVar19[(int)plVar19[4] < iVar11];
    } while (plVar19 != (long *)0x0);
    if (((plVar17 != plVar5 + 0x37) && ((int)plVar17[4] <= iVar11)) &&
       (plVar19 = (long *)plVar17[5], plVar19 != (long *)0x0)) {
      (**(code **)(*plVar19 + 0x208))(plVar19,0);
      (**(code **)(*plVar19 + 0x388))(plVar19,1,0);
      plVar5 = *(long **)(param_1 + 0x240);
    }
  }
  (**(code **)(*plVar5 + 0x60))(plVar5,0);
  puVar26 = *(undefined8 **)(param_1 + 0x1e0);
  *(undefined1 *)(param_1 + 0x24c) = 0;
  plVar5 = (long *)*puVar26;
  (**(code **)(*plVar5 + 0x60))(plVar5,0);
  plVar5 = (long *)*puVar26;
  (**(code **)(*plVar5 + 0x70))(plVar5,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x11;
  if (*(char *)(param_1 + 0x270) == '\x05') {
    *(undefined4 *)(param_1 + 0x19c) = 1;
    *(undefined4 *)(param_1 + 0x154) = 0xe;
  }
  return;
}

