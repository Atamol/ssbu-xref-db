// addr:      7101704460
// offset:    0x1704460
// name:      FUN_7101704460
// mangled:   
// signature: undefined8 __cdecl FUN_7101704460(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101704460(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined4 local_54;
  
  pppplVar7 = (long ****)&local_80;
  pppplVar6 = param_3;
  uVar4 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),(undefined1 *)*param_2);
  uVar3 = (uint)uVar4;
  if ((int)uVar3 < 0) {
    return 0;
  }
  if ((~uVar3 & 0xff) == 0) {
    return 0;
  }
  if (((ulong)param_3 & 1) != 0) {
    if (0x62 < (uVar3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = param_1 + (ulong)(uVar3 & 0xff) * 0x20;
    *(undefined8 *)(lVar9 + 0xc0) = *param_2;
    *(undefined4 *)(lVar9 + 200) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(lVar9 + 0xcc) = *(undefined4 *)((long)param_2 + 0xc);
    lVar8 = 0;
    iVar12 = 0;
    *(undefined4 *)(lVar9 + 0xd0) = *(undefined4 *)(param_2 + 2);
    do {
      uVar4 = *(ulong *)(param_1 + lVar8 + 0xc0);
      iVar1 = iVar12;
      if (((uVar4 & 0xff00000000000000) == 0xc100000000000000 && (uVar4 & 0xffffffffff) != 0) &&
         (iVar1 = *(int *)(param_1 + lVar8 + 200), iVar1 <= iVar12)) {
        iVar1 = iVar12;
      }
      iVar12 = iVar1;
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 0xc60);
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 8);
    uVar4 = FUN_7101739120(*(long *)(lVar8 + 0xb0),1000);
    iVar12 = iVar12 - (int)uVar4;
    if (iVar12 < 0) {
      iVar12 = iVar12 + 1;
    }
    iVar12 = (int)uVar4 + (iVar12 >> 1);
    uVar4 = FUN_7101739120(*(long *)(lVar8 + 0xb0),0x3eb);
    lVar8 = 0;
    iVar1 = (int)uVar4;
    if (iVar12 <= (int)uVar4) {
      iVar1 = iVar12;
    }
    do {
      lVar9 = param_1 + lVar8;
      if ((*(ulong *)(lVar9 + 0xc0) & 0xff00000000000000) != 0xc100000000000000 ||
          (*(ulong *)(lVar9 + 0xc0) & 0xffffffffff) == 0) {
        *(int *)(lVar9 + 200) = iVar1;
        *(int *)(lVar9 + 0xd0) = iVar1;
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 0xc60);
  }
  lVar8 = DAT_710533a0a0;
  lVar9 = *(long *)(DAT_710533a0a0 + 0x30);
  if (lVar9 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  plVar13 = *(long **)(lVar9 + 0x28);
  plVar5 = plVar13 + 0x1f;
  if (*(long **)(lVar9 + 0x18) < plVar5) {
    plVar13 = *(long **)(lVar9 + 0x10);
    plVar5 = plVar13 + 0x1f;
    if (*(long **)(lVar9 + 0x20) < plVar5) {
      std::recursive_mutex::unlock();
      return 0;
    }
  }
  *(long **)(lVar9 + 0x28) = plVar5;
  *plVar13 = 0;
  plVar13[1] = 0;
  if (*(long *)(lVar9 + 0x30) == 0) {
    *(long **)(lVar9 + 0x30) = plVar13;
  }
  else {
    *plVar13 = *(long *)(lVar9 + 0x38);
    *(long **)(*(long *)(lVar9 + 0x38) + 8) = plVar13;
  }
  *(long **)(lVar9 + 0x38) = plVar13;
  *(undefined8 *)(plVar13 + 9) = 0;
  plVar13[2] = (long)&PTR_FUN_710509dfd8;
  plVar13[3] = 0;
  plVar13[4] = (long)"TaskRating";
  *(undefined4 *)(plVar13 + 5) = 0;
  plVar13[6] = 0;
  plVar13[7] = 0;
  *(undefined4 *)(plVar13 + 8) = 1;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar13 + 9));
  *(undefined1 *)((long)plVar13 + 0x72) = 0;
  *(undefined2 *)(plVar13 + 0xe) = 0;
  plVar13[0xd] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar13 + 0x74));
  *(undefined1 *)(plVar13 + 0x10) = 0;
  plVar13[0x11] = 0;
  *(undefined1 *)(plVar13 + 0x12) = 0;
  plVar13[0x13] = 0;
  iVar12 = DAT_710593b000;
  iVar1 = DAT_710593b000 + 1;
  *(int *)(plVar13 + 5) = DAT_710593b000;
  DAT_710593b000 = iVar1;
  if (iVar12 == 0) {
    DAT_710593b000 = 2;
    *(undefined4 *)(plVar13 + 5) = 1;
  }
  plVar13[0x18] = 0;
  plVar13[2] = (long)&PTR_FUN_710509e018;
  plVar13[6] = (long)(plVar13 + 0x1a);
  *(undefined4 *)(plVar13 + 7) = 0x28;
  std::recursive_mutex::unlock();
  plVar5 = (long *)FUN_710392e290(0x10,0x28,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_80._0_7_ = 0x28;
      local_80._7_1_ = 0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x28,pppplVar7,param_4,param_5,param_6,param_7,
                                          param_8), plVar5 != (long *)0x0)) goto LAB_7101704738;
    }
    plVar5 = (long *)0x0;
  }
LAB_7101704738:
  *(undefined4 *)(plVar5 + 1) = 1;
  *plVar5 = (long)&PTR_FUN_710509ca08;
  plVar5[4] = 0;
  plVar5[2] = param_1;
  plVar5[3] = (long)FUN_71016ff100;
  std::recursive_mutex::lock();
  lVar9 = plVar13[0x11];
  if (lVar9 != 0) {
    sVar2 = *(short *)(lVar9 + 8) + -1;
    *(short *)(lVar9 + 8) = sVar2;
    if ((sVar2 < 1) && ((long *)plVar13[0x11] != (long *)0x0)) {
      (**(code **)(*(long *)plVar13[0x11] + 8))();
    }
    plVar13[0x11] = 0;
  }
  plVar13[0x11] = (long)plVar5;
  if (plVar5 == (long *)0x0) {
    std::recursive_mutex::unlock();
  }
  else {
    *(short *)(plVar5 + 1) = (short)plVar5[1] + 1;
    std::recursive_mutex::unlock();
    sVar2 = (short)plVar5[1] + -1;
    *(short *)(plVar5 + 1) = sVar2;
    if (sVar2 < 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  local_61 = (undefined1)param_2[3];
  uStack_60 = (undefined7)((ulong)param_2[3] >> 8);
  local_69 = (undefined1)param_2[2];
  uStack_68 = (undefined7)((ulong)param_2[2] >> 8);
  local_71 = (undefined1)param_2[1];
  uStack_70 = (undefined7)((ulong)param_2[1] >> 8);
  local_80._7_1_ = (undefined1)*param_2;
  uStack_78 = (undefined7)((ulong)*param_2 >> 8);
  std::recursive_mutex::lock();
  if (0x27 < *(uint *)(plVar13 + 7)) {
    puVar10 = (undefined1 *)plVar13[6];
    *puVar10 = 1;
    *(ulong *)(puVar10 + 1) = CONCAT17(local_80._7_1_,(undefined7)local_80);
    *(ulong *)(puVar10 + 0x20) = CONCAT71(uStack_60,local_61);
    *(ulong *)(puVar10 + 0x19) = CONCAT17(local_61,uStack_68);
    *(ulong *)(puVar10 + 0x11) = CONCAT17(local_69,uStack_70);
    *(ulong *)(puVar10 + 9) = CONCAT17(local_71,uStack_78);
  }
  std::recursive_mutex::unlock();
  iVar12 = (int)plVar13[5];
  *(int *)(param_1 + 0x10) = iVar12;
  if (iVar12 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x30);
  if (lVar8 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  lVar8 = *(long *)(lVar8 + 0x30);
  uVar11 = 0;
  if (lVar8 != 0) {
    do {
      if (*(int *)(lVar8 + 0x28) == iVar12) {
        std::recursive_mutex::lock();
        if (*(char *)(lVar8 + 0x80) == '\0') {
          *(undefined1 *)(lVar8 + 0x80) = 1;
        }
        std::recursive_mutex::unlock();
        uVar11 = 1;
        goto LAB_71017048c0;
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != 0);
    uVar11 = 0;
  }
LAB_71017048c0:
  std::recursive_mutex::unlock();
  return uVar11;
}

