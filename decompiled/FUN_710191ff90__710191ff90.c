// addr:      710191ff90
// offset:    0x191ff90
// name:      FUN_710191ff90
// mangled:   
// signature: undefined __cdecl FUN_710191ff90(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710191ff90(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  byte ***local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  byte local_b8 [64];
  undefined8 local_78;
  byte local_70 [64];
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
  FUN_7101e9c1f0(*(long *)(lVar12 + 0x1a8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e956e0((ushort *)(lVar12 + 0x1f8));
  FUN_71037790a0(*(long *)(*(long *)(*(long *)(param_1 + 0x188) + 0x80) + 0x28),1,param_3,param_4,
                 param_5,param_6,param_7,param_8);
  lVar12 = *(long *)(*(long *)(param_1 + 400) + 0x80);
  FUN_710259c9b0(*(long *)(*DAT_7105329f98 + 0x20),4,param_3,param_4,param_5,param_6,param_7,param_8
                );
  uVar4 = extraout_x1;
  if (*(int *)(lVar12 + 0x2c4) != -1) {
    FUN_710373b540(lVar12 + 0x298,0);
    *(undefined4 *)(lVar12 + 0x298) = 0;
    FUN_71039602c0(lVar12 + 0x2a0);
    *(undefined ***)(lVar12 + 0x2a0) = &PTR_FUN_7104f73d50;
    if (((*(long *)(lVar12 + 0x2a8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(lVar12 + 0x2b0) == DAT_7106dd53ac)) {
      piVar5 = (int *)(*(long *)(lVar12 + 0x2a8) + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(undefined8 *)(lVar12 + 0x2b0) = 0;
    *(undefined8 *)(lVar12 + 0x2b8) = 0;
    *(undefined8 *)(lVar12 + 0x2a0) = 0;
    *(undefined8 *)(lVar12 + 0x2a8) = 0;
    *(undefined8 *)(lVar12 + 0x2b0) = 0x87650000000000;
    *(undefined ***)(lVar12 + 0x2a0) = &PTR_FUN_7104f73d30;
    *(undefined8 *)(lVar12 + 0x2a8) = 0;
    *(undefined1 *)(lVar12 + 0x2b8) = 0;
    *(undefined8 *)(lVar12 + 0x2c0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + 0x2c8) = 0;
    *(undefined4 *)(lVar12 + 0x2d4) = 0;
    uVar4 = extraout_x1_00;
  }
  FUN_7101df1550(*(long *)(*(long *)(param_1 + 0x198) + 0x80),uVar4,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if ((*(char *)(param_1 + 0x1aa) != '\0') && (*(char *)(param_1 + 0x1a9) == '\0')) {
    local_d0 = (byte ***)&PTR_FUN_71050a6490;
    local_c8 = 1;
    lVar12 = *(long *)(param_2 + 8);
    for (uVar8 = 0; "SpiritsFacilityListScene"[uVar8] != 0; uVar8 = uVar8 + 2) {
      bVar1 = "SpiritsFacilityListScene"[uVar8 + 1];
      local_b8[uVar8] = "SpiritsFacilityListScene"[uVar8];
      if (bVar1 == 0) {
        uVar8 = uVar8 + 1;
        break;
      }
      local_b8[uVar8 + 1] = bVar1;
    }
    uVar6 = 0x811c9dc5;
    local_b8[uVar8 & 0xffffffff] = 0;
    uVar7 = (uint)local_b8[0];
    uVar9 = uVar6;
    if (local_b8[0] != 0) {
      pbVar10 = local_b8;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = uVar9 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar10;
      } while (uVar7 != 0);
    }
    local_c0 = CONCAT44((int)uVar8,uVar9);
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) {
      local_70[0] = 0;
      local_78 = (long ***)0x0;
    }
    else {
      uVar8 = 0;
      while( true ) {
        pbVar10 = (byte *)(lVar11 + 0x10 + uVar8);
        bVar1 = *pbVar10;
        if (bVar1 == 0) break;
        local_70[uVar8] = bVar1;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        bVar1 = pbVar10[1];
        if (bVar1 == 0) {
          uVar8 = uVar8 + 1;
          break;
        }
        local_70[uVar8 + 1] = bVar1;
        uVar8 = uVar8 + 2;
      }
      local_70[uVar8 & 0xffffffff] = 0;
      uVar9 = (uint)local_70[0];
      local_78 = (long ***)(uVar8 << 0x20);
      if (local_70[0] != 0) {
        pbVar10 = local_70;
        do {
          pbVar10 = pbVar10 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar10;
        } while (uVar9 != 0);
      }
      local_78 = (long ***)CONCAT44((int)uVar8,uVar6);
    }
    FUN_7103726240(*(long **)(lVar12 + 0x20),&local_c0,(long ****)&local_78,&local_d0,param_5,
                   param_6,param_7,param_8);
  }
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return;
}

