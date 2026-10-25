// addr:      71030a3380
// offset:    0x30a3380
// name:      FUN_71030a3380
// mangled:   
// signature: undefined __cdecl FUN_71030a3380(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_71030a3380(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar2 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) {
      return;
    }
    lVar4 = *plVar2;
    plVar2 = plVar2 + 1;
  } while ((*(ulong *)(lVar4 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  if (lVar4 == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x130);
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar1 = (undefined8 *)*puVar5;
  puVar5 = (undefined8 *)puVar5[1];
  if (DAT_71052c51ba != '\0') {
    FUN_71025f5420(puVar1,puVar5,"IPP0002");
    return;
  }
  FUN_71025f55b0(puVar1,puVar5,"IPP0002");
  return;
}

