# stage_select (funcs=4, hits=11)

Top 50 functions by hit count

## 1. `FUN_7101b2a1f0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** stage_select
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 2. `FUN_7101b1b9d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b1b9d0`  (offset `0x1b1b9d0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7101b1b9d0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 212 bytes / 7 bb / 3 incoming refs
- **Match values:** stage_select
- **Strings touched:** set_txt_song_n;mel_stage_select_song_n
- **Callers:** FUN_7101b1ced0;FUN_7101b1f0f0
- **Callees:** FUN_7101b1bfe0;FUN_7103776910;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101b1b9d0__7101b1b9d0.c)  [cfg](../decompiled/FUN_7101b1b9d0__7101b1b9d0.mmd)
- **Clone hash:** `8144dafe5c0ce493`

```c

ulong FUN_7101b1b9d0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined **local_30;
  ulong local_28;
  
  *(byte *****)(param_1 + 0x68) = param_4;
  *(int *)(param_1 + 0x78) = param_2;
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 0x20);
    if ((undefined8 *)(param_1 + 0x50) != puVar1) {
      param_3 = (long ****)puVar1[1];
      FUN_7101b1bfe0((undefined8 *)(param_1 + 0x50),(void *)*puVar1,param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    uVar4 = *(undefined4 *)(puVar1 + 3);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((long)puVar1 + 0x1c);
    lVar2 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    FUN_7103776910(&local_30,*(long *)**(undefined8 **)(param_1 + 8) + 8,(long ****)"set_txt_song_n"
                   ,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_30,(byte *)"mel_stage_select_song_n",1);
    uVar5 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    return (ulong)(lVar3 - lVar2) >> 4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
// ... (3 more lines)
```

## 3. `FUN_7101b323a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b323a0`  (offset `0x1b323a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b323a0(long param_1, uint param_2, uint param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1024 bytes / 42 bb / 3 incoming refs
- **Match values:** stage_select
- **Strings touched:** set_preview_st_0%d;set_parts_btn_stage;set_txt_normal;set_medal_0%d;stage_make
- **Callers:** FUN_7101b2a1f0;FUN_7101b34970
- **Callees:** FUN_71032b23e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b323a0__7101b323a0.c)  [cfg](../decompiled/FUN_7101b323a0__7101b323a0.mmd)
- **Clone hash:** `fa4f152809ad5fe4`

```c

void FUN_7101b323a0(long param_1,uint param_2,uint param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = *(ulong *)(param_1 + (long)(int)param_2 * 0x28 + 0xf8);
  lVar8 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8);
  uVar4 = FUN_71032b23e0(lVar8,0x116b904091);
  bVar2 = (uVar10 & 0xffffffffff) != 0;
  bVar3 = (uVar10 & 0xff00000000000000) == 0x6900000000000000;
  if ((bVar3 && bVar2) &&
     ((uVar4 & 0xff00000000000000) == 0x6900000000000000 && (uVar4 & 0xffffffffff) != 0)) {
    if (((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
      uVar4 = FUN_71032b23e0(lVar8,0x166fbc7641);
      uVar7 = uVar4 & 0xffffffffff;
LAB_7101b324c8:
      if (((uVar4 & 0xff00000000000000) != 0x6900000000000000 || uVar7 == 0) ||
          ((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
        uVar4 = FUN_71032b23e0(lVar8,0x1c23e8aab5);
// ... (113 more lines)
```

## 4. `FUN_7101c108f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** stage_select
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

