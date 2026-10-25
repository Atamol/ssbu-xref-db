// addr:      7101706100
// offset:    0x1706100
// name:      FUN_7101706100
// mangled:   
// signature: undefined8 __cdecl FUN_7101706100(long param_1, undefined8 * param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7101706100(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined8 *puVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long ***local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined6 uStack_7b8;
  undefined2 local_7b2;
  undefined6 uStack_7b0;
  undefined1 auStack_7a8 [704];
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  uint local_480;
  undefined4 local_47c;
  byte local_478 [64];
  undefined1 auStack_438 [120];
  undefined8 auStack_3c0 [90];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long ****local_80;
  undefined4 local_78;
  undefined4 local_6c [3];
  
  *(undefined8 *)(param_1 + 0x2948) = 0;
  lVar14 = DAT_710533a0a0;
  lVar11 = *(long *)(DAT_710533a0a0 + 0x30);
  if (lVar11 == 0) {
    return 0;
  }
  uVar4 = SUB84(param_4,0);
  pppplVar8 = param_3;
  pppplVar9 = param_5;
  puVar10 = param_6;
  std::recursive_mutex::lock();
  plVar16 = *(long **)(lVar11 + 0x28);
  plVar6 = plVar16 + 0x106;
  if (*(long **)(lVar11 + 0x18) < plVar6) {
    plVar16 = *(long **)(lVar11 + 0x10);
    plVar6 = plVar16 + 0x106;
    if (*(long **)(lVar11 + 0x20) < plVar6) {
      std::recursive_mutex::unlock();
      return 0;
    }
  }
  *(long **)(lVar11 + 0x28) = plVar6;
  *plVar16 = 0;
  plVar16[1] = 0;
  if (*(long *)(lVar11 + 0x30) == 0) {
    *(long **)(lVar11 + 0x30) = plVar16;
  }
  else {
    *plVar16 = *(long *)(lVar11 + 0x38);
    *(long **)(*(long *)(lVar11 + 0x38) + 8) = plVar16;
  }
  *(long **)(lVar11 + 0x38) = plVar16;
  *(undefined8 *)(plVar16 + 9) = 0;
  plVar16[2] = (long)&PTR_FUN_710509dfd8;
  plVar16[3] = 0;
  plVar16[4] = (long)"TaskReplay";
  *(undefined4 *)(plVar16 + 5) = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
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
  iVar1 = DAT_710593b000;
  iVar5 = DAT_710593b000 + 1;
  *(int *)(plVar16 + 5) = DAT_710593b000;
  DAT_710593b000 = iVar5;
  if (iVar1 == 0) {
    DAT_710593b000 = 2;
    *(undefined4 *)(plVar16 + 5) = 1;
  }
  plVar16[2] = (long)&PTR_FUN_710509e0a0;
  plVar16[0x18] = 0;
  plVar16[6] = (long)(plVar16 + 0x1a);
  *(undefined4 *)(plVar16 + 7) = 0x760;
  std::recursive_mutex::unlock();
  plVar6 = (long *)FUN_710392e290(0x10,0x28,pppplVar8,param_4,pppplVar9,puVar10,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6c[0] = 0;
      local_7d0 = (long ***)&DAT_00000028;
      pppplVar8 = &local_7d0;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x28,pppplVar8,param_4,pppplVar9,puVar10,param_7,
                                          param_8), plVar6 != (long *)0x0)) goto LAB_71017062e4;
    }
    plVar6 = (long *)0x0;
  }
LAB_71017062e4:
  *(undefined4 *)(plVar6 + 1) = 1;
  *plVar6 = (long)&PTR_FUN_710509ca08;
  plVar6[4] = 0;
  plVar6[2] = param_1;
  plVar6[3] = (long)FUN_7101700500;
  std::recursive_mutex::lock();
  lVar11 = plVar16[0x11];
  if (lVar11 != 0) {
    sVar3 = *(short *)(lVar11 + 8) + -1;
    *(short *)(lVar11 + 8) = sVar3;
    if ((sVar3 < 1) && ((long *)plVar16[0x11] != (long *)0x0)) {
      (**(code **)(*(long *)plVar16[0x11] + 8))();
    }
    plVar16[0x11] = 0;
  }
  plVar16[0x11] = (long)plVar6;
  if (plVar6 == (long *)0x0) {
    std::recursive_mutex::unlock();
  }
  else {
    *(short *)(plVar6 + 1) = (short)plVar6[1] + 1;
    std::recursive_mutex::unlock();
    sVar3 = (short)plVar6[1] + -1;
    *(short *)(plVar6 + 1) = sVar3;
    if (sVar3 < 1) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
  }
  local_7d0 = (long ***)((ulong)local_7d0 & 0xffffffffffffff00);
  FUN_710172a900((undefined2 *)&local_7c8);
  memset(auStack_438,0,0x348);
  FUN_710143c4d0(auStack_3c0);
  local_78 = 0;
  local_80 = (long ****)0x0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_7c8 = *param_2;
  local_7c0 = param_2[1];
  uStack_7b0 = (undefined6)((ulong)*(undefined8 *)((long)param_2 + 0x16) >> 0x10);
  uStack_7b8 = (undefined6)param_2[2];
  local_7b2 = (undefined2)((ulong)param_2[2] >> 0x30);
  FUN_71017005f0((long)auStack_7a8,(long)(param_2 + 4));
  local_4e8 = param_2[0x5c];
  local_4e0 = param_2[0x5d];
  local_4d8 = param_2[0x5e];
  local_4d0 = param_2[0x5f];
  local_4c8 = param_2[0x60];
  local_4c0 = param_2[0x61];
  local_4b8 = param_2[0x62];
  local_4b0 = param_2[99];
  local_4a8 = param_2[100];
  local_4a0 = param_2[0x65];
  local_498 = param_2[0x66];
  local_490 = param_2[0x67];
  local_488 = param_2[0x68];
  if (&local_7c8 != param_2) {
    uVar7 = 0;
    while( true ) {
      pbVar12 = (byte *)((long)param_2 + uVar7 + 0x350);
      bVar2 = *pbVar12;
      if (bVar2 == 0) break;
      local_478[uVar7] = bVar2;
      if (0x3e < (int)uVar7 + 1U) {
        uVar7 = (ulong)((int)uVar7 + 1);
        break;
      }
      bVar2 = pbVar12[1];
      if (bVar2 == 0) {
        uVar7 = uVar7 + 1;
        break;
      }
      local_478[uVar7 + 1] = bVar2;
      uVar7 = uVar7 + 2;
    }
    local_478[uVar7 & 0xffffffff] = 0;
    uVar13 = (uint)local_478[0];
    local_480 = 0x811c9dc5;
    local_47c = (undefined4)uVar7;
    if (local_478[0] != 0) {
      pbVar12 = local_478;
      do {
        pbVar12 = pbVar12 + 1;
        local_480 = local_480 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar12;
      } while (uVar13 != 0);
    }
  }
  memcpy(auStack_438,param_5,0x348);
  local_f0 = *param_6;
  local_e8 = param_6[1];
  local_e0 = param_6[2];
  local_d8 = param_6[3];
  local_d0 = param_6[4];
  local_c8 = param_6[5];
  local_c0 = param_6[6];
  local_b8 = param_6[7];
  local_b0 = param_6[8];
  local_a8 = param_6[9];
  local_a0 = param_6[10];
  local_98 = param_6[0xb];
  local_90 = param_6[0xc];
  local_88 = param_6[0xd];
  local_80 = param_3;
  local_78 = uVar4;
  std::recursive_mutex::lock();
  if (0x75f < *(uint *)(plVar16 + 7)) {
    memcpy((void *)plVar16[6],&local_7d0,0x760);
  }
  std::recursive_mutex::unlock();
  iVar1 = (int)plVar16[5];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar14 = *(long *)(lVar14 + 0x30);
  if (lVar14 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  lVar14 = *(long *)(lVar14 + 0x30);
  do {
    if (lVar14 == 0) {
      uVar15 = 0;
LAB_710170663c:
      std::recursive_mutex::unlock();
      return uVar15;
    }
    if (*(int *)(lVar14 + 0x28) == iVar1) {
      std::recursive_mutex::lock();
      if (*(char *)(lVar14 + 0x80) == '\0') {
        *(undefined1 *)(lVar14 + 0x80) = 1;
      }
      std::recursive_mutex::unlock();
      uVar15 = 1;
      goto LAB_710170663c;
    }
    lVar14 = *(long *)(lVar14 + 8);
  } while( true );
}

