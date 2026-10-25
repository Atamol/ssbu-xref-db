// addr:      7101bcd210
// offset:    0x1bcd210
// name:      FUN_7101bcd210
// mangled:   
// signature: undefined __cdecl FUN_7101bcd210(int * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcd210(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_1[0x44];
  if (iVar2 == 2) {
    pcVar1 = "mel_mockbattle_tournament_ok";
    if (*param_1 != 1) {
      pcVar1 = (char *)0x0;
    }
    if (*param_1 == 0) {
      pcVar1 = "mel_mockbattle_state_mel_start";
    }
    else {
LAB_7101bcd274:
      if (pcVar1 == (char *)0x0) goto LAB_7101bcd29c;
    }
  }
  else if (iVar2 == 1) {
    pcVar1 = "mel_mockbattle_state_soon";
  }
  else {
    if (iVar2 != 0) goto LAB_7101bcd29c;
    pcVar1 = "mel_mockbattle_tournament_txt_search";
    if (*param_1 != 1) {
      pcVar1 = (char *)0x0;
    }
    if (*param_1 != 0) goto LAB_7101bcd274;
    pcVar1 = "mel_mockbattle_state_wait";
  }
  FUN_710377a120((long)(param_1 + 0x36),pcVar1,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar2 = param_1[0x44];
LAB_7101bcd29c:
  param_1[0x45] = iVar2;
  if (0 < param_1[0x2f]) {
    param_1[0x2f] = param_1[0x2f] + -1;
  }
  return;
}

