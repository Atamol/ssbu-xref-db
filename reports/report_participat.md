# participat (funcs=16, hits=26)

Top 50 functions by hit count

## 1. `FUN_71001846d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001846d0`  (offset `0x1846d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001846d0(int * param_1, long param_2, undefined4 * param_3, undefined4 param_4)`
- **Size / BBs / Incoming:** 304 bytes / 6 bb / 1 incoming refs
- **Match values:** Participat
- **Strings touched:** LocalAllowParticipatingJob::WaitAllowParticipating
- **Callers:** FUN_7100182610
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_71001800a0;FUN_7100184b60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001846d0__71001846d0.c)  [cfg](../decompiled/FUN_71001846d0__71001846d0.mmd)
- **Clone hash:** `9571524459fc5988`

```c

void FUN_71001846d0(int *param_1,long param_2,undefined4 *param_3,undefined4 param_4)

{
  ulong uVar1;
  int *piVar2;
  ErrorResultVariant *this;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  uVar1 = FUN_71001800a0(*(long *)(param_2 + 0xb0));
  if ((uVar1 & 1) == 0) {
    local_48[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
    piVar2 = local_48;
  }
  else {
    FUN_7100184b60(local_48,*(long **)(param_2 + 0x58),(undefined4 *)(param_2 + 0x68),param_4);
    if (local_48[0] == 0) {
      *(undefined4 *)(param_2 + 0x98) = param_4;
      local_58[0] = 0;
      this = (ErrorResultVariant *)((ulong)local_58 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
      FUN_71000bcf30((int *)(param_2 + 0x9c),local_58);
      *(undefined4 **)(param_2 + 0x60) = param_3;
      FUN_71000b40e0(param_3);
      FUN_71000b4160(*(undefined4 **)(param_2 + 0x60));
      FUN_71000b4820(*(long *)(param_2 + 0x58),1);
      *(char **)(param_2 + 0x40) = "LocalAllowParticipatingJob::WaitAllowParticipating";
      *(code **)(param_2 + 0x30) = FUN_7100184800;
      *(undefined8 *)(param_2 + 0x38) = 0;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      local_38[0] = 0;
// ... (11 more lines)
```

## 2. `FUN_710014c130`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014c130`  (offset `0x14c130`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710014c130(long param_1)`
- **Size / BBs / Incoming:** 612 bytes / 20 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** CloseParticipationJob::WaitCloseParticipation
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014c130__710014c130.c)  [cfg](../decompiled/FUN_710014c130__710014c130.mmd)
- **Clone hash:** `fb21370109d8e546`

```c

undefined8 FUN_710014c130(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_b0 [4];
  int local_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar2 = aiStack_b0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_a0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_a0);
    FUN_71000bce50(aiStack_40,local_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    local_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_a0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_a0);
    FUN_71000bce50(aiStack_60,local_50);
    piVar2 = aiStack_60;
    break;
// ... (64 more lines)
```

## 3. `FUN_7100184b60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184b60`  (offset `0x184b60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100184b60(int * param_1, long * param_2, undefined4 * param_3, undefined4 param_4)`
- **Size / BBs / Incoming:** 196 bytes / 4 bb / 1 incoming refs
- **Match values:** Participat
- **Strings touched:** LocalAllowParticipatingBackgroundJob::AllowParticipating
- **Callers:** FUN_71001846d0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4990;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100184b60__7100184b60.c)  [cfg](../decompiled/FUN_7100184b60__7100184b60.mmd)
- **Clone hash:** `3da06f9e19a1000e`

```c

void FUN_7100184b60(int *param_1,long *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  uVar1 = FUN_71000b4990((long)param_2);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = (long)param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160((undefined4 *)param_2[0xb]);
    *(undefined4 *)(param_2 + 0xc) = param_4;
    param_2[6] = (long)FUN_7100184c30;
    param_2[7] = 0;
    param_2[8] = (long)"LocalAllowParticipatingBackgroundJob::AllowParticipating";
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}


```

## 4. `FUN_710014b970`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014b970`  (offset `0x14b970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710014b970(int * param_1, long * param_2, undefined4 * param_3, undefined4 param_4, long * param_5)`
- **Size / BBs / Incoming:** 216 bytes / 4 bb / 1 incoming refs
- **Match values:** Participat
- **Strings touched:** OpenParticipationJob::OpenParticipation
- **Callers:** FUN_7100146360
- **Callees:** FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014b970__710014b970.c)  [cfg](../decompiled/FUN_710014b970__710014b970.mmd)
- **Clone hash:** `90dbd694e43daef3`

```c

void FUN_710014b970(int *param_1,long *param_2,undefined4 *param_3,undefined4 param_4,long *param_5)

{
  ulong uVar1;
  int local_50 [4];
  undefined4 local_38 [2];
  
  uVar1 = (**(code **)(*param_5 + 0xe0))(param_5);
  if ((uVar1 & 1) == 0) {
    local_50[0] = 0x10c08;
  }
  else {
    param_2[0xb] = (long)param_3;
    FUN_71000b4160(param_3);
    *(undefined4 *)(param_2 + 0x12) = param_4;
    param_2[0x13] = (long)param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[7] = 0;
    param_2[8] = (long)"OpenParticipationJob::OpenParticipation";
    param_2[6] = (long)FUN_710014ba50;
    local_50[0] = 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_50);
  return;
}


```

## 5. `FUN_710014c040`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014c040`  (offset `0x14c040`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710014c040(int * param_1, long * param_2, undefined4 * param_3, undefined4 param_4, long * param_5)`
- **Size / BBs / Incoming:** 240 bytes / 8 bb / 1 incoming refs
- **Match values:** Participat
- **Strings touched:** CloseParticipationJob::CloseParticipation
- **Callers:** FUN_7100146730
- **Callees:** FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014c040__710014c040.c)  [cfg](../decompiled/FUN_710014c040__710014c040.mmd)
- **Clone hash:** `7c96d1b73b237984`

```c

void FUN_710014c040(int *param_1,long *param_2,undefined4 *param_3,undefined4 param_4,long *param_5)

{
  ulong uVar1;
  int local_50 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == (undefined4 *)0x0) || (param_5 == (long *)0x0)) {
    local_50[0] = 0x10c07;
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0xe0))(param_5);
    if ((uVar1 & 1) == 0) {
      local_50[0] = 0x10c08;
    }
    else {
      param_2[0xb] = (long)param_3;
      FUN_71000b4160(param_3);
      *(undefined4 *)(param_2 + 0x12) = param_4;
      param_2[0x13] = (long)param_5;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[7] = 0;
      param_2[8] = (long)"CloseParticipationJob::CloseParticipation";
      param_2[6] = (long)FUN_710014c130;
      local_50[0] = 0;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_50);
  return;
}


```

## 6. `FUN_710014ba50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014ba50`  (offset `0x14ba50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710014ba50(void)`
- **Size / BBs / Incoming:** 612 bytes / 20 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** OpenParticipationJob::WaitOpenParticipation
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014ba50__710014ba50.c)  [cfg](../decompiled/FUN_710014ba50__710014ba50.mmd)
- **Clone hash:** `60c108a16e73202f`

```c

undefined8 FUN_710014ba50(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_b0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_a0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_a0);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_a0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_a0);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
// ... (66 more lines)
```

## 7. `FUN_7101c7d8e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c7d8e0`  (offset `0x1c7d8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c7d8e0(long param_1, undefined8 * param_2, undefined * * param_3, undefined2 * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3848 bytes / 150 bb / 1 incoming refs
- **Match values:** participat
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

## 8. `FUN_7100184800`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184800`  (offset `0x184800`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100184800(long param_1)`
- **Size / BBs / Incoming:** 248 bytes / 13 bb / 2 incoming refs
- **Match values:** Participat
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

## 9. `FUN_7101c3fbe0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3fbe0`  (offset `0x1c3fbe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3fbe0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2940 bytes / 121 bb / 1 incoming refs
- **Match values:** participat
- **Strings touched:** set_pic_final_base;hidden;set_final_pos_p%d;set_current_table;set_pic_panel;missed;participate;size_h1;size_h2
- **Callees:** FUN_7101c3f510;FUN_710234d8a0;FUN_7102350980;FUN_7102351c30;FUN_7102356460;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101c3fbe0__7101c3fbe0.c)  [cfg](../decompiled/FUN_7101c3fbe0__7101c3fbe0.mmd)
- **Clone hash:** `80b891e07ed815c1`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c3fbe0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 local_b8;
// ... (482 more lines)
```

## 10. `FUN_710014c3a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710014c3a0`  (offset `0x14c3a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710014c3a0(void)`
- **Size / BBs / Incoming:** 492 bytes / 18 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** select_item;CloseParticipationJob::WaitP2pStable
- **Callees:** FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710014c3a0__710014c3a0.c)  [cfg](../decompiled/FUN_710014c3a0__710014c3a0.mmd)
- **Clone hash:** `7ea10291fcc7170f`

```c

undefined8 FUN_710014c3a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
  case 7:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
// ... (43 more lines)
```

## 11. `FUN_710010a020`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a020`  (offset `0x10a020`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a020(void)`
- **Size / BBs / Incoming:** 492 bytes / 24 bb / 3 incoming refs
- **Match values:** Participat
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::ChangeParticipation
- **Callees:** FUN_71000bcf30;FUN_71000c36b0;FUN_7100146ba0;FUN_7100146e00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010a020__710010a020.c)  [cfg](../decompiled/FUN_710010a020__710010a020.mmd)
- **Clone hash:** `59a6d31b7936e1da`

```c

undefined8 FUN_710010a020(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(param_1 + 0x160) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(undefined1 *)(param_1 + 0x184) = 0;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar4 = "NexMatchRandomMatchmakeJob::StartNatSession";
        goto LAB_710010a11c;
      }
      if (*(ulong *)(param_1 + 0x158) < *(ulong *)(DAT_71052ac580 + 0x30)) goto LAB_710010a17c;
      lVar5 = *(long *)(param_1 + 0x150);
      if ((lVar5 == 0) || (lVar3 = FUN_71000c36b0(DAT_71052acd90), lVar5 != lVar3)) {
        return 5;
// ... (40 more lines)
```

## 12. `FUN_7100176560`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176560`  (offset `0x176560`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176560(void)`
- **Size / BBs / Incoming:** 448 bytes / 17 bb / 3 incoming refs
- **Match values:** Participat
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::ChangeAllowParticipatingState
- **Callees:** FUN_71000b1cf0;FUN_71000b28c0;FUN_71000b2b70;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71000be920;FUN_71000be940;FUN_71000beb80;FUN_7100172880;FUN_710017f110;FUN_7100181120
- **Files:** [decomp](../decompiled/FUN_7100176560__7100176560.c)  [cfg](../decompiled/FUN_7100176560__7100176560.mmd)
- **Clone hash:** `edb2e6dc8ceaf7a4`

```c

undefined8 FUN_7100176560(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined **appuStack_c0 [5];
  int aiStack_98 [4];
  undefined **ppuStack_88;
  undefined4 uStack_80;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_7100181120(*(long *)(param_1 + 0x78),1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x78);
      uVar6 = 1;
    }
    else {
      ppuStack_88 = (undefined **)0x0;
      FUN_71000bb5d0(&ppuStack_88);
      lVar8 = (long)ppuStack_88 - *(long *)(param_1 + 0x70);
      plVar3 = FUN_71000bb680();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar8 / *plVar3;
      }
      if (lVar4 < 0x1b59) {
        return 5;
      }
      lVar4 = *(long *)(param_1 + 0x78);
      lVar8 = 0;
      do {
        lVar4 = lVar4 + lVar8;
// ... (41 more lines)
```

## 13. `FUN_71000f74b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f74b0`  (offset `0xf74b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f74b0(void)`
- **Size / BBs / Incoming:** 744 bytes / 25 bb / 4 incoming refs
- **Match values:** Participat
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::CloseJointSessionParticipation;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100146ba0;FUN_7100148dc0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f74b0__71000f74b0.c)  [cfg](../decompiled/FUN_71000f74b0__71000f74b0.mmd)
- **Clone hash:** `243ef268b35a11f4`

```c

undefined8 FUN_71000f74b0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  code *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
// ... (76 more lines)
```

## 14. `FUN_71000f77a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f77a0`  (offset `0xf77a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f77a0(void)`
- **Size / BBs / Incoming:** 676 bytes / 20 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::CloseJointSessionParticipation;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100146ba0;FUN_7100149240;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f77a0__71000f77a0.c)  [cfg](../decompiled/FUN_71000f77a0__71000f77a0.mmd)
- **Clone hash:** `627adc0f62afc2a5`

```c

undefined8 FUN_71000f77a0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  switch(iVar4) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    uVar5 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x98))();
    if ((uVar5 & 1) == 0) {
      return 5;
    }
    piVar1 = (int *)(param_1 + 100);
    FUN_71000bce50(aiStack_50,piVar1);
// ... (67 more lines)
```

## 15. `FUN_71001849e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001849e0`  (offset `0x1849e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001849e0(void)`
- **Size / BBs / Incoming:** 84 bytes / 3 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** LocalAllowParticipatingJob::CompleteProcess
- **Callees:** FUN_71000b4a50
- **Files:** [decomp](../decompiled/FUN_71001849e0__71001849e0.c)  [cfg](../decompiled/FUN_71001849e0__71001849e0.mmd)
- **Clone hash:** `b337de7b0bb8f7ff`

```c

undefined8 FUN_71001849e0(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_71000b4a50(*(long *)(param_1 + 0x58));
  if ((uVar1 & 1) != 0) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_7100184a40;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalAllowParticipatingJob::CompleteProcess";
  return 0;
}


```

## 16. `FUN_7100176720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176720`  (offset `0x176720`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176720(void)`
- **Size / BBs / Incoming:** 216 bytes / 5 bb / 2 incoming refs
- **Match values:** Participat
- **Strings touched:** LocalHostMigrationJob::WaitChangeAllowParticipatingState
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100176130;FUN_7100181270;FUN_7100182610;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176720__7100176720.c)  [cfg](../decompiled/FUN_7100176720__7100176720.mmd)
- **Clone hash:** `2ff31330c74fccb2`

```c

undefined8 FUN_7100176720(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int aiStack_58 [4];
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100181270(*(long *)(param_1 + 0x78));
  FUN_7100182610(aiStack_38,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),uVar1);
  if (aiStack_38[0] == 0) {
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitChangeAllowParticipatingState";
    *(code **)(param_1 + 0x30) = FUN_7100176800;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    aiStack_48[0] = 0x4c11;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
    if (aiStack_38[0] != aiStack_48[0]) {
      puVar2 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_58,aiStack_38);
      FUN_71000b41f0(puVar2,aiStack_58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      FUN_7100176130(param_1);
      return 1;
    }
  }
  return 5;
}


```

