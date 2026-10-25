// addr:      7102d927e0
// offset:    0x2d927e0
// name:      FUN_7102d927e0
// mangled:   
// signature: undefined __cdecl FUN_7102d927e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102d927e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  long *plVar7;
  
  plVar8 = *(long **)(param_1 + 0x48);
  *(undefined4 *)((long)plVar8 + 0x8c) = 0;
  *(undefined1 *)(plVar8 + 0x11) = 0;
  FUN_7102d9d240((long)plVar8,1,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(*plVar8 + 0x50))(plVar8,1);
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa5) = 1;
  (**(code **)(**(long **)(param_1 + 0x38) + 0x38))();
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0xa5) = 1;
  lVar4 = *(long *)(param_1 + 0x40);
  *(undefined4 *)(lVar4 + 0xa8) = 0x42340000;
  *(undefined1 *)(lVar4 + 0xa6) = 0;
  (**(code **)(**(long **)(param_1 + 0x40) + 0x38))();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (lVar4 == 0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_710532a9e0);
      puVar3 = &DAT_710532a9f0;
      if (iVar2 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa18 = 0x3f800000;
        DAT_710532aa10 = 0;
        DAT_710532aa28 = 0x3f80000000000000;
        DAT_710532aa20 = 0;
        __cxa_guard_release(&DAT_710532a9e0);
      }
    }
    else {
      puVar3 = &DAT_710532a9f0;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(**(long **)(lVar4 + 0x90) + 0x158))();
  }
  pauVar1 = (undefined1 (*) [16])(puVar3 + 6);
  uVar9 = *(undefined8 *)*pauVar1;
  auVar10 = NEON_ext(*pauVar1,*pauVar1,8,1);
  lVar4 = *(long *)(param_1 + 8);
  *(ulong *)(param_1 + 0x58) = (ulong)auVar10._0_4_;
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  plVar8 = *(long **)(**(long **)(lVar4 + 0x338) + 8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x58))(plVar8,0x15,0xffffffff);
    lVar4 = *(long *)(param_1 + 8);
  }
  plVar5 = *(long **)(*(long *)(lVar4 + 0x300) + 0x18);
  plVar8 = (long *)*plVar5;
  plVar5 = (long *)plVar5[1];
  plVar6 = plVar8;
  if (plVar8 != plVar5) {
    do {
      plVar7 = plVar6 + 1;
      if ((*(ulong *)(*plVar6 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
        puVar3 = *(undefined8 **)(*plVar6 + 0x130);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP0001");
          plVar8 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x300) + 0x18);
          plVar5 = (long *)plVar8[1];
          plVar8 = (long *)*plVar8;
        }
        break;
      }
      plVar6 = plVar7;
    } while (plVar5 != plVar7);
    do {
      if (plVar8 == plVar5) {
        return;
      }
      lVar4 = *plVar8;
      plVar8 = plVar8 + 1;
    } while ((*(ulong *)(lVar4 + 0xa0) & 0xffffffffff) != 0x7e9aa1d15);
    puVar3 = *(undefined8 **)(lVar4 + 0x130);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar3,(undefined8 *)puVar3[1],"IPP2101");
      return;
    }
  }
  return;
}

