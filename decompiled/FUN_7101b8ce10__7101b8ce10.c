// addr:      7101b8ce10
// offset:    0x1b8ce10
// name:      FUN_7101b8ce10
// mangled:   
// signature: undefined __cdecl FUN_7101b8ce10(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b8ce10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    if (*(char *)(param_1 + 0x128) != '\0') {
      FUN_7103776910(&local_40,param_1 + 8,(long ****)"set_rep_pic_mov",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_38;
      if (((*(long **)(local_38 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
         (lVar1 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar1 != 0)) {
        param_3 = 0;
        FUN_710379e9c0(*(long **)(local_38 + 8),lVar1,0);
      }
      local_40 = &PTR_FUN_710523d9a8;
      local_38 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    FUN_71037780e0(&local_40,param_1 + 8,(long ****)"next_mov_fade_in",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_40);
    uVar3 = local_38;
    local_40 = &PTR_FUN_710523d9e8;
    local_38 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710377a280(param_1 + 0x28,(byte *)"mnu_replay_play_next",1);
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if (((lVar1 == 0) ||
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x710436c4ef), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
      FUN_71037780e0(&local_40,param_1 + 0x18,(long ****)"turn_loop",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377aee0(0x3f800000,(long)&local_40);
      uVar3 = local_38;
      local_40 = &PTR_FUN_710523d9e8;
      local_38 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      if (0x12 < *(uint *)(param_1 + 0x10c)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x10c) * 4 + 0xc0) = 2;
    }
  }
  return;
}

