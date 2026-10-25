# key (funcs=166, hits=357)

Top 50 functions by hit count

## 1. `FUN_71019f4420`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019f4420`  (offset `0x19f4420`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019f4420(long param_1)`
- **Size / BBs / Incoming:** 1000 bytes / 27 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** hiragana;katakana;alphabet;european;russian;number;mel_chara_select_key_%s_%02d;set_txt;mel_chara_select_key_shift_%s;btn_txt;btn_icon_0;mel_chara_select_key_switching_%s
- **Callers:** FUN_71019f2e30;FUN_71019f6b40
- **Callees:** FUN_71019f4f00;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71019f4420__71019f4420.c)  [cfg](../decompiled/FUN_71019f4420__71019f4420.mmd)
- **Clone hash:** `23f8238b9bfd10e3`

```c

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
// ... (161 more lines)
```

## 2. `FUN_7101b9b850`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b9b850`  (offset `0x1b9b850`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b9b850(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 27552 bytes / 1366 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** menu_in;loading_on;loading_off;in_detail;out_detail;detail_page_0;detail_page_1;detail_page_2;mode_empty_03;detail_page_3;detail_page_4;detail_extra1_type1;detail_extra1_type2;detail_extra2_type1;detail_extra2_type2;detail_extra3_type1;detail_extra3_type2;detail_extra4_type1;detail_extra4_type2;detail_navi_up_show;detail_navi_up_hide;detail_navi_down_show;detail_navi_down_hide;detail_0;detail_0_to_1;detail_1_to_2;detail_2_to_3;detail_3_to_4;detail_2_to_1;detail_3_to_2;detail_4_to_3;detail_1_to_0;...
- **Callers:** FUN_7101ba3b90
- **Callees:** FUN_71003a4ca0;FUN_7101414b10;FUN_7101989a30;FUN_7101b50990;FUN_7101ba23f0;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_710337dab0;FUN_710337dac0;FUN_710376b960;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103773200;FUN_7103776290;...
- **Files:** [decomp](../decompiled/FUN_7101b9b850__7101b9b850.c)  [cfg](../decompiled/FUN_7101b9b850__7101b9b850.mmd)
- **Clone hash:** `4ab023b198ae0c56`

```c

void FUN_7101b9b850(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long ***ppplVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long **pplVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
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
// ... (5072 more lines)
```

## 3. `FUN_7101d7da70`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d7da70`  (offset `0x1d7da70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d7da70(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2364 bytes / 78 bb / 3 incoming refs
- **Match values:** key
- **Strings touched:** scroll;scroll_00;selector_0;set_parts_keyhelp_00;set_parts_keyhelp_01;key_01_on;set_parts_keyhelp_02;keyhelp_on;key_01_off;ser_list;chara_list;ser_on
- **Callers:** FUN_710184b4c0;FUN_71018dd020;FUN_7101f431c0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101796d70;FUN_710184cdd0;FUN_7101d71ea0;FUN_7101d79600;FUN_7101d7a1f0;FUN_7101d7c1b0;FUN_7101d7d9a0;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103775dc0;FUN_71037760f0;FUN_7103778300;FUN_7103783690;...
- **Files:** [decomp](../decompiled/FUN_7101d7da70__7101d7da70.c)  [cfg](../decompiled/FUN_7101d7da70__7101d7da70.mmd)
- **Clone hash:** `f843310183404011`

```c

void FUN_7101d7da70(long param_1,undefined4 param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *extraout_x1_04;
  undefined8 *puVar4;
  char *pcVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  undefined4 uVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  byte ***local_1a0;
  undefined2 local_198;
  undefined4 local_196;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
// ... (369 more lines)
```

## 4. `FUN_7101eb58d0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb58d0`  (offset `0x1eb58d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb58d0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 948 bytes / 45 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** costgage_out;maintool_out;key_help_01_fadeout;key_help_02_fadeout;key_help_03_fadeout;undo_redo_out;help_btn_out;key_help_00_fadeout
- **Callees:** FUN_7101ec56c0;FUN_7103778300;FUN_710377aee0;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb58d0__7101eb58d0.c)  [cfg](../decompiled/FUN_7101eb58d0__7101eb58d0.mmd)
- **Clone hash:** `ff45a7b39bd768d8`

```c

void FUN_7101eb58d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x318);
  lVar7 = **(long **)(param_1 + 8);
  if (*(char *)(lVar4 + 0x161) == '\0') {
    if (*(int *)(param_1 + 0x270) != 1) {
      if (*(char *)(lVar4 + 0x162) == '\0') {
        FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71043cfc04);
        *(undefined4 *)(param_1 + 0x270) = 1;
        return;
      }
      FUN_7101ec56c0(lVar4,1,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101eb5c28;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) != 1) {
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710424fc1e);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710438d27d);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71043bed92);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x7104433811);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71042b4b57);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71042f8ad9);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710425fc28);
      lVar4 = *(long *)(param_1 + 0x318);
      bVar3 = *(int *)(lVar4 + 0xb8) != 0;
      puVar1 = (undefined8 *)(lVar4 + 0xe8);
      if (bVar3) {
        puVar1 = (undefined8 *)(lVar4 + 0x118);
// ... (106 more lines)
```

## 5. `FUN_7101eb5c90`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb5c90`  (offset `0x1eb5c90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb5c90(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1024 bytes / 51 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** costgage_in;maintool_in;key_help_01_fadeout;key_help_02_fadeout;key_help_03_fadeout;undo_redo_in;help_btn_in;key_help_00_fadeout;mnu_stgcreate_edit_display_erase;mode_empty_03;mnu_stgcreate_edit_display_back
- **Callees:** FUN_7101ec57e0;FUN_7103778300;FUN_710377a120;FUN_710377aee0;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb5c90__7101eb5c90.c)  [cfg](../decompiled/FUN_7101eb5c90__7101eb5c90.mmd)
- **Clone hash:** `b9350868a5437f5b`

```c

void FUN_7101eb5c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x318);
  lVar9 = **(long **)(param_1 + 8);
  if (*(char *)(lVar8 + 0x161) == '\0') {
    if (*(int *)(param_1 + 0x270) != 1) {
      if (*(char *)(lVar8 + 0x162) == '\0') {
        FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x71043cfc04);
        *(undefined4 *)(param_1 + 0x270) = 1;
        return;
      }
      FUN_7101ec57e0(*(long *)(lVar8 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(lVar8 + 0x161) == '\0') {
        pcVar7 = "mnu_stgcreate_edit_display_back";
      }
      else {
        pcVar7 = "mnu_stgcreate_edit_display_erase";
      }
      FUN_710377a120(lVar8 + 0x38,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101eb6078;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) != 1) {
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x10),0x71043f1012);
// ... (126 more lines)
```

## 6. `FUN_7101f45620`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** KEY;key
- **Strings touched:** ItemManager;get_num_of_ownered_item;get_num_of_active_item_all;get_active_item;find_active_item_from_id;find_active_item_from_area_id;remove_item_from_id;is_change_fighter_restart_position;ItemParamAccessor;boss_common_param_int;is_valid_self_param;get_self_param_float;get_self_param_int;GimmickEventPresenter;dispatch_event_from_fighter;StageManager;stage_all_stop;is_discretion_final_enabled;BossManager;is_stoppable_se;notify_on_boss_defeat;notify_on_boss_keyoff_bgm;notify_on_boss_dead;sv_set_status_func;sv_set_status_func_str;Weapon;get_founder_id;get_pocket_founder_id;WeaponKineticEnergyGravity;set_accel;set_speed;get_limit_speed;...
- **Callers:** FUN_71022b7100
- **Callees:** FUN_71000001c0;FUN_7101f87300;FUN_7101f89130;FUN_7101f89310;FUN_7101f94540;FUN_7101f95230;FUN_7102123d40;FUN_71021368b0;FUN_7102137e70;FUN_71021408e0;FUN_7102144140;FUN_7102146bf0;FUN_710214a020;FUN_710214fdf0;FUN_7102151c30;FUN_71021539b0;...
- **Files:** [decomp](../decompiled/FUN_7101f45620__7101f45620.c)  [cfg](../decompiled/FUN_7101f45620__7101f45620.mmd)
- **Clone hash:** `47a872489deece59`

```c

void FUN_7101f45620(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar6;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  code *pcVar7;
  byte ****ppppbVar8;
  long lVar9;
  long **pplVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  long ***ppplVar14;
  uint *__s;
  undefined1 auVar15 [16];
  undefined4 local_84;
  long ***local_80;
  undefined8 local_78;
  int local_70;
  
  if (lib::Singleton<lib::LuaManager>::instance_ != (long *)0x0) goto LAB_7101f456b4;
  plVar2 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = extraout_x1;
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_84 = 0;
// ... (19486 more lines)
```

## 7. `FUN_7101ec59d0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ec59d0`  (offset `0x1ec59d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ec59d0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4412 bytes / 265 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** selector_edit;set_parts_keyhelp_00;set_txt_help;key_help_00_fadeout;set_parts_keyhelp_01;key_help_01_fadeout;set_parts_keyhelp_02;key_help_02_fadeout;set_parts_keyhelp_03;key_help_03_fadeout;mnu_stgcreate_edit_display_erase;mnu_stgcreate_edit_camera_scaling;mnu_stgcreate_edit_birds_view;mnu_stgcreate_edit_function;set_btn_l_decide;set_txt_00;mnu_stgcreate_edit_save;set_txt_01;set_txt_guide
- **Callees:** FUN_71019c1c50;FUN_7101ec4640;FUN_7101ec4ee0;FUN_7101ec7250;FUN_710337cef0;FUN_710337d360;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377a120;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101ec59d0__7101ec59d0.c)  [cfg](../decompiled/FUN_7101ec59d0__7101ec59d0.mmd)
- **Clone hash:** `e7d9bef3713549af`

```c

/* WARNING: Removing unreachable block (ram,0x007101ec5fb4) */
/* WARNING: Removing unreachable block (ram,0x007101ec5c98) */
/* WARNING: Removing unreachable block (ram,0x007101ec5b94) */
/* WARNING: Removing unreachable block (ram,0x007101ec5eac) */
/* WARNING: Removing unreachable block (ram,0x007101ec60bc) */

void FUN_7101ec59d0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  char *pcVar14;
  byte *pbVar15;
  long *plVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined **local_128;
  undefined8 *local_120;
  undefined **local_118;
  ulong local_110;
  byte ***local_108;
  long *plStack_100;
// ... (929 more lines)
```

## 8. `FUN_7101bb4ae0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bb4ae0`  (offset `0x1bb4ae0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bb4ae0(long * * * * param_1)`
- **Size / BBs / Incoming:** 15804 bytes / 861 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_current_main;set_current_others;set_current_items;in_menu;menu_main_to_others;menu_main_to_items;menu_others_to_main;menu_items_to_main;menu_item_out;menu_item_in;menu_itemset_default;menu_itemset_monsterball;menu_itemset_assist;menu_itemset_masterball;out_menu;in_numbers;out_numbers;in_speed;out_speed;help_off;help_items_default;help_items_finish;category_00;category_01;category_02;category_03;category_04;category_05;category_06;category_07;category_08;category_09;...
- **Callers:** FUN_7101bb15f0
- **Callees:** FUN_7101989a30;FUN_7101a7ed70;FUN_7101bb88a0;FUN_7101bb8df0;FUN_7101bb9290;FUN_7101bb9c00;FUN_7101bba3b0;FUN_7101bba3c0;FUN_7101bba4e0;FUN_7101bba4f0;FUN_7101bba5e0;FUN_7101bba5f0;FUN_7101bba6e0;FUN_7101bba6f0;FUN_7101bba7e0;FUN_7101bba7f0;...
- **Files:** [decomp](../decompiled/FUN_7101bb4ae0__7101bb4ae0.c)  [cfg](../decompiled/FUN_7101bb4ae0__7101bb4ae0.mmd)
- **Clone hash:** `dd5d217e5e799b73`

```c

void FUN_7101bb4ae0(long ****param_1)

{
  long ****pppplVar1;
  long ****pppplVar2;
  char cVar3;
  ulong uVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  ulong uVar7;
  long *plVar8;
  long ****pppplVar9;
  long *********ppppppppplVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar15;
  long **pplVar16;
  code *pcVar17;
  long ***ppplVar18;
  byte **ppbVar19;
  long lVar20;
  long ***ppplVar21;
  long ***ppplVar22;
  long lVar23;
  long ***local_2e0;
  long ***local_2d8;
  long ***local_2d0;
  long ***local_2c8;
  long ***local_2c0;
  long ***local_2b8;
  long ***local_2b0;
  long ***local_2a8;
  long ***local_2a0;
// ... (2578 more lines)
```

## 9. `FUN_7101da5740`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101da5740`  (offset `0x1da5740`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101da5740(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 756 bytes / 53 bb / 8 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_det_key_00;set_parts_det_key_01;set_parts_det_key_05;mode_empty_03;set_parts_det_key_02;set_parts_det_key_06;set_parts_det_key_04;set_parts_det_key_03
- **Callers:** FUN_7101da2f70;FUN_7101da3100;FUN_7101da33c0;FUN_7101da3850;FUN_7101da3b00;FUN_7101da43b0;FUN_7101da4fc0;FUN_7101da5300
- **Callees:** FUN_7103776640;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101da5740__7101da5740.c)  [cfg](../decompiled/FUN_7101da5740__7101da5740.mmd)
- **Clone hash:** `15bacbba98aa69ad`

```c

void FUN_7101da5740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x770) == 9) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x80) + 0x254) << 0x18;
    if (iVar1 == 0x16000000) {
      sVar7 = *(short *)(param_1 + 0xac);
    }
    else if (iVar1 == 0x15000000) {
      sVar7 = *(short *)(param_1 + 0xaa);
    }
    else {
      if (iVar1 != 0x14000000) goto LAB_7101da57c8;
      sVar7 = *(short *)(param_1 + 0xa8);
    }
    bVar3 = false;
    bVar11 = 0;
    bVar4 = sVar7 != -1;
    bVar10 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x770) == 8) {
      bVar3 = *(short *)(param_1 + 0x98) != -1;
      bVar4 = false;
// ... (115 more lines)
```

## 10. `FUN_7101a7c9b0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7c9b0`  (offset `0x1a7c9b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7c9b0(long * * * * param_1)`
- **Size / BBs / Incoming:** 9144 bytes / 464 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** scroll_list;scr_sort;blinder;set_pic_sell;txt_guide;set_txt_sell_gold;set_txt_sell_count;set_parts_total_gold;set_txt_num;mnu_opponents_sell_gold_n;anim_count;anim_stop;set_parts_key_help_favorite;set_txt_icon;selector;selector_01;selector_00;set_parts_key_help_sell;set_parts_key_help_favor;set_parts_key_help_check;set_parts_key_help_cance;check_color_off
- **Callers:** FUN_71018182a0
- **Callees:** FUN_71003cb050;FUN_71019c1c50;FUN_7101a7ed70;FUN_7101a7ef70;FUN_7101a7ef80;FUN_7101a7f320;FUN_7101a7f330;FUN_7101a7f3e0;FUN_7101a7f3f0;FUN_7101a7f4c0;FUN_7101a7f4d0;FUN_7103239360;FUN_710323c4e0;FUN_7103293b70;FUN_71032cbf30;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_7101a7c9b0__7101a7c9b0.c)  [cfg](../decompiled/FUN_7101a7c9b0__7101a7c9b0.mmd)
- **Clone hash:** `2bf270d25ea5acae`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a7c9b0(long ****param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long ***ppplVar11;
  ulong uVar12;
  long ***ppplVar13;
  byte ***pppbVar14;
  byte **ppbVar15;
  byte ***pppbVar16;
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
  undefined8 uVar17;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
// ... (1737 more lines)
```

## 11. `FUN_7101eb51f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb51f0`  (offset `0x1eb51f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb51f0(long param_1)`
- **Size / BBs / Incoming:** 752 bytes / 32 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** costgage_in;maintool_in;key_help_01_fadeout;key_help_02_fadeout;key_help_03_fadeout;undo_redo_in;help_btn_in
- **Callees:** FUN_7103778300;FUN_710377aee0;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb51f0__7101eb51f0.c)  [cfg](../decompiled/FUN_7101eb51f0__7101eb51f0.mmd)
- **Clone hash:** `5e0a5f2e7e0ee68b`

```c

void FUN_7101eb51f0(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71043f1012);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104422aec);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x71043bed92);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x7104433811);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x71042b4b57);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x710436caa8);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104401c9e);
    lVar6 = *(long *)(param_1 + 0x318);
    bVar2 = *(int *)(lVar6 + 0xb8) != 0;
    puVar1 = (undefined8 *)(lVar6 + 0xd8);
    if (bVar2) {
      puVar1 = (undefined8 *)(lVar6 + 0x108);
    }
    lVar5 = 0xd8;
    if (bVar2) {
      lVar5 = 0x108;
    }
    **(undefined8 **)(lVar6 + 0x128) = *(undefined8 *)*puVar1;
    *(undefined8 *)(*(long *)(lVar6 + 0x128) + 8) = *(undefined8 *)(*(long *)(lVar6 + lVar5) + 8);
    *(undefined1 *)(*(long *)(lVar6 + 0x128) + 0x10) =
         *(undefined1 *)(*(long *)(lVar6 + lVar5) + 0x10);
    FUN_710377aee0(0x3f800000,lVar6 + 0x120);
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1b8);
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
// ... (74 more lines)
```

## 12. `FUN_7101eb54e0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb54e0`  (offset `0x1eb54e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb54e0(long param_1)`
- **Size / BBs / Incoming:** 748 bytes / 32 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** costgage_out;maintool_out;key_help_01_fadeout;key_help_02_fadeout;key_help_03_fadeout;undo_redo_out;help_btn_out
- **Callees:** FUN_7103778300;FUN_710377aee0;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb54e0__7101eb54e0.c)  [cfg](../decompiled/FUN_7101eb54e0__7101eb54e0.mmd)
- **Clone hash:** `94d5f9e32a1f4bdc`

```c

void FUN_7101eb54e0(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x710424fc1e);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x710438d27d);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71043bed92);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104433811);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71042b4b57);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71042f8ad9);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x710425fc28);
    lVar6 = *(long *)(param_1 + 0x318);
    bVar2 = *(int *)(lVar6 + 0xb8) != 0;
    puVar1 = (undefined8 *)(lVar6 + 0xe8);
    if (bVar2) {
      puVar1 = (undefined8 *)(lVar6 + 0x118);
    }
    lVar5 = 0xe8;
    if (bVar2) {
      lVar5 = 0x118;
    }
    **(undefined8 **)(lVar6 + 0x128) = *(undefined8 *)*puVar1;
    *(undefined8 *)(*(long *)(lVar6 + 0x128) + 8) = *(undefined8 *)(*(long *)(lVar6 + lVar5) + 8);
    *(undefined1 *)(*(long *)(lVar6 + 0x128) + 0x10) =
         *(undefined1 *)(*(long *)(lVar6 + lVar5) + 0x10);
    FUN_710377aee0(0x3f800000,lVar6 + 0x120);
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1c8);
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
// ... (74 more lines)
```

## 13. `FUN_71020fbb90`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** KEY
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

## 14. `FUN_7101e134d0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e134d0`  (offset `0x1e134d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e134d0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 700 bytes / 47 bb / 9 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_det_key_00;set_parts_det_key_01;mode_empty_03;set_parts_det_key_02;set_parts_det_key_04;set_parts_det_key_03
- **Callers:** FUN_710195fbf0;FUN_7101e0e250;FUN_7101e0ef70;FUN_7101e103e0;FUN_7101e11870;FUN_7101e121d0;FUN_7101e12b60;FUN_7101e16790
- **Callees:** FUN_7103776640;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101e134d0__7101e134d0.c)  [cfg](../decompiled/FUN_7101e134d0__7101e134d0.mmd)
- **Clone hash:** `a67fff78d615654d`

```c

void FUN_7101e134d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x140) == 3) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x188) + 0x254) << 0x18;
    if (iVar1 == 0x2000000) {
      sVar6 = *(short *)(param_1 + 0x1ae);
    }
    else if (iVar1 == 0x1000000) {
      sVar6 = *(short *)(param_1 + 0x1ac);
    }
    else {
      if (iVar1 != 0) goto LAB_7101e1354c;
      sVar6 = *(short *)(param_1 + 0x1aa);
    }
    bVar3 = false;
    bVar10 = 0;
    bVar4 = sVar6 != -1;
    bVar9 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x140) == 2) {
      bVar3 = *(short *)(param_1 + 0x1a8) != -1;
      bVar9 = 0;
      bVar4 = false;
// ... (104 more lines)
```

## 15. `FUN_7101ec6b10`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ec6b10`  (offset `0x1ec6b10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ec6b10(long param_1)`
- **Size / BBs / Incoming:** 1848 bytes / 68 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_keyhelp_01;set_txt_icon;set_parts_keyhelp_02;set_parts_keyhelp_03;set_btn_undo;set_txt_key;set_btn_redo;set_btn_l_decide_01;set_txt_guide;mnu_stgcreate_edit_fix_guide;mnu_stgcreate_edit_fix_guide_lefthand
- **Callees:** FUN_7101ec57e0;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ec6b10__7101ec6b10.c)  [cfg](../decompiled/FUN_7101ec6b10__7101ec6b10.mmd)
- **Clone hash:** `28e9abf16486a40c`

```c

void FUN_7101ec6b10(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined **local_240;
  ulong local_238;
  undefined **local_230;
  ulong local_228;
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  uint local_1f0;
  undefined4 uStack_1ec;
  byte local_1e8 [64];
  undefined8 local_1a8;
// ... (725 more lines)
```

## 16. `FUN_7101da3b00`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101da3b00`  (offset `0x1da3b00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101da3b00(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2212 bytes / 112 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_btn_attacker;anim_out_slot;set_parts_slot;set_parts_btn_spter_%02d;set_parts_det_key_05;set_parts_det_key_00;anim_key;mode_empty_03;set_parts_det_key_02
- **Callees:** FUN_7101da5650;FUN_7101da5740;FUN_7101da8880;FUN_7101da9670;FUN_7101da9e30;FUN_7101dab570;FUN_7101dabb40;FUN_71024076d0;FUN_7102529a70;FUN_7103313f20;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_7103776640;FUN_7103778300;FUN_71037964b0;...
- **Files:** [decomp](../decompiled/FUN_7101da3b00__7101da3b00.c)  [cfg](../decompiled/FUN_7101da3b00__7101da3b00.mmd)
- **Clone hash:** `9522b9d1993ce300`

```c

void FUN_7101da3b00(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  undefined4 local_138 [2];
  undefined **local_130;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined6 uStack_f6;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined2 local_e4;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined4 local_90;
  undefined2 local_8c;
// ... (370 more lines)
```

## 17. `FUN_7101da43b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101da43b0`  (offset `0x1da43b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101da43b0(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3080 bytes / 157 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_slot;set_parts_btn_spter_%02d;anim_out_slot;set_parts_det_key_06;set_parts_csr_01;select_on;set_parts_csr_02;set_parts_csr_03;set_parts_det_key_01;anim_key;set_parts_det_key_04;select_off
- **Callees:** FUN_7101da5650;FUN_7101da5740;FUN_7101da8880;FUN_7101da9670;FUN_7101da9e30;FUN_7101dab570;FUN_71024076d0;FUN_7102529a70;FUN_710252a950;FUN_7103313f20;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_7103776640;FUN_7103778300;FUN_71037964b0;...
- **Files:** [decomp](../decompiled/FUN_7101da43b0__7101da43b0.c)  [cfg](../decompiled/FUN_7101da43b0__7101da43b0.mmd)
- **Clone hash:** `22365041d5482b0d`

```c

void FUN_7101da43b0(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  int iVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined4 local_128 [2];
  undefined **local_120;
  long local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined2 local_d4;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_80;
// ... (541 more lines)
```

## 18. `FUN_7101e0ef70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e0ef70`  (offset `0x1e0ef70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e0ef70(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5228 bytes / 247 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_btn_attacker;anim_out_slot;set_parts_slot;set_parts_btn_spter_%02d;set_parts_det_key_00;anim_key;mode_empty_03;set_parts_det_key_02
- **Callees:** FUN_7101af53d0;FUN_7101e134d0;FUN_7101e13790;FUN_7101e13860;FUN_7101e14030;FUN_7101e153c0;FUN_7101e16090;FUN_7101e16790;FUN_7101e16c20;FUN_71024076d0;FUN_7102529a70;FUN_7103313f20;FUN_7103771a80;FUN_7103771be0;FUN_71037760f0;FUN_7103776640;...
- **Files:** [decomp](../decompiled/FUN_7101e0ef70__7101e0ef70.c)  [cfg](../decompiled/FUN_7101e0ef70__7101e0ef70.mmd)
- **Clone hash:** `bd4ec7a21ee441eb`

```c

void FUN_7101e0ef70(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined4 local_2c8 [2];
  undefined **local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288 [2];
  undefined **local_280;
  long local_278;
  undefined8 local_270;
// ... (917 more lines)
```

## 19. `FUN_7101ea5260`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ea5260`  (offset `0x1ea5260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ea5260(long param_1)`
- **Size / BBs / Incoming:** 1700 bytes / 50 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_keyhelp_00;set_txt_icon;set_parts_keyhelp_01;set_parts_keyhelp_02;set_parts_keyhelp_03;set_txt_01_00
- **Callers:** FUN_71023b9770;FUN_71023ccd20
- **Callees:** FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ea5260__7101ea5260.c)  [cfg](../decompiled/FUN_7101ea5260__7101ea5260.mmd)
- **Clone hash:** `436cfb1cfe34f52e`

```c

void FUN_7101ea5260(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  undefined **local_1f0;
  ulong local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  uint local_1d0;
  undefined4 uStack_1cc;
  byte local_1c8 [42];
  uint local_19e;
  undefined2 local_19a;
  undefined8 local_188;
  byte local_180 [64];
  undefined8 local_140;
  byte local_138 [32];
  undefined8 local_118;
// ... (725 more lines)
```

## 20. `FUN_7101e103e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e103e0`  (offset `0x1e103e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e103e0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5256 bytes / 256 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_slot;set_parts_btn_spter_%02d;anim_out_slot;set_parts_csr_01;select_on;set_parts_csr_02;set_parts_csr_03;select_off;set_parts_det_key_04;anim_key;set_parts_det_key_01
- **Callees:** FUN_7101af53d0;FUN_7101e134d0;FUN_7101e13790;FUN_7101e13860;FUN_7101e14030;FUN_7101e153c0;FUN_7101e16090;FUN_7101e16790;FUN_71024076d0;FUN_7102529a70;FUN_710252a950;FUN_7103313f20;FUN_7103771a80;FUN_7103776640;FUN_7103778300;FUN_71037964b0;...
- **Files:** [decomp](../decompiled/FUN_7101e103e0__7101e103e0.c)  [cfg](../decompiled/FUN_7101e103e0__7101e103e0.mmd)
- **Clone hash:** `869577b88d4e4e3f`

```c

void FUN_7101e103e0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 local_328 [2];
  undefined **local_320;
  long local_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8 [2];
  undefined **local_2e0;
  long local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
// ... (928 more lines)
```

## 21. `FUN_7101f89310`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** KEY
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

## 22. `FUN_71018ee4a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ee4a0`  (offset `0x18ee4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ee4a0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, byte * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 9388 bytes / 372 bb / 1 incoming refs
- **Match values:** key
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

## 23. `FUN_7101e1f7e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e1f7e0`  (offset `0x1e1f7e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e1f7e0(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9320 bytes / 447 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_fxui_stand_trace;set_parts_list_%02d;set_txt_base;mnu_spirits_select_ped_nam;nam_spirits_pedestal_type_attack;set_parts_icon_base;spi_%s;set_txt_num_spirit_have;mnu_spirits_recall_spirit_n;color_bright_spirit;color_nomal_spirit;set_txt_num_base_have;mnu_spirits_recall_rev_pedestal_n;color_bright_base;color_nomal_base;color_nomal_txt_have;color_bright_txt_have;set_parts_base_%02d;icon_add_base;icon_base_class;view_unique;mode_empty_03;nam_spirits_pedestal_type_none;nam_spirits_pedestal_type_guard;nam_spirits_pedestal_type_throw;nam_spirits_pedestal_type_support;spirit_supporter;spirit_attacker_non;spirit_attacker_throw;spirit_attacker_defense;spirit_attacker_offense;icon_base_atr;...
- **Callers:** FUN_7101e1b7f0
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101958040;FUN_7101989a30;FUN_7101dfe6f0;FUN_7101e1f1b0;FUN_7101e21d30;FUN_7101e32ad0;FUN_7101e32ae0;FUN_7102527570;FUN_7102528ac0;FUN_7102528c30;FUN_71032a9470;FUN_71032a9540;FUN_710337df20;...
- **Files:** [decomp](../decompiled/FUN_7101e1f7e0__7101e1f7e0.c)  [cfg](../decompiled/FUN_7101e1f7e0__7101e1f7e0.mmd)
- **Clone hash:** `35b0705beac405f3`

```c

void FUN_7101e1f7e0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  undefined2 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  long ****pppplVar15;
  undefined **ppuVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  byte ***pppbVar20;
  byte **ppbVar21;
  code *pcVar22;
  byte *pbVar23;
  byte bVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  byte ****ppppbVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  ushort *puVar34;
// ... (1517 more lines)
```

## 24. `FUN_7101e0b1b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e0b1b0`  (offset `0x1e0b1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e0b1b0(long * param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7732 bytes / 417 bb / 3 incoming refs
- **Match values:** key
- **Strings touched:** show_btn_sync;hide_btn_sync;selector_0;scr_sort;scr_ctrl;set_parts_btn_sync;blinder;btn_cursor;set_parts_det_key;set_txt_help;mnu_spirits_setorg_submenu;submenu_in;submenu_on;scroll;set_rep_spirit
- **Callers:** FUN_71018f7620;FUN_7101962010;FUN_71024f63a0
- **Callees:** FUN_71019bb740;FUN_71019bb8f0;FUN_71019c1c50;FUN_7102528f40;FUN_71025c6970;FUN_71032cbf30;FUN_71032ccb70;FUN_71032d6470;FUN_710337df20;FUN_710337e790;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;FUN_7103776290;FUN_7103776390;...
- **Files:** [decomp](../decompiled/FUN_7101e0b1b0__7101e0b1b0.c)  [cfg](../decompiled/FUN_7101e0b1b0__7101e0b1b0.mmd)
- **Clone hash:** `0b608434f0de2932`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e0b1b0(long *param_1,int param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  bool bVar9;
  byte ***pppbVar10;
  byte ***pppbVar11;
  void *pvVar12;
  long **pplVar13;
  ulong uVar14;
  long ***ppplVar15;
  byte **ppbVar16;
  ulong uVar17;
  byte ***pppbVar18;
  long *plVar19;
  undefined8 *puVar20;
  char *pcVar21;
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
// ... (1596 more lines)
```

## 25. `FUN_7101b52a70`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b52a70`  (offset `0x1b52a70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b52a70(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11628 bytes / 591 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** distance_in;distance_out;ff_off;ff_on;ff_on_stop;gsp_onoff;gsp_icon_onoff;player_onoff;player_in;player_out;player_loop;result_off;result_in;gsp_type;line_anim_1p;line_anim_2p;line_anim_3p;line_anim_4p;set_parts_gsp;set_txt_num;set_txt_distance_00;set_txt_distance_01;set_rep_chara_2;set_gsp;set_txt_gsp;set_txt_gsp_count;set_gsp_icon;bg_icon;set_parts_reticle_%02d;set_parts_line_num_%02d;set_keyhelp;set_txt_icon;...
- **Callers:** FUN_71013a83a0
- **Callees:** FUN_7101414b10;FUN_7101b525b0;FUN_71032cbf30;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377a120;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b52a70__7101b52a70.c)  [cfg](../decompiled/FUN_7101b52a70__7101b52a70.mmd)
- **Clone hash:** `ee903cec363ed3f8`

```c

void FUN_7101b52a70(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab128;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
// ... (2311 more lines)
```

## 26. `FUN_7101afe3e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101afe3e0`  (offset `0x1afe3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101afe3e0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 984 bytes / 38 bb / 90 incoming refs
- **Match values:** key
- **Strings touched:** set_txt_key;set_parts_key_00;set_txt_icon
- **Callers:** FUN_71017f5970;FUN_71017f5bf0;FUN_71017f9650;FUN_7101802390;FUN_7101805980;FUN_71018077e0;FUN_71018079b0;FUN_7101808520;FUN_7101809e20;FUN_710180fab0;FUN_7101812660;FUN_7101814e10;FUN_7101819d80;FUN_710181c820;FUN_710181dd50;FUN_7101821360;...
- **Callees:** FUN_7103393a60;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_71037a2270;FUN_71037a4450;FUN_71037ae170;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101afe3e0__7101afe3e0.c)  [cfg](../decompiled/FUN_7101afe3e0__7101afe3e0.mmd)
- **Clone hash:** `84c5cc1c015b0279`

```c

void FUN_7101afe3e0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  byte *pbVar7;
  long ****pppplVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined **local_10b8;
  ulong local_10b0;
  undefined **local_10a8;
  undefined8 *local_10a0;
  undefined **local_1098;
  undefined8 *local_1090;
  undefined **local_1088;
  undefined8 *local_1080;
  undefined **local_1078;
  undefined8 *local_1070;
  undefined **local_1068;
  undefined8 *local_1060;
  long ***local_1058;
  ulong local_1050 [511];
  int local_58 [2];
  
  FUN_7103776910(&local_1068,**(long **)(param_1 + 0x128) + 8,(long ****)"set_txt_key",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  local_1078 = &PTR_FUN_710523d9a8;
  puVar3 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
      local_1058 = (long ***)&SUB_00000020;
      pppplVar8 = &local_1058;
// ... (151 more lines)
```

## 27. `FUN_71019f6b40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019f6b40`  (offset `0x19f6b40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019f6b40(long param_1, long * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11676 bytes / 575 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** NODE_PRE_REFRACT_BLEND;nam_name_preset_*;set_lct_name_select;set_part_help;set_txt_icon;scroll;player_color_%dp;set_lct_name_applet;set_txt_name;set_txt_number;selector_0;set_btn_0_%02d;set_txt;btn_color_00;btn_on;btn_txt;mel_chara_select_key_space;btn_color_01;btn_icon_0;btn_icon_delete;mel_chara_select_key_random_nam;btn_color_02;mel_chara_select_key_ok;txt_entry;txt_max
- **Callers:** FUN_7101a04050;FUN_7101a4b380
- **Callees:** FUN_7100000410;FUN_7100000570;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71019c1c50;FUN_71019f4120;FUN_71019f4420;FUN_71019f4970;FUN_71019f57d0;FUN_710337df20;FUN_710337e790;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;FUN_7103776290;...
- **Files:** [decomp](../decompiled/FUN_71019f6b40__71019f6b40.c)  [cfg](../decompiled/FUN_71019f6b40__71019f6b40.mmd)
- **Clone hash:** `a7d6779a7c4d9a6a`

```c

void FUN_71019f6b40(long param_1,long ****param_2,long ****param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ***ppplVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  long ***ppplVar11;
  bool bVar12;
  int iVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  ulong uVar16;
  long **pplVar17;
  long **__dest;
  byte ****ppppbVar18;
  ulong uVar19;
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
// ... (2106 more lines)
```

## 28. `FUN_7101c7ebd0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7ebd0`  (offset `0x1c7ebd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7ebd0(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2400 bytes / 93 bb / 2 incoming refs
- **Match values:** key
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

## 29. `FUN_71018c4f50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018c4f50`  (offset `0x18c4f50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018c4f50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 13668 bytes / 562 bb / 1 incoming refs
- **Match values:** KEY
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

## 30. `FUN_7101afed00`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101afed00`  (offset `0x1afed00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101afed00(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1524 bytes / 92 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** set_txt_key;type_02;type_00
- **Callers:** FUN_7101aff480;FUN_71032ed230
- **Callees:** FUN_7101afbc50;FUN_7101afbf30;FUN_7101afdf90;FUN_7101eefe30;FUN_7103775fa0;FUN_7103776910;FUN_7103778300;FUN_710377aee0;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101afed00__7101afed00.c)  [cfg](../decompiled/FUN_7101afed00__7101afed00.mmd)
- **Clone hash:** `b2b8a6de580008a9`

```c

void FUN_7101afed00(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char *pcVar4;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined **local_40;
  long *local_38;
  
  if (*(char *)((long)param_1 + 0x1f7) != '\0') {
    **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xffffefff;
    *(undefined1 *)((long)param_1 + 0x1f7) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  if (((int)param_1[0x1d] != 0) && ((int)param_1[0x1d] != 5)) {
    FUN_7101afdf90((long)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar14 = *(long *)(DAT_710532f820 + 8);
// ... (240 more lines)
```

## 31. `FUN_71019401b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019401b0`  (offset `0x19401b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019401b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10064 bytes / 382 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** %s_%02d.bntx;chara/chara_4/chara_4_;school;set_txt_schoolstyle;subwindow_narrow;subwindow_wide;item_up_%d;set_txt_up_item_%02d;item_down_%d;set_txt_down_item_%02d;caption_up;caption_largeup;caption_down;caption_largedown;subwindow_unlearn;set_txt_unlearn;cam_school_unlearn;selector_keyhelp;btn_keyhelp_skill;set_txt_icon;cam_school_detail_guide;set_txt_help;cam_school_detail;header_band;selector_slot;set_parts_cursor;set_parts_slot_%02d;set_parts_mastery_%02d;set_fxui_confetti;selector_menu;set_parts_menu_%02d;set_parts_talk;...
- **Callers:** FUN_71019429a0
- **Callees:** FUN_71003a4ca0;FUN_7101af86a0;FUN_7101d88b10;FUN_7101d8f690;FUN_7101deddf0;FUN_7101df3910;FUN_7101df74b0;FUN_7101dfb100;FUN_7101e04640;FUN_7101e5e730;FUN_7101e5e830;FUN_7101e94040;FUN_7101e941f0;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;...
- **Files:** [decomp](../decompiled/FUN_71019401b0__71019401b0.c)  [cfg](../decompiled/FUN_71019401b0__71019401b0.mmd)
- **Clone hash:** `b1aa06e0aa020b5d`

```c

void FUN_71019401b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long ***ppplVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long ********pppppppplVar19;
  long **pplVar20;
  long *******ppppppplVar21;
  long *plVar22;
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
// ... (1832 more lines)
```

## 32. `FUN_7101d30f10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d30f10`  (offset `0x1d30f10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d30f10(uint * param_1, undefined8 * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 20432 bytes / 1072 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_btn_m_decide;set_txt_guide;subwin_01;selector_edit;set_parts_category_00;set_parts_category_01;set_parts_category_02;set_parts_category_03;set_parts_sub_btns_%02d;selector_0;view_%d;set_parts_btn_sub_%02d;set_txt_00;mnu_opt_btn_key_oth_off;mnu_opt_btn_key_oth_on;subwin_00_l;subwin_00_r;set_txt_btn_00;set_txt_btn_01;subwin_00_type_5;selector_1;subwin_00_type_6;set_parts_subwin_%02d;set_txt_name_%02d;nosetting_on;mode_empty_03;namecol_unset;nosetting_off;namecol_set;namecol_def
- **Callers:** FUN_7101d2c000
- **Callees:** FUN_710062dc20;FUN_7101a7ed70;FUN_7101ca82b0;FUN_7101d30af0;FUN_7101d35ee0;FUN_7101d361b0;FUN_7101d361c0;FUN_7101d3a000;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_7103776640;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101d30f10__7101d30f10.c)  [cfg](../decompiled/FUN_7101d30f10__7101d30f10.mmd)
- **Clone hash:** `da3463f7335cfc56`

```c

/* WARNING: Removing unreachable block (ram,0x007101d34448) */

void FUN_7101d30f10(uint *param_1,undefined8 *param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
// ... (3706 more lines)
```

## 33. `FUN_7101d727a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d727a0`  (offset `0x1d727a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d727a0(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4880 bytes / 221 bb / 3 incoming refs
- **Match values:** key
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

## 34. `FUN_71038a7800`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038a7800`  (offset `0x38a7800`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038a7800(undefined4 * param_1, ulong * param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3160 bytes / 128 bb / 3 incoming refs
- **Match values:** key
- **Strings touched:** unordered_map::at: key not found
- **Callers:** FUN_71035ed950;FUN_710389c3e0;FUN_71038a4ee0
- **Callees:** FUN_7103590cf0;FUN_7103591e00;FUN_710359b630;FUN_71037b2bc0;FUN_71038a8460;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::cosf;<EXTERNAL>::sinf;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::_Unwind_Resume;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::std::logic_error::logic_error;...
- **Files:** [decomp](../decompiled/FUN_71038a7800__71038a7800.c)  [cfg](../decompiled/FUN_71038a7800__71038a7800.mmd)
- **Clone hash:** `7e9db33286dde235`

```c

void FUN_71038a7800(undefined4 *param_1,ulong *param_2,long *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined1 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  size_t sVar14;
  long *plVar15;
  undefined8 *puVar16;
  logic_error *plVar17;
  undefined4 uVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined8 uVar21;
  long lVar22;
  long ****pppplVar23;
  void *pvVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong local_218;
  size_t local_210;
  void *local_208;
  ulong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
// ... (604 more lines)
```

## 35. `FUN_7101ef1f70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef1f70`  (offset `0x1ef1f70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef1f70(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1144 bytes / 60 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_part_key_help;set_txt_help;mel_team_competition_sort_auto
- **Callees:** FUN_7101f06470;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101ef1f70__7101ef1f70.c)  [cfg](../decompiled/FUN_7101ef1f70__7101ef1f70.mmd)
- **Clone hash:** `a623498ac6b75a2e`

```c

void FUN_7101ef1f70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  puVar10 = *(uint **)(*(long *)(param_1 + 0x270) + 8);
  if (*(int *)(param_1 + 0x24c) == 0) {
    *(undefined8 *)(puVar10 + 0x94) = *(undefined8 *)(puVar10 + 0x92);
    if (*(int *)(*(long *)(puVar10 + 0xaa) + 0xf0) != -1) {
      FUN_7103776640(&local_40,*(long *)(puVar10 + 0xa8) + 0x118,(byte ****)"set_part_key_help",
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_help",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_50,"mel_team_competition_sort_auto",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar3 = local_38;
      local_40 = &PTR_FUN_710523d988;
      local_38 = 0;
      if (uVar3 != 0) {
// ... (179 more lines)
```

## 36. `FUN_7101af9670`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101af9670`  (offset `0x1af9670`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101af9670(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 380 bytes / 21 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_txt_key;type_00
- **Callees:** FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101af9670__7101af9670.c)  [cfg](../decompiled/FUN_7101af9670__7101af9670.mmd)
- **Clone hash:** `c2e3d4bccb7a5acf`

```c

void FUN_7101af9670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_30;
  long *local_28;
  
  if ((*(int *)(param_1 + 0xec) == 0) &&
     (((**(long **)(param_1 + 0x158) == 0 || ((*(long **)(param_1 + 0x158))[1] == 0)) &&
      (*(int *)(param_1 + 0x1fc) != 1)))) {
    lVar4 = **(long **)(param_1 + 0x130);
    FUN_7103776910(&local_30,lVar4 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar2 = local_28;
    lVar1 = *local_28;
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    }
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71042a3672);
    *(undefined4 *)(param_1 + 0x1fc) = 1;
  }
  lVar1 = *(long *)(*(long *)(**(long **)(param_1 + 0x128) + 0x10) + 8);
  if (((lVar1 == 0) || (plVar2 = (long *)FUN_71037964b0(lVar1,0x7104421055), plVar2 == (long *)0x0))
     || (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1fc) != 1) {
      lVar4 = **(long **)(param_1 + 0x130);
      FUN_7103776910(&local_30,lVar4 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar2 = local_28;
      lVar1 = *local_28;
// ... (19 more lines)
```

## 37. `FUN_7101b0c270`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b0c270`  (offset `0x1b0c270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b0c270(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9952 bytes / 478 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** in_00;view_amiibo;view_standard;view_campaign_search;view_spirits_board;set_txt_title;set_txt_title_sdw;set_txt_01;set_txt_num_prize;mnu_reward_souvenir_num;mnu_reward_num;set_txt_num;mnu_reward_n;selector_01;set_parts_btn_next;selector_02;set_parts_det_key_detail;set_parts_det_key_replay;scroll;panel_type_list;set_parts_text_scroll;anim_in_bonus;set_part_bonus;set_txt_score;in_standard_score;set_parts_lvup;anim_glow_off;set_parts_spirit_s%d;set_parts_spirit_p%d;set_txt_sp_level;mel_result_item_unit_35_00;level_line_anim;...
- **Callers:** FUN_7103386910
- **Callees:** FUN_710175bf90;FUN_71019bb740;FUN_71019bb8f0;FUN_7101aff8b0;FUN_7101b0bfc0;FUN_7101b11920;FUN_71032cb040;FUN_71033743c0;FUN_710339ae90;FUN_710339b260;FUN_710339b5e0;FUN_710339b6b0;FUN_710339ba00;FUN_710339bba0;FUN_7103763c70;FUN_7103770b30;...
- **Files:** [decomp](../decompiled/FUN_7101b0c270__7101b0c270.c)  [cfg](../decompiled/FUN_7101b0c270__7101b0c270.mmd)
- **Clone hash:** `da7d2a0b0868d387`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101b0c270(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long **pplVar4;
  long ***ppplVar5;
  byte bVar6;
  byte ***pppbVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *__dest;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long ***extraout_x1;
  long ***extraout_x1_00;
  long ***extraout_x1_01;
  long ***extraout_x1_02;
  long ***ppplVar20;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
// ... (1886 more lines)
```

## 38. `FUN_7101e32bc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e32bc0`  (offset `0x1e32bc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e32bc0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9848 bytes / 482 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** selector_0;scr_sort;set_parts_btn_rev_lookup;scr_ctrl;set_parts_list_%02d;set_parts_base_%02d;anim_hide_add;set_txt_key;plate_side;set_txt_list;size_11;color_01;mnu_spirits_sort_guide;blinder;scroll;txt_rev_lookup;spi_%s;mnu_spirits_select_ped_nam;mnu_spirits_recall_rev_lookup;txt_key_rev_lookup;mnu_spirits_recall_rev_lookup_guide;set_parts_btn_%02d;set_parts_atr_bg;set_fxui_eff_aura_%02d
- **Callers:** FUN_7101917ea0;FUN_7101e18550
- **Callees:** FUN_71003a4ca0;FUN_71019c1c50;FUN_7101e3c040;FUN_7101e3c180;FUN_71025c6970;FUN_71032a7800;FUN_71032a9470;FUN_71032a9540;FUN_71032ccb70;FUN_710337df20;FUN_710337e790;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;FUN_7103775dc0;...
- **Files:** [decomp](../decompiled/FUN_7101e32bc0__7101e32bc0.c)  [cfg](../decompiled/FUN_7101e32bc0__7101e32bc0.mmd)
- **Clone hash:** `0113547612422b26`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e32bc0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  void *__src;
  ulong *puVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  long ***ppplVar8;
  long ****__n;
  undefined **ppuVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  byte ***pppbVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte ****ppppbVar20;
  undefined ***pppuVar21;
  ushort uVar22;
  long lVar23;
  undefined4 *puVar24;
  undefined2 *puVar25;
  code *pcVar26;
  uint uVar27;
  long lVar28;
// ... (1849 more lines)
```

## 39. `FUN_7101f09580`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f09580`  (offset `0x1f09580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f09580(long param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22960 bytes / 1079 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_continue;mode_empty_03;set_rep_thumb;gauge_parts_on;set_txt_date;selector;set_parts_new;selector_0;set_parts_btn_trans_%02d;selector_1;set_parts_btn_speed_00;set_parts_btn_speed_01;set_parts_btn_speed_02;selector_2;set_btn_key_l;set_btn_key_r;set_parts_transition;set_rep_cap;set_parts_preview;set_txt_length;set_txt_current;set_parts_lct_rec;anime_loop;set_moive_player;set_rep_movie
- **Callers:** FUN_710197f510
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71004f5770;FUN_7101764000;FUN_710184ca10;FUN_710184cbd0;FUN_7101a7ed70;FUN_7101d74980;FUN_7101d7f040;FUN_7101d83a00;FUN_7101d85960;FUN_7101d85b40;FUN_7101d87c30;FUN_7101f0ef30;FUN_7101f0f160;FUN_7101f1e560;...
- **Files:** [decomp](../decompiled/FUN_7101f09580__7101f09580.c)  [cfg](../decompiled/FUN_7101f09580__7101f09580.mmd)
- **Clone hash:** `2acedc979a5438c5`

```c

void FUN_7101f09580(long param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  undefined2 uVar3;
  long ********pppppppplVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *__dest;
  long *******ppppppplVar20;
  long *plVar21;
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
// ... (4580 more lines)
```

## 40. `FUN_71017fb950`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017fb950`  (offset `0x17fb950`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017fb950(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6816 bytes / 216 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** controller_amiibo;selector_0;set_parts_btn_00;set_parts_btn_01;set_parts_keyhelp;set_txt_key;mnu_amiibo_reading_helpguide_guide
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71017fb640;FUN_7103238a70;FUN_7103238d60;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_71032631a0;FUN_71032632a0;FUN_71032633f0;FUN_7103263f80;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_71032df050;...
- **Files:** [decomp](../decompiled/FUN_71017fb950__71017fb950.c)  [cfg](../decompiled/FUN_71017fb950__71017fb950.mmd)
- **Clone hash:** `e0b21f34f76c267e`

```c

void FUN_71017fb950(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
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
// ... (1299 more lines)
```

## 41. `FUN_7101e62bd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e62bd0`  (offset `0x1e62bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e62bd0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 2316 bytes / 81 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** header_band;set_txt_title;cam_searchfield%d_field_name;selector_slot;set_parts_cursor;set_parts_slot_%02d;selector_menu;set_parts_menu_%02d;menu_btn_1;cam_searchfield_go;sp_off;plus_on;set_parts_talk;selector_return;set_btn_return;color_search;selector_keyhelp;btn_keyhelp_remove
- **Callers:** FUN_7101947560
- **Callees:** FUN_71003a4ca0;FUN_7101989a30;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e96fc0;FUN_7101e9aa40;FUN_71032a7800;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;...
- **Files:** [decomp](../decompiled/FUN_7101e62bd0__7101e62bd0.c)  [cfg](../decompiled/FUN_7101e62bd0__7101e62bd0.mmd)
- **Clone hash:** `f0edc3d9b2381195`

```c

void FUN_7101e62bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte ****ppppbVar13;
  long ****in_x4;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined **local_1c0;
  ulong local_1b8;
  byte ***local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined1 *local_198;
// ... (314 more lines)
```

## 42. `FUN_7101d18be0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d18be0`  (offset `0x1d18be0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d18be0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3208 bytes / 159 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** select_item;panel;txt_in;winning_in;set_txt_winning;set_txt_count;set_btn_keyhelp;anim_key
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101d11b60;FUN_7101d176e0;FUN_7101d20830;FUN_71024076d0;FUN_7103313f20;FUN_7103771d60;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a310;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101d18be0__7101d18be0.c)  [cfg](../decompiled/FUN_7101d18be0__7101d18be0.mmd)
- **Clone hash:** `bc860177bd65f647`

```c

void FUN_7101d18be0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  code *pcVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  byte *pbVar16;
  long *plVar17;
  long lVar18;
  undefined4 local_508 [2];
  undefined **local_500;
  long local_4f8;
  int local_4f0;
  undefined4 uStack_4ec;
  undefined1 local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8 [2];
  undefined **local_4c0;
  long local_4b8;
  int local_4b0;
  undefined4 uStack_4ac;
  undefined1 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
// ... (534 more lines)
```

## 43. `FUN_7102658500`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102658500`  (offset `0x2658500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102658500(long * param_1, long * * * param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2024 bytes / 39 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** dyr_stgdonkey_jack_set
- **Callers:** FUN_71026546c0
- **Callees:** FUN_71003ac560;FUN_710265be30;FUN_710313e6a0;FUN_710313ef20;FUN_7103141660;FUN_71031675b0;FUN_710392e290;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7102658500__7102658500.c)  [cfg](../decompiled/FUN_7102658500__7102658500.mmd)
- **Clone hash:** `62c73c7cd5eb6ab6`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102658500(long *param_1,long ***param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long ****pppplVar10;
  char *pcVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  long **pplVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long ***ppplVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  long ***local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  ulong uStack_168;
  undefined4 local_160;
// ... (379 more lines)
```

## 44. `FUN_71032eb9f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032eb9f0`  (offset `0x32eb9f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032eb9f0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 308 bytes / 20 bb / 24 incoming refs
- **Match values:** key
- **Strings touched:** set_txt_key;type_02;type_00
- **Callers:** FUN_710194dce0;FUN_71019ae5a0;FUN_7101a952d0;FUN_7101aa5770;FUN_7101b0e950;FUN_7101b0eaa0;FUN_7101b5e940;FUN_7101b5ebd0;FUN_7101cf68e0;FUN_7101cf6bc0;FUN_7102300a80;FUN_7102300b40;FUN_7102300c10;FUN_7102300e60;FUN_7102304180;FUN_7102304240;...
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71032eb9f0__71032eb9f0.c)  [cfg](../decompiled/FUN_71032eb9f0__71032eb9f0.mmd)
- **Clone hash:** `79465219df2bc0e1`

```c

void FUN_71032eb9f0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **local_30;
  long *local_28;
  
  if ((((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x80), *(char *)(lVar4 + 0x1f2) != '\0')) &&
      ((**(long **)(lVar4 + 0x148) == 0 || ((*(long **)(lVar4 + 0x148))[1] == 0)))) &&
     ((*(uint *)(lVar4 + 0xe8) | 1) == 3)) {
    if ((param_2 & 1) == 0) {
      if (*(int *)(lVar4 + 0x1fc) == 1) {
        return;
      }
      lVar5 = **(long **)(lVar4 + 0x130);
      FUN_7103776910(&local_30,lVar5 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar1 = local_28;
      lVar3 = *local_28;
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x71042a3672);
      uVar2 = 1;
    }
    else {
      if (*(int *)(lVar4 + 0x1fc) == 2) {
        return;
      }
// ... (21 more lines)
```

## 45. `FUN_710337d360`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710337d360`  (offset `0x337d360`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710337d360(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 232 bytes / 8 bb / 15 incoming refs
- **Match values:** key
- **Strings touched:** keyhelp_normal;keyhelp_gc
- **Callers:** FUN_7101856ad0;FUN_710187f8a0;FUN_71018c4f50;FUN_71019a5970;FUN_71019ddb30;FUN_71019e33e0;FUN_7101a7c9b0;FUN_7101ac8680;FUN_7101acee90;FUN_7101c7f7c0;FUN_7101ca3c60;FUN_7101deddf0;FUN_7101e91610;FUN_7101ec59d0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7103776390;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_710337d360__710337d360.c)  [cfg](../decompiled/FUN_710337d360__710337d360.mmd)
- **Clone hash:** `cf03ee853e51b5b0`

```c

void FUN_710337d360(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined **local_30;
  ulong local_28;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar3 = DAT_7105307b68._4_4_;
  FUN_7103776390(&local_30,param_1,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  pcVar1 = "keyhelp_gc";
  if (iVar3 != 6) {
    pcVar1 = "keyhelp_normal";
  }
  FUN_7103778300(0x3f800000,local_28,(long)pcVar1);
  uVar2 = local_28;
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}


```

## 46. `FUN_7101db1ad0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db1ad0`  (offset `0x1db1ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101db1ad0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 264 bytes / 16 bb / 2 incoming refs
- **Match values:** key
- **Strings touched:** set_parts_det_key_03;anim_key
- **Callers:** FUN_71018f10d0;FUN_71024efae0
- **Callees:** FUN_7103776640;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101db1ad0__7101db1ad0.c)  [cfg](../decompiled/FUN_7101db1ad0__7101db1ad0.mmd)
- **Clone hash:** `78f20b77511e0677`

```c

undefined8
FUN_7101db1ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **local_30;
  ulong local_28;
  
  if ((((*(char *)(param_1 + 0x44e) == '\0') && (*(int *)(param_1 + 0x90) == 2)) &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x70) + 0x78))(), (uVar1 & 1) != 0)) &&
     (((*(int *)(*(long *)(param_1 + 0x70) + 0x254) == 3 &&
       (lVar3 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600),
       *(char *)(lVar3 + 0x4aa) != '\0')) && ((*(byte *)(lVar3 + 0x1dc) >> 1 & 1) != 0)))) {
    if (3 < *(uint *)(param_1 + 0xe0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(short *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 0x54 + 0x26a) != -1) {
      FUN_7103776640(&local_30,param_1 + 0x50,(byte ****)"set_parts_det_key_03",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar1 = local_28;
      FUN_7103778300(0x3f800000,local_28,0x71042a357e);
      local_30 = &PTR_FUN_710523d988;
      local_28 = 0;
      if (uVar1 != 0) {
        uVar2 = *(ulong *)(uVar1 + 0x18);
        *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar1 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar1);
      }
      return 1;
    }
  }
// ... (3 more lines)
```

## 47. `FUN_7101f1ee70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f1ee70`  (offset `0x1f1ee70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f1ee70(long * param_1)`
- **Size / BBs / Incoming:** 12796 bytes / 684 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** pickup;%s_pickup;tlmenu_;playing;thumbsel;%s_select;movie;sound;tellop;keyhelp_change;keyhelp_add;playing_off;playing_on;anime_thumbsel_in;%s_anim;shift_in;shift_out;measure_%02d;undo_enable;undo_disable;redo_enable;redo_disable;map_default;map_overflow;stretch;%s_left;add_in;pickup_out;time_rec;%s_add;copy_in;%s_copy;...
- **Callers:** FUN_7101f1ee60
- **Callees:** FUN_71019f0870;FUN_71019f0880;FUN_7101f2ded0;FUN_7101f30ef0;FUN_7101f30ff0;FUN_7101f336a0;FUN_7101f33ab0;FUN_7101f37260;FUN_7101f37360;FUN_7101f3a040;FUN_7101f3b1c0;FUN_7101f3d240;FUN_7101f3d820;FUN_7101f3da50;FUN_7101f3e830;FUN_7101f41a50;...
- **Files:** [decomp](../decompiled/FUN_7101f1ee70__7101f1ee70.c)  [cfg](../decompiled/FUN_7101f1ee70__7101f1ee70.mmd)
- **Clone hash:** `0c06e331a4a2dd03`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f1ee70(long *param_1)

{
  long *********ppppppppplVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte bVar4;
  undefined **ppuVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
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
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
// ... (2074 more lines)
```

## 48. `FUN_7101479370`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101479370`  (offset `0x1479370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101479370(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10300 bytes / 494 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** result_type;highscore_type;palyer_count;gsp_type;highscore;clear;clear_off;key_help;set_txt_time;set_txt_enemycount;set_txt_gsp_count;set_txt_gold;set_parts_playericon_%02d;set_rep_icon;set_key_help_02;set_txt_icon;set_txt_help;set_fxui_iconflash_00;set_fxui_score;set_fxui_iconflash_01;mel_kumite_back_btn;mel_kumite_back_chr;mel_kumite_back_stg;mel_kumite_defeated_score;mel_kumite_clear_time;mel_kumite_world_pw_score
- **Callees:** FUN_71000001c0;FUN_71015435c0;FUN_7101764000;FUN_71017d1480;FUN_7103238a70;FUN_710323beb0;FUN_710323c1c0;FUN_710323c4e0;FUN_710323cb80;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;...
- **Files:** [decomp](../decompiled/FUN_7101479370__7101479370.c)  [cfg](../decompiled/FUN_7101479370__7101479370.mmd)
- **Clone hash:** `5fb64a64fe4e999f`

```c

void FUN_7101479370(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar12;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined **ppuVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
// ... (1813 more lines)
```

## 49. `FUN_7101af4340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101af4340`  (offset `0x1af4340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101af4340(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 712 bytes / 38 bb / 4 incoming refs
- **Match values:** key
- **Strings touched:** footer_btn_out;set_txt_guide;keyhelp_normal;keyhelp_gc;footer_btn_in
- **Callers:** FUN_7101af3d10;FUN_7101af86a0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710377b140;FUN_71037a2270;FUN_71037a4450;FUN_71037ae170;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;...
- **Files:** [decomp](../decompiled/FUN_7101af4340__7101af4340.c)  [cfg](../decompiled/FUN_7101af4340__7101af4340.mmd)
- **Clone hash:** `6d8e2b6c83391b67`

```c

void FUN_7101af4340(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long *plVar11;
  undefined **local_1080;
  ulong local_1078;
  undefined **local_1070;
  ulong local_1068;
  undefined **local_1060;
  ulong local_1058;
  undefined **local_1050;
  long *local_1048;
  int local_48 [2];
  
  if ((param_2 & 1) == *(byte *)(param_1 + 0x2258)) {
    return;
  }
  *(byte *)(param_1 + 0x2258) = param_2 & 1;
  lVar8 = **(long **)(param_1 + 0xb8) + 8;
  pppplVar9 = param_3;
  if ((param_2 & 1) == 0) {
    pcVar7 = "footer_btn_out";
    goto LAB_7101af4568;
  }
  if (*(int *)(param_1 + 0x11b0) < 6) {
    if (*(int *)(param_1 + 0x11b0) - 1U < 5) {
      pppplVar9 = (long ****)0x1;
      goto LAB_7101af43c4;
// ... (99 more lines)
```

## 50. `FUN_7101eb57d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb57d0`  (offset `0x1eb57d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb57d0(long param_1)`
- **Size / BBs / Incoming:** 124 bytes / 7 bb / 1 incoming refs
- **Match values:** key
- **Strings touched:** key_help_00_fadeout
- **Callees:** FUN_7103778300;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb57d0__7101eb57d0.c)  [cfg](../decompiled/FUN_7101eb57d0__7101eb57d0.mmd)
- **Clone hash:** `f306c9dc874fbc90`

```c

void FUN_7101eb57d0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(**(long **)(param_1 + 8) + 0x10);
  if (*(int *)(param_1 + 0x270) == 1) {
    lVar1 = *(long *)(lVar1 + 8);
    if (((lVar1 == 0) ||
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x71043cfc04), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  else {
    FUN_7103778300(0xbf800000,lVar1,0x71043cfc04);
    *(undefined4 *)(param_1 + 0x270) = 1;
  }
  return;
}


```

