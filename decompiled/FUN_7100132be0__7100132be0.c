// addr:      7100132be0
// offset:    0x132be0
// name:      FUN_7100132be0
// mangled:   
// signature: undefined FUN_7100132be0(void)


void FUN_7100132be0(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined1 *__dest;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined **ppuStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  int iStack_e8;
  undefined1 auStack_e4 [132];
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1 + 0x12;
    FUN_710013ba30((long)plVar8);
  }
  FUN_7100133ee0(param_1,param_2,param_3);
  puStack_f0 = auStack_e4;
  ppuStack_108 = &PTR_FUN_7104f4a288;
  puStack_100 = &DAT_71044114cc;
  puStack_f8 = &DAT_7104f4ea38;
  iStack_e8 = 0x80;
  FUN_7100135780((long)&puStack_f8);
  __dest = puStack_f0;
  puStack_f8 = &DAT_7104f4ea08;
  (*(code *)ppuStack_108[3])(&ppuStack_108);
  puVar3 = puStack_100;
  if (__dest != puStack_100) {
    (*(code *)ppuStack_108[3])(&ppuStack_108);
    lVar2 = 0;
    do {
      if (puStack_100[lVar2] == '\0') goto LAB_7100132d1c;
      if (puStack_100[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100132d1c;
      }
      if (puStack_100[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100132d1c;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100132d1c:
    iVar1 = (int)lVar2;
    if (iStack_e8 <= (int)lVar2) {
      iVar1 = iStack_e8 + -1;
    }
    memcpy(__dest,puVar3,(long)iVar1);
    __dest[iVar1] = 0;
  }
  puStack_f8 = &DAT_7104f4e978;
  if (0 < (int)param_3) {
    FUN_7100135780((long)&puStack_f8);
    lVar2 = 0;
    do {
      if (puStack_f0[lVar2] == '\0') goto LAB_7100132dd8;
      if (puStack_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100132dd8;
      }
      if (puStack_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100132dd8;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100132dd8:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(iStack_e8 - uVar4) <= (int)param_3) {
      uVar5 = iStack_e8 + ~uVar4;
    }
    if (0 < (int)uVar5) {
      uVar7 = (ulong)uVar5;
      if (uVar7 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + (int)uVar4;
          lVar2 = lVar2 + 4;
          *(undefined4 *)(puStack_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = puStack_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puStack_f0[(int)(uVar5 + uVar4)] = 0;
  }
  FUN_7100135880((long *)&puStack_f8);
  FUN_71001386a0(param_2,&puStack_f8);
  *puStack_f0 = 0;
  if (0 < (int)param_3) {
    (**(code **)(puStack_f8 + 0x18))(&puStack_f8);
    lVar2 = 0;
    do {
      if (puStack_f0[lVar2] == '\0') goto LAB_7100132f00;
      if (puStack_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100132f00;
      }
      if (puStack_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100132f00;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100132f00:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(iStack_e8 - uVar4) <= (int)param_3) {
      uVar5 = iStack_e8 + ~uVar4;
    }
    if (0 < (int)uVar5) {
      uVar7 = (ulong)uVar5;
      if (uVar7 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + (int)uVar4;
          lVar2 = lVar2 + 4;
          *(undefined4 *)(puStack_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = puStack_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puStack_f0[(int)(uVar5 + uVar4)] = 0;
  }
  (**(code **)(*param_1 + 0xd0))(param_1);
  FUN_7100135880((long *)&puStack_f8);
  FUN_71001386a0(param_2,&puStack_f8);
  *puStack_f0 = 0;
  if ((int)param_3 < 1) {
    FUN_7100135880((long *)&puStack_f8);
    FUN_71001386a0(param_2,&puStack_f8);
    puVar3 = puStack_f0;
  }
  else {
    (**(code **)(puStack_f8 + 0x18))(&puStack_f8);
    lVar2 = 0;
    do {
      if (puStack_f0[lVar2] == '\0') goto LAB_7100133074;
      if (puStack_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100133074;
      }
      if (puStack_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100133074;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100133074:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(iStack_e8 - uVar4) <= (int)param_3) {
      uVar5 = iStack_e8 + ~uVar4;
    }
    if (0 < (int)uVar5) {
      uVar7 = (ulong)uVar5;
      if (uVar7 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + (int)uVar4;
          lVar2 = lVar2 + 4;
          *(undefined4 *)(puStack_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = puStack_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puStack_f0[(int)(uVar5 + uVar4)] = 0;
    FUN_7100135880((long *)&puStack_f8);
    FUN_71001386a0(param_2,&puStack_f8);
    *puStack_f0 = 0;
    (**(code **)(puStack_f8 + 0x18))(&puStack_f8);
    lVar2 = 0;
    do {
      if (puStack_f0[lVar2] == '\0') goto LAB_7100133194;
      if (puStack_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100133194;
      }
      if (puStack_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100133194;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100133194:
    uVar5 = (uint)lVar2;
    if ((int)(iStack_e8 - uVar5) <= (int)param_3) {
      param_3 = iStack_e8 + ~uVar5;
    }
    if (0 < (int)param_3) {
      uVar7 = (ulong)param_3;
      if (uVar7 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        do {
          lVar6 = lVar2 + (int)uVar5;
          lVar2 = lVar2 + 4;
          *(undefined4 *)(puStack_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((param_3 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = puStack_f0 + lVar2 + (int)uVar5;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puVar3 = puStack_f0 + (int)(param_3 + uVar5);
  }
  *puVar3 = 0;
  FUN_7100135880((long *)&puStack_f8);
  FUN_71001386a0(param_2,&puStack_f8);
  if (plVar8 != (long *)0x0) {
    FUN_710013ba40((long)plVar8);
  }
  return;
}

