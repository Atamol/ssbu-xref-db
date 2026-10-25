// addr:      7101c75f90
// offset:    0x1c75f90
// name:      FUN_7101c75f90
// mangled:   
// signature: undefined __cdecl FUN_7101c75f90(long param_1, char * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c75f90(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  long *local_58;
  
  if (*(char *)(param_1 + 0x182) != '\0') {
    lVar1 = param_1 + 0x18;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104454acf);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_04",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_70,lVar1,(long ****)"set_txt_balloon_02",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_80,lVar1,(long ****)"set_txt_balloon_03",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042d62eb);
    FUN_710377a120((long)&local_60,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_70,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_80,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar5 = local_58;
    plVar4 = local_68;
    pfVar2 = (float *)&nn::util::Vector4f::ConstantZero;
    if (local_68[2] != 0) {
      pfVar2 = (float *)(local_68[2] + 0x230);
    }
    fVar9 = 0.0;
    fVar8 = *pfVar2;
    fVar10 = fVar9;
    if (*local_58 != 0) {
      fVar10 = ABS(*(float *)(*local_58 + 0x50));
    }
    if (*local_68 != 0) {
      fVar9 = ABS(*(float *)(*local_68 + 0x50));
    }
    if (fVar8 <= fVar10) {
      pcVar7 = "set_txt_xsize_m";
    }
    else {
      pcVar7 = "set_txt_xsize_l";
    }
    FUN_7103776910(&local_90,lVar1,(long ****)pcVar7,param_3,param_4,param_5,param_6,param_7,param_8
                  );
    uVar3 = local_88;
    if ((undefined ***)(param_1 + 0x1c0) != &local_90) {
      local_88 = 0;
      uVar6 = *(ulong *)(param_1 + 0x1c8);
      *(ulong *)(param_1 + 0x1c8) = uVar3;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar3 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    if (fVar10 < fVar8) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104401638);
    }
    if (fVar9 < fVar8) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71044437e8);
    }
    uVar3 = local_78;
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b4) * 0x3c;
    local_80 = &PTR_FUN_710523d9a8;
    local_78 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = (long *)0x0;
    FUN_710392eb40((ulong)plVar4);
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
  }
  return;
}

