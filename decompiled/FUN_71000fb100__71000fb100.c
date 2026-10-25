// addr:      71000fb100
// offset:    0xfb100
// name:      FUN_71000fb100
// mangled:   
// signature: undefined FUN_71000fb100(void)


undefined8 FUN_71000fb100(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int aiStack_178 [4];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int aiStack_70 [4];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    uVar9 = 0xc406;
    break;
  case 6:
    uVar9 = 0xa471;
    break;
  case 7:
    uVar9 = 0xc420;
    break;
  case 8:
    uVar9 = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)&uStack_168,DAT_71052adfc0);
    if ((int)uStack_168 == 0) {
      iVar3 = FUN_7100146ba0(DAT_71052adb38);
      lVar1 = DAT_71052adb38;
      if (iVar3 != 4) {
        if (*(char *)((long)param_1 + 0xfb) != '\0') {
          FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
          uVar7 = 6;
          goto LAB_71000fb1d0;
        }
        piVar4 = (int *)param_1[0xb];
        if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
          if (2 < *piVar4 - 2U) {
            FUN_71000b4260(piVar4);
          }
          param_1[0xb] = 0;
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          FUN_7100140910(param_1);
          return 1;
        }
        lVar10 = *(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                          0x168);
        aiStack_70[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_70 | 4));
        uStack_168 = (ulong)uStack_168._4_4_ << 0x20;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)&uStack_168);
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_168 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        plVar12 = (long *)param_1[0x16];
        if (plVar12 == param_1 + 0x15) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            if ((plVar12[2] != param_1[0x14]) &&
               (bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),plVar12[2]), bVar2)) {
              (&uStack_168)[uVar11] = plVar12[2];
              uVar11 = uVar11 + 1;
            }
            plVar12 = (long *)plVar12[1];
          } while (plVar12 != param_1 + 0x15);
        }
        FUN_71000d9470(aiStack_178,lVar10,(int *)(param_1 + 0xc),&uStack_168,(ushort)uVar11,
                       *(undefined4 *)
                        (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
        FUN_71000bcf30(aiStack_70,aiStack_178);
        if (aiStack_70[0] == 0) {
          pcVar8 = FUN_71000fb990;
          pcVar6 = "NexMatchJointSessionJob::WaitRandomMatchmake";
        }
        else {
          *(undefined1 *)(param_1 + 0x26) = 0x10;
          FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_70);
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          pcVar8 = FUN_71000f7210;
          pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
        }
        uVar5 = 5;
        param_1[6] = (long)pcVar8;
        param_1[7] = 0;
        goto LAB_71000fb27c;
      }
    }
    uStack_168 = CONCAT44(uStack_168._4_4_,0x6c59);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_168 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_168 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)&uStack_168);
    uVar7 = 4;
LAB_71000fb1d0:
    *(undefined1 *)(param_1 + 0x26) = uVar7;
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  uStack_168 = CONCAT44(uStack_168._4_4_,uVar9);
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_168 | 4));
  aiStack_70[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&uStack_168 | 4),(Result *)aiStack_70);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)&uStack_168);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar5 = 0;
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fb27c:
  param_1[8] = (long)pcVar6;
  return uVar5;
}

