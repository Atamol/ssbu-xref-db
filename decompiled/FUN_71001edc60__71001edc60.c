// addr:      71001edc60
// offset:    0x1edc60
// name:      FUN_71001edc60
// mangled:   
// signature: undefined FUN_71001edc60(void)


void FUN_71001edc60(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  ulonglong uVar5;
  long lVar6;
  long *plVar7;
  undefined **ppuStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  undefined2 uStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  plVar4 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001ede18;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (((*plVar4 == 0) || (lVar6 = *(long *)(*plVar4 + 0x10), lVar6 == 0)) ||
     (*(long *)(lVar6 + 0xe8) == 0)) {
LAB_71001ede18:
    ppuStack_d8 = &PTR_FUN_7104f56e28;
    ppuStack_d0 = (undefined **)FUN_71001edb60;
    uStack_c8 = 0;
    puStack_c0 = &DAT_71044114cc;
    FUN_71001d3d60(param_1,(long)&ppuStack_d8);
    return;
  }
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001ee02c;
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar4 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar4 == (long *)0x0) goto LAB_71001ede18;
  plVar7 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001ee02c:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar6 = *(long *)(*(long *)(*plVar7 + 0x10) + 0x198);
  uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0x148) + 0x10,"RVCID",0);
  iVar2 = FUN_71001e85d0(lVar6,(int)uVar5);
  if (iVar2 != -1) {
    ppuStack_f8 = (undefined **)CONCAT44(ppuStack_f8._4_4_,0x10001);
    FUN_71001b4200((undefined4 *)&ppuStack_d8,(undefined4 *)&ppuStack_f8);
    FUN_71001d0f00(plVar4,2,&ppuStack_d8,1);
    FUN_71001cd870(param_1);
    return;
  }
  FUN_71001b12a0((ulong *)&ppuStack_d8);
  if (*(undefined ***)(param_1 + 0x138) < ppuStack_d8) goto LAB_71001ede18;
  if (*(int *)(param_1 + 0xbc) == 3) {
    ppuStack_d8 = &PTR_FUN_7104f56e28;
    ppuStack_d0 = (undefined **)FUN_71001edb60;
    uStack_c8 = 0;
    puStack_c0 = &DAT_71044114cc;
    FUN_71001d3d60(param_1,(long)&ppuStack_d8);
LAB_71001edf20:
    FUN_71001d6410(param_1,1);
    *(undefined4 *)(param_1 + 0x44) = 0x32;
    return;
  }
  if (*(int *)(param_1 + 0xbc) != 2) goto LAB_71001edf20;
  plVar4 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001eded8:
    if ((*plVar4 != 0) && (lVar6 = *(long *)(*plVar4 + 0x10), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0xe8);
      goto LAB_71001edf54;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001eded8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001eded8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar6 = 0;
LAB_71001edf54:
  puStack_b8 = &uStack_c8;
  uStack_c8 = uStack_c8 & 0xffffffffffffff00;
  uStack_b0 = 0x10;
  ppuStack_d8 = &PTR_FUN_7104f57550;
  ppuStack_d0 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&ppuStack_d0,*(char **)(lVar6 + 0x168),-1);
  uStack_a8 = *(undefined2 *)(lVar6 + 0x178);
  puStack_88 = auStack_98;
  uStack_80 = 0x10;
  auStack_98[0] = 0;
  ppuStack_a0 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&ppuStack_a0,*(char **)(lVar6 + 0x198),-1);
  uStack_78 = *(undefined8 *)(lVar6 + 0x1a8);
  uStack_70 = *(undefined8 *)(lVar6 + 0x1b0);
  uStack_68 = *(undefined1 *)(lVar6 + 0x1b8);
  ppuStack_f8 = &PTR_FUN_7104f56e28;
  pcStack_f0 = FUN_71001ee050;
  uStack_e8 = 0;
  puStack_e0 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_f8);
  ppuStack_d8 = &PTR_FUN_7104f57550;
  ppuStack_a0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_a0);
  ppuStack_d0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_d0);
  return;
}

