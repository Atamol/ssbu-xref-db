// addr:      7102ff13c0
// offset:    0x2ff13c0
// name:      FUN_7102ff13c0
// mangled:   
// signature: undefined __cdecl FUN_7102ff13c0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102ff13c0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  ulong uVar2;
  long ****pppplVar3;
  char *pcVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar3 = &local_50;
  pppplVar5 = &local_50;
  *param_1 = param_3;
  param_1[2] = 0;
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000030;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x30,pppplVar3,param_4,param_5,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7102ff1450;
    }
    plVar1 = (long *)0x0;
  }
LAB_7102ff1450:
  ppppbVar6 = (byte ****)(ulong)*(uint *)(param_3 + 0x3c);
  pcVar4 = "dys_drumkan_break_set";
  FUN_7102ff1590(plVar1,param_2,(long *********)"dys_drumkan_break_set",ppppbVar6,param_5,param_6,
                 param_7,param_8);
  puVar8 = (ulong *)*puVar9;
  *puVar9 = plVar1;
  if (puVar8 != (ulong *)0x0) {
    uVar2 = *puVar8;
    uVar7 = puVar8[3];
    puVar8[1] = uVar2;
    puVar8[4] = uVar7;
    if (uVar7 != 0) {
      puVar8[4] = uVar7;
      FUN_710392eb40(uVar7);
      uVar2 = *puVar8;
    }
    if (uVar2 != 0) {
      puVar8[1] = uVar2;
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40((ulong)puVar8);
  }
  plVar1 = (long *)FUN_710392e290(0x10,0x30,(long ****)pcVar4,ppppbVar6,param_5,param_6,param_7,
                                  param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000030;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x30,pppplVar5,ppppbVar6,param_5,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7102ff1508;
    }
    plVar1 = (long *)0x0;
  }
LAB_7102ff1508:
  FUN_7102ff1590(plVar1,param_2,(long *********)"dys_hashigo_break_set",
                 (byte ****)(ulong)*(uint *)(param_3 + 0x3b),param_5,param_6,param_7,param_8);
  puVar8 = (ulong *)param_1[2];
  param_1[2] = plVar1;
  if (puVar8 != (ulong *)0x0) {
    uVar2 = *puVar8;
    uVar7 = puVar8[3];
    puVar8[1] = uVar2;
    puVar8[4] = uVar7;
    if (uVar7 != 0) {
      puVar8[4] = uVar7;
      FUN_710392eb40(uVar7);
      uVar2 = *puVar8;
    }
    if (uVar2 != 0) {
      puVar8[1] = uVar2;
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40((ulong)puVar8);
    return;
  }
  return;
}

