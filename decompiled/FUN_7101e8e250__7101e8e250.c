// addr:      7101e8e250
// offset:    0x1e8e250
// name:      FUN_7101e8e250
// mangled:   
// signature: undefined __cdecl FUN_7101e8e250(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e8e250(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x1e4) == 0) {
    FUN_71032d6810(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x7104421055);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x710439daca);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x71042f89e4);
    FUN_7103776910(&local_40,param_1 + 0x30,(long ****)"set_txt_caution",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar5 = (ulong)(*(int *)(param_1 + 0x1f0) + 1);
    uVar4 = 1;
    FUN_710377a280((long)&local_40,(byte *)"cam_save_overwrite_start",1);
    uVar3 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_7103776640(&local_50,param_1 + 0x30,(byte ****)"set_parts_btn_04",uVar4,uVar5,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_40,(long)&local_50,(long ****)"set_txt_00",uVar4,uVar5,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_40,"cmn_yes",uVar4,uVar5,param_5,param_6,param_7,param_8);
    uVar3 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    FUN_7103771a80((long *)(param_1 + 0x60),0,0);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    if (((lVar1 == 0) ||
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x7104421055), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
      if (0x12 < *(uint *)(param_1 + 0x1dc)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1dc) * 4 + 400) = 6;
    }
  }
  return;
}

