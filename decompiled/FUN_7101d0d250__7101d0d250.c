// addr:      7101d0d250
// offset:    0x1d0d250
// name:      FUN_7101d0d250
// mangled:   
// signature: undefined __cdecl FUN_7101d0d250(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0d250(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_128 [2];
  undefined **local_120;
  long local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined **local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  if (*(int *)(param_1 + 0xec) == 0) {
    if (0 < *(int *)(param_1 + 0x108)) {
      lVar10 = 10;
      do {
        lVar11 = *(long *)(param_1 + 0xf8);
        if (lVar10 - 10U == (ulong)*(uint *)(param_1 + 0x110)) {
          uVar7 = (int)lVar10 - 10;
          FUN_71003a4ca0(auStack_a8,"center_%d_h%d",(ulong)uVar7,(ulong)*(uint *)(lVar11 + 0x1c),
                         param_4,param_5,param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),(long)auStack_a0);
          lVar11 = *(long *)(param_1 + 0x100);
          FUN_71003a4ca0(auStack_a8,"center_%d_h%d",(ulong)uVar7,(ulong)*(uint *)(lVar11 + 0x1c),
                         param_4,param_5,param_6,param_7,param_8);
        }
        else {
          if (3 < lVar10 - 10U) goto LAB_7101d0d694;
          uVar7 = (int)lVar10 - 10;
          FUN_71003a4ca0(auStack_a8,"lose_%d_w%d_r%d",(ulong)uVar7,(ulong)*(uint *)(lVar11 + 0x18),
                         (ulong)*(uint *)(lVar11 + lVar10 * 4),param_5,param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),(long)auStack_a0);
          lVar11 = *(long *)(param_1 + 0x100);
          param_4 = (byte ****)(ulong)*(uint *)(lVar11 + lVar10 * 4);
          FUN_71003a4ca0(auStack_a8,"lose_%d_w%d_r%d",(ulong)uVar7,(ulong)*(uint *)(lVar11 + 0x18),
                         param_4,param_5,param_6,param_7,param_8);
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar11 + 0x10),(long)auStack_a0);
        lVar11 = lVar10 + -9;
        lVar10 = lVar10 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x108));
    }
    if (*(char *)(param_1 + 0x10c) == '\0') {
      if (*(long **)(param_1 + 0x188) == *(long **)(param_1 + 0x180)) goto LAB_7101d0d698;
      uVar5 = 0x25d00a68c5;
      if (*(char *)(**(long **)(param_1 + 0x180) + 0x20) != '\0') {
        uVar5 = 0x252a0555a6;
      }
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar5,(long ****)&DAT_00000004,
                                 param_4,param_5,param_6,param_7,param_8), (uVar3 & 1) != 0)) {
        puVar8 = local_128;
        FUN_71024076d0(local_128,uVar5);
        plVar4 = &local_118;
        local_120 = &PTR_FUN_7104f73d50;
        if (local_118 != 0) {
          if ((DAT_7106dd53a8 == '\x01') && ((int)local_110 == DAT_7106dd53ac)) {
            piVar6 = (int *)(local_118 + 0x38);
            do {
              puVar8 = local_128;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar2) {
                *piVar6 = *piVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          else {
            puVar8 = local_128;
          }
        }
      }
      else {
        puVar8 = local_128;
        local_118 = 0;
        local_110 = 0x87650000000000;
        local_100 = 0xffffffffffffffff;
        uStack_f8 = 0;
        plVar4 = &local_118;
        local_108[0] = 0;
        local_128[0] = 0;
        local_f0 = 0;
        local_120 = &PTR_FUN_7104f73d50;
      }
    }
    else {
      if ((ulong)(*(long *)(param_1 + 0x188) - *(long *)(param_1 + 0x180) >> 3) <=
          (ulong)(long)*(int *)(param_1 + 0x110)) {
LAB_7101d0d698:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar5 = 0x2b9a8926d5;
      if (*(char *)(*(long *)(*(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x110) * 8) +
                   0x20) != '\0') {
        uVar5 = 0x2b60861bb6;
      }
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar3 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),uVar5,(long ****)&DAT_00000004,
                                 param_4,param_5,param_6,param_7,param_8), (uVar3 & 1) != 0)) {
        puVar8 = local_e8;
        FUN_71024076d0(local_e8,uVar5);
        plVar4 = &local_d8;
        local_e0 = &PTR_FUN_7104f73d50;
        if (local_d8 != 0) {
          if ((DAT_7106dd53a8 == '\x01') && ((int)local_d0 == DAT_7106dd53ac)) {
            piVar6 = (int *)(local_d8 + 0x38);
            do {
              puVar8 = local_e8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
              if (bVar2) {
                *piVar6 = *piVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          else {
            puVar8 = local_e8;
          }
        }
      }
      else {
        puVar8 = local_e8;
        local_d8 = 0;
        local_d0 = 0x87650000000000;
        local_c0 = 0xffffffffffffffff;
        uStack_b8 = 0;
        plVar4 = &local_d8;
        local_c8 = 0;
        local_e8[0] = 0;
        local_b0 = 0;
        local_e0 = &PTR_FUN_7104f73d50;
      }
    }
    *plVar4 = 0;
    *(undefined1 *)(puVar8 + 8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x108)) {
    uVar7 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0xf8);
      uVar9 = 2;
      if (uVar7 == *(uint *)(param_1 + 0x110)) {
        uVar9 = 3;
      }
      FUN_7101d0f540(auStack_a8,lVar10,(ulong)uVar9,(ulong)uVar7,param_5,param_6,param_7,param_8);
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 8);
      if (((lVar10 != 0) &&
          (plVar4 = (long *)FUN_71037964b0(lVar10,(long)auStack_a0), plVar4 != (long *)0x0)) &&
         (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
        return;
      }
      lVar10 = *(long *)(param_1 + 0x100);
      FUN_7101d0f540(auStack_a8,lVar10,(ulong)uVar9,(ulong)uVar7,param_5,param_6,param_7,param_8);
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 8);
      if (((lVar10 != 0) &&
          (plVar4 = (long *)FUN_71037964b0(lVar10,(long)auStack_a0), plVar4 != (long *)0x0)) &&
         (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
        return;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x108));
  }
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 6;
    return;
  }
LAB_7101d0d694:
                    /* WARNING: Subroutine does not return */
  abort();
}

