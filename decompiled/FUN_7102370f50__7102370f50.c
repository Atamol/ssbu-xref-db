// addr:      7102370f50
// offset:    0x2370f50
// name:      FUN_7102370f50
// mangled:   
// signature: ulong __cdecl FUN_7102370f50(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007102371134) */

ulong FUN_7102370f50(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  long lVar15;
  byte bVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
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
  
  uVar8 = *(ulong *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  if (*(int *)(param_1 + 0xe4) == 0) {
    uVar6 = FUN_71016b4920(uVar8,2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar8 = (ulong)uVar6;
  }
  else if (((*(long *)(uVar8 + 0x30) == 0) && (*(int *)(uVar8 + 0x70) == 0)) &&
          (*(long *)(uVar8 + 0x60) == 0)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_71017912b0();
    plVar17 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    if ((plVar17 != (long *)0x0) &&
       (uVar8 = (**(code **)(*plVar17 + 0x48))(plVar17), (uVar8 & 1) == 0)) {
      (**(code **)(*plVar17 + 0x28))(plVar17,1);
    }
    *(undefined4 *)(param_1 + 0xf0) = 1;
    if (0x12 < *(uint *)(param_1 + 0xdc)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xdc) * 4 + 0x90) = 1;
    plVar17 = *(long **)(*(long *)(param_2 + 8) + 0x20);
    if (plVar17[2] != 0) {
      lVar9 = *plVar17;
      plVar19 = (long *)plVar17[1];
      *(undefined8 *)(*plVar19 + 8) = *(undefined8 *)(lVar9 + 8);
      **(long **)(lVar9 + 8) = *plVar19;
      plVar17[2] = 0;
      while (plVar5 = plVar19, plVar5 != plVar17) {
        plVar19 = (long *)plVar5[1];
        plVar18 = (long *)plVar5[0x15];
        if (plVar18 != (long *)0x0) {
          plVar1 = plVar18 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar5 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar5);
        }
      }
    }
    DAT_71053083c8 = 0;
    uVar6 = 0x811c9dc5;
    uStack_178 = 0x756e654d6e69614d;
    local_170 = 0x6e656353;
    local_16c = 0x65;
    pcVar11 = (char *)((long)&uStack_178 + 1);
    do {
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    local_138 = (byte ***)&PTR_FUN_71050b62b8;
    bVar16 = 0x4d;
    local_130 = 0;
    uVar8 = 0;
    do {
      local_128[uVar8] = bVar16;
      if (0x3e < (int)uVar8 + 1U) {
        uVar12 = (ulong)((int)uVar8 + 1);
        break;
      }
      bVar2 = *(byte *)((long)&uStack_178 + uVar8 + 1);
      if (bVar2 == 0) {
        uVar12 = uVar8 + 1;
        break;
      }
      bVar16 = *(byte *)((long)&uStack_178 + uVar8 + 2);
      uVar12 = uVar8 + 2;
      local_128[uVar8 + 1] = bVar2;
      uVar8 = uVar12;
    } while (bVar16 != 0);
    local_128[uVar12 & 0xffffffff] = 0;
    local_12c = (int)uVar12;
    uVar10 = (uint)local_128[0];
    local_130 = uVar6;
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
    for (uVar8 = 0; "MenuSequenceScene"[uVar8] != 0; uVar8 = uVar8 + 2) {
      bVar16 = "MenuSequenceScene"[uVar8 + 1];
      local_d8[uVar8] = "MenuSequenceScene"[uVar8];
      if (bVar16 == 0) {
        uVar8 = uVar8 + 1;
        break;
      }
      local_d8[uVar8 + 1] = bVar16;
    }
    local_d8[uVar8 & 0xffffffff] = 0;
    local_e0 = uVar8 << 0x20;
    uVar13 = (uint)local_d8[0];
    uVar10 = uVar6;
    if (local_d8[0] != 0) {
      pbVar14 = local_d8;
      do {
        pbVar14 = pbVar14 + 1;
        uVar10 = uVar10 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar14;
      } while (uVar13 != 0);
    }
    local_e0 = CONCAT44((int)uVar8,uVar10);
    lVar15 = *(long *)(lVar9 + 0x38);
    if (lVar15 == 0) {
      local_90[0] = 0;
      local_98 = (long ***)0x0;
    }
    else {
      uVar8 = 0;
      while( true ) {
        pbVar14 = (byte *)(lVar15 + 0x10 + uVar8);
        bVar16 = *pbVar14;
        if (bVar16 == 0) break;
        local_90[uVar8] = bVar16;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        bVar16 = pbVar14[1];
        if (bVar16 == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_90[uVar8 + 1] = bVar16;
        uVar8 = uVar8 + 2;
      }
      local_90[uVar8 & 0xffffffff] = 0;
      uVar10 = (uint)local_90[0];
      local_98 = (long ***)(uVar8 << 0x20);
      if (local_90[0] != 0) {
        pbVar14 = local_90;
        do {
          pbVar14 = pbVar14 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar14;
        } while (uVar10 != 0);
      }
      local_98 = (long ***)CONCAT44((int)uVar8,uVar6);
    }
    uVar8 = FUN_7103726240(*(long **)(lVar9 + 0x20),&local_e0,(long ****)&local_98,&local_138,
                           param_5,param_6,param_7,param_8);
  }
  lVar9 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80);
  if ((*(char *)(lVar9 + 0x244) == '\0') || (*(int *)(lVar9 + 0x218) == 9)) {
    uVar8 = FUN_7103726af0(*(long *)(param_2 + 8),2);
  }
  return uVar8;
}

