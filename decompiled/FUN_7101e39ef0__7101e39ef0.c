// addr:      7101e39ef0
// offset:    0x1e39ef0
// name:      FUN_7101e39ef0
// mangled:   
// signature: undefined __cdecl FUN_7101e39ef0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e39ef0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined **local_40;
  undefined8 *local_38;
  
  lVar1 = param_1 + 0x60;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x68),0x710428ff7d);
  *(undefined4 *)(param_1 + 0x80) = 4;
  FUN_7103776910(&local_40,lVar1,(long ****)"set_fxui_smn_light",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar2 = local_38;
  FUN_710377aa20((long *)*local_38,0);
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776910(&local_40,lVar1,(long ****)"set_fxui_smn_shine",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar2 = local_38;
  FUN_710377aa20((long *)*local_38,0);
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_part_aw_00",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_71025af650((long)&local_40,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar2 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(ulong *)((long)puVar2 + 0x18);
    *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  return;
}

