// addr:      7101c7a7e0
// offset:    0x1c7a7e0
// name:      FUN_7101c7a7e0
// mangled:   
// signature: undefined __cdecl FUN_7101c7a7e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c7a7e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(*(long **)(param_1 + 0x118),0);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(*(long **)(param_1 + 0x120),0);
  }
  FUN_7103776640(&local_30,param_1 + 0x108,(byte ****)"set_parts_txt_head_00",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_scene",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_38;
  lVar3 = *(long *)(local_38 + 0x10);
  if ((((lVar3 == 0) || (*(char *)(lVar3 + 0x27c) == '\0')) || (*(char *)(lVar3 + 0x27d) != '\0'))
     || ((*(char *)(lVar3 + 0x27e) == '\0' && (*(char *)(lVar3 + 0x280) == '\0')))) {
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0xec);
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    uVar4 = local_28;
    if (iVar1 < 0xb) goto LAB_7101c7a8a4;
  }
  FUN_7103778300(0x3f800000,local_28,0x7104421055);
  uVar4 = local_28;
  if (0 < *(int *)(param_1 + 0xe4)) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
  }
LAB_7101c7a8a4:
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  return;
}

