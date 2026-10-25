// addr:      71002764c0
// offset:    0x2764c0
// name:      FUN_71002764c0
// mangled:   
// signature: undefined FUN_71002764c0(void)


void FUN_71002764c0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  code *pcVar8;
  long *plVar9;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar7 = *puVar4;
    if (uVar7 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar7) goto LAB_7100276774;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar5 == 0) {
    uStack_80._0_4_ = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_68,(undefined4 *)&uStack_80);
    FUN_7100276980(param_1,(int *)&ppuStack_68);
    return;
  }
  lVar5 = param_1 + 0x1e8;
  iVar3 = FUN_71001b56d0(lVar5,"http://");
  if (iVar3 == 0) {
LAB_71002765a4:
    auStack_60[0] = 0;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    uStack_48 = 0x10;
    FUN_71001b47e0((long)&ppuStack_68,*(char **)(param_1 + 0x200),-1);
    uVar7 = *(uint *)(param_1 + 0xe4);
    if (uVar7 == 0) goto LAB_710027659c;
LAB_71002765e4:
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = *(uint *)(param_1 + 0x228) / uVar7;
    }
    uVar7 = *(uint *)(param_1 + 0xe8);
    if ((int)*(uint *)(param_1 + 0xe8) <= (int)(uVar2 * 1000)) {
      uVar7 = uVar2 * 1000;
    }
  }
  else {
    iVar3 = FUN_71001b56d0(lVar5,"https://");
    if (iVar3 == 0) goto LAB_71002765a4;
    pcVar1 = "http://";
    if (*(char *)(param_1 + 0xc0) != '\0') {
      pcVar1 = "https://";
    }
    FUN_71001b2400(&ppuStack_68,pcVar1,lVar5);
    uVar7 = *(uint *)(param_1 + 0xe4);
    if (uVar7 != 0) goto LAB_71002765e4;
LAB_710027659c:
    uVar7 = 0x7fffffff;
  }
  FUN_71001b74f0(&uStack_80,uVar7);
  *(ulong *)(param_1 + 0x188) = CONCAT44(uStack_80._4_4_,(int)uStack_80);
  FUN_710023c6d0(&uStack_80,*(undefined8 *)(param_1 + 0xb8),(long *)(param_1 + 0x100),&ppuStack_68,
                 param_1 + 0xa0,*(undefined8 *)(param_1 + 0xf8));
  pcVar8 = FUN_710170d030;
  if ((int)uStack_80 < 0) {
    pcVar8 = (code *)0x0;
  }
  if (pcVar8 == (code *)0x0) {
    uStack_84 = 0x8001000d;
    FUN_71001b4200((undefined4 *)&uStack_80,&uStack_84);
    FUN_7100276980(param_1,(int *)&uStack_80);
  }
  else {
    plVar9 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar7 = *puVar4;
      if (uVar7 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar7) {
LAB_7100276774:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x20);
      }
    }
    FUN_71001d3780(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8),
                   *(undefined4 *)(param_1 + 0x118));
    FUN_71001d6410(param_1,2);
    puVar6 = FUN_71001af850(0x20);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = 0;
      puVar6[3] = &DAT_71044114cc;
      *puVar6 = &PTR_FUN_7104f56e28;
      puVar6[1] = FUN_7100276f20;
    }
    FUN_71001d4200(param_1,param_1 + 0x100,puVar6);
  }
  ppuStack_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&ppuStack_68);
  return;
}

