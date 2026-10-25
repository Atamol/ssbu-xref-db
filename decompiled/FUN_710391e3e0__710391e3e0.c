// addr:      710391e3e0
// offset:    0x391e3e0
// name:      FUN_710391e3e0
// mangled:   
// signature: undefined8 __cdecl FUN_710391e3e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710391e3e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  byte *pbVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  undefined1 *__src;
  undefined1 *local_2078;
  undefined8 local_2070;
  long local_2068;
  long lStack_2060;
  undefined1 auStack_2058 [8196];
  int local_54;
  
  FUN_710391f820(param_1,5,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar3 = (undefined *)FUN_71038f8ab0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
  pfVar7 = *(float **)(param_1 + 0x10);
  pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if ((pfVar11 < pfVar7 && pfVar11 != (float *)&DAT_7104862960) &&
     (uVar1 = *(uint *)(**(long **)(param_1 + 0x20) + 0x28), (uVar1 & 0xf) != 0)) {
    uVar1 = uVar1 & 0xf;
    if (uVar1 != 4) {
      if (uVar1 != 3) {
        FUN_71038f74d0(param_1,2,"string",param_4,param_5,param_6,param_7,param_8);
        uVar12 = 0;
        __src = (undefined1 *)0x0;
        goto LAB_710391e4c4;
      }
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar7 = *(float **)(param_1 + 0x10);
        pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
      }
      if (pfVar7 <= pfVar11) {
        pfVar11 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar11);
    }
    lVar8 = *(long *)pfVar11;
    if (*(char *)(lVar8 + 8) == '\x04') {
      uVar12 = (ulong)*(byte *)(lVar8 + 0xb);
      __src = (undefined1 *)(lVar8 + 0x18);
    }
    else {
      uVar12 = *(ulong *)(lVar8 + 0x10);
      __src = (undefined1 *)(lVar8 + 0x18);
    }
  }
  else {
    uVar12 = 0;
    __src = &DAT_7104867c2e;
  }
LAB_710391e4c4:
  lVar8 = **(long **)(param_1 + 0x20);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  if (((undefined8 *)(lVar8 + 0x30) < puVar10 && (undefined8 *)(lVar8 + 0x30) != &DAT_7104862960) &&
     ((*(byte *)(lVar8 + 0x38) & 0xf) != 0)) {
    puVar4 = (undefined *)FUN_71038f45b0(param_1,3,&local_54);
    if (local_54 == 0) {
      pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
      if (*(float **)(param_1 + 0x10) <= pfVar11) {
        pfVar11 = (float *)&DAT_7104862960;
      }
      fVar2 = pfVar11[2];
      if ((fVar2 == 4.2039e-45) || (fVar2 == 2.66247e-44)) {
LAB_710391e534:
        FUN_71038f6d60(param_1,3,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        if (((uint)fVar2 & 0xf) == 4) {
          pbVar5 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_2078);
          lVar8 = *(long *)pfVar11;
          if (*(char *)(lVar8 + 8) == '\x04') {
            uVar9 = (ulong)*(byte *)(lVar8 + 0xb);
          }
          else {
            uVar9 = *(ulong *)(lVar8 + 0x10);
          }
          if (pbVar5 == (byte *)(uVar9 + 1)) goto LAB_710391e534;
        }
        FUN_71038f74d0(param_1,3,"number",param_4,param_5,param_6,param_7,param_8);
      }
    }
    lVar8 = **(long **)(param_1 + 0x20);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    puVar4 = (undefined *)0x1;
  }
  if (((((undefined8 *)(lVar8 + 0x40) < puVar10) &&
       ((undefined8 *)(lVar8 + 0x40) != &DAT_7104862960)) && ((*(byte *)(lVar8 + 0x48) & 0xf) != 0))
     && (puVar3 = (undefined *)FUN_71038f45b0(param_1,4,&local_54), local_54 == 0)) {
    pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x40);
    if (*(float **)(param_1 + 0x10) <= pfVar11) {
      pfVar11 = (float *)&DAT_7104862960;
    }
    fVar2 = pfVar11[2];
    if ((fVar2 == 4.2039e-45) || (fVar2 == 2.66247e-44)) {
LAB_710391e5c4:
      FUN_71038f6d60(param_1,4,"number has no integer representation",param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      if (((uint)fVar2 & 0xf) == 4) {
        pbVar5 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_2078);
        lVar8 = *(long *)pfVar11;
        if (*(char *)(lVar8 + 8) == '\x04') {
          uVar9 = (ulong)*(byte *)(lVar8 + 0xb);
        }
        else {
          uVar9 = *(ulong *)(lVar8 + 0x10);
        }
        if (pbVar5 == (byte *)(uVar9 + 1)) goto LAB_710391e5c4;
      }
      FUN_71038f74d0(param_1,4,"number",param_4,param_5,param_6,param_7,param_8);
    }
  }
  local_2078 = auStack_2058;
  local_2068 = 0;
  local_2070 = 0x2000;
  lStack_2060 = param_1;
  if ((long)puVar4 < (long)puVar3) {
    do {
      puVar6 = puVar4;
      FUN_71038f5170(param_1,1,(long)puVar4);
      uVar9 = (ulong)*(uint *)(*(undefined8 **)(param_1 + 0x10) + -1) & 0xf;
      if (1 < (int)uVar9 - 3U) {
        lVar8 = 0;
        if (*(undefined8 **)(param_1 + 0x10) != &DAT_7104862970) {
          lVar8 = uVar9 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1,"invalid value (%s) at index %d in table for \'concat\'",
                       (&PTR_s_no_value_71052943f8)[lVar8],puVar4,param_5,param_6,param_7,param_8);
      }
      FUN_71038f7bd0(&local_2078,extraout_x1,puVar6,param_4,param_5,param_6,param_7,param_8);
      if (uVar12 != 0) {
        __dest = (void *)FUN_71038f7870(&local_2078,uVar12,puVar6,param_4,param_5,param_6,param_7,
                                        param_8);
        memcpy(__dest,__src,uVar12);
        local_2068 = local_2068 + uVar12;
      }
      puVar4 = puVar4 + 1;
    } while (puVar3 != puVar4);
  }
  else if (puVar4 != puVar3) goto LAB_710391e6a0;
  puVar4 = puVar3;
  FUN_71038f5170(param_1,1,(long)puVar3);
  uVar12 = (ulong)*(uint *)(*(undefined8 **)(param_1 + 0x10) + -1) & 0xf;
  if (1 < (int)uVar12 - 3U) {
    lVar8 = 0;
    if (*(undefined8 **)(param_1 + 0x10) != &DAT_7104862970) {
      lVar8 = uVar12 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"invalid value (%s) at index %d in table for \'concat\'",
                   (&PTR_s_no_value_71052943f8)[lVar8],puVar3,param_5,param_6,param_7,param_8);
  }
  FUN_71038f7bd0(&local_2078,extraout_x1_00,puVar4,param_4,param_5,param_6,param_7,param_8);
LAB_710391e6a0:
  FUN_71038f7b00(&local_2078);
  return 1;
}

