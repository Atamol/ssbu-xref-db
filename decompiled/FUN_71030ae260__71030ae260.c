// addr:      71030ae260
// offset:    0x30ae260
// name:      FUN_71030ae260
// mangled:   
// signature: undefined __cdecl FUN_71030ae260(long param_1, int param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71030ae260(long param_1,int param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_60;
  ulong uStack_58;
  float local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x1218) = 0xffffffff;
    lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
    puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
    if (puVar2 != (ulong *)(lVar3 + 8)) {
      FUN_7102616cf0(puVar2,*(undefined1 (**) [16])(lVar3 + 8),*(undefined1 (**) [16])(lVar3 + 0x10)
                     ,param_4,param_5,param_6,param_7,param_8);
      lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
      puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
    }
    if (puVar2 + 3 != (ulong *)(lVar3 + 0x20)) {
      FUN_7102616cf0(puVar2 + 3,*(undefined1 (**) [16])(lVar3 + 0x20),
                     *(undefined1 (**) [16])(lVar3 + 0x28),param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7102624870(*(long *)(param_1 + 0x308),1);
    FUN_7102624740(*(long *)(param_1 + 0x308),1);
    lVar3 = *(long *)(*(long *)(param_1 + 0x300) + 0x60);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x300) + 0x48) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x40);
    *(ulong *)(lVar3 + 0x38) = *(ulong *)(lVar5 + 0x48) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0x50);
    *(ulong *)(lVar3 + 0x48) = *(ulong *)(lVar5 + 0x58) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x40) = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0x60);
    *(ulong *)(lVar3 + 0x58) = *(ulong *)(lVar5 + 0x68) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x50) = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
    *(ulong *)(lVar3 + 0x68) = *(ulong *)(lVar5 + 0x78) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x60) = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0x80);
    *(ulong *)(lVar3 + 0x78) = *(ulong *)(lVar5 + 0x88) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x70) = uVar6;
    *(undefined1 *)(lVar3 + 0x80) = *(undefined1 *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0xa0);
    *(ulong *)(lVar3 + 0x98) = *(ulong *)(lVar5 + 0xa8) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x90) = uVar6;
    uVar6 = *(undefined8 *)(lVar5 + 0xb0);
    *(ulong *)(lVar3 + 0xa8) = *(ulong *)(lVar5 + 0xb8) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0xa0) = uVar6;
    lVar3 = **(long **)(*(long *)(param_1 + 0x300) + 0x48);
    puVar2 = (ulong *)(*(long *)(*(long *)(param_1 + 0x300) + 0x60) + 0x18);
    if (puVar2 != (ulong *)(lVar3 + 0x20)) {
      FUN_7102616cf0(puVar2,*(undefined1 (**) [16])(lVar3 + 0x20),
                     *(undefined1 (**) [16])(lVar3 + 0x28),param_4,param_5,param_6,param_7,param_8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x11e0);
    if (DAT_71052c51ba == '\0') {
      if (puVar4 != (undefined8 *)0x0) {
        FUN_71025f55b0((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0006");
      }
    }
    else if (puVar4 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0006");
    }
    if (((DAT_71052b9230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9230), iVar1 != 0)) {
      DAT_71052b9250._0_4_ = 0x41c80000;
      DAT_71052b9248 = 0x43d40000;
      DAT_71052b9240 = 0x431f0000c1000000;
      DAT_71052b9268 = 0;
      DAT_71052b9260 = 0xc0c00000;
      __cxa_guard_release(&DAT_71052b9230);
    }
    lVar3 = *(long *)(param_1 + 0x900);
    fVar10 = *(float *)(lVar3 + 0x28);
    fVar8 = *(float *)(lVar3 + 0x2c);
    uVar7 = *(uint *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    lVar5 = *(long *)(param_1 + 0x308);
    fVar9 = *(float *)(lVar3 + 0x24);
    *(undefined1 *)(lVar5 + 0x430) = 1;
    *(undefined8 *)(lVar5 + 0x434) = 0x4170000041700000;
    *(ulong *)(lVar5 + 0x478) = (ulong)uVar7;
    *(undefined8 *)(lVar5 + 0x470) = uVar6;
    *(undefined8 *)(lVar5 + 0x498) = 0;
    *(ulong *)(lVar5 + 0x490) = CONCAT44(fVar10 * 0.017453292,fVar8 * 0.017453292);
    *(undefined4 *)(lVar5 + 0x450) = *(undefined4 *)(lVar5 + 0x3e0);
    *(ulong *)(lVar5 + 0x448) = *(ulong *)(lVar5 + 0x3d8) & 0xffffffff;
    *(undefined8 *)(lVar5 + 0x440) = *(undefined8 *)(lVar5 + 0x3d0);
    *(ulong *)(lVar5 + 0x468) = *(ulong *)(lVar5 + 0x3f8) & 0xffffffff;
    *(undefined8 *)(lVar5 + 0x460) = *(undefined8 *)(lVar5 + 0x3f0);
    *(float *)(lVar5 + 0x480) = fVar9 * 0.017453292;
    *(undefined1 *)(lVar5 + 0xe0) = 1;
    goto LAB_71030ae7bc;
  }
  if (param_2 != 0) goto LAB_71030ae7bc;
  lVar3 = **(long **)(*(long *)(param_1 + 0x300) + 0x48);
  puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
  if (puVar2 != (ulong *)(lVar3 + 8)) {
    FUN_7102616cf0(puVar2,*(undefined1 (**) [16])(lVar3 + 8),*(undefined1 (**) [16])(lVar3 + 0x10),
                   param_4,param_5,param_6,param_7,param_8);
    lVar3 = **(long **)(*(long *)(param_1 + 0x300) + 0x48);
    puVar2 = *(ulong **)(*(long *)(param_1 + 0x300) + 0x60);
  }
  if (puVar2 + 3 != (ulong *)(lVar3 + 0x20)) {
    FUN_7102616cf0(puVar2 + 3,*(undefined1 (**) [16])(lVar3 + 0x20),
                   *(undefined1 (**) [16])(lVar3 + 0x28),param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7102624870(*(long *)(param_1 + 0x308),0);
  FUN_7102624740(*(long *)(param_1 + 0x308),0);
  lVar3 = *(long *)(*(long *)(param_1 + 0x300) + 0x60);
  lVar5 = **(long **)(*(long *)(param_1 + 0x300) + 0x48);
  uVar6 = *(undefined8 *)(lVar5 + 0x40);
  *(ulong *)(lVar3 + 0x38) = *(ulong *)(lVar5 + 0x48) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  *(ulong *)(lVar3 + 0x48) = *(ulong *)(lVar5 + 0x58) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  *(ulong *)(lVar3 + 0x58) = *(ulong *)(lVar5 + 0x68) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x50) = uVar6;
  uVar6 = *(undefined8 *)(lVar5 + 0x70);
  *(ulong *)(lVar3 + 0x68) = *(ulong *)(lVar5 + 0x78) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x60) = uVar6;
  uVar6 = *(undefined8 *)(lVar5 + 0x80);
  *(ulong *)(lVar3 + 0x78) = *(ulong *)(lVar5 + 0x88) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x70) = uVar6;
  *(undefined1 *)(lVar3 + 0x80) = *(undefined1 *)(lVar5 + 0x90);
  uVar6 = *(undefined8 *)(lVar5 + 0xa0);
  *(ulong *)(lVar3 + 0x98) = *(ulong *)(lVar5 + 0xa8) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0x90) = uVar6;
  uVar6 = *(undefined8 *)(lVar5 + 0xb0);
  *(ulong *)(lVar3 + 0xa8) = *(ulong *)(lVar5 + 0xb8) & 0xffffffff;
  *(undefined8 *)(lVar3 + 0xa0) = uVar6;
  FUN_710262c200(*(long *)(param_1 + 0x300),0);
  if (((DAT_71053144d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), iVar1 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x11e0);
  if (DAT_71052c51ba == '\0') {
    if (puVar4 != (undefined8 *)0x0) {
      FUN_71025f55b0((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0006");
    }
LAB_71030ae568:
    if ((param_3 & 1) == 0) goto LAB_71030ae62c;
LAB_71030ae56c:
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0.0;
    local_60 = 0;
    uStack_58 = 0;
    if (((DAT_71052b9230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9230), iVar1 != 0)) {
      DAT_71052b9250._0_4_ = 0x41c80000;
      DAT_71052b9248 = 0x43d40000;
      DAT_71052b9240 = 0x431f0000c1000000;
      DAT_71052b9268 = 0;
      DAT_71052b9260 = 0xc0c00000;
      __cxa_guard_release(&DAT_71052b9230);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x900);
    local_60 = *puVar4;
    uStack_58 = (ulong)*(uint *)(puVar4 + 1);
    local_40 = CONCAT44(*(float *)(puVar4 + 2) * 0.017453292,
                        *(float *)((long)puVar4 + 0x14) * 0.017453292);
    uStack_38 = 0;
    local_50 = *(float *)((long)puVar4 + 0xc) * 0.017453292;
    lVar3 = *(long *)(param_1 + 0x308);
    *(float *)(lVar3 + 0x3e0) = local_50;
    *(ulong *)(lVar3 + 0x3d8) = uStack_58;
    *(undefined8 *)(lVar3 + 0x3d0) = local_60;
    *(undefined8 *)(lVar3 + 0x3f8) = 0;
    *(undefined8 *)(lVar3 + 0x3f0) = local_40;
    FUN_7103159960(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                   *(ulong *)(lVar3 + 8),&local_60);
    *(undefined1 *)(lVar3 + 0xe0) = 1;
    iVar1 = *(int *)(param_1 + 0x121c);
  }
  else {
    if (puVar4 == (undefined8 *)0x0) goto LAB_71030ae568;
    FUN_71025f5420((undefined8 *)*puVar4,(undefined8 *)puVar4[1],"IPP0006");
    if ((param_3 & 1) != 0) goto LAB_71030ae56c;
LAB_71030ae62c:
    if (((DAT_71052b9230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9230), iVar1 != 0)) {
      DAT_71052b9250._0_4_ = 0x41c80000;
      DAT_71052b9248 = 0x43d40000;
      DAT_71052b9240 = 0x431f0000c1000000;
      DAT_71052b9268 = 0;
      DAT_71052b9260 = 0xc0c00000;
      __cxa_guard_release(&DAT_71052b9230);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x900);
    fVar10 = *(float *)(puVar4 + 2);
    fVar8 = *(float *)((long)puVar4 + 0x14);
    uVar7 = *(uint *)(puVar4 + 1);
    uVar6 = *puVar4;
    lVar3 = *(long *)(param_1 + 0x308);
    fVar9 = *(float *)((long)puVar4 + 0xc);
    *(undefined1 *)(lVar3 + 0x430) = 1;
    *(undefined8 *)(lVar3 + 0x434) = 0x4170000041700000;
    *(ulong *)(lVar3 + 0x478) = (ulong)uVar7;
    *(undefined8 *)(lVar3 + 0x470) = uVar6;
    *(undefined8 *)(lVar3 + 0x498) = 0;
    *(ulong *)(lVar3 + 0x490) = CONCAT44(fVar10 * 0.017453292,fVar8 * 0.017453292);
    *(undefined4 *)(lVar3 + 0x450) = *(undefined4 *)(lVar3 + 0x3e0);
    *(ulong *)(lVar3 + 0x448) = *(ulong *)(lVar3 + 0x3d8) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x440) = *(undefined8 *)(lVar3 + 0x3d0);
    *(ulong *)(lVar3 + 0x468) = *(ulong *)(lVar3 + 0x3f8) & 0xffffffff;
    *(undefined8 *)(lVar3 + 0x460) = *(undefined8 *)(lVar3 + 0x3f0);
    *(float *)(lVar3 + 0x480) = fVar9 * 0.017453292;
    *(undefined1 *)(lVar3 + 0xe0) = 1;
    iVar1 = *(int *)(param_1 + 0x121c);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1218) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x1218) = 0x1e;
    FUN_71026249a0(*(long *)(param_1 + 0x308),(undefined8 *)(*(long *)(param_1 + 0x308) + 0xf8));
  }
LAB_71030ae7bc:
  *(int *)(param_1 + 0x121c) = param_2;
  return;
}

