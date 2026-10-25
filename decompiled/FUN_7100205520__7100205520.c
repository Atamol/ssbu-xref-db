// addr:      7100205520
// offset:    0x205520
// name:      FUN_7100205520
// mangled:   
// signature: uint __cdecl FUN_7100205520(long * param_1, undefined4 param_2, int param_3, long param_4, long param_5)


uint FUN_7100205520(long *param_1,undefined4 param_2,int param_3,long param_4,long param_5)

{
  long lVar1;
  size_t sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 auStack_f8 [2];
  size_t local_e8;
  undefined1 local_68;
  
  *(ushort *)(param_4 + 0x42) = CONCAT11((char)param_1[4],(char)param_1[1]);
  *(ushort *)(param_4 + 0x44) = (ushort)*(byte *)(param_1 + 1) | (ushort)(param_3 << 8);
  (**(code **)(*param_1 + 0x88))(param_1,param_2);
  FUN_71001beb40(auStack_f8);
  FUN_71001bec20((long)auStack_f8,param_4 + 0x140);
  local_68 = (undefined1)param_3;
  plVar10 = param_1 + 0x14;
  plVar12 = (long *)*plVar10;
  plVar9 = plVar10;
  if (plVar12 == (long *)0x0) {
LAB_71002055e4:
    lVar11 = 0;
  }
  else {
    do {
      bVar3 = FUN_710021a4f0((long)(plVar12 + 4),(long)auStack_f8);
      lVar11 = 8;
      if (!bVar3) {
        lVar11 = 0;
        plVar9 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar11);
    } while (plVar12 != (long *)0x0);
    if ((plVar9 == plVar10) || (bVar3 = FUN_710021a4f0((long)auStack_f8,(long)(plVar9 + 4)), bVar3))
    goto LAB_71002055e4;
    lVar11 = plVar9[0x17];
  }
  FUN_71001bef00();
  (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar11 != 0) {
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(lVar11 + 0x1eb);
  }
  plVar9 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_7100205660:
    lVar8 = 0;
    if (*plVar9 != 0) {
      lVar8 = *(long *)(*plVar9 + 0x10);
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar6;
    if (uVar5 == 0) goto LAB_7100205660;
    if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x10);
      goto LAB_7100205660;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar8 = 0;
  }
  lVar1 = 0x1b0;
  if (1 < *(int *)(param_4 + 0x1e8) - 1U) {
    lVar1 = 0x1a8;
  }
  iVar4 = (**(code **)(**(long **)(lVar8 + lVar1) + 0x20))
                    (*(long **)(lVar8 + lVar1),param_4,(int)param_1[1],param_5 != 0);
  if (iVar4 != 1) {
    lVar8 = lVar11 + 0x1a0;
    local_e8 = 0;
    if (lVar11 == 0) {
      lVar8 = 0;
    }
    plVar9 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_710020573c:
      lVar11 = 0;
      if (*plVar9 != 0) {
        lVar11 = *(long *)(*plVar9 + 0x10);
      }
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar6;
      if (uVar5 == 0) goto LAB_710020573c;
      if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x10);
        goto LAB_710020573c;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      lVar11 = 0;
    }
    lVar1 = 0x1b0;
    if (1 < *(int *)(param_4 + 0x1e8) - 1U) {
      lVar1 = 0x1a8;
    }
    uVar7 = (**(code **)(**(long **)(lVar11 + lVar1) + 0x10))
                      (*(long **)(lVar11 + lVar1),param_4,iVar4,param_5,(int)param_1[1],
                       param_1 + 0x1d,lVar8,auStack_f8);
    sVar2 = local_e8;
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      goto LAB_7100205804;
    }
    memcpy((void *)(param_4 + 0x48),auStack_f8,local_e8);
    *(size_t *)(param_4 + 0x58) = sVar2;
  }
  uVar5 = (**(code **)(*(long *)param_1[3] + 0x68))
                    ((long *)param_1[3],*(undefined4 *)(param_4 + 0x1e8),param_2,(int)param_1[1],
                     (char)param_1[4],param_3,param_4,DAT_71052b5208);
LAB_7100205804:
  return uVar5 & 1;
}

