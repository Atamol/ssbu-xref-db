// addr:      71023342b0
// offset:    0x23342b0
// name:      FUN_71023342b0
// mangled:   
// signature: undefined __cdecl FUN_71023342b0(long * param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071023345ec) */

void FUN_71023342b0(long *param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5
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
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  byte local_128 [64];
  undefined2 local_e8;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  lVar10 = *(long *)(*param_1 + 0x28);
  if (((*(long *)(lVar10 + 0x60) != 0) || (*(long *)(lVar10 + 0x30) != *(long *)(lVar10 + 0x38))) ||
     (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0)) {
    return;
  }
  if (*(char *)((long)param_1 + 0x139) == '\0') {
    lVar14 = *(long *)(DAT_710532f7b0 + 8);
    uVar11 = 0;
    lVar10 = 0xa30;
    do {
      if ((*(int *)(lVar14 + lVar10) != -1) &&
         (piVar7 = FUN_71032dea90(lVar14,*(int *)(lVar14 + lVar10)), (char)piVar7[0x4e] != '\0'))
      goto LAB_7102334308;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x400;
    } while (uVar11 < 0x40);
    FUN_71032dfc50(lVar14);
  }
  else {
LAB_7102334308:
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053050f0 & 0x7f000000) != 0x7000000) && (DAT_71053050f4 == '\0')) {
      DAT_71053050f0 = 0x4070000;
      plVar19 = *(long **)(*(long *)(param_2 + 8) + 0x20);
      if (plVar19[2] != 0) {
        lVar10 = *plVar19;
        plVar20 = (long *)plVar19[1];
        *(undefined8 *)(*plVar20 + 8) = *(undefined8 *)(lVar10 + 8);
        **(long **)(lVar10 + 8) = *plVar20;
        plVar19[2] = 0;
        while (plVar5 = plVar20, plVar5 != plVar19) {
          plVar20 = (long *)plVar5[1];
          plVar18 = (long *)plVar5[0x15];
          if (plVar18 != (long *)0x0) {
            plVar1 = plVar18 + 1;
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
              (**(code **)(*plVar18 + 0x10))(plVar18);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar5 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar5);
          }
        }
      }
      lVar10 = *(long *)(param_2 + 8);
      for (uVar11 = 0; "AmiiboSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar16 = "AmiiboSequenceScene"[uVar11 + 1];
        local_90[uVar11] = "AmiiboSequenceScene"[uVar11];
        if (bVar16 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_90[uVar11 + 1] = bVar16;
      }
      uVar17 = 0x811c9dc5;
      local_90[uVar11 & 0xffffffff] = 0;
      local_98 = (long ********)(uVar11 << 0x20);
      uVar8 = (uint)local_90[0];
      uVar9 = uVar17;
      if (local_90[0] != 0) {
        pbVar15 = local_90;
        do {
          pbVar15 = pbVar15 + 1;
          uVar9 = uVar9 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar15;
        } while (uVar8 != 0);
      }
      local_98 = (long ********)CONCAT44((int)uVar11,uVar9);
      lVar14 = *(long *)(lVar10 + 0x38);
      if (lVar14 == 0) {
        local_130 = local_130 & 0xffffff00;
        local_138 = (undefined **)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pcVar12 = (char *)(lVar14 + 0x10 + uVar11);
          cVar3 = *pcVar12;
          if (cVar3 == '\0') break;
          *(char *)((long)&local_130 + uVar11) = cVar3;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          cVar3 = pcVar12[1];
          if (cVar3 == '\0') {
            uVar11 = uVar11 + 1;
            break;
          }
          *(char *)((long)&local_130 + uVar11 + 1) = cVar3;
          uVar11 = uVar11 + 2;
        }
        *(undefined1 *)((long)&local_130 + (uVar11 & 0xffffffff)) = 0;
        local_138 = (undefined **)(uVar11 << 0x20);
        uVar8 = local_130 & 0xff;
        uVar9 = uVar17;
        if ((char)local_130 != '\0') {
          pbVar15 = (byte *)((long)&local_130 + 1);
          do {
            uVar9 = uVar9 * 0x89 ^ uVar8;
            uVar8 = (uint)*pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (uVar8 != 0);
        }
        local_138 = (undefined **)CONCAT44((int)uVar11,uVar9);
      }
      FUN_7103726240(*(long **)(lVar10 + 0x20),&local_98,(long ****)&local_138,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      uStack_178 = 0x756e654d6e69614d;
      local_170 = 0x6e656353;
      local_16c = 0x65;
      pcVar12 = (char *)((long)&uStack_178 + 1);
      do {
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      local_138 = &PTR_FUN_71050b62b8;
      bVar16 = 0x4d;
      local_130 = 0;
      uVar11 = 0;
      do {
        local_128[uVar11] = bVar16;
        if (0x3e < (int)uVar11 + 1U) {
          uVar13 = (ulong)((int)uVar11 + 1);
          break;
        }
        bVar2 = *(byte *)((long)&uStack_178 + uVar11 + 1);
        if (bVar2 == 0) {
          uVar13 = uVar11 + 1;
          break;
        }
        bVar16 = *(byte *)((long)&uStack_178 + uVar11 + 2);
        uVar13 = uVar11 + 2;
        local_128[uVar11 + 1] = bVar2;
        uVar11 = uVar13;
      } while (bVar16 != 0);
      local_128[uVar13 & 0xffffffff] = 0;
      local_12c = (int)uVar13;
      uVar9 = (uint)local_128[0];
      local_130 = uVar17;
      if (local_128[0] != 0) {
        pbVar15 = local_128;
        do {
          pbVar15 = pbVar15 + 1;
          local_130 = local_130 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar15;
        } while (uVar9 != 0);
      }
      local_e8 = 0;
      lVar10 = *(long *)(param_2 + 8);
      for (uVar11 = 0; "MenuSequenceScene"[uVar11] != 0; uVar11 = uVar11 + 2) {
        bVar16 = "MenuSequenceScene"[uVar11 + 1];
        local_d8[uVar11] = "MenuSequenceScene"[uVar11];
        if (bVar16 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_d8[uVar11 + 1] = bVar16;
      }
      local_d8[uVar11 & 0xffffffff] = 0;
      local_e0 = uVar11 << 0x20;
      uVar8 = (uint)local_d8[0];
      uVar9 = uVar17;
      if (local_d8[0] != 0) {
        pbVar15 = local_d8;
        do {
          pbVar15 = pbVar15 + 1;
          uVar9 = uVar9 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar15;
        } while (uVar8 != 0);
      }
      local_e0 = CONCAT44((int)uVar11,uVar9);
      lVar14 = *(long *)(lVar10 + 0x38);
      if (lVar14 == 0) {
        local_90[0] = 0;
        local_98 = (long ********)0x0;
      }
      else {
        uVar11 = 0;
        while( true ) {
          pbVar15 = (byte *)(lVar14 + 0x10 + uVar11);
          bVar16 = *pbVar15;
          if (bVar16 == 0) break;
          local_90[uVar11] = bVar16;
          if (0x3e < (int)uVar11 + 1U) {
            uVar11 = (ulong)((int)uVar11 + 1);
            break;
          }
          bVar16 = pbVar15[1];
          if (bVar16 == 0) {
            uVar11 = uVar11 + 1;
            break;
          }
          local_90[uVar11 + 1] = bVar16;
          uVar11 = uVar11 + 2;
        }
        local_90[uVar11 & 0xffffffff] = 0;
        uVar9 = (uint)local_90[0];
        local_98 = (long ********)(uVar11 << 0x20);
        if (local_90[0] != 0) {
          pbVar15 = local_90;
          do {
            pbVar15 = pbVar15 + 1;
            uVar17 = uVar17 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar15;
          } while (uVar9 != 0);
        }
        local_98 = (long ********)CONCAT44((int)uVar11,uVar17);
      }
      param_3 = (undefined **)&local_98;
      param_4 = (byte ****)&local_138;
      FUN_7103726240(*(long **)(lVar10 + 0x20),&local_e0,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    *(undefined1 *)((long)param_1 + 0x139) = 0;
  }
  FUN_710323e4f0(*(long *)(*(long *)(DAT_710532f870 + 8) + 8),1,(long *********)param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710323b9e0(param_1[0x26],extraout_x1,(long *********)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  return;
}

