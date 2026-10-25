// addr:      710022a7f0
// offset:    0x22a7f0
// name:      FUN_710022a7f0
// mangled:   
// signature: undefined8 __cdecl FUN_710022a7f0(long param_1, long param_2, long param_3)


undefined8 FUN_710022a7f0(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  undefined8 auStack_98 [3];
  int local_80 [6];
  undefined8 auStack_68 [3];
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    FUN_710022a610(param_1,param_2,param_3);
    return 1;
  }
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022a894:
    if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) goto LAB_710022a8c4;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_710022a894;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710022a894;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022a8c4:
    lVar7 = 0;
  }
  plVar9 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  lVar7 = *(long *)(param_2 + 0xb8);
  if (lVar7 == 0) {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x88);
      if (lVar7 != 0) goto LAB_710022a8e0;
      goto LAB_710022a8f0;
    }
LAB_710022a918:
    uVar5 = FUN_71001e69b0(param_3);
    plVar10 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_710022a968:
      if ((*plVar10 == 0) || (lVar7 = *(long *)(*plVar10 + 0x10), lVar7 == 0)) goto LAB_710022a9a4;
      lVar7 = *(long *)(lVar7 + 0x10);
    }
    else {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      if (uVar1 == 0) goto LAB_710022a968;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        goto LAB_710022a968;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022a9a4:
      lVar7 = 0;
    }
    plVar10 = (long *)(lVar7 + 0x78);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar4 + 0xf0))(local_80,plVar4,uVar5,1,0,0,0);
    (**(code **)(*plVar10 + 0x20))(plVar10);
    pcVar8 = FUN_710170d030;
    if (local_80[0] < 0) {
      pcVar8 = (code *)0x0;
    }
    if (pcVar8 != (code *)0x0) {
      FUN_71001d0c80(param_2,plVar4,(int)plVar4[0x12]);
      goto LAB_710022aa40;
    }
    uVar2 = (**(code **)(*plVar4 + 200))(plVar4);
    FUN_71001e1830(auStack_98,uVar2);
    puVar6 = auStack_98;
  }
  else {
LAB_710022a8e0:
    plVar4 = (long *)FUN_7100235e80(lVar7,*(short *)(param_1 + 0x48));
    if (plVar4 != (long *)0x0) goto LAB_710022a918;
LAB_710022a8f0:
    local_80[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)auStack_68,local_80);
    puVar6 = auStack_68;
  }
  FUN_71001d0c90(param_2,puVar6);
LAB_710022aa40:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return 1;
}

