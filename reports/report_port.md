# port (funcs=114, hits=293)

Top 50 functions by hit count

## 1. `FUN_710225b990`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** PORT
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

## 2. `FUN_710001f340`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** port;Port
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

## 3. `FUN_71021eaa80`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eaa80`  (offset `0x21eaa80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eaa80(void)`
- **Size / BBs / Incoming:** 6012 bytes / 4 bb / 1 incoming refs
- **Match values:** PORT
- **Strings touched:** FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_X;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Y;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Z;WEAPON_MIIGUNNER_FULLTHROTTLE_STATUS_KIND_SHOOT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_FINAL_EXEC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ST_INIT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_IS_CHANGE_STATUS_BOMBJUMP;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_SET_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_OFF_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ARTICLE_MOTION_RATE_SYNC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_WIN_VISOR_MOTION;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SAMUS_CLIFF_HANG_DATA_START;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SAMUS_CLIFF_HANG_DATA_TERM;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021eaa80__71021eaa80.c)  [cfg](../decompiled/FUN_71021eaa80__71021eaa80.mmd)
- **Clone hash:** `e7586ba83e86bbcb`

```c

void FUN_71021eaa80(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG",
// ... (689 more lines)
```

## 4. `FUN_7101caa0b0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101caa0b0`  (offset `0x1caa0b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101caa0b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3212 bytes / 185 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** select_after;set_txt_00;mnu_online_report_private_info;select_before;mnu_online_report_violence;mnu_online_report_indecency;mnu_online_report_harassment_abuse;mnu_online_report_against_moral;mnu_online_report_commercially;mnu_online_report_another_inappropriate
- **Callees:** FUN_7101cabeb0;FUN_71024076d0;FUN_7103313f20;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_7103771d60;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101caa0b0__7101caa0b0.c)  [cfg](../decompiled/FUN_7101caa0b0__7101caa0b0.mmd)
- **Clone hash:** `fc848e825a5a2ed9`

```c

void FUN_7101caa0b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  byte ****ppppbVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long ****pppplVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  undefined4 local_f0 [2];
  undefined **local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
// ... (543 more lines)
```

## 5. `FUN_7103060b10`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103060b10`  (offset `0x3060b10`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103060b10(float param_1, long param_2)`
- **Size / BBs / Incoming:** 2044 bytes / 143 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** seiryu_support_voice%02d
- **Callees:** FUN_710062dc20;FUN_7102666c30;FUN_7102c2f880;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7103060b10__7103060b10.c)  [cfg](../decompiled/FUN_7103060b10__7103060b10.mmd)
- **Clone hash:** `48dcc9fbd16c128c`

```c

undefined8 FUN_7103060b10(float param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  uint uVar13;
  float fVar14;
  uint local_68 [2];
  char local_60 [64];
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(char *)(param_2 + 0x39) != '\0') {
      *(undefined1 *)(param_2 + 0x39) = 0;
    }
  }
  else {
    fVar14 = *(float *)(param_2 + 0x34) - param_1;
    *(float *)(param_2 + 0x34) = fVar14;
    if (fVar14 < 0.0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined2 *)(param_2 + 0x38) = 0x100;
    }
  }
  if (*(float *)(param_2 + 0x34) != 0.0) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
      *(undefined4 *)(lVar8 + 0xc) = 0;
    }
    lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
// ... (445 more lines)
```

## 6. `FUN_71020fbb90`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** Port;PORT
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

## 7. `FUN_71037f8180`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** port
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

## 8. `FUN_7100033a40`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** port
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

## 9. `FUN_7101e1f7e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e1f7e0`  (offset `0x1e1f7e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e1f7e0(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9320 bytes / 447 bb / 1 incoming refs
- **Match values:** port
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

## 10. `FUN_7100022610`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** port
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

## 11. `FUN_7100023290`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** port
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

## 12. `FUN_7101dccbb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dccbb0`  (offset `0x1dccbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dccbb0(undefined8 * param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, uint * param_6, undefined * * param_7, byte * param_8)`
- **Size / BBs / Incoming:** 8812 bytes / 494 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** off_plt_menu_lyt_00;on_plt_menu_lyt_00;plt_menu_lyt_00;right_pos;set_scr_sort;set_blinder;selector_0;set_btn_tab_%02d;selector_1;set_btn_key_l;set_btn_key_r;view_supportitem;view_base;summon_spirits_%02d;set_parts_spirits_%02d;set_rep_spirits;set_rep_spirits_shadow;set_parts_class_star;set_parts_icon_base;mode_empty_03;set_parts_icon_support;set_parts_icon_energy;set_txt_name;set_txt_attribute;set_txt_support_type;set_txt_support;set_txt_energy;set_parts_sp;set_txt_num_sp;mnu_spirits_itemview_hold_sp_n;anim_count;anim_stop;...
- **Callers:** FUN_71019044f0
- **Callees:** FUN_71003a4ca0;FUN_7101dcac70;FUN_7101dceef0;FUN_7101dcef10;FUN_7101dcef20;FUN_7101dcfac0;FUN_71032cbf30;FUN_71032ccb70;FUN_7103399950;FUN_7103399a70;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103775fa0;FUN_7103776290;FUN_7103776640;...
- **Files:** [decomp](../decompiled/FUN_7101dccbb0__7101dccbb0.c)  [cfg](../decompiled/FUN_7101dccbb0__7101dccbb0.mmd)
- **Clone hash:** `647f269f6eff2e68`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101dccbb0(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,uint *param_6,undefined **param_7,byte *param_8)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  long ***ppplVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long ***ppplVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar12;
  char *pcVar13;
  byte ****ppppbVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  uint uVar17;
  long lVar18;
  undefined **ppuVar19;
  long *plVar20;
  code *pcVar21;
  long lVar22;
  long *plVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  byte *pbVar27;
  long lVar28;
  long *plVar29;
  byte *pbVar30;
// ... (1772 more lines)
```

## 13. `FUN_71021723e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** PORT
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

## 14. `FUN_7101dcbb00`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dcbb00`  (offset `0x1dcbb00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dcbb00(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2784 bytes / 126 bb / 2 incoming refs
- **Match values:** port
- **Strings touched:** nam_goods_%s;nam_goods_help_%s;spi_%s;mode_empty_03;mnu_spirits_itemview_ped_name;nam_spirits_pedestal_type_support;view_supportitem;support_board;view_energy;nam_goods_category_%s;view_silhouette;view_normal
- **Callers:** FUN_7101902880;FUN_7101dcf0d0
- **Callees:** FUN_71003a4ca0;FUN_7101dcf6a0;FUN_7101dcf780;FUN_71025ae1b0;FUN_710327cd40;FUN_710327d0d0;FUN_710327d3b0;FUN_710327da30;FUN_71032a9470;FUN_71032a9540;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710377aee0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101dcbb00__7101dcbb00.c)  [cfg](../decompiled/FUN_7101dcbb00__7101dcbb00.mmd)
- **Clone hash:** `633a89a6b5ee779f`

```c

void FUN_7101dcbb00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  bool bVar6;
  undefined2 uVar7;
  ushort uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte bVar14;
  short sVar15;
  ulong uVar16;
  long *plVar17;
  short *psVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  short *psVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long *plVar26;
  int iVar27;
  undefined8 *puVar28;
  uint auStack_108 [2];
  byte abStack_100 [64];
  uint local_c0 [2];
  byte local_b8 [8];
  undefined4 local_b0;
  undefined1 local_ac;
  
// ... (401 more lines)
```

## 15. `FUN_7101aa08b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101aa08b0`  (offset `0x1aa08b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101aa08b0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1044 bytes / 44 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** set_txt_report_count;mnu_online_report_sixhour_count;set_part_btn_01;set_txt_00;color_01;set_part_btn_00;select_before;set_txt_text_count
- **Callees:** FUN_7103771a80;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_710377a310;FUN_71037a2270;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::nn::time::StandardNetworkSystemClock::GetCurrentTime
- **Files:** [decomp](../decompiled/FUN_7101aa08b0__7101aa08b0.c)  [cfg](../decompiled/FUN_7101aa08b0__7101aa08b0.mmd)
- **Clone hash:** `3c3e6a47e17631c2`

```c

void FUN_7101aa08b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x17c) == 0) {
    FUN_7103776910(&local_50,**(long **)(param_1 + 0x198) + 8,(long ****)"set_txt_report_count",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    piVar14 = (int *)**(undefined8 **)(*DAT_7105314510 + 0x68);
    iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_60);
    if (iVar2 == 0) {
      lVar10 = 0;
      uVar8 = 0;
      do {
        plVar5 = (long *)(*(long *)(piVar14 + 2) + 0x10dd8 + lVar10);
        lVar10 = lVar10 + 8;
        uVar3 = ((long)local_60 - *plVar5) * 1000000000;
        uVar1 = ((long)uVar3 >> 0x20) * 0xed75ed55 + ((uVar3 & 0xfffffe00) * 0xed75ed55 >> 0x20);
        uVar7 = (uint)uVar8;
        if (((long)(uVar3 + ((long)uVar3 >> 0x20) * -0x63a000da + ((long)uVar1 >> 0x20) +
// ... (144 more lines)
```

## 16. `FUN_7101740140`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** port
- **Strings touched:** ev_match_data;match_id_lo;match_id_hi;Ver. %d.%d.%d;rom_version;has_battle_log;is_battle_team;is_suddendeath;rule_spirits;rule_charge_final;rule_team_attach;rule_handi_boost;rule_stage_gimmick;rule_can_pause;rule_visible_score;rule_visible_damage;stage_1_type;stage_1_form;stage_2_type;stage_2_form;event_type;tournament_id;player_%d_;attacker;supporter1;supporter2;supporter3;node_num;ev_match_player;rating;fighter_id;fighter_random;...
- **Callers:** FUN_7101515630;FUN_7101518820
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_710066cd40;FUN_71006dae20;FUN_71015922f0;FUN_71016f6340;FUN_710172a1e0;FUN_71017436d0;FUN_7101743910;FUN_7101743bb0;FUN_7101764000;FUN_710179eec0;FUN_71017ac030;FUN_71017ac100;FUN_71032631a0;...
- **Files:** [decomp](../decompiled/FUN_7101740140__7101740140.c)  [cfg](../decompiled/FUN_7101740140__7101740140.mmd)
- **Clone hash:** `81d2d7b98a09c684`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101740140(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Any64BitId *pAVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  Any64BitId AVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  Any64BitId *pAVar12;
  long ***ppplVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar25;
  long ****pppplVar26;
  byte ****ppppbVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
// ... (1930 more lines)
```

## 17. `FUN_7101e957e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e957e0`  (offset `0x1e957e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e957e0(long * param_1, byte param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1248 bytes / 59 bb / 4 incoming refs
- **Match values:** port
- **Strings touched:** rank_supporter;rank_non;cam_gym_level;type_supporter_off;type_supporter_on;progress_finish_init;progress_lvmax_reset;up_possible_off;gauge_on
- **Callers:** FUN_7101e4c0a0;FUN_7101e5e830;FUN_7101e5f3a0;FUN_7101e63d20
- **Callees:** FUN_710259c150;FUN_710259d0a0;FUN_71025ad150;FUN_71025ae1b0;FUN_7103778300;FUN_710377a280;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101e957e0__7101e957e0.c)  [cfg](../decompiled/FUN_7101e957e0__7101e957e0.mmd)
- **Clone hash:** `cf042b69a49c97b5`

```c

void FUN_7101e957e0(long *param_1,byte param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ushort *puVar13;
  ulong uVar14;
  long *plVar15;
  byte ****ppppbVar16;
  undefined2 *puVar17;
  long lVar18;
  long *plVar19;
  
  if (param_2 < 4) {
    uVar4 = SUB81(param_5,0);
    if (((uint)param_4 >> 4 & 0xfff) < 0x177) {
      puVar17 = (undefined2 *)
                (*(long *)(*DAT_7105329f98 + 0x30) + ((ulong)param_4 & 0xffff) * 0x50 + 72000);
    }
    else {
      uVar5 = (uint)param_4 - 6000;
      puVar17 = &DAT_710532a878;
      if (((uVar5 & 0xffff) < 100) &&
         (lVar7 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)uVar5 & 0xffff) * 0x50,
         *(short *)(lVar7 + 0x88cc8) != -1)) {
        puVar17 = (undefined2 *)(lVar7 + 0x88cc0);
      }
    }
// ... (143 more lines)
```

## 18. `FUN_7100022dc0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022dc0`  (offset `0x22dc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100022dc0(char * param_1, long * * * * * * param_2, uint param_3, undefined8 param_4, long * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1228 bytes / 57 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** SOCKS4%s: connecting to HTTP proxy %s port %d
;SOCKS4 communication to %s:%d
;Too long SOCKS proxy name, can't use!
;Connection time-out;SOCKS4 connect to IPv4 %s (locally resolved)
;Failed to send SOCKS4 connect request.;select_item;SOCKS4 connection to %s not supported
;Failed to resolve "%s" for SOCKS4 connect.;SOCKS4 reply has wrong version, version should be 4.;Failed to receive SOCKS4 connect request ack.;SOCKS4%s request granted.
;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.;chara/chara_4/chara_4_;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed.;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client.;Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids.
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::strcpy
- **Files:** [decomp](../decompiled/FUN_7100022dc0__7100022dc0.c)  [cfg](../decompiled/FUN_7100022dc0__7100022dc0.mmd)
- **Clone hash:** `993701ac13500851`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7100022dc0(char *param_1,long ******param_2,uint param_3,undefined8 param_4,long *******param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  size_t sVar7;
  size_t sVar8;
  long *************ppppppppppppplVar9;
  char *pcVar10;
  undefined8 uVar11;
  long ************pppppppppppplVar12;
  long *************ppppppppppppplVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long *************ppppppppppppplVar16;
  long lVar17;
  long ************pppppppppppplVar18;
  long ***********local_1a8 [8];
  undefined2 local_168;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  char local_160;
  char local_15f [255];
  long *************local_58;
  
  pppppplVar15 = *param_5;
  iVar2 = *(int *)(param_5 + 0x27);
  uVar3 = *(uint *)((long)param_5 + (long)(int)param_4 * 4 + 600);
  ppppppppppppplVar16 = (long *************)(ulong)param_3;
  uVar11 = 1;
// ... (180 more lines)
```

## 19. `FUN_7101d89d00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d89d00`  (offset `0x1d89d00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d89d00(undefined8 * param_1, undefined8 param_2, char * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10792 bytes / 528 bb / 33 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_slot_%02d;slot_%02d;slot_01;set_rep_spirit;set_rep_aura_00;view_spt_set_%02d;view_spt_%02d;set_txt_name_spirit_pv;set_txt_series;set_parts_btn_help_00;set_txt_name_spirit;mnu_spirits_recall_question;set_parts_class;class_none;spirit_none;spi_%s;set_txt_num_preview;mnu_spirits_directory_view_spirit_n;tit_series_%s;set_parts_param_00;set_parts_param_01;set_txt_name_spirit_00;set_parts_paramset_00;spirit_fighter_caption;keyhelp_off;class_hope;select_item;class_ace;class_legend;set_parts_summon_view_00;show_num_have;mnu_spirits_recall_spirit_possess;...
- **Callers:** FUN_71018fd720;FUN_71018fe660;FUN_7101908f00;FUN_7101909ab0;FUN_710190ac90;FUN_710190ba20;FUN_710190bb40;FUN_710190bcf0;FUN_710190c3c0;FUN_7101914470;FUN_7101915c00;FUN_7101916c60;FUN_71019170d0;FUN_7101917ea0;FUN_7101d88b10;FUN_7101d8fed0;...
- **Callees:** FUN_71003a4ca0;FUN_7101797560;FUN_7101b14960;FUN_7101d8c730;FUN_7101d8cda0;FUN_7101d8cfb0;FUN_7101d8d450;FUN_7101d8dc90;FUN_7101d8e0c0;FUN_71025b0f50;FUN_71025b10e0;FUN_71025b12c0;FUN_71025c7300;FUN_71025c7b60;FUN_71025c9570;FUN_71025c9890;...
- **Files:** [decomp](../decompiled/FUN_7101d89d00__7101d89d00.c)  [cfg](../decompiled/FUN_7101d89d00__7101d89d00.mmd)
- **Clone hash:** `5f2712aa261eee70`

```c

void FUN_7101d89d00(undefined8 *param_1,undefined8 param_2,char *param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar12;
  undefined8 extraout_x1_01;
  char *pcVar13;
  long ****pppplVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  uint *puVar17;
  char *param3;
  byte ****ppppbVar18;
  ushort uVar19;
  int iVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined2 *puVar26;
  undefined2 *puVar27;
  byte bVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
// ... (1778 more lines)
```

## 20. `FUN_7101995e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101995e50`  (offset `0x1995e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101995e50(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * * param_7, long * * param_8)`
- **Size / BBs / Incoming:** 7928 bytes / 446 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** pos_to_top;set_parts_aw;anim_amiibo_raise;set_parts_aw_bg;set_fxui_back_nothing;set_fxui_back_attack;set_fxui_back_defence;set_fxui_back_throw;set_fxui_back_supporter;set_rep_spirit_aw;set_rep_aura_00;set_fxui_ef_mirage;spirits_param;power_set;set_parts_param_00;set_parts_param_01;set_parts_base;spi_%s;set_txt_name_spirit;set_parts_class;spirit_none;set_txt_pow_num_sdw;mnu_spirits_select_power_n;set_txt_pow_num;set_parts_icon_super;spirit_super;super;set_parts_super;spirit_normal;pre_super;spirit_pre_super;set_parts_pre_super;...
- **Callees:** FUN_71003a4ca0;FUN_71003a4f40;FUN_710199c100;FUN_710199def0;FUN_71019a0940;FUN_71019a0a70;FUN_71019a0b60;FUN_71019a0ce0;FUN_71019a0fa0;FUN_71019a1450;FUN_7101df6680;FUN_7101df7af0;FUN_71024076d0;FUN_710251a7e0;FUN_710259c150;FUN_710259c720;...
- **Files:** [decomp](../decompiled/FUN_7101995e50__7101995e50.c)  [cfg](../decompiled/FUN_7101995e50__7101995e50.mmd)
- **Clone hash:** `7f12ee0bfb35b1aa`

```c

void FUN_7101995e50(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ****param_7,long **param_8)

{
  ulong *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  ushort uVar16;
  int iVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_14;
  long ****pppplVar18;
  undefined8 uVar19;
  byte ****ppppbVar20;
// ... (1495 more lines)
```

## 21. `FUN_7101d8c730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d8c730`  (offset `0x1d8c730`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d8c730(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1640 bytes / 79 bb / 2 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_aw_bg;directory;set_fxui_back_nothing;set_fxui_back_attack;set_fxui_back_defence;set_fxui_back_throw;set_fxui_back_supporter;set_fxui_ef_mirage;show_icon_series;hide_icon_series;set_rep_icon_series
- **Callers:** FUN_7101d89d00;FUN_7101d90fe0
- **Callees:** FUN_7101d8e430;FUN_710323f600;FUN_71032a7800;FUN_71032a9470;FUN_710339dde0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377aa20;FUN_71037964b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101d8c730__7101d8c730.c)  [cfg](../decompiled/FUN_7101d8c730__7101d8c730.mmd)
- **Clone hash:** `8fa12fe47f01feea`

```c

void FUN_7101d8c730(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined8 extraout_x1;
  long *********ppppppppplVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long ********local_b8;
  ulong local_b0;
  undefined **local_a8;
  undefined8 *local_a0 [8];
  undefined **local_60;
  ulong local_58;
  undefined4 local_44;
  
  sVar6 = *(short *)(param_1 + 0x15c);
  uVar9 = 0;
  if ((sVar6 != -1) && (sVar6 < 2000)) {
    lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar16 = (*(long *)(lVar15 + 0x28) - *(long *)(lVar15 + 0x20) >> 6) * -0x3333333333333333;
    uVar5 = *(ushort *)(lVar15 + (long)(int)sVar6 * 2 + 0x60);
    uVar14 = (ulong)uVar5;
    if ((uint)uVar5 < (uint)uVar16) {
      puVar2 = (undefined2 *)(*(long *)(lVar15 + 0x20) + uVar14 * 0x140);
      if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
// ... (282 more lines)
```

## 22. `FUN_7101825170`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101825170`  (offset `0x1825170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101825170(long param_1)`
- **Size / BBs / Incoming:** 7960 bytes / 371 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** submenu_pos;plate_side;set_parts_submenu;selector_0;submenu_item_00;submenu_item_01;set2_right;set_txt_title;mnu_playing_together_past_opponents_profile;mnu_playing_together_report;submenu;btn_cursor;scroll;set_part_btn_00;set_part_btn_01;set_footer_area;selector;set_btn_00;set_btn_01;set_btn_02;set_btn_03;set_btn_04;set_btn_05;color_01;set_txt_text_count;set_txt_report_count
- **Callees:** FUN_71003cb050;FUN_7101989a30;FUN_7101989b70;FUN_7101a9e2d0;FUN_7101a9e2e0;FUN_7101a9e390;FUN_7101a9e3a0;FUN_7101a9e3c0;FUN_7101aa04c0;FUN_7101aa04d0;FUN_7101aa3160;FUN_7103239360;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_7103263d20;...
- **Files:** [decomp](../decompiled/FUN_7101825170__7101825170.c)  [cfg](../decompiled/FUN_7101825170__7101825170.mmd)
- **Clone hash:** `ad81ef401e7844b3`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101825170(long param_1)

{
  uint *puVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  long ***ppplVar14;
  undefined8 *puVar15;
  long ***ppplVar16;
  ulong uVar17;
  long ********pppppppplVar18;
  long *******ppppppplVar19;
  long ********pppppppplVar20;
  long **pplVar21;
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
// ... (1545 more lines)
```

## 23. `FUN_7101d97570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d97570`  (offset `0x1d97570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d97570(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 6580 bytes / 412 bb / 3 incoming refs
- **Match values:** port
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

## 24. `FUN_7101e28430`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e28430`  (offset `0x1e28430`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7101e28430(long param_1, uint param_2, uint param_3, uint param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12340 bytes / 748 bb / 2 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_list_%02d;set_parts_base_%02d;anim_show_add;icon_add_spirit;mode_empty_03;set_parts_spirit;set_rep_spirit;set_txt_level;mnu_spirits_select_lv;set_parts_icon_super;super;possible_super;lv_hide;set_parts_have;set_parts_icon_favorite;set_parts_icon_using;set_parts_icon_condition;set_parts_icon_counter;set_parts_icon_new;set_txt_num_slot;set_txt_num_status;icon_add_base;set_parts_icon_base;spirit_supporter;spirit_attacker_offense;set_parts_atr_icon;set_parts_class_legend;set_parts_class_ace;set_parts_class_hope;set_parts_class_none;cost_00;slot_00;...
- **Callers:** FUN_7101916c60;FUN_7101e1b7f0
- **Callees:** FUN_7101e2b470;FUN_71024076d0;FUN_710259c150;FUN_710323faf0;FUN_71032a9470;FUN_7103313f20;FUN_710339dde0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a280;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memmove;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_7101e28430__7101e28430.c)  [cfg](../decompiled/FUN_7101e28430__7101e28430.mmd)
- **Clone hash:** `98373f18b6cf47ba`

```c

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_7101e28430(long param_1,uint param_2,uint param_3,uint param_4,long ****param_5,
              undefined8 param_6,ulong param_7,undefined8 param_8)

{
  short sVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  size_t sVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  uint uVar20;
  byte *pbVar21;
  long ***ppplVar22;
  ushort *puVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  uint uVar32;
// ... (2413 more lines)
```

## 25. `FUN_7101dd3c80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dd3c80`  (offset `0x1dd3c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dd3c80(long param_1, ushort param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1260 bytes / 61 bb / 17 incoming refs
- **Match values:** port
- **Strings touched:** mnu_spirits_itemview__item_n;off_empty;on_empty;view_icon_energy;view_icon_support;mode_empty_03;set_parts_icon_support
- **Callers:** FUN_7101dd3410;FUN_7101dd34f0
- **Callees:** FUN_710327cd40;FUN_710327d0d0;FUN_710327d3b0;FUN_710327de70;FUN_7103776640;FUN_7103778300;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101dd3c80__7101dd3c80.c)  [cfg](../decompiled/FUN_7101dd3c80__7101dd3c80.mmd)
- **Clone hash:** `c0ea3b1836736a87`

```c

void FUN_7101dd3c80(long param_1,ushort param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  byte ****ppppbVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  undefined **local_b8;
  ulong local_b0;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  if (0xf < param_2) {
    return;
  }
  plVar15 = (long *)(param_1 + (ulong)param_2 * 8 + 0x10);
  lVar11 = *plVar15;
  if (lVar11 == 0) {
    return;
  }
  bVar1 = *(byte *)(lVar11 + 0x28);
  uVar14 = (uint)bVar1;
  if ((ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 3) <= (ulong)param_2) {
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x1b8);
    if (lVar11 != 0) {
      lVar16 = *(long *)(param_1 + 8) + 0x1b8;
// ... (151 more lines)
```

## 26. `FUN_7100201e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** port
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

## 27. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** port
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

## 28. `FUN_7100202710`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** port
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

## 29. `FUN_710363c190`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710363c190`  (offset `0x363c190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710363c190(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3392 bytes / 146 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** select_item;VsmWithGaussVS;VsmWithGaussPS;VSM_GAUSS;NODE_POST_EFFECT;VSM_SHADOWMAP;DSP_SHADOW;ShadowViewport;DSV_SHADOW_;DSV_SHADOW_SRV_;DEPTH_SHADOW_;VSM_RTV_OPLUG;VSM_GAUSS_Viewport;VsmPassCBuffer;Shadow_SRVTexPlug;plate_side;RTV_VSM_;SRV_VSM_;FB_VSM_
- **Callers:** FUN_7103631ef0
- **Callees:** FUN_71002c51f0;FUN_710363bfc0;FUN_710364e1f0;FUN_710364e460;FUN_710364e730;FUN_71038566c0;FUN_7103856830;FUN_710385c280;FUN_710385c3f0;FUN_7103864d90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::std::to_string;<EXTERNAL>::std::string::insert;...
- **Files:** [decomp](../decompiled/FUN_710363c190__710363c190.c)  [cfg](../decompiled/FUN_710363c190__710363c190.mmd)
- **Clone hash:** `53f8387bbcea4b25`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_710363c190(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long ****pppplVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  uint local_160;
  undefined2 uStack_15c;
  undefined1 uStack_15a;
  undefined1 uStack_159;
  undefined1 uStack_158;
  undefined2 local_157;
  undefined1 uStack_155;
  undefined2 uStack_154;
  undefined1 uStack_152;
  undefined1 uStack_151;
  undefined1 uStack_150;
  undefined2 uStack_14f;
  undefined1 uStack_14d;
  undefined4 uStack_14c;
  long ***local_148;
  ulong local_140;
  long *local_138;
  long local_130;
// ... (749 more lines)
```

## 30. `FUN_7100003840`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100003840`  (offset `0x3840`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100003840(long * param_1, long param_2, uint * param_3, undefined8 param_4, undefined8 param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2320 bytes / 101 bb / 3 incoming refs
- **Match values:** port
- **Strings touched:**   Trying %s...
;select_item;Could not set SO_NOSIGPIPE: %s
;Failed to set SO_KEEPALIVE on fd %d
;sa_addr inet_ntop() failed with errno %d: %s;host!;dys_yoga03_l_03_set;Bind to local port %hu failed, trying next
;Local port: %hu
;getsockname() failed with errno %d: %s;Immediate connect fail for %s: %s
;bind failed with errno %d: %s;plate_side;Couldn't bind to interface '%s';chara/chara_4/chara_4_;Local Interface %s is ip %s using address family %i
;Name '%s' family %i resolved to '%s' family %i
;Couldn't bind to '%s'
- **Callers:** FUN_7100002f80;FUN_71000036e0
- **Callees:** FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_71000065d0;FUN_71000065e0;FUN_71000065f0;FUN_7100006690;FUN_71000086c0;FUN_710000b540;FUN_7100013730;FUN_7100015de0;FUN_7100016040;FUN_71000175d0;FUN_7100017740;<EXTERNAL>::strlen;...
- **Files:** [decomp](../decompiled/FUN_7100003840__7100003840.c)  [cfg](../decompiled/FUN_7100003840__7100003840.mmd)
- **Clone hash:** `dcf451474578fccb`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100003840(long *param_1,long param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  uint *puVar12;
  size_t sVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  long **pplVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  code *pcVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long **__s;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 local_3b8 [48];
  int local_388;
  int local_384;
  uint local_380;
  uint local_37c;
// ... (489 more lines)
```

## 31. `FUN_7101ca95f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca95f0`  (offset `0x1ca95f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca95f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2200 bytes / 70 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** set_txt_00;set_part_btn_01;set_txt_sentence_dis;mnu_online_report_contribution_detail;set_txt_sentence
- **Callees:** FUN_710143c4d0;FUN_7101af5880;FUN_7101af8210;FUN_7101af8570;FUN_7101cac0c0;FUN_7101ce7e70;FUN_7101ce8640;FUN_7101cf4120;FUN_71032e5a30;FUN_710334c7d0;FUN_710334e560;FUN_710334e9e0;FUN_710376b960;FUN_7103771a80;FUN_7103775dc0;FUN_7103775fa0;...
- **Files:** [decomp](../decompiled/FUN_7101ca95f0__7101ca95f0.c)  [cfg](../decompiled/FUN_7101ca95f0__7101ca95f0.mmd)
- **Clone hash:** `5844ea2ad350064b`

```c

/* WARNING: Removing unreachable block (ram,0x007101ca9870) */

void FUN_7101ca95f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  ushort *puVar7;
  undefined8 extraout_x1_00;
  long ****pppplVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  byte bVar17;
  undefined8 uStack_2710;
  undefined8 local_2708;
  undefined2 local_2700;
  byte abStack_26d0 [164];
  uint local_262c;
  undefined4 local_2628;
  undefined8 local_2624;
  undefined8 local_261c;
  undefined2 local_2614;
  undefined4 local_2612;
  undefined2 local_260e;
  undefined4 local_15e0;
  uint local_15d8;
  undefined4 local_15d4;
// ... (386 more lines)
```

## 32. `FUN_7100002f80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100002f80`  (offset `0x2f80`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100002f80(long * * * * * * * param_1, uint param_2, undefined1 * param_3, undefined8 param_4, char * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1760 bytes / 111 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** Connection time-out;Connection failed
;After %ldms connect time, move on!
;connect to %s port %ld failed: %s
;Failed to connect to %s port %ld: %s
- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002c90;FUN_7100003840;FUN_7100005ba0;FUN_710000b540;FUN_7100015020;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000175d0;FUN_7100017740;FUN_7100017750;FUN_710001edb0;FUN_710001eed0;<EXTERNAL>::nnsocketGetLastErrno;<EXTERNAL>::nnsocketClose;<EXTERNAL>::nnsocketGetSockOpt;...
- **Files:** [decomp](../decompiled/FUN_7100002f80__7100002f80.c)  [cfg](../decompiled/FUN_7100002f80__7100002f80.mmd)
- **Clone hash:** `9888bff88fea6960`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100002f80(long *******param_1,uint param_2,undefined1 *param_3,undefined8 param_4,
                  char *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *****ppppplVar2;
  long *****ppppplVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  int iVar13;
  long *****ppppplVar14;
  long ******pppppplVar15;
  undefined8 uVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  long *******ppppppplVar19;
  long *****ppppplVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  long ******pppppplVar24;
  long ******pppppplVar25;
  long lVar26;
  ulong uVar27;
  undefined1 auVar28 [12];
  int local_dc;
  long *****local_9c [6];
  undefined4 local_6c [3];
  
  lVar26 = (long)(int)param_2;
// ... (298 more lines)
```

## 33. `FUN_71001f9c80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f9c80`  (offset `0x1f9c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f9c80(long param_1)`
- **Size / BBs / Incoming:** 804 bytes / 49 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** SocketTransport::TransportJob;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001f9c20
- **Callees:** FUN_71001af850;FUN_71001af8a0;FUN_71001b1300;FUN_71001b47e0;FUN_71001b4910;FUN_71001cd210;FUN_71001da260;FUN_71001f61e0;FUN_71001fe990;FUN_71001feb20;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001f9c80__71001f9c80.c)  [cfg](../decompiled/FUN_71001f9c80__71001f9c80.mmd)
- **Clone hash:** `3ef1b09d4ae3b4d9`

```c

/* WARNING: Removing unreachable block (ram,0x0071001f9efc) */
/* WARNING: Removing unreachable block (ram,0x0071001f9ee8) */

void FUN_71001f9c80(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x2b8) != 0) goto joined_r0x0071001f9e7c;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto joined_r0x0071001f9e7c;
      }
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x10) == 0)) goto joined_r0x0071001f9e7c;
  puVar8 = FUN_71001af850(0x70);
  if (puVar8 == (undefined8 *)0x0) {
// ... (95 more lines)
```

## 34. `FUN_7101db8810`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db8810`  (offset `0x1db8810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101db8810(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 * param_8, long * * * param_9, long * * * param_10)`
- **Size / BBs / Incoming:** 13408 bytes / 669 bb / 1 incoming refs
- **Match values:** port
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

## 35. `FUN_7100154a40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100154a40`  (offset `0x154a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100154a40(uint * param_1, ulong param_2)`
- **Size / BBs / Incoming:** 464 bytes / 23 bb / 4 incoming refs
- **Match values:** port
- **Strings touched:** [Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------;NODE_PRE_REFRACT_BLEND;[Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port);[Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet;[Analysis]     0x%08x, %8d,  %8d,    %8d, %s(%u);[Analysis] ---------------------------- END ----------------------------
- **Callers:** FUN_7100163ff0
- **Callees:** FUN_7100154ca0;FUN_7100156720
- **Files:** [decomp](../decompiled/FUN_7100154a40__7100154a40.c)  [cfg](../decompiled/FUN_7100154a40__7100154a40.mmd)
- **Clone hash:** `0002e310eb7dd5c6`

```c

void FUN_7100154a40(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_7100154ca0("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------");
  FUN_7100154ca0("[Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port)");
  FUN_7100154ca0("[Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet");
  uVar2 = param_1[0xc0];
  if (0 < (int)uVar2) {
    if ((param_2 & 1) == 0) {
      lVar3 = 0;
      puVar4 = param_1;
      do {
        uVar1 = *puVar4 >> 0x18;
        switch(uVar1) {
        case 8:
        case 0x14:
        case 0x18:
        case 0x1c:
        case 0x24:
        case 0x28:
        case 0x2c:
        case 0x34:
        case 0x44:
        case 0x54:
        case 0x58:
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
// ... (90 more lines)
```

## 36. `FUN_7101907350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101907350`  (offset `0x1907350`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101907350(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7084 bytes / 380 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_btn_00;set_parts_icon_energy_l;spirit_energy_l;set_parts_icon_energy_m;spirit_energy_m;set_parts_icon_energy_s;spirit_energy_s;set_txt_num_l;mnu_spirits_raise_energy_l_n;set_txt_num_m;mnu_spirits_raise_energy_m_n;set_txt_num_s;mnu_spirits_raise_energy_s_n;set_parts_btn_01;set_parts_icon_base;set_txt_num_base;mnu_spirits_raise_pedestal_blow_n;anim_on_atr_bonus;anim_off_atr_bonus;set_parts_btn_02;mnu_spirits_raise_pedestal_def_n;set_parts_btn_03;mnu_spirits_raise_pedestal_throw_n;set_parts_btn_04;mnu_spirits_raise_pedestal_non_n;set_parts_btn_05;mnu_spirits_raise_pedestal_support_n
- **Callees:** FUN_7101df6680;FUN_71024076d0;FUN_71025272f0;FUN_7102528ac0;FUN_71025b12c0;FUN_7103313f20;FUN_7103771a80;FUN_7103775dc0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_7103796f20;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101907350__7101907350.c)  [cfg](../decompiled/FUN_7101907350__7101907350.mmd)
- **Clone hash:** `f105883f8e0416bf`

```c

void FUN_7101907350(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  undefined2 *puVar20;
  ulong uVar21;
  int *piVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
// ... (1265 more lines)
```

## 37. `FUN_71018a82a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018a82a0`  (offset `0x18a82a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018a82a0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 32452 bytes / 1538 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** selector_00;set_parts_search;selector_01;set_parts_l_btn;set_parts_r_btn;selector_03;set_parts_btn_tab_0_%02d;mode_%02d;txtlight_on;txtlight_off;selector_02;scr_sort;shift_01_to_00;indent_off;set_parts_btn_search_00;set_parts_btn_search_01;set_parts_btn_search_02;mnu_share_detail_owner_unfollow;mnu_share_detail_owner_profile;out_r;turn_on;turn_off;set_parts_load;blinder;guide_origin;guide_width;guide_height;scr_item_00;set_parts_scr_0_%02d;size_m;size_l;scr_knob_00;...
- **Callers:** FUN_71018b0880
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_7101989a30;FUN_71019c1c50;FUN_7101a7ed70;FUN_7101ca5760;FUN_7101ca72f0;FUN_7101ca82b0;FUN_7101cabde0;FUN_7101cc1340;FUN_7101cd5940;FUN_7101cd74e0;FUN_7101cdf490;FUN_7101cef780;FUN_7101cef850;...
- **Files:** [decomp](../decompiled/FUN_71018a82a0__71018a82a0.c)  [cfg](../decompiled/FUN_71018a82a0__71018a82a0.mmd)
- **Clone hash:** `87ba63e6b2da7fa3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018a82a0(long param_1,long param_2)

{
  long **pplVar1;
  long *******ppppppplVar2;
  byte **ppbVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  long ***ppplVar11;
  long ********pppppppplVar12;
  byte ***pppbVar13;
  bool bVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  byte **ppbVar19;
  void *__dest;
  byte ***pppbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *******ppppppplVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
// ... (5839 more lines)
```

## 38. `FUN_71025c7300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025c7300`  (offset `0x25c7300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71025c7300(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2132 bytes / 106 bb / 4 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_it_non;chara/chara_4/chara_4_;set_pic_icon;set_txt_help;set_parts_it_offense;set_parts_it_defense;set_parts_it_throw;set_parts_it_supporter;set_parts_text_scroll;set_txt_mask;set_txt_main;set_txt_lv;set_bar_exp;set_txt_param_attacker;set_txt_offense;set_txt_defense;set_bar_offense;set_bar_offense_sdw;set_bar_defense;set_bar_defense_sdw;set_rep_series
- **Callers:** FUN_7101ad3b90;FUN_7101b14960;FUN_7101d28af0;FUN_7101d89d00
- **Callees:** FUN_71000597e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_71037790a0;FUN_7103779770;FUN_71037a28a0;FUN_710392eb40;<EXTERNAL>::powf
- **Files:** [decomp](../decompiled/FUN_71025c7300__71025c7300.c)  [cfg](../decompiled/FUN_71025c7300__71025c7300.mmd)
- **Clone hash:** `56a4d6e3e98247ed`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71025c7300(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
// ... (370 more lines)
```

## 39. `FUN_7100184800`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184800`  (offset `0x184800`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100184800(long param_1)`
- **Size / BBs / Incoming:** 248 bytes / 13 bb / 2 incoming refs
- **Match values:** port
- **Strings touched:** N2nn3pia9transport11DispatchJobE;LocalAllowParticipatingJob::WaitBackgroundJobEnd
- **Callees:** FUN_71000b4300;FUN_71000bce50;FUN_71000bcf30;FUN_710017dde0;FUN_710017eae0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100184800__7100184800.c)  [cfg](../decompiled/FUN_7100184800__7100184800.mmd)
- **Clone hash:** `85eea8d73a1053b4`

```c

undefined8 FUN_7100184800(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0') {
    uVar2 = 5;
    switch(iVar1) {
    case 1:
      goto switchD_7100184854_caseD_1;
    case 2:
      FUN_710017dde0(*(long *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      FUN_710017eae0(*(long **)(param_1 + 0xb0));
      local_38[0] = 0;
      goto LAB_710018487c;
    case 3:
      FUN_71000bce50(local_38,(int *)(param_1 + 0x6c));
      break;
    case 4:
      goto switchD_7100184854_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_71000b4300(param_1 + 0x68);
    }
switchD_7100184854_caseD_4:
    local_38[0] = 0x6c05;
LAB_710018487c:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
// ... (10 more lines)
```

## 40. `FUN_710392a220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a220`  (offset `0x392a220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710392a220(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3936 bytes / 309 bb / 1 incoming refs
- **Match values:** port
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

## 41. `FUN_71001531b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001531b0`  (offset `0x1531b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001531b0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** SDK MW+Nintendo+PiaTransport-5_19_1
- **Callers:** FUN_71001513f0
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71001531b0__71001531b0.c)  [cfg](../decompiled/FUN_71001531b0__71001531b0.mmd)
- **Clone hash:** `1bf9f49335104ba4`

```c

void FUN_71001531b0(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaTransport-5_19_1");
  return;
}


```

## 42. `FUN_71001f8fc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f8fc0`  (offset `0x1f8fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f8fc0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 928 bytes / 33 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** dys_yoga03_l_03_set;Transport Job
- **Callers:** FUN_71001eea30
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001b1870;FUN_71001b38e0;FUN_71001bd330;FUN_71001bf280;FUN_71001cf760;FUN_71001d5a90;FUN_71001e0c80;FUN_71001f0ba0;FUN_71001f54b0;FUN_71001f5750;FUN_71001f78d0;FUN_7100214450;FUN_7101717960;<EXTERNAL>::memset;...
- **Files:** [decomp](../decompiled/FUN_71001f8fc0__71001f8fc0.c)  [cfg](../decompiled/FUN_71001f8fc0__71001f8fc0.mmd)
- **Clone hash:** `ddfe42fbbf7b3349`

```c

void FUN_71001f8fc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  FUN_71001f0ba0(param_1);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_7104f57ba8;
  puVar2 = FUN_71001b1820(0x20);
  puVar5 = (undefined8 *)param_1[0x59];
  puVar6 = (undefined8 *)param_1[0x5a];
  if (puVar6 == puVar5) {
    param_1[0x59] = puVar2;
    param_1[0x5a] = puVar2;
    param_1[0x5b] = puVar2 + 4;
  }
  else {
    uVar9 = (long)puVar6 + (-0x10 - (long)puVar5);
    uVar4 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    puVar10 = puVar2;
    if ((uVar4 & 7) != 0) {
      lVar8 = -((ulong)uVar4 & 7);
      puVar7 = puVar6;
      puVar11 = puVar2;
      do {
        puVar6 = puVar7 + -2;
// ... (141 more lines)
```

## 43. `FUN_7100019bf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100019bf0`  (offset `0x19bf0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100019bf0(long param_1, int param_2, long * param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 19336 bytes / 1392 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!;deflate, gzip;%15[^
:]://%[^
/?:]%[^
];%[^
/?:]%[^
];%s://;FLUSH;RELOAD;Set-Cookie:
- **Callers:** FUN_7100000a00
- **Callees:** FUN_7100000f70;FUN_7100001020;FUN_71000012c0;FUN_7100002040;FUN_7100002690;FUN_71000026c0;FUN_71000027a0;FUN_7100004dc0;FUN_7100004dd0;FUN_7100004de0;FUN_7100004df0;FUN_7100007ef0;FUN_7100016040;FUN_7100016b40;FUN_7100016ba0;FUN_7100016c00;...
- **Files:** [decomp](../decompiled/FUN_7100019bf0__7100019bf0.c)  [cfg](../decompiled/FUN_7100019bf0__7100019bf0.mmd)
- **Clone hash:** `a3b301535f28dc50`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100019bf0(long param_1,int param_2,long *param_3,long param_4,char *param_5,
                    undefined1 *param_6,char *param_7,long param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  void *__dest;
  ulong uVar10;
  size_t sVar11;
  char *__dest_00;
  char *__src;
  char *__src_00;
  size_t sVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  void *__src_01;
  char *local_58;
  ulong local_50 [2];
  
  uVar6 = 4;
// ... (4189 more lines)
```

## 44. `FUN_71001a5780`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a5780`  (offset `0x1a5780`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a5780(void)`
- **Size / BBs / Incoming:** 1792 bytes / 50 bb / 3 incoming refs
- **Match values:** port
- **Strings touched:** ProcessUpdateMeshJob::SendConnectionReport;ProcessUpdateMeshJob::UpdateFailed
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710015e540;FUN_710015e550;FUN_710015e7d0;FUN_71001602c0;FUN_7100161fa0;FUN_7100161fb0;FUN_7100162430;FUN_7100193110;FUN_7100193560;FUN_7100193580;FUN_7100199a50;FUN_71001a6860;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;...
- **Files:** [decomp](../decompiled/FUN_71001a5780__71001a5780.c)  [cfg](../decompiled/FUN_71001a5780__71001a5780.mmd)
- **Clone hash:** `2f8a7d54127571fb`

```c

undefined8 FUN_71001a5780(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ErrorResultVariant *this;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar6 = FUN_7100193560(DAT_71052adfc0);
    plVar8 = (long *)(ulong)bVar6;
    if (bVar6 < 0x20) {
      if (*(short *)(param_1 + 0xd6) != 0) {
        uVar14 = *(ulong *)(param_1 + 0xe0);
        bVar4 = false;
        uVar12 = *(ulong *)(DAT_71052ac580 + 0x30);
        lVar18 = 0;
        uVar17 = 0;
        bVar3 = false;
        bVar2 = false;
        this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
// ... (229 more lines)
```

## 45. `FUN_71001f3220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f3220`  (offset `0x1f3220`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71001f3220(long param_1, char * param_2, ulong param_3)`
- **Size / BBs / Incoming:** 660 bytes / 26 bb / 3 incoming refs
- **Match values:** port
- **Strings touched:** N2nn3nex15EmulationDeviceE;address
- **Callers:** FUN_71001f2180
- **Callees:** FUN_71001b2f70;FUN_71001b47e0;FUN_71001b4910;FUN_71001bec60;FUN_71001becd0;FUN_71001bee30;FUN_71001bef00;FUN_71001bef20;FUN_71001f2180;FUN_7101711530;<EXTERNAL>::strcmp;<EXTERNAL>::strstr;<EXTERNAL>::atoi
- **Files:** [decomp](../decompiled/FUN_71001f3220__71001f3220.c)  [cfg](../decompiled/FUN_71001f3220__71001f3220.mmd)
- **Clone hash:** `3634f73755c44920`

```c

uint FUN_71001f3220(long param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  char *__haystack;
  undefined1 auVar9 [16];
  undefined **local_120;
  undefined1 local_118 [16];
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined ***local_58;
  
  pcVar4 = strstr(param_2,"=");
  uVar1 = 0;
  if ((pcVar4 == (char *)0x0) || (pcVar4 == param_2)) goto LAB_71001f3360;
  __haystack = pcVar4 + 1;
  if ((*__haystack == '\0') || (pcVar5 = strstr(__haystack,"="), pcVar5 != (char *)0x0)) {
    uVar1 = 0;
    goto LAB_71001f3360;
  }
  *pcVar4 = '\0';
  if ((param_3 & 1) == 0) {
    iVar2 = strcmp(param_2,"address");
    if (iVar2 != 0) {
      iVar2 = strcmp(param_2,"port");
      if (iVar2 == 0) {
        iVar2 = atoi(__haystack);
        if (*(char *)(param_1 + 0x68) == '\0') {
// ... (71 more lines)
```

## 46. `FUN_710016b2f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016b2f0`  (offset `0x16b2f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710016b2f0(int * param_1, undefined8 param_2, Result * param_3)`
- **Size / BBs / Incoming:** 400 bytes / 25 bb / 23 incoming refs
- **Match values:** port
- **Strings touched:** N2nn3pia9transport11DispatchJobE
- **Callers:** FUN_710016b0b0;FUN_710016c000;FUN_710016c030;FUN_710016c060;FUN_710016c090;FUN_710016cd90;FUN_710016ce30;FUN_710016ced0;FUN_710016d4d0;FUN_710016da00;FUN_710016db50;FUN_710016e450;FUN_710016e8a0;FUN_710016ec20;FUN_710016f0c0;FUN_710016f400;...
- **Callees:** FUN_71000bce50;FUN_71000be900;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016b2f0__710016b2f0.c)  [cfg](../decompiled/FUN_710016b2f0__710016b2f0.mmd)
- **Clone hash:** `a1afe9ad203ac7c9`

```c

void FUN_710016b2f0(int *param_1,undefined8 param_2,Result *param_3)

{
  uint uVar1;
  uint uVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0) {
    local_40[0] = 0;
    goto LAB_710016b3f0;
  }
  if ((uVar1 & 0x1ff) == 0xcb) {
    uVar2 = uVar1 >> 9 & 0x1fff;
    if (uVar2 - 0x11 < 5) {
switchD_710016b3d8_caseD_5:
      local_40[0] = 0xa46e;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      FUN_71000bce50(param_1,local_40);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_40,param_3);
      FUN_71000be900((long)param_1,(undefined8 *)local_40);
      return;
    }
    if (uVar2 - 0x16 < 5) {
      if ((uVar1 & 0x3ffe00) == 0x3000) {
        local_40[0] = 0xc421;
      }
      else {
        if ((uVar1 & 0x3ffe00) != 0x2e00) goto switchD_710016b3d8_caseD_5;
        local_40[0] = 0xc420;
      }
      goto LAB_710016b3f0;
    }
    switch((uVar1 & 0x3fe000) - 0x4000 >> 0xd) {
    case 0:
// ... (36 more lines)
```

## 47. `FUN_7101dd2be0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dd2be0`  (offset `0x1dd2be0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dd2be0(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2028 bytes / 114 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** selector_3;set_parts_btn_support_%02d;set_txt_num_base
- **Callees:** FUN_7101989a30;FUN_7101a7ed70;FUN_7101dd43a0;FUN_7101dd5060;FUN_7101dd5070;FUN_710327d830;FUN_710327de70;FUN_710337dab0;FUN_710337dac0;FUN_710376e070;FUN_7103770b30;FUN_7103771d60;FUN_7103776640;FUN_7103776910;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101dd2be0__7101dd2be0.c)  [cfg](../decompiled/FUN_7101dd2be0__7101dd2be0.mmd)
- **Clone hash:** `5bef19b9601c8329`

```c

void FUN_7101dd2be0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *__dest;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long **pplVar14;
  char *pcVar15;
  ulong uVar16;
  long ***ppplVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  void *__src;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  byte ***local_1e0;
  undefined2 local_1d8;
// ... (365 more lines)
```

## 48. `FUN_71035a3db0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035a3db0`  (offset `0x35a3db0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035a3db0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1080 bytes / 38 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** ExportingTextureTask
- **Callees:** FUN_71000001c0;FUN_71037b2bc0;FUN_71037c3a70;FUN_71037c3c30;FUN_71037c4080;FUN_71037fb210;FUN_71037feb60;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock;<EXTERNAL>::_Unwind_Resume;...
- **Files:** [decomp](../decompiled/FUN_71035a3db0__71035a3db0.c)  [cfg](../decompiled/FUN_71035a3db0__71035a3db0.mmd)
- **Clone hash:** `45d975b042e30432`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71035a3db0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *__src;
  undefined8 uVar7;
  long ****pppplVar8;
  long *plVar9;
  undefined8 uVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long ***local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 8) == -1) {
    uVar3 = *(uint *)(param_1 + 0x38);
    if ((int)uVar3 < 0) {
      if (((ulong)(*(long *)(DAT_7105338f68 + 0x60) - *(long *)(DAT_7105338f68 + 0x58) >> 3) <=
           (ulong)(uVar3 & 0x7fffffff)) ||
         (lVar13 = *(long *)(*(long *)(DAT_7105338f68 + 0x58) + (ulong)(uVar3 & 0x7fffffff) * 8),
         lVar13 == 0)) {
        lVar13 = *(long *)(DAT_7105338f68 + 0x28);
      }
    }
    else {
      lVar12 = *(long *)(DAT_7105338f68 + 0x28);
// ... (175 more lines)
```

## 49. `FUN_71001f7780`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f7780`  (offset `0x1f7780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f7780(long param_1)`
- **Size / BBs / Incoming:** 336 bytes / 7 bb / 1 incoming refs
- **Match values:** port
- **Strings touched:** TransportBufferThread(recv 
- **Callers:** FUN_71001f69f0
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b2360;FUN_71001b27e0;FUN_71001b47e0;FUN_71001b4910;FUN_71001b6080;FUN_71001b60c0
- **Files:** [decomp](../decompiled/FUN_71001f7780__71001f7780.c)  [cfg](../decompiled/FUN_71001f7780__71001f7780.mmd)
- **Clone hash:** `81d69b056f77397a`

```c

void FUN_71001f7780(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined **local_190;
  undefined1 local_188 [16];
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char *local_160;
  
  FUN_71001b6080(&uStack_168);
  lVar1 = FUN_71001b0ab0((long)&uStack_168,"TransportBufferThread(recv ");
  lVar1 = FUN_71001b0ab0(lVar1,(&PTR_DAT_7104f555e0)[*(uint *)(param_1 + 0xe0)]);
  FUN_71001b0ab0(lVar1,")");
  puVar2 = FUN_71001af850(0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    local_188[0] = 0;
    local_178 = local_188;
    local_170 = 0x10;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_190,local_160,-1);
    FUN_71001b2360(puVar2,(long)&local_190,DAT_7104f577c0);
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &PTR_FUN_7104f59608;
    *(undefined8 **)(param_1 + 0xd8) = puVar2;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_190);
  }
  if (DAT_7104f577c8 == -0x80000000) {
    pvVar3 = *(void **)(param_1 + 0xd8);
  }
// ... (13 more lines)
```

## 50. `FUN_71025c7b60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71025c7b60`  (offset `0x25c7b60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71025c7b60(long * param_1, long param_2, long param_3, byte * * * * param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4292 bytes / 187 bb / 7 incoming refs
- **Match values:** port
- **Strings touched:** set_parts_icon_atr;set_txt_num;arrow_hide;set_parts_it_supporter;chara/chara_4/chara_4_;set_pic_icon;set_txt_help;set_parts_text_scroll;set_txt_mask;set_txt_main;set_txt_lv;mnu_spirits_select_lv;set_txt_level_max;set_bar_exp;lv_max;lv_normal;set_txt_param_attacker;set_txt_offense;mnu_spirits_setorg_org_attack_n;set_txt_defense;mnu_spirits_setorg_org_defense_n;set_bar_offense;set_bar_offense_sdw;set_bar_defense;set_bar_defense_sdw;set_parts_it_non;set_parts_it_defense;set_parts_it_throw;set_parts_it_offense;mnu_spirits_select_grade_up_99;slot_0%d;set_rep_series;...
- **Callers:** FUN_7101995e50;FUN_7101ad3b90;FUN_7101b14960;FUN_7101d28af0;FUN_7101d89d00;FUN_7101e1b7f0
- **Callees:** FUN_71000597e0;FUN_71003a4ca0;FUN_71025c9e50;FUN_71025ca840;FUN_71025cb8d0;FUN_7103238d60;FUN_7103238e70;FUN_710323c4e0;FUN_710323f600;FUN_710323f760;FUN_710329a390;FUN_71032a0c90;FUN_71032a0e30;FUN_71032a0fd0;FUN_71032a1630;FUN_710339dde0;...
- **Files:** [decomp](../decompiled/FUN_71025c7b60__71025c7b60.c)  [cfg](../decompiled/FUN_71025c7b60__71025c7b60.mmd)
- **Clone hash:** `d265e15fbe65b921`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71025c7b60(long *param_1,long param_2,long param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 extraout_x1;
  char *pcVar15;
  undefined8 uVar16;
  long *********ppppppppplVar17;
  ulong uVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  long lVar22;
  undefined2 *puVar23;
  byte bVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
// ... (744 more lines)
```

