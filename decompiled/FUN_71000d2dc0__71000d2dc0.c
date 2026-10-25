// addr:      71000d2dc0
// offset:    0xd2dc0
// name:      FUN_71000d2dc0
// mangled:   
// signature: undefined FUN_71000d2dc0(void)


undefined8 FUN_71000d2dc0(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  char *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    puVar2 = FUN_71000c0860();
    lVar1 = DAT_71052ac580;
    if (*(char *)((long)puVar2 + 3) == '\0') {
      plVar3 = FUN_71000bb680();
      *(long *)(param_1 + 0x60) = *(long *)(lVar1 + 0x30) + *plVar3 * 30000;
      FUN_71000c4e70(aiStack_38,DAT_71052acd90);
      FUN_71000bcf30((int *)(param_1 + 0x68),aiStack_38);
      if (*(int *)(param_1 + 0x68) == 0) {
        *(code **)(param_1 + 0x30) = FUN_71000d2fb0;
        pcVar4 = "NexNatServerAddressResolveJob::StepRequestRelayServerSetting";
        goto LAB_71000d2e88;
      }
    }
    else {
      aiStack_38[0] = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x68),aiStack_38);
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000d2f00;
  pcVar4 = "NexNatServerAddressResolveJob::StepComplete";
LAB_71000d2e88:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return 6;
}

