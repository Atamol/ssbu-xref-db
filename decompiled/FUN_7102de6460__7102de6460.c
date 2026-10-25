// addr:      7102de6460
// offset:    0x2de6460
// name:      FUN_7102de6460
// mangled:   
// signature: undefined __cdecl FUN_7102de6460(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102de6460(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long ****pppplVar3;
  long lVar4;
  byte ****ppppbVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long ***local_48;
  undefined4 local_34;
  
  for (plVar1 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0); ppppbVar9 = param_4,
      plVar1 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar1 = plVar1 + 2) {
    if ((*(uint *)(plVar1 + 1) < 2) && (lVar4 = *plVar1, *(long *)(lVar4 + 0x68) == 0x10d6d1177c)) {
      if (lVar4 != 0) {
        plVar7 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
        plVar1 = (long *)*plVar7;
        goto joined_r0x007102de6530;
      }
      break;
    }
  }
  goto LAB_7102de64c0;
  while( true ) {
    lVar8 = *plVar1;
    plVar1 = plVar1 + 1;
    if ((*(ulong *)(lVar8 + 0xa0) & 0xffffffffff) == 0x10d6d1177c) break;
joined_r0x007102de6530:
    if (plVar1 == (long *)plVar7[1]) goto LAB_7102de65b0;
  }
  ppppbVar5 = *(byte *****)(lVar8 + 0x110);
  if (ppppbVar5 == (byte ****)0x0) {
LAB_7102de65b0:
    ppppbVar9 = (byte ****)0x0;
    lVar4 = *(long *)(lVar4 + 0xd8);
  }
  else {
    ppppbVar9 = (byte ****)0x0;
    if (*ppppbVar5 != ppppbVar5[1]) {
      ppppbVar9 = ppppbVar5;
    }
    lVar4 = *(long *)(lVar4 + 0xd8);
  }
  if (lVar4 == 0) {
    pppplVar11 = param_5;
    param_5 = (long ****)&DAT_ffffffff;
  }
  else {
    plVar1 = *(long **)(*(long *)(lVar4 + 8) + 8);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0x102ed68ce3);
    pppplVar11 = param_5;
    param_5 = (long ****)(uVar2 & 0xffffffff);
  }
  plVar1 = (long *)FUN_710392e290(0x10,0x1d0,(long ****)param_3,param_4,pppplVar11,param_6,param_7,
                                  param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_000001d0;
      pppplVar3 = &local_48;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x1d0,pppplVar3,param_4,pppplVar11,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7102de663c;
    }
    plVar1 = (long *)0x0;
  }
LAB_7102de663c:
  param_3 = "dyr_redplane_set";
  FUN_71031453b0(plVar1,param_1,(byte *)"dyr_redplane_set",ppppbVar9,param_5,param_6,param_7,param_8
                );
  *plVar1 = (long)&PTR_FUN_710513d780;
  *(undefined4 *)(plVar1 + 0x10) = 0x40490fdb;
  *(undefined1 *)(plVar1 + 0xc) = 1;
  FUN_710313ef20(plVar1);
  plVar6 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar7 = (long *)*plVar6;
  do {
    if (plVar7 == (long *)plVar6[1]) goto LAB_7102de64c0;
    lVar4 = *plVar7;
    plVar7 = plVar7 + 1;
  } while ((*(ulong *)(lVar4 + 0xa0) & 0xffffffffff) != 0x10d6d1177c);
  lVar4 = *(long *)(lVar4 + 0x130);
  if (lVar4 != 0) {
    plVar1[0x18] = lVar4;
  }
LAB_7102de64c0:
  plVar1 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  while( true ) {
    if (plVar1 == *(long **)(*(long *)(param_1 + 0x310) + 0xd8)) {
      return;
    }
    if ((*(uint *)(plVar1 + 1) < 2) && (lVar4 = *plVar1, *(long *)(lVar4 + 0x68) == 0x133a75f517))
    break;
    plVar1 = plVar1 + 2;
  }
  if (lVar4 == 0) {
    return;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar1 = (long *)*plVar7;
  do {
    if (plVar1 == (long *)plVar7[1]) goto LAB_7102de66d8;
    lVar8 = *plVar1;
    plVar1 = plVar1 + 1;
  } while ((*(ulong *)(lVar8 + 0xa0) & 0xffffffffff) != 0x133a75f517);
  ppppbVar5 = *(byte *****)(lVar8 + 0x110);
  if (ppppbVar5 == (byte ****)0x0) {
LAB_7102de66d8:
    ppppbVar10 = (byte ****)0x0;
    lVar4 = *(long *)(lVar4 + 0xd8);
  }
  else {
    ppppbVar10 = (byte ****)0x0;
    if (*ppppbVar5 != ppppbVar5[1]) {
      ppppbVar10 = ppppbVar5;
    }
    lVar4 = *(long *)(lVar4 + 0xd8);
  }
  if (lVar4 == 0) {
    pppplVar11 = (long ****)&DAT_ffffffff;
  }
  else {
    plVar1 = *(long **)(*(long *)(lVar4 + 8) + 8);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0x12cb7e223a);
    pppplVar11 = (long ****)(uVar2 & 0xffffffff);
  }
  plVar1 = (long *)FUN_710392e290(0x10,0x1d0,(long ****)param_3,ppppbVar9,param_5,param_6,param_7,
                                  param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_000001d0;
      pppplVar3 = &local_48;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x1d0,pppplVar3,ppppbVar9,param_5,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7102de6764;
    }
    plVar1 = (long *)0x0;
  }
LAB_7102de6764:
  FUN_71031453b0(plVar1,param_1,(byte *)"dyr_yellowplane_set",ppppbVar10,pppplVar11,param_6,param_7,
                 param_8);
  *plVar1 = (long)&PTR_FUN_710513d780;
  *(undefined4 *)(plVar1 + 0x10) = 0x40490fdb;
  *(undefined1 *)(plVar1 + 0xc) = 1;
  FUN_710313ef20(plVar1);
  plVar6 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar7 = (long *)*plVar6;
  do {
    if (plVar7 == (long *)plVar6[1]) {
      return;
    }
    lVar4 = *plVar7;
    plVar7 = plVar7 + 1;
  } while ((*(ulong *)(lVar4 + 0xa0) & 0xffffffffff) != 0x133a75f517);
  lVar4 = *(long *)(lVar4 + 0x130);
  if (lVar4 == 0) {
    return;
  }
  plVar1[0x18] = lVar4;
  return;
}

