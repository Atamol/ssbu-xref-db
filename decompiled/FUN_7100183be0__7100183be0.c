// addr:      7100183be0
// offset:    0x183be0
// name:      FUN_7100183be0
// mangled:   
// signature: undefined FUN_7100183be0(void)


undefined8 FUN_7100183be0(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    bVar2 = FUN_71001813d0(*(long *)(param_1 + 0x88));
    if (bVar2) {
      lStack_28 = 0;
      FUN_71000bb5d0(&lStack_28);
      lVar6 = lStack_28 - *(long *)(param_1 + 0x78);
      plVar3 = FUN_71000bb680();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = lVar6 / *plVar3;
      }
      if (lVar1 < 0x2711) {
        return 5;
      }
    }
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
    pcVar5 = FUN_7100183cc0;
    pcVar4 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    pcVar5 = FUN_7100183b90;
    pcVar4 = "LocalDestroyNetworkJob::WaitForCancel";
  }
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

