// addr:      7101418180
// offset:    0x1418180
// name:      FUN_7101418180
// mangled:   
// signature: undefined __cdecl FUN_7101418180(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101418180(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong *puVar11;
  float fVar12;
  long *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint auStack_88 [18];
  
  if (*(int *)((long)param_1 + 0xec) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    plVar7 = *(long **)(*param_1 + 0x20);
    lVar10 = *(long *)(DAT_710532f730 + 8);
    uStack_90 = (**(code **)(*plVar7 + 0x28))(plVar7,*param_1,2);
    puStack_b0 = &DAT_71052c5730;
    puStack_a0 = &uStack_90;
    local_98 = DAT_710593b6a0;
    local_b8 = param_1;
    local_a8 = lVar10 + 0x160;
    FUN_7101418c80((long *)&local_b8,0,*(uint *)(param_1 + 0x23));
    uVar8 = (ulong)*(uint *)((long)param_1 + 0x11c);
    FUN_7101418c80((long *)&local_b8,1,*(uint *)((long)param_1 + 0x11c));
    uVar5 = *(uint *)(param_1 + 0x27);
    *(uint *)((long)param_1 + 0x134) = uVar5;
    *(undefined1 *)((long)param_1 + 0x13c) = 0;
    if (uVar5 == 0xffffffff) {
      FUN_710377a120(*(long *)(param_1[1] + 0x80) + 0xa0,"mel_info_stage_punchout_top",uVar8,param_4
                     ,param_5,param_6,param_7,param_8);
    }
    else {
      if (*(char *)(param_1[2] + 4) == '\0') {
        plVar7 = *(long **)(*param_1 + 0x20);
        lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,*param_1,2);
        if (*(char *)(lVar10 + 0x10) == '\0') {
          puVar11 = &DAT_7105064310;
        }
        else {
          if (7 < uVar5) {
LAB_7101418760:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar11 = (ulong *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x1790) +
                              (long)(int)uVar5 * 0x200 + 0x170);
        }
        puVar9 = (undefined1 *)*puVar11;
        lVar10 = *(long *)(param_1[1] + 0x80);
        if (((((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) &&
            (((ulong)puVar9 & 0xffffffffff) != 0)) && (*(char *)((long)puVar11 + 0xc) != '\0')) {
          puVar9 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x11b1ccb807);
        }
        FUN_7103265040(auStack_88,*(long *)(DAT_710532f730 + 8) + 0x160,puVar9,
                       (ulong)(uint)puVar11[1],0,param_6,param_7,param_8);
      }
      else {
        FUN_71033938b0(auStack_88,
                       (char)*(undefined4 *)(param_1[2] + (long)(int)uVar5 * 0x1d8 + 0x90));
        lVar10 = *(long *)(param_1[1] + 0x80);
      }
      FUN_710377a280(lVar10 + 0xa0,(byte *)"mel_info_stage_punchout_top",1);
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(uint *)(param_1 + 0x28) = *(uint *)((long)param_1 + 0x144);
    FUN_7101b4e8b0(*(long *)(param_1[1] + 0x80) + 0x1a8,*(uint *)((long)param_1 + 0x144));
    *(undefined1 *)((long)param_1 + 0x154) = 0;
    *(uint *)((long)param_1 + 0x14c) = *(uint *)(param_1 + 0x2a);
    FUN_7101b4e8b0(*(long *)(param_1[1] + 0x80) + 0x150,*(uint *)(param_1 + 0x2a));
    if (*(char *)((long)param_1 + 0x133) != '\0') {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x2b) = *(int *)((long)param_1 + 0x15c);
      FUN_7101b4eb20(*(long *)(param_1[1] + 0x80),*(int *)((long)param_1 + 0x15c));
    }
    uVar8 = 0;
    fVar12 = 0.0;
    iVar3 = (int)param_1[0x24];
    lVar10 = *(long *)(param_1[1] + 0x80);
    FUN_710377b010(0,lVar10 + 0x20);
    iVar6 = iVar3;
    if (8 < iVar3) {
      iVar6 = 9;
    }
    iVar1 = iVar6;
    if (iVar3 < 1) {
      iVar1 = 0;
    }
    if (0 < iVar1) {
      iVar2 = 9;
      if (iVar1 < 9) {
        iVar2 = iVar6;
      }
      uVar8 = (ulong)(uint)(float)(int)(float)iVar2;
      if (iVar1 < 9 && iVar3 < 1) {
        uVar8 = 0;
      }
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 0x210) + 8);
    if (plVar7 != (long *)0x0) {
      fVar12 = (float)(**(code **)(*plVar7 + 0x1a8))();
    }
    if ((float)uVar8 <= fVar12) {
      FUN_710377b010(uVar8,lVar10 + 0x208);
    }
    *(undefined1 *)(param_1 + 0x26) = 1;
    return;
  }
  if (*(char *)((long)param_1 + 0x13c) != '\0') {
    uVar5 = *(uint *)((long)param_1 + 0x134);
    *(uint *)(param_1 + 0x27) = uVar5;
    *(undefined1 *)((long)param_1 + 0x13c) = 0;
    if (uVar5 == 0xffffffff) {
      FUN_710377a120(*(long *)(param_1[1] + 0x80) + 0xa0,"mel_info_stage_punchout_top",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      cVar4 = (char)param_1[0x29];
      goto joined_r0x00710141840c;
    }
    if (*(char *)(param_1[2] + 4) == '\0') {
      plVar7 = *(long **)(*param_1 + 0x20);
      lVar10 = (**(code **)(*plVar7 + 0x28))(plVar7,*param_1,2);
      if (*(char *)(lVar10 + 0x10) == '\0') {
        puVar11 = &DAT_7105064310;
      }
      else {
        if (7 < uVar5) goto LAB_7101418760;
        puVar11 = (ulong *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x1790) + (long)(int)uVar5 * 0x200
                           + 0x170);
      }
      puVar9 = (undefined1 *)*puVar11;
      lVar10 = *(long *)(param_1[1] + 0x80);
      if (((((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar9 & 0xffffffffff) != 0)) && (*(char *)((long)puVar11 + 0xc) != '\0')) {
        puVar9 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0x11b1ccb807);
      }
      FUN_7103265040(auStack_88,*(long *)(DAT_710532f730 + 8) + 0x160,puVar9,(ulong)(uint)puVar11[1]
                     ,0,param_6,param_7,param_8);
    }
    else {
      FUN_71033938b0(auStack_88,(char)*(undefined4 *)(param_1[2] + (long)(int)uVar5 * 0x1d8 + 0x90))
      ;
      lVar10 = *(long *)(param_1[1] + 0x80);
    }
    FUN_710377a280(lVar10 + 0xa0,(byte *)"mel_info_stage_punchout_top",1);
  }
  cVar4 = (char)param_1[0x29];
joined_r0x00710141840c:
  if (cVar4 != '\0') {
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(uint *)((long)param_1 + 0x144) = *(uint *)(param_1 + 0x28);
    FUN_7101b4e8b0(*(long *)(param_1[1] + 0x80) + 0x1a8,*(uint *)(param_1 + 0x28));
  }
  if (*(char *)((long)param_1 + 0x154) != '\0') {
    *(undefined1 *)((long)param_1 + 0x154) = 0;
    *(uint *)(param_1 + 0x2a) = *(uint *)((long)param_1 + 0x14c);
    FUN_7101b4e8b0(*(long *)(param_1[1] + 0x80) + 0x150,*(uint *)((long)param_1 + 0x14c));
  }
  if ((*(char *)((long)param_1 + 0x133) != '\0') && ((char)param_1[0x2c] != '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(int *)((long)param_1 + 0x15c) = (int)param_1[0x2b];
    FUN_7101b4eb20(*(long *)(param_1[1] + 0x80),(int)param_1[0x2b]);
  }
  if ((int)param_1[0x1f] != 0) {
    *(int *)((long)param_1 + 300) = (int)param_1[0x22];
    *(long *)((long)param_1 + 0x114) = param_1[0x1f];
    *(long *)((long)param_1 + 0x124) = param_1[0x21];
    *(long *)((long)param_1 + 0x11c) = param_1[0x20];
    param_1[0x1f] = -0x100000000;
    param_1[0x20] = 0xffffffff;
    param_1[0x21] = 0xffffffff;
    iVar6 = *(int *)((long)param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x22) = 0;
    if (iVar6 == 2) {
      FUN_710377aee0(0x3f800000,*(long *)(param_1[1] + 0x80) + 0x20);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0xec) = 0xffffffff00000000;
      param_1[0x13] = 0x400000002;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    else {
      if (iVar6 == 3) {
        FUN_710377aee0(0x3f800000,*(long *)(param_1[1] + 0x80) + 0x20);
        param_1[5] = 0;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        lVar10 = 0x400000003;
      }
      else {
        if (iVar6 != 4) {
          return;
        }
        FUN_710377aee0(0x3f800000,*(long *)(param_1[1] + 0x80) + 0x20);
        lVar10 = 0x400000000;
        param_1[5] = 0;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      param_1[0x15] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x13] = lVar10;
      param_1[0x14] = 0;
      *(undefined8 *)((long)param_1 + 0xec) = 0xffffffff00000000;
    }
    *(undefined1 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xe4) = 0xffffffff00000001;
  }
  return;
}

