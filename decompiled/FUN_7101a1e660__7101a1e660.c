// addr:      7101a1e660
// offset:    0x1a1e660
// name:      FUN_7101a1e660
// mangled:   
// signature: undefined __cdecl FUN_7101a1e660(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1e660(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long *plVar2;
  byte ****ppppbVar3;
  long *********ppppppppplVar4;
  long lVar5;
  uint local_38;
  ushort local_34 [2];
  
  ppppppppplVar4 = (long *********)&DAT_c1ffff0000000000;
  FUN_7101a06920(*(long *)(param_1 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a028b0(*(long *)(param_1 + 8),3,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar5 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar1 = FUN_71032631a0(lVar5,0x11b1ccb807);
  if (((ulong)puVar1 & 0xff00000000000000) != 0xc100000000000000 ||
      ((ulong)puVar1 & 0xffffffffff) == 0) {
    ppppppppplVar4 = (long *********)FUN_7103263030(lVar5,0xc1ffff0000000000);
  }
  ppppbVar3 = (byte ****)0x0;
  FUN_7101a029b0(*(long *)(param_1 + 8),&DAT_c1ffff0000000000,ppppppppplVar4,0,param_5,param_6,
                 param_7,param_8);
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x211) = 0;
  *(undefined4 *)(lVar5 + 0x250) = 0;
  if (*(int *)(lVar5 + 0x21c) == 1) {
    ppppbVar3 = (byte ****)0x0;
    FUN_710377a280(lVar5 + 0x88,(byte *)"mel_chara_select_lv_n",1);
    ppppppppplVar4 = (long *********)(ulong)*(uint *)(lVar5 + 0x250);
    FUN_7103778430(lVar5 + 0x68,"cp_level_%d",ppppppppplVar4,ppppbVar3,param_5,param_6,param_7,
                   param_8);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x2e0) = 0;
  *(undefined4 *)(lVar5 + 0x254) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x40),0x7104349d11);
  plVar2 = *(long **)(*(long *)(lVar5 + 0xa0) + 0x10);
  if (plVar2 != (long *)0x0) {
    ppppppppplVar4 = (long *********)0x0;
    ppppbVar3 = (byte ****)0x0;
    local_34[0] = 0;
    local_34[1] = 0;
    FUN_71037a2270(plVar2,local_34,0,0);
  }
  local_38 = 0;
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar5 + 0x394) = 0;
  FUN_71019fd0b0(*(long *)(lVar5 + 0x5e8),&local_38,(long ****)ppppppppplVar4,ppppbVar3,param_5,
                 param_6,param_7,param_8);
  FUN_7101a024c0(*(long *)(param_1 + 8),-1,ppppppppplVar4,ppppbVar3,param_5,param_6,param_7,param_8)
  ;
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x6bd) = 0;
  FUN_7103778630(0,*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x5e8);
  FUN_7103778630(0,*(long *)(lVar5 + 0x10),0x710433a9c5);
  FUN_7103778630(0,*(long *)(lVar5 + 0xf0),0x710433a9c5);
  FUN_7103778630(0,*(long *)(lVar5 + 0x100),0x710433a9c5);
  lVar5 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar5 + 0x5d0) = 0;
  FUN_71019fff00(*(long *)(lVar5 + 0x5e8),0,
                 (ulong)((uint)(*(long *)(lVar5 + 0x678) != 0) | param_2 & 1),ppppbVar3,param_5,
                 param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x6ba) = 1;
  return;
}

