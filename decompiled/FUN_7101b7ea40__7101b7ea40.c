// addr:      7101b7ea40
// offset:    0x1b7ea40
// name:      FUN_7101b7ea40
// mangled:   
// signature: undefined __cdecl FUN_7101b7ea40(long param_1, uint param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b7ea40(long param_1,uint param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  long *********ppppppppplVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar6 = SUB84(param_5,0);
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(param_1 + 0x80);
  uVar2 = (uint)param_6;
  switch(param_3) {
  case 0:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x40a00000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_jump";
    break;
  case 1:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0x3f800000;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x40c00000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_speed";
    break;
  case 2:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0x40000000;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x40e00000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_shield";
    break;
  case 3:
    plVar3 = *(long **)(param_1 + 0x78);
    uVar1 = 0x40400000;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x41000000;
    }
    uVar8 = (ulong)uVar1;
    pcVar4 = "info_melee_lct_monad_buster";
    break;
  case 4:
    plVar3 = *(long **)(param_1 + 0x78);
    pcVar4 = "info_melee_lct_monad_smash";
    uVar1 = 0x40800000;
    if (((ulong)param_4 & 1) == 0) {
      uVar1 = 0x41100000;
    }
    uVar8 = (ulong)uVar1;
    break;
  default:
    uVar8 = 0;
    goto LAB_7101b7eb50;
  }
  ppppppppplVar5 = (long *********)0x0;
  plVar3 = FUN_7103240d30(plVar3,(long)pcVar4,(long ****)0x0,param_4,param_5,param_6,param_7,param_8
                         );
  FUN_7103778b80(*(long *)(lVar7 + (long)(int)param_2 * 0xd90 + 0xf50),(long)plVar3,ppppppppplVar5,
                 param_4,param_5,param_6,param_7,param_8);
LAB_7101b7eb50:
  lVar7 = lVar7 + (long)(int)param_2 * 0xd90;
  FUN_710377b010(uVar8,lVar7 + 0xe18);
  FUN_7101b7e8f0(param_1,param_2,uVar6,(byte ****)(ulong)(uVar2 & 1),param_5,param_6,param_7,param_8
                );
  FUN_710377aee0(0x3f800000,lVar7 + 0xe28);
  return;
}

