// addr:      7101addf20
// offset:    0x1addf20
// name:      FUN_7101addf20
// mangled:   
// signature: undefined __cdecl FUN_7101addf20(int param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101addf20(int param_1,long param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined **local_48;
  undefined8 *local_40;
  long ********local_38;
  undefined4 local_24;
  
  if (param_1 == 0) {
LAB_7101addf84:
    FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_pokemon",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = local_40;
    local_48 = &PTR_FUN_710523d9a8;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    if (param_1 != 2) goto LAB_7101addfc4;
LAB_7101ade004:
    FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_stage",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = local_40;
    local_48 = &PTR_FUN_710523d9a8;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    if (param_1 != 4) goto LAB_7101ade044;
  }
  else {
    FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_af",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    puVar1 = local_40;
    FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
    local_48 = &PTR_FUN_710523d9a8;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    if (param_1 != 1) goto LAB_7101addf84;
LAB_7101addfc4:
    FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_item",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = local_40;
    local_48 = &PTR_FUN_710523d9a8;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    if (param_1 != 3) goto LAB_7101ade004;
LAB_7101ade044:
    local_48 = &PTR_FUN_710523d9a8;
    puVar1 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar1 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_24 = 0;
        local_38 = (long ********)&SUB_00000020;
        param_3 = &local_38;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
        if (((uVar2 & 1) != 0) &&
           (puVar1 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar1 != (undefined8 *)0x0)) goto LAB_7101ade0a4;
      }
      puVar1 = (undefined8 *)0x0;
    }
LAB_7101ade0a4:
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    local_40 = puVar1;
    FUN_71037790a0((long)puVar1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar1 = local_40;
    local_48 = &PTR_FUN_710523d9a8;
    local_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar1);
    }
    if (param_1 == 5) goto LAB_7101ade110;
  }
  FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_fighter",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar1 = local_40;
  local_48 = &PTR_FUN_710523d9a8;
  local_40 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  if (param_1 == 6) {
    return;
  }
LAB_7101ade110:
  FUN_7103776910(&local_48,param_2,(long ****)"set_rep_img_fighter_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037790a0((long)local_40,1,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar1 = local_40;
  local_48 = &PTR_FUN_710523d9a8;
  local_40 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  return;
}

