// addr:      7101e94ba0
// offset:    0x1e94ba0
// name:      FUN_7101e94ba0
// mangled:   
// signature: undefined __cdecl FUN_7101e94ba0(long * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e94ba0(long *param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar6 = &local_50;
  pppplVar7 = &local_50;
  fVar12 = 1.0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  FUN_7103778300(0x3f800000,*(long *)(*param_1 + 8),0x7104443dfb);
  lVar10 = *param_1;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000010;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      param_3 = pppplVar6;
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         param_3 = pppplVar6, puVar2 != (undefined8 *)0x0)) goto LAB_7101e94c44;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101e94c44:
  *puVar2 = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&SUB_00000018;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101e94ca8;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101e94ca8:
  *(undefined1 *)(puVar4 + 2) = 1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[1] = puVar4;
  if ((undefined8 *)(lVar10 + 0x50) != puVar2) {
    puVar9 = *(undefined8 **)(lVar10 + 0x58);
    *puVar4 = *puVar9;
    puVar4[1] = puVar9[1];
    *(undefined1 *)(puVar2[1] + 0x10) = *(undefined1 *)(*(long *)(lVar10 + 0x58) + 0x10);
  }
  lVar10 = *param_1;
  plVar5 = *(long **)(lVar10 + 0x40);
  *(undefined8 **)(lVar10 + 0x40) = puVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    puVar2 = *(undefined8 **)(lVar10 + 0x40);
  }
  if (*(long **)(puVar2[1] + 8) == (long *)0x0) {
    fVar11 = 0.0;
    uVar1 = *(uint *)(param_1 + 2);
  }
  else {
    fVar11 = (float)(**(code **)(**(long **)(puVar2[1] + 8) + 0x1a8))();
    uVar1 = *(uint *)(param_1 + 2);
  }
  if (uVar1 != 0) {
    fVar12 = fVar11 / (float)uVar1;
  }
  FUN_710377aee0((ulong)(uint)(fVar12 * *(float *)(param_1 + 3)),*(long *)(lVar10 + 0x40));
  if ((param_2 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)((long)param_1 + 0x14);
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar8;
  return;
}

