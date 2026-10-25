// addr:      710020ba20
// offset:    0x20ba20
// name:      FUN_710020ba20
// mangled:   
// signature: undefined FUN_710020ba20(void)


void FUN_710020ba20(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020ba94:
    if ((*plVar4 != 0) && (lVar5 = *(long *)(*plVar4 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710020bac8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_710020ba94;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020ba94;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710020bac8:
  plVar8 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  plVar4 = FUN_71001b1820(0x30);
  plVar4[4] = param_2;
  plVar4[5] = param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x110);
  if (*(undefined8 **)(param_1 + 0x110) == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(param_1 + 0x110);
    puVar7 = puVar6;
  }
  else {
    do {
      while (puVar6 = puVar2, param_2 < (ulong)puVar6[4]) {
        puVar2 = (undefined8 *)*puVar6;
        puVar7 = puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_710020bb28;
      }
      puVar2 = (undefined8 *)puVar6[1];
    } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
    puVar7 = puVar6 + 1;
  }
LAB_710020bb28:
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)puVar6;
  *puVar7 = plVar4;
  if (**(long **)(param_1 + 0x108) != 0) {
    *(long *)(param_1 + 0x108) = **(long **)(param_1 + 0x108);
    plVar4 = (long *)*puVar7;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            (*(long **)(param_1 + 0x110),plVar4);
  *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
                    /* WARNING: Could not recover jumptable at 0x00710020bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

