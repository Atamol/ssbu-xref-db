// addr:      71001e6150
// offset:    0x1e6150
// name:      FUN_71001e6150
// mangled:   
// signature: undefined FUN_71001e6150(void)


void FUN_71001e6150(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long *plVar6;
  char *pcVar7;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    ppuStack_88 = (undefined **)CONCAT44(ppuStack_88._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_68,(undefined4 *)&ppuStack_88);
    FUN_71001e63a0(param_1,(int *)&ppuStack_68);
    return;
  }
  pcVar7 = &DAT_71052af278;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar2 != 0) {
      pcVar7 = (char *)(DAT_71052af270 + (ulong)*puVar2);
    }
  }
  if (*pcVar7 != '\0') {
    FUN_71001d6410(param_1,1);
    *(undefined4 *)(param_1 + 0x44) = 0x32;
    return;
  }
  auStack_60[0] = 0;
  ppuStack_68 = &PTR_FUN_710509cc08;
  puStack_50 = auStack_60;
  uStack_48 = 0x10;
  FUN_71001b47e0((long)&ppuStack_68,"DNS Check Thread",-1);
  puVar4 = FUN_71001af850(0x78);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001b2360(puVar4,(long)&ppuStack_68,*(undefined4 *)(param_1 + 0x110));
    puVar4[0xd] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    *puVar4 = &PTR_FUN_7104f593f8;
  }
  *(undefined8 **)(param_1 + 0xc0) = puVar4;
  *(undefined4 *)((long)puVar4 + 0x54) = *(undefined4 *)(param_1 + 0x114);
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar2 != 0) {
      *(undefined1 *)(DAT_71052af270 + (ulong)*puVar2) = 1;
      goto LAB_71001e630c;
    }
  }
  DAT_71052af278 = 1;
LAB_71001e630c:
  pvVar5 = *(void **)(param_1 + 0xc0);
  *(long *)((long)pvVar5 + 0x68) = param_1;
  *(undefined4 *)((long)pvVar5 + 0x70) = 0;
  *(code **)((long)pvVar5 + 0x58) = FUN_71001e60b0;
  *(undefined8 *)((long)pvVar5 + 0x60) = 0;
  FUN_71001b27e0(pvVar5,0);
  ppuStack_88 = &PTR_FUN_7104f56e28;
  pcStack_80 = FUN_71001e64d0;
  uStack_78 = 0;
  puStack_70 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_88);
  ppuStack_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_68);
  return;
}

