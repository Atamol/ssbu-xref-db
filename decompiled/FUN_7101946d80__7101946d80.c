// addr:      7101946d80
// offset:    0x1946d80
// name:      FUN_7101946d80
// mangled:   
// signature: undefined __cdecl FUN_7101946d80(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101946d80(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long ********pppppppplVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *__dest;
  long ****pppplVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  ulong *puVar16;
  size_t __n;
  long lVar17;
  long *plVar18;
  ulong *puVar19;
  byte ***local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined **local_130;
  undefined8 *local_128;
  undefined4 local_120;
  void *local_118;
  void *local_110;
  void *local_108;
  undefined1 local_100;
  byte **local_f8;
  byte **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  lVar15 = *(long *)(*(long *)(param_1 + 0x270) + 0x80);
  FUN_7101e9c1f0(*(long *)(lVar15 + 0x1c8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(lVar15 + 0x271) = 0;
  *(undefined1 *)(lVar15 + 0x290) = 0;
  FUN_7101e956e0((ushort *)(lVar15 + 0x250));
  lVar15 = *(long *)(*(long *)(param_1 + 0x3c8) + 0x80);
  FUN_7101e956e0((ushort *)(lVar15 + 0x4a0));
  if (*(long *)(lVar15 + 0x4c8) != 0) {
    FUN_710373b7f0(*(long *)(lVar15 + 0x4c8));
    uVar8 = *(ulong *)(lVar15 + 0x4c8);
    *(undefined8 *)(lVar15 + 0x4c8) = 0;
    if (uVar8 != 0) {
      *(undefined ***)(uVar8 + 8) = &PTR_FUN_7104f73d50;
      if (((*(long *)(uVar8 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(uVar8 + 0x18) == DAT_7106dd53ac)) {
        piVar10 = (int *)(*(long *)(uVar8 + 0x10) + 0x38);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(uVar8 + 0x10) = 0;
      *(undefined1 *)(uVar8 + 0x20) = 0;
      FUN_710392eb40(uVar8);
    }
  }
  FUN_71037790a0(*(long *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 0x28),1,param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x3d8) == '\0') {
    if ((*(char *)(param_1 + 0x3da) != '\0') && (*(char *)(param_1 + 0x3d9) == '\0')) {
      local_e0 = &PTR_FUN_71050a6490;
      local_d8[0] = 1;
      lVar15 = *(long *)(param_2 + 8);
      for (uVar8 = 0; "SpiritsFacilityListScene"[uVar8] != 0; uVar8 = uVar8 + 2) {
        bVar3 = "SpiritsFacilityListScene"[uVar8 + 1];
        local_90[uVar8] = "SpiritsFacilityListScene"[uVar8];
        if (bVar3 == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_90[uVar8 + 1] = bVar3;
      }
      uVar11 = 0x811c9dc5;
      local_90[uVar8 & 0xffffffff] = 0;
      local_98 = (long ********)(uVar8 << 0x20);
      uVar12 = (uint)local_90[0];
      uVar14 = uVar11;
      if (local_90[0] != 0) {
        pbVar13 = local_90;
        do {
          pbVar13 = pbVar13 + 1;
          uVar14 = uVar14 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar13;
        } while (uVar12 != 0);
      }
      local_98 = (long ********)CONCAT44((int)uVar8,uVar14);
      lVar17 = *(long *)(lVar15 + 0x38);
      if (lVar17 == 0) {
        local_148 = local_148 & 0xffffffffffffff00;
        local_150 = (byte ***)0x0;
      }
      else {
        uVar8 = 0;
        while( true ) {
          pcVar2 = (char *)(lVar17 + 0x10 + uVar8);
          cVar4 = *pcVar2;
          if (cVar4 == '\0') break;
          *(char *)((long)&local_148 + uVar8) = cVar4;
          if (0x3e < (int)uVar8 + 1U) {
            uVar8 = (ulong)((int)uVar8 + 1);
            break;
          }
          cVar4 = pcVar2[1];
          if (cVar4 == '\0') {
            uVar8 = uVar8 + 1;
            break;
          }
          *(char *)((long)&local_148 + uVar8 + 1) = cVar4;
          uVar8 = uVar8 + 2;
        }
        *(undefined1 *)((long)&local_148 + (uVar8 & 0xffffffff)) = 0;
        uVar14 = (uint)(byte)local_148;
        if ((byte)local_148 != 0) {
          pbVar13 = (byte *)((long)&local_148 + 1);
          do {
            uVar11 = uVar11 * 0x89 ^ uVar14;
            uVar14 = (uint)*pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (uVar14 != 0);
        }
        local_150 = (byte ***)CONCAT44((int)uVar8,uVar11);
      }
      FUN_7103726240(*(long **)(lVar15 + 0x20),&local_98,(long ****)&local_150,(byte ****)&local_e0,
                     param_5,param_6,param_7,param_8);
    }
    goto LAB_710194733c;
  }
  uStack_e8 = 0;
  uVar8 = (ulong)*(byte *)(*(long *)(param_1 + 0xf0) + 0x10);
  local_f8 = (byte **)0x0;
  local_f0 = (byte **)0x0;
  if (((uVar8 < 3) &&
      (lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0xf0) + 8) + 8),
      lVar17 = *(long *)(lVar15 + uVar8 * 8 + 0x78),
      lVar17 != 0 && *(char *)(lVar15 + 0x388) != '\0')) && (*(byte *)(lVar17 + 0x80) - 3 < 2)) {
    local_148 = *(long *)(DAT_710532f730 + 8) + 0x2f0;
    local_150 = &local_f8;
    puVar19 = *(ulong **)(lVar17 + 0x238);
    for (puVar16 = *(ulong **)(lVar17 + 0x230); puVar16 != puVar19; puVar16 = puVar16 + 2) {
      FUN_710251b0e0((long *)&local_150,puVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    puVar19 = *(ulong **)(lVar17 + 0x250);
    for (puVar16 = *(ulong **)(lVar17 + 0x248); puVar16 != puVar19; puVar16 = puVar16 + 2) {
      FUN_710251b0e0((long *)&local_150,puVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  local_150 = (byte ***)&PTR_FUN_71050a2a00;
  local_148 = CONCAT44(local_148._4_4_,2);
  local_140 = &DAT_c1ffff0000000000;
  local_138 = 0;
  local_130 = &PTR_FUN_710523da48;
  local_128 = (undefined8 *)
              FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_128 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
      local_98 = (long ********)&DAT_00000010;
      param_3 = (long *********)&local_98;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar8 & 1) != 0) &&
         (local_128 = (undefined8 *)
                      FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), local_128 != (undefined8 *)0x0)) goto LAB_7101946f94;
    }
    local_128 = (undefined8 *)0x0;
  }
LAB_7101946f94:
  *local_128 = 0;
  local_128[1] = 0;
  local_120 = 0xffffffff;
  pppppppplVar6 = (long ********)((long)local_f0 - (long)local_f8);
  local_118 = (void *)0x0;
  local_110 = (void *)0x0;
  local_108 = (void *)0x0;
  if (pppppppplVar6 != (long ********)0x0) {
    if ((ulong)((long)pppppppplVar6 >> 5) >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (void *)FUN_710392e290(0x10,pppppppplVar6,(long ****)param_3,param_4,param_5,param_6,
                                    param_7,param_8);
    if (__dest == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
        pppplVar9 = (long ****)&local_98;
        local_98 = pppppppplVar6;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        if (((uVar8 & 1) != 0) &&
           (__dest = (void *)FUN_710392e290(0x10,pppppppplVar6,pppplVar9,param_4,param_5,param_6,
                                            param_7,param_8), __dest != (void *)0x0))
        goto LAB_710194701c;
      }
      __dest = (void *)0x0;
    }
LAB_710194701c:
    local_108 = (void *)((long)__dest + ((long)pppppppplVar6 >> 5) * 0x20);
    __n = (long)local_f0 - (long)local_f8;
    local_118 = __dest;
    local_110 = __dest;
    if (0 < (long)__n) {
      memcpy(__dest,local_f8,__n);
      local_110 = (void *)((long)__dest + __n);
    }
  }
  local_100 = 0;
  lVar15 = *(long *)(param_2 + 8);
  for (uVar8 = 0; "PrizeListScene"[uVar8] != 0; uVar8 = uVar8 + 2) {
    bVar3 = "PrizeListScene"[uVar8 + 1];
    local_d8[uVar8] = "PrizeListScene"[uVar8];
    if (bVar3 == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_d8[uVar8 + 1] = bVar3;
  }
  uVar11 = 0x811c9dc5;
  local_d8[uVar8 & 0xffffffff] = 0;
  local_e0 = (undefined **)(uVar8 << 0x20);
  uVar12 = (uint)local_d8[0];
  uVar14 = uVar11;
  if (local_d8[0] != 0) {
    pbVar13 = local_d8;
    do {
      pbVar13 = pbVar13 + 1;
      uVar14 = uVar14 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar13;
    } while (uVar12 != 0);
  }
  local_e0 = (undefined **)CONCAT44((int)uVar8,uVar14);
  lVar17 = *(long *)(lVar15 + 0x38);
  if (lVar17 == 0) {
    local_90[0] = 0;
    local_98 = (long ********)0x0;
  }
  else {
    uVar8 = 0;
    while( true ) {
      pbVar13 = (byte *)(lVar17 + 0x10 + uVar8);
      bVar3 = *pbVar13;
      if (bVar3 == 0) break;
      local_90[uVar8] = bVar3;
      if (0x3e < (int)uVar8 + 1U) {
        uVar8 = (ulong)((int)uVar8 + 1);
        break;
      }
      bVar3 = pbVar13[1];
      if (bVar3 == 0) {
        uVar8 = uVar8 + 1;
        break;
      }
      local_90[uVar8 + 1] = bVar3;
      uVar8 = uVar8 + 2;
    }
    local_90[uVar8 & 0xffffffff] = 0;
    uVar14 = (uint)local_90[0];
    local_98 = (long ********)(uVar8 << 0x20);
    if (local_90[0] != 0) {
      pbVar13 = local_90;
      do {
        pbVar13 = pbVar13 + 1;
        uVar11 = uVar11 * 0x89 ^ uVar14;
        uVar14 = (uint)*pbVar13;
      } while (uVar14 != 0);
    }
    local_98 = (long ********)CONCAT44((int)uVar8,uVar11);
  }
  FUN_7103726240(*(long **)(lVar15 + 0x20),&local_e0,(long ****)&local_98,&local_150,param_5,param_6
                 ,param_7,param_8);
  local_150 = (byte ***)&PTR_FUN_71050a2a00;
  if (local_118 != (void *)0x0) {
    local_110 = local_118;
    FUN_710392eb40((ulong)local_118);
  }
  puVar7 = local_128;
  local_130 = &PTR_FUN_710523da48;
  local_128 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar18 = (long *)puVar7[1];
    *puVar7 = 0;
    puVar7[1] = 0;
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 1;
      do {
        lVar15 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
        std::__shared_weak_count::__release_weak();
      }
      plVar18 = (long *)puVar7[1];
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 1;
        do {
          lVar15 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar15 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar7);
  }
  if (local_f8 != (byte **)0x0) {
    local_f0 = local_f8;
    FUN_710392eb40((ulong)local_f8);
  }
LAB_710194733c:
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

