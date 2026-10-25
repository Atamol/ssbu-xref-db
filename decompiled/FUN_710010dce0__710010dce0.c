// addr:      710010dce0
// offset:    0x10dce0
// name:      FUN_710010dce0
// mangled:   
// signature: undefined FUN_710010dce0(void)


undefined8 FUN_710010dce0(long param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
  case 7:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar2 = aiStack_70;
    break;
  case 8:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,aiStack_50);
    piVar2 = aiStack_80;
    break;
  default:
    puVar5 = *(undefined4 **)(param_1 + 0x58);
    if ((puVar5 == (undefined4 *)0x0) || (*(char *)(puVar5 + 10) == '\0')) {
      pcVar4 = (char *)(param_1 + 0xb8);
      if (*pcVar4 == '\0') {
        pcVar4 = (char *)(param_1 + 0xb9);
        if (*pcVar4 == '\0') {
          pcVar4 = (char *)(param_1 + 0xba);
          if (*pcVar4 == '\0') {
            pcVar4 = (char *)(param_1 + 0xbb);
            if (*pcVar4 == '\0') {
              pcVar4 = (char *)(param_1 + 0xbc);
              if (*pcVar4 == '\0') {
                pcVar4 = (char *)(param_1 + 0xbd);
                if (*pcVar4 == '\0') {
                  *(code **)(param_1 + 0x30) = FUN_71001512e0;
                  *(undefined8 *)(param_1 + 0x38) = 0;
                  *(char **)(param_1 + 0x40) = "UpdateSessionSettingJob::CompleteProcess";
                  return 0;
                }
                uVar3 = 5;
              }
              else {
                uVar3 = 4;
              }
            }
            else {
              uVar3 = 3;
            }
          }
          else {
            uVar3 = 2;
          }
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
      *pcVar4 = '\0';
      FUN_71000e1750(aiStack_50,*(long *)(param_1 + 0x98),(int *)(param_1 + 0x60),
                     *(undefined4 *)(param_1 + 0x90),uVar3,
                     *(undefined4 *)(param_1 + (ulong)uVar3 * 4 + 0xa0));
      if (aiStack_50[0] == 0) {
        *(char **)(param_1 + 0x40) = "NexMatchUpdateSessionSettingJob::WaitModifyAttribute";
        *(code **)(param_1 + 0x30) = FUN_710010e460;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_a0,aiStack_50);
    }
    else {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_90,aiStack_50);
      piVar2 = aiStack_90;
    }
  }
  FUN_71000b41f0(puVar5,piVar2);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

