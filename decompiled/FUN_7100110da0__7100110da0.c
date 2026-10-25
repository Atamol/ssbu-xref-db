// addr:      7100110da0
// offset:    0x110da0
// name:      FUN_7100110da0
// mangled:   
// signature: undefined8 __cdecl FUN_7100110da0(long * param_1)


undefined8 FUN_7100110da0(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = FUN_7100193560(DAT_71052adfc0);
  lVar3 = 0;
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  do {
    if (*(int *)((long)param_1 + lVar3 + 0x178) != 0) {
      plVar2 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar2,*(int *)((long)param_1 + lVar3 + 0x178));
      *(undefined4 *)((long)param_1 + lVar3 + 0x178) = 0;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x80);
  (**(code **)(*param_1 + 0x70))(param_1,*(undefined1 *)((long)param_1 + 0x86));
  plVar2 = FUN_71000bb680();
  lVar3 = *plVar2;
  param_1[6] = (long)FUN_7100110080;
  param_1[7] = 0;
  param_1[8] = (long)"NexProcessHostMigrationJob::NexPrepareForBecomingHost";
  param_1[0xb] = param_1[0xb] + lVar3 * -3000;
  return 5;
}

