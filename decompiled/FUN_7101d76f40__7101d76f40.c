// addr:      7101d76f40
// offset:    0x1d76f40
// name:      FUN_7101d76f40
// mangled:   
// signature: undefined __cdecl FUN_7101d76f40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d76f40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x250) < 3) {
    FUN_7103778300(0x3f800000,
                   *(long *)(**(long **)(param_1 + (ulong)*(uint *)(param_1 + 0x250) * 8 + 0x238) +
                            0x10),0x71043cf78c);
    FUN_7101d79600(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar4 = *(long *)(param_1 + 0x2f0);
    *(undefined4 *)(lVar4 + 0xf0) = 0xfffffffe;
    if (*(long *)(lVar4 + 0xe8) != 0) {
      *(undefined1 *)(*(long *)(*(long *)(lVar4 + 0xe8) + 8) + 0x4aa) = 0;
    }
    lVar3 = *(long *)(lVar4 + 0xe0);
    if ((lVar3 != 0) && (1 < *(int *)(lVar4 + 0xb8) - 1U)) {
      plVar2 = *(long **)(lVar3 + 0x188);
      for (plVar1 = *(long **)(lVar3 + 0x180); plVar1 != plVar2; plVar1 = plVar1 + 1) {
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x180))();
        }
      }
      FUN_7103771a80((long *)(lVar4 + 0xe0),0,0);
      if (0x12 < *(uint *)(lVar4 + 0xb4)) goto LAB_7101d77070;
      *(undefined4 *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0xb4) * 4 + 0x68) = 1;
    }
    if (*(uint *)(param_1 + 0x250) < 3) {
      FUN_71032d6350(param_1 + 0x2e8);
      if (*(uint *)(param_1 + 0x21c) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x21c) * 4 + 0x1d0) = 10;
        return;
      }
    }
  }
LAB_7101d77070:
                    /* WARNING: Subroutine does not return */
  abort();
}

