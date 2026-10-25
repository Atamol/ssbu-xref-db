// addr:      7101a1eee0
// offset:    0x1a1eee0
// name:      FUN_7101a1eee0
// mangled:   
// signature: undefined __cdecl FUN_7101a1eee0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1eee0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ushort local_34 [2];
  
  uVar2 = (uint)param_3;
  FUN_7101a06920(*(long *)(param_2 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)(param_2 + 8) + 500) = 3;
  *(int *)(*(long *)(param_2 + 8) + 0x1f0) = *(int *)(*(long *)(param_2 + 8) + 0x150) + 1;
  FUN_7101a028b0(*(long *)(param_2 + 8),2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x211) = 0;
  *(undefined4 *)(lVar3 + 0x250) = 0;
  if (*(int *)(lVar3 + 0x21c) == 1) {
    param_4 = (byte ****)0x0;
    FUN_710377a280(lVar3 + 0x88,(byte *)"mel_chara_select_lv_n",1);
    param_3 = (long ****)(ulong)*(uint *)(lVar3 + 0x250);
    FUN_7103778430(lVar3 + 0x68,"cp_level_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6bd) = 0;
  FUN_7103778760(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x5e8) + 0x10),0x710425ed91);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  FUN_7103778760(*(long *)(lVar3 + 0x10),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar3 + 0xf0),0x710433a9c5);
  FUN_7103778760(*(long *)(lVar3 + 0x100),0x710433a9c5);
  FUN_7101a1f530(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101a024c0(*(long *)(param_2 + 8),-1,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar3 = *(long *)(*(long *)(param_2 + 8) + 0x5e8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x2e0) = 0;
  *(undefined4 *)(lVar3 + 0x254) = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x40),0x7104349d11);
  plVar1 = *(long **)(*(long *)(lVar3 + 0xa0) + 0x10);
  if (plVar1 != (long *)0x0) {
    param_4 = (byte ****)0x0;
    local_34[0] = 0;
    local_34[1] = 0;
    FUN_71037a2270(plVar1,local_34,0,0);
  }
  lVar3 = *(long *)(param_2 + 8);
  plVar1 = *(long **)(*(long *)(*(long *)(lVar3 + 0x5e8) + 0x80) + 0x10);
  if (plVar1 != (long *)0x0) {
    param_4 = (byte ****)0x1;
    FUN_71037a2270(plVar1,(ushort *)&DAT_7104753ea0,0xffffffff,1);
    lVar3 = *(long *)(param_2 + 8);
  }
  *(undefined4 *)(lVar3 + 0x5d0) = 1;
  if ((*(char *)(lVar3 + 0x6b9) != '\0') || (*(int *)(lVar3 + 0x1f8) != 0)) {
    uVar2 = *(long *)(lVar3 + 0x678) != 0 & uVar2;
  }
  FUN_71019fff00(*(long *)(lVar3 + 0x5e8),1,(ulong)(uVar2 & 1),param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(*(long *)(param_2 + 8) + 0x6ba) = 1;
  return;
}

