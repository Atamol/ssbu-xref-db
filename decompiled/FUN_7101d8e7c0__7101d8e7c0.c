// addr:      7101d8e7c0
// offset:    0x1d8e7c0
// name:      FUN_7101d8e7c0
// mangled:   
// signature: undefined __cdecl FUN_7101d8e7c0(long param_1, char * param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8e7c0(long param_1,char *param_2,undefined8 param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  uint param3;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  undefined8 *local_98;
  byte ***local_90;
  undefined8 *local_88;
  undefined **local_70;
  ulong local_68;
  
  if ((*(char *)(param_1 + 0x2f6) == '\0') && ((param_4 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2f8) = 2;
    *(undefined1 *)(param_1 + 0x2f6) = 1;
  }
  FUN_7103776640(&local_70,param_1 + 0x120,(byte ****)"set_parts_aw",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  param3 = 0;
  do {
    pcVar6 = "set_parts_eff_aura_%02d";
    uVar7 = (ulong)param3;
    snprintf((char *)&local_90,0x20,"set_parts_eff_aura_%02d",param3);
    bVar3 = *(char *)(param_1 + 0x2f6) != '\0';
    bVar1 = (byte)param_3;
    FUN_7103776640(&local_b0,(long)&local_70,&local_90,pcVar6,uVar7,param_5,param_6,param_7,param_8)
    ;
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_fxui_ef_none",pcVar6,uVar7,param_5,
                   param_6,param_7,param_8);
    puVar2 = local_98;
    FUN_710377aa20((long *)*local_98,bVar3 | bVar1 & 1);
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar2);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_b0,(long)&local_70,&local_90,pcVar6,uVar7,param_5,param_6,param_7,param_8)
    ;
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_fxui_ef_hope",pcVar6,uVar7,param_5,
                   param_6,param_7,param_8);
    puVar2 = local_98;
    FUN_710377aa20((long *)*local_98,bVar3 | bVar1 & 1);
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar2);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_b0,(long)&local_70,&local_90,pcVar6,uVar7,param_5,param_6,param_7,param_8)
    ;
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_fxui_ef_ace",pcVar6,uVar7,param_5,
                   param_6,param_7,param_8);
    puVar2 = local_98;
    FUN_710377aa20((long *)*local_98,bVar3 | bVar1 & 1);
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar2);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_b0,(long)&local_70,&local_90,pcVar6,uVar7,param_5,param_6,param_7,param_8)
    ;
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_fxui_ef_legend",pcVar6,uVar7,param_5,
                   param_6,param_7,param_8);
    puVar2 = local_98;
    FUN_710377aa20((long *)*local_98,bVar3 | bVar1 & 1);
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar2);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    param3 = param3 + 1;
  } while (param3 != 0xf);
  FUN_7103776910(&local_90,param_1 + 0x120,(long ****)"set_fxui_smn_light",pcVar6,uVar7,param_5,
                 param_6,param_7,param_8);
  puVar2 = local_88;
  FUN_710377aa20((long *)*local_88,bVar1 & 1);
  local_90 = (byte ***)&PTR_FUN_710523d9a8;
  local_88 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  uVar7 = local_68;
  if (*param_2 != '\0') {
    FUN_7103778300(0x3f800000,local_68,(long)param_2);
  }
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar7 != 0) {
    uVar5 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

