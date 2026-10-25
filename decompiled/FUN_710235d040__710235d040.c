// addr:      710235d040
// offset:    0x235d040
// name:      FUN_710235d040
// mangled:   
// signature: undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710235d040(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  plVar15 = (long *)(param_1 + 8);
  plVar18 = *(long **)(*plVar15 + 0x20);
  if (plVar18[2] != 0) {
    lVar8 = *plVar18;
    plVar19 = (long *)plVar18[1];
    *(undefined8 *)(*plVar19 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = *plVar19;
    plVar18[2] = 0;
    while (plVar6 = plVar19, plVar6 != plVar18) {
      plVar19 = (long *)plVar6[1];
      plVar17 = (long *)plVar6[0x15];
      if (plVar17 != (long *)0x0) {
        plVar1 = plVar17 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          std::__shared_weak_count::__release_weak();
          param_2 = extraout_x1;
        }
      }
      if (plVar6 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar6);
        param_2 = extraout_x1_00;
      }
    }
  }
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_01, iVar7 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_02;
  }
  if (DAT_71053050f0 < 0x4080000) {
    if (0x401ffff < DAT_71053050f0) {
      if (0x40301ff < DAT_71053050f0) {
        if (DAT_71053050f0 < 0x4050000) {
          if ((DAT_71053050f0 == 0x4030200) || (DAT_71053050f0 == 0x4030300)) {
LAB_710235dbac:
            lVar8 = *plVar15;
            for (uVar11 = 0; "HomeRunContestSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "HomeRunContestSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "HomeRunContestSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            uVar9 = 0x811c9dc5;
            uVar16 = 0x811c9dc5;
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) {
              local_120 = local_120 & 0xffffffffffffff00;
              local_128 = (undefined **)0x0;
            }
            else {
              uVar11 = 0;
              while( true ) {
                pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
                cVar4 = *pcVar2;
                if (cVar4 == '\0') break;
                *(char *)((long)&local_120 + uVar11) = cVar4;
                if (0x3e < (int)uVar11 + 1U) {
                  uVar11 = (ulong)((int)uVar11 + 1);
                  break;
                }
                cVar4 = pcVar2[1];
                if (cVar4 == '\0') {
                  uVar11 = uVar11 + 1;
                  break;
                }
                *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
                uVar11 = uVar11 + 2;
              }
              *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
              uVar10 = (uint)(byte)local_120;
              uVar13 = uVar9;
              if ((byte)local_120 != 0) {
                pbVar12 = (byte *)((long)&local_120 + 1);
                do {
                  uVar13 = uVar13 * 0x89 ^ uVar10;
                  uVar10 = (uint)*pbVar12;
                  pbVar12 = pbVar12 + 1;
                } while (uVar10 != 0);
              }
              local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
            }
            FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                           param_5,param_6,param_7,param_8);
            lVar8 = *plVar15;
            for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "MenuSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "MenuSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) goto LAB_7102362ac8;
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar13 = (uint)(byte)local_120;
            local_128._4_4_ = (undefined4)uVar11;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              uVar16 = uVar9;
              do {
                uVar16 = uVar16 * 0x89 ^ uVar13;
                uVar13 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar13 != 0);
            }
          }
          else {
            if (DAT_71053050f0 != 0x4040000) goto LAB_710235f82c;
            lVar8 = *plVar15;
            for (uVar11 = 0; "TrainingSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "TrainingSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "TrainingSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            uVar9 = 0x811c9dc5;
            uVar16 = 0x811c9dc5;
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) {
              local_120 = local_120 & 0xffffffffffffff00;
              local_128 = (undefined **)0x0;
            }
            else {
              uVar11 = 0;
              while( true ) {
                pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
                cVar4 = *pcVar2;
                if (cVar4 == '\0') break;
                *(char *)((long)&local_120 + uVar11) = cVar4;
                if (0x3e < (int)uVar11 + 1U) {
                  uVar11 = (ulong)((int)uVar11 + 1);
                  break;
                }
                cVar4 = pcVar2[1];
                if (cVar4 == '\0') {
                  uVar11 = uVar11 + 1;
                  break;
                }
                *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
                uVar11 = uVar11 + 2;
              }
              *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
              uVar10 = (uint)(byte)local_120;
              uVar13 = uVar9;
              if ((byte)local_120 != 0) {
                pbVar12 = (byte *)((long)&local_120 + 1);
                do {
                  uVar13 = uVar13 * 0x89 ^ uVar10;
                  uVar10 = (uint)*pbVar12;
                  pbVar12 = pbVar12 + 1;
                } while (uVar10 != 0);
              }
              local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
            }
            FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                           param_5,param_6,param_7,param_8);
            lVar8 = *plVar15;
            for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "MenuSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "MenuSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) goto LAB_7102362ac8;
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar13 = (uint)(byte)local_120;
            local_128._4_4_ = (undefined4)uVar11;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              uVar16 = uVar9;
              do {
                uVar16 = uVar16 * 0x89 ^ uVar13;
                uVar13 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar13 != 0);
            }
          }
        }
        else if (DAT_71053050f0 == 0x4050000) {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          DAT_7105307d40 = 0;
          lVar8 = *plVar15;
          for (uVar11 = 0; "CharaMakeSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "CharaMakeSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "CharaMakeSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
        else if (DAT_71053050f0 == 0x4060000) {
          lVar8 = *plVar15;
          for (uVar11 = 0; "StageMakeSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "StageMakeSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "StageMakeSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
        else {
          if (DAT_71053050f0 != 0x4070000) goto LAB_710235f82c;
          lVar8 = *plVar15;
          for (uVar11 = 0; "AmiiboSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "AmiiboSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "AmiiboSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
        goto LAB_710235fd4c;
      }
      if (DAT_71053050f0 < 0x4020300) {
        if (((DAT_71053050f0 == 0x4020000) || (DAT_71053050f0 == 0x4020100)) ||
           (DAT_71053050f0 == 0x4020200)) {
LAB_710235dc8c:
          lVar8 = *plVar15;
          for (uVar11 = 0; "KumiteSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "KumiteSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "KumiteSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
          goto LAB_710235fd4c;
        }
      }
      else {
        if (DAT_71053050f0 == 0x4020300) goto LAB_710235dc8c;
        if ((DAT_71053050f0 == 0x4030000) || (DAT_71053050f0 == 0x4030100)) goto LAB_710235dbac;
      }
LAB_710235f82c:
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar9 = (uint)local_80[0];
      uVar13 = uVar16;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 != 0) {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar16);
        goto LAB_7102362ad0;
      }
LAB_7102362ac8:
      local_120 = local_120 & 0xffffffffffffff00;
      local_128 = (undefined **)0x0;
      goto LAB_7102362ad0;
    }
    if (DAT_71053050f0 < 0x2040000) {
      if (DAT_71053050f0 < 0x2030100) {
        if (DAT_71053050f0 != 0x2010000) {
          if (DAT_71053050f0 == 0x2020000) {
            lVar8 = *plVar15;
            for (uVar11 = 0; "MeleeTeamCompeSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "MeleeTeamCompeSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "MeleeTeamCompeSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            uVar9 = 0x811c9dc5;
            uVar16 = 0x811c9dc5;
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) {
              local_120 = local_120 & 0xffffffffffffff00;
              local_128 = (undefined **)0x0;
            }
            else {
              uVar11 = 0;
              while( true ) {
                pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
                cVar4 = *pcVar2;
                if (cVar4 == '\0') break;
                *(char *)((long)&local_120 + uVar11) = cVar4;
                if (0x3e < (int)uVar11 + 1U) {
                  uVar11 = (ulong)((int)uVar11 + 1);
                  break;
                }
                cVar4 = pcVar2[1];
                if (cVar4 == '\0') {
                  uVar11 = uVar11 + 1;
                  break;
                }
                *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
                uVar11 = uVar11 + 2;
              }
              *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
              uVar10 = (uint)(byte)local_120;
              uVar13 = uVar9;
              if ((byte)local_120 != 0) {
                pbVar12 = (byte *)((long)&local_120 + 1);
                do {
                  uVar13 = uVar13 * 0x89 ^ uVar10;
                  uVar10 = (uint)*pbVar12;
                  pbVar12 = pbVar12 + 1;
                } while (uVar10 != 0);
              }
              local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
            }
            FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                           param_5,param_6,param_7,param_8);
            lVar8 = *plVar15;
            for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
              bVar3 = "MenuSequenceScene"[uVar11 + 1];
              local_80[uVar11] = "MenuSequenceScene"[uVar11];
              if (bVar3 == 0) {
                uVar11 = uVar11 + 1;
                break;
              }
              local_80[uVar11 + 1] = bVar3;
            }
            local_80[uVar11 & 0xffffffff] = 0;
            local_88 = (long ***)(uVar11 << 0x20);
            uVar10 = (uint)local_80[0];
            uVar13 = uVar9;
            if (local_80[0] != 0) {
              pbVar12 = local_80;
              do {
                pbVar12 = pbVar12 + 1;
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
              } while (uVar10 != 0);
            }
            local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
            lVar14 = *(long *)(lVar8 + 0x38);
            if (lVar14 == 0) goto LAB_7102362ac8;
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar13 = (uint)(byte)local_120;
            local_128._4_4_ = (undefined4)uVar11;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              uVar16 = uVar9;
              do {
                uVar16 = uVar16 * 0x89 ^ uVar13;
                uVar13 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar13 != 0);
            }
            goto LAB_710235fd4c;
          }
          if (DAT_71053050f0 != 0x2030000) goto LAB_710235f82c;
        }
      }
      else if ((DAT_71053050f0 != 0x2030100) && (DAT_71053050f0 != 0x2030200)) {
        if (DAT_71053050f0 != 0x2030300) goto LAB_710235f82c;
        lVar8 = *plVar15;
        for (uVar11 = 0; "MeleeAllBattleSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MeleeAllBattleSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MeleeAllBattleSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
        goto LAB_710235fd4c;
      }
      lVar8 = *plVar15;
      for (uVar11 = 0; "MeleeNormalSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MeleeNormalSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MeleeNormalSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else if (DAT_71053050f0 < 0x3030000) {
      if (DAT_71053050f0 == 0x2040000) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "MeleeTournamentSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MeleeTournamentSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MeleeTournamentSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else if (DAT_71053050f0 == 0x3010000) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "SpiritsBoardSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "SpiritsBoardSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "SpiritsBoardSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        if (DAT_71053050f0 != 0x3020000) goto LAB_710235f82c;
        FUN_710323b9e0(*(long *)(*(long *)(DAT_710532f870 + 8) + 8),param_2,(long *********)param_3,
                       param_4,param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "SpiritsCampaignSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "SpiritsCampaignSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "SpiritsCampaignSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    else if (DAT_71053050f0 == 0x3030000) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "SpiritsOrganizationSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "SpiritsOrganizationSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "SpiritsOrganizationSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else if (DAT_71053050f0 == 0x3040000) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "SpiritsBoardSpecialSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "SpiritsBoardSpecialSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "SpiritsBoardSpecialSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      if (DAT_71053050f0 != 0x4010000) goto LAB_710235f82c;
      lVar8 = *plVar15;
      for (uVar11 = 0; "StandardSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "StandardSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "StandardSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (DAT_71053050f0 < 0x5060400) {
    if (DAT_71053050f0 < 0x5030000) {
      if (DAT_71053050f0 < 0x5010200) {
        if (DAT_71053050f0 == 0x4080000) {
          lVar8 = *plVar15;
          for (uVar11 = 0; "ChallengerRoomSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "ChallengerRoomSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "ChallengerRoomSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
        else if (DAT_71053050f0 == 0x4090000) {
          lVar8 = *plVar15;
          for (uVar11 = 0; "MeleeVrSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MeleeVrSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MeleeVrSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
        else {
          if (DAT_71053050f0 != 0x5010100) goto LAB_710235f82c;
          lVar8 = *plVar15;
          for (uVar11 = 0; "CollectionReplaySequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "CollectionReplaySequenceScene"[uVar11 + 1];
            local_80[uVar11] = "CollectionReplaySequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          uVar9 = 0x811c9dc5;
          uVar16 = 0x811c9dc5;
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) {
            local_120 = local_120 & 0xffffffffffffff00;
            local_128 = (undefined **)0x0;
          }
          else {
            uVar11 = 0;
            while( true ) {
              pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
              cVar4 = *pcVar2;
              if (cVar4 == '\0') break;
              *(char *)((long)&local_120 + uVar11) = cVar4;
              if (0x3e < (int)uVar11 + 1U) {
                uVar11 = (ulong)((int)uVar11 + 1);
                break;
              }
              cVar4 = pcVar2[1];
              if (cVar4 == '\0') {
                uVar11 = uVar11 + 1;
                break;
              }
              *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
              uVar11 = uVar11 + 2;
            }
            *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
            uVar10 = (uint)(byte)local_120;
            uVar13 = uVar9;
            if ((byte)local_120 != 0) {
              pbVar12 = (byte *)((long)&local_120 + 1);
              do {
                uVar13 = uVar13 * 0x89 ^ uVar10;
                uVar10 = (uint)*pbVar12;
                pbVar12 = pbVar12 + 1;
              } while (uVar10 != 0);
            }
            local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
          }
          FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                         param_5,param_6,param_7,param_8);
          lVar8 = *plVar15;
          for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
            bVar3 = "MenuSequenceScene"[uVar11 + 1];
            local_80[uVar11] = "MenuSequenceScene"[uVar11];
            if (bVar3 == 0) {
              uVar11 = uVar11 + 1;
              break;
            }
            local_80[uVar11 + 1] = bVar3;
          }
          local_80[uVar11 & 0xffffffff] = 0;
          local_88 = (long ***)(uVar11 << 0x20);
          uVar10 = (uint)local_80[0];
          uVar13 = uVar9;
          if (local_80[0] != 0) {
            pbVar12 = local_80;
            do {
              pbVar12 = pbVar12 + 1;
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
            } while (uVar10 != 0);
          }
          local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
          lVar14 = *(long *)(lVar8 + 0x38);
          if (lVar14 == 0) goto LAB_7102362ac8;
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar13 = (uint)(byte)local_120;
          local_128._4_4_ = (undefined4)uVar11;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            uVar16 = uVar9;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar13;
              uVar13 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar13 != 0);
          }
        }
      }
      else if (DAT_71053050f0 == 0x5010200) {
        FUN_710323b9e0(*(long *)(*(long *)(DAT_710532f870 + 8) + 8),param_2,(long *********)param_3,
                       param_4,param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionVideoSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionVideoSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionVideoSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else if (DAT_71053050f0 == 0x5010300) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "VideoEditSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "VideoEditSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "VideoEditSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        if (DAT_71053050f0 != 0x5020000) goto LAB_710235f82c;
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionGetterSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionGetterSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionGetterSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    else if (DAT_71053050f0 < 0x5060100) {
      if (DAT_71053050f0 == 0x5030000) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "SoundTestSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "SoundTestSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "SoundTestSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else if (DAT_71053050f0 == 0x5040000) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionTipsSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionTipsSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionTipsSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        if (DAT_71053050f0 != 0x5050000) goto LAB_710235f82c;
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionMovieSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionMovieSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionMovieSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    else if (DAT_71053050f0 == 0x5060100) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "CollectionCountSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "CollectionCountSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "CollectionCountSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else if (DAT_71053050f0 == 0x5060200) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "CollectionAnniversarySequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "CollectionAnniversarySequenceScene"[uVar11 + 1];
        local_80[uVar11] = "CollectionAnniversarySequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      if (DAT_71053050f0 != 0x5060300) goto LAB_710235f82c;
      lVar8 = *plVar15;
      for (uVar11 = 0; "CollectionFighterSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "CollectionFighterSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "CollectionFighterSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (DAT_71053050f0 < 0x7010100) {
    if (DAT_71053050f0 < 0x5080000) {
      if (DAT_71053050f0 == 0x5060400) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionCardSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionCardSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionCardSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else if (DAT_71053050f0 == 0x5060500) {
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionPlayingSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionPlayingSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionPlayingSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
      else {
        if (DAT_71053050f0 != 0x5070000) goto LAB_710235f82c;
        lVar8 = *plVar15;
        for (uVar11 = 0; "CollectionShopSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "CollectionShopSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "CollectionShopSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        uVar9 = 0x811c9dc5;
        uVar16 = 0x811c9dc5;
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) {
          local_120 = local_120 & 0xffffffffffffff00;
          local_128 = (undefined **)0x0;
        }
        else {
          uVar11 = 0;
          while( true ) {
            pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
            cVar4 = *pcVar2;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_120 + uVar11) = cVar4;
            if (0x3e < (int)uVar11 + 1U) {
              uVar11 = (ulong)((int)uVar11 + 1);
              break;
            }
            cVar4 = pcVar2[1];
            if (cVar4 == '\0') {
              uVar11 = uVar11 + 1;
              break;
            }
            *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
            uVar11 = uVar11 + 2;
          }
          *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
          uVar10 = (uint)(byte)local_120;
          uVar13 = uVar9;
          if ((byte)local_120 != 0) {
            pbVar12 = (byte *)((long)&local_120 + 1);
            do {
              uVar13 = uVar13 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (uVar10 != 0);
          }
          local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
        }
        FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,
                       param_5,param_6,param_7,param_8);
        lVar8 = *plVar15;
        for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
          bVar3 = "MenuSequenceScene"[uVar11 + 1];
          local_80[uVar11] = "MenuSequenceScene"[uVar11];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
        lVar14 = *(long *)(lVar8 + 0x38);
        if (lVar14 == 0) goto LAB_7102362ac8;
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar13 = (uint)(byte)local_120;
        local_128._4_4_ = (undefined4)uVar11;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          uVar16 = uVar9;
          do {
            uVar16 = uVar16 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
        }
      }
    }
    else if (DAT_71053050f0 == 0x5080000) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "CollectionPresentSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "CollectionPresentSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "CollectionPresentSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else if (DAT_71053050f0 == 0x6020000) {
      local_118 = 0;
      local_128 = &PTR_FUN_71050b8ef0;
      local_120 = 0;
      local_d8 = 0;
      local_d4 = 2;
      lVar8 = *plVar15;
      for (uVar11 = 0; "OptionSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OptionSequenceScene"[uVar11 + 1];
        local_c8[uVar11] = "OptionSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_c8[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_c8[uVar11 & 0xffffffff] = 0;
      local_d0 = uVar11 << 0x20;
      uVar10 = (uint)local_c8[0];
      uVar13 = uVar9;
      if (local_c8[0] != 0) {
        pbVar12 = local_c8;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_d0 = CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_80[0] = 0;
        local_88 = (long ***)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pbVar12 = (byte *)(lVar14 + 0x10 + uVar11);
          bVar3 = *pbVar12;
          if (bVar3 == 0) break;
          local_80[uVar11] = bVar3;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          bVar3 = pbVar12[1];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
          uVar11 = uVar11 + 2;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_d0,(long ****)&local_88,(byte ****)&local_128,
                     param_5,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      if (DAT_71053050f0 != 0x6050000) goto LAB_710235f82c;
      local_118 = 0;
      local_128 = &PTR_FUN_71050b8ef0;
      local_120 = 0;
      local_d8 = 0;
      local_d4 = 3;
      lVar8 = *plVar15;
      for (uVar11 = 0; "OptionSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OptionSequenceScene"[uVar11 + 1];
        local_c8[uVar11] = "OptionSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_c8[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_c8[uVar11 & 0xffffffff] = 0;
      local_d0 = uVar11 << 0x20;
      uVar10 = (uint)local_c8[0];
      uVar13 = uVar9;
      if (local_c8[0] != 0) {
        pbVar12 = local_c8;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_d0 = CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_80[0] = 0;
        local_88 = (long ***)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pbVar12 = (byte *)(lVar14 + 0x10 + uVar11);
          bVar3 = *pbVar12;
          if (bVar3 == 0) break;
          local_80[uVar11] = bVar3;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          bVar3 = pbVar12[1];
          if (bVar3 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_80[uVar11 + 1] = bVar3;
          uVar11 = uVar11 + 2;
        }
        local_80[uVar11 & 0xffffffff] = 0;
        local_88 = (long ***)(uVar11 << 0x20);
        uVar10 = (uint)local_80[0];
        uVar13 = uVar9;
        if (local_80[0] != 0) {
          pbVar12 = local_80;
          do {
            pbVar12 = pbVar12 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
          } while (uVar10 != 0);
        }
        local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_d0,(long ****)&local_88,(byte ****)&local_128,
                     param_5,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (DAT_71053050f0 < 0x7010600) {
    if (DAT_71053050f0 == 0x7010100) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "OnlineMeleeAnySequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OnlineMeleeAnySequenceScene"[uVar11 + 1];
        local_80[uVar11] = "OnlineMeleeAnySequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else if (DAT_71053050f0 == 0x7010200) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "OnlineMeleeRoomSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OnlineMeleeRoomSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "OnlineMeleeRoomSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      if (DAT_71053050f0 != 0x7010300) goto LAB_710235f82c;
      lVar8 = *plVar15;
      for (uVar11 = 0; "OnlineMeleeTournamentSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OnlineMeleeTournamentSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "OnlineMeleeTournamentSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar9 = 0x811c9dc5;
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar10 = (uint)(byte)local_120;
        uVar13 = uVar9;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar10 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar10 = (uint)local_80[0];
      uVar13 = uVar9;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        uVar16 = uVar9;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (DAT_71053050f0 < 0x7020000) {
    if (DAT_71053050f0 == 0x7010600) {
      lVar8 = *plVar15;
      for (uVar11 = 0; "OnlineMeleeParallelSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OnlineMeleeParallelSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "OnlineMeleeParallelSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar9 = (uint)local_80[0];
      uVar13 = uVar16;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar9 = (uint)(byte)local_120;
        uVar13 = uVar16;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar9 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar9 = (uint)local_80[0];
      uVar13 = uVar16;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      if (DAT_71053050f0 != 0x7010800) goto LAB_710235f82c;
      lVar8 = *plVar15;
      for (uVar11 = 0; "OnlineMeleeConventionSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "OnlineMeleeConventionSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "OnlineMeleeConventionSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      uVar16 = 0x811c9dc5;
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar9 = (uint)local_80[0];
      uVar13 = uVar16;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) {
        local_120 = local_120 & 0xffffffffffffff00;
        local_128 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_120 + uVar11) = cVar4;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
        uVar9 = (uint)(byte)local_120;
        uVar13 = uVar16;
        if ((byte)local_120 != 0) {
          pbVar12 = (byte *)((long)&local_120 + 1);
          do {
            uVar13 = uVar13 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (uVar9 != 0);
        }
        local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
      }
      FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5
                     ,param_6,param_7,param_8);
      lVar8 = *plVar15;
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar3 = "MenuSequenceScene"[uVar11 + 1];
        local_80[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar3 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_80[uVar11 + 1] = bVar3;
      }
      local_80[uVar11 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar11 << 0x20);
      uVar9 = (uint)local_80[0];
      uVar13 = uVar16;
      if (local_80[0] != 0) {
        pbVar12 = local_80;
        do {
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar12;
        } while (uVar9 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
      lVar14 = *(long *)(lVar8 + 0x38);
      if (lVar14 == 0) goto LAB_7102362ac8;
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar13 = (uint)(byte)local_120;
      local_128._4_4_ = (undefined4)uVar11;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar13 != 0);
      }
    }
  }
  else if (DAT_71053050f0 == 0x7020000) {
    lVar8 = *plVar15;
    for (uVar11 = 0; "OnlineWatchFullSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
      bVar3 = "OnlineWatchFullSequenceScene"[uVar11 + 1];
      local_80[uVar11] = "OnlineWatchFullSequenceScene"[uVar11];
      if (bVar3 == 0) {
        uVar11 = uVar11 + 1;
        break;
      }
      local_80[uVar11 + 1] = bVar3;
    }
    uVar9 = 0x811c9dc5;
    uVar16 = 0x811c9dc5;
    local_80[uVar11 & 0xffffffff] = 0;
    local_88 = (long ***)(uVar11 << 0x20);
    uVar10 = (uint)local_80[0];
    uVar13 = uVar9;
    if (local_80[0] != 0) {
      pbVar12 = local_80;
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
    lVar14 = *(long *)(lVar8 + 0x38);
    if (lVar14 == 0) {
      local_120 = local_120 & 0xffffffffffffff00;
      local_128 = (undefined **)0x0;
    }
    else {
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar10 = (uint)(byte)local_120;
      uVar13 = uVar9;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        do {
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar10 != 0);
      }
      local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
    }
    FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    lVar8 = *plVar15;
    for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
      bVar3 = "MenuSequenceScene"[uVar11 + 1];
      local_80[uVar11] = "MenuSequenceScene"[uVar11];
      if (bVar3 == 0) {
        uVar11 = uVar11 + 1;
        break;
      }
      local_80[uVar11 + 1] = bVar3;
    }
    local_80[uVar11 & 0xffffffff] = 0;
    local_88 = (long ***)(uVar11 << 0x20);
    uVar10 = (uint)local_80[0];
    uVar13 = uVar9;
    if (local_80[0] != 0) {
      pbVar12 = local_80;
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
    lVar14 = *(long *)(lVar8 + 0x38);
    if (lVar14 == 0) goto LAB_7102362ac8;
    uVar11 = 0;
    while( true ) {
      pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
      cVar4 = *pcVar2;
      if (cVar4 == '\0') break;
      *(char *)((long)&local_120 + uVar11) = cVar4;
      if (0x3e < (int)uVar11 + 1U) {
        uVar11 = (ulong)((int)uVar11 + 1);
        break;
      }
      cVar4 = pcVar2[1];
      if (cVar4 == '\0') {
        uVar11 = uVar11 + 1;
        break;
      }
      *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
      uVar11 = uVar11 + 2;
    }
    *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
    uVar13 = (uint)(byte)local_120;
    local_128._4_4_ = (undefined4)uVar11;
    if ((byte)local_120 != 0) {
      pbVar12 = (byte *)((long)&local_120 + 1);
      uVar16 = uVar9;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (uVar13 != 0);
    }
  }
  else {
    if (DAT_71053050f0 != 0x7070000) goto LAB_710235f82c;
    lVar8 = *plVar15;
    for (uVar11 = 0; "OnlineShareSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
      bVar3 = "OnlineShareSequenceScene"[uVar11 + 1];
      local_80[uVar11] = "OnlineShareSequenceScene"[uVar11];
      if (bVar3 == 0) {
        uVar11 = uVar11 + 1;
        break;
      }
      local_80[uVar11 + 1] = bVar3;
    }
    uVar9 = 0x811c9dc5;
    uVar16 = 0x811c9dc5;
    local_80[uVar11 & 0xffffffff] = 0;
    local_88 = (long ***)(uVar11 << 0x20);
    uVar10 = (uint)local_80[0];
    uVar13 = uVar9;
    if (local_80[0] != 0) {
      pbVar12 = local_80;
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
    lVar14 = *(long *)(lVar8 + 0x38);
    if (lVar14 == 0) {
      local_120 = local_120 & 0xffffffffffffff00;
      local_128 = (undefined **)0x0;
    }
    else {
      uVar11 = 0;
      while( true ) {
        pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
        cVar4 = *pcVar2;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_120 + uVar11) = cVar4;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        cVar4 = pcVar2[1];
        if (cVar4 == '\0') {
          uVar11 = uVar11 + 1;
          break;
        }
        *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
        uVar11 = uVar11 + 2;
      }
      *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
      uVar10 = (uint)(byte)local_120;
      uVar13 = uVar9;
      if ((byte)local_120 != 0) {
        pbVar12 = (byte *)((long)&local_120 + 1);
        do {
          uVar13 = uVar13 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (uVar10 != 0);
      }
      local_128 = (undefined **)CONCAT44((int)uVar11,uVar13);
    }
    FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    lVar8 = *plVar15;
    for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
      bVar3 = "MenuSequenceScene"[uVar11 + 1];
      local_80[uVar11] = "MenuSequenceScene"[uVar11];
      if (bVar3 == 0) {
        uVar11 = uVar11 + 1;
        break;
      }
      local_80[uVar11 + 1] = bVar3;
    }
    local_80[uVar11 & 0xffffffff] = 0;
    local_88 = (long ***)(uVar11 << 0x20);
    uVar10 = (uint)local_80[0];
    uVar13 = uVar9;
    if (local_80[0] != 0) {
      pbVar12 = local_80;
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
    }
    local_88 = (long ***)CONCAT44((int)uVar11,uVar13);
    lVar14 = *(long *)(lVar8 + 0x38);
    if (lVar14 == 0) goto LAB_7102362ac8;
    uVar11 = 0;
    while( true ) {
      pcVar2 = (char *)(lVar14 + 0x10 + uVar11);
      cVar4 = *pcVar2;
      if (cVar4 == '\0') break;
      *(char *)((long)&local_120 + uVar11) = cVar4;
      if (0x3e < (int)uVar11 + 1U) {
        uVar11 = (ulong)((int)uVar11 + 1);
        break;
      }
      cVar4 = pcVar2[1];
      if (cVar4 == '\0') {
        uVar11 = uVar11 + 1;
        break;
      }
      *(char *)((long)&local_120 + uVar11 + 1) = cVar4;
      uVar11 = uVar11 + 2;
    }
    *(undefined1 *)((long)&local_120 + (uVar11 & 0xffffffff)) = 0;
    uVar13 = (uint)(byte)local_120;
    local_128._4_4_ = (undefined4)uVar11;
    if ((byte)local_120 != 0) {
      pbVar12 = (byte *)((long)&local_120 + 1);
      uVar16 = uVar9;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (uVar13 != 0);
    }
  }
LAB_710235fd4c:
  local_128 = (undefined **)CONCAT44(local_128._4_4_,uVar16);
LAB_7102362ad0:
  FUN_7103726240(*(long **)(lVar8 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  return;
}

