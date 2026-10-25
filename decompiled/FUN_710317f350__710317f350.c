// addr:      710317f350
// offset:    0x317f350
// name:      FUN_710317f350
// mangled:   
// signature: undefined __cdecl FUN_710317f350(int * param_1, ulong param_2)


void FUN_710317f350(int *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *local_60;
  int *piStack_58;
  long *local_40;
  
  iVar7 = *param_1;
  if (iVar7 == 4) {
    if ((param_2 & 1) == 0) {
      lVar12 = *DAT_71052c50f8;
      lVar11 = *(long *)(lVar12 + 0x870);
      sVar5 = *(short *)((long)param_1 + 0x22);
      std::recursive_mutex::lock();
      if ((int)*(ulong *)(lVar12 + 0x450) != 0) {
        uVar8 = 0;
        uVar10 = *(ulong *)(lVar12 + 0x448);
        do {
          uVar1 = *(long *)(lVar12 + 0x458) + uVar8;
          uVar3 = 0;
          if (uVar10 != 0) {
            uVar3 = uVar1 / uVar10;
          }
          lVar2 = *(long *)(lVar12 + 0x468) + (uVar1 - uVar3 * uVar10) * 0x10;
          if ((*(int *)(lVar2 + 4) == 0) && (*(short *)(lVar2 + 8) == sVar5)) {
            bVar4 = false;
            goto joined_r0x00710317f574;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (*(ulong *)(lVar12 + 0x450) & 0xffffffff));
      }
      bVar4 = true;
joined_r0x00710317f574:
      if (lVar11 != 0) {
        std::recursive_mutex::unlock();
      }
      if (!bVar4) {
        return;
      }
    }
    if ((char)param_1[8] != '\0') {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    iVar7 = 1;
LAB_710317f484:
    *param_1 = iVar7;
    return;
  }
  if (iVar7 == 3) {
    if ((param_2 & 1) == 0) {
      return;
    }
    if (*(long **)(param_1 + 6) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 6) + 0x18))(&local_60);
      if (*(long **)(param_1 + 6) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 6) + 8))();
      }
      param_1[6] = 0;
      param_1[7] = 0;
    }
    FUN_71017566c0(*DAT_71052c50f8,(uint)*(ushort *)((long)param_1 + 0x22));
    iVar7 = 4;
    goto LAB_710317f484;
  }
  if (iVar7 != 1) {
    return;
  }
  *param_1 = 2;
  if (DAT_7105332f10 == -1) {
    uVar6 = 0;
  }
  else {
    uVar6 = nn::os::GetTlsValue();
  }
  *(undefined8 *)(param_1 + 4) = uVar6;
  if (DAT_710532f484 != -1) {
    nn::os::SetTlsValue(DAT_710532f484,1);
  }
  phx::Fiber::switch_to_fiber(*(long **)(param_1 + 2));
  if (DAT_710532f484 != -1) {
    nn::os::SetTlsValue(DAT_710532f484,0);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (*param_1 != 3) {
    return;
  }
  local_60 = &DAT_710517d248;
  piStack_58 = param_1;
  local_40 = (long *)&local_60;
  FUN_710353d5b0((undefined8 *)(param_1 + 6),(long *)&local_60,(long ****)0x1,(byte ****)0x0,
                 (long ****)"StageFiberedProcess",0x40000,in_x6,in_x7);
  if (&local_60 == (undefined **)local_40) {
    pcVar9 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_710317f534;
    pcVar9 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar9)();
LAB_710317f534:
  sVar5 = FUN_7101756570(DAT_71052c50f8);
  if ((char)param_1[8] == '\0') {
    *(short *)((long)param_1 + 0x22) = sVar5;
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(short *)((long)param_1 + 0x22) = sVar5;
  return;
}

