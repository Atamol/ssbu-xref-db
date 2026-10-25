// addr:      7101cf57b0
// offset:    0x1cf57b0
// name:      FUN_7101cf57b0
// mangled:   
// signature: undefined __cdecl FUN_7101cf57b0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cf57b0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long lVar11;
  float fVar12;
  undefined **local_80;
  ulong local_78;
  long local_70;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    lVar11 = *(long *)(DAT_710532f7b0 + 8);
    std::recursive_mutex::lock();
    cVar3 = *(char *)(lVar11 + 0x10a51);
    std::recursive_mutex::unlock();
    if (cVar3 != '\0') {
      return;
    }
    if (((((*(long **)(param_1 + 0x280) != (long *)0x0) &&
          (uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(), (uVar8 & 1) == 0)) &&
         (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
        (((*(int *)(param_1 + 0x28c) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
         ((*(int *)(param_1 + 0x288) == DAT_7106dd53ac &&
          ((*(char *)(param_1 + 0x290) == '\0' && (*(long **)(param_1 + 0x280) != (long *)0x0)))))))
        ) && ((uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(), (uVar8 & 1) == 0 &&
              (uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x68))(), (uVar8 & 1) == 0)))) {
      FUN_710373b540(param_1 + 0x270,0);
      *(undefined4 *)(param_1 + 0x270) = 0;
      FUN_71039602c0(param_1 + 0x278);
      *(undefined ***)(param_1 + 0x278) = &PTR_FUN_7104f73d50;
      if (((*(long *)(param_1 + 0x280) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0x288) == DAT_7106dd53ac)) {
        piVar10 = (int *)(*(long *)(param_1 + 0x280) + 0x38);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined8 *)(param_1 + 0x288) = 0;
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined ***)(param_1 + 0x278) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined4 *)(param_1 + 0x288) = 0;
      *(undefined4 *)(param_1 + 0x28c) = 0x876500;
      *(undefined1 *)(param_1 + 0x290) = 0;
      *(undefined8 *)(param_1 + 0x298) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined4 *)(param_1 + 0x2ac) = 0;
    }
    uVar4 = *(uint *)(*(long *)(param_1 + 0x188) + 0xb0);
    if (uVar4 != 0xffffffff) {
      puVar9 = &DAT_7105339830;
      if ((((uVar4 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
          (puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar4], puVar9 == (undefined8 *)0x0)) ||
         (uVar6 = *(int *)(puVar9[2] + 0x9c) - 1, 6 < uVar6)) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = 0.0;
        if (1 < *(int *)(&DAT_7104753de0 + (long)(int)uVar6 * 4) - 1U) {
          fVar12 = 1.0;
        }
      }
      param_3 = (undefined **)0x1a7e2588dd;
      param_4 = (byte ****)0x0;
      param_5 = (long ****)0x0;
      param_6 = 0;
      param_7 = 0;
      param_8 = 0;
      FUN_710175dfc0(fVar12,1.0,*(long *)(DAT_71052c5120 + 8),uVar4,0x1a7e2588dd,0,0,0,0,0);
    }
    iVar7 = *(int *)(*(long *)(DAT_710532f7b0 + 8) + 0x210);
    if (iVar7 == 0) {
      uVar2 = *(undefined4 *)(*(long *)(DAT_710532f7b0 + 8) + 0x214);
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      iVar7 = 0;
      DAT_7105307d50 = uVar2;
    }
    FUN_7101cf63c0(param_1,iVar7,param_3,param_4,param_5,param_6,param_7,param_8);
    if (0x11 < *(int *)(param_1 + 0x15c)) {
      return;
    }
    uVar4 = *(int *)(param_1 + 0x15c) + 1;
    *(uint *)(param_1 + 0x15c) = uVar4;
    if (uVar4 < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 0x110) = 9;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_7101af9320(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),0,param_3,param_4
                 ,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 0;
  *(char **)(param_1 + 0x178) = "mnu_amiibo_reading_status";
  *(undefined2 *)(param_1 + 0x180) = 0x101;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x30),0x71042a3672);
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_7103776910(&local_80,param_1 + 0x28,(long ****)"set_txt_help_00",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_80,*(char **)(param_1 + 0x178),param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar8 = local_78;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
  }
  FUN_7101cf61b0(param_1,param_1 + 0x178,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar1 = (undefined4 *)(param_1 + 0x270);
  if ((((((*(long **)(param_1 + 0x280) != (long *)0x0) &&
         (uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(), (uVar8 & 1) == 0)) &&
        (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
       ((*(int *)(param_1 + 0x28c) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
      (*(int *)(param_1 + 0x288) == DAT_7106dd53ac)) &&
     (((*(char *)(param_1 + 0x290) == '\0' && (*(long **)(param_1 + 0x280) != (long *)0x0)) &&
      ((uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x20))(), (uVar8 & 1) == 0 &&
       (uVar8 = (**(code **)(**(long **)(param_1 + 0x280) + 0x68))(), (uVar8 & 1) == 0)))))) {
    FUN_710373b540((long)puVar1,0);
    *(undefined4 *)(param_1 + 0x270) = 0;
    FUN_71039602c0(param_1 + 0x278);
    *(undefined ***)(param_1 + 0x278) = &PTR_FUN_7104f73d50;
    if (((*(long *)(param_1 + 0x280) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0x288) == DAT_7106dd53ac)) {
      piVar10 = (int *)(*(long *)(param_1 + 0x280) + 0x38);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined ***)(param_1 + 0x278) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined4 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x28c) = 0x876500;
    *(undefined1 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = 0;
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19da7fbb4b,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
    FUN_71024076d0((undefined4 *)&local_80,0x19da7fbb4b);
    *puVar1 = local_80._0_4_;
    if (local_70 == 0) goto LAB_7101cf5acc;
    if (*(int *)(param_1 + 0x28c) != 0x876500) goto LAB_7101cf5b1c;
    if (*(int *)(param_1 + 0x288) == DAT_7106dd53ac) {
      if ((*(long *)(param_1 + 0x280) != 0) && (DAT_7106dd53a8 == '\x01')) {
        piVar10 = (int *)(*(long *)(param_1 + 0x280) + 0x38);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar5) {
            *piVar10 = *piVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined8 *)(param_1 + 0x280) = 0;
      *(undefined1 *)(param_1 + 0x290) = 0;
    }
    else {
      *(int *)(param_1 + 0x288) = DAT_7106dd53ac;
    }
    *(long *)(param_1 + 0x280) = local_70;
    piVar10 = (int *)(local_70 + 0x38);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + 1;
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
LAB_7101cf5acc:
    if (((*(long *)(param_1 + 0x280) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0x288) == DAT_7106dd53ac)) {
      piVar10 = (int *)(*(long *)(param_1 + 0x280) + 0x38);
      do {
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar5) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined8 *)(param_1 + 0x280) = 0;
  }
  *(undefined1 *)(param_1 + 0x290) = 0;
LAB_7101cf5b1c:
  *(undefined8 *)(param_1 + 0x298) = local_58;
  *(undefined8 *)(param_1 + 0x2a8) = local_48;
  *(undefined8 *)(param_1 + 0x2a0) = uStack_50;
  if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
    piVar10 = (int *)(local_70 + 0x38);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar10,0x10);
      if (bVar5) {
        *piVar10 = *piVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

