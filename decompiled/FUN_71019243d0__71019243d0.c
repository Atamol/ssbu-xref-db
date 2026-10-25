// addr:      71019243d0
// offset:    0x19243d0
// name:      FUN_71019243d0
// mangled:   
// signature: undefined __cdecl FUN_71019243d0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_71019243d0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,long param_6,ulong param_7,ulong param_8)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte bVar2;
  long lVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x568) = 0;
    lVar3 = *(long *)(*(long *)(param_1 + 0x290) + 8);
    if (*(int *)(lVar3 + 0x5c0) != -1) {
      *(undefined4 *)(lVar3 + 0x5c0) = 0xffffffff;
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(lVar3 + 0x558) + 0x80) + 0x38),
                     0x71042a3648);
      if ((*(int *)(lVar3 + 0x5c0) != -1 && *(int *)(lVar3 + 0x5c0) < 3) &&
         (lVar1 = *(long *)(*(long *)(*(long *)(lVar3 + 0x558) + 0x80) + 0x128), lVar1 != 0)) {
        param_3 = (long *********)0x1;
        param_4 = (byte ****)0x0;
        FUN_710377a280(lVar1,(byte *)(lVar3 + 0x48000003f8),1);
      }
    }
    FUN_71024fc7c0(*(long *)(*(long *)(param_1 + 0x290) + 8));
    lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x290) + 8) + 0x560) + 0x80);
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x30);
    do {
      if ((*(uint *)(lVar1 + 0xf70 + lVar3) & 0xfffffffe) == 2) {
        FUN_7103778300(0x3f800000,*plVar4,0x7104281139);
        *(undefined4 *)(lVar1 + 0xf70 + lVar3) = 4;
      }
      lVar3 = lVar3 + 4;
      plVar4 = plVar4 + 2;
    } while (lVar3 != 0x1e8);
    *(undefined4 *)(lVar1 + 0x116c) = 1;
    FUN_7102503590(*(long *)(param_1 + 0x228));
    FUN_71024e73a0(*(float *)(*DAT_710532a868 + 0x1f8),*(long *)(*(long *)(param_1 + 0x288) + 8));
    FUN_71024f9120(*(undefined1 (*) [16])(*(long *)(*(long *)(param_1 + 0x228) + 0x428) + 0x2160),
                   *(long *)(*(long *)(param_1 + 0x290) + 8),*(long *)(param_1 + 0x220),param_3,
                   param_4,param_5,param_6,param_7,param_8);
  }
  if (*(int *)(param_1 + 0x1b0) != 3) {
    bVar2 = 0;
    *(undefined2 *)(param_1 + 0x42cd) = 0;
    goto LAB_71019246ac;
  }
  lVar3 = *(long *)(param_1 + 0x228);
  if ((*(int *)(*(long *)(lVar3 + 0x428) + 0x21c8) == 2) ||
     (((*(int *)(lVar3 + 0x10) != -1 && (*(float *)(*(long *)(lVar3 + 0x428) + 0x217c) < 3.0)) ||
      (1 < *(int *)(param_1 + 0x42b4) - 1U)))) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x288) + 8) + 0x1fa0) ^ 1;
  }
  *(byte *)(param_1 + 0x42cd) = bVar2;
  if ((*(int *)(*(long *)(lVar3 + 0x428) + 0x21c8) == 2) ||
     ((*(int *)(lVar3 + 0x10) != -1 && (*(float *)(*(long *)(lVar3 + 0x428) + 0x217c) < 3.0)))) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    if ((*(uint *)(param_1 + 0x42b4) < 5) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x42b4) & 0x1f) & 0x16U) != 0)) {
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x288) + 8) + 0x1fa0) ^ 1;
    }
  }
  *(byte *)(param_1 + 0x42ce) = bVar2;
  lVar1 = *(long *)(lVar3 + 0x428);
  if (((*(int *)(lVar1 + 0x21c8) == 2) ||
      (((*(int *)(lVar3 + 0x10) != -1 && (*(float *)(lVar1 + 0x217c) < 3.0)) ||
       (*(int *)(param_1 + 0x42b4) != 1)))) || (*(int *)(*(long *)(param_1 + 0x220) + 0x140) != 1))
  {
LAB_71019246a8:
    bVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x21c8) - 1U < 2) {
      if (*(float *)(lVar1 + 0x21b4) <= *(float *)(lVar1 + 0x2184)) {
        bVar2 = 0;
        if (*(long *)(lVar1 + 0xb0) == 0) goto LAB_71019246ac;
      }
      else {
        if (*(float *)(lVar1 + 0x21b8) <= *(float *)(lVar1 + 0x2184)) goto LAB_71019246a8;
        if (*(long *)(lVar1 + 0x88) == 0) {
          bVar2 = 0;
          goto LAB_71019246ac;
        }
      }
    }
    else if (*(long *)(lVar1 + 0x78) == 0) {
      bVar2 = 0;
      goto LAB_71019246ac;
    }
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x288) + 8) + 0x1fa0) ^ 1;
  }
LAB_71019246ac:
  *(byte *)(param_1 + 0x42cf) = bVar2;
  if (*(char *)(param_1 + 0x42bc) != '\0') {
    return;
  }
  FUN_7102518f30(*(long *)(*DAT_7105329f98 + 0x40));
  FUN_710192d3f0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e560c0(*(long *)(*(long *)(param_1 + 0x1f0) + 0x80),extraout_x1_00,(long ****)param_3,
                 param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(*(long *)(param_1 + 0x1f0) + 0x70) = 0;
  if (*(uint *)(param_1 + 0x1ac) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1ac) * 4 + 0x160) = 5;
    *(undefined4 *)(*DAT_710532a860 + 0x5f3c4) = 0xffffffff;
    FUN_710366ac20(0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

