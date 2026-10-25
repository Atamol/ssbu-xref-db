// addr:      7101e4a470
// offset:    0x1e4a470
// name:      FUN_7101e4a470
// mangled:   
// signature: undefined __cdecl FUN_7101e4a470(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e4a470(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x22c) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x22d);
    uVar6 = (ulong)bVar2;
    plVar3 = (long *)(param_1 + 0x1a8);
    uVar5 = (uint)bVar2;
    if (3 < uVar6) {
      FUN_7101e9b720(plVar3,bVar2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = *(long *)(*plVar3 + uVar6 * 8 + 0x48);
    bVar7 = bVar2;
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0xb3) != '\0') {
        uVar1 = 0;
        if ((int)uVar5 < (int)(*(byte *)(param_1 + 0x1b0) - 1)) {
          uVar1 = uVar5 + 1;
        }
        if (((3 < (uVar1 & 0xff)) ||
            (lVar4 = *(long *)(*plVar3 + (ulong)(byte)uVar1 * 8 + 0x48), lVar4 == 0)) ||
           (bVar7 = (byte)uVar1, *(char *)(lVar4 + 0xb3) == '\0')) {
          bVar7 = bVar2;
        }
      }
      if ((*(char *)(param_1 + 0x1b2) != '\0') && (lVar8 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar8 + 8),0x710438d258);
        *(undefined1 *)(lVar8 + 0xb1) = 0;
      }
    }
    FUN_7101e9b720(plVar3,bVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar8 = param_1 + uVar6 * 4;
    if (*(ushort *)(lVar8 + 0x1fc) != 0xffff) {
      FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar8 + 0x1fe),
                     *(ushort *)(lVar8 + 0x1fc),0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(lVar8 + 0x1fc) = 0xffff;
      *(undefined1 *)(lVar8 + 0x1fe) = 0;
    }
    lVar8 = *(long *)(param_1 + 0x220) + uVar6 * 0x10;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined4 *)(lVar8 + 0x74) = 0x3b;
    for (plVar3 = *(long **)(param_1 + 0x238); (long *)(param_1 + 0x230) != plVar3;
        plVar3 = (long *)plVar3[1]) {
      if (*(byte *)(plVar3 + 2) == uVar5) {
        if ((long *)(param_1 + 0x230) != plVar3) {
          *(long *)(*plVar3 + 8) = plVar3[1];
          *(long *)plVar3[1] = *plVar3;
          *(long *)(param_1 + 0x240) = *(long *)(param_1 + 0x240) + -1;
          if (plVar3 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar3);
          }
        }
        break;
      }
    }
    *(byte *)(param_1 + 0x22d) = bVar7;
    *(undefined1 *)(param_1 + 0x22c) = 1;
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x130) = 0xd0000000f;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0xffffffff00000001;
  return;
}

