// addr:      71016a5980
// offset:    0x16a5980
// name:      FUN_71016a5980
// mangled:   
// signature: undefined __cdecl FUN_71016a5980(undefined * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71016a5980(undefined **param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long ****pppplVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long **pplVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long ***local_710;
  undefined **local_708;
  undefined4 *local_700;
  undefined **local_6f8;
  long ****local_6f0;
  undefined **local_6e8;
  undefined1 *puStack_6e0;
  undefined **local_6d8;
  undefined1 *puStack_6d0;
  undefined **local_6c8;
  undefined1 *puStack_6c0;
  undefined **local_6b8;
  undefined1 *puStack_6b0;
  undefined4 local_6a8;
  undefined **local_6a0;
  undefined1 *puStack_698;
  undefined1 *local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [776];
  undefined4 auStack_378 [7];
  undefined1 auStack_35c [20];
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [192];
  undefined1 auStack_268 [504];
  undefined2 local_70;
  undefined4 local_6c;
  
  lVar15 = DAT_710533a0a0;
  if (*(char *)(*(long *)(*(long *)(param_1[1] + 8) + 0x80) + 0x244) != '\0') {
    return;
  }
  if ((*(long *)(DAT_710533a0a0 + 0x30) != 0) &&
     (puVar10 = *(undefined **)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108),
     puVar10 != (undefined *)0x0)) {
    *(undefined ***)(puVar10 + 0x42a048) = param_1 + 0x4d30;
    param_1[0x4d31] = puVar10;
    (**(code **)(param_1[0x4d30] + 0x18))();
  }
  FUN_7101695c80(auStack_378);
  pppplVar9 = (long ****)0x308;
  memset(auStack_680,0,0x308);
  local_710 = (long ***)&PTR_FUN_7105083180;
  local_708 = &PTR_FUN_71050831a0;
  local_6f0 = (long ****)((ulong)auStack_378 | 2);
  local_6f8 = &PTR_FUN_71050831c0;
  puStack_6e0 = auStack_35c;
  local_6e8 = &PTR_FUN_71050831e0;
  puStack_6d0 = auStack_348;
  local_6d8 = &PTR_FUN_7105083200;
  puStack_6c0 = auStack_338;
  local_6c8 = &PTR_FUN_7105083220;
  puStack_6b0 = auStack_328;
  local_6b8 = &PTR_FUN_7105083240;
  puStack_698 = auStack_268;
  local_6a8 = 0;
  uStack_688 = 0x308;
  local_6a0 = &PTR_FUN_7105083260;
  local_700 = auStack_378;
  local_690 = auStack_680;
  FUN_7101697850((long)&local_708,(long *)&local_690);
  (*(code *)*local_6a0)(&local_6a0,&local_690);
  uVar3 = uStack_688._4_4_;
  if (((DAT_71052b92e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71052b92e0), iVar6 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  uVar1 = *(undefined4 *)(*DAT_710593b580 + 0x7300);
  uVar5 = FUN_7103755220();
  plVar7 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c = 0;
      local_710 = (long ***)&DAT_00000028;
      pppplVar9 = &local_710;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6c);
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x28,pppplVar9,param_4,param_5,param_6,param_7,
                                          param_8), plVar7 != (long *)0x0)) goto LAB_71016a5b5c;
    }
    plVar7 = (long *)0x0;
  }
LAB_71016a5b5c:
  *(undefined4 *)(plVar7 + 1) = 1;
  *plVar7 = (long)&PTR_FUN_7105083120;
  plVar7[2] = (long)param_1;
  plVar7[3] = (long)FUN_7101698000;
  plVar7[4] = 0;
  lVar14 = *(long *)(lVar15 + 0x30);
  if (lVar14 == 0) {
LAB_71016a5bc4:
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (plVar7 != (long *)0x0) goto LAB_71016a5e14;
LAB_71016a5e2c:
    if (iVar6 == 0) goto LAB_71016a5e94;
LAB_71016a5e30:
    local_710 = (long ***)&DAT_71050830a8;
    local_708 = (undefined **)FUN_71016a5f00;
    local_700 = (undefined4 *)0x0;
    local_6f8 = param_1;
    local_6f0 = &local_710;
    FUN_71003cb050((long *)&local_710,(long *)(param_1 + 2));
    pppplVar9 = local_6f0;
    if (&local_710 == local_6f0) goto LAB_71016a5ea8;
  }
  else {
    std::recursive_mutex::lock();
    plVar16 = *(long **)(lVar14 + 0x28);
    plVar11 = plVar16 + 0x23;
    if (*(long **)(lVar14 + 0x18) < plVar11) {
      plVar16 = *(long **)(lVar14 + 0x10);
      plVar11 = plVar16 + 0x23;
      if (*(long **)(lVar14 + 0x20) < plVar11) {
        std::recursive_mutex::unlock();
        goto LAB_71016a5bc4;
      }
    }
    *(long **)(lVar14 + 0x28) = plVar11;
    *plVar16 = 0;
    plVar16[1] = 0;
    if (*(long *)(lVar14 + 0x30) == 0) {
      *(long **)(lVar14 + 0x30) = plVar16;
    }
    else {
      *plVar16 = *(long *)(lVar14 + 0x38);
      *(long **)(*(long *)(lVar14 + 0x38) + 8) = plVar16;
    }
    *(long **)(lVar14 + 0x38) = plVar16;
    *(undefined8 *)(plVar16 + 9) = 0;
    plVar16[2] = (long)&PTR_FUN_710509dfd8;
    plVar16[3] = 0;
    plVar16[4] = (long)"Network";
    *(undefined4 *)(plVar16 + 5) = 0;
    plVar16[7] = 0;
    plVar16[6] = 0;
    *(undefined4 *)(plVar16 + 8) = 1;
    plVar16[10] = 0;
    plVar16[0xb] = 0;
    plVar16[0xc] = 0;
    std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar16 + 9));
    *(undefined1 *)((long)plVar16 + 0x72) = 0;
    *(undefined2 *)(plVar16 + 0xe) = 0;
    plVar16[0xd] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar16 + 0x74));
    *(undefined1 *)(plVar16 + 0x10) = 0;
    plVar16[0x11] = 0;
    *(undefined1 *)(plVar16 + 0x12) = 0;
    plVar16[0x13] = 0;
    iVar6 = DAT_710593b000;
    iVar4 = DAT_710593b000 + 1;
    *(int *)(plVar16 + 5) = DAT_710593b000;
    DAT_710593b000 = iVar4;
    if (iVar6 == 0) {
      DAT_710593b000 = 2;
      *(undefined4 *)(plVar16 + 5) = 1;
    }
    plVar16[2] = (long)&PTR_FUN_710523c4e0;
    *(undefined1 *)(plVar16 + 0x14) = 1;
    plVar16[0x1a] = 0;
    plVar16[6] = (long)(plVar16 + 0x1c);
    *(undefined4 *)(plVar16 + 7) = 0x38;
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    lVar14 = plVar16[0x11];
    if (lVar14 != 0) {
      sVar2 = *(short *)(lVar14 + 8) + -1;
      *(short *)(lVar14 + 8) = sVar2;
      if ((sVar2 < 1) && ((long *)plVar16[0x11] != (long *)0x0)) {
        (**(code **)(*(long *)plVar16[0x11] + 8))();
      }
      plVar16[0x11] = 0;
    }
    plVar16[0x11] = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      *(short *)(plVar7 + 1) = (short)plVar7[1] + 1;
    }
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    if (0x37 < *(uint *)(plVar16 + 7)) {
      puVar12 = (undefined8 *)plVar16[6];
      *puVar12 = 0x20000000008;
      puVar12[1] = 0x4000000080;
      puVar12[2] = 0x4000000040;
      *(undefined2 *)(puVar12 + 3) = 0x100;
      *(undefined2 *)((long)puVar12 + 0x1a) = local_70;
      *(undefined4 *)((long)puVar12 + 0x1c) = 0x18;
      *(undefined4 *)(puVar12 + 4) = uVar3;
      *(undefined4 *)((long)puVar12 + 0x2c) = 0x1f;
      *(undefined8 *)((long)puVar12 + 0x24) = 0;
      *(undefined4 *)(puVar12 + 6) = uVar1;
      *(char *)((long)puVar12 + 0x34) = (char)uVar5;
      *(undefined1 *)((long)puVar12 + 0x37) = local_6c._2_1_;
      *(undefined2 *)((long)puVar12 + 0x35) = (undefined2)local_6c;
    }
    std::recursive_mutex::unlock();
    iVar6 = (int)plVar16[5];
    if ((iVar6 != 0) && (lVar15 = *(long *)(lVar15 + 0x30), lVar15 != 0)) {
      std::recursive_mutex::lock();
      for (lVar15 = *(long *)(lVar15 + 0x30); lVar15 != 0; lVar15 = *(long *)(lVar15 + 8)) {
        if (*(int *)(lVar15 + 0x28) == iVar6) {
          std::recursive_mutex::lock();
          if (*(char *)(lVar15 + 0x80) == '\0') {
            *(undefined1 *)(lVar15 + 0x80) = 1;
          }
          std::recursive_mutex::unlock();
          break;
        }
      }
      std::recursive_mutex::unlock();
    }
    *(int *)(param_1 + 0xe) = iVar6;
    if (plVar7 == (long *)0x0) goto LAB_71016a5e2c;
LAB_71016a5e14:
    sVar2 = (short)plVar7[1] + -1;
    *(short *)(plVar7 + 1) = sVar2;
    if (0 < sVar2) goto LAB_71016a5e2c;
    (**(code **)(*plVar7 + 8))(plVar7);
    if (*(int *)(param_1 + 0xe) != 0) goto LAB_71016a5e30;
LAB_71016a5e94:
    pppplVar9 = (long ****)param_1[6];
    param_1[6] = (undefined *)0x0;
    if ((long ****)(param_1 + 2) == pppplVar9) {
LAB_71016a5ea8:
      pplVar13 = (*pppplVar9)[4];
      goto LAB_71016a5eb0;
    }
  }
  if (pppplVar9 == (long ****)0x0) {
    return;
  }
  pplVar13 = (*pppplVar9)[5];
LAB_71016a5eb0:
  (*(code *)pplVar13)();
  return;
}

