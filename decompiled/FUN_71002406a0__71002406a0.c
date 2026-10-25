// addr:      71002406a0
// offset:    0x2406a0
// name:      FUN_71002406a0
// mangled:   
// signature: undefined FUN_71002406a0(void)


void FUN_71002406a0(long param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long ****pppplVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long ***ppplVar10;
  long *plVar11;
  long ****pppplVar12;
  long *plVar13;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long lStack_58;
  
  ppplStack_68 = (long ***)&ppplStack_68;
  lStack_58 = 0;
  plVar13 = &DAT_71052af128;
  ppplStack_60 = ppplStack_68;
  if (DAT_71052af1d8 == '\0') {
LAB_7100240720:
    if ((*plVar13 == 0) || (lVar7 = *(long *)(*plVar13 + 0x10), lVar7 == 0)) goto LAB_7100240750;
    lVar7 = *(long *)(lVar7 + 0xe8);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar6;
    if (uVar1 == 0) goto LAB_7100240720;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_7100240720;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100240750:
    lVar7 = 0;
  }
  FUN_71001fb670(lVar7,(long *)&ppplStack_68);
  iVar2 = *(int *)(*(long *)(param_1 + 0xb0) + 0x18);
  if (iVar2 == 0) {
LAB_7100240828:
    lVar7 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar7 + 0x78) == 0) goto LAB_71002408f8;
LAB_7100240834:
    lVar8 = *(long *)(lVar7 + 0x70);
  }
  else {
    plVar13 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_7100240828;
        }
        plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    if ((*plVar13 == 0) || (*(long *)(*plVar13 + 0x10) == 0)) goto LAB_7100240828;
    plVar13 = &DAT_71052af128;
    if (DAT_71052af1d8 == '\0') {
LAB_7100240800:
      if (*plVar13 == 0) goto LAB_7100240854;
      lVar7 = *(long *)(*plVar13 + 0x10);
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar6;
      if (uVar1 == 0) goto LAB_7100240800;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        goto LAB_7100240800;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100240854:
      lVar7 = 0;
    }
    lVar7 = FUN_71001ef600(lVar7);
    plVar11 = (long *)(lVar7 + 8);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    plVar13 = *(long **)(lVar7 + 0x58);
    while (plVar3 = plVar13, (long *)(lVar7 + 0x50) != plVar3) {
      iVar5 = FUN_71001e32f0((long)(plVar3 + 2));
      plVar13 = (long *)plVar3[1];
      if (iVar5 == iVar2) {
        lVar8 = *plVar3;
        *(long **)(lVar8 + 8) = plVar13;
        *(long *)plVar3[1] = lVar8;
        *(long *)(lVar7 + 0x60) = *(long *)(lVar7 + 0x60) + -1;
        (**(code **)plVar3[2])(plVar3 + 2);
        FUN_71001b1870((long)plVar3);
      }
    }
    (**(code **)(*plVar11 + 0x20))(plVar11);
    lVar7 = *(long *)(param_1 + 0xb0);
    if (*(long *)(lVar7 + 0x78) != 0) goto LAB_7100240834;
LAB_71002408f8:
    lVar8 = *(long *)(lVar7 + 0x70);
    if (lVar8 == 0) {
      pcStack_80 = FUN_7100240c70;
      goto LAB_7100240934;
    }
  }
  *(long *)(param_1 + 0xb8) = lVar8;
  lVar9 = *(long *)(lVar7 + 0x78);
  *(long *)(param_1 + 0xc0) = lVar9;
  if (lVar9 == lVar8) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(lVar7 + 0x70) = 0;
  *(undefined8 *)(lVar7 + 0x78) = 0;
  pcStack_80 = FUN_7100240c00;
LAB_7100240934:
  ppuStack_88 = &PTR_FUN_7104f56e28;
  uStack_78 = 0;
  puStack_70 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_88);
  if (lStack_58 != 0) {
    ppplVar10 = (long ***)*ppplStack_60;
    ppplVar10[1] = ppplStack_68[1];
    *ppplStack_68[1] = (long *)ppplVar10;
    lStack_58 = 0;
    pppplVar4 = (long ****)ppplStack_60;
    while (pppplVar4 != &ppplStack_68) {
      pppplVar12 = (long ****)pppplVar4[1];
      (*(code *)*pppplVar4[2])();
      FUN_71001b1870((long)pppplVar4);
      pppplVar4 = pppplVar12;
    }
  }
  return;
}

