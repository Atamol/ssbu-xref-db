// addr:      7101db1ad0
// offset:    0x1db1ad0
// name:      FUN_7101db1ad0
// mangled:   
// signature: undefined8 __cdecl FUN_7101db1ad0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101db1ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **local_30;
  ulong local_28;
  
  if ((((*(char *)(param_1 + 0x44e) == '\0') && (*(int *)(param_1 + 0x90) == 2)) &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(), (uVar1 & 1) != 0)) &&
     (((*(int *)(*(long *)(param_1 + 0x70) + 0x254) == 3 &&
       (lVar3 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600),
       *(char *)(lVar3 + 0x4aa) != '\0')) && ((*(byte *)(lVar3 + 0x1dc) >> 1 & 1) != 0)))) {
    if (3 < *(uint *)(param_1 + 0xe0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(short *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 0x54 + 0x26a) != -1) {
      FUN_7103776640(&local_30,param_1 + 0x50,(byte ****)"set_parts_det_key_03",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar1 = local_28;
      FUN_7103778300(0x3f800000,local_28,0x71042a357e);
      local_30 = &PTR_FUN_710523d988;
      local_28 = 0;
      if (uVar1 != 0) {
        uVar2 = *(ulong *)(uVar1 + 0x18);
        *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar1 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar1);
      }
      return 1;
    }
  }
  return 0;
}

