// addr:      71035ecf10
// offset:    0x35ecf10
// name:      FUN_71035ecf10
// mangled:   
// signature: undefined __cdecl FUN_71035ecf10(long * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71035ecf10(long *param_1,uint *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long ********local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 local_34;
  
  iVar8 = (int)param_3;
  *(int *)(param_1 + 0x23) = iVar8;
  *param_1 = (long)&PTR_FUN_7105232e80;
  param_1[3] = (long)&PTR_FUN_7105232dc0;
  param_1[4] = 0;
  param_1[7] = (long)&PTR_FUN_7105232d28;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 1;
  *(undefined1 *)((long)param_1 + 0x11c) = 1;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0x3f80000000000000;
  param_1[0x18] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0xe] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0;
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x78,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_58 = (long ********)&DAT_00000078;
      param_3 = &local_58;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x78,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_71035ed00c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_71035ed00c:
  *puVar5 = &PTR_FUN_7105232b78;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined2 *)(puVar5 + 3) = 3;
  *(undefined1 *)(puVar5 + 9) = 0xff;
  *(undefined2 *)(puVar5 + 10) = 0xff00;
  *(undefined8 *)((long)puVar5 + 0x52) = 0x10000000000;
  *(undefined4 *)((long)puVar5 + 0x5c) = 0x1000000;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  puVar5[0xd] = 0x4110000041880000;
  *(undefined4 *)((long)puVar5 + 0x1c) = 0;
  *(undefined1 *)(puVar5 + 4) = 0;
  *(undefined8 *)((long)puVar5 + 0x24) = 0;
  *(undefined4 *)((long)puVar5 + 0x4c) = 0;
  *(undefined1 *)((long)puVar5 + 0x5a) = 1;
  *(undefined4 *)((long)puVar5 + 0x2c) = 0;
  puVar5[8] = 0x3f80000000000000;
  *(undefined1 *)((long)puVar5 + 100) = 0;
  *(undefined4 *)(puVar5 + 0xe) = 0x41880000;
  puVar5[6] = 0;
  puVar5[7] = 0;
  plVar11 = (long *)param_1[0x1d];
  param_1[0x1c] = (long)(puVar5 + 3);
  param_1[0x1d] = (long)puVar5;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar8 == 5) {
    return;
  }
  std::recursive_mutex::lock();
  uVar6 = FUN_71035c25f0(*param_2,(byte *)"model.xmb");
  uVar10 = (uint)uVar6;
  if (uVar10 == 0xffffff) goto LAB_71035ed164;
  FUN_7103540a00(DAT_7105332f20,uVar10);
  if ((uVar10 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar6 & 0xffffffff) * 8 + 4) != '\0')) {
    uVar2 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar6 & 0xffffffff) * 8);
    if ((uVar2 == 0xffffff) ||
       ((*(uint *)(DAT_7105332f20 + 0x1c) <= uVar2 ||
        (puVar5 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar2 * 0x18),
        *(char *)((long)puVar5 + 0xc) == '\0' || puVar5 == (undefined8 *)0x0))))
    goto LAB_71035ed14c;
    pcVar7 = (char *)*puVar5;
  }
  else {
LAB_71035ed14c:
    pcVar7 = (char *)0x0;
  }
  FUN_71035e2f00((undefined1 *)param_1[0x1c],pcVar7,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103540b10(DAT_7105332f20,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_71035ed164:
  local_58 = (long ********)0x0;
  uStack_50 = 0xffffffff00000000;
  local_48 = iVar8;
  (**(code **)(*param_1 + 0x48))(param_1,&local_58,param_2);
  *(int *)(param_1 + 0x23) = iVar8;
  std::recursive_mutex::unlock();
  return;
}

