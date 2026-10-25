// addr:      7101e60650
// offset:    0x1e60650
// name:      FUN_7101e60650
// mangled:   
// signature: undefined __cdecl FUN_7101e60650(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e60650(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x271) == '\0') goto LAB_7101e60770;
  bVar1 = *(byte *)(param_1 + 0x272);
  uVar3 = (ulong)bVar1;
  plVar2 = (long *)(param_1 + 0x1c8);
  if ((uVar3 < 4) && (*(char *)(param_1 + 0x1d2) != '\0')) {
    lVar4 = *(long *)(*plVar2 + uVar3 * 8 + 0x48);
    if (lVar4 != 0) {
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 8),0x710438d258);
      *(undefined1 *)(lVar4 + 0xb1) = 0;
    }
    FUN_7101e9b720(plVar2,bVar1,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101e606dc:
    lVar4 = param_1 + uVar3 * 4;
    if (*(ushort *)(lVar4 + 0x254) != 0xffff) {
      FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar4 + 0x256),
                     *(ushort *)(lVar4 + 0x254),0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(lVar4 + 0x254) = 0xffff;
      *(undefined1 *)(lVar4 + 0x256) = 0;
    }
  }
  else {
    FUN_7101e9b720(plVar2,bVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7101e606dc;
    }
  }
  for (plVar2 = *(long **)(param_1 + 0x280); (long *)(param_1 + 0x278) != plVar2;
      plVar2 = (long *)plVar2[1]) {
    if (*(byte *)(plVar2 + 2) == bVar1) {
      if ((long *)(param_1 + 0x278) != plVar2) {
        *(long *)(*plVar2 + 8) = plVar2[1];
        *(long *)plVar2[1] = *plVar2;
        *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + -1;
        if (plVar2 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar2);
        }
      }
      break;
    }
  }
LAB_7101e60770:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x11;
  return;
}

