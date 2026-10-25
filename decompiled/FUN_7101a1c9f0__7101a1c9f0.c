// addr:      7101a1c9f0
// offset:    0x1a1c9f0
// name:      FUN_7101a1c9f0
// mangled:   
// signature: uint __cdecl FUN_7101a1c9f0(long param_1, uint param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


uint FUN_7101a1c9f0(long param_1,uint param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xf8d) != '\0') {
    if ((param_3 & 1) == 0) {
      if (*(char *)(param_1 + 0x16a) != '\0') {
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1a0) + 0x10),0x7104349d60);
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x198) + 0x10),0x7104454503);
        lVar1 = DAT_710532f820;
        if (*(char *)(param_1 + 0xf8e) == '\0') {
          bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff206396e7a9
                                );
          if (bVar2) {
            FUN_71032edf70(*(uint **)(lVar1 + 0x10),0x58ffff206396e7a9);
            FUN_71032f1bb0(*(long *)(lVar1 + 8),*(uint **)(lVar1 + 0x10),param_3,param_4,param_5,
                           param_6,param_7,param_8);
          }
          else {
            *(undefined4 *)(*(long *)(lVar1 + 8) + 0x118) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x16a) = 0;
        *(undefined1 *)(param_1 + 0xf8e) = 1;
      }
    }
    else if (*(char *)(param_1 + 0x16a) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1a0) + 0x10),0x71042e6b13);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x198) + 0x10),0x710437cc00);
      *(undefined1 *)(param_1 + 0x16a) = 1;
    }
  }
  return param_2 & 1;
}

