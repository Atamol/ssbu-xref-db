// addr:      7101ee69b0
// offset:    0x1ee69b0
// name:      FUN_7101ee69b0
// mangled:   
// signature: undefined __cdecl FUN_7101ee69b0(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ee69b0(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined **local_40;
  ulong local_38;
  
  plVar12 = *(long **)(param_1 + 0x80);
  FUN_7101ee4220(plVar12);
  if (*plVar12 != 0) {
    pcVar8 = (code *)plVar12[1];
    uVar11 = plVar12[2] & 1;
    if (uVar11 != 0 || pcVar8 != (code *)0x0) {
      if (uVar11 != 0) {
        pcVar8 = *(code **)(pcVar8 + *(long *)(*plVar12 + (plVar12[2] >> 1)));
      }
      (*pcVar8)();
    }
  }
  *(int *)((long)plVar12 + 0xdc) = *(int *)((long)plVar12 + 0xdc) + 1;
  if (((*(long *)(plVar12[0x161] + 8) == 0) ||
      (plVar4 = (long *)FUN_71037964b0(*(long *)(plVar12[0x161] + 8),0x71043ae0c3),
      plVar4 == (long *)0x0)) || (uVar11 = (**(code **)(*plVar4 + 0x138))(), (uVar11 & 1) != 0)) {
    iVar3 = (int)plVar12[0x164];
    uVar1 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    *(uint *)(plVar12 + 0x164) = (iVar3 + 1) - (uVar1 & 0xfffffffe);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((long)plVar12 + 0xb24) = uVar7;
  plVar4 = plVar12 + 0x1f;
  if ((int)plVar12[0x20] == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71052c51c4._1_1_ == '\0') ||
        ((DAT_71052c51b0 < 0x21 && ((1L << ((ulong)DAT_71052c51b0 & 0x3f) & 0x180002000U) != 0))))
       || ((DAT_71052c51b0 - 0xe < 0x18 &&
           ((0x8007f7U >> (ulong)(DAT_71052c51b0 - 0xe & 0x1f) & 1) != 0)))) {
      bVar2 = (int)plVar12[0x168] == 1;
    }
    else {
      if ((int)plVar12[0x20] != 0) goto LAB_7101ee6a68;
      bVar2 = true;
    }
  }
  else {
LAB_7101ee6a68:
    bVar2 = (*(uint *)(plVar12 + 0x168) | 2) == 3;
  }
  (**(code **)(*(long *)*plVar4 + 0x60))((long *)*plVar4,bVar2);
  iVar3 = *(int *)(*plVar4 + 0x254);
  if ((int)plVar12[0x168] == 1) {
    if (iVar3 != 1) {
      param_3 = (undefined **)0x0;
      FUN_7103771a80(plVar4,1,0);
      lVar9 = *(long *)(plVar12[0x165] + 8);
      uVar10 = 0x40020;
LAB_7101ee6b38:
      *(undefined4 *)(lVar9 + 0x18) = uVar10;
    }
  }
  else if (iVar3 != -1) {
    FUN_710376b960(*plVar4);
    lVar9 = *(long *)(plVar12[0x165] + 8);
    uVar10 = 0x40000;
    goto LAB_7101ee6b38;
  }
  if (*(char *)((long)plVar12 + 0xb24) != '\0') {
    FUN_7103778300(0x3f800000,plVar12[0x161],0x71043ae0c3);
    if ((int)plVar12[0x164] == 1) {
      FUN_7103778300(0x3f800000,plVar12[0x161],0x71042c56a7);
      pcVar6 = "mel_chara_select_help_press_any_btn";
    }
    else {
      if ((int)plVar12[0x164] != 0) goto LAB_7101ee6bb0;
      FUN_7103778300(0x3f800000,plVar12[0x161],0x710439dcb5);
      pcVar6 = "mel_chara_select_help_press_any_side_btn";
    }
    FUN_710377a120((long)(plVar12 + 0x162),pcVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101ee6bb0:
  if ((int)plVar12[0x20] == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71052c51c4._1_1_ == '\0') ||
        ((DAT_71052c51b0 < 0x21 && ((1L << ((ulong)DAT_71052c51b0 & 0x3f) & 0x180002000U) != 0))))
       || ((DAT_71052c51b0 - 0xe < 0x18 &&
           ((0x8007f7U >> (ulong)(DAT_71052c51b0 - 0xe & 0x1f) & 1) != 0)))) {
      if ((int)plVar12[0x168] != 1) goto LAB_7101ee6c58;
    }
    else if ((int)plVar12[0x20] != 0) goto LAB_7101ee6bb8;
LAB_7101ee6c1c:
    FUN_71037780e0(&local_40,*(long *)plVar12[0x1e] + 8,(long ****)"footer_btn_in",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_38;
    if (*(long **)(local_38 + 8) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(**(long **)(local_38 + 8) + 0x148))();
      uVar5 = uVar5 & 0xffffffff;
    }
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    if ((uVar5 & 1) != 0) goto LAB_7101ee6d10;
    lVar9 = *(long *)(*(long *)plVar12[0x1e] + 0x10);
    pcVar6 = "footer_btn_in";
  }
  else {
LAB_7101ee6bb8:
    if ((*(uint *)(plVar12 + 0x168) | 2) == 3) goto LAB_7101ee6c1c;
LAB_7101ee6c58:
    FUN_71037780e0(&local_40,*(long *)plVar12[0x1e] + 8,(long ****)"footer_btn_out",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_38;
    if (*(long **)(local_38 + 8) == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(**(long **)(local_38 + 8) + 0x148))();
      uVar5 = uVar5 & 0xffffffff;
    }
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    if ((uVar5 & 1) != 0) goto LAB_7101ee6d10;
    lVar9 = *(long *)(*(long *)plVar12[0x1e] + 0x10);
    pcVar6 = "footer_btn_out";
  }
  FUN_7103778300(0x3f800000,lVar9,(long)pcVar6);
LAB_7101ee6d10:
  if ((int)plVar12[0x1b] != 3) {
    nn::hid::StopLrAssignmentMode();
    return;
  }
  nn::hid::StartLrAssignmentMode();
  return;
}

