# gekitui (funcs=2, hits=4)

Top 50 functions by hit count

## 1. `FUN_7101a07110`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a07110`  (offset `0x1a07110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a07110(long param_1, undefined8 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 544 bytes / 19 bb / 4 incoming refs
- **Match values:** gekitui
- **Strings touched:** set_parts_gekitui;set_txt_help;gekitui_on;gekitui_off
- **Callers:** FUN_710183be60;FUN_7101a1cb30;FUN_7101a4e880;FUN_7101a5fb40
- **Callees:** FUN_7101696040;FUN_71016b6a10;FUN_71019fd0b0;FUN_7101a00940;FUN_7103265e70;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_71037a2270;FUN_71037ad940;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101a07110__7101a07110.c)  [cfg](../decompiled/FUN_7101a07110__7101a07110.mmd)
- **Clone hash:** `2b420a97da964ea9`

```c

void FUN_7101a07110(long param_1,undefined8 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  ushort local_80 [32];
  
  uVar8 = *param_2;
  uVar7 = param_2[1];
  uVar9 = param_2[2];
  *(undefined2 *)(param_1 + 0x3a8) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x3a0) = uVar9;
  *(undefined8 *)(param_1 + 0x398) = uVar7;
  *(undefined8 *)(param_1 + 0x390) = uVar8;
  uVar8 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x3b4) = *(undefined2 *)((long)param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x3ac) = uVar8;
  if ((undefined8 *)(param_1 + 0x390) != param_2) {
    FUN_7101696040((uint *)(param_1 + 0x3b8),(ushort *)(param_2 + 6));
  }
  uVar8 = param_2[0xc];
  *(undefined8 *)(param_1 + 0x3f5) = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x3f0) = uVar8;
  uVar8 = param_2[0xe];
  uVar7 = param_2[0xf];
// ... (99 more lines)
```

## 2. `FUN_71019fe1e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019fe1e0`  (offset `0x19fe1e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019fe1e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7444 bytes / 371 bb / 1 incoming refs
- **Match values:** gekitui
- **Strings touched:** controller_entry_cut_off;gekitui_off;hd_off;dash_pokemon_off;subwindow_off;local_off;set_window;NODE_PRE_REFRACT_BLEND;set_cursor;set_btn_panel;set_btn_flag_team;set_btn_name;set_btn_hd;set_btn_sp;set_part_chara_pk;set_part_chara_element;set_parts_controller_res;set_lct_controller_entry;fp_level_off;set_txt_00;set_txt_fp_level;set_txt_level;set_txt_dmg;set_txt_hp;set_lct_hd;bg_set_ch;cmn_%dp;set_txt_player_off;controller_joy_dual;set_txt_btn;controller_off;btn_anim;...
- **Callers:** FUN_7101a04050
- **Callees:** FUN_71003a4ca0;FUN_71019fbbd0;FUN_71019fbf50;FUN_71019fc090;FUN_71019fc7a0;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103772070;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778630;...
- **Files:** [decomp](../decompiled/FUN_71019fe1e0__71019fe1e0.c)  [cfg](../decompiled/FUN_71019fe1e0__71019fe1e0.mmd)
- **Clone hash:** `52d7402733de411f`

```c

void FUN_71019fe1e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long ****pppplVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
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
  undefined8 uVar13;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
// ... (1414 more lines)
```

