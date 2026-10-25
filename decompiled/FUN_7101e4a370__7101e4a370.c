// addr:      7101e4a370
// offset:    0x1e4a370
// name:      FUN_7101e4a370
// mangled:   
// signature: undefined __cdecl FUN_7101e4a370(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e4a370(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  short *psVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x22c) != '\0') &&
     (plVar1 = *(long **)(**(long **)(param_1 + 0x250) + 8), (char)plVar1[0x71] != '\0')) {
    uVar4 = (ulong)*(byte *)(param_1 + 0x22d);
    lVar2 = *plVar1;
    psVar3 = (short *)(lVar2 + uVar4 * 0x1d8);
    if (((lVar2 != 0 && *(byte *)(param_1 + 0x22d) < 4) && psVar3 != (short *)0x0) &&
       (*psVar3 != -1)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x1a8) + uVar4 * 8 + 0x48);
      if (lVar2 != 0) {
        FUN_7101e9be90(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101e9c4a0(lVar2);
      }
      if ((*(char *)(param_1 + 0x1b2) != '\0') &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x1a8) + uVar4 * 8 + 0x48), lVar2 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar2 + 8),0x71042d69e0);
      }
    }
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

