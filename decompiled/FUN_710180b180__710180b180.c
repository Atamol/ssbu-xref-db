// addr:      710180b180
// offset:    0x180b180
// name:      FUN_710180b180
// mangled:   
// signature: undefined __cdecl FUN_710180b180(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710180b180(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  undefined8 extraout_x1;
  long *plVar3;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x178) + 0x80) + 0x40);
    lVar13 = *(long *)*plVar12;
    *(undefined4 *)((long *)*plVar12 + 2) = 0;
    plVar6 = *(long **)(lVar13 + 0x10);
    *plVar6 = lVar13;
    *(undefined4 *)(plVar6 + 1) = 0x48;
    lVar5 = *(long *)(lVar13 + 0x10);
    *(long *)(lVar13 + 0x10) = lVar5 + 0x10;
    lVar9 = *(long *)(*(long *)(lVar13 + 0x18) + 200);
    *(long *)(lVar13 + 0x10) = lVar5;
    if (lVar9 == lVar13) {
      lVar5 = *(long *)(*(long *)(lVar13 + 0x18) + 0x40);
      if (*(uint *)(lVar5 + 0xc) < 2) {
        plVar6 = (long *)(*(long *)(lVar5 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar5 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar6[3] == 0x13) && (plVar3 = plVar6, plVar6[2] == 2)) break;
          piVar1 = (int *)((long)plVar6 + 0x1c);
          plVar6 = plVar6 + (long)*piVar1 * 4;
          plVar3 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar3 = (long *)(*(long *)(lVar5 + 0x10) + 0x10);
      }
      pcVar4 = "set_camera_type";
      FUN_71038f4d40(lVar13,plVar3,"set_camera_type");
      param_3 = (undefined **)pcVar4;
    }
    else {
      FUN_71038f4b20(lVar13,"set_camera_type");
      FUN_71038f4fc0(lVar13,-2);
    }
    puVar7 = (undefined8 *)(*(long *)(lVar13 + 0x10) + -0x10);
    if ((puVar7 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar13 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar13 + 0x10) = puVar7;
    }
    else {
      lVar5 = *(long *)*plVar12;
      puVar7 = *(undefined8 **)(lVar5 + 0x10);
      *puVar7 = 2;
      *(undefined4 *)(puVar7 + 1) = 0x13;
      *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 0x10;
      *(int *)(*plVar12 + 0x10) = *(int *)(*plVar12 + 0x10) + 1;
      FUN_7103377130(plVar12,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_71019c8d10(*(long *)(*(long *)(param_1 + 0x188) + 0x80),*(int *)(param_1 + 0x1cc),
                   (char *)param_3,param_4,param_5,param_6,param_7,param_8);
    if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_71019c8b00(*(long *)(*(long *)(param_1 + 0x188) + 0x80),DAT_7105307ca8,(char *)param_3,
                   param_4,param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(param_1 + 0x188);
    lVar9 = *(long *)(lVar5 + 0x80);
    if (*(undefined8 **)(lVar9 + 0x18) != *(undefined8 **)(lVar9 + 0x10)) {
      FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(lVar9 + 0x10),0,(long ****)0x1001,
                     param_4,param_5,param_6,param_7,param_8);
      *(undefined4 *)(lVar9 + 0xe4) = 0;
      *(undefined8 *)(lVar9 + 0xe8) = 0xffffffff;
      *(undefined4 *)(lVar9 + 0xf0) = 0xffffffff;
      *(undefined8 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      *(undefined8 *)(lVar9 + 0xdc) = 0;
      *(undefined8 *)(lVar9 + 0xd4) = 0;
      *(undefined8 *)(lVar9 + 0xcc) = 0;
      *(undefined8 *)(lVar9 + 0xc4) = 0;
      *(undefined8 *)(lVar9 + 0xbc) = 0;
      *(undefined8 *)(lVar9 + 0xb4) = 0;
      *(undefined8 *)(lVar9 + 0xac) = 0;
      *(undefined8 *)(lVar9 + 0xa4) = 0;
      *(undefined8 *)(lVar9 + 0x9c) = 0;
      *(undefined1 *)(lVar9 + 0xf4) = 0;
      *(undefined4 *)(lVar9 + 0x98) = 1;
      FUN_71019c14b0((long *)(lVar9 + 0x50));
      *(undefined1 *)(lVar5 + 0x70) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(param_1 + 0x1b0) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x188) + 0x80) + 0x160);
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_00, iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_01;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x188) + 0x80);
  if (*(int *)(lVar5 + 0xe8) != 0) {
    if (*(char *)(lVar5 + 0x168) == '\0') {
      return;
    }
    *(undefined1 *)(lVar5 + 0x168) = 0;
    DAT_7105307ca8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x188) + 0x80) + 0x140);
    FUN_710180ced0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  uVar10 = *(ulong *)(lVar5 + 0x148);
  uVar8 = uVar10 & 0xffffffffff;
  if ((((uVar10 & 0xff00000000000000) == 0x1300000000000000 && uVar8 != 0) &&
      ((DAT_7105307ca8 & 0xff00000000000000) == 0x1300000000000000)) &&
     ((DAT_7105307ca8 & 0xffffffffff) != 0)) {
    if (((DAT_7105307ca8 ^ uVar10) & 0xffffffffff) != 0) {
LAB_710180b2c4:
      DAT_7105307ca8 = uVar10;
      FUN_710180ced0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar5 = *(long *)(*(long *)(param_1 + 0x188) + 0x80);
      uVar10 = *(ulong *)(lVar5 + 0x148);
      uVar8 = uVar10 & 0xffffffffff;
      param_2 = extraout_x1;
    }
  }
  else if (((DAT_7105307ca8 & 0xffffffffff) != 0 &&
           (DAT_7105307ca8 & 0xff00000000000000) == 0x1300000000000000) !=
           ((uVar10 & 0xff00000000000000) == 0x1300000000000000 && uVar8 != 0)) goto LAB_710180b2c4;
  uVar11 = *(ulong *)(lVar5 + 0x150);
  if ((((uVar11 & 0xff00000000000000) == 0x1300000000000000) && ((uVar11 & 0xffffffffff) != 0)) &&
     (((uVar10 & 0xff00000000000000) == 0x1300000000000000 && (uVar8 != 0)))) {
    if (((uVar10 ^ uVar11) & 0xffffffffff) == 0) goto LAB_710180b394;
  }
  else if ((uVar8 != 0 && (uVar10 & 0xff00000000000000) == 0x1300000000000000) ==
           ((uVar11 & 0xff00000000000000) == 0x1300000000000000 && (uVar11 & 0xffffffffff) != 0))
  goto LAB_710180b394;
  lVar5 = *(long *)(param_1 + 0x178);
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_02, iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_2 = extraout_x1_03;
  }
  FUN_71019cb2e0(*(long *)(lVar5 + 0x80),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined2 *)(param_1 + 0x161) = 0x101;
  lVar5 = *(long *)(*(long *)(param_1 + 0x188) + 0x80);
LAB_710180b394:
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(lVar5 + 0x164);
  if (0 < *(int *)(param_1 + 0x144)) {
    *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
  }
  return;
}

