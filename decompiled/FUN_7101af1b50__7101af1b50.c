// addr:      7101af1b50
// offset:    0x1af1b50
// name:      FUN_7101af1b50
// mangled:   
// signature: undefined __cdecl FUN_7101af1b50(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af1b50(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    uVar3 = 1;
    FUN_7103771d60(&local_40,*(long *)(param_1 + 0xd8),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    plVar2 = local_38;
    if ((long *)*local_38 != (long *)0x0) {
      uVar3 = (**(code **)(*(long *)*local_38 + 0x210))();
      uVar3 = uVar3 & 0xffffffff;
    }
    local_40 = &PTR_FUN_710523d9c8;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
    if ((uVar3 & 1) != 0) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x7104421e4c);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xd0),0x71042a3654);
    *(undefined8 *)(param_1 + 0xe0) = 0xafffff0000000000;
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x70))(*(long **)(param_1 + 0xd8),0);
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
    if (((lVar1 == 0) ||
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x71042a3654), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
      if (0x12 < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
    }
  }
  return;
}

