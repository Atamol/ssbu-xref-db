// addr:      7101b4afe0
// offset:    0x1b4afe0
// name:      FUN_7101b4afe0
// mangled:   
// signature: undefined __cdecl FUN_7101b4afe0(long param_1, undefined4 param_2)


void FUN_7101b4afe0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  switch(param_2) {
  case 0:
    lVar1 = param_1 + 0x1d8;
    break;
  case 1:
    lVar1 = param_1 + 0x1e8;
    break;
  case 2:
    lVar1 = param_1 + 0x1f8;
    break;
  case 3:
    lVar1 = param_1 + 0x208;
    break;
  case 4:
    lVar1 = param_1 + 0x218;
    break;
  case 5:
    lVar1 = param_1 + 0x228;
    break;
  case 6:
    lVar1 = param_1 + 0x278;
    break;
  case 7:
    lVar1 = param_1 + 0x238;
    break;
  case 8:
    lVar1 = param_1 + 0x288;
    break;
  case 9:
    lVar1 = param_1 + 0x298;
    break;
  case 10:
    lVar1 = param_1 + 600;
    break;
  default:
    return;
  case 0xc:
    lVar1 = param_1 + 0x268;
    break;
  case 0xd:
    goto LAB_7101b4b138;
  case 0xe:
    goto LAB_7101b4b138;
  case 0xf:
    goto LAB_7101b4b138;
  case 0x10:
    goto LAB_7101b4b138;
  case 0x11:
    goto LAB_7101b4b138;
  case 0x12:
    goto LAB_7101b4b138;
  case 0x13:
    goto LAB_7101b4b138;
  case 0x14:
LAB_7101b4b138:
    FUN_710377a280(param_1 + 0xa8,(byte *)"mel_info_stage_poke_stadium_defeated",1);
    lVar1 = param_1 + 0x248;
  }
  FUN_710377aee0(0x3f800000,lVar1);
  return;
}

