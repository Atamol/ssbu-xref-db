// addr:      710007b6e0
// offset:    0x7b6e0
// name:      FUN_710007b6e0
// mangled:   
// signature: undefined8 __cdecl FUN_710007b6e0(long * param_1, undefined8 * param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6)


undefined8
FUN_710007b6e0(long *param_1,undefined8 *param_2,uint *param_3,undefined8 param_4,undefined8 param_5
              ,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  char acStack_150 [256];
  
  if (param_1[2] == 0) {
    uVar3 = *param_3;
    if (uVar3 == 0x544e4646) {
      if ((short)param_3[1] == -0x101) {
        if ((param_3[2] ^ 0x4000000) >> 0x18 != 0) {
          return 0;
        }
        if ((param_3[2] & 0xfe0000) != 0) {
          return 0;
        }
        if ((0x23 < param_3[3]) && (1 < (ushort)param_3[4])) {
          piVar4 = (int *)0x0;
          uVar3 = 0;
          piVar2 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
          do {
            iVar1 = *piVar2;
            if (iVar1 < 0x50414d43) {
              if (iVar1 == 0x464e4946) {
                piVar4 = piVar2 + 2;
              }
              else if ((iVar1 != 0x474e524b) && (iVar1 != 0x48445743)) goto LAB_710007b8bc;
            }
            else if (((iVar1 != 0x50414d43) && (iVar1 != 0x504c4754)) && (iVar1 != 0x52474c47)) {
LAB_710007b8bc:
              param_1[3] = (long)param_3;
              return 0;
            }
            uVar3 = uVar3 + 1;
            piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]);
          } while (uVar3 < (ushort)param_3[4]);
          param_1[3] = (long)param_3;
          if (piVar4 != (int *)0x0) {
            piVar2 = FUN_710007c310((long)param_3,0x474e524b);
            FUN_710007bba0((long)param_1,param_3,piVar4,piVar2,param_4,param_5,param_6);
            FUN_710007c410(param_1,param_2);
            return 1;
          }
        }
      }
    }
    else {
      nn::util::SNPrintf(acStack_150,0x100,
                         "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                         (ulong)(uVar3 >> 0x18),(ulong)(uVar3 >> 0x10 & 0xff),
                         (ulong)(uVar3 >> 8 & 0xff),(ulong)(uVar3 & 0xff),0x54,0x4e,0x46,0x46);
    }
  }
  return 0;
}

