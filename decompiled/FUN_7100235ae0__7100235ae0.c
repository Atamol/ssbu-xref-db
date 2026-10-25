// addr:      7100235ae0
// offset:    0x235ae0
// name:      FUN_7100235ae0
// mangled:   
// signature: undefined FUN_7100235ae0(void)


void FUN_7100235ae0(undefined **param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined8 auStack_b0 [14];
  
  if (*(long *)(*(long *)(param_1[0x15] + 0x20) + 0x10) == 0) {
    FUN_7100235d90((long)param_1);
    return;
  }
  FUN_71001e6720(auStack_b0);
  FUN_710022b480((long)auStack_b0,10,1);
  ppuVar1 = param_1 + 0x19;
  param_1[0x2a] = *(undefined **)(*(long *)(param_1[0x15] + 0x20) + 0x40);
  FUN_7100231cb0((long *)ppuVar1,(long)auStack_b0,param_1 + 0x38,param_1 + 0x16,param_1 + 0x17,
                 param_1 + 0x31,0);
  ppuStack_d0 = param_1;
  FUN_71001d1960((long)ppuVar1,(long)FUN_7100235e70,(long *)&ppuStack_d0,0);
  plVar6 = *(long **)(*(long *)(*(long *)(param_1[0x15] + 0x20) + 0x10) + 0x80);
  FUN_71001d0c80((long)ppuVar1,plVar6,(int)plVar6[0x12]);
  uVar3 = FUN_71001e69b0((long)auStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100235bf4:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_7100235c44;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 == 0) goto LAB_7100235bf4;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100235bf4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100235c44:
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  (**(code **)(*plVar6 + 0xf0))(&ppuStack_d0,plVar6,uVar3,1,0,0,0);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  ppuStack_d0 = &PTR_FUN_7104f56e28;
  pcStack_c8 = FUN_7100235eb0;
  uStack_c0 = 0;
  puStack_b8 = &DAT_71044114cc;
  FUN_71001d3d60((long)param_1,(long)&ppuStack_d0);
  FUN_71001d6410((long)param_1,2);
  FUN_71001e6910(auStack_b0);
  return;
}

