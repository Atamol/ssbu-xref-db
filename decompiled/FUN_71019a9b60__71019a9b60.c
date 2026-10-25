// addr:      71019a9b60
// offset:    0x19a9b60
// name:      FUN_71019a9b60
// mangled:   
// signature: undefined __cdecl FUN_71019a9b60(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019a9b60(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long ****pppplVar9;
  long **pplVar10;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 local_f0 [2];
  undefined **local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  long lStack_a8;
  undefined **local_90;
  long ***local_80;
  undefined **local_78;
  long local_70;
  int local_68;
  undefined4 uStack_64;
  long ****local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_7103345840((long *)(param_1 + 0x330));
    lVar13 = DAT_710532f7b0;
    if (*(int *)(param_1 + 1000) == 2) {
      if ((*(int *)(param_1 + 0x3f8) < 1) || (*(int *)(param_1 + 0x3fc) < 1)) {
        *(undefined1 **)(param_1 + 0x3f8) = &DAT_300000002;
        *(char **)(param_1 + 0x308) = "type_03";
        *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
        *(undefined4 *)(param_1 + 0x400) = 0;
        *(undefined2 *)(param_1 + 800) = 0x100;
        lVar13 = *(long *)(DAT_710532f7b0 + 8);
        std::recursive_mutex::lock();
        *(undefined1 *)(lVar13 + 0x10a51) = 1;
        *(undefined4 *)(lVar13 + 0xa28) = 0;
        *(undefined2 *)(lVar13 + 0xa20) = 0;
        *(undefined1 *)(lVar13 + 0x10a4e) = 0;
        *(undefined4 *)(lVar13 + 0x10a4a) = 0;
        if (0x12 < *(uint *)(lVar13 + 0x164)) goto LAB_71019aa668;
        *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x164) * 4 + 0x118) = 0;
        if (*(int *)(lVar13 + 0x164) < 0x12) {
          uVar14 = *(int *)(lVar13 + 0x164) + 1;
          *(uint *)(lVar13 + 0x164) = uVar14;
          if (0x12 < uVar14) goto LAB_71019aa668;
          *(undefined4 *)(lVar13 + (long)(int)uVar14 * 4 + 0x118) = 0xb;
        }
        std::recursive_mutex::unlock();
        if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019aa668;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
        if (*(int *)(param_1 + 0x2cc) < 0x12) {
          uVar14 = *(int *)(param_1 + 0x2cc) + 1;
          puVar1 = (uint *)(param_1 + 0x2cc);
          *puVar1 = uVar14;
          if (0x12 < uVar14) goto LAB_71019aa668;
          *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = 1;
          if (*(int *)(param_1 + 0x2cc) < 0x12) {
            uVar14 = *(int *)(param_1 + 0x2cc) + 1;
            *puVar1 = uVar14;
            if (0x12 < uVar14) goto LAB_71019aa668;
            *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = 0x15;
            if (*(int *)(param_1 + 0x2cc) < 0x12) {
              uVar14 = *(int *)(param_1 + 0x2cc) + 1;
              *puVar1 = uVar14;
              if (0x12 < uVar14) goto LAB_71019aa668;
              uVar17 = 0x20;
              goto LAB_71019a9ec4;
            }
          }
        }
      }
      else if (*(int *)(param_1 + 0x2cc) < 0x12) {
        uVar14 = *(int *)(param_1 + 0x2cc) + 1;
        *(uint *)(param_1 + 0x2cc) = uVar14;
        if (0x12 < uVar14) goto LAB_71019aa668;
        uVar17 = 2;
LAB_71019a9ec4:
        *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = uVar17;
        uVar14 = *(uint *)(param_1 + 0x2cc);
        if ((int)uVar14 < 0x12) {
          uVar14 = uVar14 + 1;
          *(uint *)(param_1 + 0x2cc) = uVar14;
          if (0x12 < uVar14) goto LAB_71019aa668;
          uVar17 = 0x17;
          goto LAB_71019aa40c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)(DAT_710532f7b0 + 8) + 0xa28) != 2) {
        lVar16 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600);
        if (*(char *)(lVar16 + 0x4aa) == '\0') {
          return;
        }
        if ((*(byte *)(lVar16 + 0x1ac) >> 1 & 1) == 0) {
          return;
        }
        *(undefined1 **)(param_1 + 0x3f8) = &DAT_300000002;
        *(char **)(param_1 + 0x308) = "type_03";
        *(char **)(param_1 + 0x310) = "mnu_amiibo_reading_select";
        *(undefined4 *)(param_1 + 0x400) = 0;
        *(undefined2 *)(param_1 + 800) = 0x100;
        lVar13 = *(long *)(lVar13 + 8);
        std::recursive_mutex::lock();
        *(undefined1 *)(lVar13 + 0x10a51) = 1;
        *(undefined4 *)(lVar13 + 0xa28) = 0;
        *(undefined2 *)(lVar13 + 0xa20) = 0;
        *(undefined1 *)(lVar13 + 0x10a4e) = 0;
        *(undefined4 *)(lVar13 + 0x10a4a) = 0;
        if (0x12 < *(uint *)(lVar13 + 0x164)) goto LAB_71019aa668;
        *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x164) * 4 + 0x118) = 0;
        if (*(int *)(lVar13 + 0x164) < 0x12) {
          uVar14 = *(int *)(lVar13 + 0x164) + 1;
          *(uint *)(lVar13 + 0x164) = uVar14;
          if (0x12 < uVar14) goto LAB_71019aa668;
          *(undefined4 *)(lVar13 + (long)(int)uVar14 * 4 + 0x118) = 0xb;
        }
        std::recursive_mutex::unlock();
        if (0x12 < *(uint *)(param_1 + 0x2cc)) goto LAB_71019aa668;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x2cc) * 4 + 0x280) = 0xc;
        if (*(int *)(param_1 + 0x2cc) < 0x12) {
          uVar14 = *(int *)(param_1 + 0x2cc) + 1;
          *(uint *)(param_1 + 0x2cc) = uVar14;
          if (0x12 < uVar14) goto LAB_71019aa668;
          *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = 1;
          if (*(int *)(param_1 + 0x2cc) < 0x12) {
            uVar14 = *(int *)(param_1 + 0x2cc) + 1;
            *(uint *)(param_1 + 0x2cc) = uVar14;
            if (0x12 < uVar14) goto LAB_71019aa668;
            *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = 0x15;
            if (*(int *)(param_1 + 0x2cc) < 0x12) {
              uVar14 = *(int *)(param_1 + 0x2cc) + 1;
              *(uint *)(param_1 + 0x2cc) = uVar14;
              if (0x12 < uVar14) goto LAB_71019aa668;
              *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = 0x20;
            }
          }
        }
        lVar13 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar13 + 0x48) - *(long *)(lVar13 + 0x40) >> 3) < 4) {
          uVar6 = 0;
          if (*(char *)(lVar13 + 0x191) == '\0') goto LAB_71019aa494;
LAB_71019aa504:
          local_d8 = 0x87650000000000;
          local_c8 = 0xffffffffffffffff;
          uStack_c0 = 0;
          local_f0[0] = 0;
          local_b8 = 0;
        }
        else {
          uVar6 = *(ulong *)(*(long *)(lVar13 + 0x40) + 0x18);
          if (*(char *)(lVar13 + 0x191) != '\0') goto LAB_71019aa504;
LAB_71019aa494:
          uVar8 = FUN_7103313f20(lVar13,uVar6,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                 param_7,param_8);
          if ((uVar8 & 1) == 0) goto LAB_71019aa504;
          FUN_71024076d0(local_f0,uVar6);
          if (((local_e0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_d8 == DAT_7106dd53ac))
          {
            piVar15 = (int *)(local_e0 + 0x38);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar3) {
                *piVar15 = *piVar15 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        local_e8 = &PTR_FUN_7104f73d50;
        local_e0 = 0;
        local_d0 = 0;
        goto LAB_71019aa410;
      }
      puVar7 = (undefined4 *)(param_1 + 0x528);
      if (((((*(long **)(param_1 + 0x538) != (long *)0x0) &&
            (uVar6 = (**(code **)(**(long **)(param_1 + 0x538) + 0x20))(), (uVar6 & 1) == 0)) &&
           ((*(char *)(*DAT_710593b438 + 1) != '\0' &&
            ((*(int *)(param_1 + 0x544) == 0x876500 && (DAT_7106dd53a8 == '\x01')))))) &&
          (*(int *)(param_1 + 0x540) == DAT_7106dd53ac)) &&
         ((((*(char *)(param_1 + 0x548) == '\0' && (*(long **)(param_1 + 0x538) != (long *)0x0)) &&
           (uVar6 = (**(code **)(**(long **)(param_1 + 0x538) + 0x20))(), (uVar6 & 1) == 0)) &&
          (uVar6 = (**(code **)(**(long **)(param_1 + 0x538) + 0x68))(), (uVar6 & 1) == 0)))) {
        FUN_710373b540((long)puVar7,0);
        *(undefined4 *)(param_1 + 0x528) = 0;
        FUN_71039602c0(param_1 + 0x530);
        *(undefined ***)(param_1 + 0x530) = &PTR_FUN_7104f73d50;
        if (((*(long *)(param_1 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x540) == DAT_7106dd53ac)) {
          piVar15 = (int *)(*(long *)(param_1 + 0x538) + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = *piVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined8 *)(param_1 + 0x540) = 0;
        *(undefined8 *)(param_1 + 0x548) = 0;
        *(undefined8 *)(param_1 + 0x530) = 0;
        *(undefined8 *)(param_1 + 0x538) = 0;
        *(undefined ***)(param_1 + 0x530) = &PTR_FUN_7104f73d30;
        *(undefined8 *)(param_1 + 0x538) = 0;
        *(undefined4 *)(param_1 + 0x540) = 0;
        *(undefined4 *)(param_1 + 0x544) = 0x876500;
        *(undefined1 *)(param_1 + 0x548) = 0;
        *(undefined8 *)(param_1 + 0x550) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x558) = 0;
        *(undefined4 *)(param_1 + 0x564) = 0;
      }
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19da7fbb4b,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_80,0x19da7fbb4b);
        *puVar7 = local_80._0_4_;
        if (local_70 == 0) goto LAB_71019aa338;
        if (*(int *)(param_1 + 0x544) == 0x876500) {
          if (*(int *)(param_1 + 0x540) == DAT_7106dd53ac) {
            if ((*(long *)(param_1 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) {
              piVar15 = (int *)(*(long *)(param_1 + 0x538) + 0x38);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
                if (bVar3) {
                  *piVar15 = *piVar15 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            *(undefined8 *)(param_1 + 0x538) = 0;
            *(undefined1 *)(param_1 + 0x548) = 0;
          }
          else {
            *(int *)(param_1 + 0x540) = DAT_7106dd53ac;
          }
          *(long *)(param_1 + 0x538) = local_70;
          piVar15 = (int *)(local_70 + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = *piVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          goto LAB_71019aa380;
        }
      }
      else {
        local_68 = 0;
        uStack_64 = 0x876500;
        local_70 = 0;
        local_60 = (long ****)((ulong)local_60 & 0xffffffffffffff00);
        local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
        local_48 = 0;
        local_58 = 0xffffffffffffffff;
        uStack_50 = 0;
        *puVar7 = 0;
LAB_71019aa338:
        if (((*(long *)(param_1 + 0x538) != 0) && (DAT_7106dd53a8 == '\x01')) &&
           (*(int *)(param_1 + 0x540) == DAT_7106dd53ac)) {
          piVar15 = (int *)(*(long *)(param_1 + 0x538) + 0x38);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar3) {
              *piVar15 = *piVar15 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        *(undefined8 *)(param_1 + 0x538) = 0;
LAB_71019aa380:
        *(undefined1 *)(param_1 + 0x548) = 0;
      }
      *(undefined8 *)(param_1 + 0x550) = local_58;
      *(undefined8 *)(param_1 + 0x560) = local_48;
      *(undefined8 *)(param_1 + 0x558) = uStack_50;
      local_78 = &PTR_FUN_7104f73d50;
      if (((local_70 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_68 == DAT_7106dd53ac)) {
        piVar15 = (int *)(local_70 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = *piVar15 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_70 = 0;
      *(undefined4 *)(param_1 + 0x400) = 0;
      *(undefined1 **)(param_1 + 0x3f8) = &DAT_300000002;
      uVar14 = *(uint *)(param_1 + 0x2cc);
      if (0x12 < uVar14) goto LAB_71019aa668;
      uVar17 = 0x13;
LAB_71019aa40c:
      *(undefined4 *)(param_1 + (long)(int)uVar14 * 4 + 0x280) = uVar17;
    }
LAB_71019aa410:
    uVar14 = *(uint *)(*(long *)(param_1 + 0x328) + 0xb0);
    if (uVar14 == 0xffffffff) {
      return;
    }
    if (uVar14 < 10) {
      lVar13 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar14 * 8 + 8);
      if ((*(int *)(lVar13 + 0xa8) != 1) && (*(char *)(lVar13 + 0xdd) == '\0')) {
        return;
      }
      *(undefined2 *)(lVar13 + 0xdd) = 0x100;
      if (*(uint *)(lVar13 + 0xa4) < 0x13) {
        *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0xa4) * 4 + 0x58) = 2;
        return;
      }
    }
    goto LAB_71019aa668;
  }
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600) + 0x4aa) = 1;
  local_b0 = &DAT_71050a7280;
  local_90 = &local_b0;
  lVar13 = *(long *)(DAT_710532f7b0 + 8);
  lStack_a8 = param_1;
  local_60 = &local_80;
  FUN_71019ad020((long)&local_b0,&local_80);
  FUN_71003cb050((long *)&local_80,(long *)(lVar13 + 0x1b0));
  if (&local_80 == local_60) {
    pplVar10 = (*local_60)[4];
LAB_71019aa08c:
    (*(code *)pplVar10)();
  }
  else if (local_60 != (long ****)0x0) {
    pplVar10 = (*local_60)[5];
    goto LAB_71019aa08c;
  }
  if (&local_b0 == local_90) {
    pcVar11 = *(code **)(*local_90 + 0x20);
LAB_71019aa0b8:
    (*pcVar11)();
  }
  else if (local_90 != (undefined **)0x0) {
    pcVar11 = *(code **)(*local_90 + 0x28);
    goto LAB_71019aa0b8;
  }
  *(undefined4 *)(*(long *)(DAT_710532f7b0 + 8) + 0x178) =
       *(undefined4 *)(*(long *)(param_1 + 0x328) + 0xb0);
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar13 = DAT_710532f7b0;
  uVar17 = DAT_7105307d50;
  puVar7 = (undefined4 *)
           FUN_710392e290(0x10,4,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
      local_80 = (long ***)&DAT_00000004;
      pppplVar9 = &local_80;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined4 *)
                   FUN_710392e290(0x10,4,pppplVar9,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined4 *)0x0)) goto LAB_71019aa148;
    }
    puVar7 = (undefined4 *)0x0;
  }
LAB_71019aa148:
  *puVar7 = uVar17;
  lVar13 = *(long *)(lVar13 + 8);
  std::recursive_mutex::lock();
  if (*(char *)(lVar13 + 0x10a50) != '\0') {
    *(undefined1 *)(lVar13 + 0x10a51) = 1;
    *(undefined4 *)(lVar13 + 0xa28) = 1;
    *(undefined2 *)(lVar13 + 0xa20) = 0;
    *(undefined4 *)(lVar13 + 0x10a4a) = 0x1000001;
    *(undefined2 *)(lVar13 + 0x10a4e) = 0;
    *(undefined4 *)(lVar13 + 0x214) = 0xffffffff;
    FUN_71014bfc60((undefined8 *)(lVar13 + 0x10a30),puVar7,(long ****)(puVar7 + 1),param_4,param_5,
                   param_6,param_7,param_8);
    if (0x12 < *(uint *)(lVar13 + 0x164)) {
LAB_71019aa668:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x164) * 4 + 0x118) = 5;
  }
  std::recursive_mutex::unlock();
  if (puVar7 != (undefined4 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined1 *)(param_1 + 0x404) = 1;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  *(undefined8 *)(param_1 + 0x3d4) = 0;
  *(undefined8 *)(param_1 + 0x3cc) = 0;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined8 *)(param_1 + 1000) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined1 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x398) = 1;
  uVar14 = *(uint *)(*(long *)(param_1 + 0x328) + 0xb0);
  if (uVar14 != 0xffffffff) {
    puVar12 = &DAT_7105339830;
    if ((((uVar14 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
        (puVar12 = (undefined8 *)(&DAT_7105339860)[(int)uVar14], puVar12 == (undefined8 *)0x0)) ||
       (uVar4 = *(int *)(puVar12[2] + 0x9c) - 1, 6 < uVar4)) {
      fVar18 = 1.0;
    }
    else {
      fVar18 = 0.0;
      if (1 < *(int *)(&DAT_7104753de0 + (long)(int)uVar4 * 4) - 1U) {
        fVar18 = 1.0;
      }
    }
    FUN_710175dfc0(fVar18,1.0,*(long *)(DAT_71052c5120 + 8),uVar14,0x165fc419fc,0,0,0,0,0);
  }
  return;
}

