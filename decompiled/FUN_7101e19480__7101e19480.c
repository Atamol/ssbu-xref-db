// addr:      7101e19480
// offset:    0x1e19480
// name:      FUN_7101e19480
// mangled:   
// signature: undefined __cdecl FUN_7101e19480(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e19480(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint *puVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  ushort uVar9;
  bool bVar10;
  long ***ppplVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 *puVar16;
  byte ***pppbVar17;
  ulong uVar18;
  char *pcVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  undefined4 uVar23;
  long lVar24;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar25;
  undefined1 *puVar26;
  byte *pbVar27;
  byte *pbVar28;
  long lVar29;
  byte bVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  byte ***pppbVar34;
  short *psVar35;
  byte bVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  uint uVar41;
  long *plVar42;
  undefined1 *puVar43;
  short sVar44;
  long ****pppplVar45;
  void *__src;
  void *__dest;
  ulong uVar46;
  long lVar47;
  undefined4 local_510 [4];
  long local_500;
  int local_4f8;
  undefined4 local_4d0 [2];
  undefined **local_4c8;
  long local_4c0;
  int local_4b8;
  undefined4 uStack_4b4;
  undefined1 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined4 local_490 [2];
  undefined **local_488;
  long local_480;
  int local_478;
  undefined4 uStack_474;
  undefined1 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined4 local_450 [2];
  undefined **local_448;
  long local_440;
  int local_438;
  undefined4 uStack_434;
  undefined1 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410 [2];
  undefined **local_408;
  long local_400;
  int local_3f8;
  undefined4 local_3f4;
  undefined1 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0 [4];
  long local_3c0;
  int local_3b8;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined2 local_378;
  undefined1 uStack_376;
  int iStack_375;
  undefined1 uStack_371;
  undefined1 uStack_370;
  undefined1 uStack_36f;
  undefined6 uStack_36e;
  long alStack_360 [4];
  long *local_340;
  long alStack_330 [4];
  long *local_310;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long ****local_270;
  long ****local_268;
  void *local_260;
  uint *local_258;
  uint *local_250;
  uint *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 *local_228;
  undefined4 local_220;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  undefined4 local_120;
  long ***local_108;
  ulong local_100;
  uint *local_f8;
  uint *local_f0;
  uint *puStack_e8;
  byte ***local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  undefined8 *local_98;
  long ***local_90;
  undefined4 local_84 [5];
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    if (4 < *(uint *)(param_1 + 0xbc4)) {
      return;
    }
    lVar24 = *(long *)**(undefined8 **)(param_1 + 0x168);
    switch(*(uint *)(param_1 + 0xbc4)) {
    case 0:
      if (*(char *)(*(long *)(lVar24 + 0x600) + 0x4aa) == '\0') {
        *(undefined1 *)(param_1 + 0xbb1) = 0;
        return;
      }
      uVar41 = *(uint *)(*(long *)(lVar24 + 0x600) + 0x1ac);
      *(byte *)(param_1 + 0xbb1) = (byte)(uVar41 >> 1) & 1;
      if ((uVar41 >> 1 & 1) == 0) {
        return;
      }
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
        return;
      }
      uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar46 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_510,0x1053dffe8c);
      if (local_500 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_4f8 != DAT_7106dd53ac) {
        return;
      }
      piVar25 = (int *)(local_500 + 0x38);
      do {
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
        if (bVar10) {
          *piVar25 = *piVar25 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      return;
    case 1:
      lVar24 = *(long *)(*(long *)(param_1 + 0xba8) + 8);
      if (((lVar24 != 0) &&
          (plVar42 = (long *)FUN_71037964b0(lVar24,0x7104421055), plVar42 != (long *)0x0)) &&
         (uVar46 = (**(code **)(*plVar42 + 0x138))(), (uVar46 & 1) == 0)) {
        return;
      }
      FUN_7103771a80((long *)(param_1 + 0x170),0x68,1);
      if (*(int *)(param_1 + 0xbc4) == 2) {
        return;
      }
      *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc4);
      uVar23 = 2;
      break;
    case 2:
      if (*(char *)(*(long *)(lVar24 + 0x600) + 0x4aa) == '\0') {
        bVar30 = 0;
      }
      else {
        bVar30 = *(byte *)(*(long *)(lVar24 + 0x600) + 0x1a8) >> 1 & 1;
      }
      *(byte *)(param_1 + 0xbb0) = bVar30;
      if (*(char *)(*(long *)(lVar24 + 0x600) + 0x4aa) == '\0') {
        bVar36 = 0;
        *(undefined1 *)(param_1 + 0xbb1) = 0;
      }
      else {
        bVar36 = *(byte *)(*(long *)(lVar24 + 0x600) + 0x1ac) >> 1 & 1;
        *(byte *)(param_1 + 0xbb1) = bVar36;
      }
      if (bVar30 != 0) {
        if (*(int *)(param_1 + 0xdd8) == 1) {
          return;
        }
        if (*(int *)(*(long *)(param_1 + 0x500) + 0x2a4) == 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0xbe8) = 0;
        return;
      }
      if (bVar36 != 0) {
        return;
      }
      plVar42 = *(long **)(param_1 + 0x4f8);
      if (*(int *)((long)plVar42 + 0x25c) == 0x67) {
        *(undefined1 *)(param_1 + 0xf05) = 1;
        uVar20 = 0x200000004;
LAB_7101e1ad64:
        *(undefined8 *)(param_1 + 0xbc4) = uVar20;
        (**(code **)(**(long **)(param_1 + 0x500) + 0x70))(*(long **)(param_1 + 0x500),0);
        uVar20 = 0x10003;
        FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x158),1,(long ****)0x10003,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_71032cc8f0(param_1 + 0x4d0,*(int *)(param_1 + 0xb78),uVar20,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x158) + 0x10),0x710438d042);
        return;
      }
      iVar14 = *(int *)(*(long *)(param_1 + 0x500) + 0x2b8);
      if (iVar14 == 2) {
        if (*(char *)(*(long *)(lVar24 + 0x600) + 0x4aa) == '\0') {
          return;
        }
        if ((*(byte *)(*(long *)(lVar24 + 0x600) + 0x19c) >> 1 & 1) == 0) {
          return;
        }
      }
      else if (iVar14 != 1) {
        return;
      }
      *(undefined8 *)(param_1 + 0xbc4) = 0x200000003;
LAB_7101e1afa8:
      (**(code **)(*plVar42 + 0x70))(plVar42,1);
      (**(code **)(**(long **)(param_1 + 0x4f8) + 0x60))(*(long **)(param_1 + 0x4f8),0);
      FUN_7103771a80((long *)(param_1 + 0x4f8),0x67,0);
      plVar42 = *(long **)(param_1 + 0x500);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar42 + 0x70);
      uVar20 = 0;
      goto LAB_7101e1afec;
    case 3:
      if (*(char *)(*(long *)(lVar24 + 0x600) + 0x4aa) == '\0') {
        *(undefined1 *)(param_1 + 0xbb1) = 0;
      }
      else {
        uVar41 = *(uint *)(*(long *)(lVar24 + 0x600) + 0x1ac);
        *(byte *)(param_1 + 0xbb1) = (byte)(uVar41 >> 1) & 1;
        if ((uVar41 >> 1 & 1) != 0) {
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
            return;
          }
          uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
          if ((uVar46 & 1) == 0) {
            return;
          }
          FUN_71024076d0(local_3d0,0x1053dffe8c);
          if (local_3c0 == 0) {
            return;
          }
          if (DAT_7106dd53a8 != '\x01') {
            return;
          }
          if (local_3b8 != DAT_7106dd53ac) {
            return;
          }
          piVar25 = (int *)(local_3c0 + 0x38);
          do {
            cVar6 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar10) {
              *piVar25 = *piVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          return;
        }
      }
      lVar24 = *(long *)(lVar24 + 0x600);
      if (*(char *)(lVar24 + 0x4aa) == '\0') {
        return;
      }
      if (((*(byte *)(lVar24 + 0x1bc) >> 1 & 1) != 0) || ((*(byte *)(lVar24 + 0x1a8) >> 1 & 1) != 0)
         ) {
        uVar20 = 0x300000004;
        *(undefined1 *)(param_1 + 0xf05) = 0;
        goto LAB_7101e1ad64;
      }
      if ((*(byte *)(lVar24 + 0x198) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar24 + 0x19c) >> 1 & 1) == 0) {
          return;
        }
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                    (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                                   ), (uVar46 & 1) != 0)) {
          FUN_71024076d0(local_490,0x10c0b65170);
          if (((local_480 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_478 == DAT_7106dd53ac)) {
            piVar25 = (int *)(local_480 + 0x38);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar10) {
                *piVar25 = *piVar25 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        else {
          local_468 = 0xffffffffffffffff;
          uStack_460 = 0;
          local_478 = 0;
          uStack_474 = 0x876500;
          local_490[0] = 0;
          local_458 = 0;
        }
        local_488 = &PTR_FUN_7104f73d50;
        local_480 = 0;
        local_470 = 0;
        if (0 < *(int *)(*(long *)(param_1 + 0x500) + 0x2a4)) {
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1336ca7cd7,
                                      (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                      param_8), (uVar46 & 1) != 0)) {
            FUN_71024076d0(local_4d0,0x1336ca7cd7);
            if (((local_4c0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_4b8 == DAT_7106dd53ac)) {
              piVar25 = (int *)(local_4c0 + 0x38);
              do {
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar10) {
                  *piVar25 = *piVar25 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
          else {
            local_4a8 = 0xffffffffffffffff;
            uStack_4a0 = 0;
            local_4b8 = 0;
            uStack_4b4 = 0x876500;
            local_4d0[0] = 0;
            local_498 = 0;
          }
          local_4c8 = &PTR_FUN_7104f73d50;
          local_4c0 = 0;
          local_4b0 = 0;
        }
        FUN_7103783c10((long *)(param_1 + 0x500),0,0,1,param_5,param_6,param_7,param_8);
        lVar24 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x1b8);
        if (lVar24 == 0) goto LAB_7101e1b284;
        lVar32 = *(long *)(param_1 + 0x4f8) + 0x1b8;
        lVar29 = lVar32;
        do {
          if (0x66 < *(int *)(lVar24 + 0x20)) {
            lVar29 = lVar24;
          }
          lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 0x67) * 8);
        } while (lVar24 != 0);
      }
      else {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                    (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                                   ), (uVar46 & 1) != 0)) {
          FUN_71024076d0(local_410,0x10c0b65170);
          if (((local_400 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_3f8 == DAT_7106dd53ac)) {
            piVar25 = (int *)(local_400 + 0x38);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
              if (bVar10) {
                *piVar25 = *piVar25 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
        }
        else {
          local_3e8 = 0xffffffffffffffff;
          uStack_3e0 = 0;
          local_3f8 = 0;
          local_3f4 = 0x876500;
          local_410[0] = 0;
          local_3d8 = 0;
        }
        local_408 = &PTR_FUN_7104f73d50;
        local_400 = 0;
        local_3f0 = 0;
        if (*(int *)(*(long *)(param_1 + 0x500) + 0x2a4) == 0) {
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar46 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1336ca7cd7,
                                      (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                      param_8), (uVar46 & 1) != 0)) {
            FUN_71024076d0(local_450,0x1336ca7cd7);
            if (((local_440 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_438 == DAT_7106dd53ac)) {
              piVar25 = (int *)(local_440 + 0x38);
              do {
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar25,0x10);
                if (bVar10) {
                  *piVar25 = *piVar25 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
          else {
            local_428 = 0xffffffffffffffff;
            uStack_420 = 0;
            local_438 = 0;
            uStack_434 = 0x876500;
            local_450[0] = 0;
            local_418 = 0;
          }
          local_448 = &PTR_FUN_7104f73d50;
          local_440 = 0;
          local_430 = 0;
        }
        FUN_7103783c10((long *)(param_1 + 0x500),*(int *)(param_1 + 0xbcc) + -1,0,1,param_5,param_6,
                       param_7,param_8);
        lVar24 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x1b8);
        if (lVar24 == 0) goto LAB_7101e1b284;
        lVar32 = *(long *)(param_1 + 0x4f8) + 0x1b8;
        lVar29 = lVar32;
        do {
          if (0x66 < *(int *)(lVar24 + 0x20)) {
            lVar29 = lVar24;
          }
          lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 0x67) * 8);
        } while (lVar24 != 0);
      }
      if (((lVar29 != lVar32) && (*(int *)(lVar29 + 0x20) < 0x68)) &&
         (plVar42 = *(long **)(lVar29 + 0x28), plVar42 != (long *)0x0)) {
        (**(code **)(*plVar42 + 0x218))(plVar42,0);
        (**(code **)(*plVar42 + 0x410))(plVar42);
        (**(code **)(*plVar42 + 0x3f0))(plVar42,0);
        iVar14 = (**(code **)(*plVar42 + 0x140))(plVar42);
        if ((iVar14 != 6) && (iVar14 = (**(code **)(*plVar42 + 0x140))(plVar42), iVar14 != 1)) {
          (**(code **)(*plVar42 + 0x400))(plVar42);
        }
        uVar46 = (**(code **)(*plVar42 + 0x158))(plVar42);
        if ((uVar46 & 1) == 0) {
          (**(code **)(*plVar42 + 0x370))(plVar42);
        }
      }
LAB_7101e1b284:
      if (*(int *)(param_1 + 0xbc4) == 2) {
        return;
      }
      *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc4);
      *(undefined4 *)(param_1 + 0xbc4) = 2;
      (**(code **)(**(long **)(param_1 + 0x4f8) + 0x70))(*(long **)(param_1 + 0x4f8),0);
      (**(code **)(**(long **)(param_1 + 0x4f8) + 0x60))(*(long **)(param_1 + 0x4f8),1);
      (**(code **)(**(long **)(param_1 + 0x500) + 0x70))(*(long **)(param_1 + 0x500),1);
      return;
    case 4:
      plVar42 = *(long **)(param_1 + 0x4f0);
      FUN_71032cc6c0(plVar42);
      uVar20 = extraout_x1;
      if (*plVar42 != 0) {
        UNRECOVERED_JUMPTABLE = (code *)plVar42[1];
        uVar46 = plVar42[2] & 1;
        if (uVar46 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
          if (uVar46 != 0) {
            UNRECOVERED_JUMPTABLE =
                 *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*plVar42 + (plVar42[2] >> 1)));
          }
          (*UNRECOVERED_JUMPTABLE)();
          uVar20 = extraout_x1_00;
        }
      }
      *(int *)((long)plVar42 + 0xbc) = *(int *)((long)plVar42 + 0xbc) + 1;
      if (*(int *)(*(long *)(param_1 + 0x4f0) + 0xb8) != 0) {
        uVar41 = *(uint *)(*(long *)(param_1 + 0x4f0) + 0x130);
        if (uVar41 == 0xfffffffe) {
          return;
        }
        FUN_71032cc9f0(param_1 + 0x4d0);
        if ((int)uVar41 < 0) {
          return;
        }
        uVar46 = *(long *)(param_1 + 0xb68) - *(long *)(param_1 + 0xb60);
        if (uVar46 <= (ulong)(long)(int)uVar41) {
          return;
        }
        if (*(uint *)(param_1 + 0xb78) == uVar41) {
          return;
        }
        *(uint *)(param_1 + 0xb78) = uVar41;
        if (uVar46 <= uVar41) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        bVar30 = *(byte *)(*(long *)(param_1 + 0xb60) + (ulong)uVar41);
        sVar44 = -1;
        if ((*(char *)(param_1 + 0xf05) != '\0') && (2 < bVar30)) {
          iVar14 = *(int *)(*(long *)(param_1 + 0x500) + 0x2a4);
          if (iVar14 == 0) {
            sVar44 = -1;
          }
          else {
            uVar46 = (long)iVar14 - 1;
            if ((ulong)(*(long *)(param_1 + 0x518) - *(long *)(param_1 + 0x510) >> 2) <= uVar46) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            sVar44 = *(short *)(*(long *)(param_1 + 0x510) + uVar46 * 4);
          }
        }
        FUN_7103776640(&local_390,param_1 + 0xba0,(byte ****)"scr_sort",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        switch(bVar30) {
        case 0:
          local_240 = (byte ***)0x1300000000;
          local_238 = 0x726970735f756e6d;
          local_230 = 0x74726f735f737469;
          local_228 = (undefined1 *)CONCAT44(local_228._4_4_,0x38315f);
          uVar41 = 0x811c9dc5;
          uVar37 = 0x6d;
          pbVar27 = (byte *)((long)&local_238 + 1);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar37;
            uVar37 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar37 != 0);
          break;
        case 1:
          local_240 = (byte ***)0x1300000000;
          local_238 = 0x726970735f756e6d;
          local_230 = 0x74726f735f737469;
          local_228 = (undefined1 *)CONCAT44(local_228._4_4_,0x33305f);
          uVar41 = 0x811c9dc5;
          uVar37 = 0x6d;
          pbVar27 = (byte *)((long)&local_238 + 1);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar37;
            uVar37 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar37 != 0);
          break;
        case 2:
          local_240 = (byte ***)0x1300000000;
          local_238 = 0x726970735f756e6d;
          local_230 = 0x74726f735f737469;
          local_228 = (undefined1 *)CONCAT44(local_228._4_4_,0x34305f);
          uVar41 = 0x811c9dc5;
          uVar37 = 0x6d;
          pbVar27 = (byte *)((long)&local_238 + 1);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar37;
            uVar37 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar37 != 0);
          break;
        case 3:
          local_240 = (byte ***)0x1300000000;
          local_238 = 0x726970735f756e6d;
          local_230 = 0x74726f735f737469;
          local_228 = (undefined1 *)CONCAT44(local_228._4_4_,0x32305f);
          uVar41 = 0x811c9dc5;
          uVar37 = 0x6d;
          pbVar27 = (byte *)((long)&local_238 + 1);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar37;
            uVar37 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar37 != 0);
          break;
        case 4:
          local_240 = (byte ***)0x1300000000;
          local_238 = 0x726970735f756e6d;
          local_230 = 0x74726f735f737469;
          local_228 = (undefined1 *)CONCAT44(local_228._4_4_,0x32325f);
          uVar41 = 0x811c9dc5;
          uVar37 = 0x6d;
          pbVar27 = (byte *)((long)&local_238 + 1);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar37;
            uVar37 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar37 != 0);
          break;
        default:
          local_238 = local_238 & 0xffffffffffffff00;
          local_240 = (byte ***)0x0;
          goto LAB_7101e1b540;
        }
        local_230 = 0x74726f735f737469;
        local_238 = 0x726970735f756e6d;
        local_240 = (byte ***)CONCAT44(0x13,uVar41);
LAB_7101e1b540:
        FUN_7103776910(&local_e0,(long)&local_390,(long ****)"set_txt_list",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_e0,(char *)&local_238,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar46 = local_d8;
        local_e0 = (byte ***)&PTR_FUN_710523d9a8;
        local_d8 = 0;
        if (uVar46 != 0) {
          FUN_710392eb40(uVar46);
        }
        FUN_7102528ea0((undefined8 *)(param_1 + 0x510),bVar30);
        FUN_710377cc80(*(long *)(param_1 + 0x500),1);
        if (sVar44 == -1) {
LAB_7101e1b5d4:
          uVar41 = 0;
        }
        else {
          uVar46 = 0;
          psVar35 = *(short **)(param_1 + 0x510);
          do {
            if ((ulong)(*(long *)(param_1 + 0x518) - (long)*(short **)(param_1 + 0x510) >> 2) <=
                uVar46) goto LAB_7101e1b5d4;
            sVar8 = *psVar35;
            uVar46 = uVar46 + 1;
            psVar35 = psVar35 + 2;
          } while (sVar8 != sVar44);
          uVar41 = (uint)uVar46 & ((int)(uint)uVar46 >> 0x1f ^ 0xffffffffU);
        }
        FUN_7103783c10((long *)(param_1 + 0x500),uVar41,0,1,param_5,param_6,param_7,param_8);
        if (((((*(char *)(param_1 + 0xf05) == '\0') &&
              (lVar24 = *(long *)(param_1 + 0x500), (int)uVar41 < *(int *)(lVar24 + 0x288))) &&
             (iVar14 = uVar41 - *(int *)(lVar24 + 0x29c), -1 < iVar14)) &&
            ((iVar14 < *(int *)(lVar24 + 0x2c4) && (iVar14 < *(int *)(lVar24 + 0x2c0))))) &&
           (plVar42 = *(long **)(*(long *)(*(long *)(lVar24 + 0x168) + (long)iVar14 * 8) + 0x28),
           plVar42 != (long *)0x0)) {
          (**(code **)(*plVar42 + 0x218))(plVar42,0);
          (**(code **)(*plVar42 + 0x410))(plVar42);
          (**(code **)(*plVar42 + 0x3f0))(plVar42,0);
          iVar14 = (**(code **)(*plVar42 + 0x140))(plVar42);
          if ((iVar14 != 6) && (iVar14 = (**(code **)(*plVar42 + 0x140))(plVar42), iVar14 != 1)) {
            (**(code **)(*plVar42 + 0x400))(plVar42);
          }
          uVar46 = (**(code **)(*plVar42 + 0x158))(plVar42);
          if ((uVar46 & 1) == 0) {
            (**(code **)(*plVar42 + 0x370))(plVar42);
          }
        }
        uVar46 = (ulong)local_388;
        local_390 = &PTR_FUN_710523d988;
        local_388 = (byte ***)0x0;
        if (uVar46 == 0) {
          return;
        }
        uVar18 = *(ulong *)(uVar46 + 0x18);
        *(undefined ***)(uVar46 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar46 + 0x18) = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
        FUN_710392eb40(uVar46);
        return;
      }
      FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x158),uVar20,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      **(uint **)(DAT_710593b988 + 8) =
           **(uint **)(DAT_710593b988 + 8) &
           (1 << (ulong)(*(uint *)(param_1 + 0x4e4) & 0x1f) ^ 0xffffffffU);
      iVar14 = *(int *)(param_1 + 0xbc4);
      if (*(int *)(param_1 + 0xbc8) == 3) {
        if (iVar14 == 3) {
          return;
        }
        plVar42 = *(long **)(param_1 + 0x4f8);
        *(int *)(param_1 + 0xbc8) = iVar14;
        *(undefined4 *)(param_1 + 0xbc4) = 3;
        goto LAB_7101e1afa8;
      }
      if (iVar14 == 1) {
        return;
      }
      *(int *)(param_1 + 0xbc8) = iVar14;
      uVar23 = 1;
    }
    *(undefined4 *)(param_1 + 0xbc4) = uVar23;
    (**(code **)(**(long **)(param_1 + 0x4f8) + 0x70))(*(long **)(param_1 + 0x4f8),0);
    (**(code **)(**(long **)(param_1 + 0x4f8) + 0x60))(*(long **)(param_1 + 0x4f8),1);
    plVar42 = *(long **)(param_1 + 0x500);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar42 + 0x70);
    uVar20 = 1;
LAB_7101e1afec:
                    /* WARNING: Could not recover jumptable at 0x007101e1b00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar42,uVar20);
    return;
  }
  lVar24 = **(long **)(param_1 + 0x168);
  puVar1 = (undefined8 *)(param_1 + 0xba0);
  if (puVar1 != (undefined8 *)(lVar24 + 8)) {
    **(undefined8 **)(param_1 + 0xba8) = **(undefined8 **)(lVar24 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0xba8) + 8) = *(undefined8 *)(*(long *)(lVar24 + 0x10) + 8);
    lVar32 = *(long *)(lVar24 + 0x10);
    lVar24 = *(long *)(param_1 + 0xba8);
    if (lVar24 != lVar32) {
      **(undefined8 **)(lVar24 + 0x18) = **(undefined8 **)(lVar32 + 0x18);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar32 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar32 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar32 + 0x18) + 0x18);
    }
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x168),0,(long ****)0x5000,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x7104421055);
  local_240 = (byte ***)0x0;
  local_230 = CONCAT17(local_230._7_1_,0x1000100000001);
  local_228 = &DAT_41f0000000000000;
  local_238 = 0x101;
  local_220 = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  FUN_710337df20((long)&local_240);
  local_390 = &PTR_FUN_71050b16f0;
  uStack_370 = SUB81(&local_390,0);
  uStack_36f = (undefined1)((ulong)&local_390 >> 8);
  uStack_36e = (undefined6)((ulong)&local_390 >> 0x10);
  FUN_7101989a30(&local_390,alStack_1e0);
  plVar42 = (long *)CONCAT62(uStack_36e,CONCAT11(uStack_36f,uStack_370));
  if (&local_390 == plVar42) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar42 + 0x20);
LAB_7101e196dc:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (plVar42 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar42 + 0x28);
    goto LAB_7101e196dc;
  }
  ppppbVar22 = (byte ****)&local_240;
  FUN_7103770b30((long *)(param_1 + 0x4f8),puVar1,(long ****)"selector_0",ppppbVar22,param_5,param_6
                 ,param_7,param_8);
  FUN_71037717d0((long *)(param_1 + 0x4f8),0x67,"scr_sort",ppppbVar22,param_5,param_6,param_7,
                 param_8);
  local_390 = (undefined **)0x7fc420ce8;
  FUN_7103772070(*(long *)(param_1 + 0x170),0x67,(long ****)&local_390,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x150),0);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x168),1);
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x160),0);
  lVar24 = *(long *)**(undefined8 **)(param_1 + 0x168);
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0xdc) = 0x80;
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x24) = 0x80;
  pppplVar21 = (long ****)&DAT_00000009;
  ppppbVar22 = (byte ****)0x0;
  FUN_7103771930(*(long *)(param_1 + 0x4f8),0x67,(long ****)&DAT_00000009,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  local_248 = (uint *)0x0;
  local_250 = (uint *)0x0;
  local_258 = (uint *)0x0;
  plVar42 = (long *)(*(long *)(param_1 + 0x1020) + 0x305d8);
  plVar3 = (long *)(*(long *)(param_1 + 0x1020) + 0x305e0);
  lVar24 = *plVar42;
  if (*plVar3 != lVar24) {
    lVar32 = *DAT_7105329f98;
    uVar46 = 0;
    do {
      puVar2 = local_258;
      uVar9 = *(ushort *)(*(long *)(lVar24 + uVar46 * 8) + 0x48);
      if ((uVar9 != 0xffff) && ((short)uVar9 < 2000)) {
        lVar40 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        lVar29 = *(long *)(lVar40 + 0x20);
        lVar38 = *(long *)(lVar40 + 0x28);
        lVar47 = (long)(int)(short)uVar9;
        lVar24 = lVar40 + lVar47 * 2;
        uVar7 = *(ushort *)(lVar24 + 0x60);
        if (((uint)((int)((ulong)(lVar38 - lVar29) >> 6) * -0x33333333) <= (uint)uVar7) ||
           (lVar39 = *(long *)(lVar32 + 0x30), *(char *)(lVar39 + lVar47 * 0x24) == '\0')) {
          lVar29 = *(long *)(lVar40 + 0x20);
          lVar38 = *(long *)(lVar40 + 0x28);
          uVar7 = *(ushort *)(lVar24 + 0x60);
          if (((uint)((int)((ulong)(lVar38 - lVar29) >> 6) * -0x33333333) <= (uint)uVar7) ||
             (lVar39 = *(long *)(lVar32 + 0x30), *(short *)(lVar39 + lVar47 * 0x24 + 0x20) == 0))
          goto LAB_7101e199f8;
        }
        if ((uint)uVar7 < (uint)((int)((ulong)(lVar38 - lVar29) >> 6) * -0x33333333)) {
          uVar41 = (uint)*(byte *)(lVar39 + lVar47 * 0x24);
        }
        else {
          uVar41 = 0;
        }
        if (local_250 == local_248) {
          pppplVar45 = (long ****)((long)local_250 - (long)local_258);
          uVar18 = ((long)pppplVar45 >> 2) + 1;
          if (uVar18 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_248 - (long)local_258 >> 2) < 0x1fffffffffffffff) {
            uVar33 = (long)local_248 - (long)local_258 >> 1;
            if (uVar18 <= uVar33) {
              uVar18 = uVar33;
            }
            if (uVar18 != 0) {
              if (uVar18 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_7101e19934;
            }
LAB_7101e19998:
            puVar15 = (uint *)0x0;
          }
          else {
            uVar18 = 0x3fffffffffffffff;
LAB_7101e19934:
            pppbVar17 = (byte ***)(uVar18 * 4);
            if (pppbVar17 == (byte ***)0x0) {
              pppbVar17 = (byte ***)0x1;
            }
            puVar15 = (uint *)FUN_710392e290(0x10,pppbVar17,pppplVar21,ppppbVar22,param_5,param_6,
                                             param_7,param_8);
            if (puVar15 == (uint *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_e0 = (byte ***)((ulong)local_e0 & 0xffffffff00000000);
                pppplVar21 = (long ****)&local_390;
                local_390 = (undefined **)pppbVar17;
                uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
                if (((uVar33 & 1) != 0) &&
                   (puVar15 = (uint *)FUN_710392e290(0x10,pppbVar17,pppplVar21,ppppbVar22,param_5,
                                                     param_6,param_7,param_8),
                   puVar15 != (uint *)0x0)) goto LAB_7101e1999c;
              }
              goto LAB_7101e19998;
            }
          }
LAB_7101e1999c:
          puVar4 = puVar15 + ((long)pppplVar45 >> 2);
          *puVar4 = (uint)uVar9 | uVar41 << 0x10;
          if (0 < (long)pppplVar45) {
            memcpy(puVar15,puVar2,(size_t)pppplVar45);
            pppplVar21 = pppplVar45;
          }
          local_258 = puVar15;
          local_250 = puVar4 + 1;
          local_248 = puVar15 + uVar18;
          if (puVar2 != (uint *)0x0) {
            FUN_710392eb40((ulong)puVar2);
          }
        }
        else {
          *local_250 = (uint)uVar9 | uVar41 << 0x10;
          local_250 = local_250 + 1;
        }
      }
LAB_7101e199f8:
      lVar24 = *plVar42;
      uVar46 = uVar46 + 1;
    } while (uVar46 < (ulong)(*plVar3 - lVar24 >> 3));
  }
  iVar14 = (int)((ulong)((long)local_250 - (long)local_258) >> 2);
  if (iVar14 == 0) {
    lVar24 = *(long *)(param_1 + 0xba8);
    *(undefined4 *)(param_1 + 0xdd8) = 1;
    pcVar19 = "view_no_list";
  }
  else {
    lVar24 = *(long *)(param_1 + 0xba8);
    pcVar19 = "view_list";
    *(undefined4 *)(param_1 + 0xdd8) = 0;
  }
  FUN_7103778300(0x3f800000,lVar24,(long)pcVar19);
  puVar2 = local_258;
  pppbVar17 = (byte ***)((long)local_250 - (long)local_258);
  local_260 = (void *)0x0;
  local_268 = (long ****)0x0;
  local_270 = (long ****)0x0;
  if (pppbVar17 == (byte ***)0x0) {
    pppplVar21 = (long ****)0x0;
  }
  else {
    if ((ulong)((long)pppbVar17 >> 2) >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppplVar21 = (long ****)
                 FUN_710392e290(0x10,pppbVar17,pppplVar21,ppppbVar22,param_5,param_6,param_7,param_8
                               );
    if (pppplVar21 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (byte ***)((ulong)local_e0 & 0xffffffff00000000);
        pppplVar21 = (long ****)&local_390;
        local_390 = (undefined **)pppbVar17;
        uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar46 & 1) != 0) &&
           (pppplVar21 = (long ****)
                         FUN_710392e290(0x10,pppbVar17,pppplVar21,ppppbVar22,param_5,param_6,param_7
                                        ,param_8), pppplVar21 != (long ****)0x0))
        goto LAB_7101e19adc;
      }
      pppplVar21 = (long ****)0x0;
    }
LAB_7101e19adc:
    local_260 = (void *)((long)pppplVar21 + ((long)pppbVar17 >> 2) * 4);
    local_270 = pppplVar21;
    local_268 = pppplVar21;
    if (0 < (long)pppbVar17) {
      memcpy(pppplVar21,puVar2,(size_t)pppbVar17);
      local_268 = (long ****)((long)pppplVar21 + (long)pppbVar17);
    }
  }
  *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_1 + 0x510);
  pppplVar45 = local_268;
  if ((long *****)(param_1 + 0x510) != &local_270) {
    FUN_7101ddb3c0((long *****)(param_1 + 0x510),pppplVar21,local_268,ppppbVar22,param_5,param_6,
                   param_7,param_8);
    pppplVar21 = local_270;
  }
  if (pppplVar21 != (long ****)0x0) {
    local_268 = pppplVar21;
    FUN_710392eb40((ulong)pppplVar21);
  }
  puVar43 = *(undefined1 **)(param_1 + 0xb60);
  uVar46 = (long)*(undefined1 **)(param_1 + 0xb70) - (long)puVar43;
  *(undefined1 **)(param_1 + 0xb68) = puVar43;
  if (*(undefined1 **)(param_1 + 0xb70) < puVar43 || uVar46 == 0) {
    if (uVar46 < 0x3fffffffffffffff) {
      pppbVar17 = (byte ***)(uVar46 * 2);
      if (pppbVar17 == (byte ***)0x0) {
        pppbVar17 = (byte ***)0x1;
      }
    }
    else {
      pppbVar17 = (byte ***)0x7fffffffffffffff;
    }
    puVar16 = (undefined1 *)
              FUN_710392e290(0x10,pppbVar17,pppplVar45,ppppbVar22,param_5,param_6,param_7,param_8);
    if (puVar16 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (byte ***)((ulong)local_e0 & 0xffffffff00000000);
        pppplVar45 = (long ****)&local_390;
        local_390 = (undefined **)pppbVar17;
        uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar46 & 1) != 0) &&
           (puVar16 = (undefined1 *)
                      FUN_710392e290(0x10,pppbVar17,pppplVar45,ppppbVar22,param_5,param_6,param_7,
                                     param_8), puVar16 != (undefined1 *)0x0)) goto LAB_7101e19e3c;
      }
      puVar16 = (undefined1 *)0x0;
    }
LAB_7101e19e3c:
    puVar26 = puVar16 + 1;
    *puVar16 = 0;
    *(undefined1 **)(param_1 + 0xb60) = puVar16;
    *(undefined1 **)(param_1 + 0xb68) = puVar26;
    *(undefined1 **)(param_1 + 0xb70) = puVar16 + (long)pppbVar17;
    if (puVar43 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar43);
      puVar26 = *(undefined1 **)(param_1 + 0xb68);
    }
  }
  else {
    *puVar43 = 0;
    puVar26 = (undefined1 *)(*(long *)(param_1 + 0xb68) + 1);
    *(undefined1 **)(param_1 + 0xb68) = puVar26;
  }
  if (puVar26 < *(undefined1 **)(param_1 + 0xb70)) {
    *puVar26 = 4;
    *(long *)(param_1 + 0xb68) = *(long *)(param_1 + 0xb68) + 1;
  }
  else {
    __src = *(void **)(param_1 + 0xb60);
    pppplVar21 = (long ****)(puVar26 + -(long)__src);
    pppbVar17 = (byte ***)((long)pppplVar21 + 1);
    if ((long)pppbVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar46 = (long)*(undefined1 **)(param_1 + 0xb70) - (long)__src;
    if (uVar46 < 0x3fffffffffffffff) {
      pppbVar34 = (byte ***)(uVar46 * 2);
      if (pppbVar17 <= pppbVar34) {
        pppbVar17 = pppbVar34;
      }
      if (pppbVar17 != (byte ***)0x0) goto LAB_7101e19ec4;
LAB_7101e19f18:
      __dest = (void *)0x0;
    }
    else {
      pppbVar17 = (byte ***)0x7fffffffffffffff;
LAB_7101e19ec4:
      __dest = (void *)FUN_710392e290(0x10,pppbVar17,pppplVar45,ppppbVar22,param_5,param_6,param_7,
                                      param_8);
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_e0 = (byte ***)((ulong)local_e0 & 0xffffffff00000000);
          pppplVar45 = (long ****)&local_390;
          local_390 = (undefined **)pppbVar17;
          uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
          if (((uVar46 & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,pppbVar17,pppplVar45,ppppbVar22,param_5,param_6,
                                              param_7,param_8), __dest != (void *)0x0))
          goto LAB_7101e19f1c;
        }
        goto LAB_7101e19f18;
      }
    }
LAB_7101e19f1c:
    puVar43 = (undefined1 *)((long)__dest + (long)pppplVar21);
    *puVar43 = 4;
    if (0 < (long)pppplVar21) {
      memcpy(__dest,__src,(size_t)pppplVar21);
      pppplVar45 = pppplVar21;
    }
    *(undefined1 **)(param_1 + 0xb70) = (undefined1 *)((long)__dest + (long)pppbVar17);
    *(void **)(param_1 + 0xb60) = __dest;
    *(undefined1 **)(param_1 + 0xb68) = puVar43 + 1;
    if (__src != (void *)0x0) {
      FUN_710392eb40((ulong)__src);
    }
  }
  *(undefined4 *)(param_1 + 0xb78) = 0;
  FUN_7103776640(&local_a0,(long)puVar1,(byte ****)"scr_sort",pppplVar45,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_key",pppplVar45,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_e0,(long)&local_a0,(long ****)"set_txt_list",pppplVar45,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  if ((ulong)(*(long *)(param_1 + 0xb68) - *(long *)(param_1 + 0xb60)) <=
      (ulong)*(uint *)(param_1 + 0xb78)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar37 = 0x811c9dc5;
  uVar41 = uVar37;
  switch(*(undefined1 *)(*(long *)(param_1 + 0xb60) + (ulong)*(uint *)(param_1 + 0xb78))) {
  case 0:
    local_388 = (byte ***)0x726970735f756e6d;
    local_380 = (byte ***)0x74726f735f737469;
    local_378 = 0x315f;
    uStack_376 = 0x38;
    iStack_375 = (uint)iStack_375._1_3_ << 8;
    uVar31 = 0x6d;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar41 * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar27;
      pbVar27 = pbVar27 + 1;
    } while (uVar31 != 0);
    break;
  case 1:
    local_388 = (byte ***)0x726970735f756e6d;
    local_380 = (byte ***)0x74726f735f737469;
    local_378 = 0x305f;
    uStack_376 = 0x33;
    iStack_375 = (uint)iStack_375._1_3_ << 8;
    uVar31 = 0x6d;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar41 * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar27;
      pbVar27 = pbVar27 + 1;
    } while (uVar31 != 0);
    break;
  case 2:
    local_388 = (byte ***)0x726970735f756e6d;
    local_380 = (byte ***)0x74726f735f737469;
    local_378 = 0x305f;
    uStack_376 = 0x34;
    iStack_375 = (uint)iStack_375._1_3_ << 8;
    uVar31 = 0x6d;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar41 * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar27;
      pbVar27 = pbVar27 + 1;
    } while (uVar31 != 0);
    break;
  case 3:
    local_388 = (byte ***)0x726970735f756e6d;
    local_380 = (byte ***)0x74726f735f737469;
    local_378 = 0x305f;
    uStack_376 = 0x32;
    iStack_375 = (uint)iStack_375._1_3_ << 8;
    uVar31 = 0x6d;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar41 * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar27;
      pbVar27 = pbVar27 + 1;
    } while (uVar31 != 0);
    break;
  case 4:
    local_388 = (byte ***)0x726970735f756e6d;
    local_380 = (byte ***)0x74726f735f737469;
    local_378 = 0x325f;
    uStack_376 = 0x32;
    iStack_375 = (uint)iStack_375._1_3_ << 8;
    uVar31 = 0x6d;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar41 * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar27;
      pbVar27 = pbVar27 + 1;
    } while (uVar31 != 0);
    break;
  default:
    local_388 = (byte ***)((ulong)local_388 & 0xffffffffffffff00);
    local_390 = (undefined **)0x0;
    goto LAB_7101e1a1ec;
  }
  local_380 = (byte ***)0x74726f735f737469;
  local_388 = (byte ***)0x726970735f756e6d;
  local_390 = (undefined **)CONCAT44(0x13,uVar41);
LAB_7101e1a1ec:
  FUN_710377a120((long)&local_e0,(char *)&local_388,pppplVar45,ppppbVar22,param_5,param_6,param_7,
                 param_8);
  uVar46 = local_d8;
  local_e0 = (byte ***)&PTR_FUN_710523d9a8;
  local_d8 = 0;
  if (uVar46 != 0) {
    FUN_710392eb40(uVar46);
  }
  puVar13 = local_98;
  FUN_7103778300(0x3f800000,(long)local_98,0x710438d079);
  FUN_7103778300(0x3f800000,(long)local_98,0x710428106d);
  FUN_710377a120((long)&local_b0,"mnu_spirits_sort_guide",pppplVar45,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_7103776290(&local_c0,extraout_x1_01,pppplVar45,ppppbVar22,param_5,param_6,param_7,param_8);
  local_b8[1] = 0;
  local_e0 = (byte ***)0x100000004;
  local_d8 = CONCAT44(local_d8._4_4_,1);
  *local_b8 = *local_98;
  local_b8[1] = local_98[1];
  if (local_b8 != local_98) {
    *(undefined8 *)local_b8[3] = *(undefined8 *)local_98[3];
    *(undefined8 *)(local_b8[3] + 8) = *(undefined8 *)(local_98[3] + 8);
    *(undefined8 *)(local_b8[3] + 0x10) = *(undefined8 *)(local_98[3] + 0x10);
    *(undefined8 *)(local_b8[3] + 0x18) = *(undefined8 *)(local_98[3] + 0x18);
    local_98 = local_b8;
  }
  uVar20 = _ConstantZero;
  uStack_c8 = uRam0000007107459008;
  if (*(long *)local_98[3] != 0) {
    uVar20 = *(undefined8 *)(*(long *)local_98[3] + 0x30);
    uStack_c8 = 0;
  }
  local_f0 = (uint *)0x0;
  puStack_e8 = (uint *)0x0;
  local_f8 = (uint *)0x0;
  local_d0 = CONCAT44((int)((ulong)uVar20 >> 0x20),(float)uVar20 + -80.0);
  lVar24 = *(long *)(param_1 + 0xb60);
  if (*(long *)(param_1 + 0xb68) != lVar24) {
    uVar46 = 0;
    pbVar27 = (byte *)((long)&local_388 + 1);
    do {
      uVar41 = uVar37;
      switch(*(undefined1 *)(lVar24 + uVar46)) {
      case 0:
        local_388 = (byte ***)0x726970735f756e6d;
        uVar31 = 0x6d;
        local_380 = (byte ***)0x74726f735f737469;
        local_378 = 0x315f;
        uStack_376 = 0x38;
        iStack_375 = (uint)iStack_375._1_3_ << 8;
        pbVar28 = pbVar27;
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (uVar31 != 0);
        break;
      case 1:
        local_388 = (byte ***)0x726970735f756e6d;
        uVar31 = 0x6d;
        local_380 = (byte ***)0x74726f735f737469;
        local_378 = 0x305f;
        uStack_376 = 0x33;
        iStack_375 = (uint)iStack_375._1_3_ << 8;
        pbVar28 = pbVar27;
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (uVar31 != 0);
        break;
      case 2:
        local_388 = (byte ***)0x726970735f756e6d;
        uVar31 = 0x6d;
        local_380 = (byte ***)0x74726f735f737469;
        local_378 = 0x305f;
        uStack_376 = 0x34;
        iStack_375 = (uint)iStack_375._1_3_ << 8;
        pbVar28 = pbVar27;
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (uVar31 != 0);
        break;
      case 3:
        local_388 = (byte ***)0x726970735f756e6d;
        uVar31 = 0x6d;
        local_380 = (byte ***)0x74726f735f737469;
        local_378 = 0x305f;
        uStack_376 = 0x32;
        iStack_375 = (uint)iStack_375._1_3_ << 8;
        pbVar28 = pbVar27;
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (uVar31 != 0);
        break;
      case 4:
        local_388 = (byte ***)0x726970735f756e6d;
        uVar31 = 0x6d;
        local_380 = (byte ***)0x74726f735f737469;
        local_378 = 0x325f;
        uStack_376 = 0x32;
        iStack_375 = (uint)iStack_375._1_3_ << 8;
        pbVar28 = pbVar27;
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar28;
          pbVar28 = pbVar28 + 1;
        } while (uVar31 != 0);
        break;
      default:
        local_388 = (byte ***)((ulong)local_388 & 0xffffffffffffff00);
        local_390 = (undefined **)0x0;
        goto LAB_7101e1a4d8;
      }
      local_380 = (byte ***)0x74726f735f737469;
      local_388 = (byte ***)0x726970735f756e6d;
      local_390 = (undefined **)CONCAT44(0x13,uVar41);
LAB_7101e1a4d8:
      if (local_f0 < puStack_e8) {
        *local_f0 = 0;
        uVar18 = 0;
        do {
          uVar33 = uVar18;
          if (*(char *)((long)&local_388 + uVar18) == '\0') break;
          *(char *)((long)local_f0 + uVar18 + 8) = *(char *)((long)&local_388 + uVar18);
          cVar6 = *(char *)((long)&local_388 + uVar18 + 1);
          if (cVar6 == '\0') {
            uVar33 = uVar18 + 1;
            break;
          }
          *(char *)((long)local_f0 + uVar18 + 9) = cVar6;
          cVar6 = *(char *)((long)&local_388 + uVar18 + 2);
          if (cVar6 == '\0') {
            uVar33 = uVar18 + 2;
            break;
          }
          uVar33 = uVar18 + 3;
          *(char *)((long)local_f0 + uVar18 + 10) = cVar6;
          uVar18 = uVar33;
        } while ((uint)uVar33 < 0x3f);
        *(undefined1 *)((long)local_f0 + (uVar33 & 0xffffffff) + 8) = 0;
        local_f0[1] = (uint)uVar33;
        uVar31 = (uint)(byte)local_f0[2];
        uVar41 = uVar37;
        if ((byte)local_f0[2] != 0) {
          pbVar28 = (byte *)((long)local_f0 + 9);
          do {
            uVar41 = uVar41 * 0x89 ^ uVar31;
            uVar31 = (uint)*pbVar28;
            pbVar28 = pbVar28 + 1;
          } while (uVar31 != 0);
        }
        *local_f0 = uVar41;
        local_f0 = local_f0 + 0x12;
      }
      else {
        FUN_71019c1c50((ulong *)&local_f8,(long)&local_390,pppplVar45,ppppbVar22,param_5,param_6,
                       param_7,param_8);
      }
      lVar24 = *(long *)(param_1 + 0xb60);
      uVar46 = (ulong)((int)uVar46 + 1);
    } while (uVar46 < (ulong)(*(long *)(param_1 + 0xb68) - lVar24));
  }
  FUN_7103776640(&local_108,(long)puVar1,(byte ****)"blinder",pppplVar45,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  puVar15 = local_f0;
  puVar2 = local_f8;
  local_388 = (byte ***)0x0;
  local_380 = (byte ***)0x0;
  local_390 = (undefined **)0x0;
  ppplVar11 = (long ***)((long)local_f0 - (long)local_f8);
  if (ppplVar11 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar11 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppbVar17 = (byte ***)
                FUN_710392e290(0x10,ppplVar11,pppplVar45,ppppbVar22,param_5,param_6,param_7,param_8)
    ;
    if (pppbVar17 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84[0] = 0;
        pppplVar21 = &local_90;
        local_90 = ppplVar11;
        uVar46 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
        if (((uVar46 & 1) != 0) &&
           (pppbVar17 = (byte ***)
                        FUN_710392e290(0x10,ppplVar11,pppplVar21,ppppbVar22,param_5,param_6,param_7,
                                       param_8), pppbVar17 != (byte ***)0x0)) goto LAB_7101e1a65c;
      }
      pppbVar17 = (byte ***)0x0;
    }
LAB_7101e1a65c:
    local_380 = pppbVar17 + ((long)ppplVar11 >> 3);
    local_388 = pppbVar17;
    for (; local_390 = (undefined **)pppbVar17, puVar2 != puVar15; puVar2 = puVar2 + 0x12) {
      *(uint *)local_388 = 0;
      uVar46 = 0;
      do {
        cVar6 = *(char *)((long)puVar2 + uVar46 + 8);
        uVar18 = uVar46;
        if (cVar6 == '\0') break;
        *(char *)((long)local_388 + uVar46 + 8) = cVar6;
        cVar6 = *(char *)((long)puVar2 + uVar46 + 9);
        if (cVar6 == '\0') {
          uVar18 = uVar46 + 1;
          break;
        }
        *(char *)((long)local_388 + uVar46 + 9) = cVar6;
        cVar6 = *(char *)((long)puVar2 + uVar46 + 10);
        if (cVar6 == '\0') {
          uVar18 = uVar46 + 2;
          break;
        }
        uVar18 = uVar46 + 3;
        *(char *)((long)local_388 + uVar46 + 10) = cVar6;
        uVar46 = uVar18;
      } while ((uint)uVar18 < 0x3f);
      *(undefined1 *)((long)local_388 + (uVar18 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_388 + 4) = (uint)uVar18;
      uVar31 = (uint)*(byte *)(local_388 + 1);
      uVar41 = uVar37;
      if (*(byte *)(local_388 + 1) != 0) {
        pbVar27 = (byte *)((long)local_388 + 9);
        do {
          uVar41 = uVar41 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar31 != 0);
      }
      *(uint *)local_388 = uVar41;
      local_388 = local_388 + 9;
    }
  }
  FUN_71032ccb70(param_1 + 0x4d0,(undefined8 *)(param_1 + 0x158),(long ****)&local_390,&local_e0,
                 &local_108,param_6,param_7,param_8);
  if ((byte ***)local_390 != (byte ***)0x0) {
    local_388 = (byte ***)local_390;
    FUN_710392eb40((ulong)local_390);
  }
  uVar46 = local_100;
  local_108 = (long ***)&PTR_FUN_710523d988;
  local_100 = 0;
  if (uVar46 != 0) {
    uVar18 = *(ulong *)(uVar46 + 0x18);
    *(undefined ***)(uVar46 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar46 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar46);
  }
  if (local_f8 != (uint *)0x0) {
    local_f0 = local_f8;
    FUN_710392eb40((ulong)local_f8);
  }
  puVar12 = local_b8;
  local_c0 = &PTR_FUN_710523d988;
  local_b8 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    uVar46 = puVar12[3];
    puVar12[2] = &PTR_FUN_710523d9a8;
    puVar12[3] = 0;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
    FUN_710392eb40((ulong)puVar12);
  }
  uVar46 = local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = 0;
  if (uVar46 != 0) {
    FUN_710392eb40(uVar46);
  }
  local_a0 = &PTR_FUN_710523d988;
  local_98 = (undefined8 *)0x0;
  if (puVar13 != (undefined8 *)0x0) {
    uVar46 = puVar13[3];
    puVar13[2] = &PTR_FUN_710523d9a8;
    puVar13[3] = 0;
    if (uVar46 != 0) {
      FUN_710392eb40(uVar46);
    }
    FUN_710392eb40((ulong)puVar13);
  }
  local_390 = (undefined **)FUN_7102524060;
  FUN_71025241c0(*(undefined4 **)(param_1 + 0x510),*(undefined4 **)(param_1 + 0x518),&local_390);
  local_390 = (undefined **)0x0;
  local_388 = (byte ***)0x4248000041800000;
  local_378 = 0;
  uStack_376 = 1;
  local_340 = (long *)0x0;
  local_380 = (byte ***)0x101013f800000;
  local_310 = (long *)0x0;
  local_2e0 = (long *)0x0;
  local_2b0 = (long *)0x0;
  local_280 = (long *)0x0;
  uStack_36f = 0;
  uStack_371 = 0;
  uStack_370 = 0;
  iStack_375 = 0;
  FUN_710337e790((long)&local_390);
  iStack_375 = CONCAT31(0x101,(undefined1)iStack_375);
  uStack_371 = 0;
  iVar5 = 0;
  if (iVar14 != 0) {
    iVar5 = iVar14 + 1;
  }
  local_380 = (byte ***)CONCAT44(1,(undefined4)local_380);
  *(int *)(param_1 + 0xbcc) = iVar5;
  local_390 = (undefined **)CONCAT44(iVar5,(undefined4)local_390);
  FUN_7103781a20((long *)(param_1 + 0x500),puVar1,(byte ****)"scroll",(byte ****)&local_390,
                 (long ****)(param_1 + 0x508),param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x2a4);
  if (*(int *)(param_1 + 0xbc4) != 1) {
    *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc4);
    *(undefined4 *)(param_1 + 0xbc4) = 1;
    (**(code **)(**(long **)(param_1 + 0x4f8) + 0x70))(*(long **)(param_1 + 0x4f8),0);
    (**(code **)(**(long **)(param_1 + 0x4f8) + 0x60))(*(long **)(param_1 + 0x4f8),1);
    (**(code **)(**(long **)(param_1 + 0x500) + 0x70))(*(long **)(param_1 + 0x500),1);
  }
  if (alStack_2a0 == local_280) {
    (**(code **)(*local_280 + 0x20))();
  }
  else if (local_280 != (long *)0x0) {
    (**(code **)(*local_280 + 0x28))();
  }
  if (alStack_2d0 == local_2b0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_2b0 + 0x20);
LAB_7101e1a95c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_2b0 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_2b0 + 0x28);
    goto LAB_7101e1a95c;
  }
  if (alStack_300 == local_2e0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_2e0 + 0x20);
LAB_7101e1a98c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_2e0 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_2e0 + 0x28);
    goto LAB_7101e1a98c;
  }
  if (alStack_330 == local_310) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_310 + 0x20);
LAB_7101e1a9bc:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_310 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_310 + 0x28);
    goto LAB_7101e1a9bc;
  }
  if (alStack_360 == local_340) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_340 + 0x20);
LAB_7101e1a9ec:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_340 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_340 + 0x28);
    goto LAB_7101e1a9ec;
  }
  if (local_258 != (uint *)0x0) {
    local_250 = local_258;
    FUN_710392eb40((ulong)local_258);
  }
  if (alStack_150 == local_130) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_130 + 0x20);
LAB_7101e1aa2c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_130 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_130 + 0x28);
    goto LAB_7101e1aa2c;
  }
  if (alStack_180 == local_160) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_160 + 0x20);
LAB_7101e1aa5c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_160 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_160 + 0x28);
    goto LAB_7101e1aa5c;
  }
  if (alStack_1b0 == local_190) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_190 + 0x20);
LAB_7101e1aa8c:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_190 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_190 + 0x28);
    goto LAB_7101e1aa8c;
  }
  if (alStack_1e0 == local_1c0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_1c0 + 0x20);
LAB_7101e1aabc:
    (*UNRECOVERED_JUMPTABLE)();
  }
  else if (local_1c0 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101e1aabc;
  }
  if (alStack_210 == local_1f0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*local_1f0 + 0x20);
  }
  else {
    if (local_1f0 == (long *)0x0) goto LAB_7101e1aaf0;
    UNRECOVERED_JUMPTABLE = *(code **)(*local_1f0 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_7101e1aaf0:
  *(undefined1 *)(param_1 + 0xbb4) = 0;
  return;
}

