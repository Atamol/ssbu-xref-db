// addr:      7101bcb6b0
// offset:    0x1bcb6b0
// name:      FUN_7101bcb6b0
// mangled:   
// signature: undefined __cdecl FUN_7101bcb6b0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcb6b0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long ***ppplVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  undefined **local_2a0;
  ulong local_298;
  undefined **local_290;
  ulong local_288;
  undefined **local_280;
  ulong local_278;
  undefined8 local_270;
  long ***local_268;
  undefined4 local_260;
  char *local_258;
  undefined4 local_250;
  char *local_248;
  undefined4 local_240;
  char *local_238;
  undefined4 local_230;
  char *local_228;
  undefined4 local_220;
  char *local_218;
  undefined4 local_210;
  char *local_208;
  undefined4 local_200;
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  char *local_1c8;
  undefined4 local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  char *local_198;
  undefined4 local_190;
  char *local_188;
  undefined4 local_180;
  char *local_178;
  undefined4 local_170;
  char *local_168;
  undefined4 local_160;
  char *local_158;
  undefined4 local_150;
  char *local_148;
  undefined4 local_140;
  char *local_138;
  undefined4 local_130;
  char *local_128;
  undefined4 local_120;
  char *local_118;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  undefined4 local_80;
  char *local_78;
  undefined4 local_70;
  char *local_68;
  long ***local_60;
  ulong local_58;
  
  pppplVar6 = param_3;
  FUN_7103776390(&local_2a0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(long *****)(param_1 + 0x2c0) = param_3;
  lVar8 = param_1 + 0x310;
  FUN_7103776390(&local_280,&local_2a0,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  local_268 = (long ***)0x71042d616d;
  local_258 = "size_p8";
  local_250 = 2;
  local_248 = "profile_show";
  local_240 = 3;
  local_230 = 4;
  local_228 = "in_wanted";
  local_220 = 5;
  local_218 = "in_progress";
  local_210 = 6;
  local_200 = 7;
  local_1f8 = "popin_newentry";
  local_1f0 = 8;
  local_1e8 = "popout_newentry";
  local_1e0 = 9;
  local_1d0 = 10;
  local_1c8 = "trans_readyok";
  local_1c0 = 0xb;
  local_1b8 = "in_statustxt";
  local_1b0 = 0xc;
  local_1a0 = 0xd;
  local_198 = "trans_bye";
  local_190 = 0xe;
  local_188 = "player_1p";
  local_180 = 0xf;
  local_170 = 0x10;
  local_168 = "player_3p";
  local_160 = 0x11;
  local_158 = "player_4p";
  local_150 = 0x12;
  local_140 = 0x13;
  local_138 = "player_6p";
  local_130 = 0x14;
  local_128 = "player_7p";
  local_120 = 0x15;
  local_110 = 0x16;
  local_108 = "player_cp";
  local_100 = 0x17;
  local_f8 = "player_fp";
  local_f0 = 0x18;
  local_e0 = 0x19;
  local_d8 = "frame_delete_p4";
  local_260 = 1;
  local_238 = "profile_hidden";
  local_d0 = 0x1a;
  local_c8 = "frame_set_p8";
  local_c0 = 0x1b;
  local_208 = "in_readyok";
  local_1d8 = "trans_progress";
  local_1a8 = "out_statustxt";
  local_178 = "player_2p";
  local_148 = "player_5p";
  local_118 = "player_8p";
  local_e8 = "frame_set_p4";
  local_b0 = 0x1c;
  local_a8 = "in_closed";
  local_a0 = 0x1d;
  local_98 = "out_closed";
  local_90 = 0x1e;
  local_80 = 0x1f;
  local_78 = "game_start_stop";
  local_b8 = "frame_delete_p8";
  local_70 = 0x20;
  local_270 = (undefined **)((ulong)local_270._4_4_ << 0x20);
  local_88 = "game_start_ok";
  local_68 = "brave";
  FUN_7101b88fe0(lVar8,extraout_x1,pppplVar6,param_4,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)&local_270;
  while (*(uint *)pppplVar7 < 0x21) {
    FUN_71037780e0(&local_60,(long)&local_280,(long ****)pppplVar7[1],pppplVar6,param_4,param_5,
                   param_6,param_7,param_8);
    uVar5 = local_58;
    if (0x20 < *(uint *)pppplVar7) break;
    lVar1 = param_1 + (long)(int)*(uint *)pppplVar7 * 0x10;
    if ((long ****)(lVar1 + 0x318) != &local_60) {
      local_58 = 0;
      uVar4 = *(ulong *)(lVar1 + 800);
      *(ulong *)(lVar1 + 800) = uVar5;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar5 = local_58;
    local_60 = (long ***)&PTR_FUN_710523d9e8;
    local_58 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    uVar5 = local_278;
    pppplVar7 = pppplVar7 + 2;
    if (pppplVar7 == &local_60) {
      local_280 = &PTR_FUN_710523d988;
      local_278 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      local_268 = (long ***)0x710433a953;
      local_258 = "set_txt_status";
      local_248 = "set_txt_number";
      local_240 = 3;
      local_270 = (undefined **)((ulong)local_270 & 0xffffffff00000000);
      local_260 = 1;
      pppplVar7 = &local_60;
      local_250 = 2;
      local_238 = "set_rep_picon";
      local_58 = 4;
      local_60 = (long ***)&local_270;
      FUN_7101b8b370(param_1 + 0x2c8,(long)&local_2a0,pppplVar7,param_4,param_5,param_6,param_7,
                     param_8);
      FUN_7103776640(&local_290,(long)&local_2a0,(byte ****)"player_gauge",pppplVar7,param_4,param_5
                     ,param_6,param_7,param_8);
      local_268 = (long ***)0x710433a040;
      pppplVar7 = &local_60;
      local_270 = (undefined **)((ulong)local_270 & 0xffffffff00000000);
      local_260 = 1;
      local_258 = "glow_loop";
      local_58 = 2;
      local_60 = (long ***)&local_270;
      FUN_7101b85d60(param_1 + 0x198,(long)&local_290,pppplVar7,param_4,param_5,param_6,param_7,
                     param_8);
      uVar5 = local_288;
      local_290 = &PTR_FUN_710523d988;
      local_288 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      *(long *)(param_1 + 0x1c0) = lVar8;
      *(long *)(param_1 + 0x180) = lVar8;
      FUN_710377b010(0x3f800000,param_1 + 0x518);
      FUN_7103776640(&local_60,(long)&local_2a0,(byte ****)"brave",pppplVar7,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_7103776390(&local_290,&local_60,pppplVar7,param_4,param_5,param_6,param_7,param_8);
      lVar8 = *(long *)(param_1 + 0x528);
      FUN_7103776390(&local_270,&local_290,pppplVar7,param_4,param_5,param_6,param_7,param_8);
      FUN_7101b80180(lVar8,&local_270,param_3,param_4,param_5,param_6,param_7,param_8);
      ppplVar3 = local_268;
      local_270 = &PTR_FUN_710523d988;
      local_268 = (long ***)0x0;
      if (ppplVar3 != (long ***)0x0) {
        uVar5 = *(ulong *)((long)ppplVar3 + 0x18);
        *(undefined ***)((long)ppplVar3 + 0x10) = &PTR_FUN_710523d9a8;
        pcVar2 = (char *)((long)ppplVar3 + 0x18);
        pcVar2[0] = '\0';
        pcVar2[1] = '\0';
        pcVar2[2] = '\0';
        pcVar2[3] = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40((ulong)ppplVar3);
      }
      uVar5 = local_288;
      local_290 = &PTR_FUN_710523d988;
      local_288 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      uVar5 = local_58;
      local_60 = (long ***)&PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      uVar5 = local_298;
      local_2a0 = &PTR_FUN_710523d988;
      local_298 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

