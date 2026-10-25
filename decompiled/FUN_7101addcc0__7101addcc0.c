// addr:      7101addcc0
// offset:    0x1addcc0
// name:      FUN_7101addcc0
// mangled:   
// signature: undefined __cdecl FUN_7101addcc0(undefined8 * param_1, undefined4 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101addcc0(undefined8 *param_1,undefined4 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  long ****pppplVar4;
  long ***local_28;
  undefined4 local_14;
  
  switch(param_2) {
  case 0:
    pcVar3 = "set_rep_img_af";
    break;
  case 1:
    pcVar3 = "set_rep_img_pokemon";
    break;
  case 2:
    pcVar3 = "set_rep_img_item";
    break;
  case 3:
    pcVar3 = "set_rep_img_stage";
    break;
  default:
    *param_1 = &PTR_FUN_710523d9a8;
    puVar1 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (puVar1 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_14 = 0;
        local_28 = (long ***)&SUB_00000020;
        pppplVar4 = &local_28;
        uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_14);
        if (((uVar2 & 1) != 0) &&
           (puVar1 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar4,param_4,param_5,param_6,param_7,param_8),
           puVar1 != (undefined8 *)0x0)) goto LAB_7101addd84;
      }
      puVar1 = (undefined8 *)0x0;
    }
LAB_7101addd84:
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    param_1[1] = puVar1;
    return;
  case 5:
    pcVar3 = "set_rep_img_fighter";
    break;
  case 6:
    pcVar3 = "set_rep_img_fighter_00";
  }
  FUN_7103776910(param_1,(long)param_3,(long ****)pcVar3,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  return;
}

