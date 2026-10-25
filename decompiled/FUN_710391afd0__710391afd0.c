// addr:      710391afd0
// offset:    0x391afd0
// name:      FUN_710391afd0
// mangled:   
// signature: undefined FUN_710391afd0(void)


undefined8
FUN_710391afd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  ulong *puVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  uint uStack_68;
  uint uStack_64;
  long lStack_60;
  undefined1 *puStack_58;
  char *pcStack_48;
  
  pfVar7 = *(float **)(param_1 + 0x10);
  pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar8 = pfVar5;
  if (pfVar7 <= pfVar5) {
    pfVar8 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar8[2] & 0xf) != 4) {
    if (((uint)pfVar8[2] & 0xf) != 3) {
      FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
      pcStack_48 = (char *)0x0;
      goto LAB_710391b088;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar7 = *(float **)(param_1 + 0x10);
      pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
    }
    pfVar8 = pfVar5;
    if (pfVar7 <= pfVar5) {
      pfVar8 = (float *)&DAT_7104862960;
    }
    FUN_71039080b0(param_1,pfVar8);
  }
  pcStack_48 = (char *)(*(long *)pfVar8 + 0x18);
LAB_710391b088:
  puStack_58 = &DAT_100000001;
  if (*pcStack_48 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lStack_60 = param_1;
    do {
      puVar3 = &uStack_64;
      puVar4 = &uStack_68;
      uVar2 = FUN_710391b840(&lStack_60,(uint)uVar9,(long *)&pcStack_48,puVar3,puVar4,param_6,
                             param_7,param_8);
      lVar1 = (long)(int)uStack_64 + (long)(int)uStack_68;
      uStack_64 = (uint)lVar1;
      if (0x7fffffffU - lVar1 < uVar9) {
        FUN_71038f6d60(param_1,1,"format result too large",puVar3,puVar4,param_6,param_7,param_8);
      }
      uVar9 = uVar9 + lVar1;
      if ((uVar2 & 0xfffffffe) == 4) {
        FUN_71038f6d60(param_1,1,"variable-length format",puVar3,puVar4,param_6,param_7,param_8);
      }
    } while (*pcStack_48 != '\0');
  }
  puVar6 = *(ulong **)(param_1 + 0x10);
  *(undefined4 *)(puVar6 + 1) = 0x13;
  *puVar6 = uVar9;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 1;
}

