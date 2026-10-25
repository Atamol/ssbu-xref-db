// addr:      7101e0cff0
// offset:    0x1e0cff0
// name:      FUN_7101e0cff0
// mangled:   
// signature: undefined __cdecl FUN_7101e0cff0(long param_1, ulong param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e0cff0(long param_1,ulong param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  lVar12 = *(long *)(param_1 + 0x80);
  uVar13 = param_3 & 0xffffffff;
  if (*(char *)(lVar12 + 0x597) == '\0') {
    FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x4d0),0,(long ****)0x1002,param_4,param_5,
                   param_6,param_7,param_8);
    *(undefined1 *)(lVar12 + 0x597) = 1;
    param_3 = 0x16fff;
    FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 0x4e0),1,(long ****)0x16fff,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778760(*(long *)(lVar12 + 0x4f0),0x710428ff7d);
  }
  if (*(char *)(lVar12 + 0x59e) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x518),0x7104443cbf);
    uVar13 = 0;
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x518),0x71042e7754);
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar12 + 0x4d0),0);
  plVar1 = (long *)(lVar12 + 0x528);
  (**(code **)(**(long **)(lVar12 + 0x528) + 0x60))(*(long **)(lVar12 + 0x528),1);
  if ((uVar13 & 1) == 0) {
    (**(code **)(**(long **)(lVar12 + 0x528) + 0x70))(*(long **)(lVar12 + 0x528),1);
    param_3 = 1;
    FUN_7103771a80((long *)(lVar12 + 0x520),2,1);
  }
  (**(code **)(**(long **)(lVar12 + 0x520) + 0x60))(*(long **)(lVar12 + 0x520),0);
  (**(code **)(**(long **)(lVar12 + 0x520) + 0x70))(*(long **)(lVar12 + 0x520),0);
  if (*(char *)(lVar12 + 0x59b) == '\0') {
    *(undefined4 *)(lVar12 + 0x580) = 0;
    *(undefined8 *)(lVar12 + 0x58c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + 0x584) = 0xffffffffffffffff;
    if (*(undefined4 **)(lVar12 + 0x570) == *(undefined4 **)(lVar12 + 0x568)) {
LAB_7101e0d6f8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7101e06fa0(lVar12,**(undefined4 **)(lVar12 + 0x568),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if ((ulong)(*(long *)(lVar12 + 0x570) - *(long *)(lVar12 + 0x568) >> 2) <=
        (ulong)(long)*(int *)(lVar12 + 0x580)) goto LAB_7101e0d6f8;
    uVar4 = *(uint *)(*(long *)(lVar12 + 0x568) + (long)*(int *)(lVar12 + 0x580) * 4);
    *(uint *)(lVar12 + 0x364) = uVar4;
    FUN_7102528f40(*(long *)(*DAT_7105329f98 + 0x30),(undefined8 *)(lVar12 + 0x18),
                   (long ****)(ulong)uVar4,(ulong)*(byte *)(lVar12 + 0x361),param_5,param_6,param_7,
                   param_8);
    uVar4 = *(byte *)(lVar12 + 0x361) ^ 1;
    *(char *)(lVar12 + 0x360) = (char)uVar4;
    FUN_7103783690(plVar1,(int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3) +
                          uVar4);
    FUN_710377cc80(*(long *)(lVar12 + 0x528),1);
    lVar10 = *(long *)(lVar12 + 0x528);
    iVar6 = *(int *)(lVar10 + 0x2a4);
    if (((((-1 < iVar6) && (iVar6 < *(int *)(lVar10 + 0x288))) &&
         (iVar6 = iVar6 - *(int *)(lVar10 + 0x29c), -1 < iVar6)) &&
        ((iVar6 < *(int *)(lVar10 + 0x2c4) && (iVar6 < *(int *)(lVar10 + 0x2c0))))) &&
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x168) + (long)iVar6 * 8) + 0x28),
       plVar14 != (long *)0x0)) {
      (**(code **)(*plVar14 + 0x218))(plVar14,0);
      (**(code **)(*plVar14 + 0x410))(plVar14);
      (**(code **)(*plVar14 + 0x3f0))(plVar14,0);
      iVar6 = (**(code **)(*plVar14 + 0x140))(plVar14);
      if ((iVar6 != 6) && (iVar6 = (**(code **)(*plVar14 + 0x140))(plVar14), iVar6 != 1)) {
        (**(code **)(*plVar14 + 0x400))(plVar14);
      }
      uVar13 = (**(code **)(*plVar14 + 0x158))(plVar14);
      if ((uVar13 & 1) == 0) {
        (**(code **)(*plVar14 + 0x370))(plVar14);
      }
    }
    if (*(short *)(lVar12 + 0x594) == -1) {
LAB_7101e0d5a8:
      iVar6 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(lVar12 + 0x18);
      puVar3 = *(undefined8 **)(lVar12 + 0x20);
      if (puVar3 == puVar2) goto LAB_7101e0d5a8;
      sVar5 = *(short *)*puVar2;
      puVar11 = puVar2;
      while (sVar5 != *(short *)(lVar12 + 0x594)) {
        puVar11 = puVar11 + 1;
        if (puVar3 == puVar11) goto LAB_7101e0d5a8;
        sVar5 = *(short *)*puVar11;
      }
      if (puVar11 == puVar3) goto LAB_7101e0d5a8;
      iVar6 = (int)((ulong)((long)puVar11 - (long)puVar2) >> 3) + (uint)*(byte *)(lVar12 + 0x360);
    }
    FUN_7103783c10(plVar1,iVar6,0,1,param_5,param_6,param_7,param_8);
    *(undefined8 *)(lVar12 + 0x378) = 0;
    *(undefined8 *)(lVar12 + 0x370) = 0;
    *(undefined8 *)(lVar12 + 0x4b4) = 0;
    *(undefined8 *)(lVar12 + 0x4ac) = 0;
    *(undefined8 *)(lVar12 + 0x4a4) = 0;
    *(undefined8 *)(lVar12 + 0x49c) = 0;
    *(undefined8 *)(lVar12 + 0x494) = 0;
    *(undefined8 *)(lVar12 + 0x48c) = 0;
    *(undefined8 *)(lVar12 + 0x484) = 0;
    *(undefined8 *)(lVar12 + 0x474) = 0;
    *(undefined4 *)(lVar12 + 0x4bc) = 0;
    *(undefined8 *)(lVar12 + 0x47c) = 0;
    *(undefined8 *)(lVar12 + 0x4c0) = 0xffffffff;
    *(undefined4 *)(lVar12 + 0x4c8) = 0xffffffff;
    uVar9 = 1;
    goto LAB_7101e0d6a0;
  }
  *(undefined8 *)(lVar12 + 0x584) = 0xffffffffffffffff;
  *(undefined4 *)(lVar12 + 0x58c) = 0xffffffff;
  if ((ulong)(*(long *)(lVar12 + 0x570) - *(long *)(lVar12 + 0x568) >> 2) <=
      (ulong)(long)*(int *)(lVar12 + 0x580)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar4 = *(uint *)(*(long *)(lVar12 + 0x568) + (long)*(int *)(lVar12 + 0x580) * 4);
  FUN_7101e06fa0(lVar12,uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  *(uint *)(lVar12 + 0x364) = uVar4;
  FUN_7102528f40(*(long *)(*DAT_7105329f98 + 0x30),(undefined8 *)(lVar12 + 0x18),
                 (long ****)(ulong)uVar4,(ulong)*(byte *)(lVar12 + 0x361),param_5,param_6,param_7,
                 param_8);
  uVar4 = *(byte *)(lVar12 + 0x361) ^ 1;
  *(char *)(lVar12 + 0x360) = (char)uVar4;
  FUN_7103783690(plVar1,(int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3) +
                        uVar4);
  FUN_710377cc80(*(long *)(lVar12 + 0x528),1);
  lVar10 = *(long *)(lVar12 + 0x528);
  iVar6 = *(int *)(lVar10 + 0x2a4);
  if ((((-1 < iVar6) && (iVar6 < *(int *)(lVar10 + 0x288))) &&
      (iVar6 = iVar6 - *(int *)(lVar10 + 0x29c), -1 < iVar6)) &&
     (((iVar6 < *(int *)(lVar10 + 0x2c4) && (iVar6 < *(int *)(lVar10 + 0x2c0))) &&
      (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x168) + (long)iVar6 * 8) + 0x28),
      plVar14 != (long *)0x0)))) {
    (**(code **)(*plVar14 + 0x218))(plVar14,0);
    (**(code **)(*plVar14 + 0x410))(plVar14);
    (**(code **)(*plVar14 + 0x3f0))(plVar14,0);
    iVar6 = (**(code **)(*plVar14 + 0x140))(plVar14);
    if ((iVar6 != 6) && (iVar6 = (**(code **)(*plVar14 + 0x140))(plVar14), iVar6 != 1)) {
      (**(code **)(*plVar14 + 0x400))(plVar14);
    }
    uVar7 = (**(code **)(*plVar14 + 0x158))(plVar14);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*plVar14 + 0x370))(plVar14);
    }
  }
  if ((*(char *)(lVar12 + 0x59e) == '\0') || (*(char *)(lVar12 + 0x59d) == '\0')) {
    if ((uVar13 & 1) != 0) goto LAB_7101e0d33c;
LAB_7101e0d2c4:
    if (*(short *)(lVar12 + 0x594) == -1) {
LAB_7101e0d628:
      iVar6 = 0;
    }
    else {
      puVar2 = *(undefined8 **)(lVar12 + 0x18);
      puVar3 = *(undefined8 **)(lVar12 + 0x20);
      if (puVar3 == puVar2) goto LAB_7101e0d628;
      sVar5 = *(short *)*puVar2;
      puVar11 = puVar2;
      while (sVar5 != *(short *)(lVar12 + 0x594)) {
        puVar11 = puVar11 + 1;
        if (puVar3 == puVar11) goto LAB_7101e0d628;
        sVar5 = *(short *)*puVar11;
      }
      if (puVar11 == puVar3) goto LAB_7101e0d628;
      iVar6 = (int)((ulong)((long)puVar11 - (long)puVar2) >> 3) + (uint)*(byte *)(lVar12 + 0x360);
    }
    FUN_7103783c10(plVar1,iVar6,0,1,param_5,param_6,param_7,param_8);
    *(undefined8 *)(lVar12 + 0x378) = 0;
    *(undefined8 *)(lVar12 + 0x370) = 0;
    *(undefined8 *)(lVar12 + 0x4b4) = 0;
    *(undefined8 *)(lVar12 + 0x4ac) = 0;
    *(undefined8 *)(lVar12 + 0x4a4) = 0;
    *(undefined8 *)(lVar12 + 0x49c) = 0;
    *(undefined8 *)(lVar12 + 0x494) = 0;
    *(undefined8 *)(lVar12 + 0x48c) = 0;
    *(undefined8 *)(lVar12 + 0x484) = 0;
    *(undefined4 *)(lVar12 + 0x4bc) = 0;
    *(undefined8 *)(lVar12 + 0x47c) = 0;
    *(undefined8 *)(lVar12 + 0x474) = 0;
    uVar9 = 2;
  }
  else {
    if ((uVar13 & 1) == 0 &&
        (int)((ulong)(*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18)) >> 3) != 0)
    goto LAB_7101e0d2c4;
LAB_7101e0d33c:
    *(undefined8 *)(lVar12 + 0x378) = 0;
    *(undefined1 *)(lVar12 + 0x5a0) = 1;
    *(undefined8 *)(lVar12 + 0x370) = 0;
    *(undefined8 *)(lVar12 + 0x4b4) = 0;
    *(undefined8 *)(lVar12 + 0x4ac) = 0;
    *(undefined8 *)(lVar12 + 0x4a4) = 0;
    *(undefined8 *)(lVar12 + 0x49c) = 0;
    *(undefined8 *)(lVar12 + 0x494) = 0;
    *(undefined8 *)(lVar12 + 0x48c) = 0;
    *(undefined8 *)(lVar12 + 0x484) = 0;
    *(undefined4 *)(lVar12 + 0x4bc) = 0;
    *(undefined8 *)(lVar12 + 0x47c) = 0;
    *(undefined8 *)(lVar12 + 0x474) = 0;
    uVar9 = 4;
  }
  *(undefined8 *)(lVar12 + 0x4c0) = 0xffffffff;
  *(undefined4 *)(lVar12 + 0x4c8) = 0xffffffff;
LAB_7101e0d6a0:
  *(undefined1 *)(lVar12 + 0x4cc) = 0;
  *(undefined4 *)(lVar12 + 0x470) = uVar9;
  FUN_7101e0a060((long *)(lVar12 + 0x368));
  *(undefined1 *)(lVar12 + 0x59a) = 0;
  if ((param_2 & 1) == 0) {
    pcVar8 = "off_plt_menu_lyt_00";
  }
  else {
    pcVar8 = "on_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0x4d0) + 0x10),(long)pcVar8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

