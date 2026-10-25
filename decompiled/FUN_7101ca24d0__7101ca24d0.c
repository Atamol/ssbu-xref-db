// addr:      7101ca24d0
// offset:    0x1ca24d0
// name:      FUN_7101ca24d0
// mangled:   
// signature: undefined __cdecl FUN_7101ca24d0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca24d0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  
  if (param_2 == 1) {
    FUN_7101ca1ee0(param_1,0x71042e72ce,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_30,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_30,"mnu_anyone_rule_set_help_on",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    FUN_7101c9e110(param_1,*(char *)(param_1 + 0x24e),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7101ca10c0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710376b960(*(long *)(param_1 + 0x130));
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),1);
  }
  else if (param_2 == 0) {
    FUN_7101ca1ee0(param_1,0x7104454b34,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_30,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_30,"mnu_anyone_rule_set_help_off",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
    (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),0);
    FUN_7101ca10c0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

