// addr:      7100209f60
// offset:    0x209f60
// name:      FUN_7100209f60
// mangled:   
// signature: undefined __cdecl FUN_7100209f60(undefined8 * param_1, uint param_2, undefined8 param_3)


void FUN_7100209f60(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  short local_38 [4];
  
  FUN_71001e0110(param_1,param_2);
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_7104f57160;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_1 + 6;
  FUN_71001e02d0();
  *param_1 = &PTR_FUN_7104f57da0;
  param_1[10] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xd;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_1 + 0x14;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_1 + 0x16;
  param_1[0x17] = param_1 + 0x16;
  param_1[0x18] = 0;
  FUN_71001f52c0((long)(param_1 + 0x1d));
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1f] = &PTR_FUN_7104f59348;
  param_1[0x21] = param_1 + 0x22;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = param_1 + 0x25;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = param_1 + 0x2b;
  FUN_71001b0350(param_1 + 0x2e,0x4000,1);
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  uVar5 = (uint)DAT_71052af1d8;
  if (DAT_71052af1d8 != 0) {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar2;
  }
  *(uint *)((long)param_1 + 0xe4) = uVar5;
  param_1[3] = param_3;
  FUN_71001b12a0((ulong *)local_38);
  iVar1 = FUN_71001b34a0(0xffff);
  *(short *)(param_1 + 0x20) = (short)iVar1 + local_38[0];
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == 0) {
LAB_710020a0f0:
    if (*plVar6 != 0) {
      lVar3 = *(long *)(*plVar6 + 0x10);
      goto LAB_710020a11c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar2;
    if (uVar5 == 0) goto LAB_710020a0f0;
    if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      goto LAB_710020a0f0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710020a11c:
  FUN_71001d5e90(lVar3,FUN_710020a180,param_1);
  puVar4 = FUN_71001af850(0x40);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    *(uint *)(puVar4 + 1) = param_2;
    *(undefined4 *)((long)puVar4 + 0xc) = 0xffffffff;
    *puVar4 = &PTR_FUN_7104f58158;
    puVar4[4] = 0;
    puVar4[3] = puVar4 + 4;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
  }
  param_1[0x2d] = puVar4;
  return;
}

