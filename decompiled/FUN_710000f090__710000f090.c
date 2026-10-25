// addr:      710000f090
// offset:    0xf090
// name:      FUN_710000f090
// mangled:   
// signature: undefined8 __cdecl FUN_710000f090(long * param_1, uint param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710000f090(long *param_1,uint param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = *param_1;
  bVar4 = (param_2 & 1) == 0;
  lVar1 = lVar10 + 0x4ce0;
  if (bVar4) {
    lVar1 = lVar10 + 0x4cc0;
  }
  lVar2 = 0x5070;
  if (bVar4) {
    lVar2 = 0x5078;
  }
  if (*param_3 == 0) {
    return 0;
  }
  do {
    uVar7 = 6;
    bVar4 = FUN_7100017490((byte *)"Digest",param_3,6);
    if (bVar4) {
      if ((*(byte *)(lVar1 + 0x10) >> 1 & 1) == 0) {
        uVar6 = FUN_7100024760();
        if ((uVar6 & 1) == 0) goto LAB_710000f1d4;
        *(ulong *)(lVar10 + lVar2) = *(ulong *)(lVar10 + lVar2) | 2;
        *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 2;
        pbVar8 = param_3;
        iVar5 = FUN_71000134b0(param_1,(ulong)(param_2 & 1),param_3);
        if (iVar5 == 0) goto LAB_710000f1d4;
        goto LAB_710000f190;
      }
      FUN_7100015de0(lVar10,(byte *)"Ignoring duplicate digest auth header.\n",uVar7,param_4,param_5
                     ,param_6,param_7,param_8);
      bVar3 = *param_3;
    }
    else {
      pbVar8 = (byte *)0x5;
      bVar4 = FUN_7100017490((byte *)"Basic",param_3,5);
      if (!bVar4) goto LAB_710000f1d4;
      *(ulong *)(lVar10 + lVar2) = *(ulong *)(lVar10 + lVar2) | 1;
      *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) | 1;
      if (*(long *)(lVar1 + 8) != 1) goto LAB_710000f1d4;
      *(undefined8 *)(lVar1 + 0x10) = 0;
LAB_710000f190:
      FUN_7100015de0(lVar10,(byte *)"Authentication problem. Ignoring this.\n",pbVar8,param_4,
                     param_5,param_6,param_7,param_8);
      *(undefined1 *)(lVar10 + 0x4d00) = 1;
      bVar3 = *param_3;
    }
    while ((bVar3 != 0 && (bVar3 != 0x2c))) {
      param_3 = param_3 + 1;
LAB_710000f1d4:
      bVar3 = *param_3;
    }
    if (bVar3 == 0x2c) {
      param_3 = param_3 + 1;
    }
    uVar9 = (uint)*param_3;
    if (*param_3 == 0) {
      return 0;
    }
    while ((uVar9 == 0x20 || (uVar9 - 9 < 5))) {
      param_3 = param_3 + 1;
      uVar9 = (uint)*param_3;
      if (uVar9 == 0) {
        return 0;
      }
    }
  } while( true );
}

