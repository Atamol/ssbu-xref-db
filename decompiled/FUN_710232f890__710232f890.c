// addr:      710232f890
// offset:    0x232f890
// name:      FUN_710232f890
// mangled:   
// signature: undefined __cdecl FUN_710232f890(long * param_1)


void FUN_710232f890(long *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined *local_60;
  code *local_58;
  undefined8 uStack_50;
  long local_48;
  long *local_40;
  
  lVar4 = *(long *)(DAT_71052c4c58 + 8);
  lVar5 = *(long *)(lVar4 + 0x88);
  if (*(int *)((long)param_1 + 0x194) == 0) {
    if ((((*(long *)(lVar5 + 0x9ff8) != 0) &&
         (uVar3 = FUN_71016f6340(lVar5 + 0xa010,*(long *)(lVar5 + 0x9ff8)), (~uVar3 & 0xff) != 0))
        && (*(long *)(lVar5 + 0x30) == 0)) && (*(int *)(lVar5 + 0x70) == 0)) {
      local_60 = &DAT_71050830a8;
      local_58 = FUN_710168d840;
      uStack_50 = 0;
      local_48 = lVar5;
      local_40 = (long *)&local_60;
      FUN_71003cb050((long *)&local_60,(long *)(lVar5 + 0x10));
      if (&local_60 == (undefined **)local_40) {
        (**(code **)(*local_40 + 0x20))();
      }
      else if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x28))();
      }
    }
  }
  else if (((*(long *)(lVar5 + 0x30) == 0) && (*(int *)(lVar5 + 0x70) == 0)) &&
          (*(long *)(lVar5 + 0x60) == 0)) {
    lVar5 = *param_1;
    if (((DAT_710593b2d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_710593b2d0), iVar2 != 0)) {
      DAT_710593b288 = 0;
      DAT_710593b280 = 0;
      __cxa_guard_release(&DAT_710593b2d0);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x28) + 0x60);
    piVar1 = (int *)&DAT_710593b280;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
    }
    if ((*piVar1 != -0x318c1af3) ||
       (iVar2 = strcmp((char *)(piVar1 + 2),"LocalTopScene"), iVar2 != 0)) {
      lVar5 = *(long *)(*param_1 + 0x28);
      if (*(long *)(lVar5 + 0x60) != 0) {
        return;
      }
      if (*(long *)(lVar5 + 0x30) != *(long *)(lVar5 + 0x38)) {
        return;
      }
      if (*(long *)(*(long *)(*param_1 + 0x20) + 0x10) != 0) {
        return;
      }
    }
    lVar5 = *(long *)(lVar4 + 0x88);
    lVar4 = *(long *)(lVar5 + 0x9ff8);
    if ((lVar4 == 0) || (uVar3 = FUN_71016f6340(lVar5 + 0xa010,lVar4), (~uVar3 & 0xff) == 0)) {
      if (0 < *(int *)((long)param_1 + 0x18c)) {
        *(int *)((long)param_1 + 0x18c) = *(int *)((long)param_1 + 0x18c) + -1;
      }
    }
    else {
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0x184) = 0;
      *(undefined8 *)((long)param_1 + 0x17c) = 0;
      *(undefined8 *)((long)param_1 + 0x174) = 0;
      *(undefined8 *)((long)param_1 + 0x16c) = 0;
      *(undefined8 *)((long)param_1 + 0x164) = 0;
      *(undefined8 *)((long)param_1 + 0x15c) = 0;
      *(undefined8 *)((long)param_1 + 0x154) = 0;
      *(undefined8 *)((long)param_1 + 0x144) = 0;
      *(undefined8 *)((long)param_1 + 0x14c) = 0;
      param_1[0x32] = 0xffffffff;
      *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x18c) = 0;
      *(undefined1 *)((long)param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 4;
    }
  }
  return;
}

