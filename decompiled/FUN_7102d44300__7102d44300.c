// addr:      7102d44300
// offset:    0x2d44300
// name:      FUN_7102d44300
// mangled:   
// signature: ulong __cdecl FUN_7102d44300(ulong param_1, ulong param_2, int * param_3, byte param_4)


ulong FUN_7102d44300(ulong param_1,ulong param_2,int *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte local_40 [16];
  
  uVar7 = (*(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 4) * -0x3333333333333333;
  uVar4 = param_2 & 0xffffffff;
  if (uVar4 <= uVar7 && uVar7 - uVar4 != 0) {
    *(byte *)(*(long *)(param_1 + 0x40) + uVar4 * 0x50 + 8) = param_4 & 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return param_1;
  }
  if (param_3[2] != 0) {
    return param_1;
  }
  iVar2 = *param_3;
  if (iVar2 < 0) {
    uVar5 = param_3[1];
    uVar3 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar3 = snprintf((char *)local_40,0xf,"inkMesh_m%02d_%02d",-iVar2 & 0xff,uVar3 & 0xff);
    uVar4 = (ulong)uVar3;
    uVar3 = (uint)local_40[0];
    if (local_40[0] != 0) {
      uVar7 = 0;
      uVar5 = 0xffffffff;
      pbVar8 = (byte *)((ulong)local_40 | 1);
      do {
        uVar1 = uVar3 + 0x20;
        if (0x19 < uVar3 - 0x41) {
          uVar1 = uVar3;
        }
        uVar5 = (&DAT_7104754084)[(uVar1 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar3 = (uint)*pbVar8;
        uVar7 = uVar7 + 0x100000000;
        pbVar8 = pbVar8 + 1;
      } while (uVar3 != 0);
      goto LAB_7102d44480;
    }
  }
  else {
    uVar5 = param_3[1];
    uVar3 = -uVar5;
    if (-1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    uVar3 = snprintf((char *)local_40,0xe,"inkMesh_%02d_%02d",iVar2 + 1U & 0xff,uVar3 & 0xff);
    uVar4 = (ulong)uVar3;
    uVar3 = (uint)local_40[0];
    if (local_40[0] != 0) {
      uVar7 = 0;
      uVar5 = 0xffffffff;
      pbVar8 = (byte *)((ulong)local_40 | 1);
      do {
        uVar1 = uVar3 + 0x20;
        if (0x19 < uVar3 - 0x41) {
          uVar1 = uVar3;
        }
        uVar5 = (&DAT_7104754084)[(uVar1 ^ uVar5) & 0xff] ^ uVar5 >> 8;
        uVar3 = (uint)*pbVar8;
        uVar7 = uVar7 + 0x100000000;
        pbVar8 = pbVar8 + 1;
      } while (uVar3 != 0);
LAB_7102d44480:
      uVar6 = (ulong)~uVar5;
      uVar7 = uVar7 & 0xff00000000;
      lVar9 = *(long *)(param_1 + 0x58);
      goto joined_r0x007102d4448c;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  lVar9 = *(long *)(param_1 + 0x58);
joined_r0x007102d4448c:
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe0) != '\0')) {
    uVar4 = (**(code **)(**(long **)(lVar9 + 0x90) + 0x180))
                      (*(long **)(lVar9 + 0x90),uVar7 | uVar6,param_4 & 1);
  }
  return uVar4;
}

