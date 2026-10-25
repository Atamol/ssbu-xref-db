// addr:      7100281a70
// offset:    0x281a70
// name:      FUN_7100281a70
// mangled:   
// signature: undefined FUN_7100281a70(void)


void FUN_7100281a70(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uStack_90;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar7;
    if (uVar10 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar10) goto LAB_7100281dd4;
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
    }
  }
  lVar8 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar14 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar8 == 0) {
    uStack_90._0_4_ = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_78,(undefined4 *)&uStack_90);
LAB_7100281c1c:
    FUN_7100281930(param_1,(int *)&ppuStack_78);
    return;
  }
  if (*(int *)(param_1 + 0x10c) != 2) {
    ppuStack_78 = *(undefined ***)(param_1 + 0x150);
    uStack_70 = *(ulong *)(param_1 + 0x158);
    uStack_68 = *(undefined8 *)(param_1 + 0x160);
    goto LAB_7100281c1c;
  }
  plVar14 = (long *)(param_1 + 0xf8);
  FUN_71001d1590(plVar14);
  puVar9 = FUN_71001af850(0xa8);
  if (puVar9 != (undefined8 *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    lVar8 = *(long *)(param_1 + 0x3d8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 0x3e0);
    }
    uVar10 = *(uint *)(param_1 + 0x1c4);
    uVar13 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(param_1 + 0xa0);
    puVar9[2] = param_1 + 0x390;
    puVar9[3] = param_1 + 0x3a8;
    puVar9[4] = param_1 + 0x3c0;
    *(undefined4 *)(puVar9 + 5) = uVar4;
    puVar9[6] = uVar2;
    puVar9[7] = uVar3;
    *puVar9 = &PTR_FUN_7104f5ee40;
    *(undefined1 *)(puVar9 + 0x14) = 0;
    puVar9[8] = uVar12;
    puVar9[9] = lVar8;
    puVar9[10] = (ulong)uVar10;
    puVar9[0xb] = 0;
    puVar9[0xc] = uVar13;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    puVar9[0x11] = 0;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0;
  }
  lVar8 = param_1 + 0x368;
  *(undefined8 **)(param_1 + 0x400) = puVar9;
  iVar6 = FUN_71001b56d0(lVar8,"http://");
  if (iVar6 == 0) {
LAB_7100281c2c:
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    ppuStack_78 = &PTR_FUN_710509cc08;
    puStack_60 = &uStack_70;
    uStack_58 = 0x10;
    FUN_71001b47e0((long)&ppuStack_78,*(char **)(param_1 + 0x380),-1);
    uVar10 = *(uint *)(param_1 + 0xdc);
    if (uVar10 == 0) goto LAB_7100281be8;
LAB_7100281c6c:
    uVar5 = 0;
    if (uVar10 != 0) {
      uVar5 = *(uint *)(param_1 + 0x1c4) / uVar10;
    }
    uVar10 = *(uint *)(param_1 + 0xe0);
    if ((int)*(uint *)(param_1 + 0xe0) <= (int)(uVar5 * 1000)) {
      uVar10 = uVar5 * 1000;
    }
  }
  else {
    iVar6 = FUN_71001b56d0(lVar8,"https://");
    if (iVar6 == 0) goto LAB_7100281c2c;
    pcVar1 = "http://";
    if (*(char *)(param_1 + 0xb8) != '\0') {
      pcVar1 = "https://";
    }
    FUN_71001b2400(&ppuStack_78,pcVar1,lVar8);
    uVar10 = *(uint *)(param_1 + 0xdc);
    if (uVar10 != 0) goto LAB_7100281c6c;
LAB_7100281be8:
    uVar10 = 0x7fffffff;
  }
  FUN_71001b74f0(&uStack_90,uVar10);
  *(ulong *)(param_1 + 0x180) = CONCAT44(uStack_90._4_4_,(int)uStack_90);
  FUN_710023c6e0(&uStack_90,*(undefined8 *)(param_1 + 0xb0),plVar14,&ppuStack_78,
                 *(undefined8 *)(param_1 + 0x400),*(undefined8 *)(param_1 + 0xf0));
  pcVar11 = FUN_710170d030;
  if ((int)uStack_90 < 0) {
    pcVar11 = (code *)0x0;
  }
  if (pcVar11 == (code *)0x0) {
    uStack_44 = 0x8001000d;
    FUN_71001b4200((undefined4 *)&uStack_90,&uStack_44);
    FUN_7100281930(param_1,(int *)&uStack_90);
  }
  else {
    plVar15 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar10 = *puVar7;
      if (uVar10 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar10) {
LAB_7100281dd4:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      }
    }
    FUN_71001d3780(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                   *(undefined4 *)(param_1 + 0x110));
    FUN_71001d6410(param_1,2);
    puVar9 = FUN_71001af850(0x20);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[2] = 0;
      puVar9[3] = &DAT_71044114cc;
      *puVar9 = &PTR_FUN_7104f56e28;
      puVar9[1] = FUN_7100281df0;
    }
    FUN_71001d4200(param_1,(long)plVar14,puVar9);
  }
  ppuStack_78 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_78);
  return;
}

