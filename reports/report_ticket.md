# ticket (funcs=8, hits=26)

Top 50 functions by hit count

## 1. `FUN_7101b06400`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b06400`  (offset `0x1b06400`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b06400(void)`
- **Size / BBs / Incoming:** 572 bytes / 37 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** set_parts_ticket;anim_glow;anim_burn_out
- **Callees:** FUN_7101b09e60;FUN_7103776640;FUN_71037780e0;FUN_710377aee0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101b06400__7101b06400.c)  [cfg](../decompiled/FUN_7101b06400__7101b06400.mmd)
- **Clone hash:** `0fefaffeb620777e`

```c

void FUN_7101b06400(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuStack_50;
  ulong uStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  
  puVar9 = *(undefined8 **)(param_1 + 0x438);
  puVar8 = *(undefined8 **)(param_1 + 0x440);
  if (*(int *)(param_1 + 0x264) == 0) {
    while (puVar8 != puVar9) {
      puVar8 = puVar8 + -2;
      (**(code **)*puVar8)(puVar8);
    }
    *(undefined8 **)(param_1 + 0x440) = puVar9;
    if (*(char *)(param_1 + 0x38d) != '\0') {
      if (*(char *)(param_1 + 0x38c) == '\0') {
        FUN_7103776640(&ppuStack_50,param_1 + 0x3d0,(byte ****)"set_parts_ticket",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pcVar5 = "anim_burn_out";
      }
      else {
        FUN_7103776640(&ppuStack_50,param_1 + 0x3d0,(byte ****)"set_parts_ticket",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pcVar5 = "anim_glow";
      }
      FUN_71037780e0(&ppuStack_40,(long)&ppuStack_50,(long ****)pcVar5,param_3,param_4,param_5,
                     param_6,param_7,param_8);
// ... (86 more lines)
```

## 2. `FUN_7101d97570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d97570`  (offset `0x1d97570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d97570(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 6580 bytes / 412 bb / 3 incoming refs
- **Match values:** ticket
- **Strings touched:** set_parts_btn_05;nam_goods_spirit_charge_jamming;nam_goods_help_spirit_charge_jamming;set_parts_btn_00;nam_goods_spirit_all_shuffle;nam_goods_help_spirit_all_shuffle;set_parts_btn_06;nam_goods_spirit_apply_flower;nam_goods_help_spirit_apply_flower;set_parts_btn_07;nam_goods_spirit_escort_weaken;nam_goods_help_spirit_escort_weaken;set_parts_btn_08;nam_goods_spirit_item_lock;nam_goods_help_spirit_item_lock;set_parts_btn_09;nam_goods_spirit_damage_50;nam_goods_help_spirit_damage_50;set_parts_btn_01;nam_goods_spirit_all_attacker;nam_goods_help_spirit_all_attacker;set_parts_btn_02;nam_goods_spirit_all_supporter;nam_goods_help_spirit_all_supporter;set_parts_btn_03;nam_goods_spirit_reloaded;nam_goods_help_spirit_reloaded;set_parts_btn_04;nam_goods_spirit_retry_ticket;nam_goods_help_spirit_retry_ticket;selector_01;selector_00;...
- **Callers:** FUN_71018ee4a0;FUN_71018f7620;FUN_7101d99da0
- **Callees:** FUN_7101d98f30;FUN_7101d99160;FUN_7101d99320;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d97570__7101d97570.c)  [cfg](../decompiled/FUN_7101d97570__7101d97570.mmd)
- **Clone hash:** `964ad64eddf75a27`

```c

void FUN_7101d97570(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar6;
  char *pcVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined2 *puVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  char cVar22;
  ushort uVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  undefined8 local_180;
// ... (1208 more lines)
```

## 3. `FUN_71018ebba0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ebba0`  (offset `0x18ebba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ebba0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3352 bytes / 162 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** set_parts_use_item;set_txt_item;nam_goods_spirit_all_shuffle;nam_goods_spirit_all_attacker;nam_goods_spirit_all_supporter;nam_goods_spirit_reloaded;nam_goods_spirit_retry_ticket;set_rep_item
- **Callees:** FUN_710177a5c0;FUN_71018ed9a0;FUN_7101d94b00;FUN_7101d98f30;FUN_7101d9a010;FUN_71024076d0;FUN_71024a6430;FUN_7103240590;FUN_71032673c0;FUN_7103267960;FUN_7103267ce0;FUN_7103313f20;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_71018ebba0__71018ebba0.c)  [cfg](../decompiled/FUN_71018ebba0__71018ebba0.mmd)
- **Clone hash:** `63a5f56056b49ea7`

```c

void FUN_71018ebba0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  long *********ppppppppplVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (516 more lines)
```

## 4. `FUN_71023e32a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023e32a0`  (offset `0x23e32a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023e32a0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, byte * * * * param_5, byte * * * * param_6, byte * * * * param_7, byte * * * * param_8)`
- **Size / BBs / Incoming:** 9116 bytes / 564 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** ticket_;lost_;%scapacity;%slottery_id
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710143ebe0;FUN_71017461f0;FUN_7101764000;FUN_7101845ea0;FUN_71023e5b70;FUN_71023e6470;FUN_71032631a0;FUN_7103264270;FUN_71032817a0;FUN_71032933e0;FUN_71037266d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_71023e32a0__71023e32a0.c)  [cfg](../decompiled/FUN_71023e32a0__71023e32a0.mmd)
- **Clone hash:** `8017ba7f446fa361`

```c

void FUN_71023e32a0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   byte ****param_5,byte ****param_6,byte ****param_7,byte ****param_8)

{
  int iVar1;
  long ***ppplVar2;
  int *piVar3;
  long *************ppppppppppppplVar4;
  uint uVar5;
  byte **ppbVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  long **************pppppppppppppplVar10;
  long *************__src;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long ***ppplVar16;
  long *************__dest;
  void *__dest_00;
  long ****pppplVar17;
  int iVar18;
  byte ****ppppbVar19;
  byte bVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  char *pcVar24;
  ulong uVar25;
  byte *pbVar26;
  long ************pppppppppppplVar27;
  long *plVar28;
  long ***ppplVar29;
  long lVar30;
  byte ****ppppbVar31;
  byte *pbVar32;
// ... (1830 more lines)
```

## 5. `FUN_7101b05440`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b05440`  (offset `0x1b05440`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b05440(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2920 bytes / 153 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** view_ticket;view_event;_%02d;text_reward;text_exp
- **Callees:** FUN_710062dc20;FUN_7101438690;FUN_7101b09e60;FUN_71024076d0;FUN_7103313f20;FUN_7103776640;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101b05440__7101b05440.c)  [cfg](../decompiled/FUN_7101b05440__7101b05440.mmd)
- **Clone hash:** `545df3f34cf91039`

```c

void FUN_7101b05440(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined **ppuVar9;
  char *pcVar10;
  long ****pppplVar11;
  uint uVar12;
  undefined8 uVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  int local_1b4;
  undefined8 local_1b0;
  undefined **local_170;
  ulong local_168;
  undefined **local_160;
  undefined **local_158 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
// ... (517 more lines)
```

## 6. `FUN_7101b11bd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b11bd0`  (offset `0x1b11bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b11bd0(long param_1, ulong * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10176 bytes / 411 bb / 7 incoming refs
- **Match values:** ticket
- **Strings touched:** music_pic_series;size_m;set_parts_text_scroll;prize_goods;set_parts_atr_class;hidden;bg_mii_item;set_txt_num;set_txt_num_sdw;bg_music;bgm_title_%s;nam_goods_%s;bg_spirits_item;bg_spirits_energy;num_hide;new_show;new_hide;set_parts_gold_sp;anim_00;prize_gold;bg_gold;bg_standard_ticket;prize_sp;bg_sp;volume_l;volume_s;bg_skill_ball;set_parts_%02d;mnu_reward_item_n;num_show;volume_m;prize_spirit;...
- **Callers:** FUN_7101b02410;FUN_7101b16690
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101b11920;FUN_7101b14390;FUN_71032570e0;FUN_71032575c0;FUN_710327cd40;FUN_710327d3b0;FUN_710327d930;FUN_71032817a0;FUN_7103284890;FUN_7103284fe0;FUN_71032853d0;FUN_71032888e0;FUN_7103289030;FUN_7103289420;...
- **Files:** [decomp](../decompiled/FUN_7101b11bd0__7101b11bd0.c)  [cfg](../decompiled/FUN_7101b11bd0__7101b11bd0.mmd)
- **Clone hash:** `6d89b1142cfaea01`

```c

void FUN_7101b11bd0(long param_1,ulong *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined2 *puVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  undefined6 uVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 uVar16;
  char *pcVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  int iVar22;
  long *plVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  int iVar34;
  long ********apppppppplStack_250 [9];
// ... (1680 more lines)
```

## 7. `FUN_7101ad3b90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ad3b90`  (offset `0x1ad3b90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ad3b90(long param_1, ulong * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7388 bytes / 342 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** anim_get_default;set_parts_item;set_txt_category;have_counter;category_mii_hat;category_music;category_mii_body;miitype_fight_equip_on;category_spirit;set_rep_series;set_rep_series_sdw;set_parts_music;set_txt_icon;set_txt_help;music_newarrange;miitype_fight_equip_off;miitype_sword_equip_off;miitype_sword_equip_on;miitype_gun_equip_on;miitype_gun_equip_off;music_arrange;music_noarrange;category_energy;category_ticket;category_item;set_txt_other_caption;set_parts_param_00;set_parts_param_01;circle_series;set_parts_power;set_parts_pre_super;set_parts_super;...
- **Callers:** FUN_7101ad6b90
- **Callees:** FUN_710062dc20;FUN_7101780950;FUN_7101ad36e0;FUN_71025c7300;FUN_71025c7b60;FUN_71025c8c30;FUN_71025c8e40;FUN_71025c9ac0;FUN_71025ca840;FUN_71025cb8d0;FUN_710323f600;FUN_710323f760;FUN_71032575c0;FUN_710325d9e0;FUN_710325dd40;FUN_710327c2f0;...
- **Files:** [decomp](../decompiled/FUN_7101ad3b90__7101ad3b90.c)  [cfg](../decompiled/FUN_7101ad3b90__7101ad3b90.mmd)
- **Clone hash:** `cd51e20f65060320`

```c

void FUN_7101ad3b90(long param_1,ulong *param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  uint uVar21;
  ulong uVar22;
  undefined *puVar23;
  byte *pbVar24;
  uint uVar25;
  ulong uVar26;
  char cVar27;
  long lVar28;
  undefined **ppuVar29;
  byte ****ppppbVar30;
  undefined8 *puVar31;
  byte bVar32;
  uint uVar33;
// ... (1236 more lines)
```

## 8. `FUN_7101d28af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d28af0`  (offset `0x1d28af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d28af0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * * * * * * * * * * param_5, long * * * * * * * * * param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 8028 bytes / 364 bb / 1 incoming refs
- **Match values:** ticket
- **Strings touched:** anim_get_default;set_parts_item;set_txt_category;have_counter;category_sp;category_spirit;category_gold;category_energy;set_parts_param_00;set_parts_param_01;set_rep_series;set_rep_series_sdw;circle_series;set_parts_power;set_parts_pre_super;set_parts_super;set_parts_icon_super;spirit_none;spirit_supporter;set_parts_skill;set_txt_help;set_parts_text_scroll;set_txt_mask;set_txt_main;spirit_fighter;set_txt_fighter;category_ticket;spirit_super;category_item;set_txt_other_caption;spirit_pre_super;spirit_normal;...
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101d27300;FUN_7101d2aaf0;FUN_7101d2ad80;FUN_7101d2aec0;FUN_7101d2b290;FUN_71025c7300;FUN_71025c7b60;FUN_71025c8c30;FUN_71025c8e40;FUN_71025c9ac0;FUN_71025ca840;FUN_71025cb8d0;FUN_710323f600;...
- **Files:** [decomp](../decompiled/FUN_7101d28af0__7101d28af0.c)  [cfg](../decompiled/FUN_7101d28af0__7101d28af0.mmd)
- **Clone hash:** `64df3b4fdec4a415`

```c

void FUN_7101d28af0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long *************param_5,long *********param_6,ulong param_7,ulong param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  undefined8 uVar21;
  long *********ppppppppplVar22;
  byte ****ppppbVar23;
  long *********ppppppppplVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  byte *pbVar28;
  uint uVar29;
  ulong uVar30;
// ... (1300 more lines)
```

