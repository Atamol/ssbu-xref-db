// addr:      71019a93d0
// offset:    0x19a93d0
// name:      FUN_71019a93d0
// mangled:   
// signature: undefined __cdecl FUN_71019a93d0(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, long param_9, undefined8 param_10, undefined8 param_11)


void FUN_71019a93d0(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                   long param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  long lVar11;
  float fVar12;
  
  if (*(int *)(param_4 + 0x2d4) == 0) {
    *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_4 + 0x20) + 0x600) + 0x4aa) = 0;
    *(char **)(param_4 + 0x308) = "type_02";
    *(char **)(param_4 + 0x310) = "mnu_amiibo_reading_succession_status";
    *(undefined2 *)(param_4 + 800) = 0x101;
    FUN_71019ac280(param_1,param_2,param_3,param_4,(undefined8 *)(param_4 + 0x308),param_6,param_7,
                   param_8,param_9,param_10,param_11);
    return;
  }
  lVar11 = *(long *)(DAT_710532f7b0 + 8);
  std::recursive_mutex::lock();
  cVar1 = *(char *)(lVar11 + 0x10a51);
  std::recursive_mutex::unlock();
  if (cVar1 != '\0') {
    return;
  }
  if ((((((*(long **)(param_4 + 0x538) != (long *)0x0) &&
         (uVar6 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar6 & 1) == 0)) &&
        (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
       (((*(int *)(param_4 + 0x544) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
        ((*(int *)(param_4 + 0x540) == DAT_7106dd53ac &&
         ((*(char *)(param_4 + 0x548) == '\0' && (*(long **)(param_4 + 0x538) != (long *)0x0))))))))
      && (uVar6 = (**(code **)(**(long **)(param_4 + 0x538) + 0x20))(), (uVar6 & 1) == 0)) &&
     (uVar6 = (**(code **)(**(long **)(param_4 + 0x538) + 0x68))(), (uVar6 & 1) == 0)) {
    FUN_710373b540(param_4 + 0x528,0);
    *(undefined4 *)(param_4 + 0x528) = 0;
    FUN_71039602c0(param_4 + 0x530);
    *(undefined ***)(param_4 + 0x530) = &PTR_FUN_7104f73d50;
    if (((*(long *)(param_4 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_4 + 0x540) == DAT_7106dd53ac)) {
      piVar7 = (int *)(*(long *)(param_4 + 0x538) + 0x38);
      do {
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
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
  *(undefined1 *)(param_4 + 0x56c) = 1;
  iVar5 = *(int *)(*(long *)(DAT_710532f7b0 + 8) + 0x210);
  if (iVar5 == 8) {
    *(char **)(param_4 + 0x308) = "type_01";
    *(undefined2 *)(param_4 + 800) = 0x100;
    *(char **)(param_4 + 0x310) = "mnu_amiibo_reading_succession_touch";
    if (0x12 < *(uint *)(param_4 + 0x2cc)) goto LAB_71019a9934;
    *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0x2cc) * 4 + 0x280) = 0x10;
    if (0x11 < *(int *)(param_4 + 0x2cc)) {
      return;
    }
    uVar2 = *(int *)(param_4 + 0x2cc) + 1;
    *(uint *)(param_4 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a9934;
    *(undefined4 *)(param_4 + (long)(int)uVar2 * 4 + 0x280) = 1;
    if (0x11 < *(int *)(param_4 + 0x2cc)) {
      return;
    }
    uVar2 = *(int *)(param_4 + 0x2cc) + 1;
    *(uint *)(param_4 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a9934;
    *(undefined4 *)(param_4 + (long)(int)uVar2 * 4 + 0x280) = 2;
    if (0x11 < *(int *)(param_4 + 0x2cc)) {
      return;
    }
    uVar2 = *(int *)(param_4 + 0x2cc) + 1;
    *(uint *)(param_4 + 0x2cc) = uVar2;
    if (0x12 < uVar2) goto LAB_71019a9934;
    lVar11 = param_4 + (long)(int)uVar2 * 4;
    uVar10 = 0x14;
LAB_71019a97c0:
    *(undefined4 *)(lVar11 + 0x280) = uVar10;
  }
  else {
    if (iVar5 != 0) {
      *(char **)(param_4 + 0x308) = "type_01";
      *(undefined2 *)(param_4 + 800) = 0x100;
      *(char **)(param_4 + 0x310) = "mnu_amiibo_reading_succession_touch";
      if (0x12 < *(uint *)(param_4 + 0x2cc)) goto LAB_71019a9934;
      *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0x2cc) * 4 + 0x280) = 0x10;
      if (0x11 < *(int *)(param_4 + 0x2cc)) {
        return;
      }
      uVar2 = *(int *)(param_4 + 0x2cc) + 1;
      *(uint *)(param_4 + 0x2cc) = uVar2;
      if (0x12 < uVar2) goto LAB_71019a9934;
      *(undefined4 *)(param_4 + (long)(int)uVar2 * 4 + 0x280) = 1;
      if (0x11 < *(int *)(param_4 + 0x2cc)) {
        return;
      }
      uVar2 = *(int *)(param_4 + 0x2cc) + 1;
      *(uint *)(param_4 + 0x2cc) = uVar2;
      if (0x12 < uVar2) goto LAB_71019a9934;
      *(undefined4 *)(param_4 + (long)(int)uVar2 * 4 + 0x280) = 2;
      if (0x11 < *(int *)(param_4 + 0x2cc)) {
        return;
      }
      uVar2 = *(int *)(param_4 + 0x2cc) + 1;
      *(uint *)(param_4 + 0x2cc) = uVar2;
      if (0x12 < uVar2) goto LAB_71019a9934;
      lVar11 = param_4 + (long)(int)uVar2 * 4;
      uVar10 = 0x19;
      goto LAB_71019a97c0;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    piVar7 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(uint *)(param_4 + 0x300) = *(ushort *)(piVar7 + 4) >> 6 & 2;
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    pcVar8 = (char *)FUN_71032dc2a0(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
    *(bool *)(param_4 + 0x56a) = *pcVar8 == '\0';
    uVar2 = *(uint *)(*(long *)(param_4 + 0x328) + 0xb0);
    if (uVar2 != 0xffffffff) {
      puVar9 = &DAT_7105339830;
      if ((((uVar2 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
          (puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar2], puVar9 == (undefined8 *)0x0)) ||
         (uVar4 = *(int *)(puVar9[2] + 0x9c) - 1, 6 < uVar4)) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = 0.0;
        if (1 < *(int *)(&DAT_7104753de0 + (long)(int)uVar4 * 4) - 1U) {
          fVar12 = 1.0;
        }
      }
      FUN_710175dfc0(fVar12,1.0,*(long *)(DAT_71052c5120 + 8),uVar2,0x1a7e2588dd,0,0,0,0,0);
    }
    if (0x12 < *(uint *)(param_4 + 0x2cc)) goto LAB_71019a9934;
    *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0x2cc) * 4 + 0x280) = 0;
    if (*(short *)((long)piVar7 + 0xae) != 0) {
      *(undefined1 *)(param_4 + 0x56c) = 0;
      if (0x11 < *(int *)(param_4 + 0x2cc)) {
        return;
      }
      uVar2 = *(int *)(param_4 + 0x2cc) + 1;
      *(uint *)(param_4 + 0x2cc) = uVar2;
      if (0x12 < uVar2) goto LAB_71019a9934;
      lVar11 = param_4 + (long)(int)uVar2 * 4;
      uVar10 = 0x1c;
      goto LAB_71019a97c0;
    }
  }
  if (*(int *)(param_4 + 0x2cc) < 0x12) {
    uVar2 = *(int *)(param_4 + 0x2cc) + 1;
    *(uint *)(param_4 + 0x2cc) = uVar2;
    if (0x12 < uVar2) {
LAB_71019a9934:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_4 + (long)(int)uVar2 * 4 + 0x280) = 0x20;
  }
  return;
}

