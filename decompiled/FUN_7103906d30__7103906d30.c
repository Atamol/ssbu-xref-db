// addr:      7103906d30
// offset:    0x3906d30
// name:      FUN_7103906d30
// mangled:   
// signature: undefined __cdecl FUN_7103906d30(long param_1, char * param_2, char * param_3, char * param_4, char * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103906d30(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  float *pfVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  
  pcVar7 = param_5;
  pcVar6 = getenv(param_3);
  if ((pcVar6 == (char *)0x0) && (pcVar6 = getenv(param_4), pcVar6 == (char *)0x0))
  goto LAB_7103906e94;
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x18) + 0x40),"LUA_NOENV");
  lVar10 = *(long *)(param_1 + 0x10);
  pfVar8 = (float *)(lVar10 + -0x10);
  uVar4 = *(uint *)(lVar10 + -8);
  if (uVar4 == 0) {
LAB_7103906df4:
    *(long *)(param_1 + 0x10) = (long)pfVar8;
  }
  else {
    if (uVar4 == 0x13) {
      if (*(long *)pfVar8 != 0) {
        fVar12 = (float)*(long *)pfVar8;
joined_r0x007103906dd4:
        if (fVar12 != 0.0) goto LAB_7103906e6c;
      }
      goto LAB_7103906df4;
    }
    if (uVar4 != 1) {
      if ((uVar4 & 0xf) == 3) {
        fVar12 = *pfVar8;
        goto joined_r0x007103906dd4;
      }
LAB_7103906e6c:
      if (uVar4 == 3) {
        fVar12 = *pfVar8;
        *(float **)(param_1 + 0x10) = pfVar8;
        if (fVar12 == 0.0) goto LAB_7103906df8;
      }
      else {
        *(float **)(param_1 + 0x10) = pfVar8;
      }
LAB_7103906e94:
      FUN_71038f4b20(param_1,param_5);
      lVar10 = *(long *)(param_1 + 0x10);
      goto LAB_7103906ea4;
    }
    fVar12 = *pfVar8;
    *(float **)(param_1 + 0x10) = pfVar8;
    if (fVar12 != 0.0) goto LAB_7103906e94;
  }
LAB_7103906df8:
  pcVar6 = (char *)FUN_71038f9f30(param_1,pcVar6,";;",";\x01;",pcVar7,param_6,param_7,param_8);
  FUN_71038f9f30(param_1,pcVar6,"\x01",param_5,pcVar7,param_6,param_7,param_8);
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + -0x20);
  puVar11 = puVar9;
  do {
    uVar1 = *puVar11;
    uVar2 = puVar11[1];
    uVar3 = puVar9[3];
    *puVar11 = puVar9[2];
    puVar11[1] = uVar3;
    puVar9[2] = uVar1;
    puVar9[3] = uVar2;
    bVar5 = puVar11 + 2 < puVar9;
    puVar9 = puVar9 + -2;
    puVar11 = puVar11 + 2;
  } while (bVar5);
  lVar10 = *(long *)(param_1 + 0x10) + -0x10;
  *(long *)(param_1 + 0x10) = lVar10;
LAB_7103906ea4:
  FUN_71038f5390(param_1,(long *)(lVar10 + -0x20),param_2);
  return;
}

