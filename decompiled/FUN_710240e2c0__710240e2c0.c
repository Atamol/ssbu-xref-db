// addr:      710240e2c0
// offset:    0x240e2c0
// name:      FUN_710240e2c0
// mangled:   
// signature: undefined __cdecl FUN_710240e2c0(int param_1)


void FUN_710240e2c0(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined **local_50;
  long *local_48;
  undefined8 local_40;
  char local_38;
  
  if (param_1 - 3U < 3) {
    uVar12 = *(undefined4 *)(&DAT_71045465c8 + (long)(int)(param_1 - 3U) * 4);
  }
  else {
    uVar12 = 0;
  }
  if (*(char *)(*DAT_710593b438 + 1) == '\0') {
    DAT_7105329f48 = param_1;
    return;
  }
  local_38 = '\0';
  local_48 = (long *)0x0;
  local_40 = 0x87650000000000;
  local_50 = &PTR_FUN_710523ceb8;
  DAT_7105329f48 = param_1;
  if (*(char *)(*DAT_710593b438 + 1) != '\0') {
    FUN_71039609c0("BGM_Stage",(long)&local_50);
    if (local_40._4_4_ != 0x876500) goto LAB_710240e478;
  }
  if (((DAT_7106dd53a8 != '\x01') || ((int)local_40 != DAT_7106dd53ac)) || (local_38 != '\0'))
  goto LAB_710240e478;
  if (local_48 == (long *)0x0) {
    return;
  }
  uVar10 = (**(code **)(*local_48 + 0x20))();
  plVar9 = local_48;
  if ((uVar10 & 1) != 0) goto LAB_710240e478;
  std::recursive_mutex::lock();
  lVar8 = DAT_7106dd5408;
  uVar3 = *(uint *)(DAT_7106dd5408 + 0x18);
  uVar4 = *(uint *)(DAT_7106dd5408 + 0x14);
  uVar11 = (ulong)uVar4;
  uVar10 = (ulong)(uVar4 + 0x20) + 8;
  if (uVar4 < uVar3) {
    if (uVar10 < uVar3) goto LAB_710240e414;
  }
  else {
    if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar10) {
      if (uVar3 < 0x29) goto LAB_710240e470;
      *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar11) = 0x64716e62;
      uVar11 = 0;
    }
LAB_710240e414:
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 8) + uVar11);
    *(undefined4 *)(puVar1 + 4) = uVar12;
    *puVar1 = 0x2070716e62;
    puVar1[1] = 0x8756c6f76;
    puVar1[2] = plVar9;
    *(undefined4 *)((long)puVar1 + 0x24) = 0;
    uVar4 = *(uint *)(lVar8 + 0x10);
    uVar3 = (int)uVar11 + 0x28;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = uVar3 / uVar4;
    }
    *(uint *)(lVar8 + 0x14) = uVar3 - uVar7 * uVar4;
    if (plVar9 != (long *)0x0) {
      piVar2 = (int *)((long)plVar9 + 0x3c);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
LAB_710240e470:
  std::recursive_mutex::unlock();
LAB_710240e478:
  if (((local_48 != (long *)0x0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_40 == DAT_7106dd53ac)
     ) {
    local_48 = local_48 + 7;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(local_48,0x10);
      if (bVar6) {
        *(int *)local_48 = (int)*local_48 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return;
}

