// addr:      710232c700
// offset:    0x232c700
// name:      FUN_710232c700
// mangled:   
// signature: undefined __cdecl FUN_710232c700(long * param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710232ccfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710232c700(long *param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined **ppuVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  byte *pbVar16;
  byte bVar17;
  long *plVar18;
  long ****pppplVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [64];
  undefined2 local_e8;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  if (((*(int *)((long)param_1 + 0x194) == 0) &&
      (plVar18 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 8), plVar18 != (long *)0x0)) &&
     (uVar22 = (**(code **)(*plVar18 + 0x48))(plVar18), (uVar22 & 1) != 0)) {
    (**(code **)(*plVar18 + 0x30))(plVar18);
  }
  lVar13 = *(long *)(*param_1 + 0x28);
  if (*(long *)(lVar13 + 0x60) != 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x30) != *(long *)(lVar13 + 0x38)) {
    return;
  }
  if (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0) {
    return;
  }
  lVar13 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  if (*(long *)(lVar13 + 0x30) != 0) {
    return;
  }
  if (*(int *)(lVar13 + 0x70) != 0) {
    return;
  }
  if (*(long *)(lVar13 + 0x60) != 0) {
    return;
  }
  if ((*(long *)(lVar13 + 0x9ff8) != 0) &&
     (uVar7 = FUN_71016f6340(lVar13 + 0xa010,*(long *)(lVar13 + 0x9ff8)), (~uVar7 & 0xff) != 0)) {
    return;
  }
  lVar20 = *(long *)(DAT_710532f7b0 + 8);
  uVar22 = 0;
  lVar13 = 0xa30;
LAB_710232c7b4:
  if ((*(int *)(lVar20 + lVar13) == -1) ||
     (piVar9 = FUN_71032dea90(lVar20,*(int *)(lVar20 + lVar13)), (char)piVar9[0x4e] == '\0'))
  goto LAB_710232c7d0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71053050f0 = 0x4070000;
  FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  plVar18 = (long *)(param_2 + 8);
  plVar10 = *(long **)(*plVar18 + 0x20);
  if (plVar10[2] != 0) {
    lVar13 = *plVar10;
    plVar25 = (long *)plVar10[1];
    *(undefined8 *)(*plVar25 + 8) = *(undefined8 *)(lVar13 + 8);
    **(long **)(lVar13 + 8) = *plVar25;
    plVar10[2] = 0;
    while (plVar6 = plVar25, plVar6 != plVar10) {
      plVar25 = (long *)plVar6[1];
      plVar23 = (long *)plVar6[0x15];
      if (plVar23 != (long *)0x0) {
        plVar1 = plVar23 + 1;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar6 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar6);
      }
    }
  }
  lVar13 = *plVar18;
  for (uVar22 = 0; "AmiiboSequenceScene"[uVar22] != 0; uVar22 = uVar22 + 2) {
    bVar17 = "AmiiboSequenceScene"[uVar22 + 1];
    local_90[uVar22] = "AmiiboSequenceScene"[uVar22];
    if (bVar17 == 0) {
      uVar22 = uVar22 + 1;
      break;
    }
    local_90[uVar22 + 1] = bVar17;
  }
  uVar21 = 0x811c9dc5;
  local_90[uVar22 & 0xffffffff] = 0;
  local_98 = (long ***)(uVar22 << 0x20);
  uVar12 = (uint)local_90[0];
  uVar7 = uVar21;
  if (local_90[0] != 0) {
    pbVar16 = local_90;
    do {
      pbVar16 = pbVar16 + 1;
      uVar7 = uVar7 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar16;
    } while (uVar12 != 0);
  }
  local_98 = (long ***)CONCAT44((int)uVar22,uVar7);
  lVar20 = *(long *)(lVar13 + 0x38);
  if (lVar20 == 0) {
    local_130 = (undefined **)((ulong)local_130 & 0xffffffffffffff00);
    local_138 = (undefined **)0x0;
  }
  else {
    uVar22 = 0;
    while( true ) {
      pbVar16 = (byte *)(lVar20 + 0x10 + uVar22);
      bVar17 = *pbVar16;
      if (bVar17 == 0) break;
      local_128[uVar22 - 8] = bVar17;
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      bVar17 = pbVar16[1];
      if (bVar17 == 0) {
        uVar22 = uVar22 + 1;
        break;
      }
      local_128[uVar22 - 7] = bVar17;
      uVar22 = uVar22 + 2;
    }
    local_128[(uVar22 & 0xffffffff) - 8] = 0;
    local_138 = (undefined **)(uVar22 << 0x20);
    uVar12 = (uint)(byte)local_130;
    uVar7 = uVar21;
    if ((byte)local_130 != 0) {
      pbVar16 = (byte *)((long)&local_130 + 1);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar12;
        uVar12 = (uint)*pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (uVar12 != 0);
    }
    local_138 = (undefined **)CONCAT44((int)uVar22,uVar7);
  }
  FUN_7103726240(*(long **)(lVar13 + 0x20),&local_98,(long ****)&local_138,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  lVar13 = param_1[0x34];
  if (lVar13 != 0) {
    if (*(int *)(lVar13 + 8) == -0x2e04f471) {
      iVar8 = strcmp((char *)(lVar13 + 0x10),"MenuSequenceScene");
    }
    else {
      iVar8 = -1;
    }
    local_138 = &PTR_FUN_71050b62b8;
    uVar22 = 0;
    while( true ) {
      pbVar16 = (byte *)(lVar13 + 0x58 + uVar22);
      bVar17 = *pbVar16;
      if (bVar17 == 0) break;
      local_128[uVar22] = bVar17;
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      bVar17 = pbVar16[1];
      if (bVar17 == 0) {
        uVar22 = uVar22 + 1;
        break;
      }
      local_128[uVar22 + 1] = bVar17;
      uVar22 = uVar22 + 2;
    }
    local_128[uVar22 & 0xffffffff] = 0;
    local_130 = (undefined **)(uVar22 << 0x20);
    uVar12 = (uint)local_128[0];
    uVar7 = uVar21;
    if (local_128[0] != 0) {
      pbVar16 = local_128;
      do {
        pbVar16 = pbVar16 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar12;
        uVar12 = (uint)*pbVar16;
      } while (uVar12 != 0);
    }
    local_130 = (undefined **)CONCAT44((int)uVar22,uVar7);
    local_e8 = 0;
    lVar20 = *plVar18;
    uVar22 = 0;
    while( true ) {
      pbVar16 = (byte *)(lVar13 + 0x10 + uVar22);
      bVar17 = *pbVar16;
      if (bVar17 == 0) break;
      local_d8[uVar22] = bVar17;
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      bVar17 = pbVar16[1];
      if (bVar17 == 0) {
        uVar22 = uVar22 + 1;
        break;
      }
      local_d8[uVar22 + 1] = bVar17;
      uVar22 = uVar22 + 2;
    }
    local_d8[uVar22 & 0xffffffff] = 0;
    local_e0 = uVar22 << 0x20;
    uVar12 = (uint)local_d8[0];
    uVar7 = uVar21;
    if (local_d8[0] != 0) {
      pbVar16 = local_d8;
      do {
        pbVar16 = pbVar16 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar12;
        uVar12 = (uint)*pbVar16;
      } while (uVar12 != 0);
    }
    local_e0 = CONCAT44((int)uVar22,uVar7);
    lVar13 = *(long *)(lVar20 + 0x38);
    if (lVar13 == 0) {
      local_90[0] = 0;
      local_98 = (long ***)0x0;
    }
    else {
      uVar22 = 0;
      while( true ) {
        pbVar16 = (byte *)(lVar13 + 0x10 + uVar22);
        bVar17 = *pbVar16;
        if (bVar17 == 0) break;
        local_90[uVar22] = bVar17;
        if (0x3e < (int)uVar22 + 1U) {
          uVar22 = (ulong)((int)uVar22 + 1);
          break;
        }
        bVar17 = pbVar16[1];
        if (bVar17 == 0) {
          uVar22 = uVar22 + 1;
          break;
        }
        local_90[uVar22 + 1] = bVar17;
        uVar22 = uVar22 + 2;
      }
      local_90[uVar22 & 0xffffffff] = 0;
      local_98 = (long ***)(uVar22 << 0x20);
      uVar12 = (uint)local_90[0];
      uVar7 = uVar21;
      if (local_90[0] != 0) {
        pbVar16 = local_90;
        do {
          pbVar16 = pbVar16 + 1;
          uVar7 = uVar7 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar16;
        } while (uVar12 != 0);
      }
      local_98 = (long ***)CONCAT44((int)uVar22,uVar7);
    }
    param_3 = (undefined **)&local_98;
    param_4 = (byte ****)&local_138;
    FUN_7103726240(*(long **)(lVar20 + 0x20),&local_e0,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar10 = (long *)param_1[0x34];
    param_1[0x34] = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x18))();
    }
    if (iVar8 != 0) goto LAB_710232cc74;
    goto LAB_710232ceac;
  }
LAB_710232cc74:
  uStack_178 = 0x756e654d6e69614d;
  local_170 = 0x6e656353;
  local_16c = 0x65;
  pcVar14 = (char *)((long)&uStack_178 + 1);
  do {
    cVar4 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar4 != '\0');
  local_138 = &PTR_FUN_71050b62b8;
  bVar17 = 0x4d;
  local_130 = (undefined **)((ulong)local_130 & 0xffffffff00000000);
  uVar22 = 0;
  do {
    local_128[uVar22] = bVar17;
    if (0x3e < (int)uVar22 + 1U) {
      uVar15 = (ulong)((int)uVar22 + 1);
      break;
    }
    bVar3 = *(byte *)((long)&uStack_178 + uVar22 + 1);
    if (bVar3 == 0) {
      uVar15 = uVar22 + 1;
      break;
    }
    bVar17 = *(byte *)((long)&uStack_178 + uVar22 + 2);
    uVar15 = uVar22 + 2;
    local_128[uVar22 + 1] = bVar3;
    uVar22 = uVar15;
  } while (bVar17 != 0);
  local_128[uVar15 & 0xffffffff] = 0;
  local_130 = (undefined **)(uVar15 << 0x20);
  uVar12 = (uint)local_128[0];
  uVar7 = uVar21;
  if (local_128[0] != 0) {
    pbVar16 = local_128;
    do {
      pbVar16 = pbVar16 + 1;
      uVar7 = uVar7 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar16;
    } while (uVar12 != 0);
  }
  local_130 = (undefined **)CONCAT44((int)uVar15,uVar7);
  local_e8 = 0;
  lVar13 = *plVar18;
  for (uVar22 = 0; "MenuSequenceScene"[uVar22] != 0; uVar22 = uVar22 + 2) {
    bVar17 = "MenuSequenceScene"[uVar22 + 1];
    local_d8[uVar22] = "MenuSequenceScene"[uVar22];
    if (bVar17 == 0) {
      uVar22 = uVar22 + 1;
      break;
    }
    local_d8[uVar22 + 1] = bVar17;
  }
  local_d8[uVar22 & 0xffffffff] = 0;
  local_e0 = uVar22 << 0x20;
  uVar12 = (uint)local_d8[0];
  uVar7 = uVar21;
  if (local_d8[0] != 0) {
    pbVar16 = local_d8;
    do {
      pbVar16 = pbVar16 + 1;
      uVar7 = uVar7 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar16;
    } while (uVar12 != 0);
  }
  local_e0 = CONCAT44((int)uVar22,uVar7);
  lVar20 = *(long *)(lVar13 + 0x38);
  if (lVar20 == 0) {
    local_90[0] = 0;
    local_98 = (long ***)0x0;
  }
  else {
    uVar22 = 0;
    while( true ) {
      pbVar16 = (byte *)(lVar20 + 0x10 + uVar22);
      bVar17 = *pbVar16;
      if (bVar17 == 0) break;
      local_90[uVar22] = bVar17;
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      bVar17 = pbVar16[1];
      if (bVar17 == 0) {
        uVar22 = uVar22 + 1;
        break;
      }
      local_90[uVar22 + 1] = bVar17;
      uVar22 = uVar22 + 2;
    }
    local_90[uVar22 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    local_98 = (long ***)(uVar22 << 0x20);
    if (local_90[0] != 0) {
      pbVar16 = local_90;
      do {
        pbVar16 = pbVar16 + 1;
        uVar21 = uVar21 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar16;
      } while (uVar7 != 0);
    }
    local_98 = (long ***)CONCAT44((int)uVar22,uVar21);
  }
  param_3 = (undefined **)&local_98;
  param_4 = (byte ****)&local_138;
  FUN_7103726240(*(long **)(lVar13 + 0x20),&local_e0,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
LAB_710232ceac:
  plVar18 = param_1 + 0x34;
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  pppplVar19 = (long ****)*plVar18;
  if (pppplVar19 != (long ****)0x0) {
    ppuVar24 = (undefined **)PTR_LOOP_710523cd80;
    if ((undefined **)PTR_LOOP_710523cd80 == &PTR_LOOP_710523cd78) {
      *plVar18 = 0;
    }
    else {
      do {
        ppuVar2 = (undefined **)0x0;
        if (ppuVar24 != (undefined **)0x0) {
          ppuVar2 = ppuVar24 + -1;
        }
        plVar10 = (long *)ppuVar2[7];
        if ((plVar10 != (long *)0x0) && (*(char *)((long)ppuVar2 + 0x8c) == '\0')) {
          local_138 = &PTR_FUN_710523cd18;
          param_3 = (undefined **)pppplVar19;
          local_130 = ppuVar2;
          (**(code **)(*plVar10 + 0x40))(plVar10,&local_138);
        }
        ppuVar2 = ppuVar24 + 1;
        ppuVar24 = (undefined **)*ppuVar2;
      } while ((undefined **)*ppuVar2 != &PTR_LOOP_710523cd78);
      pppplVar19 = (long ****)*plVar18;
      *plVar18 = 0;
      if (pppplVar19 == (long ****)0x0) goto LAB_710232cf40;
    }
    (*(code *)(*pppplVar19)[3])(pppplVar19);
  }
LAB_710232cf40:
  lVar13 = DAT_710532f820;
  lVar20 = *(long *)(DAT_710532f820 + 8);
  uVar11 = FUN_7101eefe30(*(long *)(*(long *)(lVar20 + 0x110) + 0x80));
  if ((*(int *)(lVar20 + 0xf8) != 0 || (((uint)uVar11 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar20 + 0x142) != '\0') {
    lVar13 = *(long *)(lVar13 + 8);
    *(undefined1 *)(lVar13 + 0x142) = 0;
    *(undefined4 *)(lVar13 + 0x11c) = 0;
    if (0x12 < *(uint *)(lVar13 + 0xf4)) goto LAB_710232d0fc;
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xf4) * 4 + 0xa8) = 5;
  }
  lVar13 = DAT_710532f828;
  lVar20 = *(long *)(DAT_710532f828 + 8);
  uVar11 = FUN_7101eefe30(*(long *)(*(long *)(lVar20 + 0x110) + 0x80));
  if ((*(int *)(lVar20 + 0xf8) != 0 || (((uint)uVar11 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar20 + 0x142) != '\0') {
    lVar13 = *(long *)(lVar13 + 8);
    *(undefined1 *)(lVar13 + 0x142) = 0;
    *(undefined4 *)(lVar13 + 0x11c) = 0;
    if (0x12 < *(uint *)(lVar13 + 0xf4)) {
LAB_710232d0fc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xf4) * 4 + 0xa8) = 5;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71053050f4 = 0;
  if ((int)param_1[0x35] != 0) {
    DAT_7105306478._0_4_ = (int)param_1[0x35];
    FUN_71017a3910((undefined8 *)((long)param_1 + 0x1ac));
    _DAT_71053055d4 = *(undefined8 *)((long)param_1 + 0x684);
    register0x00004048 = *(undefined8 *)((long)param_1 + 0x68c);
    unique0x00048f00 = *(undefined4 *)((long)param_1 + 0x694);
  }
  FUN_7101af86a0(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8),0,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  return;
LAB_710232c7d0:
  uVar22 = uVar22 + 1;
  lVar13 = lVar13 + 0x400;
  if (0x3f < uVar22) goto code_r0x00710232c7e0;
  goto LAB_710232c7b4;
code_r0x00710232c7e0:
  FUN_71032dfc50(lVar20);
  goto LAB_710232ceac;
}

