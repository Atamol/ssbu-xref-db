// addr:      7100105b50
// offset:    0x105b50
// name:      FUN_7100105b50
// mangled:   
// signature: uint __cdecl FUN_7100105b50(long param_1)


uint FUN_7100105b50(long param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_48[0] = 0xc406;
    break;
  case 6:
    local_48[0] = 0xa471;
    break;
  case 7:
    local_48[0] = 0xc420;
    break;
  case 8:
    local_48[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      local_48[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
      local_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
      FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
      *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::UnregisterGathering";
      uVar2 = 5;
      *(code **)(param_1 + 0x30) = FUN_7100105660;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_7100105c64;
    }
    uVar6 = *(undefined8 *)(DAT_71052adb38 + 8);
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    uVar6 = FUN_71000ed820(uVar6,local_48);
    uVar2 = (uint)uVar6;
    if (uVar2 == 0) {
      pcVar4 = FUN_710013d410;
      pcVar5 = "CreateSessionJob::MeshStartup";
    }
    else {
      if (uVar2 != 1) goto LAB_7100105c64;
      local_58[0] = 0x6436;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
      if (local_48[0] != local_58[0]) {
        local_68[0] = 0x6434;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_68 | 4))
        ;
        local_78[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_78);
        if (local_48[0] != local_68[0]) {
          local_78[0] = 0x6c05;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_78 | 4));
          local_88[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
          if (local_48[0] != local_78[0]) {
            local_88[0] = 0x10c08;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_88 | 4));
            local_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_38);
            if (local_48[0] != local_88[0]) {
              local_58[0] = 0xc406;
              pEVar7 = (ErrorResultVariant *)((ulong)local_58 | 4);
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
              local_68[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)local_68);
              if (local_48[0] == local_58[0]) {
                FUN_71000bce50(aiStack_98,local_48);
                iVar1 = 3;
                piVar3 = aiStack_98;
              }
              else {
                local_58[0] = 0xa471;
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                local_68[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)local_68);
                if (local_48[0] == local_58[0]) {
                  FUN_71000bce50(aiStack_a8,local_48);
                  iVar1 = 4;
                  piVar3 = aiStack_a8;
                }
                else {
                  local_58[0] = 0xc420;
                  pEVar7 = (ErrorResultVariant *)((ulong)local_58 | 4);
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                  local_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)local_68);
                  if (local_48[0] == local_58[0]) {
                    FUN_71000bce50(aiStack_b8,local_48);
                    uVar2 = 5;
                    FUN_710013dae0(param_1,5,8,aiStack_b8);
                    FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
                    pcVar4 = FUN_710013d590;
                    pcVar5 = "NexMatchCreateSessionJob::CompleteFailure";
                    goto LAB_7100105ddc;
                  }
                  local_58[0] = 0xc421;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar7);
                  local_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar7,(Result *)local_68);
                  if (local_48[0] != local_58[0]) {
                    local_58[0] = 0x10c08;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)local_58 | 4));
                    local_68[0] = 0;
                    nn::err::ErrorResultVariant::operator=
                              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
                    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
                    goto LAB_7100105db0;
                  }
                  FUN_71000bce50(aiStack_c8,local_48);
                  iVar1 = 6;
                  piVar3 = aiStack_c8;
                }
              }
              FUN_710013dae0(param_1,iVar1,8,piVar3);
              FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
              pcVar4 = FUN_710013d590;
              uVar2 = 5;
              pcVar5 = "NexMatchCreateSessionJob::CompleteFailure";
              goto LAB_7100105ddc;
            }
          }
        }
      }
LAB_7100105db0:
      FUN_71000bcf30((int *)(param_1 + 0x90),(int *)((long)register0x00000008 + -0x48));
      pcVar4 = FUN_7100105660;
      uVar2 = 5;
      pcVar5 = "NexMatchCreateSessionJob::UnregisterGathering";
    }
LAB_7100105ddc:
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar5;
    goto LAB_7100105c64;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  FUN_71000bcf30((int *)(param_1 + 0x90),local_48);
  uVar2 = 0;
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchCreateSessionJob::CompleteFailure";
LAB_7100105c64:
  return uVar2 & 0xff;
}

