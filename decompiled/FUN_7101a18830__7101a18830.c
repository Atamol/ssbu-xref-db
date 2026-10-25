// addr:      7101a18830
// offset:    0x1a18830
// name:      FUN_7101a18830
// mangled:   
// signature: undefined __cdecl FUN_7101a18830(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a18830(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (0 < *(int *)(param_1 + 0x160)) {
      uVar8 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x250) + uVar8 * 0x10 + 8) + 0x5e8);
        if ((**(long **)(lVar10 + 0x1a8) != 0) && ((*(long **)(lVar10 + 0x1a8))[1] != 0)) {
          FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x10),0x710438c2ef);
          FUN_710377aee0(0x3f800000,lVar10 + 0x1a0);
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19fe2658c2,
                                     (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                     param_8), (uVar4 & 1) != 0)) {
            FUN_71024076d0(local_b0,0x19fe2658c2);
            if (((local_a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_98 == DAT_7106dd53ac)
               ) {
              piVar6 = (int *)(local_a0 + 0x38);
              do {
                cVar2 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                if (bVar9) {
                  *piVar6 = *piVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          else {
            local_98 = 0x87650000000000;
            local_b0[0] = 0;
            local_88 = 0xffffffffffffffff;
            local_80 = 0;
            uStack_78 = 0;
          }
          local_a8 = &PTR_FUN_7104f73d50;
          local_a0 = 0;
          local_90 = 0;
        }
        if ((**(long **)(lVar10 + 0x1b8) != 0) && ((*(long **)(lVar10 + 0x1b8))[1] != 0)) {
          FUN_710377aee0(0x3f800000,lVar10 + 0x1b0);
        }
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x160));
    }
  }
  else {
    if (0 < *(int *)(param_1 + 0x160)) {
      uVar8 = 0;
      bVar9 = true;
      lVar10 = 8;
      do {
        if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x250) + lVar10) + 0x5e8);
        plVar3 = *(long **)(*(long *)(lVar11 + 0x1a8) + 8);
        if ((((plVar3 == (long *)0x0) ||
             (uVar4 = (**(code **)(*plVar3 + 0x148))(), (uVar4 & 1) == 0)) ||
            ((plVar3 = *(long **)(*(long *)(lVar11 + 0x1a8) + 8), plVar3 == (long *)0x0 ||
             (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)))) &&
           (((**(long **)(lVar11 + 0x1b8) == 0 ||
             (plVar3 = (long *)(*(long **)(lVar11 + 0x1b8))[1], plVar3 == (long *)0x0)) ||
            (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)))) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
        bVar9 = (bool)(bVar9 & bVar5);
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x160));
      if (!bVar9) {
        return;
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1a0) + 0x10),0x71042d4aad);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x198) + 0x10),0x71042d4aad);
    FUN_71032d0240(*(long *)(param_1 + 0xdf0));
    lVar10 = *(long *)(param_1 + 0x238);
    lVar11 = *(long *)(param_1 + 0x240);
    if (lVar10 != lVar11) {
      uVar8 = (lVar11 + -0x10) - lVar10;
      uVar1 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar7 = -((ulong)uVar1 & 3);
        do {
          plVar3 = (long *)(lVar10 + 8);
          lVar10 = lVar10 + 0x10;
          lVar7 = lVar7 + 1;
          *(undefined1 *)(*(long *)(*plVar3 + 0x20) + 0x161) = 0;
        } while (lVar7 != 0);
      }
      if (0x2f < uVar8) {
        do {
          *(undefined1 *)(*(long *)(*(long *)(lVar10 + 8) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar10 + 0x18) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar10 + 0x28) + 0x20) + 0x161) = 0;
          plVar3 = (long *)(lVar10 + 0x38);
          lVar10 = lVar10 + 0x40;
          *(undefined1 *)(*(long *)(*plVar3 + 0x20) + 0x161) = 0;
        } while (lVar11 != lVar10);
      }
    }
    *(undefined1 *)(param_1 + 0xf87) = 0;
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 10;
  }
  return;
}

