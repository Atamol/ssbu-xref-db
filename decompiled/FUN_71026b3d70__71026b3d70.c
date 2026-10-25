// addr:      71026b3d70
// offset:    0x26b3d70
// name:      FUN_71026b3d70
// mangled:   
// signature: undefined __cdecl FUN_71026b3d70(undefined8 * param_1)


void FUN_71026b3d70(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_71050cdf00;
  puVar2 = param_1 + 3;
  plVar1 = (long *)*puVar2;
  plVar3 = (long *)param_1[4];
  if (plVar3 != plVar1) {
    if (plVar1 != plVar3) {
      do {
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 8))();
        }
        plVar1 = plVar1 + 1;
      } while (plVar3 != plVar1);
      plVar1 = (long *)*puVar2;
    }
    param_1[4] = 0;
    param_1[5] = 0;
    *puVar2 = 0;
    if (plVar1 == (long *)0x0) goto LAB_71026b3df8;
    FUN_710392eb40((ulong)plVar1);
    plVar1 = (long *)param_1[3];
  }
  if (plVar1 != (long *)0x0) {
    param_1[4] = plVar1;
    FUN_710392eb40((ulong)plVar1);
  }
LAB_71026b3df8:
  FUN_710392eb40((ulong)param_1);
  return;
}

