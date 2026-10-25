// addr:      7100101a30
// offset:    0x101a30
// name:      FUN_7100101a30
// mangled:   
// signature: undefined FUN_7100101a30(void)


undefined8 FUN_7100101a30(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int aiStack_140 [62];
  undefined4 auStack_48 [2];
  
  lVar1 = DAT_71052adb38;
  lVar5 = *(long *)(DAT_71052ac580 + 0x30);
  lVar6 = *(long *)(param_1 + 0x1c8);
  plVar3 = FUN_71000bb680();
  if (lVar5 - lVar6 < *plVar3 * 40000) {
    lVar6 = *(long *)(param_1 + 0xb0);
    lVar5 = param_1 + 0xa8;
    if (lVar6 == lVar5) {
      uVar7 = FUN_7100150600(*(long *)(lVar1 + 0xb8),(long)aiStack_140,0);
    }
    else {
      uVar4 = 0;
      do {
        uVar7 = (ulong)uVar4;
        uVar4 = uVar4 + 1;
        *(undefined8 *)(aiStack_140 + uVar7 * 2) = *(undefined8 *)(lVar6 + 0x10);
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != lVar5);
      uVar7 = FUN_7100150600(*(long *)(lVar1 + 0xb8),(long)aiStack_140,uVar4);
    }
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0xb0);
      while( true ) {
        if (lVar6 == lVar5) {
          *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::SendCompletionInvitation";
          *(code **)(param_1 + 0x30) = FUN_71001020a0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined4 *)(param_1 + 0x230) = 0x14;
          return 0;
        }
        bVar2 = FUN_71001507f0(*(long *)(lVar1 + 0xb8),*(long *)(lVar6 + 0x10));
        if (!bVar2) break;
        lVar6 = *(long *)(lVar6 + 8);
      }
      return 5;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = 0x23;
    aiStack_140[0] = 0x6c59;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_140 | 4));
    auStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_140 | 4),(Result *)auStack_48);
    FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_140);
    FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                            + 0x168));
    *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
    *(code **)(param_1 + 0x30) = FUN_71000f7210;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return 5;
}

