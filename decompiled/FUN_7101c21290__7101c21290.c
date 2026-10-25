// addr:      7101c21290
// offset:    0x1c21290
// name:      FUN_7101c21290
// mangled:   
// signature: undefined __cdecl FUN_7101c21290(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c21290(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_40;
  ulong local_38;
  
  if (*(byte *)(param_1 + 0x218) == (param_2 & 1)) {
    return;
  }
  FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0x170) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x218) == '\0') {
    FUN_7103778300(0x3f800000,local_38,0x71043cf3f5);
    if ((*(char *)(param_1 + 0x719) == '\0') || (*(char *)(param_1 + 0x219) == '\0'))
    goto LAB_7101c21354;
    pcVar3 = "rule_icon_in";
  }
  else {
    FUN_7103778300(0x3f800000,local_38,0x710434a26a);
    FUN_7103778300(0x3f800000,local_38,0x7104443665);
    if ((*(char *)(param_1 + 0x719) == '\0') || (*(char *)(param_1 + 0x219) == '\0'))
    goto LAB_7101c21354;
    pcVar3 = "rule_icon_out";
  }
  FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
LAB_7101c21354:
  uVar1 = local_38;
  *(byte *)(param_1 + 0x218) = param_2 & 1;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

