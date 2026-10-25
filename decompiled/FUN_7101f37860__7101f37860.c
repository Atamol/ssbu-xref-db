// addr:      7101f37860
// offset:    0x1f37860
// name:      FUN_7101f37860
// mangled:   
// signature: undefined __cdecl FUN_7101f37860(long param_1, long param_2, byte param_3)


void FUN_7101f37860(long param_1,long param_2,byte param_3)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  KeyboardConfig *pKVar10;
  
  (**(code **)(**(long **)(param_1 + 0x180) + 0x60))(*(long **)(param_1 + 0x180),1);
  (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),1);
  FUN_7103771a80((long *)(param_1 + 0x180),0,1);
  *(undefined4 *)(param_1 + 0x600) = 0;
  lVar4 = **(long **)(param_1 + 0x130);
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
  }
  (**(code **)(**(long **)(param_1 + 0x188) + 0x60))(*(long **)(param_1 + 0x188),1);
  (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
  FUN_7103771a80((long *)(param_1 + 0x188),*(int *)(param_2 + 0x34),1);
  (**(code **)(**(long **)(param_1 + 400) + 0x60))(*(long **)(param_1 + 400),1);
  (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
  FUN_7103771a80((long *)(param_1 + 400),*(int *)(param_2 + 0x38),1);
  (**(code **)(**(long **)(param_1 + 0x198) + 0x60))(*(long **)(param_1 + 0x198),1);
  (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),0);
  FUN_7103771a80((long *)(param_1 + 0x198),*(int *)(param_2 + 0x30),1);
  FUN_7103771be0((long *)(param_1 + 0x198),*(int *)(param_2 + 0x30),1);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x30);
  (**(code **)(**(long **)(param_1 + 0x1a0) + 0x60))(*(long **)(param_1 + 0x1a0),1);
  (**(code **)(**(long **)(param_1 + 0x1a0) + 0x70))(*(long **)(param_1 + 0x1a0),0);
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x604) = *(undefined4 *)(param_2 + 0x2c);
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x60))(*(long **)(param_1 + 0x1a8),1);
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x70))(*(long **)(param_1 + 0x1a8),0);
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x60))(*(long **)(param_1 + 0x1b0),1);
  (**(code **)(**(long **)(param_1 + 0x1b0) + 0x70))(*(long **)(param_1 + 0x1b0),0);
  FUN_710376b960(*(long *)(param_1 + 0x1b0));
  if ((param_3 & 1) == 0) {
    uVar5 = 0;
    while( true ) {
      psVar1 = (short *)(param_2 + uVar5 * 2);
      sVar2 = *psVar1;
      if (sVar2 == 0) break;
      lVar4 = param_1 + uVar5 * 2;
      *(short *)(lVar4 + 0x1f8) = sVar2;
      if (0x1fe < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      sVar2 = psVar1[1];
      if (sVar2 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      uVar5 = uVar5 + 2;
      *(short *)(lVar4 + 0x1fa) = sVar2;
    }
    *(undefined2 *)(param_1 + 0x1f8 + (uVar5 & 0xffffffff) * 2) = 0;
    uVar8 = (uint)*(ushort *)(param_1 + 0x1f8);
    uVar7 = 0x811c9dc5;
    *(int *)(param_1 + 500) = (int)uVar5;
    if (*(ushort *)(param_1 + 0x1f8) != 0) {
      puVar6 = (ushort *)(param_1 + 0x1fa);
      do {
        uVar7 = uVar7 * 0x89 ^ uVar8;
        uVar8 = (uint)*puVar6;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar7 = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined2 *)(param_1 + 0x1f8) = 0;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x1e8);
  *(uint *)(param_1 + 0x1f0) = uVar7;
  *(byte *)(param_1 + 0x5f9) = ~param_3 & 1;
  plVar3 = DAT_710593b570;
  pKVar10 = (KeyboardConfig *)*puVar9;
  DAT_710593b570 = (long *)0x0;
  if (plVar3 == &DAT_710593b550) {
    (**(code **)(DAT_710593b550 + 0x20))(&DAT_710593b550);
  }
  else if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  *(undefined8 *)(pKVar10 + 0x508) = 0;
  *(undefined8 *)(pKVar10 + 0x500) = 0;
  nn::swkbd::InitializeKeyboardConfig(pKVar10);
  *(undefined8 *)(pKVar10 + 0x4d0) = *(undefined8 *)(pKVar10 + 0x510);
  *(undefined8 *)(pKVar10 + 0x4d8) = *(undefined8 *)(pKVar10 + 0x528);
  *(undefined8 *)(pKVar10 + 0x4e0) = *(undefined8 *)(pKVar10 + 0x518);
  *(undefined8 *)(pKVar10 + 0x4e8) = *(undefined8 *)(pKVar10 + 0x530);
  FUN_7103390f10((long)puVar9);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710425fdc8);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x71043f1178);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710433aa5c);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x710439dd06);
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x178) + 0x10),0x7104421055);
  if (*(uint *)(param_1 + 0xf4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 2;
    if (*(int *)(param_1 + 0xf4) < 0x12) {
      uVar7 = *(int *)(param_1 + 0xf4) + 1;
      *(uint *)(param_1 + 0xf4) = uVar7;
      if (0x12 < uVar7) goto LAB_7101f37c38;
      *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0xa8) = 7;
    }
    return;
  }
LAB_7101f37c38:
                    /* WARNING: Subroutine does not return */
  abort();
}

