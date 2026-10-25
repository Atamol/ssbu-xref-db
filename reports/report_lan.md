# lan (funcs=232, hits=901)

Top 50 functions by hit count

## 1. `FUN_7103612e50`  (hits=74)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103612e50`  (offset `0x3612e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7103612e50(void)`
- **Size / BBs / Incoming:** 23636 bytes / 881 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** MAIN_CLEAR_COLOR;per_frame;light_entry;light_area;chara/chara_4/chara_4_;per_pass;COLOR_CORRECTION;UI_FG_3D;RepParameter;nu::Debug2D;select_item;nu::Final;N2nn3pia3lan25LanMatchDestroySessionJobE;MIRROR_BLEND_EFFECT_MERGE;PassMainMotionBlur0;BLEND_BG_MERGE;BLEND4_MERGE;BLEND_EFFECT_GLR_MERGE;plate_side;GL_PS_NM_MERGE;BLEND16_RESOLVE;MB_PassTmp0;MB_PassTmp1;PassMainMotionBlur1;MO_PS_SUB_MERGE_0;BLEND_MERGE;SILHOUETTE_FAR_DRAW_QUAD;INVINCIBLE_PARTS_MODEL;RESOLVE_COLOR;MAIN_CLEAR_DEPTH;3D_OFFSCREEN;3D_0_OPAQUE;...
- **Callers:** FUN_71035a46e0
- **Callees:** FUN_71000001c0;nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance;FUN_71035404b0;FUN_7103540b10;FUN_71035465b0;FUN_710354d9b0;FUN_710354ea90;FUN_71035504c0;FUN_7103553740;FUN_7103553af0;FUN_71035542c0;FUN_7103554e50;FUN_7103554ff0;FUN_71035585c0;FUN_71035add90;FUN_710360f510;...
- **Files:** [cfg](../decompiled/FUN_7103612e50__7103612e50.mmd)


## 2. `FUN_710225b990`  (hits=60)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** LAN
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

## 3. `FUN_7103656570`  (hits=56)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103656570`  (offset `0x3656570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103656570(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 15284 bytes / 872 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** BLEND4_DEPTH_STENCIL_COPY;N2nn3pia3lan25LanMatchDestroySessionJobE;BLEND4_DEPTH_COPY;BLEND4_DRAW;BLEND4_MERGE;BLEND_EFFECT_GLR_DEPTH_COPY;BLEND_EFFECT_GLR_DEPTH_STENCIL_COPY;BLEND_EFFECT_GLR_COLOR_CLEAR;PRE_REFRACT_COPY;PRE_REFRACT;POST_REFRACT_CLEAR;POST_REFRACT_COPY;UI_REFRACT_COPY;UI_REFRACT;BLEND16_DEPTH_COPY;VELOCITY_MAP_CLEAR;BLEND_UI_CLEAR;BLEND_UI_EFFECT_3D;UI_RENDERTEXTURE_CLEAR;UI_RENDERTEXTURE;BLEND_NEAR;SILHOUETTE_FAR_DRAW_MODEL;SILHOUETTE_FAR_DRAW_QUAD;SILHOUETTE_NEAR_COPY;SILHOUETTE_NEAR_DRAW;INVINCIBLE_PARTS_MODEL;INVINCIBLE_PARTS;COPY_FOR_RESUME_FROM_SLEEP;RESUME_FROM_SLEEP;M_E_PREVIEW;M_E_PREVIEW_COPY;M_E_PREVIEW_CLEAR;...
- **Callers:** FUN_71035a46e0
- **Callees:** FUN_7103655da0;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook
- **Files:** [decomp](../decompiled/FUN_7103656570__7103656570.c)  [cfg](../decompiled/FUN_7103656570__7103656570.mmd)
- **Clone hash:** `d24968a53f1af259`

```c

/* WARNING: Removing unreachable block (ram,0x007103656bc8) */
/* WARNING: Removing unreachable block (ram,0x007103656f8c) */
/* WARNING: Removing unreachable block (ram,0x00710365798c) */

void FUN_7103656570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  long ***ppplVar3;
  undefined4 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined6 uVar8;
  undefined1 uVar9;
  int iVar10;
  ulong uVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  byte *pbVar14;
  long *********ppppppppplVar15;
  long ***ppplVar16;
  long ****pppplVar17;
  long *****ppppplVar18;
  long ****pppplVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  long *********ppppppppplVar24;
  long **********pppppppppplVar25;
  long ******pppppplVar26;
  long *****ppppplVar27;
  long ****pppplVar28;
  long *********ppppppppplVar29;
  long ****pppplVar30;
  long ****pppplVar31;
// ... (3343 more lines)
```

## 4. `FUN_71020fbb90`  (hits=45)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** LAN;lan;Lan
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

## 5. `FUN_710362c4a0`  (hits=26)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710362c4a0`  (offset `0x362c4a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710362c4a0(long param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13472 bytes / 563 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** NODE_PRE_REFRACT_BLEND;copy_refract_velocity_ps;ColorResolveDynamicResolutionGaussianBlurPS;RTV_MIRROR_SRV;RTV_BLEND_64_SRV;RTV_BLEND_16_SRV;MIRROR_BLEND_EFFECT_DEPTH_COPY;MIRROR_BLEND_EFFECT_DEPTH_COPY_QUAT;MIRROR_BLEND_EFFECT_DEPTH_COPY_EIGH;MIRROR_COPY_POST_REFRACT;N2nn3pia3lan25LanMatchDestroySessionJobE;FB_MO_SCALE_DOWN16;FB_BLEND_256;FB_PRE_REFRACT_COLOR;FB_BLEND_16;FB_BLEND_64;FB_MIRROR;NODE_MIRROR;chara/chara_4/chara_4_;NODE_MIRROR_PRE_REFRACT;select_item;NODE_MIRROR_POST_REFRACT;NODE_MIRROR_PRE_REFRACT_BLEND;NODE_MIRROR_BLEND_EFFECT;NODE_MIRROR_EFFECT;NODE_MIRROR_EFFECT_NEAR;MIRROR_MAIN;MIRROR_EFFECT;MIRROR_BLEND_EFFECT_COLOR_CLEAR;MIRROR_BLEND_EFFECT_MERGE;MIRROR_COPY_PRE_REFRACT;MAIN_CLEAR_COLOR_BY_MIRROR;...
- **Callers:** FUN_710362c290
- **Callees:** FUN_71000001c0;FUN_71000338a0;FUN_710003a260;FUN_710003a3b0;FUN_710003aaa0;FUN_7103550630;FUN_7103553740;FUN_7103564800;FUN_71035b6710;FUN_710362bda0;FUN_71036302f0;FUN_7103856830;FUN_710385bfe0;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::memcmp;...
- **Files:** [decomp](../decompiled/FUN_710362c4a0__710362c4a0.c)  [cfg](../decompiled/FUN_710362c4a0__710362c4a0.mmd)
- **Clone hash:** `7deaa1d58ce986c1`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710362c4a0(long param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  undefined ***pppuVar7;
  undefined3 uVar8;
  undefined ***pppuVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  char *__s2;
  byte bVar15;
  undefined **ppuVar16;
  undefined1 uVar17;
  long lVar18;
  void *pvVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  undefined8 uVar27;
  undefined1 *puVar28;
  long lVar29;
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
// ... (2484 more lines)
```

## 6. `FUN_7100407e80`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100407e80`  (offset `0x407e80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100407e80(void)`
- **Size / BBs / Incoming:** 8156 bytes / 134 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** BG_F_VFX;BLEND_EFFECT;UI_FG_EFFECT_F;BG_M_VFX;EFFECT_NEAR_VFX;UI_FG_EFFECT_B;UI_FT_EFFECT_B;UI_FT_EFFECT_F;N2nn3pia3lan25LanMatchDestroySessionJobE;PRE_REFRACT;PRE_REFRACT_BLEND;POST_REFRACT;UI_FG_EFFECT_BB;select_item;BLEND_UI_EFFECT;POST_REFRACT_UI;VELOCITY_UI;EFFECT_NEAR_HD_VFX;BLEND_UI_EFFECT_3D;chara/chara_4/chara_4_;EFFECT_MAIN;BLEND_EFFECT_GLR;UI_REFRACT;UI_RENDERTEXTURE;EFFECT_MAIN_B;EFFECT_NEAR_VFX_F;DEPTH_MAIN;DB_BLEND_4;BLEND_EFFECT_FINE;FB_PRE_REFRACT_COLOR;BLEND_EFFECT_GLR_FINE;FB_UI_REFRACT_COLOR;...
- **Callees:** FUN_71000001c0;FUN_710055c860;FUN_710055cae0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook
- **Files:** [decomp](../decompiled/FUN_7100407e80__7100407e80.c)  [cfg](../decompiled/FUN_7100407e80__7100407e80.mmd)
- **Clone hash:** `78067a25089c5a39`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100407e80(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  void *pvVar1;
  ulong *puVar2;
  ulong uVar3;
  long ****pppplVar4;
  byte ****ppppbVar5;
  long ****pppplVar6;
  undefined7 *puVar7;
  undefined7 *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  byte local_e10 [16];
  undefined8 local_e00;
  char local_df8 [40];
  undefined8 local_dd0;
  long ****local_dc8;
  char local_dc0 [8];
  undefined8 local_db8;
  byte local_db0 [16];
  undefined8 local_da0;
  undefined8 local_d98;
  byte local_d90;
  undefined1 uStack_d8f;
  undefined6 uStack_d8e;
  undefined1 local_d88;
  undefined1 uStack_d87;
  undefined6 uStack_d86;
  void *local_d80;
  undefined8 local_d78;
  byte local_d70;
  undefined1 uStack_d6f;
  undefined4 uStack_d6e;
  undefined2 uStack_d6a;
// ... (2069 more lines)
```

## 7. `FUN_71021723e0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021723e0`  (offset `0x21723e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021723e0(void)`
- **Size / BBs / Incoming:** 13744 bytes / 25 bb / 1 incoming refs
- **Match values:** LAN
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

## 8. `FUN_7101f89310`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** LAN
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

## 9. `FUN_7102b5b9e0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b5b9e0`  (offset `0x2b5b9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b5b9e0(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined * param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 13460 bytes / 693 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** Misc_Brick;Misc_Donut;Static;Brick;Donut;Conveyor;ConveyorGrip;DangerZone;plate_side;Kirifuda;Pikmin;SuddenDeath;LandMisc_Island_Static;LandMisc_Ground_Static;LandMisc_Island_SuddenDeath;LandMisc_Ground_SuddenDeath;Island;Ground
- **Callers:** FUN_7102b4d850
- **Callees:** FUN_71000001c0;FUN_71003d7950;FUN_7101764000;FUN_71025f5870;FUN_710261f440;FUN_710262c8a0;FUN_7102b58580;FUN_7102b5ee80;FUN_7102b5f110;FUN_7102b6db30;FUN_7102b6eaf0;FUN_7102b6f1a0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::strlen;...
- **Files:** [decomp](../decompiled/FUN_7102b5b9e0__7102b5b9e0.c)  [cfg](../decompiled/FUN_7102b5b9e0__7102b5b9e0.mmd)
- **Clone hash:** `64312ead9937abee`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b5b9e0(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined *param_6,long ***param_7,long ***param_8)

{
  char *pcVar1;
  char *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  byte bVar5;
  short sVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
// ... (2908 more lines)
```

## 10. `FUN_7101f45620`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** LAN;lan
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

## 11. `FUN_7102b61c60`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b61c60`  (offset `0x2b61c60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b61c60(long * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined * param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3076 bytes / 144 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** Land_%s_%02d_%s;Island
- **Callers:** FUN_7102b6eaf0
- **Callees:** FUN_710176bcc0;FUN_7102b61160;FUN_7102b62870;FUN_7102b63800;FUN_7102b63970;FUN_7102b63e10;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102b61c60__7102b61c60.c)  [cfg](../decompiled/FUN_7102b61c60__7102b61c60.mmd)
- **Clone hash:** `cc8eb6ffba52f9cf`

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7102b61c60(long *param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined *param_6,long ***param_7,long ***param_8)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  long *****ppppplVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar15;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  undefined *puVar18;
  long ***ppplVar19;
  long lVar20;
  uint *puVar21;
  long ********pppppppplVar22;
  uint uVar23;
  void *pvVar24;
// ... (559 more lines)
```

## 12. `FUN_710283aad0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710283aad0`  (offset `0x283aad0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710283aad0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 24452 bytes / 1543 bb / 2 incoming refs
- **Match values:** lan
- **Strings touched:** landscape_loop_space_main_set;landscape_change_spacelight_main_set;landscape_loop_light_main_set;landscape_change_lightdark_main_set;eff_elec01;landscape_loop_dark_main_set;landscape_change_darkspace_main_set;main_joint
- **Callees:** FUN_7102840a60;FUN_7102840db0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_710283aad0__710283aad0.c)  [cfg](../decompiled/FUN_710283aad0__710283aad0.mmd)
- **Clone hash:** `9c075911826c06b4`

```c

void FUN_710283aad0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  void *__src;
  int iVar5;
  long *plVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  ulong uVar18;
  long ***ppplVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  char *pcVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
// ... (4467 more lines)
```

## 13. `FUN_7100124370`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124370`  (offset `0x124370`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124370(void)`
- **Size / BBs / Incoming:** 888 bytes / 66 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti;LanProcessHostMigrationJob::LanCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;FUN_71001a35c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124370__7100124370.c)  [cfg](../decompiled/FUN_7100124370__7100124370.mmd)
- **Clone hash:** `a04d6d66725f7d76`

```c

undefined8 FUN_7100124370(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  char *pcVar22;
  long *plVar23;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar23 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar18 = FUN_710011b3c0((long)plVar23);
  if (((uVar18 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
// ... (113 more lines)
```

## 14. `FUN_71021b12f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021b12f0`  (offset `0x21b12f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021b12f0(void)`
- **Size / BBs / Incoming:** 8180 bytes / 13 bb / 1 incoming refs
- **Match values:** LAN
- **Strings touched:** FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_COUNT;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_CHARGE_MAX_EFFECT_HANDLE;FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_START;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_WAIT_END;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_LANDING;FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_3;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_6;FIGHTER_PACKUN_HIT_DATA_JOINT_NECK_8;FIGHTER_PACKUN_HIT_DATA_JOINT_HEAD;FIGHTER_PACKUN_HIT_DATA_JOINT_SHOULDER_R2;FIGHTER_PACKUN_HIT_DATA_JOINT_SHOULDER_L2;FIGHTER_PACKUN_HIT_DATA_JOINT_ARM_R2;FIGHTER_PACKUN_HIT_DATA_JOINT_ARM_L2;FIGHTER_PACKUN_HIT_DATA_JOINT_WAIST;FIGHTER_PACKUN_HIT_DATA_JOINT_NUM;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_NONE;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_F;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_ESCAPE_B;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_GUARD;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_GROUND_JUMP;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_ESCAPE_AIR;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_AIR_JUMP_AERIAL;FIGHTER_PACKUN_SPECIAL_S_CANCEL_TYPE_TERM;FIGHTER_PACKUN_CLIFF_HANG_DATA_START;FIGHTER_PACKUN_CLIFF_HANG_DATA_SPECIAL_HI;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021b12f0__71021b12f0.c)  [cfg](../decompiled/FUN_71021b12f0__71021b12f0.mmd)
- **Clone hash:** `4c2064954563d8eb`

```c

void FUN_71021b12f0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_SPECIAL_S_CHARGE_MAX_EFFECT_HANDLE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_N_WAIT_END",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PACKUN_INSTANCE_WORK_ID_FLAG_SPECIAL_S_LANDING",
// ... (893 more lines)
```

## 15. `FUN_710226f500`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** LAN;lan
- **Strings touched:** backshield;is_enable_backshield;is_visible_backshield;is_force_visible_backshield;set_reflector;beetle;is_enable_capture_beetle;set_grab;boomerang;send_event_catch;set_assist_team_no;is_catch_area_hit_check;bossgalaga;is_enable_capture_bossgalaga;chicken;is_behind_fighter;is_front_fighter;clubshot;check_roll_up_area;curryshot;init_log_attack_info;is_preview_mode;diddypeanuts;DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL;dragoonset;calc_dragoonsight2;get_stage_dragoon_camera_rectangle;dragoonsight;set_dragoonsight_effect;get_rotation_with_calc_camera_direction;calc_dragoonsight;healball;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7102219310;FUN_7102235da0;FUN_7102239aa0;FUN_710223aa90;FUN_710223b0b0;FUN_710223c0c0;FUN_710223c740;FUN_710223d040;FUN_710223d940;FUN_710223ef10;FUN_710223ff20;FUN_7102242610;FUN_7102243740;FUN_71022490e0;FUN_710224bda0;FUN_71022505d0;...
- **Files:** [decomp](../decompiled/FUN_710226f500__710226f500.c)  [cfg](../decompiled/FUN_710226f500__710226f500.mmd)
- **Clone hash:** `355e9f5d7a84e54e`

```c

void FUN_710226f500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
// ... (2227 more lines)
```

## 16. `FUN_7101c35b80`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c35b80`  (offset `0x1c35b80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c35b80(undefined1[16] param_1, undefined1[16] param_2, ulong param_3, long param_4, long * param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 19320 bytes / 928 bb / 2 incoming refs
- **Match values:** lan
- **Strings touched:** set_final_area;trophy_loop;final_p%d;final_p8;set_final_pos_p%d;progress_on;lookback_on;progress_off;in_win;pop_p1;trophy_on;set_rep_final_p%d;blank_p%d;inout_title_prog;progress_delay_in;set_txt_title_prog;mel_tournament_chart_round_title_semifinal;out_win;in_win_left;set_dummy;mel_tournament_chart_round_title_final;out_win_left;mode_empty_03;mel_tournament_chart_round_title;vc_narration_round%d;effect_off;figter_name_%d;nam_chr2_%02d_%s;fighter_name_%d;set_txt_fighter_%d;set_txt_player;mel_tournament_cp_n;...
- **Callers:** FUN_710187d820;FUN_710187ea70
- **Callees:** FUN_71003a4ca0;FUN_710175dfc0;FUN_7101c33d10;FUN_7101c340e0;FUN_7101c344f0;FUN_71022df110;FUN_710234dae0;FUN_710234dc20;FUN_7102351c30;FUN_71023583c0;FUN_71023583d0;FUN_71023583e0;FUN_71024076d0;FUN_7103238a70;FUN_710323c4e0;FUN_710323cb80;...
- **Files:** [decomp](../decompiled/FUN_7101c35b80__7101c35b80.c)  [cfg](../decompiled/FUN_7101c35b80__7101c35b80.mmd)
- **Clone hash:** `a9fb3376f25e3790`

```c

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffffffffee50 */

void FUN_7101c35b80(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,long param_4,
                   long *param_5,long *********param_6,byte ****param_7,long ****param_8,
                   ulong param_9,undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  long *plVar2;
  byte ***pppbVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  byte **ppbVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  undefined1 *puVar21;
  ushort *puVar22;
  long *plVar23;
  long ***ppplVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
// ... (3708 more lines)
```

## 17. `FUN_7100121000`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100121000`  (offset `0x121000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100121000(void)`
- **Size / BBs / Incoming:** 460 bytes / 12 bb / 1 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100121000__7100121000.c)  [cfg](../decompiled/FUN_7100121000__7100121000.mmd)
- **Clone hash:** `9b892226a80e3997`

```c

undefined8 FUN_7100121000(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
    pcVar8 = FUN_71001429b0;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x6c) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x7d) == '\0' && (*(char *)(param_1 + 0x7e) == '\0')) &&
         (*(char *)(param_1 + 0x80) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x82) + 1, *(byte *)(param_1 + 0x82) = bVar2,
       lVar3 = DAT_71052adb38, 2 < bVar2)) {
      FUN_710011bb20(*(long *)(param_1 + 0x178));
// ... (34 more lines)
```

## 18. `FUN_7100120b00`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120b00`  (offset `0x120b00`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120b00(void)`
- **Size / BBs / Incoming:** 624 bytes / 12 bb / 1 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120b00__7100120b00.c)  [cfg](../decompiled/FUN_7100120b00__7100120b00.mmd)
- **Clone hash:** `49f2d19b7f2f65c7`

```c

undefined8 FUN_7100120b00(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    pcVar9 = FUN_71001429b0;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x6c);
    FUN_71000bcf30(piVar3,param_2);
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    if (*(int *)(param_1 + 0x6c) != aiStack_50[0]) {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
// ... (57 more lines)
```

## 19. `FUN_7101fc7f30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** LAN
- **Strings touched:** sv_animcmd;is_excute;frame;execute;frame_clear;wait_loop;wait_loop_sync_mot;wait_loop_clear;IT_JUST_FRAME;get_value_int;get_value_float;IS_RANDOM;IS_EXIST_ARTICLE;IS_GENERATABLE_ARTICLE;IS_FIGHTER_STATUS_KIND;IS_STATUS_KIND;IS_HAVE_ITEM_KIND;IS_MENU;ATK_POWER;ATK_NO_ATTACKER_LOG;ATTACK;ATTACK_IND;ATTACK_IGNORE_THROW;ATTACK_ABS;ATK_HIT_ABS;ATTACK_LEGACY;ATTACK_ABS_LEGACY;ATTACK_ABS_STRENGTH;ATTACK_FP;ATTACK_FP_REAC;ATTACK_FP_ATKW;ATTACK_FP_STRENGTH;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fc7f30__7101fc7f30.c)  [cfg](../decompiled/FUN_7101fc7f30__7101fc7f30.mmd)
- **Clone hash:** `55798d06d10f6e50`

```c

void FUN_7101fc7f30(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"sv_animcmd",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_excute",(long ****)FUN_7101fa3fc0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104290589,(long ****)FUN_7101fa3ff0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame",(long ****)FUN_7101fa4040,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"execute",(long ****)FUN_7101fa4180,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame_clear",(long ****)FUN_7101fa42f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104422f3e,(long ****)FUN_7101fa4310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop",(long ****)app::sv_animcmd::wait_loop,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_sync_mot",
                 (long ****)app::sv_animcmd::wait_loop_sync_mot,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_clear",(long ****)app::sv_animcmd::wait_loop_clear,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IT_JUST_FRAME",(long ****)FUN_7101fa4480,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_int",(long ****)FUN_7101fa46c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_float",(long ****)FUN_7101fa47a0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IS_RANDOM",(long ****)FUN_7101fa4880,ppppbVar1,in_x4,in_x5,in_x6
// ... (689 more lines)
```

## 20. `FUN_71001241f0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001241f0`  (offset `0x1241f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001241f0(void)`
- **Size / BBs / Incoming:** 372 bytes / 11 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHost;LanProcessHostMigrationJob::LanCheckMatchMakingClientHost
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001241f0__71001241f0.c)  [cfg](../decompiled/FUN_71001241f0__71001241f0.mmd)
- **Clone hash:** `8bd2c10579161019`

```c

undefined8 FUN_71001241f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    lVar4 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    FUN_71000b40e0((int *)(param_1 + 0x118));
    iVar1 = FUN_710011be40(lVar4);
    FUN_710011b2f0(aiStack_40,lVar4,(int *)(param_1 + 0x118),iVar1);
    if (aiStack_40[0] == 0) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        *(code **)(param_1 + 0x30) = FUN_71001246f0;
        pcVar3 = "LanProcessHostMigrationJob::LanCheckMatchMakingClientHost";
      }
      else {
        *(code **)(param_1 + 0x30) = FUN_7100124370;
        pcVar3 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHost";
      }
    }
// ... (17 more lines)
```

## 21. `FUN_71001254c0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001254c0`  (offset `0x1254c0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71001254c0(long param_1)`
- **Size / BBs / Incoming:** 352 bytes / 12 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti;LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_710011b3c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001254c0__71001254c0.c)  [cfg](../decompiled/FUN_71001254c0__71001254c0.mmd)
- **Clone hash:** `457cc3fee5eec062`

```c

ulong FUN_71001254c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  ulong uVar5;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if ((local_40[0] == local_50[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
LAB_7100125594:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar5 = 0x640000;
    uVar1 = FUN_710011b3c0((long)plVar4);
    if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
      uVar1 = 4;
      goto LAB_71001255b8;
    }
    lVar2 = (**(code **)(*plVar4 + 0xf0))(plVar4);
    if (lVar2 != -1) goto LAB_7100125594;
    if (*(char *)(param_1 + 0xc4) == '\0') {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
// ... (14 more lines)
```

## 22. `FUN_710011ddb0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011ddb0`  (offset `0x11ddb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011ddb0(void)`
- **Size / BBs / Incoming:** 232 bytes / 12 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanMatchJointSessionJob::WaitNextSessionId;LanMatchJointSessionJob::StartJoinMatchmakeSession;LanMatchJointSessionJob::StartRandomMatchmake;LanMatchJointSessionJob::SendInvitationAsCompanion;LanMatchJointSessionJob::SendAnswerToInvitation
- **Callees:** FUN_710013fd20
- **Files:** [decomp](../decompiled/FUN_710011ddb0__710011ddb0.c)  [cfg](../decompiled/FUN_710011ddb0__710011ddb0.mmd)
- **Clone hash:** `ca0aaf8d02543330`

```c

undefined8 FUN_710011ddb0(long param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_710013fd20(param_1);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
  *(code **)(param_1 + 0x30) = FUN_710011df00;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitNextSessionId";
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 - 9U < 2) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      *(code **)(param_1 + 0x30) = FUN_710011e0c0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendAnswerToInvitation";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710011e000;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchJointSessionJob::SendInvitationAsCompanion";
    }
  }
  else if (iVar1 == 8) {
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710011dfe0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJointSessionJob::StartRandomMatchmake";
  }
  else {
    if (iVar1 != 7) {
      return 0;
    }
    if (*(char *)(param_1 + 0xf4) == '\0') {
      return 0;
    }
// ... (8 more lines)
```

## 23. `FUN_710011cbb0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cbb0`  (offset `0x11cbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cbb0(void)`
- **Size / BBs / Incoming:** 372 bytes / 10 bb / 2 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** LanMatchJoinSessionJob::LeaveMatchmakeSession;nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitGetStationLocation
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cbb0__710011cbb0.c)  [cfg](../decompiled/FUN_710011cbb0__710011cbb0.mmd)
- **Clone hash:** `f8ca07f2e20fa266`

```c

undefined8 FUN_710011cbb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_30[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      aiStack_30[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4))
      ;
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
      *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_710011cd30;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0xa0))
              (aiStack_30,*(long **)(param_1 + 0x138),param_1 + 0x60,
// ... (20 more lines)
```

## 24. `FUN_71001246f0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001246f0`  (offset `0x1246f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001246f0(void)`
- **Size / BBs / Incoming:** 336 bytes / 11 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanCheckOldHostDisconnection;LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001246f0__71001246f0.c)  [cfg](../decompiled/FUN_71001246f0__71001246f0.mmd)
- **Clone hash:** `db091ba577b9e604`

```c

ulong FUN_71001246f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = FUN_710011b3c0((long)plVar5);
  if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      uVar4 = 0x640000;
      uVar1 = 4;
      goto LAB_7100124828;
    }
    FUN_710011b450(aiStack_40,(long)plVar5);
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
    uVar1 = 5;
  }
  else {
    lVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    if (lVar2 == -1) {
      uVar1 = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    }
// ... (13 more lines)
```

## 25. `FUN_7100120d70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120d70`  (offset `0x120d70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120d70(void)`
- **Size / BBs / Incoming:** 312 bytes / 9 bb / 3 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession;LanMatchRandomMatchmakeJob::RandomMatchmake
- **Callees:** FUN_71000bcf30;FUN_710011bb20;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120d70__7100120d70.c)  [cfg](../decompiled/FUN_7100120d70__7100120d70.mmd)
- **Clone hash:** `209567f7f38c390e`

```c

undefined8 FUN_7100120d70(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar3 = FUN_71001429b0;
    pcVar2 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x180)) {
        return 5;
      }
      pcVar3 = FUN_7100120290;
      pcVar2 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
    }
    else {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      FUN_710011bb20(*(long *)(param_1 + 0x178));
      pcVar3 = FUN_7100120eb0;
// ... (9 more lines)
```

## 26. `FUN_710011d5a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d5a0`  (offset `0x11d5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d5a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 10 bb / 1 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession;LanMatchJoinSessionJob::MeshCleanup
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d5a0__710011d5a0.c)  [cfg](../decompiled/FUN_710011d5a0__710011d5a0.mmd)
- **Clone hash:** `14e5bc55996e55b2`

```c

undefined8 FUN_710011d5a0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    pcVar8 = FUN_710013e970;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x120) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x11a) == '\0' && (*(char *)(param_1 + 0x11b) == '\0')) &&
         (*(char *)(param_1 + 0x11d) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x11f) + 1, *(byte *)(param_1 + 0x11f) = bVar2,
       lVar3 = DAT_71052adb38, 1 < bVar2)) {
      pcVar8 = FUN_710013f360;
// ... (24 more lines)
```

## 27. `FUN_71036468b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036468b0`  (offset `0x36468b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71036468b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2248 bytes / 95 bb / 1 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** mo_blur_;MO_PS_SUB_BLUR_;N2nn3pia3lan25LanMatchDestroySessionJobE;MO_PS_SUB_ACTOR_0;MO_PS_SUB_BLUR_0_0_0;NODE_POST_EFFECT
- **Callees:** FUN_71000001c0;FUN_71002c51f0;FUN_710355afd0;FUN_710355b6b0;FUN_71035a2780;FUN_710364e730;FUN_7103655da0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nu::VirtualFreeHook
- **Files:** [decomp](../decompiled/FUN_71036468b0__71036468b0.c)  [cfg](../decompiled/FUN_71036468b0__71036468b0.mmd)
- **Clone hash:** `c300e1377be2b358`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71036468b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  byte bVar6;
  undefined7 uVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  long ****pppplVar12;
  undefined8 *puVar13;
  void *pvVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 local_168;
  undefined7 uStack_160;
  long ***local_158;
  byte local_150;
  undefined7 uStack_14f;
  undefined1 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 local_128;
  undefined1 *local_120;
  byte local_118;
  undefined1 uStack_117;
  undefined6 uStack_116;
// ... (422 more lines)
```

## 28. `FUN_7100124840`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124840`  (offset `0x124840`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100124840(long param_1)`
- **Size / BBs / Incoming:** 872 bytes / 65 bb / 3 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti
- **Callees:** FUN_71000b40e0;FUN_71000bb680;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124840__7100124840.c)  [cfg](../decompiled/FUN_7100124840__7100124840.mmd)
- **Clone hash:** `54d6fe78c0df9b43`

```c

ulong FUN_7100124840(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar6 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar8 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x1a8)) {
    uVar5 = 0x640000;
    if (*(char *)(param_1 + 0xc4) == '\0') {
LAB_7100124ba0:
      uVar6 = 4;
      goto LAB_7100124b88;
    }
    if ((*(char *)(param_1 + 0xb3) == -3) && (cVar1 = *(char *)(param_1 + 0xf0), cVar1 != '\x01')) {
      if (cVar1 != '\x02') {
        cVar2 = *(char *)(param_1 + 0xf1);
      }
// ... (94 more lines)
```

## 29. `FUN_710011d3f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d3f0`  (offset `0x11d3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d3f0(void)`
- **Size / BBs / Incoming:** 428 bytes / 8 bb / 3 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::MeshCleanup;LanMatchJoinSessionJob::JoinMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d3f0__710011d3f0.c)  [cfg](../decompiled/FUN_710011d3f0__710011d3f0.mmd)
- **Clone hash:** `69fce2f742ec4897`

```c

undefined8 FUN_710011d3f0(long param_1)

{
  int iVar1;
  int aiStack_b8 [4];
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_a8[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 8;
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    aiStack_a8[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)aiStack_b8);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_a8);
    *(code **)(param_1 + 0x30) = FUN_710013f360;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::MeshCleanup";
    return 0;
  }
  if (*(ulong *)(param_1 + 0x140) < *(ulong *)(DAT_71052ac580 + 0x30)) {
    FUN_710015fd60((undefined8 *)aiStack_a8);
    FUN_710015fea0(param_1 + 0x90,(long)aiStack_a8);
    aiStack_b8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b8 | 4));
// ... (13 more lines)
```

## 30. `FUN_7100123b90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123b90`  (offset `0x123b90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123b90(void)`
- **Size / BBs / Incoming:** 188 bytes / 1 bb / 1 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::LanMakeHostCandidateRanking;LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate
- **Callees:** FUN_71000bb680;FUN_7100193110
- **Files:** [decomp](../decompiled/FUN_7100123b90__7100123b90.c)  [cfg](../decompiled/FUN_7100123b90__7100123b90.mmd)
- **Clone hash:** `4b79ed544d745d91`

```c

undefined8 FUN_7100123b90(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  long lVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  
  iVar1 = (param_3 & 0xffff) * 3000 + 0x9c4;
  *(int *)(param_1 + 0x60) = iVar1;
  lVar4 = DAT_71052ac580;
  plVar7 = FUN_71000bb680();
  *(ulong *)(param_1 + 0x158) = *(long *)(lVar4 + 0x30) + *plVar7 * (ulong)(uint)(iVar1 * 2);
  uVar6 = FUN_7100193110(DAT_71052adfc0);
  bVar5 = (param_2 & 1) == 0;
  pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfoOnMultiCandidate";
  if (bVar5) {
    pcVar2 = "LanProcessHostMigrationJob::LanMakeHostCandidateRanking";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  pcVar3 = FUN_7100123c50;
  if (bVar5) {
    pcVar3 = FUN_7100123cb0;
  }
  *(undefined1 *)(param_1 + 0x86) = uVar6;
  *(byte *)(param_1 + 0x1a0) = param_2 & 1;
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 1;
}


```

## 31. `FUN_7100124030`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124030`  (offset `0x124030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124030(void)`
- **Size / BBs / Incoming:** 444 bytes / 25 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanGetMatchMakingClientHost;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124030__7100124030.c)  [cfg](../decompiled/FUN_7100124030__7100124030.mmd)
- **Clone hash:** `504c54f9c288daa6`

```c

undefined8 FUN_7100124030(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if ((aiStack_38[0] == aiStack_48[0]) ||
     (*(ulong *)(param_1 + 0x58) <= *(ulong *)(DAT_71052ac580 + 0x30))) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((((((*(char *)(param_1 + 0xb3) == -3) && (*(char *)(param_1 + 0xf0) != '\x01')) &&
              (*(char *)(param_1 + 0xf1) != '\x01')) &&
             ((*(char *)(param_1 + 0xf2) != '\x01' && (*(char *)(param_1 + 0xf3) != '\x01')))) &&
            ((*(char *)(param_1 + 0xf4) != '\x01' &&
             ((*(char *)(param_1 + 0xf5) != '\x01' && (*(char *)(param_1 + 0xf6) != '\x01')))))) &&
           (*(char *)(param_1 + 0xf7) != '\x01')) &&
          ((((*(char *)(param_1 + 0xf8) != '\x01' && (*(char *)(param_1 + 0xf9) != '\x01')) &&
            (*(char *)(param_1 + 0xfa) != '\x01')) &&
           (((*(char *)(param_1 + 0xfb) != '\x01' && (*(char *)(param_1 + 0xfc) != '\x01')) &&
            ((*(char *)(param_1 + 0xfd) != '\x01' &&
             ((*(char *)(param_1 + 0xfe) != '\x01' && (*(char *)(param_1 + 0xff) != '\x01'))))))))))
  {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x148)) {
      return 5;
    }
    pcVar1 = FUN_71001241f0;
    pcVar2 = "LanProcessHostMigrationJob::LanGetMatchMakingClientHost";
  }
  else {
// ... (9 more lines)
```

## 32. `FUN_710011d1c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d1c0`  (offset `0x11d1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011d1c0(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 548 bytes / 10 bb / 1 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::MeshCleanup;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d1c0__710011d1c0.c)  [cfg](../decompiled/FUN_710011d1c0__710011d1c0.mmd)
- **Clone hash:** `9ee4f8b2e06d4c6d`

```c

undefined8 FUN_710011d1c0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    local_48[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_71000bcf30((int *)(param_1 + 0x120),local_48);
    pcVar9 = FUN_710013e970;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x120);
    FUN_71000bcf30(piVar3,param_2);
    local_48[0] = 0x6838;
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
    if (*(int *)(param_1 + 0x120) != local_48[0]) {
      local_48[0] = 0x6c3d;
// ... (49 more lines)
```

## 33. `FUN_7100123910`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123910`  (offset `0x123910`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100123910(long param_1, uint param_2, undefined1 param_3)`
- **Size / BBs / Incoming:** 108 bytes / 4 bb / 1 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::LanCleanupOldHostInfo;LanProcessHostMigrationJob::LanDecideNextHost
- **Callees:** FUN_7100193110
- **Files:** [decomp](../decompiled/FUN_7100123910__7100123910.c)  [cfg](../decompiled/FUN_7100123910__7100123910.mmd)
- **Clone hash:** `e2ddda5cb4bd97db`

```c

undefined8 FUN_7100123910(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  code *pcVar3;
  
  if ((param_2 & 1) == 0) {
    pcVar3 = FUN_7100123a30;
    pcVar2 = "LanProcessHostMigrationJob::LanDecideNextHost";
  }
  else {
    uVar1 = FUN_7100193110(DAT_71052adfc0);
    *(undefined1 *)(param_1 + 0x86) = uVar1;
    *(undefined1 *)(param_1 + 0x90) = param_3;
    pcVar3 = FUN_7100123980;
    pcVar2 = "LanProcessHostMigrationJob::LanCleanupOldHostInfo";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 1;
}


```

## 34. `FUN_7100123a30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123a30`  (offset `0x123a30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123a30(void)`
- **Size / BBs / Incoming:** 212 bytes / 7 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHost;LanProcessHostMigrationJob::HostMigrationFailure
- **Callees:** FUN_7100190a90;FUN_7100193110;FUN_71001a1780
- **Files:** [decomp](../decompiled/FUN_7100123a30__7100123a30.c)  [cfg](../decompiled/FUN_7100123a30__7100123a30.mmd)
- **Clone hash:** `e9be8e6812c45d06`

```c

undefined8 FUN_7100123a30(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_1 + 0x110) = 2;
  *(undefined1 *)(param_1 + 0x90) = 0xfd;
  uVar9 = 0;
  do {
    bVar5 = FUN_7100193110(DAT_71052adfc0);
    if ((uint)bVar5 != (uVar9 & 0xff)) {
      bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar9);
      if (bVar6) {
        *(byte *)(param_1 + 0x90) = (byte)uVar9;
        break;
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x20);
  uVar8 = FUN_71001a1780(param_1);
  iVar7 = (int)uVar8;
  pcVar1 = FUN_71001a1d80;
  pcVar4 = "LanProcessHostMigrationJob::HostMigrationFailure";
  if (iVar7 == 2) {
    pcVar1 = FUN_71001a2310;
    pcVar4 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
  }
  pcVar2 = FUN_7100123b10;
  if (iVar7 != 1) {
    pcVar2 = pcVar1;
  }
// ... (10 more lines)
```

## 35. `FUN_71035b9d00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035b9d00`  (offset `0x35b9d00`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71035b9d00(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7032 bytes / 421 bb / 4 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** N2nn3pia3lan25LanMatchDestroySessionJobE;ink_color_set;inkMesh_;Position0;ink_color_uav_dbg_name
- **Callers:** FUN_71025ea210;FUN_71025ec330;FUN_71025ece30
- **Callees:** nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance;FUN_71002c51f0;FUN_710356bf30;FUN_710356bff0;FUN_710359c770;FUN_71035bd730;FUN_71035bd910;FUN_71035bdda0;FUN_7103662550;FUN_71037c3a70;FUN_71037d1660;FUN_71037d1a90;FUN_71037db830;FUN_71038a9ca0;FUN_71038ac560;FUN_71038b4780;...
- **Files:** [decomp](../decompiled/FUN_71035b9d00__71035b9d00.c)  [cfg](../decompiled/FUN_71035b9d00__71035b9d00.mmd)
- **Clone hash:** `062dd0ca750db444`

```c

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_71035b9d00(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  void *pvVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  long ****pppplVar27;
  uint *puVar28;
  byte ****ppppbVar29;
  byte ****ppppbVar30;
  long lVar31;
  long lVar32;
// ... (1440 more lines)
```

## 36. `FUN_7102087180`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102087180`  (offset `0x2087180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102087180(long param_1)`
- **Size / BBs / Incoming:** 1344 bytes / 4 bb / 2 incoming refs
- **Match values:** lan
- **Strings touched:** SoundModule;set_position_sub;play_se;play_se_no3d;play_se_pos;play_status_se;stop_status_se;play_sequence;set_play_hit_se_flag;get_play_hit_se_flag;set_no_hit_se;get_no_hit_se;play_hit_se;play_damage_se;play_step;play_step_flippable;play_landing_se;play_down_se;play_fly_voice;set_se_vol;TRANS_A_JUMP_AERIAL;get_se_vol;set_se_vol_db;gauge_parts_on;get_se_vol_db;set_auto_se_pitch;get_auto_se_pitch;set_se_pitch_cent;set_se_pitch_ratio;set_se_pitch_status;set_se_pitch_status_handle;set_continue_se_at_game_finish;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102087180__7102087180.c)  [cfg](../decompiled/FUN_7102087180__7102087180.mmd)
- **Clone hash:** `f7c4f90e9471f221`

```c

void FUN_7102087180(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SoundModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_position_sub",(long ****)FUN_7102081d40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se",(long ****)FUN_7102082070,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_no3d",(long ****)FUN_71020824c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_pos",(long ****)FUN_7102082760,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_status_se",(long ****)FUN_7102082c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"stop_status_se",(long ****)FUN_7102082f80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_sequence",(long ****)FUN_7102083030,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_play_hit_se_flag",(long ****)FUN_71020832a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_play_hit_se_flag",(long ****)FUN_7102083410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_no_hit_se",(long ****)FUN_71020834e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_hit_se",(long ****)FUN_7102083650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_hit_se",(long ****)FUN_7102083720,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_damage_se",(long ****)FUN_7102083990,ppppbVar1,in_x4,in_x5,
// ... (87 more lines)
```

## 37. `FUN_710011cd30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cd30`  (offset `0x11cd30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cd30(void)`
- **Size / BBs / Incoming:** 248 bytes / 7 bb / 5 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitLeaveMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cd30__710011cd30.c)  [cfg](../decompiled/FUN_710011cd30__710011cd30.mmd)
- **Clone hash:** `1e9e7b61a8666ed5`

```c

undefined8 FUN_710011cd30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x60))
              (aiStack_38,*(long **)(param_1 + 0x138),param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_710011d750;
      pcVar3 = "LanMatchJoinSessionJob::WaitLeaveMatchmakeSession";
    }
    else {
      FUN_7100149270(DAT_71052adb38,0);
      pcVar4 = FUN_710013e970;
      pcVar3 = "LanMatchJoinSessionJob::CompleteFailure";
    }
    uVar2 = 5;
    *(code **)(param_1 + 0x30) = pcVar4;
// ... (6 more lines)
```

## 38. `FUN_7102bc3a70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bc3a70`  (offset `0x2bc3a70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bc3a70(undefined8 param_1, long param_2, undefined8 param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 2156 bytes / 108 bb / 1 incoming refs
- **Match values:** lan
- **Strings touched:** chara_land;light00;reflection_cubemap;stage_land
- **Callees:** FUN_7100532bc0;FUN_710067de90;FUN_71025dd540;FUN_71025e9d50;FUN_71025f7350;FUN_71025f74f0;FUN_7102633800;FUN_7102633a10;FUN_7102633b90;FUN_7102bc4300;FUN_7102bc49e0;FUN_7102bc64c0;FUN_7102bca9f0;FUN_7102bcae60;FUN_7102bcce20;FUN_7102bcde30;...
- **Files:** [decomp](../decompiled/FUN_7102bc3a70__7102bc3a70.c)  [cfg](../decompiled/FUN_7102bc3a70__7102bc3a70.mmd)
- **Clone hash:** `dd57d148cd0ef5e5`

```c

void FUN_7102bc3a70(undefined8 param_1,long param_2,undefined8 param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
// ... (365 more lines)
```

## 39. `FUN_710011cf50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cf50`  (offset `0x11cf50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cf50(void)`
- **Size / BBs / Incoming:** 388 bytes / 9 bb / 1 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** select_item;LanMatchJoinSessionJob::LeaveMesh;lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitRequestSessionInfo
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cf50__710011cf50.c)  [cfg](../decompiled/FUN_710011cf50__710011cf50.mmd)
- **Clone hash:** `99cc8f442106f6e6`

```c

void FUN_710011cf50(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(int *)(param_1 + 0x60) == 1) {
    aiStack_40[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    *(code **)(param_1 + 0x30) = FUN_710013f090;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJoinSessionJob::LeaveMesh";
  }
  else {
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      aiStack_40[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      *(code **)(param_1 + 0x30) = FUN_710013e970;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "lan::LanMatchJoinSessionJob::CompleteFailure";
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x138) + 0xb0))
                (aiStack_40,*(long **)(param_1 + 0x138),(int *)(param_1 + 0x60),
// ... (24 more lines)
```

## 40. `FUN_7102b61b10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b61b10`  (offset `0x2b61b10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b61b10(long * param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 332 bytes / 1 bb / 1 incoming refs
- **Match values:** Lan
- **Strings touched:** %s_%s;Misc_DonutLanding;stc_%s_set;plate_side
- **Callers:** FUN_7102b6cdd0
- **Callees:** FUN_710176bcc0;FUN_7102b61160;FUN_7102b63c80
- **Files:** [decomp](../decompiled/FUN_7102b61b10__7102b61b10.c)  [cfg](../decompiled/FUN_7102b61b10__7102b61b10.mmd)
- **Clone hash:** `f69afd8787add2ad`

```c

void FUN_7102b61b10(long *param_1,undefined8 param_2)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char *pcVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  long ***in_x6;
  long ***in_x7;
  int local_1b8;
  undefined1 local_1b4;
  int local_174;
  undefined1 local_170;
  int local_130;
  undefined1 local_12c;
  int local_ec;
  undefined1 local_e8;
  long ********local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  pcVar1 = "Misc_DonutLanding";
  local_1b8 = 0;
  local_1b4 = 0;
  local_174 = 0;
  local_170 = 0;
  local_130 = 0;
  local_12c = 0;
  local_ec = 0;
  local_e8 = 0;
  FUN_710176bcc0((uint *)&local_a8,param_2,"%s_%s","Misc_DonutLanding",&DAT_710427ec1e,in_x5,in_x6,
                 in_x7);
  FUN_7102b63c80(&local_1b8,"stc_%s_set");
  FUN_710176bcc0((uint *)&local_a8,extraout_x1,"%s_%s","Misc_DonutLanding",&DAT_7104431287,in_x5,
                 in_x6,in_x7);
  FUN_7102b63c80(&local_174,"stc_%s_set");
// ... (15 more lines)
```

## 41. `FUN_7100125030`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125030`  (offset `0x125030`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125030(void)`
- **Size / BBs / Incoming:** 312 bytes / 6 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation
- **Callees:** FUN_71000b40e0;FUN_710011b2f0;FUN_710011be40;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125030__7100125030.c)  [cfg](../decompiled/FUN_7100125030__7100125030.mmd)
- **Clone hash:** `c9ca13259b6ccc92`

```c

undefined8 FUN_7100125030(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 9;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if (*(ulong *)(param_1 + 0x1b0) <= *(ulong *)(DAT_71052ac580 + 0x30)) {
      lVar5 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((int *)(param_1 + 0x118));
      iVar3 = FUN_710011be40(lVar5);
      FUN_710011b2f0(aiStack_40,lVar5,(int *)(param_1 + 0x118),iVar3);
      pcVar1 = "LanProcessHostMigrationJob::LanWaitMatchMakingClientHostLastConfirmation";
      pcVar2 = FUN_7100125170;
      if (aiStack_40[0] != 0) {
        pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
        pcVar2 = FUN_71001a1d80;
      }
      *(code **)(param_1 + 0x30) = pcVar2;
      *(undefined8 *)(param_1 + 0x38) = 0;
// ... (7 more lines)
```

## 42. `FUN_7100125170`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100125170`  (offset `0x125170`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100125170(void)`
- **Size / BBs / Incoming:** 552 bytes / 18 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanWaitSendUpdateSessionMessage
- **Callees:** FUN_71000b40e0;FUN_7100116f40;FUN_7100117050;FUN_71001170c0;FUN_710011b3c0;FUN_710011b450;FUN_7100128230;FUN_7100161fb0;FUN_7100192e90;FUN_7100193560;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100125170__7100125170.c)  [cfg](../decompiled/FUN_7100125170__7100125170.mmd)
- **Clone hash:** `8779b550a8917592`

```c

undefined8 FUN_7100125170(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  char *pcVar10;
  long *plVar11;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar11 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar3 = FUN_710011b3c0((long)plVar11);
  if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_710011b450(aiStack_40,(long)plVar11);
    uVar4 = 5;
  }
  else {
    lVar5 = (**(code **)(*plVar11 + 0xf0))(plVar11);
    if (lVar5 == -1) {
LAB_7100125280:
      FUN_7100116f40();
// ... (38 more lines)
```

## 43. `FUN_7100120700`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120700`  (offset `0x120700`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120700(void)`
- **Size / BBs / Incoming:** 324 bytes / 5 bb / 2 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120700__7100120700.c)  [cfg](../decompiled/FUN_7100120700__7100120700.mmd)
- **Clone hash:** `002ed3de86477b88`

```c

undefined8 FUN_7100120700(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_38);
    param_1[6] = (long)FUN_71001429b0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    return 0;
  }
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar2 + 0x70))
            (aiStack_38,plVar2,param_1 + 0x22,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (aiStack_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 0x6c));
    FUN_71000b41f0(puVar3,aiStack_48);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  param_1[8] = (long)"LanMatchRandomMatchmakeJob::WaitUnregisterGathering";
  param_1[6] = (long)FUN_71001211d0;
// ... (4 more lines)
```

## 44. `FUN_7102bbfe00`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bbfe00`  (offset `0x2bbfe00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bbfe00(long * * * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 15468 bytes / 868 bb / 1 incoming refs
- **Match values:** lan
- **Strings touched:** DKN0000;S23_paper_land_dokan;s23_paper_sky_ashiba;s23_paper_sky_ashiba_l;chara_sky
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7100523f10;FUN_7100525010;FUN_7100532bc0;FUN_7101378af0;FUN_7101764000;FUN_7102405040;FUN_71025e9d50;FUN_71025ee450;FUN_71025f4d80;FUN_71025f7350;FUN_710260fdd0;FUN_710262cfa0;FUN_7102633800;FUN_7102633a10;...
- **Files:** [decomp](../decompiled/FUN_7102bbfe00__7102bbfe00.c)  [cfg](../decompiled/FUN_7102bbfe00__7102bbfe00.mmd)
- **Clone hash:** `4d9bc65e52eaf31e`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102bbfe00(long ***param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long lVar1;
  char cVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long ***ppplVar17;
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
// ... (2878 more lines)
```

## 45. `FUN_71001209c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001209c0`  (offset `0x1209c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001209c0(void)`
- **Size / BBs / Incoming:** 316 bytes / 10 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanMatchRandomMatchmakeJob::LeaveMesh;LanMatchRandomMatchmakeJob::RandomMatchmake;LanMatchRandomMatchmakeJob::CompleteProcess
- **Callees:** FUN_71000bcf30;FUN_710011beb0;FUN_7100150b70;FUN_7100191bb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001209c0__71001209c0.c)  [cfg](../decompiled/FUN_71001209c0__71001209c0.mmd)
- **Clone hash:** `95b97a80d84ee27e`

```c

undefined8 FUN_71001209c0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x178) + 0xb8))();
  if ((uVar4 & 1) == 0) {
    return 5;
  }
  if (*(int *)(param_1 + 0x110) == 3) {
    uVar3 = FUN_7100191bb0(DAT_71052adfc0);
    if ((uVar3 & 0xffff) < 3) {
      uVar3 = FUN_7100191bb0(DAT_71052adfc0);
      lVar2 = DAT_71052adb38;
      if ((uVar3 & 0xffff) != 0) {
        puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
        FUN_7100150b70((long *)*puVar1);
        (**(code **)(**(long **)(lVar2 + 8) + 0x28))();
        FUN_710011beb0(*(long *)(param_1 + 0x178),*(undefined4 *)(param_1 + 100));
        pcVar6 = FUN_7100120290;
        pcVar5 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
        goto LAB_7100120ae0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x7d) = 1;
    }
    aiStack_38[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (16 more lines)
```

## 46. `FUN_7102b63370`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b63370`  (offset `0x2b63370`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b63370(long param_1, uint * param_2, long param_3, uint param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1168 bytes / 48 bb / 3 incoming refs
- **Match values:** lan;Lan
- **Strings touched:** Island;Ground;Land_%s_%02d_%s
- **Callers:** FUN_7102b60190
- **Callees:** FUN_7100492060;FUN_710176bcc0;FUN_7102b63800;FUN_7102b63970;FUN_710353e380;FUN_710353f5a0;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_7102b63370__7102b63370.c)  [cfg](../decompiled/FUN_7102b63370__7102b63370.mmd)
- **Clone hash:** `8b59ba5bccff1e45`

```c

void FUN_7102b63370(long param_1,uint *param_2,long param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  undefined8 extraout_x1;
  uint *extraout_x1_00;
  uint *extraout_x1_01;
  uint *extraout_x1_02;
  uint *extraout_x1_03;
  uint *puVar11;
  uint *extraout_x1_04;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  int local_140;
// ... (193 more lines)
```

## 47. `FUN_710011c8d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011c8d0`  (offset `0x11c8d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011c8d0(void)`
- **Size / BBs / Incoming:** 432 bytes / 12 bb / 3 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitJoinMatchmake
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011c8d0__710011c8d0.c)  [cfg](../decompiled/FUN_710011c8d0__710011c8d0.mmd)
- **Clone hash:** `ec1c156c409f7dcd`

```c

undefined8 FUN_710011c8d0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar3 = aiStack_80;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_40);
    uVar2 = 0;
    param_1[6] = (long)FUN_710013e970;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    puVar4 = (undefined4 *)param_1[0xb];
    if ((puVar4 == (undefined4 *)0x0) || (*(char *)(puVar4 + 10) == '\0')) {
      if ((int)param_1[0x29] == 0) {
        aiStack_40[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        aiStack_70[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
        (**(code **)(*(long *)param_1[0x27] + 0x50))
                  (aiStack_70,(long *)param_1[0x27],param_1 + 0xc,
// ... (35 more lines)
```

## 48. `FUN_7100123c50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100123c50`  (offset `0x123c50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100123c50(void)`
- **Size / BBs / Incoming:** 96 bytes / 1 bb / 2 incoming refs
- **Match values:** Lan
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanSendRankDecision
- **Files:** [decomp](../decompiled/FUN_7100123c50__7100123c50.c)  [cfg](../decompiled/FUN_7100123c50__7100123c50.mmd)
- **Clone hash:** `97c1cabf0692c4fd`

```c

undefined8 FUN_7100123c50(long *param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = (**(code **)(*param_1 + 0x30))();
  bVar3 = (uVar4 & 1) == 0;
  pcVar1 = "LanProcessHostMigrationJob::LanSendRankDecision";
  if (bVar3) {
    pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  param_1[8] = (long)pcVar1;
  pcVar2 = FUN_7100123d30;
  if (bVar3) {
    pcVar2 = FUN_71001a1d80;
  }
  param_1[6] = (long)pcVar2;
  param_1[7] = 0;
  return 0;
}


```

## 49. `FUN_710011f630`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f630`  (offset `0x11f630`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011f630(long param_1)`
- **Size / BBs / Incoming:** 304 bytes / 5 bb / 2 incoming refs
- **Match values:** Lan;lan
- **Strings touched:** nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure;LanMatchCreateSessionJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011f630__710011f630.c)  [cfg](../decompiled/FUN_710011f630__710011f630.mmd)
- **Clone hash:** `365d35b30722a88b`

```c

undefined8 FUN_710011f630(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int aiStack_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    local_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_71000bcf30((int *)(param_1 + 0xa0),local_38);
    *(code **)(param_1 + 0x30) = FUN_710013d590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure";
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))
            (local_38,*(long **)(param_1 + 0xb0),param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (local_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 0xa0));
    FUN_71000b41f0(puVar2,aiStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::WaitUnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f760;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}
// ... (1 more lines)
```

## 50. `FUN_7101a87e50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a87e50`  (offset `0x1a87e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a87e50(long param_1, uint param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1144 bytes / 34 bb / 1 incoming refs
- **Match values:** lan
- **Strings touched:** bg_col_01;bg_col_00;set_txt_num;mnu_record_fighters_records_%02d;set_txt_unit_count;mnu_record_fighters_records_n;set_txt_unit_percent;mnu_record_fighters_percent_decimal;mnu_record_fighters_count_decimal;mnu_record_fighters_percent;unit_percent;mnu_record_fighters_count;unit_count;set_txt_unit_time;mnu_record_fighters_time;unit_time;set_txt_unit_meter;mnu_record_fighters_meter;unit_meter;set_txt_unit_meter_00;mnu_record_fighters_rank;lank_middle;lank_hi;lank_low;mnu_record_fighters_no_rank_bracket
- **Callees:** FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710377a280;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a87e50__7101a87e50.c)  [cfg](../decompiled/FUN_7101a87e50__7101a87e50.mmd)
- **Clone hash:** `621a00f145b21bad`

```c

void FUN_7101a87e50(long param_1,uint param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x140);
  uVar7 = (*(long *)(*(long *)(param_1 + 8) + 0x148) - lVar4 >> 2) * -0x3333333333333333;
  uVar9 = (ulong)(int)param_2;
  if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pcVar5 = "bg_col_00";
  if ((param_2 & 1) != 0) {
    pcVar5 = "bg_col_01";
  }
  lVar3 = param_3;
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar5);
  FUN_7103776910(&local_50,param_3,(long ****)"set_txt_num",lVar3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar8 = (uint *)(lVar4 + uVar9 * 0x14);
  uVar7 = (ulong)*puVar8;
  FUN_710377a120((long)&local_50,"mnu_record_fighters_records_%02d",uVar7,param_4,param_5,param_6,
                 param_7,param_8);
  switch(puVar8[1]) {
  case 0:
// ... (125 more lines)
```

