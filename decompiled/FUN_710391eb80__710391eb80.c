// addr:      710391eb80
// offset:    0x391eb80
// name:      FUN_710391eb80
// mangled:   
// signature: float __cdecl FUN_710391eb80(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


float FUN_710391eb80(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  float local_50 [4];
  int local_34;
  
  pfVar6 = local_50;
  lVar7 = **(long **)(param_1 + 0x20);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (((undefined8 *)(lVar7 + 0x20) < puVar9 && (undefined8 *)(lVar7 + 0x20) != &DAT_7104862960) &&
     ((*(byte *)(lVar7 + 0x28) & 0xf) != 0)) {
    param_3 = (char *)&local_34;
    lVar4 = FUN_71038f45b0(param_1,2,(undefined4 *)param_3);
    if (local_34 == 0) {
      plVar1 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
      if (*(long **)(param_1 + 0x10) <= plVar1) {
        plVar1 = &DAT_7104862960;
      }
      uVar2 = *(uint *)(plVar1 + 1);
      if ((uVar2 == 3) || (uVar2 == 0x13)) {
LAB_710391ec14:
        param_3 = "number has no integer representation";
        FUN_71038f6d60(param_1,2,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        if ((uVar2 & 0xf) == 4) {
          pbVar5 = FUN_7103907f00((byte *)(*plVar1 + 0x18),local_50);
          lVar7 = *plVar1;
          if (*(char *)(lVar7 + 8) == '\x04') {
            uVar8 = (ulong)*(byte *)(lVar7 + 0xb);
          }
          else {
            uVar8 = *(ulong *)(lVar7 + 0x10);
          }
          if (pbVar5 == (byte *)(uVar8 + 1)) goto LAB_710391ec14;
        }
        param_3 = "number";
        FUN_71038f74d0(param_1,2,"number",param_4,param_5,param_6,param_7,param_8);
      }
    }
    lVar7 = **(long **)(param_1 + 0x20);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    lVar4 = 1;
  }
  if (((undefined8 *)(lVar7 + 0x30) < puVar9 && (undefined8 *)(lVar7 + 0x30) != &DAT_7104862960) &&
     ((*(byte *)(lVar7 + 0x38) & 0xf) != 0)) {
    param_3 = (char *)&local_34;
    lVar7 = FUN_71038f45b0(param_1,3,(undefined4 *)param_3);
    if (local_34 == 0) {
      plVar1 = (long *)(**(long **)(param_1 + 0x20) + 0x30);
      if (*(long **)(param_1 + 0x10) <= plVar1) {
        plVar1 = &DAT_7104862960;
      }
      uVar2 = *(uint *)(plVar1 + 1);
      if ((uVar2 == 3) || (uVar2 == 0x13)) {
LAB_710391eda4:
        param_3 = "number has no integer representation";
        FUN_71038f6d60(param_1,3,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
        uVar8 = lVar7 - lVar4;
      }
      else {
        if ((uVar2 & 0xf) == 4) {
          pbVar5 = FUN_7103907f00((byte *)(*plVar1 + 0x18),local_50);
          lVar10 = *plVar1;
          if (*(char *)(lVar10 + 8) == '\x04') {
            uVar8 = (ulong)*(byte *)(lVar10 + 0xb);
          }
          else {
            uVar8 = *(ulong *)(lVar10 + 0x10);
          }
          if (pbVar5 == (byte *)(uVar8 + 1)) goto LAB_710391eda4;
        }
        param_3 = "number";
        FUN_71038f74d0(param_1,3,"number",param_4,param_5,param_6,param_7,param_8);
        uVar8 = lVar7 - lVar4;
      }
    }
    else {
      uVar8 = lVar7 - lVar4;
    }
  }
  else {
    lVar7 = FUN_71038f8ab0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar8 = lVar7 - lVar4;
  }
  if (lVar7 < lVar4) {
    fVar12 = 0.0;
  }
  else {
    if (0x7ffffffe < uVar8) {
LAB_710391ee84:
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"too many results to unpack",param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    fVar12 = (float)((int)uVar8 + 1);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar13 = *(long *)(param_1 + 0x20);
    lVar11 = (long)(int)fVar12;
    local_50[0] = fVar12;
    if (*(long *)(param_1 + 0x30) - lVar10 >> 4 <= lVar11) {
      if ((999999 - (int)uVar8 < (int)((ulong)(lVar10 - *(long *)(param_1 + 0x38)) >> 4) + 5) ||
         (iVar3 = FUN_71038fb4b0(param_1,FUN_71038f3f70,local_50), param_3 = (char *)pfVar6,
         iVar3 != 0)) goto LAB_710391ee84;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar11 = (long)(int)local_50[0];
    }
    uVar8 = lVar10 + lVar11 * 0x10;
    if (*(ulong *)(lVar13 + 8) < uVar8) {
      *(ulong *)(lVar13 + 8) = uVar8;
    }
    if (lVar4 < lVar7) {
      do {
        FUN_71038f5170(param_1,1,lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar7 != lVar4);
    }
    FUN_71038f5170(param_1,1,lVar7);
  }
  return fVar12;
}

