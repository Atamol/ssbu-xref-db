// addr:      71026ab8e0
// offset:    0x26ab8e0
// name:      FUN_71026ab8e0
// mangled:   
// signature: undefined __cdecl FUN_71026ab8e0(undefined8 * param_1)


void FUN_71026ab8e0(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_71050cd068;
  if ((long *)param_1[0x106] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x106] + 8))();
    param_1[0x106] = 0;
  }
  if ((long *)param_1[0x107] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x107] + 8))();
    param_1[0x107] = 0;
  }
  if ((long *)param_1[0x108] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x108] + 8))();
    param_1[0x108] = 0;
  }
  if ((long *)param_1[0x109] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x109] + 8))();
    param_1[0x109] = 0;
  }
  if ((long *)param_1[0x10a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10a] + 8))();
    param_1[0x10a] = 0;
  }
  plVar1 = (long *)param_1[0x10c];
  param_1[0x10c] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0x10b];
  param_1[0x10b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = param_1[0x103];
  if (uVar2 != 0) {
    param_1[0x104] = uVar2;
    FUN_710392eb40(uVar2);
  }
  uVar2 = param_1[0xfe];
  if (uVar2 != 0) {
    param_1[0xff] = uVar2;
    FUN_710392eb40(uVar2);
  }
  uVar2 = param_1[0xfb];
  if (uVar2 != 0) {
    param_1[0xfc] = uVar2;
    FUN_710392eb40(uVar2);
  }
  uVar2 = param_1[0xf8];
  if (uVar2 != 0) {
    param_1[0xf9] = uVar2;
    FUN_710392eb40(uVar2);
  }
  uVar2 = param_1[0xf2];
  if (uVar2 != 0) {
    param_1[0xf3] = uVar2;
    FUN_710392eb40(uVar2);
  }
  FUN_71025d7760(param_1);
  return;
}

