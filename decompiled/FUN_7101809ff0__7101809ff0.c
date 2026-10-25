// addr:      7101809ff0
// offset:    0x1809ff0
// name:      FUN_7101809ff0
// mangled:   
// signature: undefined __cdecl FUN_7101809ff0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101809ff0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  lVar8 = *(long *)(param_1 + 0x178);
  if (*(int *)(param_1 + 0x14c) == 0) {
    plVar13 = *(long **)(*(long *)(lVar8 + 0x80) + 0x40);
    lVar14 = *(long *)*plVar13;
    bVar3 = *(byte *)(param_1 + 0x161);
    *(undefined4 *)((long *)*plVar13 + 2) = 0;
    plVar9 = *(long **)(lVar14 + 0x10);
    *plVar9 = lVar14;
    *(undefined4 *)(plVar9 + 1) = 0x48;
    lVar8 = *(long *)(lVar14 + 0x10);
    *(long *)(lVar14 + 0x10) = lVar8 + 0x10;
    lVar12 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
    *(long *)(lVar14 + 0x10) = lVar8;
    if (lVar12 == lVar14) {
      lVar8 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
      if (*(uint *)(lVar8 + 0xc) < 2) {
        plVar9 = (long *)(*(long *)(lVar8 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar8 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar9[3] == 0x13) && (plVar6 = plVar9, plVar9[2] == 2)) break;
          piVar1 = (int *)((long)plVar9 + 0x1c);
          plVar9 = plVar9 + (long)*piVar1 * 4;
          plVar6 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar8 + 0x10) + 0x10);
      }
      pcVar7 = "set_flag_changed";
      FUN_71038f4d40(lVar14,plVar6,"set_flag_changed");
    }
    else {
      FUN_71038f4b20(lVar14,"set_flag_changed");
      FUN_71038f4fc0(lVar14,-2);
      pcVar7 = (char *)param_3;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
    if ((puVar10 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar14 + 0x10) = puVar10;
    }
    else {
      lVar8 = *(long *)*plVar13;
      puVar11 = *(uint **)(lVar8 + 0x10);
      puVar11[2] = 1;
      *puVar11 = (uint)bVar3;
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 0x10;
      *(int *)(*plVar13 + 0x10) = *(int *)(*plVar13 + 0x10) + 1;
      FUN_7103377130(plVar13,0,(long ****)pcVar7,param_4,param_5,param_6,param_7,param_8);
    }
    plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x178) + 0x80) + 0x40);
    lVar14 = *(long *)*plVar13;
    *(undefined4 *)((long *)*plVar13 + 2) = 0;
    plVar9 = *(long **)(lVar14 + 0x10);
    *plVar9 = lVar14;
    *(undefined4 *)(plVar9 + 1) = 0x48;
    lVar8 = *(long *)(lVar14 + 0x10);
    *(long *)(lVar14 + 0x10) = lVar8 + 0x10;
    lVar12 = *(long *)(*(long *)(lVar14 + 0x18) + 200);
    *(long *)(lVar14 + 0x10) = lVar8;
    if (lVar12 == lVar14) {
      lVar8 = *(long *)(*(long *)(lVar14 + 0x18) + 0x40);
      if (*(uint *)(lVar8 + 0xc) < 2) {
        plVar9 = (long *)(*(long *)(lVar8 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar8 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar9[3] == 0x13) && (plVar6 = plVar9, plVar9[2] == 2)) break;
          piVar1 = (int *)((long)plVar9 + 0x1c);
          plVar9 = plVar9 + (long)*piVar1 * 4;
          plVar6 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar6 = (long *)(*(long *)(lVar8 + 0x10) + 0x10);
      }
      pcVar7 = "set_camera_type";
      FUN_71038f4d40(lVar14,plVar6,"set_camera_type");
    }
    else {
      FUN_71038f4b20(lVar14,"set_camera_type");
      FUN_71038f4fc0(lVar14,-2);
    }
    puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x10) + -0x10);
    if ((puVar10 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar14 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar14 + 0x10) = puVar10;
    }
    else {
      lVar8 = *(long *)*plVar13;
      puVar10 = *(undefined8 **)(lVar8 + 0x10);
      *puVar10 = 1;
      *(undefined4 *)(puVar10 + 1) = 0x13;
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 0x10;
      *(int *)(*plVar13 + 0x10) = *(int *)(*plVar13 + 0x10) + 1;
      FUN_7103377130(plVar13,0,(long ****)pcVar7,param_4,param_5,param_6,param_7,param_8);
    }
    lVar8 = *(long *)(param_1 + 0x178);
    lVar12 = *(long *)(lVar8 + 0x80);
    if (*(undefined8 **)(lVar12 + 0x18) == *(undefined8 **)(lVar12 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    FUN_7103775dc0((long *)**(undefined8 **)**(undefined8 **)(lVar12 + 0x10),0,
                   (long ****)&DAT_00001000,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(lVar12 + 0xdc) = 0;
    *(undefined8 *)(lVar12 + 0xe0) = 0xffffffff;
    *(undefined4 *)(lVar12 + 0xe8) = 0xffffffff;
    *(undefined2 *)(lVar12 + 0x130) = 0;
    *(undefined8 *)(lVar12 + 0xd4) = 0;
    *(undefined8 *)(lVar12 + 0xcc) = 0;
    *(undefined8 *)(lVar12 + 0xc4) = 0;
    *(undefined8 *)(lVar12 + 0xbc) = 0;
    *(undefined8 *)(lVar12 + 0xb4) = 0;
    *(undefined8 *)(lVar12 + 0xac) = 0;
    *(undefined8 *)(lVar12 + 0xa4) = 0;
    *(undefined8 *)(lVar12 + 0x9c) = 0;
    *(undefined8 *)(lVar12 + 0x94) = 0;
    *(undefined1 *)(lVar12 + 0xec) = 0;
    *(undefined4 *)(lVar12 + 0x90) = 1;
    *(undefined8 *)(lVar12 + 0x50) = 0;
    *(undefined8 *)(lVar12 + 0x58) = 0;
    FUN_71019cacd0((long *)(lVar12 + 0x48));
    *(undefined1 *)(lVar8 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(*(long *)(lVar8 + 0x80) + 300);
    lVar8 = *(long *)(lVar8 + 0x80);
    if (*(char *)(lVar8 + 0x130) == '\0') {
      if (*(char *)(lVar8 + 0x132) != '\0') {
        *(undefined1 *)(lVar8 + 0x132) = 0;
        FUN_710180ced0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(param_1 + 0x162) = 1;
      }
    }
    else {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), param_2 = extraout_x1, iVar4 != 0)) {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        param_2 = extraout_x1_00;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 0x178) + 0x80);
      if (*(char *)(lVar8 + 0x131) != '\0') {
        *(undefined1 *)(param_1 + 0x161) = 1;
        lVar8 = *(long *)(*(long *)(param_1 + 0x178) + 0x80);
      }
      iVar4 = *(int *)(lVar8 + 0x128);
      if (iVar4 < 0) {
        if (iVar4 != -1) {
          *(undefined4 *)(param_1 + 0x168) = 2;
          if (*(uint *)(param_1 + 0x144) < 0x13) {
            *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x144) * 4 + 0xf8) = 1;
            FUN_710180dab0(param_1);
            return;
          }
LAB_710180a560:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + 0x168) = 1;
        if (DAT_7105307c8c != 0) {
          FUN_710180d1c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        if (*(int *)(param_1 + 0x144) < 0x12) {
          uVar2 = *(int *)(param_1 + 0x144) + 1;
          *(uint *)(param_1 + 0x144) = uVar2;
          if (0x12 < uVar2) goto LAB_710180a560;
          *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0xf8) = 4;
        }
      }
      else {
        if (*(int *)(param_1 + 0x144) < 0x12) {
          uVar2 = *(int *)(param_1 + 0x144) + 1;
          *(uint *)(param_1 + 0x144) = uVar2;
          if (0x12 < uVar2) goto LAB_710180a560;
          *(int *)(param_1 + (long)(int)uVar2 * 4 + 0xf8) = iVar4 + 4;
        }
        if (iVar4 == 5) {
          if (*(int *)(param_1 + 0x144) < 0x12) {
            uVar2 = *(int *)(param_1 + 0x144) + 1;
            *(uint *)(param_1 + 0x144) = uVar2;
            if (0x12 < uVar2) goto LAB_710180a560;
            *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0xf8) = 0xb;
          }
        }
        else if (iVar4 == 6) {
          if (*(int *)(param_1 + 0x144) < 0x12) {
            uVar2 = *(int *)(param_1 + 0x144) + 1;
            *(uint *)(param_1 + 0x144) = uVar2;
            if (0x12 < uVar2) goto LAB_710180a560;
            *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0xf8) = 0xb;
          }
          uVar5 = FUN_71032b23e0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8),
                                 0x116b904091);
          FUN_71033149a0(DAT_710532f8d0,uVar5,0,param_4,param_5,param_6,param_7,param_8);
          return;
        }
      }
    }
  }
  return;
}

