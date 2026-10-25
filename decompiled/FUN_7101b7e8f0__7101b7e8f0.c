// addr:      7101b7e8f0
// offset:    0x1b7e8f0
// name:      FUN_7101b7e8f0
// mangled:   
// signature: undefined __cdecl FUN_7101b7e8f0(long param_1, uint param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b7e8f0(long param_1,uint param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *********ppppppppplVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(param_1 + 0x80);
  switch(param_3) {
  case 1:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xd;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x12;
    }
    pcVar4 = "info_melee_lct_monad_speed";
    break;
  case 2:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xe;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x13;
    }
    pcVar4 = "info_melee_lct_monad_shield";
    break;
  case 3:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xf;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x14;
    }
    pcVar4 = "info_melee_lct_monad_buster";
    break;
  case 4:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0x10;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x15;
    }
    pcVar4 = "info_melee_lct_monad_smash";
    break;
  default:
    plVar1 = *(long **)(param_1 + 0x78);
    lVar3 = 0xc;
    if (((ulong)param_4 & 1) == 0) {
      lVar3 = 0x11;
    }
    pcVar4 = "info_melee_lct_monad_jump";
  }
  ppppppppplVar2 = (long *********)0x0;
  plVar1 = FUN_7103240d30(plVar1,(long)pcVar4,(long ****)0x0,param_4,param_5,param_6,param_7,param_8
                         );
  lVar6 = lVar5 + (long)(int)param_2 * 0xd90;
  FUN_7103778b80(*(long *)(lVar6 + 0xf60),(long)plVar1,ppppppppplVar2,param_4,param_5,param_6,
                 param_7,param_8);
  ppppppppplVar2 = (long *********)0x0;
  plVar1 = FUN_7103240d30(*(long **)(param_1 + 0x78),(long)pcVar4,(long ****)0x0,param_4,param_5,
                          param_6,param_7,param_8);
  FUN_7103778b80(*(long *)(lVar6 + 0xf70),(long)plVar1,ppppppppplVar2,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377aee0(0x3f800000,lVar5 + (long)(int)param_2 * 0xd90 + lVar3 * 0x10 + 0xc68);
  return;
}

