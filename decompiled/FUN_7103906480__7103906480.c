// addr:      7103906480
// offset:    0x3906480
// name:      FUN_7103906480
// mangled:   
// signature: undefined8 __cdecl FUN_7103906480(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103906480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar6 = *(float **)(param_1 + 0x10);
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar7 = pfVar8;
  if (pfVar6 <= pfVar8) {
    pfVar7 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar7[2] & 0xf) == 4) {
LAB_7103906508:
    pcVar3 = (char *)(*(long *)pfVar7 + 0x18);
  }
  else {
    if (((uint)pfVar7[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar6 = *(float **)(param_1 + 0x10);
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar7 = pfVar8;
      if (pfVar6 <= pfVar8) {
        pfVar7 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar7);
      goto LAB_7103906508;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    pcVar3 = (char *)0x0;
  }
  pfVar8 = (float *)&DAT_7104862960;
  if (((int)((long *)**(long **)(param_1 + 0x20))[1] != 0x16) &&
     (lVar5 = *(long *)**(long **)(param_1 + 0x20), *(char *)(lVar5 + 10) != '\0')) {
    pfVar8 = (float *)(lVar5 + 0x20);
  }
  FUN_71038f4d40(param_1,(long *)pfVar8,"path");
  pfVar8 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 != 4) {
    if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"\'package.%s\' must be a string",&DAT_7104421148,param_4,param_5,
                     param_6,param_7,param_8);
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar8 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar8);
  }
  pcVar3 = FUN_7103907460(param_1,pcVar3,(char *)(*(long *)pfVar8 + 0x18),".","/",param_6,param_7,
                          param_8);
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  iVar2 = FUN_71038f8090(param_1,pcVar3,0);
  if (iVar2 == 0) {
    FUN_71038f4b20(param_1,pcVar3);
    return 2;
  }
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar6 = *(float **)(param_1 + 0x10);
  pfVar7 = pfVar8;
  if (pfVar6 <= pfVar8) {
    pfVar7 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar7[2] & 0xf) == 4) {
LAB_71039066ac:
    lVar5 = *(long *)pfVar7 + 0x18;
  }
  else {
    if (((uint)pfVar7[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar6 = *(float **)(param_1 + 0x10);
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar7 = pfVar8;
      if (pfVar6 <= pfVar8) {
        pfVar7 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar7);
      pfVar6 = *(float **)(param_1 + 0x10);
      goto LAB_71039066ac;
    }
    lVar5 = 0;
  }
  pfVar8 = pfVar6 + -4;
  if (((uint)pfVar6[-2] & 0xf) != 4) {
    if (((uint)pfVar6[-2] & 0xf) != 3) {
      lVar4 = 0;
      goto LAB_7103906714;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar8 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar8);
  }
  lVar4 = *(long *)pfVar8 + 0x18;
LAB_7103906714:
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",lVar5,pcVar3,lVar4,
                 param_6,param_7,param_8);
}

