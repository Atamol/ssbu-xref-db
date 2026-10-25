// addr:      71039199b0
// offset:    0x39199b0
// name:      FUN_71039199b0
// mangled:   
// signature: undefined8 __cdecl FUN_71039199b0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71039199b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  void *__dest;
  char *pcVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  ulong __n;
  void *__src;
  undefined1 *__src_00;
  ulong uVar11;
  undefined1 *local_2080;
  undefined8 local_2078;
  long local_2070;
  long lStack_2068;
  undefined1 auStack_2060 [8192];
  int local_54;
  
  pfVar10 = *(float **)(param_1 + 0x10);
  pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar9 = pfVar6;
  if (pfVar10 <= pfVar6) {
    pfVar9 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar9[2] & 0xf) == 4) {
LAB_7103919a4c:
    lVar7 = *(long *)pfVar9;
    if (*(char *)(lVar7 + 8) == '\x04') {
      __n = (ulong)*(byte *)(lVar7 + 0xb);
      __src = (void *)(lVar7 + 0x18);
    }
    else {
      __n = *(ulong *)(lVar7 + 0x10);
      __src = (void *)(lVar7 + 0x18);
    }
  }
  else {
    if (((uint)pfVar9[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar10 = *(float **)(param_1 + 0x10);
        pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar9 = pfVar6;
      if (pfVar10 <= pfVar6) {
        pfVar9 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar9);
      goto LAB_7103919a4c;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    __n = 0;
    __src = (void *)0x0;
  }
  pcVar5 = (char *)&local_54;
  uVar3 = FUN_71038f45b0(param_1,2,(undefined4 *)pcVar5);
  if (local_54 == 0) {
    pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
    if (*(float **)(param_1 + 0x10) <= pfVar6) {
      pfVar6 = (float *)&DAT_7104862960;
    }
    fVar1 = pfVar6[2];
    if ((fVar1 == 4.2039e-45) || (fVar1 == 2.66247e-44)) {
LAB_7103919b1c:
      pcVar5 = "number has no integer representation";
      FUN_71038f6d60(param_1,2,"number has no integer representation",param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      if (((uint)fVar1 & 0xf) == 4) {
        pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar6 + 0x18),(float *)&local_2080);
        lVar7 = *(long *)pfVar6;
        if (*(char *)(lVar7 + 8) == '\x04') {
          uVar8 = (ulong)*(byte *)(lVar7 + 0xb);
        }
        else {
          uVar8 = *(ulong *)(lVar7 + 0x10);
        }
        if (pbVar4 == (byte *)(uVar8 + 1)) goto LAB_7103919b1c;
      }
      pcVar5 = "number";
      FUN_71038f74d0(param_1,2,"number",param_4,param_5,param_6,param_7,param_8);
    }
  }
  pfVar9 = *(float **)(param_1 + 0x10);
  pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
  uVar8 = 0;
  __src_00 = &DAT_7104867c2e;
  if ((pfVar6 < pfVar9) && (pfVar6 != (float *)&DAT_7104862960)) {
    uVar2 = *(uint *)(**(long **)(param_1 + 0x20) + 0x38);
    if ((uVar2 & 0xf) == 0) {
      uVar8 = 0;
      __src_00 = &DAT_7104867c2e;
    }
    else {
      uVar2 = uVar2 & 0xf;
      if (uVar2 != 4) {
        if (uVar2 != 3) {
          pcVar5 = "string";
          FUN_71038f74d0(param_1,3,"string",param_4,param_5,param_6,param_7,param_8);
          uVar8 = 0;
          __src_00 = (undefined1 *)0x0;
          goto joined_r0x007103919d0c;
        }
        if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
          FUN_71038fec40(param_1);
          pfVar9 = *(float **)(param_1 + 0x10);
          pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
        }
        if (pfVar9 <= pfVar6) {
          pfVar6 = (float *)&DAT_7104862960;
        }
        FUN_71039080b0(param_1,pfVar6);
      }
      lVar7 = *(long *)pfVar6;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar7 + 0xb);
        __src_00 = (undefined1 *)(lVar7 + 0x18);
      }
      else {
        uVar8 = *(ulong *)(lVar7 + 0x10);
        __src_00 = (undefined1 *)(lVar7 + 0x18);
      }
    }
  }
joined_r0x007103919d0c:
  if ((long)uVar3 < 1) {
    FUN_71038f4b20(param_1,"");
    return 1;
  }
  if (!CARRY8(uVar8,__n)) {
    uVar11 = 0;
    if (uVar3 != 0) {
      uVar11 = 0x7fffffff / uVar3;
    }
    if (uVar8 + __n <= uVar11) {
      uVar11 = __n * uVar3 + uVar8 * (uVar3 - 1);
      local_2080 = auStack_2060;
      local_2078 = 0x2000;
      local_2070 = 0;
      lStack_2068 = param_1;
      __dest = (void *)FUN_71038f7870(&local_2080,uVar11,pcVar5,param_4,param_5,param_6,param_7,
                                      param_8);
      memcpy(__dest,__src,__n);
      if (1 < (long)uVar3) {
        lVar7 = uVar3 + 1;
        do {
          __dest = (void *)((long)__dest + __n);
          if (uVar8 != 0) {
            memcpy(__dest,__src_00,uVar8);
            __dest = (void *)((long)__dest + uVar8);
          }
          memcpy(__dest,__src,__n);
          lVar7 = lVar7 + -1;
        } while (2 < lVar7);
      }
      local_2070 = local_2070 + uVar11;
      FUN_71038f7b00(&local_2080);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1,"resulting string too large",pcVar5,param_4,param_5,param_6,param_7,param_8
                );
}

