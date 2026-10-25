// addr:      71001d0c90
// offset:    0x1d0c90
// name:      FUN_71001d0c90
// mangled:   
// signature: undefined __cdecl FUN_71001d0c90(long param_1, undefined8 * param_2)


void FUN_71001d0c90(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d0d04:
    if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) goto LAB_71001d0d34;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar5;
    if (uVar3 == 0) goto LAB_71001d0d04;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d0d04;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d0d34:
    lVar7 = 0;
  }
  plVar9 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  puVar6 = FUN_71001af850(0x80);
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar8 = param_2[2];
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    *puVar6 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar6 + 1) = 1;
    *(undefined1 *)((long)puVar6 + 0xc) = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined4 *)(puVar6 + 7) = 0;
    puVar6[8] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar6[5] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    *(undefined2 *)(puVar6 + 0xc) = 0x100;
    *puVar6 = &PTR_FUN_7104f56d78;
    *(undefined4 *)((long)puVar6 + 100) = uVar4;
    puVar6[0xd] = uVar1;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar8;
  }
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d0e1c:
    if ((*plVar10 != 0) && (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      goto joined_r0x0071001d0e7c;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar5;
    if (uVar3 == 0) goto LAB_71001d0e1c;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d0e1c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
joined_r0x0071001d0e7c:
  if (DAT_7104f561d1 == '\0') {
    FUN_71001d8820(lVar7,(long)puVar6,0);
  }
  else {
    plVar10 = (long *)(lVar7 + 0xc0);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    plVar11 = (long *)(lVar7 + 0x30);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    FUN_71001d8820(lVar7,(long)puVar6,0);
    (**(code **)(*plVar11 + 0x20))(plVar11);
    (**(code **)(*plVar10 + 0x20))(plVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x0071001d0ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
}

