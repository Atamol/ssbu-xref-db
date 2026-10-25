// addr:      7101afe3e0
// offset:    0x1afe3e0
// name:      FUN_7101afe3e0
// mangled:   
// signature: undefined __cdecl FUN_7101afe3e0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101afe3e0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  byte *pbVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **local_10b8;
  ulong local_10b0;
  undefined **local_10a8;
  undefined8 *local_10a0;
  undefined **local_1098;
  undefined8 *local_1090;
  undefined **local_1088;
  undefined8 *local_1080;
  undefined **local_1078;
  undefined8 *local_1070;
  undefined **local_1068;
  undefined8 *local_1060;
  long ***local_1058;
  ulong local_1050 [511];
  int local_58 [2];
  
  FUN_7103776910(&local_1068,**(long **)(param_1 + 0x128) + 8,(long ****)"set_txt_key",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  local_1078 = &PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
      local_1058 = (long ***)&SUB_00000020;
      pppplVar8 = &local_1058;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101afe484;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101afe484:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  pppplVar8 = (long ****)0x800;
  *puVar3 = *local_1060;
  puVar3[1] = local_1060[1];
  puVar3[2] = local_1060[2];
  puVar3[3] = local_1060[3];
  local_1070 = puVar3;
  FUN_7103393a60((uint *)&local_1058,param_2,0x800);
  FUN_710377a120((long)&local_1078,(char *)local_1050,pppplVar8,param_4,param_5,param_6,param_7,
                 param_8);
  local_1078 = &PTR_FUN_710523d9a8;
  local_1070 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776910(&local_1088,**(long **)(param_1 + 0x130) + 8,(long ****)"set_txt_key",pppplVar8,
                 param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    local_10a8 = &PTR_FUN_710523d9a8;
    puVar3 = (undefined8 *)
             FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    if (puVar3 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_10b8 = (undefined **)((ulong)local_10b8 & 0xffffffff00000000);
        local_1058 = (long ***)&SUB_00000020;
        pppplVar8 = &local_1058;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_10b8);
        if (((uVar4 & 1) != 0) &&
           (puVar3 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8),
           puVar3 != (undefined8 *)0x0)) goto LAB_7101afe754;
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_7101afe754:
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar9 = 0x800;
    *puVar3 = *local_1080;
    puVar3[1] = local_1080[1];
    puVar3[2] = local_1080[2];
    puVar3[3] = local_1080[3];
    local_10a0 = puVar3;
    FUN_7103393a60((uint *)&local_1058,param_2,0x800);
    FUN_710377a120((long)&local_10a8,(char *)local_1050,uVar9,param_4,param_5,param_6,param_7,
                   param_8);
    local_10a8 = &PTR_FUN_710523d9a8;
    local_10a0 = (undefined8 *)0x0;
    puVar1 = local_1080;
    goto joined_r0x007101afe7b0;
  }
  local_1098 = &PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_10b8 = (undefined **)((ulong)local_10b8 & 0xffffffff00000000);
      local_1058 = (long ***)&SUB_00000020;
      pppplVar8 = &local_1058;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_10b8);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101afe568;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101afe568:
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  uVar9 = 0x40000;
  *puVar3 = *local_1080;
  puVar3[1] = local_1080[1];
  puVar3[2] = local_1080[2];
  puVar3[3] = local_1080[3];
  local_1090 = puVar3;
  FUN_7103393a60((uint *)&local_1058,param_2,0x40000);
  FUN_710377a120((long)&local_1098,(char *)local_1050,uVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  local_1098 = &PTR_FUN_710523d9a8;
  local_1090 = (undefined8 *)0x0;
  puVar1 = local_1080;
joined_r0x007101afe7b0:
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  FUN_7103776640(&local_1058,**(long **)(param_1 + 0x130) + 8,(byte ****)"set_parts_key_00",uVar9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_10b8,(long)&local_1058,(long ****)"set_txt_icon",uVar9,param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_1050[0];
  local_1058 = (long ***)&PTR_FUN_710523d988;
  local_1050[0] = 0;
  if (uVar4 != 0) {
    uVar5 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar4);
  }
  uVar4 = local_10b0;
  plVar10 = *(long **)(local_10b0 + 0x10);
  if (plVar10 != (long *)0x0) {
    pbVar7 = (byte *)plVar10[0x1c];
    *(uint *)((long)plVar10 + 0x25c) = param_2;
    if (((pbVar7 != (byte *)0x0) && (*pbVar7 != 0x23)) && (*pbVar7 != 0x40)) {
      puVar6 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar7);
      local_58[0] = *(int *)((long)plVar10 + 0x25c);
      memset(&local_1058,0,0x1000);
      uVar2 = FUN_71037ae170((long)&local_1058,puVar6,local_58);
      FUN_71037a2270(plVar10,(ushort *)&local_1058,uVar2,0);
    }
  }
  *(uint *)(param_1 + 0x1c0) = param_2;
  local_10b8 = &PTR_FUN_710523d9a8;
  local_10b0 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  local_1088 = &PTR_FUN_710523d9a8;
  local_1080 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  puVar3 = local_1060;
  local_1068 = &PTR_FUN_710523d9a8;
  local_1060 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  return;
}

