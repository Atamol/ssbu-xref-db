// addr:      710013e7c0
// offset:    0x13e7c0
// name:      FUN_710013e7c0
// mangled:   
// signature: undefined FUN_710013e7c0(void)


ulong FUN_710013e7c0(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  switch(iVar2) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    if (*(char *)((long)param_1 + 0x11c) != '\0') {
      aiStack_38[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_48,aiStack_38);
      pcVar5 = *(code **)(*param_1 + 0x78);
      piVar4 = aiStack_48;
LAB_710013e930:
      uVar3 = (*pcVar5)(param_1,piVar4);
      uVar7 = uVar3 & 0xffffff00;
      uVar6 = uVar3 & 0xffff0000;
      goto LAB_710013e8c0;
    }
    *(undefined2 *)((long)param_1 + 0x11a) = 0;
    *(undefined2 *)((long)param_1 + 0x11d) = 0;
    (**(code **)(**(long **)(lVar1 + 8) + 0x20))
              (aiStack_38,*(long **)(lVar1 + 8),
               *(undefined8 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168));
    if (aiStack_38[0] != 0) {
      FUN_71000bce50(aiStack_58,aiStack_38);
      pcVar5 = *(code **)(*param_1 + 0x78);
      piVar4 = aiStack_58;
      goto LAB_710013e930;
    }
    *(undefined1 *)(lVar1 + 0x15d) = 1;
    pcVar8 = "JoinSessionJob::JoinMesh";
    param_1[6] = (long)FUN_710013ec50;
    param_1[7] = 0;
    goto LAB_710013e8bc;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  pcVar8 = "nn::pia::session::JoinSessionJob::CompleteFailure";
LAB_710013e8bc:
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  param_1[8] = (long)pcVar8;
LAB_710013e8c0:
  return uVar6 | uVar3 & 0xff | uVar7 & 0xff00;
}

