# kick (funcs=8, hits=147)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=126)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** KICK
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

## 2. `FUN_710225b990`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** KICK
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

## 3. `FUN_710018dc30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018dc30`  (offset `0x18dc30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018dc30(long * param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 400 bytes / 22 bb / 1 incoming refs
- **Match values:** Kick
- **Strings touched:** KickoutManageJob::ClientStartLeaveMesh;KickoutManageJob::ClientFinalize
- **Callers:** FUN_7100197f50
- **Callees:** FUN_71000b4990;FUN_71000bcf30;FUN_71001936d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710018dc30__710018dc30.c)  [cfg](../decompiled/FUN_710018dc30__710018dc30.mmd)
- **Clone hash:** `00c8791f4fdb4879`

```c

undefined8 FUN_710018dc30(long *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  int local_40 [4];
  undefined4 local_28 [2];
  
  (**(code **)(*param_1 + 0x30))();
  if (((int)param_1[0x2c] == 1) || (uVar1 = FUN_71000b4990((long)param_1), (uVar1 & 1) != 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x10))(param_1,1);
  *(undefined4 *)(param_1 + 0x2b) = param_2;
  uVar1 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 8));
  if ((uVar1 & 1) != 0) {
    iVar2 = (int)param_1[0x2b];
    if (iVar2 - 4U < 0x15) {
      if (iVar2 == 7) {
        local_40[0] = 0x6848;
      }
      else if (iVar2 == 6) {
        local_40[0] = 0x6847;
      }
      else if (iVar2 == 5) {
        local_40[0] = 0x6846;
      }
      else {
        local_40[0] = 0x6849;
      }
    }
    else {
      local_40[0] = 0x6838;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (30 more lines)
```

## 4. `FUN_710018de80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018de80`  (offset `0x18de80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018de80(void)`
- **Size / BBs / Incoming:** 272 bytes / 11 bb / 3 incoming refs
- **Match values:** Kick
- **Strings touched:** KickoutManageJob::ClientFinalize;KickoutManageJob::ClientWaitLeaveMesh
- **Callees:** FUN_71000b4820;FUN_710018eac0;FUN_710018eaf0;FUN_7100192e90;FUN_7100193560;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710018de80__710018de80.c)  [cfg](../decompiled/FUN_710018de80__710018de80.mmd)
- **Clone hash:** `9b7d7c5a9ad664ff`

```c

undefined8 FUN_710018de80(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  char *pcVar7;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  lVar1 = DAT_71052adfc0;
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  if (bVar2 < 0x20) {
    FUN_7100192e90(aiStack_40,lVar1);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) || (*(char *)(param_1 + 0x198) != '\0')) {
      uVar3 = FUN_710018eaf0(*(long **)(lVar1 + 0x10),(undefined4 *)(param_1 + 0x160));
      if ((uVar3 & 1) == 0) {
        uVar5 = FUN_710018eac0(*(long *)(lVar1 + 0x10),(undefined4 *)(param_1 + 0x160));
        if ((uVar5 & 1) == 0) {
          return 5;
        }
      }
      else {
        FUN_71000b4820(*(long *)(lVar1 + 0x10),0);
      }
      pcVar6 = FUN_710018df90;
      uVar4 = 5;
      pcVar7 = "KickoutManageJob::ClientWaitLeaveMesh";
      goto LAB_710018df74;
    }
// ... (11 more lines)
```

## 5. `FUN_71000d5530`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5530`  (offset `0xd5530`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5530(void)`
- **Size / BBs / Incoming:** 324 bytes / 16 bb / 3 incoming refs
- **Match values:** Kick
- **Strings touched:** NexJoinMeshJob::LeaveMeshWithHostMigration;NexJoinMeshJob::LeaveMesh;NexJoinMeshJob::WaitCheckHostConnection;NexJoinMeshJob::WaitCheckKickoutJob
- **Callees:** FUN_7100152020;FUN_7100152040;FUN_710018b370;FUN_710018b870;FUN_71001921a0;FUN_7100192f60;FUN_71001931d0
- **Files:** [decomp](../decompiled/FUN_71000d5530__71000d5530.c)  [cfg](../decompiled/FUN_71000d5530__71000d5530.mmd)
- **Clone hash:** `f8cb40dd8874177c`

```c

undefined8 FUN_71000d5530(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar3 = FUN_7100192f60(DAT_71052adfc0);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar4 = FUN_710018b370(param_1);
    if (((uVar4 & 1) != 0) ||
       ((bVar1 = FUN_71001921a0(DAT_71052adfc0), (bVar1 & 1) == 0 &&
        (uVar4 = FUN_710018b870(param_1), (uVar4 & 1) != 0)))) {
      FUN_7100152020(lVar3);
      return 1;
    }
    bVar2 = FUN_7100152040(lVar3);
    if (!bVar2) {
      return 5;
    }
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if ((bVar1 & 1) == 0) {
      *(code **)(param_1 + 0x30) = FUN_71000d5800;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckKickoutJob";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_71000d5680;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckHostConnection";
    }
  }
  else {
    FUN_7100152020(lVar3);
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) == 0) || (bVar2 = FUN_71001931d0(DAT_71052adfc0), !bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d6e0;
// ... (13 more lines)
```

## 6. `FUN_7101f89310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** KICK
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

## 7. `FUN_7100156720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100156720`  (offset `0x156720`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7100156720(undefined8 param_1)`
- **Size / BBs / Incoming:** 392 bytes / 33 bb / 2 incoming refs
- **Match values:** Kick
- **Strings touched:** KeepAlive;chara/chara_4/chara_4_;Station;(KickoutReason_Unknown PROTOCOL NAME);SyncClock;Local;Direct;BandwidthCheck;Unreliable;RoundrobinUnreliable;select_item;Clone;Atomic;Event;Clock;InterpolationClock;NODE_PRE_REFRACT_BLEND;Voice;Reliable;BroadcastReliable;StreamBroadcastReliable;ReliableBroadcast;Session;Lobby;Feedback;RelayService;WanNat
- **Callers:** FUN_7100154a40
- **Files:** [decomp](../decompiled/FUN_7100156720__7100156720.c)  [cfg](../decompiled/FUN_7100156720__7100156720.mmd)
- **Clone hash:** `7d2ee8f7c1fc3923`

```c

char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
// ... (33 more lines)
```

## 8. `FUN_710018df90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018df90`  (offset `0x18df90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018df90(void)`
- **Size / BBs / Incoming:** 60 bytes / 3 bb / 2 incoming refs
- **Match values:** Kick
- **Strings touched:** KickoutManageJob::ClientFinalize
- **Files:** [decomp](../decompiled/FUN_710018df90__710018df90.c)  [cfg](../decompiled/FUN_710018df90__710018df90.mmd)
- **Clone hash:** `4e5bf27803365ef9`

```c

undefined8 FUN_710018df90(long param_1)

{
  if (*(int *)(param_1 + 0x160) - 2U < 3) {
    *(code **)(param_1 + 0x30) = FUN_710018ddc0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "KickoutManageJob::ClientFinalize";
    return 0;
  }
  return 5;
}


```

