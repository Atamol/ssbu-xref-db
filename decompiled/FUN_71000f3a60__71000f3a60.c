// addr:      71000f3a60
// offset:    0xf3a60
// name:      FUN_71000f3a60
// mangled:   
// signature: undefined FUN_71000f3a60(void)


uint FUN_71000f3a60(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar3 & 1) != 0) {
      FUN_71000ed8e0(aiStack_48);
    }
    uVar6 = *(undefined8 *)(DAT_71052adb38 + 8);
    aiStack_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    aiStack_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
    uVar6 = FUN_71000ed820(uVar6,aiStack_48);
    uVar2 = (uint)uVar6;
    if (uVar2 == 0) {
      pcVar4 = FUN_710013e7c0;
      pcVar5 = "JoinSessionJob::MeshStartup";
    }
    else {
      if (uVar2 != 1) goto LAB_71000f3b10;
      aiStack_58[0] = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4))
      ;
      aiStack_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
      if (aiStack_48[0] != aiStack_58[0]) {
        aiStack_68[0] = 0x6434;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
        aiStack_78[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)aiStack_78);
        if (aiStack_48[0] != aiStack_68[0]) {
          aiStack_78[0] = 0x6c05;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_78 | 4));
          aiStack_88[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
          if (aiStack_48[0] != aiStack_78[0]) {
            aiStack_88[0] = 0x10c08;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_88 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_88 | 4),(Result *)auStack_38);
            if (aiStack_48[0] != aiStack_88[0]) {
              pEVar7 = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
              aiStack_58[0] = 0xc406;
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
              aiStack_68[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
              if (aiStack_48[0] == aiStack_58[0]) {
                FUN_71000bce50(aiStack_98,aiStack_48);
                FUN_710013f710(param_1,3,8,aiStack_98);
                aiStack_58[0] = 0xc406;
              }
              else {
                aiStack_58[0] = 0xa471;
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                aiStack_68[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
                if (aiStack_48[0] == aiStack_58[0]) {
                  FUN_71000bce50(aiStack_a8,aiStack_48);
                  FUN_710013f710(param_1,4,8,aiStack_a8);
                  aiStack_58[0] = 0xa471;
                }
                else {
                  pEVar7 = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
                  aiStack_58[0] = 0xc420;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                  aiStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
                  if (aiStack_48[0] == aiStack_58[0]) {
                    FUN_71000bce50(aiStack_b8,aiStack_48);
                    uVar2 = 5;
                    FUN_710013f710(param_1,5,8,aiStack_b8);
                    aiStack_58[0] = 0xc420;
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                    aiStack_68[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
                    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_58);
                    pcVar4 = FUN_710013e970;
                    pcVar5 = "NexMatchJoinSessionJob::CompleteFailure";
                    goto LAB_71000f3cac;
                  }
                  aiStack_58[0] = 0xc421;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                  aiStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
                  if (aiStack_48[0] != aiStack_58[0]) goto LAB_71000f3c78;
                  FUN_71000bce50(aiStack_c8,aiStack_48);
                  FUN_710013f710(param_1,6,8,aiStack_c8);
                  aiStack_58[0] = 0xc421;
                }
                pEVar7 = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
              }
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
              aiStack_68[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)aiStack_68);
              FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_58);
              pcVar4 = FUN_710013e970;
              uVar2 = 5;
              pcVar5 = "NexMatchJoinSessionJob::CompleteFailure";
              goto LAB_71000f3cac;
            }
          }
        }
      }
LAB_71000f3c78:
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_48);
      pcVar4 = FUN_71000f2880;
      uVar2 = 5;
      pcVar5 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    }
LAB_71000f3cac:
    param_1[6] = (long)pcVar4;
    param_1[7] = 0;
    param_1[8] = (long)pcVar5;
    goto LAB_71000f3b10;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_48);
  uVar2 = 0;
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  param_1[8] = (long)"nex::NexMatchJoinSessionJob::CompleteFailure";
LAB_71000f3b10:
  return uVar2 & 0xff;
}

