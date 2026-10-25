// addr:      710013d410
// offset:    0x13d410
// name:      FUN_710013d410
// mangled:   
// signature: undefined FUN_710013d410(void)


ulong FUN_710013d410(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
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
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x20))
              (aiStack_38,*(long **)(DAT_71052adb38 + 8),
               *(undefined8 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168));
    if (aiStack_38[0] != 0) {
      FUN_71000bce50(aiStack_48,aiStack_38);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1,aiStack_48);
      uVar6 = uVar3 & 0xffffff00;
      uVar5 = uVar3 & 0xffff0000;
      goto LAB_710013d51c;
    }
    *(undefined1 *)(lVar1 + 0x15d) = 1;
    lVar4 = FUN_7100193a50(DAT_71052adfc0);
    FUN_71001aea30(lVar4,(uint)*(ushort *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 2 + 0x15e));
    param_1[6] = (long)FUN_710013d6f0;
    param_1[7] = 0;
    pcVar7 = "CreateSessionJob::CreateMesh";
    goto LAB_710013d518;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x12),aiStack_38);
  param_1[6] = (long)FUN_710013d590;
  param_1[7] = 0;
  pcVar7 = "nn::pia::session::CreateSessionJob::CompleteFailure";
LAB_710013d518:
  uVar6 = 0;
  uVar5 = 0;
  uVar3 = 0;
  param_1[8] = (long)pcVar7;
LAB_710013d51c:
  return uVar5 | uVar3 & 0xff | uVar6 & 0xff00;
}

