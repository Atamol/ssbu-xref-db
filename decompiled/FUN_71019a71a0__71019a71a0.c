// addr:      71019a71a0
// offset:    0x19a71a0
// name:      FUN_71019a71a0
// mangled:   
// signature: undefined __cdecl FUN_71019a71a0(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, long param_9, undefined8 param_10, undefined8 param_11)


void FUN_71019a71a0(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                   long param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined4 local_80 [4];
  long local_70;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_4 + 0x2d4) != 0) {
    lVar12 = *(long *)(DAT_710532f7b0 + 8);
    std::recursive_mutex::lock();
    cVar3 = *(char *)(lVar12 + 0x10a51);
    std::recursive_mutex::unlock();
    if (cVar3 != '\0') {
      return;
    }
    if (((((*(long **)(param_4 + 0x538) != (long *)0x0) &&
          (uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar9 & 1) == 0)) &&
         (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
        (((*(int *)(param_4 + 0x544) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
         ((*(int *)(param_4 + 0x540) == DAT_7106dd53ac &&
          ((*(char *)(param_4 + 0x548) == '\0' && (*(long **)(param_4 + 0x538) != (long *)0x0)))))))
        ) && ((uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar9 & 1) == 0 &&
              (uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x68))(), (uVar9 & 1) == 0)))) {
      FUN_710373b540(param_4 + 0x528,0);
      *(undefined4 *)(param_4 + 0x528) = 0;
      FUN_71039602c0(param_4 + 0x530);
      *(undefined ***)(param_4 + 0x530) = &PTR_FUN_7104f73d50;
      if (((*(long *)(param_4 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_4 + 0x540) == DAT_7106dd53ac)) {
        piVar11 = (int *)(*(long *)(param_4 + 0x538) + 0x38);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined8 *)(param_4 + 0x540) = 0;
      *(undefined8 *)(param_4 + 0x548) = 0;
      *(undefined8 *)(param_4 + 0x530) = 0;
      *(undefined8 *)(param_4 + 0x538) = 0;
      *(undefined ***)(param_4 + 0x530) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_4 + 0x538) = 0;
      *(undefined4 *)(param_4 + 0x540) = 0;
      *(undefined4 *)(param_4 + 0x544) = 0x876500;
      *(undefined1 *)(param_4 + 0x548) = 0;
      *(undefined8 *)(param_4 + 0x550) = 0xffffffffffffffff;
      *(undefined8 *)(param_4 + 0x558) = 0;
      *(undefined4 *)(param_4 + 0x564) = 0;
    }
    uVar4 = *(uint *)(*(long *)(param_4 + 0x328) + 0xb0);
    if (uVar4 != 0xffffffff) {
      puVar10 = &DAT_7105339830;
      if ((((uVar4 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
          (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)uVar4], puVar10 == (undefined8 *)0x0)) ||
         (uVar6 = *(int *)(puVar10[2] + 0x9c) - 1, 6 < uVar6)) {
        fVar13 = 1.0;
      }
      else {
        fVar13 = 0.0;
        if (1 < *(int *)(&DAT_7104753de0 + (long)(int)uVar6 * 4) - 1U) {
          fVar13 = 1.0;
        }
      }
      FUN_710175dfc0(fVar13,1.0,*(long *)(DAT_71052c5120 + 8),uVar4,0x1a7e2588dd,0,0,0,0,0);
    }
    uVar4 = *(uint *)(*(long *)(DAT_710532f7b0 + 8) + 0x210);
    uVar2 = DAT_7105307d50;
    if (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x61U) != 0) &&
        (uVar2 = *(undefined4 *)(*(long *)(DAT_710532f7b0 + 8) + 0x214), (DAT_71053144d8 & 1) == 0))
       && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_7105307d50 = uVar2;
    FUN_71019ad760(param_4,uVar4);
    if (0x11 < *(int *)(param_4 + 0x2cc)) {
      return;
    }
    uVar4 = *(int *)(param_4 + 0x2cc) + 1;
    *(uint *)(param_4 + 0x2cc) = uVar4;
    if (uVar4 < 0x13) {
      *(undefined4 *)(param_4 + (long)(int)uVar4 * 4 + 0x280) = 0x20;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_7101af9320(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),0,param_6,param_7
                 ,param_8,param_9,param_10,param_11);
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_4 + 0x20) + 0x600) + 0x4aa) = 0;
  *(char **)(param_4 + 0x308) = "type_00";
  *(char **)(param_4 + 0x310) = "mnu_amiibo_reading_status";
  *(undefined2 *)(param_4 + 800) = 0x101;
  auVar7._4_4_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar7._8_8_ = extraout_var_00;
  FUN_71019ac280(auVar7,param_2,param_3,param_4,(undefined8 *)(param_4 + 0x308),param_6,param_7,
                 param_8,param_9,param_10,param_11);
  puVar1 = (undefined4 *)(param_4 + 0x528);
  if (((((((*(long **)(param_4 + 0x538) != (long *)0x0) &&
          (uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar9 & 1) == 0)) &&
         (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
        ((*(int *)(param_4 + 0x544) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
       (*(int *)(param_4 + 0x540) == DAT_7106dd53ac)) &&
      ((*(char *)(param_4 + 0x548) == '\0' && (*(long **)(param_4 + 0x538) != (long *)0x0)))) &&
     ((uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar9 & 1) == 0 &&
      (uVar9 = (**(code **)(**(long **)(param_4 + 0x538) + 0x68))(), (uVar9 & 1) == 0)))) {
    FUN_710373b540((long)puVar1,0);
    *(undefined4 *)(param_4 + 0x528) = 0;
    FUN_71039602c0(param_4 + 0x530);
    *(undefined ***)(param_4 + 0x530) = &PTR_FUN_7104f73d50;
    if (((*(long *)(param_4 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_4 + 0x540) == DAT_7106dd53ac)) {
      piVar11 = (int *)(*(long *)(param_4 + 0x538) + 0x38);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_4 + 0x540) = 0;
    *(undefined8 *)(param_4 + 0x548) = 0;
    *(undefined8 *)(param_4 + 0x530) = 0;
    *(undefined8 *)(param_4 + 0x538) = 0;
    *(undefined ***)(param_4 + 0x530) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(param_4 + 0x538) = 0;
    *(undefined4 *)(param_4 + 0x540) = 0;
    *(undefined4 *)(param_4 + 0x544) = 0x876500;
    *(undefined1 *)(param_4 + 0x548) = 0;
    *(undefined8 *)(param_4 + 0x550) = 0xffffffffffffffff;
    *(undefined8 *)(param_4 + 0x558) = 0;
    *(undefined4 *)(param_4 + 0x564) = 0;
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19da7fbb4b,(long ****)&DAT_00000004,
                             param_7,param_8,param_9,param_10,param_11), (uVar9 & 1) != 0)) {
    FUN_71024076d0(local_80,0x19da7fbb4b);
    *puVar1 = local_80[0];
    if (local_70 == 0) goto LAB_71019a7470;
    if (*(int *)(param_4 + 0x544) != 0x876500) goto LAB_71019a74c0;
    if (*(int *)(param_4 + 0x540) == DAT_7106dd53ac) {
      if ((*(long *)(param_4 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) {
        piVar11 = (int *)(*(long *)(param_4 + 0x538) + 0x38);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar5) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined8 *)(param_4 + 0x538) = 0;
      *(undefined1 *)(param_4 + 0x548) = 0;
    }
    else {
      *(int *)(param_4 + 0x540) = DAT_7106dd53ac;
    }
    *(long *)(param_4 + 0x538) = local_70;
    piVar11 = (int *)(local_70 + 0x38);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = *piVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    local_68 = 0;
    local_70 = 0;
    local_48 = 0;
    local_58 = 0xffffffffffffffff;
    uStack_50 = 0;
    *puVar1 = 0;
LAB_71019a7470:
    if (((*(long *)(param_4 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_4 + 0x540) == DAT_7106dd53ac)) {
      piVar11 = (int *)(*(long *)(param_4 + 0x538) + 0x38);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_4 + 0x538) = 0;
  }
  *(undefined1 *)(param_4 + 0x548) = 0;
LAB_71019a74c0:
  *(undefined8 *)(param_4 + 0x550) = local_58;
  *(undefined8 *)(param_4 + 0x560) = local_48;
  *(undefined8 *)(param_4 + 0x558) = uStack_50;
  if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
    piVar11 = (int *)(local_70 + 0x38);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar5) {
        *piVar11 = *piVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

