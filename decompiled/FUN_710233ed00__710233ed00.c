// addr:      710233ed00
// offset:    0x233ed00
// name:      FUN_710233ed00
// mangled:   
// signature: undefined __cdecl FUN_710233ed00(long * param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710233f028) */

void FUN_710233ed00(long *param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  undefined8 extraout_x1;
  uint uVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  byte bVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  byte local_118 [64];
  undefined2 local_d8;
  undefined8 local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  lVar10 = *(long *)(*param_1 + 0x28);
  if (((*(long *)(lVar10 + 0x60) != 0) || (*(long *)(lVar10 + 0x30) != *(long *)(lVar10 + 0x38))) ||
     (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0)) {
    return;
  }
  lVar17 = *(long *)(DAT_710532f7b0 + 8);
  uVar18 = 0;
  lVar10 = 0xa30;
  while ((*(int *)(lVar17 + lVar10) == -1 ||
         (piVar7 = FUN_71032dea90(lVar17,*(int *)(lVar17 + lVar10)), (char)piVar7[0x4e] == '\0'))) {
    uVar18 = uVar18 + 1;
    lVar10 = lVar10 + 0x400;
    if (0x3f < uVar18) {
      FUN_71032dfc50(lVar17);
LAB_710233f1d8:
      FUN_7103726af0(*(long *)(param_2 + 8),0);
      puVar15 = *(undefined8 **)(DAT_710532f8c8 + 8);
      FUN_710066e470((long *)*DAT_71052b94d8);
      *puVar15 = 0xffffffffffffffff;
      puVar15[4] = 0xffffffffffffffff;
      puVar15[8] = 0xffffffffffffffff;
      puVar15[0xc] = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar15 + 0x16) = 0;
      *(undefined2 *)((long)puVar15 + 0x1e) = 1;
      *(undefined8 *)((long)puVar15 + 0x36) = 0;
      *(undefined2 *)((long)puVar15 + 0x3e) = 1;
      *(undefined8 *)((long)puVar15 + 0x56) = 0;
      *(undefined2 *)((long)puVar15 + 0x5e) = 1;
      *(undefined8 *)((long)puVar15 + 0x76) = 0;
      *(undefined1 *)((long)puVar15 + 0x7e) = 1;
      *(undefined1 *)((long)puVar15 + 0x7f) = 0;
      *(undefined4 *)(puVar15 + 0x10) = 0xffffffff;
      *(undefined4 *)((long)puVar15 + 0x84) = 0xffffffff;
      *(undefined8 *)((long)puVar15 + 0x96) = 0;
      *(undefined1 *)((long)puVar15 + 0x9e) = 1;
      *(undefined1 *)((long)puVar15 + 0x9f) = 0;
      *(undefined4 *)(puVar15 + 0x14) = 0xffffffff;
      *(undefined4 *)((long)puVar15 + 0xa4) = 0xffffffff;
      *(undefined8 *)((long)puVar15 + 0xb6) = 0;
      *(undefined1 *)((long)puVar15 + 0xbe) = 1;
      *(undefined1 *)((long)puVar15 + 0xbf) = 0;
      *(undefined4 *)(puVar15 + 0x18) = 0xffffffff;
      *(undefined4 *)((long)puVar15 + 0xc4) = 0xffffffff;
      *(undefined8 *)((long)puVar15 + 0xd6) = 0;
      *(undefined1 *)((long)puVar15 + 0xde) = 1;
      *(undefined1 *)((long)puVar15 + 0xdf) = 0;
      *(undefined4 *)(puVar15 + 0x1c) = 0xffffffff;
      *(undefined4 *)((long)puVar15 + 0xe4) = 0xffffffff;
      *(undefined8 *)((long)puVar15 + 0xf6) = 0;
      *(undefined1 *)((long)puVar15 + 0xfe) = 1;
      *(undefined1 *)((long)puVar15 + 0xff) = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[9] = 0;
      puVar15[10] = 0;
      puVar15[0xd] = 0;
      puVar15[0xe] = 0;
      puVar15[0x11] = 0;
      puVar15[0x12] = 0;
      puVar15[0x15] = 0;
      puVar15[0x16] = 0;
      puVar15[0x19] = 0;
      puVar15[0x1a] = 0;
      puVar15[0x1d] = 0;
      puVar15[0x1e] = 0;
      FUN_71025f7e20(DAT_710532a9d0,extraout_x1,(long *********)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      return;
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053050f0 & 0x7f000000) == 0x7000000) || (DAT_71053050f4 != '\0')) goto LAB_710233f1d8;
  DAT_71053050f0 = 0x4070000;
  plVar20 = *(long **)(*(long *)(param_2 + 8) + 0x20);
  if (plVar20[2] != 0) {
    lVar10 = *plVar20;
    plVar21 = (long *)plVar20[1];
    *(undefined8 *)(*plVar21 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = *plVar21;
    plVar20[2] = 0;
    while (plVar5 = plVar21, plVar5 != plVar20) {
      plVar21 = (long *)plVar5[1];
      plVar19 = (long *)plVar5[0x15];
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 1;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
    }
  }
  lVar10 = *(long *)(param_2 + 8);
  for (uVar18 = 0; "AmiiboSequenceScene"[uVar18] != 0; uVar18 = uVar18 + 2) {
    bVar14 = "AmiiboSequenceScene"[uVar18 + 1];
    local_80[uVar18] = "AmiiboSequenceScene"[uVar18];
    if (bVar14 == 0) {
      uVar18 = uVar18 + 1;
      break;
    }
    local_80[uVar18 + 1] = bVar14;
  }
  uVar16 = 0x811c9dc5;
  local_80[uVar18 & 0xffffffff] = 0;
  local_88 = (long ********)(uVar18 << 0x20);
  uVar8 = (uint)local_80[0];
  uVar9 = uVar16;
  if (local_80[0] != 0) {
    pbVar13 = local_80;
    do {
      pbVar13 = pbVar13 + 1;
      uVar9 = uVar9 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar13;
    } while (uVar8 != 0);
  }
  local_88 = (long ********)CONCAT44((int)uVar18,uVar9);
  lVar17 = *(long *)(lVar10 + 0x38);
  if (lVar17 == 0) {
    local_120 = local_120 & 0xffffff00;
    local_128 = (undefined **)0x0;
  }
  else {
    uVar18 = 0;
    while( true ) {
      pcVar11 = (char *)(lVar17 + 0x10 + uVar18);
      cVar3 = *pcVar11;
      if (cVar3 == '\0') break;
      *(char *)((long)&local_120 + uVar18) = cVar3;
      if (0x3e < (int)uVar18 + 1U) {
        uVar18 = (ulong)((int)uVar18 + 1);
        break;
      }
      cVar3 = pcVar11[1];
      if (cVar3 == '\0') {
        uVar18 = uVar18 + 1;
        break;
      }
      *(char *)((long)&local_120 + uVar18 + 1) = cVar3;
      uVar18 = uVar18 + 2;
    }
    *(undefined1 *)((long)&local_120 + (uVar18 & 0xffffffff)) = 0;
    local_128 = (undefined **)(uVar18 << 0x20);
    uVar8 = local_120 & 0xff;
    uVar9 = uVar16;
    if ((char)local_120 != '\0') {
      pbVar13 = (byte *)((long)&local_120 + 1);
      do {
        uVar9 = uVar9 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (uVar8 != 0);
    }
    local_128 = (undefined **)CONCAT44((int)uVar18,uVar9);
  }
  FUN_7103726240(*(long **)(lVar10 + 0x20),&local_88,(long ****)&local_128,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  uStack_168 = 0x756e654d6e69614d;
  local_160 = 0x6e656353;
  local_15c = 0x65;
  pcVar11 = (char *)((long)&uStack_168 + 1);
  do {
    cVar3 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar3 != '\0');
  local_128 = &PTR_FUN_71050b62b8;
  bVar14 = 0x4d;
  local_120 = 0;
  uVar18 = 0;
  do {
    local_118[uVar18] = bVar14;
    if (0x3e < (int)uVar18 + 1U) {
      uVar12 = (ulong)((int)uVar18 + 1);
      break;
    }
    bVar2 = *(byte *)((long)&uStack_168 + uVar18 + 1);
    if (bVar2 == 0) {
      uVar12 = uVar18 + 1;
      break;
    }
    bVar14 = *(byte *)((long)&uStack_168 + uVar18 + 2);
    uVar12 = uVar18 + 2;
    local_118[uVar18 + 1] = bVar2;
    uVar18 = uVar12;
  } while (bVar14 != 0);
  local_118[uVar12 & 0xffffffff] = 0;
  local_11c = (int)uVar12;
  uVar9 = (uint)local_118[0];
  local_120 = uVar16;
  if (local_118[0] != 0) {
    pbVar13 = local_118;
    do {
      pbVar13 = pbVar13 + 1;
      local_120 = local_120 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar13;
    } while (uVar9 != 0);
  }
  local_d8 = 0;
  lVar10 = *(long *)(param_2 + 8);
  for (uVar18 = 0; "MenuSequenceScene"[uVar18] != 0; uVar18 = uVar18 + 2) {
    bVar14 = "MenuSequenceScene"[uVar18 + 1];
    local_c8[uVar18] = "MenuSequenceScene"[uVar18];
    if (bVar14 == 0) {
      uVar18 = uVar18 + 1;
      break;
    }
    local_c8[uVar18 + 1] = bVar14;
  }
  local_c8[uVar18 & 0xffffffff] = 0;
  local_d0 = uVar18 << 0x20;
  uVar8 = (uint)local_c8[0];
  uVar9 = uVar16;
  if (local_c8[0] != 0) {
    pbVar13 = local_c8;
    do {
      pbVar13 = pbVar13 + 1;
      uVar9 = uVar9 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar13;
    } while (uVar8 != 0);
  }
  local_d0 = CONCAT44((int)uVar18,uVar9);
  lVar17 = *(long *)(lVar10 + 0x38);
  if (lVar17 == 0) {
    local_80[0] = 0;
    local_88 = (long ********)0x0;
  }
  else {
    uVar18 = 0;
    while( true ) {
      pbVar13 = (byte *)(lVar17 + 0x10 + uVar18);
      bVar14 = *pbVar13;
      if (bVar14 == 0) break;
      local_80[uVar18] = bVar14;
      if (0x3e < (int)uVar18 + 1U) {
        uVar18 = (ulong)((int)uVar18 + 1);
        break;
      }
      bVar14 = pbVar13[1];
      if (bVar14 == 0) {
        uVar18 = uVar18 + 1;
        break;
      }
      local_80[uVar18 + 1] = bVar14;
      uVar18 = uVar18 + 2;
    }
    local_80[uVar18 & 0xffffffff] = 0;
    uVar9 = (uint)local_80[0];
    local_88 = (long ********)(uVar18 << 0x20);
    if (local_80[0] != 0) {
      pbVar13 = local_80;
      do {
        pbVar13 = pbVar13 + 1;
        uVar16 = uVar16 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar13;
      } while (uVar9 != 0);
    }
    local_88 = (long ********)CONCAT44((int)uVar18,uVar16);
  }
  param_3 = (undefined **)&local_88;
  param_4 = (byte ****)&local_128;
  FUN_7103726240(*(long **)(lVar10 + 0x20),&local_d0,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  goto LAB_710233f1d8;
}

