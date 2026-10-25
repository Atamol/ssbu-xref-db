// addr:      7100282ba0
// offset:    0x282ba0
// name:      FUN_7100282ba0
// mangled:   
// signature: undefined FUN_7100282ba0(void)


void FUN_7100282ba0(long *param_1)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  code *pcVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined **ppuStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  plVar15 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar9;
    if (uVar8 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar8) goto LAB_7100282f64;
      plVar15 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
    }
  }
  lVar10 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar15 + 0x10) + 0x18),*(uint *)(param_1 + 0x14));
  if (lVar10 == 0) {
    uStack_a0._0_4_ = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_88,(undefined4 *)&uStack_a0);
LAB_7100282d94:
    FUN_71002827c0(param_1,(int *)&ppuStack_88);
    return;
  }
  if (*(int *)((long)param_1 + 0x10c) != 2) {
    ppuStack_88 = (undefined **)param_1[0x2a];
    uStack_80 = param_1[0x2b];
    lStack_78 = param_1[0x2c];
    goto LAB_7100282d94;
  }
  plVar15 = param_1 + 0x1f;
  FUN_71001d1590(plVar15);
  puVar11 = FUN_71001af850(0xa8);
  if (puVar11 != (undefined8 *)0x0) {
    lVar4 = param_1[0x14];
    lVar5 = param_1[0x1b];
    lVar18 = param_1[0x1a];
    lVar10 = param_1[0x18];
    lVar2 = param_1[0x19];
    lVar17 = param_1[0x48];
    if (lVar17 == 0) {
      lVar17 = param_1[0x49];
    }
    uVar12 = (**(code **)(*param_1 + 0x68))(param_1);
    lVar19 = param_1[0x1d];
    uVar13 = (**(code **)(*param_1 + 0x70))(param_1);
    *(int *)(puVar11 + 1) = (int)lVar4;
    puVar11[2] = param_1 + 0x3f;
    *(int *)(puVar11 + 5) = (int)lVar5;
    puVar11[6] = lVar10;
    puVar11[7] = lVar2;
    *(undefined1 *)(puVar11 + 0x14) = 0;
    puVar11[8] = lVar18;
    puVar11[9] = lVar17;
    puVar11[10] = uVar12 & 0xffffffff;
    puVar11[0xb] = uVar13;
    *puVar11 = &PTR_FUN_7104f5ee40;
    puVar11[0xc] = lVar19;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar11[0x10] = 0;
    puVar11[0x11] = 0;
    puVar11[0x12] = 0;
    puVar11[0x13] = 0;
    puVar11[3] = param_1 + 0x42;
    puVar11[4] = param_1 + 0x45;
  }
  param_1[0x4d] = (long)puVar11;
  plVar16 = param_1 + 0x3a;
  iVar6 = FUN_71001b56d0((long)plVar16,"http://");
  if (iVar6 == 0) {
LAB_7100282da4:
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    ppuStack_88 = &PTR_FUN_710509cc08;
    puStack_70 = &uStack_80;
    uStack_68 = 0x10;
    FUN_71001b47e0((long)&ppuStack_88,(char *)param_1[0x3d],-1);
  }
  else {
    iVar6 = FUN_71001b56d0((long)plVar16,"https://");
    if (iVar6 == 0) goto LAB_7100282da4;
    pcVar1 = "http://";
    if ((char)param_1[0x17] != '\0') {
      pcVar1 = "https://";
    }
    FUN_71001b2400(&ppuStack_88,pcVar1,(long)plVar16);
  }
  uVar7 = (**(code **)(*param_1 + 0x68))(param_1);
  uVar8 = *(uint *)((long)param_1 + 0xdc);
  if (uVar8 == 0) {
    uVar8 = 0x7fffffff;
  }
  else {
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = uVar7 / uVar8;
    }
    uVar8 = *(uint *)(param_1 + 0x1c);
    if ((int)*(uint *)(param_1 + 0x1c) <= (int)(uVar3 * 1000)) {
      uVar8 = uVar3 * 1000;
    }
  }
  FUN_71001b74f0(&uStack_a0,uVar8);
  param_1[0x30] = CONCAT44(uStack_a0._4_4_,(int)uStack_a0);
  FUN_710023c6e0(&uStack_a0,param_1[0x16],plVar15,&ppuStack_88,param_1[0x4d],param_1[0x1e]);
  pcVar14 = FUN_710170d030;
  if ((int)uStack_a0 < 0) {
    pcVar14 = (code *)0x0;
  }
  if (pcVar14 == (code *)0x0) {
    uStack_a4 = 0x8001000d;
    FUN_71001b4200((undefined4 *)&uStack_a0,&uStack_a4);
    FUN_71002827c0(param_1,(int *)&uStack_a0);
  }
  else {
    plVar16 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar8 = *puVar9;
      if (uVar8 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar8) {
LAB_7100282f64:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar16 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      }
    }
    FUN_71001d3780(*(long *)(*(long *)(*plVar16 + 0x10) + 0x18),*(uint *)(param_1 + 0x14),
                   (int)param_1[0x22]);
    FUN_71001d6410((long)param_1,2);
    puVar11 = FUN_71001af850(0x20);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[2] = 0;
      puVar11[3] = &DAT_71044114cc;
      *puVar11 = &PTR_FUN_7104f56e28;
      puVar11[1] = FUN_7100282f80;
    }
    FUN_71001d4200((long)param_1,(long)plVar15,puVar11);
  }
  ppuStack_88 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_88);
  return;
}

