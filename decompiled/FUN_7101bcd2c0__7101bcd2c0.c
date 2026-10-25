// addr:      7101bcd2c0
// offset:    0x1bcd2c0
// name:      FUN_7101bcd2c0
// mangled:   
// signature: undefined __cdecl FUN_7101bcd2c0(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcd2c0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = param_1[0x45];
  if (iVar1 == 2) {
    pcVar2 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar2 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar2 = "mel_mockbattle_state_mel_start";
      goto LAB_7101bcd340;
    }
LAB_7101bcd324:
    if (pcVar2 != (char *)0x0) goto LAB_7101bcd340;
  }
  else {
    if (iVar1 == 1) {
      pcVar2 = "mel_mockbattle_state_soon";
    }
    else {
      if (iVar1 != 0) goto LAB_7101bcd348;
      pcVar2 = "mel_mockbattle_tournament_txt_search";
      if (*param_1 != 1) {
        pcVar2 = (char *)0x0;
      }
      if (*param_1 != 0) goto LAB_7101bcd324;
      pcVar2 = "mel_mockbattle_state_wait";
    }
LAB_7101bcd340:
    FUN_710377a120((long)(param_1 + 0x36),pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101bcd348:
  iVar1 = param_1[0x44];
  if (iVar1 == 2) {
    pcVar2 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar2 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar2 = "mel_mockbattle_state_mel_start";
    }
    else {
LAB_7101bcd39c:
      if (pcVar2 == (char *)0x0) goto LAB_7101bcd3c0;
    }
  }
  else if (iVar1 == 1) {
    pcVar2 = "mel_mockbattle_state_soon";
  }
  else {
    if (iVar1 != 0) goto LAB_7101bcd3c0;
    pcVar2 = "mel_mockbattle_tournament_txt_search";
    if (*param_1 != 1) {
      pcVar2 = (char *)0x0;
    }
    if (*param_1 != 0) goto LAB_7101bcd39c;
    pcVar2 = "mel_mockbattle_state_wait";
  }
  FUN_710377a120((long)(param_1 + 0x3a),pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101bcd3c0:
  FUN_710377aee0(0x3f800000,(long)(param_1 + 0x40));
  param_1[0x45] = param_1[0x44];
  if (0 < param_1[0x2f]) {
    param_1[0x2f] = param_1[0x2f] + -1;
  }
  return;
}

