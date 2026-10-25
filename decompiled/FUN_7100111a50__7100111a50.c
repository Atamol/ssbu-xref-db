// addr:      7100111a50
// offset:    0x111a50
// name:      FUN_7100111a50
// mangled:   
// signature: undefined FUN_7100111a50(void)


undefined8 FUN_7100111a50(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = FUN_71000bb680();
  lVar2 = *plVar1;
  *(code **)(param_1 + 0x30) = FUN_7100111aa0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar2 * 2000;
  *(char **)(param_1 + 0x40) = "NexProcessHostMigrationJob::UpdateSessionOpenStatus";
  return 1;
}

