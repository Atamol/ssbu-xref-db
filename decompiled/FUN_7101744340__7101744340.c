// addr:      7101744340
// offset:    0x1744340
// name:      FUN_7101744340
// mangled:   
// signature: undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101744340(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  void *__s;
  long ****pppplVar5;
  long ****pppplVar6;
  long lVar7;
  long ***local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  ulong *local_50;
  ulong local_48;
  
  pppplVar5 = &local_c0;
  pppplVar6 = &local_c0;
  if (DAT_7105328748 != (long *)0x0) goto LAB_7101744508;
  plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = local_48 & 0xffffffff00000000;
      local_c0 = (long ***)&DAT_00000010;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      param_3 = pppplVar5;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar5, plVar3 != (long *)0x0))
      goto LAB_71017443c0;
    }
    plVar3 = (long *)0x0;
  }
LAB_71017443c0:
  *plVar3 = (long)&PTR_FUN_71050b7880;
  __s = (void *)FUN_710392e290(0x10,0x4f0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (__s == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_48 = local_48 & 0xffffffff00000000;
      local_c0 = (long ***)0x4f0;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_48);
      if (((uVar4 & 1) != 0) &&
         (__s = (void *)FUN_710392e290(0x10,0x4f0,pppplVar6,param_4,param_5,param_6,param_7,param_8)
         , __s != (void *)0x0)) goto LAB_7101744428;
    }
    __s = (void *)0x0;
  }
LAB_7101744428:
  memset(__s,0,0x104);
  *(undefined1 *)((long)__s + 0x68) = 0;
  *(undefined4 *)((long)__s + 0x10) = 0x811c9dc5;
  *(undefined1 *)((long)__s + 0xb8) = 0;
  *(undefined8 *)((long)__s + 0x58) = 3;
  *(undefined8 *)((long)__s + 0x60) = 0x811c9dc5;
  *(undefined4 *)((long)__s + 0xf8) = 3;
  *(undefined8 *)((long)__s + 0xa8) = 3;
  *(undefined8 *)((long)__s + 0xb0) = 0x811c9dc5;
  memset((void *)((long)__s + 0x108),0,0x2c8);
  param_3 = (long ****)&DAT_00000108;
  *(undefined4 *)((long)__s + 0x108) = 0x811c9dc5;
  *(undefined1 *)((long)__s + 0x160) = 0;
  *(undefined1 *)((long)__s + 0x1b0) = 0;
  *(undefined8 *)((long)__s + 0x150) = 0;
  *(undefined8 *)((long)__s + 0x158) = 0x811c9dc5;
  *(undefined1 *)((long)__s + 0x200) = 0;
  *(undefined8 *)((long)__s + 0x240) = 0;
  *(undefined1 *)((long)__s + 0x250) = 0;
  *(undefined8 *)((long)__s + 0x248) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x290) = 0;
  *(undefined1 *)((long)__s + 0x2a0) = 0;
  *(undefined8 *)((long)__s + 0x298) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x2e0) = 0;
  *(undefined1 *)((long)__s + 0x2f0) = 0;
  *(undefined8 *)((long)__s + 0x2e8) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x330) = 0;
  *(undefined1 *)((long)__s + 0x340) = 0;
  *(undefined8 *)((long)__s + 0x338) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x380) = 0;
  *(undefined1 *)((long)__s + 0x390) = 0;
  *(undefined8 *)((long)__s + 0x388) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x1a0) = 0;
  *(undefined8 *)((long)__s + 0x1a8) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x1f0) = 0;
  *(undefined8 *)((long)__s + 0x1f8) = 0x811c9dc5;
  memset((void *)((long)__s + 0x3d0),0,0x108);
  *(undefined4 *)((long)__s + 0x3d8) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x420) = 0;
  *(undefined1 *)((long)__s + 0x430) = 0;
  *(undefined8 *)((long)__s + 0x428) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x470) = 0;
  *(undefined1 *)((long)__s + 0x480) = 0;
  *(undefined8 *)((long)__s + 0x478) = 0x811c9dc5;
  *(undefined8 *)((long)__s + 0x4c0) = 0;
  *(undefined8 *)((long)__s + 0x4e8) = 0;
  *(undefined8 *)((long)__s + 0x4e0) = 0;
  *(undefined8 *)((long)__s + 0x4d8) = 0;
  plVar3[1] = (long)__s;
  DAT_7105328748 = plVar3;
LAB_7101744508:
  FUN_71023078d0((uint *)DAT_7105328748[1]);
  FUN_710375aa90((long *)&local_50,"sum_record_count",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  local_b8 = 0xffffffff;
  local_60 = 2;
  local_ac = 0;
  local_b4 = 0;
  local_68 = 0;
  local_58 = 0;
  local_c0 = (long ***)&DAT_200000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_boot_count");
  local_c0 = (long ***)&DAT_300000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_working_time");
  local_c0 = (long ***)0x400000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_play_time");
  local_c0 = (long ***)0x500000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_melee_total_count");
  local_c0 = (long ***)0x600000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_melee_offline_count");
  local_c0 = (long ***)0x700000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_melee_adhoc_count");
  local_c0 = (long ***)0x800000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_time_melee_count");
  local_c0 = (long ***)0x900000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_stock_melee_count");
  local_c0 = (long ***)0xa00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_life_melee_count");
  local_c0 = (long ***)0xb00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_melee_5_8_count")
  ;
  local_c0 = (long ***)0xc00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_melee_8_count");
  local_c0 = (long ***)0xd00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_melee_player_count");
  local_c0 = (long ***)0xe00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_vs_melee_reset_count");
  local_c0 = (long ***)0xf00000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_damage_total_count")
  ;
  local_c0 = (long ***)0x1000000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_kill_total_count");
  local_c0 = (long ***)0x1100000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"common_suicide_total_count");
  local_c0 = (long ***)0x1200000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_gold_get_count");
  local_c0 = (long ***)0x1300000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_gold_used_count");
  local_c0 = (long ***)0x1400000000;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"common_sp_get_count");
  local_c0 = (long ***)0x200000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_time");
  local_c0 = (long ***)0x300000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_time_total");
  local_c0 = (long ***)0x400000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_normal_count");
  local_c0 = (long ***)0x500000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_team_compe_count");
  local_c0 = (long ***)0x600000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_sp_various_count");
  local_c0 = (long ***)0x700000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_sp_suddendeath_count");
  local_c0 = (long ***)0x800000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_sp_all_battle_count")
  ;
  local_c0 = (long ***)0x900000001;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_tournament_count");
  local_c0 = (long ***)0x200000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_have_count");
  local_c0 = (long ***)&DAT_300000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_get_count");
  local_c0 = (long ***)0x400000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_summon_count");
  local_c0 = (long ***)0x500000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_return_count");
  local_c0 = (long ***)0x600000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_evolve_count");
  local_c0 = (long ***)0x700000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_evolve_kind_count")
  ;
  local_c0 = (long ***)0x800000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_lv99_count");
  local_c0 = (long ***)0x900000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_adventure_battle_win_count");
  local_c0 = (long ***)0xa00000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_adventure_trip_count");
  local_c0 = (long ***)0xb00000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_school_mastery_count");
  local_c0 = (long ***)0xc00000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_gym_time");
  local_c0 = (long ***)0xd00000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_search_time");
  local_c0 = (long ***)0xe00000002;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"spirits_board_win_count");
  local_c0 = (long ***)0x200000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_standard_clear_count")
  ;
  local_c0 = (long ***)0x300000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_standard_clear_honki")
  ;
  local_c0 = (long ***)0x400000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_bonus_game_high_score");
  local_c0 = (long ***)0x500000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_credit_high_score");
  local_c0 = (long ***)0x600000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_kumite_100_high_score");
  local_c0 = (long ***)0x700000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_kumite_allstar_high_score");
  local_c0 = (long ***)0x800000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_kumite_nasake_muyou_high_score");
  local_c0 = (long ***)0xe00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_homerun_total_record")
  ;
  local_c0 = (long ***)0xf00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_homerun_single_record");
  local_c0 = (long ***)0x1000000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_homerun_vs_record");
  local_c0 = (long ***)0x900000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_make_chara_mii_fighter_creation_count"
            );
  local_c0 = (long ***)0xa00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_created_stage_count");
  local_c0 = (long ***)0xb00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"play_amiibo_travel_count");
  local_c0 = (long ***)0xc00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"play_amiibo_travel_win_count");
  local_c0 = (long ***)0xd00000003;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"melee_sp_vr_time");
  local_c0 = (long ***)0x200000004;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"collection_take_picture_count");
  local_c0 = (long ***)0x300000004;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"collection_make_replay_count");
  local_c0 = (long ***)0x400000004;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"collection_make_video_count");
  local_c0 = (long ***)0x500000004;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"collection_get_tag_count");
  local_c0 = (long ***)0x200000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_total_time");
  local_c0 = (long ***)0x300000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_single_count");
  local_c0 = (long ***)0x400000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_single_win_count");
  local_c0 = (long ***)0x500000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_single_smash_power_no1");
  local_c0 = (long ***)0x600000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_single_smash_power_all");
  local_c0 = (long ***)0x700000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_double_count");
  local_c0 = (long ***)0x800000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_double_win_count");
  local_c0 = (long ***)0x900000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_vip_count");
  local_c0 = (long ***)0xa00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_vip_win_count");
  local_c0 = (long ***)0xb00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"online_vs_room_count");
  local_c0 = (long ***)0xc00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_any_watch_ale_point");
  local_c0 = (long ***)0xd00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_any_watch_hit_count");
  local_c0 = (long ***)0xe00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_any_watch_consecutive_hits_count");
  local_c0 = (long ***)0xf00000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_tournament_part_count");
  local_c0 = (long ***)0x1000000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_tournament_win_count");
  local_c0 = (long ***)0x1100000005;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"online_tournament_champion_count");
  local_c0 = (long ***)0x200000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x710436baad);
  local_c0 = (long ***)0x300000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71044541d9);
  local_c0 = (long ***)0x400000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71042f7949);
  local_c0 = (long ***)0x500000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71042c4502);
  local_c0 = (long ***)0x600000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71043df7de);
  local_c0 = (long ***)0x700000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71042c4512);
  local_c0 = (long ***)0x800000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71043186a0);
  local_c0 = (long ***)0x900000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x710439cae0);
  local_c0 = (long ***)0xa00000006;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                 (undefined1 *)(local_58 & 0xffffffffff | 0xc1ffff0000000000));
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x710424ed15);
  lVar7 = *(long *)(DAT_710532f730 + 8);
  local_c0 = (long ***)0x200000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_71032b1e40(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),
                 local_58 & 0xffffffffff | 0x69ffff0000000000);
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x710438c0ce);
  local_c0 = (long ***)0x300000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_71032a7800(*(long *)(lVar7 + 0x1d8),local_58 & 0xffffffffff);
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x710425eabc);
  local_c0 = (long ***)0x400000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  puVar2 = local_50;
  FUN_71032a7800(*(long *)(lVar7 + 0x1d8),local_58 & 0xffffffffff);
  nn::prepo::PlayReport::Add((char *)(*puVar2 + 0x4020),0x71042912c3);
  local_c0 = (long ***)0x500000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"other_bgm_count");
  local_c0 = (long ***)0x600000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"other_mii_parts_head_count");
  local_c0 = (long ***)0x700000007;
  FUN_7102309fc0((int *)DAT_7105328748[1],(undefined4 *)&local_c0);
  local_48 = local_68;
  nn::prepo::PlayReport::Add
            ((char *)(*local_50 + 0x4020),(Any64BitId *)"other_mii_parts_body_count");
  iVar1 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar1 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar1)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_50 + 0x4020));
  if (DAT_7105328748 != (long *)0x0) {
    (**(code **)(*DAT_7105328748 + 8))();
    DAT_7105328748 = (long *)0x0;
  }
  puVar2 = local_50;
  local_50 = (ulong *)0x0;
  if (puVar2 != (ulong *)0x0) {
    uVar4 = *puVar2;
    *puVar2 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40((ulong)puVar2);
  }
  return;
}

