// addr:      710004af10
// offset:    0x4af10
// name:      FUN_710004af10
// mangled:   
// signature: long * __cdecl FUN_710004af10(long param_1, undefined8 param_2, undefined8 param_3, uint param_4)


long * FUN_710004af10(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  char acStack_c8 [8];
  long local_c0;
  
  nn::util::SNPrintf(acStack_c8,0x88,"%s_%s.bflan",*(undefined8 *)(param_1 + 0x30),param_3);
  puVar2 = (uint *)(**(code **)(**(long **)(param_1 + 0x40) + 0x50))
                             (*(long **)(param_1 + 0x40),0x616e696d,acStack_c8);
  FUN_71000407b0((undefined8 *)acStack_c8,puVar2);
  uVar1 = FUN_71000408d0((long)acStack_c8);
  if (uVar1 < 2) {
    if (local_c0 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = (long *)(*DAT_71052ab4f0)(0x50,4,DAT_71052ab500);
      if (plVar3 != (long *)0x0) {
        FUN_7100040e20(plVar3);
        plVar3[9] = 0;
        *plVar3 = (long)&PTR_FUN_7104f18ac8;
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        plVar6 = (long *)(param_1 + 8);
        *plVar4 = *plVar6;
        *(long **)(lVar5 + 8) = plVar6;
        *(long **)(*plVar6 + 8) = plVar4;
        *plVar6 = lVar5;
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),local_c0);
      }
    }
    FUN_7100041220(plVar3,(long)acStack_c8,*(long *)(param_1 + 0x20),0,param_4 & 1);
  }
  else if (local_c0 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar1 = FUN_71000408d0((long)acStack_c8);
    plVar3 = (long *)(*DAT_71052ab4f0)((ulong)uVar1 * 8 + 0x58,4,DAT_71052ab500);
    if (plVar3 != (long *)0x0) {
      FUN_7100040e20(plVar3);
      plVar3[9] = 0;
      *(undefined4 *)(plVar3 + 10) = 0;
      *plVar3 = (long)&PTR_FUN_7104f18bf8;
      (*(code *)PTR_FUN_7104f18c38)(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),local_c0);
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      plVar6 = (long *)(param_1 + 8);
      *plVar4 = *plVar6;
      *(long **)(lVar5 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar4;
      *plVar6 = lVar5;
      FUN_71000412e0(plVar3,(long)acStack_c8,*(long *)(param_1 + 0x20),(long)(plVar3 + 0xb),
                     param_4 & 1);
    }
  }
  return plVar3;
}

