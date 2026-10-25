// addr:      71022ec380
// offset:    0x22ec380
// name:      FUN_71022ec380
// mangled:   
// signature: undefined __cdecl FUN_71022ec380(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71022ec380(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  FUN_7101af86a0(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8),1,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(int *)(param_1 + 0x2a0) == 1) {
    plVar13 = (long *)(param_2 + 8);
    plVar16 = *(long **)(*plVar13 + 0x20);
    if (plVar16[2] != 0) {
      lVar7 = *plVar16;
      plVar17 = (long *)plVar16[1];
      *(undefined8 *)(*plVar17 + 8) = *(undefined8 *)(lVar7 + 8);
      **(long **)(lVar7 + 8) = *plVar17;
      plVar16[2] = 0;
      while (plVar5 = plVar17, plVar5 != plVar16) {
        plVar17 = (long *)plVar5[1];
        plVar15 = (long *)plVar5[0x15];
        if (plVar15 != (long *)0x0) {
          plVar1 = plVar15 + 1;
          do {
            lVar7 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
      }
    }
    lVar7 = *plVar13;
    for (uVar9 = 0; "MeleeNormalSequenceScene"[uVar9] != 0; uVar9 = uVar9 + 2) {
      bVar2 = "MeleeNormalSequenceScene"[uVar9 + 1];
      local_c8[uVar9] = "MeleeNormalSequenceScene"[uVar9];
      if (bVar2 == 0) {
        uVar9 = uVar9 + 1;
        break;
      }
      local_c8[uVar9 + 1] = bVar2;
    }
    uVar14 = 0x811c9dc5;
    local_c8[uVar9 & 0xffffffff] = 0;
    uVar8 = (uint)local_c8[0];
    uVar10 = uVar14;
    if (local_c8[0] != 0) {
      pbVar11 = local_c8;
      do {
        pbVar11 = pbVar11 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar11;
      } while (uVar8 != 0);
    }
    local_d0 = CONCAT44((int)uVar9,uVar10);
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
      local_80[0] = 0;
      local_88 = (long ***)0x0;
    }
    else {
      uVar9 = 0;
      while( true ) {
        pbVar11 = (byte *)(lVar12 + 0x10 + uVar9);
        bVar2 = *pbVar11;
        if (bVar2 == 0) break;
        local_80[uVar9] = bVar2;
        if (0x3e < (int)uVar9 + 1U) {
          uVar9 = (ulong)((int)uVar9 + 1);
          break;
        }
        bVar2 = pbVar11[1];
        if (bVar2 == 0) {
          uVar9 = uVar9 + 1;
          break;
        }
        local_80[uVar9 + 1] = bVar2;
        uVar9 = uVar9 + 2;
      }
      local_80[uVar9 & 0xffffffff] = 0;
      local_88 = (long ***)(uVar9 << 0x20);
      uVar8 = (uint)local_80[0];
      uVar10 = uVar14;
      if (local_80[0] != 0) {
        pbVar11 = local_80;
        do {
          pbVar11 = pbVar11 + 1;
          uVar10 = uVar10 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar11;
        } while (uVar8 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar9,uVar10);
    }
    FUN_7103726240(*(long **)(lVar7 + 0x20),&local_d0,(long ****)&local_88,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    lVar7 = *plVar13;
    for (uVar9 = 0; "MenuSequenceScene"[uVar9] != 0; uVar9 = uVar9 + 2) {
      bVar2 = "MenuSequenceScene"[uVar9 + 1];
      local_c8[uVar9] = "MenuSequenceScene"[uVar9];
      if (bVar2 == 0) {
        uVar9 = uVar9 + 1;
        break;
      }
      local_c8[uVar9 + 1] = bVar2;
    }
    local_c8[uVar9 & 0xffffffff] = 0;
    uVar8 = (uint)local_c8[0];
    uVar10 = uVar14;
    if (local_c8[0] != 0) {
      pbVar11 = local_c8;
      do {
        pbVar11 = pbVar11 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar11;
      } while (uVar8 != 0);
    }
    local_d0 = CONCAT44((int)uVar9,uVar10);
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
      local_80[0] = 0;
      local_88 = (long ***)0x0;
    }
    else {
      uVar9 = 0;
      while( true ) {
        pbVar11 = (byte *)(lVar12 + 0x10 + uVar9);
        bVar2 = *pbVar11;
        if (bVar2 == 0) break;
        local_80[uVar9] = bVar2;
        if (0x3e < (int)uVar9 + 1U) {
          uVar9 = (ulong)((int)uVar9 + 1);
          break;
        }
        bVar2 = pbVar11[1];
        if (bVar2 == 0) {
          uVar9 = uVar9 + 1;
          break;
        }
        local_80[uVar9 + 1] = bVar2;
        uVar9 = uVar9 + 2;
      }
      local_80[uVar9 & 0xffffffff] = 0;
      uVar10 = (uint)local_80[0];
      local_88 = (long ***)(uVar9 << 0x20);
      if (local_80[0] != 0) {
        pbVar11 = local_80;
        do {
          pbVar11 = pbVar11 + 1;
          uVar14 = uVar14 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar11;
        } while (uVar10 != 0);
      }
      local_88 = (long ***)CONCAT44((int)uVar9,uVar14);
    }
    FUN_7103726240(*(long **)(lVar7 + 0x20),&local_d0,(long ****)&local_88,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
  }
  else {
    FUN_71032dfc50(*(long *)(DAT_710532f7b0 + 8));
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_7105307d50 = 0xffffffff;
  }
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  return;
}

