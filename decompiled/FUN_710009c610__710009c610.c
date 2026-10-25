// addr:      710009c610
// offset:    0x9c610
// name:      FUN_710009c610
// mangled:   
// signature: undefined __cdecl FUN_710009c610(long param_1)


void FUN_710009c610(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined8 *)(param_1 + 0x174) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x16c) = 0xffffffffffffffff;
  piVar1 = (int *)(param_1 + 0x14c);
  *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
  piVar2 = (int *)(param_1 + 0x144);
  piVar3 = (int *)(param_1 + 0x13c);
  *(undefined8 *)(param_1 + 0x15c) = 0xffffffffffffffff;
  piVar4 = (int *)(param_1 + 0x134);
  piVar5 = (int *)(param_1 + 300);
  *(undefined8 *)(param_1 + 0x154) = 0xffffffffffffffff;
  piVar1[0] = -1;
  piVar1[1] = -1;
  piVar2[0] = -1;
  piVar2[1] = -1;
  piVar3[0] = -1;
  piVar3[1] = -1;
  piVar4[0] = -1;
  piVar4[1] = -1;
  piVar5[0] = -1;
  piVar5[1] = -1;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffffffffffff;
  FUN_71000af8c0((undefined4 *)(param_1 + 0x124),*(long *)(param_1 + 8),"sysViewUniformBlock");
  FUN_71000af8c0(piVar5,*(long *)(param_1 + 8),"sysEmitterStaticUniformBlock");
  FUN_71000af8c0(piVar4,*(long *)(param_1 + 8),"sysEmitterDynamicUniformBlock");
  FUN_71000af8c0(piVar3,*(long *)(param_1 + 8),"sysEmitterFieldUniformBlock");
  FUN_71000af8c0(piVar2,*(long *)(param_1 + 8),"sysEmitterPluginUniformBlock");
  FUN_71000af8c0(piVar1,*(long *)(param_1 + 8),"sysCustomShaderReservedUniformBlockParam");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x154),*(long *)(param_1 + 8),
                 "sysCustomShaderUniformBlock0");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x15c),*(long *)(param_1 + 8),
                 "sysCustomShaderUniformBlock1");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x164),*(long *)(param_1 + 8),
                 "sysCustomShaderUniformBlock2");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x16c),*(long *)(param_1 + 8),
                 "sysCustomShaderUniformBlock3");
  if (*(int *)(param_1 + 0x124) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  }
  if (*(int *)(param_1 + 0x128) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
  }
  if (*piVar5 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000;
  }
  if (*piVar4 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  }
  if (*(int *)(param_1 + 0x138) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20000;
  }
  if (*piVar3 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  if (*(int *)(param_1 + 0x140) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000;
  }
  if (*piVar2 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  }
  if (*(int *)(param_1 + 0x148) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80000;
  }
  if (*piVar1 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  if (*(int *)(param_1 + 0x150) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100000;
  }
  if (*(int *)(param_1 + 0x124) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
  }
  if (*(int *)(param_1 + 0x128) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
  }
  if (*piVar5 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400000;
  }
  if (*piVar4 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if (*(int *)(param_1 + 0x138) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
  }
  if (*piVar3 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
  }
  if (*(int *)(param_1 + 0x140) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000000;
  }
  return;
}

