// addr:      7100187730
// offset:    0x187730
// name:      FUN_7100187730
// mangled:   
// signature: undefined8 __cdecl FUN_7100187730(long * param_1)


undefined8 FUN_7100187730(long *param_1)

{
  int local_30 [4];
  
  FUN_71001937b0(local_30,DAT_71052adfc0);
  if (local_30[0] == 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  else {
    param_1[6] = (long)FUN_71001877a0;
    param_1[7] = 0;
    param_1[8] = (long)"CreateMeshJob::CompleteFailure";
  }
  return 6;
}

