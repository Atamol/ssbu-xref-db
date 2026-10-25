// addr:      7101d85720
// offset:    0x1d85720
// name:      FUN_7101d85720
// mangled:   
// signature: undefined __cdecl FUN_7101d85720(uint * param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d85720(uint *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  char *pcVar4;
  char local_78 [64];
  char *local_38 [5];
  
  local_38[0] = "series";
  local_38[1] = "playlist";
  local_38[2] = "voice";
  local_38[3] = "my_music";
  local_38[4] = "select";
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar4 = local_38[(int)param_2];
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    while( true ) {
      pcVar1 = pcVar4 + uVar3;
      cVar2 = *pcVar1;
      if (cVar2 == '\0') break;
      local_78[uVar3] = cVar2;
      if (0x3e < (int)uVar3 + 1U) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      cVar2 = pcVar1[1];
      if (cVar2 == '\0') {
        uVar3 = uVar3 + 1;
        break;
      }
      local_78[uVar3 + 1] = cVar2;
      uVar3 = uVar3 + 2;
    }
  }
  local_78[uVar3 & 0xffffffff] = '\0';
  if (local_78[0] != '\0') {
    pcVar4 = local_78;
    do {
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
  }
  FUN_71003a4ca0(param_1,"mnu_sound_test_%s_title",local_78,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  return;
}

