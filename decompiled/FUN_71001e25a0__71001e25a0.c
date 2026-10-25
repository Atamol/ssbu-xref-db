// addr:      71001e25a0
// offset:    0x1e25a0
// name:      FUN_71001e25a0
// mangled:   
// signature: undefined __cdecl FUN_71001e25a0(undefined8 * param_1, undefined4 param_2, long param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, long param_7, undefined8 param_8, undefined4 param_9, byte param_10)


void FUN_71001e25a0(undefined8 *param_1,undefined4 param_2,long param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                   undefined4 param_9,byte param_10)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined4 local_64;
  
  FUN_71001d38d0(param_1,param_2);
  *param_1 = &PTR_FUN_7104f57438;
  FUN_71001db470(param_1 + 0x14,(long *)(param_3 + 0x10),"JobConnectEndPoint");
  param_1[0x18] = 0;
  FUN_71001b41d0((undefined4 *)(param_1 + 0x19));
  param_1[0x1c] = param_3;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = param_9;
  puVar1 = param_1 + 0x1f;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1f] = puVar1;
  param_1[0x20] = puVar1;
  param_1[0x23] = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x27] = param_1 + 0x27;
  param_1[0x28] = param_1 + 0x27;
  param_1[0x23] = &PTR_FUN_7104f56058;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2d] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_88._0_4_ = 0x80010001;
  FUN_71001b4200((undefined4 *)(param_1 + 0x2e),(undefined4 *)&local_88);
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 0x36) = 1;
  *(undefined1 *)((long)param_1 + 0x1b4) = 0;
  param_1[0x35] = &PTR_FUN_7104f56058;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3f] = 0;
  param_1[0x39] = param_1 + 0x39;
  param_1[0x3a] = param_1 + 0x39;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  local_88 = (undefined **)CONCAT44(local_88._4_4_,0x80010001);
  FUN_71001b4200((undefined4 *)(param_1 + 0x40),(undefined4 *)&local_88);
  param_1[0x4a] = param_8;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = param_4;
  param_1[0x48] = param_5;
  param_1[0x49] = param_6;
  param_1[0x4b] = 0;
  FUN_7100219410(param_1 + 0x4c,param_7);
  *(undefined1 *)(param_1 + 0x4f) = 0;
  FUN_71001beb40(param_1 + 0x50);
  *(byte *)(param_1 + 100) = param_10 & 1;
  *(undefined2 *)(param_1 + 0x62) = 0;
  param_1[99] = param_1 + 0x4c;
  *(undefined1 *)((long)param_1 + 0x321) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x13] = 0x4000;
  if (param_1[0x48] != 0) {
    piVar2 = (int *)(param_1[0x48] + 8);
    iVar6 = *piVar2;
    if (iVar6 == *piVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_71001e27dc;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar3 = *piVar2, iVar3 != iVar6) {
        ClearExclusiveLocal();
        iVar6 = iVar3;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar6 = iVar3;
    } while (cVar4 != '\0');
  }
LAB_71001e27dc:
  if (param_1[0x49] != 0) {
    piVar2 = (int *)(param_1[0x49] + 8);
    iVar6 = *piVar2;
    if (iVar6 == *piVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_71001e2858;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while (iVar3 = *piVar2, iVar3 != iVar6) {
        ClearExclusiveLocal();
        iVar6 = iVar3;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar6 = iVar3;
    } while (cVar4 != '\0');
  }
LAB_71001e2858:
  local_64 = 0x10001;
  FUN_71001b4200((undefined4 *)&local_88,&local_64);
  FUN_71001b4300((undefined4 *)(param_1 + 0x19),(undefined4 *)&local_88);
  lVar8 = param_1[0x1c];
  if (*(char *)(lVar8 + 0x128) != '\0') {
    plVar7 = FUN_71001b1820(0x30);
    *plVar7 = 0;
    plVar7[1] = (long)puVar1;
    plVar7[2] = (long)&PTR_FUN_7104f56e28;
    plVar7[3] = (long)FUN_71001e29c0;
    plVar7[4] = 0;
    plVar7[5] = (long)&DAT_71044114cc;
    lVar8 = param_1[0x1f];
    *plVar7 = lVar8;
    *(long **)(lVar8 + 8) = plVar7;
    param_1[0x21] = param_1[0x21] + 1;
    lVar8 = param_1[0x1c];
    param_1[0x1f] = plVar7;
  }
  if ((*(char *)(lVar8 + 0x129) == '\0') ||
     ((iVar6 = FUN_71001bef20(lVar8 + 0x58), iVar6 == 0 &&
      (*(char *)(param_1[0x1c] + 0x128) != '\0')))) {
    lVar8 = param_1[0x4e];
  }
  else {
    plVar7 = FUN_71001b1820(0x30);
    *plVar7 = 0;
    plVar7[1] = (long)puVar1;
    plVar7[2] = (long)&PTR_FUN_7104f56e28;
    plVar7[3] = (long)FUN_71001e2a30;
    plVar7[4] = 0;
    plVar7[5] = (long)&DAT_71044114cc;
    lVar8 = param_1[0x1f];
    *plVar7 = lVar8;
    *(long **)(lVar8 + 8) = plVar7;
    param_1[0x1f] = plVar7;
    param_1[0x21] = param_1[0x21] + 1;
    lVar8 = param_1[0x4e];
  }
  if (lVar8 == 0) {
    pcStack_80 = FUN_71001e2a90;
  }
  else {
    pcStack_80 = FUN_71001e2b10;
  }
  local_88 = &PTR_FUN_7104f56e28;
  local_78 = 0;
  puStack_70 = &DAT_71044114cc;
  FUN_71001d3d60((long)param_1,(long)&local_88);
  return;
}

