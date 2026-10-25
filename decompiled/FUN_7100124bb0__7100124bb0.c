// addr:      7100124bb0
// offset:    0x124bb0
// name:      FUN_7100124bb0
// mangled:   
// signature: undefined FUN_7100124bb0(void)


undefined8 FUN_7100124bb0(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_7100193560(DAT_71052adfc0);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  FUN_7100124c40((long)param_1);
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = FUN_71000bb680();
  lVar3 = *plVar2;
  param_1[6] = (long)FUN_7100123b10;
  param_1[7] = 0;
  param_1[0xb] = param_1[0xb] + lVar3 * -1000;
  param_1[8] = (long)"LanProcessHostMigrationJob::LanPrepareForBecomingHost";
  return 0;
}

