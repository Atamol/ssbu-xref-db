# invalid (funcs=48, hits=115)

Top 50 functions by hit count

## 1. `FUN_710392a220`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a220`  (offset `0x392a220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710392a220(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3936 bytes / 309 bb / 1 incoming refs
- **Match values:** Invalid
- **Strings touched:** JE_MALLOC_CONF;abort;false;Invalid conf value;abort_conf;NODE_PRE_REFRACT_BLEND;metadata_thp;retain;Error setting dss;narenas;Out-of-range conf value;select_item;dirty_decay_ms;muzzy_decay_ms;stats_print;stats_print_opts;tcache;lg_extent_max_active_fit;lg_tcache_max;percpu_arena;background_thread;chara/chara_4/chara_4_;max_background_threads;No THP support;Invalid conf pair
- **Callers:** FUN_710392a070
- **Callees:** FUN_710392b530;FUN_710392b540;FUN_710392b730;FUN_710392b790;FUN_710392b7c0;FUN_710392b7e0;FUN_710392b900;FUN_710392b920;FUN_7103946590;FUN_7103954660;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710392a220__710392a220.c)  [cfg](../decompiled/FUN_710392a220__710392a220.mmd)
- **Clone hash:** `72ca6809948cbe2c`

```c

void FUN_710392a220(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
// ... (583 more lines)
```

## 2. `FUN_71020fbb90`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** INVALID;Invalid
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

## 3. `FUN_7100028420`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100028420`  (offset `0x28420`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100028420(long * param_1, int param_2)`
- **Size / BBs / Incoming:** 7628 bytes / 452 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** plate_side;invalid block type;invalid code lengths set;invalid literal/lengths set;NODE_PRE_REFRACT_BLEND;invalid distances set;incorrect data check;incorrect length check;invalid distance too far back;invalid distance code;invalid literal/length code;invalid code -- missing end-of-block;invalid bit length repeat;too many length or distance symbols;invalid stored block lengths;header crc mismatch;unknown header flags set;unknown compression method;incorrect header check;invalid window size
- **Callers:** FUN_7100012ef0;FUN_71000c04e0
- **Callees:** Libz_SigloMiddlewareInfo;FUN_710002a6c0;FUN_710002a9c0;FUN_710002a9d0;FUN_710002b180;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100028420__7100028420.c)  [cfg](../decompiled/FUN_7100028420__7100028420.mmd)
- **Clone hash:** `ce1835ef9754c84e`

```c

int FUN_7100028420(long *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *__dest;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 *puVar19;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined2 uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
// ... (1612 more lines)
```

## 4. `FUN_7101f89310`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** INVALID
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

## 5. `FUN_7101fea810`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** invalid
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

## 6. `FUN_7103918310`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103918310`  (offset `0x3918310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103918310(long param_1, undefined8 param_2, char * param_3, char * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1912 bytes / 94 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** string;number;no value;number has no integer representation;string contains zeros;\%03d;invalid option '%%%c' to 'format';invalid format (repeated flags);invalid format (width or precision too long)
- **Callees:** FUN_71038f41a0;FUN_71038f4440;FUN_71038f45b0;FUN_71038f4730;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038f7870;FUN_71038f7b00;FUN_71038f7bd0;FUN_71038f8c50;FUN_71038fec40;FUN_71039080b0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_7103918310__7103918310.c)  [cfg](../decompiled/FUN_7103918310__7103918310.mmd)
- **Clone hash:** `1685ef8b7ed073de`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7103918310(long param_1,undefined8 param_2,char *param_3,char *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  char *__s;
  size_t sVar7;
  char *pcVar8;
  ulong *__n;
  void *__dest;
  size_t sVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  char *pcVar11;
  float *pfVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  float *pfVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  float fVar23;
  undefined1 local_20d0 [8];
  undefined8 local_20c8;
  undefined1 *local_20a8;
  char *local_20a0;
// ... (317 more lines)
```

## 7. `FUN_710001f340`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** Invalid
- **Strings touched:** Illegal characters found in URL;select_item;Bad URL, colon is first character;file:;%*15[^
/:]:%[^
];%[^
];localhost/;NODE_PRE_REFRACT_BLEND;127.0.0.1/;File drive letters are only accepted in MSDOS/Windows.;%15[^
/:]:%3[/]%[^
/?#]%[^
];Bad URL;%[^
/?#]%[^
];Unwillingly accepted illegal URL using %d slash%s!
;%s://%s%s;Invalid file://hostname/, expected localhost or 127.0.0.1 or none;dys_yoga03_l_03_set;DICT.;LDAP.;IMAP.;SMTP.;Rebuilt URL to: %s
;Protocol "%s" not supported or disabled in libcurl;<url> malformed;plate_side;Please URL encode %% as %%25, see RFC 6874.
;chara/chara_4/chara_4_;Invalid IPv6 address format
;%s://%s;Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.
;memory shortage;no_proxy;...
- **Callers:** FUN_710001f290
- **Callees:** FUN_7100002af0;FUN_7100002bd0;FUN_7100004200;FUN_7100004360;FUN_7100004400;FUN_7100004690;FUN_71000060b0;FUN_71000067e0;FUN_71000068f0;FUN_7100007ef0;FUN_7100007fd0;FUN_7100008270;FUN_71000093f0;FUN_710000bbe0;FUN_710000bbf0;FUN_710000c980;...
- **Files:** [decomp](../decompiled/FUN_710001f340__710001f340.c)  [cfg](../decompiled/FUN_710001f340__710001f340.mmd)
- **Clone hash:** `49a38eb5ed8786c3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
// ... (2158 more lines)
```

## 8. `FUN_710002a9d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710002a9d0`  (offset `0x2a9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710002a9d0(long * param_1, int param_2)`
- **Size / BBs / Incoming:** 1956 bytes / 92 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** invalid literal/length code;invalid distance too far back;invalid distance code
- **Callers:** FUN_7100028420
- **Files:** [decomp](../decompiled/FUN_710002a9d0__710002a9d0.c)  [cfg](../decompiled/FUN_710002a9d0__710002a9d0.mmd)
- **Clone hash:** `f7bda313dbf4cac9`

```c

void FUN_710002a9d0(long *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined4 uVar27;
  char *pcVar28;
  ushort uVar29;
  ulong uVar30;
  undefined1 *puVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
// ... (345 more lines)
```

## 9. `FUN_71037f8180`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Invalid
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_71037f8180__71037f8180.c)  [cfg](../decompiled/FUN_71037f8180__71037f8180.mmd)
- **Clone hash:** `5e5bcf3c984ab2cc`

```c

void FUN_71037f8180(undefined8 param_1,undefined *param_2)

{
  DAT_71059408e8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71059408f0 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71059408f8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_7105940900 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_7105940908 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_7105940910 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_7105940918 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_7105940920 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_7105940928 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_7105940930 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_7105940938 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_7105940940 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_7105940948 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_7105940950 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_7105940958 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_7105940960 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_7105940968 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_7105940970 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_7105940978 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_7105940980 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_7105940988 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_7105940990 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_7105940998 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71059409a0 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71059409a8 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71059409b0 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71059409b8 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71059409c0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71059409c8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71059409d0 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71059409d8 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71059409e0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71059409e8 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71059409f0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71059409f8 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_7105940a00 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 10. `FUN_7100033a40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Invalid
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_7100033a40__7100033a40.c)  [cfg](../decompiled/FUN_7100033a40__7100033a40.mmd)
- **Clone hash:** `f1d8c7f827926111`

```c

void FUN_7100033a40(undefined8 param_1,undefined *param_2)

{
  DAT_71052aa310 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71052aa318 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71052aa320 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_71052aa328 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_71052aa330 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_71052aa338 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_71052aa340 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_71052aa348 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_71052aa350 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_71052aa358 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_71052aa360 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_71052aa368 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_71052aa370 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_71052aa378 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_71052aa380 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_71052aa388 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_71052aa390 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_71052aa398 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_71052aa3a0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_71052aa3a8 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_71052aa3b0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_71052aa3b8 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_71052aa3c0 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71052aa3c8 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71052aa3d0 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71052aa3d8 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71052aa3e0 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71052aa3e8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71052aa3f0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71052aa3f8 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71052aa400 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71052aa408 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71052aa410 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71052aa418 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71052aa420 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_71052aa428 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 11. `FUN_71021ec200`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES;FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPD_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_GUNMAN_OK;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CLAY;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_GUNMAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_REQUEST_SPECIAL_HI_CANCEL;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_ENABLE_SPECIAL_HI_CANCEL;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CANCELED;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CLAY_HIT;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Z;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SMASH_S_CHARGE_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DUCKHUNT_TURN_NEUTRAL;FIGHTER_DUCKHUNT_TURN_FRONT;FIGHTER_DUCKHUNT_TURN_BACK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021ec200__71021ec200.c)  [cfg](../decompiled/FUN_71021ec200__71021ec200.mmd)
- **Clone hash:** `e53f121443819b63`

```c

void FUN_71021ec200(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
// ... (1269 more lines)
```

## 12. `FUN_710391e3e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391e3e0`  (offset `0x391e3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710391e3e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1064 bytes / 52 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** number has no integer representation;string;number;invalid value (%s) at index %d in table for 'concat';no value
- **Callees:** FUN_71038f45b0;FUN_71038f5170;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038f7870;FUN_71038f7b00;FUN_71038f7bd0;FUN_71038f8ab0;FUN_71038fec40;FUN_7103907f00;FUN_71039080b0;FUN_710391f820;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_710391e3e0__710391e3e0.c)  [cfg](../decompiled/FUN_710391e3e0__710391e3e0.mmd)
- **Clone hash:** `c858dd9aa23ff5e1`

```c

undefined8
FUN_710391e3e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  byte *pbVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined *puVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  undefined1 *__src;
  undefined1 *local_2078;
  undefined8 local_2070;
  long local_2068;
  long lStack_2060;
  undefined1 auStack_2058 [8196];
  int local_54;
  
  FUN_710391f820(param_1,5,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar3 = (undefined *)FUN_71038f8ab0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
  pfVar7 = *(float **)(param_1 + 0x10);
  pfVar11 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
  if ((pfVar11 < pfVar7 && pfVar11 != (float *)&DAT_7104862960) &&
     (uVar1 = *(uint *)(**(long **)(param_1 + 0x20) + 0x28), (uVar1 & 0xf) != 0)) {
    uVar1 = uVar1 & 0xf;
    if (uVar1 != 4) {
      if (uVar1 != 3) {
        FUN_71038f74d0(param_1,2,"string",param_4,param_5,param_6,param_7,param_8);
        uVar12 = 0;
// ... (140 more lines)
```

## 13. `FUN_7102072870`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102072870`  (offset `0x2072870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102072870(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 4 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** SearchModule;clear_all;clear;set_offset;set_offset2;active_part_num;is_search;get_size;set_size;set_target_opponent;gauge_parts_on;set_pos;is_inflict;set_check_interval;set_remove_log_attack;remove_log_attack;sleep;relocate;invalid_attack_mask;set_invalid_attack_mask;set_sync_situation;set_sync_lr;situation;enable_safe_pos
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102072870__7102072870.c)  [cfg](../decompiled/FUN_7102072870__7102072870.mmd)
- **Clone hash:** `45bdf66bb376a415`

```c

void FUN_7102072870(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SearchModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7102070450,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7102070500,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset",(long ****)FUN_7102070630,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset2",(long ****)FUN_71020709b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"active_part_num",(long ****)FUN_7102070d30,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_search",(long ****)FUN_7102070e10,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_size",(long ****)FUN_7102070f60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_71020710b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_target_opponent",(long ****)FUN_71020712b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pos",(long ****)FUN_7102071430,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_inflict",(long ****)FUN_71020719b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_check_interval",(long ****)FUN_7102071a90,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_remove_log_attack",(long ****)FUN_7102071bc0,ppppbVar1,in_x4
// ... (25 more lines)
```

## 14. `FUN_710391c4f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391c4f0`  (offset `0x391c4f0`)
- **Namespace:** `Global`
- **Signature:** `byte * __cdecl FUN_710391c4f0(undefined8 * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2412 bytes / 197 bb / 10 incoming refs
- **Match values:** invalid
- **Strings touched:** malformed pattern (missing ']');missing '[' after '%%f' in pattern;invalid pattern capture;pattern too complex;malformed pattern (ends with '%%');malformed pattern (missing arguments to '%%b');invalid capture index %%%d;too many captures
- **Callers:** FUN_7103918da0;FUN_710391bdd0;FUN_710391c4f0;FUN_710391d020
- **Callees:** FUN_71038f6c50;FUN_710391c4f0;FUN_710391cf20;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_710391c4f0__710391c4f0.c)  [cfg](../decompiled/FUN_710391c4f0__710391c4f0.mmd)
- **Clone hash:** `184218569a2164b3`

```c

byte * FUN_710391c4f0(undefined8 *param_1,byte *param_2,byte *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  iVar6 = *(int *)(param_1 + 5);
  *(int *)(param_1 + 5) = iVar6 + -1;
  pbVar15 = param_3;
  if (iVar6 == 0) {
LAB_710391ce0c:
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1[3],"pattern too complex",param_3,param_4,param_5,param_6,param_7,param_8)
    ;
  }
LAB_710391c53c:
  do {
    pbVar8 = pbVar15;
    pbVar11 = param_2;
    param_2 = pbVar11 + 1;
LAB_710391c550:
// ... (409 more lines)
```

## 15. `FUN_710390efb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390efb0`  (offset `0x390efb0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710390efb0(uint * param_1, float * param_2)`
- **Size / BBs / Incoming:** 11036 bytes / 585 bb / 73 incoming refs
- **Match values:** invalid
- **Strings touched:** plate_side;unfinished string;lexical element too long;UTF-8 value too large;hexadecimal digit expected;invalid long string delimiter;decimal escape too large;invalid escape sequence;missing '{';dys_yoga03_l_03_set;missing '}'
- **Callers:** FUN_71039086e0;FUN_7103908c40;FUN_710390b320;FUN_710390b770;FUN_710390c400;FUN_710390cb70;FUN_710390ccd0;FUN_710390d2e0;FUN_710390d5f0;FUN_710390db70;FUN_710390df10;FUN_710390e2b0;FUN_710390e8e0
- **Callees:** FUN_71038fb3c0;FUN_71038fec40;FUN_71039004f0;FUN_710390eb90;FUN_7103911ad0;FUN_7103911c00;FUN_7103911ed0;FUN_7103912660;FUN_7103917660;FUN_710391d940;FUN_710391dde0
- **Files:** [decomp](../decompiled/FUN_710390efb0__710390efb0.c)  [cfg](../decompiled/FUN_710390efb0__710390efb0.mmd)
- **Clone hash:** `7891232fc015bb44`

```c

ulong FUN_710390efb0(uint *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  undefined1 uVar24;
  long local_90;
  long local_88;
  byte abStack_70 [7];
  byte local_69;
  long local_68;
  
  puVar10 = param_1 + 0x12;
  puVar19 = param_1 + 0x10;
  *(undefined8 *)(*(long *)puVar10 + 8) = 0;
LAB_710390f020:
  uVar23 = *param_1;
  uVar14 = 0x121;
// ... (2076 more lines)
```

## 16. `FUN_7103918da0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103918da0`  (offset `0x3918da0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103918da0(long param_1, undefined8 param_2, char * param_3, byte * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2488 bytes / 131 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** string;number has no integer representation;chara/chara_4/chara_4_;string/function/table expected;number;select_item;invalid use of '%c' in replacement string;stack overflow (%s);too many captures;C stack overflow;unfinished capture;no value;invalid replacement value (a %s)
- **Callees:** FUN_71038f45b0;FUN_71038f4a00;FUN_71038f4fc0;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038f7870;FUN_71038f7b00;FUN_71038f7bd0;FUN_71038f8c50;FUN_71038fae60;FUN_71038fb3c0;FUN_71038fb4b0;FUN_71038fb8d0;FUN_71038fec40;FUN_7103907f00;...
- **Files:** [decomp](../decompiled/FUN_7103918da0__7103918da0.c)  [cfg](../decompiled/FUN_7103918da0__7103918da0.mmd)
- **Clone hash:** `29954cc6502e7c96`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7103918da0(long param_1,undefined8 param_2,char *param_3,byte *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar15;
  undefined8 extraout_x1_01;
  byte *pbVar16;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar17;
  float *pfVar18;
  long lVar19;
  undefined8 *puVar20;
  float *pfVar21;
  ulong uVar22;
  undefined1 uVar23;
  float *pfVar24;
  long lVar25;
  undefined8 *puVar26;
  ulong uVar27;
// ... (424 more lines)
```

## 17. `FUN_710382d7d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710382d7d0`  (offset `0x382d7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710382d7d0(ulong * param_1, ulong * param_2, long * * * * param_3, byte * * * * * * * * * * param_4, long * * * * param_5, byte * * * * * * * * * * param_6, byte * * * * * * * * * * param_7, byte * * * * * * * * * * param_8)`
- **Size / BBs / Incoming:** 16120 bytes / 1205 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** NODE_PRE_REFRACT_BLEND;invalid
- **Callers:** FUN_7103821bf0
- **Callees:** FUN_71036edb30;FUN_71037b2bc0;FUN_71037cfe00;FUN_7103828690;FUN_71038316d0;FUN_7103831cd0;FUN_7103832300;FUN_7103832a10;FUN_7103833120;FUN_7103833810;FUN_710385c6d0;FUN_710385c840;FUN_710385ca30;FUN_710386a1c0;FUN_710386cc20;FUN_710386d3b0;...
- **Files:** [decomp](../decompiled/FUN_710382d7d0__710382d7d0.c)  [cfg](../decompiled/FUN_710382d7d0__710382d7d0.mmd)
- **Clone hash:** `9081e3dbb0659476`

```c

void FUN_710382d7d0(ulong *param_1,ulong *param_2,long ****param_3,byte **********param_4,
                   long ****param_5,byte **********param_6,byte **********param_7,
                   byte **********param_8)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined7 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  size_t sVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  ulong *puVar11;
  byte ************ppppppppppppbVar12;
  size_t sVar13;
  byte ***********pppppppppppbVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar16;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  byte ************ppppppppppppbVar17;
  byte ***********extraout_x1_11;
  byte ***********extraout_x1_12;
  byte ***********extraout_x1_13;
  byte ***********extraout_x1_14;
  byte ***********pppppppppppbVar18;
// ... (2711 more lines)
```

## 18. `FUN_710392e1f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392e1f0`  (offset `0x392e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710392e1f0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 156 bytes / 5 bb / 3210 incoming refs
- **Match values:** invalid
- **Strings touched:** <jemalloc>: Error allocating aligned memory: out of memory
;<jemalloc>: Error allocating aligned memory: invalid alignment

- **Callers:** FUN_71002c4f60;FUN_71002c51f0;FUN_7100440e30;FUN_7100441dd0;FUN_7100443610;FUN_7100445740;FUN_7100445b40;FUN_7100446740;FUN_71004fad80;FUN_710055c860;FUN_710055cae0;FUN_710055d080;FUN_710133fba0;FUN_7101cc72d0;FUN_71022b7100;FUN_710353ad40;...
- **Callees:** FUN_710392cea0;FUN_710392cf00;FUN_710392cf50
- **Files:** [decomp](../decompiled/FUN_710392e1f0__710392e1f0.c)  [cfg](../decompiled/FUN_710392e1f0__710392e1f0.mmd)
- **Clone hash:** `13275529d9ab4b9e`

```c

undefined4
FUN_710392e1f0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  long ****local_78;
  undefined8 local_70;
  byte abStack_58 [8];
  undefined8 local_50;
  char *local_48;
  char *local_40;
  long ****local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_58);
  FUN_710392cf00(&local_88);
  abStack_58[1] = 1;
  local_50 = 8;
  local_48 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_40 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_88 = local_18;
  local_80 = 1;
  local_78 = local_28;
  local_70 = local_20;
  uVar1 = FUN_710392cf50(abStack_58,&local_88,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}


```

## 19. `FUN_71019b8840`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b8840`  (offset `0x19b8840`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b8840(ulong param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 120 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** set_txt_string;mnu_amiibo_journey_stop_nfc_touch;pop_amiibo_read_nfc_invalid;mnu_amiibo_writing_controller_connect;mnu_amiibo_journey_start_nfc_touch;mnu_amiibo_journey_save_nfc_touch;mnu_amiibo_writing_howto;set_parts_controller_00;set_parts_controller_01;amiibo_set;controller_single;controller_double;indicator_off;indicator_%d
- **Callees:** FUN_71003a4ca0;FUN_71003cb050;FUN_71014bfc60;FUN_710175dfc0;FUN_7101990680;FUN_71019bc500;FUN_71019bc520;FUN_71019bc530;FUN_710339d9f0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;...
- **Files:** [decomp](../decompiled/FUN_71019b8840__71019b8840.c)  [cfg](../decompiled/FUN_71019b8840__71019b8840.mmd)
- **Clone hash:** `fd86a14bacdc079f`

```c

void FUN_71019b8840(ulong param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  ulong local_118;
  long *local_110;
  uint local_e0 [2];
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  uint *local_c0;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
// ... (350 more lines)
```

## 20. `FUN_710000fa20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fa20`  (offset `0xfa20`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fa20(long param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 272 bytes / 8 bb / 1 incoming refs
- **Match values:** Invalid
- **Strings touched:** Invalid TIMEVALUE;%s: %s, %02d %s %4d %02d:%02d:%02d GMT

- **Callers:** FUN_710000c9d0
- **Callees:** FUN_7100007ef0;FUN_710000f600;FUN_7100014040;FUN_7100016040;<EXTERNAL>::strlen
- **Files:** [decomp](../decompiled/FUN_710000fa20__710000fa20.c)  [cfg](../decompiled/FUN_710000fa20__710000fa20.mmd)
- **Clone hash:** `0add100f7dd9bcc9`

```c

ulong FUN_710000fa20(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  char acStack_b8 [80];
  undefined8 local_68;
  uint local_5c;
  int iStack_58;
  int local_54;
  int local_50;
  
  if (*(int *)(param_1 + 0x470) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_7100014040(*(time_t *)(param_1 + 0x478),&local_68);
    if (uVar2 == 0) {
      uVar2 = *(int *)(param_1 + 0x470) - 1;
      if (uVar2 < 3) {
        iVar1 = 6;
        if (local_50 != 0) {
          iVar1 = local_50 + -1;
        }
        FUN_7100007ef0(acStack_b8,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                       (&PTR_s_If_Modified_Since_7104f171e0)[(int)uVar2],
                       (&PTR_DAT_7104f17290)[iVar1],(ulong)local_5c,(&PTR_DAT_7104f172c8)[iStack_58]
                       ,(ulong)(local_54 + 0x76c));
        sVar3 = strlen(acStack_b8);
        uVar4 = FUN_710000f600(param_2,acStack_b8,sVar3);
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        uVar4 = 0x2b;
      }
    }
// ... (9 more lines)
```

## 21. `FUN_7100023290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** invalid
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

## 22. `FUN_710224bda0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710224bda0`  (offset `0x224bda0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710224bda0(long param_1)`
- **Size / BBs / Incoming:** 552 bytes / 4 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** shiokarazu;can_exist;get_warp_pos;invalid_bgm_handle;get_bgm_kind;start_bgm;end_bgm;get_shrink_finish_frame;set_change_fighter_restart_position;cancel_change_fighter_restart_position;get_camera_range;get_dead_range;get_shrinked_camera_range;get_shrinked_dead_range;set_camera_range;set_dead_range;start_zoom_out;revert_camera;get_slow_rate;set_assist_team_no;set_effect_rate;find_ptrainer
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710224bda0__710224bda0.c)  [cfg](../decompiled/FUN_710224bda0__710224bda0.mmd)
- **Clone hash:** `c9df2718338ea83e`

```c

void FUN_710224bda0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"shiokarazu",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"can_exist",(long ****)FUN_7102249b50,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_warp_pos",(long ****)FUN_7102249b90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"invalid_bgm_handle",(long ****)FUN_7102249c00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_bgm_kind",(long ****)FUN_7102249c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_bgm",(long ****)FUN_7102249cb0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_bgm",(long ****)FUN_7102249db0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrink_finish_frame",(long ****)FUN_7102249e90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_change_fighter_restart_position",(long ****)FUN_710224a640,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cancel_change_fighter_restart_position",
                 (long ****)FUN_710224a900,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_camera_range",(long ****)FUN_710224a940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_dead_range",(long ****)FUN_710224a9c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_camera_range",(long ****)FUN_710224aa40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_shrinked_dead_range",(long ****)FUN_710224aac0,ppppbVar1,
// ... (21 more lines)
```

## 23. `FUN_710392b900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392b900`  (offset `0x392b900`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710392b900(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 32 bytes / 3 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** <jemalloc>: Abort (abort_conf:true) on invalid conf value (see above).

- **Callers:** FUN_710392a220
- **Callees:** FUN_7103957550;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710392b900__710392b900.c)  [cfg](../decompiled/FUN_710392b900__710392b900.mmd)
- **Clone hash:** `8c953ad4cea37758`

```c

void FUN_710392b900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_7103957550((byte *)"<jemalloc>: Abort (abort_conf:true) on invalid conf value (see above).\n",
                 param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Subroutine does not return */
  abort();
}


```

## 24. `FUN_710391fa00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391fa00`  (offset `0x391fa00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710391fa00(long param_1, uint param_2, uint param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 976 bytes / 38 bb / 3 incoming refs
- **Match values:** invalid
- **Strings touched:** invalid order function for sorting
- **Callers:** FUN_710391f690;FUN_710391fa00
- **Callees:** FUN_71038f5170;FUN_71038f5730;FUN_71038f6c50;FUN_710391fa00;FUN_710391fdd0;<EXTERNAL>::clock;<EXTERNAL>::time
- **Files:** [decomp](../decompiled/FUN_710391fa00__710391fa00.c)  [cfg](../decompiled/FUN_710391fa00__710391fa00.mmd)
- **Clone hash:** `d6153b298dfbce2a`

```c

void FUN_710391fa00(long param_1,uint param_2,uint param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  clock_t cVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  
  if (param_3 <= param_2) {
    return;
  }
  uVar13 = param_4 & 0xffffffff;
  uVar10 = (ulong)param_3;
  uVar12 = (ulong)param_2;
LAB_710391fa38:
  FUN_71038f5170(param_1,1,uVar12);
  FUN_71038f5170(param_1,1,uVar10);
  uVar3 = FUN_710391fdd0(param_1,-1,-2);
  if ((int)uVar3 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  else {
    FUN_71038f5730(param_1,1,uVar12);
// ... (122 more lines)
```

## 25. `FUN_7103922b00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103922b00`  (offset `0x3922b00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103922b00(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 548 bytes / 31 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** string;invalid UTF-8 code
- **Callees:** FUN_71038f45b0;FUN_71038f6c50;FUN_71038f74d0;FUN_71038fec40;FUN_71039080b0
- **Files:** [decomp](../decompiled/FUN_7103922b00__7103922b00.c)  [cfg](../decompiled/FUN_7103922b00__7103922b00.mmd)
- **Clone hash:** `3369e61b2f2ad430`

```c

/* WARNING: Removing unreachable block (ram,0x007103922c30) */

undefined8
FUN_7103922b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  ulong uVar15;
  
  pfVar8 = *(float **)(param_1 + 0x10);
  pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar14 = pfVar5;
  if (pfVar8 <= pfVar5) {
    pfVar14 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar14[2] & 0xf) == 4) {
LAB_7103922b88:
    lVar6 = *(long *)pfVar14;
    if (*(char *)(lVar6 + 8) == '\x04') {
      uVar15 = (ulong)*(byte *)(lVar6 + 0xb);
      lVar6 = lVar6 + 0x18;
    }
    else {
      uVar15 = *(ulong *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x18;
// ... (83 more lines)
```

## 26. `FUN_7100022610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** Invalid
- **Strings touched:** https;select_item;Unsupported proxy '%s', libcurl is built without the HTTPS-proxy support.;socks5h;socks5;socks4a;socks4;socks;http:;chara/chara_4/chara_4_;Invalid IPv6 address format
;No valid port number in proxy string (%s)
;plate_side;Please URL encode %% as %%25, see RFC 6874.
;Unsupported proxy scheme for '%s'
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100015de0;FUN_7100016040;FUN_7100017490;FUN_7100022250;FUN_7100024310;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::strstr;<EXTERNAL>::isxdigit
- **Files:** [decomp](../decompiled/FUN_7100022610__7100022610.c)  [cfg](../decompiled/FUN_7100022610__7100022610.mmd)
- **Clone hash:** `07ca499bd7ac8eaa`

```c

int FUN_7100022610(long param_1,long param_2,byte **param_3,byte **param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  byte **ppbVar13;
  byte **__s;
  byte **ppbVar14;
  byte **__s_00;
  uint uVar15;
  char *local_68;
  byte *local_60;
  byte *local_58;
  
  iVar7 = (int)param_4;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  ppbVar13 = param_3;
  pcVar9 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar9 == (char *)0x0) {
LAB_7100022794:
    if (iVar7 - 4U < 4) {
      pcVar9 = strchr((char *)__s_00,0x40);
joined_r0x0071000227b0:
      bVar6 = true;
      iVar8 = iVar7;
    }
// ... (223 more lines)
```

## 27. `FUN_71038f6640`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038f6640`  (offset `0x38f6640`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71038f6640(long param_1, int param_2)`
- **Size / BBs / Incoming:** 600 bytes / 35 bb / 5 incoming refs
- **Match values:** invalid
- **Strings touched:** invalid key to 'next'
- **Callers:** FUN_71037271e0;FUN_71038f7010;FUN_7103901820
- **Callees:** FUN_71038fae60;FUN_710391d330;FUN_71039239b0
- **Files:** [decomp](../decompiled/FUN_71038f6640__71038f6640.c)  [cfg](../decompiled/FUN_71038f6640__71038f6640.mmd)
- **Clone hash:** `c94bbb0588e507cb`

```c

undefined8 FUN_71038f6640(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar13 = (long *)**(long **)(param_1 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar13[1] != 0x16) &&
           (lVar14 = *plVar13, plVar5 = &DAT_7104862960,
           -0xf4628 - param_2 <= (int)(uint)*(byte *)(lVar14 + 10))) {
          plVar5 = (long *)(lVar14 + (long)(-0xf4628 - param_2) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
// ... (81 more lines)
```

## 28. `FUN_7103921db0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103921db0`  (offset `0x3921db0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7103921db0(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1316 bytes / 77 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** string;out of range;number has no integer representation;number;invalid UTF-8 code;string slice too long;stack overflow (%s)
- **Callees:** FUN_71038f45b0;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038fb4b0;FUN_71038fec40;FUN_7103907f00;FUN_71039080b0
- **Files:** [decomp](../decompiled/FUN_7103921db0__7103921db0.c)  [cfg](../decompiled/FUN_7103921db0__7103921db0.mmd)
- **Clone hash:** `094ffb7417378ec6`

```c

/* WARNING: Removing unreachable block (ram,0x007103922114) */

int FUN_7103921db0(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float local_60 [4];
  int local_44;
  
  pfVar7 = local_60;
  pfVar12 = *(float **)(param_1 + 0x10);
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar19 = pfVar8;
  if (pfVar12 <= pfVar8) {
    pfVar19 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar19[2] & 0xf) == 4) {
// ... (190 more lines)
```

## 29. `FUN_71038288b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038288b0`  (offset `0x38288b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038288b0(ulong * param_1, ulong * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * * * * * * * param_6, long * * * * * param_7, byte * * * * * * * * * * param_8)`
- **Size / BBs / Incoming:** 20248 bytes / 1447 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** NODE_PRE_REFRACT_BLEND;invalid
- **Callers:** FUN_7103821bf0
- **Callees:** FUN_7103558e00;FUN_710365e7c0;FUN_710365ed00;FUN_710365ed60;FUN_710365f2e0;FUN_71037b2bc0;FUN_71037cfe00;FUN_7103817b40;FUN_710381d230;FUN_7103828690;FUN_7103833dd0;FUN_7103834400;FUN_7103834450;FUN_7103834a60;FUN_7103834ac0;FUN_71038350d0;...
- **Files:** [decomp](../decompiled/FUN_71038288b0__71038288b0.c)  [cfg](../decompiled/FUN_71038288b0__71038288b0.mmd)
- **Clone hash:** `b052c083095befb6`

```c

void FUN_71038288b0(ulong *param_1,ulong *param_2,long ****param_3,byte ****param_4,long ****param_5
                   ,byte **********param_6,long *****param_7,byte **********param_8)

{
  long *****ppppplVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  byte ***********pppppppppppbVar7;
  bool bVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong *puVar12;
  size_t sVar13;
  long *****ppppplVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
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
// ... (3107 more lines)
```

## 30. `FUN_7100275400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100275400`  (offset `0x275400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100275400(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 392 bytes / 15 bb / 7 incoming refs
- **Match values:** invalid
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_7100274fb0;FUN_7100275210;FUN_7100275590;FUN_7100275a50;FUN_7100275d90;FUN_7100275ee0
- **Callees:** FUN_71001b1300;FUN_71001b2f70;FUN_71001b3cb0;FUN_71001cd7d0;FUN_71001cd870;FUN_71001d0a10;FUN_71001d0f00;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100275400__7100275400.c)  [cfg](../decompiled/FUN_7100275400__7100275400.mmd)
- **Clone hash:** `599481263e68427e`

```c

void FUN_7100275400(long param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  int iVar4;
  code *pcVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa8));
  if (plVar3 == (long *)0x0) {
    FUN_71001d0a10((long *)(param_1 + 0xf8));
  }
  else {
    pcVar5 = FUN_710170d030;
    if (*param_2 < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 == (code *)0x0) {
      local_48 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)(param_2 + 2);
      uStack_38 = *(undefined8 *)(param_2 + 4);
      iVar4 = 3;
// ... (23 more lines)
```

## 31. `FUN_710381efc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710381efc0`  (offset `0x381efc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710381efc0(ulong * param_1, long * param_2, undefined8 param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 1000 bytes / 69 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** INVALID
- **Callees:** FUN_7103558bd0;FUN_71037b2bc0;FUN_71037cfe00;FUN_71038135a0;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::_Unwind_Resume;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_710381efc0__710381efc0.c)  [cfg](../decompiled/FUN_710381efc0__710381efc0.mmd)
- **Clone hash:** `1dfa77902904c8a4`

```c

void FUN_710381efc0(ulong *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  void *pvVar1;
  byte ****ppppbVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  char *__s;
  byte ****ppppbVar6;
  void *pvVar7;
  long ****pppplVar8;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  byte ****local_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60;
  byte ****local_58;
  void *local_50;
  void *local_48;
  long ****local_38;
  
  FUN_71038135a0(&local_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_88 = (byte ****)0x0;
  local_90 = 0x203a2006;
  uVar4 = (ulong)((byte)local_78 >> 1);
  pvVar7 = (void *)((ulong)&local_78 | 1);
  if (((byte)local_78 & 1) != 0) {
    uVar4 = local_70;
    pvVar7 = local_68;
  }
// ... (108 more lines)
```

## 32. `FUN_710391ce60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391ce60`  (offset `0x391ce60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710391ce60(long * param_1, int param_2, void * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 180 bytes / 9 bb / 6 incoming refs
- **Match values:** invalid
- **Strings touched:** unfinished capture;invalid capture index %%%d
- **Callers:** FUN_7103918da0;FUN_710391bdd0;FUN_710391d020
- **Callees:** FUN_71038f4a00;FUN_71038f6c50
- **Files:** [decomp](../decompiled/FUN_710391ce60__710391ce60.c)  [cfg](../decompiled/FUN_710391ce60__710391ce60.mmd)
- **Clone hash:** `961c3ffdba33502e`

```c

void FUN_710391ce60(long *param_1,int param_2,void *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(int *)((long)param_1 + 0x2c) <= param_2) {
    if (param_2 == 0) {
      FUN_71038f4a00(param_1[3],param_3,param_4 - (long)param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1[3],"invalid capture index %%%d",(ulong)(param_2 + 1),param_4,param_5,
                   param_6,param_7,param_8);
  }
  uVar1 = param_1[(long)param_2 * 2 + 7];
  if (uVar1 != 0xffffffffffffffff) {
    lVar2 = param_1[3];
    if (uVar1 == 0xfffffffffffffffe) {
      plVar3 = *(long **)(lVar2 + 0x10);
      *plVar3 = param_1[(long)param_2 * 2 + 6] + (1 - *param_1);
      *(undefined4 *)(plVar3 + 1) = 0x13;
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 0x10;
      return;
    }
    FUN_71038f4a00(lVar2,(void *)param_1[(long)param_2 * 2 + 6],uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1[3],"unfinished capture",0xffffffffffffffff,param_4,param_5,param_6,param_7,
                 param_8);
}


```

## 33. `FUN_7102123d40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** FIGHTER_PAD_ATTACK_TRIGGER;FIGHTER_PAD_ATTACK_RELEASE;FIGHTER_PAD_SPECIAL_TRIGGER;FIGHTER_PAD_SPECIAL_RELEASE;FIGHTER_PAD_JUMP_TRIGGER;FIGHTER_PAD_JUMP_RELEASE;FIGHTER_PAD_GUARD_TRIGGER;FIGHTER_PAD_GUARD_RELEASE;FIGHTER_PAD_MAX;FIGHTER_PAD_CMD_CAT1_ATTACK_N;FIGHTER_PAD_CMD_CAT1_ATTACK_S3;FIGHTER_PAD_CMD_CAT1_ATTACK_HI3;FIGHTER_PAD_CMD_CAT1_ATTACK_LW3;FIGHTER_PAD_CMD_CAT1_ATTACK_S4;FIGHTER_PAD_CMD_CAT1_ATTACK_HI4;FIGHTER_PAD_CMD_CAT1_ATTACK_LW4;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_N;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_F;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_B;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_HI;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_LW;FIGHTER_PAD_CMD_CAT1_SPECIAL_N;FIGHTER_PAD_CMD_CAT1_SPECIAL_S;FIGHTER_PAD_CMD_CAT1_SPECIAL_HI;FIGHTER_PAD_CMD_CAT1_SPECIAL_LW;FIGHTER_PAD_CMD_CAT1_WALK;FIGHTER_PAD_CMD_CAT1_DASH;FIGHTER_PAD_CMD_CAT1_TURN;FIGHTER_PAD_CMD_CAT1_TURN_DASH;FIGHTER_PAD_CMD_CAT1_JUMP;FIGHTER_PAD_CMD_CAT1_JUMP_BUTTON;FIGHTER_PAD_CMD_CAT1_AIR_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102123d40__7102123d40.c)  [cfg](../decompiled/FUN_7102123d40__7102123d40.mmd)
- **Clone hash:** `7ad94b1c5264513f`

```c

void FUN_7102123d40(void)

{
  byte ****in_x3;
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_80;
  long local_78;
  int local_70;
  
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_TRIGGER",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_RELEASE",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_TRIGGER",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_RELEASE",(undefined **)0x3,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_TRIGGER",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_RELEASE",(undefined **)0x5,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_TRIGGER",(undefined **)0x6,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_RELEASE",(undefined **)&DAT_00000007,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_MAX",(undefined **)&DAT_00000008,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_N",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
// ... (7744 more lines)
```

## 34. `FUN_710392dca0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392dca0`  (offset `0x392dca0`)
- **Namespace:** `Global`
- **Signature:** `undefined1 __cdecl FUN_710392dca0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 516 bytes / 43 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** <jemalloc>: perCPU arena getcpu() not available. Setting narenas to %u.
;<jemalloc>: narenas w/ percpuarena beyond limit (%d)
;<jemalloc>: invalid configuration -- per physical CPU arena with odd number (%u) of CPUs (no hyper threading?).
;select_item;<jemalloc>: Reducing narenas to limit (%d)

- **Callers:** FUN_710392d920
- **Callees:** FUN_71039293d0;FUN_71039296d0;FUN_710392e010;FUN_710392e060;FUN_710392e0b0;FUN_7103957550;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710392dca0__710392dca0.c)  [cfg](../decompiled/FUN_710392dca0__710392dca0.mmd)
- **Clone hash:** `7bbb84c73c92a818`

```c

undefined1
FUN_710392dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_7105294560 != 2) {
    iVar1 = FUN_71039296d0();
    if (iVar1 < 0) {
      DAT_7105294560 = 2;
      uVar2 = DAT_7106d4b58c;
      if (DAT_7106d4b58c == 0) {
        uVar2 = FUN_710392e060();
      }
      FUN_7103957550((byte *)
                     "<jemalloc>: perCPU arena getcpu() not available. Setting narenas to %u.\n",
                     (ulong)uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (DAT_7106d4b579 == '\x01') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (0xffe < DAT_7106d434a0) {
        FUN_7103957550((byte *)"<jemalloc>: narenas w/ percpuarena beyond limit (%d)\n",
                       (ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8);
        if (DAT_7106d4b579 != '\x01') {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar1 = FUN_710392e010(DAT_7105294560);
      if (((iVar1 == 4) && ((DAT_7106d434a0 & 1) != 0)) &&
         (FUN_7103957550((byte *)
                         "<jemalloc>: invalid configuration -- per physical CPU arena with odd number (%u) of CPUs (no hyper threading?).\n"
                         ,(ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8),
// ... (24 more lines)
```

## 35. `FUN_710392e290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392e290`  (offset `0x392e290`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710392e290(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 152 bytes / 5 bb / 58799 incoming refs
- **Match values:** invalid
- **Strings touched:** <jemalloc>: Error allocating aligned memory: out of memory
;<jemalloc>: Error allocating aligned memory: invalid alignment

- **Callers:** nnMain;FUN_71002c9900;FUN_71002f1ef0;FUN_71002f23d0;FUN_7100305180;FUN_7100309030;FUN_710030c710;FUN_710032ef60;FUN_7100342850;FUN_71003429a0;FUN_7100342af0;FUN_7100342c40;FUN_7100342d90;FUN_7100342ee0;FUN_7100343030;FUN_7100343180;...
- **Callees:** FUN_710392cea0;FUN_710392cf00;FUN_710392cf50
- **Files:** [decomp](../decompiled/FUN_710392e290__710392e290.c)  [cfg](../decompiled/FUN_710392e290__710392e290.mmd)
- **Clone hash:** `abc9072766d94a47`

```c

undefined8
FUN_710392e290(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte abStack_50 [3];
  undefined1 local_4d;
  undefined1 local_4c;
  undefined8 local_48;
  char *local_40;
  char *local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_50);
  FUN_710392cf00(&local_80);
  abStack_50[1] = 1;
  local_4d = 1;
  local_4c = 1;
  local_48 = 1;
  local_40 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_38 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_80 = &local_28;
  local_78 = 1;
  local_70 = local_20;
  local_68 = local_18;
  FUN_710392cf50(abStack_50,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
  return local_28;
}


```

## 36. `FUN_710391ba90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391ba90`  (offset `0x391ba90`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710391ba90(long * param_1, long * param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 832 bytes / 53 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** invalid format option '%c';missing size for format option 'c';integral size (%d) out of limits [1,%d]
- **Callers:** FUN_710391b840
- **Callees:** FUN_71038f6c50
- **Files:** [decomp](../decompiled/FUN_710391ba90__710391ba90.c)  [cfg](../decompiled/FUN_710391ba90__710391ba90.mmd)
- **Clone hash:** `0b41a4999223f3cb`

```c

undefined4
FUN_710391ba90(long *param_1,long *param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar5 = (byte *)*param_2;
  *param_2 = (long)(pbVar5 + 1);
  bVar1 = *pbVar5;
  *param_3 = 0;
  uVar6 = (uint)bVar1;
  uVar4 = 5;
  switch(uVar6) {
  case 0x20:
    goto switchD_710391bacc_caseD_20;
  case 0x21:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + (int)uVar3 * 10;
        uVar6 = iVar2 - 0x30;
        uVar3 = (ulong)uVar6;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(*param_1,"integral size (%d) out of limits [1,%d]",uVar3,0x10,param_5,param_6
                       ,param_7,param_8);
      }
// ... (153 more lines)
```

## 37. `FUN_710218ff30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710218ff30`  (offset `0x218ff30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710218ff30(void)`
- **Size / BBs / Incoming:** 9940 bytes / 22 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** PACMAN_SPECIAL_S_EFFECT_INVALID;FIGHTER_PACMAN_APPEAL_HI_A;FIGHTER_PACMAN_APPEAL_HI_B;FIGHTER_PACMAN_APPEAL_HI_C;FIGHTER_PACMAN_APPEAL_HI_D;FIGHTER_PACMAN_APPEAL_HI_E;FIGHTER_PACMAN_APPEAL_HI_F;FIGHTER_PACMAN_APPEAL_HI_G;FIGHTER_PACMAN_APPEAL_HI_H;FIGHTER_PACMAN_APPEAL_HI_I;FIGHTER_PACMAN_APPEAL_HI_J;FIGHTER_PACMAN_APPEAL_HI_K;FIGHTER_PACMAN_APPEAL_HI_L;FIGHTER_PACMAN_APPEAL_HI_M;FIGHTER_PACMAN_APPEAL_HI_N;FIGHTER_PACMAN_APPEAL_HI_O;FIGHTER_PACMAN_APPEAL_HI_P;FIGHTER_PACMAN_APPEAL_HI_Q;FIGHTER_PACMAN_APPEAL_HI_R;FIGHTER_PACMAN_APPEAL_HI_S;FIGHTER_PACMAN_APPEAL_HI_T;FIGHTER_PACMAN_APPEAL_HI_U;FIGHTER_PACMAN_APPEAL_HI_NUM;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_START;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SMASH_ANIMATION;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_CLIFF_COUNT;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_ITEM_ID;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE_RANK;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_HI_JUMP_NUM;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_S_ITEM_ID;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAIT_FRAME;FIGHTER_PACMAN_INSTANCE_WORK_ID_INT_APPEAL_HI_KIND;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710218ff30__710218ff30.c)  [cfg](../decompiled/FUN_710218ff30__710218ff30.mmd)
- **Clone hash:** `8c80f5b57aef35de`

```c

void FUN_710218ff30(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"PACMAN_SPECIAL_S_EFFECT_INVALID",(undefined **)&DAT_ffffffff,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_A",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_B",(undefined **)0x2,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_C",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_D",(undefined **)&DAT_00000008,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_E",(undefined **)&DAT_00000010,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_F",(undefined **)&SUB_00000020,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_G",(undefined **)&DAT_00000040,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_H",(undefined **)&DAT_00000080,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_I",(undefined **)&DAT_00000100,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACMAN_APPEAL_HI_J",(undefined **)&DAT_00000200,in_x3,
// ... (1082 more lines)
```

## 38. `FUN_710027cb70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027cb70`  (offset `0x27cb70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027cb70(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001cb860;FUN_71001cd7d0;FUN_71001cde10;FUN_71001d3d60;FUN_710027ca30;FUN_710170d200;FUN_7101717960;<EXTERNAL>::memset;<EXTERNAL>::strncpy;...
- **Files:** [decomp](../decompiled/FUN_710027cb70__710027cb70.c)  [cfg](../decompiled/FUN_710027cb70__710027cb70.mmd)
- **Clone hash:** `e9cfb1079800d4dd`

```c

void FUN_710027cb70(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code **ppcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar9 == 0) {
    uVar7 = 0x80010004;
  }
  else {
// ... (122 more lines)
```

## 39. `FUN_710391b840`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391b840`  (offset `0x391b840`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710391b840(long * param_1, uint param_2, long * param_3, uint * param_4, uint * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 256 bytes / 13 bb / 3 incoming refs
- **Match values:** invalid
- **Strings touched:** too many results;invalid next option for option 'X';format asks for alignment not power of 2
- **Callers:** FUN_710391a370;FUN_710391afd0;FUN_710391b170
- **Callees:** FUN_71038f6d60;FUN_710391ba90
- **Files:** [decomp](../decompiled/FUN_710391b840__710391b840.c)  [cfg](../decompiled/FUN_710391b840__710391b840.mmd)
- **Clone hash:** `23fe5cab2c5ab311`

```c

int FUN_710391b840(long *param_1,uint param_2,long *param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_44;
  
  puVar3 = param_4;
  puVar4 = param_5;
  iVar1 = FUN_710391ba90(param_1,param_3,param_4,param_4,param_5,param_6,param_7,param_8);
  local_44 = *param_4;
  uVar6 = local_44;
  if (iVar1 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_710391ba90(param_1,param_3,&local_44,puVar3,puVar4,param_6,param_7,param_8);
      if ((iVar2 != 3) && (uVar6 = local_44, local_44 != 0)) goto LAB_710391b8cc;
    }
    uVar6 = local_44;
    FUN_71038f6d60(*param_1,1,"invalid next option for option \'X\'",puVar3,puVar4,param_6,param_7,
                   param_8);
  }
LAB_710391b8cc:
  uVar5 = 0;
  if ((iVar1 != 3) && (1 < (int)uVar6)) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
      local_44 = uVar5;
    }
    uVar5 = uVar6 - 1;
    if ((uVar5 & uVar6) != 0) {
      FUN_71038f6d60(*param_1,1,"format asks for alignment not power of 2",puVar3,puVar4,param_6,
                     param_7,param_8);
    }
// ... (6 more lines)
```

## 40. `FUN_710027eb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710027eb90`  (offset `0x27eb90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710027eb90(void)`
- **Size / BBs / Incoming:** 1172 bytes / 34 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** N2nn3nex16ProtocolRegistryE;invalidurl;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4e00;FUN_71001cb860;FUN_71001cd7d0;FUN_71001cde10;FUN_71001d3d60;FUN_710027ea50;FUN_710170d200;FUN_7101717960;<EXTERNAL>::memset;<EXTERNAL>::strncpy;...
- **Files:** [decomp](../decompiled/FUN_710027eb90__710027eb90.c)  [cfg](../decompiled/FUN_710027eb90__710027eb90.mmd)
- **Clone hash:** `0f4f1928320872d7`

```c

void FUN_710027eb90(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  code **ppcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar9 == 0) {
    uVar7 = 0x80010004;
  }
  else {
// ... (122 more lines)
```

## 41. `FUN_7102160190`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102160190`  (offset `0x2160190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102160190(void)`
- **Size / BBs / Incoming:** 8224 bytes / 25 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER;FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME;FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHANGE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FLASHING;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_MAX;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_CHARGE_STOP;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_REMOVE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_AGAIN;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_FORBID_GENERATE_BIKE;FIGHTER_WARIO_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_WARIO_GASS_LEVEL_S;FIGHTER_WARIO_GASS_LEVEL_M;FIGHTER_WARIO_GASS_LEVEL_L;FIGHTER_WARIO_GASS_LEVEL_FLY;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_COUNT;FIGHTER_WARIO_CHANGE_SUCCEED_WORK_ID_INT_GASS_LEVEL;FIGHTER_WARIO_WIN_WPN_DATA_BIKE;FIGHTER_WARIO_WIN_WPN_DATA_TERM;FIGHTER_WARIO_EAT_WEAPON_KIND_NORMAL;FIGHTER_WARIO_EAT_WEAPON_KIND_BOMB;FIGHTER_WARIO_EAT_WEAPON_KIND_NUM;FIGHTER_WARIO_FINAL_MODULE_START_INIT;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102160190__7102160190.c)  [cfg](../decompiled/FUN_7102160190__7102160190.mmd)
- **Clone hash:** `dd0509e172b95a16`

```c

void FUN_7102160190(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_SPECIAL_N_INTERVAL",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_GASS_LEVEL",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_TIME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_BIKE_ORIGINAL_OWNER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_FINAL_TIME",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_SPECIAL_S_BIKE_HP",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_GAS_CHARGE_SPEED",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WARIO_INSTANCE_WORK_ID_FLOAT_STOMACH_MOTION_FRAME",
// ... (867 more lines)
```

## 42. `FUN_710183be60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710183be60`  (offset `0x183be60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710183be60(void)`
- **Size / BBs / Incoming:** 41020 bytes / 1781 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** mode_empty_03;count_5vs5;controller_out;set_btn_01_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_ready;set_parts_balloon_rule;selector_0;set_btn_03_rule;controller_in;bg_anime;chara_bg_color_01;chara_bg_color_00;selector;set_part_vs_3;set_part_vs_5;selector_1;set_btn_back;set_cursor_area;set_medal_area;back_btn_long;set_btn_02_title;txt_pos_normal;set_txt_title_00;title_on;headcount_off;day_off;...
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101686610;FUN_710168eb40;FUN_71016ea290;FUN_71016f6340;FUN_7101764000;FUN_7101797560;FUN_710179a080;FUN_710179ed00;FUN_7101838d70;FUN_710183bb20;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8720;FUN_71019e90c0;...
- **Files:** [cfg](../decompiled/FUN_710183be60__710183be60.mmd)


## 43. `FUN_7101f45620`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** INVALID
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

## 44. `FUN_7100274cd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100274cd0`  (offset `0x274cd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100274cd0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, long param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined1 * param_14, byte param_15)`
- **Size / BBs / Incoming:** 732 bytes / 24 bb / 2 incoming refs
- **Match values:** invalid
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;N2nn3nex16ProtocolRegistryE;invalidurl
- **Callers:** FUN_71002636b0
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2f70;FUN_71001b4220;FUN_71001b4e00;FUN_71001cd7d0;FUN_71001d3d60;FUN_710022e7e0;FUN_710023c460;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100274cd0__7100274cd0.c)  [cfg](../decompiled/FUN_7100274cd0__7100274cd0.mmd)
- **Clone hash:** `7611918119dda959`

```c

void FUN_7100274cd0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                   undefined8 param_13,undefined1 *param_14,byte param_15)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **local_80;
  code *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100274d84:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_7100274dc8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100274d84;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100274d84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100274dc8:
  plVar7 = (long *)(lVar5 + 0x78);
// ... (53 more lines)
```

## 45. `FUN_710225b990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** INVALID
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

## 46. `FUN_7101b2a1f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** INVALID
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 47. `FUN_7103908190`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103908190`  (offset `0x3908190`)
- **Namespace:** `Global`
- **Signature:** `long __cdecl FUN_7103908190(long param_1, char * param_2, long * param_3)`
- **Size / BBs / Incoming:** 1232 bytes / 64 bb / 4 incoming refs
- **Match values:** invalid
- **Strings touched:** <\%d>;(null);NODE_PRE_REFRACT_BLEND;invalid option '%%%c' to 'lua_pushfstring';chara/chara_4/chara_4_;stack overflow
- **Callers:** FUN_71038f4c30;FUN_71038f4ca0;FUN_71038fae60;FUN_7103908660
- **Callees:** FUN_71038fae60;FUN_71038fb3c0;FUN_71038fb530;FUN_71038fb6f0;FUN_71039080b0;FUN_7103908660;FUN_7103917660;FUN_7103923f70;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_7103908190__7103908190.c)  [cfg](../decompiled/FUN_7103908190__7103908190.mmd)
- **Clone hash:** `c6f332b24bfe3580`

```c

long FUN_7103908190(long param_1,char *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  size_t sVar8;
  byte *__s;
  uint *puVar9;
  ulong *puVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  long *plVar14;
  double *pdVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  byte local_88 [7];
  byte local_81 [33];
  
  pcVar6 = strchr(param_2,0x25);
  if (pcVar6 == (char *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    do {
      puVar20 = *(undefined8 **)(param_1 + 0x10);
      puVar7 = FUN_7103917660(param_1,param_2,(long)pcVar6 - (long)param_2);
      *puVar20 = puVar7;
      *(uint *)(puVar20 + 1) = *(byte *)(puVar7 + 1) | 0x40;
// ... (179 more lines)
```

## 48. `FUN_71038f7350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038f7350`  (offset `0x38f7350`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71038f7350(long param_1, uint param_2, char * param_3, long * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 372 bytes / 23 bb / 1 incoming refs
- **Match values:** invalid
- **Strings touched:** string;select_item;invalid option '%s'
- **Callers:** FUN_7103900940
- **Callees:** FUN_71038f4730;FUN_71038f4ca0;FUN_71038f6d60;FUN_71038f74d0;<EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_71038f7350__71038f7350.c)  [cfg](../decompiled/FUN_71038f7350__71038f7350.mmd)
- **Clone hash:** `38d93c85a6aa4de1`

```c

ulong FUN_71038f7350(long param_1,uint param_2,char *param_3,long *param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *__s1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar3 = param_4;
  if (param_3 != (char *)0x0) {
    if ((int)param_2 < 1) {
      if ((int)param_2 < -0xf4627) {
        if (param_2 == 0xfff0b9d8) {
          puVar4 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        }
        else {
          plVar6 = (long *)**(long **)(param_1 + 0x20);
          if ((int)plVar6[1] == 0x16) goto LAB_71038f7420;
          lVar5 = *plVar6;
          if ((int)(uint)*(byte *)(lVar5 + 10) < (int)(-0xf4628 - param_2)) goto LAB_71038f7420;
          puVar4 = (undefined8 *)(lVar5 + (long)(int)(-0xf4628 - param_2) * 0x10 + 0x10);
        }
      }
      else {
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      }
    }
    else {
      puVar4 = (undefined8 *)(**(long **)(param_1 + 0x20) + (long)(int)param_2 * 0x10);
      if (*(undefined8 **)(param_1 + 0x10) <= puVar4) goto LAB_71038f7420;
    }
    if ((puVar4 == &DAT_7104862960) || ((*(byte *)(puVar4 + 1) & 0xf) == 0)) goto LAB_71038f7420;
  }
  param_3 = (char *)FUN_71038f4730(param_1,param_2,(ulong *)0x0);
// ... (21 more lines)
```

