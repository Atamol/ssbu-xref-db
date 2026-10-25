// addr:      7100188180
// offset:    0x188180
// name:      FUN_7100188180
// mangled:   
// signature: undefined FUN_7100188180(void)


undefined8 FUN_7100188180(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar5 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
  }
  else {
    bVar2 = FUN_71000beb20(lVar5 + 0x10);
    if (!bVar2) {
      pcVar7 = FUN_71001882c0;
      uVar4 = 0;
      pcVar6 = "DisconnectStationJob::DisconnectionSucceeded";
      goto LAB_7100188228;
    }
    FUN_710019eea0(*(long **)(*(long *)(param_1 + 0x68) + 0x98),*(long *)(param_1 + 0x68) + 0x10);
  }
  lVar5 = DAT_71052ac580;
  iVar1 = *(int *)(param_1 + 0x78);
  plVar3 = FUN_71000bb680();
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar8 = *plVar3;
  uVar4 = 5;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(long *)(param_1 + 0x70) = lVar5 + lVar8 * iVar1;
  pcVar7 = FUN_71001883b0;
  pcVar6 = "DisconnectStationJob::WaitForDisconnection";
LAB_7100188228:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

