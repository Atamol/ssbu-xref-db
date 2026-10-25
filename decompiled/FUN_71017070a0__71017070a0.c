// addr:      71017070a0
// offset:    0x17070a0
// name:      FUN_71017070a0
// mangled:   
// signature: undefined4 __cdecl FUN_71017070a0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_71017070a0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long ****pppplVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined4 local_44;
  
  lVar10 = DAT_710533a0a0;
  lVar7 = *(long *)(DAT_710533a0a0 + 0x30);
  if (lVar7 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  plVar11 = *(long **)(lVar7 + 0x28);
  plVar4 = plVar11 + 0x1d;
  if (*(long **)(lVar7 + 0x18) < plVar4) {
    plVar11 = *(long **)(lVar7 + 0x10);
    plVar4 = plVar11 + 0x1d;
    if (*(long **)(lVar7 + 0x20) < plVar4) {
      std::recursive_mutex::unlock();
      return 0;
    }
  }
  *(long **)(lVar7 + 0x28) = plVar4;
  *plVar11 = 0;
  plVar11[1] = 0;
  if (*(long *)(lVar7 + 0x30) == 0) {
    *(long **)(lVar7 + 0x30) = plVar11;
  }
  else {
    *plVar11 = *(long *)(lVar7 + 0x38);
    *(long **)(*(long *)(lVar7 + 0x38) + 8) = plVar11;
  }
  *(long **)(lVar7 + 0x38) = plVar11;
  *(undefined8 *)(plVar11 + 9) = 0;
  plVar11[2] = (long)&PTR_FUN_710509dfd8;
  plVar11[3] = 0;
  plVar11[4] = (long)"TaskReplay";
  *(undefined4 *)(plVar11 + 5) = 0;
  plVar11[6] = 0;
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 1;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[0xc] = 0;
  std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar11 + 9));
  *(undefined1 *)((long)plVar11 + 0x72) = 0;
  *(undefined2 *)(plVar11 + 0xe) = 0;
  plVar11[0xd] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar11 + 0x74));
  *(undefined1 *)(plVar11 + 0x10) = 0;
  plVar11[0x11] = 0;
  *(undefined1 *)(plVar11 + 0x12) = 0;
  plVar11[0x13] = 0;
  iVar1 = DAT_710593b000;
  iVar3 = DAT_710593b000 + 1;
  *(int *)(plVar11 + 5) = DAT_710593b000;
  DAT_710593b000 = iVar3;
  if (iVar1 == 0) {
    DAT_710593b000 = 2;
    *(undefined4 *)(plVar11 + 5) = 1;
  }
  plVar11[2] = (long)&PTR_FUN_710509e0a0;
  plVar11[0x18] = 0;
  plVar11[6] = (long)(plVar11 + 0x1a);
  *(undefined4 *)(plVar11 + 7) = 0x18;
  std::recursive_mutex::unlock();
  plVar4 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_68._0_7_ = 0x28;
      local_68._7_1_ = 0;
      pppplVar6 = (long ****)&local_68;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x28,pppplVar6,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_7101707268;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101707268:
  *(undefined4 *)(plVar4 + 1) = 1;
  *plVar4 = (long)&PTR_FUN_710509ca08;
  plVar4[4] = 0;
  plVar4[2] = param_1;
  plVar4[3] = (long)FUN_7101702350;
  std::recursive_mutex::lock();
  lVar7 = plVar11[0x11];
  if (lVar7 != 0) {
    sVar2 = *(short *)(lVar7 + 8) + -1;
    *(short *)(lVar7 + 8) = sVar2;
    if ((sVar2 < 1) && ((long *)plVar11[0x11] != (long *)0x0)) {
      (**(code **)(*(long *)plVar11[0x11] + 8))();
    }
    plVar11[0x11] = 0;
  }
  plVar11[0x11] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    std::recursive_mutex::unlock();
  }
  else {
    *(short *)(plVar4 + 1) = (short)plVar4[1] + 1;
    std::recursive_mutex::unlock();
    sVar2 = (short)plVar4[1] + -1;
    *(short *)(plVar4 + 1) = sVar2;
    if (sVar2 < 1) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  local_59 = (undefined1)param_2[1];
  uStack_58 = (undefined7)((ulong)param_2[1] >> 8);
  local_68._7_1_ = (undefined1)*param_2;
  uStack_60 = (undefined7)((ulong)*param_2 >> 8);
  std::recursive_mutex::lock();
  if (0x17 < *(uint *)(plVar11 + 7)) {
    puVar8 = (undefined1 *)plVar11[6];
    *puVar8 = 6;
    *(ulong *)(puVar8 + 0x10) = CONCAT71(uStack_58,local_59);
    *(ulong *)(puVar8 + 9) = CONCAT17(local_59,uStack_60);
    *(ulong *)(puVar8 + 1) = CONCAT17(local_68._7_1_,(undefined7)local_68);
  }
  std::recursive_mutex::unlock();
  iVar1 = (int)plVar11[5];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x30);
  if (lVar10 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  lVar10 = *(long *)(lVar10 + 0x30);
  do {
    if (lVar10 == 0) {
      uVar9 = 0;
LAB_71017073d8:
      std::recursive_mutex::unlock();
      return uVar9;
    }
    if (*(int *)(lVar10 + 0x28) == iVar1) {
      std::recursive_mutex::lock();
      if (*(char *)(lVar10 + 0x80) == '\0') {
        *(undefined1 *)(lVar10 + 0x80) = 1;
      }
      std::recursive_mutex::unlock();
      uVar9 = 1;
      goto LAB_71017073d8;
    }
    lVar10 = *(long *)(lVar10 + 8);
  } while( true );
}

