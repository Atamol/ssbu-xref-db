// addr:      7100124fd0
// offset:    0x124fd0
// name:      FUN_7100124fd0
// mangled:   
// signature: undefined8 __cdecl FUN_7100124fd0(long param_1)


undefined8 FUN_7100124fd0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = DAT_71052ac580;
  plVar1 = FUN_71000bb680();
  lVar2 = *(long *)(lVar2 + 0x30);
  lVar3 = *plVar1;
  *(code **)(param_1 + 0x30) = FUN_7100125030;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x1b0) = lVar2 + lVar3 * 2000;
  *(char **)(param_1 + 0x40) =
       "LanProcessHostMigrationJob::LanGetMatchMakingClientHostLastConfirmation";
  return 1;
}

