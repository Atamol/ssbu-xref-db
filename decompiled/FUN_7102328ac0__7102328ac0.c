// addr:      7102328ac0
// offset:    0x2328ac0
// name:      FUN_7102328ac0
// mangled:   
// signature: undefined8 __cdecl FUN_7102328ac0(long * param_1, undefined8 param_2, long * param_3)


undefined8 FUN_7102328ac0(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = param_1[0x1d];
  lVar2 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar2 != 0xc7ba50f1d) {
    if ((((lVar2 != 0xbcd1970ce) || ((int)param_3[1] != -0x306e0e51)) ||
        (iVar1 = strcmp((char *)(param_3 + 2),"IngameCallSequenceScene"), iVar1 != 0)) ||
       (((int)param_3[10] != 0x64769d67 ||
        (iVar1 = strcmp((char *)(param_3 + 0xb),"MeleeScene"), iVar1 != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x007102328b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
      return uVar3;
    }
    *(undefined4 *)(lVar4 + 8) = 3;
  }
  return 1;
}

