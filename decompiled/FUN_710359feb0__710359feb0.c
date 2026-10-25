// addr:      710359feb0
// offset:    0x359feb0
// name:      FUN_710359feb0
// mangled:   
// signature: undefined __cdecl FUN_710359feb0(uint param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710359feb0(uint param_1,uint param_2,long *********param_3,byte ****param_4,
                   undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  uint *puVar19;
  long *plVar20;
  uint local_78 [2];
  ulong local_70;
  long *local_68;
  uint local_58 [2];
  
  lVar13 = DAT_7105332f20;
  uVar15 = (ulong)param_2;
  uVar16 = (ulong)param_1;
  pcVar10 = (code *)param_5;
  if ((param_2 != 0xffffff) && (param_2 < *(uint *)(DAT_7105332f20 + 0x48))) {
    std::recursive_mutex::lock();
    lVar11 = *(long *)(lVar13 + 0x40);
    if ((*(byte *)(lVar11 + uVar15 * 0x48 + 8) & 1) == 0) {
      std::recursive_mutex::unlock();
      FUN_7103540d50(lVar13,param_2,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
      pcVar10 = (code *)param_5;
    }
    else {
      FUN_71035432d0((int *)(lVar11 + uVar15 * 0x48));
      std::recursive_mutex::unlock();
      pcVar10 = (code *)param_5;
    }
  }
  plVar6 = FUN_710356a030((long *)(DAT_7105338018 + 0x18),DAT_71053391f8);
  lVar13 = DAT_7105332f20;
  if ((plVar6 == (long *)0x0) || (lVar11 = *(long *)(plVar6[5] + 0x10), lVar11 == 0)) {
    if (param_2 == 0xffffff) {
      return;
    }
  }
  else {
    uVar8 = extraout_x1;
    if ((param_2 != 0xffffff) && (param_2 < *(uint *)(DAT_7105332f20 + 0x48))) {
      std::recursive_mutex::lock();
      lVar12 = *(long *)(lVar13 + 0x40);
      if ((*(byte *)(lVar12 + uVar15 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar13,param_2,param_3,param_4,(long ****)pcVar10,param_6,param_7,param_8);
        uVar8 = extraout_x1_00;
      }
      else {
        FUN_71035432d0((int *)(lVar12 + uVar15 * 0x48));
        std::recursive_mutex::unlock();
        uVar8 = extraout_x1_01;
      }
    }
    *(undefined8 *)(lVar11 + 0xc958) = 0;
    *(undefined8 *)(lVar11 + 0xc950) = 0x3f800000;
    *(undefined8 *)(lVar11 + 0xc968) = 0;
    *(undefined8 *)(lVar11 + 0xc960) = 0x3f80000000000000;
    *(undefined8 *)(lVar11 + 0xc978) = 0x3f800000;
    *(undefined8 *)(lVar11 + 0xc970) = 0;
    *(undefined8 *)(lVar11 + 0xc988) = 0x3f80000000000000;
    *(undefined8 *)(lVar11 + 0xc980) = 0;
    lVar13 = DAT_7105332f20;
    local_78[0] = param_2;
    if ((param_2 != 0xffffff) && (param_2 < *(uint *)(DAT_7105332f20 + 0x48))) {
      std::recursive_mutex::lock();
      lVar12 = *(long *)(lVar13 + 0x40);
      if ((*(byte *)(lVar12 + (ulong)param_2 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar13,param_2,param_3,param_4,(long ****)pcVar10,param_6,param_7,param_8);
        uVar8 = extraout_x1_02;
      }
      else {
        FUN_71035432d0((int *)(lVar12 + uVar15 * 0x48));
        std::recursive_mutex::unlock();
        uVar8 = extraout_x1_03;
      }
    }
    puVar17 = (ulong *)(lVar11 + uVar16 * 0x1240 + 0x30);
    if (*puVar17 != 0) {
      FUN_71035598f0(puVar17,uVar8,(long ****)param_3,param_4,(long ****)pcVar10,param_6,param_7,
                     param_8);
      lVar13 = lVar11 + uVar16 * 0x1240;
      *puVar17 = 0;
      plVar6 = *(long **)(lVar13 + 0x38);
      *(undefined8 *)(lVar13 + 0x38) = 0;
      if (plVar6 != (long *)0x0) {
        plVar20 = plVar6 + 1;
        do {
          lVar13 = *plVar20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *plVar20 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    lVar13 = DAT_7105332f20;
    uVar18 = (ulong)local_78[0];
    if (local_78[0] != 0xffffff) {
      if (local_78[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        puVar19 = (uint *)(*(long *)(lVar13 + 0x40) + uVar18 * 0x48);
        uVar5 = puVar19[2];
        std::recursive_mutex::unlock();
        if (((uVar5 & 1) != 0) && (puVar19 != (uint *)0x0)) {
          FUN_7103542d90(puVar19,2,param_3,param_4,(long ****)pcVar10,param_6,param_7,param_8);
        }
      }
      pcVar9 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_70,local_78,(byte *)"model.numdlb");
      if ((uint)local_70 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_70,(long *********)pcVar9,param_4,
                       (long ****)pcVar10,param_6,param_7,param_8);
      }
      if (((uint)local_70 == 0xffffff) ||
         (lVar13 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar13 + 0x40) + 4) <= (uint)local_70)) {
        local_70 = 0;
      }
      else {
        local_70 = *(ulong *)(*(long *)(lVar13 + 0x60) + (local_70 & 0xffffffff) * 0x20) &
                   0xffffffffff;
      }
      lVar13 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar10 = FUN_7103542240;
      param_4 = (byte ****)&DAT_00000008;
      puVar7 = bsearch(&local_70,*(void **)(lVar13 + 0x20),
                       (ulong)*(uint *)(*(long *)(lVar13 + 8) + 8),8,FUN_7103542240);
      local_58[0] = 0xffffff;
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = (uint)((ulong)*puVar7 >> 0x20);
        uVar14 = uVar5 >> 8;
        if ((uVar14 != 0xffffff) &&
           (uVar2 = *(uint *)(*(long *)(lVar13 + 8) + 4), local_58[0] = uVar5 >> 8,
           uVar2 < uVar14 || uVar2 == local_58[0])) {
          local_58[0] = 0xffffff;
        }
      }
      param_3 = (long *********)&DAT_00000004;
      FUN_71035c2890(&local_70,local_58,(long *********)&DAT_00000004,param_4,(long ****)pcVar10,
                     param_6,param_7,param_8);
      plVar6 = local_68;
      uVar18 = local_70;
      local_70 = 0;
      local_68 = (long *)0x0;
      *puVar17 = uVar18;
      puVar7 = (undefined8 *)(lVar11 + uVar16 * 0x1240 + 0x38);
      plVar20 = (long *)*puVar7;
      *puVar7 = plVar6;
      uVar8 = extraout_x1_04;
      if (plVar20 != (long *)0x0) {
        plVar6 = plVar20 + 1;
        do {
          lVar13 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
          std::__shared_weak_count::__release_weak();
          uVar8 = extraout_x1_05;
        }
      }
      if (local_68 != (long *)0x0) {
        plVar6 = local_68 + 1;
        do {
          lVar13 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
          uVar8 = extraout_x1_06;
        }
      }
      if (*puVar17 != 0) {
        FUN_71035597d0(puVar17,uVar8,(long ****)param_3,param_4,(long ****)pcVar10,param_6,param_7,
                       param_8);
        plVar6 = (long *)*puVar17;
        plVar20 = (long *)*puVar7;
        if (plVar20 != (long *)0x0) {
          plVar1 = plVar20 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        (**(code **)(*plVar6 + 0x78))();
        (**(code **)(*(long *)*puVar17 + 0xa8))((long *)*puVar17,1);
        if (plVar20 != (long *)0x0) {
          plVar6 = plVar20 + 1;
          do {
            lVar13 = *plVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = lVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      lVar13 = DAT_7105332f20;
      uVar16 = (ulong)local_78[0];
      if (local_78[0] != 0xffffff) {
        if (local_78[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar11 = *(long *)(lVar13 + 0x40);
          if ((*(byte *)(lVar11 + uVar16 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar13,(int *)(lVar11 + uVar16 * 0x48),(long ****)param_3,param_4,
                           (long ****)pcVar10,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
        }
        local_78[0] = 0xffffff;
      }
    }
    lVar13 = DAT_7105332f20;
    if (param_2 == 0xffffff) {
      return;
    }
    if (param_2 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar11 = *(long *)(lVar13 + 0x40);
      if ((*(byte *)(lVar11 + (ulong)param_2 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar13,(int *)(lVar11 + uVar15 * 0x48),(long ****)param_3,param_4,
                       (long ****)pcVar10,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
    }
  }
  lVar13 = DAT_7105332f20;
  if (param_2 < *(uint *)(DAT_7105332f20 + 0x48)) {
    std::recursive_mutex::lock();
    lVar11 = *(long *)(lVar13 + 0x40);
    if ((*(byte *)(lVar11 + uVar15 * 0x48 + 8) & 1) != 0) {
      FUN_710353f5a0(lVar13,(int *)(lVar11 + uVar15 * 0x48),(long ****)param_3,param_4,
                     (long ****)pcVar10,param_6,param_7,param_8);
    }
    std::recursive_mutex::unlock();
  }
  return;
}

