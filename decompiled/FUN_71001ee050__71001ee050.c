// addr:      71001ee050
// offset:    0x1ee050
// name:      FUN_71001ee050
// mangled:   
// signature: undefined FUN_71001ee050(void)


void FUN_71001ee050(long param_1)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  int iVar4;
  uint *puVar5;
  long *plVar6;
  ulonglong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  ulong uStack_d0;
  undefined1 *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_71001ee0c8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001ee0c8;
    }
LAB_71001ee244:
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001ee25c:
    ppuStack_e0 = &PTR_FUN_7104f56e28;
    ppuStack_d8 = (undefined **)FUN_71001edb60;
    uStack_d0 = 0;
    puStack_c8 = &DAT_71044114cc;
    FUN_71001d3d60(param_1,(long)&ppuStack_e0);
    return;
  }
LAB_71001ee0c8:
  if ((*plVar6 == 0) || (*(long *)(*plVar6 + 0x10) == 0)) goto LAB_71001ee25c;
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001ee244;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (((*plVar6 == 0) || (lVar8 = *(long *)(*plVar6 + 0x10), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0xe8) == 0)) goto LAB_71001ee25c;
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001ee508;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar6 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar6 == (long *)0x0) goto LAB_71001ee25c;
  plVar10 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001ee508:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar8 = *(long *)(*(long *)(*plVar10 + 0x10) + 0x198);
  uVar7 = FUN_71001f2ba0(*(long *)(param_1 + 0x148) + 0x10,"RVCID",0);
  iVar4 = FUN_71001e85d0(lVar8,(int)uVar7);
  if (iVar4 != -1) {
    ppuStack_100 = (undefined **)CONCAT44(ppuStack_100._4_4_,0x10001);
    FUN_71001b4200((undefined4 *)&ppuStack_e0,(undefined4 *)&ppuStack_100);
    FUN_71001d0f00(plVar6,2,&ppuStack_e0,1);
    FUN_71001cd870(param_1);
    return;
  }
  plVar6 = *(long **)(lVar8 + 0x10);
  if (plVar6 == (long *)0x0) goto LAB_71001ee25c;
  plVar10 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ee300:
    if ((*plVar10 != 0) && (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0xe8);
      goto LAB_71001ee334;
    }
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_71001ee300;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001ee300;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71001ee334:
  ppuStack_e0 = &PTR_FUN_7104f57550;
  puStack_c0 = &uStack_d0;
  uStack_d0 = uStack_d0 & 0xffffffffffffff00;
  uStack_b8 = 0x10;
  ppuStack_d8 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&ppuStack_d8,*(char **)(lVar9 + 0x168),-1);
  uStack_b0 = *(undefined2 *)(lVar9 + 0x178);
  puStack_90 = auStack_a0;
  uStack_88 = 0x10;
  auStack_a0[0] = 0;
  ppuStack_a8 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&ppuStack_a8,*(char **)(lVar9 + 0x198),-1);
  uStack_70 = *(undefined1 *)(lVar9 + 0x1b8);
  uStack_80 = *(undefined8 *)(lVar9 + 0x1a8);
  uStack_78 = *(undefined8 *)(lVar9 + 0x1b0);
  sVar2 = (short)uStack_80;
  uVar3 = (ulong)uStack_78 >> 0x20;
  lVar9 = param_1 + 0x158;
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    FUN_71001f2180(lVar9);
  }
  FUN_71001bee30(*(long *)(param_1 + 0x160),sVar2 + (short)uVar3);
  *(undefined1 *)(param_1 + 0x1c1) = 0;
  (**(code **)(*plVar6 + 0x28))(plVar6,param_1 + 0x140,lVar9);
  uVar7 = FUN_71001f2ba0(lVar9,"probeinit",0);
  if (uVar7 == 0) {
    FUN_71001e7a40(lVar8,*(long *)(param_1 + 0x148) + 0x10);
  }
  ppuStack_100 = &PTR_FUN_7104f56e28;
  pcStack_f8 = FUN_71001ee520;
  uStack_f0 = 0;
  puStack_e8 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_100);
  FUN_71001b12a0((ulong *)&ppuStack_100);
  if (DAT_71052af1d8 != '\0') {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if ((*puVar5 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar5)) {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    }
  }
  *(long *)(param_1 + 0x138) = (long)ppuStack_100 + (long)DAT_7104f577a8;
  ppuStack_e0 = &PTR_FUN_7104f57550;
  ppuStack_a8 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_a8);
  ppuStack_d8 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_d8);
  return;
}

