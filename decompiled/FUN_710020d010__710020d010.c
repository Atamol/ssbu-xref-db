// addr:      710020d010
// offset:    0x20d010
// name:      FUN_710020d010
// mangled:   
// signature: undefined __cdecl FUN_710020d010(long * param_1, long param_2, undefined4 param_3, undefined4 param_4, long param_5)


void FUN_710020d010(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 auStack_f8 [18];
  undefined1 local_68;
  
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
  FUN_71001beb40(auStack_f8);
  FUN_71001bec20((long)auStack_f8,param_2);
  local_68 = (undefined1)param_4;
  plVar10 = param_1 + 0x14;
  plVar9 = (long *)*plVar10;
  plVar8 = plVar10;
  if (plVar9 == (long *)0x0) {
LAB_710020d0b4:
    plVar8 = (long *)0x0;
  }
  else {
    do {
      bVar3 = FUN_710021a4f0((long)(plVar9 + 4),(long)auStack_f8);
      lVar5 = 8;
      if (!bVar3) {
        lVar5 = 0;
        plVar8 = plVar9;
      }
      plVar9 = *(long **)((long)plVar9 + lVar5);
    } while (plVar9 != (long *)0x0);
    if ((plVar8 == plVar10) || (bVar3 = FUN_710021a4f0((long)auStack_f8,(long)(plVar8 + 4)), bVar3))
    goto LAB_710020d0b4;
    plVar8 = (long *)plVar8[0x17];
  }
  FUN_71001bef00();
  (**(code **)(*param_1 + 0x90))(param_1);
  if (plVar8 == (long *)0x0) {
    lVar5 = 0;
    plVar8 = (long *)0x0;
  }
  else {
    lVar5 = (**(code **)(*plVar8 + 0x120))(plVar8);
    plVar8 = plVar8 + 0x31;
  }
  plVar10 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar7 = 0;
        goto LAB_710020d17c;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  lVar7 = 0;
  if (*plVar10 != 0) {
    lVar7 = *(long *)(*plVar10 + 0x10);
  }
LAB_710020d17c:
  lVar1 = 0x1b0;
  if (1 < *(int *)(param_5 + 0x1e8) - 1U) {
    lVar1 = 0x1a8;
  }
  uVar4 = (**(code **)(**(long **)(lVar7 + lVar1) + 0x20))
                    (*(long **)(lVar7 + lVar1),param_5,(int)param_1[1],lVar5 != 0);
  (**(code **)(*(long *)param_1[0x2d] + 0x48))
            ((long *)param_1[0x2d],*(undefined4 *)(param_5 + 0x1e8));
  (**(code **)(*(long *)param_1[0x2d] + 0x28))
            ((long *)param_1[0x2d],param_2,param_3,param_4,param_5,lVar5,param_1 + 0x1d,plVar8,uVar4
            );
  return;
}

