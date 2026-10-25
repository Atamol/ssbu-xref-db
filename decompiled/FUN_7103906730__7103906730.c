// addr:      7103906730
// offset:    0x3906730
// name:      FUN_7103906730
// mangled:   
// signature: undefined8 __cdecl FUN_7103906730(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103906730(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  char *pcVar11;
  
  pfVar8 = *(float **)(param_1 + 0x10);
  pfVar10 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar9 = pfVar10;
  if (pfVar8 <= pfVar10) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar9[2] & 0xf) == 4) {
LAB_71039067b8:
    pcVar11 = (char *)(*(long *)pfVar9 + 0x18);
  }
  else {
    if (((uint)pfVar9[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar8 = *(float **)(param_1 + 0x10);
        pfVar10 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar9 = pfVar10;
      if (pfVar8 <= pfVar10) {
        pfVar9 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar9);
      goto LAB_71039067b8;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    pcVar11 = (char *)0x0;
  }
  pfVar10 = (float *)&DAT_7104862960;
  if (((int)((long *)**(long **)(param_1 + 0x20))[1] != 0x16) &&
     (lVar7 = *(long *)**(long **)(param_1 + 0x20), *(char *)(lVar7 + 10) != '\0')) {
    pfVar10 = (float *)(lVar7 + 0x20);
  }
  FUN_71038f4d40(param_1,(long *)pfVar10,"cpath");
  pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 != 4) {
    if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"\'package.%s\' must be a string","cpath",param_4,param_5,param_6,
                     param_7,param_8);
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar10);
  }
  puVar4 = &DAT_710426ee55;
  puVar5 = &DAT_710426ee53;
  pcVar3 = FUN_7103907460(param_1,pcVar11,(char *)(*(long *)pfVar10 + 0x18),".","/",param_6,param_7,
                          param_8);
  if (pcVar3 == (char *)0x0) {
    return 1;
  }
  iVar2 = FUN_7103907690(param_1,pcVar3,pcVar11,puVar4,puVar5,param_6,param_7,param_8);
  if (iVar2 == 0) {
    FUN_71038f4b20(param_1,pcVar3);
    return 2;
  }
  pfVar10 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar8 = *(float **)(param_1 + 0x10);
  pfVar9 = pfVar10;
  if (pfVar8 <= pfVar10) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar9[2] & 0xf) == 4) {
LAB_710390695c:
    lVar7 = *(long *)pfVar9 + 0x18;
  }
  else {
    if (((uint)pfVar9[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar8 = *(float **)(param_1 + 0x10);
        pfVar10 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar9 = pfVar10;
      if (pfVar8 <= pfVar10) {
        pfVar9 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar9);
      pfVar8 = *(float **)(param_1 + 0x10);
      goto LAB_710390695c;
    }
    lVar7 = 0;
  }
  pfVar10 = pfVar8 + -4;
  if (((uint)pfVar8[-2] & 0xf) != 4) {
    if (((uint)pfVar8[-2] & 0xf) != 3) {
      lVar6 = 0;
      goto LAB_71039069c4;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar10);
  }
  lVar6 = *(long *)pfVar10 + 0x18;
LAB_71039069c4:
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1,"error loading module \'%s\' from file \'%s\':\n\t%s",lVar7,pcVar3,lVar6,
                 param_6,param_7,param_8);
}

