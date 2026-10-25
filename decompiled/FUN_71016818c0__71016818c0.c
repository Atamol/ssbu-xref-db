// addr:      71016818c0
// offset:    0x16818c0
// name:      FUN_71016818c0
// mangled:   
// signature: undefined __cdecl FUN_71016818c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71016818c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long ****pppplVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar7 = &local_50;
  if (*(int *)(param_1 + 0x21c) != 0) {
    if (*(int *)(param_1 + 0x228) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x244) = 0;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (*(int *)(*(long *)(lVar4 + 0x88) + 0x74) == 0) {
      FUN_7101680ef0(lVar4);
    }
    if (*(int *)(param_1 + 0x214) < 1) {
      return;
    }
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(char *)(lVar4 + 0x70) == '\0') {
    plVar5 = *(long **)(lVar4 + 0x10);
    plVar8 = *(long **)(lVar4 + 0x18);
    if (plVar5 != plVar8) {
      lVar9 = *plVar5;
      while (lVar9 != param_1) {
        plVar5 = plVar5 + 1;
        if (plVar8 == plVar5) goto LAB_710168192c;
        lVar9 = *plVar5;
      }
      if (plVar5 != plVar8) {
        param_3 = (long ****)((long)plVar8 - (long)(plVar5 + 1));
        lVar9 = (long)param_3 >> 3;
        if (param_3 != (long ****)0x0) {
          memmove(plVar5,plVar5 + 1,(size_t)param_3);
        }
        *(long **)(lVar4 + 0x18) = plVar5 + lVar9;
      }
    }
  }
LAB_710168192c:
  lVar4 = DAT_710533a0a0;
  plVar5 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000028;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x28,pppplVar7,param_4,param_5,param_6,param_7,
                                          param_8), plVar5 != (long *)0x0)) goto LAB_7101681990;
    }
    plVar5 = (long *)0x0;
  }
LAB_7101681990:
  *(undefined4 *)(plVar5 + 1) = 1;
  *plVar5 = (long)&PTR_FUN_7105083078;
  plVar5[2] = param_1;
  plVar5[3] = (long)FUN_7101685090;
  plVar5[4] = 0;
  lVar9 = *(long *)(lVar4 + 0x30);
  if (lVar9 == 0) {
LAB_71016819f8:
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    std::recursive_mutex::lock();
    plVar10 = *(long **)(lVar9 + 0x28);
    plVar8 = plVar10 + 0x1a;
    if (*(long **)(lVar9 + 0x18) < plVar8) {
      plVar10 = *(long **)(lVar9 + 0x10);
      plVar8 = plVar10 + 0x1a;
      if (*(long **)(lVar9 + 0x20) < plVar8) {
        std::recursive_mutex::unlock();
        goto LAB_71016819f8;
      }
    }
    *(long **)(lVar9 + 0x28) = plVar8;
    *plVar10 = 0;
    plVar10[1] = 0;
    if (*(long *)(lVar9 + 0x30) == 0) {
      *(long **)(lVar9 + 0x30) = plVar10;
    }
    else {
      *plVar10 = *(long *)(lVar9 + 0x38);
      *(long **)(*(long *)(lVar9 + 0x38) + 8) = plVar10;
    }
    *(long **)(lVar9 + 0x38) = plVar10;
    *(undefined8 *)(plVar10 + 9) = 0;
    plVar10[2] = (long)&PTR_FUN_710509dfd8;
    plVar10[3] = 0;
    plVar10[4] = (long)"Logout";
    *(undefined4 *)(plVar10 + 5) = 0;
    *(undefined4 *)(plVar10 + 8) = 1;
    plVar10[6] = 0;
    plVar10[7] = 0;
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
    plVar10[2] = (long)&PTR_FUN_710523c2c0;
    plVar10[0x18] = 0;
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    lVar9 = plVar10[0x11];
    if (lVar9 != 0) {
      sVar2 = *(short *)(lVar9 + 8) + -1;
      *(short *)(lVar9 + 8) = sVar2;
      if ((sVar2 < 1) && ((long *)plVar10[0x11] != (long *)0x0)) {
        (**(code **)(*(long *)plVar10[0x11] + 8))();
      }
      plVar10[0x11] = 0;
    }
    plVar10[0x11] = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      *(short *)(plVar5 + 1) = (short)plVar5[1] + 1;
    }
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    std::recursive_mutex::unlock();
    iVar1 = (int)plVar10[5];
    if ((iVar1 != 0) && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0)) {
      std::recursive_mutex::lock();
      for (lVar4 = *(long *)(lVar4 + 0x30); lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
        if (*(int *)(lVar4 + 0x28) == iVar1) {
          std::recursive_mutex::lock();
          if (*(char *)(lVar4 + 0x80) == '\0') {
            *(undefined1 *)(lVar4 + 0x80) = 1;
          }
          std::recursive_mutex::unlock();
          break;
        }
      }
      std::recursive_mutex::unlock();
    }
    *(int *)(param_1 + 0x228) = iVar1;
  }
  if ((plVar5 != (long *)0x0) &&
     (sVar2 = (short)plVar5[1] + -1, *(short *)(plVar5 + 1) = sVar2, sVar2 < 1)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return;
}

