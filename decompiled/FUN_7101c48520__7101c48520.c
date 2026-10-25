// addr:      7101c48520
// offset:    0x1c48520
// name:      FUN_7101c48520
// mangled:   
// signature: undefined __cdecl FUN_7101c48520(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c48520(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 1;
    cVar3 = *(char *)(param_1 + 0x102);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x102);
  }
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(*(long *)(param_1 + 0xe8) + 0x254);
    if (*(uint *)(param_1 + 0xf0) != uVar1) {
      *(uint *)(param_1 + 0xf0) = uVar1;
      FUN_7103776910(&local_40,param_1 + 0xd8,(long ****)"set_txt_help_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      switch(uVar1 & 0xff) {
      case 1:
        pcVar5 = "mnu_while_wait_await_anyone_help_single";
        break;
      case 2:
        pcVar5 = "mnu_while_wait_await_anyone_help_double";
        break;
      case 3:
        pcVar5 = "mnu_while_wait_await_anyone_help_vip";
        break;
      case 4:
        pcVar5 = "mnu_while_wait_await_anyone_help_tournament";
        break;
      default:
        pcVar5 = "";
      }
      FUN_710377a120((long)&local_40,pcVar5,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar4 = local_38;
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    if (((uVar1 == 3) && (*(char *)(*(long *)(param_2 + 8) + 0x4aa) != '\0')) &&
       ((*(byte *)(*(long *)(param_2 + 8) + 0x1b0) >> 1 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0x4dffff1a9696306d;
      *(undefined1 *)(param_1 + 0x100) = 1;
      if (0x12 < *(uint *)(param_1 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 3;
    }
    else {
      iVar2 = *(int *)(*(long *)(param_1 + 0xe8) + 0x25c);
      if (iVar2 == -1) {
        if (*(char *)(*(long *)(param_1 + 0xe8) + 0x280) != '\0') {
          *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
          *(undefined1 *)(param_1 + 0x103) = 1;
        }
      }
      else {
        *(undefined1 *)(*(long *)(param_2 + 8) + 0x4aa) = 0;
        *(char *)(param_1 + 0x102) = (char)iVar2;
      }
    }
  }
  return;
}

