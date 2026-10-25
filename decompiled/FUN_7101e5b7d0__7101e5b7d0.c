// addr:      7101e5b7d0
// offset:    0x1e5b7d0
// name:      FUN_7101e5b7d0
// mangled:   
// signature: undefined __cdecl FUN_7101e5b7d0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5b7d0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  
  if (*(char *)(param_1 + 0x381) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x382);
    uVar6 = (ulong)bVar2;
    uVar5 = (uint)bVar2;
    if (3 < uVar6) {
      FUN_7101e9b720((long *)(param_1 + 0x208),bVar2,param_3,param_4,param_5,param_6,param_7,param_8
                    );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x208) + uVar6 * 8 + 0x48);
    bVar7 = bVar2;
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xb3) != '\0')) {
      uVar1 = 0;
      if ((int)uVar5 < (int)(*(byte *)(param_1 + 0x210) - 1)) {
        uVar1 = uVar5 + 1;
      }
      if (((3 < (uVar1 & 0xff)) ||
          (lVar4 = *(long *)(*(long *)(param_1 + 0x208) + (ulong)(byte)uVar1 * 8 + 0x48), lVar4 == 0
          )) || (bVar7 = (byte)uVar1, *(char *)(lVar4 + 0xb3) == '\0')) {
        bVar7 = bVar2;
      }
    }
    if (((uVar5 < 4) && (*(char *)(param_1 + 0x212) != '\0')) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x208) + uVar6 * 8 + 0x48), lVar4 != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 8),0x710438d258);
      *(undefined1 *)(lVar4 + 0xb1) = 0;
    }
    FUN_7101e9b720((long *)(param_1 + 0x208),bVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar4 = param_1 + uVar6 * 4;
    if (*(ushort *)(lVar4 + 0x354) != 0xffff) {
      FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar4 + 0x356),
                     *(ushort *)(lVar4 + 0x354),0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(lVar4 + 0x354) = 0xffff;
      *(undefined1 *)(lVar4 + 0x356) = 0;
    }
    lVar4 = *(long *)(param_1 + 0x378) + uVar6 * 0x10;
    *(undefined4 *)(lVar4 + 0xb0) = 0x3b;
    *(undefined8 *)(lVar4 + 0xa4) = 0;
    lVar4 = param_1 + uVar6 * 0x30;
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x220),0x71043ef74a);
    FUN_710377aa20((long *)**(undefined8 **)(lVar4 + 0x240),0);
    for (plVar3 = *(long **)(param_1 + 0x390); (long *)(param_1 + 0x388) != plVar3;
        plVar3 = (long *)plVar3[1]) {
      if (*(byte *)(plVar3 + 2) == uVar5) {
        if ((long *)(param_1 + 0x388) != plVar3) {
          *(long *)(*plVar3 + 8) = plVar3[1];
          *(long *)plVar3[1] = *plVar3;
          *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + -1;
          if (plVar3 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar3);
          }
        }
        break;
      }
    }
    *(byte *)(param_1 + 0x382) = bVar7;
    *(undefined1 *)(param_1 + 0x381) = 1;
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 400) = 0x1300000015;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0xffffffff00000001;
  return;
}

