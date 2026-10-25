// addr:      7103902ab0
// offset:    0x3902ab0
// name:      FUN_7103902ab0
// mangled:   
// signature: long __cdecl FUN_7103902ab0(long param_1, undefined8 param_2, ulong * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long FUN_7103902ab0(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  int local_34;
  
  lVar9 = 0x16;
  local_34 = 0x16;
  pfVar6 = *(float **)(param_1 + 0x10);
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x30) - (long)pfVar6 < 0x161) {
    if ((0xf4225 < (int)((ulong)((long)pfVar6 - *(long *)(param_1 + 0x38)) >> 4)) ||
       (iVar2 = FUN_71038fb4b0(param_1,FUN_71038f3f70,&local_34), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"stack overflow (%s)","too many nested functions",param_4,param_5,
                     param_6,param_7,param_8);
    }
    pfVar6 = *(float **)(param_1 + 0x10);
    lVar9 = (long)local_34;
  }
  if (*(float **)(lVar11 + 8) < pfVar6 + lVar9 * 4) {
    *(float **)(lVar11 + 8) = pfVar6 + lVar9 * 4;
    pfVar6 = *(float **)(param_1 + 0x10);
  }
  pfVar10 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  if (pfVar6 <= pfVar10) {
    pfVar10 = (float *)&DAT_7104862960;
  }
  uVar3 = *(undefined8 *)(pfVar10 + 2);
  *(undefined8 *)pfVar6 = *(undefined8 *)pfVar10;
  *(undefined8 *)(pfVar6 + 2) = uVar3;
  plVar4 = *(long **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar4 + 2;
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + 1;
  uVar1 = *(short *)(param_1 + 0xc6) + 1;
  *(ushort *)(param_1 + 0xc6) = uVar1;
  if (199 < uVar1) {
    if (uVar1 == 200) {
                    /* WARNING: Subroutine does not return */
      FUN_71038fae60(param_1,"C stack overflow");
    }
    if (0xe0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_71038fb3c0(param_1,6);
    }
  }
  uVar5 = 1;
  uVar3 = FUN_71038fb8d0(param_1,plVar4,1);
  if ((int)uVar3 == 0) {
    FUN_7103924610(param_1);
  }
  *(short *)(param_1 + 0xc6) = *(short *)(param_1 + 0xc6) + -1;
  pfVar10 = *(float **)(param_1 + 0x10);
  *(short *)(param_1 + 0xc4) = *(short *)(param_1 + 0xc4) + -1;
  pfVar6 = pfVar10 + -4;
  if ((pfVar6 == (float *)&DAT_7104862960) || (((uint)pfVar10[-2] & 0xf) != 0)) {
    if (1 < ((uint)pfVar10[-2] & 0xf) - 3) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"reader function must return a string",uVar5,param_4,param_5,param_6,
                     param_7,param_8);
    }
    pfVar7 = (float *)(**(long **)(param_1 + 0x20) + 0x50);
    if (pfVar10 <= pfVar7) {
      pfVar7 = (float *)&DAT_7104862960;
    }
    uVar3 = *(undefined8 *)(pfVar10 + -2);
    *(undefined8 *)pfVar7 = *(undefined8 *)pfVar6;
    *(undefined8 *)(pfVar7 + 2) = uVar3;
    pfVar7 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    *(float **)(param_1 + 0x10) = pfVar7;
    pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x50);
    pfVar10 = pfVar6;
    if (pfVar7 <= pfVar6) {
      pfVar10 = (float *)&DAT_7104862960;
    }
    if (((uint)pfVar10[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar7 = *(float **)(param_1 + 0x10);
        pfVar6 = (float *)(**(long **)(param_1 + 0x20) + 0x50);
      }
      pfVar10 = pfVar6;
      if (pfVar7 <= pfVar6) {
        pfVar10 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar10);
    }
    else if (((uint)pfVar10[2] & 0xf) != 4) {
      if (param_3 == (ulong *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    if (param_3 != (ulong *)0x0) {
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      *param_3 = uVar8;
    }
    lVar9 = *(long *)pfVar10 + 0x18;
  }
  else {
    lVar9 = 0;
    *(float **)(param_1 + 0x10) = pfVar6;
    *param_3 = 0;
  }
  return lVar9;
}

