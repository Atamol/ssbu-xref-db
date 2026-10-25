// addr:      710309b870
// offset:    0x309b870
// name:      FUN_710309b870
// mangled:   
// signature: ulong __cdecl FUN_710309b870(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710309b870(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 local_38;
  
  uVar7 = *(uint *)(&DAT_7104470fc0 + (long)*(int *)(param_1 + 0x788) * 4);
  uVar2 = (ulong)uVar7;
  lVar3 = *(long *)(param_1 + 0x848);
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0xe0) != '\0') && (lVar3 = *(long *)(lVar3 + 200), lVar3 != 0)) {
      puVar5 = *(undefined8 **)(lVar3 + 0x20);
      *(uint *)(lVar3 + 0x40) = uVar7;
      puVar6 = *(undefined8 **)(lVar3 + 0x18);
      if (*(undefined8 **)(lVar3 + 0x18) != puVar5) {
        do {
          puVar4 = puVar6 + 1;
          (**(code **)(*(long *)*puVar6 + 0x18))(uVar2,(long *)*puVar6,1);
          puVar6 = puVar4;
        } while (puVar5 != puVar4);
        puVar6 = *(undefined8 **)(lVar3 + 0x20);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x18); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x38))();
        }
      }
    }
    lVar3 = *(long *)(param_1 + 0x848);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe0) != '\0')) &&
       (lVar3 = *(long *)(lVar3 + 200), lVar3 != 0)) {
      puVar5 = *(undefined8 **)(lVar3 + 0x20);
      *(uint *)(lVar3 + 0x3c) = uVar7;
      puVar6 = *(undefined8 **)(lVar3 + 0x18);
      if (*(undefined8 **)(lVar3 + 0x18) != puVar5) {
        do {
          puVar4 = puVar6 + 1;
          (**(code **)(*(long *)*puVar6 + 0x18))(uVar2,(long *)*puVar6,0);
          puVar6 = puVar4;
        } while (puVar5 != puVar4);
        puVar6 = *(undefined8 **)(lVar3 + 0x20);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x18); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x38))();
        }
      }
    }
  }
  FUN_710260fdd0(uVar2,*(long *)(param_1 + 0x840),1);
  FUN_710260fdd0(uVar2,*(long *)(param_1 + 0x850),1);
  lVar3 = *(long *)(param_1 + 0x848);
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0xe0) != '\0') && (lVar3 = *(long *)(lVar3 + 200), lVar3 != 0)) {
      puVar5 = *(undefined8 **)(lVar3 + 0x20);
      *(uint *)(lVar3 + 0x40) = uVar7;
      puVar6 = *(undefined8 **)(lVar3 + 0x18);
      if (*(undefined8 **)(lVar3 + 0x18) != puVar5) {
        do {
          puVar4 = puVar6 + 1;
          (**(code **)(*(long *)*puVar6 + 0x18))(uVar2,(long *)*puVar6,1);
          puVar6 = puVar4;
        } while (puVar5 != puVar4);
        puVar6 = *(undefined8 **)(lVar3 + 0x20);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x18); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x38))();
        }
      }
    }
    lVar3 = *(long *)(param_1 + 0x848);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0xe0) != '\0')) &&
       (lVar3 = *(long *)(lVar3 + 200), lVar3 != 0)) {
      puVar5 = *(undefined8 **)(lVar3 + 0x20);
      *(uint *)(lVar3 + 0x3c) = uVar7;
      puVar6 = *(undefined8 **)(lVar3 + 0x18);
      if (*(undefined8 **)(lVar3 + 0x18) != puVar5) {
        do {
          puVar4 = puVar6 + 1;
          (**(code **)(*(long *)*puVar6 + 0x18))(uVar2,(long *)*puVar6,0);
          puVar6 = puVar4;
        } while (puVar5 != puVar4);
        puVar6 = *(undefined8 **)(lVar3 + 0x20);
        for (puVar5 = *(undefined8 **)(lVar3 + 0x18); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x38))();
        }
      }
    }
  }
  uVar7 = *(uint *)(param_1 + 0x788);
  FUN_7102633910(*(long *)(param_1 + 0x318),(long *********)"render_param",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7102633800(*(long *)(param_1 + 0x318),(long *********)"reflection_cubemap",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if (uVar7 < 8) {
    FUN_7102633a10(*(long *)(param_1 + 0x318),
                   *(long **********)(&DAT_710516b6f0 + (long)(int)uVar7 * 8),1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = FUN_7102633b90(*(long *)(param_1 + 0x318),
                           (long *********)(&PTR_s_stage_spring_710516b730)[(int)uVar7],1,param_4,
                           param_5,param_6,param_7,param_8);
    uVar7 = *(uint *)(param_1 + 0x788);
    lVar3 = *(long *)(*(long *)(param_1 + 0x318) + 0x10);
    *(undefined1 *)(lVar3 + 0x25) = 1;
    if (uVar7 < 8) {
      uVar1 = *(undefined4 *)(&DAT_710455c64c + (long)(int)uVar7 * 8);
      *(undefined4 *)(lVar3 + 0x48) = uVar1;
      *(undefined4 *)(param_1 + 0x888) = uVar1;
      if (*(uint *)(param_1 + 0x788) < 8) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x790) + 0x70);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe0) != '\0')) {
          local_38 = *(undefined8 *)(&DAT_710516b6f0 + (long)(int)*(uint *)(param_1 + 0x788) * 8);
          uVar7 = FUN_71026527b0(*(undefined8 **)(lVar3 + 0xb8),&local_38,(long *********)0x1,
                                 param_4,param_5,param_6,param_7,param_8);
          uVar2 = (ulong)uVar7;
        }
        if (*(char *)(param_1 + 0x885) != '\0') {
          if (7 < *(uint *)(param_1 + 0x788)) goto LAB_710309bb84;
          lVar3 = *(long *)(param_1 + 0x7f0);
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe0) != '\0')) {
            local_38 = *(undefined8 *)(&DAT_710516b6f0 + (long)(int)*(uint *)(param_1 + 0x788) * 8);
            uVar7 = FUN_71026527b0(*(undefined8 **)(lVar3 + 0xb8),&local_38,(long *********)0x1,
                                   param_4,param_5,param_6,param_7,param_8);
            uVar2 = (ulong)uVar7;
          }
        }
        return uVar2;
      }
    }
  }
LAB_710309bb84:
                    /* WARNING: Subroutine does not return */
  abort();
}

