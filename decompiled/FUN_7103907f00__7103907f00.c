// addr:      7103907f00
// offset:    0x3907f00
// name:      FUN_7103907f00
// mangled:   
// signature: byte * __cdecl FUN_7103907f00(byte * param_1, float * param_2)


byte * FUN_7103907f00(byte *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  char *pcVar7;
  byte *pbVar8;
  float fVar10;
  ulong uVar11;
  long lVar12;
  float fVar13;
  byte *local_28;
  byte *pbVar9;
  
  pbVar8 = param_1;
  do {
    pbVar9 = pbVar8;
    pbVar8 = pbVar9 + 1;
    bVar3 = *pbVar9;
  } while ((*(byte *)((long)&DAT_7104862970 + (ulong)bVar3 + 1) >> 3 & 1) != 0);
  pbVar5 = pbVar8;
  if (bVar3 != 0x2d) {
    pbVar5 = pbVar9;
  }
  if (bVar3 != 0x2b) {
    pbVar8 = pbVar5;
  }
  uVar11 = (ulong)*pbVar8;
  if ((uVar11 == 0x30) && ((pbVar8[1] | 0x20) == 0x78)) {
    pbVar8 = pbVar8 + 2;
    uVar11 = (ulong)*pbVar8;
    bVar4 = *(byte *)((long)&DAT_7104862970 + uVar11 + 1);
    if ((bVar4 >> 4 & 1) == 0) goto LAB_7103907fc0;
    lVar12 = 0;
    do {
      iVar2 = ((uint)uVar11 | 0x20) - 0x57;
      if ((bVar4 & 2) != 0) {
        iVar2 = (uint)uVar11 - 0x30;
      }
      pbVar8 = pbVar8 + 1;
      uVar11 = (ulong)*pbVar8;
      lVar12 = lVar12 * 0x10 + (long)iVar2;
      bVar4 = *(byte *)((long)&DAT_7104862970 + uVar11 + 1);
    } while ((bVar4 >> 4 & 1) != 0);
LAB_7103907fec:
    bVar6 = false;
  }
  else {
    if ((*(byte *)((long)&DAT_7104862970 + uVar11 + 1) >> 1 & 1) != 0) {
      lVar12 = 0;
      do {
        lVar12 = uVar11 + lVar12 * 10;
        pbVar8 = pbVar8 + 1;
        uVar11 = (ulong)*pbVar8;
        lVar12 = lVar12 + -0x30;
      } while ((*(byte *)((long)&DAT_7104862970 + uVar11 + 1) >> 1 & 1) != 0);
      goto LAB_7103907fec;
    }
LAB_7103907fc0:
    lVar12 = 0;
    bVar6 = true;
  }
  while ((*(byte *)((long)&DAT_7104862970 + uVar11 + 1) >> 3 & 1) != 0) {
    pbVar8 = pbVar8 + 1;
    uVar11 = (ulong)*pbVar8;
  }
  if ((((int)uVar11 != 0) || (bVar6)) || (pbVar8 == (byte *)0x0)) {
    pcVar7 = strpbrk((char *)param_1,"nN");
    if ((pcVar7 == (char *)0x0) &&
       (fVar13 = strtof((char *)param_1,(char **)&local_28), local_28 != param_1)) {
      uVar11 = (ulong)*local_28;
      bVar3 = *(byte *)((long)&DAT_7104862970 + uVar11 + 1);
      pbVar8 = local_28;
      while ((bVar3 >> 3 & 1) != 0) {
        pbVar8 = pbVar8 + 1;
        uVar11 = (ulong)*pbVar8;
        bVar3 = *(byte *)((long)&DAT_7104862970 + uVar11 + 1);
      }
      if ((int)uVar11 == 0) {
        fVar10 = 4.2039e-45;
        *param_2 = fVar13;
        goto LAB_7103908020;
      }
    }
    pbVar8 = (byte *)0x0;
  }
  else {
    lVar1 = -lVar12;
    if (bVar3 != 0x2d) {
      lVar1 = lVar12;
    }
    *(long *)param_2 = lVar1;
    fVar10 = 2.66247e-44;
LAB_7103908020:
    param_2[2] = fVar10;
    pbVar8 = pbVar8 + (1 - (long)param_1);
  }
  return pbVar8;
}

