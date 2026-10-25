// addr:      71001df120
// offset:    0x1df120
// name:      FUN_71001df120
// mangled:   
// signature: undefined __cdecl FUN_71001df120(undefined8 * param_1, undefined8 param_2, undefined4 param_3, byte param_4, byte param_5)


void FUN_71001df120(undefined8 *param_1,undefined8 param_2,undefined4 param_3,byte param_4,
                   byte param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined **local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  
  local_60 = local_70;
  *param_1 = &PTR_FUN_7104f57110;
  local_70[0] = 0;
  local_58 = 0x10;
  local_78 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_78,"ConnectionManager",-1);
  FUN_71001d22e0(param_1 + 2,(long)&local_78);
  param_1[2] = &PTR_FUN_7104f58ed8;
  local_78 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_78);
  FUN_71001beb40(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x24] = 0;
  *(byte *)(param_1 + 0x25) = param_4 & 1;
  param_1[0x20] = param_2;
  param_1[0x21] = &PTR_FUN_7104f579a0;
  param_1[0x22] = param_1 + 0x22;
  param_1[0x23] = param_1 + 0x22;
  *(byte *)((long)param_1 + 0x129) = param_5 & 1;
  *(undefined4 *)((long)param_1 + 300) = param_3;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar6 = (uint)DAT_71052af1d8;
  if (DAT_71052af1d8 != 0) {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar4;
  }
  *(uint *)(param_1 + 1) = uVar6;
  FUN_71001d4d00(param_1 + 2);
  plVar9 = &DAT_71052af128;
  plVar7 = plVar9;
  if (DAT_71052af1d8 != 0) {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) goto LAB_71001df42c;
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x10);
    }
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(*plVar7 + 0x10) + 0xe8) + 0x78))();
  FUN_71001df450(*(long *)(lVar5 + 0x18) + 0x90,(ulong *)0x0);
  if (DAT_71052af1d8 != 0) {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar4;
    if (uVar6 == 0) {
      plVar9 = &DAT_71052af128;
    }
    else {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) goto LAB_71001df42c;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x10);
    }
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(*plVar9 + 0x10) + 0xe8) + 0x78))();
  *(undefined1 *)(lVar5 + 8) = 0;
  if (*(char *)(lVar5 + 9) != '\0') {
    lVar8 = *(long *)(*(long *)(lVar5 + 0x18) + 0xc0);
    if (lVar8 != 0) {
      uVar3 = FUN_71001f54b0(lVar8 + 0xf0,(char)*(undefined4 *)(*(long *)(lVar5 + 0x18) + 8),1);
      *(byte *)(lVar5 + 9) = ~(byte)uVar3 & 1;
    }
  }
  cVar1 = *(char *)((long)param_1 + 0x129);
  plVar9 = &DAT_71052af128;
  if (DAT_71052af1d8 != 0) {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar4;
    if (uVar6 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) {
LAB_71001df42c:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x10);
    }
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(*plVar9 + 0x10) + 0xe8) + 0x78))();
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar5 + 8) = 0;
    if (*(char *)(lVar5 + 9) == '\0') {
      return;
    }
    lVar8 = *(long *)(*(long *)(lVar5 + 0x18) + 0xc0);
    if (lVar8 == 0) {
      return;
    }
    uVar3 = FUN_71001f54b0(lVar8 + 0xf0,(char)*(undefined4 *)(*(long *)(lVar5 + 0x18) + 8),1);
    bVar2 = ~(byte)uVar3;
  }
  else {
    *(undefined1 *)(lVar5 + 8) = 1;
    lVar8 = *(long *)(*(long *)(lVar5 + 0x18) + 0xc0);
    if (lVar8 == 0) {
      return;
    }
    uVar3 = FUN_71001f5750(lVar8 + 0xf0,*(long *)(lVar5 + 0x18),'\x01',(char *)0x0);
    bVar2 = (byte)uVar3;
  }
  *(byte *)(lVar5 + 9) = bVar2 & 1;
  return;
}

