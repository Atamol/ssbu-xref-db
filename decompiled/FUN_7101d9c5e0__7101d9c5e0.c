// addr:      7101d9c5e0
// offset:    0x1d9c5e0
// name:      FUN_7101d9c5e0
// mangled:   
// signature: undefined __cdecl FUN_7101d9c5e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d9c5e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x168) + 8);
  if ((lVar3 != 0) &&
     (plVar4 = (long *)FUN_71037964b0(lVar3,0x71042e7633), param_2 = extraout_x1,
     plVar4 != (long *)0x0)) {
    auVar8 = (**(code **)(*plVar4 + 0x138))();
    param_2 = auVar8._8_8_;
    if ((auVar8._0_8_ & 1) == 0) {
      return;
    }
  }
  if (*(uint *)(param_1 + 0x3e0) <= *(uint *)(param_1 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x148),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x150),extraout_x1_00,param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x158),extraout_x1_01,param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    puVar1 = *(undefined8 **)(param_1 + 0x1e0);
    puVar2 = *(undefined8 **)(param_1 + 0x1e8);
    while (puVar2 != puVar1) {
      puVar7 = puVar2 + -3;
      *puVar7 = &PTR_FUN_710523d988;
      uVar6 = puVar2[-2];
      puVar2[-2] = 0;
      puVar2 = puVar7;
      if (uVar6 != 0) {
        uVar5 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar6);
      }
    }
    *(undefined8 **)(param_1 + 0x1e8) = puVar1;
    if (0x12 < *(uint *)(param_1 + 0x114)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x114) * 4 + 200) = 0;
  }
  return;
}

