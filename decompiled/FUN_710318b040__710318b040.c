// addr:      710318b040
// offset:    0x318b040
// name:      FUN_710318b040
// mangled:   
// signature: undefined __cdecl FUN_710318b040(long * param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710318b040(long *param_1,long ****param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long ***local_48;
  undefined4 local_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = *(uint *)param_2;
  if (uVar2 == 0xffffff) {
    return;
  }
  if (*(uint *)(DAT_7105332f20 + 0x18) <= uVar2) {
    return;
  }
  if (*(char *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar2 * 8 + 4) == '\0') {
    return;
  }
  uVar2 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (ulong)uVar2 * 8);
  if (uVar2 == 0xffffff) {
    return;
  }
  if (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar2) {
    return;
  }
  plVar9 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar2 * 0x18);
  if (*(char *)((long)plVar9 + 0xc) == '\0' || plVar9 == (long *)0x0) {
    return;
  }
  if (*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar2 * 0x18 + 0xd) != '\x03') {
    return;
  }
  if (*plVar9 == 0) {
    return;
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_60 = (undefined8 *)0x0;
  FUN_710132e5f0((long *)&local_60,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar12 = local_58;
  plVar9 = local_58 + -6;
  std::string::assign((char *)(local_58 + -3));
  puVar6 = (undefined8 *)puVar12[-5];
  if (puVar6 < (undefined8 *)puVar12[-4]) {
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    lVar11 = puVar12[-5] + 0x20;
    puVar12[-5] = lVar11;
  }
  else {
    FUN_710132e830(plVar9,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar11 = puVar12[-5];
  }
  std::string::assign((char *)(lVar11 + -0x20));
  *(undefined4 *)(lVar11 + -8) = 2;
  puVar6 = (undefined8 *)puVar12[-5];
  if (puVar6 < (undefined8 *)puVar12[-4]) {
    *(undefined4 *)(puVar6 + 3) = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    lVar11 = puVar12[-5] + 0x20;
    puVar12[-5] = lVar11;
  }
  else {
    FUN_710132e830(plVar9,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar11 = puVar12[-5];
  }
  std::string::assign((char *)(lVar11 + -0x20));
  *(undefined4 *)(lVar11 + -8) = 1;
  FUN_710367a9f0(&local_68,(long *)&local_60,param_2,param_4,param_5,param_6,param_7,param_8);
  plVar9 = local_68;
  if (local_68 == (long *)0x0) {
    puVar6 = (undefined8 *)0x0;
    goto LAB_710318b23c;
  }
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x20,param_2,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&SUB_00000020;
      pppplVar8 = &local_48;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar6 != (undefined8 *)0x0)) goto LAB_710318b224;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_710318b224:
  *puVar6 = &DAT_7105060348;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = local_68;
LAB_710318b23c:
  local_68 = (long *)0x0;
  *param_1 = (long)plVar9;
  plVar9 = (long *)param_1[1];
  param_1[1] = (long)puVar6;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = local_68;
  local_68 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  puVar6 = local_60;
  puVar12 = local_58;
  if (local_60 != (undefined8 *)0x0) {
    while (puVar5 = puVar12, puVar5 != puVar6) {
      puVar12 = puVar5 + -6;
      if (((*(byte *)(puVar5 + -3) & 1) != 0) && (puVar5[-1] != 0)) {
        FUN_710392eb40(puVar5[-1]);
      }
      pbVar13 = (byte *)*puVar12;
      if (pbVar13 != (byte *)0x0) {
        pbVar10 = (byte *)puVar5[-5];
        if (pbVar10 == pbVar13) {
          puVar5[-5] = pbVar13;
          pbVar10 = pbVar13;
        }
        else {
          do {
            pbVar14 = pbVar10 + -0x20;
            if (((*pbVar14 & 1) != 0) && (*(ulong *)(pbVar10 + -0x10) != 0)) {
              FUN_710392eb40(*(ulong *)(pbVar10 + -0x10));
            }
            pbVar10 = pbVar14;
          } while (pbVar13 != pbVar14);
          pbVar10 = (byte *)*puVar12;
          puVar5[-5] = pbVar13;
        }
        if (pbVar10 != (byte *)0x0) {
          FUN_710392eb40((ulong)pbVar10);
        }
      }
    }
    if (local_60 != (undefined8 *)0x0) {
      local_58 = puVar6;
      FUN_710392eb40((ulong)local_60);
    }
  }
  return;
}

