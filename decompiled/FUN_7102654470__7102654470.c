// addr:      7102654470
// offset:    0x2654470
// name:      FUN_7102654470
// mangled:   
// signature: undefined __cdecl FUN_7102654470(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102654470(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  long ***ppplVar1;
  int iVar2;
  long ****pppplVar3;
  long lVar4;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar7 = 0;
  plVar5 = extraout_x1;
  do {
    lVar4 = param_1[0x62];
    if ((&DAT_7104550f80)[lVar7 * 0x10] == '\0') {
      ppplVar1 = (long ***)((&DAT_7104550f88)[lVar7 * 2] & 0xffffffffff);
      if (ppplVar1 != (long ***)0x0) {
        for (puVar6 = *(undefined8 **)(lVar4 + 0xd0); puVar6 != *(undefined8 **)(lVar4 + 0xd8);
            puVar6 = puVar6 + 2) {
          if ((*(uint *)(puVar6 + 1) < 2) &&
             (pppplVar3 = (long ****)*puVar6, ppplVar1 == pppplVar3[0xd])) goto LAB_71026544a8;
        }
      }
    }
    else {
      plVar5 = *(long **)(lVar4 + 0xd0);
      if (plVar5 != *(long **)(lVar4 + 0xd8)) {
LAB_7102654548:
        if ((1 < *(uint *)(plVar5 + 1)) ||
           (((&DAT_7104550f88)[lVar7 * 2] & 0xffffffffff) != *(ulong *)(*plVar5 + 0x68))) break;
        pppplVar3 = FUN_710262fb80(lVar4,plVar5,param_3,(byte ****)param_4,(long ****)param_5,
                                   param_6,(long ***)param_7,param_8);
        plVar5 = extraout_x1_00;
LAB_71026544a8:
        param_1[lVar7 + 0x10b] = (long)pppplVar3;
        if (pppplVar3 != (long ****)0x0) {
          if ((int)lVar7 - 0xcU < 3) {
            *(undefined1 *)(pppplVar3 + 0x22) = 0;
            FUN_71025e9d50((long *)(pppplVar3 + 0x21),plVar5,(long ****)param_3,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            lVar4 = param_1[lVar7 + 0x10b];
            plVar5 = extraout_x1_01;
            if (lVar4 != 0) {
              if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar4 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar4 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar4 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar4 + 0xb0) + 0x10) = 0;
              }
            }
          }
          else {
            *(undefined1 *)(pppplVar3 + 0x22) = 1;
            FUN_71025e9d50((long *)(pppplVar3 + 0x21),plVar5,(long ****)param_3,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            plVar5 = extraout_x1_02;
          }
        }
        goto LAB_71026545b8;
      }
    }
LAB_71026545b0:
    param_1[lVar7 + 0x10b] = 0;
LAB_71026545b8:
    lVar7 = lVar7 + 1;
    if (lVar7 == 0x28) {
      plVar5 = (long *)**(long **)(param_1[0x60] + 0x18);
      while ((*(ulong *)(*plVar5 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
        plVar5 = plVar5 + 1;
      }
      puVar6 = *(undefined8 **)(*plVar5 + 0x130);
      if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51ba == '\0') {
        if (puVar6 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0002");
          return;
        }
      }
      else if (puVar6 != (undefined8 *)0x0) {
        FUN_71025f5420((undefined8 *)*puVar6,(undefined8 *)puVar6[1],"IPP0002");
        return;
      }
      return;
    }
  } while( true );
  plVar5 = plVar5 + 2;
  if (*(long **)(lVar4 + 0xd8) == plVar5) goto LAB_71026545b0;
  goto LAB_7102654548;
}

