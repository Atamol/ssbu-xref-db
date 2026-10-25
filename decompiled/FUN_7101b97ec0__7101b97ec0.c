// addr:      7101b97ec0
// offset:    0x1b97ec0
// name:      FUN_7101b97ec0
// mangled:   
// signature: undefined __cdecl FUN_7101b97ec0(char * param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b97ec0(char *param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long *********ppppppppplVar3;
  
  if (*param_1 == '\0') {
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x7104433480,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0x90),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71042e6e4e,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xa0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x710425f124,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xb0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71043f0717,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    lVar2 = *(long *)(param_1 + 0xc0);
  }
  else {
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x710425f124,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    FUN_7103778b80(*(long *)(param_1 + 0xd0),(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppppppplVar3 = (long *********)0x0;
    plVar1 = FUN_7103240d30(param_2,0x71043f0717,(long ****)0x0,param_4,param_5,param_6,param_7,
                            param_8);
    lVar2 = *(long *)(param_1 + 0xe0);
  }
  FUN_7103778b80(lVar2,(long)plVar1,ppppppppplVar3,param_4,param_5,param_6,param_7,param_8);
  return;
}

