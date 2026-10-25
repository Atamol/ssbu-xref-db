// addr:      7101ef5ca0
// offset:    0x1ef5ca0
// name:      FUN_7101ef5ca0
// mangled:   
// signature: undefined __cdecl FUN_7101ef5ca0(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ef5ca0(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  undefined4 local_b0 [4];
  long local_a0;
  int local_98;
  undefined4 local_70 [4];
  long local_60;
  int local_58;
  undefined **local_30;
  long *local_28;
  
  bVar2 = *(byte *)(*DAT_7105328e18 + 0x3a7);
  if (*(int *)((long)param_1 + 0x24c) == 0) {
    if (3 < *(int *)(param_1 + 0x4a) - 0x17U) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052cc5f0 == '\0') {
        FUN_71037760f0(**(long **)*param_1,1);
        FUN_7103778300(0x3f800000,param_1[0x4c],0x71042f8bfa);
      }
      else {
        FUN_71037760f0(**(long **)*param_1,0);
      }
    }
    FUN_7103776910(&local_30,(long)(param_1 + 0x4b),(long ****)"set_part_result_help_l",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    plVar5 = local_28;
    lVar10 = *local_28;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar2;
    }
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    lVar10 = *(long *)(*(long *)*puVar8 + 0x600);
    if (*(char *)(lVar10 + 0x4aa) != '\0') {
      if ((*(byte *)(lVar10 + 0x1bc) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar10 + 0x1b4) >> 1 & 1) == 0) {
          if (((bVar2 != 0 && *(char *)(lVar10 + 0x4aa) != '\0') &&
              ((*(byte *)(lVar10 + 0x1b8) >> 1 & 1) != 0)) &&
             (*(int *)((long)param_1 + 0x244) < 0x12)) {
            uVar1 = *(int *)((long)param_1 + 0x244) + 1;
            *(uint *)((long)param_1 + 0x244) = uVar1;
            if (0x12 < uVar1) goto LAB_7101ef6010;
            *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x1f8) = 0x17;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x54) = 3;
          FUN_71037760f0(*(long *)*puVar8,0);
          if (0x12 < *(uint *)((long)param_1 + 0x244)) goto LAB_7101ef6010;
          *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x244) * 4 + 0x1f8) =
               0;
          if (((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
              (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                      (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                      param_8), (uVar7 & 1) != 0)) &&
             ((FUN_71024076d0(local_b0,0xf57a523f5), local_a0 != 0 &&
              ((DAT_7106dd53a8 == '\x01' && (local_98 == DAT_7106dd53ac)))))) {
            piVar9 = (int *)(local_a0 + 0x38);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar4) {
                *piVar9 = *piVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x54) = 4;
        FUN_71037760f0(*(long *)*puVar8,0);
        if (0x12 < *(uint *)((long)param_1 + 0x244)) {
LAB_7101ef6010:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x244) * 4 + 0x1f8) = 0
        ;
        if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar7 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                     (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                     param_8), (uVar7 & 1) != 0)) &&
            (FUN_71024076d0(local_70,0xf57a523f5), local_60 != 0)) &&
           ((DAT_7106dd53a8 == '\x01' && (local_58 == DAT_7106dd53ac)))) {
          piVar9 = (int *)(local_60 + 0x38);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar4) {
              *piVar9 = *piVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
  }
  return;
}

