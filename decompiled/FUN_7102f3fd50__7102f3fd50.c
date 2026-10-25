// addr:      7102f3fd50
// offset:    0x2f3fd50
// name:      FUN_7102f3fd50
// mangled:   
// signature: undefined __cdecl FUN_7102f3fd50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102f3fd50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  undefined8 uVar8;
  long ***local_40;
  undefined4 local_34;
  
  pppplVar5 = &local_40;
  pppplVar6 = &local_40;
  pppplVar7 = &local_40;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x60,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000060;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar5;
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x60,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar5, puVar3 != (undefined8 *)0x0)) goto LAB_7102f3fdc8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7102f3fdc8:
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[3] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar2 = _DAT_7107521008;
  uVar1 = _ConstantZero;
  puVar3[10] = uVar8;
  puVar3[8] = param_2;
  *(undefined1 *)(puVar3 + 9) = 0;
  *puVar3 = &PTR_FUN_7105153a30;
  puVar3[7] = uVar2;
  puVar3[6] = uVar1;
  FUN_7102f3dd10((long)puVar3,(byte *)"s10_base",param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x60,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000060;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar6;
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x60,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar6, puVar3 != (undefined8 *)0x0)) goto LAB_7102f3fe70;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7102f3fe70:
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  uVar2 = _DAT_7107521008;
  uVar1 = _ConstantZero;
  puVar3[8] = param_2;
  puVar3[10] = uVar8;
  *(undefined1 *)(puVar3 + 9) = 0;
  *puVar3 = &PTR_FUN_7105153a80;
  puVar3[1] = 0;
  puVar3[7] = uVar2;
  puVar3[6] = uVar1;
  FUN_7102f3e950((long)puVar3,(byte *)"s10_island",param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000070;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar7;
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x70,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar7, puVar3 != (undefined8 *)0x0)) goto LAB_7102f3ff0c;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7102f3ff0c:
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  uVar2 = _DAT_7107521008;
  uVar1 = _ConstantZero;
  puVar3[8] = param_2;
  *(undefined1 *)(puVar3 + 9) = 0;
  *puVar3 = &PTR_FUN_7105153ad0;
  puVar3[1] = 0;
  puVar3[10] = uVar8;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[7] = uVar2;
  puVar3[6] = uVar1;
  FUN_7102f3f560((long)puVar3,(byte *)"s10_pillar",param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  return;
}

