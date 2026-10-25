// addr:      71000f06a0
// offset:    0xf06a0
// name:      FUN_71000f06a0
// mangled:   
// signature: undefined FUN_71000f06a0(void)


undefined8 FUN_71000f06a0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) {
    plVar4 = (long *)(param_1 + 0x80);
    bVar3 = FUN_7100160340((long)plVar4);
    if ((((bVar3 & 1) == 0) && (*(char *)(param_1 + 0x78) != '\0')) ||
       ((bVar3 = FUN_7100160350((long)plVar4), (bVar3 & 1) == 0 &&
        (*(char *)(param_1 + 0x78) != '\0')))) {
      FUN_71000c5ad0(DAT_71052acd90,plVar4,1);
      *(code **)(param_1 + 0x30) = FUN_71000f09f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::ResolveCurrentAddress";
      return 0;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000f0790;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
  iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
  iVar2 = *(int *)(DAT_71052acd90 + 0xb8);
  plVar4 = FUN_71000bb680();
  lVar5 = *plVar4;
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  *(long *)(param_1 + 0x100) = lStack_28 + lVar5 * ((long)iVar2 + (long)iVar1);
  return 0;
}

