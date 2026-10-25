// addr:      71038fb3c0
// offset:    0x38fb3c0
// name:      FUN_71038fb3c0
// mangled:   
// signature: noreturn undefined __cdecl FUN_71038fb3c0(long param_1, int param_2)


void FUN_71038fb3c0(long param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  int extraout_w1;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(*(long *)(param_1 + 0x58) + 0x140) = param_2;
    longjmp((__jmp_buf_tag *)(*(long *)(param_1 + 0x58) + 8),1);
    lVar4 = extraout_x8;
    param_2 = extraout_w1;
LAB_71038fb430:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 **)(lVar4 + 0x10) = puVar3 + 2;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    *puVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar3[1] = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_71038fb3c0(*(long *)(unaff_x20 + 200),param_2);
  }
  unaff_x20 = *(long *)(param_1 + 0x18);
  *(char *)(param_1 + 0xc) = (char)param_2;
  lVar4 = *(long *)(unaff_x20 + 200);
  if (*(long *)(lVar4 + 0x58) != 0) goto LAB_71038fb430;
  if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_71038fb4a8;
  plVar5 = *(long **)(param_1 + 0x10);
  if (param_2 == 6) {
    puVar3 = FUN_7103917660(param_1,"error in error handling",0x17);
    *plVar5 = (long)puVar3;
    bVar2 = *(byte *)(puVar3 + 1);
LAB_71038fb46c:
    *(uint *)(plVar5 + 1) = bVar2 | 0x40;
  }
  else {
    if (param_2 == 4) {
      lVar4 = *(long *)(unaff_x20 + 0xd8);
      *plVar5 = lVar4;
      bVar2 = *(byte *)(lVar4 + 8);
      goto LAB_71038fb46c;
    }
    *plVar5 = plVar5[-2];
    plVar5[1] = plVar5[-1];
  }
  plVar5 = plVar5 + 2;
  *(long **)(param_1 + 0x10) = plVar5;
  if (*(long **)(*(long *)(param_1 + 0x20) + 8) < plVar5) {
    *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar5;
  }
  (**(code **)(unaff_x20 + 0xc0))(param_1);
LAB_71038fb4a8:
                    /* WARNING: Subroutine does not return */
  abort();
}

