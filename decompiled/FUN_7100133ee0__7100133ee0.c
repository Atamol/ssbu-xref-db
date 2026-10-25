// addr:      7100133ee0
// offset:    0x133ee0
// name:      FUN_7100133ee0
// mangled:   
// signature: undefined __cdecl FUN_7100133ee0(long * param_1, long param_2, uint param_3)


void FUN_7100133ee0(long *param_1,long param_2,uint param_3)

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
  undefined **local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [132];
  
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = param_1 + 0x12;
    FUN_710013ba30((long)plVar8);
  }
  local_f0 = local_e4;
  local_108 = &PTR_FUN_7104f4a288;
  local_100 = &DAT_7104497848;
  local_f8 = &DAT_7104f4ea38;
  local_e8 = 0x80;
  FUN_7100135780((long)&local_f8);
  __dest = local_f0;
  local_f8 = &DAT_7104f4ea08;
  (*(code *)local_108[3])(&local_108);
  puVar3 = local_100;
  if (__dest != local_100) {
    (*(code *)local_108[3])(&local_108);
    lVar2 = 0;
    do {
      if (local_100[lVar2] == '\0') goto LAB_710013400c;
      if (local_100[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_710013400c;
      }
      if (local_100[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_710013400c;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_710013400c:
    iVar1 = (int)lVar2;
    if (local_e8 <= (int)lVar2) {
      iVar1 = local_e8 + -1;
    }
    memcpy(__dest,puVar3,(long)iVar1);
    __dest[iVar1] = 0;
  }
  local_f8 = &DAT_7104f4e978;
  if (0 < (int)param_3) {
    FUN_7100135780((long)&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_71001340c8;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_71001340c8;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_71001340c8;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_71001340c8:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
  }
  (**(code **)(param_1[4] + 0x18))(param_1 + 4);
  FUN_7100135880((long *)&local_f8);
  FUN_71001386a0(param_2,&local_f8);
  *local_f0 = 0;
  if (0 < (int)param_3) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_7100134208;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100134208;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100134208;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100134208:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_7100135880((long *)&local_f8);
  FUN_71001386a0(param_2,&local_f8);
  *local_f0 = 0;
  if ((int)param_3 < 1) {
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    *local_f0 = 0;
    lVar2 = param_1[8];
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_710013438c;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_710013438c;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_710013438c;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_710013438c:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    *local_f0 = 0;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_71001344bc;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_71001344bc;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_71001344bc;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_71001344bc:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
    lVar2 = param_1[8];
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x20) + 0x18))((long *)(lVar2 + 0x20));
  }
  FUN_7100135880((long *)&local_f8);
  FUN_71001386a0(param_2,&local_f8);
  *local_f0 = 0;
  if ((int)param_3 < 1) {
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    puVar3 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_7100134640;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100134640;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100134640;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100134640:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    *local_f0 = 0;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_7100134778;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100134778;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100134778;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100134778:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puVar3 = local_f0 + (int)(uVar5 + uVar4);
  }
  *puVar3 = 0;
  (**(code **)(*param_1 + 0x70))(param_1);
  FUN_7100135880((long *)&local_f8);
  FUN_71001386a0(param_2,&local_f8);
  *local_f0 = 0;
  if ((int)param_3 < 1) {
    (**(code **)(*param_1 + 0x78))(param_1);
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    puVar3 = local_f0;
  }
  else {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_71001348ec;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_71001348ec;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_71001348ec;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_71001348ec:
    uVar4 = (uint)lVar2;
    uVar5 = param_3;
    if ((int)(local_e8 - uVar4) <= (int)param_3) {
      uVar5 = local_e8 + ~uVar4;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((uVar5 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar4;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    local_f0[(int)(uVar5 + uVar4)] = 0;
    (**(code **)(*param_1 + 0x78))(param_1);
    FUN_7100135880((long *)&local_f8);
    FUN_71001386a0(param_2,&local_f8);
    *local_f0 = 0;
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar2 = 0;
    do {
      if (local_f0[lVar2] == '\0') goto LAB_7100134a1c;
      if (local_f0[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_7100134a1c;
      }
      if (local_f0[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_7100134a1c;
      }
      uVar7 = lVar2 + 2;
      lVar2 = lVar2 + 3;
    } while (uVar7 >> 0x13 == 0);
    lVar2 = 0;
LAB_7100134a1c:
    uVar5 = (uint)lVar2;
    if ((int)(local_e8 - uVar5) <= (int)param_3) {
      param_3 = local_e8 + ~uVar5;
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
          *(undefined4 *)(local_f0 + lVar6) = 0x20202020;
        } while (uVar7 - (uVar7 & 3) != lVar2);
      }
      if ((param_3 & 3) != 0) {
        lVar6 = -(uVar7 & 3);
        puVar3 = local_f0 + lVar2 + (int)uVar5;
        do {
          lVar6 = lVar6 + 1;
          *puVar3 = 0x20;
          puVar3 = puVar3 + 1;
        } while (lVar6 != 0);
      }
    }
    puVar3 = local_f0 + (int)(param_3 + uVar5);
  }
  *puVar3 = 0;
  (**(code **)(*param_1 + 0x80))(param_1,4);
  FUN_7100135880((long *)&local_f8);
  FUN_71001386a0(param_2,&local_f8);
  if (plVar8 != (long *)0x0) {
    FUN_710013ba40((long)plVar8);
  }
  return;
}

