// addr:      7102b5f110
// offset:    0x2b5f110
// name:      FUN_7102b5f110
// mangled:   
// signature: undefined __cdecl FUN_7102b5f110(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102b5f110(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  
  *param_1 = 0;
  local_30 = auStack_90;
  local_38 = &stack0xffffffffffffffa0;
  local_28 = 0xffffff80ffffffd8;
  local_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_40 = (undefined1 *)register0x00000008;
  iVar1 = vsnprintf((char *)(param_1 + 1),0x3f,"Land_%s_%02d_%c",&local_40);
  *param_1 = iVar1;
  return;
}

