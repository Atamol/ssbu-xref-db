// addr:      71000036e0
// offset:    0x36e0
// name:      FUN_71000036e0
// mangled:   
// signature: int __cdecl FUN_71000036e0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


int FUN_71000036e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [12];
  
  lVar13 = *param_1;
  auVar14 = FUN_7100017740();
  lVar11 = *(long *)(lVar13 + 0x3a8);
  lVar12 = *(long *)(lVar13 + 0x3b0);
  lVar9 = *(long *)(lVar13 + 0xa68);
  bVar2 = 0 < lVar11 | 2;
  if (lVar12 < 1) {
    bVar2 = 0 < lVar11;
  }
  uVar10 = *(undefined8 *)(lVar13 + 0xa70);
  lVar4 = lVar11;
  if (lVar12 <= lVar11) {
    lVar4 = lVar12;
  }
  lVar3 = 300000;
  if (bVar2 == 2) {
    lVar3 = lVar12;
  }
  if (bVar2 != 3) {
    lVar4 = lVar3;
  }
  if (bVar2 != 1) {
    lVar11 = lVar4;
  }
  lVar12 = FUN_7100017750(auVar14._0_8_,auVar14._8_4_,lVar9,(int)uVar10);
  uVar6 = lVar11 - lVar12;
  if (uVar6 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  if ((long)uVar6 < 0) {
    FUN_7100016040(lVar13,(byte *)"Connection time-out",lVar9,uVar10,param_5,param_6,param_7,param_8
                  );
    iVar7 = 0x1c;
  }
  else {
    iVar7 = FUN_7100005b80(*param_2);
    *(int *)(param_1 + 0x109) = iVar7;
    param_1[0x10] = *param_2;
    param_1[0x11] = 0;
    puVar1 = (uint *)(param_1 + 0x4c);
    param_1[0x4c] = -1;
    FUN_71000086c0(*param_1,200,4,uVar10,param_5,param_6,param_7,param_8);
    lVar11 = param_1[0x10];
    param_1[0x10a] = uVar6 >> (*(long *)(lVar11 + 0x28) != 0);
    if (lVar11 == 0) {
      iVar8 = 7;
      uVar5 = *puVar1;
    }
    else {
      do {
        iVar8 = FUN_7100003840(param_1,lVar11,puVar1,uVar10,param_5,param_6,param_7,param_8);
        if (iVar8 == 0) break;
        lVar11 = *(long *)(param_1[0x10] + 0x28);
        param_1[0x10] = lVar11;
      } while (lVar11 != 0);
      uVar5 = *puVar1;
    }
    if (uVar5 == 0xffffffff) {
      iVar7 = 7;
      if (iVar8 != 0) {
        iVar7 = iVar8;
      }
    }
    else {
      *(long *)(lVar13 + 0x5080) = *(long *)(lVar13 + 0x5080) + 1;
      iVar7 = 0;
    }
  }
  return iVar7;
}

