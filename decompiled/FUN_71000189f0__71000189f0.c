// addr:      71000189f0
// offset:    0x189f0
// name:      FUN_71000189f0
// mangled:   
// signature: undefined8 __cdecl FUN_71000189f0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71000189f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  size_t sVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x998) == 0) {
    FUN_7100016040(param_1,(byte *)"No URL set!",param_3,param_4,param_5,param_6,param_7,param_8);
    return 3;
  }
  if (*(char *)(param_1 + 0x9a0) != '\0') {
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x998) = 0;
    *(undefined1 *)(param_1 + 0x9a0) = 0;
  }
  *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(param_1 + 0x7d8);
  uVar1 = FUN_71000263c0(param_1,*(undefined8 *)(param_1 + 0x658));
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined1 *)(param_1 + 0x4bb0) = 0;
    *(undefined1 *)(param_1 + 0x4c30) = 0;
    *(undefined4 *)(param_1 + 0x4f64) = 0;
    *(undefined1 *)(param_1 + 0x4d00) = 0;
    *(undefined8 *)(param_1 + 0x4cc0) = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 *)(param_1 + 0x4ce0) = *(undefined8 *)(param_1 + 0x2b0);
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x5090) = 0;
    if (*(int *)(param_1 + 0x480) == 4) {
      *(undefined8 *)(param_1 + 0x4fb8) = *(undefined8 *)(param_1 + 0x3d8);
      lVar3 = *(long *)(param_1 + 0x9b8);
    }
    else {
      *(long *)(param_1 + 0x4fb8) = *(long *)(param_1 + 0x2f0);
      if ((*(long *)(param_1 + 0x2f0) == -1) && (*(char **)(param_1 + 0x2e0) != (char *)0x0)) {
        sVar2 = strlen(*(char **)(param_1 + 0x2e0));
        *(size_t *)(param_1 + 0x4fb8) = sVar2;
      }
      lVar3 = *(long *)(param_1 + 0x9b8);
    }
    if (lVar3 != 0) {
      FUN_7100000f70(param_1);
    }
    if ((*(long *)(param_1 + 0x9c0) == 0) || (uVar1 = FUN_7100006210(param_1), (int)uVar1 == 0)) {
      *(undefined1 *)(param_1 + 0x4c38) = 1;
      FUN_7100005220(param_1);
      FUN_7100014f90(param_1);
      FUN_7100015110(param_1);
      if (*(long *)(param_1 + 0x3a8) != 0) {
        FUN_71000086c0(param_1,*(long *)(param_1 + 0x3a8),8,param_4,param_5,param_6,param_7,param_8)
        ;
      }
      if (*(long *)(param_1 + 0x3b0) != 0) {
        FUN_71000086c0(param_1,*(long *)(param_1 + 0x3b0),2,param_4,param_5,param_6,param_7,param_8)
        ;
      }
      *(ulong *)(param_1 + 0x4cc8) = *(ulong *)(param_1 + 0x4cc8) & *(ulong *)(param_1 + 0x4cc0);
      *(ulong *)(param_1 + 0x4ce8) = *(ulong *)(param_1 + 0x4ce8) & *(ulong *)(param_1 + 0x4ce0);
      if (((*(char *)(param_1 + 0x908) != '\0') && (*(int *)(param_1 + 0x4ff0) == 0)) &&
         (uVar1 = FUN_7100027110((int *)(param_1 + 0x4ff0)), (int)uVar1 != 0)) {
        return 0x1b;
      }
      return 0;
    }
  }
  return uVar1;
}

