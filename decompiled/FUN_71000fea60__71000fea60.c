// addr:      71000fea60
// offset:    0xfea60
// name:      FUN_71000fea60
// mangled:   
// signature: undefined FUN_71000fea60(void)


undefined8 FUN_71000fea60(long *param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar1 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar1 != 8) {
      piVar2 = (int *)param_1[0xb];
      if ((piVar2 != (int *)0x0) && ((char)piVar2[10] != '\0')) {
        if (2 < *piVar2 - 2U) {
          FUN_71000b4260(piVar2);
        }
        param_1[0xb] = 0;
        FUN_7100140910(param_1);
        return 1;
      }
      lVar6 = **(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                         0x168);
      if (*(char *)((long)param_1 + 0x263) == '\0') {
        uVar3 = (**(code **)(lVar6 + 0x68))();
      }
      else {
        uVar3 = (**(code **)(lVar6 + 0x78))();
      }
      if ((uVar3 & 1) == 0) {
        return 5;
      }
      FUN_7100149290(DAT_71052adb38,0);
      FUN_7100149250(DAT_71052adb38,0);
      lVar6 = DAT_71052ac580;
      plVar4 = FUN_71000bb680();
      param_1[0x41] = *(long *)(lVar6 + 0x30) + *plVar4 * 5000;
      pcVar5 = "NexMatchJointSessionJob::WaitMeshRestart";
      param_1[6] = (long)FUN_71000fe620;
      param_1[7] = 0;
      goto LAB_71000feb48;
    }
    aiStack_40[0] = 0xc421;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar5 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000feb48:
  param_1[8] = (long)pcVar5;
  return 0;
}

