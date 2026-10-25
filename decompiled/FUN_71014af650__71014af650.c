// addr:      71014af650
// offset:    0x14af650
// name:      FUN_71014af650
// mangled:   
// signature: undefined __cdecl FUN_71014af650(void)


void FUN_71014af650(void)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  puVar7 = (undefined8 *)**(undefined8 **)(*DAT_71052c36c0 + 0x18);
  plVar2 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
  if ((uint)((ulong)(*(long *)(*plVar2 + 0x270) - *(long *)(*plVar2 + 0x268)) >> 2) < 2) {
    return;
  }
  lVar6 = **(long **)(DAT_71052c3420 + 8);
  (**(code **)(*(long *)*puVar7 + 0x10))();
  FUN_710377a280(*(long *)(*(long *)(*(long *)(**(long **)(lVar6 + 0xc40) + 0x9a0) + 8) + 0x80) +
                 0x170,(byte *)"mel_homerun_more_times_n",1);
  lVar4 = *(long *)(*(long *)(*(long *)(**(long **)(lVar6 + 0xc40) + 0x9a0) + 8) + 0x80);
  if (*(int *)(lVar4 + 1000) == 0) {
    *(long *)(lVar4 + 0x3f8) = lVar4 + 0xd0;
    *(long *)(lVar4 + 0x400) = lVar4 + 0xf0;
    if (0x12 < *(uint *)(lVar4 + 0x3e4)) {
LAB_71014af85c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0x3e4) * 4 + 0x398) = 2;
    if (*(int *)(lVar4 + 0x3e4) < 0x12) {
      uVar8 = *(int *)(lVar4 + 0x3e4) + 1;
      *(uint *)(lVar4 + 0x3e4) = uVar8;
      if (0x12 < uVar8) goto LAB_71014af85c;
      *(undefined4 *)(lVar4 + (long)(int)uVar8 * 4 + 0x398) = 1;
    }
  }
  if (((long *)puVar7[1] != (long *)0x0) &&
     (plVar2 = *(long **)(*(long *)puVar7[1] + 8), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x58))(plVar2,0x1f,0xffffffff);
  }
  plVar2 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
  lVar4 = *plVar2;
  if (*(long *)(lVar4 + 0x268) == *(long *)(lVar4 + 0x270)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(lVar4 + 0x280);
  }
  plVar2 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
  lVar4 = *(long *)(**(long **)(lVar6 + 0xc40) + 0x9f8);
  if (0 < *(int *)(lVar4 + 0x10)) {
    iVar1 = *(int *)(*plVar2 + 0x284);
    uVar5 = 0;
    do {
      uVar3 = 2;
      if ((int)uVar8 <= (int)uVar5) {
        uVar3 = (uint)(uVar8 == uVar5);
      }
      FUN_7101b5cfb0(*(long *)(*(long *)(lVar4 + 8) + 0x80),uVar5,iVar1,uVar3);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(lVar4 + 0x10));
  }
  FUN_71014b9b40((long *)*puVar7,0);
  return;
}

