# friend (funcs=8, hits=22)

Top 50 functions by hit count

## 1. `FUN_7101bd7a40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7a40`  (offset `0x1bd7a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9880 bytes / 588 bb / 2 incoming refs
- **Match values:** friend
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

## 2. `FUN_7101cda440`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cda440`  (offset `0x1cda440`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cda440(undefined8 param_1, ulong param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 568 bytes / 36 bb / 1 incoming refs
- **Match values:** friend
- **Strings touched:** set_txt_name;mnu_share_search_follow_nam;friend_icon_hide;friend_icon_show
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101cda440__7101cda440.c)  [cfg](../decompiled/FUN_7101cda440__7101cda440.mmd)
- **Clone hash:** `e57b4aff9adb21ac`

```c

void FUN_7101cda440(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **local_40;
  ulong local_38;
  
  lVar5 = DAT_7105324fd8;
  lVar4 = param_3;
  if (((DAT_7105324fd0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324fd0), iVar2 != 0)) {
    DAT_7105324fb0 = 0;
    DAT_7105324fb8 = 0;
    __cxa_guard_release(&DAT_7105324fd0);
  }
  FUN_7103776910(&local_40,param_3,(long ****)"set_txt_name",lVar4,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a280((long)&local_40,(byte *)"mnu_share_search_follow_nam",1);
  uVar10 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  lVar5 = *(long *)(lVar5 + 8);
  if (*(int *)(lVar5 + 200) == 3) {
    pcVar3 = "friend_icon_hide";
    if ((param_2 & 0xffffffff) < *(ulong *)(lVar5 + 0x16c8)) {
      uVar10 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
// ... (63 more lines)
```

## 3. `FUN_7101bd7000`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bd7000`  (offset `0x1bd7000`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bd7000(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2612 bytes / 173 bb / 2 incoming refs
- **Match values:** friend
- **Strings touched:** set_txt_name;btn_new;icon_type_new;set_parts_profileicon_00;set_icn_profile;set_icn_profile_bg;type_00;set_icn_room_new;lock_off;friend_off;friend_on;btn_melee;btn_any;btn_spirits;icon_type_melee;icon_type_any;icon_type_any_lock;icon_type_spirits;lock_on_lock;btn_disable
- **Callers:** FUN_7101bd43a0;FUN_7101bdd4b0
- **Callees:** FUN_7101bda220;FUN_710323f760;FUN_710337d450;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778b80;FUN_710377aee0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101bd7000__7101bd7000.c)  [cfg](../decompiled/FUN_7101bd7000__7101bd7000.mmd)
- **Clone hash:** `58bc90e8436936e2`

```c

void FUN_7101bd7000(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long ****pppplVar8;
  long *********ppppppppplVar9;
  long ******pppppplVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  undefined **local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  long *local_80;
  undefined **local_78;
  long *local_70;
  long ********local_68;
  long *local_60;
  undefined4 local_54;
  
  if (param_3[1][1] == (long *******)0x0) {
// ... (472 more lines)
```

## 4. `FUN_7101a7b780`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a7b780`  (offset `0x1a7b780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a7b780(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 162 bb / 1 incoming refs
- **Match values:** friend
- **Strings touched:** grayout;tagcolor_%02d;set_txt_name;mnu_opt_online_nickname;set_txt_win_count;mnu_opponents_card_win_n;new_on;new_off;favorite_on;favorite_off;friend_on;friend_off;uncheck_on;uncheck_off;check_on;check_off
- **Callees:** FUN_7101aeec40;FUN_7101aeeea0;FUN_7103776390;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778430;FUN_710377a280;FUN_710377b140;FUN_7103796f20;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a7b780__7101a7b780.c)  [cfg](../decompiled/FUN_7101a7b780__7101a7b780.mmd)
- **Clone hash:** `1942c793d6aa4137`

```c

void FUN_7101a7b780(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  ulong uVar9;
  long ******pppppplVar10;
  long *plVar11;
  long *******ppppppplVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_140;
  ulong local_138;
  undefined **local_130;
  ulong local_128;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  ulong local_108;
  undefined **local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
// ... (568 more lines)
```

## 5. `FUN_7101823ae0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101823ae0`  (offset `0x1823ae0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101823ae0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5048 bytes / 256 bb / 1 incoming refs
- **Match values:** friend
- **Strings touched:** footer_help_in;fp_icon_on;set_txt_name_fp;fp_name_on;fp_icon_off;set_txt_name;fp_name_off;gauge_parts_on;set_txt_date;set_txt_time;chara/chara_4/chara_4_;set_pic_icon;set_icn_profile;set_icn_profile_bg;set_rep_chara;friend_on;friend_off
- **Callees:** FUN_7101aa3060;FUN_7101af4610;FUN_7101af53d0;FUN_7101af6200;FUN_7101af90b0;FUN_7103238a70;FUN_7103239360;FUN_710323c4e0;FUN_710323f330;FUN_7103240430;FUN_710337d450;FUN_7103741810;FUN_710376b960;FUN_7103771a80;FUN_7103771be0;FUN_7103771d60;...
- **Files:** [decomp](../decompiled/FUN_7101823ae0__7101823ae0.c)  [cfg](../decompiled/FUN_7101823ae0__7101823ae0.mmd)
- **Clone hash:** `e0c8fa10d87e2af0`

```c

void FUN_7101823ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  long lVar16;
  code *pcVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  long lVar31;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
// ... (845 more lines)
```

## 6. `FUN_7101a9dcc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a9dcc0`  (offset `0x1a9dcc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a9dcc0(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1404 bytes / 57 bb / 1 incoming refs
- **Match values:** friend
- **Strings touched:** fp_icon_on;set_txt_name_fp;fp_name_on;fp_icon_off;set_txt_name;fp_name_off;gauge_parts_on;set_txt_date;set_txt_time;set_pic_icon_00;set_icn_profile;set_icn_profile_bg;set_rep_chara;friend_on;friend_off
- **Callees:** FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103240430;FUN_710337d450;FUN_7103741810;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_71037790a0;FUN_710377a310;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a9dcc0__7101a9dcc0.c)  [cfg](../decompiled/FUN_7101a9dcc0__7101a9dcc0.mmd)
- **Clone hash:** `199963683ada79ad`

```c

void FUN_7101a9dcc0(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined **local_a8;
  undefined8 *local_a0;
  long ********local_98;
  ulong local_90;
  undefined **local_88;
  undefined8 *local_80;
  undefined **local_78;
  ulong local_70;
  ulong local_68;
  
  plVar14 = (long *)(param_1 + 8);
  uVar11 = (*(long *)(param_1 + 0x10) - *plVar14 >> 4) * -0x3333333333333333;
  uVar16 = (ulong)param_2;
  if (uVar11 < uVar16 || uVar11 - uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  cVar1 = *(char *)(*plVar14 + uVar16 * 0x50 + 0x46);
// ... (215 more lines)
```

## 7. `FUN_7101bddb60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bddb60`  (offset `0x1bddb60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bddb60(long param_1, undefined8 * param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 19 bb / 2 incoming refs
- **Match values:** friend
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

## 8. `FUN_7101d43940`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d43940`  (offset `0x1d43940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d43940(long * * * * param_1)`
- **Size / BBs / Incoming:** 8424 bytes / 455 bb / 1 incoming refs
- **Match values:** friend
- **Strings touched:** set_parts_oppo_tag;nomal;set_parts_btn_00;size0_icon;set_parts_btn_01;size1_color;set_parts_btn_02;size2_shortmail;set_parts_btn_03;lct_oppo_tag_pos;RootPane;selector;set_footer_area;selector_01;set_parts_colorplt_%02d;btn01_color_%02d;selector_00;set_rep_icn_fighter;on_plt_menu_lyt_00;off_plt_menu_lyt_00;scroll;set_txt_name;pic_count_bg;pic_friend;pic_favorite;set_parts_newitem
- **Callers:** FUN_71018cede0
- **Callees:** FUN_71017980f0;FUN_7101989a30;FUN_7101989b70;FUN_7101a7ed70;FUN_7101aeec40;FUN_7101d45a30;FUN_7101d45e30;FUN_7101d45e40;FUN_7101d46020;FUN_7101d46030;FUN_7101d46230;FUN_7101d46240;FUN_7103239360;FUN_710323ac20;FUN_710323c4e0;FUN_7103293b70;...
- **Files:** [decomp](../decompiled/FUN_7101d43940__7101d43940.c)  [cfg](../decompiled/FUN_7101d43940__7101d43940.mmd)
- **Clone hash:** `8ee5c027c35211e6`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d43940(long ****param_1)

{
  uint *puVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long **pplVar8;
  byte ****ppppbVar9;
  undefined3 *puVar10;
  long **pplVar11;
  long *plVar12;
  long *plVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  undefined8 *puVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****in_x4;
  long ****pppplVar19;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined3 uVar20;
  uint uVar21;
  long lVar22;
  long **pplVar23;
  char *pcVar24;
  long ********pppppppplVar25;
  long *plVar26;
  byte **ppbVar27;
  code *pcVar28;
  long *plVar29;
  long lVar30;
// ... (1514 more lines)
```

