# room (funcs=72, hits=322)

Top 50 functions by hit count

## 1. `FUN_7101c70500`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c70500`  (offset `0x1c70500`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7101c70500(undefined1 param_1)`
- **Size / BBs / Incoming:** 284 bytes / 24 bb / 3 incoming refs
- **Match values:** room
- **Strings touched:** mnu_online_room_inside_sysmsg_enter;mnu_online_room_inside_sysmsg_rule_1;mnu_online_room_inside_sysmsg_leave;mnu_online_room_inside_sysmsg_10ko;mnu_online_room_inside_sysmsg_30ko;mnu_online_room_inside_sysmsg_50ko;mnu_online_room_inside_sysmsg_100ko;mnu_online_room_inside_sysmsg_battle_finish;mnu_online_room_inside_sysmsg_cannot_battle;mnu_online_room_inside_sysmsg_battle_start;mnu_online_room_inside_sysmsg_battle_start_c;mnu_online_room_inside_sysmsg_winning_streak;mnu_online_room_inside_chat_own;mnu_online_room_inside_chat_others;mnu_online_room_inside_sysmsg_rule_changing;mnu_online_room_inside_sysmsg_rule_change;mnu_online_room_inside_sysmsg_rule_0;mnu_online_room_inside_sysmsg_rule_2;mnu_online_room_inside_sysmsg_rule_3;mnu_online_room_inside_sysmsg_rule_no_change
- **Callers:** FUN_7101c70620;FUN_7101c73ca0;FUN_7101c74c10
- **Files:** [decomp](../decompiled/FUN_7101c70500__7101c70500.c)  [cfg](../decompiled/FUN_7101c70500__7101c70500.mmd)
- **Clone hash:** `b54599076d56a440`

```c

char * FUN_7101c70500(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "mnu_online_room_inside_sysmsg_enter";
  switch(param_1) {
  case 1:
    goto switchD_7101c70528_caseD_1;
  case 2:
  case 3:
    return "mnu_online_room_inside_sysmsg_leave";
  case 4:
    return "mnu_online_room_inside_sysmsg_10ko";
  case 5:
    return "mnu_online_room_inside_sysmsg_30ko";
  case 6:
    return "mnu_online_room_inside_sysmsg_50ko";
  case 7:
    return "mnu_online_room_inside_sysmsg_100ko";
  default:
    pcVar1 = "";
switchD_7101c70528_caseD_1:
    return pcVar1;
  case 9:
    return "mnu_online_room_inside_sysmsg_battle_finish";
  case 10:
    return "mnu_online_room_inside_sysmsg_cannot_battle";
  case 100:
    return "mnu_online_room_inside_sysmsg_battle_start";
  case 0x65:
    return "mnu_online_room_inside_sysmsg_battle_start_c";
  case 0x66:
    return "mnu_online_room_inside_sysmsg_winning_streak";
  case 0x67:
    return "mnu_online_room_inside_chat_own";
  case 0x68:
    return "mnu_online_room_inside_chat_others";
  case 0x69:
// ... (18 more lines)
```

## 2. `FUN_7101bd7a40`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** type_new;room_bg_name_hige;room_member_name_on;icon_type_new;balloon_off;balloon_on;room_status_info_ng;room_status_info_ok;type_lock;play_off;selected_on;set_parts_cursor_dec;select_on;type_any;type_melee;icon_type_any_lock;icon_type_melee_lock;type_spirits;icon_type_spirits_lock;icon_type_melee;set_txt_room_info_ng;mnu_local_status_01;mnu_local_status_%02d;mnu_local_rule_not_join;icon_type_any;icon_type_spirits;set_txt_room_info;mnu_local_rule_join_limit;set_txt_title_main;set_txt_title_sub;set_txt_title_sub_01;mnu_local_rule_bottom_03;...
- **Callers:** FUN_7101bd43a0;FUN_7101bdc040
- **Callees:** FUN_71000597e0;FUN_710062dc20;FUN_7101bda0e0;FUN_7101bda220;FUN_71024076d0;FUN_7103313f20;FUN_710337d450;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_7103776290;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_71037790a0;...
- **Files:** [decomp](../decompiled/FUN_7101bd7a40__7101bd7a40.c)  [cfg](../decompiled/FUN_7101bd7a40__7101bd7a40.mmd)
- **Clone hash:** `34faf52be64378e6`

```c

void FUN_7101bd7a40(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  ulong uVar7;
  byte ***pppbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  byte **ppbVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar16;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar17;
  undefined8 extraout_x1_12;
  char *pcVar18;
  long ****pppplVar19;
  byte *pbVar20;
  long lVar21;
// ... (1651 more lines)
```

## 3. `FUN_7101c7d8e0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7d8e0`  (offset `0x1c7d8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7d8e0(long param_1, undefined8 * param_2, undefined * * param_3, undefined2 * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3848 bytes / 150 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** on_plt_menu_lyt_00;btn_disp_off_00;btn_disp_off_01;btn_disp_2_on;btn_disp_off;baln_clr_r;baln_tit_fri;baln_clr_b;baln_tit_any;set_txt_00;mnu_online_room_create_password;mnu_online_room_search_password_not;mnu_online_room_search_password;set_txt_hd_title;set_parts_header_btn;set_Parts_hd_u_cont_00;rule_btn_disp_off;set_txt_hd_b_cont_00;txt_sub_hd_00;mnu_online_room_setting_stage;set_txt_sub_hd_00;txt_sub_hd_%02d;mnu_online_room_setting_amiibo;mnu_online_room_amiibo_on;set_txt_sub_hd_%02d;mode_empty_03;mnu_online_room_setting_spirits;mnu_online_room_spirits_on;mnu_online_room_setting_stgcreate;mnu_online_room_stgcreate_on;detail_disp_%02d;vc_disp_off;...
- **Callees:** FUN_71000001c0;FUN_7101704ba0;FUN_7101764000;FUN_7101797350;FUN_71017ab0c0;FUN_7101c6f7f0;FUN_7101c6fec0;FUN_7101c7ebd0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101c7d8e0__7101c7d8e0.c)  [cfg](../decompiled/FUN_7101c7d8e0__7101c7d8e0.mmd)
- **Clone hash:** `8a155c7741ecda2b`

```c

void FUN_7101c7d8e0(long param_1,undefined8 *param_2,undefined **param_3,undefined2 *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined **local_968;
  ulong local_960;
  long ********local_958;
  ulong local_950;
  undefined8 local_550;
  byte local_548;
  undefined4 uStack_547;
  undefined3 uStack_543;
  undefined5 local_540;
  undefined3 uStack_53b;
  undefined2 local_538;
  undefined8 local_536;
  undefined4 local_52e;
  undefined2 local_52a;
  ulong local_528;
// ... (634 more lines)
```

## 4. `FUN_7101c62870`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** area_medal;set_cursor_area;set_medal_balloon_pos_r;set_medal_balloon_pos_l;set_medal_%02d;set_medal_over_%02d;chara/chara_4/chara_4_;catch;anim_appear_in;anim_appear_other_in;anim_appear_stay;change_blink_on;anim_on;loop_off;balloon_off;medal_fp_off;next_off;state_catch_ok;change_blink_off;selector_0;sel_off;set_txt_back_00;mel_over_return_02;set_txt_back_01;mel_return_02;pic_stage;set_rep_stg;stage_other;stage_random;pic_fighter;set_rep_fig;fighter_other;...
- **Callers:** FUN_7101896640
- **Callees:** FUN_71003a4ca0;FUN_71016e3710;FUN_7101898fc0;FUN_7101899100;FUN_7101899240;FUN_7101899380;FUN_71018994c0;FUN_7101899600;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c61990;FUN_7101c684a0;FUN_7101c68640;FUN_7101c689c0;FUN_7101c69330;FUN_7101c69720;...
- **Files:** [decomp](../decompiled/FUN_7101c62870__7101c62870.c)  [cfg](../decompiled/FUN_7101c62870__7101c62870.mmd)
- **Clone hash:** `e4dd96ce2a92ce22`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c62870(undefined8 *param_1,long *********param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte ***pppbVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  long *********ppppppppplVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte **ppbVar23;
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
// ... (4548 more lines)
```

## 5. `FUN_7101c689c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c689c0`  (offset `0x1c689c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c689c0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2412 bytes / 73 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_Parts_hd_u_cont_00;set_txt_hd_b_cont_00;txt_sub_hd_%02d;mnu_online_room_setting_stage;set_txt_sub_hd_%02d;mnu_online_room_setting_amiibo;mnu_online_room_spirits_on;mode_empty_03;mnu_online_room_setting_spirits;mnu_online_room_setting_stgcreate;mnu_online_room_stgcreate_on;detail_disp_%02d
- **Callers:** FUN_710188ce20;FUN_7101c62870
- **Callees:** FUN_71003a4ca0;FUN_71017ab0c0;FUN_7101c6f7f0;FUN_7101c6fec0;FUN_71032b1e40;FUN_71032b23e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c689c0__7101c689c0.c)  [cfg](../decompiled/FUN_7101c689c0__7101c689c0.mmd)
- **Clone hash:** `ab3d1242f4101508`

```c

void FUN_7101c689c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined2 local_940;
  undefined8 local_93e;
  undefined4 local_936;
  undefined2 local_932;
  ulong local_930;
  uint local_928;
  undefined1 local_924;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined5 uStack_540;
  undefined8 local_4fc;
  undefined2 local_4f4;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_b0;
// ... (373 more lines)
```

## 6. `FUN_7101c93960`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c93960`  (offset `0x1c93960`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c93960(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1860 bytes / 78 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_help;mnu_online_room_help_setting_player_number;mnu_online_room_help_spirits_off;mnu_online_room_help_stgcreate_off;mnu_online_room_help_amiibo_off;mnu_online_room_help_voicechat_off;mnu_online_room_help_setting_roombgm
- **Callers:** FUN_7101c8df10;FUN_7101c8e7d0
- **Callees:** FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c93960__7101c93960.c)  [cfg](../decompiled/FUN_7101c93960__7101c93960.mmd)
- **Clone hash:** `429b82de6960371c`

```c

void FUN_7101c93960(long param_1,long param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 uStack_43;
  undefined4 local_42;
  undefined **local_30;
  ulong local_28;
  
  uVar3 = param_3 & 0xffffffff;
  FUN_7103776910(&local_30,param_2,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  switch(uVar3) {
  case 0:
    pcVar2 = "mnu_online_room_help_setting_player_number";
    goto LAB_7101c93d8c;
  case 1:
    if (4 < (ulong)(long)*(char *)(param_1 + 0x111)) {
LAB_7101c940a0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
// ... (250 more lines)
```

## 7. `FUN_71021a87e0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021a87e0`  (offset `0x21a87e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021a87e0(void)`
- **Size / BBs / Incoming:** 5960 bytes / 7 bb / 1 incoming refs
- **Match values:** ROOM
- **Strings touched:** FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADJUST_ANGLE_FRAME;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADD_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_LEFT;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_RIGHT;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_ADJUST_ANGLE;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_CLAYROCKET_IS_READY;FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SHIZUE_LINK_NO_START;FIGHTER_SHIZUE_LINK_NO_FISHINGROD;FIGHTER_SHIZUE_LINK_NO_BALLOON;FIGHTER_SHIZUE_LINK_NO_TERM;FIGHTER_ATTACK_ABSOLUTE_KIND_SHIZUE_SPECIAL_S;FIGHTER_SHIZUE_CLIFF_HANG_DATA_START;FIGHTER_SHIZUE_CLIFF_HANG_DATA_SPECIAL_S;FIGHTER_SHIZUE_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SHIZUE_CLIFF_HANG_DATA_TERM;FIGHTER_SHIZUE_STATUS_SPECIAL_N_FLAG_START;FIGHTER_SHIZUE_STATUS_SPECIAL_N_TERM;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_START;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_AIR_LASSO_FAIL;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_FLICK;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_SHOOT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_HIT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_PICKUP;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_CAPTURE_CUT;FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLAG_TERM;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021a87e0__71021a87e0.c)  [cfg](../decompiled/FUN_71021a87e0__71021a87e0.mmd)
- **Clone hash:** `1bd72876b3d74e67`

```c

void FUN_71021a87e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000d1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000d2,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_00000050,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADJUST_ANGLE_FRAME",
                 (undefined **)&DAT_00000051,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ANGLE",
                 (undefined **)&DAT_00000052,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_ADD_ANGLE",
                 (undefined **)0x53,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLOAT_TERM",
                 (undefined **)&DAT_00000054,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000ed,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SHIZUE_INSTANCE_WORK_ID_FLAG_POMPON_LEFT",
                 (undefined **)0x200000ee,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (685 more lines)
```

## 8. `FUN_7101c91cb0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c91cb0`  (offset `0x1c91cb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c91cb0(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7336 bytes / 349 bb / 4 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_filter_00;set_txt_filter_00_old;set_txt_filter;mnu_online_room_player_number_n;txt_move_%s;mode_empty_03;mnu_online_room_stgcreate_on;mnu_online_room_voicechat_on;gray_off;icon_gray_01_ami;icon_gray_00_edit;gray_on
- **Callers:** FUN_7101c8df10;FUN_7101c8e7d0;FUN_7101c952b0
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c83c40;FUN_7101c91730;FUN_7101c919f0;FUN_7103771d60;FUN_7103776910;FUN_7103778430;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c91cb0__7101c91cb0.c)  [cfg](../decompiled/FUN_7101c91cb0__7101c91cb0.mmd)
- **Clone hash:** `ec2bf5a4e2030ac3`

```c

void FUN_7101c91cb0(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  ulong uVar13;
  uint uVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  undefined8 *puVar25;
  char cVar26;
  uint local_268;
  undefined4 local_264;
  byte local_260 [64];
  uint local_220;
  undefined4 local_21c;
  byte local_218 [64];
  undefined8 local_1d8;
  byte local_1d0 [64];
  undefined8 local_190;
// ... (1212 more lines)
```

## 9. `FUN_7101c79160`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c79160`  (offset `0x1c79160`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c79160(uint * param_1, undefined8 * param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1456 bytes / 96 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** mnu_online_room_inside_chat_greet_%02d;mnu_online_room_inside_chat_prepare_%02d;mnu_online_room_inside_chat_melee_%02d;mnu_online_room_inside_chat_impression_%02d;mnu_online_room_inside_chat_farewell_%02d
- **Callers:** FUN_710188ce20;FUN_7101c7aa70
- **Callees:** FUN_710062dc20
- **Files:** [decomp](../decompiled/FUN_7101c79160__7101c79160.c)  [cfg](../decompiled/FUN_7101c79160__7101c79160.mmd)
- **Clone hash:** `f9f303fd778909ef`

```c

void FUN_7101c79160(uint *param_1,undefined8 *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint local_68 [2];
  char local_60 [64];
  
  plVar5 = (long *)param_2[2];
  plVar11 = param_2 + 2;
  if (plVar5 != (long *)0x0) {
    plVar11 = param_2 + 2;
    do {
      while (plVar6 = plVar5, (param_3 & 0xffffffffff) < (plVar6[4] & 0xffffffffffU)) {
        plVar5 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_7101c791c8;
      }
      if ((param_3 & 0xffffffffff) <= (plVar6[4] & 0xffffffffffU)) break;
      plVar11 = plVar6 + 1;
      plVar5 = (long *)*plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
// ... (257 more lines)
```

## 10. `FUN_7101c7ebd0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7ebd0`  (offset `0x1c7ebd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7ebd0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2400 bytes / 93 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_name;mnu_online_room_create_host_account;set_txt_name_00;set_txt_cate;set_txt_cate_00;set_txt_rule;set_txt_rule_00;set_txt_center;mnu_online_room_player_number_n;num_disp_center;key_off;mode_empty_03;num_on;gray_off;set_txt_now;mnu_online_room_search_participants_n;set_txt_max;mnu_online_room_search_participants_max;set_txt_slash;num_disp_max;gray_on;num_max;key_on
- **Callers:** FUN_7101c7d8e0;FUN_7101c958e0
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c6ec50;FUN_7101c6ee80;FUN_7103240430;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_71037a2660;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101c7ebd0__7101c7ebd0.c)  [cfg](../decompiled/FUN_7101c7ebd0__7101c7ebd0.mmd)
- **Clone hash:** `15a6d56c40b4cde1`

```c

void FUN_7101c7ebd0(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  uint uVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  undefined **local_120;
  undefined8 *local_118 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long ********local_c8;
  undefined2 local_c0;
  undefined8 local_be;
  ushort local_b6;
  undefined1 local_b4;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  undefined8 *local_78;
  long ********local_70;
  undefined4 local_64;
  
// ... (364 more lines)
```

## 11. `FUN_7101896640`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101896640`  (offset `0x1896640`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101896640(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10616 bytes / 510 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** chara_select_btn3_05_ready_00;set_txt_02;mnu_online_room_inside_ko_total_n;set_txt_03;mnu_online_room_inside_account_nam;set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_00;mnu_online_room_inside_host_nam;set_rep_icn_fighter
- **Callers:** FUN_710189c530
- **Callees:** FUN_71000001c0;FUN_7101686610;FUN_710168eb40;FUN_71016b6a10;FUN_71016b7a00;FUN_71016e3710;FUN_71016ea290;FUN_71016eade0;FUN_71016f6340;FUN_7101764000;FUN_7101797cc0;FUN_71017abd00;FUN_71017c0f50;FUN_71017c6500;FUN_71018918d0;FUN_7101892ba0;...
- **Files:** [decomp](../decompiled/FUN_7101896640__7101896640.c)  [cfg](../decompiled/FUN_7101896640__7101896640.mmd)
- **Clone hash:** `aaac48bef96a5efb`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101896640(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  undefined4 uVar6;
  ushort uVar7;
  long ********pppppppplVar8;
  undefined8 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
// ... (1748 more lines)
```

## 12. `FUN_7102c2bf50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102c2bf50`  (offset `0x2c2bf50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102c2bf50(undefined8 * param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 4808 bytes / 208 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** stc_s00_clouds1_set;dyr_s00_ring_set;stc_s01_bg_set;stc_s01_stg_set;stc_s02_kumo_nyudo_set;stc_s02_sky_set;dyr_s03_bg_room_b_set;dyr_s03_bg_room_c_set
- **Callers:** FUN_7102c29ea0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71025e9d50;FUN_7102616cf0;FUN_7102624740;FUN_7102624870;FUN_710262bb40;FUN_710262beb0;FUN_71026533a0;FUN_7102c3a5f0;FUN_7102c3ef30;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7102c2bf50__7102c2bf50.c)  [cfg](../decompiled/FUN_7102c2bf50__7102c2bf50.mmd)
- **Clone hash:** `248cd8a5dcdc8e32`

```c

void FUN_7102c2bf50(undefined8 *param_1,long param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  byte *pbVar19;
  uint uVar20;
  code *pcVar21;
  uint uVar22;
  long lVar23;
  void *__src;
  undefined1 (*__n) [16];
  ulong uVar24;
  long *plVar25;
// ... (948 more lines)
```

## 13. `FUN_7101c76f30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c76f30`  (offset `0x1c76f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c76f30(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 560 bytes / 19 bb / 83 incoming refs
- **Match values:** room
- **Strings touched:** balloon_on;balloon_off;baloon_type_00;set_txt_balloon_00;mnu_online_room_inside_entry;baloon_type_01;set_txt_balloon_01;mnu_online_room_inside_watching;mnu_online_room_inside_watch;set_txt_guide;baloon_type_02;mnu_online_room_inside_selected
- **Callers:** FUN_7101c50320;FUN_7101c51160;FUN_7101c51ef0;FUN_7101c534b0;FUN_7101c54190;FUN_7101c55160;FUN_7101c55ec0;FUN_7101c56ec0;FUN_7101c57c00;FUN_7101c58580;FUN_7101c5dcd0;FUN_7101c61830
- **Callees:** FUN_710337cef0;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c76f30__7101c76f30.c)  [cfg](../decompiled/FUN_7101c76f30__7101c76f30.mmd)
- **Clone hash:** `53231bc12783de67`

```c

void FUN_7101c76f30(long param_1,byte param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long ****pppplVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar5 = (int)param_3;
  uVar3 = (ulong)param_2;
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar6 = lVar7 + uVar3 * 0x1e0;
  if (*(int *)(lVar6 + 0x1a0) == iVar5) {
    return;
  }
  lVar1 = lVar7 + uVar3 * 0x1e0 + 0x28;
  pppplVar2 = (long ****)"balloon_off";
  if (iVar5 != 0) {
    pppplVar2 = (long ****)"balloon_on";
  }
  FUN_71037780e0(&local_50,lVar1,pppplVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377aee0(0x3f800000,(long)&local_50);
  switch(iVar5) {
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x710433a1e8);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
// ... (53 more lines)
```

## 14. `FUN_7101c8f600`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c8f600`  (offset `0x1c8f600`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c8f600(long param_1, long param_2, undefined1 * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7684 bytes / 362 bb / 5 incoming refs
- **Match values:** room
- **Strings touched:** icon_gray_01_ami;gray_on;gray_off;mnu_online_room_passwordroom_off;color_g;color_r;set_txt_filter_00;set_txt_filter_00_old;set_txt_filter_01;set_txt_filter_01_old;set_txt_filter;txt_move_%s
- **Callers:** FUN_7101c8df10;FUN_7101c8e7d0;FUN_7101c952b0
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c83c40;FUN_7101c8dd70;FUN_7101c91410;FUN_7101c91730;FUN_7101c919f0;FUN_7103771d60;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778760;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c8f600__7101c8f600.c)  [cfg](../decompiled/FUN_7101c8f600__7101c8f600.mmd)
- **Clone hash:** `d9321b8c0a5a05a7`

```c

void FUN_7101c8f600(long param_1,long param_2,undefined1 *param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined **local_288;
  undefined8 *local_280;
  undefined **local_278;
  undefined8 *local_270;
  undefined **local_268;
  ulong local_260;
  undefined **local_258;
  ulong local_250;
  byte *local_248;
  byte *local_240;
  byte *local_238;
  char *local_230;
  undefined8 *local_228;
// ... (1267 more lines)
```

## 15. `FUN_7101bdc040`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bdc040`  (offset `0x1bdc040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bdc040(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3700 bytes / 219 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_room_sel_name;room_member_name_off;selected_off;set_parts_cursor_dec;select_off;room_member_name_on
- **Callees:** FUN_71019bb740;FUN_71019bb8f0;FUN_7101bd7a40;FUN_7101bdcec0;FUN_71024076d0;FUN_7103313f20;FUN_7103771be0;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377aee0;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;...
- **Files:** [decomp](../decompiled/FUN_7101bdc040__7101bdc040.c)  [cfg](../decompiled/FUN_7101bdc040__7101bdc040.mmd)
- **Clone hash:** `cbf41ce4b67143ae`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101bdc040(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  byte ****ppppbVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined4 local_198 [4];
  long local_188;
  int local_180;
  undefined4 local_158 [2];
  undefined **local_150;
  long local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined **local_118;
  undefined **local_110;
  undefined **local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
// ... (572 more lines)
```

## 16. `FUN_7101bd43a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd43a0`  (offset `0x1bd43a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd43a0(long * * * * * * * * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6932 bytes / 399 bb / 4 incoming refs
- **Match values:** room
- **Strings touched:** dev_count_0;dev_count_1;dev_count_up;set_text_dev_count;mnu_local_display_rm_n;list_ptn_normal;list_ptn_scroll;set_parts_cursor_dec;select_off;selected_off;selected_on;select_on;room_member_name_off;set_txt_room_sel_name;room_member_name_on;cursor
- **Callers:** FUN_7101856360;FUN_7101bd3320;FUN_7101bdd1d0;FUN_7101bdd8e0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71019bb740;FUN_71019bb8f0;FUN_7101bd5ec0;FUN_7101bd60a0;FUN_7101bd6230;FUN_7101bd6db0;FUN_7101bd7000;FUN_7101bd7a40;FUN_7103771a80;FUN_7103771d60;FUN_7103776290;FUN_7103776390;FUN_7103776640;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101bd43a0__7101bd43a0.c)  [cfg](../decompiled/FUN_7101bd43a0__7101bd43a0.mmd)
- **Clone hash:** `6ef621d462eaea4c`

```c

void FUN_7101bd43a0(long ********param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long ********pppppppplVar3;
  long ********pppppppplVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *********ppppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  undefined **ppuVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  long **pplVar18;
  long ********pppppppplVar19;
  long ****pppplVar20;
  long lVar21;
  long ******pppppplVar22;
  int *piVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  long ********pppppppplVar29;
  long ********pppppppplVar30;
  byte ****ppppbVar31;
  undefined1 auVar32 [16];
  long ********local_100;
  long ********local_f8;
// ... (1099 more lines)
```

## 17. `FUN_7101bddb60`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bddb60`  (offset `0x1bddb60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bddb60(long param_1, undefined8 * param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 19 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** room_status_friend;room_status_acq;set_txt_balloon;mnu_local_new_rm_mode_range_01;room_status_any;mnu_local_new_rm_mode_range_00
- **Callers:** FUN_7101856ad0;FUN_7101bde490
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101bddb60__7101bddb60.c)  [cfg](../decompiled/FUN_7101bddb60__7101bddb60.mmd)
- **Clone hash:** `2c1a52058c4bc0f7`

```c

void FUN_7101bddb60(long param_1,undefined8 *param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  byte ****ppppbVar4;
  char *pcVar5;
  ulong uVar6;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  ulong local_28;
  
  plVar2 = *(long **)(*(long *)(param_1 + 0xe0) + 0x180);
  uVar6 = *(long *)(*(long *)(param_1 + 0xe0) + 0x188) - (long)plVar2;
  if ((int)(uVar6 >> 3) < 1) {
    ppppbVar4 = (byte ****)0x0;
  }
  else {
    if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    ppppbVar4 = *(byte *****)(*plVar2 + 0x88);
  }
  uVar6 = param_3;
  FUN_7103776640(&local_30,*(long *)*param_2 + 8,ppppbVar4,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = local_28;
  uVar1 = (uint)param_3 & 0xff;
  if ((param_3 & 0xff) == 0) {
    FUN_7103778300(0x3f800000,local_28,0x71043cf32b);
    FUN_7103776910(&local_40,(long)&local_30,(long ****)"set_txt_balloon",uVar6,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar5 = "mnu_local_new_rm_mode_range_00";
  }
  else {
// ... (33 more lines)
```

## 18. `FUN_7100425fe0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100425fe0`  (offset `0x425fe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100425fe0(void)`
- **Size / BBs / Incoming:** 720 bytes / 28 bb / 0 incoming refs
- **Match values:** Room
- **Strings touched:** OnlineMeleeRoomTopScene;OnlineMeleeRoomScene;MeleeRuleScene;SoundTestScene;StageSelectScene;CharaSelectScene;IngameCallSequenceScene;UnlockSequenceScene;OnlineMeleeRoomChangeRuleScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7100425fe0__7100425fe0.c)  [cfg](../decompiled/FUN_7100425fe0__7100425fe0.mmd)
- **Clone hash:** `9ecb72819a94ee11`

```c

void FUN_7100425fe0(void)

{
  int iVar1;
  
  DAT_7105329420 = 0;
  DAT_7105329428 = "OnlineMeleeRoomTopScene";
  if (((DAT_71053294c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294c8);
  }
  DAT_7105329430 = &PTR_PTR_71050b9248;
  DAT_7105329438 = "OnlineMeleeRoomScene";
  if (((DAT_71053294d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053294d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053294d0);
  }
  DAT_7105329440 = &PTR_PTR_71050b9250;
  DAT_7105329448 = "MeleeRuleScene";
  if (((DAT_7105324960 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105324960), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105324960);
  }
  DAT_7105329450 = &PTR_PTR_71050a42c0;
  DAT_7105329458 = "SoundTestScene";
  if (((DAT_7105329310 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105329310), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105329310);
  }
  DAT_7105329460 = &PTR_PTR_71050b8db8;
  DAT_7105329468 = "StageSelectScene";
  if (((DAT_7105328660 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328660), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328660);
  }
  DAT_7105329470 = &PTR_PTR_71050b7478;
  DAT_7105329478 = "CharaSelectScene";
  if (((DAT_7105328380 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328380), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328380);
  }
  DAT_7105329480 = &PTR_PTR_71050b6960;
  DAT_7105329488 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (17 more lines)
```

## 19. `FUN_71020fbb90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** ROOM
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

## 20. `FUN_7100438eb0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100438eb0`  (offset `0x438eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100438eb0(void)`
- **Size / BBs / Incoming:** 1260 bytes / 46 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** waterroom;steelroom;dragonroom;render_param_00.bin;render_param_01.bin;render_param_02.bin;render_param_03.bin;render_param_04.bin
- **Callees:** FUN_71000001c0;FUN_7102ce0590;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7100438eb0__7100438eb0.c)  [cfg](../decompiled/FUN_7100438eb0__7100438eb0.mmd)
- **Clone hash:** `8027accf69d3e0d5`

```c

void FUN_7100438eb0(void)

{
  ulong uVar1;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint local_108 [2];
  byte local_100;
  undefined4 uStack_ff;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined2 uStack_ef;
  undefined1 uStack_ed;
  undefined4 uStack_ec;
  undefined4 local_e8;
  byte local_e0;
  undefined4 uStack_df;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  undefined1 local_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  undefined4 local_c8;
  byte local_c0;
  undefined4 uStack_bf;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined1 local_b8;
  undefined1 uStack_b7;
// ... (288 more lines)
```

## 21. `FUN_7101c5acf0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c5acf0`  (offset `0x1c5acf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c5acf0(long * param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7940 bytes / 328 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** nam_chr1_%02d_%s;set_txt_chara_name;set_txt_chara_name_00;chara_size;set_rep_chara_pk_sd;set_rep_chara_pk;set_rep_silhouette;ol_pokemon_on;ol_pokemon_off;set_rep_mark_m;set_rep_chara;set_rep_chara_sd;set_rep_chara_decide;set_txt_00;mnu_online_room_inside_account_nam;set_rep_icn_fighter_01;set_icn_profile;set_icn_profile_bg;ol_flag_icon_off;set_txt_pl_num;cmn_%dp;set_parts_icon_s;set_rep_sp;set_rep_sp_sd;set_rep_sp_mini;set_rep_sp_sd_mini;spirits_set;spirits_unset;spirit_attacker_non;txt_04;mnu_online_room_inside_fp_lv_n;set_txt_fp;...
- **Callers:** FUN_7101c5a2d0
- **Callees:** FUN_71003a4ca0;FUN_7101c5a440;FUN_7101c5cc00;FUN_7101c5ce50;FUN_7101c5d270;FUN_710323f330;FUN_710323f600;FUN_710323faf0;FUN_7103240430;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_7103263f80;FUN_7103265e70;FUN_71032a9470;...
- **Files:** [decomp](../decompiled/FUN_7101c5acf0__7101c5acf0.c)  [cfg](../decompiled/FUN_7101c5acf0__7101c5acf0.mmd)
- **Clone hash:** `fc7a1b60ec811da0`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101c5acf0(long *param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  ushort *puVar2;
  undefined *puVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined8 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  byte bVar24;
  ulong uVar25;
  char *pcVar26;
  byte *pbVar27;
  long *********ppppppppplVar28;
  undefined8 uVar29;
  long ****pppplVar30;
  byte ****ppppbVar31;
  uint uVar32;
  long lVar33;
// ... (1547 more lines)
```

## 22. `FUN_7101887600`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101887600`  (offset `0x1887600`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101887600(long * * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 2428 bytes / 122 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** anim_bg;slide_in;slide_stay;set_txt_roomid;mnu_online_room_inside_room_id;hand_stay;pic_fighter;fighter_other;chara_size_mii;set_rep_fig
- **Callees:** FUN_7101685ac0;FUN_710169b270;FUN_71016b4d20;FUN_71016b50a0;FUN_71016b9680;FUN_71016f6340;FUN_710188ce20;FUN_7101894cc0;FUN_7101894cd0;FUN_7101895550;FUN_7101895560;FUN_7101a103f0;FUN_7101c5a090;FUN_7103265e70;FUN_71032e5a30;FUN_7103701910;...
- **Files:** [decomp](../decompiled/FUN_7101887600__7101887600.c)  [cfg](../decompiled/FUN_7101887600__7101887600.mmd)
- **Clone hash:** `e99ff509d47902cb`

```c

void FUN_7101887600(long ********param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  long *****ppppplVar1;
  long ****pppplVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  long ********pppppppplVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long ********pppppppplVar10;
  ulong uVar11;
  long *********ppppppppplVar12;
  undefined8 *puVar13;
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
  long *********ppppppppplVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  undefined4 uVar17;
  long *******ppppppplVar18;
  code *pcVar19;
  long lVar20;
  long *****ppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ***ppplVar24;
// ... (413 more lines)
```

## 23. `FUN_710041f880`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Room
- **Strings touched:** BootSequenceScene;MenuSequenceScene;OptionSequenceScene;HelpSequenceScene;IngameCallSequenceScene;UnlockSequenceScene;LocalSequenceScene;MeleeNormalSequenceScene;MeleeAllBattleSequenceScene;MeleeTeamCompeSequenceScene;MeleeTournamentSequenceScene;SpiritsBoardSequenceScene;SpiritsCampaignSequenceScene;SpiritsCampaignFinalStageSequenceScene;SpiritsBoardSpecialSequenceScene;SpiritsOrganizationSequenceScene;StandardSequenceScene;TrainingSequenceScene;KumiteSequenceScene;HomeRunContestSequenceScene;CharaMakeSequenceScene;AmiiboSequenceScene;ChallengerRoomSequenceScene;OnlineMeleeAnySequenceScene;OnlineMeleeParallelSequenceScene;OnlineMeleeRoomSequenceScene;OnlineWatchSequenceScene;SoundTestSequenceScene;CollectionTipsSequenceScene;CollectionShopSequenceScene;CollectionFighterSequenceScene;CollectionCountSequenceScene;...
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_710041f880__710041f880.c)  [cfg](../decompiled/FUN_710041f880__710041f880.mmd)
- **Clone hash:** `d251c6a5b4e743fa`

```c

void FUN_710041f880(void)

{
  int iVar1;
  
  DAT_7105327cd8 = 0;
  DAT_7105327ce0 = "BootSequenceScene";
  if (((DAT_7105327fe0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe0);
  }
  DAT_7105327ce8 = &PTR_PTR_71050b5910;
  DAT_7105327cf0 = "MenuSequenceScene";
  if (((DAT_7105327fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327fe8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327fe8);
  }
  DAT_7105327cf8 = &PTR_PTR_71050b5918;
  DAT_7105327d00 = "OptionSequenceScene";
  if (((DAT_7105327ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff0);
  }
  DAT_7105327d08 = &PTR_PTR_71050b5920;
  DAT_7105327d10 = "HelpSequenceScene";
  if (((DAT_7105327ff8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105327ff8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105327ff8);
  }
  DAT_7105327d18 = &PTR_PTR_71050b5928;
  DAT_7105327d20 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
  }
  DAT_7105327d28 = &PTR_PTR_7104f76410;
  DAT_7105327d30 = "UnlockSequenceScene";
  if (((DAT_7105328000 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328000), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328000);
  }
  DAT_7105327d38 = &PTR_PTR_71050b5930;
  DAT_7105327d40 = "LocalSequenceScene";
  if (((DAT_7105328008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328008), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328008);
// ... (207 more lines)
```

## 24. `FUN_7101c91730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c91730`  (offset `0x1c91730`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c91730(uint * param_1, byte param_2, byte param_3)`
- **Size / BBs / Incoming:** 704 bytes / 44 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** mnu_online_room_amiibo_off
- **Callers:** FUN_7101c8f600;FUN_7101c91cb0
- **Callees:** <EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c91730__7101c91730.c)  [cfg](../decompiled/FUN_7101c91730__7101c91730.mmd)
- **Clone hash:** `5e316ed902263ec8`

```c

void FUN_7101c91730(uint *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char local_98 [64];
  undefined8 local_58;
  byte local_50 [64];
  
  if (param_2 < 2) {
    uVar5 = 0;
    pcVar8 = "mnu_online_room_amiibo_on";
    if ((&DAT_7104545280)[(char)param_2] != '\x02') {
      pcVar8 = "mnu_online_room_amiibo_off";
    }
    while( true ) {
      bVar1 = pcVar8[uVar5];
      if (bVar1 == 0) break;
      local_50[uVar5] = bVar1;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar1 = (pcVar8 + uVar5)[1];
      if (bVar1 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_50[uVar5 + 1] = bVar1;
      uVar5 = uVar5 + 2;
    }
    uVar4 = 0x811c9dc5;
// ... (110 more lines)
```

## 25. `FUN_7101c799d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c799d0`  (offset `0x1c799d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c799d0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 832 bytes / 41 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** set_parts_txt_head_00;page_next;set_txt_scene;mnu_online_room_inside_chat_sort_all
- **Callees:** FUN_7101c79d10;FUN_7101c7a3b0;FUN_71024076d0;FUN_7103313f20;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778630;FUN_710377a120;FUN_7103783c10;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c799d0__7101c799d0.c)  [cfg](../decompiled/FUN_7101c799d0__7101c799d0.mmd)
- **Clone hash:** `392a6f8bee46077c`

```c

void FUN_7101c799d0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x1;
  long extraout_x1_00;
  char *pcVar7;
  long extraout_x1_01;
  long extraout_x1_02;
  long lVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  int *piVar11;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  lVar8 = param_2;
  if (*(int *)(param_1 + 0xec) == 0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(*(long **)(param_1 + 0x118),1);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(*(long **)(param_1 + 0x120),0);
    FUN_7103776640(&local_40,param_1 + 0x108,(byte ****)"set_parts_txt_head_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar6 = local_38;
// ... (129 more lines)
```

## 26. `FUN_7101c7ad10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7ad10`  (offset `0x1c7ad10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7ad10(long * * * * param_1, long * param_2, undefined8 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4780 bytes / 277 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** set_part_msg_popup;selector_01;set_lct_btn_category_00;set_lct_btn_category_01;mode_empty_03;set_lct_btn_category_02;set_lct_btn_category_03;set_lct_btn_category_04;set_lct_btn_category_05;scroll;mnu_online_room_inside_chat_sort_all;set_scr_sort;offset_lr;blinder
- **Callers:** FUN_7101c62870
- **Callees:** FUN_71003cb050;FUN_7101989a30;FUN_71019c1c50;FUN_7101c79d10;FUN_71032cbf30;FUN_71032ccb70;FUN_710337d5b0;FUN_710337d5c0;FUN_710337dab0;FUN_710337dac0;FUN_710337e100;FUN_710337e110;FUN_710337e2d0;FUN_710337e2e0;FUN_710337e4a0;FUN_710337e4b0;...
- **Files:** [decomp](../decompiled/FUN_7101c7ad10__7101c7ad10.c)  [cfg](../decompiled/FUN_7101c7ad10__7101c7ad10.mmd)
- **Clone hash:** `9871fe070791bf30`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c7ad10(long ****param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  char *pcVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  long lVar15;
  long ***ppplVar16;
  code *pcVar17;
  byte ***pppbVar18;
  uint uVar19;
  long ***ppplVar20;
  char *pcVar21;
  ulong uVar22;
  byte *pbVar23;
  uint uVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  long ***ppplVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
// ... (963 more lines)
```

## 27. `FUN_71002a4430`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a4430`  (offset `0x2a4430`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a4430(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** Room
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;joinRoom;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a4430__71002a4430.c)  [cfg](../decompiled/FUN_71002a4430__71002a4430.mmd)
- **Clone hash:** `1802d92a98223cae`

```c

void FUN_71002a4430(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  int local_358 [6];
  char *local_340;
  undefined **local_338;
  undefined1 local_330 [4];
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
// ... (284 more lines)
```

## 28. `FUN_7102e158e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102e158e0`  (offset `0x2e158e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102e158e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4064 bytes / 154 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** stc_s03_steelroom_bg_set;stc_s03_steelroom_blend_buffer_set;gigigiaru;hassam;hitotsuki;haganeil;registeel;stc_s03_steel_hole_set
- **Callees:** FUN_71003ac560;FUN_71025e9d50;FUN_71025f4d80;FUN_7102dfe700;FUN_7102e12e40;FUN_7102e14260;FUN_7102e1a360;FUN_7102e1ab00;FUN_7102e1d840;FUN_710313e6a0;FUN_710392e290;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7102e158e0__7102e158e0.c)  [cfg](../decompiled/FUN_7102e158e0__7102e158e0.mmd)
- **Clone hash:** `0f65dfbbf851108b`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102e158e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte ****ppppbVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  byte *pbVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
// ... (771 more lines)
```

## 29. `FUN_7101c8df10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c8df10`  (offset `0x1c8df10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c8df10(long param_1, undefined8 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1644 bytes / 86 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** pop_in;con_1_s;indent_1s_off;con_0_m;indent_0m_off;txt_header_01;mnu_online_room_create_detail;set_txt_help;txt_header_00;mnu_online_room_create_search
- **Callees:** FUN_7101704ba0;FUN_7101797350;FUN_7101c83c40;FUN_7101c8f600;FUN_7101c91cb0;FUN_7101c93960;FUN_71024076d0;FUN_7103313f20;FUN_7103775dc0;FUN_7103776290;FUN_7103776390;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377b140;...
- **Files:** [decomp](../decompiled/FUN_7101c8df10__7101c8df10.c)  [cfg](../decompiled/FUN_7101c8df10__7101c8df10.mmd)
- **Clone hash:** `a35e064552b56dcf`

```c

void FUN_7101c8df10(long param_1,undefined8 *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  undefined1 *puVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined **local_a0;
  ulong local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  
  plVar12 = *(long **)*param_2;
  if (*(int *)(param_1 + 0xdc) != 0) {
    if (((*(long *)(plVar12[2] + 8) != 0) &&
        (plVar12 = (long *)FUN_71037964b0(*(long *)(plVar12[2] + 8),0x710433a236),
        plVar12 != (long *)0x0)) && (uVar5 = (**(code **)(*plVar12 + 0x138))(), (uVar5 & 1) == 0)) {
      return;
    }
    if (*(uint *)(param_1 + 0xd4) < 0x13) {
// ... (247 more lines)
```

## 30. `FUN_710235d040`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Room
- **Strings touched:** OnlineMeleeConventionSequenceScene;CollectionReplaySequenceScene;CollectionShopSequenceScene;SpiritsCampaignSequenceScene;TrainingSequenceScene;CollectionMovieSequenceScene;OnlineMeleeTournamentSequenceScene;MeleeAllBattleSequenceScene;MeleeNormalSequenceScene;HomeRunContestSequenceScene;KumiteSequenceScene;OptionSequenceScene;StandardSequenceScene;AmiiboSequenceScene;CollectionGetterSequenceScene;CollectionFighterSequenceScene;OnlineShareSequenceScene;OnlineMeleeParallelSequenceScene;MeleeTeamCompeSequenceScene;ChallengerRoomSequenceScene;MeleeVrSequenceScene;CollectionCardSequenceScene;CollectionPlayingSequenceScene;MeleeTournamentSequenceScene;SpiritsBoardSequenceScene;SoundTestSequenceScene;CollectionTipsSequenceScene;OnlineMeleeAnySequenceScene;OnlineMeleeRoomSequenceScene;CollectionPresentSequenceScene;SpiritsOrganizationSequenceScene;SpiritsBoardSpecialSequenceScene;...
- **Callers:** FUN_710235cb00
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323b9e0;FUN_7103726240;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_710235d040__710235d040.c)  [cfg](../decompiled/FUN_710235d040__710235d040.mmd)
- **Clone hash:** `05702ea7b548ecbb`

```c

void FUN_710235d040(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined2 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  byte local_c8 [64];
  undefined8 local_88;
  byte local_80 [64];
  
  plVar15 = (long *)(param_1 + 8);
  plVar18 = *(long **)(*plVar15 + 0x20);
// ... (5027 more lines)
```

## 31. `FUN_7101c78060`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c78060`  (offset `0x1c78060`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c78060(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1924 bytes / 93 bb / 8 incoming refs
- **Match values:** room
- **Strings touched:** btn_%02d_on;color_me;color_member;own_on;own_off;fri_on;fri_off;set_txt_00;mnu_online_room_inside_account_nam;set_txt_01;mnu_online_room_inside_ko_total_n;set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;btn_%02d_off
- **Callers:** FUN_7101889e70;FUN_7101892d70;FUN_7101895570;FUN_7101896640;FUN_7101c4ddd0;FUN_7101c62870;FUN_7101c6c910
- **Callees:** FUN_71003a4ca0;FUN_7103240430;FUN_710337d450;FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a280;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c78060__7101c78060.c)  [cfg](../decompiled/FUN_7101c78060__7101c78060.mmd)
- **Clone hash:** `5f47ac1aca5fcf10`

```c

void FUN_7101c78060(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0 [8];
  undefined **local_a0;
  undefined8 *local_98;
  undefined **local_90;
  undefined8 *local_88;
  long ********local_80 [2];
  undefined4 local_64;
  
  uVar17 = 0;
  bVar18 = 0;
  plVar1 = param_1 + 0x19;
  *(undefined1 *)((long)param_1 + 0xe7) = 0;
// ... (299 more lines)
```

## 32. `FUN_71002a5cc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a5cc0`  (offset `0x2a5cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a5cc0(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** Room
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;leaveRoom;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a5cc0__71002a5cc0.c)  [cfg](../decompiled/FUN_71002a5cc0__71002a5cc0.mmd)
- **Clone hash:** `49734bc8910cf610`

```c

void FUN_71002a5cc0(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  int local_358 [6];
  char *local_340;
  undefined **local_338;
  undefined1 local_330 [4];
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
// ... (284 more lines)
```

## 33. `FUN_7101c79d10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c79d10`  (offset `0x1c79d10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c79d10(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1696 bytes / 112 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_scr_sort;plate_side;set_txt_list;mnu_online_room_inside_chat_sort_all
- **Callers:** FUN_7101c799d0;FUN_7101c7ad10
- **Callees:** FUN_7101c78fb0;FUN_7101c79710;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_7103783690;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c79d10__7101c79d10.c)  [cfg](../decompiled/FUN_7101c79d10__7101c79d10.mmd)
- **Clone hash:** `45b5e1cc0fbd2481`

```c

void FUN_7101c79d10(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  long ***ppplVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  void *pvVar21;
  long ****pppplVar22;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  puVar14 = (undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *puVar14;
  plVar20 = (long *)**(undefined8 **)(param_1 + 8);
  plVar6 = (long *)*plVar20;
  pcVar10 = (char *)plVar6[1];
  if ((*pcVar10 == '\f') && (iVar16 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
    iVar18 = 0;
    pbVar15 = &DAT_7104742dbb;
// ... (296 more lines)
```

## 34. `FUN_710188ce20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710188ce20`  (offset `0x188ce20`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710188ce20(void)`
- **Size / BBs / Incoming:** 13592 bytes / 597 bb / 5 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_01;mnu_online_room_inside_room_nam
- **Callers:** FUN_7101887600;FUN_71018881f0;FUN_7101888ce0;FUN_7101889200;FUN_710188b110
- **Callees:** FUN_71000001c0;FUN_71015547e0;FUN_71016b6a10;FUN_71016ba6b0;FUN_71016bade0;FUN_71016e4880;FUN_71016f6340;FUN_7101764000;FUN_710179e400;FUN_71017abd00;FUN_71017ac030;FUN_71017ac100;FUN_71018918d0;FUN_7101891fd0;FUN_71018924f0;FUN_7101c689c0;...
- **Files:** [decomp](../decompiled/FUN_710188ce20__710188ce20.c)  [cfg](../decompiled/FUN_710188ce20__710188ce20.mmd)
- **Clone hash:** `c1f08bc0bbcf789a`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_710188ce20(ulong param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  short sVar8;
  char cVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar22;
  long *********ppppppppplVar23;
  byte ****ppppbVar24;
  long ****pppplVar25;
  undefined1 uVar26;
  long lVar27;
  int *piVar28;
// ... (2395 more lines)
```

## 35. `FUN_7101c919f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c919f0`  (offset `0x1c919f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c919f0(uint * param_1, byte param_2, byte param_3)`
- **Size / BBs / Incoming:** 704 bytes / 44 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** mnu_online_room_spirits_off
- **Callers:** FUN_7101c8f600;FUN_7101c91cb0
- **Callees:** <EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c919f0__7101c919f0.c)  [cfg](../decompiled/FUN_7101c919f0__7101c919f0.mmd)
- **Clone hash:** `76d575c2152b73b6`

```c

void FUN_7101c919f0(uint *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char local_98 [64];
  undefined8 local_58;
  byte local_50 [64];
  
  if (param_2 < 2) {
    uVar5 = 0;
    pcVar8 = "mnu_online_room_spirits_on";
    if ((&DAT_7104545280)[(char)param_2] != '\x02') {
      pcVar8 = "mnu_online_room_spirits_off";
    }
    while( true ) {
      bVar1 = pcVar8[uVar5];
      if (bVar1 == 0) break;
      local_50[uVar5] = bVar1;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar1 = (pcVar8 + uVar5)[1];
      if (bVar1 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_50[uVar5 + 1] = bVar1;
      uVar5 = uVar5 + 2;
    }
    uVar4 = 0x811c9dc5;
// ... (110 more lines)
```

## 36. `FUN_7101c6c030`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c6c030`  (offset `0x1c6c030`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c6c030(long param_1, byte * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1868 bytes / 63 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_parts_header_btn;gray_off;mode_empty_03;num_on;set_txt_name;mnu_online_room_search_host_account;set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_cate;key_off;set_txt_rule;num_disp_max;set_txt_max;mnu_online_room_search_participants_max;set_txt_slash
- **Callers:** FUN_710188ce20;FUN_7101896640
- **Callees:** FUN_7101c6ec50;FUN_7101c6ee80;FUN_7103240430;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377a280;FUN_7103796f20;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c6c030__7101c6c030.c)  [cfg](../decompiled/FUN_7101c6c030__7101c6c030.mmd)
- **Clone hash:** `bfe19bf5d1595402`

```c

void FUN_7101c6c030(long param_1,byte *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long *********ppppppppplVar11;
  undefined8 uVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  long ***ppplVar18;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c6;
  ushort local_be;
  undefined1 local_bc;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  undefined8 *local_70;
  undefined **local_68;
  undefined8 *local_60;
  long ********local_58;
  undefined4 local_44;
// ... (269 more lines)
```

## 37. `FUN_7102e08f40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102e08f40`  (offset `0x2e08f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102e08f40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6108 bytes / 277 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** stc_f01_fireroom_bg_set;stc_f01_fireroom_blend_buffer_set;stc_f01_yakumono_fire_surinuke_set;stc_f01_fire_kakou_set;houou;bursyamo;plate_side;goukazaru;pokabu;kaenjishi
- **Callees:** FUN_7102405040;FUN_71025e9d50;FUN_71025f4d80;FUN_7102dfe700;FUN_7102e0f450;FUN_7102e10420;FUN_7102e10f10;FUN_7102e14260;FUN_7102e1d840;FUN_71031675b0;FUN_71031676c0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7102e08f40__7102e08f40.c)  [cfg](../decompiled/FUN_7102e08f40__7102e08f40.mmd)
- **Clone hash:** `09927be7493a1812`

```c

void FUN_7102e08f40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ***ppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  char *pcVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long ****pppplVar21;
  ulong *puVar22;
  undefined8 uVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  long ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
// ... (1014 more lines)
```

## 38. `FUN_7101c77cf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c77cf0`  (offset `0x1c77cf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c77cf0(long param_1, byte param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 880 bytes / 37 bb / 3 incoming refs
- **Match values:** room
- **Strings touched:** player_caption;owner_caption;guide_btn_off;guide_btn_on;set_txt_00;mnu_online_room_inside_back_btn;mnu_online_room_inside_ok_btn
- **Callers:** FUN_7101c4ddd0;FUN_7101c62870;FUN_7101c779a0
- **Callees:** FUN_7103771a80;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101c77cf0__7101c77cf0.c)  [cfg](../decompiled/FUN_7101c77cf0__7101c77cf0.mmd)
- **Clone hash:** `52d81873b180400c`

```c

void FUN_7101c77cf0(long param_1,byte param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined **local_60;
  ulong local_58;
  
  bVar2 = *(char *)(param_1 + 0xe7) != '\0';
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(byte *)(param_1 + 0xe5) = bVar2 & param_2;
  pcVar1 = "owner_caption";
  if ((bVar2 & param_2) == 0) {
    pcVar1 = "player_caption";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),(long)pcVar1);
  if (*(char *)(param_1 + 0xe7) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042b446e);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x60))(*(long **)(param_1 + 0xd0),0);
    plVar10 = (long *)(param_1 + 200);
    (**(code **)(*(long *)*plVar10 + 0x60))((long *)*plVar10,1);
    (**(code **)(*(long *)*plVar10 + 0x70))((long *)*plVar10,1);
    uVar3 = 1;
    FUN_7103771a80(plVar10,8,1);
    FUN_7103776910(&local_60,param_1 + 0x28,(long ****)"set_txt_00",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    cVar4 = *(char *)(param_1 + 0xe5);
// ... (100 more lines)
```

## 39. `FUN_7101ac4ba0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_time;mnu_replay_detail_time_movie;set_txt_mode_00;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_anyone;mnu_replay_detail_room;mnu_replay_detail_anyone_vip;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_01;set_parts_text_scroll;set_txt_main;mnu_replay_data_title_default;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot;mstg_in_on;m_stg_txt_off;set_rep_movie_pic;mstg_in_off;turn_in_off;mstg_icn_in_on;m_stg_txt_on;turn_in_loop;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850;FUN_7101acbbd0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_710149ebc0;FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ac7410;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;...
- **Files:** [decomp](../decompiled/FUN_7101ac4ba0__7101ac4ba0.c)  [cfg](../decompiled/FUN_7101ac4ba0__7101ac4ba0.mmd)
- **Clone hash:** `bd88850886388e66`

```c

void FUN_7101ac4ba0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte ****ppppbVar12;
  long *plVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  byte ****ppppbVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long ********pppppppplVar28;
  long lVar29;
  byte *pbVar30;
  char cVar31;
  char *pcVar32;
  long *plVar33;
  char cVar34;
  ulong uVar35;
// ... (1178 more lines)
```

## 40. `FUN_7101c952b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c952b0`  (offset `0x1c952b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c952b0(long param_1, uint param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 992 bytes / 45 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_filter_title_sel;set_txt_filter_title;pic_disp_on;pic_disp_off
- **Callees:** FUN_7101c8f600;FUN_7101c91cb0;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_7103796f20;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c952b0__7101c952b0.c)  [cfg](../decompiled/FUN_7101c952b0__7101c952b0.mmd)
- **Clone hash:** `bea99edeaf887480`

```c

void FUN_7101c952b0(long param_1,uint param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  byte ****ppppbVar5;
  long ****pppplVar6;
  byte **ppbVar7;
  undefined4 uVar8;
  long ****pppplVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  ulong local_48;
  
  lVar10 = *(long *)(param_1 + 8);
  pppplVar9 = (long ****)(ulong)param_2;
  lVar12 = (long)(int)param_2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    ppppbVar5 = param_3;
    if (param_2 < 6) {
      FUN_7103776910(&local_50,(long)param_3,(long ****)"set_txt_filter_title_sel",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_60,(long)param_3,(long ****)"set_txt_filter_title",ppppbVar5,param_4,
                     param_5,param_6,param_7,param_8);
      pcVar11 = (&PTR_s_mnu_online_room_setting_purpose_71050adef8)[lVar12];
      FUN_710377a120((long)&local_50,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_60,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
      uVar3 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
// ... (131 more lines)
```

## 41. `FUN_7102dfec80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102dfec80`  (offset `0x2dfec80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102dfec80(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9532 bytes / 399 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** stc_d04_dragonroom_bg_set;stc_d04_dragonroom_blend_buffer_set;quaza;dys_%s_set;HeadN;Neck2N;Neck1N;BustN;Hip2N;Tail1;Tail2;Tail3;Tail4;Tail5;Tail6;Tail7;Tail8;Tail9;Tail10;Tail11;Tail12;Tail13;Tail14;Tail15;stc_d04_yakumono_dragon_surinuke_set;gaburias;sazandora;kibago;kairyu
- **Callees:** FUN_71003ac560;FUN_7102405040;FUN_71025e9d50;FUN_7102dfe700;FUN_7102e060f0;FUN_7102e06e00;FUN_7102e14260;FUN_7102e1d840;FUN_710313e6a0;FUN_71031675b0;FUN_71031676c0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7102dfec80__7102dfec80.c)  [cfg](../decompiled/FUN_7102dfec80__7102dfec80.mmd)
- **Clone hash:** `a0c29e22a2e00ad3`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102dfec80(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  long ***ppplVar5;
  long ***ppplVar6;
  byte ***pppbVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
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
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (2147 more lines)
```

## 42. `FUN_710225b990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** ROOM
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

## 43. `FUN_7102c2e110`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102c2e110`  (offset `0x2c2e110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102c2e110(long param_1, undefined8 param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3312 bytes / 108 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** stc_s00_clouds_set;stc_s00_clouds1_set;stc_s01_clouds_set;stc_s01_bg_set;dyr_s02_kumo_rotate_set;stc_s02_kumo_nyudo_set;dyr_s03_bg_room_a_set;dyr_s03_bg_room_b_set
- **Callees:** FUN_71003ca470;FUN_71003ca640;FUN_710056c360;FUN_7102c2f5f0;FUN_7102c30f40;FUN_710313ef20;FUN_7103142910;FUN_71031455c0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strstr;<EXTERNAL>::sqrtf
- **Files:** [decomp](../decompiled/FUN_7102c2e110__7102c2e110.c)  [cfg](../decompiled/FUN_7102c2e110__7102c2e110.mmd)
- **Clone hash:** `a61abe4b2eaeae11`

```c

/* WARNING: Removing unreachable block (ram,0x007102c2ebbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102c2e110(long param_1,undefined8 param_2,long *********param_3,long *********param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar9;
  long *plVar10;
  long ********pppppppplVar11;
  code *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long *********ppppppppplVar20;
  long *********__haystack;
  long lVar21;
  float __x;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 uVar26;
  undefined1 uVar27;
// ... (636 more lines)
```

## 44. `FUN_7101ac65f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_time_00;mnu_replay_detail_time_movie;set_txt_mode_02;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_anyone;mnu_replay_detail_melee_team;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_03;set_txt_header_rule_00;set_txt_rule_00;set_parts_tag_disp_00;set_parts_detail_pane_00;set_parts_text_scroll;set_txt_main;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot_00;mstg_out_on;turn_out_loop;turn_out_on;set_rep_movie_pic_00;mstg_out_off;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850
- **Callees:** FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101ac65f0__7101ac65f0.c)  [cfg](../decompiled/FUN_7101ac65f0__7101ac65f0.mmd)
- **Clone hash:** `0ecec1565a60a2d0`

```c

void FUN_7101ac65f0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte bVar15;
  char *pcVar16;
  long lVar17;
  long ***ppplVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  char cVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (478 more lines)
```

## 45. `FUN_7102f61aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102f61aa0`  (offset `0x2f61aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102f61aa0(undefined1[16] param_1, undefined8 param_2, undefined8 param_3, long * param_4, undefined8 param_5, long * * * * * * * * * param_6, undefined1[16] * param_7, undefined1[16] * param_8, undefined1[16] * param_9, long * * * * * * param_10, long * * * param_11)`
- **Size / BBs / Incoming:** 18192 bytes / 979 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** s15_bgParts;5_room000
- **Callees:** FUN_710137bc30;FUN_71025d9250;FUN_71025e9d50;FUN_71025eaba0;FUN_71025edd00;FUN_710260fdd0;FUN_7102610070;FUN_710262e920;FUN_710262fb80;FUN_7102f67890;FUN_710353f5a0;FUN_7103540a00;FUN_7103540b10;FUN_7103540d50;FUN_71035432d0;FUN_7103578580;...
- **Files:** [decomp](../decompiled/FUN_7102f61aa0__7102f61aa0.c)  [cfg](../decompiled/FUN_7102f61aa0__7102f61aa0.mmd)
- **Clone hash:** `b136b45bc03f9362`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102f61aa0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5,long *********param_6,undefined1 (*param_7) [16],
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],long ******param_10,
                   long ***param_11)

{
  int *piVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  long ********pppppppplVar12;
  ulong uVar13;
  long ********pppppppplVar14;
  ulong uVar15;
  ulong uVar16;
  long ****pppplVar17;
  long *plVar18;
  undefined8 uVar19;
  long *extraout_x1;
  long *plVar20;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  long *extraout_x1_08;
// ... (3329 more lines)
```

## 46. `FUN_7101bd3320`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd3320`  (offset `0x1bd3320`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd3320(long * * * * * * * * param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4224 bytes / 231 bb / 3 incoming refs
- **Match values:** room
- **Strings touched:** set_text_dev_count;mnu_local_display_rm_n;scroll;selector_0;selector_1;selector_2;set_parts_room_info;set_parts_profileicon_00;set_icn_profile_bg;set_parts_load;dev_wave_loop;dev_count_0
- **Callers:** FUN_71018553f0;FUN_7101855910;FUN_7101bdd8e0
- **Callees:** FUN_71003cb050;FUN_7101989a30;FUN_7101af2070;FUN_7101af8570;FUN_7101bd43a0;FUN_7101bdb680;FUN_7101bdb690;FUN_7101bdb9a0;FUN_7101bdb9b0;FUN_7101bdbb70;FUN_7101bdbb80;FUN_71032e5a30;FUN_710337e790;FUN_710376b960;FUN_710376e070;FUN_7103770b30;...
- **Files:** [decomp](../decompiled/FUN_7101bd3320__7101bd3320.c)  [cfg](../decompiled/FUN_7101bd3320__7101bd3320.mmd)
- **Clone hash:** `856018a3ec1589dc`

```c

void FUN_7101bd3320(long ********param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ********pppppppplVar1;
  char cVar2;
  long *plVar3;
  long ********pppppppplVar4;
  uint uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  undefined8 uVar9;
  long ********pppppppplVar10;
  long ***ppplVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  char *pcVar15;
  byte *pbVar16;
  long *******ppppppplVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long *******ppppppplVar23;
  ulong uVar24;
  undefined **local_2270;
  long *local_2268;
  undefined8 local_2260;
  undefined8 local_2258;
  undefined8 local_2250;
  undefined2 local_2248;
  undefined6 local_2246;
  undefined2 uStack_2240;
  undefined4 local_223e;
  undefined1 local_223a;
// ... (869 more lines)
```

## 47. `FUN_7101f89310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** ROOM
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

## 48. `FUN_7101892d70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101892d70`  (offset `0x1892d70`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101892d70(ulong param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 728 bytes / 33 bb / 2 incoming refs
- **Match values:** room
- **Strings touched:** set_txt_02;mnu_online_room_inside_ko_total_n
- **Callers:** FUN_7101889dc0;FUN_7101895570
- **Callees:** FUN_71016f6340;FUN_7101892950;FUN_7101892c60;FUN_7101c61830;FUN_7101c78060;FUN_7103776910;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101892d70__7101892d70.c)  [cfg](../decompiled/FUN_7101892d70__7101892d70.mmd)
- **Clone hash:** `30dd92ddbd755459`

```c

undefined8
FUN_7101892d70(ulong param_1,ulong param_2,long *********param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  undefined **local_60;
  ulong local_58;
  
  uVar5 = (uint)param_2;
  if ((~uVar5 & 0xff) == 0) {
    return 1;
  }
  lVar8 = *(long *)(param_1 + 0x1e8);
  if (lVar8 == 0) {
    return 1;
  }
  uVar6 = param_2 & 0xff;
  if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  uVar4 = param_2;
  if ((*(uint *)(lVar7 + 0xa000) & 1 << (ulong)(uVar5 & 0x1f)) != 0) {
    if (*(long *)(lVar7 + 0x9ff8) == 0) {
      uVar2 = 0xff;
      uVar4 = 0;
    }
// ... (74 more lines)
```

## 49. `FUN_7101c4e260`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c4e260`  (offset `0x1c4e260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c4e260(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1508 bytes / 74 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** set_parts_header_btn;set_txt_now;mnu_online_room_search_participants_n;pop_in
- **Callees:** FUN_7101c5d7b0;FUN_7101c5d920;FUN_71024076d0;FUN_71033112b0;FUN_7103313f20;FUN_710373b540;FUN_7103775dc0;FUN_7103775fa0;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377a280;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101c4e260__7101c4e260.c)  [cfg](../decompiled/FUN_7101c4e260__7101c4e260.mmd)
- **Clone hash:** `96f773bdbddb8e5a`

```c

void FUN_7101c4e260(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar16;
  byte ****ppppbVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
// ... (259 more lines)
```

## 50. `FUN_71002a64f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a64f0`  (offset `0x2a64f0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71002a64f0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 1704 bytes / 72 bb / 1 incoming refs
- **Match values:** room
- **Strings touched:** requestId;parameter;roomId
- **Callers:** FUN_71002a5cc0
- **Callees:** FUN_71001b1870;FUN_71001b3160;FUN_71001b34a0;FUN_71001b3cb0;FUN_71001b9950;FUN_71001b9fe0;FUN_71002ac3d0;FUN_71002ad5d0;FUN_71002ad6c0
- **Files:** [decomp](../decompiled/FUN_71002a64f0__71002a64f0.c)  [cfg](../decompiled/FUN_71002a64f0__71002a64f0.mmd)
- **Clone hash:** `16b3d136904c77d7`

```c

undefined8 FUN_71002a64f0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  ulong uVar12;
  long *local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  char acStack_64 [20];
  
  local_78 = 0;
  uStack_70 = 0x100;
  local_d8 = &local_98;
  local_d0 = auStack_68;
  local_98 = 0;
  local_90 = 0;
// ... (289 more lines)
```

