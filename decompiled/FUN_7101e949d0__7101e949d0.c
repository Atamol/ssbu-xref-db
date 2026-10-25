// addr:      7101e949d0
// offset:    0x1e949d0
// name:      FUN_7101e949d0
// mangled:   
// signature: undefined __cdecl FUN_7101e949d0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e949d0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  long ***local_48;
  undefined4 local_34;
  
  *(undefined1 *)((long)param_1 + 9) = 1;
  fVar10 = 1.0;
  FUN_7103778300(0x3f800000,*(long *)(*param_1 + 8),0x7104443dfb);
  lVar8 = *param_1;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_00000010;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101e94a70;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101e94a70:
  *puVar2 = &PTR_FUN_710523d9e8;
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&SUB_00000018;
      pppplVar6 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar6,param_4,param_5,param_6,param_7,param_8),
         puVar4 != (undefined8 *)0x0)) goto LAB_7101e94ad4;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7101e94ad4:
  *(undefined1 *)(puVar4 + 2) = 1;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar2[1] = puVar4;
  if ((undefined8 *)(lVar8 + 0x50) != puVar2) {
    puVar7 = *(undefined8 **)(lVar8 + 0x58);
    *puVar4 = *puVar7;
    puVar4[1] = puVar7[1];
    *(undefined1 *)(puVar2[1] + 0x10) = *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x10);
  }
  lVar8 = *param_1;
  plVar5 = *(long **)(lVar8 + 0x40);
  *(undefined8 **)(lVar8 + 0x40) = puVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    puVar2 = *(undefined8 **)(lVar8 + 0x40);
  }
  if (*(long **)(puVar2[1] + 8) == (long *)0x0) {
    fVar9 = 0.0;
    uVar1 = *(uint *)(param_1 + 2);
  }
  else {
    fVar9 = (float)(**(code **)(**(long **)(puVar2[1] + 8) + 0x1a8))();
    uVar1 = *(uint *)(param_1 + 2);
  }
  if (uVar1 != 0) {
    fVar10 = fVar9 / (float)uVar1;
  }
  FUN_710377aee0((ulong)(uint)(fVar10 * *(float *)(param_1 + 3)),*(long *)(lVar8 + 0x40));
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

