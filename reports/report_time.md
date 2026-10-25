# time (funcs=144, hits=408)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** TIME
- **Strings touched:** GF_SCENE_ROOT_LAYER_GROUND;GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA;TRANS_A_JUMP_AERIAL;GF_SCENE_ROOT_LAYER_CHARA;GF_SCENE_ROOT_LAYER_ALL;GF_SCENE_ROOT_LAYER_FIGHTER;GF_SCENE_ROOT_LAYER_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_GROUND2;GF_SCENE_ROOT_LAYER_EFFECT;GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER;GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_EFFECT2D;GF_SCENE_ROOT_LAYER_INFO;GF_SCENE_ROOT_LAYER_MAX;EF_FLIP_NONE;EF_FLIP_AXIS_YZ;EF_FLIP_AXIS_ZX;EF_FLIP_AXIS_XY;EF_FLIP_1;EF_FLIP_2;EF_FLIP_TRANS_X;EF_FLIP_TRANS_Y;EF_FLIP_TRANS_Z;EF_FLIP_ROT_X;EF_FLIP_ROT_Y;EF_FLIP_ROT_Z;EF_FLIP_SCALE_X;EF_FLIP_SCALE_Y;EF_FLIP_SCALE_Z;EF_FLIP_PTCL_X;EF_FLIP_PTCL_Y;EF_FLIP_BITCTRL;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020fbb90__71020fbb90.c)  [cfg](../decompiled/FUN_71020fbb90__71020fbb90.mmd)
- **Clone hash:** `884095f7b78c7d69`

```c

void FUN_71020fbb90(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_CHARA",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_ALL",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_FIGHTER",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_STAGE_OBJECT",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND2",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT2D",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_INFO",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
// ... (15385 more lines)
```

## 2. `FUN_710225b990`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** TIME
- **Strings touched:** FIGHTER_WIIFIT_STATUS_KIND_PREV;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE;FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD;FIGHTER_WIIFIT_STATUS_KIND_FINAL_END;FIGHTER_WIIFIT_STATUS_KIND_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_THROW;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_TERM;PACMAN_SPECIAL_N_ITEM_KIND_NUM;PACMAN_SPECIAL_N_ITEM_MAX_NUM;PACMAN_SPECIAL_N_RANK_MIN;PACMAN_SPECIAL_N_RANK_MAX;PACMAN_SPECIAL_N_RANK_NUM;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b990__710225b990.c)  [cfg](../decompiled/FUN_710225b990__710225b990.mmd)
- **Clone hash:** `32c74e885489c363`

```c

void FUN_710225b990(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_PREV",(undefined **)&DAT_000001e0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD",(undefined **)0x1e1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT",
                 (undefined **)&DAT_000001e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL",(undefined **)0x1e3
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL",
                 (undefined **)0x1e4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END",(undefined **)0x1e5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP",(undefined **)0x1e6,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING",
                 (undefined **)0x1e7,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP",
                 (undefined **)&DAT_000001e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END",(undefined **)0x1e9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH",
                 (undefined **)0x1ea,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS",
                 (undefined **)0x1eb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE",
                 (undefined **)0x1ec,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD",
                 (undefined **)&DAT_000001ed,param_4,param_5,param_6,param_7,param_8);
// ... (7200 more lines)
```

## 3. `FUN_7102f2b0c0`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102f2b0c0`  (offset `0x2f2b0c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102f2b0c0(int param_1, ulong * param_2, ulong param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, long * * * param_8, long * * * param_9)`
- **Size / BBs / Incoming:** 5684 bytes / 439 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** light_fes;render_param_fes;chara_fes;loupe_01;light_daytime;render_param_daytime;chara_daytime;loupe_00;E_chara_fes;EX_loupe_fes;E_chara_daytime;EX_loupe_daytime;B_chara_fes;B_loupe_fes;B_chara_daytime;B_loupe_daytime;E_loupe_fes;E_loupe_daytime;stage_fes;reflection_cubemap_fes;color_grading_lut_fes;stage_daytime;reflection_cubemap_daytime;color_grading_lut_daytime
- **Callers:** FUN_7102f23770;FUN_7102f23c40
- **Callees:** FUN_71025e9d50;FUN_71025eaba0;FUN_71025f7350;FUN_7102633800;FUN_7102633910;FUN_7102633a10;FUN_7102633b90;FUN_7102633cf0;FUN_7102653da0;FUN_7102f24c00;FUN_7102f24fb0;FUN_7102f2e1a0;FUN_7102f2edb0;FUN_7102f31160;FUN_7103256240;FUN_710325c7c0;...
- **Files:** [decomp](../decompiled/FUN_7102f2b0c0__7102f2b0c0.c)  [cfg](../decompiled/FUN_7102f2b0c0__7102f2b0c0.mmd)
- **Clone hash:** `12bff190ee400f34`

```c

void FUN_7102f2b0c0(int param_1,ulong *param_2,ulong param_3,long ****param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,long ***param_8,long ***param_9)

{
  byte ***pppbVar1;
  long ***ppplVar2;
  undefined8 *puVar3;
  long ***ppplVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *plVar9;
  ulong *puVar10;
  byte ****ppppbVar11;
  int iVar12;
  long ****extraout_x1;
  long ****extraout_x1_00;
  long ****extraout_x1_01;
  long ****extraout_x1_02;
  long ****extraout_x1_03;
  long ****extraout_x1_04;
  long ****extraout_x1_05;
  long ****extraout_x1_06;
  long ****extraout_x1_07;
  long ****extraout_x1_08;
  long ****extraout_x1_09;
  long ****extraout_x1_10;
  char *pcVar13;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
// ... (1052 more lines)
```

## 4. `FUN_7101744340`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** sum_record_count;common_boot_count;common_working_time;common_play_time;common_melee_total_count;common_melee_offline_count;common_melee_adhoc_count;common_vs_time_melee_count;common_vs_stock_melee_count;common_vs_life_melee_count;common_vs_melee_5_8_count;common_vs_melee_8_count;common_vs_melee_player_count;common_vs_melee_reset_count;common_damage_total_count;common_kill_total_count;common_suicide_total_count;common_gold_get_count;common_gold_used_count;common_sp_get_count;melee_time;melee_time_total;melee_normal_count;melee_team_compe_count;melee_sp_various_count;NODE_PRE_REFRACT_BLEND;melee_sp_suddendeath_count;melee_sp_all_battle_count;melee_tournament_count;spirits_have_count;spirits_get_count;spirits_summon_count;...
- **Callers:** FUN_71022d23e0
- **Callees:** FUN_71023078d0;FUN_7102309fc0;FUN_7103264270;FUN_71032a7800;FUN_71032b1e40;FUN_710375aa90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101744340__7101744340.c)  [cfg](../decompiled/FUN_7101744340__7101744340.mmd)
- **Clone hash:** `a9cb12115ef58153`

```c

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
// ... (522 more lines)
```

## 5. `FUN_7101b7a8f0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b7a8f0`  (offset `0x1b7a8f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b7a8f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 6696 bytes / 339 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** player;set_rep_time_pil_s;info_melee_timer_pil_s;time_onoff;time_num_00;time_num_01;time_num_02;time_num_03;time_num_04;time_num_05;set_parts_enemy_01;set_txt_enemy;enemy_1_off;enemy_1_on;mode_empty_03;set_txt_bgm;bgm_in;bgm_out;set_txt_title_special;title_special_in;title_special_out;set_parts_gsp;set_txt_gsp_count;gsp_onoff;gsp_type;set_rep_stock_%02d
- **Callers:** FUN_710139b550
- **Callees:** FUN_71000001c0;FUN_7101414b10;FUN_7101b635a0;FUN_7101b69480;FUN_7103240d30;FUN_71032cbf30;FUN_710330a8f0;FUN_7103563a20;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;...
- **Files:** [decomp](../decompiled/FUN_7101b7a8f0__7101b7a8f0.c)  [cfg](../decompiled/FUN_7101b7a8f0__7101b7a8f0.mmd)
- **Clone hash:** `7523e6a19a6dcd19`

```c

void FUN_7101b7a8f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  long ****pppplVar10;
  undefined **ppuVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab468;
  param_1[1] = 0;
// ... (1332 more lines)
```

## 6. `FUN_7101d7a1f0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d7a1f0`  (offset `0x1d7a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d7a1f0(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2556 bytes / 93 bb / 7 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_playlist_name;mnu_sound_test_playlist_nam;set_txt_song_n;mnu_sound_test_playlist_song_n;set_song_time;mnu_sound_test_playlist_sele_time_sum;mode_empty_03;time_on;set_part_album_image;set_txt_album_nam;mark_all;mnu_sound_test_series_album_nam;set_rep_ser_pic;mark_ser;tit_series_snd_%s;time_off;mnu_sound_test_series_song_n;mnu_sound_test_series_song_none;mnu_sound_test_series_song_time;mnu_sound_test_series_song_time_none;set_mark;mark_etc;set_chara_icon;mark_chara;set_txt_charactor;nam_chr1_%02d_%s
- **Callers:** FUN_7101d758e0;FUN_7101d7da70;FUN_7101d7e480
- **Callees:** FUN_71003a4ca0;FUN_7101796d70;FUN_710323f330;FUN_710323f600;FUN_710323f760;FUN_7103262310;FUN_7103263540;FUN_7103299d20;FUN_710329a390;FUN_710329acf0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377a280;...
- **Files:** [decomp](../decompiled/FUN_7101d7a1f0__7101d7a1f0.c)  [cfg](../decompiled/FUN_7101d7a1f0__7101d7a1f0.mmd)
- **Clone hash:** `813ea237272f82a6`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101d7a1f0(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long ********pppppppplVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *******ppppppplVar6;
  long ********pppppppplVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  undefined **local_1c0;
  long ********local_1b8 [8];
  undefined8 local_178;
  undefined8 local_170;
  ulong local_168;
  undefined8 local_160;
  undefined2 local_158;
  char local_156;
  undefined4 local_154;
  undefined8 local_150;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
// ... (357 more lines)
```

## 7. `FUN_7101ce5ab0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** set_parts_det_panel;set_txt_version;set_parts_tag_disp;tag_on;btl_field_on;set_txt_tag;mnu_replay_detail_battlefield;tag_off;endpoint_on;mnu_replay_detail_end;set_txt_header_rule;set_txt_rule;mnu_replay_detail_rule_time;mel_rule_select_time;mnu_replay_detail_rule_stock;mode_empty_03;mel_rule_select_time_inifinity;mnu_replay_detail_rule_stamina;mel_rule_select_time_inifinity_stock;mnu_replay_detail_homerun_single;mnu_replay_detail_homerun_coop;rule_txt_off;mel_rule_select_time_stock;rule_txt_on;set_txt_mode_00;set_txt_mode_01;mnu_share_detail_data_kind_homerun;mnu_share_data_kind_team;mnu_share_detail_data_kind_sp_suddendeath;mnu_share_detail_data_kind_various;set_txt_time;set_txt_bar_title_%d%d;...
- **Callers:** FUN_7101ce2ec0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101ce7020;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_71032648e0;FUN_710326ad60;FUN_7103280ec0;FUN_71032b1a60;FUN_71032b24e0;FUN_7103776390;...
- **Files:** [decomp](../decompiled/FUN_7101ce5ab0__7101ce5ab0.c)  [cfg](../decompiled/FUN_7101ce5ab0__7101ce5ab0.mmd)
- **Clone hash:** `aa7b16582585de65`

```c

void FUN_7101ce5ab0(long param_1,undefined8 *param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte ****ppppbVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  uint uVar22;
  int *piVar23;
  long ***ppplVar24;
  byte *pbVar25;
  ulong uVar26;
  char cVar27;
  uint uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  long *plVar31;
  undefined1 *puVar32;
  undefined **__dest;
  long lVar33;
  char *pcVar34;
// ... (958 more lines)
```

## 8. `FUN_7101bc0f30`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bc0f30`  (offset `0x1bc0f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bc0f30(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8136 bytes / 469 bb / 0 incoming refs
- **Match values:** time
- **Strings touched:** mel_training_camera_expand;mel_training_camera_more_expand;mode_empty_03;mel_training_camera_normal;mel_training_camera_fixing;mel_training_help_end;mel_training_help_time_normal;mel_training_help_cp_quantity;mel_training_help_same_offset;mel_training_help_dmg_pl1;mel_training_help_item;mel_training_help_cp_dmg;mel_training_help_menu_change2;mel_training_help_trajectory;mel_training_help_trajectory_off;mel_training_help_cp_dmg_fixing;mel_training_help_cp_movement_stop;mel_training_help_shift0;nam_item_%s;nam_item_help_%s;mel_training_back_item;mel_training_back_training;mel_training_help_shift1;mel_training_help_shift2;mel_training_help_time_slow0;mel_training_help_time_slow1;mel_training_help_time_slow2;mel_training_help_time_quick;mel_training_help_cp_movement_jump;mel_training_help_cp_movement_lv_n;mel_training_help_cp_movement_walk;mel_training_help_cp_movement_escape;...
- **Callees:** FUN_71003a4ca0;FUN_7101bb0c00;FUN_7101bbd2b0;FUN_71024076d0;FUN_710327fb30;FUN_710327fc30;FUN_7103280000;FUN_7103313f20;FUN_71033980b0;FUN_710376b960;FUN_7103771a80;FUN_710377a120;FUN_710377a280;FUN_710377aee0;FUN_710377b140;FUN_7103783c10;...
- **Files:** [decomp](../decompiled/FUN_7101bc0f30__7101bc0f30.c)  [cfg](../decompiled/FUN_7101bc0f30__7101bc0f30.mmd)
- **Clone hash:** `92e295f6612e49d7`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101bc0f30(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *__src;
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  undefined8 uVar7;
  ulong uVar8;
  ushort *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  ulong uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long ****pppplVar29;
// ... (1529 more lines)
```

## 9. `FUN_7101a7fa70`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7fa70`  (offset `0x1a7fa70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7fa70(undefined8 param_1, int param_2, char * param_3, ulong param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6524 bytes / 312 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_mongon;set_txt_category;set_txt_main;set_parts_text_scroll;set_txt_mask;mnu_record_count_index_%02d;category;honbun;mnu_record_count_homerun;mnu_record_count_n;mnu_record_count_kumite_time;mnu_record_count_time;mnu_record_count_decimal_n;category%02d;txt_pos_scroll;txt_pos_fix
- **Callees:** FUN_71003a4ca0;FUN_710176bcc0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101a7fa70__7101a7fa70.c)  [cfg](../decompiled/FUN_7101a7fa70__7101a7fa70.mmd)
- **Clone hash:** `5605c737b86bb3e4`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101a7fa70(undefined8 param_1,int param_2,char *param_3,ulong param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  byte *pbVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined ***pppuVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined **local_460;
  ulong local_458;
  uint local_450;
  undefined4 local_44c;
  byte local_448 [64];
  uint local_408;
  undefined4 local_404;
  byte local_400 [64];
  uint local_3c0;
// ... (1045 more lines)
```

## 10. `FUN_71021cd710`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021cd710`  (offset `0x21cd710`)
- **Namespace:** `Global`
- **Signature:** `byte * __cdecl FUN_71021cd710(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 1952 bytes / 115 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** catch_time_;catch_time_add_by_damage_;catch_time_decrease_;catch_time_decrease_by_one_pattern_;catch_time_min_by_one_pattern_;catch_time_dec_by_clatter_
- **Callees:** FUN_7101ff9450;FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_71021cd710__71021cd710.c)  [cfg](../decompiled/FUN_71021cd710__71021cd710.mmd)
- **Clone hash:** `f103a1a88925957d`

```c

byte * FUN_71021cd710(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar3 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar3[1] != 0x16) &&
           (lVar6 = *plVar3, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar4 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"catch_time_");
// ... (320 more lines)
```

## 11. `FUN_7101ac6fd0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac6fd0`  (offset `0x1ac6fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** mnu_replay_detail_rule_time;mel_rule_select_time;mnu_replay_detail_rule_stock;mode_empty_03;mel_rule_select_time_inifinity;mnu_replay_detail_rule_stamina;mel_rule_select_time_inifinity_stock;mnu_replay_detail_homerun_single;mnu_replay_detail_homerun_coop;mel_rule_select_time_stock
- **Callers:** FUN_7101ac4ba0;FUN_7101ac65f0
- **Callees:** FUN_710377a120;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_7101ac6fd0__7101ac6fd0.c)  [cfg](../decompiled/FUN_7101ac6fd0__7101ac6fd0.mmd)
- **Clone hash:** `7d0f10f459a90aef`

```c

void FUN_7101ac6fd0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  
  if (*(char *)(param_3 + 100) == '\x12') {
    cVar1 = *(char *)(param_3 + 0x88) == '\x01';
    cVar4 = '\x02';
    if (!(bool)cVar1) {
      cVar4 = '\x01';
    }
    if (*(char *)(param_3 + 0xd8) == '\x01') {
      cVar1 = cVar4;
    }
    if (*(char *)(param_3 + 0x128) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x178) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x218) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x268) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x2b8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    bVar3 = 0x10;
    if (cVar1 != '\x02') {
      bVar3 = 8;
// ... (47 more lines)
```

## 12. `FUN_71021cd4c0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021cd4c0`  (offset `0x21cd4c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021cd4c0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 392 bytes / 1 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** new_instance_lua;catch_time_;catch_time_add_by_damage_;catch_time_decrease_;catch_time_decrease_by_one_pattern_;catch_time_min_by_one_pattern_;catch_time_dec_by_clatter_
- **Callers:** FUN_71021cd3f0
- **Callees:** FUN_7101ff91a0;FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_71021cd4c0__71021cd4c0.c)  [cfg](../decompiled/FUN_71021cd4c0__71021cd4c0.mmd)
- **Clone hash:** `dfe438d632fa1bbe`

```c

void FUN_71021cd4c0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71021cd650;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_time_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x30);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_time_add_by_damage_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x34);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_time_decrease_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x38);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"catch_time_decrease_by_one_pattern_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
// ... (14 more lines)
```

## 13. `FUN_710042a680`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710042a680`  (offset `0x42a680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710042a680(void)`
- **Size / BBs / Incoming:** 412 bytes / 1 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** light00;light02;light01;light03;chara_morning;chara_evening;chara_daytime;chara_night;stage_morning;stage_evening;stage_daytime;stage_night;reflection_cubemap_morning;reflection_cubemap_evening;reflection_cubemap_daytime;reflection_cubemap_night
- **Callees:** FUN_71000001c0;FUN_71026af880
- **Files:** [decomp](../decompiled/FUN_710042a680__710042a680.c)  [cfg](../decompiled/FUN_710042a680__710042a680.mmd)
- **Clone hash:** `1f621bf5d7b9acc0`

```c

void FUN_710042a680(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  local_80 = DAT_71050cda30;
  puStack_78 = PTR_s_light00_71050cda38;
  local_60 = DAT_71050cda50;
  puStack_58 = PTR_s_light02_71050cda58;
  local_70 = DAT_71050cda40;
  puStack_68 = PTR_s_light01_71050cda48;
  local_40 = DAT_71050cda70;
  puStack_38 = PTR_s_light03_71050cda78;
  local_50 = DAT_71050cda60;
  puStack_48 = PTR_s_light03_71050cda68;
  FUN_71026af880(&DAT_710532aca0,&local_80,(long ****)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_71050cda80;
  puStack_78 = PTR_s_chara_morning_71050cda88;
  local_60 = DAT_71050cdaa0;
  puStack_58 = PTR_s_chara_evening_71050cdaa8;
  local_70 = DAT_71050cda90;
  puStack_68 = PTR_s_chara_daytime_71050cda98;
  local_40 = DAT_71050cdac0;
  puStack_38 = PTR_s_chara_night_71050cdac8;
// ... (31 more lines)
```

## 14. `FUN_71037adcb0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037adcb0`  (offset `0x37adcb0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71037adcb0(undefined8 param_1, undefined4 param_2, undefined4 param_3)`
- **Size / BBs / Incoming:** 260 bytes / 10 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** sys_time_format_full;sys_time_format_hhmm;sys_time_format_hmm;dys_yoga03_l_03_set;sys_time_format_mmss;sys_time_format_mss
- **Callers:** FUN_71037ab750
- **Callees:** FUN_71037ab600
- **Files:** [decomp](../decompiled/FUN_71037adcb0__71037adcb0.c)  [cfg](../decompiled/FUN_71037adcb0__71037adcb0.mmd)
- **Clone hash:** `7a42b85bc86d7015`

```c

undefined8 FUN_71037adcb0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_full",3);
    return uVar1;
  case 1:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hhmm",2);
    return uVar1;
  case 2:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hmm",2);
    return uVar1;
  case 3:
    pcVar2 = "sys_time_format_mmss";
    break;
  case 4:
    pcVar2 = "sys_time_format_mss";
    break;
  default:
    return 0;
  }
  uVar1 = FUN_71037ab600(param_1,param_2,(byte *)pcVar2,2);
  return uVar1;
}


```

## 15. `FUN_7101e91610`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e91610`  (offset `0x1e91610`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e91610(long param_1, uint param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3436 bytes / 132 bb / 4 incoming refs
- **Match values:** time
- **Strings touched:** view_new_game;cam_save_help_easy;view_caution;caution_anim;set_parts_btn_04;set_txt_00;cmn_yes;set_txt_caution;cam_save_overwrite_start;set_btn_m_decide;view_continue;set_parts_clear;set_parts_clear_s;lay_continue_01;cam_save_help_normal;cam_save_help_hard;cam_save_help_very_easy;lay_continue_02;lay_continue_00;set_parts_caption_con;set_txt_help;cam_save_num_area;set_txt_play_time;cam_save_playtime_time;set_txt_difficulty;cam_save_level_type;cam_save_level_easy;cam_save_level_hard;cam_save_level_normal;cam_save_level_very_easy;set_txt_fighter_num;cam_save_fighter_n;...
- **Callers:** FUN_7101e56e30;FUN_7101e92b80;FUN_7101e930d0;FUN_7101e931f0
- **Callees:** FUN_7101e8e680;FUN_7101e8e840;FUN_71024cc980;FUN_71024ccb40;FUN_7103264590;FUN_71032662f0;FUN_710337d360;FUN_7103771a80;FUN_7103772070;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101e91610__7101e91610.c)  [cfg](../decompiled/FUN_7101e91610__7101e91610.mmd)
- **Clone hash:** `6cfe123eb0b59d0f`

```c

void FUN_7101e91610(long param_1,uint param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  ulong uVar13;
  long ****pppplVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  byte ****ppppbVar23;
  uint uVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
// ... (466 more lines)
```

## 16. `FUN_71020271a0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020271a0`  (offset `0x20271a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020271a0(long param_1)`
- **Size / BBs / Incoming:** 2280 bytes / 4 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** EffectModule;req_2d;gauge_parts_on;req_on_joint;req_attach_ground;req_follow;req_continual;remove_continual;remove_all_continual;req_time;req_time_follow;remove_time;remove_all_time;req_emit;remove;remove_all;kill_kind;kill_joint_id;kill_all;detach_all;detach_kind;detach;end_kind;req_after_image;req_after_image_no_parent;clear_all_after_image;remove_after_image;remove_all_after_image;get_local_matrix;set_pos;set_rot;set_scale;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020271a0__71020271a0.c)  [cfg](../decompiled/FUN_71020271a0__71020271a0.mmd)
- **Clone hash:** `a87e10ccfe004d51`

```c

void FUN_71020271a0(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"EffectModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042d72e7,(long ****)FUN_7102017f00,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_2d",(long ****)FUN_71020185f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_on_joint",(long ****)FUN_7102018b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_attach_ground",(long ****)FUN_71020191e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_follow",(long ****)FUN_7102019980,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_continual",(long ****)FUN_710201a1a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_continual",(long ****)FUN_710201a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_continual",(long ****)FUN_710201a540,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time",(long ****)FUN_710201a5f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time_follow",(long ****)FUN_710201abd0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_time",(long ****)FUN_710201b140,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_time",(long ****)FUN_710201b270,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_emit",(long ****)FUN_710201b320,ppppbVar1,in_x4,in_x5,in_x6,
// ... (165 more lines)
```

## 17. `FUN_7101d7cdf0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d7cdf0`  (offset `0x1d7cdf0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101d7cdf0(void)`
- **Size / BBs / Incoming:** 916 bytes / 32 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** playlist_delite;onoff;order_change_fix;order_change_off;order_change_select;set_txt_playlist_name_00;set_txt_playlist_name;mnu_sound_test_playlist_nam;set_txt_song_n_00;set_txt_song_n;set_txt_help;mnu_sound_test_playlist_song_n;set_txt_playlist_time;set_txt_playlist_time_00;mnu_sound_test_playlist_time;mode_empty_03;time_on;time_off;btn_list
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101d7cdf0__7101d7cdf0.c)  [cfg](../decompiled/FUN_7101d7cdf0__7101d7cdf0.mmd)
- **Clone hash:** `b0071d971064eeaf`

```c

void FUN_7101d7cdf0(long *param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long ****pppplVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  lVar13 = *(long *)(param_1[2] + 0x18);
  uVar10 = (*(long *)(param_1[2] + 0x20) - lVar13 >> 3) * 0x2e8ba2e8ba2e8ba3;
  uVar14 = (ulong)param_2;
  if (uVar10 < uVar14 || uVar10 - uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar11 = lVar13 + uVar14 * 0x58;
  lVar12 = *(long *)(lVar11 + 0x38);
  lVar11 = *(long *)(lVar11 + 0x40);
  lVar8 = param_3;
  pcVar7 = "onoff";
// ... (110 more lines)
```

## 18. `FUN_7101f31930`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_bnd_edge_left;set_bnd_edge_right;set_mask_size_map;set_pos_timeline;set_pos_timeline_front;set_pos_timeline_seek;mode_empty_03;set_pos_detail_measure;set_size_movie_length;set_pos_size_map_view;set_pos_map_seek;set_txt_num_clip_movie;set_txt_num_clip_sound;set_txt_num_clip_tellop;set_pos_stretch_left;set_pos_stretch_right;gauge_parts_on;set_offset_stretch;set_offset_pickup_center;set_pos_limit_front;set_pos_limit_band;set_size_limitband_00;set_size_limitband_01;set_pos_map_limit_00;set_pos_map_limit_01;set_txt_map_end;set_txt_key_change;set_txt_limit;set_txt_map_limit;set_txt_map_start;selector;set_parts_btn_next;...
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3c990;FUN_7101f3e4e0;FUN_7101f41680;FUN_71032cbf30;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103777420;FUN_7103778300;FUN_7103778760;...
- **Files:** [decomp](../decompiled/FUN_7101f31930__7101f31930.c)  [cfg](../decompiled/FUN_7101f31930__7101f31930.mmd)
- **Clone hash:** `762c715697862b0f`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f31930(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ***pppbVar4;
  long *plVar5;
  byte **ppbVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ***ppplVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  byte ****ppppbVar28;
  undefined **ppuVar29;
  long *plVar30;
  byte ****ppppbVar31;
  byte ***pppbVar32;
  byte ****ppppbVar33;
// ... (1501 more lines)
```

## 19. `FUN_710200a5a0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200a5a0`  (offset `0x200a5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200a5a0(long param_1)`
- **Size / BBs / Incoming:** 3168 bytes / 5 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** ControlModule;get_stick_angle;get_stick_dir;is_stick_side;get_sub_stick_dir;is_sub_stickSide;gauge_parts_on;is_enable_flick_jump;start_clatter;set_dec_time;set_dec_time_recovery;set_clatter_time;add_clatter_time;get_clatter_time;set_clatter_stop;is_clatter_stop;start_clatter_motion_rate;end_clatter_motion_rate;end_clatter;is_input_clatter;set_clatter_shake_scale;TRANS_A_JUMP_AERIAL;reset_button;reset_trigger;reset_trigger_2;reset_main_stick_x;set_main_stick_x;reset_main_stick_y;set_main_stick_y;reset_main_stick;reset_sub_stick_x;reset_sub_stick_y;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710200a5a0__710200a5a0.c)  [cfg](../decompiled/FUN_710200a5a0__710200a5a0.mmd)
- **Clone hash:** `5c50430a0a5b5603`

```c

void FUN_710200a5a0(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"ControlModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"get_stick_angle",(long ****)FUN_7102001900,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_dir",(long ****)FUN_71020019d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_stick_side",(long ****)FUN_7102001aa0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_sub_stick_dir",(long ****)FUN_7102001b70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_sub_stickSide",(long ****)FUN_7102001c40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_enable_flick_jump",(long ****)FUN_7102001d10,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_clatter",(long ****)FUN_7102001de0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time",(long ****)FUN_71020022d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time_recovery",(long ****)FUN_71020024d0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_clatter_time",(long ****)FUN_71020026d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_clatter_time",(long ****)FUN_71020028d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_clatter_time",(long ****)FUN_7102002ad0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (240 more lines)
```

## 20. `FUN_7101db8810`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db8810`  (offset `0x1db8810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101db8810(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 * param_8, long * * * param_9, long * * * param_10)`
- **Size / BBs / Incoming:** 13408 bytes / 669 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** fighter_cp_boss;fighter_cp_default;fighter_cp_light;fighter_cp_dark;spi_%s;nam_chr1_%02d_%s;set_parts_hbg_00;spirit_null;set_parts_bg_00;set_txt_fighter_00;mode_empty_03;set_parts_spirit_name_00;set_txt_help;attacker;set_parts_hbg_01;set_parts_bg_01;campaign_boss;campaign_light;anim_in;anim_loop;set_txt_fighter_01;cam_info_piece_boss_unknown;set_txt_spirit_01;set_parts_spirit_name_02;supporter;mnu_spirits_challengeboard_detail_target_fighter;set_parts_spirit_name_01;set_parts_spirit_00;set_parts_spirit_01;spirit_cp_show;spirit_cp_hide;set_rep_fighter_00;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710175dfc0;FUN_7101764000;FUN_7101dbbf10;FUN_71024076d0;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_71025ae6d0;FUN_71025b12c0;FUN_71025b39a0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_710323faf0;...
- **Files:** [decomp](../decompiled/FUN_7101db8810__7101db8810.c)  [cfg](../decompiled/FUN_7101db8810__7101db8810.mmd)
- **Clone hash:** `eb5aaa5112c257e3`

```c

void FUN_7101db8810(undefined1 param_1 [16],long ********param_2,undefined8 *param_3,
                   undefined8 param_4,undefined8 param_5,byte ****param_6,long ****param_7,
                   undefined8 *param_8,long ***param_9,long ***param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  long ***ppplVar8;
  byte ***pppbVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte **ppbVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long **pplVar20;
  long lVar21;
  byte ***pppbVar22;
  long ***ppplVar23;
  undefined1 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
// ... (2275 more lines)
```

## 21. `FUN_7101b8bd60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b8bd60`  (offset `0x1b8bd60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b8bd60(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1656 bytes / 87 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_rep_pic_mov;set_parts_txt_time;bottom_out;time_now;time_rec;set_parts_timebar_rec;set_parts_recbtn;selector
- **Callees:** FUN_710323cb80;FUN_710323eba0;FUN_71032cbf30;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103776910;FUN_7103776ad0;FUN_71037780e0;FUN_7103778760;FUN_7103779cc0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b8bd60__7101b8bd60.c)  [cfg](../decompiled/FUN_7101b8bd60__7101b8bd60.mmd)
- **Clone hash:** `e49a2c01bef3c03e`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101b8bd60(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *********ppppppppplVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  byte ***local_1a0;
  long *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
// ... (282 more lines)
```

## 22. `FUN_7101c12580`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c12580`  (offset `0x1c12580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c12580(long param_1, long param_2, long param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2896 bytes / 101 bb / 3 incoming refs
- **Match values:** time
- **Strings touched:** set_parts_det_00;set_txt_det_title_01;set_txt_det_title_00;set_txt_det_title_00_sd;mel_rule_edit_stock_em;mel_rule_edit_stamina_em;mel_rule_edit_time_stock_em;mel_rule_team_edit_time_stock_stamina;mel_rule_edit_time_inifinity_stock_em;mel_rule_team_edit_time_inifinity_stock_stamina
- **Callers:** FUN_710186c570;FUN_7101c0c4f0;FUN_7101c11360
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c12580__7101c12580.c)  [cfg](../decompiled/FUN_7101c12580__7101c12580.mmd)
- **Clone hash:** `3f7f78675d2ff0db`

```c

void FUN_7101c12580(long param_1,long param_2,long param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte abStack_330 [64];
  undefined8 local_2f0;
  byte abStack_2e8 [64];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined2 local_290;
  undefined8 local_28e;
  undefined1 local_286;
  undefined8 local_260;
  byte abStack_258 [64];
  undefined8 local_218;
  byte abStack_210 [64];
  undefined8 local_1d0;
  byte abStack_1c8 [64];
  undefined8 local_188;
  byte abStack_180 [64];
  undefined8 local_140;
  byte local_138 [64];
  undefined8 local_f8;
  byte abStack_f0 [64];
// ... (549 more lines)
```

## 23. `FUN_7101e3db10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e3db10`  (offset `0x1e3db10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e3db10(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2000 bytes / 79 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** view_01;set_txt_facility;cam_searchfield_title;set_rep_facility_bg;data_text;set_txt_data;mode_empty_03;set_txt_searchtime;cam_fac_menu_accessible_sp;cam_searchfield_required_time_0;view_02;cam_school_title;view_00;cam_gym_title;data_updown;caption_up;item_up_1;item_down_0;set_txt_up_00;cam_fac_menu_exp_up;caption_largeup;cam_fac_menu_forget_school;item_up_%d;set_txt_up_%02d;caption_largedown;caption_down;item_down_%d;set_txt_down_%02d;cam_fac_menu_accessible_support_item;cam_searchfield_required_time_1;cam_fac_menu_accessible_energy;cam_searchfield_required_time_2;...
- **Callers:** FUN_7101e3d0c0;FUN_7101e43ee0
- **Callees:** FUN_71003a4ca0;FUN_7102512d40;FUN_71032a3bd0;FUN_71032a3d90;FUN_71032a3e90;FUN_71032a40d0;FUN_71032a50f0;FUN_71032a5210;FUN_71032a5330;FUN_71032a9470;FUN_71032a9540;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101e3db10__7101e3db10.c)  [cfg](../decompiled/FUN_7101e3db10__7101e3db10.mmd)
- **Clone hash:** `7b15e99ffee519d1`

```c

void FUN_7101e3db10(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  bool bVar4;
  ushort uVar5;
  long ****pppplVar6;
  ulong uVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long ****pppplVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100 [8];
  undefined **local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x2a4);
  uVar14 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x5555555555555555;
  if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar11 = *(long *)(param_1 + 0x50) + uVar12 * 0xc;
  cVar1 = *(char *)(lVar11 + 4);
  uVar16 = *(uint *)(lVar11 + 8);
  uVar12 = (ulong)uVar16;
  if (cVar1 == '\0') {
// ... (284 more lines)
```

## 24. `FUN_7101d6fd00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d6fd00`  (offset `0x1d6fd00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d6fd00(undefined8 * param_1)`
- **Size / BBs / Incoming:** 868 bytes / 30 bb / 5 incoming refs
- **Match values:** time
- **Strings touched:** mnu_sound_test_seriese_playback_time
- **Callers:** FUN_7101d6ae20;FUN_7101d6f820
- **Callees:** FUN_7101d88520;FUN_710325ce30;FUN_710325d640;FUN_7103315750;FUN_7103778630;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_7101d6fd00__7101d6fd00.c)  [cfg](../decompiled/FUN_7101d6fd00__7101d6fd00.mmd)
- **Clone hash:** `aaf1d81bb6e79d34`

```c

void FUN_7101d6fd00(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  ulong uVar10;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (1 < iVar1 - 1U) {
    if ((iVar1 != 3) && (iVar1 != 0)) {
      return;
    }
    uVar5 = FUN_7101d88520((long *)*param_1,*(int *)(param_1 + 0x52),*(int *)((long)param_1 + 0x2ac)
                           ,*(int *)(param_1 + 0x56));
    bVar3 = (uVar5 & 0xffffffffff) != 0;
    bVar4 = uVar5 >> 0x38 == 0xd9;
    uVar10 = 0;
    if (*(int *)((long)param_1 + 0x4cc) == 3) {
      if (bVar4 && bVar3) {
        lVar8 = *(long *)(DAT_710532f730 + 8);
        uVar5 = FUN_710325ce30(*(long *)(lVar8 + 0x278),uVar5);
        lVar8 = FUN_710325d640(*(long *)(lVar8 + 0x278),uVar5);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x5c) == 0) {
LAB_7101d6ff90:
            uVar6 = *(uint *)(lVar8 + 0x78);
          }
          else {
            uVar6 = *(int *)(lVar8 + 0x6c) +
                    (*(int *)(lVar8 + 0x6c) - *(int *)(lVar8 + 0x68)) *
                    (*(int *)(lVar8 + 0x5c) + -1);
          }
// ... (64 more lines)
```

## 25. `FUN_7100009d00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** Resolving timed out after %ld milliseconds;select_item;Internal error clearing splay node = %d
;Connection timed out after %ld milliseconds;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Re-used connection seems dead, get a new one
;Operation timed out after %ld milliseconds with %ld bytes received;Hostname '%s' was found in DNS cache
;dys_yoga03_l_03_set;Pipe broke: handle %p, url = %s
;In state %d with no easy_conn, bail out!

- **Callers:** FUN_7100009aa0
- **Callees:** FUN_7100002af0;FUN_7100002f80;FUN_7100004200;FUN_7100004910;FUN_7100004a10;FUN_7100005a10;FUN_7100005c60;FUN_71000067f0;FUN_7100006870;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_710000c8f0;FUN_710000c920;FUN_710000c950;FUN_710000e660;...
- **Files:** [decomp](../decompiled/FUN_7100009d00__7100009d00.c)  [cfg](../decompiled/FUN_7100009d00__7100009d00.mmd)
- **Clone hash:** `8e0dba2c0a10b389`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
// ... (1163 more lines)
```

## 26. `FUN_7101d82780`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d82780`  (offset `0x1d82780`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101d82780(void)`
- **Size / BBs / Incoming:** 1124 bytes / 44 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_playlist_name;mnu_sound_test_playlist_nam;set_txt_song_n_00;set_txt_help;mnu_sound_test_playlist_song_n;set_txt_playlist_time;mnu_sound_test_playlist_time;mode_empty_03;time_on;added_off;btn_list_make;time_off;added_on;sound_add;btn_list
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101d82780__7101d82780.c)  [cfg](../decompiled/FUN_7101d82780__7101d82780.mmd)
- **Clone hash:** `4825f265d26bfa09`

```c

void FUN_7101d82780(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined **ppuStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined **ppuStack_70;
  ulong uStack_68;
  
  if (param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x7104319286);
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710425f810);
    return;
  }
  lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  iVar2 = param_2 - (uint)(0 < param_2);
  uVar15 = (ulong)iVar2;
  uVar8 = (*(long *)(*(long *)(param_1 + 8) + 0x20) - lVar16 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if (uVar8 < uVar15 || uVar8 - uVar15 == 0) {
// ... (120 more lines)
```

## 27. `FUN_7102192760`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** TIME
- **Strings touched:** FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_LEAFSHIELD;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ENABLE_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP_ACCEPT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROCKMAN_MOTION_PART_SET_UDE;FIGHTER_ROCKMAN_MOTION_PART_SET_HAVE_FLIP;FIGHTER_ROCKMAN_MOTION_PART_SET_KIND_TERM;FIGHTER_ROCKMAN_ARM_LEFT;FIGHTER_ROCKMAN_ARM_RIGHT;FIGHTER_ROCKMAN_ARM_MAX;FIGHTER_ROCKMAN_ARMFORM_INVALID;FIGHTER_ROCKMAN_ARMFORM_HAND;FIGHTER_ROCKMAN_ARMFORM_ROCKBUSTER;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102192760__7102192760.c)  [cfg](../decompiled/FUN_7102192760__7102192760.mmd)
- **Clone hash:** `464ecc22f982b06b`

```c

void FUN_7102192760(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1050 more lines)
```

## 28. `FUN_71021d37a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d37a0`  (offset `0x21d37a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d37a0(void)`
- **Size / BBs / Incoming:** 17364 bytes / 31 bb / 1 incoming refs
- **Match values:** TIME
- **Strings touched:** FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_FORBID_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_REPEAT_COUNT_ON_CATEGORY_SPECIAL;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT_ON_AIR;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_REPLASE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_TABLE_RECREATE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_FINAL_MOVIE_HASH;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_MATERIAL_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_COUNT;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_REQUEST_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_DISABLE_CRAFT_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_LANDING_HIGH_PLACE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_MINI_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SITUATION_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_COUNT_BACKUP;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_GRADE_1_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_WOOD_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_STONE_TABLE_PROGRESS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021d37a0__71021d37a0.c)  [cfg](../decompiled/FUN_71021d37a0__71021d37a0.mmd)
- **Clone hash:** `4786da1208e21a78`

```c

void FUN_71021d37a0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME",
// ... (1992 more lines)
```

## 29. `FUN_7100429840`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100429840`  (offset `0x429840`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100429840(void)`
- **Size / BBs / Incoming:** 2424 bytes / 101 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** B_chara_morning;B_chara_daytime;B_chara_evening;B_chara_night;E_chara_morning;E_chara_daytime;E_chara_evening;E_chara_night;stage_morning;stage_daytime;stage_evening;stage_night;reflection_cubemap_morning;reflection_cubemap_daytime;reflection_cubemap_evening;reflection_cubemap_night
- **Callees:** FUN_71000001c0;FUN_7102682d60;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7100429840__7100429840.c)  [cfg](../decompiled/FUN_7100429840__7100429840.mmd)
- **Clone hash:** `14346b3dea16c571`

```c

void FUN_7100429840(void)

{
  char *pcVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long ****pppplVar4;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int local_118 [2];
  byte local_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 local_108;
  undefined5 uStack_107;
  undefined1 uStack_102;
  undefined1 uStack_101;
  char *local_100;
  undefined4 local_f8;
  byte local_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined5 uStack_e7;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  char *local_e0;
  undefined4 local_d8;
  byte local_d0;
  undefined4 uStack_cf;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
// ... (506 more lines)
```

## 30. `FUN_7101c9ed20`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c9ed20`  (offset `0x1c9ed20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 488 bytes / 38 bb / 3 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_help;mnu_anyone_rule_edit_help_1on1;mnu_anyone_rule_edit_help_stamina;mnu_anyone_rule_edit_help_stamina_n;mnu_anyone_rule_edit_help_stock_n;mnu_anyone_rule_edit_help_time_end_n;mnu_anyone_rule_edit_help_stg_all;mnu_anyone_rule_edit_help_customize;mnu_anyone_rule_edit_help_charge_off;mnu_anyone_rule_edit_help_time_n;mnu_anyone_rule_edit_help_charge_on;mnu_anyone_rule_edit_help_mel;mnu_anyone_rule_edit_help_mel_team;mnu_anyone_rule_edit_help_time;mnu_anyone_rule_edit_help_stock;mnu_anyone_rule_edit_help_no_gimmick;mnu_anyone_rule_edit_help_battlefield;mnu_anyone_rule_edit_help_end;mnu_anyone_rule_edit_help_battlefield_s
- **Callers:** FUN_7101c9c5e0;FUN_7101c9def0
- **Callees:** FUN_7103776910;FUN_710377a120;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c9ed20__7101c9ed20.c)  [cfg](../decompiled/FUN_7101c9ed20__7101c9ed20.mmd)
- **Clone hash:** `f328c4e5f9a0ba85`

```c

void FUN_7101c9ed20(long param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined **local_38;
  ulong local_30;
  ushort local_24 [2];
  
  puVar4 = param_3;
  FUN_7103776910(&local_38,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  switch(*param_3) {
  case 0:
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel_team";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
      pcVar3 = "mnu_anyone_rule_edit_help_1on1";
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 2);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_time";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_stock";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
// ... (69 more lines)
```

## 31. `FUN_7101fa11c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** sv_system;battle_object;battle_object_module_accessor;gauge_parts_on;battle_object_category;TRANS_A_JUMP_AERIAL;battle_object_kind;owner_id;get_status_func;entry_child_thread_table;get_global_table;get_global_fighter_table;get_line_state_table;get_child_thread_table;mode_empty_03;get_child_thread_env_table;sv_module_access;motion;kinetic;slope;ground;camera;control;effect;sound;article;cancel;damage;combo;model;attack;search;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fa11c0__7101fa11c0.c)  [cfg](../decompiled/FUN_7101fa11c0__7101fa11c0.mmd)
- **Clone hash:** `a31b4b26022e17c7`

```c

void FUN_7101fa11c0(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"sv_system",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object",(long ****)FUN_7101f95350,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_module_accessor",(long ****)FUN_7101f95380,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_category",(long ****)FUN_7101f953b0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_kind",(long ****)FUN_7101f953e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"owner_id",(long ****)FUN_7101f95410,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_status_func",(long ****)FUN_7101f95440,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"entry_child_thread_table",(long ****)FUN_7101f95510,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_table",(long ****)FUN_7101f956d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_fighter_table",(long ****)FUN_7101f95710,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_line_state_table",(long ****)FUN_7101f95750,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_table",(long ****)FUN_7101f95790,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_env_table",(long ****)FUN_7101f95840,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
// ... (457 more lines)
```

## 32. `FUN_7101d727a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d727a0`  (offset `0x1d727a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d727a0(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4880 bytes / 221 bb / 3 incoming refs
- **Match values:** time
- **Strings touched:** selector_00;set_ctl_btn_00;set_ctl_btn_01;set_ctl_btn_02;set_ctl_btn_03;set_dummy;mark_backtrack;mark_play;mark_nexttrack;mode_empty_03;mark_fullplay;set_parts_bg_wave_ser;mark_shuffle;set_parts_bg_wave_voi;chara/chara_4/chara_4_;plylst;set_parts_bg_wave_plylst;other_01;btn_off;keyhelp_minus_off;keyhelp_minus_on;set_parts_scr_s_name_00;set_txt_scr_sound_source;set_txt_arranger_01;set_timebar_ser;set_parts_scr_voi_nam;set_parts_scr_s_name_01;set_txt_scr_sound_sou_01;set_txt_arranger_00;set_timebar_list;set_txt_time;arrange_off;...
- **Callers:** FUN_710184b4c0;FUN_71018dd020;FUN_7101f431c0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101796d70;FUN_710184cdd0;FUN_7101989a30;FUN_7101d6e660;FUN_7101d70b60;FUN_7101d71ea0;FUN_7101d72060;FUN_7101d721f0;FUN_71033152c0;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;...
- **Files:** [decomp](../decompiled/FUN_7101d727a0__7101d727a0.c)  [cfg](../decompiled/FUN_7101d727a0__7101d727a0.mmd)
- **Clone hash:** `2ad7cd7576c55e79`

```c

/* WARNING: Removing unreachable block (ram,0x007101d729bc) */
/* WARNING: Removing unreachable block (ram,0x007101d729c0) */

void FUN_7101d727a0(long param_1,undefined4 param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long ***ppplVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long **pplVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  undefined8 extraout_x1;
  undefined **ppuVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  byte ***local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  ulong local_1c0;
  undefined1 local_1b8;
// ... (828 more lines)
```

## 33. `FUN_7101ba9a40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ba9a40`  (offset `0x1ba9a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ba9a40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3252 bytes / 176 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_rule_00;set_txt_rule_01;set_txt_rule_02;in_00;in_01;in_02;out_00;out_01;out_02;on_00;on_01;on_02;off_00;off_01;off_02;time_00;time_01;time_02;icon_on_stagegimmic_00;icon_on_stagegimmic_01;icon_on_stagegimmic_02;icon_on_specialrule_00;icon_on_specialrule_01;icon_on_specialrule_02;icon_blink_stagegimmic_00;icon_blink_stagegimmic_01;icon_blink_stagegimmic_02;icon_blink_specialrule_00;icon_blink_specialrule_01;icon_blink_specialrule_02
- **Callers:** FUN_71013dfd20
- **Callees:** FUN_7101414b10;FUN_7101b42450;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101ba9a40__7101ba9a40.c)  [cfg](../decompiled/FUN_7101ba9a40__7101ba9a40.mmd)
- **Clone hash:** `4ba029e5658fe63e`

```c

void FUN_7101ba9a40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *__s;
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long ***local_70;
  ulong local_68;
  undefined4 local_54;
  
  pppplVar9 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  *param_1 = &PTR_FUN_71050ab8d8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
// ... (632 more lines)
```

## 34. `FUN_7101d7bc40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d7bc40`  (offset `0x1d7bc40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d7bc40(long * param_1, int param_2, long param_3, ulong * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1388 bytes / 59 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** set_parts_text_scroll;set_mark_playing_00;onoff;playing;playing_select;select_on;select_keep;select_off;new_on;new_off;playlist_delite;order_change_off;order_change_on;bgm_title_%s;set_txt_detail_s_num_on;mnu_sound_test_series_detail_sonb_number;arrange;new_arrange;arrange_off;set_txt_detail_song_time;mnu_sound_test_series_detail_song_time;mnu_sound_test_playlist_sele_time
- **Callers:** FUN_7101d7b210;FUN_7101d7b270
- **Callees:** FUN_71003a4ca0;FUN_7101d85c90;FUN_71032570e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778630;FUN_710377a280;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d7bc40__7101d7bc40.c)  [cfg](../decompiled/FUN_7101d7bc40__7101d7bc40.mmd)
- **Clone hash:** `6dddaf2da94b1661`

```c

void FUN_7101d7bc40(long *param_1,int param_2,long param_3,ulong *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulong *puVar13;
  byte *pbVar14;
  uint uVar15;
  long *plVar16;
  undefined **local_158;
  ulong local_150;
  uint local_148;
  undefined4 local_144;
  byte local_140 [64];
  uint auStack_100 [2];
  char acStack_f8 [64];
  undefined **local_b8;
  undefined8 local_b0;
  undefined **local_70;
  ulong local_68;
  
  lVar10 = param_3;
  puVar13 = param_4;
  FUN_7103776640(&local_70,param_3,(byte ****)"set_parts_text_scroll",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (((int)param_1[8] == (int)param_1[6]) && (*(int *)((long)param_1 + 0x34) == param_2)) {
    bVar2 = *(int *)((long)param_1 + 0x2c) == 1;
    bVar3 = *(int *)((long)param_1 + 0x2c) == 2;
// ... (182 more lines)
```

## 35. `FUN_7100023290`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** SOCKS5: connecting to HTTP proxy %s port %d
;SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]
;SOCKS5: no connection here;Connection time-out;SOCKS5: connection timeout;warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu
;SOCKS5: error occurred during connection;SOCKS5 communication to %s:%d
;NODE_PRE_REFRACT_BLEND;SOCKS5 nothing to read;Unable to send initial SOCKS5 request.;SOCKS5 read timeout;SOCKS5 read error occurred;SOCKS5 GSSAPI per-message authentication is not supported.;Unable to receive initial SOCKS5 response.;Received invalid version in initial SOCKS5 response.;No authentication method was acceptable.;Undocumented SOCKS5 mode attempted to be used by server.;No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.);Failed to send SOCKS5 sub-negotiation request.;User was rejected by the SOCKS5 server (%d %d).;SOCKS5 connect to IPv4 %s (locally resolved)
;Unable to receive SOCKS5 sub-negotiation response.;select_item;Failed to send SOCKS5 connect request.;SOCKS5 connection to %s not supported
;Failed to resolve "%s" for SOCKS5 connect.;SOCKS5 reply has wrong version, version should be 5.;Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d);SOCKS5 request granted.
;Can't complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d);Can't complete SOCKS5 connection to %s:%d. (%d);...
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100023290__7100023290.c)  [cfg](../decompiled/FUN_7100023290__7100023290.mmd)
- **Clone hash:** `b3d3e348bc39a1b0`

```c

/* WARNING: Removing unreachable block (ram,0x00710002388c) */

int FUN_7100023290(ulong param_1,char *param_2,byte *param_3,long *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  size_t __n_00;
  size_t __n_01;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_328;
  long local_318;
  long local_310 [8];
  long *local_2d0;
  undefined8 local_2c8;
  byte local_2c0 [7];
  byte local_2b9;
  byte local_2b8;
  byte local_2b7;
  
  lVar15 = param_6[0x27];
  lVar13 = *param_6;
  uVar1 = *(uint *)((long)param_6 + (long)(int)param_5 * 4 + 600);
// ... (381 more lines)
```

## 36. `FUN_710042a1c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710042a1c0`  (offset `0x42a1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710042a1c0(void)`
- **Size / BBs / Incoming:** 1204 bytes / 46 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** B_loupe_morning;B_loupe_daytime;B_loupe_evening;B_loupe_night;E_loupe_morning;E_loupe_daytime;E_loupe_evening;E_loupe_night;EX_loupe_morning;EX_loupe_daytime;EX_loupe_evening;EX_loupe_night
- **Callees:** FUN_71000001c0;FUN_7102682d60;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710042a1c0__710042a1c0.c)  [cfg](../decompiled/FUN_710042a1c0__710042a1c0.mmd)
- **Clone hash:** `4cfe3fa53e187bb1`

```c

void FUN_710042a1c0(void)

{
  ulong uVar1;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int local_108 [2];
  byte local_100;
  undefined7 uStack_ff;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined1 uStack_ef;
  undefined6 uStack_ee;
  undefined4 local_e8;
  byte local_e0;
  undefined7 uStack_df;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined1 uStack_cf;
  undefined6 uStack_ce;
  undefined4 local_c8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined6 uStack_ae;
  undefined4 local_a8;
  byte local_a0;
  undefined5 uStack_9f;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 local_98;
// ... (210 more lines)
```

## 37. `FUN_71018ec8c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ec8c0`  (offset `0x18ec8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ec8c0(long param_1, undefined8 param_2, ClockSnapshot * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3144 bytes / 162 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_txt_time;mnu_spirits_challengeboard_detail_time_01;mnu_spirits_challengeboard_detail_time_02;on_limit;off_limit
- **Callees:** FUN_71000001c0;FUN_710175dfc0;FUN_7101764000;FUN_710177a5c0;FUN_71018edb50;FUN_7101af2070;FUN_7101afe3e0;FUN_7101d944a0;FUN_7101d96e80;FUN_7101da2890;FUN_71024076d0;FUN_710248e4c0;FUN_71024a2360;FUN_71032673c0;FUN_7103267960;FUN_7103267ce0;...
- **Files:** [decomp](../decompiled/FUN_71018ec8c0__71018ec8c0.c)  [cfg](../decompiled/FUN_71018ec8c0__71018ec8c0.mmd)
- **Clone hash:** `227041111d833c11`

```c

void FUN_71018ec8c0(long param_1,undefined8 param_2,ClockSnapshot *param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  undefined8 extraout_x1_02;
  undefined **ppuVar11;
  byte ****ppppbVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  short *psVar16;
  void *__src;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_250 [2];
  undefined **local_248;
  long local_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined **local_210;
  ulong local_208;
// ... (450 more lines)
```

## 38. `FUN_7100014700`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100014700`  (offset `0x14700`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100014700(long * param_1)`
- **Size / BBs / Incoming:** 2180 bytes / 73 bb / 13 incoming refs
- **Match values:** Time
- **Strings touched:** Callback aborted;** Resuming transfer from byte position %ld
;  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
;%2ld:%02ld:%02ld;--:--:--;%3ldd %02ldh;%7ldd;%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s
- **Callers:** FUN_7100009d00;FUN_710000bdc0;FUN_710000c9d0;FUN_7100014690;FUN_7100017ae0
- **Callees:** FUN_7100007ef0;FUN_7100015310;FUN_7100016040;FUN_7100017740;FUN_7100017750;FUN_71000177a0;FUN_7100027820;FUN_7100027870
- **Files:** [decomp](../decompiled/FUN_7100014700__7100014700.c)  [cfg](../decompiled/FUN_7100014700__7100014700.mmd)
- **Clone hash:** `4cc8b70ffde5492c`

```c

int FUN_7100014700(long *param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong in_x4;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  char local_d0 [16];
  char local_c0 [16];
  char local_b0 [8];
  undefined1 local_a8;
  undefined1 auStack_a4 [10];
  undefined1 auStack_9a [10];
  undefined1 auStack_90 [10];
  undefined1 auStack_86 [10];
  undefined1 auStack_7c [10];
  undefined1 auStack_72 [18];
  
  lVar13 = *param_1;
  iVar4 = *(int *)(lVar13 + 0xb58);
  lVar15 = *(long *)(lVar13 + 0x9e8);
  lVar16 = *(long *)(lVar13 + 0x9f0);
// ... (254 more lines)
```

## 39. `FUN_7101f89310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** TIME
- **Strings touched:** FIGHTER_AI_PLAYER_MAX;FIGHTER_AI_FIGHTER_MAX;FIGHTER_AI_ENEMY_INDEX;FIGHTER_AI_OBJECT_MAX;FIGHTER_AI_INPUT_BUFFER_MAX;FIGHTER_AI_MARK_WEAPON_MAX;FIGHTER_AI_ENEMY_MAX;FIGHTER_AI_CP_RANK_MAX;FIGHTER_AI_CP_LEVEL_9;FIGHTER_AI_CP_LEVEL_8;FIGHTER_AI_CP_LEVEL_7;FIGHTER_AI_CP_LEVEL_6;FIGHTER_AI_CP_LEVEL_5;FIGHTER_AI_CP_LEVEL_4;FIGHTER_AI_CP_LEVEL_3;FIGHTER_AI_CP_LEVEL_2;FIGHTER_AI_CP_LEVEL_1;FIGHTER_AI_MELEE_CP_LEVEL_9;FIGHTER_AI_MELEE_CP_LEVEL_8;FIGHTER_AI_MELEE_CP_LEVEL_7;FIGHTER_AI_MELEE_CP_LEVEL_6;FIGHTER_AI_MELEE_CP_LEVEL_5;FIGHTER_AI_MELEE_CP_LEVEL_4;FIGHTER_AI_MELEE_CP_LEVEL_3;gauge_parts_on;FIGHTER_AI_MELEE_CP_LEVEL_2;FIGHTER_AI_MELEE_CP_LEVEL_1;FIGHTER_AI_ITEM_PRIORITY_MAX;FIGHTER_AI_ITEM_PRIORITY_HIGH;FighterAICPType;CPU_NORMAL;CPU_STAY;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f89310__7101f89310.c)  [cfg](../decompiled/FUN_7101f89310__7101f89310.mmd)
- **Clone hash:** `f6405f789c3fe6a5`

```c

void FUN_7101f89310(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_68;
  long local_60;
  int local_58;
  
  local_60 = 0;
  local_58 = -3;
  local_68 = param_1;
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_PLAYER_MAX",(undefined **)&DAT_00000008,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_FIGHTER_MAX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_INDEX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_OBJECT_MAX",(undefined **)&DAT_00000011,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_INPUT_BUFFER_MAX",(undefined **)&DAT_00000010,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_MARK_WEAPON_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_MAX",(undefined **)0xa,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_RANK_MAX",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_9",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_8",(undefined **)0x4b,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_7",(undefined **)&DAT_0000003c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_6",(undefined **)&DAT_00000030,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_5",(undefined **)&DAT_0000002a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_4",(undefined **)0x1f,param_4,param_5,
// ... (2673 more lines)
```

## 40. `FUN_71018ee4a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ee4a0`  (offset `0x18ee4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ee4a0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, byte * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9388 bytes / 372 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** %s.bntx;selector_0;set_parts_btn_%02d;selector_1;set_parts_btn_s_item;selector_2;set_parts_det_key_00;part_icon_txt;set_txt_help;mnu_spirits_challengeboard_list_item_btn;chara/chara_4/chara_4_;set_pic_icon;set_txt_spirits_num;mnu_spirits_challengeboard_list_stock_n;set_parts_btn_0%d;set_txt_time_limit;set_txt_time_wait
- **Callers:** FUN_71018f0a20
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101696040;FUN_7101a7ed70;FUN_7101d92d80;FUN_7101d92d90;FUN_7101d94d60;FUN_7101d962f0;FUN_7101d970a0;FUN_7101d97570;FUN_7101d99870;FUN_7101da17b0;FUN_7101da20e0;FUN_710248bf10;FUN_710248ed50;FUN_71024a71e0;...
- **Files:** [decomp](../decompiled/FUN_71018ee4a0__71018ee4a0.c)  [cfg](../decompiled/FUN_71018ee4a0__71018ee4a0.mmd)
- **Clone hash:** `373c55e92fbccf85`

```c

void FUN_71018ee4a0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   byte ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  short *psVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  byte bVar6;
  short sVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  ushort uVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 uVar18;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (1707 more lines)
```

## 41. `FUN_71013cee40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013cee40`  (offset `0x13cee40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013cee40(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 296 bytes / 10 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** dys_yoga03_l_03_set;mnu_convention_session_time
- **Callers:** FUN_71015637a0
- **Callees:** FUN_7103778ab0;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71013cee40__71013cee40.c)  [cfg](../decompiled/FUN_71013cee40__71013cee40.mmd)
- **Clone hash:** `17aed9682f2412b5`

```c

void FUN_71013cee40(long *param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  ushort local_14 [2];
  
  if (*(char *)(*param_1 + 0x14) != '\0') {
    FUN_7103778ab0(&local_30,(undefined8 *)(*(long *)(param_1[0x26] + 0x80) + 0x318),param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    if (*(long **)(local_28 + 0x10) != (long *)0x0) {
      local_14[0] = 0;
      local_14[1] = 0;
      FUN_71037a2270(*(long **)(local_28 + 0x10),local_14,0,0);
    }
    FUN_710377a280((long)&local_30,(byte *)"mnu_convention_session_time",2);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
  }
  return;
}


```

## 42. `FUN_71021723e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** TIME
- **Strings touched:** FIGHTER_PIKMIN_INSTANCE_WORK_INT_START;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1;FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_2;FIGHTER_PIKMIN_INSTANCE_WORK_INT_THROW_PIKMIN_VARIATION;FIGHTER_PIKMIN_INSTANCE_WORK_INT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_SYNC;FIGHTER_PIKMIN_STATUS_ATTACK_AIR_WORK_FLAG_DETACH;FIGHTER_PIKMIN_INSTANCE_ATTACK_AIR_WORK_FLAG_FALL_SPECIAL;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CATCH_CUT;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_HOMERUN_CONTEST;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_CHANGE_CATCH_MOTION_RATE;FIGHTER_PIKMIN_INSTANCE_WORK_ID_FLAG_PIKMIN_CATCH_DASH_STATUS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021723e0__71021723e0.c)  [cfg](../decompiled/FUN_71021723e0__71021723e0.mmd)
- **Clone hash:** `8980d91ab7f317ab`

```c

void FUN_71021723e0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_START",(undefined **)0x100000bc
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_BEFORE_PRE_PIKMIN_VARIATION",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_ALLOCATE_COLLISION_GROUP",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_TROOPS_MANAGER_ADDRESS",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_EFFECT_HANDLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_WING_PIKMIN_END_FRAME_COUNT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_CURSOR_HANDLE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_ANTENNA_EFFECT_HANDLE",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_NUM",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_0"
                 ,(undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PIKMIN_INSTANCE_WORK_INT_PIKMIN_HOLD_PIKMIN_OBJECT_ID_1"
                 ,(undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1571 more lines)
```

## 43. `FUN_7101a2b570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2b570`  (offset `0x1a2b570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2b570(undefined * * param_1, undefined8 param_2, undefined * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22080 bytes / 1202 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** disconnect_off;indicator_%d;disconnect_on;mel_chara_select_lv_n;cp_level_%d;hand_catch;set_lct_controller_entry;btn_anim;set_txt_btn;set_parts_lct;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;controller_max;controller_fp;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a31860
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710137bc30;FUN_71016ea290;FUN_71016ea960;FUN_71016f6340;FUN_710175dfc0;FUN_7101764000;FUN_71019eb330;FUN_71019f08a0;FUN_71019f1410;FUN_7101a000c0;FUN_7101a029b0;FUN_7101a04c80;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101a2b570__7101a2b570.c)  [cfg](../decompiled/FUN_7101a2b570__7101a2b570.mmd)
- **Clone hash:** `9f20780a0c7432be`

```c

/* WARNING: Removing unreachable block (ram,0x007101a2fb0c) */
/* WARNING: Removing unreachable block (ram,0x007101a2d6d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a2b570(undefined **param_1,undefined8 param_2,undefined **param_3,
                   long ************param_4,long ****param_5,ulong param_6,undefined8 param_7,
                   undefined8 param_8)

{
  undefined **ppuVar1;
  float *pfVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  long ***********ppppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined1 *puVar21;
  long *********ppppppppplVar22;
  long **********pppppppppplVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
// ... (4049 more lines)
```

## 44. `FUN_71020c9380`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** FighterUtil;set_damage_fly_angle;get_ground_correct_kind_air_trans;get_stick_x_rate;TRANS_A_JUMP_AERIAL;get_stick_y_rate;is_hammer_status;is_hammer_motion;tread_remove_constraint;get_air_ground_touch_info;set_cloud_through_check;check_cloud_through_out;set_ice_effect;set_ice_exit_effect;set_water_dive_effect;calc_water_surface_pos;get_water_area_info;get_team_color;is_miienemy_fighter_kind;adjust_butterflynet;end_butterflynet;gauge_parts_on;adjust_bitten_wario;get_bezier_pos;get_shield_type_of_guard;init_big_small;exec_big_small;exit_big_small;set_hit_data;reset_hit_data;get_effect_team_color;get_handi;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020c9380__71020c9380.c)  [cfg](../decompiled/FUN_71020c9380__71020c9380.mmd)
- **Clone hash:** `9a52585cec2ad2b0`

```c

void FUN_71020c9380(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterUtil",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_damage_fly_angle",(long ****)FUN_71020bcdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_ground_correct_kind_air_trans",(long ****)FUN_71020bd260,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_x_rate",(long ****)FUN_71020bd400,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_y_rate",(long ****)FUN_71020bd6a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_status",(long ****)FUN_71020bd940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_motion",(long ****)FUN_71020bda00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"tread_remove_constraint",(long ****)FUN_71020bdb00,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_air_ground_touch_info",(long ****)FUN_71020bdca0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_cloud_through_check",(long ****)FUN_71020be0d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"check_cloud_through_out",(long ****)FUN_71020be220,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_effect",(long ****)FUN_71020be310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_exit_effect",(long ****)FUN_71020be520,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_water_dive_effect",(long ****)FUN_71020be700,ppppbVar1,in_x4
// ... (185 more lines)
```

## 45. `FUN_7101714c00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** lang:%s;DataStorePreparePostParam: (;size=;, name=;, dataType=;, accessPermission=;DataStorePermission: (permission=;, targetIds=(;, updatePermission=;, dataFlag=;, period=;, referDataId=;, persistenceInitParam=;DataStorePersistenceInitParam: (;NODE_PRE_REFRACT_BLEND;persistenceSlotId=;, deleteLastObject=;, ratingInitParams=(;slot=;, ratingInitParam=;DataStoreRatingInitParam: (;flag=;, internalFlag=;, lockType=;, initialValue=;, rangeMin=;, rangeMax=;, periodHour=;, periodDuration=;, tags=(;, metaBinary=;country;...
- **Callers:** FUN_71017320d0;FUN_7101732d10
- **Callees:** FUN_71001aff70;FUN_71001b0ab0;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3300;FUN_71001b4390;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4b40;FUN_71001b4e80;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b61d0;FUN_71001b6320;...
- **Files:** [decomp](../decompiled/FUN_7101714c00__7101714c00.c)  [cfg](../decompiled/FUN_7101714c00__7101714c00.mmd)
- **Clone hash:** `b2151cc381e6a915`

```c

void FUN_7101714c00(long param_1,long param_2,undefined2 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long ****pppplVar9;
  undefined1 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  byte *pbVar26;
  int iVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****local_1b0;
  long ****local_1a8;
  undefined8 *local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
// ... (897 more lines)
```

## 46. `FUN_7101d9d070`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9d070`  (offset `0x1d9d070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17636 bytes / 890 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** set_parts_bg_00;campaign_boss;campaign_dark;anim_in;anim_loop;set_rep_boss;set_rep_boss_sdw;rule_spirits_campaign_boss;boss_silhouette;rule_spirits_board;set_rep_fighter;set_rep_fighter_sdw;set_rep_fighter_fb;set_rep_fighter_fb_sdw;rule_spirits_campaign_fb_dark;set_rep_fighter_ld;rule_spirits_campaign_sb_dark;boss_art;redeye_%02d;redeye_00;set_parts_aw;set_rep_aura_00;set_rep_spirit_aw;set_parts_base;set_parts_class;off_empty;on_empty;set_txt_series;tit_series_%s;rule_spirits_campaign_sb_light;tit_append_%s;tit_%s;...
- **Callers:** FUN_7101da2510
- **Callees:** FUN_71003a4ca0;FUN_7101696040;FUN_7101da1560;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_710259c150;FUN_71025ad150;FUN_71025b12c0;FUN_71025b1bc0;FUN_71025b39a0;FUN_71025caab0;FUN_71025cad00;FUN_71025cae70;FUN_71025cb340;FUN_71025cb980;...
- **Files:** [decomp](../decompiled/FUN_7101d9d070__7101d9d070.c)  [cfg](../decompiled/FUN_7101d9d070__7101d9d070.mmd)
- **Clone hash:** `6639c5279f8ec4f3`

```c

void FUN_7101d9d070(long param_1,long param_2,ushort param_3,byte ****param_4,long ****param_5,
                   ulong param_6,ulong param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  long ***ppplVar6;
  float fVar7;
  undefined4 uVar8;
  long ********pppppppplVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined1 uVar25;
  undefined8 extraout_x1;
  char *pcVar26;
  undefined8 extraout_x1_00;
  undefined *puVar27;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
// ... (3048 more lines)
```

## 47. `FUN_7101c108f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** time
- **Strings touched:** bg_banner_rule_detail;bg_banner_rule_hp;bg_banner_team_com;bg_banner_time_limit;bg_banner_stock_num;bg_banner_hp_mode;bg_banner_victory_cond;bg_banner_spirit_icon;bg_banner_cp_level;bg_banner_handicap_damage;bg_banner_stage_select;bg_banner_item_switch;bg_banner_stage_switch;bg_banner_team_attack;bg_banner_def_reaction;bg_banner_charge_final;bg_banner_handicap_boost;bg_banner_stage_gimmick;bg_banner_stage_number;bg_banner_stage_change;bg_banner_pause;bg_banner_score_disp;bg_banner_battle_max_num;bg_banner_scaledown_stage;bg_banner_recovery_value;bg_banner_damage_disp;bg_banner_allbattle_unreversal;bg_banner_drop_bomb;bg_banner_rule_stock;bg_banner_rule_time
- **Callers:** FUN_7101c0cd40;FUN_7101c0e810;FUN_7101c10630
- **Callees:** FUN_7103776390;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c108f0__7101c108f0.c)  [cfg](../decompiled/FUN_7101c108f0__7101c108f0.mmd)
- **Clone hash:** `b5c0bc5b38099e58`

```c

void FUN_7101c108f0(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  switch(param_2) {
  case 2:
    if (*(char *)(param_1 + 0x659) == '\x01') {
      pcVar3 = "bg_banner_rule_stock";
    }
    else if (*(char *)(param_1 + 0x659) == '\x02') {
      pcVar3 = "bg_banner_rule_hp";
    }
    else {
      pcVar3 = "bg_banner_rule_time";
    }
    break;
  case 3:
    pcVar3 = "bg_banner_team_com";
    break;
  case 4:
    pcVar3 = "bg_banner_time_limit";
    break;
  case 5:
    pcVar3 = "bg_banner_stock_num";
    break;
  case 6:
    pcVar3 = "bg_banner_hp_mode";
    break;
  case 7:
    pcVar3 = "bg_banner_victory_cond";
    break;
// ... (87 more lines)
```

## 48. `FUN_7101d962f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d962f0`  (offset `0x1d962f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d962f0(long param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2952 bytes / 139 bb / 12 incoming refs
- **Match values:** time
- **Strings touched:** set_parts_atr_icon;spirit_supporter;spirit_attacker;set_parts_atr_bg;arrow_hide;set_parts_class;class_none;select_item;color_none;class_ace;plate_side;color_ace;class_legend;color_legend;class_hope;color_hope;set_pic_txt;off_empty;on_empty;off_event;on_event;off_event_pin;on_event_pin;set_parts_text_scroll;base_spirit;base_wait;base_lock;on_limit;off_limit;mnu_spirits_challengeboard_list_time_02;mnu_spirits_challengeboard_list_time_01;set_txt_mask;...
- **Callers:** FUN_71018ee4a0;FUN_7101d92f40;FUN_7101d970a0
- **Callees:** FUN_71025b1400;FUN_710323af70;FUN_710323c4e0;FUN_7103240d30;FUN_710339dde0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7101d962f0__7101d962f0.c)  [cfg](../decompiled/FUN_7101d962f0__7101d962f0.mmd)
- **Clone hash:** `0e9ec0694d8ee269`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101d962f0(long param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined **local_118;
  ulong local_110 [8];
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined5 uStack_9d;
// ... (466 more lines)
```

## 49. `FUN_7101fea810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** time
- **Strings touched:** AttackModule;clear_all;clear;sleep_partialy;set_attack;set_attack_2;set_absolute;hit_absolute;hit_absolute_joint;set_absolute_lr;set_whole;sleep;active_part_num;is_attack;set_invalid_invincible;is_invalid_invincible;set_invalid_xlu;is_invalid_xlu;is_hit_abs;set_power;add_power;set_vector;set_size;set_target_category;off_target_kind;set_offset;set_offset2;get_offset2;set_node;set_serial_hit_frame;TRANS_A_JUMP_AERIAL;get_power;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fea810__7101fea810.c)  [cfg](../decompiled/FUN_7101fea810__7101fea810.mmd)
- **Clone hash:** `f5933f559ea092c5`

```c

void FUN_7101fea810(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"AttackModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7101fd11c0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7101fd1270,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep_partialy",(long ****)FUN_7101fd1440,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack",(long ****)FUN_7101fd1610,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack_2",(long ****)FUN_7101fd59c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute",(long ****)FUN_7101fd5b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute",(long ****)FUN_7101fd7150,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute_joint",(long ****)FUN_7101fd7510,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute_lr",(long ****)FUN_7101fd76d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_7101fd7800,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7101fd79a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"active_part_num",(long ****)FUN_7101fd7b10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_attack",(long ****)FUN_7101fd7bf0,ppppbVar1,in_x4,in_x5,in_x6
// ... (371 more lines)
```

## 50. `FUN_7101a98170`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a98170`  (offset `0x1a98170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a98170(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 708 bytes / 23 bb / 1 incoming refs
- **Match values:** time
- **Strings touched:** nam_movie_title_%02d;set_txt_title;set_txt_main;set_txt_mask;set_txt_time;mnu_movie_time;new_hide;new_show
- **Callees:** FUN_710062dc20;FUN_710328d580;FUN_710328db50;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a98170__7101a98170.c)  [cfg](../decompiled/FUN_7101a98170__7101a98170.mmd)
- **Clone hash:** `a262225b925475a5`

```c

void FUN_7101a98170(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  uint local_a8 [2];
  char local_a0 [64];
  
  local_a0[0] = '\0';
  local_a8[0] = 0;
  local_a8[1] = 0;
  uVar7 = (ulong)param_2;
  if (uVar7 < (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2)) {
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 8) + uVar7 * 4);
    FUN_710062dc20(local_a8,"nam_movie_title_%02d");
    FUN_7103776640(&local_c8,param_3,(byte ****)"set_txt_title",uVar5,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_c8,(long ****)"set_txt_main",uVar5,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_b8,local_a0,uVar5,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_b0;
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_c0;
    local_c8 = &PTR_FUN_710523d988;
// ... (72 more lines)
```

