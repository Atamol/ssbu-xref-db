// addr:      710023eae0
// offset:    0x23eae0
// name:      FUN_710023eae0
// mangled:   
// signature: undefined FUN_710023eae0(void)


void FUN_710023eae0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [3];
  
  if (*(char *)(param_1 + 0x4b0) != '\0') {
    ppuStack_98 = (undefined **)CONCAT44(ppuStack_98._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)auStack_48,(undefined4 *)&ppuStack_98);
    puVar4 = auStack_48;
LAB_710023ebf4:
    FUN_710023d9c0(param_1,(undefined4 *)puVar4);
    return;
  }
  if (*(int *)(param_1 + 0x1dc) != 2) {
    uStack_60 = *(undefined8 *)(param_1 + 0x220);
    uStack_58 = *(undefined8 *)(param_1 + 0x228);
    puVar4 = &uStack_60;
    uStack_50 = *(undefined8 *)(param_1 + 0x230);
    goto LAB_710023ebf4;
  }
  pcVar5 = FUN_710170d030;
  if (*(int *)(param_1 + 0x288) < 0) {
    pcVar5 = (code *)0x0;
  }
  if (pcVar5 == (code *)0x0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x288);
    uStack_70 = *(undefined8 *)(param_1 + 0x290);
    uStack_68 = *(undefined8 *)(param_1 + 0x298);
    puVar4 = &uStack_78;
    goto LAB_710023ebf4;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x10) =
       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x4c0) + 0x10) + 0x38);
  plVar6 = &DAT_71052af180;
  if (DAT_71052af1d8 == '\0') {
LAB_710023ebb0:
    if (*plVar6 != 0) {
      lVar7 = *(long *)(*plVar6 + 0x10);
      goto LAB_710023ec2c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023ebb0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
      goto LAB_710023ebb0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
LAB_710023ec2c:
  lVar3 = FUN_71001b07b0((ulong *)(param_1 + 0x470));
  *(long *)(lVar7 + 0x68) = lVar3;
  FUN_71001b12a0((ulong *)&ppuStack_98);
  *(undefined ***)(lVar7 + 0x60) = ppuStack_98;
  ppuStack_98 = &PTR_FUN_7104f56e28;
  pcStack_90 = FUN_710023ec80;
  uStack_88 = 0;
  puStack_80 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&ppuStack_98);
  return;
}

