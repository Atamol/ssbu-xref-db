// addr:      7102342630
// offset:    0x2342630
// name:      FUN_7102342630
// mangled:   
// signature: undefined __cdecl FUN_7102342630(long * param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007102342a88) */

void FUN_7102342630(long *param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  ulong uVar14;
  byte *pbVar15;
  byte bVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
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
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  lVar18 = *param_1;
  if (*(int *)((long)param_1 + 0x124) == 0) {
    local_98 = (long ********)0x1300000000;
    local_90 = 0x65536b636f6c6e55;
    uVar9 = 0x811c9dc5;
    local_88 = 0x635365636e657571;
    local_80 = 0x656e65;
    uVar11 = 0x55;
    lVar10 = 9;
    uVar12 = uVar9;
    do {
      uVar12 = uVar12 * 0x89 ^ uVar11;
      uVar11 = (uint)*(byte *)((long)&local_98 + lVar10);
      lVar10 = lVar10 + 1;
    } while (uVar11 != 0);
    local_98 = (long ********)CONCAT44(0x13,uVar12);
    lVar10 = *(long *)(lVar18 + 0x38);
    if (lVar10 == 0) {
      local_130 = local_130 & 0xffffff00;
      local_138 = (undefined **)0x0;
    }
    else {
      uVar19 = 0;
      while( true ) {
        pcVar13 = (char *)(lVar10 + 0x10 + uVar19);
        cVar3 = *pcVar13;
        if (cVar3 == '\0') break;
        *(char *)((long)&local_130 + uVar19) = cVar3;
        if (0x3e < (int)uVar19 + 1U) {
          uVar19 = (ulong)((int)uVar19 + 1);
          break;
        }
        cVar3 = pcVar13[1];
        if (cVar3 == '\0') {
          uVar19 = uVar19 + 1;
          break;
        }
        *(char *)((long)&local_130 + uVar19 + 1) = cVar3;
        uVar19 = uVar19 + 2;
      }
      *(undefined1 *)((long)&local_130 + (uVar19 & 0xffffffff)) = 0;
      uVar12 = local_130 & 0xff;
      local_138 = (undefined **)(uVar19 << 0x20);
      if ((char)local_130 != '\0') {
        pbVar15 = (byte *)((long)&local_130 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar12 != 0);
      }
      local_138 = (undefined **)CONCAT44((int)uVar19,uVar9);
    }
    FUN_71037266d0(*(long *)(lVar18 + 0x20),&local_98,(long ****)&local_138,(byte ****)0x0,param_5,
                   param_6,param_7,param_8);
    *(undefined4 *)(lVar18 + 0x30) = 1;
  }
  else {
    lVar10 = *(long *)(lVar18 + 0x28);
    if (((*(long *)(lVar10 + 0x60) == 0) && (*(long *)(lVar10 + 0x30) == *(long *)(lVar10 + 0x38)))
       && (*(long *)(*(long *)(lVar18 + 0x20) + 0x10) == 0)) {
      lVar10 = *(long *)(DAT_710532f7b0 + 8);
      uVar19 = 0;
      lVar18 = 0xa30;
      while ((*(int *)(lVar10 + lVar18) == -1 ||
             (piVar7 = FUN_71032dea90(lVar10,*(int *)(lVar10 + lVar18)), (char)piVar7[0x4e] == '\0')
             )) {
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x400;
        if (0x3f < uVar19) {
          FUN_71032dfc50(lVar10);
          uVar8 = extraout_x1;
LAB_7102342c38:
          FUN_710323b9e0(param_1[0x27],uVar8,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_7103726af0(*(long *)(param_2 + 8),0);
          return;
        }
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      DAT_71053050f0 = 0x4070000;
      plVar17 = (long *)(param_2 + 8);
      plVar21 = *(long **)(*plVar17 + 0x20);
      if (plVar21[2] != 0) {
        lVar18 = *plVar21;
        plVar22 = (long *)plVar21[1];
        *(undefined8 *)(*plVar22 + 8) = *(undefined8 *)(lVar18 + 8);
        **(long **)(lVar18 + 8) = *plVar22;
        plVar21[2] = 0;
        while (plVar5 = plVar22, plVar5 != plVar21) {
          plVar22 = (long *)plVar5[1];
          plVar20 = (long *)plVar5[0x15];
          if (plVar20 != (long *)0x0) {
            plVar1 = plVar20 + 1;
            do {
              lVar18 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar18 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plVar5 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar5);
          }
        }
      }
      lVar18 = *plVar17;
      for (uVar19 = 0; "AmiiboSequenceScene"[uVar19] != '\0'; uVar19 = uVar19 + 2) {
        cVar3 = "AmiiboSequenceScene"[uVar19 + 1];
        *(char *)((long)&local_90 + uVar19) = "AmiiboSequenceScene"[uVar19];
        if (cVar3 == '\0') {
          uVar19 = uVar19 + 1;
          break;
        }
        *(char *)((long)&local_90 + uVar19 + 1) = cVar3;
      }
      uVar9 = 0x811c9dc5;
      *(undefined1 *)((long)&local_90 + (uVar19 & 0xffffffff)) = 0;
      local_98 = (long ********)(uVar19 << 0x20);
      uVar11 = (uint)(byte)local_90;
      uVar12 = uVar9;
      if ((byte)local_90 != 0) {
        pbVar15 = (byte *)((long)&local_90 + 1);
        do {
          uVar12 = uVar12 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar11 != 0);
      }
      local_98 = (long ********)CONCAT44((int)uVar19,uVar12);
      lVar10 = *(long *)(lVar18 + 0x38);
      if (lVar10 == 0) {
        local_130 = local_130 & 0xffffff00;
        local_138 = (undefined **)0x0;
      }
      else {
        uVar19 = 0;
        while( true ) {
          pcVar13 = (char *)(lVar10 + 0x10 + uVar19);
          cVar3 = *pcVar13;
          if (cVar3 == '\0') break;
          *(char *)((long)&local_130 + uVar19) = cVar3;
          if (0x3e < (int)uVar19 + 1U) {
            uVar19 = (ulong)((int)uVar19 + 1);
            break;
          }
          cVar3 = pcVar13[1];
          if (cVar3 == '\0') {
            uVar19 = uVar19 + 1;
            break;
          }
          *(char *)((long)&local_130 + uVar19 + 1) = cVar3;
          uVar19 = uVar19 + 2;
        }
        *(undefined1 *)((long)&local_130 + (uVar19 & 0xffffffff)) = 0;
        local_138 = (undefined **)(uVar19 << 0x20);
        uVar11 = local_130 & 0xff;
        uVar12 = uVar9;
        if ((char)local_130 != '\0') {
          pbVar15 = (byte *)((long)&local_130 + 1);
          do {
            uVar12 = uVar12 * 0x89 ^ uVar11;
            uVar11 = (uint)*pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (uVar11 != 0);
        }
        local_138 = (undefined **)CONCAT44((int)uVar19,uVar12);
      }
      FUN_7103726240(*(long **)(lVar18 + 0x20),&local_98,(long ****)&local_138,(byte ****)0x0,
                     param_5,param_6,param_7,param_8);
      uStack_178 = 0x756e654d6e69614d;
      local_170 = 0x6e656353;
      local_16c = 0x65;
      pcVar13 = (char *)((long)&uStack_178 + 1);
      do {
        cVar3 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar3 != '\0');
      local_138 = &PTR_FUN_71050b62b8;
      bVar16 = 0x4d;
      local_130 = 0;
      uVar19 = 0;
      do {
        local_128[uVar19] = bVar16;
        if (0x3e < (int)uVar19 + 1U) {
          uVar14 = (ulong)((int)uVar19 + 1);
          break;
        }
        bVar2 = *(byte *)((long)&uStack_178 + uVar19 + 1);
        if (bVar2 == 0) {
          uVar14 = uVar19 + 1;
          break;
        }
        bVar16 = *(byte *)((long)&uStack_178 + uVar19 + 2);
        uVar14 = uVar19 + 2;
        local_128[uVar19 + 1] = bVar2;
        uVar19 = uVar14;
      } while (bVar16 != 0);
      local_128[uVar14 & 0xffffffff] = 0;
      local_12c = (int)uVar14;
      uVar12 = (uint)local_128[0];
      local_130 = uVar9;
      if (local_128[0] != 0) {
        pbVar15 = local_128;
        do {
          pbVar15 = pbVar15 + 1;
          local_130 = local_130 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar15;
        } while (uVar12 != 0);
      }
      local_e8 = 0;
      lVar18 = *plVar17;
      for (uVar19 = 0; "MenuSequenceScene"[uVar19] != 0; uVar19 = uVar19 + 2) {
        bVar16 = "MenuSequenceScene"[uVar19 + 1];
        local_d8[uVar19] = "MenuSequenceScene"[uVar19];
        if (bVar16 == 0) {
          uVar19 = uVar19 + 1;
          break;
        }
        local_d8[uVar19 + 1] = bVar16;
      }
      local_d8[uVar19 & 0xffffffff] = 0;
      local_e0 = uVar19 << 0x20;
      uVar11 = (uint)local_d8[0];
      uVar12 = uVar9;
      if (local_d8[0] != 0) {
        pbVar15 = local_d8;
        do {
          pbVar15 = pbVar15 + 1;
          uVar12 = uVar12 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar15;
        } while (uVar11 != 0);
      }
      local_e0 = CONCAT44((int)uVar19,uVar12);
      lVar10 = *(long *)(lVar18 + 0x38);
      if (lVar10 == 0) {
        local_90 = local_90 & 0xffffffffffffff00;
        local_98 = (long ********)0x0;
      }
      else {
        uVar19 = 0;
        while( true ) {
          pcVar13 = (char *)(lVar10 + 0x10 + uVar19);
          cVar3 = *pcVar13;
          if (cVar3 == '\0') break;
          *(char *)((long)&local_90 + uVar19) = cVar3;
          if (0x3e < (int)uVar19 + 1U) {
            uVar19 = (ulong)((int)uVar19 + 1);
            break;
          }
          cVar3 = pcVar13[1];
          if (cVar3 == '\0') {
            uVar19 = uVar19 + 1;
            break;
          }
          *(char *)((long)&local_90 + uVar19 + 1) = cVar3;
          uVar19 = uVar19 + 2;
        }
        *(undefined1 *)((long)&local_90 + (uVar19 & 0xffffffff)) = 0;
        uVar12 = (uint)(byte)local_90;
        local_98 = (long ********)(uVar19 << 0x20);
        if ((byte)local_90 != 0) {
          pbVar15 = (byte *)((long)&local_90 + 1);
          do {
            uVar9 = uVar9 * 0x89 ^ uVar12;
            uVar12 = (uint)*pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (uVar12 != 0);
        }
        local_98 = (long ********)CONCAT44((int)uVar19,uVar9);
      }
      param_3 = (long *********)&local_98;
      param_4 = (byte ****)&local_138;
      FUN_7103726240(*(long **)(lVar18 + 0x20),&local_e0,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar8 = extraout_x1_00;
      goto LAB_7102342c38;
    }
  }
  return;
}

