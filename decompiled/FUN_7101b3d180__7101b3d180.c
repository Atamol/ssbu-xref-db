// addr:      7101b3d180
// offset:    0x1b3d180
// name:      FUN_7101b3d180
// mangled:   
// signature: undefined __cdecl FUN_7101b3d180(long * param_1, ulong param_2, uint param_3, uint param_4, uint param_5, uint param_6)


void FUN_7101b3d180(long *param_1,ulong param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ushort local_44 [2];
  
  lVar2 = *param_1;
  uVar4 = *(uint *)param_1[1];
  if ((int)uVar4 < 10) {
    uVar6 = 0;
    uVar7 = uVar6;
  }
  else {
    uVar5 = uVar4 / 10;
    uVar4 = uVar4 % 10;
    uVar6 = 0x3f800000;
    uVar7 = (ulong)(uint)(float)uVar5;
  }
  lVar1 = lVar2 + 0x20;
  FUN_710377b010(uVar6,lVar1 + (param_2 & 0xffffffff) * 0x10);
  FUN_710377b010(uVar7,lVar1 + (ulong)param_3 * 0x10);
  FUN_710377b010((ulong)(uint)(float)(int)uVar4,lVar1 + (ulong)param_4 * 0x10);
  lVar1 = lVar1 + (ulong)param_5 * 0x10;
  if (*(int *)param_1[1] < 6) {
    FUN_710377b010((ulong)(uint)(float)*(int *)param_1[1],lVar1);
    plVar3 = *(long **)(*(long *)(lVar2 + (ulong)param_6 * 0x10 + 0xb8) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_44[0] = 0;
      local_44[1] = 0;
      FUN_71037a2270(plVar3,local_44,0,0);
    }
  }
  else {
    FUN_710377b010(0x40c00000,lVar1);
    FUN_710377a280(lVar2 + (ulong)param_6 * 0x10 + 0xb0,(byte *)"mel_info_stock_over_6",1);
  }
  return;
}

