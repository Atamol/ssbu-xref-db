// addr:      71001dfcf0
// offset:    0x1dfcf0
// name:      FUN_71001dfcf0
// mangled:   
// signature: undefined FUN_71001dfcf0(void)


void FUN_71001dfcf0(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001dfd6c:
    if ((*plVar5 != 0) && (lVar7 = *(long *)(*plVar5 + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      goto LAB_71001dfda0;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001dfd6c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001dfd6c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
LAB_71001dfda0:
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar1 = *param_3;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  plVar5 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),uVar1);
  if (plVar5 != (long *)0x0) {
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    bVar3 = FUN_71001b4280(param_2,(byte *)&uStack_68);
    if (bVar3) {
      uStack_68 = *(undefined8 *)param_2;
      uStack_60 = *(undefined8 *)(param_2 + 2);
      uStack_58 = *(undefined8 *)(param_2 + 4);
      iVar6 = 2;
    }
    else {
      uStack_68 = *(undefined8 *)param_2;
      uStack_60 = *(undefined8 *)(param_2 + 2);
      uStack_58 = *(undefined8 *)(param_2 + 4);
      iVar6 = 3;
    }
    FUN_71001d0f00(plVar5,iVar6,&uStack_68,1);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),param_1);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

