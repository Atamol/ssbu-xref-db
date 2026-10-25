// addr:      7101c40d10
// offset:    0x1c40d10
// name:      FUN_7101c40d10
// mangled:   
// signature: undefined __cdecl FUN_7101c40d10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c40d10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined **local_40;
  ulong local_38;
  
  lVar3 = **(long **)(param_1 + 0x118);
  if (*(int *)(param_1 + 0x10c) == 0) {
    FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103776910(&local_40,lVar3 + 8,(long ****)"set_txt_help_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_40,"mnu_vr_calibration_start",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar2 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x710439d424);
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x71042b43a8);
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x71044331c3);
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x7104433949);
    FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x10),0x71044223a7);
  }
  else if (((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
           (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) &&
          ((lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 8), lVar3 == 0 ||
           ((plVar1 = (long *)FUN_71037964b0(lVar3,0x71042b43a8), plVar1 == (long *)0x0 ||
            (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) != 0)))))) {
    if (0x12 < *(uint *)(param_1 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 3;
  }
  return;
}

