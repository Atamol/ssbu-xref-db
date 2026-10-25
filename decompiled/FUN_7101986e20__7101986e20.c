// addr:      7101986e20
// offset:    0x1986e20
// name:      FUN_7101986e20
// mangled:   
// signature: undefined __cdecl FUN_7101986e20(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101986e20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **local_30;
  ulong local_28;
  
  if (*(int *)(param_1 + 0x444) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71042b3bef);
    lVar1 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
    if (*(int *)(lVar1 + 0x1204) == 0) {
      if (*(char *)(lVar1 + 0x2259) == '\0') {
        return;
      }
    }
    else {
      *(undefined4 *)(lVar1 + 0x1204) = 0;
    }
    if ((*(char *)(lVar1 + 0x2257) != '\0') && (*(char *)(lVar1 + 0x2259) != '\0')) {
      *(char *)(lVar1 + 0x2259) = '\0';
      FUN_71037780e0(&local_30,**(long **)(lVar1 + 0xb8) + 8,(long ****)"footer_help_out",param_3,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_710377b140((long)&local_30);
      uVar3 = local_28;
      local_30 = &PTR_FUN_710523d9e8;
      local_28 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if ((((lVar1 == 0) ||
         (plVar2 = (long *)FUN_71037964b0(lVar1,0x71042b3bef), plVar2 == (long *)0x0)) ||
        (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x43c))) {
      *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + -1;
    }
  }
  return;
}

