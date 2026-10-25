// addr:      71017069f0
// offset:    0x17069f0
// name:      FUN_71017069f0
// mangled:   
// signature: undefined4 __cdecl FUN_71017069f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_71017069f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long ****pppplVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long ***local_58;
  undefined4 local_44;
  
  lVar9 = DAT_710533a0a0;
  *(undefined4 *)(param_1 + 0x2940) = 0;
  lVar7 = *(long *)(lVar9 + 0x30);
  if (lVar7 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  plVar10 = *(long **)(lVar7 + 0x28);
  plVar4 = plVar10 + 0x1b;
  if (*(long **)(lVar7 + 0x18) < plVar4) {
    plVar10 = *(long **)(lVar7 + 0x10);
    plVar4 = plVar10 + 0x1b;
    if (*(long **)(lVar7 + 0x20) < plVar4) {
      std::recursive_mutex::unlock();
      return 0;
    }
  }
  *(long **)(lVar7 + 0x28) = plVar4;
  *plVar10 = 0;
  plVar10[1] = 0;
  if (*(long *)(lVar7 + 0x30) == 0) {
    *(long **)(lVar7 + 0x30) = plVar10;
  }
  else {
    *plVar10 = *(long *)(lVar7 + 0x38);
    *(long **)(*(long *)(lVar7 + 0x38) + 8) = plVar10;
  }
  *(long **)(lVar7 + 0x38) = plVar10;
  *(undefined8 *)(plVar10 + 9) = 0;
  plVar10[2] = (long)&PTR_FUN_710509dfd8;
  plVar10[3] = 0;
  plVar10[4] = (long)"TaskReplay";
  *(undefined4 *)(plVar10 + 5) = 0;
  plVar10[7] = 0;
  plVar10[6] = 0;
  *(undefined4 *)(plVar10 + 8) = 1;
  plVar10[10] = 0;
  plVar10[0xb] = 0;
  plVar10[0xc] = 0;
  std::recursive_mutex::recursive_mutex((recursive_mutex *)(plVar10 + 9));
  *(undefined1 *)((long)plVar10 + 0x72) = 0;
  *(undefined2 *)(plVar10 + 0xe) = 0;
  plVar10[0xd] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((long)plVar10 + 0x74));
  *(undefined1 *)(plVar10 + 0x10) = 0;
  plVar10[0x11] = 0;
  *(undefined1 *)(plVar10 + 0x12) = 0;
  plVar10[0x13] = 0;
  iVar1 = DAT_710593b000;
  iVar3 = DAT_710593b000 + 1;
  *(int *)(plVar10 + 5) = DAT_710593b000;
  DAT_710593b000 = iVar3;
  if (iVar1 == 0) {
    DAT_710593b000 = 2;
    *(undefined4 *)(plVar10 + 5) = 1;
  }
  plVar10[2] = (long)&PTR_FUN_710509e0a0;
  plVar10[0x18] = 0;
  plVar10[6] = (long)(plVar10 + 0x1a);
  *(undefined4 *)(plVar10 + 7) = 1;
  std::recursive_mutex::unlock();
  plVar4 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&DAT_00000028;
      pppplVar6 = &local_58;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x28,pppplVar6,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_7101706bb4;
    }
    plVar4 = (long *)0x0;
  }
LAB_7101706bb4:
  *(undefined4 *)(plVar4 + 1) = 1;
  *plVar4 = (long)&PTR_FUN_710509ca08;
  plVar4[4] = 0;
  plVar4[2] = param_1;
  plVar4[3] = (long)FUN_7101700840;
  std::recursive_mutex::lock();
  lVar7 = plVar10[0x11];
  if (lVar7 != 0) {
    sVar2 = *(short *)(lVar7 + 8) + -1;
    *(short *)(lVar7 + 8) = sVar2;
    if ((sVar2 < 1) && ((long *)plVar10[0x11] != (long *)0x0)) {
      (**(code **)(*(long *)plVar10[0x11] + 8))();
    }
    plVar10[0x11] = 0;
  }
  plVar10[0x11] = (long)plVar4;
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
  std::recursive_mutex::lock();
  if ((int)plVar10[7] != 0) {
    *(undefined1 *)plVar10[6] = 3;
  }
  std::recursive_mutex::unlock();
  iVar1 = (int)plVar10[5];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar9 = *(long *)(lVar9 + 0x30);
  if (lVar9 == 0) {
    return 0;
  }
  std::recursive_mutex::lock();
  lVar9 = *(long *)(lVar9 + 0x30);
  do {
    if (lVar9 == 0) {
      uVar8 = 0;
LAB_7101706d00:
      std::recursive_mutex::unlock();
      return uVar8;
    }
    if (*(int *)(lVar9 + 0x28) == iVar1) {
      std::recursive_mutex::lock();
      if (*(char *)(lVar9 + 0x80) == '\0') {
        *(undefined1 *)(lVar9 + 0x80) = 1;
      }
      std::recursive_mutex::unlock();
      uVar8 = 1;
      goto LAB_7101706d00;
    }
    lVar9 = *(long *)(lVar9 + 8);
  } while( true );
}

