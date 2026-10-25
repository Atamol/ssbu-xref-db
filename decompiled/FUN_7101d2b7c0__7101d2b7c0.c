// addr:      7101d2b7c0
// offset:    0x1d2b7c0
// name:      FUN_7101d2b7c0
// mangled:   
// signature: undefined __cdecl FUN_7101d2b7c0(long param_1, uint param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d2b7c0(long param_1,uint param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long ********local_98;
  ulong local_90;
  uint local_88 [2];
  undefined1 local_80 [64];
  
  local_80[0] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  uVar2 = (ulong)param_2;
  FUN_710062dc20(local_88,"set_btn_item_%02d");
  FUN_7103776640(&local_98,**(long **)(param_1 + 0x130) + 8,(byte ****)local_80,uVar2,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7101d2aaf0(param_1,(ulong)param_2,0,param_4,param_5,param_6,param_7,param_8);
  if ((param_3 & 1) == 0) {
    FUN_7103778300(0x3f800000,local_90,0x7104281165);
    FUN_7103778300(0x3f800000,local_90,0x7104306de4);
  }
  else {
    FUN_7103385ee0(*(undefined8 *)(param_1 + 0x560),*(long **)(param_1 + 0x128),
                   (ulong *)(param_1 + (long)(int)param_2 * 0x30 + 400),&local_98,param_5,param_6,
                   param_7,param_8);
  }
  uVar2 = local_90;
  local_98 = (long ********)&PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

