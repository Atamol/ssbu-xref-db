// addr:      71001e1880
// offset:    0x1e1880
// name:      FUN_71001e1880
// mangled:   
// signature: undefined __cdecl FUN_71001e1880(undefined8 * param_1, uint param_2, long param_3)


void FUN_71001e1880(undefined8 *param_1,uint param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  short local_38 [4];
  
  FUN_71001e0110(param_1,param_2);
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[2] = param_3;
  param_1[5] = 0;
  *param_1 = &DAT_7104f573e8;
  param_1[7] = &PTR_FUN_7104f59348;
  if (param_3 == 0) {
    plVar9 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_71001e1938:
      uVar7 = 0;
      if (*plVar9 != 0) {
        lVar6 = *(long *)(*plVar9 + 0x10);
        uVar7 = 0;
        if (lVar6 != 0) {
          uVar7 = *(undefined8 *)(lVar6 + 0xe8);
        }
      }
    }
    else {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 == 0) goto LAB_71001e1938;
      if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
        goto LAB_71001e1938;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      uVar7 = 0;
    }
    param_1[2] = uVar7;
  }
  plVar9 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e19c4:
    if (*plVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*plVar9 + 0x10);
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar5;
    if (uVar2 == 0) goto LAB_71001e19c4;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
      goto LAB_71001e19c4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar6 = 0;
  }
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar5 != 0) {
      lVar8 = *(long *)(&DAT_71052af4e8 + (ulong)param_2 * 0x2e8) + (ulong)*puVar5 * 0x168;
      goto LAB_71001e1a68;
    }
  }
  lVar8 = (ulong)param_2 * 0x2e8 + 0x71052af4f0;
LAB_71001e1a68:
  puVar1 = (undefined8 *)(lVar6 + 0x1b0);
  if (1 < *(int *)(lVar8 + 0x140) - 1U) {
    puVar1 = (undefined8 *)(lVar6 + 0x1a8);
  }
  param_1[4] = *puVar1;
  FUN_71001b12a0((ulong *)local_38);
  sVar3 = local_38[0];
  iVar4 = FUN_71001b34a0(0xff);
  *(char *)(param_1 + 6) = (char)iVar4 + (char)sVar3;
  FUN_71001b12a0((ulong *)local_38);
  iVar4 = FUN_71001b34a0(0xffff);
  *(short *)(param_1 + 8) = (short)iVar4 + local_38[0];
  return;
}

