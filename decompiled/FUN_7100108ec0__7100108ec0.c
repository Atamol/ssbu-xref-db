// addr:      7100108ec0
// offset:    0x108ec0
// name:      FUN_7100108ec0
// mangled:   
// signature: undefined FUN_7100108ec0(void)


uint FUN_7100108ec0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  ErrorResultVariant *pEVar6;
  undefined8 uVar7;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    uVar7 = *(undefined8 *)(DAT_71052adb38 + 8);
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    uVar7 = FUN_71000ed820(uVar7,aiStack_50);
    uVar2 = (uint)uVar7;
    uVar3 = FUN_7100143730(param_1);
    if ((uVar3 & 1) != 0) {
      FUN_71000ed8e0(aiStack_60);
    }
    if (uVar2 == 0) {
      pcVar4 = FUN_7100142710;
      pcVar5 = "RandomMatchmakeJob::MeshStartup";
    }
    else {
      if (uVar2 != 1) goto LAB_7100108f74;
      aiStack_60[0] = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      aiStack_70[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
      if (aiStack_50[0] != aiStack_60[0]) {
        aiStack_70[0] = 0x6434;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_70 | 4));
        aiStack_80[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)aiStack_80);
        if (aiStack_50[0] != aiStack_70[0]) {
          aiStack_80[0] = 0x6c05;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_80 | 4));
          aiStack_90[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)aiStack_90);
          if (aiStack_50[0] != aiStack_80[0]) {
            aiStack_90[0] = 0x10c08;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_90 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_90 | 4),(Result *)auStack_38);
            if (aiStack_50[0] != aiStack_90[0]) {
              pEVar6 = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
              aiStack_60[0] = 0xc406;
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
              aiStack_70[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
              if (aiStack_50[0] == aiStack_60[0]) {
                FUN_71000bce50(aiStack_a0,aiStack_50);
                FUN_7100143c80(param_1,3,8,aiStack_a0);
                aiStack_60[0] = 0xc406;
              }
              else {
                aiStack_60[0] = 0xa471;
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
                aiStack_70[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
                if (aiStack_50[0] == aiStack_60[0]) {
                  FUN_71000bce50(aiStack_b0,aiStack_50);
                  FUN_7100143c80(param_1,4,8,aiStack_b0);
                  aiStack_60[0] = 0xa471;
                }
                else {
                  pEVar6 = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
                  aiStack_60[0] = 0xc420;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
                  aiStack_70[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
                  if (aiStack_50[0] == aiStack_60[0]) {
                    FUN_71000bce50(aiStack_c0,aiStack_50);
                    uVar2 = 5;
                    FUN_7100143c80(param_1,5,8,aiStack_c0);
                    aiStack_60[0] = 0xc420;
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
                    aiStack_70[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
                    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_60);
                    pcVar4 = FUN_71001429b0;
                    pcVar5 = "NexMatchRandomMatchmakeJob::CompleteFailure";
                    goto LAB_7100109108;
                  }
                  aiStack_60[0] = 0xc421;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
                  aiStack_70[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
                  if (aiStack_50[0] != aiStack_60[0]) {
                    aiStack_60[0] = 0x10c08;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
                    aiStack_70[0] = 0;
                    nn::err::ErrorResultVariant::operator=
                              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)aiStack_70);
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                    goto LAB_71001090dc;
                  }
                  FUN_71000bce50(aiStack_d0,aiStack_50);
                  FUN_7100143c80(param_1,6,8,aiStack_d0);
                  aiStack_60[0] = 0xc421;
                }
                pEVar6 = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
              }
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar6);
              aiStack_70[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar6,(Result *)aiStack_70);
              FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_60);
              pcVar4 = FUN_71001429b0;
              uVar2 = 5;
              pcVar5 = "NexMatchRandomMatchmakeJob::CompleteFailure";
              goto LAB_7100109108;
            }
          }
        }
      }
LAB_71001090dc:
      FUN_71000bcf30((int *)(param_1 + 0x6c),(int *)((long)register0x00000008 + -0x50));
      pcVar4 = FUN_71001082f0;
      uVar2 = 5;
      pcVar5 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    }
LAB_7100109108:
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar5;
    goto LAB_7100108f74;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
  uVar2 = 0;
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_7100108f74:
  return uVar2 & 0xff;
}

