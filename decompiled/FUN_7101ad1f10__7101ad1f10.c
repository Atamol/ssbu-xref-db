// addr:      7101ad1f10
// offset:    0x1ad1f10
// name:      FUN_7101ad1f10
// mangled:   
// signature: undefined __cdecl FUN_7101ad1f10(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad1f10(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  long *********ppppppppplVar7;
  undefined **local_78;
  undefined8 *local_70;
  undefined **local_68;
  undefined8 *local_60;
  long ***local_58;
  undefined4 local_44;
  
  uVar1 = (uint)param_5;
  ppppppppplVar7 = (long *********)((ulong)param_3 & 0xffffffff);
  ppppbVar6 = param_4;
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x7104348ed7);
  FUN_7103776910(&local_68,param_2,(long ****)"set_rep_stage_normal",param_3,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  local_78 = &PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,ppppbVar6,param_5,param_6,param_7,param_8)
  ;
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_58 = (long ***)&SUB_00000020;
      pppplVar5 = &local_58;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar5,ppppbVar6,param_5,param_6,param_7,param_8),
         puVar3 != (undefined8 *)0x0)) goto LAB_7101ad1fc8;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7101ad1fc8:
  puVar2 = local_60;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *puVar3 = *local_60;
  puVar3[1] = local_60[1];
  puVar3[2] = local_60[2];
  puVar3[3] = local_60[3];
  local_70 = puVar3;
  FUN_7101ad2060(param_1,(long)&local_78,ppppppppplVar7,(byte ****)((ulong)param_4 & 0xffffffff),
                 (long ****)(ulong)(uVar1 & 1),param_6,param_7,param_8);
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar3);
  }
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  return;
}

