// addr:      71022df1b0
// offset:    0x22df1b0
// name:      FUN_71022df1b0
// mangled:   
// signature: undefined8 __cdecl FUN_71022df1b0(long * param_1, long param_2, long * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_71022df1b0(long *param_1,long param_2,long *param_3,undefined8 param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined1 uVar11;
  uint uVar12;
  code *pcVar13;
  uint *puVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined2 local_184;
  byte ***local_150;
  undefined4 local_148;
  undefined4 local_144;
  byte local_140 [64];
  ushort local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_b0;
  undefined8 local_a8;
  
  lVar9 = (**(code **)(*param_3 + 0x20))(param_3);
  if (0xc7ba50f1c < lVar9) {
    if (lVar9 == 0xc7ba50f1d) {
      pcVar13 = *(code **)(*param_1 + 0x80);
    }
    else {
      if (lVar9 != 0xce99fc8cd) {
        if (lVar9 != 0x1aa7eb827a) {
          return 0;
        }
        puVar14 = (uint *)param_3[1];
        if (puVar14 == (uint *)(param_1 + 1)) {
          return 0;
        }
        uVar20 = 0;
        do {
          pcVar15 = (char *)((long)param_1 + uVar20 + 0x10);
          cVar4 = *pcVar15;
          if (cVar4 == '\0') {
LAB_71022df6fc:
            *(undefined1 *)((long)puVar14 + (uVar20 & 0xffffffff) + 8) = 0;
            uVar19 = (uint)(byte)puVar14[2];
            uVar12 = 0x811c9dc5;
            puVar14[1] = (uint)uVar20;
            if ((byte)puVar14[2] != 0) {
              pbVar17 = (byte *)((long)puVar14 + 9);
              do {
                uVar12 = uVar12 * 0x89 ^ uVar19;
                uVar19 = (uint)*pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (uVar19 != 0);
            }
            *puVar14 = uVar12;
            return 0;
          }
          *(char *)((long)puVar14 + uVar20 + 8) = cVar4;
          if (0x3e < (int)uVar20 + 1U) {
            uVar20 = (ulong)((int)uVar20 + 1);
            goto LAB_71022df6fc;
          }
          cVar4 = pcVar15[1];
          if (cVar4 == '\0') {
            uVar20 = uVar20 + 1;
            goto LAB_71022df6fc;
          }
          *(char *)((long)puVar14 + uVar20 + 9) = cVar4;
          uVar20 = uVar20 + 2;
        } while( true );
      }
      pcVar13 = *(code **)(*param_1 + 0x88);
    }
    (*pcVar13)(param_1,param_2,param_3);
    return 0;
  }
  if (lVar9 == 0xa161ea452) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (param_1[0x11] == 0) {
      lVar9 = *(long *)(param_1[0xf] + 0x60);
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1[0xf] + 8);
        plVar25 = (long *)*plVar10;
        if (plVar25 != (long *)0x0) {
          uVar12 = *(uint *)(lVar9 + 8);
          pcVar15 = (char *)(lVar9 + 0x10);
          plVar23 = plVar10;
          do {
            iVar8 = -1;
            if (uVar12 <= *(uint *)(plVar25 + 4)) {
              if (uVar12 < *(uint *)(plVar25 + 4)) {
                iVar8 = 1;
              }
              else {
                iVar8 = strcmp((char *)(plVar25 + 5),pcVar15);
              }
            }
            if (iVar8 >= 0) {
              plVar23 = plVar25;
            }
            plVar25 = (long *)plVar25[iVar8 < 0];
          } while (plVar25 != (long *)0x0);
          goto LAB_71022dfd94;
        }
      }
    }
  }
  else {
    if (lVar9 != 0xbcd1970ce) {
      if (lVar9 != 0xc1d068201) {
        return 0;
      }
      local_f8 = &PTR_FUN_71050a1140;
      local_148 = local_148 & 0xffffff00;
      local_150 = (byte ***)0x0;
      local_f0 = &local_150;
      local_a8 = *(long *)(*(long *)(param_2 + 8) + 0x18);
      if (((local_a8 != 0) && (plVar10 = *(long **)(local_a8 + 0x38), plVar10 != (long *)0x0)) &&
         (*(char *)(local_a8 + 0x8c) == '\0')) {
        local_b0 = &PTR_FUN_710523cd18;
        (**(code **)(*plVar10 + 0x40))(plVar10,&local_b0,&local_f8);
      }
      puVar14 = (uint *)param_3[1];
      uVar12 = 0x811c9dc5;
      if (puVar14 != (uint *)(param_1 + 1)) {
        uVar20 = 0;
        while( true ) {
          pcVar15 = (char *)((long)param_1 + uVar20 + 0x10);
          cVar4 = *pcVar15;
          if (cVar4 == '\0') break;
          *(char *)((long)puVar14 + uVar20 + 8) = cVar4;
          if (0x3e < (int)uVar20 + 1U) {
            uVar20 = (ulong)((int)uVar20 + 1);
            break;
          }
          cVar4 = pcVar15[1];
          if (cVar4 == '\0') {
            uVar20 = uVar20 + 1;
            break;
          }
          *(char *)((long)puVar14 + uVar20 + 9) = cVar4;
          uVar20 = uVar20 + 2;
        }
        *(undefined1 *)((long)puVar14 + (uVar20 & 0xffffffff) + 8) = 0;
        puVar14[1] = (uint)uVar20;
        uVar18 = (uint)(byte)puVar14[2];
        uVar19 = uVar12;
        if ((byte)puVar14[2] != 0) {
          pbVar17 = (byte *)((long)puVar14 + 9);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (uVar18 != 0);
        }
        *puVar14 = uVar19;
        puVar14 = (uint *)param_3[1];
      }
      if ((byte ****)(puVar14 + 0x24) == &local_150) {
        return 1;
      }
      uVar20 = 0;
      do {
        if (*(char *)((long)&local_148 + uVar20) == '\0') {
LAB_71022df744:
          *(undefined1 *)((long)puVar14 + (uVar20 & 0xffffffff) + 0x98) = 0;
          puVar14[0x25] = (uint)uVar20;
          uVar19 = (uint)(byte)puVar14[0x26];
          if ((byte)puVar14[0x26] != 0) {
            pbVar17 = (byte *)((long)puVar14 + 0x99);
            do {
              uVar12 = uVar12 * 0x89 ^ uVar19;
              uVar19 = (uint)*pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (uVar19 != 0);
          }
          puVar14[0x24] = uVar12;
          return 1;
        }
        *(char *)((long)puVar14 + uVar20 + 0x98) = *(char *)((long)&local_148 + uVar20);
        if (0x3e < (int)uVar20 + 1U) {
          uVar20 = (ulong)((int)uVar20 + 1);
          goto LAB_71022df744;
        }
        cVar4 = *(char *)((long)&local_148 + uVar20 + 1);
        if (cVar4 == '\0') {
          uVar20 = uVar20 + 1;
          goto LAB_71022df744;
        }
        *(char *)((long)puVar14 + uVar20 + 0x99) = cVar4;
        uVar20 = uVar20 + 2;
      } while( true );
    }
    plVar10 = (long *)param_1[0xe];
    if (plVar10[2] != 0) {
      lVar9 = *plVar10;
      plVar25 = (long *)plVar10[1];
      *(undefined8 *)(*plVar25 + 8) = *(undefined8 *)(lVar9 + 8);
      **(long **)(lVar9 + 8) = *plVar25;
      plVar10[2] = 0;
      while (plVar23 = plVar25, plVar23 != plVar10) {
        plVar25 = (long *)plVar23[1];
        plVar24 = (long *)plVar23[0x15];
        if (plVar24 != (long *)0x0) {
          plVar1 = plVar24 + 1;
          do {
            lVar9 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar23 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar23);
        }
      }
    }
    bVar5 = *(byte *)(param_3 + 0x13);
    uVar12 = 0x811c9dc5;
    if (bVar5 != 0) {
      plVar10 = *(long **)(*(long *)(param_2 + 8) + 0x20);
      if (plVar10[2] != 0) {
        lVar9 = *plVar10;
        plVar25 = (long *)plVar10[1];
        *(undefined8 *)(*plVar25 + 8) = *(undefined8 *)(lVar9 + 8);
        **(long **)(lVar9 + 8) = *plVar25;
        plVar10[2] = 0;
        while (plVar23 = plVar25, plVar23 != plVar10) {
          plVar25 = (long *)plVar23[1];
          plVar24 = (long *)plVar23[0x15];
          if (plVar24 != (long *)0x0) {
            plVar1 = plVar24 + 1;
            do {
              lVar9 = *plVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar23 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar23);
          }
        }
      }
      if (((DAT_710593b2d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593b2d0), iVar8 != 0))
      {
        DAT_710593b288 = 0;
        DAT_710593b280 = 0;
        __cxa_guard_release(&DAT_710593b2d0);
      }
      piVar2 = (int *)&DAT_710593b280;
      if (*(long *)(param_1[0xf] + 0x60) != 0) {
        piVar2 = (int *)(*(long *)(param_1[0xf] + 0x60) + 8);
      }
      if ((*piVar2 != 0x2f9a03cb) ||
         (iVar8 = strcmp((char *)(piVar2 + 2),"MainMenuScene"), iVar8 != 0)) {
        uStack_190 = 0x756e654d6e69614d;
        local_188 = 0x6e656353;
        local_184 = 0x65;
        pcVar15 = (char *)((long)&uStack_190 + 1);
        do {
          cVar4 = *pcVar15;
          pcVar15 = pcVar15 + 1;
        } while (cVar4 != '\0');
        local_150 = (byte ***)&PTR_FUN_71050b62b8;
        bVar22 = 0x4d;
        local_148 = 0;
        uVar20 = 0;
        do {
          local_140[uVar20] = bVar22;
          if (0x3e < (int)uVar20 + 1U) {
            uVar16 = (ulong)((int)uVar20 + 1);
            break;
          }
          bVar6 = *(byte *)((long)&uStack_190 + uVar20 + 1);
          if (bVar6 == 0) {
            uVar16 = uVar20 + 1;
            break;
          }
          bVar22 = *(byte *)((long)&uStack_190 + uVar20 + 2);
          uVar16 = uVar20 + 2;
          local_140[uVar20 + 1] = bVar6;
          uVar20 = uVar16;
        } while (bVar22 != 0);
        local_140[uVar16 & 0xffffffff] = 0;
        local_144 = (int)uVar16;
        uVar19 = (uint)local_140[0];
        local_148 = uVar12;
        if (local_140[0] != 0) {
          pbVar17 = local_140;
          do {
            pbVar17 = pbVar17 + 1;
            local_148 = local_148 * 0x89 ^ uVar19;
            uVar19 = (uint)*pbVar17;
          } while (uVar19 != 0);
        }
        local_100 = 0;
        lVar9 = *(long *)(param_2 + 8);
        for (uVar20 = 0; "MenuSequenceScene"[uVar20] != '\0'; uVar20 = uVar20 + 2) {
          cVar4 = "MenuSequenceScene"[uVar20 + 1];
          *(char *)((long)&local_f0 + uVar20) = "MenuSequenceScene"[uVar20];
          if (cVar4 == '\0') {
            uVar20 = uVar20 + 1;
            break;
          }
          *(char *)((long)&local_f0 + uVar20 + 1) = cVar4;
        }
        *(undefined1 *)((long)&local_f0 + (uVar20 & 0xffffffff)) = 0;
        local_f8 = (undefined **)(uVar20 << 0x20);
        uVar18 = (uint)(byte)local_f0;
        uVar19 = uVar12;
        if ((byte)local_f0 != 0) {
          pbVar17 = (byte *)((long)&local_f0 + 1);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (uVar18 != 0);
        }
        local_f8 = (undefined **)CONCAT44((int)uVar20,uVar19);
        lVar21 = *(long *)(lVar9 + 0x38);
        if (lVar21 == 0) {
          local_a8 = local_a8 & 0xffffffffffffff00;
          local_b0 = (undefined **)0x0;
        }
        else {
          uVar20 = 0;
          while( true ) {
            pcVar15 = (char *)(lVar21 + 0x10 + uVar20);
            cVar4 = *pcVar15;
            if (cVar4 == '\0') break;
            *(char *)((long)&local_a8 + uVar20) = cVar4;
            if (0x3e < (int)uVar20 + 1U) {
              uVar20 = (ulong)((int)uVar20 + 1);
              break;
            }
            cVar4 = pcVar15[1];
            if (cVar4 == '\0') {
              uVar20 = uVar20 + 1;
              break;
            }
            *(char *)((long)&local_a8 + uVar20 + 1) = cVar4;
            uVar20 = uVar20 + 2;
          }
          *(undefined1 *)((long)&local_a8 + (uVar20 & 0xffffffff)) = 0;
          local_b0 = (undefined **)(uVar20 << 0x20);
          uVar18 = (uint)(byte)local_a8;
          uVar19 = uVar12;
          if ((byte)local_a8 != 0) {
            pbVar17 = (byte *)((long)&local_a8 + 1);
            do {
              uVar19 = uVar19 * 0x89 ^ uVar18;
              uVar18 = (uint)*pbVar17;
              pbVar17 = pbVar17 + 1;
            } while (uVar18 != 0);
          }
          local_b0 = (undefined **)CONCAT44((int)uVar20,uVar19);
        }
        FUN_7103726240(*(long **)(lVar9 + 0x20),&local_f8,(long ****)&local_b0,&local_150,param_5,
                       param_6,param_7,param_8);
      }
    }
    if (((DAT_710593b2d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_710593b2d0), iVar8 != 0)) {
      DAT_710593b288 = 0;
      DAT_710593b280 = 0;
      __cxa_guard_release(&DAT_710593b2d0);
    }
    puVar3 = &DAT_710593b280;
    if (*(long *)(param_1[0xf] + 0x60) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_1[0xf] + 0x60) + 8);
    }
    local_150 = (byte ***)&PTR_FUN_71050b62b8;
    local_148 = 0;
    uVar20 = 0;
    while( true ) {
      pbVar17 = (byte *)((long)puVar3 + uVar20 + 8);
      bVar22 = *pbVar17;
      if (bVar22 == 0) break;
      local_140[uVar20] = bVar22;
      if (0x3e < (int)uVar20 + 1U) {
        uVar20 = (ulong)((int)uVar20 + 1);
        break;
      }
      bVar22 = pbVar17[1];
      if (bVar22 == 0) {
        uVar20 = uVar20 + 1;
        break;
      }
      local_140[uVar20 + 1] = bVar22;
      uVar20 = uVar20 + 2;
    }
    local_140[uVar20 & 0xffffffff] = 0;
    local_144 = (int)uVar20;
    uVar19 = (uint)local_140[0];
    local_148 = uVar12;
    if (local_140[0] != 0) {
      pbVar17 = local_140;
      do {
        pbVar17 = pbVar17 + 1;
        local_148 = local_148 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    local_100 = (ushort)bVar5 << 8;
    lVar9 = *(long *)(param_2 + 8);
    uVar20 = 0;
    while( true ) {
      pcVar15 = (char *)((long)param_1 + uVar20 + 0x10);
      cVar4 = *pcVar15;
      if (cVar4 == '\0') break;
      *(char *)((long)&local_f0 + uVar20) = cVar4;
      if (0x3e < (int)uVar20 + 1U) {
        uVar20 = (ulong)((int)uVar20 + 1);
        break;
      }
      cVar4 = pcVar15[1];
      if (cVar4 == '\0') {
        uVar20 = uVar20 + 1;
        break;
      }
      *(char *)((long)&local_f0 + uVar20 + 1) = cVar4;
      uVar20 = uVar20 + 2;
    }
    *(undefined1 *)((long)&local_f0 + (uVar20 & 0xffffffff)) = 0;
    local_f8 = (undefined **)(uVar20 << 0x20);
    uVar18 = (uint)(byte)local_f0;
    uVar19 = uVar12;
    if ((byte)local_f0 != 0) {
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
    }
    local_f8 = (undefined **)CONCAT44((int)uVar20,uVar19);
    lVar21 = *(long *)(lVar9 + 0x38);
    if (lVar21 == 0) {
      local_a8 = local_a8 & 0xffffffffffffff00;
      local_b0 = (undefined **)0x0;
    }
    else {
      uVar20 = 0;
      while( true ) {
        pcVar15 = (char *)(lVar21 + 0x10 + uVar20);
        cVar4 = *pcVar15;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_a8 + uVar20) = cVar4;
        if (0x3e < (int)uVar20 + 1U) {
          uVar20 = (ulong)((int)uVar20 + 1);
          break;
        }
        cVar4 = pcVar15[1];
        if (cVar4 == '\0') {
          uVar20 = uVar20 + 1;
          break;
        }
        *(char *)((long)&local_a8 + uVar20 + 1) = cVar4;
        uVar20 = uVar20 + 2;
      }
      *(undefined1 *)((long)&local_a8 + (uVar20 & 0xffffffff)) = 0;
      local_b0 = (undefined **)(uVar20 << 0x20);
      uVar18 = (uint)(byte)local_a8;
      uVar19 = uVar12;
      if ((byte)local_a8 != 0) {
        pbVar17 = (byte *)((long)&local_a8 + 1);
        do {
          uVar19 = uVar19 * 0x89 ^ uVar18;
          uVar18 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar18 != 0);
      }
      local_b0 = (undefined **)CONCAT44((int)uVar20,uVar19);
    }
    FUN_71037266d0(*(long *)(lVar9 + 0x20),&local_f8,(long ****)&local_b0,&local_150,param_5,param_6
                   ,param_7,param_8);
    local_150 = (byte ***)&PTR_FUN_71050b62b8;
    local_148 = 0;
    uVar20 = 0;
    while( true ) {
      pbVar17 = (byte *)((long)param_3 + uVar20 + 0x58);
      bVar22 = *pbVar17;
      if (bVar22 == 0) break;
      local_140[uVar20] = bVar22;
      if (0x3e < (int)uVar20 + 1U) {
        uVar20 = (ulong)((int)uVar20 + 1);
        break;
      }
      bVar22 = pbVar17[1];
      if (bVar22 == 0) {
        uVar20 = uVar20 + 1;
        break;
      }
      local_140[uVar20 + 1] = bVar22;
      uVar20 = uVar20 + 2;
    }
    local_140[uVar20 & 0xffffffff] = 0;
    local_144 = (int)uVar20;
    uVar19 = (uint)local_140[0];
    local_148 = uVar12;
    if (local_140[0] != 0) {
      pbVar17 = local_140;
      do {
        pbVar17 = pbVar17 + 1;
        local_148 = local_148 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar17;
      } while (uVar19 != 0);
    }
    local_100 = (ushort)bVar5;
    lVar9 = *(long *)(param_2 + 8);
    uVar20 = 0;
    while( true ) {
      pcVar15 = (char *)((long)param_3 + uVar20 + 0x10);
      cVar4 = *pcVar15;
      if (cVar4 == '\0') break;
      *(char *)((long)&local_f0 + uVar20) = cVar4;
      if (0x3e < (int)uVar20 + 1U) {
        uVar20 = (ulong)((int)uVar20 + 1);
        break;
      }
      cVar4 = pcVar15[1];
      if (cVar4 == '\0') {
        uVar20 = uVar20 + 1;
        break;
      }
      *(char *)((long)&local_f0 + uVar20 + 1) = cVar4;
      uVar20 = uVar20 + 2;
    }
    *(undefined1 *)((long)&local_f0 + (uVar20 & 0xffffffff)) = 0;
    uVar18 = (uint)(byte)local_f0;
    local_f8 = (undefined **)(uVar20 << 0x20);
    uVar19 = uVar12;
    if ((byte)local_f0 != 0) {
      pbVar17 = (byte *)((long)&local_f0 + 1);
      do {
        uVar19 = uVar19 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
    }
    local_f8 = (undefined **)CONCAT44((int)uVar20,uVar19);
    lVar21 = *(long *)(lVar9 + 0x38);
    if (lVar21 == 0) {
      local_a8 = local_a8 & 0xffffffffffffff00;
      local_b0 = (undefined **)0x0;
    }
    else {
      uVar20 = 0;
      while( true ) {
        pcVar15 = (char *)(lVar21 + 0x10 + uVar20);
        cVar4 = *pcVar15;
        if (cVar4 == '\0') break;
        *(char *)((long)&local_a8 + uVar20) = cVar4;
        if (0x3e < (int)uVar20 + 1U) {
          uVar20 = (ulong)((int)uVar20 + 1);
          break;
        }
        cVar4 = pcVar15[1];
        if (cVar4 == '\0') {
          uVar20 = uVar20 + 1;
          break;
        }
        *(char *)((long)&local_a8 + uVar20 + 1) = cVar4;
        uVar20 = uVar20 + 2;
      }
      *(undefined1 *)((long)&local_a8 + (uVar20 & 0xffffffff)) = 0;
      uVar19 = (uint)(byte)local_a8;
      local_b0 = (undefined **)(uVar20 << 0x20);
      if ((byte)local_a8 != 0) {
        pbVar17 = (byte *)((long)&local_a8 + 1);
        do {
          uVar12 = uVar12 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (uVar19 != 0);
      }
      local_b0 = (undefined **)CONCAT44((int)uVar20,uVar12);
    }
    FUN_71037266d0(*(long *)(lVar9 + 0x20),&local_f8,(long ****)&local_b0,&local_150,param_5,param_6
                   ,param_7,param_8);
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (param_1[0x11] == 0) {
      lVar9 = *(long *)(param_1[0xf] + 0x60);
      if (lVar9 != 0) {
        plVar10 = (long *)(param_1[0xf] + 8);
        plVar25 = (long *)*plVar10;
        if (plVar25 != (long *)0x0) {
          uVar12 = *(uint *)(lVar9 + 8);
          pcVar15 = (char *)(lVar9 + 0x10);
          plVar23 = plVar10;
          do {
            iVar8 = -1;
            if (uVar12 <= *(uint *)(plVar25 + 4)) {
              if (uVar12 < *(uint *)(plVar25 + 4)) {
                iVar8 = 1;
              }
              else {
                iVar8 = strcmp((char *)(plVar25 + 5),pcVar15);
              }
            }
            if (iVar8 >= 0) {
              plVar23 = plVar25;
            }
            plVar25 = (long *)plVar25[iVar8 < 0];
          } while (plVar25 != (long *)0x0);
LAB_71022dfd94:
          if ((((plVar23 != plVar10) && (*(uint *)(plVar23 + 4) <= uVar12)) &&
              ((*(uint *)(plVar23 + 4) < uVar12 ||
               (iVar8 = strcmp(pcVar15,(char *)(plVar23 + 5)), -1 < iVar8)))) &&
             (*(int *)(plVar23[0xd] + 0x10) != 0)) {
            uVar11 = 1;
            goto LAB_71022dfd0c;
          }
        }
      }
    }
  }
  uVar11 = 0;
LAB_71022dfd0c:
  *(undefined1 *)((long)param_1 + 0xe1) = uVar11;
  return 1;
}

