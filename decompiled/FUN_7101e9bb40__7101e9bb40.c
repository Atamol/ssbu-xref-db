// addr:      7101e9bb40
// offset:    0x1e9bb40
// name:      FUN_7101e9bb40
// mangled:   
// signature: undefined __cdecl FUN_7101e9bb40(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e9bb40(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar3;
  undefined8 extraout_x1_09;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = (**(code **)(**(long **)*param_1 + 0x68))();
  uVar3 = auVar8._8_8_;
  if ((auVar8._0_8_ & 1) != 0) {
    plVar5 = (long *)*param_1;
    uVar1 = *(uint *)(*plVar5 + 0x254);
    if (((uVar1 == 0xffffffff || 3 < (uVar1 & 0xff)) || (plVar5[(ulong)(byte)uVar1 + 9] == 0)) ||
       (*(char *)(plVar5[(ulong)(byte)uVar1 + 9] + 0xb0) == '\0')) {
      if (*(char *)((long)param_1 + 0xb) != '\0') {
        FUN_710377aee0(0x3f800000,(long)(plVar5 + 3));
        FUN_710377aee0(0x3f800000,*param_1 + 0x38);
        uVar3 = extraout_x1;
      }
      uVar4 = 0;
    }
    else if (*(char *)((long)param_1 + 0xb) == '\0') {
      FUN_710377aee0(0x3f800000,(long)(plVar5 + 1));
      FUN_710377aee0(0x3f800000,*param_1 + 0x28);
      uVar4 = 1;
      uVar3 = extraout_x1_09;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)((long)param_1 + 0xb) = uVar4;
  }
  lVar7 = *param_1;
  lVar6 = *(long *)(lVar7 + 0x48);
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x98) != '\0') && (*(char *)(lVar6 + 0xb5) != '\0')) {
      if ((*(long *)(lVar6 + 0xa0) != 0) &&
         (plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa0) + 8) + 8), plVar5 != (long *)0x0)) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bc2c;
      }
      FUN_7101e9be90(lVar6,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = extraout_x1_00;
    }
LAB_7101e9bc2c:
    lVar6 = *(long *)(lVar7 + 0x48);
    if (*(long *)(lVar6 + 0xa8) != 0) {
      plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa8) + 8) + 8);
      if (plVar5 != (long *)0x0) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bc80;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x28),0x71044530ca);
      plVar5 = *(long **)(lVar6 + 0xa8);
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      uVar3 = extraout_x1_01;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        uVar3 = extraout_x1_02;
      }
    }
  }
LAB_7101e9bc80:
  lVar6 = *(long *)(lVar7 + 0x50);
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x98) != '\0') && (*(char *)(lVar6 + 0xb5) != '\0')) {
      if ((*(long *)(lVar6 + 0xa0) != 0) &&
         (plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa0) + 8) + 8), plVar5 != (long *)0x0)) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bcc4;
      }
      FUN_7101e9be90(lVar6,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = extraout_x1_03;
    }
LAB_7101e9bcc4:
    lVar6 = *(long *)(lVar7 + 0x50);
    if (*(long *)(lVar6 + 0xa8) != 0) {
      plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa8) + 8) + 8);
      if (plVar5 != (long *)0x0) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bd18;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x28),0x71044530ca);
      plVar5 = *(long **)(lVar6 + 0xa8);
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      uVar3 = extraout_x1_04;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        uVar3 = extraout_x1_05;
      }
    }
  }
LAB_7101e9bd18:
  lVar6 = *(long *)(lVar7 + 0x58);
  if (lVar6 != 0) {
    if ((*(char *)(lVar6 + 0x98) != '\0') && (*(char *)(lVar6 + 0xb5) != '\0')) {
      if ((*(long *)(lVar6 + 0xa0) != 0) &&
         (plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa0) + 8) + 8), plVar5 != (long *)0x0)) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bd5c;
      }
      FUN_7101e9be90(lVar6,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar3 = extraout_x1_06;
    }
LAB_7101e9bd5c:
    lVar6 = *(long *)(lVar7 + 0x58);
    if (*(long *)(lVar6 + 0xa8) != 0) {
      plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa8) + 8) + 8);
      if (plVar5 != (long *)0x0) {
        auVar8 = (**(code **)(*plVar5 + 0x138))();
        uVar3 = auVar8._8_8_;
        if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bdb0;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x28),0x71044530ca);
      plVar5 = *(long **)(lVar6 + 0xa8);
      *(undefined8 *)(lVar6 + 0xa8) = 0;
      uVar3 = extraout_x1_07;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
        uVar3 = extraout_x1_08;
      }
    }
  }
LAB_7101e9bdb0:
  lVar6 = *(long *)(lVar7 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  if ((*(char *)(lVar6 + 0x98) != '\0') && (*(char *)(lVar6 + 0xb5) != '\0')) {
    if ((*(long *)(lVar6 + 0xa0) != 0) &&
       (plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa0) + 8) + 8), plVar5 != (long *)0x0)) {
      auVar8 = (**(code **)(*plVar5 + 0x138))();
      uVar3 = auVar8._8_8_;
      if ((auVar8._0_8_ & 1) == 0) goto LAB_7101e9bdf4;
    }
    FUN_7101e9be90(lVar6,uVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101e9bdf4:
  lVar6 = *(long *)(lVar7 + 0x60);
  if ((*(long *)(lVar6 + 0xa8) != 0) &&
     ((plVar5 = *(long **)(*(long *)(*(long *)(lVar6 + 0xa8) + 8) + 8), plVar5 == (long *)0x0 ||
      (uVar2 = (**(code **)(*plVar5 + 0x138))(), (uVar2 & 1) != 0)))) {
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x28),0x71044530ca);
    plVar5 = *(long **)(lVar6 + 0xa8);
    *(undefined8 *)(lVar6 + 0xa8) = 0;
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007101e9be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}

