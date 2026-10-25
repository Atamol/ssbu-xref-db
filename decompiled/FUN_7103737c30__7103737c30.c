// addr:      7103737c30
// offset:    0x3737c30
// name:      FUN_7103737c30
// mangled:   
// signature: undefined __cdecl FUN_7103737c30(float param_1)


void FUN_7103737c30(float param_1)

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
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  undefined **local_50;
  long *local_48;
  undefined8 local_40;
  char local_38;
  
  fVar13 = DAT_7106dd51a0._4_4_;
  if (0.0 < param_1) {
    fVar13 = log10f(param_1);
    fVar13 = fVar13 * 20.0;
  }
  if (*(char *)(*DAT_710593b438 + 1) == '\0') {
    return;
  }
  local_48 = (long *)0x0;
  local_40 = 0x87650000000000;
  local_38 = '\0';
  local_50 = &PTR_FUN_710523cf30;
  iVar10 = FUN_7103960af0("Stage_Rev",(long)&local_50);
  if ((((iVar10 != 0) || (local_40._4_4_ != 0x876500)) || (DAT_7106dd53a8 != '\x01')) ||
     (((int)local_40 != DAT_7106dd53ac || (local_38 != '\0')))) goto LAB_7103737dd4;
  if (local_48 == (long *)0x0) {
    return;
  }
  uVar11 = (**(code **)(*local_48 + 0x20))();
  plVar9 = local_48;
  if ((uVar11 & 1) != 0) goto LAB_7103737dd4;
  std::recursive_mutex::lock();
  lVar8 = DAT_7106dd5408;
  uVar3 = *(uint *)(DAT_7106dd5408 + 0x18);
  uVar4 = *(uint *)(DAT_7106dd5408 + 0x14);
  uVar12 = (ulong)uVar4;
  uVar11 = (ulong)(uVar4 + 0x20) + 8;
  if (uVar4 < uVar3) {
    if (uVar11 < uVar3) goto LAB_7103737d74;
  }
  else {
    if (*(uint *)(DAT_7106dd5408 + 0x10) < uVar11) {
      if (uVar3 < 0x29) goto LAB_7103737dcc;
      *(undefined4 *)(*(long *)(DAT_7106dd5408 + 8) + uVar12) = 0x64716e62;
      uVar12 = 0;
    }
LAB_7103737d74:
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 8) + uVar12);
    *(float *)(puVar1 + 4) = fVar13;
    *puVar1 = 0x2070716e62;
    puVar1[1] = 0x867747370;
    puVar1[2] = plVar9;
    uVar4 = *(uint *)(lVar8 + 0x10);
    uVar3 = (int)uVar12 + 0x28;
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
LAB_7103737dcc:
  std::recursive_mutex::unlock();
LAB_7103737dd4:
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

