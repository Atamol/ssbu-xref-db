// addr:      71000088e0
// offset:    0x88e0
// name:      FUN_71000088e0
// mangled:   
// signature: undefined8 __cdecl FUN_71000088e0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71000088e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0xa27] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x15] == 0) {
    return 0;
  }
  plVar5 = param_2 + 2;
  uVar1 = *(uint *)(param_2 + 9);
  if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long **)*plVar5 == param_2;
  }
  if (uVar1 < 0x11) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    plVar11 = (long *)param_1[8];
    while (plVar2 = plVar11, plVar2 != (long *)0x0) {
      lVar9 = *plVar2;
      plVar11 = (long *)plVar2[2];
      if (*(int *)(lVar9 + 0x48) == 1) {
        *(undefined4 *)(lVar9 + 0x48) = 2;
        FUN_71000189d0(lVar9);
        FUN_7100006870(param_1 + 8,plVar2,0);
        FUN_71000086c0(lVar9,0,6,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  if (((undefined8 *)*plVar5 != (undefined8 *)0x0) && ((int)param_2[9] - 10U < 7)) {
    *(undefined8 *)*plVar5 = param_2;
    FUN_7100004200(param_2[2],2);
    bVar3 = true;
  }
  if ((param_2[0x15] != 0) && ((param_2[0x9a2] != 0 || ((int)param_2[0x9a3] != 0)))) {
    puVar7 = (undefined8 *)(param_2[0x15] + 0xb0);
    uVar4 = FUN_7100017150((long *)*puVar7,param_2 + 0x9a4,puVar7);
    if ((int)uVar4 != 0) {
      FUN_7100015de0((long)param_2,(byte *)"Internal error clearing splay node = %d\n",
                     uVar4 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
    }
    if (param_2[0x9ae] != 0) {
      do {
        FUN_7100006870(param_2 + 0x9ab,(undefined8 *)param_2[0x9ac],0);
      } while (param_2[0x9ae] != 0);
    }
    param_2[0x9a2] = 0;
    *(undefined4 *)(param_2 + 0x9a3) = 0;
  }
  if ((int)param_2[0x14] == 2) {
    param_2[0x13] = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  if (*plVar5 != 0) {
    if (bVar3) {
      FUN_7100008d20(plVar5,*(uint *)((long)param_2 + 0x4c),(ulong)(uVar1 < 0x11),param_4,param_5,
                     param_6,param_7,param_8);
    }
    else {
      FUN_710001ec00((long)param_2,*plVar5);
    }
  }
  FUN_7100027150((undefined4 *)(param_2 + 0x9fe));
  FUN_71000068f0(param_2 + 0x9ab,0);
  param_2[0x16c] = 0;
  *(undefined4 *)(param_2 + 9) = 0x11;
  FUN_7100008fc0((long)param_1,(long)param_2);
  if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[2] = 0;
    *plVar5 = 0;
  }
  param_2[0x15] = 0;
  for (plVar5 = (long *)param_1[4]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
    if (*(long **)(*plVar5 + 0x20) == param_2) {
      FUN_7100006870(param_1 + 4,plVar5,0);
      break;
    }
  }
  plVar5 = param_1 + 1;
  if ((long *)param_2[1] != (long *)0x0) {
    plVar5 = (long *)param_2[1];
  }
  *plVar5 = *param_2;
  plVar5 = param_1 + 2;
  if (*param_2 != 0) {
    plVar5 = (long *)(*param_2 + 8);
  }
  *plVar5 = param_2[1];
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if (param_1[0x38] == 0) {
    return 0;
  }
  if (param_1[0x16] == 0) {
LAB_7100008bec:
    if ((param_1[0x3a] == 0) && ((int)param_1[0x3b] == 0)) {
      return 0;
    }
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    pcVar10 = (code *)param_1[0x38];
    lVar9 = param_1[0x39];
    lVar6 = -1;
  }
  else {
    auVar12 = FUN_7100017740();
    lVar9 = auVar12._0_8_;
    plVar5 = FUN_7100016d90(0,0,(long *)param_1[0x16]);
    param_1[0x16] = (long)plVar5;
    lVar8 = plVar5[4];
    lVar6 = 0;
    if (lVar9 <= lVar8) {
      if ((lVar9 < lVar8) || (auVar12._8_4_ < *(uint *)(plVar5 + 5))) {
        lVar6 = FUN_7100017750(lVar8,(int)plVar5[5],lVar9,auVar12._8_4_);
        if (lVar6 == 0) {
          lVar6 = 1;
        }
        else if (lVar6 < 0) goto LAB_7100008bec;
      }
      else {
        lVar6 = 0;
      }
    }
    lVar9 = param_1[0x16];
    if ((*(long *)(lVar9 + 0x20) == param_1[0x3a]) && (*(int *)(lVar9 + 0x28) == (int)param_1[0x3b])
       ) {
      return 0;
    }
    lVar8 = *(long *)(lVar9 + 0x28);
    param_1[0x3a] = *(long *)(lVar9 + 0x20);
    param_1[0x3b] = lVar8;
    pcVar10 = (code *)param_1[0x38];
    lVar9 = param_1[0x39];
  }
  (*pcVar10)(param_1,lVar6,lVar9);
  return 0;
}

