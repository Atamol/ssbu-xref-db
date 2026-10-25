// addr:      71016814f0
// offset:    0x16814f0
// name:      FUN_71016814f0
// mangled:   
// signature: undefined __cdecl FUN_71016814f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71016814f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long ****pppplVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  long ***local_50;
  undefined4 local_44;
  
  lVar8 = DAT_710533a0a0;
  pppplVar4 = &local_50;
  if (*(int *)(param_1 + 0x21c) != 0) {
    return;
  }
  if ((((*(long **)(DAT_710533a0a0 + 0x30) != (long *)0x0) &&
       (lVar5 = **(long **)(DAT_710533a0a0 + 0x30), lVar5 != 0)) &&
      (lVar5 = *(long *)(lVar5 + 0x48), lVar5 != 0)) && (*(char *)(lVar5 + 0x98) == '\x02')) {
    if (0 < *(int *)(param_1 + 0x214)) {
      *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + -1;
    }
    lVar5 = *DAT_710593b580;
    iVar9 = *(int *)(lVar5 + 0x7300);
    if (iVar9 == -1) {
      lVar5 = lVar5 + 0x10;
      plVar6 = *(long **)(lVar8 + 0x30);
joined_r0x007101681870:
      if (((plVar6 != (long *)0x0) && (*plVar6 != 0)) &&
         ((lVar8 = *(long *)(*plVar6 + 0x48), lVar8 != 0 &&
          (lVar8 = **(long **)(lVar8 + 0x70), lVar8 != 0)))) {
        FUN_71002aae60(lVar8,lVar5);
      }
      *(undefined1 *)(param_1 + 0x244) = 1;
      return;
    }
    if ((ulong)(long)iVar9 < *(ulong *)(lVar5 + 0x72c0)) {
      lVar5 = lVar5 + (long)iVar9 * 0xcc0 + 0xcd0;
      plVar6 = *(long **)(lVar8 + 0x30);
      goto joined_r0x007101681870;
    }
    goto LAB_71016818b4;
  }
  plVar6 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000028;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x28,pppplVar4,param_4,param_5,param_6,param_7,
                                          param_8), plVar6 != (long *)0x0)) goto LAB_71016815ec;
    }
    plVar6 = (long *)0x0;
  }
LAB_71016815ec:
  *(undefined4 *)(plVar6 + 1) = 1;
  *plVar6 = (long)&PTR_FUN_7105083078;
  plVar6[2] = param_1;
  plVar6[3] = (long)FUN_71016850f0;
  plVar6[4] = 0;
  lVar5 = *(long *)(lVar8 + 0x30);
  if (lVar5 == 0) {
LAB_7101681654:
    iVar9 = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  else {
    std::recursive_mutex::lock();
    plVar10 = *(long **)(lVar5 + 0x28);
    plVar7 = plVar10 + 0x1c;
    if (*(long **)(lVar5 + 0x18) < plVar7) {
      plVar10 = *(long **)(lVar5 + 0x10);
      plVar7 = plVar10 + 0x1c;
      if (*(long **)(lVar5 + 0x20) < plVar7) {
        std::recursive_mutex::unlock();
        goto LAB_7101681654;
      }
    }
    *(long **)(lVar5 + 0x28) = plVar7;
    *plVar10 = 0;
    plVar10[1] = 0;
    if (*(long *)(lVar5 + 0x30) == 0) {
      *(long **)(lVar5 + 0x30) = plVar10;
    }
    else {
      *plVar10 = *(long *)(lVar5 + 0x38);
      *(long **)(*(long *)(lVar5 + 0x38) + 8) = plVar10;
    }
    *(long **)(lVar5 + 0x38) = plVar10;
    *(undefined8 *)(plVar10 + 9) = 0;
    plVar10[2] = (long)&PTR_FUN_710509dfd8;
    plVar10[3] = 0;
    plVar10[4] = (long)"Login";
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
    iVar9 = DAT_710593b000;
    iVar2 = DAT_710593b000 + 1;
    *(int *)(plVar10 + 5) = DAT_710593b000;
    DAT_710593b000 = iVar2;
    if (iVar9 == 0) {
      DAT_710593b000 = 2;
      *(undefined4 *)(plVar10 + 5) = 1;
    }
    plVar10[2] = (long)&PTR_FUN_710523c238;
    plVar10[0x18] = 0;
    *(undefined1 *)(plVar10 + 0x1a) = 0;
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    lVar5 = plVar10[0x11];
    if (lVar5 != 0) {
      sVar1 = *(short *)(lVar5 + 8) + -1;
      *(short *)(lVar5 + 8) = sVar1;
      if ((sVar1 < 1) && ((long *)plVar10[0x11] != (long *)0x0)) {
        (**(code **)(*(long *)plVar10[0x11] + 8))();
      }
      plVar10[0x11] = 0;
    }
    plVar10[0x11] = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      *(short *)(plVar6 + 1) = (short)plVar6[1] + 1;
    }
    std::recursive_mutex::unlock();
    std::recursive_mutex::lock();
    std::recursive_mutex::unlock();
    iVar9 = (int)plVar10[5];
    if ((iVar9 != 0) && (lVar8 = *(long *)(lVar8 + 0x30), lVar8 != 0)) {
      std::recursive_mutex::lock();
      for (lVar8 = *(long *)(lVar8 + 0x30); lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
        if (*(int *)(lVar8 + 0x28) == iVar9) {
          std::recursive_mutex::lock();
          if (*(char *)(lVar8 + 0x80) == '\0') {
            *(undefined1 *)(lVar8 + 0x80) = 1;
          }
          std::recursive_mutex::unlock();
          break;
        }
      }
      std::recursive_mutex::unlock();
    }
    *(int *)(param_1 + 0x228) = iVar9;
  }
  if ((plVar6 != (long *)0x0) &&
     (sVar1 = (short)plVar6[1] + -1, *(short *)(plVar6 + 1) = sVar1, sVar1 < 1)) {
    (**(code **)(*plVar6 + 8))(plVar6);
    iVar9 = *(int *)(param_1 + 0x228);
  }
  if (iVar9 == 0) {
    if (0x12 < *(uint *)(param_1 + 0x214)) {
LAB_71016818b4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x214) * 4 + 0x1c8) = 1;
  }
  return;
}

