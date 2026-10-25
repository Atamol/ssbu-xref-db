// addr:      71016a65f0
// offset:    0x16a65f0
// name:      FUN_71016a65f0
// mangled:   
// signature: undefined __cdecl FUN_71016a65f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71016a65f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long ****pppplVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long ***local_80;
  code *local_78;
  undefined8 uStack_70;
  long local_68;
  long *local_60;
  undefined4 local_44;
  
  lVar9 = DAT_710533a0a0;
  pppplVar5 = &local_80;
  plVar3 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_80 = (long ***)&DAT_00000028;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x28,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), plVar3 != (long *)0x0)) goto LAB_71016a6670;
    }
    plVar3 = (long *)0x0;
  }
LAB_71016a6670:
  *(undefined4 *)(plVar3 + 1) = 1;
  *plVar3 = (long)&PTR_FUN_7105083120;
  plVar3[2] = param_1;
  plVar3[3] = (long)FUN_71016a6950;
  plVar3[4] = 0;
  lVar8 = *(long *)(lVar9 + 0x30);
  if (lVar8 == 0) {
LAB_71016a66d8:
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (plVar3 != (long *)0x0) goto LAB_71016a6898;
LAB_71016a68b0:
    if (iVar10 == 0) goto LAB_71016a6918;
LAB_71016a68b4:
    local_80 = (long ***)&DAT_71050830a8;
    local_78 = FUN_71016a69a0;
    uStack_70 = 0;
    local_68 = param_1;
    local_60 = (long *)&local_80;
    FUN_71003cb050((long *)&local_80,(long *)(param_1 + 0x10));
    plVar3 = local_60;
    if (&local_80 == (long ****)local_60) goto LAB_71016a692c;
  }
  else {
    std::recursive_mutex::lock();
    plVar11 = *(long **)(lVar8 + 0x28);
    plVar6 = plVar11 + 0x1c;
    if (*(long **)(lVar8 + 0x18) < plVar6) {
      plVar11 = *(long **)(lVar8 + 0x10);
      plVar6 = plVar11 + 0x1c;
      if (*(long **)(lVar8 + 0x20) < plVar6) {
        std::recursive_mutex::unlock();
        goto LAB_71016a66d8;
      }
    }
    *(long **)(lVar8 + 0x28) = plVar6;
    *plVar11 = 0;
    plVar11[1] = 0;
    if (*(long *)(lVar8 + 0x30) == 0) {
      *(long **)(lVar8 + 0x30) = plVar11;
    }
    else {
      *plVar11 = *(long *)(lVar8 + 0x38);
      *(long **)(*(long *)(lVar8 + 0x38) + 8) = plVar11;
    }
    *(long **)(lVar8 + 0x38) = plVar11;
    *(undefined8 *)(plVar11 + 9) = 0;
    plVar11[2] = (long)&PTR_FUN_710509dfd8;
    plVar11[3] = 0;
    plVar11[4] = (long)"Network";
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined4 *)(plVar11 + 8) = 1;
    plVar11[6] = 0;
    plVar11[7] = 0;
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
    iVar10 = DAT_710593b000;
    iVar2 = DAT_710593b000 + 1;
    *(int *)(plVar11 + 5) = DAT_710593b000;
    DAT_710593b000 = iVar2;
    if (iVar10 == 0) {
      DAT_710593b000 = 2;
      *(undefined4 *)(plVar11 + 5) = 1;
    }
    plVar11[2] = (long)&PTR_FUN_710523c458;
    *(undefined1 *)(plVar11 + 0x14) = 0;
    plVar11[0x1a] = 0;
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    lVar8 = plVar11[0x11];
    if (lVar8 != 0) {
      sVar1 = *(short *)(lVar8 + 8) + -1;
      *(short *)(lVar8 + 8) = sVar1;
      if ((sVar1 < 1) && ((long *)plVar11[0x11] != (long *)0x0)) {
        (**(code **)(*(long *)plVar11[0x11] + 8))();
      }
      plVar11[0x11] = 0;
    }
    plVar11[0x11] = (long)plVar3;
    if (plVar3 != (long *)0x0) {
      *(short *)(plVar3 + 1) = (short)plVar3[1] + 1;
    }
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    std::recursive_mutex::unlock();
    iVar10 = (int)plVar11[5];
    if ((iVar10 != 0) && (lVar9 = *(long *)(lVar9 + 0x30), lVar9 != 0)) {
      std::recursive_mutex::lock();
      for (lVar9 = *(long *)(lVar9 + 0x30); lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        if (*(int *)(lVar9 + 0x28) == iVar10) {
          std::recursive_mutex::lock();
          if (*(char *)(lVar9 + 0x80) == '\0') {
            *(undefined1 *)(lVar9 + 0x80) = 1;
          }
          std::recursive_mutex::unlock();
          break;
        }
      }
      std::recursive_mutex::unlock();
    }
    *(int *)(param_1 + 0x70) = iVar10;
    if (plVar3 == (long *)0x0) goto LAB_71016a68b0;
LAB_71016a6898:
    sVar1 = (short)plVar3[1] + -1;
    *(short *)(plVar3 + 1) = sVar1;
    if (0 < sVar1) goto LAB_71016a68b0;
    (**(code **)(*plVar3 + 8))(plVar3);
    if (*(int *)(param_1 + 0x70) != 0) goto LAB_71016a68b4;
LAB_71016a6918:
    plVar3 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if ((long *)(param_1 + 0x10) == plVar3) {
LAB_71016a692c:
      pcVar7 = *(code **)(*plVar3 + 0x20);
      goto LAB_71016a6934;
    }
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  pcVar7 = *(code **)(*plVar3 + 0x28);
LAB_71016a6934:
  (*pcVar7)();
  return;
}

