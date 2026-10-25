# home (funcs=65, hits=127)

Top 50 functions by hit count

## 1. `FUN_710223ff20`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710223ff20`  (offset `0x223ff20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710223ff20(long param_1)`
- **Size / BBs / Incoming:** 384 bytes / 4 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** sandbag;get_audience_sound_label;set_info_sandbag_damage;set_assist_team_no;get_float_battle_object_param_fly_top_angle_lw;get_float_battle_object_param_fly_top_angle_hi;get_motion_kind;is_debug_blow_draw;homerun_contest_change_finish_camera;homerun_contest_change_fly_camera;homerun_contest_change_landing_camera;homerun_contest_change_timeup_fly_camera;homerun_contest_change_normal_camera;homerun_contest_send_message_to_get_prize;homerun_contest_effect_no_pause
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710223ff20__710223ff20.c)  [cfg](../decompiled/FUN_710223ff20__710223ff20.mmd)
- **Clone hash:** `f59a592fcb818374`

```c

void FUN_710223ff20(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"sandbag",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_audience_sound_label",(long ****)FUN_710223f7d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_info_sandbag_damage",(long ****)FUN_710223f8e0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float_battle_object_param_fly_top_angle_lw",
                 (long ****)FUN_710223f9e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float_battle_object_param_fly_top_angle_hi",
                 (long ****)FUN_710223fa60,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_motion_kind",(long ****)FUN_710223fae0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_debug_blow_draw",(long ****)FUN_710223fba0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_finish_camera",(long ****)FUN_710223fbd0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_fly_camera",(long ****)FUN_710223fc70,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_landing_camera",(long ****)FUN_710223fc90
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_timeup_fly_camera",
                 (long ****)FUN_710223fcb0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_change_normal_camera",(long ****)FUN_710223fcd0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_send_message_to_get_prize",
                 (long ****)FUN_710223fcf0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"homerun_contest_effect_no_pause",(long ****)FUN_710223fe00,
// ... (7 more lines)
```

## 2. `FUN_71001d5f20`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d5f20`  (offset `0x1d5f20`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d5f20(long param_1, long param_2, uint param_3, uint param_4)`
- **Size / BBs / Incoming:** 244 bytes / 17 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp;C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp
- **Callers:** FUN_71001d46c0;FUN_71001d72e0
- **Callees:** FUN_71001b1300
- **Files:** [decomp](../decompiled/FUN_71001d5f20__71001d5f20.c)  [cfg](../decompiled/FUN_71001d5f20__71001d5f20.mmd)
- **Clone hash:** `2079672eaddf3075`

```c

undefined8 FUN_71001d5f20(long param_1,long param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_4 == 0) {
    if (param_3 < 0x11) {
      plVar5 = (long *)(param_1 + (ulong)param_3 * 8 + 0x10);
      if (*plVar5 == 0) {
LAB_71001d6004:
        *plVar5 = param_2;
        return 1;
      }
      pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
      uVar2 = 0x44;
      uVar3 = 0xe000000f;
      goto LAB_71001d5ff0;
    }
    pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
    uVar2 = 0x3e;
  }
  else {
    lVar4 = **(long **)(param_1 + 0xa0);
    if ((ulong)param_4 < (ulong)((*(long **)(param_1 + 0xa0))[1] - lVar4 >> 3)) {
      lVar4 = *(long *)(lVar4 + (ulong)param_4 * 8);
      if (lVar4 == 0) {
        pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp";
        uVar2 = 0x9f;
        uVar3 = 0xe0000008;
        goto LAB_71001d5ff0;
      }
      if (param_3 < 0x11) {
        plVar5 = (long *)(lVar4 + (ulong)param_3 * 8 + 8);
        if (*plVar5 == 0) goto LAB_71001d6004;
        uVar2 = 0x44;
// ... (18 more lines)
```

## 3. `FUN_71020fbb90`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** HOME;Home
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

## 4. `FUN_7101ce5ab0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** home
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

## 5. `FUN_71001d6d70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d6d70`  (offset `0x1d6d70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d6d70(long param_1)`
- **Size / BBs / Incoming:** 852 bytes / 43 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp
- **Callers:** FUN_71001dd180
- **Callees:** FUN_71001b1300;FUN_71001b43b0;FUN_71001b68a0;FUN_71001b6a50
- **Files:** [decomp](../decompiled/FUN_71001d6d70__71001d6d70.c)  [cfg](../decompiled/FUN_71001d6d70__71001d6d70.mmd)
- **Clone hash:** `f36d789fffedcb4e`

```c

void FUN_71001d6d70(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (iVar3 != 2) {
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,
                     0xe000000e,0);
      return;
    }
    goto LAB_71001d6fcc;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_38);
    }
    else {
      FUN_71001b68a0(&local_38,0);
    }
    DAT_71052aeba8 = local_38;
    lVar7 = ((local_38 - *(long *)(param_1 + 0x20)) - *(long *)(param_1 + 0x28)) +
            *(long *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (-1 < lVar7) goto LAB_71001d6de0;
LAB_71001d6e78:
    if (*(char *)(param_1 + 0xcc) == '\0') goto LAB_71001d6f1c;
LAB_71001d6e88:
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + lVar4;
// ... (102 more lines)
```

## 6. `FUN_71013a85c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013a85c0`  (offset `0x13a85c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013a85c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 200 bytes / 6 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_distance_n;mel_homerun_distance_decimal_n
- **Callees:** FUN_71013a53d0;FUN_71013a67c0;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_71013a85c0__71013a85c0.c)  [cfg](../decompiled/FUN_71013a85c0__71013a85c0.mmd)
- **Clone hash:** `b2eb5b3cfeb12402`

```c

void FUN_71013a85c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x50);
  uVar1 = *(uint *)((long)plVar2 + 0x14);
  if (*(uint *)(plVar2 + 2) != uVar1) {
    lVar3 = *(long *)(plVar2[1] + 0x80);
    if ((int)uVar1 < 1) {
      FUN_710377a280(lVar3 + 0x180,(byte *)"mel_homerun_distance_n",1);
      param_4 = (byte ****)0x0;
    }
    else {
      FUN_710377a280(lVar3 + 0x180,(byte *)"mel_homerun_distance_n",1);
      param_4 = (byte ****)(ulong)(uVar1 % 1000);
    }
    param_3 = (long ****)0x1;
    FUN_710377a280(lVar3 + 400,(byte *)"mel_homerun_distance_decimal_n",1);
    *(undefined4 *)(plVar2 + 2) = *(undefined4 *)((long)plVar2 + 0x14);
    param_2 = extraout_x1;
  }
  FUN_71013a53d0(plVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71013a67c0(plVar2,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


```

## 7. `FUN_7101bf02a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** HOME
- **Strings touched:** SEQUENCE_NONE;SEQUENCE_TITLE;SEQUENCE_TITLE_DEMO;SEQUENCE_MELEE;SEQUENCE_MELEE_NORMAL;SEQUENCE_MELEE_TEAM_COMPE;SEQUENCE_MELEE_SPECIAL;SEQUENCE_MELEE_SPECIAL_VARIOUS;SEQUENCE_MELEE_SPECIAL_SUDDENDEATH;SEQUENCE_MELEE_SPECIAL_ALL_BATTLE;SEQUENCE_MELEE_TOURNAMENT;SEQUENCE_SPIRITS;mode_empty_03;SEQUENCE_SPIRITS_CHALLENGE;SEQUENCE_SPIRITS_CANPAIGN;SEQUENCE_SPIRITS_FORMATION;SEQUENCE_SPIRITS_CHALLENGE_SPECIAL;SEQUENCE_OTHER;SEQUENCE_OTHER_STANDARD;SEQUENCE_OTHER_KUMITE;SEQUENCE_OTHER_KUMITE_100;SEQUENCE_OTHER_KUMITE_ALLSTAR;SEQUENCE_OTHER_KUMITE_CRUEL;SEQUENCE_OTHER_HOMERUN;SEQUENCE_OTHER_HOMERUN_SINGLE;SEQUENCE_OTHER_HOMERUN_COOP;SEQUENCE_OTHER_HOMERUN_EVERYONE;SEQUENCE_OTHER_TRAINING;SEQUENCE_OTHER_CHARA_MAKE;SEQUENCE_OTHER_STAGE_MAKE;SEQUENCE_OTHER_AMIIBO;SEQUENCE_OTHER_CHALLENGER;...
- **Callers:** FUN_710185e890
- **Callees:** FUN_71000001c0;FUN_710075f050;FUN_710172a350;FUN_7101761580;FUN_7101761830;FUN_7101762400;FUN_7101763880;FUN_7101763970;FUN_7101763b40;FUN_7101764000;FUN_7101be16e0;FUN_7101be1cf0;FUN_7101be1ef0;FUN_7101be3dc0;FUN_7101be4200;FUN_71025d2a00;...
- **Files:** [decomp](../decompiled/FUN_7101bf02a0__7101bf02a0.c)  [cfg](../decompiled/FUN_7101bf02a0__7101bf02a0.mmd)
- **Clone hash:** `5467e28c510ce846`

```c

/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
// ... (1797 more lines)
```

## 8. `FUN_7101a7fa70`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7fa70`  (offset `0x1a7fa70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7fa70(undefined8 param_1, int param_2, char * param_3, ulong param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6524 bytes / 312 bb / 1 incoming refs
- **Match values:** home
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

## 9. `FUN_71001d1f60`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1f60`  (offset `0x1d1f60`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d1f60(ulong param_1, undefined4 param_2, byte param_3, undefined * param_4, undefined8 param_5, byte * param_6)`
- **Size / BBs / Incoming:** 432 bytes / 17 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;(vResult = cbCallback(object, 0)) == bErrorValue;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d1e40;FUN_71001d6330
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d1f60__71001d1f60.c)  [cfg](../decompiled/FUN_71001d1f60__71001d1f60.mmd)
- **Clone hash:** `dbb1750fd549f81d`

```c

undefined8
FUN_71001d1f60(ulong param_1,undefined4 param_2,byte param_3,undefined *param_4,undefined8 param_5,
              byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 auStack_88 [7];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      FUN_71001b46a0(auStack_88,10,param_2);
      FUN_71001b2e80((long)auStack_88);
      do {
        bVar1 = (*(code *)param_4)(param_5,0);
        if (((bVar1 ^ param_3) & 1) != 0) goto LAB_71001d20c8;
// ... (20 more lines)
```

## 10. `FUN_7101a23a80`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** title_on;headcount_on;day_off;controller_entry_off;ready_out;controller_out;back_btn_short;back_btn_long;set_btn_01_back;set_btn_02_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_02_title;txt_pos_normal;set_txt_title_00;set_txt_onoff;scene_title_btn;mel_chara_select_melee_normal;mel_chara_select_various_normal;mel_chara_select_suddendeath_normal;scene_title_txt_00;title_off;mel_chara_select_challengeboard;mel_chara_select_campaign;mel_chara_select_setorg;mel_chara_select_standard;training_combo_0;mel_chara_select_training;...
- **Callers:** FUN_7101a20200
- **Callees:** FUN_7103240d30;FUN_71032d6ce0;FUN_71033112b0;FUN_710337df20;FUN_7103764e60;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103772070;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101a23a80__7101a23a80.c)  [cfg](../decompiled/FUN_7101a23a80__7101a23a80.mmd)
- **Clone hash:** `d4786689279755fe`

```c

void FUN_7101a23a80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  int *piVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  undefined4 uVar17;
  long lVar18;
  byte *pbVar19;
  code *pcVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  undefined8 local_278;
  undefined **local_260;
  ulong local_258;
  undefined **local_250;
// ... (1398 more lines)
```

## 11. `FUN_71014b0760`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014b0760`  (offset `0x14b0760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014b0760(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 4172 bytes / 231 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_distance_n;mel_homerun_distance_decimal_n;mel_homerun_world_pw_n
- **Callees:** FUN_71000001c0;FUN_7100653490;FUN_7100656ee0;FUN_7100659060;FUN_710138b2d0;FUN_71013a92e0;FUN_71013a9650;FUN_71013a97b0;FUN_71014c0bb0;FUN_71014c3330;FUN_71015db0b0;FUN_7101764000;FUN_71017a7d70;FUN_7103313da0;FUN_7103737a20;FUN_71037415c0;...
- **Files:** [decomp](../decompiled/FUN_71014b0760__71014b0760.c)  [cfg](../decompiled/FUN_71014b0760__71014b0760.mmd)
- **Clone hash:** `df69034a51b0c753`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71014b0760(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  long ****pppplVar12;
  long *plVar13;
  ulong *puVar14;
  void *pvVar15;
  ulong uVar16;
  undefined **ppuVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  undefined2 uVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long ***ppplVar24;
  undefined2 uVar25;
  long lVar26;
  byte bVar27;
  long lVar28;
  char *pcVar29;
  void *pvVar30;
  long lVar31;
  long lVar32;
  undefined4 uVar33;
// ... (696 more lines)
```

## 12. `FUN_7101744340`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101744340`  (offset `0x1744340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101744340(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6768 bytes / 29 bb / 2 incoming refs
- **Match values:** home
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

## 13. `FUN_7101ab9340`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab9340`  (offset `0x1ab9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5072 bytes / 230 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** set_rep_bgshot;mnu_replay_detail_melee_normal;mnu_replay_refinement_mode_homerun;mnu_replay_detail_online_tournament;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mnu_replay_detail_anyone;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_melee_suddendeath;mnu_replay_detail_melee_various;mstg_on;set_rep_pic_stage;mstg_off;turn_on;turn_off;turn_loop;set_rep_stockicon_%02d;set_rep_stockicon_%02d_;stockicon_5vs5;stockicon%02d;stockicon_3vs3;set_parts_text_scroll;set_txt_mask;mnu_replay_data_title_default;set_txt_main;set_txt_modename;set_txt_modename_00;set_txt_time;mnu_replay_detail_time_movie;mstg_icn_on
- **Callees:** FUN_71003a4ca0;FUN_7101aba710;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101ab9340__7101ab9340.c)  [cfg](../decompiled/FUN_7101ab9340__7101ab9340.mmd)
- **Clone hash:** `6920c7a990859cc7`

```c

void FUN_7101ab9340(long param_1,int param_2,long *********param_3,byte ****param_4,
                   long *********param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  byte ****ppppbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  long ********pppppppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined **ppuVar27;
  ulong uVar28;
  long *plVar29;
  undefined **__dest;
  long lVar30;
  long *********ppppppppplVar31;
  uint *puVar32;
  undefined1 *puVar33;
  long *********ppppppppplVar34;
// ... (892 more lines)
```

## 14. `FUN_7101ac4ba0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** home
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

## 15. `FUN_71001d7b90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d7b90`  (offset `0x1d7b90`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d7b90(ulong param_1, undefined4 param_2, undefined * param_3, undefined8 param_4, undefined4 * param_5)`
- **Size / BBs / Incoming:** 576 bytes / 22 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;PreventRegularBlockCall;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d5270
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b42a0;FUN_71001b4300;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d7b90__71001d7b90.c)  [cfg](../decompiled/FUN_71001d7b90__71001d7b90.mmd)
- **Clone hash:** `b2488e3986c707fa`

```c

undefined8
FUN_71001d7b90(ulong param_1,undefined4 param_2,undefined *param_3,undefined8 param_4,
              undefined4 *param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  code *pcVar9;
  undefined4 uStack_bc;
  byte local_b8 [24];
  undefined8 local_a0 [7];
  int local_68 [6];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar8 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
// ... (50 more lines)
```

## 16. `FUN_7102144140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** FighterManager;entry_count;total_fighter_num;get_entry_id;get_entry_no;get_fighter_entry;get_fighter_information;is_melee_mode_homerun;is_homerun_versus;is_melee_mode_online_tournament;one_on_one_ratio;is_discretion_final_enabled;get_top_rank_player_num;get_top_rank_player;is_ready_go;set_cursor_whole;get_fighter_pos;is_available_discretion_final;get_final_actor_entry_id;is_final;set_final;get_no_discretion_final_beat_count;get_beat_point_diff_from_top;set_final_fear_face;start_finalbg;exit_finalbg;show_finalbg;hide_finalbg;pause_finalbg;resume_finalbg;set_visible_finalbg;notify_log_event_collision_hit;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102144140__7102144140.c)  [cfg](../decompiled/FUN_7102144140__7102144140.mmd)
- **Clone hash:** `a3b0414249fe2eb2`

```c

void FUN_7102144140(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterManager",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"entry_count",(long ****)FUN_7102141940,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"total_fighter_num",(long ****)FUN_7102141980,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_id",(long ****)FUN_7102141a40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_no",(long ****)FUN_7102141bd0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_entry",(long ****)FUN_7102141d50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_information",(long ****)FUN_7102141e40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_homerun",(long ****)FUN_7102141f30,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_homerun_versus",(long ****)FUN_7102141f70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_online_tournament",(long ****)FUN_7102142050,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"one_on_one_ratio",(long ****)FUN_7102142090,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_discretion_final_enabled",(long ****)FUN_71021420d0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_top_rank_player_num",(long ****)FUN_7102142110,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
// ... (80 more lines)
```

## 17. `FUN_7101b5c980`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b5c980`  (offset `0x1b5c980`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b5c980(long * param_1, uint param_2, undefined8 param_3, ulong param_4, long * * * * param_5, ulong param_6, undefined8 param_7, byte * * * * param_8, uint param_9)`
- **Size / BBs / Incoming:** 1576 bytes / 64 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** cmn_%dp;mel_homerun_player_name
- **Callers:** FUN_71014afb50
- **Callees:** FUN_71003a4ca0;FUN_710323f330;FUN_710326ad60;FUN_7103280ec0;FUN_7103778ab0;FUN_7103778b80;FUN_7103779770;FUN_710377a120;FUN_710377a280;FUN_710377b140;FUN_710379e9c0;FUN_71037a2270;FUN_71037a4450;FUN_71037ae170;FUN_710392eb40;<EXTERNAL>::memset;...
- **Files:** [decomp](../decompiled/FUN_7101b5c980__7101b5c980.c)  [cfg](../decompiled/FUN_7101b5c980__7101b5c980.mmd)
- **Clone hash:** `3de3baa7d5001b8a`

```c

void FUN_7101b5c980(long *param_1,uint param_2,undefined8 param_3,ulong param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,byte ****param_8,uint param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  long ****pppplVar13;
  int iVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uVar27;
  long *local_1178;
  long *local_1170;
  long *local_1168;
  undefined **local_1128;
  ulong local_1120;
  undefined **local_1118;
  ulong local_1110;
  undefined **local_1108;
// ... (221 more lines)
```

## 18. `FUN_7101a1c140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1c140`  (offset `0x1a1c140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1c140(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 440 bytes / 18 bb / 5 incoming refs
- **Match values:** home
- **Strings touched:** score_color_%d;score_color_1;set_txt_score_l;set_txt_score_m;mel_chara_select_homerun_high_score_n;mel_chara_select_high_score_none;set_txt_worldscore;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a27570
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a1c140__7101a1c140.c)  [cfg](../decompiled/FUN_7101a1c140__7101a1c140.mmd)
- **Clone hash:** `74a575273a6e6a6e`

```c

void FUN_7101a1c140(long param_1,int *param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  ushort local_34 [2];
  
  if (*param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_60,param_1,(long ****)"set_txt_score_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_70,param_1,(long ****)"set_txt_score_m",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*param_2 == 0) {
    FUN_710377a120((long)&local_60,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_70,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else {
    uVar1 = param_2[1];
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_homerun_high_score_n",2);
    param_3 = 2;
    param_4 = (ulong)(uVar1 / 1000);
    param_5 = (long ****)(ulong)(uVar1 % 1000);
    FUN_710377a280((long)&local_70,(byte *)"mel_chara_select_homerun_high_score_n",2);
  }
// ... (34 more lines)
```

## 19. `FUN_71000c36e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c36e0`  (offset `0xc36e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c36e0(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 548 bytes / 26 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000bce50;FUN_71000d3390;FUN_71001b1300;FUN_7100258800;FUN_7100258950;FUN_7101717960;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000c36e0__71000c36e0.c)  [cfg](../decompiled/FUN_71000c36e0__71000c36e0.mmd)
- **Clone hash:** `d865e773c2dce56e`

```c

void FUN_71000c36e0(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar5 = *(long **)(param_2 + 0x50);
  if ((((plVar5 != (long *)0x0) && (*(int *)(param_2 + 8) != 0)) &&
      ((DAT_71052af0e0 & 0xfffffffe) == 2)) &&
     ((*(undefined4 *)(param_2 + 0x58) = 0, *(long *)(param_2 + 0x78) != 0 &&
      (*(long *)(param_2 + 0x60) != 0)))) {
    plVar6 = &DAT_71052af180;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          goto LAB_71000c389c;
        }
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x68);
      }
    }
    if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
      plVar6 = &DAT_71052af180;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar3;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
            FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
// ... (41 more lines)
```

## 20. `FUN_7102318650`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102318650`  (offset `0x2318650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102318650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2512 bytes / 114 bb / 1 incoming refs
- **Match values:** Home
- **Strings touched:** MeleeScene;HomeRunContestScene
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323beb0;FUN_71032e3a80;FUN_7103723a90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102318650__7102318650.c)  [cfg](../decompiled/FUN_7102318650__7102318650.mmd)
- **Clone hash:** `9dbca2d820e9820c`

```c

void FUN_7102318650(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long ***local_60;
  undefined4 local_54;
  
  pppplVar8 = &local_60;
  pppplVar9 = &local_60;
  pppplVar10 = &local_60;
  pppplVar11 = &local_60;
  lVar3 = FUN_710392e290(0x10,0x1b8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar3 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_60 = (long ***)&DAT_000001b8;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (lVar3 = FUN_710392e290(0x10,0x1b8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
// ... (349 more lines)
```

## 21. `FUN_7101ac6fd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac6fd0`  (offset `0x1ac6fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 2 incoming refs
- **Match values:** home
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

## 22. `FUN_7100201e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsConnecting();(IsConnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001bec20;FUN_71001da0e0;FUN_71001f2180;FUN_7100202410;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100201e50__7100201e50.c)  [cfg](../decompiled/FUN_7100201e50__7100201e50.mmd)
- **Clone hash:** `f2aaf80b617f8060`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100201e50(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5,
                   long *param_6,int param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_98;
  
  iVar4 = 10000000;
  if (param_7 != -1) {
    iVar4 = param_7;
  }
  uVar9 = (**(code **)(*param_2 + 0x60))();
  if (((((uVar9 & 1) == 0) && (*(int *)((long)param_2 + 0x114) != 0)) ||
      (uVar9 = (**(code **)(*param_2 + 0x40))(param_2), (uVar9 & 1) != 0)) ||
     (uVar9 = (**(code **)(*param_2 + 0x58))(param_2), (uVar9 & 1) != 0)) {
    uStack_98._0_4_ = 0x80050002;
    goto LAB_7100201ee0;
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 8);
// ... (200 more lines)
```

## 23. `FUN_71014b3850`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014b3850`  (offset `0x14b3850`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014b3850(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 524 bytes / 21 bb / 1 incoming refs
- **Match values:** Home
- **Strings touched:** HomeRunContestManager::process
- **Callees:** FUN_710134f5c0;FUN_710137a600;FUN_710392e290;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_71014b3850__71014b3850.c)  [cfg](../decompiled/FUN_71014b3850__71014b3850.mmd)
- **Clone hash:** `29c8707a674e2a81`

```c

void FUN_71014b3850(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  long ***local_50;
  long *local_48;
  undefined4 local_34;
  
  pppplVar10 = &local_50;
  pppplVar11 = &local_50;
  pppplVar12 = &local_50;
  FUN_710134f5c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar13 = DAT_71052c36c0;
  plVar1 = DAT_71052c33d8;
  plVar6 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_50 = (long ***)&DAT_00000070;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar10;
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,0x70,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar10, plVar6 != (long *)0x0))
      goto LAB_71014b38d8;
    }
// ... (75 more lines)
```

## 24. `FUN_7100202710`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsDisconnecting();chara/chara_4/chara_4_;(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b4280;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001da0e0;FUN_7100202db0;FUN_7100203410;FUN_71002039c0;FUN_7100216320;FUN_7101717960;...
- **Files:** [decomp](../decompiled/FUN_7100202710__7100202710.c)  [cfg](../decompiled/FUN_7100202710__7100202710.mmd)
- **Clone hash:** `04b862fbacc43879`

```c

void FUN_7100202710(undefined8 *param_1,long *param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (((int)param_2[0x14] == 0) || (uVar7 = (**(code **)(*param_2 + 0x58))(), (uVar7 & 1) == 0)) {
    uStack_b0._0_4_ = 0x80050002;
    goto LAB_71002028e4;
  }
  FUN_7100202db0(param_2);
  (**(code **)(*param_2 + 0xb0))(param_2,3);
  param_2[0x60] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = param_3;
  param_2[0x62] = *param_4;
  plVar8 = FUN_71001af850(0x238);
  if (plVar8 != (long *)0x0) {
    FUN_7100216320(plVar8,param_2,3,0x60,0,0);
  }
  *(undefined1 *)(plVar8 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
// ... (244 more lines)
```

## 25. `FUN_71014aa930`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** Home
- **Strings touched:** StateLoadAsyncForHomeRunContest;StateSetupBatterOrder;StateShowPlayerInformation;StateShowBatterOrder;NODE_PRE_REFRACT_BLEND;StateShowRemainingTimes;StateStartPauseUntilReady;StateEndPauseUntilReady;chara/chara_4/chara_4_;StateResetBatterFighter;StateFadeOut;StateShowReady;StateMeleeForHomeRunContest;StatePause;StateOperatorHUDDone;StateRetryPreparations;StateEndProduction;StateResult;StateResultNoContest;StateApplyParameters
- **Callers:** FUN_7101850830
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71014aa930__71014aa930.c)  [cfg](../decompiled/FUN_71014aa930__71014aa930.mmd)
- **Clone hash:** `b011ce5fe471cc6f`

```c

void FUN_71014aa930(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
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
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForHomeRunContest",(long ****)FUN_71014ab2d0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupBatterOrder",(long ****)FUN_71014ab360,param_4,
// ... (423 more lines)
```

## 26. `FUN_7101ac65f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** home
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

## 27. `FUN_710041f880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710041f880`  (offset `0x41f880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710041f880(void)`
- **Size / BBs / Incoming:** 3608 bytes / 142 bb / 1 incoming refs
- **Match values:** Home
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

## 28. `FUN_71013a9650`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013a9650`  (offset `0x13a9650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013a9650(long param_1)`
- **Size / BBs / Incoming:** 348 bytes / 6 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_distance_difference_n
- **Callers:** FUN_71014b0760;FUN_71015737c0
- **Callees:** FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_71013a9650__71013a9650.c)  [cfg](../decompiled/FUN_71013a9650__71013a9650.mmd)
- **Clone hash:** `2fecda76e47984f8`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a9650(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar4 = _ConstantZero;
  auVar1._8_8_ = _DAT_7107521008;
  auVar1._0_8_ = _ConstantZero;
  auVar8._8_8_ = _DAT_7107521008;
  auVar8._0_8_ = _ConstantZero;
  auVar8 = NEON_ext(auVar8,auVar1,8,1);
  uVar7 = (ulong)auVar8._0_4_;
  *(ulong *)(param_1 + 0x48) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar3 = uRam0000007107459008;
  uVar2 = _ConstantZero;
  lVar6 = 0x218;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
// ... (52 more lines)
```

## 29. `FUN_71001d1e40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1e40`  (offset `0x1d1e40`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_71001d1e40(long param_1, int param_2)`
- **Size / BBs / Incoming:** 276 bytes / 10 bb / 4 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp;GetState() == CallContext::CallInProgress
- **Callers:** thunk_FUN_71001d1e40;FUN_7100238810;FUN_7100247670;FUN_710370fc20
- **Callees:** FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d1f60;FUN_71001d2110
- **Files:** [decomp](../decompiled/FUN_71001d1e40__71001d1e40.c)  [cfg](../decompiled/FUN_71001d1e40__71001d1e40.mmd)
- **Clone hash:** `bb6734b96c9a3457`

```c

bool FUN_71001d1e40(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 auStack_70 [7];
  byte local_34 [4];
  
  uVar4 = *(uint *)(param_1 + 0x14);
  if (uVar4 == 1) {
    local_34[0] = 0;
    uVar3 = FUN_71001d1f60((ulong)(param_2 != 0),param_2,0,thunk_FUN_71001d1e40,param_1,local_34);
    if ((uVar3 & 1) == 0) {
      FUN_71001b46a0(auStack_70,10,param_2);
      FUN_71001b2e80((long)auStack_70);
      do {
        uVar4 = *(uint *)(param_1 + 0x14);
        if (uVar4 != 1) goto LAB_71001d1f1c;
        iVar2 = FUN_71001b4760((long)auStack_70);
        FUN_71001d2110(iVar2);
        uVar3 = FUN_71001b2e90((long)auStack_70);
      } while ((uVar3 & 1) != 0);
      uVar4 = *(uint *)(param_1 + 0x14);
LAB_71001d1f1c:
      bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
      FUN_71001b4730();
    }
    else {
      bVar1 = local_34[0] != 0;
    }
  }
  else {
    bVar1 = uVar4 == 4 || (uVar4 | 1) == 3;
  }
  return bVar1;
}


```

## 30. `FUN_7101f89310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** HOME
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

## 31. `FUN_71001d1590`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1590`  (offset `0x1d1590`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d1590(long * param_1)`
- **Size / BBs / Incoming:** 372 bytes / 23 bb / 161 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp
- **Callers:** FUN_71000c3910;FUN_71000c3d90;FUN_71000c4b70;FUN_71000d0990;FUN_71000d0a10;FUN_71000d0af0;FUN_71000d0b50;FUN_71000d0bb0;FUN_71000d1170;FUN_71000d18c0;FUN_71000d1940;FUN_71000d1bb0;FUN_71000d7140;FUN_71000d8390;FUN_71000d9620;FUN_71000da280;...
- **Callees:** FUN_71001af8a0;FUN_71001b1300;FUN_71001b1870;FUN_71001b4200;FUN_71001d0f00
- **Files:** [decomp](../decompiled/FUN_71001d1590__71001d1590.c)  [cfg](../decompiled/FUN_71001d1590__71001d1590.mmd)
- **Clone hash:** `233d1d2d796ec815`

```c

undefined8 FUN_71001d1590(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_48 [3];
  undefined4 local_24;
  
  if (*(int *)((long)param_1 + 0x14) == 0) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x14) == 1) {
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp",0xee,
                   0xe000000e,0);
    return 0;
  }
  local_24 = 0x80010001;
  FUN_71001b4200((undefined4 *)auStack_48,&local_24);
  FUN_71001d0f00(param_1,0,auStack_48,0);
  param_1[0x11] = 0;
  if (param_1[6] != 0) {
    lVar1 = param_1[4];
    plVar3 = (long *)param_1[5];
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[6] = 0;
    while (plVar3 != param_1 + 4) {
      plVar4 = (long *)plVar3[1];
      FUN_71001b1870((long)plVar3);
      plVar3 = plVar4;
    }
  }
  plVar3 = (long *)param_1[10];
  if (plVar3 == (long *)0x0) goto LAB_71001d16cc;
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)plVar3[1]) {
// ... (33 more lines)
```

## 32. `FUN_71000c4770`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c4770`  (offset `0xc4770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c4770(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 1020 bytes / 39 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000b1c60;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b40e0;FUN_71000b4150;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000c2890;FUN_71000d2ca0;FUN_710015fd60;FUN_710015ff20;FUN_710015ffc0;FUN_7100160210;FUN_7100160220;...
- **Files:** [decomp](../decompiled/FUN_71000c4770__71000c4770.c)  [cfg](../decompiled/FUN_71000c4770__71000c4770.mmd)
- **Clone hash:** `e5d50cbc86220a97`

```c

void FUN_71000c4770(int *param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_158;
  undefined4 local_150;
  int local_d8 [32];
  undefined4 local_58 [2];
  
  piVar11 = (int *)(param_2 + 0xd8);
  if ((*piVar11 == 1) || (*(char *)(param_2 + 0xb0) == '\0')) {
LAB_71000c4850:
    local_d8[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_d8 | 4));
    local_158 = (ulong)local_158._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)&local_158);
    FUN_71000bce50(param_1,local_d8);
    return;
  }
  lVar4 = FUN_7100162410(DAT_71052add68);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + -0x18;
  }
  *(long *)(param_2 + 0xa0) = lVar6;
// ... (128 more lines)
```

## 33. `FUN_71001d5270`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d5270`  (offset `0x1d5270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d5270(undefined8 * param_1, long * param_2, int param_3)`
- **Size / BBs / Incoming:** 284 bytes / 10 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/SystemComponent.cpp;TestState()!=Terminated
- **Callers:** FUN_71001d4de0;FUN_71001db690
- **Callees:** FUN_71001b2e80;FUN_71001b2e90;FUN_71001b41d0;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001d5110;FUN_71001d7b90
- **Files:** [decomp](../decompiled/FUN_71001d5270__71001d5270.c)  [cfg](../decompiled/FUN_71001d5270__71001d5270.mmd)
- **Clone hash:** `39839c9e6b4a14f2`

```c

void FUN_71001d5270(undefined8 *param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 auStack_90 [7];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_34;
  
  FUN_71001d5110(param_2);
  FUN_71001b41d0((undefined4 *)&local_58);
  uVar2 = FUN_71001d7b90((ulong)(param_3 != 0),param_3,FUN_71001db690,param_2,
                         (undefined4 *)&local_58);
  if ((uVar2 & 1) == 0) {
    FUN_71001b46a0(auStack_90,10,param_3);
    FUN_71001b2e80((long)auStack_90);
    do {
      iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
      if (iVar1 == 0x40) break;
      uVar2 = FUN_71001b2e90((long)auStack_90);
    } while ((uVar2 & 1) != 0);
    iVar1 = (**(code **)(*param_2 + 0x70))(param_2);
    if (iVar1 == 0x40) {
      local_34 = 0x10001;
    }
    else {
      local_34 = 0x8001000b;
    }
    FUN_71001b4200((undefined4 *)param_1,&local_34);
    FUN_71001b4730();
  }
  else {
    param_1[2] = local_48;
    *param_1 = local_58;
    param_1[1] = uStack_50;
  }
  return;
// ... (2 more lines)
```

## 34. `FUN_71001d5390`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d5390`  (offset `0x1d5390`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d5390(long param_1, undefined4 param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1744 bytes / 94 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;GetTotalNumberOfJobs() != 0
- **Callers:** FUN_71001d4de0
- **Callees:** FUN_71001b1870;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d8820;FUN_71001dd1b0;FUN_71001dd6e0
- **Files:** [decomp](../decompiled/FUN_71001d5390__71001d5390.c)  [cfg](../decompiled/FUN_71001d5390__71001d5390.mmd)
- **Clone hash:** `2bd382d88299e6a3`

```c

void FUN_71001d5390(long param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 auStack_a0 [7];
  long local_68;
  
  plVar1 = (long *)(param_1 + 0xc0);
  if ((param_3 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    plVar15 = (long *)(param_1 + 0x160);
    if (*(long **)(param_1 + 0x158) != plVar15) {
      plVar18 = *(long **)(param_1 + 0x158);
      do {
        while( true ) {
          lVar16 = plVar18[5];
          *(undefined4 *)(lVar16 + 0x40) = 3;
          if (DAT_7104f561d1 == '\0') break;
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
// ... (272 more lines)
```

## 35. `FUN_7101a1b4a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a1b4a0`  (offset `0x1a1b4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a1b4a0(long param_1, int param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1108 bytes / 46 bb / 6 incoming refs
- **Match values:** home
- **Strings touched:** set_parts_lct_score_%dp;set_rep_chara1;player_color_%dp;set_txt_highscoer;score_on;mel_chara_select_homerun_high_score_n;score_off;mel_chara_select_high_score_none;set_parts_worldscore_%dp;set_txt_worldscore;score_color_1;score_color_%d;mel_chara_select_world_pw_n
- **Callers:** FUN_7101a19990;FUN_7101a26200;FUN_7101a27570
- **Callees:** FUN_71003a4ca0;FUN_7103238a70;FUN_710323c4e0;FUN_71032631a0;FUN_71032648e0;FUN_710353da30;FUN_7103540b10;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778c70;FUN_71037790a0;FUN_710377a120;FUN_710377a280;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101a1b4a0__7101a1b4a0.c)  [cfg](../decompiled/FUN_7101a1b4a0__7101a1b4a0.mmd)
- **Clone hash:** `ec3039289ca81f22`

```c

void FUN_7101a1b4a0(long param_1,int param_2,ulong *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  ulong uVar8;
  byte ****ppppbVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  ulong local_68;
  
  lVar2 = **(long **)(param_1 + 0x1a8) + 8;
  uVar1 = param_2 + 1;
  ppppppppplVar7 = (long *********)(ulong)uVar1;
  ppppbVar9 = param_4;
  FUN_7103776640(&local_70,lVar2,(byte ****)"set_parts_lct_score_%dp",ppppppppplVar7,param_4,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_80,(long)&local_70,(long ****)"set_rep_chara1",ppppppppplVar7,ppppbVar9,
// ... (152 more lines)
```

## 36. `FUN_71019b98c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b98c0`  (offset `0x19b98c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b98c0(long param_1, undefined8 param_2, long * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4068 bytes / 139 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** over_write_start;amiibo_write; %02X;numbering_id;color;spirits_ability0;spirits_ability1;spirits_ability2;NODE_PRE_REFRACT_BLEND;lv_exp;cp_exp;prize_point;offensive;grounded;attack_out_cliff;return_to_cliff;air_offensive;feint_master;feint_counter;feint_shooter;catcher;_100_keeper;attack_cancel;dash_attacker;critical_hitter;shield_master;just_shield_master;item_collector;item_throw_to_target;cliffer;_100_attacker;smash_holder;...
- **Callees:** FUN_7100323350;FUN_71003a5020;FUN_710175dfc0;FUN_71019bbbf0;FUN_71019bc200;FUN_71022e5e10;FUN_71032626e0;FUN_71032631a0;FUN_71032633f0;FUN_7103264270;FUN_71032a2c10;FUN_71032a2f50;FUN_71032df050;FUN_71032e00b0;FUN_71032e2e70;FUN_710375aa90;...
- **Files:** [decomp](../decompiled/FUN_71019b98c0__71019b98c0.c)  [cfg](../decompiled/FUN_71019b98c0__71019b98c0.mmd)
- **Clone hash:** `37395306bc019cfe`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71019b98c0(long param_1,undefined8 param_2,long **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  long **********pppppppppplVar3;
  void *__src;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long ****************__n;
  long **********pppppppppplVar7;
  bool bVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  long **********__dest;
  undefined1 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long **********pppppppppplVar23;
  int *piVar24;
// ... (668 more lines)
```

## 37. `FUN_71014af650`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014af650`  (offset `0x14af650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014af650(void)`
- **Size / BBs / Incoming:** 528 bytes / 18 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_more_times_n
- **Callees:** FUN_71014b9b40;FUN_7101b5cfb0;FUN_710377a280;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71014af650__71014af650.c)  [cfg](../decompiled/FUN_71014af650__71014af650.mmd)
- **Clone hash:** `85f48e061adb601c`

```c

void FUN_71014af650(void)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  puVar7 = (undefined8 *)**(undefined8 **)(*DAT_71052c36c0 + 0x18);
  plVar2 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
  if ((uint)((ulong)(*(long *)(*plVar2 + 0x270) - *(long *)(*plVar2 + 0x268)) >> 2) < 2) {
    return;
  }
  lVar6 = **(long **)(DAT_71052c3420 + 8);
  (**(code **)(*(long *)*puVar7 + 0x10))();
  FUN_710377a280(*(long *)(*(long *)(*(long *)(**(long **)(lVar6 + 0xc40) + 0x9a0) + 8) + 0x80) +
                 0x170,(byte *)"mel_homerun_more_times_n",1);
  lVar4 = *(long *)(*(long *)(*(long *)(**(long **)(lVar6 + 0xc40) + 0x9a0) + 8) + 0x80);
  if (*(int *)(lVar4 + 1000) == 0) {
    *(long *)(lVar4 + 0x3f8) = lVar4 + 0xd0;
    *(long *)(lVar4 + 0x400) = lVar4 + 0xf0;
    if (0x12 < *(uint *)(lVar4 + 0x3e4)) {
LAB_71014af85c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar4 + (long)(int)*(uint *)(lVar4 + 0x3e4) * 4 + 0x398) = 2;
    if (*(int *)(lVar4 + 0x3e4) < 0x12) {
      uVar8 = *(int *)(lVar4 + 0x3e4) + 1;
      *(uint *)(lVar4 + 0x3e4) = uVar8;
      if (0x12 < uVar8) goto LAB_71014af85c;
      *(undefined4 *)(lVar4 + (long)(int)uVar8 * 4 + 0x398) = 1;
    }
  }
  if (((long *)puVar7[1] != (long *)0x0) &&
// ... (29 more lines)
```

## 38. `FUN_71021723e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** HOME
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

## 39. `FUN_7102328650`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102328650`  (offset `0x2328650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102328650(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 860 bytes / 39 bb / 1 incoming refs
- **Match values:** Home
- **Strings touched:** HomeRunContestScene
- **Callees:** FUN_7103723a90;FUN_7103723e70;FUN_71037266d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock
- **Files:** [decomp](../decompiled/FUN_7102328650__7102328650.c)  [cfg](../decompiled/FUN_7102328650__7102328650.mmd)
- **Clone hash:** `5b966f08de622b49`

```c

void FUN_7102328650(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_88;
  byte local_80 [64];
  
  plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = local_d0 & 0xffffffff00000000;
      local_88 = (long ***)&DAT_00000010;
      param_3 = (long ****)&local_88;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar3 != (long *)0x0)) goto LAB_71023286d0;
    }
    plVar3 = (long *)0x0;
  }
LAB_71023286d0:
  *plVar3 = param_1 + 0x50;
// ... (104 more lines)
```

## 40. `FUN_71014acd30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014acd30`  (offset `0x14acd30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014acd30(undefined8 param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6796 bytes / 509 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_world_pw_n
- **Callees:** FUN_71000001c0;FUN_710138b5c0;FUN_71013bb670;FUN_71014b7d40;FUN_71014b9dd0;FUN_71014b9de0;FUN_71014b9fe0;FUN_71014b9ff0;FUN_71014ba030;FUN_71014c08b0;FUN_71014f8940;FUN_7101764000;FUN_71017d1480;FUN_71024076d0;FUN_7103737a20;FUN_710377a280;...
- **Files:** [decomp](../decompiled/FUN_71014acd30__71014acd30.c)  [cfg](../decompiled/FUN_71014acd30__71014acd30.mmd)
- **Clone hash:** `20454db6a6c3cacf`

```c

/* WARNING: Removing unreachable block (ram,0x0071014ace50) */

void FUN_71014acd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  int *piVar20;
  char *pcVar21;
  undefined1 uVar22;
  int iVar23;
  int *piVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
// ... (1393 more lines)
```

## 41. `FUN_71001d60e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d60e0`  (offset `0x1d60e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d60e0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 192 bytes / 8 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
- **Callees:** FUN_71001af8a0;FUN_71001b1300
- **Files:** [decomp](../decompiled/FUN_71001d60e0__71001d60e0.c)  [cfg](../decompiled/FUN_71001d60e0__71001d60e0.mmd)
- **Clone hash:** `890123390f1e120b`

```c

void FUN_71001d60e0(undefined8 *param_1)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_7104f56208;
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  if (*(char *)(param_1 + 3) != '\0') {
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)(param_1 + 1) == 0) {
      if (uVar1 < 0x11) {
        (&DAT_71052af120)[uVar1] = 0;
        goto LAB_71001d6180;
      }
    }
    else if (uVar1 < 0x11) {
      *(undefined8 *)
       (*(long *)(*DAT_71052af1b0 + (ulong)*(uint *)(param_1 + 1) * 8) + (ulong)uVar1 * 8 + 8) = 0;
      goto LAB_71001d6180;
    }
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x55,0xe0000003,0);
  }
LAB_71001d6180:
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  FUN_71001af8a0((long)param_1);
  return;
}


```

## 42. `FUN_71013a53d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013a53d0`  (offset `0x13a53d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013a53d0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2132 bytes / 102 bb / 11 incoming refs
- **Match values:** home
- **Strings touched:** mel_homerun_distance_difference_n
- **Callers:** FUN_71013a85c0;FUN_71013a8890;FUN_71013a89a0;FUN_71013a8b20
- **Callees:** FUN_710138c640;FUN_71013a5c30;FUN_710377a280;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71013a53d0__71013a53d0.c)  [cfg](../decompiled/FUN_71013a53d0__71013a53d0.mmd)
- **Clone hash:** `f9a3b649065c9616`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a53d0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong *__dest;
  float *pfVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong *__src;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  long ****__n;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  ulong *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
// ... (360 more lines)
```

## 43. `FUN_71001d4de0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d4de0`  (offset `0x1d4de0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d4de0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 816 bytes / 45 bb / 2 incoming refs
- **Match values:** home
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp
- **Callers:** FUN_71001d5a60
- **Callees:** FUN_71001b1300;FUN_71001b17e0;FUN_71001b1870;FUN_71001b8b10;FUN_71001d5110;FUN_71001d5270;FUN_71001d5390;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d4de0__71001d4de0.c)  [cfg](../decompiled/FUN_71001d4de0__71001d4de0.mmd)
- **Clone hash:** `6d028abcbcffb94e`

```c

/* WARNING: Removing unreachable block (ram,0x0071001d4fac) */
/* WARNING: Removing unreachable block (ram,0x0071001d4f98) */

void FUN_71001d4de0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 auStack_48 [3];
  
  *param_1 = &PTR_FUN_7104f561e8;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d4e5c:
    if ((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) goto LAB_71001d4e8c;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71001d4e5c;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d4e5c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d4e8c:
    lVar9 = 0;
  }
// ... (97 more lines)
```

## 44. `FUN_71004227b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004227b0`  (offset `0x4227b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004227b0(void)`
- **Size / BBs / Incoming:** 644 bytes / 25 bb / 1 incoming refs
- **Match values:** Home
- **Strings touched:** ReplaySetupScene;MeleeReplayNormalSequenceScene;MeleeReplayCompetitionContinuationSequenceScene;ReplayExitScene;ReplayLoadScene;ReplayDownloadScene;HomeRunReplaySequenceScene;IngameCallSequenceScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004227b0__71004227b0.c)  [cfg](../decompiled/FUN_71004227b0__71004227b0.mmd)
- **Clone hash:** `d11670fa631b8641`

```c

void FUN_71004227b0(void)

{
  int iVar1;
  
  DAT_7105328ba8 = 0;
  DAT_7105328bb0 = "ReplaySetupScene";
  if (((DAT_7105328c40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c40), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c40);
  }
  DAT_7105328bb8 = &PTR_PTR_71050b8240;
  DAT_7105328bc0 = "MeleeReplayNormalSequenceScene";
  if (((DAT_7105328c48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c48), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c48);
  }
  DAT_7105328bc8 = &PTR_PTR_71050b8248;
  DAT_7105328bd0 = "MeleeReplayCompetitionContinuationSequenceScene";
  if (((DAT_7105328c50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c50), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c50);
  }
  DAT_7105328bd8 = &PTR_PTR_71050b8250;
  DAT_7105328be0 = "ReplayExitScene";
  if (((DAT_7105328c58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c58), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c58);
  }
  DAT_7105328be8 = &PTR_PTR_71050b8258;
  DAT_7105328bf0 = "ReplayLoadScene";
  if (((DAT_7105328c60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c60), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c60);
  }
  DAT_7105328bf8 = &PTR_PTR_71050b8260;
  DAT_7105328c00 = "ReplayDownloadScene";
  if (((DAT_7105328c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c68), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c68);
  }
  DAT_7105328c08 = &PTR_PTR_71050b8268;
  DAT_7105328c10 = "HomeRunReplaySequenceScene";
  if (((DAT_7105328c70 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328c70), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328c70);
// ... (12 more lines)
```

## 45. `FUN_710235d040`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710235d040`  (offset `0x235d040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710235d040(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 25696 bytes / 1747 bb / 1 incoming refs
- **Match values:** Home
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

## 46. `FUN_71001b4220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001b4220`  (offset `0x1b4220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001b4220(undefined4 * param_1, char * param_2)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 26 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
- **Callers:** FUN_7100204fa0;FUN_710021fd80;FUN_7100222070;FUN_7100241b90;FUN_7100262a10;FUN_7100263aa0;FUN_7100263f90;FUN_7100264590;FUN_7100265d70;FUN_7100274cd0;FUN_71002761a0;FUN_7100277890;FUN_7100278f20;FUN_7100279420;FUN_710027a1a0;FUN_710027af00;...
- **Files:** [decomp](../decompiled/FUN_71001b4220__71001b4220.c)  [cfg](../decompiled/FUN_71001b4220__71001b4220.mmd)
- **Clone hash:** `42a9afa6b713dc79`

```c

void FUN_71001b4220(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_2;
  uVar2 = 0x80010001;
  *(char **)(param_1 + 2) =
       "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp";
  if (cVar1 != '\0') {
    uVar2 = 0x10001;
  }
  *param_1 = uVar2;
  param_1[4] = 0x74;
  return;
}


```

## 47. `FUN_7100023e70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023e70`  (offset `0x23e70`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100023e70(byte * param_1, long * param_2, long * param_3, long param_4)`
- **Size / BBs / Incoming:** 1132 bytes / 74 bb / 1 incoming refs
- **Match values:** HOME
- **Strings touched:** password;machine;login;chara/chara_4/chara_4_;default;%s%s%s;.netrc
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100007fd0;FUN_7100017280;FUN_71000176a0;FUN_71000242e0;FUN_71000272a0;FUN_71000272c0;FUN_7100027950;FUN_7100027980;FUN_7100027a10
- **Files:** [decomp](../decompiled/FUN_7100023e70__7100023e70.c)  [cfg](../decompiled/FUN_7100023e70__7100023e70.mmd)
- **Clone hash:** `21b431dca335f7f5`

```c

/* WARNING: Removing unreachable block (ram,0x007100024214) */

undefined4 FUN_7100023e70(byte *param_1,long *param_2,long *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  byte abStack_170 [256];
  long alStack_70 [2];
  
  if ((char *)*param_2 == (char *)0x0) {
    bVar2 = false;
    if (param_4 != 0) goto LAB_7100023eb4;
LAB_7100024238:
    lVar6 = FUN_71000242e0("HOME");
    if (lVar6 == 0) {
      return 1;
    }
    lVar6 = FUN_7100007fd0((byte *)"%s%s%s");
    FUN_71000272a0();
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    lVar6 = FUN_7100027980();
    FUN_71000272a0();
  }
  else {
    bVar2 = *(char *)*param_2 != '\0';
    if (param_4 == 0) goto LAB_7100024238;
LAB_7100023eb4:
// ... (183 more lines)
```

## 48. `FUN_71001b42a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001b42a0`  (offset `0x1b42a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001b42a0(undefined4 * param_1, char * param_2)`
- **Size / BBs / Incoming:** 52 bytes / 1 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
- **Callers:** FUN_71001d7b90
- **Files:** [decomp](../decompiled/FUN_71001b42a0__71001b42a0.c)  [cfg](../decompiled/FUN_71001b42a0__71001b42a0.mmd)
- **Clone hash:** `42a9afa6b713dc79`

```c

void FUN_71001b42a0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_2;
  uVar2 = 0x80010001;
  *(char **)(param_1 + 2) =
       "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp";
  if (cVar1 != '\0') {
    uVar2 = 0x10001;
  }
  *param_1 = uVar2;
  param_1[4] = 0x91;
  return;
}


```

## 49. `FUN_71001b42e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001b42e0`  (offset `0x1b42e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001b42e0(undefined4 * param_1, undefined4 * param_2)`
- **Size / BBs / Incoming:** 32 bytes / 1 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp
- **Callers:** FUN_7100237420
- **Files:** [decomp](../decompiled/FUN_71001b42e0__71001b42e0.c)  [cfg](../decompiled/FUN_71001b42e0__71001b42e0.mmd)
- **Clone hash:** `e0d5f5fe294a23f9`

```c

void FUN_71001b42e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(char **)(param_1 + 2) =
       "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Platform/Core/Result.cpp";
  *param_1 = uVar1;
  param_1[4] = 0xa1;
  return;
}


```

## 50. `FUN_71000c3d90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c3d90`  (offset `0xc3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000c3d90(void)`
- **Size / BBs / Incoming:** 2524 bytes / 74 bb / 1 incoming refs
- **Match values:** home
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000c3d80
- **Callees:** FUN_71000b1c30;FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b1da0;FUN_71000b2850;FUN_71000b3880;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4260;FUN_71000b9f60;FUN_71000ba0c0;FUN_71000bce50;FUN_71000bcf30;FUN_71000bed60;FUN_71000bedd0;...
- **Files:** [decomp](../decompiled/FUN_71000c3d90__71000c3d90.c)  [cfg](../decompiled/FUN_71000c3d90__71000c3d90.mmd)
- **Clone hash:** `28c7078cc52dd322`

```c

void FUN_71000c3d90(long *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  int iVar15;
  ErrorResultVariant *this;
  long *plVar16;
  long lVar17;
  int aiStack_360 [4];
  undefined8 uStack_350;
  undefined4 uStack_348;
  ushort uStack_338;
  int aiStack_330 [4];
  int aiStack_320 [4];
  undefined **ppuStack_310;
  undefined4 auStack_308 [30];
  undefined8 auStack_290 [16];
  undefined8 auStack_210 [16];
  int aiStack_190 [32];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  undefined8 auStack_c0 [3];
  ushort uStack_a8;
// ... (328 more lines)
```

