// addr:      7101e51da0
// offset:    0x1e51da0
// name:      FUN_7101e51da0
// mangled:   
// signature: undefined __cdecl FUN_7101e51da0(float param_1, long param_2, ulong param_3, undefined8 param_4, undefined8 param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_7101e51da0(float param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined **local_50;
  ulong local_48;
  
  lVar4 = *(long *)(param_2 + 8);
  fVar5 = 0.0;
  if ((*(long *)(lVar4 + 8) != 0) &&
     (plVar1 = (long *)FUN_71037964b0(*(long *)(lVar4 + 8),0x71043cfbba), fVar5 = 0.0,
     plVar1 != (long *)0x0)) {
    fVar5 = (float)(**(code **)(*plVar1 + 0x1a8))();
    lVar4 = *(long *)(param_2 + 8);
  }
  FUN_7103778630((ulong)(uint)(fVar5 * param_1),lVar4,0x71043cfbba);
  if ((param_3 & 1) != 0) {
    FUN_71037780e0(&local_50,param_2,(long ****)"progress_finish",param_4,param_5,param_6,param_7,
                   param_8,param_9);
    uVar3 = local_48;
    if ((*(long **)(local_48 + 8) == (long *)0x0) ||
       (uVar2 = (**(code **)(**(long **)(local_48 + 8) + 0x138))(), (uVar2 & 1) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71043bec46);
    }
    else if ((*(long **)(local_48 + 8) == (long *)0x0) ||
            (uVar2 = (**(code **)(**(long **)(local_48 + 8) + 0x130))(), (uVar2 & 1) == 0)) {
      FUN_710377aee0(0x3f800000,(long)&local_50);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710433a73c);
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    return;
  }
  lVar4 = *(long *)(param_2 + 8);
  if ((*(long *)(lVar4 + 8) != 0) &&
     (plVar1 = (long *)FUN_71037964b0(*(long *)(lVar4 + 8),0x71042d69e0), plVar1 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar1 + 0x130))();
    if ((uVar3 & 1) != 0) goto LAB_7101e51e9c;
    lVar4 = *(long *)(param_2 + 8);
  }
  FUN_7103778300(0x3f800000,lVar4,0x71042d69e0);
LAB_7101e51e9c:
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71042f893e);
  return;
}

