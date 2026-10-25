// addr:      71019f4420
// offset:    0x19f4420
// name:      FUN_71019f4420
// mangled:   
// signature: undefined __cdecl FUN_71019f4420(long param_1)


void FUN_71019f4420(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar6;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  char *local_90 [6];
  
  FUN_71019f4f00(param_1,*(uint *)(param_1 + 0x368));
  if (*(uint *)(param_1 + 0x370) < 3) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1c8),
                   (long)(&PTR_s_btn_icon_0_71050a82e8)[*(uint *)(param_1 + 0x370)]);
    local_90[0] = "hiragana";
    local_90[1] = "katakana";
    local_90[2] = "alphabet";
    local_90[3] = "european";
    local_90[4] = "russian";
    local_90[5] = "number";
    if (*(uint *)(param_1 + 0x36c) < 6) {
      FUN_710377a120(param_1 + 0x210,"mel_chara_select_key_%s_%02d",
                     local_90[*(uint *)(param_1 + 0x36c)],0,in_x4,in_x5,in_x6,in_x7);
      local_90[0] = "hiragana";
      local_90[1] = "katakana";
      local_90[2] = "alphabet";
      local_90[3] = "european";
      local_90[4] = "russian";
      local_90[5] = "number";
      if (*(uint *)(param_1 + 0x36c) < 6) {
        FUN_710377a120(param_1 + 0x220,"mel_chara_select_key_%s_%02d",
                       local_90[*(uint *)(param_1 + 0x36c)],1,in_x4,in_x5,in_x6,in_x7);
        local_90[0] = "hiragana";
        local_90[1] = "katakana";
        local_90[2] = "alphabet";
        local_90[3] = "european";
        local_90[4] = "russian";
        local_90[5] = "number";
        if (*(uint *)(param_1 + 0x36c) < 6) {
          FUN_710377a120(param_1 + 0x230,"mel_chara_select_key_%s_%02d",
                         local_90[*(uint *)(param_1 + 0x36c)],2,in_x4,in_x5,in_x6,in_x7);
          local_90[0] = "hiragana";
          local_90[1] = "katakana";
          local_90[2] = "alphabet";
          local_90[3] = "european";
          local_90[4] = "russian";
          local_90[5] = "number";
          if (*(uint *)(param_1 + 0x36c) < 6) {
            FUN_710377a120(param_1 + 0x240,"mel_chara_select_key_%s_%02d",
                           local_90[*(uint *)(param_1 + 0x36c)],3,in_x4,in_x5,in_x6,in_x7);
            local_90[0] = "hiragana";
            local_90[1] = "katakana";
            local_90[2] = "alphabet";
            local_90[3] = "european";
            local_90[4] = "russian";
            local_90[5] = "number";
            if (*(uint *)(param_1 + 0x36c) < 6) {
              FUN_710377a120(param_1 + 0x250,"mel_chara_select_key_%s_%02d",
                             local_90[*(uint *)(param_1 + 0x36c)],4,in_x4,in_x5,in_x6,in_x7);
              local_90[0] = "hiragana";
              local_90[1] = "katakana";
              local_90[2] = "alphabet";
              local_90[3] = "european";
              local_90[4] = "russian";
              local_90[5] = "number";
              if (*(uint *)(param_1 + 0x36c) < 6) {
                FUN_710377a120(param_1 + 0x260,"mel_chara_select_key_%s_%02d",
                               local_90[*(uint *)(param_1 + 0x36c)],5,in_x4,in_x5,in_x6,in_x7);
                local_90[0] = "hiragana";
                local_90[1] = "katakana";
                local_90[2] = "alphabet";
                local_90[3] = "european";
                local_90[4] = "russian";
                local_90[5] = "number";
                if (*(uint *)(param_1 + 0x36c) < 6) {
                  FUN_710377a120(param_1 + 0x270,"mel_chara_select_key_%s_%02d",
                                 local_90[*(uint *)(param_1 + 0x36c)],6,in_x4,in_x5,in_x6,in_x7);
                  local_90[0] = "hiragana";
                  local_90[1] = "katakana";
                  local_90[2] = "alphabet";
                  local_90[3] = "european";
                  local_90[4] = "russian";
                  local_90[5] = "number";
                  if (*(uint *)(param_1 + 0x36c) < 6) {
                    FUN_710377a120(param_1 + 0x280,"mel_chara_select_key_%s_%02d",
                                   local_90[*(uint *)(param_1 + 0x36c)],7,in_x4,in_x5,in_x6,in_x7);
                    local_90[0] = "hiragana";
                    local_90[1] = "katakana";
                    local_90[2] = "alphabet";
                    local_90[3] = "european";
                    local_90[4] = "russian";
                    local_90[5] = "number";
                    if (*(uint *)(param_1 + 0x36c) < 6) {
                      FUN_710377a120(param_1 + 0x290,"mel_chara_select_key_%s_%02d",
                                     local_90[*(uint *)(param_1 + 0x36c)],8,in_x4,in_x5,in_x6,in_x7)
                      ;
                      local_90[0] = "hiragana";
                      local_90[1] = "katakana";
                      local_90[2] = "alphabet";
                      local_90[3] = "european";
                      local_90[4] = "russian";
                      local_90[5] = "number";
                      if (*(uint *)(param_1 + 0x36c) < 6) {
                        FUN_710377a120(param_1 + 0x2a0,"mel_chara_select_key_%s_%02d",
                                       local_90[*(uint *)(param_1 + 0x36c)],9,in_x4,in_x5,in_x6,
                                       in_x7);
                        local_90[0] = "hiragana";
                        local_90[1] = "katakana";
                        local_90[2] = "alphabet";
                        local_90[3] = "european";
                        local_90[4] = "russian";
                        local_90[5] = "number";
                        if (*(uint *)(param_1 + 0x36c) < 6) {
                          pcVar4 = local_90[*(uint *)(param_1 + 0x36c)];
                          uVar5 = 10;
                          FUN_710377a120(param_1 + 0x2b0,"mel_chara_select_key_%s_%02d",pcVar4,10,
                                         in_x4,in_x5,in_x6,in_x7);
                          FUN_7103776910(&local_a0,param_1 + 0x1c0,(long ****)"set_txt",pcVar4,uVar5
                                         ,in_x4,in_x5,in_x6,in_x7);
                          local_90[0] = "hiragana";
                          local_90[1] = "katakana";
                          local_90[2] = "alphabet";
                          local_90[3] = "european";
                          local_90[4] = "russian";
                          local_90[5] = "number";
                          if (*(uint *)(param_1 + 0x36c) < 6) {
                            pcVar4 = local_90[*(uint *)(param_1 + 0x36c)];
                            FUN_710377a120((long)&local_a0,"mel_chara_select_key_shift_%s",pcVar4,
                                           uVar5,in_x4,in_x5,in_x6,in_x7);
                            if (*(uint *)(param_1 + 0x36c) < 2) {
                              pcVar3 = "btn_txt";
                            }
                            else {
                              pcVar3 = "btn_icon_0";
                            }
                            FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x1c8),(long)pcVar3);
                            FUN_7103776910(&local_b0,param_1 + 0x1d0,(long ****)"set_txt",pcVar4,
                                           uVar5,in_x4,in_x5,in_x6,in_x7);
                            iVar1 = *(int *)(param_1 + 0x36c);
                            if (iVar1 == 2) {
                              uVar6 = 5;
                              if (DAT_710523d00c != 0) {
                                uVar6 = iVar1 + 1U;
                              }
                            }
                            else {
                              uVar6 = iVar1 + 1U;
                              if ((iVar1 == 5) && (uVar6 = 0, DAT_710523d00c != 0)) {
                                uVar6 = 2;
                              }
                            }
                            local_90[0] = "hiragana";
                            local_90[1] = "katakana";
                            local_90[2] = "alphabet";
                            local_90[3] = "european";
                            local_90[4] = "russian";
                            local_90[5] = "number";
                            if (uVar6 < 6) {
                              FUN_710377a120((long)&local_b0,"mel_chara_select_key_switching_%s",
                                             local_90[uVar6],uVar5,in_x4,in_x5,in_x6,in_x7);
                              uVar2 = local_a8;
                              local_b0 = &PTR_FUN_710523d9a8;
                              local_a8 = 0;
                              if (uVar2 != 0) {
                                FUN_710392eb40(uVar2);
                              }
                              uVar2 = local_98;
                              local_a0 = &PTR_FUN_710523d9a8;
                              local_98 = 0;
                              if (uVar2 != 0) {
                                FUN_710392eb40(uVar2);
                              }
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

