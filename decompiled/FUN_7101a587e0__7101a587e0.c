// addr:      7101a587e0
// offset:    0x1a587e0
// name:      FUN_7101a587e0
// mangled:   
// signature: undefined __cdecl FUN_7101a587e0(long param_1, int param_2)


void FUN_7101a587e0(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  
  cVar1 = *(char *)(param_1 + 0xbe);
  if (*(char *)(param_1 + 0xbc) == '\x02') {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xbd) == '\x02';
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if ((param_2 == 2 || cVar1 == '\0') || (!bVar2)) {
    if (param_2 == 2 || cVar1 == '\0') {
      if (bVar2) {
        pcVar4 = "handi_on";
      }
      else {
        FUN_7103778300(0x3f800000,lVar3,0x710433a880);
        lVar3 = *(long *)(param_1 + 0x18);
        pcVar4 = "handi_off";
      }
    }
    else {
      pcVar4 = "sp_on";
    }
  }
  else {
    pcVar4 = "sp_handi_on";
  }
  FUN_7103778300(0x3f800000,lVar3,(long)pcVar4);
  if (*(char *)(param_1 + 0xbc) == '\x02') {
    bVar2 = true;
  }
  else {
    bVar2 = *(char *)(param_1 + 0xbd) != '\0';
  }
  if ((param_2 != 2 && cVar1 != '\0') && bVar2) {
    pcVar4 = "set_1_btn_s_h";
  }
  else if (bVar2) {
    pcVar4 = "set_1_btn_h";
  }
  else if (param_2 == 2 || cVar1 == '\0') {
    pcVar4 = "set_1";
  }
  else {
    pcVar4 = "set_1_btn_s";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),(long)pcVar4);
  return;
}

