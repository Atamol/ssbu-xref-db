// addr:      71022dfe30
// offset:    0x22dfe30
// name:      FUN_71022dfe30
// mangled:   
// signature: undefined8 __cdecl FUN_71022dfe30(long param_1, long param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071022e00ac) */

undefined8
FUN_71022dfe30(long param_1,long param_2,long param_3,undefined8 param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined2 local_16c;
  byte ***local_138;
  uint local_130;
  undefined4 local_12c;
  byte local_128 [64];
  undefined2 local_e8;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  if (2 < *(byte *)(param_3 + 8)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if ((DAT_71053050f0 & 0x7f000000) == 0x7000000 || DAT_71053050f4 != '\0') {
      plVar19 = *(long **)(param_1 + 0x70);
      if (plVar19[2] != 0) {
        lVar9 = *plVar19;
        plVar20 = (long *)plVar19[1];
        *(undefined8 *)(*plVar20 + 8) = *(undefined8 *)(lVar9 + 8);
        **(long **)(lVar9 + 8) = *plVar20;
        plVar19[2] = 0;
        while (plVar6 = plVar20, plVar6 != plVar19) {
          plVar20 = (long *)plVar6[1];
          plVar18 = (long *)plVar6[0x15];
          if (plVar18 != (long *)0x0) {
            plVar1 = plVar18 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar6 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar6);
          }
        }
      }
      plVar19 = *(long **)(*(long *)(param_2 + 8) + 0x20);
      if (plVar19[2] != 0) {
        lVar9 = *plVar19;
        plVar20 = (long *)plVar19[1];
        *(undefined8 *)(*plVar20 + 8) = *(undefined8 *)(lVar9 + 8);
        **(long **)(lVar9 + 8) = *plVar20;
        plVar19[2] = 0;
        while (plVar6 = plVar20, plVar6 != plVar19) {
          plVar20 = (long *)plVar6[1];
          plVar18 = (long *)plVar6[0x15];
          if (plVar18 != (long *)0x0) {
            plVar1 = plVar18 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar6 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar6);
          }
        }
      }
      if (((DAT_710593b2d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_710593b2d0), iVar7 != 0))
      {
        DAT_710593b288 = 0;
        DAT_710593b280 = 0;
        __cxa_guard_release(&DAT_710593b2d0);
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x60);
      piVar2 = (int *)&DAT_710593b280;
      if (lVar9 != 0) {
        piVar2 = (int *)(lVar9 + 8);
      }
      if ((*piVar2 != 0x2f9a03cb) ||
         (iVar7 = strcmp((char *)(piVar2 + 2),"MainMenuScene"), iVar7 != 0)) {
        DAT_71053083c8 = 0;
        uVar8 = 0x811c9dc5;
        uStack_178 = 0x756e654d6e69614d;
        local_170 = 0x6e656353;
        local_16c = 0x65;
        pcVar11 = (char *)((long)&uStack_178 + 1);
        do {
          cVar3 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar3 != '\0');
        local_138 = (byte ***)&PTR_FUN_71050b62b8;
        bVar17 = 0x4d;
        local_130 = 0;
        uVar15 = 0;
        do {
          local_128[uVar15] = bVar17;
          if (0x3e < (int)uVar15 + 1U) {
            uVar12 = (ulong)((int)uVar15 + 1);
            break;
          }
          bVar4 = *(byte *)((long)&uStack_178 + uVar15 + 1);
          if (bVar4 == 0) {
            uVar12 = uVar15 + 1;
            break;
          }
          bVar17 = *(byte *)((long)&uStack_178 + uVar15 + 2);
          uVar12 = uVar15 + 2;
          local_128[uVar15 + 1] = bVar4;
          uVar15 = uVar12;
        } while (bVar17 != 0);
        local_128[uVar12 & 0xffffffff] = 0;
        local_12c = (int)uVar12;
        uVar10 = (uint)local_128[0];
        local_130 = uVar8;
        if (local_128[0] != 0) {
          pbVar14 = local_128;
          do {
            pbVar14 = pbVar14 + 1;
            local_130 = local_130 * 0x89 ^ uVar10;
            uVar10 = (uint)*pbVar14;
          } while (uVar10 != 0);
        }
        local_e8 = 0;
        lVar9 = *(long *)(param_2 + 8);
        for (uVar15 = 0; "MenuSequenceScene"[uVar15] != 0; uVar15 = uVar15 + 2) {
          bVar17 = "MenuSequenceScene"[uVar15 + 1];
          local_d8[uVar15] = "MenuSequenceScene"[uVar15];
          if (bVar17 == 0) {
            uVar15 = uVar15 + 1;
            break;
          }
          local_d8[uVar15 + 1] = bVar17;
        }
        local_d8[uVar15 & 0xffffffff] = 0;
        local_e0 = uVar15 << 0x20;
        uVar13 = (uint)local_d8[0];
        uVar10 = uVar8;
        if (local_d8[0] != 0) {
          pbVar14 = local_d8;
          do {
            pbVar14 = pbVar14 + 1;
            uVar10 = uVar10 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar14;
          } while (uVar13 != 0);
        }
        local_e0 = CONCAT44((int)uVar15,uVar10);
        lVar16 = *(long *)(lVar9 + 0x38);
        if (lVar16 == 0) {
          local_90[0] = 0;
          local_98 = (long ***)0x0;
        }
        else {
          uVar15 = 0;
          while( true ) {
            pbVar14 = (byte *)(lVar16 + 0x10 + uVar15);
            bVar17 = *pbVar14;
            if (bVar17 == 0) break;
            local_90[uVar15] = bVar17;
            if (0x3e < (int)uVar15 + 1U) {
              uVar15 = (ulong)((int)uVar15 + 1);
              break;
            }
            bVar17 = pbVar14[1];
            if (bVar17 == 0) {
              uVar15 = uVar15 + 1;
              break;
            }
            local_90[uVar15 + 1] = bVar17;
            uVar15 = uVar15 + 2;
          }
          local_90[uVar15 & 0xffffffff] = 0;
          uVar10 = (uint)local_90[0];
          local_98 = (long ***)(uVar15 << 0x20);
          if (local_90[0] != 0) {
            pbVar14 = local_90;
            do {
              pbVar14 = pbVar14 + 1;
              uVar8 = uVar8 * 0x89 ^ uVar10;
              uVar10 = (uint)*pbVar14;
            } while (uVar10 != 0);
          }
          local_98 = (long ***)CONCAT44((int)uVar15,uVar8);
        }
        FUN_7103726240(*(long **)(lVar9 + 0x20),&local_e0,(long ****)&local_98,&local_138,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  return 1;
}

