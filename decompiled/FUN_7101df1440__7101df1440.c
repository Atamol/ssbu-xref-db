// addr:      7101df1440
// offset:    0x1df1440
// name:      FUN_7101df1440
// mangled:   
// signature: undefined __cdecl FUN_7101df1440(undefined8 * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df1440(undefined8 *param_1,uint *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  byte ****ppppbVar2;
  long lVar3;
  ulong local_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_2 + 6) == 0) {
    FUN_7103778300(0x3f800000,param_1[3],0x710433a647);
  }
  else {
    ppppppppplVar1 = param_3;
    ppppbVar2 = param_4;
    FUN_7103778300(0x3f800000,param_1[3],0x710434a889);
    FUN_7101df0960(param_1,*(long *)(param_2 + 6),ppppppppplVar1,ppppbVar2,param_5,param_6,param_7,
                   param_8);
  }
  if ((*param_2 < 0xe) && ((1 << (ulong)(*param_2 & 0x1f) & 0x273dU) != 0)) {
    lVar3 = **(long **)param_1[1];
    *(undefined4 *)(*(long *)(lVar3 + 0x600) + 0xdc) = 0x80;
    *(undefined4 *)(*(long *)(lVar3 + 0x600) + 0xe0) = 0x10;
  }
  uStack_38 = *(undefined8 *)(param_2 + 2);
  local_40 = (ulong)CONCAT16(*(undefined1 *)((long)param_2 + 0x13),
                             CONCAT15(*(undefined1 *)((long)param_2 + 0x11),
                                      CONCAT14((char)param_2[4],*param_2)));
  FUN_7101dfac40(param_1[4],&local_40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101df0840((long)param_1,*param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(uint *)((long)param_1 + 0x144) = *param_2;
  return;
}

