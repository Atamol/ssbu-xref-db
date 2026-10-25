// addr:      71038fc6c0
// offset:    0x38fc6c0
// name:      FUN_71038fc6c0
// mangled:   
// signature: undefined __cdecl FUN_71038fc6c0(long param_1, uint * param_2)


void FUN_71038fc6c0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  uVar1 = *param_2;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10);
  if (199 < *(ushort *)(param_1 + 0xc6)) {
                    /* WARNING: Subroutine does not return */
    FUN_71038fca40(param_1,"C stack overflow",puVar3);
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *plVar4 = *(long *)(param_1 + 0x38) + plVar4[7];
    if ((*(byte *)((long)plVar4 + 0x42) >> 1 & 1) == 0) {
      if ((code *)plVar4[4] != (code *)0x0) {
        uVar1 = (*(code *)plVar4[4])(param_1,1,plVar4[6]);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * -0x10);
      }
      FUN_71038fbfd0(param_1,plVar4,puVar3,uVar1);
    }
    else {
      FUN_7103924610(param_1);
    }
    FUN_71038fc7e0(param_1,(undefined4 *)0x0);
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_71038fca40(param_1,"cannot resume dead coroutine",puVar3);
  }
  if (plVar4 == (long *)(param_1 + 0x60)) {
    uVar2 = FUN_71038fb8d0(param_1,puVar3 + -2,0xffff);
    if ((int)uVar2 != 0) {
      return;
    }
    FUN_7103924610(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71038fca40(param_1,"cannot resume non-suspended coroutine",puVar3);
}

