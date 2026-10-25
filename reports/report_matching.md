# matching (funcs=3, hits=4)

Top 50 functions by hit count

## 1. `FUN_710168c4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710168c4d0`  (offset `0x168c4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 55 bb / 1 incoming refs
- **Match values:** matching
- **Strings touched:** hac_p_aaaba_session_end;Ver. %d.%d.%d;app_version;gathering_id;gamemode;min_players;max_players;rating;country;scorebased_key;scorebased_value;cluster_id;rate_rank;is_vip;is_parallel;matching_retry;match_result;wait_interval
- **Callees:** FUN_71000001c0;FUN_710167fac0;FUN_710172b370;FUN_710172bb90;FUN_7101747490;FUN_7101764000;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add
- **Files:** [decomp](../decompiled/FUN_710168c4d0__710168c4d0.c)  [cfg](../decompiled/FUN_710168c4d0__710168c4d0.mmd)
- **Clone hash:** `4a9e8d132a490049`

```c

void FUN_710168c4d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  ulong local_68;
  ulong local_60;
  ulong *local_48;
  
  iVar6 = (int)param_3;
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      ppppbVar10 = param_4;
      if ((*(int *)(param_1 + 0x269c0) == 0xc) && (*(byte *)(param_4 + 1) < 3)) {
        lVar13 = *DAT_710593b580;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x98);
        iVar3 = *(int *)(lVar13 + 0x7300);
        uVar2 = *(uint *)(lVar11 + 0xdcc);
        if (iVar3 == -1) {
          plVar7 = (long *)(lVar13 + 0x28);
        }
        else {
          if (*(ulong *)(lVar13 + 0x72c0) <= (ulong)(long)iVar3) goto LAB_710168caf0;
          plVar7 = (long *)(lVar13 + (long)iVar3 * 0xcc0 + 0xce8);
        }
        lVar11 = lVar11 + 0x540;
// ... (148 more lines)
```

## 2. `FUN_71019d0fb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019d0fb0`  (offset `0x19d0fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019d0fb0(long * * param_1, long * param_2)`
- **Size / BBs / Incoming:** 11700 bytes / 516 bb / 1 incoming refs
- **Match values:** matching
- **Strings touched:** scroll;scr_sort;plate_side;set_parts_submenu;submenu_item_01;set_det_column_0%d;category_0%d;value_txt;value_color;color_00;btn_keyhelp_00;set_txt_icon;mii_select_scroller;sub_menu;sort_window;sort_window_facade;set_detail;is_max_num;is_full;is_favorite_fighter;switch_favorite_fighter;post_fighter;is_finished_post;is_succeeded_post;delete_fighter;get_no_delete_popup_id;is_parallel_matching;reload_fighter;sort_data_id_list;backup_list_selected_id;gauge_parts_on;select_list_from_backup_id;...
- **Callers:** FUN_710180f330
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101764000;FUN_71017bd310;FUN_71017bd3e0;FUN_71019c1c50;FUN_71019d6770;FUN_71019d6830;FUN_71019dc4e0;FUN_71019dc640;FUN_71019dc780;FUN_71019dc900;FUN_71019e0910;FUN_7101ccce30;FUN_71032cb040;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_71019d0fb0__71019d0fb0.c)  [cfg](../decompiled/FUN_71019d0fb0__71019d0fb0.mmd)
- **Clone hash:** `fb467ceec23953e7`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019d0fb0(long **param_1,long *param_2)

{
  int *piVar1;
  long **pplVar2;
  undefined4 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *****ppppplVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  long *****ppppplVar13;
  long **pplVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long ***ppplVar19;
  byte ***pppbVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar21;
  undefined **ppuVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
// ... (2174 more lines)
```

## 3. `FUN_71036f9420`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036f9420`  (offset `0x36f9420`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71036f9420(long param_1, long * param_2, void * param_3)`
- **Size / BBs / Incoming:** 640 bytes / 31 bb / 12 incoming refs
- **Match values:** Matching
- **Strings touched:** TaskMatching
- **Callers:** FUN_71016898c0;FUN_7101689ac0;FUN_710168f330;FUN_71016a0e40;FUN_71016a1170;FUN_71016a2c00;FUN_71016a7820;FUN_71016a86a0;FUN_71016a9070;FUN_71016ab5e0;FUN_71016b5750;FUN_71016b62d0
- **Callees:** <EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_71036f9420__71036f9420.c)  [cfg](../decompiled/FUN_71036f9420__71036f9420.mmd)
- **Clone hash:** `82849c9547a25144`

```c

int FUN_71036f9420(long param_1,long *param_2,void *param_3)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    std::recursive_mutex::lock();
    plVar6 = *(long **)(lVar5 + 0x28);
    plVar3 = plVar6 + 0x75;
    if (*(long **)(lVar5 + 0x18) < plVar3) {
      plVar6 = *(long **)(lVar5 + 0x10);
      plVar3 = plVar6 + 0x75;
      if (*(long **)(lVar5 + 0x20) < plVar3) {
        std::recursive_mutex::unlock();
        return 0;
      }
    }
    *(long **)(lVar5 + 0x28) = plVar3;
    *plVar6 = 0;
    plVar6[1] = 0;
    if (*(long *)(lVar5 + 0x30) == 0) {
      *(long **)(lVar5 + 0x30) = plVar6;
    }
    else {
      *plVar6 = *(long *)(lVar5 + 0x38);
      *(long **)(*(long *)(lVar5 + 0x38) + 8) = plVar6;
    }
    *(long **)(lVar5 + 0x38) = plVar6;
    plVar6[2] = (long)&PTR_FUN_710509dfd8;
    plVar6[3] = 0;
// ... (75 more lines)
```

