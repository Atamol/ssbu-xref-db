// addr:      710180b630
// offset:    0x180b630
// name:      FUN_710180b630
// mangled:   
// signature: undefined __cdecl FUN_710180b630(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710180b630(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 extraout_x1;
  long *plVar4;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0x14c) == 0) {
    plVar11 = *(long **)(*(long *)(*(long *)(param_1 + 0x178) + 0x80) + 0x40);
    lVar12 = *(long *)*plVar11;
    *(undefined4 *)((long *)*plVar11 + 2) = 0;
    plVar7 = *(long **)(lVar12 + 0x10);
    *plVar7 = lVar12;
    *(undefined4 *)(plVar7 + 1) = 0x48;
    lVar6 = *(long *)(lVar12 + 0x10);
    *(long *)(lVar12 + 0x10) = lVar6 + 0x10;
    lVar10 = *(long *)(*(long *)(lVar12 + 0x18) + 200);
    *(long *)(lVar12 + 0x10) = lVar6;
    if (lVar10 == lVar12) {
      lVar6 = *(long *)(*(long *)(lVar12 + 0x18) + 0x40);
      if (*(uint *)(lVar6 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar6 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar6 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar7[3] == 0x13) && (plVar4 = plVar7, plVar7[2] == 2)) break;
          piVar1 = (int *)((long)plVar7 + 0x1c);
          plVar7 = plVar7 + (long)*piVar1 * 4;
          plVar4 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar4 = (long *)(*(long *)(lVar6 + 0x10) + 0x10);
      }
      pcVar5 = "set_camera_type";
      FUN_71038f4d40(lVar12,plVar4,"set_camera_type");
      param_3 = (undefined **)pcVar5;
    }
    else {
      FUN_71038f4b20(lVar12,"set_camera_type");
      FUN_71038f4fc0(lVar12,-2);
    }
    puVar8 = (undefined8 *)(*(long *)(lVar12 + 0x10) + -0x10);
    if ((puVar8 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar12 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar12 + 0x10) = puVar8;
    }
    else {
      lVar6 = *(long *)*plVar11;
      puVar8 = *(undefined8 **)(lVar6 + 0x10);
      *puVar8 = 2;
      *(undefined4 *)(puVar8 + 1) = 0x13;
      *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 0x10;
      *(int *)(*plVar11 + 0x10) = *(int *)(*plVar11 + 0x10) + 1;
      FUN_7103377130(plVar11,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_71019c9fe0(*(long *)(*(long *)(param_1 + 400) + 0x80),(byte)DAT_7105307cb8,param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar6 = *(long *)(param_1 + 400);
    plVar7 = *(long **)(lVar6 + 0x80);
    FUN_7103775dc0(*(long **)plVar7[0x19],0,(long ****)0x1001,param_4,param_5,param_6,param_7,
                   param_8);
    plVar7[0x17] = 0xffffffff;
    *(undefined4 *)(plVar7 + 0x18) = 0xffffffff;
    *(undefined4 *)((long)plVar7 + 0xb4) = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    *(undefined8 *)((long)plVar7 + 0xac) = 0;
    *(undefined8 *)((long)plVar7 + 0xa4) = 0;
    *(undefined8 *)((long)plVar7 + 0x9c) = 0;
    *(undefined8 *)((long)plVar7 + 0x94) = 0;
    *(undefined8 *)((long)plVar7 + 0x8c) = 0;
    *(undefined8 *)((long)plVar7 + 0x84) = 0;
    *(undefined8 *)((long)plVar7 + 0x7c) = 0;
    *(undefined8 *)((long)plVar7 + 0x74) = 0;
    *(undefined8 *)((long)plVar7 + 0x6c) = 0;
    *(undefined1 *)((long)plVar7 + 0xc4) = 0;
    *(undefined4 *)(plVar7 + 0xd) = 1;
    FUN_71019c9cc0(plVar7);
    *(undefined1 *)(lVar6 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) =
         *(undefined4 *)(*(long *)(*(long *)(param_1 + 400) + 0x80) + 0xe4);
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_00, iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_2 = extraout_x1_01;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 400) + 0x80);
    if (*(int *)(lVar6 + 0xb8) == 0) {
      uVar9 = *(uint *)(lVar6 + 0xdc);
      uVar2 = 0;
      if (uVar9 < 0xc) {
        uVar2 = uVar9;
      }
      if ((uVar2 & 0xff) != (uint)(byte)DAT_7105307cb8) {
        DAT_7105307cb8._0_1_ = (byte)uVar2;
        FUN_710180ced0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        lVar6 = *(long *)(*(long *)(param_1 + 400) + 0x80);
        uVar9 = *(uint *)(lVar6 + 0xdc);
        param_2 = extraout_x1;
      }
      if (*(uint *)(lVar6 + 0xe0) != uVar9) {
        lVar6 = *(long *)(param_1 + 0x178);
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1_02, iVar3 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
          param_2 = extraout_x1_03;
        }
        FUN_71019cb2e0(*(long *)(lVar6 + 0x80),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        *(undefined2 *)(param_1 + 0x161) = 0x101;
      }
      if (0 < *(int *)(param_1 + 0x144)) {
        *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + -1;
      }
    }
    else if (*(char *)(lVar6 + 0xe8) != '\0') {
      *(undefined1 *)(lVar6 + 0xe8) = 0;
      DAT_7105307cb8._0_1_ =
           (byte)*(undefined4 *)(*(long *)(*(long *)(param_1 + 400) + 0x80) + 0xd8);
      FUN_710180ced0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}

