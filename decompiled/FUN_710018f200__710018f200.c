// addr:      710018f200
// offset:    0x18f200
// name:      FUN_710018f200
// mangled:   
// signature: undefined4 __cdecl FUN_710018f200(long * param_1, undefined4 * param_2)


undefined4 FUN_710018f200(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_71052ac580;
  if (*(char *)((long)param_1 + 0x6c) == '\0') {
    lVar1 = param_1[0xd];
    plVar3 = FUN_71000bb680();
    param_1[0xc] = *(long *)(lVar2 + 0x30) + *plVar3 * (long)(int)lVar1;
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xb] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    uVar4 = 1;
    *(undefined1 *)((long)param_1 + 0x6c) = 1;
    FUN_7100191ed0(DAT_71052adfc0,2);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_710018f2c0;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveWithHostMigrationJob::CheckHostMigrationProcess";
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

