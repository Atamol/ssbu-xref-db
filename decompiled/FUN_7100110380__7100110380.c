// addr:      7100110380
// offset:    0x110380
// name:      FUN_7100110380
// mangled:   
// signature: undefined FUN_7100110380(void)


undefined8 FUN_7100110380(long *param_1,byte param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  int aiStack_50 [4];
  
  iVar1 = 5000;
  if (9999 < (int)param_1[0xc]) {
    iVar1 = (int)param_1[0xc] + -5000;
  }
  *(int *)(param_1 + 0x2b) = iVar1;
  lVar3 = DAT_71052ac580;
  lVar2 = param_1[0x2d];
  plVar5 = FUN_71000bb680();
  param_1[0x2c] = *(long *)(lVar3 + 0x30) + *plVar5 * (long)(int)lVar2;
  uVar4 = FUN_7100193110(DAT_71052adfc0);
  FUN_71001a16d0((long)param_1,uVar4,0);
  if ((param_2 & 1) == 0) {
    FUN_71001a2c80(aiStack_50,param_1,(uint)*(byte *)((long)param_1 + 0x86),(long)param_1 + 0xc5,
                   (undefined4 *)(param_1 + 0x1d),(undefined4 *)((long)param_1 + 0xec),0);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  param_1[8] = (long)"NexProcessHostMigrationJob::NexSendRankDecision";
  *(byte *)(param_1 + 0x3f) = param_2 & 1;
  param_1[6] = (long)FUN_7100110480;
  param_1[7] = 0;
  return 1;
}

