# is_playing (funcs=8, hits=20)

Top 50 functions by hit count

## 1. `FUN_71018d5f60`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018d5f60`  (offset `0x18d5f60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018d5f60(long param_1)`
- **Size / BBs / Incoming:** 9468 bytes / 431 bb / 1 incoming refs
- **Match values:** is_play
- **Strings touched:** SCENE_EXIT_CODE_ORE_SOUND;SCENE_EXIT_CODE_TEST;BUTTON_ID_MODE;BUTTON_ID_PLAY_ALL;BUTTON_ID_SOUND_TYPE;BUTTON_ID_BGM;BUTTON_ID_SE;BUTTON_ID_VOICE;BUTTON_ID_EXIT_MENU;BUTTON_ID_OK;MODE_TELEVISION;MODE_PORTABLE;MODE_HEADPHONE;MODE_NUM;SOUND_TYPE_LOW;SOUND_TYPE_NORMAL;SOUND_TYPE_HIGH;SOUND_TYPE_NUM;SOUND_TYPE_DEFAULT;VOLUME_MIN;VOLUME_MAX;VOLUME_DEFAULT;EXIT_MENU_ORE_SOUND;EXIT_MENU_TEST;EXIT_MENU_SAVE;set_edited_setting_data;update_edited_sound_type;update_edited_bgm_volume;mode_empty_03;update_edited_se_volume;update_edited_voice_volume;is_not_change;...
- **Callers:** FUN_71018d8700
- **Callees:** FUN_7101d533a0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_7103377130;FUN_7103778630;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_71018d5f60__71018d5f60.c)  [cfg](../decompiled/FUN_71018d5f60__71018d5f60.mmd)
- **Clone hash:** `68f47fc0c6870ce0`

```c

void FUN_71018d5f60(long param_1)

{
  int *piVar1;
  long *******ppppppplVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long ***ppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  undefined **ppuVar15;
  char *pcVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar19;
  ulong uVar20;
  long ********pppppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ****pppplVar27;
  long *plVar28;
  long *******ppppppplVar29;
  undefined8 local_d8;
// ... (1936 more lines)
```

## 2. `FUN_71020a9880`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020a9880`  (offset `0x20a9880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020a9880(long param_1)`
- **Size / BBs / Incoming:** 360 bytes / 4 bb / 2 incoming refs
- **Match values:** is_play
- **Strings touched:** FighterCutInManager;request_start;gauge_parts_on;request_end;is_play_motion_camera;is_owner;is_play;is_play_status;add_task;is_one_on_one;is_one_on_one_including_thrown;is_vr_mode;set_throw_finish_zoom_rate;set_throw_finish_offset
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020a9880__71020a9880.c)  [cfg](../decompiled/FUN_71020a9880__71020a9880.mmd)
- **Clone hash:** `671848a81afaff7b`

```c

void FUN_71020a9880(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterCutInManager",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"request_start",(long ****)FUN_71020a8d30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"request_end",(long ****)FUN_71020a8f10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play_motion_camera",(long ****)FUN_71020a8f40,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_owner",(long ****)FUN_71020a8f90,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play",(long ****)FUN_71020a90e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_play_status",(long ****)FUN_71020a9140,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_task",(long ****)FUN_71020a9190,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_one_on_one",(long ****)FUN_71020a9250,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_one_on_one_including_thrown",(long ****)FUN_71020a92a0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_vr_mode",(long ****)FUN_71020a9390,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_throw_finish_zoom_rate",(long ****)FUN_71020a9440,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_throw_finish_offset",(long ****)FUN_71020a95a0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
// ... (6 more lines)
```

## 3. `FUN_7102087180`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102087180`  (offset `0x2087180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102087180(long param_1)`
- **Size / BBs / Incoming:** 1344 bytes / 4 bb / 2 incoming refs
- **Match values:** is_play
- **Strings touched:** SoundModule;set_position_sub;play_se;play_se_no3d;play_se_pos;play_status_se;stop_status_se;play_sequence;set_play_hit_se_flag;get_play_hit_se_flag;set_no_hit_se;get_no_hit_se;play_hit_se;play_damage_se;play_step;play_step_flippable;play_landing_se;play_down_se;play_fly_voice;set_se_vol;TRANS_A_JUMP_AERIAL;get_se_vol;set_se_vol_db;gauge_parts_on;get_se_vol_db;set_auto_se_pitch;get_auto_se_pitch;set_se_pitch_cent;set_se_pitch_ratio;set_se_pitch_status;set_se_pitch_status_handle;set_continue_se_at_game_finish;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102087180__7102087180.c)  [cfg](../decompiled/FUN_7102087180__7102087180.mmd)
- **Clone hash:** `f7c4f90e9471f221`

```c

void FUN_7102087180(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SoundModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_position_sub",(long ****)FUN_7102081d40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se",(long ****)FUN_7102082070,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_no3d",(long ****)FUN_71020824c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_pos",(long ****)FUN_7102082760,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_status_se",(long ****)FUN_7102082c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"stop_status_se",(long ****)FUN_7102082f80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_sequence",(long ****)FUN_7102083030,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_play_hit_se_flag",(long ****)FUN_71020832a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_play_hit_se_flag",(long ****)FUN_7102083410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_no_hit_se",(long ****)FUN_71020834e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_hit_se",(long ****)FUN_7102083650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_hit_se",(long ****)FUN_7102083720,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_damage_se",(long ****)FUN_7102083990,ppppbVar1,in_x4,in_x5,
// ... (87 more lines)
```

## 4. `FUN_7103371290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** is_play
- **Strings touched:** key_context;MetatableLayoutRoot;__index;MetatableLayoutView;MetatableLayoutPane;MetatableLayoutButton;plate_side;MetatableLayoutView_Animation;MetatableLayoutButtonSelector;MetatableLayoutButtonSelectorGlobal;LayoutButtonSelector;MetatableLayoutListScroller;MetatableLayoutRangeSlider;MetatableLayoutRangeSliderGlobal;LayoutRangeSlider;MetatableLayoutListWindow;deactivate;activate;close;is_busy;update;get_result;MetatableLayoutSubMenu;clear_result;MetatableLayoutButtonSelectorConfig;LayoutButtonSelectorConfig;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB;MetatableLayoutRangeSliderConfig;...
- **Callers:** FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7103371290__7103371290.c)  [cfg](../decompiled/FUN_7103371290__7103371290.mmd)
- **Clone hash:** `acf8abf14fe11fb8`

```c

void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
// ... (1658 more lines)
```

## 5. `FUN_71020fbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** IS_PLAY
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

## 6. `FUN_710218bb20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218bb20`  (offset `0x218bb20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218bb20(void)`
- **Size / BBs / Incoming:** 7184 bytes / 13 bb / 1 incoming refs
- **Match values:** IS_PLAY
- **Strings touched:** FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REVIVAL_COUNT;FIGHTER_ROSETTA_STATUS_SPECIAL_HI_START_INT_START;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_S_REVIVAL_COUNT;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_LAST_USED_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THROWAWAY_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_TEMP_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RECOVER_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RECOVER_NOTIFY_TABLE;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_START_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_END_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_CURRENT_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_HUD_MAGIC_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SWORD_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_GIGAFIRE_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_ELWIND_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_RISIRE_RESURRECTION_VALID_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_FINAL_HIT_NUM;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_START_STATUS_KIND;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_START_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_END_MAT_FRAME;FIGHTER_REFLET_INSTANCE_WORK_ID_INT_BOOK_CURRENT_MAT_FRAME;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710218bb20__710218bb20.c)  [cfg](../decompiled/FUN_710218bb20__710218bb20.mmd)
- **Clone hash:** `9e88747a4b92d20b`

```c

void FUN_710218bb20(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_CURRENT_POINT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_REVIVAL_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CURRENT_POINT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REVIVAL_COUNT",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_CURRENT_POINT",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_HI_REVIVAL_COUNT",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_CURRENT_POINT"
                 ,(undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_THUNDER_SWORD_REVIVAL_COUNT"
                 ,(undefined **)0x100000c7,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_S_REVIVAL_COUNT",
                 (undefined **)0x100000c8,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (785 more lines)
```

## 7. `FUN_71018c4f50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018c4f50`  (offset `0x18c4f50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018c4f50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 13668 bytes / 562 bb / 1 incoming refs
- **Match values:** is_play
- **Strings touched:** set_btn_m_decide;bg_out;btn_00;scroll;ENABLE_PALLET;MENU_VIBRATION;ITEM_INDEX_INIT;FOCUS_INIT;IS_BACK;layout_root;mode_empty_03;CONTROLLER_FULL_KEY;CONTROLLER_JOY_CON;CONTROLLER_GC_CON;MSG_LABEL_FULL_KEY;pop_opt_btn_ctrl_fullcon;MSG_LABEL_JOY_CON;pop_opt_btn_ctrl_joycon;MSG_LABEL_GC_CON;pop_opt_btn_ctrl_gccon;BUTTON_ID_FK_TRIGGER_L;BUTTON_ID_FK_TRIGGER_R;BUTTON_ID_FK_TRIGGER_ZL;BUTTON_ID_FK_TRIGGER_ZR;BUTTON_ID_FK_UP;BUTTON_ID_FK_SIDE;BUTTON_ID_FK_DOWN;BUTTON_ID_FK_BUTTON_A;BUTTON_ID_FK_BUTTON_B;BUTTON_ID_FK_STICK_R;BUTTON_ID_FK_BUTTON_X;BUTTON_ID_FK_BUTTON_Y;...
- **Callers:** FUN_71018c3d20
- **Callees:** FUN_71000001c0;FUN_71003a9ab0;FUN_71004f2980;FUN_7100519ee0;FUN_7100653490;FUN_71015db0b0;FUN_7101764000;FUN_71018c84c0;FUN_71018c89b0;FUN_71018c8e40;FUN_71018c8fa0;FUN_7101af2070;FUN_7101af86a0;FUN_7101d2f860;FUN_7101d361f0;FUN_7101d37fd0;...
- **Files:** [decomp](../decompiled/FUN_71018c4f50__71018c4f50.c)  [cfg](../decompiled/FUN_71018c4f50__71018c4f50.mmd)
- **Clone hash:** `d171c16c4b71a52e`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018c4f50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  undefined2 uVar9;
  ushort uVar10;
  char cVar11;
  byte ***pppbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  bool bVar15;
  int iVar16;
  undefined4 *puVar17;
  long ***ppplVar18;
  long *plVar19;
  ulong uVar20;
  float *pfVar21;
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
// ... (2657 more lines)
```

## 8. `FUN_71021f45e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f45e0`  (offset `0x21f45e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f45e0(void)`
- **Size / BBs / Incoming:** 6308 bytes / 17 bb / 1 incoming refs
- **Match values:** IS_PLAY
- **Strings touched:** FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_BLADE_AURA_EFFECT_HANDLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE_2;FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TERM;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE_FOR_JUMP;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_ATTACK_START;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_REQ_EFFECT_SWORD_AURA;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_OFF_EFFECT_SWORD_AURA;FIGHTER_WIIFIT_ARTICLE_TERM;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_REQ_EFEECT_TRANSFORM_WIND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_OFF_EFEECT_TRANSFORM_WIND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_FINAL_OTHER_VISIBLE;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_IS_KIRBY_DRAGONHAND;FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_KAMUI_SHIELD_GROUP_KIND_START;FIGHTER_KAMUI_SHIELD_GROUP_KIND_SPECIAL_LW_GUARD;FIGHTER_KAMUI_SHIELD_GROUP_KIND_TERM;FIGHTER_ATTACK_ABSOLUTE_KIND_KAMUI_FINAL;FIGHTER_KAMUI_KINETIC_ENERGY_ID_START;FIGHTER_KAMUI_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_KAMUI_START;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_AIR_N_BITE;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_S_JUMP;FIGHTER_KINETIC_TYPE_KAMUI_SPECIAL_AIR_S_JUMP;FIGHTER_KINETIC_TYPE_KAMUI_TERM;FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_START;FIGHTER_KAMUI_STATUS_SPECIAL_N_FLAG_END_HOLD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021f45e0__71021f45e0.c)  [cfg](../decompiled/FUN_71021f45e0__71021f45e0.mmd)
- **Clone hash:** `bce26a49a9ec098f`

```c

void FUN_71021f45e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_BLADE_AURA_EFFECT_HANDLE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE"
                 ,(undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TRANSFORM_WIND_EFFECT_HANDLE_2",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_N_BUOYANCY_BITE",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE",
                 (undefined **)0x200000e2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_KAMUI_INSTANCE_WORK_ID_FLAG_SPECIAL_S_DISABLE_FOR_JUMP",
                 (undefined **)0x200000e3,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (677 more lines)
```

